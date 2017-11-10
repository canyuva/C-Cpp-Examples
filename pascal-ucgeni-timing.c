#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// 163301015
// Bekir Can Yuva

int Pascal(int satir,int sutun){
	
	if (sutun==satir)
		return 1;
	else if (sutun==1)
		return 1;
	else
		return Pascal(satir-1,sutun-1) + Pascal(satir-1,sutun);
}


int main(){
	
	clock_t time;
	
	int satir,sutun,son;
	
	
	printf("Hangi satir ve sutundaki elemani istiyorsunuz?\n");
	scanf("%d",&satir);
	scanf("%d",&sutun);
	time = clock();
	son = Pascal(satir,sutun);
	time = clock() - time;
	
	
	printf("%d. satirin %d. sutunundaki deger : %d\n",satir,sutun,son);
	
	printf("Time : %ld \n",time);
	printf("Toplam sure : %f",(double)(time) / CLOCKS_PER_SEC);
	
	
	return 0;
}
