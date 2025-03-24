// 1. element shifting to create space for new element
// #include <stdio.h>

// void insert(int arr[], int *size, int pos, int val) {
//     for (int i = (*size)++; i > pos; i--) arr[i] = arr[i - 1];
//     arr[pos] = val;
// }

// void display(int arr[], int size) {
//     for (int i = 0; i < size; i++) printf("%d ", arr[i]);
//     printf("\n");
// }

// int main() {
//     int arr[10] = {1, 2, 3, 5, 6}, size = 5;
//     insert(arr, &size, 3, 4);
//     display(arr, size);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a[10] = {1, 2, 3, 4, 5};  
//     int n = 5;  
//     int pos = 2;  
//     int new_val = 99; 

//     for (int i = n; i > pos; i--) {
//         a[i] = a[i - 1];
//     }
    
//     a[pos] = new_val;
//     n++; 

//     for (int i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }


// 2. search an element in an array
// #include <stdio.h>

// int main() {
//     int arr[] = {1, 2, 3, 5, 6}, size = 5, key = 4, index = -1;
//     for (int i = 0; i < size; i++) if (arr[i] == key) { index = i; break; }
//     printf(index != -1 ? "Element %d found at index %d\n" : "Element %d not found\n", key, index);
//     return 0;
// }


//3. check whether the element is present in the array or not . if present enter the location
// #include <stdio.h>
// int main() {
//     int arr[10];
//     int size,i,find,element;
//     printf("ENter size of array: ");
//     scanf("%d",&size);
//     printf("Enter the elements in array: ");
//     for(i=0;i<size;i++) {
//         scanf("%d",&arr[i]);
//     }
//     printf("\nEnter element to find: ");
//     scanf("%d",&find);
//     element=0;
//     for(i=0;i<size;i++) {
//         if(arr[i]==find) {
//             element=1;
//             break;
//         }
//     }
//     if(element==1) {
//         printf("\n%d is found at position %d",find,i+1);
//     }
//     else {
//         printf("\n%d is not found in the array",find);
//     }
//     return 0;
// }

// 4. to delete an element 
// #include <stdio.h>
// int main() {
//     int i,j=0,t,a[10],n,m,s,b[10];
//     printf("\nEnter the limit:");
//     scanf("%d",&n);
//     printf("\nEnter the values:");
//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }
//     printf("\nGiven values are:");
//     for(i=0;i<n;i++){
//         printf("\na[%d]=%d",i,a[i]);
//     }
//     printf("\nEnter the position to be deleted:");
//     scanf("%d",&t);
//     for(i=0;i<n;i++) {
//         if(i!=t) {
//             b[j]=a[i];
//             j++;
//         }
//     }
//     for(i=0;i<n;i++) {
//         a[i]=b[i];
//     }
//     printf("\nUpdated value is: ");
//     for(i=0;i<n-1;i++) {
//         printf("\na[%d]=%d",i,a[i]);
//     }
//     return 0;
// }

// 5. update the element at a particular position
// #include <stdio.h>
// int main() {
//     int i,t,a[10],n,m,s,j=0,b[10];
//     printf("\nEnter the limit:");
//     scanf("%d",&n);
//     printf("\nEnter the values: ");
//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }
//     printf("\nGiven values are: ");
//     for(i=0;i<n;i++){
//         printf("a[%d]=%d",i,a[i]);
//     }
//     printf("\nEnter the position to be updated: ");
//     scanf("%d",&t);
//     printf("\nENter the value to be updated: ");
//     scanf("%d",&s);
//     for(i=0;i<n;i++) {
//         if(i==t) {
//             a[i]=s;
//         }
//     }
//     printf("\nUpdated value is: ");
//     for(i=0;i<n;i++) {
//         printf("\na[%d]=%d",i,a[i]);
//     }
//     return 0;
// }

// enter the array elements . do updation , searching , insertion and deletion in it using switch case
#include <stdio.h>
int main() {
    int i,t,a[10],n,m,s,j=0,b[10];
    printf("\nEnter the limit: ");
    scanf("%d",&n);
    printf("\nEnter the values: ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("\nGiven values are: ");
    for(i=0;i<n;i++){
        printf("a[%d]=%d",i,a[i]);
    }
    
    int choice, pos, val;

    do {
        printf("\n\nMenu:\n1. Search\n2. Insert\n3. Delete\n4. Update\n5. Display\n6. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Search
                printf("Enter element to search: ");
                scanf("%d", &val);
                for (i = 0; i < n; i++) {
                    if (a[i] == val) {
                        printf("Element found at position %d\n", i);
                        break;
                    }
                }
                if (i == n) printf("Element not found!\n");
                break;

            case 2: // Insert
                if (n >= 10) {
                    printf("Insertion not possible! Array is full.\n");
                    break;
                }
                printf("Enter value and position to insert: ");
                scanf("%d%d", &val, &pos);
                if (pos < 0 || pos > n) {
                    printf("Invalid position!\n");
                    break;
                }
                for (i = n; i > pos; i--) {
                    a[i] = a[i - 1];
                }
                a[pos] = val;
                n++;
                printf("Element inserted successfully!\n");
                break;

            case 3: // Delete
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Invalid position!\n");
                    break;
                }
                for (i = pos; i < n - 1; i++) {
                    a[i] = a[i + 1];
                }
                n--;
                printf("Element deleted successfully!\n");
                break;

            case 4: // Update
                printf("Enter position to update and new value: ");
                scanf("%d%d", &pos, &val);
                if (pos < 0 || pos >= n) {
                    printf("Invalid position!\n");
                    break;
                }
                a[pos] = val;
                printf("Element updated successfully!\n");
                break;

            case 5: // Display
                printf("Array elements: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}

