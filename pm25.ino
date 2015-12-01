#include <Wire.h>
#include "I2Cdev.h"
#include <SoftwareSerial.h>
#include <string.h>
#include "sensor.h"

#define INTERVAL_LCD             200        //OLED及传感器刷新时间间隔    

unsigned long lcd_time = millis();          //OLED及传感器更新计时器  

void setup(void) {
  Serial.begin(9600);     //初始化波特率
}

void loop(void) {
 
  if (lcd_time > millis()) lcd_time = millis();
  if (millis() - lcd_time > INTERVAL_LCD) {   
    SensorUpdate();         //更新传感器
    lcd_time = millis();    //更新计时器
  }


//if(sensorPM25>400);
//触发红外传感器


  
}




