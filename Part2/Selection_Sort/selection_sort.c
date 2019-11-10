#include <stdio.h>

int count = 0;
void displayList(int *list, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");
}

int *selectionSort(int *list, int length)
{
    for (int i = 0; i < length; i++)
    {
        int mini = i;
        for (int j = i; j < length; j++)
        {
            if (list[j] < list[mini])
            {
                mini = j;
            }
        }
        if (mini != i)
        {
            int tmp = list[i];
            list[i] = list[mini];
            list[mini] = tmp;
            count += 1;
        }
    }
    return list;
}

int main()
{
    printf("要素数を入力\n");
    int length;
    scanf("%d", &length);
    int input[length];

    printf("値を入力\n");
    for (int a = 0; a < length; a++)
    {
        scanf("%d", &input[a]);
    }

    int *result = selectionSort(input, length);
    displayList(result, length);
    printf("%d\n", count);
    return 0;
}