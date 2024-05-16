//
// Created by Piotr on 16.05.2024.
//
#include <iostream>
#include "text.h"
void entertext(char *text) {
    printf("Enter Text :\n");
    fgets(text,99,stdin);
}
void printtext(char *text)
{printf("%s\n",text);}
void clear(void)
{
    while(getchar()!= '\n');
}
int count(char *text)
{
    int c = 0 ;
    while(*(text + c))
    {
        c++;
    }
    c =  c - 1;
    return c;

}
void bigLetters(char *string)
{
    while (*string)
    {
        if ('a' <= *string && *string <= 'z')
        {
            *string -= ('a' - 'A');
        }
        string++;
    }
}
void smallLetters(char *string)
{
    while (*string)
    {
        if ('A' <= *string && *string <= 'Z')
        {
            *string += ('a' - 'A');
        }
        string++;
    }
}