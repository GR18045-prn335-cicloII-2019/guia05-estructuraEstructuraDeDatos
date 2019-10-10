#include <stdio.h>

//int comb(int n,int m);

//int main() {
//  int resultado=comb(10,5);
//printf("%d",resultado) ;
//return 0;
//}
//int comb(int n,int m){
//  if ((n==0)||(n==m))
//    return 1;
//else return comb(n-1,m-1) + comb(n-1,m);
//}
void pascal(int vector[100],int n,int c);
int main() {
    int n,vector[0];
    vector[0]=1;
    printf("Ingrese el numero de filas:");
    scanf("%d",&n);
    pascal(vector,n,0);
    return 0;
}
void pascal(int vector[100],int n,int c){
    int aux[c+1];
    aux[0]=1;
    aux[c]=1;
    if(c<=n){

        for (int j = 1; j <c ; ++j) {
            aux[j]=vector[j-1]+vector[j];
        }
        for (int k = 0; k <=c ; ++k) {
            printf("[%i]",aux[k]);
        }
        c=c+1;
        printf("\n");
        pascal(aux,n,c);
    }
}