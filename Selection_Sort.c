#include <stdio.h>

int main(){
    int k[5] = {14, 6, 5, 31, 27};
    int tmp;

    for(int i = 0; i < sizeof(k)/sizeof(int)-1; i++){
        for(int j = i+1; j < sizeof(k) / sizeof(int); j++){
            if(k[i] > k[j]){
                tmp = k[i];
                k[i] = k[j];
                k[j] = tmp;
            }
            printf("k =  ");
            for (int i = 0; i < (sizeof(k)/sizeof(int)); i++){
               printf("%d ", k[i]);
            }
            printf("\n");
        }
        printf("==============================\n");
    }
    for(int i = 0; i < sizeof(k)/sizeof(int); i++){
        printf("k[%d] : %d \n", i, k[i]);
    }

    return 0;
}