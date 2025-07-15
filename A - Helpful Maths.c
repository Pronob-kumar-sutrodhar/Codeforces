#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
 
    int digits[100];
    int count = 0;
 
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            digits[count++] = s[i] - '0';
        }
    }
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (digits[i] > digits[j])
            {
                int temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d", digits[i]);
        if (i != count - 1)
            printf("+");
    }
    return 0;
}
