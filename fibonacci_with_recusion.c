#include<stdio.h>
//0 1 1 2 3 4........
int main(){
    int x;
    printf("Number please");
    scanf("%d",&x);
    int s=fibseries(x);
    printf("%d",s);
}

int fibseries(int x){
    int sum=0;
    /*if(x<0){
        return -1;
    }
    if(x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    else{*/
      sum=fibseries(x-1)+fibseries(x-2);
      return sum;

}
