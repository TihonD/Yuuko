//Начните создание своей программы!
byte K;
K = millis()+micros();
K = digitalRead(0)+analogRead(0);
K = Serial.read()+Serial.peak();
K = random()*10;
K = PORTB&&DDRB;
Serial.begin(19200);
