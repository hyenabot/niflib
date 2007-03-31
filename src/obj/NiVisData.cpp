/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "../../include/obj/NiVisData.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiVisData::TYPE("NiVisData", &NI_VIS_DATA_PARENT::TypeConst() );

NiVisData::NiVisData() NI_VIS_DATA_CONSTRUCT {}

NiVisData::~NiVisData() {}

void NiVisData::Read( istream& in, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalRead( in, link_stack, version, user_version );
}

void NiVisData::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, unsigned int version, unsigned int user_version ) const {
	InternalWrite( out, link_map, version, user_version );
}

string NiVisData::asString( bool verbose ) const {
	return InternalAsString( verbose );
}

void NiVisData::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalFixLinks( objects, link_stack, version, user_version );
}

list<NiObjectRef> NiVisData::GetRefs() const {
	return InternalGetRefs();
}

const Type & NiVisData::GetType() const {
	return TYPE;
};

const Type & NiVisData::TypeConst() {
	return TYPE;
}
