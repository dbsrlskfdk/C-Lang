#include <stdio.h>

int main(){
    int k[10] = {14, 2, 6, 5, 32, 31, 7, 27, 1, 8};
    int tmp;

    for (int i = sizeof(k)/sizeof(int); i > 0 ; i--){
        for(int j = 0; j < i-1; j++){
            tmp = k[j];
            if (k[j+1] < k[j]){
                k[j] = k[j+1];
                k[j+1] = tmp;
            }
            printf("k =  ");
            for (int i = 0; i < (sizeof(k)/sizeof(int)); i++){
               printf("%d ", k[i]);
            }
            printf("\n");
        }
        printf("==========================\n");
    }

    for(int i = 0; i < sizeof(k)/sizeof(int); i++){
        printf("k[%d] : %d \n", i, k[i]);
    }

    return 0;
}