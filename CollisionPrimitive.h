#pragma once
/// <summary>
///�����蔻��v���~�e�B�u
/// </summary>


#include<DirectXMath.h>

struct Sphere {
	DirectX::XMVECTOR center = { 0,0,0,1 };

	float radius = 1.0f;

};

struct Plane {
	DirectX::XMVECTOR normal = { 0,1,0,0 };

	float distance = 0.0f;

};

class Triangle {
public:
	DirectX::XMVECTOR p0;
	DirectX::XMVECTOR p1;
	DirectX::XMVECTOR p2;

	DirectX::XMVECTOR normal;

	void ComputeNormal();
};

struct Ray
{
	DirectX::XMVECTOR start = { 0,0,0,1 };

	DirectX::XMVECTOR dir = { 1,0,0,0 };

};

class CollisionPrimitive
{
	
};
