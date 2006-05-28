/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiParticleMeshesData.h"

//Definition of TYPE constant
const Type NiParticleMeshesData::TYPE("NiParticleMeshesData", &NI_PARTICLE_MESHES_DATA_PARENT::TYPE );

NiParticleMeshesData::NiParticleMeshesData() NI_PARTICLE_MESHES_DATA_CONSTRUCT {}

NiParticleMeshesData::~NiParticleMeshesData() {}

void NiParticleMeshesData::Read( istream& in, list<uint> link_stack, unsigned int version ) {
	NI_PARTICLE_MESHES_DATA_READ
}

void NiParticleMeshesData::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const {
	NI_PARTICLE_MESHES_DATA_WRITE
}

string NiParticleMeshesData::asString( bool verbose ) const {
	NI_PARTICLE_MESHES_DATA_STRING
}

void NiParticleMeshesData::FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version ) {
	NI_PARTICLE_MESHES_DATA_FIXLINKS
}
