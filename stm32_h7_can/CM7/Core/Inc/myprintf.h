/*
 * myprintf.h
 *
 *  Created on: Sep 30, 2024
 *      Author: richywarrior
 */

#ifndef INC_MYPRINTF_H_
#define INC_MYPRINTF_H_

#include <stdio.h>
#ifdef __GNUC__
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif



#endif /* INC_MYPRINTF_H_ */
