#include <stdio.h>
#include <stdlib.h>

/* Bekir Can Yuva
	163301015 */

int main(int argc, char *argv[]) {
	
	int i,m=0;
	int *ptr;
	int *ptr2;
	int *pmerge;

	int array[4] = {1,2,3,4};
	int array2[4] = {5,6,7,8};
	int merge[8];
	
	// Adreslendirme atamalari
	
	ptr = array;
	ptr2 = array2;
	pmerge = merge;
	
	// Dizilerin elemanlarini ekrana bastirma islemleri
	
	printf("Birinci Dizinin Elemanlari :\n");
	
	for(i=0;i<4;i++){		
		printf(" %d",array[i]);		
	}
	
	printf("\n\nIkinci Dizinin Elemanlari :\n");
	
	for(i=0;i<4;i++){		
		printf(" %d ",array2[i]);		
	}
	
	// Iki diziyi tek dizide birlestirme islemi
	
	for (i=0;i<8;i++){
		
		if(i%2==0){   			// Eger indis CIFT sayiya tekabul ediyorsa :
			
			*(pmerge+i) = (int) *(ptr+m);		// Indisin icersindeki elemani merge dizisine atiyor
			
		}
		else{				// Eger indis TEK sayiya tekabul ediyorsa :
			
			*(pmerge+i) = (int) *(ptr2+m);   // Indisin icersindeki elemani merge dizisine atiyor
			
			m++;		// Sonucta her dizide 4. indise kadar gittigimiz icin else'in icersinde m arttirmasi yapmamiz gerek
						
			
		}
	}	
	
	
	// Tek dizide topladigimiz elemanlari ekrana bastirma islemi
 
	printf("\n\nIki Dizinin Karistirildiktan Sonraki Hali: \n");
	
	for (i=0;i<8;i++){
	
	printf(" %d ",merge[i]);
	
	}
	return 0;
}
