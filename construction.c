#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #include "construction.h"
struct foo {
  char * strs;
  // char c;
  int n;
};

void printstruct(struct foo * exm) {

  printf("%s %d\n", exm->strs, exm->n);
  // printf("%c %d\n", exm->c, exm->n);

}

struct foo * heapstruct(char * s, int i) {
// struct foo * heapstruct(char s, int i) {

  struct foo * p = malloc(sizeof(struct foo));
  // strcpy(p->strs, &s);
  p->strs = s;
  // p->c = s;
  p->n = i;
  return p;

}

int main() {

  struct foo test1;
  test1.strs = "The number of pokemon in Johto is: ";
  // test1.c = 'd';
  test1.n = 100;
  printstruct(&test1);

  struct foo * test2 = heapstruct("There are this many dalmations: ", 101);
  // struct foo * test2 = heapstruct('d', 100);
  printstruct(test2);

  srand(time(NULL));
  int r = rand();
  struct foo * test3 = heapstruct("This is a random number: ", r);
  printstruct(test3);

}
