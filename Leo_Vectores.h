#ifndef LEO_VECTORES_H_INCLUDED
#define LEO_VECTORES_H_INCLUDED



#endif // LEO_VECTORES_H_INCLUDED

int totalizarEnteros (int vec[], int tam){
    int todoOk=0;

    if(vec != NULL && tam >0){
            vec[tam - 1]=0;
            for (int i=0 ; i<tam-1; i++){
                vec [tam -1] +=vec[i];
            }
            todoOk=1;
    }
    return todoOk;
}

int mostrarInvertidos(int vec[], int tam){
    int todoOk=0;

    if(vec != NULL && tam >0){
            for (int i= tam -1; i>=0; i--){
                 printf("%d ",vec[i]);
            }
            printf("\n\n");
            todoOk=1;
    }


    return todoOk;
}

int esMayuscula (char x){
    int es = 0;

    if (x ==toupper(x)){
        es =1;
    }
    return es;
}

int contarMayusculas (char vec[], int tam){
    int contador =- 1;

        if(vec != NULL && tam >0){
        contador=0;
        for (int i=0; i<tam;i++){
            if (esMayuscula(vec[i])){
                contador++;
                }
            }
        }
    return contador;
}

int buscarCaracterPos (char x, char vec[], int tam){
    int todoOk=-2;

    if(vec != NULL && tam >0){
        todoOk=-1;
        for (int i=0; i<tam;i++){
            if (vec[i]==x){
                todoOk=i;
                break; // para que deje de iterar
                }
            }
        }

    return todoOk;
}

int buscarCaracter (char x, char vec[], int tam){
    int todoOk=-1;

    if(vec != NULL && tam >0){
        todoOk=0;
        for (int i=0; i<tam;i++){
            if (vec[i]==x){
                todoOk=1;
                break; // para que deje de iterar
            }
        }
    }
    return todoOk;
}

int calcularPromedio (int vec[], int tam, float* pPromedio){
    int todoOk=0;
    int acumulador=0;

        if(vec != NULL && tam >0){
            for (int i=0; i<tam;i++){
            acumulador= acumulador+vec[i];
        }
        *pPromedio=(float) acumulador/tam;
        todoOk=1;
        }

    return todoOk;
}

int mostrarEnteros (int vec[], int tam){
    int todoOk= 0;

    if(vec != NULL && tam >0){
            for (int i=0; i<tam; i++){
                 printf("%d ",(vec[i]));
            }
            printf("\n\n");
            todoOk=1;
    }
    return todoOk;
}

int cargarEnteros (int vec[], int tam){
    int todoOk=0;

    if (vec != NULL && tam >0){
        for (int i=0; i<tam;i++){
            printf("Ingrese un numero: ");
            scanf("%d", &vec[i]);
        }
        todoOk=1;
    }
    return todoOk;
}
