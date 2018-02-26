#include <stdio.h>
#include "vector.h"
#include <stdlib.h>

int main() {
	char opcion = " ";
	vector3D vector1;
	vector3D vector2;
	vector3D *ptr;
	float mag;
	float producto;
	float degrees;
	float radianes;

	printf("1. Suma de vectores\n");
	printf("2. Producto escalar\n");
	printf("3. Producto vectorial\n");
	printf("4. Magnitud de un vector\n");
	printf("5. Ortogonalidad entre vectores\n");
	printf("6. Angulo entre vectores\n");
	printf("Ingrese una opcion: \n");

	scanf("%s", &opcion);

	switch (opcion){
		case '1':
			printf("Suma de vectores\n");
				

			//pidiendo valores de vector 1
			printf("Ingrese x de VECTOR1: ");
			scanf("%f", &vector1.x);
			printf("Ingrese y de VECTOR1: ");
			scanf("%f", &vector1.y);
			printf("Ingrese z de VECTOR1: ");
			scanf("%f", &vector1.z);

			printf("\n");
			//pidiendo valores de vector 2
			printf("Ingrese x de VECTOR2: ");
			scanf("%f", &vector2.x);
			printf("Ingrese y de VECTOR2: ");
			scanf("%f", &vector2.y);
			printf("Ingrese z de VECTOR2: ");
			scanf("%f", &vector2.z);
				
			ptr = suma(vector1, vector2);
			printf("Suma de (%f;%f;%f) y (%f;%f;%f):\n", vector1.x, vector1.y, vector1.z, vector2.x, vector2.y, vector2.z);
			printf("Vector suma: (%f;%f;%f)\n", ptr->x, ptr->y, ptr->z);
			break;

		case '2':
			printf("Producto escalar\n");
				

			//pidiendo valores de vector 1
			printf("Ingrese x de VECTOR1: ");
			scanf("%f", &vector1.x);
			printf("Ingrese y de VECTOR1: ");
			scanf("%f", &vector1.y);
			printf("Ingrese z de VECTOR1: ");
			scanf("%f", &vector1.z);

			printf("\n");
			//pidiendo valores de vector 2
			printf("Ingrese x de VECTOR2: ");
			scanf("%f", &vector2.x);
			printf("Ingrese y de VECTOR2: ");
			scanf("%f", &vector2.y);
			printf("Ingrese z de VECTOR2: ");
			scanf("%f", &vector2.z);
			producto = dotproduct(vector1, vector2);
			printf("Producto punto de (%f;%f;%f) y (%f;%f;%f):\n", vector1.x, vector1.y, vector1.z, vector2.x, vector2.y, vector2.z);
			printf("Producto punto: %f\n", producto);
			break;

		case '3':
			printf("Producto vectorial\n");

			//pidiendo valores de vector 1
			printf("Ingrese x de VECTOR1: ");
			scanf("%f", &vector1.x);
			printf("Ingrese y de VECTOR1: ");
			scanf("%f", &vector1.y);
			printf("Ingrese z de VECTOR1: ");
			scanf("%f", &vector1.z);

			printf("\n");
			//pidiendo valores de vector 2
			printf("Ingrese x de VECTOR2: ");
			scanf("%f", &vector2.x);
			printf("Ingrese y de VECTOR2: ");
			scanf("%f", &vector2.y);
			printf("Ingrese z de VECTOR2: ");
			scanf("%f", &vector2.z);
			
			ptr = crossproduct(vector1, vector2);
			printf("Producto cruz de (%f;%f;%f) y (%f;%f;%f):\n", vector1.x, vector1.y, vector1.z, vector2.x, vector2.y, vector2.z);
			printf("Producto cruz: (%f i + %f j + %f z)\n", ptr->x, ptr->y, ptr->z);

			break;

		case '4':
			printf("Magnitud de un vector\n");
			

			//pidiendo valores de vector 1
			printf("Ingrese x de VECTOR1: ");
			scanf("%f", &vector1.x);
			printf("Ingrese y de VECTOR1: ");
			scanf("%f", &vector1.y);
			printf("Ingrese z de VECTOR1: ");
			scanf("%f", &vector1.z);
			
			mag = magnitud(vector1);
			printf("Magnitud del vector(%f;%f;%f):\n", vector1.x, vector1.y, vector1.z);
			printf("Magnitud: %f\n", mag);

			break;

		case '5':
			printf("Ortogonalidad entre vectores\n");

			//pidiendo valores de vector 1
			printf("Ingrese x de VECTOR1: ");
			scanf("%f", &vector1.x);
			printf("Ingrese y de VECTOR1: ");
			scanf("%f", &vector1.y);
			printf("Ingrese z de VECTOR1: ");
			scanf("%f", &vector1.z);

			printf("\n");
			//pidiendo valores de vector 2
			printf("Ingrese x de VECTOR2: ");
			scanf("%f", &vector2.x);
			printf("Ingrese y de VECTOR2: ");
			scanf("%f", &vector2.y);
			printf("Ingrese z de VECTOR2: ");
			scanf("%f", &vector2.z);

			if (esOrtogonal(vector1, vector2)){
				printf("Son ortogonales\n");
			}else{
				printf("No son ortogonales\n");
			}

			break;

		case '6':
			printf("Angulo entre vectores\n");

			//pidiendo valores de vector 1
			printf("Ingrese x de VECTOR1: ");
			scanf("%f", &vector1.x);
			printf("Ingrese y de VECTOR1: ");
			scanf("%f", &vector1.y);
			printf("Ingrese z de VECTOR1: ");
			scanf("%f", &vector1.z);

			printf("\n");
			//pidiendo valores de vector 2
			printf("Ingrese x de VECTOR2: ");
			scanf("%f", &vector2.x);
			printf("Ingrese y de VECTOR2: ");
			scanf("%f", &vector2.y);
			printf("Ingrese z de VECTOR2: ");
			scanf("%f", &vector2.z);

			radianes = angulo(vector1, vector2, TRUE);
			degrees = angulo(vector1, vector2, FALSE);
			printf("Angulo en radianes: %f\n", radianes);
			printf("Angulo en grados: %f\n", degrees);
			break;

	}

}
