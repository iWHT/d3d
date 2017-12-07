#include "stdafx.h"

#include <Windows.h>
#include <DirectXMath.h>
#include <iostream>

using namespace std;
using namespace DirectX;

ostream& operator<<(ostream& os, FXMVECTOR v)
{
	XMFLOAT4 dest;
	XMStoreFloat4(&dest, v);
	os << "(" << dest.x << ", " << dest.y << ", "
		<< dest.z << ", " << dest.w << ")";
	return os;
}

ostream& operator<<(ostream& os, CXMMATRIX m)
{
	for (int i = 0; i < 4; ++i)\
	{
		for (int j = 0; j < 4; ++j)
		{
			os << m.r[i].m128_f32[j] << "\t";
			os << endl;
		}
	}

	return os;
}



int main()
{

	return 0;
}