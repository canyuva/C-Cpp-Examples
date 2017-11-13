#include <stdio.h>
#include <stdlib.h>

struct node {
   int sirano;
   char isim[20];
   struct node *next;
};

struct node *root;

node* siraAl(){				// Kullanýcýdan musteri bilgileri alma islemi
	struct node *list = (struct node*) malloc(sizeof(struct node));
	printf("\nIsminiz: ");
	scanf("%s",list->isim);
	printf("Oncelik Siraniz: ");
	scanf("%d",&(list->sirano));
	list->next=NULL;
	return list;
}

void listeGoster()
{
	struct node *temp;
	temp = root;
	printf("Oncelik Sirasi: ");
	while(temp!=NULL)
	{
		printf("(%d,%s) ", temp->sirano,temp->isim);
		temp=temp->next;
	}
printf("\n");
}

void musteriEkle(){   		// Yeni eklenen musterileri siraya koyma islemi
	struct node *temp, *t;
	temp = siraAl();

	
	if(root==NULL)
		root = temp;
	else if(root->sirano>temp->sirano)
	{
		temp->next=root;
		root=temp;
	}
	else
	{
		t=root;
		while(t->next!=NULL && (t->next)->sirano<=temp->sirano )
			t=t->next;
		temp->next=t->next;
		t->next=temp;
	}
} 
void musteriSil()	
{
	if(root!=NULL)
	{
	printf("\nSilindi: (%d,%s) \n",root->sirano,root->isim);
	root = root->next;
	listeGoster();
	}
	else
		printf("\nListe bos. Musteri ekleyin.. \n");
}
int main(){
	int secim, devam=1;
	while(devam==1)
	{
		system("cls");
		printf("\nIslem seciniz:\n1. Musteri ekle\n2. Musteri iste\n3. Cikis\n");
		scanf("%d",&secim);
		system("cls");
		switch(secim)
		{
			case 1:
				musteriEkle();
				break;
			case 2:
				musteriSil();
				break;
			case 3:
				devam=0;
				break;
			default:
				printf("Gecerli bir sayi giriniz");
		}
		system("pause");
	}
	return 0;
}	
