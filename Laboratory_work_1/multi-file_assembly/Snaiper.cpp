#include "Snaiper.h"
#include <iostream>

int Snaiper::Get() const
{
    return damage;
}
void Snaiper::Shoot() const
{
    std::cout << "��������" << std::endl;
    std::cout << "�� �������� �� ����� ���� ������, �� ������ �����" << std::endl;
}