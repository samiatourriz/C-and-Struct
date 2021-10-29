#include<stdio.h>
#include<stdlib.h>


struct deuxD{
	int x;
	int y;
}p1;

struct troisD{
	int x;
	int y;
	int z;
}p2;
void main(){
	
	char p,c;
	printf("tapez Y pour commencer programme et Q pour quitter :\n");
	scanf("%s",&p);
	
	while(p=='y'||p=='Y'){
	printf("entrez 2 si vous voulez choisir des points en 2D , sinon tapez 3 pour 3D :");
	scanf("%s",&c);
	
		if(c=='2'){
			printf("entrez l'abscisse :");
			scanf("%d",&p1.x);
		
			printf("entrez l'ordonnee  :");
			scanf("%d",&p1.y);
		
			printf("les valeurs 2D sont : x : %d , et y : %d\n", p1.x , p1.y);
			
		}
		
		else if (c=='3'){
			printf("entrez l'abscisse :");
			scanf("%d",&p2.x);
		
			printf("entrez l'ordonnee  :");
			scanf("%d",&p2.y);
		
			printf("entrez Z :");
			scanf("%d",&p2.z);
			printf("les valeurs 2D sont : x : %d , et y : %d , z : %d\n", p2.x , p2.y , p2.z);
			
		}
	
		else{ printf("error\n");}
		
		printf("tapez Y pour commencer programme et Q pour quitter :\n");
		scanf("%s",&p);
	
		}
		
			
		if (p=='Q'||p=='q'){
		printf("thank you !");}
		else  printf("error");
}
	

	
