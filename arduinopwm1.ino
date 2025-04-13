int D = 5;
int E = 6;
int F = 7;

void setup() {
    pinMode(D, OUTPUT);
    pinMode(E, OUTPUT);
    pinMode(F, OUTPUT);
}

void loop() {
    // Fade in and out for led_pin
    for (int i = 0; i < 50; i++) {
        analogWrite(D, i);
        delay(1); // Reduced delay
    }
    for (int i = 50; i >= 0; i--) {
        analogWrite(D, i);
        delay(1); // Reduced delay
    }
    // Turn off other LEDs
    analogWrite(E, 0);
    analogWrite(F, 0);

    // Fade in and out for led_pin1
    for (int i = 0; i < 150; i++) {
        analogWrite(E, i);
        delay(1); // Reduced delay
    }
    for (int i = 150; i >= 0; i--) {
        analogWrite(E, i);
        delay(1); // Reduced delay
    }
    // Turn off other LEDs
    analogWrite(D, 0);
    analogWrite(F, 0);

    // Fade in and out for led_pin2
    for (int i = 0; i < 255; i++) {
        analogWrite(F, i);
        delay(1); // Reduced delay
    }
    for (int i = 255; i >= 0; i--) {
        analogWrite(F, i);
        delay(1); // Reduced delay
    }
    // Turn off other LEDs
    analogWrite(D, 0);
    analogWrite(E, 0);
}
