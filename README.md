# Exponential-Freeze-GUI-EXP-system 
# 炒冰機使用者介面及系統設計Ice machine GUI and System design

## 更新維護及版本注意事項:
#### EXP系統 將在Exponential-Freeze系列中的第二代進行改動
#### 將從TFT螢幕轉移至手機GUI+E-paper，但不影響第一代的持續更新。
#### 目前以計畫來看EXP-First Edition 系統(第一代TFT版本)將會在擴充功能上其實結束更新，但會進行不定期維護。
#### EXP-lite 系統 (第二代E-paper+手機GUI)將會持須更新及維護直到最新一代Exponential-Freeze系列炒冰機研發完成，到時候會有詳細公告。

## Update maintenance and version notes:
#### EXP system Will be changed in the second generation of Exponential-Freeze series
#### It will move from TFT screen to cell phone GUI+E-paper, but it will not affect the continuous update of the first generation.
#### The EXP-First Edition system (the first generation TFT version) is planned to end the update in terms of extensions, but will be maintained from time to time.
#### The EXP-lite system (second generation E-paper + cell phone GUI) will be updated and maintained until the latest generation of Exponential-Freeze series ice fryer is developed, a detailed announcement will be made then.

## 簡介:
#### EXP系統是基於GUI及Arduino和ESP32的一套交互控制系統
#### EXP系統可適用於所有炒冰機，內容包刮了基礎的設置內容及進階擴充內容。

## Introduction:
#### EXP system is an interactive control system based on GUI and Arduino and ESP32.
#### EXP system can be used for all ice fryers, including basic setup and advanced expansion.

# 項目內容:
## 第一版:Netion TFT 螢幕程式+Arduino 代碼
#### 結合TFT螢幕和Arduino Mega2560 或其他Arduino 系列，內容有TTF檔及Arduino.ino。
#### 使用用兩個軟件編寫，所以程式的傳輸及優化並不會達到更好的等級，所以要斟酌使用版本，建議以最新維護或更新代碼為主。
## 第二版:Arduino代碼
#### 單純使用Arduino進行整合適用於有Wi-Fi和Blurtooth的模組，主要使用ESP32，內容有Arduino.ino。
#### 由於只有一個軟體編寫，所以程式整合性及優化都是前所未有的高，所以版本可以隨意使用，差異在於功能及擴充性。

# Project Content:
## Version 1: Netion TFT screen program + Arduino code
#### Combine TFT screen and Arduino Mega2560 or other Arduino series, the content has TTF file and Arduino.ino.
#### Using two software programs, so the transmission and optimization of the program will not reach a better level, so use the version at your discretion, we recommend the latest maintenance or update the code as the main.
## Version 2: Arduino code
#### Integration using Arduino alone is suitable for modules with Wi-Fi and Blurtooth, mainly using ESP32, with Arduino.ino content.
#### Because there is only one software program, so the integration and optimization of the program is unprecedentedly high, so the version can be used at will, the difference is in the functionality and expandability.

# 項目核心:
### 運用PID運算配合負溫度係數電阻NTC達到精準的溫度控制，與一般控制溫度是達到溫度之後關電，之後到達到一個閥值再啟動去改變溫度不同，PID溫度控制是利用比例、微分、積分和誤差來計算所需溫度，讓機器處於一直工作狀態以確保溫度變化只有0.1°C的些微變化，如果計算更精準可以精準到只有0.01°C的誤差。例外PID只能做到控制，但它能跟其他控制運算共同混搭使用，來提升功能性及精確度。

# Project Core:
### PID calculation with negative temperature coefficient resistor NTC to achieve accurate temperature control, and general temperature control is to reach the temperature after the power off, and then to reach a valve value to start to change the temperature, PID temperature control is the use of proportional, differential, integral and error to calculate the required temperature, so that the machine has been working to ensure that the temperature change is only 0.1 ° C slight changes. If the calculation is more precise it can be accurate to only 0.01°C error. PID can only be used for control, but it can be used in combination with other control operations to improve functionality and accuracy.

炒冰機連結:https://github.com/OOC-work/Exponential-Freeze-  
Link to ice fryer:https://github.com/OOC-work/Exponential-Freeze-  



