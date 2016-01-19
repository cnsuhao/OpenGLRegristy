// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the OPENGL32_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// OPENGL32_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef OPENGL32_EXPORTS
#define OPENGL32_API __declspec(dllexport)
#else
#define OPENGL32_API __declspec(dllimport)
#endif

// This class is exported from the OpenGL32.dll
class OPENGL32_API COpenGL32 {
public:
	COpenGL32(void);
	// TODO: add your methods here.
};

extern OPENGL32_API int nOpenGL32;

OPENGL32_API int fnOpenGL32(void);
