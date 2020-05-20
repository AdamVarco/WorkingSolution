#include "ScopedPtr.h"

int main()
{
	Entity e;
	e.Print();
	
	//to initialize a Entity pointer and use the parameter contrustor 
	Entity *en = &Entity(5);
	
	
        //pass the entity pointer to the scopedptr constructor
	ScopedPtr *st = new ScopedPtr(en);
	cout << "Entity pointer" << endl;
	cout << st->GetObj() << endl
}
