#include "Knife.h"
#include <iostream>

void Knife::Shoot() const
{
    std::cout << "���" << std::endl;
    std::cout << "�� ������� �����" << std::endl;
}

int Knife::Get() const
{
	return this->damage;
}
