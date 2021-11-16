#include "OneWire.h"
#include "DallasTemperature.h"

OneWire onewire(26);
DallasTemperature sensor(&onewire);

float temp_in_c;

void setup() {
        Serial.begin(115200);
        sensor.begin();
}

void loop() {

    sensor.requestTemperatures();
    temp_in_c = sensor.getTempCByIndex(0);

    Serial.println(temp_in_c);
}
