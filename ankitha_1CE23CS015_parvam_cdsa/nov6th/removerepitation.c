#include <stdio.h>

void remove_repeated_letters(char str[]) {
    int i, j, k;
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                for (k = j; k < len; k++) {
                    str[k] = str[k + 1];
                }
                len--;
                j--;
            }
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    remove_repeated_letters(str);
    printf("String after removing repeated letters: %s\n", str);
    return 0;
}

