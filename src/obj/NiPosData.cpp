/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "../../include/obj/NiPosData.h"
#include "../../include/gen/KeyGroup.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiPosData::TYPE("NiPosData", &NI_POS_DATA_PARENT::TypeConst() );

NiPosData::NiPosData() NI_POS_DATA_CONSTRUCT {}

NiPosData::~NiPosData() {}

void NiPosData::Read( istream& in, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalRead( in, link_stack, version, user_version );
}

void NiPosData::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, unsigned int version, unsigned int user_version ) const {
	InternalWrite( out, link_map, version, user_version );
}

string NiPosData::asString( bool verbose ) const {
	return InternalAsString( verbose );
}

void NiPosData::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalFixLinks( objects, link_stack, version, user_version );
}

list<NiObjectRef> NiPosData::GetRefs() const {
	return InternalGetRefs();
}

const Type & NiPosData::GetType() const {
	return TYPE;
};

KeyType NiPosData::GetKeyType() const {
	return data.interpolation;
}

void NiPosData::SetKeyType( KeyType t ) {
	data.interpolation = t;
}

vector< Key<Vector3> > NiPosData::GetKeys() const {
	return data.keys;
}

void NiPosData::SetKeys( vector< Key<Vector3> > const & keys ) {
	data.keys = keys;
}

const Type & NiPosData::TypeConst() {
	return TYPE;
}
