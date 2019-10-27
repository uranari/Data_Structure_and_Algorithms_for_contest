#include <stdio.h>

int searchmax(int *list, int listNumber)
{
    //int listNumber = sizeof list / sizeof list[0];
    int max = -100;
    int buy = 0;
    int sell = 0;
    printf("listの要素数は%dです\n", listNumber);

    for (int i = 1; i < listNumber; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("i = %d j = %d\n", list[i], list[j]);
            if (max < list[i] - list[j])
            {
                max = list[i] - list[j];
            }
            printf("現在のmax値は%dです\n", max);
        }
    }

    return max;
}

void main()
{

    printf("要素数を入力\n");
    int length;
    scanf("%d", &length);

    int input[length];

    for (int i = 0; i < length; i++)
    {
        printf("%d番目の値を入力してください\n", i);
        scanf("%d", &input[i]);
    }

    int result = searchmax(input, length);
    printf("max値は%dです\n", result);
}