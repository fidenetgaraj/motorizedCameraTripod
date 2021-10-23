int xDir=5;
int yDir=6;
int zDir=7;
int enable=8;

int xStep=2;
int yStep=3;
int zStep=4;

float sure=1;
int i;


void setup() {
  // put your setup code here, to run once:
  pinMode(xDir, OUTPUT);
  pinMode(yDir, OUTPUT);
  pinMode(zDir, OUTPUT);
  pinMode(enable, OUTPUT);
  pinMode(xStep, OUTPUT);
  pinMode(yStep, OUTPUT);
  pinMode(zStep, OUTPUT);
  
}

void pulse(int axis, int dir, int nStep)
{
  if (axis==xStep)
  {
    digitalWrite(xDir, dir);
  }
  if (axis==yStep)
  {
    digitalWrite(yDir, dir);
  }
  if (axis==zStep)
  {
    digitalWrite(zDir, dir);
  }
  
  
  for (i=0; i<nStep;i ++)
  {
    digitalWrite(axis, HIGH);
    delay(sure);
    digitalWrite(axis, LOW);
    delay(sure);
  }
  
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(xDir,LOW);

  pulse(xStep,1,500);
  delay(2000);
  pulse(xStep,0,500);
  delay(2000);

  pulse(zStep,1,150);
  delay(2000);
  pulse(zStep,0,150);
  delay(2000);
  
  
}
