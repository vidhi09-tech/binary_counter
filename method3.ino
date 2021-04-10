int led1 = 7;
int led2 = 6;
int led3 = 5;
int led4 = 4;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}



void loop()
{
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      for(int k=0;k<2;k++)
      {
        for(int l=0;l<2;l++)
        {
          if(i==1)
          {
            digitalWrite(led1,HIGH);
          }
          if(j==1)
          {
            digitalWrite(led2,HIGH);
          }
          if(k==1)
          {
            digitalWrite(led3,HIGH);
          }
          if(l==1)
          {
            digitalWrite(led4,HIGH);
          }
         
          delay(2500);
          digitalWrite(led1,LOW);
          digitalWrite(led2,LOW);
          digitalWrite(led3,LOW);
          digitalWrite(led4,LOW);
           
        }
      }
  }
 
  }
}
