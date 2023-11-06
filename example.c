#include <stdio.h>
#include "strlen-int.h"

int main() {
    char s[100];
    printf("\nPlease input example string.\n >> ");
    fgets(s, sizeof(s), stdin);
    printf("\nString length: %d", strleni(s));
    return 0;
}
