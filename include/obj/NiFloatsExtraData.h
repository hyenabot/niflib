/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIFLOATSEXTRADATA_H_
#define _NIFLOATSEXTRADATA_H_

#include "NiExtraData.h"
namespace Niflib {


//#include "../gen/obj_defines.h"

class NiFloatsExtraData;
typedef Ref<NiFloatsExtraData> NiFloatsExtraDataRef;

/*!
 * NiFloatsExtraData - Unknown.
 */

class NiFloatsExtraData : public NI_FLOATS_EXTRA_DATA_PARENT {
public:
	NIFLIB_API NiFloatsExtraData();
	NIFLIB_API ~NiFloatsExtraData();
	//Run-Time Type Information
	NIFLIB_API static const Type & TypeConst();
private:
	static const Type TYPE;
public:
	NIFLIB_API virtual const Type & GetType() const;
	NIFLIB_HIDDEN virtual void Read( istream& in, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version );
	NIFLIB_HIDDEN virtual void Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, unsigned int version, unsigned int user_version ) const;
	NIFLIB_API virtual string asString( bool verbose = false ) const;
	NIFLIB_HIDDEN virtual void FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version );
	NIFLIB_HIDDEN virtual list<NiObjectRef> GetRefs() const;

	NIFLIB_API vector<float> GetData() const;
	NIFLIB_API void SetData( const vector<float> & n );

protected:
	NI_FLOATS_EXTRA_DATA_MEMBERS
private:
	void InternalRead( istream& in, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version );
	void InternalWrite( ostream& out, const map<NiObjectRef,unsigned int> & link_map, unsigned int version, unsigned int user_version ) const;
	string InternalAsString( bool verbose ) const;
	void InternalFixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version );
	list<NiObjectRef> InternalGetRefs() const;
};

}
#endif
