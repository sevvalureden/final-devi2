#include <stdio.h>
#include <stdlib.h>

int main() 
{
     
          float gelir, risklifaiz , standartsapma, sharpe;
          printf("Gelir miktarini giriniz");
          scanf ("%f", &gelir);
        
          printf("risklifaiz miktarıını giriniz");
          scanf("%f", &risklifaiz);
        
        
          printf("standartsapma miktarını giriniz");
          scanf("%f", &standartsapma);
        
        //algoritma tanımlama
        
        gelir = (gelir / 100);
        risklifaiz = (risklifaiz / 100);
        standartsapma = (standartsapma / 100);
        
        // standartsapmanın "0" olduğu yani işlemin tanımsız olduğu durumda;
        
            sharpe = (gelir - risklifaiz) / standartsapma;
        
             printf("sharpe oranı %.2f /n", sharpe);
         
           if (sharpe < 1){
         printf ("vasatın üstü değer");
        }
        else if (sharpe < 2){
        printf ("ortalama bir değer");
        }
        else if (sharpe < 3){
        printf ("güzel bir değer");
        }
           else {
        printf ("mükemmel bir deger");
        }
      return 0;
    
    }
