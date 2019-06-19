#pragma once

#include "Lists.h"
#include "Entity.h"

class CDummy : public CEntity
{
public:
	CEntryInfoList m_entryInfoList;

	CDummy(void) { m_type = ENTITY_TYPE_DUMMY; }
	// TODO: Add, Remove

	static void *operator new(size_t);
	static void operator delete(void*, size_t);
};
static_assert(sizeof(CDummy) == 0x68, "CDummy: error");