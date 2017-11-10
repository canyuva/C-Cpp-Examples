#include <stdio.h>
#include <stdlib.h>


	int fakbul(int * n){
		int i = *n;
		i--;
		if (*n<1)
			return 1;
		else
			return *n * fakbul(&i);
		
	}

int main(int argc, char *argv[]) {
	int sayi;
	
	printf("Faktoriyelini bulmak istediginiz sayiyi giriniz:    ");
	scanf("%d",&sayi);
	
	printf("%d",fakbul(&sayi));
	
	return 0;
}
