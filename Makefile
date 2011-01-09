CFLAGS=-g -O3 -Wall -I.

TEST_SRC=$(wildcard test/*_test.c)
TESTS=$(patsubst %.c,%,${TEST_SRC})

clean:
	rm -rf build
	rm -rf ${TESTS}
	rm -rf test/*.dSYM

${TESTS}: %: %.c 
	$(CC) $(CFLAGS) -o $@ $<

tests: ${TESTS}
	./test/mintest_test
