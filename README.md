# Exponential-Freeze-GUI-EXP-system 
# 炒冰機使用者介面及系統設計Ice machine GUI and System design

## 更新維護及版本注意事項:
#### EXP系統 將在Exponential-Freeze系列中的第二代進行改動
#### 將從TFT螢幕轉移至手機GUI+E-paper，但不影響第一代的持續更新。
#### 目前以計畫來看EXP-First Edition 系統(第一代TFT版本)將會在擴充功能上其實結束更新，但會進行不定期維護。
#### EXP-lite 系統 (第二代E-paper+手機GUI)將會持須更新及維護直到最新一代Exponential-Freeze系列炒冰機研發完成，到時候會有詳細公告。


## 簡介:
#### EXP系統是基於GUI及Arduino和ESP32的一套交互控制系統
#### EXP系統可適用於所有炒冰機，內容包刮了基礎的設置內容及進階擴充內容。


# 項目內容:
## 第一版:Netion TFT 螢幕程式+Arduino 代碼
#### 結合TFT螢幕和Arduino Mega2560 或其他Arduino 系列，內容有TTF檔及Arduino.ino。
#### 使用用兩個軟件編寫，所以程式的傳輸及優化並不會達到更好的等級，所以要斟酌使用版本，建議以最新維護或更新代碼為主。
## 第二版:Arduino代碼
#### 單純使用Arduino進行整合適用於有Wi-Fi和Blurtooth的模組，主要使用ESP32，內容有Arduino.ino。
#### 由於只有一個軟體編寫，所以程式整合性及優化都是前所未有的高，所以版本可以隨意使用，差異在於功能及擴充性。


# 項目核心:
### 運用PID運算配合負溫度係數電阻NTC達到精準的溫度控制，與一般控制溫度是達到溫度之後關電，之後到達到一個閥值再啟動去改變溫度不同，PID溫度控制是利用比例、微分、積分和誤差來計算所需溫度，讓機器處於一直工作狀態以確保溫度變化只有0.1°C的些微變化，如果計算更精準可以精準到只有0.01°C的誤差。例外PID只能做到控制，但它能跟其他控制運算共同混搭使用，來提升功能性及精確度。


炒冰機連結:https://github.com/OOC-work/Exponential-Freeze-  
Link to ice fryer:https://github.com/OOC-work/Exponential-Freeze-  



