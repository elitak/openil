//-----------------------------------------------------------------------------
//
// ImageLib Sources
// Copyright (C) 2000-2002 by Denton Woods
// Last modified: 05/25/2001 <--Y2K Compliant! =]
//
// Filename: src-IL/include/il_pnm.h
//
// Description: Reads/writes to/from pbm/pgm/ppm formats
//
//-----------------------------------------------------------------------------


#ifndef PPMPGM_H
#define PPMPGM_H

#include "il_internal.h"

#define IL_PBM_ASCII	0x0001
#define IL_PGM_ASCII	0x0002
#define IL_PPM_ASCII	0x0003
#define IL_PBM_BINARY	0x0004
#define IL_PGM_BINARY	0x0005
#define IL_PPM_BINARY	0x0006

typedef struct PPMINFO
{
	ILenum	Type;
	ILuint	Width;
	ILuint	Height;
	ILuint	MaxColour;
	ILubyte	Bpp;
} PPMINFO;

ILboolean	iIsValidPnm(ILvoid);
ILboolean	iCheckPnm(char Header[2]);
ILboolean	iLoadPnmInternal(ILvoid);
ILboolean	iSavePnmInternal(ILvoid);
ILimage		*ilReadAsciiPpm(PPMINFO *Info);
ILimage		*ilReadBinaryPpm(PPMINFO *Info);
ILimage		*ilReadBitPbm(PPMINFO *Info);
ILboolean	iGetWord(ILvoid);
ILvoid		PbmMaximize(ILimage *Image);


#endif//PPMPGM_H
