//========================================
//*author: ABNQ
//*email:abnq_cn@qq.com
//*create time :
//*filename:my_str.c
//*description:
//========================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include.h"

/*
char *my_strcat(char *dest, const char *src);
int  my_strcmp(const char *s1, const char *s2);
int  my_strncmp(const char *s1, const char *s2, unsigned int n);
int  my_strcasecmp(const char *s1, const char *s2);
char *my_strcpy(char *dest, const char *src);
char *my_strtok(char *str, const char *delim);
char *my_strstr(const char *haystack, const char *needle);
*/
char *my_strcat(char *dest, const char *src)
{
	assert(dest != NULL && src != NULL);
	char *tmp = dest;
	
	while(*dest != '\0'){
		dest++;
	}
	
	while((*dest++ = *src++) != '\0');
	
	return tmp;
}

int  my_strcmp(const char *s1, const char *s2){
	assert(s1 != NULL && s2 != NULL);
	
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2){
		s1++;
		s2++;
	}
	
	return *s1 - *s2;
}

int  my_strncmp(const char *s1, const char *s2, unsigned int n){
	assert(s1 != NULL && s2 != NULL);
	
	while(*s1 != '\0' && s2 != '\0' && *s1 == *s2 && --n){
		s1++;
		s2++;
	}	
	return *s1 - *s2;		
}

int my_strcasecmp(const char *s1, const char *s2){
	assert(s1 != NULL && s2 != NULL);	

	while(*s1 != '\0' && *s2 != '\0' &&
				( ((*s1 >= 'A' && *s1 <= 'Z') ? (*s1 - 'A' + 'a') : (*s1)) == (( *s2 >= 'A' && *s2 <= 'Z') ? (*s2 - 'A' + 'a') :( *s2)))){
		s1++;
		s2++;
	}
	return ((*s1 >= 'A' && *s1 <= 'Z') ? (*s1 - 'A' + 'a') : (*s1))  - (( *s2 >= 'A' && *s2 <='Z') ? (*s2 - 'A' + 'a') :( *s2));	
}

char * my_strcpy(char *dest, const char *src){
	assert(dest != NULL && src !=NULL);	
		
	char *tmp = dest;
	while( ( *dest++ = *src++) != '\0');
	return tmp;
}

char * my_strtok(char *str, const char *delim){
	//assert(delim != NULL);

	static char *last_str = NULL;
	if(str == NULL && (str = last_str) == NULL){	
		return NULL;
	}
	char *tmp_str = str;
	const char *tmp_delim = NULL;

	while(*tmp_str != '\0'){
		tmp_delim = delim;
		while(*tmp_delim != '\0'){
			if(*tmp_delim == *tmp_str){
				last_str = tmp_str + 1;
				if((int *) (tmp_str - str) == NULL){		
					str = last_str;
					break;
				}
				*tmp_str = '\0';
				return str;
			}
			tmp_delim++;
		}
		tmp_str++;
	}
	return str;			
}

char *my_strstr(const char *haystack, const char *needle){
	assert(haystack != NULL && needle != NULL);

	char *tmp_haystack, *tmp_needle;
	if(*needle == '\0'){
		return (char *)haystack;
	}
	while(*haystack != '\0'){
		tmp_haystack = (char *)haystack;
		tmp_needle 	 = (char *)needle;
		while(*tmp_haystack != '\0' && tmp_needle !='\0' && !(*tmp_haystack - *tmp_needle)){
			tmp_haystack++;
			tmp_needle++;
		}
		if(*tmp_needle == '\0'){
			return tmp_haystack;
		}
		haystack++;
	}
	return NULL;
}

