#include "SubmachinGun.h"
#include <iostream>

void SubmachinGun::Shoot() const
{
	std::cout << "�������" << std::endl;
	std::cout << "�� ����������� �����" << std::endl;
}

int SubmachinGun::Get() const
{
	return this->damage;
}
