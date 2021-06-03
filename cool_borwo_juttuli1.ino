// C++ code
//
void setup()
{
  
}
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_G3 196
#define NOTE_A3 220
#define NOTE_B3 246.942
#define NOTE_G4 415.305
#define NOTE_F4 369.994
#define NOTE_E 329.628


int melody[]={
  NOTE_G4,NOTE_F4,NOTE_E , NOTE_B3, NOTE_E,NOTE_F4,NOTE_G4,
  NOTE_E
};
int noteDuration[]={
  4,4,4,2,4,4,4,2
};
void loop()
{
  for(int thisNote=0;thisNote<9;thisNote++){
    int noteDurations=1000/noteDuration[thisNote];
    tone(8,melody[thisNote],noteDurations);
      
      int PauseBetweenNote=noteDurations*1.3;
    delay(PauseBetweenNote);
    noTone(8);
  }
      delay(2000);
}