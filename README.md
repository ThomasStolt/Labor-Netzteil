# Labor-Netzteil

Sooo, der Spaß hier soll ein Steam-Punk-Labornetzteil werden. Dazu nehme ich 2 x den Bausatz von Banggood (30V/3A). Kostet nix, reicht aber völlig aus.


# Zutaten
* Der "Hiland" 30V / 3A Power Supply Bausatz aus dem fernöstlichen Versand
* https://youtu.be/GyKeNLSQvXk - der Bausatz selbst
* https://youtu.be/txPFAZrlzXQ - Schwellspannungsschalter, die Idee ist super, zur Realisierung werde ich hier allerdings zwei ADC EingÃ¤nge eines ESP32 nutzn
* https://youtu.be/yiRMvMb5ZxQ - Teil 2 des Netzteilprojektes ... so Ãhnlich habe ich das auch vor, nur schöner :)Ä
* 2 x Ringkerntrafos (RKT 12012, https://www.reichelt.de/ringkerntrafo-120-va-2x-12-v-2x-5-0-a-rkt-12012-p15262.html?&nbc=1)
* 4 x vernünftige Präzisionspotis, 10-Gang (534-10k) von Vishay (534B1103JC)
* Potiknöpfe von Marshall-Verstärkern :)
* Ein ausgedienter Intel-Prozessorlüfter
* Ein ESP32 DevKit C V4 zum temperaturabhängigen Lüftersteuerung, als Schwellwertumschaltung für den Trafo sowie zum Betrieb der NeoPixel für die Innenbeleuchtung
* Zwei digitale Kombi-Anzeigen V und A, auch aus dem fernen Osten
* Eventuell kommt noch ein OLED für diverse Info's hinzu, noch nicht klar
* Eine alte Schatzkiste als Steam-Punk-Gehäuse

# Log
## 11.05.2025
Nach langer Zeit endlich mal wieder etwas Zeit in das Projekt stecken. Letzt Erkenntnisse waren, das die Schaltung so nicht funktioniert. Schwierig zu erklären, aber die Idee aus dem Trafo 12V und 5V abzugreifen und damit die Logik-Schaltung zu versorgen hat einfach nicht funktioniert. Also, neuer Ansatz, es kommt ein kleines Netzteil 5V/4A zum Einsatz. Darüber werden dann der Lüfter als auch die Neopixel versorgt. 
Ich habe mich jetzt für andere Display Module entschieden, und zwar die ST7789v2, mit abgerundeten Ecken. Die sehen sehr schick aus und ich habe in einem andere (kleinen) Projekt gelernt, wie man damit umgeht. Sehen echt stark aus.
Ausserdem kommt noch ein Verstärkermodul (MAX98735A) hinein - das Singende Klingende Labornetzteil ;)

Neue Platine ist auch entworfen. Mal schauen, wie viele Fehler da jetzt drin sind ;)

## 10.02.2024
Das PCB ist gekommen und scheint soweit zu passen. Ein paar kleinere Sachen habe ich vergessen (z.B. einen Anschluss für die Anzeigen), aber das ist halb so schlimmt. Zuerst hatte ich die Anzeigen falsch angeschlossen und sie haben unplausible Werte angezeigt. Nach etwas Googlen war dann aber klar, wie sie anzuschliessen sind.
Grundsätzlich laufen jetzt die beiden Netzteile, im Moment noch bis 15V, da die Umschaultung auf 24V AC noch fehlt. Aber sieht schon ganz gut aus alles. :)

## 29.01.2024
Endlich komme ich mal wieder hierzu. Ich habe jetzt einfach mal die Leiterplatten so bestellt. Ob das alles so in die Kiste reinpast, die ich dafür gehot habe, ist fraglich. Es bleibt spannend! :)

