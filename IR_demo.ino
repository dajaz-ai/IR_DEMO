/*=============================================


        IR_DEMO

Description: 
  is a testing setup used to verify the functionality of an infrared (IR) sensor by counting each time it detects a signal or object. 
  When the sensor detects an object, it sends a signal to the ESP32, which processes the input and increments the count. This test ensures that the IR 
  sensor can detect objects accurately and that the ESP32 can properly register and record each detection.

Engineers:
 Aragon, Edward Paul M.
 Regalado, Cid Lawremc C.

 Date:
  Oct 14, 2026


===============================================*/

const byte IR = 36;

int ir_cnt = 0;
int ir_in = 0;

void setup() {

  pinMode(IR, INPUT);

  Serial.begin(9600); // baud rate, unit is BPS (bit per second)

}

void loop() {
  ir_in = digitalRead(IR);

  if(ir_in == 0) {
    ir_cnt++;
  }

  Serial.printf("Objects Detected: %d\n", ir_cnt);
  delay(500);

}