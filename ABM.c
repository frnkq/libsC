#include "ABM.h"

//include inputs

int alta(ArrayList* arrayList){
    //clearScreen()
    //Entity* entity = Entity_new();
    printf("\nALTA\n");
    if(arrayList != NULL && entity != NULL){
        /*
        char name[];
        int age[];
        ...
        */
        printf("\nINGRESO DE CAMPO 1");
        //getStringLimitedInf();
        //entity_setSomething(entity, name);

        //al_add(this, entity);
    }
}

int modificacionByIndex(ArrayList* arrayList, int i){
    //Entity* entity = Entity_new();
    if(arrayList != NULL && entity != NULL){
        char continueEditing = 's';
        int editOption;
        do{
            //clearScreen();

            //Entity* entity = al_get(arrayList, i);
            //Entity* copy = entity;
            printf("\n MODIFICACION\n");
            printf("\n1-Edit option");
            printf("\n2-Edit option");
            printf("\n3-Edit option");
            printf("\n4-Edit option");
            printf("\n5-Edit option");
            printf("\n6-Edit option");
            printf("\n7-Edit option");
            printf("\n - Finalizar edicion y guardar");
            printf("\n - Finalizar edicion sin guardar");

            printf("\nEDITANDO:");
            //Entity_print(entity);

            //askIntWithLimits();

            switch(editOption){
                case 1:
                    //edit
                    /*
                    char bName[70];
                    */
                    printf("\nEDICION DE CAMPO 1");
                    //getStringLimitedInf(parameters, bName);
                    //entity_setSomething(copy, name);
                    break;

                case 2:
                    //edit
                    break;

                case 3:
                    //edit
                    break;

                case 4:
                    //edit
                    break;

                case 5:
                    //edit
                    break;

                case 6:
                    //endsaving
                    //index of original
                    //int index = al_indexOf(arrayList, entity);
                    //sets edited copy where original was
                    //al_set(arrayList, index, copy);
                    continueEditing = 'n';
                    break;
                case 7:
                    //endwithoutsaving
                    continueEditing = 'n';
                    break;
            }



        }while(continueEditing == 's');
    }
}

int baja(ArrayList* arrayList);


//escribe lo que esta en memoria, tal cual esta en la memoria (fwrite)
//el fprintf escribe la representacion simbolica de los datos
//PRINTF: CARACTERES IMPRIMIBLES
//FWRITE: VALOR DE LA VARIABLE EN MEMORIA
