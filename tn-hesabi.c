#include<stdio.h>
#include<stdlib.h>



// Bekir Can Yuva
// 163301015



int ToplamIslemi(int *toplam2){
	int n;
	*toplam2=0;						// 1
	
	printf("Sayi giriniz>> \n");
	scanf("%d",&n);
	
	return  *toplam2 += (n*(n+1))/2;	//	4
	
}										// T(N) = 5

int Dongu(int *toplam){
	int i,n;
	*toplam = 0;						// 1
	
	printf("Sayi giriniz>> \n");
	scanf("%d",&n);
	
	for(i=1; i<=n ; i++){			// 2N
		
		*toplam += i;				// N
		
	}	
								// T(N) = 3N + 1
	
	return 0;	
}


/* 

		Döngü ile T(n) = 3n+1
		Formül ile T(n) = 5 


	N = 1 için Döngü , Formülden daha kazançlýdýr. Ancak N arttýkça özellikle yüksek basamaklý sayýlarda Formül her zaman için daha kazançlýdýr.


*/


int main(){
	int toplam,toplam2=0;
	int islem;
	
	printf(" *** 1 den N e kadar olan sayilarin toplami *** \n");
	printf("1- Formul ile \n");
	printf("2- Dongu ile \n");
	printf("Islem seciniz : \n",islem);
	scanf("%d",&islem);
	
	switch(islem){
		
		case 1:
			ToplamIslemi(&toplam2);
			printf("Toplam : %d",toplam2);
			break;
		
		case 2:
			Dongu(&toplam);
			printf("Toplam : %d",toplam);
			break;
			
		default:
			printf("Islem gecersiz!");
	}
	
	
	
	return 0;
}
