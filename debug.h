// Debug or MIDI output settings
//
#pragma once

// MIDI vs debugging mode
#ifdef DEBUG
#define USE_MIDI 0

#define PRINT(s, v)   { Serial.print(F(s)); Serial.print(v); }
#define PRINTX(s, v)  { Serial.print(F(s)); Serial.print(F("0x")); Serial.print(v, HEX); }
#define PRINTS(s)     { Serial.print(F(s)); }

#define SERIAL_RATE 57600
#else
#define USE_MIDI 1

#define PRINT(s, v)   {}
#define PRINTX(s, v)  {}
#define PRINTS(s)     {}

#define SERIAL_RATE 31250
#endif // USE MIDI
