#include <stdio.h>
#include <string.h>

#include "parse.h"

int main( void ) {
	char buf[512] = {};

	while ( 1 ) {
		printf("计算器(霸气) : ");
		memset(buf, 0x00, sizeof(buf));
		scanf("%[^\n]%*c", buf);
		parse(buf);
	}
}
