// shell-sort.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include <tchar.h>
#include <stdio.h>
#define  COUNT  10
int  array_data[COUNT] = {14, 5, 43, 27, 18, 31, 37, 88, 6, 35};
int  h_value = COUNT / 2 + 1;
void shell_sort();
void exchange(int j);
void write_head_1();
void write_head_2();
void write_1();


int _tmain(int argc, _TCHAR* argv[])
{
	 write_head_1();
	 write_1();
	 shell_sort();
	 write_head_2();
	 write_1();
	 return 0;
}

void shell_sort()
{
 int i, j;
 while (h_value > 0) {
       for (i = h_value; i < COUNT; i++) {
		 j = i - h_value;
	   
		 if (array_data[j] > array_data[j + h_value]) {
		    exchange(j);
                          }
       }
       
       printf("\nh_value = %4d, ", h_value);
       write_1();

         if(h_value > 3)
	h_value = h_value / 2 + 1;
         else
	h_value--;
 }
}

void exchange(int j)
{
 int imsi;
 imsi = array_data[j];
 array_data[j] = array_data[j + h_value];
 array_data[j + h_value] = imsi;
}

void write_head_1()
{
 printf("\n                   ------------------------- ");
 printf("\n                   Source data  printing ... ");
 printf("\n                   ------------------------- \n");
}

void write_head_2()
{
 printf("\n                   ------------------------- ");
 printf("\n                   Shell   sort   result ...   ");
 printf("\n                   ------------------------- \n");
}


void write_1()
{
 int i;
 printf("                ");
 for (i = 0; i < COUNT; i++)
     printf(" %3d", array_data[i]);
 printf("\n\n");
}
