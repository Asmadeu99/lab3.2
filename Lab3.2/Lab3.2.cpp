
#include <iostream>
#include "PassengerPlane.h"
#include "CargoPlane.h"
#include "ILoadable.h"

//������ �����, ���-5, ������� 9
/*����� ������� (������������) + ������ �������� �������, �������.
����������� ����� ������������ ������� � ��������� ������������ �� ������� ������:
������, ���������, ��� �������, �����������, ���������� ����������, ������� � ���,
����������������.
��������� �������� ������������� �������� ILoadable � ������� void load(int
kilograms) � ��������� ���� �� �������. � �������� ������� ����� �������� ����
������ �� ������������ ����������������, ����� � �������� ��������� �� ������; �
������������ � ������� ��������������� ������������ ���������� ���������� ��
����� (����������� ����������� ������ ������ ������������); � ������ ����������
������ � ����� �������� ��������� �� ������. � main() ������� 2 �������� � 2
������������ ��������, ������������������ ����������� load().*/
int main()
{
	Plane* planes[4];
	planes[0] = new CargoPlane("ATR 42-320", "�������� - ����������", 2002, 0, 0, 2000, 113, 20000);
	planes[1] = new PassengerPlane("Airbus A380","������-������", 1970, 850, 500, 250, 11, 100000);
	planes[2] = new PassengerPlane("Fokker 100", "�����-��������� - ������", 1985, 500, 400, 2000, 113, 50000);
	planes[3] = new CargoPlane("Boeing 737 MAX", "������� - ��������", 1990, 0, 0, 2000, 113, 50000);
	
	for(size_t i = 0; i < 4; ++i)
	{
		planes[i]->load(30000);
	}
	std::cout << "______________________________________________________________________\n";
	std::cout << "��������:\n";
	for (size_t i = 0; i < 4; ++i) {
		if (typeid(*planes[i]) == typeid(PassengerPlane)) {
			std::cout << i + 1 << ". ������������ �������\n";
		}
		else if (typeid(*planes[i]) == typeid(CargoPlane))
		{
			std::cout << i + 1 << ". �������� �������\n";
		}
	}
	for (size_t i = 0; i < 4; ++i) {
		delete planes[i];
	}
}

// ������ ���������: CTRL+F5 ��� ���� "�������" > "������ ��� �������"
// ������� ���������: F5 ��� ���� "�������" > "��������� �������"

// ������ �� ������ ������ 
//   1. � ���� ������������ ������� ����� ��������� ����� � ��������� ���.
//   2. � ���� Team Explorer ����� ������������ � ������� ���������� ��������.
//   3. � ���� "�������� ������" ����� ������������� �������� ������ ������ � ������ ���������.
//   4. � ���� "������ ������" ����� ������������� ������.
//   5. ��������������� �������� ������ ���� "������" > "�������� ����� �������", ����� ������� ����� ����, ��� "������" > "�������� ������������ �������", ����� �������� � ������ ������������ ����� ����.
//   6. ����� ����� ������� ���� ������ �����, �������� ������ ���� "����" > "�������" > "������" � �������� SLN-����.
