#include <stdio.h>

void alphabet(void);

int main(void){
	alphabet();
	}


void alphabet(void){
		for(char c = 122; c >= 97; c--){
		printf("%c", c);
		}
}
