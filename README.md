# Tone-Player-Recorder
This project incudes a keypad, an eprom and a speaker.


You will build a tone player/recorder system which will allow you to play tones using the keypad and to record a sequence of tones which can be played back later. Since the recorded sequence is stored in the external EEPROM, you should be able to replay a sequence which was recorded before you powered-off your system.

Part 1

Each keypad button 1 though 8 should be associated with a different frequency tone which is played through the speaker. The frequency of the tones played when each button is pressed does not actually matter, as long as each button is associated with a different frequency. The tone should be played as long as the button is pressed.

Part 2

You will add "recording" and "playback" features to your system. Your system will have three modes:

Play Mode: When a keypad button 1 through 8 is pressed, a note is played and no recording is performed. This is what you implemented in Part 1 of this assignment.
Record Mode: When a keypad button 1 through 8 is pressed, a note is played and information about that note is stored in the EEPROM so that it can be played back later.
Playback Mode: When the "D" button is pressed on the keypad, the recorded sequence will be played back. The keypad buttons 1 through 8 are ignored.
Switching Between Modes

You should use 3 LEDs to indicate the current mode, with one LED associated with each mode. Since the system can only be in one mode at a time, exactly one LED should be lit at a time. Pressing the "A", "B", and "C" buttons on the keypad put the system into the Play, Record, and Playback modes, respectively. 

Record Mode

Each time Record Mode is entered, any previously recorded sequence is deleted and a new sequence recording is started. Each time a keypad button 1 through 8 is pressed in this mode, the information about the key which is pressed must be recorded, as well as its order in the sequence of buttons pressed while in Record Mode. The duration of the key press does not need to be recorded. For example, if button 1 is pressed for 1 second, exactly the same information is recorded as when button 1 is pressed for a minute, because the duration of the button press is not recorded. 

Playback Mode

When the "D" button is pressed on the keypad, the recorded sequence will be played back. Each note in the sequence will be played for 1 second, regardless of how long each button was pressed during recording. 
