#pragma once
class Weapon
{
public:
    virtual void Shoot() const = 0; //������ ������ �����������
    virtual int Get() const = 0;
};