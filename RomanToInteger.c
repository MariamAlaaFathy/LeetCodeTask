#include <stdio.h>

int romanToInt(char* s) {
 	int n = 0;
 	char c;

 	while (c = *s ++) {
		switch (c) {
			case 'I':
				if (*s == 'V') {
					n += 4;
					s ++;
				} else if (*s == 'X') {
					n += 9;
					s ++;
				} else {
					n += 1;
				}
				break;
			case 'V':
				n += 5;
				break;
			case 'X':
				if (*s == 'L') {
					n += 40;
					s ++;
				} else if (*s == 'C') {
					n += 90;

				} else {
					n += 10;
				}
				break;
 			case 'L':
				n += 50;
				break;
 			case 'C':
				if (*s == 'D') {
 					n += 400;
 					s ++;
				} else if (*s == 'M') {
 					n += 900;
 					s ++;
				} else {
 					n += 100;
				}
 				break;
			case 'D':
 				n += 500;
 				break;
			case 'M':
 				n += 1000;
 				break;
			default:
 				break;
		}
	}
 
	return n;
}
