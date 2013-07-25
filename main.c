#include "stdio.h"

int main(void){
	char name[255];
	printf ("Hello! Enter your name: ");
	scanf ("%s", name);
	
	printf ("Thanks. Your name is '%s'.\n", name);
	return 1;
}
