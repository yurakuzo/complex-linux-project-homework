#include <stdio.h>
#include "convert.h"

int main() {
    char text[100];
    
    printf("Enter text: ");
    fgets(text, 100, stdin);
    
    to_lower(text);
    printf("Result: %s", text);
    
    return 0;
}

