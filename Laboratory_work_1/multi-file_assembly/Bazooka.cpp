#include "Bazooka.h"
#include <iostream>

void Bazooka::Shoot() const
{
    std::cout << "������" << std::endl;
    std::cout << "�� ������ ����� ����� ����� ����" << std::endl;
}

int Bazooka::Get() const
{
	return this->damage;
}
