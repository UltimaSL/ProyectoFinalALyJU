#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>

	char listaDeNombres[10][25]={"Ana Carrera","Juan Perez","Marcos Ochoa","José Broce","María Arrocha","Alex Mo","Axel Juárez","Juan Gomez","Mar Rojas","Lina Nieto"};
    char matricula[10];
	bool estacionamientos[2][5];
    char listaDeMatriculas[10][10]={"M40095","AA13452","0094529","KZ12540","OA65810","AA20931","9999125","AZ41262","6705531","AG9831"};
    char FuncionMatriculas;
    
    bool funcionParafalse(bool estacionamientos[0][0]){
    	int c, c2;
    	for (c=0; c<2; c++) {
    		for (c2=0; c2<5; c2++) {
              estacionamientos[c][c2]=false;
    		}
		}
	}
	
	bool funcionImpresion(bool estacionamientos[0][0]){
    	int c, c2;
    	for (c=0; c<2; c++) {
    		for (c2=0; c2<5; c2++) {
              printf("");
    		}
		}
	}
    
int main(void){

    //Declarar variables
    int Juan, Alexander, x, z, f, m, m2, contz, contm; 
    contm=0;
    contz=0;
    
		
    do{
        system("cls");
        printf("MENU DE OPCIONES\n\nSelecione una opccion\n\n");
        printf("1. Estacionamientos\n");
        printf("2. Veiculos Autorizados\n");
        printf("3. Registro de acceso\n");
        printf("4. Salir del programa\n");
        scanf("%d",&Juan);

        switch(Juan){
            
            case 1:
				do{
					system("cls");
                	printf("Asignar un estacionamiento?\n");
                	printf("Introdusca la matricula del Auto\n");
                	scanf("%s",&matricula);
					for(z=0;z<10;z++){
						if(strcmp(listaDeMatriculas[z], matricula)==0){
							printf("Matricula registrada.\nVeiculo perteneciente a %s\n",listaDeNombres[z]);
							for(m=0;m<2;m++){
								for(m2=0;m<5;m2++){
									if(estacionamientos[m][m2]==false){
										estacionamientos[m][m2]=true;
										printf("Estacionamiento asignado %d,%d\n",m+1,m2+1);
										break;
									}
								}
								break;
							}
						break;
						}
						else{
							contz++;
						}
					}
					if(contz==10){
						printf("Aceso denegado.\nEsta matricula no esta registrada.");
						printf("Para intentar denuevo pulse 1");
						scanf("%d",&f);	
					}
					printf("Asignar otra matricula? si=1, no=0\n");
					scanf("%d",&f);
						
					}while(f!=0);
					
					
                break;
            
            case 2:
                system("cls");
                 printf("Veiculos Autorizados\n");
                    for(x=0; x<10;x++){
                    printf("%s,.....%s\n",listaDeNombres[x], listaDeMatriculas[x]);
                    }
                    printf("Para regresar al menu cero\n");
                    scanf("%d",&Alexander);
                    break;
                    
            case 3:
                printf("Personas Que han Accesado;");
            
            
                break;
   	 }
    }while(Juan!=4);
    
    return (0);
    
}
