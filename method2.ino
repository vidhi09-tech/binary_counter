int led1 =7;
int led2 = 6;
int led3 = 5;
int led4 = 4;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);

}
void binary (int values[],int num){
  for(int i =0; i<4; i++)
  {
    values[i] = num%2;
    num = num/2;
  }
}
void loop() {
  int num = 0;
  int values[4];
  while(num <=15)
  {
    binary(values,num);
    digitalWrite(led1, values[3]);
    digitalWrite(led2, values[2]);
    digitalWrite(led3, values[1]);
    digitalWrite(led4, values[0]);
    delay(1000);
    num++;
  }

}
