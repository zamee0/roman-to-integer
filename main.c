#include <stdio.h>
#include <string.h>


int romanCharToInt(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0; 
    }
}


int romanToInt(const char *s) {
    int total = 0;
    int i;

    for(i = 0; s[i] != '\0'; i++) {
        int current = romanCharToInt(s[i]);
        int next = romanCharToInt(s[i + 1]);

      
        if(current < next) {
            total -= current;
        } else {
            total += current;
        }
    }

    return total;
}

int main() {
    char roman[100];

    printf("Enter a Roman numeral: ");
    scanf("%s", roman);

    int result = romanToInt(roman);

    if(result > 0)
        printf("Integer value: %d\n", result);
    else
        printf("Invalid Roman numeral.\n");

    return 0;
}
