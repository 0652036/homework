#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int HomeWork,Sum;/*變數宣告*/ 
int main(int argc, char *argv[]) {
	for(HomeWork=0;HomeWork<10;HomeWork++)/*從0到9的迴圈*/ 
	{
		Sum=Sum+HomeWork;/*計算和*/ 
	}
	printf("Sum=%d",Sum);/*印出和*/ 
	return 0;
}
