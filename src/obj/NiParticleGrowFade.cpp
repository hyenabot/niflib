/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "../../include/obj/NiParticleGrowFade.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiParticleGrowFade::TYPE("NiParticleGrowFade", &NI_PARTICLE_GROW_FADE_PARENT::TypeConst() );

NiParticleGrowFade::NiParticleGrowFade() NI_PARTICLE_GROW_FADE_CONSTRUCT {}

NiParticleGrowFade::~NiParticleGrowFade() {}

void NiParticleGrowFade::Read( istream& in, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalRead( in, link_stack, version, user_version );
}

void NiParticleGrowFade::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, unsigned int version, unsigned int user_version ) const {
	InternalWrite( out, link_map, version, user_version );
}

string NiParticleGrowFade::asString( bool verbose ) const {
	return InternalAsString( verbose );
}

void NiParticleGrowFade::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalFixLinks( objects, link_stack, version, user_version );
}

list<NiObjectRef> NiParticleGrowFade::GetRefs() const {
	return InternalGetRefs();
}

const Type & NiParticleGrowFade::GetType() const {
	return TYPE;
};

const Type & NiParticleGrowFade::TypeConst() {
	return TYPE;
}
