# Labor-Netzteil

Sooo, der Spaß hier soll ein Labornetzteil werden. Dazu nehme ich 2 x den Bausatz von Banggood (30V/3A). Kostet nix, reicht aber völlig aus.


# Zutaten
* 30V / 3A Power Supply aus dem Chinesischen Versand
* https://youtu.be/GyKeNLSQvXk - der Bausatz selbst
* https://youtu.be/txPFAZrlzXQ - Schwellspannungsschalter ... obwohl ich hier zwei ADC Eingänge eines ESP32 nutzen werde
* https://youtu.be/yiRMvMb5ZxQ - Teil 2 des Netzteilbausatzes ... so ähnlich habe ich das auch vor, nur schöner :)
* 2 x Ringkerntrafos (RKT 12012)
* 4 x vernünftige Präzisionspotis, 10-Gang (534-10k) von Vishay (534B1103JC)
* Potiknöpfe von Marshall-Verstärkern :)
* Ein ausgedienter Intel-Prozessorlüfter
* Ein ESP32 zum temperaturabhängigen Lüftersteuerung, als Schwellwertumschaltung für den Trafo sowie zum Betrieb der NeoPixel
* Zwei digitale Kombi-Anzeigen V und A, auch aus dem fernen Osten
* Eventuell kommt noch ein OLED für diverse Info's hinzu, noch nicht klar
* Eine alte Schatzkiste als Steam-Punk-Gehäuse

# Log
## 23.03.20:
Oh man, jetzt hätte ich beinahe den Vorwiderstand für die NeoPixel vergessen. Ich habe auch gleich noch einen Elko direkt am Anschluß für die NeoPixel platziert, nach 'best practice'.
## 22.03.20:
Leiterplatte weitergemacht. Es ist jetzt das Relais-Modul drauf (Größe ist exakt, die Pins sind noch geschätzt, bis ich das tatsächliche Modul in der Hand habe). Pro Tip: Leiterplatten immer erst designen, wenn du alle Teile physisch auf deinem Tisch liegen hast!
Zusätzlich sind jetzt noch 2 Spannungsteiler drauf. Der Plan ist damit die eingestellte Ausgangsspannung zu messen um bei > 14 Volt den Eingang mit 24V AC zu versorgen, ansonsten 12V AC. Damit sollte die abzuführende Wärme verringert werden (die Idee vom Bitbastelei Video).
Auch sind Anschlüsse drauf für den Temperaturfühler (DS18B20), den Lüfter und die NeoPixel.
## 21.03.20: 
grad gemerkt, dass es einfacher ist ein fertiges 2-fach Relais-Modul in Asien zu bestellen, als sich die Schaltung selbst zusammenzustellen. Ist unterwegs.
## 21.03.20: 
auch zum Glück grad gemert, dass diese Relais-Module mit 5V betrieben werden, aber auch 5V Eingangssignal benötigen, um zu schalten. Naja, damit habe ich Erfahrung, es kommt also noch ein 74HCT245 hinzu, der als Level-Shifter fungiert.
## 21.3.20.: 
damit das richtig 'punk-ed' (im SteamPunk-Gehäuse) werde ich ein paar Neo-Pixel in das Gehäuse bauen, die bei Betrieb dann ordentlich Lichteffekte machen können, zu sehen dann durch die Luftein- und -austrittslöcher und eventuelle ritzen :) Dann kann der Level-Shifter gleich helfen beim Betrieb der Neo-Pixel (cool wäre ja auch noch ein Smoke-Generator - aber dass ist dann wohl doch overkill). Aber ein Lautsprecher mit Dampfmaschinengeräusch? Wie geil wäre dass denn? :)
## 20.03.20: 
Ganz zunächst habe ich festgestellt, dass meine geplanten Kühlkörper deutlich zu klein waren. 1A und 1V über einem Lastwiedersand haben die Kühlkörper innerhalb von 20 Sekunden auf 80°C gebracht. Also gleich einmal neue bestellt, die sind unterwegs in der Post.

# Top Notch Solution Design vom hochbezahlten Profi! :)

![alt text](<https://github.com/ThomasStolt/Labor-Netzteil/blob/master/images/Grand%20Design%20-%20Labor%20Netzteil.png>)

# Status
* Leiterplatte ist im Entwurf, zur Aufnahme der Relais, ESP32 und der Stromversorgung (12V/5V) für den Lüfter und den ESP32



