// NAMEIDMA.H
//
// Copyright (c) 1997-1999 Symbian Ltd.  All rights reserved.
//
#ifndef _NAMEIDMA_H_
#define _NAMEIDMA_H_

#include "array.h"
#include "astring.h"

class NameIdItem : public ArrayItem
	{
	friend ostream& operator<<(ostream & os, NameIdItem & o);
public:
	NameIdItem(String aNameToSet,unsigned long aIdToSet);
public:
	String iName;
	unsigned long iId;
	};

class NameIdMap : public Array
	{
	friend ostream& operator<<(ostream & os,NameIdMap& aMap);
public:
	NameIdMap();
	~NameIdMap();
	void Add( String Name, unsigned long aId);
	unsigned long FindId( String Name) const;
	int IsStored( String Name) const;

	};

class NameIdMapIterator : public ArrayIterator
	{
public:
	NameIdMapIterator( const NameIdMap & c);
	NameIdItem * operator() ();
	};

#endif
