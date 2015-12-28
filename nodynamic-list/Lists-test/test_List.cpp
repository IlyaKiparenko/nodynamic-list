
#include "Lists\List.h"
#include <gtest\gtest.h>

TEST(List, can_create_list)
{
  ASSERT_NO_THROW(List a(10));
}

TEST(List, can_add_element)
{
  List a(3);
  ASSERT_NO_THROW(a.add(4));
}

TEST(List, can_get_element)
{
  List a(3);
  a.add(4);
  EXPECT_EQ(*a, 4);
}

TEST(List, can_delete_element)
{
  List a(3);
  a.add(4);
  a.next();
  a.add(3);
  ASSERT_NO_THROW(a.del());
  a.next();
  EXPECT_EQ(*a, 4);
}