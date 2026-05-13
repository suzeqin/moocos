#include <stdio.h>
#include <ulib.h>

int zero;

int
main(void) {
    int one = 1;
    asm volatile (
        "cltd;\n"
        "idivl %0;\n"
        :
        : "r"(zero), "a"(one)
        : "edx"
    );
    panic("FAIL: T.T\n");
}
