const byte NUM=8;
const byte led[]={10,8,7,5,4,3,2};
const int delaytime=100;
const byte sw = 6;
int ii;
void setup() {
  Serial.begin(9600);
  pinMode(sw,INPUT);
for(ii=0;ii<NUM;ii++)
  {
     pinMode(led[ii],OUTPUT);
  }
}
void loop() {
  boolean val = digitalRead(6);


if(val==0){  
for(ii=0;ii<NUM;ii++)
{
  digitalWrite(led[ii],HIGH);//左到右
      delay(delaytime);
  digitalWrite(led[ii],LOW); 
  
    
}
delay(100);
for(ii=NUM-1;ii>=0;ii--)
{
  digitalWrite(led[ii],HIGH);//右到左
      delay(delaytime);
  digitalWrite(led[ii],LOW);
}
delay(100);
}
 
//2.
/*for(ii=0;ii<NUM;ii++)
  {
    digitalWrite(led[ii],HIGH);
  }
      delay(100);
/for(ii=0;ii<NUM;ii++)
{
  digitalWrite(led[ii],LOW);
}
      delay(100);
*/
if(val==1)
{
  for(ii=0;ii<NUM;ii++)
  {
    digitalWrite(led[ii],HIGH);
  }
      delay(100);
for(ii=0;ii<NUM;ii++)
  {
    digitalWrite(led[ii],LOW);
  }
      delay(100);
for(ii=NUM-1;ii>=0;ii--)
{
  digitalWrite(led[ii],HIGH);//右到左
      delay(delaytime);
  digitalWrite(led[ii],LOW);
}
delay(100);
for(ii=0;ii<NUM;ii++)
{
  digitalWrite(led[ii],HIGH);//左到右
      delay(delaytime);
  digitalWrite(led[ii],LOW); 
  
    
}
delay(100);

  for(ii=0;ii<NUM;ii++)
  {
    digitalWrite(led[ii],HIGH);
  }
      delay(100);
for(ii=0;ii<NUM;ii++)
  {
    digitalWrite(led[ii],LOW);
  }
      delay(100);
}
}
