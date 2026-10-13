#include<stdio.h>
int main(){
    char name[30]="program";
    for (int i = 0; name[i] !='\0';i++){
    printf("name[%d]=%c\n",i,name[i]);
    return 0;
}