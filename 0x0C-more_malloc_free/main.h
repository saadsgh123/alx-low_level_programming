#ifndef MAIN_H
#define MAIN_H

int *array_range(int min, int max);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int length(char *s);
char *_memset(char *s, char b, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
#endif
