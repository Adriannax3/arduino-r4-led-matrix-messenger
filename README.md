# UNO R4 LED Matrix Web Messenger

A very simple Arduino UNO R4 project that lets you send messages to the built-in LED matrix using a web page.

When the board starts, it connects to Wi-Fi and gets an IP address from DHCP. The IP address is shown on the LED matrix, so you know where to open the web page.

The web interface allows you to type a message and send it to the board. The Arduino reads the message from the URL parameter and displays it on the LED matrix.

Before showing the new message, the board displays:

`BEEP BEEP`

This is a small warning that a new message is coming.

The text scrolls from right to left across the LED matrix.

I made this little app to send messages to my husband from another room. 😆

This project is very basic, but it can be extended in many ways. For example, you could display:

* weather information from an API
* stock market prices
* news headlines
* smart home notifications
* custom alerts

## Setup

1. Open the project in Arduino IDE.
2. Replace:

```cpp
char ssid[] = "WIFI_SSID";
char pass[] = "WIFI_PASSWORD";
```

with your Wi-Fi credentials.

3. Upload the sketch to the Arduino UNO R4 WiFi.
4. Wait for the IP address to appear on the LED matrix.
5. Open the IP address in your browser.
6. Send a message.

## License

MIT License.

## Images
<img width="1069" height="635" alt="image" src="https://github.com/user-attachments/assets/cc72500c-5489-413e-9acd-a22d5b4befcd" />

https://github.com/user-attachments/assets/859d0404-f0ad-4080-80b8-1d9e320d8726

(video speed 2.0)


