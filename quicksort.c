#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void randomarray(int array[10])
{
    for (int l = 0; l < 10; l++)
    {
            array[l] = rand() % 50;
    }
}

void fastsort (int array[], int left, int right)
{

        int opora = array[left];
        int lgranica = left;
        int rgranica = right;
        while (left < right)
        {
            for(right; array[right] >= opora && left < right; right--)
            {

            }
                if (right != left)
                {
                    array[left]=array[right];
                }
            for (int l = 0; l < 10; l++)
            {
                printf("%d ", array[l]);
            }
            printf("\n\n");
            for(left; array[left] <= opora && left < right; left++)
            {

            }
                if (right != left)
                {
                    array[right] = array[left];
                }
            for (int l = 0; l < 10; l++)
            {
                printf("%d ", array[l]);
            }
            printf("\n\n");
        }
    array[left]= opora;
    opora = left;
    left = lgranica;
    right = rgranica;

    if(left < opora)
    {
        fastsort(array, left, opora - 1);
    }
    if(right > opora)
    {
        fastsort(array, opora + 1, right);
    }
}

int main()
{
    int array[10] = {0};
    srand(time(NULL));
    randomarray(array);

    for (int l = 0; l < 10; l++)
    {
            printf("%d ", array[l]);
    }
    printf("\n\n");

    fastsort(array, 0, 9);

    for (int l = 0; l < 10; l++)
    {
        printf("%d ", array[l]);
    }

//    system("pause");
    return 0;
}
