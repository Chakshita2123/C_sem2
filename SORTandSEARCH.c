// SEARCHING - the process of finding a particualr item in the large amount of data
// the element to be searched is called KEY ELEMENT
// Two methods of searching: LINEAR & BINARY

// LINEAR SEARCH -  also called sequential search is a simple searching technique. 
// In this technique we search for a given key item in linear order i.e,one after the other from first element to last element.
// The search may be successful or unsuccessful. 
// If key item is present, the search is successful, otherwise unsuccessful search.


// ADVANTAGES :
// 1. very simple approach
// 2. works well for small arrays
// 3. used to search when elements are not sorted.

// DISADVANTAGES
// 1. less effiecient if array size is large
// 2. if elements are already sorted, linear search is not efficient


// BINARY SEARCH - is a simple nd very efficient searching technique which can be applied if the items are arranged in either ascending or descending order.
// first element is considered as low and last element is considered as high
// position of middle element : mid = (low + high)/2
// mid element is compared with key element, if they are same, the search is successful
// if key element < middle element - seaching continues in left part of the array
// if key element > middle element - searcinh continues in right part of the array

// #include<stdio.h> 
// #include <stdlib.h>
// int main(){
//     int i,n,arr[100],key;
//     printf("Enter the number of elements in the array:\n");
//     scanf("%d",&n);
//     printf("Enter the array elements:\n");
//     for(i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the key element to be searched:\n");
//     scanf("%d",&key);
//     int low = 0, high = n-1, mid;
//     while(low <= high){
//         mid = (low + high)/2;
//         if(arr[mid] == key){
//             printf("Element found at index %d", mid);
//             return 0;
//         } else if(arr[mid] < key){
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
// }

// ADVANTAGES :
// 1. simple technique
// 2. very efficient searching technique

// DISADVANTAGES :
// 1. elements should be sorted.
// 2. It is necessary to obtain the middle element, which are stored in array. If the elements are stored in linked list, this method cannot be used.






// SORTING - process of arranging elements in either ascending or descending order
// Two methods of searching : BUBBLE SORT & SELECTION SORT

// BUBBLE SORT
// simplest and easiest sorting technique
// two successive elements of an array such as a[j] and a[j+1] are compared
// If a[j]>=a[j+1] they are exchanged, this process repeats till all elements of an array are arranged in ascending order.
// After each pass the largest element in the array sinks at the bottom and the smallest element in the array is bubble towards top.
// also called sinking sort & bubble sort

// #include <stdio.h>
// int main(){
//     int i,n,j,arr[100],temp;
//     printf("Enter the number of elements in array:\n");
//     scanf("%d",&n);
//     printf("Enter the array elements:\n");
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);

//     }
//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 }
//         }
//     }
//     printf("The sorted array is:\n");
//     for(i=0;i<n;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }

// SELECTION SORT 
// In Selection sort, the smallest element is exchanged with the first element of the unsorted list of elements (the exchanged element takes the place where smallest element is initially placed). Then the second 
// smallest element is exchanged with the second element of the unsorted list of elements and so on until all the elements are sorted. In the following C program we have implemented the same logic. 
 
// Before going through the program, lets see the steps of selection sort with the help of an example: 
// Entered elements: 22 0 -90 89 17 
// Step 1: -90 0 22 89 17 (22 and -90 exchanged position) 
// Step 2: -90 0 22 89 17 (0 is at right place, no exchange needed) 
// Step 3: -90 0 17 89 22 (22 and 17 exchanged position) 
// Step 4: -90 0 17 22 89 (89 and 22 exchanged position)

// #include<stdio.h> 
// void main()
// {
//     int i,j,n,a[20],temp,min; 
//     printf("enter n:\n"); 
//     scanf("%d",&n);
//     printf("enter array efficient \n"); 
//     for(i=0; i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0; i<n-1;i++)
//     {
//         min=i;
//         for(j=i+1; j<n; j++)
//         {
//             if (a[ j ]<a[ min] )
//             {
//                 min=j;
//             }
//         }

//         temp= a[ min ];
//         a[ min ]= a[ i ]; 
//         a[ i ]=temp;
//     }
//     printf("\n the sorted numbers are:\n"); 
//     for(i=0;i<n;i++)
//     {
//     printf("%d\t",a[i]);
//     }
    
// }