#include <Servo.h>

const Servo base, master, slave, claw;

void setup(){
    Serial.begin(115200);
    Serial.println("EEZYbotARM MK2 testing firmware v0.1 by Yu-Hsiang Lin");
    Serial.print("Initializing servos... ");
    base.attach(9);
    master.attach(10);
    slave.attach(11);
    claw.attach(3);
    delay(500);
    Serial.println("Done.");
    delay(1000);
    Serial.print("Moving to home position... ");
    home();
    delay(500);
    Serial.println("Done.");
}

void loop(){
    
}

void home(){
    base.write(90);
    master.write(90);
    slave.write(90);
    claw.write(90);
}