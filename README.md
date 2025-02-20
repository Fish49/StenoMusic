# StenoMusic
Music game, like beatsaber, but for steno practice.

## preferences.json
### UI
- BackgroundColor1: Main background color
- BackgroundColor2: Background color behind lyrics
- PastColor: Color for lyrics already typed and for left part of music slider
- FutureColor: Color for lyrics yet to be typed, and for right part of music slider
- PointerColor: Color for text cursor and progress ball on music slider
- GeneralAccentColor: Color for other text, and for control buttons for the music
### DefaultSongSettings
- DeathType: can be `{"score", rate}`, `{"lives", #oflives}`, or `"immortal"`. 
  - score gives you a bar that depletes when you miss chords and regenerates when you hit them. you die when the bar hits zero. rate is the ratio to deplete every second
  - lives gives you a fixed number of lives. you lose a life when you miss a chord. you die when you run out of lives
  - immortal means you cant die
- FollowType: can be `"untilNext"`,`"handHold"` or `{"perfect", threshold}`.
  - untilNext means you have until the next lyric is loaded to finish the current one. if you don't your health bar will deplete continuously (score) or you will lose a life every time a new lyric is loaded (lives)
  - handHold will pause the song before loading lyrics until you finish all the lyrics up till then. lives/scoring works the same as `untilNext`
  - perfect forces you to get the lyrics with exact timing. your score will begin depleting if it has been more than threshold seconds since you were perfectly aligned with the lyrics (score) or you will lose a life when it has been at least threshold seconds since you were perfectly aligned with the lyrics, and then you will continue to lose a life every time a new lyric is loaded until you are aligned with the lyrics again.
- Speed: the speed relative to normal, with 1 being 100% normal speed. max of 3
- Punctuation: can be `all`, `none`, `caps`, or `punc`
  - all means it will enforce all punctuation and capitalization in the original lyric file.
  - none means it will not enforce punctuation or capitalization from the original lyrics.
  - caps means it will enforce capitalization, but not punctuation
  - punc means it will enforce punctuation, but not capitalization
- Newlines: does it enforce newlines

## song.json
every user song will have its own folder, with a song file (for example flyAway.mp3), a lyric file (for example flyAway.lrc), an image file (for example flyAway.jpg) (optional), and a song.json file, with various settings for the song
### Name: name of the song
### Artists: list of artists responsible for the song
### SongPath and SongFormat: relative path and file format for song file (ex. "flyAway.mp3", "mp3", respectively)
### LyricsPath and LyricsFormat: relative path and file format for lyric file (ex. "flyAway.lrc", "lrc", respectively)
### ImagePath and ImageFormat: relative path and file format for image file (ex. "flyAway.jpg", "jpg", respectively) if omitted, will use default image
### Settings: `"default"` or `{settings}`. default uses the default song settings in `preferences.json`. `{settings}` uses the same format as `preferences.json`
