#include <stdio.h>

/*Objectクラス
x, y, z座標を保存する変数、Update関数を持つ。
Update関数はvirtualで作ってください。

Vehicle(乗り物)クラス
Objectクラスを継承したクラス。
ここではSpeedUpクラスを追加してください。
またspeedとaccelの変数をここで追加してください。
SpeedUpクラスはvirtualで作ってください。
(正確な速度の処理を行いたい場合は、向きと加速度で、
    ベクトルを計算する方法でも構いません。)

    Car(車)クラス
    Vehicleクラスを継承したクラス
    speedの変更をここでCar用に実装してください。*/

class Object
{
public:
    Object()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    
    float getX(){return x;}
    float getY(){return y;}
    float getZ(){return z;}
    virtual void Update();


private:
    float x, y, z;
    
};

class Vehicle:public Object
{
public:
    Vehicle()
    {
        speed = 0;
        accel = 0;
    }

    void  setSpeed(float speed, float accel);
    float getSpeed() { return speed; }
    float getAccel() { return accel; }
    virtual void Update();


private:
    float speed, accel;
};


class Car :public Vehicle
{
public:
    Vehicle vehicle;
    void setSpeed(float speed, float accel)
    {
        vehicle.setSpeed(speed, accel);
    }
    void Update();

};

void Vehicle::setSpeed(float speed,float accel)
{
    this->speed=speed;
    this->accel=accel;

}
void Car::Update()
{
    float speed;
    speed = vehicle.getSpeed();
    printf("%f\n,speed");
}

int main()
{
    Car car;
    car.setSpeed(100, 30);
    for(int i=0;i<100;i++)
    {
        car.Update();
    }
    return 0;
}
