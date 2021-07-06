#include <stdio.h>
#include <string.h>


/*
第１問
x, y座標を持つ構造体Vector2を、
作ってください。
x, yはpublicで作成し、外部で値を設定して、
値が表示されることを確認してください。
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

	printf("x座標を入力してください\n");
	scanf_s("%d", &x);
	printf("y座標を入力してください\n");
	scanf_s("%d", &y);
	vector2.x = x;
	vector2.y = y;
	printf("x座標:%d\ny座標:%d\n",vector2.x, vector2.y);
	

	return 0;
}



