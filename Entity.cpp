#include "Entity.h"

Entity::Entity()
{
	m_x = 0;
	cout << " Nothing is entered" << endl;
}
Entity::Entity(int a)
{
	m_x = a;
	cout << a << " is entered " << endl;
}
Entity::~Entity()
{

}
void Entity::Print()
{
	cout << "hello" << endl;
}
