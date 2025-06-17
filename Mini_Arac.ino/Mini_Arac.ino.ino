#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial bt_iletisim(7, 6); // RX, TX
Servo direksiyon_servo;

char data = 0;

void setup() {
  Serial.begin(9600);
  bt_iletisim.begin(9600);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT); // buzzer artık D5'te
  digitalWrite(5, LOW);

  direksiyon_servo.attach(8);
  direksiyon_servo.write(90);
}

void loop() {
  if (bt_iletisim.available()) {
    data = bt_iletisim.read();
    Serial.println(data);

    if (data == 'F') {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      direksiyon_servo.write(90);
    }
    else if (data == 'B') {
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      direksiyon_servo.write(90);
    }
    else if (data == 'S') {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      direksiyon_servo.write(90);
    }
    else if (data == 'R') {
      direksiyon_servo.write(150);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
    else if (data == 'L') {
      direksiyon_servo.write(30);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
    else if (data == 'G') {
      direksiyon_servo.write(30);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
    }
    else if (data == 'H') {
      direksiyon_servo.write(150);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
    }
    else if (data == 'I') {
      direksiyon_servo.write(30);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
    }
    else if (data == 'J') {
      direksiyon_servo.write(150);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
    }
    else if (data == 'Y') {
      tone(5, 1000);  // buzzer artık D5'te
      delay(1000);
      noTone(5);
      data = 0;
    }
  }
}
