#include<stdio.h>

int romanCharToInt(char c) {
	switch(c) {
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
	}
}

int romanToInt(char * s) {
	int result_int = 0;
	int pre_int = 0;			//前一个罗马数字对应整数
	int current_int = romanCharToInt(s[0]);
	result_int = pre_int = current_int;
	for(int i=1; s[i]!='\0'; i++) {
		current_int = romanCharToInt(s[i]);
		if(pre_int<current_int) {

		}
	}
	return result_int;


}



int main() {
	printf("I mod 7 = %d\nV mod 7 = %d\nX mod 7 = %d\nL mod 7 = %d\nC mod 7 = %d\nD mod 7 = %d\nM mod 7 = %d",'I'%7,'V'%7,'X'%7,'L'%7,'C'%7,'D'%7,'M'%7);
	return 0;
}
