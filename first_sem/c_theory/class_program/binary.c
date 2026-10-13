#include<stdio.h>
#include<stdbool.h>

int linear_search(int [40],int,int); 
bool validate_size(int);                
int read_size();                      

int main(){
    bool isValid=true;
    int size,key;
    // loop to iterate untill valid array size is received
    do{
        size=read_size();
        if(validate_size(size)){
            break;
        }
        printf("Please enter valid array size..");

    }while (isValid);
    // Array initialization
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d array element:", i+1);
        scanf("%d",&numbers[i]);
    }
    // to receive search element from KB
    printf("Enter the search element");
    scanf("%d",&key);
    //calling linear_search()
    int position=linear_search(numbers,key,size);
    if(position==-1){
        printf("%d is not found",key);
    }else{
        printf("%d Found at %d",key,position);
    }

}
bool validate_size(int arraySize){
    if(arraySize<=1){
        return false;
    }
    return true;
}

int read_size(){
    int size;
    printf("Enter the array size:");
    scanf("%d",&size);
    return size;
}

//method to implement linear search
//trverse each array position to check whether it has 'searkey' or not
//returns array index of matched array element if found; -1 otherwise
int linear_search(int myarray[],int searchkey,int arraysize){
    int low = 0, high = arraysize - 1; 
    while (low <= high) { 
        int mid = low + (high - low) / 2; 
        
        if (myarray[mid] == searchkey) {
            return mid; 
    }// Element found, return its index position
        else if (myarray[mid] <searchkey) {
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
    } 
    return -1; // Element not found
}





// #include<stdio.h> 
// #include<stdbool.h> 

// // Function declarations
// int binary_search(int [], int, int); 
// bool validate_size(int); 
// int read_size(); 
// void sort_array(int [], int); // Added to ensure binary search works

// int main(){ 
//     bool isValid = true; 
//     int size, key; 
    
//     // Loop to iterate until valid array size is received 
//     do { 
//         size = read_size(); 
//         if (validate_size(size)) { 
//             break; 
//         } 
//         printf("Please enter valid array size..\n"); 
//     } while (isValid); 
    
//     // Array initialization 
//     int numbers[size]; 
//     for (int i = 0; i < size; i++) { 
//         printf("Enter %d array element: ", i + 1); 
//         scanf("%d", &numbers[i]); 
//     } 
    
//     // Sort the array (Binary search requires a sorted array)
//     sort_array(numbers, size);
//     printf("\nArray sorted for Binary Search.\n");

//     // Receive search element from KB 
//     printf("Enter the search element: "); 
//     scanf("%d", &key); 
    
//     // Calling binary_search() 
//     int position = binary_search(numbers, size, key); 
    
//     if (position == -1) { 
//         printf("%d is not found\n", key); 
//     } else { 
//         printf("%d Found at index position %d (in sorted array)\n", key, position); 
//     } 
//     return 0;
// } 

// bool validate_size(int arraySize) { 
//     if (arraySize <= 1) { 
//         return false; 
//     } 
//     return true; 
// } 

// int read_size() { 
//     int size; 
//     printf("Enter the array size: "); 
//     scanf("%size", &size); 
//     return size; 
// } 

// // Method to implement binary search
// int binary_search(int arr[], int n, int key) { 
//     int low = 0, high = n - 1; 
//     while (low <= high) { 
//         int mid = low + (high - low) / 2; 
        
//         if (arr[mid] == key) 
//             return mid; // Element found, return its index position
//         else if (arr[mid] < key) 
//             low = mid + 1; 
//         else 
//             high = mid - 1; 
//     } 
//     return -1; // Element not found
// } 

// // Simple Bubble Sort to prepare the array for binary search
// void sort_array(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
