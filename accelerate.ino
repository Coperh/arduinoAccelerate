
#define BUZZER_PIN 8

// scale D major, notes D5 to F#6
int notes[] ={587,659,740,784, 880,988,1109,1174,1318,1479};
// 4 note lenghts and 1 break
int note_length[] = {159,200,412,624,212};
// delay between note and next note, corresponds to same index in note_lenght
int note_delay[] = {53,12,12,12,0};
// stores all the notes in the song, -1 being break;
int song_notes[] =        {-1,4,5,7,9,9,8,9,7,-1,7,8,8,7,8,6,-1,4,6,7,6,5,-1,4,2,4,0,-1,4,5,7,9,9,8,9,7,-1,7,8,8,7,8,6,-1,4,6,7,6,5,-1,5,-1,5,-1,5,6,7};;
// stores the lenght of each note in the song
int song_notes_length[] = { 4,1,0,0,0,0,0,2,1, 4,1,0,0,0,2,1, 4,1,0,0,0,1, 4,0,3,0,0, 4,1,0,0,0,0,0,2,1, 1,1,0,0,0,2,1, 4,1,0,0,0,1, 4,1, 4,1, 4,1,1,1};


void setup() {
}

void loop() {
  // will loop the melody
  for ( int i = 0; i < sizeof(song_notes)/sizeof(song_notes[0]); i++){
    // gets current note in song
    int current_note = song_notes[i];
    // lenght of the current note
    int lenght = note_length[song_notes_length[i]];
    // delay between the next note
    int n_delay = note_delay[song_notes_length[i]];

    // if not a break
    if (current_note != -1){
      // get frequency of current note
      int note = notes[current_note];
      tone(BUZZER_PIN, note, lenght);
    }
    
    delay(lenght+n_delay);
  }

}
