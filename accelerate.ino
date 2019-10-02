#define MUSIC_PIN 8


//            D=0 E=1 F#=2 G=3 A=4 B=5 C#=6  D=7 E=8 F#=9
int notes[] ={587,659,740,784, 880,988,1109,1174,1318,1479};
// eight, quarter, half, half + quarter
int note_length[] = {180,220,460,700,240};
int note_delay[] = {60,20,20,20,0};
int song[] =       {-1,4,5,7,9,9,8,9,7,-1,7,8,8,7,8,6,-1,4,6,7,6,5,-1,4,2,4,0, -1,4,5,7,9,9,8,9,7,-1,7,8,8,7,8,6,-1,4,6,7,6,5,-1,5,-1,5,-1,5,6,7};
int song_notes[] = { 4,1,0,0,0,0,0,2,1, 4,1,0,0,0,2,1, 4,1,0,0,0,1, 4,0,3,0,0,  4,1,0,0,0,0,0,2,1, 1,1,0,0,0,2,1, 4,1,0,0,0,1, 4,1, 4,1, 4,1,1,1};
void setup() {

}

void loop() {
  // put your main code here, to run repeatedly:
  
  for ( int i = 0; i < sizeof(song)/sizeof(song[0]); i++){
    int current_note = song[i];
    int lenght = note_length[song_notes[i]];
    int n_delay = note_delay[song_notes[i]];
    if (current_note != -1){
      int note = notes[current_note];
      tone(MUSIC_PIN, note, lenght);
    }
    delay(lenght+n_delay);
  }

}
