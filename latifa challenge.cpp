//challenge 1
#include <stdio.h>
main() {
    char nom[30];
    char prenom[30];
    int age;
    char sexe;
    char email[50];
    printf("entrez votre nom : ");
    scanf(" %s", nom); 
    printf("entrez votre prénom : ");
    scanf(" %s", prenom); 
    printf("entrez votre âge : ");
    scanf("%d", &age);
    printf("entrez votre sexe (M/F) : ");
    scanf(" %c", &sexe); 
    printf("entrez votre adresse email : ");
    scanf(" %s", email); 
    printf("nom : %s\n", nom);
    printf("prénom : %s\n", prenom);
    printf("age : %d\n", age);
    printf("sexe : %c\n", sexe);
    printf("adresse email : %s\n", email);

}



//challenge 2
#include <stdio.h>
main(){
    float T;
    float K;
    printf("entrez la température en Celsius : ");
    scanf("%f", &T);
    K = C + 273.15;
    printf("la température en Kelvin est : %f \n", K);

}




//challenge 3
#include <stdio.h>
main() {
    float km;
    float yards;
    printf("entrez la distance en kilomètres : ");
    scanf("%f", &km);
    yards = km * 1093.61;
    printf("La distance en yards est : %f \n", yards);

}



//challenge 4
#include <stdio.h>
main(){
    float km/h;
    float m/s;
    printf("entrez la vitesse en km/h : ");
    scanf("%f", &km/h);
    m/s = km/h * 0.27778;
    printf("la vitesse en m/s est : %f \n", m/s);

}



//chllenge 5
#include <stdio.h>
main(){
    float C;
    printf("entrez la température en : ");
    scanf("%f", &C);
    if (C < 0) {
        printf("l etat de l'eau est : Solide\n");
    } else if (C >= 0 && C < 100) {
        printf("l etat de l'eau est : Liquide\n");
    } else {
        printf("l etat de l'eau est : Gaz\n");
    }

}



//challenge 6
#include <stdio.h>
main(){
    float a,b;
    printf("entrez le premier nombre : ");
    scanf("%f", &a);
    printf("entrez le deuxieme nombre : ");
    scanf("%f", &b);
    printf("a + b = %f\n", a + b);
    printf("a - b = %f\n", a - b);
    printf("a * b = %f\n", a * b);
    printf("a / b = %f\n", a / b);

}




   
   
   
   
   


