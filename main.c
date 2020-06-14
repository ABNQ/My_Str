//========================================
//*author: ABNQ
//*email:abnq_cn@qq.com
//*create time :2020-06-08 09:11
//*filename:main.c
//*description:
//========================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include.h"
int main()
{
	char a[] = "ab,gf,bf,cdc";
	char *s = "sndasknp";
	printf("%d\n",my_strncmp(a,s,2));
	printf("%d\n",my_strcmp(a,s));
	printf("%d\n",my_strcasecmp(a,s));
	printf("%s\n",my_strstr(a,"ab"));
	printf("%s\n",my_strtok(a,","));
	printf("%s\n",my_strtok(NULL,","));
	printf("%s\n",my_strtok(NULL,","));
	printf("%s\n",my_strtok(NULL,","));
	printf( "%s\n",my_strcat(a,s));
	printf("%s\n",my_strcpy(a,s));
	return 0;
}
