#include <stdio.h>
#include <string.h>





/*第２問
x, y座標を持つ構造体Vector2を、
作ってください。
x, yはprivateで作成し、関数を介して値を設定できるようにして、
値が表示されることを確認してください。
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

	printf("x座標を入力してください\n");
	scanf_s("%d", &x);
	printf("y座標を入力してください\n");
	scanf_s("%d", &y);
	vector2.SetNum1(x);
	vector2.SetNum2(y);

	printf("x座標:%d\ny座標:%d\n", vector2.GetX(), vector2.GetY());

	return 0;

}
