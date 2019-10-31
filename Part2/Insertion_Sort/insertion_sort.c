#include <stdio.h>

int *insertSort(int *list, int N)
{
    for (int i = 1; i < N; i++)
    {
        int v = list[i];
        int j = i - 1;

        while (j >= 0 && list[j] > v)
        {
            list[j + 1] = list[j];
            j--;
        }
        list[j + 1] = v;
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

    int *result = insertSort(input, length);

    for (int i = 0; i < length; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}