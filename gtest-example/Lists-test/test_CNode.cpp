#include "Lists\CNode.h"
#include "Lists\fun.h"
#include <gtest\gtest.h>

TEST(CNode, can_vova_do_nothing)
{
  struct CNode* t;
  struct CNode* start; 
  start = new struct CNode();
	start->val = 0;
	start->next = 0;
  t=start;
  for(int i = 1; i < 10; i++) {
	  t->next = new struct CNode();
	  t = t->next;
	  t->val = i;
	  t->next = 0;
  }

	for(int i = 10; i > -1; i--) {
	  t->next = new struct CNode();
	  t = t->next;
	  t->val = i;
	  t->next = 0;
  }
  t=start;
  EXPECT_EQ(1, palindrom(&start)); 
}