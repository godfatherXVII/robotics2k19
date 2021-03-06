/*
 Try reversing the polarity of motors if you are not getting expected output.
 */
#define left_dir1 7
#define left_dir2 4
#define left_enable 6

#define right_dir1 3
#define right_dir2 2
#define right_enable 5
void setup() {
 
  pinMode(left_dir1,OUTPUT);
  pinMode(left_dir2,OUTPUT);
  pinMode(right_dir1,OUTPUT);
  pinMode(right_dir2,OUTPUT);
  pinMode(left_enable,OUTPUT);
  pinMode(right_enable,OUTPUT);

}

void loop() {
   digitalWrite(right_dir1,HIGH); //Rotate both motor forward with full speed for 3 seconds
   digitalWrite(right_dir2,LOW);
   digitalWrite(left_dir1,HIGH);
   digitalWrite(left_dir2,LOW);
   digitalWrite(left_enable, HIGH);
   digitalWrite(right_enable, HIGH);
   delay(3000);

   digitalWrite(right_dir1,LOW); //Rotate both motor backward with full speed for 3 seconds
   digitalWrite(right_dir2,HIGH);
   digitalWrite(left_dir1,LOW);
   digitalWrite(left_dir2,HIGH);
   digitalWrite(left_enable, HIGH);
   digitalWrite(right_enable, HIGH);
   delay(3000);
   
   digitalWrite(right_dir1,HIGH);//Rotate right motor forward with full speed for 3 seconds
   digitalWrite(right_dir2,LOW);
   digitalWrite(left_dir1,LOW);
   digitalWrite(left_dir2,LOW);
   digitalWrite(left_enable, HIGH);
   digitalWrite(right_enable, HIGH);
   delay(3000);

     digitalWrite(right_dir1,LOW);//Rotate left motor forward with full speed for 3 seconds
     digitalWrite(right_dir2,LOW);
     digitalWrite(left_dir1,HIGH);
     digitalWrite(left_dir2,LOW);
     digitalWrite(left_enable, HIGH);
     digitalWrite(right_enable, HIGH);
     delay(3000);

    digitalWrite(right_dir1,HIGH);//Rotate right motor forward with lower speed for 3 seconds 
    digitalWrite(right_dir2,LOW);
    digitalWrite(left_dir1,LOW);
    digitalWrite(left_dir2,LOW);
    analogWrite(left_enable, 100);
    analogWrite(right_enable, 100);
    delay(3000);

    digitalWrite(right_dir1,LOW);//Rotate left motor forward with lower speed for 3 seconds 
    digitalWrite(right_dir2,LOW);
    digitalWrite(left_dir1,HIGH);
    digitalWrite(left_dir2,LOW);
    analogWrite(left_enable, 100);
    analogWrite(right_enable, 100);
    delay(3000);


}