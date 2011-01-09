#include <stdio.h>
#include "mintest.h"

MINTEST mintest;

int test_succeed()
{
  int i = 0;
  mt_assert(i == 0, "should be succeed i=%d", i);
  return 0;
}


int test_fail()
{
  int i = 0;
  mt_assert(i == 1, "should be fail i=%d", i);
  return 0;
}


void test_all()
{
  mt_run_test(test_succeed);
  mt_run_test(test_fail);
}


int main()
{
  test_all();
  mt_result();
  return 0;
}
