#include <stdio.h>
#include <string.h>





/*��Q��
x, y���W�����\����Vector2���A
����Ă��������B
x, y��private�ō쐬���A�֐�����Ēl��ݒ�ł���悤�ɂ��āA
�l���\������邱�Ƃ��m�F���Ă��������B
*/





struct  Vector2
{

public:
	int     GetX() { return x; }
	int     GetY() { return y; }
	void    SetNum1(int X) { x = X; }
	void    SetNum2(int Y) { y = Y; }


private:
	int x, y;
};




int main()
{
	Vector2 vector2;
	int x = 0;
	int y = 0;

	printf("x���W����͂��Ă�������\n");
	scanf_s("%d", &x);
	printf("y���W����͂��Ă�������\n");
	scanf_s("%d", &y);
	vector2.SetNum1(x);
	vector2.SetNum2(y);

	printf("x���W:%d\ny���W:%d\n", vector2.GetX(), vector2.GetY());

	return 0;

}
