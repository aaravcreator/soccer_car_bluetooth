// Define Motor Pins
const int motor1A = 4;  
const int motor1B = 5;  
const int motor2A = 6;  
const int motor2B = 7;
const int attack = 10;

char command;  // Store received command
bool attack_status = false;
void setup() {
    Serial.begin(9600);  // Hardware Serial for Bluetooth
    pinMode(motor1A, OUTPUT);
    pinMode(motor1B, OUTPUT);
    pinMode(motor2A, OUTPUT);
    pinMode(motor2B, OUTPUT);
    pinMode(attack,OUTPUT);
}

void loop() {
    if (Serial.available()) {
      
        command = Serial.read();
        Serial.println(command); // Debugging
        controlCar(command);
    }
    if(attack_status){
      digitalWrite(attack,HIGH);
    }
    else{
      digitalWrite(attack,LOW);
    }
}

// Function to move the car
void controlCar(char cmd) {
    switch (cmd) {
        case 'F': moveForward(); break;
        case 'B': moveBackward(); break;
        case 'L': turnLeft(); break;
        case 'R': turnRight(); break;
        case 'S': stopCar(); break;
        case 'A': attackBall();break;
    }
}

void attackBall(){
  // toogle_attack_status
attack_status = !attack_status;
}

// Function to move forward
void moveForward() {
    digitalWrite(motor1A, HIGH);
    digitalWrite(motor1B, LOW);
    digitalWrite(motor2A, HIGH);
    digitalWrite(motor2B, LOW);
}

// Function to move backward
void moveBackward() {
    digitalWrite(motor1A, LOW);
    digitalWrite(motor1B, HIGH);
    digitalWrite(motor2A, LOW);
    digitalWrite(motor2B, HIGH);
}

// Function to turn left
void turnLeft() {
    digitalWrite(motor1A, LOW);
    digitalWrite(motor1B, HIGH);
    digitalWrite(motor2A, HIGH);
    digitalWrite(motor2B, LOW);
}

// Function to turn right
void turnRight() {
    digitalWrite(motor1A, HIGH);
    digitalWrite(motor1B, LOW);
    digitalWrite(motor2A, LOW);
    digitalWrite(motor2B, HIGH);
}

// Function to stop the car
void stopCar() {
    digitalWrite(motor1A, LOW);
    digitalWrite(motor1B, LOW);
    digitalWrite(motor2A, LOW);
    digitalWrite(motor2B, LOW);
}
