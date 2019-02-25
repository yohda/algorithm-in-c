#include"_math.h"

int64 pow(int64 _x, int64 _n)
{
	int64 e = 1;
	while (_n > 1) {
		if (_n & 1)
			e *= _x;

		_x *= _x;
		_n = _n >> 1;
	}

	return _x * e;
}

__inline int32 max2(const int32 _x, const int32 _y)
{
	return _x > _y ? _x : _y;
}

__inline int32 max3(const int32 _x, const int32 _y, const int32 _z)
{
	return max2(max2(_x, _y), _z);
}

__inline int32 min2(const int32 _x, const int32 _y)
{
	return _x > _y ? _y : _x;
}

__inline int32 min3(const int32 _x, const int32 _y, const int32 _z)
{
	return min2(min2(_x, _y), _z);
}

__inline uint32 abs(const int32 _x)
{
	return _x > 0 ? _x : -_x;
}

__inline int32 gcd(int32 _x, int32 _y)
{
	int z;
	while (_y)
	{
		z = _x % _y;
		_x = _y;
		_y = z;
	}

	return _x;
}

__inline int64 lcm(int32 _x, int32 _y)
{
	return (_x * _y) / gcd(_x, _y);
}

/*
	뉴턴법 이용
*/
double sqrt()
{
	
}

/*
	삼각함수들은 테일러 급수 이용
*/
double sin(const int32 _x)
{
	
}

double cos(const int32 _x)
{

}

double tan(const int32 _x)
{

}