#pragma once
#include <iostream>
#include <string>

using namespace std;

class Entity
{
private:
	int m_x;
public:
	Entity();
	Entity(int);
    ~Entity();
	void Print();


};