## 24.03.2020
Endlich ist das Relais-Modul angekommen. Wenn ich solche Module bekomme, dann entlöte ich generell die Anschlüsse und baue mir einen entsprechenden Footprint in KiCad, sdass man das Modul direkt auf die Hauptplatine stecken und verlöten kann.
![alt text](<https://github.com/ThomasStolt/Labor-Netzteil/blob/master/images/Relais%20Modul.jpg>)

Ich kann die Leiterplatte allerdings noch gar nicht fertigstellen, da ich noch nicht weiss, wieviel und welchen Platz ich im Gehäuse haben werde. Momentan ist die Platine ja fast quadratisch, kann durchaus sein, dass ich sie wegen Platzmangel länglich machen muss. Dazu muss ich jetzt erst noch warten müssen, bis die richtigen Kühlkörper ankommen. Ich hatte zwar welche bestellt, die sind mir aber zu klein. Diese sollten Morgen, spätestens Übermorgen ankommen.

Auch die Marshall Knöpfe sind gekommen ... und sehen seeeeeeeehr gut aus :)
![alt text](<https://github.com/ThomasStolt/Labor-Netzteil/blob/master/images/Deckel%20mit%20Marschall%20KnÃ¶pfen.jpg>)
## 23.03.20:
Oh man, jetzt hätte ich beinahe den Vorwiderstand für die NeoPixel vergessen. Ich habe auch gleich noch einen Elko direkt am Anschluß für die NeoPixel platziert, nach 'best practice'.

Ich habe auch gleich noch einen Stützkondensator (470uF/25V) fÃ¼r den ESP32 vorgesehen ... man weiß ja nie!
## 22.03.20:
Leiterplatte weitergemacht. Es ist jetzt das Relais-Modul drauf (Größe ist exakt, die Pins sind noch geschätzt, bis ich das tatsächliche Modul in der Hand habe). Pro Tip: Leiterplatten immer erst designen, wenn du alle Teile physisch auf deinem Tisch liegen hast!

Zusätzlich sind jetzt noch 2 Spannungsteiler drauf. Der Plan ist damit die eingestellte Ausgangsspannung zu messen um bei > 14 Volt den Eingang mit 24V AC zu versorgen, ansonsten 12V AC. Damit sollte die abzuführende Wärme verringert werden (die Idee vom Bitbastelei Video).

Auch sind Anschlüsse drauf für den Temperaturfühler (DS18B20), den Lüfter und die NeoPixel.
## 21.03.20: 
...grad gemerkt, dass es einfacher ist ein fertiges 2-fach Relais-Modul in Asien zu bestellen, als sich die Schaltung selbst zusammenzustellen. Ist unterwegs...
## 21.03.20: 
...auch zum Glück grad gemerkt, dass diese Relais-Module mit 5V betrieben werden, aber auch 5V Eingangssignal benötigen, um zu schalten. Naja, damit habe ich Erfahrung, es kommt also noch ein 74HCT245 hinzu, der zuverlässig als Level-Shifter fungiert.
## 21.3.20.: 
Damit das richtig 'punk-ed' (im SteamPunk-Gehäuse) werde ich ein paar Neo-Pixel in das Gehäuse bauen, die bei Betrieb dann ordentlich Lichteffekte machen können, zu sehen dann durch die Luftein- und -austrittslöcher und eventuelle ritzen :) Dann kann der Level-Shifter gleich helfen beim Betrieb der Neo-Pixel (cool wäre ja auch noch ein Smoke-Generator - aber dass ist dann wohl doch overkill). Aber ein Lautsprecher mit Dampfmaschinengeräusch? Wie geil wäre dass denn? :)
## 20.03.20: 
Ganz zunächst habe ich festgestellt, dass meine geplanten Kühlkörper deutlich zu klein waren. 1A und 1V über einem Lastwidersand haben die Kühlkörper innerhalb von 20 Sekunden auf 80°C gebracht. Also gleich einmal neue bestellt, die sind unterwegs in der Post.

# Top Notch Solution Design vom hochbezahlten Profi! :)

![alt text](<https://github.com/ThomasStolt/Labor-Netzteil/blob/master/images/Grand%20Design%20-%20Labor%20Netzteil.png>)

# Status
* Leiterplatte ist im Entwurf, zur Aufnahme der Relais, ESP32 und der Stromversorgung (12V/5V) für den Lüfter und den ESP32



