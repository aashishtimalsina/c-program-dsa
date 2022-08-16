#include <stdio.h>
#include <stdlib.h>

int main()
{

    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int m, n, i;

    // Get the number of elements for the array
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    // Dynamically allocate memory using calloc()
    ptr = (int*)calloc(n, sizeof(int));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {

        // Memory has been successfully allocated
        printf("Memory successfully allocated using calloc.\n");

        // Get the elements of the array
        printf("Enter the elements of array\n");
        for (i = 0; i < n; ++i) {
            scanf("%d",&ptr[i]);
        }

        // Print the elements of the array
        printf("The elements of the array are: \n");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }

        // Get the new size for the array

        printf("\n\nEnter the new size of the array:");
        scanf("%d",&m);
        // Dynamically re-allocate memory using realloc()
        ptr = realloc(ptr, m * sizeof(int));

        // Memory has been successfully allocated
        printf("Memory successfully re-allocated using realloc.\n");

        // Get the new elements of the array
        printf("Enter the new elements of array\n");
        for (i = n; i < m; ++i) {
            scanf("%d",&ptr[i]);
        }

        // Print the elements of the array
        printf("The elements of the array are: \n");
        for (i = 0; i < m; ++i) {
            printf("%d, ", ptr[i]);
        }

        free(ptr);
    }

    return 0;
}
