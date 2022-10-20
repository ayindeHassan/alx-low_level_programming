#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
 #include <string.h>
 #include <stdio.h>


 /**
  * struct list_s - my structure
  * @str: char * parameter
  * @len: len
  * @next: next node
  */
 typedef struct list_s
 {
 char *str;
 unsigned int len;
 struct list_s *next;
 } list_t;

int _putchar(char);
size_t print_list(const list_t *h);

#endif
