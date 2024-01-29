---
title: "React to Snack"
categories: instructions
layout: post
date: 2024-01-29 14:00:00 +0200
---

# Die Arcade Machine mit Snackpreisen

# Inhaltsverzeichnis

- [Inhaltsverzeichnis](#inhaltsverzeichnis)
- [Motivation](#motivation)
- [Vorbereitung](#vorbereitung)
  - [Werkzeuge](#werkzeuge)
  - [Material](#material)
  - [Empfohlene Vorkenntnisse](#empfohlene-vorkenntnisse)
- [Bauanleitung](#bauanleitung)
  - [Gehäuse](#gehäuse)
  - [Ausgabevorrichtung](#ausgabevorrichtung)
  - [Farbe und Design](#farbe-und-design)
  - [Software und Technik](#software-und-technik)
- [React to Snack - Demo](#react-to-snack---demo)
  - [Spielanleitung](#spielanleitung)
  - [Gewinnen](#gewinnen)
  - [Verlieren](#verlieren)
- [Ausblick](#ausblick)
- [Team Rocket](#team-rocket)

# Motivation

Unsere Motivation für den Bau des "React to Snack"-Automaten war es, eine innovative und unterhaltsame Lösung zu
schaffen, die den Campusalltag von Studenten bereichert. Wir wollten ein Spiel entwickeln, das nicht nur Spaß
macht, sondern auch eine Belohnung bietet - in diesem Fall einen Snack.

Wir haben erkannt, dass es Zeiten gibt, in denen die Mensa und die Fachschaft geschlossen sind und die Studenten keine
Möglichkeit haben, Essen zu kaufen. Unser Automat bietet in diesen Situationen eine schnelle und unterhaltsame
Möglichkeit, an einen Snack zu kommen.

Darüber hinaus wollten wir eine willkommene Ablenkung vom Uni-Alltag bieten. Unser Automat bietet eine spielerische
Pause und hilft den Studenten, sich für einen Moment vom Studium abzuwenden.

Der Bau dieses Automaten war für uns nicht nur eine technische Herausforderung, sondern auch eine Gelegenheit, das
Studentenleben ein wenig angenehmer zu gestalten. Wir sind stolz auf das, was wir erreicht haben, und hoffen, dass
unsere Arbeit anderen Studenten Freude bereitet.

![Alternativer Text](/images/teamrocket/images/Snackautomat.jpg)

# Vorbereitung

## Werkzeuge

- Lasercutter (alternativ auch eine Laubsäge und Schleifpapier)
- Lötkolben
- Lötzinn
- Schraubenzieher
- Bohrmaschine
- Heißklebepistole & Heißkleber
- Pinsel
- Farbrollen
- Laptop/Computer mit Arduino IDE und Inkscape
- Beißzange

## Material

- 1 Plexiglasscheibe → ca. 30 cm breit und 15 cm hoch
- Holzleim → schnell trocknend
- Sperrholzplatten, Pappel, 4 mm
- Plexiglas → klar, farblos 4 mm dick
- Farbe → schwarz, Acryl Buntlack
- Schrauben + Muttern → 4-mal M5x16
- Lochband aus Metall → ca. 30 cm lang
- 4 Schrauben die zum Lochband passen + Muttern
- Stahldraht → ca. 2 Meter
- einseitiges Klebeband
- doppelseitiges Klebeband
- Zylinderförmiges Objekt ca 6 cm Durchmesser um den Draht zu rollen
- Arcade-Buttons - 1x gelb, 1x blau, 1x grün, 1x rot, 3x schwarz
- Kabel mit Isolation → rot, blau, schwarz
- Arduino Uno
- Lochrasterplatine
- LED-Streifen → 2x 13 cm, 2x 21 cm
- 2 Lichtschranken
- Wago Verbindungsklammern (3 Eingänge)
- 2 Executive-Modul MOSFET-Transistor
- Netzteil → 5V
- Anschluss für Netzteil
- 2 Motoren

## Empfohlene Vorkenntnisse

- Löten
- Lasercutten
- Grundlegender Umgang mit dem Arduino
- Arduino Programmierung (falls man das Programm anpassen möchte)

# Bauanleitung

## Gehäuse

Hierbei werden die folgenden SVGs benötigt:

- back.svg: Die Rückseite des Automaten.
- bottom_and_front.svg: Die Bodenplatte und die untere Frontplatte des Automaten.
- front_2_and_front_3.svg: Die zwei oberen Frontplatten des Automaten.
- game_pannel.svg: Die Platte an der die Spiel-Buttons befestigt werden.
- plexiglas_front.svg: Die Plexiglasscheibe an der Front des Automaten.
- side_left.svg: Die linke Seite des Automaten.
- side_right.svg: Die rechte Seite des Automaten.
- top_and_hole.svg: Die obere Platte des Automaten und eine Platte mit der Auswurföffnung für die Snacks.

Für den Bau des Gehäuses entschieden wir uns dazu, Sperrholzplatten zu benutzen. Die Sperrholzplatten wurden mit dem
Vektorgrafik-Programm Inkscape erstellt und können mithilfe des Lasercutters ausgeschnitten werden. Die dafür benötigten
SVG-Dateien sind
im [SVG Verzeichnis](/images/teamrocket/svgs/) zu finden.

Nachdem alle Platten vom Lasercutter geschnitten wurden, wird der Automat vorerst nur zusammengesteckt und nicht
verklebt.

Zuerst werden die Arcade-Buttons in das Gamepanel verschraubt. Diese werden in die dazu vorgesehenen Löcher gesteckt
und mithilfe der dazugehörigen Muttern fixiert. Die zwei schwarzen Arcade-Buttons werden in das Frontpanel mit den für
die Buttons vorgesehenen Löchern installiert.

Die Rückseite des Automaten wird zuerst mit der linken und rechten Seite zusammengesteckt. Danach folgt die Bodenplatte
und die obere Platte.
Die nun fehlenden Frontplatten, sowie das Gamepanel werden nun an das bereits bestehende Gestell gesteckt.

Die zusammengesteckten Teile können mithilfe von Klebeband vorerst stabilisiert werden, sollten aber nicht verklebt
werden.

Die Plexiglasscheibe wird ganz zum Schluss reingeschraubt.

![Alternativer Text](/images/teamrocket/images/Automat_placeholder.jpg)

## Ausgabevorrichtung

Hierbei werden die folgenden SVGs benötigt:

- [sensor_blocker.svg](/images/teamrocket/svgs/sensor_blocker.svg): Die an einem Motor befestigte Platte, die durch eine Laserschranke
  fährt, um dem Motor zu
  signalisieren, dass er sich nicht weiter drehen soll (wir nennen ihn "Lichtblocker").
- [inner.svg](/images/teamrocket/svgs/inner.svg): Ein weiterer Lichtblocker für den zweiten Motor und die beiden inneren Platten, die die
  Spiralen für den
  Ausgabemechanismus tragen, sowie die Trennplatten, die die Spiralen voneinander trennen.

Die Innenplatten des Automaten, die den Ausgabemechanismus halten, sind nicht fest verbaut und können zu Wartungszwecken
entnommen werden.

Zum Bauen des Ausgabemechanismus werden nun die beiden inneren Platten und die Trennwände zusammengesteckt, sodass zwei
Spiralen in die Konstruktion passen.

![Alternativer Text](/images/teamrocket/images/Innen_platten_unfertig.jpg)

Als Nächstes werden die beiden Laserschranken in die Vertiefungen der unteren Innenplatte gesetzt. Diese können zu
Testzwecken vorerst mit doppelseitigem Klebeband befestigt werden.

Daraufhin werden die Lichtblocker an dem Rad der Motoren befestigt. Diese können einfach auf die Räder gesteckt und
mithilfe von Kabelbindern und Heißkleber fixiert werden.

Die Motoren werden in die Löcher der vertikalen Innenplatte gesetzt und mithilfe des Metall-Lochbandes fixiert. Das
Lochband wird an der vertikalen Innenplatte mithilfe von Holzschrauben und Muttern fixiert. Das Lochband wird für jeden
Motor von beiden Seiten benötigt. Auf dem folgenden Bild sieht man die Motoren in ihrer finalen Position.

![Alternativer Text](/images/teamrocket/images/Motoren_fest.jpg)

Die Spiralen können mithilfe eines zylinderförmigen Objekts, in unserem Fall einem Holzpfahl mit 6 cm Durchmesser,
gedreht werden. Dazu wird etwa 1 Meter Draht pro Spirale benötigt. In den Holzpfahl wird ein Nagel geschlagen, um den
ein Ende des Drahts gewickelt wird. Das andere Ende des Drahts wird von einer weiteren Person festgehalten oder an einem
stabilen Objekt fixiert. Nun kann der Holzpfahl langsam gedreht werden. Die Spannung des Drahts sollte dabei
aufrechterhalten werden. Nachdem der Draht um den Holzpfahl gewickelt wurde, kann er abgezogen und am Motor
mithilfe eines Kabelbinders fixiert werden. Das abstehende Material kann mithilfe einer Beißzange entfernt werden.

![Alternativer Text](/images/teamrocket/images/Spiralen.jpg)

Zum Testen können die Spiralen von Hand gedreht werden. Wenn die Lichtblocker problemlos durch die Lichtschranken
passen und die Spiralen sich drehen können, können alle Teile des Ausgabemechanismus mit Holzleim verklebt werden.
Die Laserschranken können entweder mit doppelseitigem Klebeband oder mit Heißkleber angeklebt werden.

Nun, da die Innenplatte fertig ist, kann sie in den Automaten gesetzt werden. Um das Konstrukt zu stabilisieren, können
kleine Holzplatten an die Unterseite der Innenplatte geklebt werden, sodass die Innenplatte nicht wegrutscht.

Hier sieht man den Stabilisator auf der Unterseite der Innenplatte:

![Alternativer Text](/images/teamrocket/images/Stabilisator_unten.jpg)

Ähnlich können auch Stabilisatoren an den Innenseiten der Seitenwände des Automaten angebracht werden, die die
Innenplatten weiter stabilisieren:

![Alternativer Text](/images/teamrocket/images/Stabilisator_hinten.jpg)

## Farbe und Design

Zum Bemalen kann der Automat entweder wieder auseinander gebaut oder im zusammen gebauten Zustand bleiben. Hierbei ist
zu beachten, dass die Farbe die Holzplatten verformen kann. Wir haben uns für Acrylfarbe ohne Grundierung entschieden,
weil eine Grundierung die Sperrholzplatten noch stärker verformen könnte.

![Alternativer Text](/images/teamrocket/images/Acryl.jpg)

Der Automat kann mithilfe von Holzleim verklebt werden. Allerdings sind die obere sowie die Bodenplatte nicht zu
verkleben, denn diese werden für den Einbau der Technik sowie zu Wartungszwecken und Nachfüllen der Spiralen benötigt.

Erfahrungsgemäß ist es schwierig, die Technik zu verkabeln, wenn der Automat schon zusammengeklebt ist, deswegen
empfehlen wir zuerst eine vollständige Verkabelung der Technik, dann den Automaten zu verkleben und ganz zum Schluss zu
bemalen.

Die Plexiglasscheibe kann an der Frontplatte an dem dafür vorgesehenen Ausschnitt von innen angebracht werden. Dazu
werden 4 M5x16 Schrauben mit den dazugehörigen Muttern verwendet. Die Löcher für die Schrauben wurden bereits vom
Lasercutter platziert.

Zuletzt können die [Spielanleitung](/images/teamrocket/svgs/instruction.svg) und die [Labels](/images/teamrocket/svgs/instruction.svg) für die Snack-Buttons
an den Automaten geklebt werden. Die Position
kann frei gewählt werden.

## Software und Technik

Hierbei wird die folgende SVG benötigt:

- [arduino_platte.svg](/images/teamrocket/svgs/arduino_platte.svg): Die Holzplatte, an die die Platine und der Arduino befestigt werden.

Für die Technik werden ein Arduino Uno, eine Platine und ganz viele Kabel benutzt. Dieser steckt auf entsprechenden
Steckpins, die an eine Platine gelötet wurden. Dadurch kann man den Arduino Uno beliebig austauschen. Ebenfalls ist das
Verkabeln über die Platine einfacher, wie man im folgenden Bild sieht:

![Alternativer Text](/images/teamrocket/images/Platine.jpg)

Man braucht insgesamt 12 Datenpins (bei uns die schwarzen Kabel), in unserem Fall
Pin 2 bis 13. An diese Pins muss man 7 Buttons, zwei Lichtschranken, zwei elektrische Schalter und einen LED-Streifen
verbinden. Entsprechend muss man dann im Programmcode die Datenpins anpassen. Die elektrischen Schalter sind dazu da, um
die Motoren anzusteuern, denn diese sollen sich nur beim Drücken der Snack-Buttons drehen.

Bei den Motoren ist es wichtig, dass sie in die richtige Richtung drehen, sodass die Spiralen nach vorne drehen und
nicht nach hinten. Notfalls kann man die Polung umdrehen (also Plus an Minus und Minus an Plus löten), sodass der Motor
sich in die andere Richtung dreht.

Die LED-Streifen, die den Nutzern eine Farbe anzeigen, werden an der Innenseite der Frontplatte, um die Plexiglasscheibe
herum, angeklebt. Dafür muss man vorher die Streifen im Quadrat mit sehr kurzen Kabeln zusammenlöten.

Weiterhin braucht man auf der Platine eine Verbindung zum GND vom Arduino Uno. Hierbei reicht ein Kabel (bei uns die
blauen Kabel), an welches man dann alle Komponenten (Buttons, Schalter, etc.) verbindet. Das Gleiche macht man mit dem
5V Pin des Arduino Uno, wobei hier noch ein Stromanschluss dran gelötet werden muss, wo dann ein Stromkabel eingesteckt
wird (WICHTIG: nur ein Stromkabel mit 5V Leistung benutzen, bei uns die roten Kabel). Die Motoren können an sich mit bis
zu 9V betrieben werden, jedoch drehen sie sich dann schneller, was für die Spiralen eher ein Nachteil ist.

Letztlich lädt man den [Programmcode](https://github.com/cbm-instructions/teamrocket/blob/main/reaction_game.ino) auf den Arduino und kann den Automaten benutzen. Wichtig hierbei ist es zu beachten,
dass man nicht gleichzeitig ein Stromkabel und einen Laptop anschließt, um mögliche Probleme mit dem Strom zu vermeiden.
Der Anschluss für das Stromkabel ist optional, man kann den Automaten auch immer an einem Laptop angeschlossen lassen,
was auch 5V bieten würde (abhängig vom Anwendungsszenario).

Die Verkabelung im Allgemeinen ist frei überlassen. Wir empfehlen jedoch, dass man die Kabel, die an der Innenplatte (wo
die Motoren, die Lichtschranken und die elektrischen Schalter montiert sind) hängen, auch abstecken kann. Hierbei kann
man die Wago Verbindungsklammern nutzen (alternativ kann man Kabel mit Büchsen und Steckern verwenden) und diese mit
doppelseitigem Klebeband an die Innenseite der Rückwand kleben (siehe nächstes Bild).

![Alternativer Text](/images/teamrocket/images/Arduino_befestigung.jpg)

Zum Schluss wird der Arduino auf die Arduino-Platte (siehe arduino_platte.svg) geschraubt. Dazu können alle Schrauben
und Muttern genutzt werden, die in den Arduino passen. Dazu müssen zuerst Löcher in die Platte gebohrt werden, die den
Positionen der Löcher des Arduinos entsprechen. Die Platte kann dann mit Heißkleber an die Innenseite des Automaten
geklebt werden.

# React to Snack - Demo

## Spielanleitung

![Spielanleitung](/images/teamrocket/images/game_instructions.jpg)

## Gewinnen

![Snack Gewinnen](/images/teamrocket/images/play_win.gif)

## Verlieren

![Verlieren](/images/teamrocket/images/play_lose.gif)

# Ausblick

Im nächsten Schritt wäre Soundunterstützung denkbar, die dem Benutzer akustisches Feedback gibt, wenn das Spiel losgeht
und wenn das Spiel gewonnen oder verloren wurde. Ebenfalls könnte man Soundeffekte entsprechend der Farbe abspielen.
Dadurch müsste man das Spiel bei falscher Eingabe nicht sofort beenden, sondern man könnte versuchen, ein Punktesystem
einzubauen, wobei falsche Eingaben Minuspunkte geben. Außerdem wurde uns das Feedback gegeben, dass Menschen mit
Rot-Grün-Schwäche ein Problem mit dem Spiel haben könnten, weshalb uns die Idee gekommen ist, ein Display einzubauen,
das neben den Farben auch Symbole anzeigt, die auch auf den Arcade-Buttons zu finden sind, damit statt Farben mit Logos
gespielt werden kann. Des Weiteren bietet der Snackautomat Platz für bis zu zwei weitere Spiralen und somit noch mehr
Snackmöglichkeiten.


# Team Rocket

- Alexander Obwandner
- Andreas Latanowsky
- Filip Cavar
- Sven Hoffmann