#include <stdio.h>
int main(){
int n;
printf("Hello girl, enter the number of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enter all the elements: ");
for(int i=0; i<n; i++){
scanf("%d",&arr[i]);
}
int min=arr[0];
for(int i=0; i<n; i++){
    if(arr[i]<min)
        min=arr[i];
} printf("The smallest element is %d: ",min);
}
