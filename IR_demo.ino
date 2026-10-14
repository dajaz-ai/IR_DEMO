/*=============================================


        IR_DEMO

Description: 
 

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