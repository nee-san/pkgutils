
#include <stdio.h>
#include <string.h>
#include "govno.h"

int main(int argc, char *argv[])
{
	char s1[255] = "";
	char s2[255] = "";
	int ret;

	if(argc > 1) {
		strlcpy(s1, argv[1], 255);
	}
	if(argc > 2) {
		strlcpy(s2, argv[2], 255);
	} else {
		printf("0\n");
		return(0);
	}
	
	ret = rpmvercmp(s1, s2);
	printf("%d\n", ret);
	return(ret);
}
