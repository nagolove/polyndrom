#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_polyndrome(const char *input) {
    int len = strlen(input);
    /*printf("len / 2 = %d\n", len / 2);*/
    for(int i = 0; i < len / 2; i++) {
        if (input[i] != input[len - i - 1])
            return false;
    }
    return true;
}

void check(const char *s) {
    printf("%s = %s\n", s, is_polyndrome(s) ? "true" : "false");
}

int main() {
    check("12321342141");   // 1
    check("12300342141");   // 0
    check("123454321");     // 1
    check("12344321");      // 1
    check("1");             // 1
    check("11");            // 1
    check("10");            // 0
    check("100");           // 0
    return EXIT_SUCCESS;
}
