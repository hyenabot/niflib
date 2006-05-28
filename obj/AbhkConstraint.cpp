/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "AbhkConstraint.h"
#include "bhkShape.h"

//Definition of TYPE constant
const Type AbhkConstraint::TYPE("AbhkConstraint", &ABHK_CONSTRAINT_PARENT::TYPE );

AbhkConstraint::AbhkConstraint() ABHK_CONSTRAINT_CONSTRUCT {}

AbhkConstraint::~AbhkConstraint() {}

void AbhkConstraint::Read( istream& in, list<uint> link_stack, unsigned int version ) {
	ABHK_CONSTRAINT_READ
}

void AbhkConstraint::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const {
	ABHK_CONSTRAINT_WRITE
}

string AbhkConstraint::asString( bool verbose ) const {
	ABHK_CONSTRAINT_STRING
}

void AbhkConstraint::FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version ) {
	ABHK_CONSTRAINT_FIXLINKS
}
