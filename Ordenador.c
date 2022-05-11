#include <stdio.h>

void main()
{
    int n,m,k;
    int *ponteiro_n,*ponteiro_m,*ponteiro_k;
    ponteiro_n=&n;
    ponteiro_m=&m;
    ponteiro_k=&k;
    
    printf("Digite um valor:");scanf("%i",ponteiro_n);
    printf("\nDigite um valor:");scanf("%i",ponteiro_m);
    printf("\nDigite um valor:");scanf("%i",ponteiro_k);
    
    
    printf("\nA ordem é: ");
    if(n<=m){
        if(n<=k){
            printf("%i",*ponteiro_n);
            if(k<=m){
                printf(",%i",*ponteiro_k);
                printf(",%i",*ponteiro_m);
            }else{
                printf(",%i",*ponteiro_m);
                printf(",%i",*ponteiro_k);
            }
        }else{
            printf("%i",*ponteiro_k);
            if(n<=m){
                printf(",%i",*ponteiro_n);
                printf(",%i",*ponteiro_m);
            }else{
                printf(",%i",*ponteiro_m);
                printf(",%i",*ponteiro_k);
            }
        }
    }else{
        if(m<=k){
            printf("%i",*ponteiro_m);
            if(k<=n){
                printf(",%i",*ponteiro_k);
                printf(",%i",*ponteiro_n);
            }else{
                printf(",%i",*ponteiro_n);
                printf(",%i",*ponteiro_k);
            }
        }else{
            printf("%i",*ponteiro_k);
            printf(",%i",*ponteiro_m);
            printf(",%i",*ponteiro_n);
           
        }
    }
}
