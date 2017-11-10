#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Bekir Can Yuva
	163301015 */

int main(int argc, char *argv[]) {
	
	int sayi,i;
	int max=-1,min=100;
	srand(time(NULL));
	
	printf("Dizi kac elemanli olsun\n");
	scanf("%d",&sayi);
	
	int dizi[sayi];
	
	for (i=0;i<sayi;i++){
		dizi[i] = rand()%100;
		printf(" %d ",dizi[i]);
	}
	
	for(i=0;i<sayi;i++){
		
		if (dizi[i] > max){
			max = dizi[i];
		}
		if (dizi[i] < max){
			min = dizi[i];
		}
		
	}
	
	printf("\n En buyuk sayi ile en kucuk sayi arasindaki fark = %d",max-min);

	return 0;
}
