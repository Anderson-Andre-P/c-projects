#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *arr;
    int size;
} Solution;

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *result = (int *)calloc(2, sizeof(int));
    *returnSize = 2;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target && i != j)
            {
                result[0] = i;
                result[1] = j;
                break;
            }
        }
    }
    printf("[%d, %d]\n", result[0], result[1]);
    return result;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 30;

    int returnSize;

    int *result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);

    // if (result != NULL)
    // {
    //     printf("[%d, %d]\n", result[0], result[1]);
    // }

    free(result);

    return 0;
}
