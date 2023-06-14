#include <stdio.h>

int isVowel(char ch) {
    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            return 1;
        default:
            return 0;
    }
}
int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if (isVowel(ch)) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }
    
    return 0;
}