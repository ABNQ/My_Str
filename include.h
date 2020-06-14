//========================================
//*author: ABNQ
//*email:abnq_cn@qq.com
//*create time :2020-06-08 09:14
//*filename:include.h
//*description:
//========================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#ifndef __INCLUDE_H__
#define __INCLUDE_H__

char *my_strcat(char *dest, const char *src);
int  my_strcmp(const char *s1, const char *s2);
int  my_strncmp(const char *s1, const char *s2, unsigned int n);
int  my_strcasecmp(const char *s1, const char *s2);
char *my_strcpy(char *dest, const char *src);
char *my_strtok(char *str, const char *delim);
char *my_strstr(const char *haystack, const char *needle);

#endif
