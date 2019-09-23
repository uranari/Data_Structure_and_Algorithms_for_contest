#include <stdio.h>
#define ARRAY_SIZE 5

int *bubble_sort(int *list)
{
    int i, j, tmp;
    for (i = 0; i < ARRAY_SIZE - 1; i++)
    {
        for (j = i + 1; j < ARRAY_SIZE; j++)
        {
            if (list[j] < list[i])
            {
                tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        }
    }
    return list;
}

void main()
{
    int input[ARRAY_SIZE] = {5, 3, 2, 4, 1};

    int *result = bubble_sort(input);

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
}