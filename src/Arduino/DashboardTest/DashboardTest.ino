void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(values());
  delay(500);
}

String values() {
  int v = random(24);
  int c = random(30);
  int t1 = random(50);
  int t2 = random(50);
  int mph = random(30);
  bool fan = random(1) == 0 ? false : true;

  String values;
  values = v + ',' + c + ',' + t1 + ',' + t2 + ',' + mph + ',' + fan;
  return values;
}

