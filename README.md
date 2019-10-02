# arduinoAccelerate
## Making a song using a piezo buzzer
This program plays the main melody from [Accelerate by Code Black & Atmozfears](https://www.youtube.com/watch?v=4sUkJmAwhC4) on a piezo buzzer.  
Only needs an arduino and a piezo buzzer.

### How it Works.
The *notes* array holds the frequencey of notes. In this case, it holds the frequencies of the notes of D major(D, E, F#, G, A, B, C#) from D5 to F#6. [Frequencies can be found here](https://pages.mtu.edu/~suits/notefreqs.html).  
Arrays *note_length* and *note_delay* store various note lenghts and the delay between the it and the next note. There are only 4 note length and 1 break in this melody so it works fine but would probably be impractical for larger and more complex melodies.  
*song_notes* and *song_notes_length* contain the notes (as index in the *notes* array) and their length & delay (as an index of length and delay arrays).  
The program loops through the song array, playing each note and is fairly self-explanatory.
