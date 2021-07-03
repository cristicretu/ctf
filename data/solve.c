#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool check(char* str);

int main()
{
    FILE *file = fopen("data.dat", "r");

    int answer = 0;

    const size_t line_size = 512;
    char* line = malloc(line_size);
    while (fgets(line, line_size, file) != NULL)
    {
        // printf("%s\n", line);

        int zero = 0, one = 0;

        for (int i = 0, n = strlen(line); i < n; ++i)
        {
            if (line[i] == '0')
            {
                zero += 1;
            }
            else if (line[i] == '1')
            {
                one += 1;
            }
        }

        if (zero % 3 == 0 && one % 2 == 0)
        {
            answer += 1;
        }
    }

    free(line);

    printf("%d\n", answer);
}

bool check(char* str)
{
    int countOfZero = 0;
    int countOfOne = 0;

    for (int i = 0, n = strlen(str); i < n; ++i)
    {
        if (*(str + i) == '0')
        {
            countOfZero += 1;
        }
        else if(*(str + i) == '1') 
        {
            countOfOne += 1;
        }
    }

    return (countOfZero % 3 == 0) && (countOfOne % 2 == 0);
}
