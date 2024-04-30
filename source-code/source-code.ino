/**
 * Created by:
 * 1)Akash Sridhar – IMT2022501 – akash.sridhar@iiitb.ac.in
 * 2)Shanmukh Praneeth – IMT2022542 – shanmukh.praneeth@iiitb.ac.in
 * 3)Shashwat Sabharwal – IMT2022573 – shashwat.sabharwal@iiitb.ac.in
 */
#include <Servo.h>

// Create servo objects
Servo s1;
Servo s2;
Servo s3;

void setup() {
  // Attach servo objects to corresponding pins
  s1.attach(13);
  s2.attach(12);
  s3.attach(11);
}

void loop() {
  // 900 miliseconds delay was used to ensure that the shirt doesnt slip on the board in the process.
  // Move s1 to 0 degrees, s2 to 120 degrees, and s3 to 0 degrees
  s1.write(0);
  s2.write(120);
  s3.write(0);

  // Pause for 900 milliseconds
  delay(900);

  // Move s2 to 0 degrees
  s2.write(0);

  // Pause for 900 milliseconds
  delay(900);

  // Move s2 to 120 degrees
  s2.write(120);

  // Pause for 900 milliseconds
  delay(900);

  // Move s1 to 120 degrees
  s1.write(120);

  // Pause for 900 milliseconds
  delay(900);

  // Move s1 back to 0 degrees
  s1.write(0);

  // Pause for 900 milliseconds
  delay(900);

  // Move s3 to 170 degrees
  s3.write(170);

  // Pause for 900 milliseconds
  delay(900);
}
