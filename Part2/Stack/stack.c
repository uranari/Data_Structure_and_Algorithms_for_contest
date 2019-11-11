#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top, list[1000];

void push(int x)
{
    top = top + 1;
    list[top] = x;
}

int pop()
{
    top--;

    return list[top + 1];
}

int main()
{
    int a, b;
    top = 0;
    char s[100];

    while (scanf("%s", s) != EOF)
    {
        if (s[0] == '+')
        {

            b = pop();
            a = pop();
            push(b + a);
        }
        else if (s[0] == '-')
        {

            a = pop();
            b = pop();
            push(b - a);
        }
        else if (s[0] == '*')
        {

            a = pop();
            b = pop();
            push(b * a);
        }
        else
        {
            push(atoi(s));
        }
    }

    printf("%d\n", pop());
    return 0;
}