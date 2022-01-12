#include <stdio.h>

int main(){
    int num=0;
    int Sparse[8][4] = {{0, 0, 0, 1},
                        {0, 0, 2, 0},
                        {0, 0, 0, 0},
                        {6, 0, 0, 0},
                        {0, 0, 0, 0},
                        {0, 0, 14, 0},
                        {0, 0, 0, 0},
                        {0, 15, 0, 0}};
    int S_value[6][3];

    S_value[0][0] = 8;
    S_value[0][1] = 4;

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 4; j++){
            if(Sparse[i][j] != 0){
                num++;
                S_value[num][0] = i;
                S_value[num][1] = j;
                S_value[num][2] = Sparse[i][j];
            }
        }
    }

    S_value[0][2] = num;

    printf("S_value[][]\n");
    for(int i = 0; i < 6; i++){
        printf("[%d %d %d]\n", S_value[i][0], S_value[i][1], S_value[i][2]);
    }
    return 0;
}