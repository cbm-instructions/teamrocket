/*
Reaction game
*/
#include <Adafruit_NeoPixel.h>

// Arduino pins
#define BUTTON_BLUE 4
#define BUTTON_GREEN 2
#define BUTTON_RED 12
#define BUTTON_SPIRAL_LEFT 7
#define BUTTON_SPIRAL_RIGHT 8
#define BUTTON_START 11
#define BUTTON_YELLOW 3
#define LED_STRIP 13
#define LIGHT_SENSOR_LEFT 5
#define LIGHT_SENSOR_RIGHT 6
#define MOTOR_LEFT 9
#define MOTOR_RIGHT 10

// constants
#define LED_COUNT 66
#define MAX_LEVELS 7                 // amount of levels per game round (one level equals one colored button to be pressed)
#define MIN_REACTION_TIME 1000       // lowest reaction time possible (in ms)
#define REACTION_TIME_REDUCTION 500  // reduces the reaction time given after each successful level completion (in ms)
#define STARTING_REACTION_TIME 3000  // starting reaction time for the first level (in ms)

// variables
bool debug;
bool game_over;
bool game_started;
bool game_won;
int pressed_button;
unsigned long reaction_time;

// arrays
int order_array[MAX_LEVELS];

// functions
void initiateGameOver();
void initiateGameWin();
void ledLoseSequence();
void ledOff();
void rainbow(unsigned int wait);
void setColor(uint32_t color);
void spinMotorLeft();
void spinMotorRight();
void startGame();
void waitButtonPress(unsigned int current_level);

// declare NeoPixel strip object
Adafruit_NeoPixel strip(LED_COUNT, LED_STRIP, NEO_GRB + NEO_KHZ800);

// the setup function runs once when you press reset or power the board
void setup() {

  Serial.begin(9600);

  // default mode when no game has been played
  debug = true;
  game_started = false;

  // LED strip
  strip.begin();  // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();
  strip.setBrightness(255);  // max = 255

  // initialize digital pins
  pinMode(BUTTON_BLUE, INPUT_PULLUP);
  pinMode(BUTTON_GREEN, INPUT_PULLUP);
  pinMode(BUTTON_RED, INPUT_PULLUP);
  pinMode(BUTTON_SPIRAL_LEFT, INPUT_PULLUP);
  pinMode(BUTTON_SPIRAL_RIGHT, INPUT_PULLUP);
  pinMode(BUTTON_START, INPUT_PULLUP);
  pinMode(BUTTON_YELLOW, INPUT_PULLUP);
  pinMode(LED_STRIP, OUTPUT);
  pinMode(LIGHT_SENSOR_LEFT, INPUT);
  pinMode(LIGHT_SENSOR_RIGHT, INPUT);
  pinMode(MOTOR_LEFT, OUTPUT);
  pinMode(MOTOR_RIGHT, OUTPUT);

  // set random seed
  randomSeed(analogRead(0));
}

// the loop function runs over and over again forever
void loop() {
  // game start
  if (!game_started && digitalRead(BUTTON_START) == LOW) {
    ledOff();
    startGame();
  } else {
    setColor(strip.Color(255, 255, 255));  // white
  }

  if (game_started) {
    // each level
    for (int current_level = 0; current_level < MAX_LEVELS; current_level++) {
      if (debug) {
        Serial.print("Reaction time for current level ");
        Serial.print(current_level);
        Serial.print(": ");
        Serial.print(reaction_time / 1000);
        Serial.println(" seconds.");
      }
      delay(1000); // delay each color display
      // activate LED strip to match color that needs to be pressed
      switch (order_array[current_level]) {
        case 1:
          if (debug) {
            Serial.println("Press the blue button.");
          }
          setColor(strip.Color(0, 0, 255));  // blue
          break;
        case 2:
          if (debug) {
            Serial.println("Press the green button.");
          }
          setColor(strip.Color(0, 255, 0));  // green
          break;
        case 3:
          if (debug) {
            Serial.println("Press the red button.");
          }
          setColor(strip.Color(255, 0, 0));  // red
          break;
        case 4:
          if (debug) {
            Serial.println("Press the yellow button.");
          }
          setColor(strip.Color(255, 165, 0));  // yellow
          break;
      }
      waitButtonPress(current_level);
      // when game over or no button pressed in time
      if (game_over || pressed_button == -1) {
        initiateGameOver();
        break;
      }
    }
    // game win
    if (!game_over) {
      initiateGameWin();
    }
  }
}

