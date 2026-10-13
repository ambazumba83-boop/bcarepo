//   #include <stdio.h>

//   int factorial(int n) {
//       if (n == 0)
//          return 1;
    

//       return n * factorial(n - 1);  
//   }

//       int main(void) {
//       int n;  
//       printf("enter the number :");
//     if (scanf("%d", &n) != 1) {
//          printf("Invalid input.\n");
//          return 1;
//     }
//       printf("The factorial of %d is %d\n", n, factorial(n));
    
//      return 0;
 
//}

#include <stdio.h>
int Arraysize(int aray[], int n) {
    if (n <= 0) {
        return 0;
    }
    return aray[n - 1] + Arraysize(aray, n - 1);
}
int main() {
    int n;
    printf("Enter the array size: ");
    if (scanf("%d",&n), n <= 0) { 
        printf("Invalid array size.\n");
        return 1;
    }

    int aray[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &aray[i]) != 1) {
            printf("Invalid input element.\n");
            return 1;
        }
    }

    printf("The sum of the array elements is %d\n", Arraysize(aray, n));

    return 0;
}

