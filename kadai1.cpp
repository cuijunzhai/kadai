#include <stdio.h>
#include <string.h>


/*
��P��
x, y���W�����\����Vector2���A
����Ă��������B
x, y��public�ō쐬���A�O���Œl��ݒ肵�āA
�l���\������邱�Ƃ��m�F���Ă��������B
*/
struct Vector2
{
public:
	int x, y;
};

int main()
{
	Vector2 vector2;
	int x=0;
	int y = 0;

	printf("x���W����͂��Ă�������\n");
	scanf_s("%d", &x);
	printf("y���W����͂��Ă�������\n");
	scanf_s("%d", &y);
	vector2.x = x;
	vector2.y = y;
	printf("x���W:%d\ny���W:%d\n",vector2.x, vector2.y);
	

	return 0;
}



