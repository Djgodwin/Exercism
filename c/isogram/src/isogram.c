#include "isogram.h"

bool is_isogram(const char phrase[]) {
    if (phrase == NULL) {
        return false;
    }

    int count[26] = {0};

    for (int i = 0; i < (int) strlen(phrase); i++) {
        int c = phrase[i];

        if ((c < 65 || c > 122) || (c > 90 && c < 97)) {
            continue;            
        }

        if (count[ (c < 91) ? (c + 6 + 26) % (123 - 26) : (c % (123 - 26)) ] > 0)
        {
            return false;
        } else {
            count[ (c < 91) ? (c + 6 + 26) % (123 - 26) : (c % (123 - 26)) ]++;
        }
    }

    return true;
}
int main() {
    is_isogram("helo");
}