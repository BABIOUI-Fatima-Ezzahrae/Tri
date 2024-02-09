#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T_Elt long

int main()
{
    int n,i,j,k,tmp,l,index;
  float compteur=0;
  int compteur1=0;
  int compteur2=0;
menu:{
    printf("\n--------------Tri par selection------------\n");
    printf("--------------Tri par isertion-------------\n");
    printf("--------------Tri par rapide---------------\n");
    printf("--------------Tri par bulles---------------\n");
    printf("--------------Tri par fusion---------------\n");
    printf("--------------Tri par tas------------------\n");
    }
    printf("choisir un nombre");
    scanf("%d",&n);
    switch(n){
        case 1:{

  for(k=0;k<100;k++)
   {
       int SIZE=300+rand()%2700;
       int *tab=malloc(SIZE*sizeof*tab);
        srand (time(NULL));

  for(i=0; i<SIZE; i++){
    tab[i]=(rand()%10);
  }

  for(l=0;l<100;l++){
    for (i=0; i < (SIZE-1); i++)
  {
    index = i;

    for (j=i + 1; j < SIZE; j++)
    {
      if (tab[index] > tab[j]){
        index = j;
        compteur++;
        }
    }
    if (index != i)
    {
      tmp = tab[i];
      tab[i] = tab[index];
      tab[index] = tmp;
      compteur++;
    }
  }
   compteur=compteur/100;
}
printf("\n%d\t%.f",SIZE,compteur);
  }

  }

        break;
  case 2:{
      for(k=0;k<100;k++){
            int SIZE=300+rand()%2700;
  int *tab=malloc(SIZE*sizeof*tab);
  srand(time(NULL));
  for(i=0;i<SIZE;i++){
    tab[i]=rand()%20;
  }

  for(l=0;l<100;l++){
    for (i=1 ; i <= SIZE-1; i++) {
    j = i;

    while (j > 0 && tab[j-1] > tab[j]) {
      tmp = tab[j];
      tab[j] = tab[j-1];
      tab[j-1] = tmp;
      j--;
      compteur++;
    }
  }
  compteur=compteur/100;
  }
  printf("\n%d\t%.f",SIZE,compteur);
      }
}
case 3:{
     for(k=0;k<100;k++){
         int SIZE=300+rand()%2700;
       int *tab=malloc(SIZE*sizeof*tab);
        srand (time(NULL));

  for(i=0; i<SIZE; i++){
    tab[i]=(rand()%10);
  }
  for (l=0;l<100;l++){void permuter(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void triRapid(int tab[], int first, int last) {
    int pivot, i, j;
    if(first < last) {
        pivot = first;
        i = first;
        j = last;
        while (i < j) {
            while(tab[i] <= tab[pivot] && i < last)
                i++;
            while(tab[j] > tab[pivot])
                j--;
            if(i < j) {
                    compteur1++;
                permuter(&tab[i], &tab[j]);
            }
        }
        permuter(&tab[pivot], &tab[j]);
        triRapid(tab, first, j - 1);
        triRapid(tab, j + 1, last);
    }
}
    triRapid(tab, 0, SIZE - 1);
  compteur=compteur1/100;
        }
        printf("\n%d\t%.f",SIZE,compteur);
  }
}
    break;
  case 4:{
      for(k=0;k<100;k++){
        int SIZE=300+rand()%2700;
       int *tab=malloc(SIZE*sizeof*tab);
        srand (time(NULL));

  for(i=0; i<SIZE; i++){
    tab[i]=(rand()%10);
  }
  for(l=0;l<100;l++){
    for(i=0;i<SIZE-1;i++){
        for(j=0;j<SIZE-i-1;j++){
        if(tab[j]>tab[j+1]){
            compteur++;
            tmp=tab[j];
            tab[j]=tab[j+1];
            tab[j+1]=tmp;

        }
      }
    }

    compteur=compteur/100;
  }
  printf("\n%d\t%.f",SIZE,compteur);
      }
  }
    break;

  case 5:{
      for(k=0;k<100;k++){
        int SIZE=300+rand()%2700;
       int *tab=malloc(SIZE*sizeof*tab);
        srand (time(NULL));

  for(i=0; i<SIZE; i++){
    tab[i]=(rand()%10);
  }
  for(l=0;l<100;l++){
     void fusion(int tab[], int debut, int milieu, int fin)
    {
        int n1 = milieu - debut + 1;
        int n2 = fin - milieu;

        int G[n1], D[n2];

        for (int i = 0; i < n1; i++)
            G[i] = tab[debut + i];
        for (int j = 0; j < n2; j++)
            D[j] = tab[milieu + 1 + j];

int i, j, k;
        i = 0;
        j = 0;
        k = debut;
        while (i < n1 && j < n2)
        {
            if (G[i] <= D[j])
            {
                compteur1++;
                tab[k] = G[i];
                i++; }
            else
            {compteur1++;
                tab[k] = D[j];
                j++; }
            k++; }

while (i < n1)  {
            tab[k] = G[i];
            i++;
            k++;  }
while (j < n2)  {
            tab[k] = D[j];
            j++;
            k++;  }
    }
 // Tri par fusion
    void triFusion(int tab[], int debut, int fin)
    {
        if (debut < fin) {
            compteur2++;
            // Trouvez le point milieu pour diviser le tableau en deux moitiés
            int m = (debut + fin) / 2;
            triFusion(tab, debut, m);
            triFusion(tab, m + 1, fin);
          fusion(tab, debut, m, fin);   }
    }
 void afficher(int tab[], int n)  {
        for (int i = 0; i < n; i++)
            printf("%d ", tab[i]);
        printf("\n");
    }
        triFusion(tab, 0, n - 1);
        compteur=(compteur1+compteur2)/100;
  }
  printf("\n%d\t%.f",SIZE,compteur);
      }
  }
    break;
  case 6:{
      for(k=0;k<100;k++){
        int SIZE=300+rand()%2700;
       int *tab=malloc(SIZE*sizeof*tab);
        srand (time(NULL));

  for(i=0; i<SIZE; i++){
    tab[i]=(rand()%10);
  }
  for(l=0;l<100;l++){
    void echanger (T_Elt tab[], int i, int j){
        int echange;

        echange=tab[i];

        tab[i]=tab[j];

        tab[j]=echange;
}
void remonter (T_Elt tab[], int SIZE, int i){
     if (i==0){
            compteur1++;
         return;
         }
if (tab[i]>tab[i/2])    {
               compteur1++;
echanger (tab, i, i/2);
                remonter (tab, SIZE, i/2);    }
}
void redescendre ( T_Elt tab[], const int SIZE, int i){
        int imax;
        if (2*i+1>=SIZE) {
                compteur2++;
                return; }
        if (tab[2*i+1]>tab[2*i]){
            compteur2++;
        imax=2*i+1;      }
        else{
             compteur2++;
               imax=2*i;        }
        if (tab[imax]>tab[i]) {
                compteur2++;
                echanger (tab, imax, i);
                redescendre (tab, SIZE, imax);
     }
}
void organiser( T_Elt tab[], int SIZE ){
        int i;
        for(i = 1 ; i < SIZE ; i++)
        remonter(tab, SIZE, i);    }
void Tri_Tas( T_Elt tab[], int SIZE ){
       int i;
        organiser(tab, SIZE);
        for(i=SIZE-1 ; i>0 ; i-- )  {
                echanger(tab, 0, i);
                redescendre(tab, i, 0);   }
}

Tri_Tas( tab, SIZE );
        compteur=(compteur1+compteur2)/100;

  }
  printf("\n%d\t%.f",SIZE,compteur);
      }
  }
    break;

  }
    return 0;
}
