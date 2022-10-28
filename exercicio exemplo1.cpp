#include<iostream>
#include<stdio.h>

using namespace std;
#define Elem 7

int main ()
{   
    int i , v[Elem] ;
    for (i=0;i<Elem;i++) {
    printf ("V[%d]: ", i);
    scanf("%d",&v[i]);  
   }
   for (i=0; i<Elem;i++) {
    if (v[i] == 64){
        printf("posicao = %d\n",i);
    }
    }
   }