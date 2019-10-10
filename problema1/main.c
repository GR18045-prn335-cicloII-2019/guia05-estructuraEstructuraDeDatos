#include <stdio.h>

//funcion que convierte el numero
char convertidorDeBase(int no,int base){
    int resultado=0;
    if(!no)
        return  'v';
    if(base==2){
        resultado=no%2;
        no=no/2;
        convertidorDeBase(no,base);
    }else if(base==3){
        resultado=no%3;
        no=no/3;
        convertidorDeBase(no,base);
    }else if(base==4){
        resultado=no%4;
        no=no/4;
        convertidorDeBase(no,base);
    }else if(base==5){
        resultado=no%5;
        no=no/5;
        convertidorDeBase(no,base);
    }else if(base==6){
        resultado=no%6;
        no=no/6;
        convertidorDeBase(no,base);
    }else if(base==7){
        resultado=no%7;
        no=no/7;
        convertidorDeBase(no,base);
    }else if(base==8){
        resultado=no%8;
        no=no/8;
        convertidorDeBase(no,base);
    }else if(base==9){
        resultado=no%9;
        no=no/9;
        convertidorDeBase(no,base);
    }else if(base==10){
        resultado=no%10;
        no=no/10;
        convertidorDeBase(no,base);
    }else if(base==11){
        resultado=no%11;
        no=no/11;
        convertidorDeBase(no,base);
    }else if(base==12){
        resultado=no%12;
        no=no/12;
        convertidorDeBase(no,base);
    }else if(base==13){
        resultado=no%13;
        no=no/13;
        convertidorDeBase(no,base);
    }else if(base==14){
        resultado=no%14;
        no=no/14;
        convertidorDeBase(no,base);
    }else if(base==15){
        resultado=no%15;
        no=no/15;
        convertidorDeBase(no,base);
    }
    else if(base==16) {
        resultado=no%16;
        no=no/16;
        convertidorDeBase(no,base);
    }
    switch(resultado){
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d",resultado);
    }
}

//funcion main
void main()
{
    int k=0;
    int b=0;
    printf("Ingrese el numero:");
    scanf("%d",&k);
    printf("Ingrese la base:");
    scanf("%d",&b);
    convertidorDeBase(k,b);
}