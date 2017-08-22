#include <stdio.h>
//#include <stdlib.h>

int function (int array[])
{
    for (int n = 0; n < 10; n++)
    {
        int b = 0;
        for (int i = 0; i < 9; i++)
        {
            if (array[i] > array[i + 1])
            {
                int b = array[i];
                array[i] = array[i + 1];
                array[i + 1] = b;
            }
        }
        if (b = 0)
        {
            break;
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