#include <stdio.h>

/*Object�N���X
x, y, z���W��ۑ�����ϐ��AUpdate�֐������B
Update�֐���virtual�ō���Ă��������B

Vehicle(��蕨)�N���X
Object�N���X���p�������N���X�B
�����ł�SpeedUp�N���X��ǉ����Ă��������B
�܂�speed��accel�̕ϐ��������Œǉ����Ă��������B
SpeedUp�N���X��virtual�ō���Ă��������B
(���m�ȑ��x�̏������s�������ꍇ�́A�����Ɖ����x�ŁA
    �x�N�g�����v�Z������@�ł��\���܂���B)

    Car(��)�N���X
    Vehicle�N���X���p�������N���X
    speed�̕ύX��������Car�p�Ɏ������Ă��������B*/

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


public:
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