//challenge 1
#include <stdio.h>
main() {
    int N;

    printf("entrez un entier : ");
    scanf("%d", &N);

    if (N%2==0) {
        printf("%d est pair.\n", N);
    } 
	else {
        printf("%d est impair.\n", N);
    }

}
*/
/*
//challenge 2
#include <stdio.h>
main(){
    char c;
    printf("entrez un caractere : ");
    scanf("%c", &c);
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c est une voyelle\n", c);
            break;
        default:
            printf("%c n'est pas une voyelle\n", c);
            break;
    }

}


//challenge 3
#include <stdio.h>
main() {
    int a, b;
    int S;
    printf("entrez la premiere valeur : ");
    scanf("%d", &a);
    printf("entrez la deuxieme valeur : ");
    scanf("%d", &b);
    S = a + b;
    if (a==b){
        printf("la somme est : %d\n", 3*S);
    } 
	else {
        printf("La somme est : %d\n", S);
    }
}


//challenge 4
#include <stdio.h>
#include <math.h>
main(){
    float a, b, c;
    float delta,racine1,racine2
    printf("entrez a, b et c de l'équation ax^2 + bx + c = 0 :\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    delta = b^2-4*a*c;
	if (delta > 0) {
        racine1 =(-b+sqrt(delta)) / (2*a);
        racine2 =(-b-sqrt(delta)) / (2*a);
        printf("les solutions de l'equation sont :\n");
        printf("x1 = %f\n", racine1);
        printf("x2 = %f\n", racine2);
    } else if (delta == 0) {
        racine1= -b/(2*a);
        printf("la solution de l'equation est :\n");
        printf("x = %f\n", racine1);
    } else 
	{
        printf("L'équation n'admet pas de solution \n");
    }
}


// challenge 10
#include <stdio.h>
main(){
	int jour,mois,annee;
	char nom_mois[30] ;
	printf("entrer une date :");
	scanf("%d/%d/%d",&jour,&mois,&annee);
	switch(mois){
		case 1:
		printf("%d-janvier-%d",jour,annee);
		break;
		case 2:
		printf("%d-fevrier-%d",jour,annee);
		break;
		case 3:
		printf("%d-mars-%d",jour,annee);
		break;
		case 4:
		printf("%d-avril-%d",jour,annee);
		break;
		case 5:
		printf("%d-may-%d",jour,annee);
		break;
		case 6:
		printf("%d-juin-%d",jour,annee);
		break;
		case 7:
		printf("%d-juillet-%d",jour,annee);
		break;
		case 8:
		printf("%d-aout-%d",jour,annee);
		break;
		case 9:
		printf("%d-septembre-%d",jour,annee);
		break;
		case 10:
		printf("%d-octobre-%d",jour,annee);
		break;
		case 11:
		printf("%d-novembre-%d",jour,annee);
		break;
		case 12:
		printf("%d-decembre-%d",jour,annee);
		break;
		
	}
	
}





//challenge 3 (condition)
#include <stdio.h>
main(){
	int nbr_total,nbr_util;
	int temps_empl;
	printf("entrer le nmbre totale des jrs de conges:");
	scanf("%d",&nbr_total);
	printf("entrer le nmbre utilises:");
	scanf("%d",&nbr_util);
	if 
	
}




// challenge 1 (boucles)
#include<stdio.h>
main(){
	int N,i;
	printf("entrer un nombre :");
	scanf("%d",&N);
	for (i=1;i<=10;i++){
		printf("%d*%d=%d\n",N,i,N*i);
	}
}



//challenge 2 (boucles)
#include<stdio.h>
main(){
	int n,i;
	int p;
	printf("entrer un entier n:");
	scanf("%d",&n);
	for (i=1;i<=n;++i){
		p*=i;
	}
	printf(" %d!=%d\n",n,p);
}
challenge 3 (boucles)
#include<stdio.h>
main(){
	int n,i;
	int s=0;
	printf("entrer un nombre :");
	scanf("%d",&n);
	for (i=0;i<=n;i++){
		s+=i;
	}
	printf("donc s=%d",s);
}


//challenge 1 (tableau)
#include<stdio.h>
main(){
	int i,T[]={1,2,3,4,5};
	int taille=sizeof T[i];
	for (i=0;i<taille;i++){
		printf("T[%d]=%d\n",i,T[i]);
	}
}



//challenge 2 (tableau)
#include<stdio.h>
main(){
	int taille;
    int T[taille];
	printf("entrer la taille du tableau :");
	scanf("%d",&taille);
	for (int i=0;i<taille;i++){
		printf("entrer l element %d:",i+1);
		scanf("%d",&T[i]);
		
	}
	for(int i=0;i<taille;i++){
			printf("%d\n",T[i]);

	}
}




//challenge 3 (tableau)
#include<stdio.h>
main(){
	int taille;
    int T[taille];
    int s;
	printf("entrer la taille du tableau :");
	scanf("%d",&taille);
	for (int i=0;i<taille;i++){
		printf("entrer l element %d:",i+1);
		scanf("%d",&T[i]);
		
	}
	for(int i=0;i<taille;i++){
			printf("%d\n",T[i]);}
	for (int i=0;i<taille;i++){
		s+=T[i];
	}
	 printf("la somme des elements de tableau est:%d",s);

	
}


//challenge 4 (tableau)
#include<stdio.h>
main(){
	int taille;
    int T[taille];
    int max;
    int min;
	printf("entrer la taille du tableau :");
	scanf("%d",&taille);
	for (int i=0;i<taille;i++){
		printf("entrer l element %d:",i+1);
		scanf("%d",&T[i]);
		
	}
	for(int i=0;i<taille;i++){
			printf("%d\n",T[i]);

	}
	for (int i=0;i<taille;i++){
		if(T[i] > max) 
		max = T[i];
	}
printf("le maximum est: %d\n",max);
    for (int i=0;i<taille;i++){
		if(T[i] < min) 
		min = T[i];
	}
printf("le maximum est: %d\n",min);
}

