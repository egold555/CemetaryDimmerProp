///////////////////////
////NEW BOOTLOADER/////
///////////////////////
#define PIN_POT A0
#define PIN_LIGHT_1 5
#define PIN_LIGHT_2 6

void setup()
{
    pinMode(PIN_LIGHT_1, OUTPUT);
    pinMode(PIN_LIGHT_2, OUTPUT);

    //Random seed
    randomSeed(analogRead(A1));
}

void loop()
{

    int sensorValue = analogRead(PIN_POT);
    int outputValue = map(sensorValue, 335, 1020, 0, 255);
    if (outputValue > 255)
    {
        outputValue = 255;
    }

    analogWrite(PIN_LIGHT_1, outputValue);
    analogWrite(PIN_LIGHT_2, outputValue);
    delay(100);
}