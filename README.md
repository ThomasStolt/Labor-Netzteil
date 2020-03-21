# Labor-Netzteil

Sooo, der Spaß hier soll ein Labornetzteil werden. Dazu nehme ich 2 x den Bausatz von Banggood (30V/3A). Kostet nix, reicht aber völlig aus.


# Zutaten
* 30V / 3A Power Supply aus dem Chinesischen Versand
* https://youtu.be/GyKeNLSQvXk
* https://youtu.be/txPFAZrlzXQ - Schwellspannungsschalter ... obwohl ich hier den ADC Eingang eines ESP32 nutzen werde
* 2 x Ringkerntrafos (RKT 12012)
* 4 x vernünftige Präzisionspotis, 10-Gang (534-10k) von Vishay (534B1103JC)
* Potiknöpfe von Marsall-Verstärkern :)
* Ein ausgedienter Intel-Prozessorlüfter
* Ein ESP32 zum temperaturabhängigen Steuern des Lüfters und als Schwellwertumschaltung für den Trafo
* Zwei digitale Kombi-Anzeigen V und A, auch aus dem Fernen Osten
* Eventuell kommt noch ein OLED für diverse Info's hinzu, noch nicht klar
* Eine alte Schatzkiste als Steam-Punk-Gehäuse

# Erste Erfahrungen
Ganz zunächst habe ich festgestellt, dass meine geplanten Kühlkörper deutlich zu klein waren. 1A und 1V über einem Lastwiedersand haben die Kühlkörper innerhalb von 20 Sekunden auf 80°C gebracht. Also gleich einmal neue bestellt, die sind unterwegs in der Post.

# Top Notch Solution Design vom hochbezahlten Profi! :)

![alt text](<https://github.com/ThomasStolt/Labor-Netzteil/blob/master/images/Grand%20Design%20-%20Labor%20Netzteil.png>)

# Status
* Leiterplatte ist im Entwurf, zur Aufnahme der Relais, ESP32 und der Stromversorgung (12V/5V) für den Lüfter und den ESP32
* 
