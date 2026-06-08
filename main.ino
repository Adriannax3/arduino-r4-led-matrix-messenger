#include <WiFiS3.h>
#include <ArduinoGraphics.h>
#include <Arduino_LED_Matrix.h>
#include "webpage.h"

ArduinoLEDMatrix matrix;

char ssid[] = "WIFI_SSID";
char pass[] = "WIFI_PASSWORD";

WiFiServer server(80);

String message = "";

void showText(String text) {
  text = "     " + text;
  matrix.beginDraw();
  matrix.stroke(0xFFFFFFFF);
  matrix.textFont(Font_5x7);
  matrix.textScrollSpeed(80);
  matrix.beginText(0, 1, 0xFFFFFF);
  matrix.print(text);
  matrix.endText(SCROLL_LEFT);
  matrix.endDraw();
}

void clearMatrix() {
  matrix.beginDraw();
  matrix.clear();
  matrix.endDraw();
}

void setup() {
  matrix.begin();

  WiFi.begin(ssid, pass);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
  }

  IPAddress ip = WiFi.localIP();

  while (ip[0] == 0) {
    delay(1000);
    ip = WiFi.localIP();
  }

  server.begin();

  showText(ip.toString());
}

void loop() {
  WiFiClient client = server.available();

  if (client) {
    String request = client.readStringUntil('\r');

    int msgIndex = request.indexOf("GET /?msg=");

    if (msgIndex >= 0) {
      int start = msgIndex + 10;
      int end = request.indexOf(" ", start);

      message = request.substring(start, end);
      message.replace("+", " ");
      message.toUpperCase();

      showText("BEEP BEEP");
      delay(1000);

      clearMatrix();
      delay(500);

      showText(message);
    }

    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html; charset=utf-8");
    client.println();
    client.print(WEBPAGE);

    client.stop();
  }
}
