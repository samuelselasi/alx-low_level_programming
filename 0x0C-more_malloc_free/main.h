#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int len(char *str);
char *alloc_array(int size);
char *check_num(char *str);
int _atoi(char c);
void product(char *prod, char *mult, int digit, int zeroes);
void sum(char *final_prod, char *next_prod, int next_len);
int _putchar(char c);

#endif
