#include "Click.h"
#include <iostream>

int Click::Get() const
{
    return this->damage;
}

void Click::Shoot() const
{
    std::cout << "������" << std::endl;
    std::cout << "�� �������� ����� � ������, �������, ������" << std::endl;
}
