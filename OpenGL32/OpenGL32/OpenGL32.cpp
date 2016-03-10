// OpenGL32.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "OpenGL32.h"

typedef int (*f)(int a, int b);

// This is an example of an exported variable
OPENGL32_API int nOpenGL32=0;

// This is an example of an exported function.
OPENGL32_API int fnOpenGL32(void)
{
	int * p;
	f f1 = (f)(p);
	return 42;
}

// This is the constructor of a class that has been exported.
// see OpenGL32.h for the class definition
COpenGL32::COpenGL32()
{
}
