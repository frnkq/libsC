#include "ArrayList.h"
#include <stdio.h>
#include "Empleado.h"

int parser_parseEmpleados(char* fileName, ArrayList* arrayList)
{
    FILE* file = fopen(fileName, "r");
    if(fileName != NULL && arrayList != NULL){
       
	//BUFFERS
	char bId[250];
        char bname[250];
        char bhours[500];

	//READS THE FIRST LINE 
	//fscanf(file, "%[^,],%[^,],%[^\n]\n", bId,bname,bhours);
      
      do{
            S_Empleado* empleado = Empleado_new();

            int read = fscanf(file, 
		"%[^,],%[^,],%[^\n]\n",
		bId,bname,bhours);
		
	    //change based on variable numbers
            if(read == 3){
                //check the datatype before saving to the entity
                Empleado_setId(empleado, id);
                Empleado_setNombre(empleado, bnombre);
                Empleado_setHorasTrabajadas(empleado, horasTrabajadas);

                al_add(arrayList, empleado);
            }

        }while(feof(file)==0);
    }
    return 1; // OK
}

