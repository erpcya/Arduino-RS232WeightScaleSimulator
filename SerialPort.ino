void setup() {
  Serial.begin(2400);
  randomSeed(10);
}

void loop() {
  String simulatedWeight = "a    ";
  simulatedWeight = simulatedWeight + random(10, 99);
  simulatedWeight = simulatedWeight + ".";
  simulatedWeight =  simulatedWeight + random(10, 99);
  simulatedWeight =  simulatedWeight +  "  Kgb";
  Serial.print(simulatedWeight);
}
