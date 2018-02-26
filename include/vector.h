#define TRUE 1 //verdadero
#define FALSE 0 //falso
typedef int boolean;

/* Definicion del tipo de datos vector3D */
typedef struct {
	float x;
	float y;
	float z;
} vector3D;

vector3D *suma(vector3D v1, vector3D v2);

float dotproduct(vector3D v1, vector3D v2);

vector3D *crossproduct(vector3D v1, vector3D v2);

float magnitud(vector3D v);

void printCarita();

boolean esOrtogonal(vector3D v1, vector3D v2);

float angulo(vector3D v1, vector3D c2, boolean radian);