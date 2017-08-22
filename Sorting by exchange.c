#include <stdio.h>
//#include <stdlib.h>



int function(int array[])
{

    for (int n = 0; n < 10; n++)
    {
        int min = array[n];

        for (int i = n+1; i < 10; i++)
        {
            if (min > array[i])
            {
                min = array[i];
            }
        }
//        printf("%d\n", min);
        int b = array[n];
        array[n] = min;
        for (int i = n + 1; i < 10; i++)
        {
            if (array[i] == min)
            {
                array[i] = b;
                break;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

}

int main()

{
    int array[10] = { 5, 8, 20, 2, 10, 45, 6, 102, 124, 3 };
    function(array);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf ("\n");
//    system("pause");
    return 0;
}