#include <stdio.h>
#include <string.h>





/*
��R��
x,y,z���W�����\����Vector3��
����Ă��������B
x,y,z��private�ō쐬���A�֐�����Ēl��ݒ�ł���悤�ɂ��āA
�l���\������邱�Ƃ��m�F���Ă��������B
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
	printf("x���W:%d\ny���W:%d\nz���W:%d\n", vector3.GetX(), vector3.GetY(),vector3.GetZ());
	return 0;

}





