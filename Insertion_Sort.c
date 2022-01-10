#include <stdio.h>

int main(){
    int k[7] = {14, 6, 5, 31, 1, 13, 27};
    int imsi;
    
    for (int i = 1; i < (sizeof(k) / sizeof(int)); i++){
        imsi = k[i];
        for(int j = i-1; j>= 0; j--){
            if (imsi < k[j]){
                k[j+1] = k[j];
                k[j] = imsi;
            }
            printf("k =  ");
            for (int i = 0; i < (sizeof(k)/sizeof(int)); i++){
               printf("%d ", k[i]);
            }
            printf("\n");
        }
        // i = 1 -> {6, 14, 5, 31, 27}
        // i = 2 -> {6, 5, 14, 31, 27} -> {}
        printf("=========================\n");
    }

    for (int i = 0; i < (sizeof(k)/sizeof(int)); i++){
        printf("k[%d] : %d \n", i, k[i]);
    }
    return 0;
}