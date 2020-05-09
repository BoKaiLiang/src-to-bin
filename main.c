#include <stdlib.h>
#include <stdio.h>

#include "calc.h"

int main() {

    int a = 16, b = 27;

    int ans = add(16, 27);
    printf("%d + %d = %d\n", a, b, ans);

    ans = sub(a, b);
    printf("%d - %d = %d\n", a, b, ans);

    ans = mul(a, b);
    printf("%d * %d = %d\n", a, b, ans);

    printf("\n\nPress to exit...\n");
    getchar();
    return EXIT_SUCCESS;
}