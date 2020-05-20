#pragma once
#include <iostream>
#include <string>
#include "Entity.h"

using namespace std;
class ScopedPtr
{
private:
	Entity* m_ptr;

public:
	ScopedPtr();
	ScopedPtr(Entity*);
	~ScopedPtr();
	Entity* operator->();
	Entity* GetObj();
};

