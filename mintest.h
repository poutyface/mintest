#define mt_assert(C, M, ...) do { mintest.assertions++; if(!(C)){ printf("Assertion faild: %s:%d (" #C ")", __FILE__, __LINE__); printf(" " M "\n", ##__VA_ARGS__); return -1; } } while(0)

#define mt_run_test(test) do { mintest.tests++; if((test()) == -1){ mintest.failers++; } } while(0)

#define mt_result() printf("\n%d tests, %d assertions, %d failers\n", mintest.tests, mintest.assertions, mintest.failers)

typedef struct MINTEST{
  int tests;
  int failers;
  int assertions;
}MINTEST;

extern MINTEST mintest;
