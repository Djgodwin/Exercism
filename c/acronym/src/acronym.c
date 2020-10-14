#include "acronym.h"

char *abbreviate(char *phrase)
{
    if (phrase == NULL)
    {
        return NULL;
    }

    int n = strlen(phrase);

    if (n == 0)
    {
        return NULL;
    }

    char *acronym = malloc(1 * sizeof(char));
    acronym[0] = '\0';
    int index = 0;
    int first = 0;

    for (int i = 0; i < n; i++)
    {
        if (first == 0) {
            acronym[index] = toupper(phrase[i]);
            acronym = realloc(acronym, index + 1);
            acronym[index + 1] = '\0';
            index++;
            first = 1;
        }

        switch (phrase[i])
        {
            case ' ':
            case '-':
                first = 0;
                break;

            default:
                break;
        }
    }
    return acronym;
}
