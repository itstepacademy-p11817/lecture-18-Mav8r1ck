#include <stdio.h>
//#include <stdlib.h>

int function (int array[])
{
    for (int n = 0; n < 9; n++)
    {
        for (int i = n + 1 ; i > -1; i--)
        {

            if (array[i] < array[i-1])
            {
                int c = 0;
                c = array[i-1];
                array[i-1] = array[i];
                array[i] = c;
                for (int d = 0; d < 10; d++)
                {
                    printf("%d ", array[d]);
                }
                printf("\n");
            }
            else
            {
            continue;
            }

        }
    }
}

int main()

{
    int array[10] = { 5, 8, 20, 2, 10, 45, 6, 102, 124, 3 };
    function(array);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", array[i]);
    }
//    system("pause");
    return 0;
}