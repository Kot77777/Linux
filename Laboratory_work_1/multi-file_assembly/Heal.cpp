#include "Heal.h"
#include <iostream>

int heal::Get() const
{
    return this->damage;
}

void heal::Shoot() const
{
    std::cout << "���� �������������� ��������" << std::endl;
}
