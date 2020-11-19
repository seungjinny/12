#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char src[]= "The worst things to eat before you sleep";
	char dst[100];
	int i;
	
	printf("original string: %s\n", src);
		for (i=0; src[i] != '\0'; i++)
			dst[i]=src[i];
			
	dst[i] = '\0';
	printf("copied string : %s\n", dst);
	
	return 0;
}
