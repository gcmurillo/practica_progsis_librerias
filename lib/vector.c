/* implementar aquí las funciones requeridas */
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "vector.h"

#define PI 3.1415925;

void printCarita(){
	printf(":(\n");
}

vector3D *suma(vector3D v1, vector3D v2){

	vector3D *suma;

	suma->x = v1.x + v2.x;
	suma->y = v1.y + v2.y;
	suma->z = v1.z + v2.z;

	return suma;

}

float dotproduct(vector3D v1, vector3D v2){

	return (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z);

}

vector3D *crossproduct(vector3D v1, vector3D v2){

	vector3D *producto;

	producto->x = (v1.y * v2.z) - (v1.z * v2.y);
	producto->y = (v1.z * v2.x) - (v1.x * v2.z);
	producto->z = (v1.x * v2.y) - (v1.y * v2.x);

	return producto; 

}

float magnitud(vector3D v){

	return sqrt(pow(v.x,2) + pow(v.y,2) + pow(v.z,2));

}

boolean esOrtogonal(vector3D v1, vector3D v2){

	if (dotproduct(v1, v2) == 0){
		return TRUE;
	}

	return FALSE;

}

float angulo(vector3D v1, vector3D v2, boolean radian){

	float angulo = acos(dotproduct(v1,v2)/(magnitud(v1) * magnitud(v2)));

	float val = 180/PI;

	if (radian == TRUE){
		return angulo;
	}else{
		return angulo * val;
	}

}