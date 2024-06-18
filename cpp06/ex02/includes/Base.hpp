#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>

class A;
class B;
class C;

class Base
{
public:
	static Base *generate(void);
	static void identify(Base *p);
	static void identify(Base &p);

protected:
	virtual ~Base() = 0;
};
