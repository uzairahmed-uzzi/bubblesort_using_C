#include<stdio.h>
int bubbleSort(int arr[],int size){
int temp;
for(int j=0;j<size;j++){
    for(int l=j+1;l<size-j;l++){
        if(arr[j]>arr[l]){
            temp=arr[j];
            arr[j]=arr[l];
            arr[l]=temp;
        }

    }

}
printf("\n\nSorted Elements Are\n\n[");

    for(int s=0;s<size;s++){
        printf(" %d ",arr[s]);
    }
    printf("]");
}
int main(void){
    int n;
    printf("Enter the range of array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements you want to sort one by one\n\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements you gave\n\n[");

    for(int k=0;k<n;k++){
        printf(" %d ",arr[k]);
    }
    printf("]");
    bubbleSort(arr,n);
}

