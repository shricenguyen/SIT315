int sensorState = 0;

void setup()
{
    // initialize digital pin 2 as an input.
    // initialize digital pin LED_BUILTIN as an output.
    // initialize serial communication at 9600 bits per second:
    pinMode(2, INPUT);
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    // read the input on digital pin 2:
    sensorState = digitalRead(2);
    // if the sensor state is high, turn on the LED
    // if the sensor state is low, turn off the LED
    if (sensorState == HIGH)
    {
        digitalWrite(LED_BUILTIN, HIGH);
        Serial.println("Motion detected!");
    }
    else
    {
        digitalWrite(LED_BUILTIN, LOW);
        Serial.println("No motion detected!");
    }
    delay(2000);
}