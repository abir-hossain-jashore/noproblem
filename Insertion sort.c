#include<stdio.h>
#include<math.h>

void main(){

    int size,temp=0;
    printf("ARRAY SIZE PLEASE ");
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<size; j++){
        for(int i = 0; i<j; i++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
        }
    }
}

for(int a=0;a<size;a++){
        printf("%d",arr[a]);
    }
}
