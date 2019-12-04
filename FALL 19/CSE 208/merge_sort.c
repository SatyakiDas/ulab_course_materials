#include <stdio.h>

void merge(int arr[], int left, int right)
{
    int mid_index = left + (right - left) / 2;
    int first_half_size = mid_index - left + 1;
    int second_half_size = right - mid_index;
    int first_half[first_half_size], second_half[second_half_size];
    int i;
    for(i=0; i<first_half_size; i++) first_half[i] = arr[left + i];
    for(i=0; i<second_half_size; i++) second_half[i] = arr[mid_index + 1 + i];
    
    int first_half_index = 0, second_half_index = 0;
    int merged_subarray_index = left;
    
    while(first_half_index < first_half_size && second_half_index < second_half_size)
    {
        if(first_half[first_half_index] < second_half[second_half_index])
        {
            arr[merged_subarray_index] = first_half[first_half_index];
            first_half_index++;
        }
        else
        {
            arr[merged_subarray_index] = second_half[second_half_index];
            second_half_index++;
        }
        merged_subarray_index++;
    }
    
    while(first_half_index < first_half_size)
    {
        arr[merged_subarray_index] = first_half[first_half_index];
        first_half_index++;
        merged_subarray_index++;
    }
    
    while(second_half_index < second_half_size)
    {
        arr[merged_subarray_index] = second_half[second_half_index];
        second_half_index++;
        merged_subarray_index++;
    }
}

void merge_sort(int arr[], int left, int right)
{
    if(left < right)
    {
        int mid_index = left + (right - left) / 2;
        merge_sort(arr, left, mid_index);
        merge_sort(arr, mid_index + 1, right);
        merge(arr, left, right);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[128];
    int i;
    for(i=0; i<n; i++) scanf("%d", &arr[i]);
    merge_sort(arr, 0, n - 1);
    for(i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
