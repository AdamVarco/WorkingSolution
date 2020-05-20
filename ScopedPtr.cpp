#include "ScopedPtr.h"

ScopedPtr::ScopedPtr()
{
	m_ptr = NULL;
}

ScopedPtr::ScopedPtr(Entity* p)
{
	m_ptr = p;
}

ScopedPtr::~ScopedPtr()
{
	delete m_ptr;
}

Entity* ScopedPtr::operator->()
{
	return m_ptr;
}

Entity* ScopedPtr::GetObj()
{
	return m_ptr;
}
