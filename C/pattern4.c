#include <stdio.h>
int main() 
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) 
	{
        for (int j = 1; j <= i; j++) 
		{
            if (j % 2 == 0) 
			{
                printf("0 ");
            } else 
			{
                printf("1 ");
            }
        }
        printf("\n");
    }
}
