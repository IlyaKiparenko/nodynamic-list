
#include "CNode.h"
#include "fun.h"

int palindrom(struct CNode** start) {
  if (*start == 0) 
	return 1;
  else {
    if ((*start)->next == 0)
	  return 1;
	int i = 0;
    CNode* a= *start;
	while (a->next != 0)  {
	  a = a->next;
	  i++;
	}
	CNode* st=*start;
	while ((st->val == a->val) && (i >= 0)) {
	  st = st->next;
	  a = st;
	  i -= 2;
	  for (int j = 0; j < i; j++) {
	    a = a->next;
	  }
	}
	return (i < 0);
  }
}
