#pragma once
#include<stdio.h>

/*
	수치해석학
*/
typedef char int8;
typedef short int16;
typedef int int32;
typedef long int64;
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long uint64;

int64 pow(const int64 _x, const int64 _n);
__inline int32 max2(const int32 _x, const int32 _y);
__inline int32 max3(const int32 _x, const int32 _y, const int32 _z);
__inline int32 min2(const int32 _x, const int32 _y);
__inline int32 min3(const int32 _x, const int32 _y, const int32 _z);
__inline uint32 abs(const int32 _x);
__inline int32 gcd(int32 x, int32 y);
__inline int64 lcm(int32 x, int32 y);
double sqrt(uint64 x);
double sin(const int32 _x);
double cos(const int32 _x);
double tan(const int32 _x);
