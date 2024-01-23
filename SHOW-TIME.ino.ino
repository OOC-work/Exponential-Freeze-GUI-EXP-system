#include <Adafruit_NeoPixel.h>

#define JOY_X A10  
#define JOY_Y A12
#define RGB_PIN 6
#define RGB_NUM 16

Adafruit_NeoPixel rgb(RGB_NUM, RGB_PIN, NEO_GRB + NEO_KHZ800);

int MODE = 0;         // Declare and initialize MODE variable
int previousMode = -1; // Variable to store the previous mode

int Relay1 = 16; //繼電器1 Pin16
int Relay2 = 17; //繼電器2 Pin17
int Pump = 8 ; //水泵 Pin8
int FAN = 5; //風扇 Pin5
int COOL = 6; //製冷設備 Pin6

void setup() {
  Serial.begin(9600); // 開啟串口
  pinMode(Relay1,OUTPUT); //繼電器1輸出
  pinMode(Relay2,OUTPUT); //繼電器2輸出
  pinMode(Pump,OUTPUT); //水泵輸出
  pinMode(COOL,OUTPUT); //致冷片輸出
  pinMode(FAN,OUTPUT); //風扇輸出

  digitalWrite(16, HIGH); //繼電器1 Pin16 
  digitalWrite(17, LOW); //繼電器2 Pin17 
  digitalWrite(8, HIGH); //水泵 Pin8
  digitalWrite(5, HIGH); //風扇 Pin5 
  digitalWrite(6, HIGH); //致冷片----------------------------需更改
  rgb.begin();
} 

void loop() {
  int xValue = analogRead(JOY_X);
  int yValue = analogRead(JOY_Y);

  if(xValue < 100 && yValue > 400 && yValue < 600) {
    MODE = 1; // 前
  } else if(xValue > 1000 && yValue > 400 && yValue < 600) {
    MODE = 2; // 后
  } else if(xValue > 400 && xValue < 600 && yValue > 1000) {
    MODE = 3; // 左
  } else if(xValue > 400 && xValue < 600 && yValue < 100) {
    MODE = 4; // 右
  }

  // Check if the mode has changed
  if (MODE != previousMode) {
    // Display the current mode in the serial monitor
    Serial.print("Current Mode: ");
    Serial.println(MODE);

    // Clear the previous color
    rgb.clear();

    // Now you can use the MODE variable for further processing or actions
    // For example, you can add a switch statement here based on the MODE value.
    switch (MODE) {
      case 1:  //全部啟動
        rgb.fill(0, 0, 255); // Blue color
        digitalWrite(16, HIGH); //繼電器1 Pin16 
        digitalWrite(17, HIGH); //繼電器2 Pin17 
        digitalWrite(8, HIGH); //水泵 Pin8
        digitalWrite(5, HIGH); //風扇 Pin5 
        digitalWrite(6, HIGH); //致冷片
        // Do something for mode 1 (藍色)
        break;
      case 2:   //唯一風扇運轉啟動
        rgb.fill(255, 0, 0); // Red color
        digitalWrite(16, HIGH); //繼電器1 Pin16 
        digitalWrite(17, HIGH); //繼電器2 Pin17 
        digitalWrite(8, LOW); //水泵 Pin8
        digitalWrite(5, HIGH); //風扇 Pin5 
        digitalWrite(6, LOW); //致冷片
        // Do something for mode 2 (紅色)
        break;
      case 3:   //水冷+風扇 製冷片關閉
        rgb.fill(0, 255, 0); // Green color
        digitalWrite(16, HIGH); //繼電器1 Pin16 
        digitalWrite(17, HIGH); //繼電器2 Pin17 
        digitalWrite(8, HIGH); //水泵 Pin8
        digitalWrite(5, HIGH); //風扇 Pin5 
        digitalWrite(6, LOW); //致冷片
        // Do something for mode 3 (綠色)
        break;
      case 4:
        rgb.fill(255, 255, 255); // White color
        digitalWrite(16, HIGH); //繼電器1 Pin16 
        digitalWrite(17, HIGH); //繼電器2 Pin17 
        digitalWrite(8, LOW); //水泵 Pin8
        digitalWrite(5, LOW); //風扇 Pin5 
        digitalWrite(6, LOW); //致冷片
        // Do something for mode 4 (白色)
        break;
      default:
        // Handle default case or do nothing
        break;
    }

    rgb.show(); // Display the set color on the LED strip
    delay(100); // Add a delay to control the display rate

    // Update the previous mode
    previousMode = MODE;
  }
}
