// C program to reverse a string using two pointers

#include <stdio.h>
#include <string.h>

char* reverseString(char *s) {
    int left = 0, right = strlen(s) - 1;

    // Swap characters from both ends till we reach
    // the middle of the string
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
  
    return s;
}

int main() {
    char s[] = "abdcfe"; 
    printf("%s", reverseString(s)); 
    return 0;
}