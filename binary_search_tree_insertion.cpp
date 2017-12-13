#include<stdio.h>
#include<stdlib.h>

//	Can Yuva
//	github.com/canyuva

// Ikili Arama Agaclarinda Veri Ekleme
// The Insertion Values on Binary Search Trees

struct node {
	int data;
	struct node *left, *right;
};


// Yeni agac olusturuyoruz 
// Creating new tree
struct node *newNode(int item){
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = item;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

// Preorder seklinde once kok sonra sol sonra sag elemanlari yazdiriyoruz 
// Printing on tree's first root, then left, then right value (preorder)

void preorder(struct node *root){
	if(root != NULL){
		
		printf("%d \n",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

// Gelen verileri node'dan kucukse sol yapraga, buyukse sag yapraga, node bossa newNode'u cagirip kok olusturuyoruz

// If the datas are smaller than the node left leaf, if they are bigger to right leaf. 
// If node is empty, then we are calling newNode and creating the root..

struct node *insert(struct node *node, int data){
	if(node==NULL){
		return newNode(data);
	}
	
	if (data < node->data){
		node->left = insert(node->left, data);
	}
	else if (data > node->data){
		node->right = insert(node->right, data);
	}
	
	return node;
}

int main(){
	struct node *root = NULL;
	bool i = true;
	int child,parent;
	
	printf("Kok icin sayi giriniz\n");
	scanf("%d",&parent);
	root = insert(root, parent);
	
	// girilen sayi 5 olana kadar dongu devam ediyor
	// Loop is running until the scanned value is 5.
	while(i){
		printf("Eleman eklemek icin sayi giriniz \n");
		scanf("%d",&child);
		if(child == 5){			// girilen sayi 5'e esitse donguden cikar
			break;
		}
		insert(root, child);
	}
	
	printf("-------------------\n");
	printf("Agac yapisi : \n");
	preorder(root); 	// preorder yontemiyle ekrana yazdiriyoruz
						// printing with preorder method
    
	return 0;
}
