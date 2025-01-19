#include <stdio.h>
#define SIZE 4
int removeElement(int *, int, int);

int main(void)
{
    int array[SIZE] = {3, 2, 2, 3};
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d,", array[i]);
    }
    printf("\n");
    removeElement(array, SIZE, 3);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d,", array[i]);
    }

    return 0;
}

int removeElement(int* nums, int numsSize, int val) 
{
    int * p_to_array = nums;
    int * p_to_temp;
    int count;

    while (p_to_array < nums + numsSize)
    {
        if (*p_to_array == val)
        {
            count++;
            p_to_temp = p_to_array;
            while (*(p_to_temp) == val)
            {
                while (p_to_temp < nums + numsSize)
                {
                    *(p_to_temp) = *(p_to_temp + 1);
                    p_to_temp++;
                }
                p_to_temp = p_to_array;
            }
        }
        p_to_array++;
    }
    return count;
}

            // while (p_to_temp != nums + numsSize)
            // {   
            //     while (*(p_to_temp) == val)
            //     {
            //         *(p_to_temp) = *(p_to_temp + 1);
            //         p_to_temp++;
            //     }
            // }