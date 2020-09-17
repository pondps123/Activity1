#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
char asc(char x)
{
	if (x >= 97 && x <= 122)
	{
		x -= 32;
		printf("%c", x);
	}
	else if (x >= 65 && x <= 90)
	{
		x += 32;
		printf("%c", x);
	}
	return x;
}
int main()
{
	char* p, str[80];
	p = str;
	scanf("%s", str);
	while (*p != '\0') 
	{
		asc(*p);
		p++;
	}
}