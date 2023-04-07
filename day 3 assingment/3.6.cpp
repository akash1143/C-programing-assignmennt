
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0}, i, flag = 0;
    
    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    
    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    if(strlen(str1) != strlen(str2)) {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++) {
        freq1[str1[i] - 'a']++;
    }
    
    for(i = 0; str2[i] != '\0'; i++) {
        freq2[str2[i] - 'a']++;
    }
    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            flag = 1;
            break;
        }
    }
    
    if(flag) {
        printf("The strings are not anagrams.\n");
    }
    else {
        printf("The strings are anagrams.\n");
    }
    
    return 0;
}
