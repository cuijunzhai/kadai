#include <stdio.h>
#include <string.h>





/*
第３問
x,y,z座標を持つ構造体Vector3を
作ってください。
x,y,zはprivateで作成し、関数を介して値を設定できるようにして、
値が表示されることを確認してください。
*/





struct  Vector3
{

public:
	int     GetX() { return x; }
	int     GetY() { return y; }
	int     GetZ() { return z; }
	void    SetX(int X);
	void    SetY(int Y);
	void    SetZ(int Z);

private:
	int x, y,z;
};

void Vector3::SetX(int X)
{
	this->x = X;
}
void Vector3::SetY(int Y)
{
	this->y = Y;
}
void Vector3::SetZ(int Z)
{
	this->z = Z;
}

int main()
{
	Vector3 vector3;
	vector3.SetX(0);
	vector3.SetY(0);
	vector3.SetZ(0);
	printf("x座標:%d\ny座標:%d\nz座標:%d\n", vector3.GetX(), vector3.GetY(),vector3.GetZ());
	return 0;

}





