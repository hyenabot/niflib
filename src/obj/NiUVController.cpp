/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "../../include/obj/NiUVController.h"
#include "../../include/obj/NiUVData.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiUVController::TYPE("NiUVController", &NI_U_V_CONTROLLER_PARENT::TypeConst() );

NiUVController::NiUVController() NI_U_V_CONTROLLER_CONSTRUCT {}

NiUVController::~NiUVController() {}

void NiUVController::Read( istream& in, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalRead( in, link_stack, version, user_version );
}

void NiUVController::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, unsigned int version, unsigned int user_version ) const {
	InternalWrite( out, link_map, version, user_version );
}

string NiUVController::asString( bool verbose ) const {
	return InternalAsString( verbose );
}

void NiUVController::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalFixLinks( objects, link_stack, version, user_version );
}

list<NiObjectRef> NiUVController::GetRefs() const {
	return InternalGetRefs();
}

const Type & NiUVController::GetType() const {
	return TYPE;
};

Ref<NiUVData> NiUVController::GetData() const {
	return data;
}

void NiUVController::SetData( const Ref<NiUVData> & n ) {
	data = n;
}

const Type & NiUVController::TypeConst() {
	return TYPE;
}
