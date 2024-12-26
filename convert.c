#include <ctype.h>
#include "convert.h"

void to_upper(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

void to_lower(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

