#include <stdio.h>
#include <stdlib.h>

// Bekir Can Yuva
// 163301015

int main() {
	
	int array[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int *p;
	p = array;
	int i,j;
	
	
	for (i=0;i<12;i++){         
		if(i%4==0)				// E�er say�n�n 4'nin b�l�m� 0 ise alt sat�ra ge�iyor. B�ylece matris g�r�n�m� oluyor.
			printf("\n");
		printf("%d ",*(p+i));
	}
	
	printf("\n\n Silmek istediginiz indisi giriniz>>\t");
	scanf("%d",&j);
	
	for (i=j;i<12;i++)
	{
		if(i!=11)							// Say� 11 de�ilse yer de�i�tirme yap�l�yor.
			*(p+i) = *(p+i+1);				// Yer de�i�tirme i�lemi. Sonraki eleman� girilen indisin yerine koyuyor.
		else								// 11 ise yerine 0 koyuyor.
			*(p+i) = 0;
	}
	
	for (i=0;i<12;i++){         // Son haliyle yazd�rma i�lemi
		if(i%4==0)				
			printf("\n");
		printf("%d ",*(p+i));
	}
	
	return 0;
}
