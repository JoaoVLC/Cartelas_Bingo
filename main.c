#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
    int cartb[10],cartn,num,flag;
    int i,j,x,y;
    
    
    flag=0;
    
    printf("///BINGO///\n");
    printf("Informe a quantidade de cartelas que deseja gerar: ");
    scanf("%i",&cartn);
    fflush(stdin);
    
    srand( time(NULL) );
    
    for( i=0; i<cartn; i++ ){
    	
    	for( j=0; j<10; j++){
    		
    		num = (rand()%99);
    		
    		for( x=0; x<=j - 1; x++){
    			
    			if(num==cartb[x]){
    				flag = 1;
    				break;
				}
    			
			}
    		if(flag==1){
    			flag=0;
    			j=j-1;
			}
			else{
			
    		cartb[j]=num;
    	    }
		}
		printf("\n");
		printf("CARTELA %d: ", i + 1);
		
		for(y=0; y<10; y++){
			
			printf("%d ", cartb[y]);
		}
		printf("\n");
		
    }
    
return 0;    
}
