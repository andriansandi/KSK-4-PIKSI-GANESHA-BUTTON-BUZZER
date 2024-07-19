const int buzzerPin = 8;    // Pin connected to the buzzer
const int buttonPin = 7;    // Pin connected to the button

void setup() {
  Serial.begin(9600);       // Initialize serial communication at 9600 baud rate
  pinMode(buzzerPin, OUTPUT);  // Set buzzer pin as output
  pinMode(buttonPin, INPUT_PULLUP);  // Set button pin as input with internal pull-up resistor
}

void loop() {
  int buttonState = digitalRead(buttonPin);  // Read the button state

  // Print the button state to the Serial Monitor
  Serial.print("Button State: ");
  Serial.println(buttonState);

  // Check the button state
  if (buttonState == LOW) {
    digitalWrite(buzzerPin, HIGH);  // Turn on the buzzer
    Serial.println("Button pressed. Buzzer ON.");
  } else {
    digitalWrite(buzzerPin, LOW);   // Turn off the buzzer
    Serial.println("Button not pressed. Buzzer OFF.");
  }

  delay(100);  // Short delay to debounce the button
}
