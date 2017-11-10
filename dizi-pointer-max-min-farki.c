#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Bekir Can Yuva
	163301015 */

int main(int argc, char *argv[]) {
	
	int sayi,i;
	int *p;
	int max=-1,min=100;
	srand(time(NULL));
	
	printf("Dizi kac elemanli olsun\n");
	scanf("%d",&sayi);
	int dizi[sayi];
	p = dizi;
	
	
	
	for (i=0;i<sayi;i++){
		*(p+i) = rand()%100;
		printf(" %d ",*(p+i));
	}
	
	for(i=0;i<sayi;i++){
		
		if (*(p+i) > max){
			max = *(p+i);
		}
		if (*(p+i) < max){
			min = *(p+i);
		}
		
	}
	
	printf("\n En buyuk sayi ile en kucuk sayi arasindaki fark = %d",max-min);

	return 0;
}
