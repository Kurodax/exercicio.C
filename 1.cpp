#include <stdio.h>
#include <math.h>

#define grupo1 10/100
#define grupo2 15/100
#define grupo3 25/100

int main(){
	
	
	char cat;
	int nome, salario, novosalario;  

	    do 
        { 
	        printf(" Informe o salario do funcionario: \n");
	        scanf("%i" , &salario);
			printf( "Informe a categoria do Funcionario (A, B, C, D, E, F, H, I, J, K, R ou T): \n");
	        scanf("%i", &cat);
	        
	      if (cat!='A'&&cat!='B'&&cat!='C'&&cat!='D'&&cat!='E'&&cat!='F'&&cat!='H'&&cat!='I'&&cat!='J'&&cat!='K'&&cat!='R'&&cat!='T'){
	        printf("Categoria incorreta, digite: A, B, C, D, E, F, H, I, J, K, R ou T \n");
		    }
		    
        } while (cat!='A'&&cat!='B'&&cat!='C'&&cat!='D'&&cat!='E'&&cat!='F'&&cat!='H'&&cat!='I'&&cat!='J'&&cat!='K'&&cat!='R'&&cat!='T');
    
      if(cat=='A'||cat=='C'||cat=='F'||cat=='H'){
      	printf("O aumento no valor do salario sera de $ ", salario * grupo1);
      	
	  } else if (cat=='B'||cat=='D'||cat=='E'||cat=='I'||cat=='J'||cat=='T'){
	  	     printf("O aumento no valor do salario sera de $ ", salario * grupo2);
	  	     
	    }else {
	    	printf("O aumento no valor do salario sera de $ ", salario * grupo3);
		}
	  	
return 0;
}