/* 
 * 5-high FONT FOR RENDERING TO THE LED SCREEN.
 * Includes kerning support
 * Gaurav Manek, 2011
 */

#ifndef __FONT5X4_H
#define __FONT5X4_H

#include <avr/pgmspace.h>

#define FONT_5X4_HEIGHT  5

#define FONT_5X4_STEP_GLYPH 10
// Number of bytes per glyph 

const char FONT_5X4 [] PROGMEM = {
  0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000,  // SPACE
  0b0111, 0b0001, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000,  // !
  0b0011, 0b0000, 0b0000, 0b0000, 0b0011, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000,  // "
  0b1010, 0b0000, 0b1111, 0b0001, 0b1010, 0b0000, 0b1111, 0b0001, 0b1010, 0b0000,  // #
  0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000,  // $
  0b0011, 0b0001, 0b1011, 0b0000, 0b0100, 0b0000, 0b1010, 0b0001, 0b1001, 0b0001,  // %
  0b1010, 0b0000, 0b0101, 0b0001, 0b1001, 0b0001, 0b1010, 0b0001, 0b0000, 0b0000,  // &
  0b0011, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000,  // '
  
  0b1110, 0b0000, 0b0001, 0b0001, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000,  // (
  0b0001, 0b0001, 0b1110, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000,  // )
  0b0101, 0b0000, 0b0010, 0b0000, 0b0101, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000,  // *
  0b0100, 0b0000, 0b0100, 0b0000, 0b1111, 0b0001, 0b0100, 0b0000, 0b0100, 0b0000,  // +
  0b0000, 0b0001, 0b1000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000,  // ,
  0b0100, 0b0000, 0b0100, 0b0000, 0b0100, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000,  // -
  0b0000, 0b0001, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000,  // .
  0b0000, 0b0001, 0b1100, 0b0000, 0b0110, 0b0000, 0b0001, 0b0000, 0b0000, 0b0000,  // /
  
  0b1110, 0b0000, 0b0001, 0b0001, 0b1110, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000,  // 0
  0b0010, 0b0001, 0b1111, 0b0001, 0b0000, 0b0001, 0b0000, 0b0000, 0b0000, 0b0000,  // 1
  0b0010, 0b0001, 0b1001, 0b0001, 0b0101, 0b0001, 0b0010, 0b0001, 0b0000, 0b0000,  // 2
  0b0101, 0b0001, 0b0101, 0b0001, 0b1010, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000,  // 3
  0b1100, 0b0000, 0b1010, 0b0000, 0b1111, 0b0001, 0b1000, 0b0000, 0b0000, 0b0000,  // 4
  0b0111, 0b0001, 0b0101, 0b0001, 0b1101, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000,  // 5
  0b1110, 0b0000, 0b0101, 0b0001, 0b0101, 0b0001, 0b1000, 0b0000, 0b0000, 0b0000,  // 6
  0b0001, 0b0000, 0b1101, 0b0001, 0b0101, 0b0000, 0b0011, 0b0000, 0b0000, 0b0000,  // 7
  
  0b1010, 0b0000, 0b0101, 0b0001, 0b0101, 0b0001, 0b1010, 0b0000, 0b0000, 0b0000,  // 8
  0b0010, 0b0000, 0b0101, 0b0000, 0b0101, 0b0001, 0b1110, 0b0000, 0b0000, 0b0000,  // 9
  0b1010, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, // :
  0b0000, 0b0001, 0b1010, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, // ;
  0b0100, 0b0000, 0b1010, 0b0000, 0b0001, 0b0001, 0b0000, 0b0000, 0b0000, 0b0000, // <
  0b1010, 0b0000, 0b1010, 0b0000, 0b1010, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, // =
  0b0001, 0b0001, 0b1010, 0b0000, 0b0100, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, // >
  0b0010, 0b0000, 0b0001, 0b0000, 0b1001, 0b0001, 0b0110, 0b0000, 0b0000, 0b0000, // ?
  
  0b1110, 0b0000, 0b0001, 0b0000, 0b1101, 0b0000, 0b0101, 0b0001, 0b1111, 0b0000, // @
  0b1110, 0b0001, 0b0101, 0b0000, 0b0101, 0b0000, 0b1110, 0b0001, 0b0000, 0b0000, // A
  0b1111, 0b0001, 0b0101, 0b0001, 0b1010, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, // B
  0b1110, 0b0000, 0b0001, 0b0001, 0b0001, 0b0001, 0b1010, 0b0000, 0b0000, 0b0000, // C
  0b1111, 0b0001, 0b0001, 0b0001, 0b1110, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, // D
  0b1111, 0b0001, 0b0101, 0b0001, 0b0001, 0b0001, 0b0000, 0b0000, 0b0000, 0b0000, // E
  0b1111, 0b0001, 0b0101, 0b0000, 0b0101, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, // F
  0b1110, 0b0000, 0b0001, 0b0001, 0b1001, 0b0001, 0b1010, 0b0000, 0b0000, 0b0000, // G
  
  0b1111, 0b0001, 0b0100, 0b0000, 0b0100, 0b0000, 0b1111, 0b0001, 0b0000, 0b0000, // H
  0b0001, 0b0001, 0b1111, 0b0001, 0b0001, 0b0001, 0b0000, 0b0000, 0b0000, 0b0000, // I
  0b1001, 0b0000, 0b0001, 0b0001, 0b1111, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, // J
  0b1111, 0b0001, 0b0100, 0b0000, 0b1010, 0b0000, 0b0001, 0b0001, 0b0000, 0b0000, // K
  0b1111, 0b0001, 0b0000, 0b0001, 0b0000, 0b0001, 0b0000, 0b0000, 0b0000, 0b0000, // L
  0b1111, 0b0001, 0b0010, 0b0000, 0b0100, 0b0000, 0b0010, 0b0000, 0b1111, 0b0001, // M  
  0b1111, 0b0001, 0b0010, 0b0000, 0b0100, 0b0000, 0b1000, 0b0000, 0b1111, 0b0001, // N
  0b1110, 0b0000, 0b0001, 0b0001, 0b0001, 0b0001, 0b1110, 0b0000, 0b0000, 0b0000, // O
  
  0b1111, 0b0001, 0b0101, 0b0000, 0b0010, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, // P
  0b1110, 0b0000, 0b0001, 0b0001, 0b0001, 0b0001, 0b1001, 0b0000, 0b0110, 0b0001, // Q
  0b1111, 0b0001, 0b0101, 0b0000, 0b1010, 0b0001, 0b0000, 0b0000, 0b0000, 0b0000, // R
  0b0010, 0b0001, 0b0101, 0b0001, 0b0101, 0b0001, 0b1001, 0b0000, 0b0000, 0b0000, // S
  0b0001, 0b0000, 0b1111, 0b0001, 0b0001, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, // T  
  0b1111, 0b0000, 0b0000, 0b0001, 0b0000, 0b0001, 0b1111, 0b0000, 0b0000, 0b0000, // U
  0b0011, 0b0000, 0b1100, 0b0000, 0b0000, 0b0001, 0b1100, 0b0000, 0b0011, 0b0000, // V
  0b1111, 0b0000, 0b0000, 0b0001, 0b1100, 0b0000, 0b0000, 0b0001, 0b1111, 0b0000, // W
  
  0b1011, 0b0001, 0b0100, 0b0000, 0b1011, 0b0001, 0b0000, 0b0000, 0b0000, 0b0000, // X
  0b0011, 0b0000, 0b1100, 0b0001, 0b0011, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, // Y
  0b1001, 0b0001, 0b0101, 0b0001, 0b0101, 0b0001, 0b0011, 0b0001, 0b0000, 0b0000, // Z
  0b1111, 0b0001, 0b0001, 0b0001, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, // [
  0b0001, 0b0000, 0b0110, 0b0000, 0b1100, 0b0000, 0b0000, 0b0001, 0b0000, 0b0000, // backslash
  0b0001, 0b0001, 0b1111, 0b0001, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, // ]
  0b0010, 0b0000, 0b0001, 0b0000, 0b0010, 0b0000, 0b0000, 0b0000, 0b0000, 0b0000, // ^
  0b0000, 0b0001, 0b0000, 0b0001, 0b0000, 0b0001, 0b0000, 0b0000, 0b0000, 0b0000  // _
};

const char FONT_5X4_WIDTH [] = {
  1, 1, 3, 5, 4, 5, 4, 1,
  2, 2, 3, 5, 2, 3, 1, 4,
  3, 3, 4, 3, 4, 3, 4, 4,
  4, 4, 1, 2, 3, 3, 3, 4,
  5, 4, 3, 4, 3, 3, 3, 4,
  4, 3, 3, 4, 3, 5, 5, 4,
  3, 5, 3, 4, 3, 4, 5, 5,
  3, 3, 4, 2, 4, 2, 3, 3
};

#endif  // __FONT5X4_H
