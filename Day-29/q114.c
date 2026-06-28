// Write a program to create menu driven array operation system.
#include <stdio.h>

int main() {
    int arr[100], n, i, choice, sum = 0, largest, search, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    do {
        printf("\n--- Array Operations System ---\n");
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Find Sum\n");
        printf("4. Find Largest Element\n");
        printf("5. Search Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter array elements:\n");
                for(i = 0; i < n; i++)
                    scanf("%d", &arr[i]);
                break;

            case 2:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 3:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += arr[i];
                printf("Sum = %d\n", sum);
                break;

            case 4:
                largest = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] > largest)
                        largest = arr[i];
                }
                printf("Largest Element = %d\n", largest);
                break;

            case 5:
                found = 0;
                printf("Enter element to search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++) {
                    if(arr[i] == search) {
                        printf("Element Found\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Element Not Found\n");
                break;

            case 6:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 6);

    return 0;
}