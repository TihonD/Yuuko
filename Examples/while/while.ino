//������ ���������. ���� � ��������.
//������ �� ������ �16, 17, ���������� � GND.
//��������� �� ����� �18, ��������� � VCC.
void setup() {
//������������� ����� ������ �� ����
pinMode(16, INPUT);
pinMode(17, INPUT);
//������������� ����� ����������� �� �����
pinMode(18, OUTPUT);
//����� ����� ��������� (������� ����������).
digitalWrite(18, HIGH);
}
void loop() {
//��� ������� ������ 1.
while(digitalRead(16)==1) {
}
//����� �������� ��������� (������� ����������).
digitalWrite(18, LOW);
//��� ������� ������ 2.
while(digitalRead(17)==1) {
}
//����� ����� ��������� (������� ����������).
digitalWrite(18, HIGH);
//� ����������, ���� ���� ����������. ^__^
}
