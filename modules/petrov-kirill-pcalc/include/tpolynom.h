// Copyright 2016 Petrov Kirill

#ifndef MODULES_PETROV_KIRILL_ZCALC_INCLUDE_TPOLYNOM_H_
#define MODULES_PETROV_KIRILL_ZCALC_INCLUDE_TPOLYNOM_H_

#include "tmonom.h"
#include <iostream>
#include <list>

using std::list;

enum Variable { x = 1, y = 10, z = 100 };

class TPolinom : public list <TMonom> {
public:
	TPolinom(tCoeff monoms[][2] = nullptr, int length = 0);		// ����������� �������� �� ������� ������������-������
	TPolinom(TPolinom &tpolinom);								// ����������� �����������

	TPolinom	operator+	 (TPolinom &tpolinom);				// �������� ���������
	TPolinom	operator-	 (TPolinom &tpolinom);				// �������� ���������
	TPolinom&	operator=	 (TPolinom &tpolinom);				// ������������
	bool		operator==	 (TPolinom &tpolinom);				// ��������� ���������

	TPolinom computeDerivative(Variable variable = x);			// ���������� �����������
};

#endif // MODULES_PETROV_KIRILL_ZCALC_INCLUDE_TPOLYNOM_H_