// game over
void initiateGameOver() {
  game_over = true;
  game_started = false;
  // LEDs flash 5 times
  for (int i = 0; i < 5; i++) {
    setColor(strip.Color(255, 255, 255));  // white
    delay(500);
    ledOff();
    delay(500);
  }
  if (debug) {
    Serial.print("Start next game, please.");
  }
}

// game win
void initiateGameWin() {
  game_won = true;
  game_started = false;
  while (game_won) {
    if (debug) {
      Serial.println("Choose snack, please.");
    }
    // LED win sequence and snack choice
    rainbow(10);
  }
  if (debug) {
    Serial.print("Start next game, please.");
  }
}

// turns off LED strip
void ledOff() {
  strip.clear();
  strip.show();
}

// rainbow cycle along the whole strip while snack selection is made or game is restarted
void rainbow(unsigned int wait) {
  for (long firstPixelHue = 0; firstPixelHue < 5 * 65536; firstPixelHue += 256) {
    if (digitalRead(BUTTON_SPIRAL_LEFT) == LOW) {
      if (debug) {
        Serial.println("Left snack chosen.");
      }
      game_won = false;
      spinMotorLeft();
      break;
    } else if (digitalRead(BUTTON_SPIRAL_RIGHT) == LOW) {
      if (debug) {
        Serial.println("Right snack chosen.");
      }
      game_won = false;
      spinMotorRight();
      break;
    } else if (digitalRead(BUTTON_START) == LOW) {  // start new game without snack
      game_won = false;
      break;
    }
    strip.rainbow(firstPixelHue);
    strip.show();
    delay(wait);
  }
}

// change color of LEDs
void setColor(uint32_t color) {
  for (unsigned int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, color);
    strip.show();
  }
}

// spins the left motor if chosen after game win
void spinMotorLeft() {
  // start motor even if light sensor is blocked
  digitalWrite(MOTOR_LEFT, HIGH);
  delay(500);
  while (digitalRead(LIGHT_SENSOR_LEFT) == LOW) {  // light sensor not blocked
    digitalWrite(MOTOR_LEFT, HIGH);
  }
  digitalWrite(MOTOR_LEFT, LOW);
}

// spins the right motor if chosen after game win
void spinMotorRight() {
  // start motor even if light sensor is blocked
  digitalWrite(MOTOR_RIGHT, HIGH);
  delay(500);
  while (digitalRead(LIGHT_SENSOR_RIGHT) == LOW) {  // light sensor not blocked
    digitalWrite(MOTOR_RIGHT, HIGH);
  }
  digitalWrite(MOTOR_RIGHT, LOW);
}

// start game when start button is pressed
void startGame() {
  ledOff();
  // populate the array with random colors represented by the pin numbers 1-4
  for (int level = 0; level < MAX_LEVELS; level++) {
    order_array[level] = random(1, 5);
  }
  if (debug) {
    Serial.print("Order array: [");
    for (int level = 0; level < MAX_LEVELS; level++) {
      Serial.print(order_array[level]);
      if (level < MAX_LEVELS - 1) {
        Serial.print(", ");
      }
    }
    Serial.println("]");
  }
  game_over = false;
  game_started = true;
  game_won = false;
  reaction_time = STARTING_REACTION_TIME;
  if (debug) {
    Serial.println("Game started.");
  }
}

// checks the next button press withing the reaction time limit
void waitButtonPress(unsigned int current_level) {
  // start timer and check if button is pressed within reaction time
  unsigned long check_time = millis();
  while (millis() - check_time < reaction_time) {
    if (debug) {
      if (((reaction_time - (millis() - check_time)) % 1000) == 0) {  // only every second
        Serial.print("Time left to react: ");
        Serial.print((reaction_time - (millis() - check_time)) / 1000);
        Serial.println(" seconds.");
      }
    }
    pressed_button = -1;  // placeholder when no button is pressed

    // check which colored button is pressed
    if (digitalRead(BUTTON_BLUE) == LOW) {
      pressed_button = 1;
    } else if (digitalRead(BUTTON_GREEN) == LOW) {
      pressed_button = 2;
    } else if (digitalRead(BUTTON_RED) == LOW) {
      pressed_button = 3;
    } else if (digitalRead(BUTTON_YELLOW) == LOW) {
      pressed_button = 4;
    }

    // when colored button is pressed on time
    if (pressed_button != -1) {
      if (order_array[current_level] == pressed_button) {
        if (debug) {
          Serial.println("Correct button!");
        }
        ledOff();
        // lower reaction time for each level until 1 second
        if (reaction_time > MIN_REACTION_TIME) {
          reaction_time -= REACTION_TIME_REDUCTION;
        }
      } else {
        if (debug) {
          Serial.println("Wrong button!");
        }
        game_over = true;
      }
      break;
    }
  }
}