#include <stdio.h>

int main() {
    int num[9];
    for (int s = 0; s<=9; s++){
        scanf("%d",&num[s]);
    }
   for(int j=0;j<=10;j++){
       for(int i=0;i<=8;i++){
           if(num[i]>num[i+1]){
               int change=num[i+1];
               num[i+1]=num[i];
               num[i]=change;
           }
       }
   }
    for (int i=0; i<=9; ++i) {
        printf("%d ",num[i]);

    }



}


