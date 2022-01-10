#include <stdio.h>

void quick_sort(int start, int last, int k[]);

int main(){
    int k[10] = {14, 5, 43, 27, 18, 31, 37, 88, 6, 35};
    quick_sort(0, 9, k);
    for (int i = 0; i<10; i++){
        printf("k[%d] : %d \n", i, k[i]);
    }
    return 0;
}

void quick_sort(int start, int last, int k[]){
    int i, j, data, tmp;
    i = start;
    j = last;
    data = k[start];

    if(i < j){
        do{
            while(k[i] <= data){
                i = i+1;
            }

            while(k[j] > data){
                j = j-1;
            }

            if (i < j){
                tmp = k[i];
                k[i] = k[j];
                k[j] = tmp;
            }
            
        }while(i < j);

        tmp = k[j];
        k[j] = k[start];
        k[start] = tmp;

        quick_sort(start, j-1, k);
        quick_sort(j+1, last, k);
    }
}