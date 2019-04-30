float wait = 0.f;
const float frequency  = 0.1f;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  wait = 128.f + 128.f * sin(2.f * PI * frequency * millis() / 1000.f);
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(wait);
  
  digitalWrite(LED_BUILTIN, LOW);
  delay(wait);
}
