#include <stdio.h>
#include <stdlib.h>

int main() 
{
     
          float gelir, risklifaiz , standartsapma, sharpe;
          printf("Gelir miktarini giriniz");
          scanf ("%f", &gelir);
        
          printf("risklifaiz miktar��n� giriniz");
          scanf("%f", &risklifaiz);
        
        
          printf("standartsapma miktar�n� giriniz");
          scanf("%f", &standartsapma);
        
        //algoritma tan�mlama
        
        gelir = (gelir / 100);
        risklifaiz = (risklifaiz / 100);
        standartsapma = (standartsapma / 100);
        
        // standartsapman�n "0" oldu�u yani i�lemin tan�ms�z oldu�u durumda;
        
            sharpe = (gelir - risklifaiz) / standartsapma;
        
             printf("sharpe oran� %.2f /n", sharpe);
         
           if (sharpe < 1){
         printf ("vasat�n �st� de�er");
        }
        else if (sharpe < 2){
        printf ("ortalama bir de�er");
        }
        else if (sharpe < 3){
        printf ("g�zel bir de�er");
        }
           else {
        printf ("m�kemmel bir deger");
        }
      return 0;
    
    }
