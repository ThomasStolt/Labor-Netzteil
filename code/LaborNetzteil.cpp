#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <ESPAsyncWiFiManager.h>
#include <ArduinoOTA.h>

// Include the credentials file
#include "credentials"

void setup() {
    Serial.begin(115200);
    
    Serial.print("Hello World");
    // Connect to WiFi
    WiFi.mode(WIFI_STA);
    WiFi.begin(credentials.ssid, credentials.password);
    
    // Initialize OTA
    ArduinoOTA.setHostname("ESP32-OTA");
    ArduinoOTA.begin();
    
    // Print IP address
    Serial.println();
    Serial.print("Connected to ");
    Serial.println(credentials.ssid);
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
}

void loop() {
    // Handle OTA updates
    ArduinoOTA.handle();
    Serial.print("IP address: ");
    // Your code here
    
}
