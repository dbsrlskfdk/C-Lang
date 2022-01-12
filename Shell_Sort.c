#include <stdio.h>

int main(){
    int k[5] = {14, 6, 5, 31, 27};
    int count = sizeof(k)/sizeof(int);
    int h = count;
    int j, tmp;
    h = h/2 + 1;

    while(h > 0){
        printf("h = %d\n", h);
        for(int i = h; i<count; i++){
            j = i-h;
            if(k[j] > k[j+h]){
                tmp = k[j];
                k[j] = k[j+h];
                k[j+h] = tmp;
            }
            printf("k =  ");
            for (int i = 0; i < (sizeof(k)/sizeof(int)); i++){
               printf("%d ", k[i]);
            }
            printf("\n");
        }
        printf("=====================================\n");
        if(h > 3){
            h = h/2 +1;
        }else{
            h--;
        }
    }

    for (int i = 0; i<count; i++){
        printf("k[%d] : %d \n", i, k[i]);
    }

    return 0;
}