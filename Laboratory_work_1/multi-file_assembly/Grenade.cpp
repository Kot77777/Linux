#include "Grenade.h"
#include <iostream>

int Grenade::Get() const
{
    return this->damage;
}

void Grenade::Shoot() const
{
    std::cout << "�������" << std::endl;
    std::cout << "�� ������ ��������� ����, ������� �� ������� ����(" << std::endl;
}
