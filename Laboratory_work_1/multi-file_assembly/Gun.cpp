#include "Gun.h"
#include <iostream>

int Gun::Get() const
{
    return this->damage;
}

void Gun::Shoot() const
{
	std::cout << "��������" << std::endl;
	std::cout << "�� �������� �� ����� ���� ������ �����" << std::endl;
}
