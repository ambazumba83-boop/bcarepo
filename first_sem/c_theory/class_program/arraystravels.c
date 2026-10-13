// #include<stdio.h>
// int main(){
//     int arraysize = read_array_size,vali();  //calling method & stores return value
//     int isvalid = validation_array_size(arraysize);   //passing arraysize; int array_size=arraysize
//     if(isvalid==0){
        
//     }
// }
// // read array size from kb
// int read_array_size(){
//     int size; //local variable
//     printf("ENTER THE ARRAY SIZE [>4]:");
//     scanf("%d",&size);
//     return size;
// }
// int validation_array_size(int array_size){
//     if(array_size>4){
//         return 1;
//     }
//     return 0;
// }
#include <stdio.h>
int read_array_size();
int validation_array_size(int array_size);

int main() {
    int arraysize;
    int isvalid = 0;
    while (isvalid == 0) {
        arraysize = read_array_size();
        isvalid = validation_array_size(arraysize);

        if (isvalid == 0) {
            printf("invalid\n");
        } else {
            printf("valid\n");
        }
    }
    int numbers[arraysize];

    for (int i = 0; i < arraysize; i++) {
        printf("enter num%d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    return 0;
}

int read_array_size() {
    int size; 
    printf("ENTER THE ARRAY SIZE [>4]: ");
    scanf("%d", &size);
    return size;
}

int validation_array_size(int array_size) {
    if (array_size > 4) {
        return 1;
    }
    return 0;
}