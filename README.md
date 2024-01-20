<h1>React to Snack - Die Arcade Machine mit Snackpreisen</h1>

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
  - [Ausblick](#ausblick)


## Motivation

Unsere Motivation für den Bau des "React to Snack"-Automaten war es, eine innovative und unterhaltsame Lösung zu schaffen, die das alltägliche Leben von Studenten bereichert. Wir wollten ein Spiel entwickeln, das nicht nur Spaß macht, sondern auch eine Belohnung bietet - in diesem Fall einen Snack.

Wir haben erkannt, dass es Zeiten gibt, in denen die Mensa und die Fachschaft geschlossen sind und die Studenten keine Möglichkeit haben, Essen zu kaufen. Unser Automat bietet in diesen Situationen eine schnelle und unterhaltsame Möglichkeit, an einen Snack zu kommen.

Darüber hinaus wollten wir eine willkommene Ablenkung vom Uni-Alltag bieten. Unser Automat bietet eine spielerische Pause und hilft den Studenten, sich für einen Moment von ihren Studien abzulenken.

Der Bau dieses Automaten war für uns nicht nur eine technische Herausforderung, sondern auch eine Gelegenheit, das Studentenleben ein wenig angenehmer zu gestalten. Wir sind stolz auf das, was wir erreicht haben, und hoffen, dass unsere Arbeit anderen Studenten Freude bereitet.

![Alternativer Text](/images/Snackautomat.jpg)


## Vorbereitung

### Werkzeuge
* Lasercutter, alternativ auch eine Laubsäge und Schleifpapier
* 3D-Drucker
* Lötkolben
* Lötzinn
* 1 Schraubenzieher
* 1 Schraubenschlüssel
* Bohrmaschiene (Größe)
* Heißklebepistole & Heißkleber
* 1 Pinsel
* 1 Farbrolle
* Klebeband
* Laptop
* Arduino IDE
* Beißzange


### Material
* 1 Plexiglasscheibe  → ca 30cm breit und 15cm hoch
* Holzleim → schnell trocknend
* X Sperrholzplatten, Pappel, 4mm
* Plexiglas → klar, farblos 4mm dick
* Farbe → schwarz, Acryl Buntlack
* Schrauben + Muttern → 4 mal M5x16
* Lochband aus Metall → ca 30 cm lang
* 4 Schrauben die zum Lochband passen + Muttern
* Stahldraht → ca 2 Meter
* Zylinderförmiges Objekt ca 6 cm durchmesser um den draht zu rollen
* Arcade-Buttons - 1x Gelb, 1x Blau, 1x Grün, 1x Rot, 3x Schwarz
* Kabel → Anzahl? Rot, Blau, Schwarz
* Arduino Uno → Modell?
* Lochrasterplatine → Größe?
* LED-Band → 2x kurze Streifen, 2x lange Streifen, Länge?
* Lichtschranken → 2x
* Wago Verbindungsklammern (3 Eingänge) → Anzahl?
* Executive-Modul MOSFET-Transistor → 2x
* Netzteil → 5V
* Anschluss für Netzteil
* 2 Motoren -> Volt?
  

### Empfohlene Vorkenntnisse
* Löten
* 3D-Druck
* Lasercutten
* Grundlegender Umgang mit dem Arduino


## Bauanleitung

### Gehäuse

Für den Bau des Gehäuses entschieden wir und dazu Sperrholzplatten zu benutzen.
Die Sperrholzplatten wurden mit inkscape designed und können mithilfe des Lasercutters ausgeschnitten werden.
Die dafür benötigten SVG dateien sind im [SVG Verzeichniss](/svgs/) zu finden.

Für das gehäuse selbst werden folgende SVGS benötigt:

* Back.svg: Die Rückseite des Automaten
* Side_Left.svg: Die Linke Seite des Automaten
* Side_Right.svg: Die Rechte Seite des Automaten
* Top_And_Hole.svg: Die Obere Platte des Automaten und das Auswurfloch des Automaten
* Bottom_And_Front.svg: Die Bodenplatte und die untere Frontplatte des Automaten
* Front_2_And_Front_3.svg: Die 2 oberen Frontplatten des Automaten
* plexiglas_front.svg: Die Plexiglasscheise an der Front des Automaten.
* Game_Pannel_neu.svg: Die Platte an der die Buttons befestigt werden.


Nachdem alle Platten vom Lasercutter fertig geschnitten wurden, wird der Automat vorerst nur zusammen gesteckt und noch nicht verklebt. 

Als erstes werden die Arcade-Buttons in das Gamepanel verschraubt. Diese werden in die dazu vorgesehenen Löcher gesteckt und mithilfe der dazugehörigen Muttern fixiert. Die zwei schwarzen Arcade-Buttons werden in das Frontpanel mit den beidem für die Buttons vorgesehenen Löcher installiert.


Die Rückseite des Automaten wird mit der linken und rechten Seite zuerst zusammengesteckt. Danach folgt die Bodenplatte und die obere Platte. 
Die nun fehlenden frontplatten, sowie das gamepanel werden nun an das bereits bestehende gestell gesteckt.

Die Zusammengesteckten teile können mithilfe von klebeband vorerst stabilisiert werden, sollten aber nicht verklebt werden.

Die Plexiglasscheibe wird vorerst nicht installiert.


![Alternativer Text](/images/Automat_placeholder.jpg)




### Ausgabevorrichtung

Für den Bau der Ausgabevorrichtung werden die Teile der folgenen svg benötigt:

* Dreher.svg: Die an einem Motor befestigte Platte, die durch eine Laserschranke fährt um dem Motor zu signalisieren das er sich
nicht weiter drehen soll.
* Innen_neu.svg: Ein weiterer Dreher für den Zweiten Motor und die beiden inneren Platten, die die Spiralen für den Ausgabemechanismuss tragen, sowie die Trennplatten die die Spiralen voneinander Trennen.


Die Innenplatten des Automaten, die den Ausgabemechanismus halten, sind nicht fest verbaut und können zu Wartungszwecken entnommen werden.

Zum Bauen des Ausgabemechanismus werden nun die beiden inneren Platten und die Trennwände zusammengesteckt, sodass zwei Spiralen in die Konstruktion passen.

![Alternativer Text](/images/Innen_platten_unfertig.jpg)

Als nächstes werden die beiden Laserschranken in die Vertiefungen der unteren Innenplatte gesetzt. Diese können zu Testzwecken vorerst mit doppelseitigem Klebeband befestigt werden.

Daraufhin werden die Dreher an die Räder der Motoren befestigt. Diese können einfach auf die Räder gesteckt werden und mithilfe von Kabelbindern und Heißkleber fixiert werden.

Die Motoren werden in die Löcher der vertikalen Innenplatte gesetzt und mithilfe des Metall Lochbands fixiert. Das Lochband wird an der vertikalen Innenplatte mithilfe von Holzschrauben und Muttern fixiert. Das Lochband wird für jeden Motor von beiden Seiten benötigt.
Auf dem folgenden Bild sieht man die Motoren in ihrer finalen Position.

![Alternativer Text](/images/Motoren_fest.jpg)

Die Spiralen können mithilfe eines zylinderförmigen Objekts, in unserem Fall einem Holzpfahl mit 6 cm Durchmesser, gedreht werden. Dazu wird etwa 1 Meter Draht pro Spirale benötigt. In den Holzpfahl wird ein Nagel geschlagen, um den ein Ende des Drahts gewickelt wird. Das andere Ende des Drahts wird von einer weiteren Person festgehalten oder an einem stabilen Objekt fixiert. Nun kann der Holzpfahl langsam gedreht werden. Die Spannung des Drahts sollte dabei aufrechterhalten werden. Nachdem der Draht um den Holzpfahl gewickelt wurde, kann er abgezogen werden und am Motor mithilfe eines Kabelbinders fixiert werden. Das abstehende Material kann mithilfe einer Beißzange entfernt werden.


![Alternativer Text](/images/Spiralen.jpg)

Zum testen, können die Spiralen von hand gedreht werden. Wenn die dreher problemlos durch die Laserschranken passen und die Spiralen sich drehen können, können alle teile des Ausgabemechanismusses mit holzleim verklebt werden.
Die Laserschranken können entweder mit doppelseitigem klebeband bestehen oder können mit heißkleber angeklebt werden.

Nun, da die Innenplatte fertig ist, kann sie in den Automaten gesetzt werden. Um das Konstrukt zu stabilisieren, können kleine Holzplatten an die Unterseite der Innenplatte geklebt werden, die sie am Nach-vorne-Rutschen hindert.

Hier sieht man den Stabilisator auf der Unterseite der Innenplatte.

![Alternativer Text](/images/Stabilisator_unten.jpg)

Ähnlich können auch Stabilisatoren an den Innenseiten der Seitenwände des Automaten angebracht werden, die die Innenplatten weiter stabilisieren.

![Alternativer Text](/images/Stabilisator_hinten.jpg)




### Farbe und Design


Zuletzt kann der Automat bemalt werden. Dazu können die Panels entweder wieder voneinander getrennt und bemalt werden oder der Automat wird im aktuellen Zustand bemalt. Dazu wird allerdings ein Pinsel benötigt, um an die Ecken zu gelangen. Wir haben uns für Acrylfarbe ohne Grundierung entschieden, weil Grundierung das Risiko hat, die Sperrholzplatten zu verziehen.
Außerdem kann der Automat nach belieben beklebt oder angemalt werden.

![Alternativer Text](/images/Acryl.jpg)

Nachdem der Automat getrocknet ist, kann er mithilfe von Holzleim verklebt werden. Allerdings sind die obere sowie die Bodenplatte nicht zu verkleben, denn diese werden für den Einbau der Technik sowie zu Wartungszwecken benötigt.

Die Plexiglasscheibe kann nun an der Frontplatte mit dem dafür vorgesehenen Ausschnitt angebracht werden. Dazu werden 4 M5x16 Schrauben mit den dazugehörigen Muttern verwendet. Die Löcher für die Schrauben wurden bereits vom Lasercutter platziert.

Die LED Lichterketten, die den Nutzer auffordern eine Farbe zu drücken, werden an der Innenseite der Frontplatte, um die Plexiglasscheibe herum, installiert.


Zuletzt können die Spielanleitung und die Snack-Button Labels an den Automat geklebt werden.
Die Position kann frei gewählt werden.
Dazu wird die folgende svg benötigt:

* Spielanleitung.svg



### Software und Technik


Für die Technik wird eine Arduino benötigt, der mithilfe der
* Arduino Plattenhalter SVG hier
  
an das innere der Rückseite des Automaten befestigt wird.

![Alternativer Text](/images/Arduino_befestigung.jpg)







## Ausblick

Im nächsten Schritt wäre Soundunterstützung denkbar, die dem Benutzer akustisches Feedback gibt, wenn das Spiel losgeht, wenn das Spiel gewonnen oder verloren wurde. Möglicherweise könnte Musik abgespielt werden, und statt das Spiel könnte länger gestaltet werden, sodass immer, wenn der Benutzer eine Farbe erfolgreich getroffen hat, ein bestimmter Ton abgespielt wird, der sich von einer falschen oder zu langsamen Eingabe unterscheidet. Damit würde das Spiel bei falscher Eingabe nicht sofort beendet werden, sondern es würde versucht werden, möglichst viele Punkte zu sammeln, wobei falsche Eingaben Minuspunkte geben.
Außerdem wurde uns das Feedback gegeben, dass Menschen mit Rot-Grün-Schwäche ein Problem mit dem Spiel haben könnten, weshalb uns die Idee gekommen ist, ein Display einzubauen, das neben den Farben auch Logos anzeigt, die auch auf den Arcade-Buttons zu finden sind, damit statt Farben mit Logos gearbeitet werden kann.