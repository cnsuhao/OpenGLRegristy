// OpenGL32.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Open."GL32.h"


// This is an example of an exported variable
OPENGL32_API int nOpenGL32=0;

// This is an example of an exported function.
OPENGL32_API int fnOpenGL32(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see OpenGL32.h for the class definition
COpenGL32::COpenGL32()
{
	return;
}
