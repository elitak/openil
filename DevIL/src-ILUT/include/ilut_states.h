//-----------------------------------------------------------------------------
//
// ImageLib Utility Toolkit Sources
// Copyright (C) 2000-2001 by Denton Woods
// Last modified: 05/28/2001 <--Y2K Compliant! =]
//
// Filename: openilut/states.h
//
// Description: State machine
//
//-----------------------------------------------------------------------------

#ifndef STATES_H
#define STATES_H

#include "ilut_internal.h"


ILboolean ilutAble(ILenum Mode, ILboolean Flag);


#define ILUT_ATTRIB_STACK_MAX 32

ILuint ilutCurrentPos = 0;  // Which position on the stack

//
// Various states
//

typedef struct ILUT_STATES
{

	// OpenILUT states
	ILboolean	ilutUsePalettes;
	ILboolean	ilutOglConv;

	// D3D states
	ILuint		D3DMipLevels;

} ILUT_STATES;

ILUT_STATES ilutStates[ILUT_ATTRIB_STACK_MAX];


#endif//STATES_H
