#ifndef MAIN_H
#define MAIN_H
/**
 * @details bit value of 'num' at position 'position'
 */
extern unsigned int SetBit(unsigned int num, unsigned int position);

/**
 * @details Function to reset (clear) a bit at a specific position
 */
extern unsigned int ResetBit(unsigned int num, unsigned int position);

/**
 * @details Function to read a bit at a specific position
 */
extern unsigned int ReadBit(unsigned int num, unsigned int position);

/**
 * @details Function to toggle a bit at a specific position
 */
extern unsigned int ToggleBit(unsigned int num, unsigned int position) ;

/**
 * @details Function to convert an integer to a string
 */
extern void IntToString(int num, char *str);

/**
 * @details Function to reverse a string
 */
extern void ReverseString(char *str);


/**
 * @param *str address of string
 * @return length (int) of string
 * @details return length of string
 */
extern int _stringLength(char *str);

/**
 * @param *str address of string
 * @return length (int) of string
 * @details return length of string
 */
extern int _swapChar(char *p1,char *p2);
 
#endif