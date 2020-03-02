#include <stdio.h>

int main()
{
    int numbers[10], max;
    printf("Enter 10 integer numbers: \n");
    
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &numbers[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (i == 0) 
        {
            max = numbers[i];
        }
        else if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    
    printf("Maximum number: %d", max);

    return 0;
}
