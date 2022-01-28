#include <Arduino.h>

char val;

//code by :MANOJ  k narayanan  
//connection digram :
 //arduno 5v -> RelayBoard vcc And also Blutooth Vcc
 //Arduno Gnd -> Relay GND And also Blutooth Gnd
 // Relay Board IN1 -> DigitalPin 2
 // Relay Board IN2 -> DigitalPin 3
 // Relay Board IN3 -> DigitalPin 4
 // Relay Board IN4 -> DigitalPin 5
  // Blutooth RX to Arduno TX
  // Blutooth TX to Arduno RX



void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    val = Serial.read();
    Serial.println();
  }

  if(val == '1'){
    //turn on the switch
    digitalWrite(2,0);
  }else if (val == '2'){
     digitalWrite(2,1);
    //turn of the switch
  }else if(val == '3'){
     digitalWrite(3,0);
    //turn on the switch 
  }else if(val =='4'){
     digitalWrite(3,1);
    //turn of the switch 
  }else if (val == '5'){
     digitalWrite(4,0);
    //turn of the switch 
  }else if(val == '6'){
     digitalWrite(4,1);
    //turn on the switch
  }else if (val == '7'){
     digitalWrite(5,0);
    //turn of the switch 
  }else if(val == '8'){
     digitalWrite(5,1);
  }
 

}