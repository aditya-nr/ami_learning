#ifndef MAIN_H
#define MAIN_H

/**
 * @param *str1 address of first string
 * @param *str2 address of second string
 * @return  true when string is same otherwise false
 * @details check weather two string is same of not
 */
extern int _stringCompare(char *str1,char *str2);

/**
 * @param *str address of string
 * @return length (int) of string
 * @details return length of string
 */
extern int _stringLength(char *str);

/**
 * @param *src source string address
 * @param *target target stringa address
 * @details copy the string from src to target
 */
extern void _stringCopy(char *src,char *target);

/**
 * @param *src source string address
 * @details removes the space character within the string. chages made in original string
 */
extern void _stringNoSpace(char *str) ;

/**
 * @param *src source string address
 * @details reverse the string. chages made in original string
 */
extern void _reverseString(char *str) ;


#endif