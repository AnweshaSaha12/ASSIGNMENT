#include <stdio.h>

int strLength(char s[]) {
    int i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}

void strCopy(char src[], char dest[]) {
    int i;
    for(i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
}

void strConcat(char s1[], char s2[]) {
    int i, j;
    for(i = 0; s1[i] != '\0'; i++);
    for(j = 0; s2[j] != '\0'; j++, i++)
        s1[i] = s2[j];
    s1[i] = '\0';
}

int strCompare(char s1[], char s2[]) {
    int i = 0;
    while(s1[i] == s2[i]) {
        if(s1[i] == '\0')
            return 0;
        i++;
    }
    return s1[i] - s2[i];
}

int main() {
    char str1[100], str2[100], copy[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    printf("Length of first string: %d\n", strLength(str1));
    strCopy(str1, copy);
    printf("Copied string: %s\n", copy);

    strConcat(str1, str2);
    printf("After concatenation: %s\n", str1);

    int cmp = strCompare(copy, str2);
    if(cmp == 0)
        printf("Strings are equal.\n");
    else if(cmp > 0)
        printf("First string is greater.\n");
    else
        printf("Second string is greater.\n");

    return 0;
}

