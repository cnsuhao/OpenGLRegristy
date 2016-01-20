#ifndef __glcorearb_h_
#define __glcorearb_h_ 1

#ifdef __cplusplus
extern "C" {
#endif

/*
** Copyright (c) 2013-2015 The Khronos Group Inc.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and/or associated documentation files (the
** "Materials"), to deal in the Materials without restriction, including
** without limitation the rights to use, copy, modify, merge, publish,
** distribute, sublicense, and/or sell copies of the Materials, and to
** permit persons to whom the Materials are furnished to do so, subject to
** the following conditions:
**
** The above copyright notice and this permission notice shall be included
** in all copies or substantial portions of the Materials.
**
** THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
** MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
** CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
** TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
** MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
*/
/*
** This header is generated from the Khronos OpenGL / OpenGL ES XML
** API Registry. The current version of the Registry, generator scripts
** used to make the header, and the header can be found at
**   http://www.opengl.org/registry/
**
** Khronos $Revision$ on $Date$
*/

//#if defined(_WIN32) && !defined(APIENTRY) && !defined(__CYGWIN__) && !defined(__SCITECH_SNAP__)
//#ifndef WIN32_LEAN_AND_MEAN
//#define WIN32_LEAN_AND_MEAN 1
//#endif
//#include <windows.h>
//#endif

#ifndef APIENTRY
#define APIENTRY
#endif
#ifndef APIENTRYP
#define APIENTRYP APIENTRY *
#endif
#ifndef GLAPI
#define GLAPI _declspec(dllexport)
#endif

/* glcorearb.h is for use with OpenGL core profile implementations.
** It should should be placed in the same directory as gl.h and
** included as <GL/glcorearb.h>.
**
** glcorearb.h includes only APIs in the latest OpenGL core profile
** implementation together with APIs in newer ARB extensions which 
** can be supported by the core profile. It does not, and never will
** include functionality removed from the core profile, such as
** fixed-function vertex and fragment processing.
**
** Do not #include both <GL/glcorearb.h> and either of <GL/gl.h> or
** <GL/glext.h> in the same source file.
*/

/* Generated C header for:
 * API: gl
 * Profile: compatibility
 * Versions considered: .*
 * Versions emitted: .*
 * Default extensions included: glcore
 * Additional extensions included: _nomatch_^
 * Extensions removed: _nomatch_^
 */

#ifndef GL_VERSION_1_0
#define GL_VERSION_1_0 1
typedef void GLvoid;
typedef unsigned int GLenum;
typedef float GLfloat;
typedef int GLint;
typedef int GLsizei;
typedef unsigned int GLbitfield;
typedef double GLdouble;
typedef unsigned int GLuint;
typedef unsigned char GLboolean;
typedef unsigned char GLubyte;
typedef signed char GLbyte;
typedef short GLshort;
typedef unsigned short GLushort;
typedef void (APIENTRYP PFNGLCULLFACEPROC) (GLenum mode_);
typedef void (APIENTRYP PFNGLFRONTFACEPROC) (GLenum mode_);
typedef void (APIENTRYP PFNGLHINTPROC) (GLenum target_, GLenum mode_);
typedef void (APIENTRYP PFNGLLINEWIDTHPROC) (GLfloat width_);
typedef void (APIENTRYP PFNGLPOINTSIZEPROC) (GLfloat size_);
typedef void (APIENTRYP PFNGLPOLYGONMODEPROC) (GLenum face_, GLenum mode_);
typedef void (APIENTRYP PFNGLSCISSORPROC) (GLint x_, GLint y_, GLsizei width_, GLsizei height_);
typedef void (APIENTRYP PFNGLTEXPARAMETERFPROC) (GLenum target_, GLenum pname_, GLfloat param_);
typedef void (APIENTRYP PFNGLTEXPARAMETERFVPROC) (GLenum target_, GLenum pname_, const GLfloat *params_);
typedef void (APIENTRYP PFNGLTEXPARAMETERIPROC) (GLenum target_, GLenum pname_, GLint param_);
typedef void (APIENTRYP PFNGLTEXPARAMETERIVPROC) (GLenum target_, GLenum pname_, const GLint *params_);
typedef void (APIENTRYP PFNGLTEXIMAGE1DPROC) (GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLint border_, GLenum format_, GLenum type_, const void *pixels_);
typedef void (APIENTRYP PFNGLTEXIMAGE2DPROC) (GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLsizei height_, GLint border_, GLenum format_, GLenum type_, const void *pixels_);
typedef void (APIENTRYP PFNGLDRAWBUFFERPROC) (GLenum buf_);
typedef void (APIENTRYP PFNGLCLEARPROC) (GLbitfield mask_);
typedef void (APIENTRYP PFNGLCLEARCOLORPROC) (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_);
typedef void (APIENTRYP PFNGLCLEARSTENCILPROC) (GLint s_);
typedef void (APIENTRYP PFNGLCLEARDEPTHPROC) (GLdouble depth_);
typedef void (APIENTRYP PFNGLSTENCILMASKPROC) (GLuint mask_);
typedef void (APIENTRYP PFNGLCOLORMASKPROC) (GLboolean red_, GLboolean green_, GLboolean blue_, GLboolean alpha_);
typedef void (APIENTRYP PFNGLDEPTHMASKPROC) (GLboolean flag_);
typedef void (APIENTRYP PFNGLDISABLEPROC) (GLenum cap_);
typedef void (APIENTRYP PFNGLENABLEPROC) (GLenum cap_);
typedef void (APIENTRYP PFNGLFINISHPROC) (void);
typedef void (APIENTRYP PFNGLFLUSHPROC) (void);
typedef void (APIENTRYP PFNGLBLENDFUNCPROC) (GLenum sfactor_, GLenum dfactor_);
typedef void (APIENTRYP PFNGLLOGICOPPROC) (GLenum opcode_);
typedef void (APIENTRYP PFNGLSTENCILFUNCPROC) (GLenum func_, GLint ref_, GLuint mask_);
typedef void (APIENTRYP PFNGLSTENCILOPPROC) (GLenum fail_, GLenum zfail_, GLenum zpass_);
typedef void (APIENTRYP PFNGLDEPTHFUNCPROC) (GLenum func_);
typedef void (APIENTRYP PFNGLPIXELSTOREFPROC) (GLenum pname_, GLfloat param_);
typedef void (APIENTRYP PFNGLPIXELSTOREIPROC) (GLenum pname_, GLint param_);
typedef void (APIENTRYP PFNGLREADBUFFERPROC) (GLenum src_);
typedef void (APIENTRYP PFNGLREADPIXELSPROC) (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, void *pixels_);
typedef void (APIENTRYP PFNGLGETBOOLEANVPROC) (GLenum pname_, GLboolean *data_);
typedef void (APIENTRYP PFNGLGETDOUBLEVPROC) (GLenum pname_, GLdouble *data_);
typedef GLenum (APIENTRYP PFNGLGETERRORPROC) (void);
typedef void (APIENTRYP PFNGLGETFLOATVPROC) (GLenum pname_, GLfloat *data_);
typedef void (APIENTRYP PFNGLGETINTEGERVPROC) (GLenum pname_, GLint *data_);
typedef const GLubyte *(APIENTRYP PFNGLGETSTRINGPROC) (GLenum name_);
typedef void (APIENTRYP PFNGLGETTEXIMAGEPROC) (GLenum target_, GLint level_, GLenum format_, GLenum type_, void *pixels_);
typedef void (APIENTRYP PFNGLGETTEXPARAMETERFVPROC) (GLenum target_, GLenum pname_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETTEXPARAMETERIVPROC) (GLenum target_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETTEXLEVELPARAMETERFVPROC) (GLenum target_, GLint level_, GLenum pname_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETTEXLEVELPARAMETERIVPROC) (GLenum target_, GLint level_, GLenum pname_, GLint *params_);
typedef GLboolean (APIENTRYP PFNGLISENABLEDPROC) (GLenum cap_);
typedef void (APIENTRYP PFNGLDEPTHRANGEPROC) (GLdouble near_, GLdouble far_);
typedef void (APIENTRYP PFNGLVIEWPORTPROC) (GLint x_, GLint y_, GLsizei width_, GLsizei height_);
typedef void (APIENTRYP PFNGLNEWLISTPROC) (GLuint list_, GLenum mode_);
typedef void (APIENTRYP PFNGLENDLISTPROC) (void);
typedef void (APIENTRYP PFNGLCALLLISTPROC) (GLuint list_);
typedef void (APIENTRYP PFNGLCALLLISTSPROC) (GLsizei n_, GLenum type_, const void *lists_);
typedef void (APIENTRYP PFNGLDELETELISTSPROC) (GLuint list_, GLsizei range_);
typedef GLuint (APIENTRYP PFNGLGENLISTSPROC) (GLsizei range_);
typedef void (APIENTRYP PFNGLLISTBASEPROC) (GLuint base_);
typedef void (APIENTRYP PFNGLBEGINPROC) (GLenum mode_);
typedef void (APIENTRYP PFNGLBITMAPPROC) (GLsizei width_, GLsizei height_, GLfloat xorig_, GLfloat yorig_, GLfloat xmove_, GLfloat ymove_, const GLubyte *bitmap_);
typedef void (APIENTRYP PFNGLCOLOR3BPROC) (GLbyte red_, GLbyte green_, GLbyte blue_);
typedef void (APIENTRYP PFNGLCOLOR3BVPROC) (const GLbyte *v_);
typedef void (APIENTRYP PFNGLCOLOR3DPROC) (GLdouble red_, GLdouble green_, GLdouble blue_);
typedef void (APIENTRYP PFNGLCOLOR3DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLCOLOR3FPROC) (GLfloat red_, GLfloat green_, GLfloat blue_);
typedef void (APIENTRYP PFNGLCOLOR3FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLCOLOR3IPROC) (GLint red_, GLint green_, GLint blue_);
typedef void (APIENTRYP PFNGLCOLOR3IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLCOLOR3SPROC) (GLshort red_, GLshort green_, GLshort blue_);
typedef void (APIENTRYP PFNGLCOLOR3SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLCOLOR3UBPROC) (GLubyte red_, GLubyte green_, GLubyte blue_);
typedef void (APIENTRYP PFNGLCOLOR3UBVPROC) (const GLubyte *v_);
typedef void (APIENTRYP PFNGLCOLOR3UIPROC) (GLuint red_, GLuint green_, GLuint blue_);
typedef void (APIENTRYP PFNGLCOLOR3UIVPROC) (const GLuint *v_);
typedef void (APIENTRYP PFNGLCOLOR3USPROC) (GLushort red_, GLushort green_, GLushort blue_);
typedef void (APIENTRYP PFNGLCOLOR3USVPROC) (const GLushort *v_);
typedef void (APIENTRYP PFNGLCOLOR4BPROC) (GLbyte red_, GLbyte green_, GLbyte blue_, GLbyte alpha_);
typedef void (APIENTRYP PFNGLCOLOR4BVPROC) (const GLbyte *v_);
typedef void (APIENTRYP PFNGLCOLOR4DPROC) (GLdouble red_, GLdouble green_, GLdouble blue_, GLdouble alpha_);
typedef void (APIENTRYP PFNGLCOLOR4DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLCOLOR4FPROC) (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_);
typedef void (APIENTRYP PFNGLCOLOR4FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLCOLOR4IPROC) (GLint red_, GLint green_, GLint blue_, GLint alpha_);
typedef void (APIENTRYP PFNGLCOLOR4IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLCOLOR4SPROC) (GLshort red_, GLshort green_, GLshort blue_, GLshort alpha_);
typedef void (APIENTRYP PFNGLCOLOR4SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLCOLOR4UBPROC) (GLubyte red_, GLubyte green_, GLubyte blue_, GLubyte alpha_);
typedef void (APIENTRYP PFNGLCOLOR4UBVPROC) (const GLubyte *v_);
typedef void (APIENTRYP PFNGLCOLOR4UIPROC) (GLuint red_, GLuint green_, GLuint blue_, GLuint alpha_);
typedef void (APIENTRYP PFNGLCOLOR4UIVPROC) (const GLuint *v_);
typedef void (APIENTRYP PFNGLCOLOR4USPROC) (GLushort red_, GLushort green_, GLushort blue_, GLushort alpha_);
typedef void (APIENTRYP PFNGLCOLOR4USVPROC) (const GLushort *v_);
typedef void (APIENTRYP PFNGLEDGEFLAGPROC) (GLboolean flag_);
typedef void (APIENTRYP PFNGLEDGEFLAGVPROC) (const GLboolean *flag_);
typedef void (APIENTRYP PFNGLENDPROC) (void);
typedef void (APIENTRYP PFNGLINDEXDPROC) (GLdouble c_);
typedef void (APIENTRYP PFNGLINDEXDVPROC) (const GLdouble *c_);
typedef void (APIENTRYP PFNGLINDEXFPROC) (GLfloat c_);
typedef void (APIENTRYP PFNGLINDEXFVPROC) (const GLfloat *c_);
typedef void (APIENTRYP PFNGLINDEXIPROC) (GLint c_);
typedef void (APIENTRYP PFNGLINDEXIVPROC) (const GLint *c_);
typedef void (APIENTRYP PFNGLINDEXSPROC) (GLshort c_);
typedef void (APIENTRYP PFNGLINDEXSVPROC) (const GLshort *c_);
typedef void (APIENTRYP PFNGLNORMAL3BPROC) (GLbyte nx_, GLbyte ny_, GLbyte nz_);
typedef void (APIENTRYP PFNGLNORMAL3BVPROC) (const GLbyte *v_);
typedef void (APIENTRYP PFNGLNORMAL3DPROC) (GLdouble nx_, GLdouble ny_, GLdouble nz_);
typedef void (APIENTRYP PFNGLNORMAL3DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLNORMAL3FPROC) (GLfloat nx_, GLfloat ny_, GLfloat nz_);
typedef void (APIENTRYP PFNGLNORMAL3FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLNORMAL3IPROC) (GLint nx_, GLint ny_, GLint nz_);
typedef void (APIENTRYP PFNGLNORMAL3IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLNORMAL3SPROC) (GLshort nx_, GLshort ny_, GLshort nz_);
typedef void (APIENTRYP PFNGLNORMAL3SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLRASTERPOS2DPROC) (GLdouble x_, GLdouble y_);
typedef void (APIENTRYP PFNGLRASTERPOS2DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLRASTERPOS2FPROC) (GLfloat x_, GLfloat y_);
typedef void (APIENTRYP PFNGLRASTERPOS2FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLRASTERPOS2IPROC) (GLint x_, GLint y_);
typedef void (APIENTRYP PFNGLRASTERPOS2IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLRASTERPOS2SPROC) (GLshort x_, GLshort y_);
typedef void (APIENTRYP PFNGLRASTERPOS2SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLRASTERPOS3DPROC) (GLdouble x_, GLdouble y_, GLdouble z_);
typedef void (APIENTRYP PFNGLRASTERPOS3DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLRASTERPOS3FPROC) (GLfloat x_, GLfloat y_, GLfloat z_);
typedef void (APIENTRYP PFNGLRASTERPOS3FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLRASTERPOS3IPROC) (GLint x_, GLint y_, GLint z_);
typedef void (APIENTRYP PFNGLRASTERPOS3IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLRASTERPOS3SPROC) (GLshort x_, GLshort y_, GLshort z_);
typedef void (APIENTRYP PFNGLRASTERPOS3SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLRASTERPOS4DPROC) (GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_);
typedef void (APIENTRYP PFNGLRASTERPOS4DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLRASTERPOS4FPROC) (GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_);
typedef void (APIENTRYP PFNGLRASTERPOS4FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLRASTERPOS4IPROC) (GLint x_, GLint y_, GLint z_, GLint w_);
typedef void (APIENTRYP PFNGLRASTERPOS4IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLRASTERPOS4SPROC) (GLshort x_, GLshort y_, GLshort z_, GLshort w_);
typedef void (APIENTRYP PFNGLRASTERPOS4SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLRECTDPROC) (GLdouble x1_, GLdouble y1_, GLdouble x2_, GLdouble y2_);
typedef void (APIENTRYP PFNGLRECTDVPROC) (const GLdouble *v1_, const GLdouble *v2_);
typedef void (APIENTRYP PFNGLRECTFPROC) (GLfloat x1_, GLfloat y1_, GLfloat x2_, GLfloat y2_);
typedef void (APIENTRYP PFNGLRECTFVPROC) (const GLfloat *v1_, const GLfloat *v2_);
typedef void (APIENTRYP PFNGLRECTIPROC) (GLint x1_, GLint y1_, GLint x2_, GLint y2_);
typedef void (APIENTRYP PFNGLRECTIVPROC) (const GLint *v1_, const GLint *v2_);
typedef void (APIENTRYP PFNGLRECTSPROC) (GLshort x1_, GLshort y1_, GLshort x2_, GLshort y2_);
typedef void (APIENTRYP PFNGLRECTSVPROC) (const GLshort *v1_, const GLshort *v2_);
typedef void (APIENTRYP PFNGLTEXCOORD1DPROC) (GLdouble s_);
typedef void (APIENTRYP PFNGLTEXCOORD1DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLTEXCOORD1FPROC) (GLfloat s_);
typedef void (APIENTRYP PFNGLTEXCOORD1FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLTEXCOORD1IPROC) (GLint s_);
typedef void (APIENTRYP PFNGLTEXCOORD1IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLTEXCOORD1SPROC) (GLshort s_);
typedef void (APIENTRYP PFNGLTEXCOORD1SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLTEXCOORD2DPROC) (GLdouble s_, GLdouble t_);
typedef void (APIENTRYP PFNGLTEXCOORD2DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLTEXCOORD2FPROC) (GLfloat s_, GLfloat t_);
typedef void (APIENTRYP PFNGLTEXCOORD2FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLTEXCOORD2IPROC) (GLint s_, GLint t_);
typedef void (APIENTRYP PFNGLTEXCOORD2IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLTEXCOORD2SPROC) (GLshort s_, GLshort t_);
typedef void (APIENTRYP PFNGLTEXCOORD2SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLTEXCOORD3DPROC) (GLdouble s_, GLdouble t_, GLdouble r_);
typedef void (APIENTRYP PFNGLTEXCOORD3DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLTEXCOORD3FPROC) (GLfloat s_, GLfloat t_, GLfloat r_);
typedef void (APIENTRYP PFNGLTEXCOORD3FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLTEXCOORD3IPROC) (GLint s_, GLint t_, GLint r_);
typedef void (APIENTRYP PFNGLTEXCOORD3IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLTEXCOORD3SPROC) (GLshort s_, GLshort t_, GLshort r_);
typedef void (APIENTRYP PFNGLTEXCOORD3SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLTEXCOORD4DPROC) (GLdouble s_, GLdouble t_, GLdouble r_, GLdouble q_);
typedef void (APIENTRYP PFNGLTEXCOORD4DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLTEXCOORD4FPROC) (GLfloat s_, GLfloat t_, GLfloat r_, GLfloat q_);
typedef void (APIENTRYP PFNGLTEXCOORD4FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLTEXCOORD4IPROC) (GLint s_, GLint t_, GLint r_, GLint q_);
typedef void (APIENTRYP PFNGLTEXCOORD4IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLTEXCOORD4SPROC) (GLshort s_, GLshort t_, GLshort r_, GLshort q_);
typedef void (APIENTRYP PFNGLTEXCOORD4SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLVERTEX2DPROC) (GLdouble x_, GLdouble y_);
typedef void (APIENTRYP PFNGLVERTEX2DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLVERTEX2FPROC) (GLfloat x_, GLfloat y_);
typedef void (APIENTRYP PFNGLVERTEX2FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLVERTEX2IPROC) (GLint x_, GLint y_);
typedef void (APIENTRYP PFNGLVERTEX2IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLVERTEX2SPROC) (GLshort x_, GLshort y_);
typedef void (APIENTRYP PFNGLVERTEX2SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLVERTEX3DPROC) (GLdouble x_, GLdouble y_, GLdouble z_);
typedef void (APIENTRYP PFNGLVERTEX3DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLVERTEX3FPROC) (GLfloat x_, GLfloat y_, GLfloat z_);
typedef void (APIENTRYP PFNGLVERTEX3FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLVERTEX3IPROC) (GLint x_, GLint y_, GLint z_);
typedef void (APIENTRYP PFNGLVERTEX3IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLVERTEX3SPROC) (GLshort x_, GLshort y_, GLshort z_);
typedef void (APIENTRYP PFNGLVERTEX3SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLVERTEX4DPROC) (GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_);
typedef void (APIENTRYP PFNGLVERTEX4DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLVERTEX4FPROC) (GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_);
typedef void (APIENTRYP PFNGLVERTEX4FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLVERTEX4IPROC) (GLint x_, GLint y_, GLint z_, GLint w_);
typedef void (APIENTRYP PFNGLVERTEX4IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLVERTEX4SPROC) (GLshort x_, GLshort y_, GLshort z_, GLshort w_);
typedef void (APIENTRYP PFNGLVERTEX4SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLCLIPPLANEPROC) (GLenum plane_, const GLdouble *equation_);
typedef void (APIENTRYP PFNGLCOLORMATERIALPROC) (GLenum face_, GLenum mode_);
typedef void (APIENTRYP PFNGLFOGFPROC) (GLenum pname_, GLfloat param_);
typedef void (APIENTRYP PFNGLFOGFVPROC) (GLenum pname_, const GLfloat *params_);
typedef void (APIENTRYP PFNGLFOGIPROC) (GLenum pname_, GLint param_);
typedef void (APIENTRYP PFNGLFOGIVPROC) (GLenum pname_, const GLint *params_);
typedef void (APIENTRYP PFNGLLIGHTFPROC) (GLenum light_, GLenum pname_, GLfloat param_);
typedef void (APIENTRYP PFNGLLIGHTFVPROC) (GLenum light_, GLenum pname_, const GLfloat *params_);
typedef void (APIENTRYP PFNGLLIGHTIPROC) (GLenum light_, GLenum pname_, GLint param_);
typedef void (APIENTRYP PFNGLLIGHTIVPROC) (GLenum light_, GLenum pname_, const GLint *params_);
typedef void (APIENTRYP PFNGLLIGHTMODELFPROC) (GLenum pname_, GLfloat param_);
typedef void (APIENTRYP PFNGLLIGHTMODELFVPROC) (GLenum pname_, const GLfloat *params_);
typedef void (APIENTRYP PFNGLLIGHTMODELIPROC) (GLenum pname_, GLint param_);
typedef void (APIENTRYP PFNGLLIGHTMODELIVPROC) (GLenum pname_, const GLint *params_);
typedef void (APIENTRYP PFNGLLINESTIPPLEPROC) (GLint factor_, GLushort pattern_);
typedef void (APIENTRYP PFNGLMATERIALFPROC) (GLenum face_, GLenum pname_, GLfloat param_);
typedef void (APIENTRYP PFNGLMATERIALFVPROC) (GLenum face_, GLenum pname_, const GLfloat *params_);
typedef void (APIENTRYP PFNGLMATERIALIPROC) (GLenum face_, GLenum pname_, GLint param_);
typedef void (APIENTRYP PFNGLMATERIALIVPROC) (GLenum face_, GLenum pname_, const GLint *params_);
typedef void (APIENTRYP PFNGLPOLYGONSTIPPLEPROC) (const GLubyte *mask_);
typedef void (APIENTRYP PFNGLSHADEMODELPROC) (GLenum mode_);
typedef void (APIENTRYP PFNGLTEXENVFPROC) (GLenum target_, GLenum pname_, GLfloat param_);
typedef void (APIENTRYP PFNGLTEXENVFVPROC) (GLenum target_, GLenum pname_, const GLfloat *params_);
typedef void (APIENTRYP PFNGLTEXENVIPROC) (GLenum target_, GLenum pname_, GLint param_);
typedef void (APIENTRYP PFNGLTEXENVIVPROC) (GLenum target_, GLenum pname_, const GLint *params_);
typedef void (APIENTRYP PFNGLTEXGENDPROC) (GLenum coord_, GLenum pname_, GLdouble param_);
typedef void (APIENTRYP PFNGLTEXGENDVPROC) (GLenum coord_, GLenum pname_, const GLdouble *params_);
typedef void (APIENTRYP PFNGLTEXGENFPROC) (GLenum coord_, GLenum pname_, GLfloat param_);
typedef void (APIENTRYP PFNGLTEXGENFVPROC) (GLenum coord_, GLenum pname_, const GLfloat *params_);
typedef void (APIENTRYP PFNGLTEXGENIPROC) (GLenum coord_, GLenum pname_, GLint param_);
typedef void (APIENTRYP PFNGLTEXGENIVPROC) (GLenum coord_, GLenum pname_, const GLint *params_);
typedef void (APIENTRYP PFNGLFEEDBACKBUFFERPROC) (GLsizei size_, GLenum type_, GLfloat *buffer_);
typedef void (APIENTRYP PFNGLSELECTBUFFERPROC) (GLsizei size_, GLuint *buffer_);
typedef GLint (APIENTRYP PFNGLRENDERMODEPROC) (GLenum mode_);
typedef void (APIENTRYP PFNGLINITNAMESPROC) (void);
typedef void (APIENTRYP PFNGLLOADNAMEPROC) (GLuint name_);
typedef void (APIENTRYP PFNGLPASSTHROUGHPROC) (GLfloat token_);
typedef void (APIENTRYP PFNGLPOPNAMEPROC) (void);
typedef void (APIENTRYP PFNGLPUSHNAMEPROC) (GLuint name_);
typedef void (APIENTRYP PFNGLCLEARACCUMPROC) (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_);
typedef void (APIENTRYP PFNGLCLEARINDEXPROC) (GLfloat c_);
typedef void (APIENTRYP PFNGLINDEXMASKPROC) (GLuint mask_);
typedef void (APIENTRYP PFNGLACCUMPROC) (GLenum op_, GLfloat value_);
typedef void (APIENTRYP PFNGLPOPATTRIBPROC) (void);
typedef void (APIENTRYP PFNGLPUSHATTRIBPROC) (GLbitfield mask_);
typedef void (APIENTRYP PFNGLMAP1DPROC) (GLenum target_, GLdouble u1_, GLdouble u2_, GLint stride_, GLint order_, const GLdouble *points_);
typedef void (APIENTRYP PFNGLMAP1FPROC) (GLenum target_, GLfloat u1_, GLfloat u2_, GLint stride_, GLint order_, const GLfloat *points_);
typedef void (APIENTRYP PFNGLMAP2DPROC) (GLenum target_, GLdouble u1_, GLdouble u2_, GLint ustride_, GLint uorder_, GLdouble v1_, GLdouble v2_, GLint vstride_, GLint vorder_, const GLdouble *points_);
typedef void (APIENTRYP PFNGLMAP2FPROC) (GLenum target_, GLfloat u1_, GLfloat u2_, GLint ustride_, GLint uorder_, GLfloat v1_, GLfloat v2_, GLint vstride_, GLint vorder_, const GLfloat *points_);
typedef void (APIENTRYP PFNGLMAPGRID1DPROC) (GLint un_, GLdouble u1_, GLdouble u2_);
typedef void (APIENTRYP PFNGLMAPGRID1FPROC) (GLint un_, GLfloat u1_, GLfloat u2_);
typedef void (APIENTRYP PFNGLMAPGRID2DPROC) (GLint un_, GLdouble u1_, GLdouble u2_, GLint vn_, GLdouble v1_, GLdouble v2_);
typedef void (APIENTRYP PFNGLMAPGRID2FPROC) (GLint un_, GLfloat u1_, GLfloat u2_, GLint vn_, GLfloat v1_, GLfloat v2_);
typedef void (APIENTRYP PFNGLEVALCOORD1DPROC) (GLdouble u_);
typedef void (APIENTRYP PFNGLEVALCOORD1DVPROC) (const GLdouble *u_);
typedef void (APIENTRYP PFNGLEVALCOORD1FPROC) (GLfloat u_);
typedef void (APIENTRYP PFNGLEVALCOORD1FVPROC) (const GLfloat *u_);
typedef void (APIENTRYP PFNGLEVALCOORD2DPROC) (GLdouble u_, GLdouble v_);
typedef void (APIENTRYP PFNGLEVALCOORD2DVPROC) (const GLdouble *u_);
typedef void (APIENTRYP PFNGLEVALCOORD2FPROC) (GLfloat u_, GLfloat v_);
typedef void (APIENTRYP PFNGLEVALCOORD2FVPROC) (const GLfloat *u_);
typedef void (APIENTRYP PFNGLEVALMESH1PROC) (GLenum mode_, GLint i1_, GLint i2_);
typedef void (APIENTRYP PFNGLEVALPOINT1PROC) (GLint i_);
typedef void (APIENTRYP PFNGLEVALMESH2PROC) (GLenum mode_, GLint i1_, GLint i2_, GLint j1_, GLint j2_);
typedef void (APIENTRYP PFNGLEVALPOINT2PROC) (GLint i_, GLint j_);
typedef void (APIENTRYP PFNGLALPHAFUNCPROC) (GLenum func_, GLfloat ref_);
typedef void (APIENTRYP PFNGLPIXELZOOMPROC) (GLfloat xfactor_, GLfloat yfactor_);
typedef void (APIENTRYP PFNGLPIXELTRANSFERFPROC) (GLenum pname_, GLfloat param_);
typedef void (APIENTRYP PFNGLPIXELTRANSFERIPROC) (GLenum pname_, GLint param_);
typedef void (APIENTRYP PFNGLPIXELMAPFVPROC) (GLenum map_, GLsizei mapsize_, const GLfloat *values_);
typedef void (APIENTRYP PFNGLPIXELMAPUIVPROC) (GLenum map_, GLsizei mapsize_, const GLuint *values_);
typedef void (APIENTRYP PFNGLPIXELMAPUSVPROC) (GLenum map_, GLsizei mapsize_, const GLushort *values_);
typedef void (APIENTRYP PFNGLCOPYPIXELSPROC) (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum type_);
typedef void (APIENTRYP PFNGLDRAWPIXELSPROC) (GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *pixels_);
typedef void (APIENTRYP PFNGLGETCLIPPLANEPROC) (GLenum plane_, GLdouble *equation_);
typedef void (APIENTRYP PFNGLGETLIGHTFVPROC) (GLenum light_, GLenum pname_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETLIGHTIVPROC) (GLenum light_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETMAPDVPROC) (GLenum target_, GLenum query_, GLdouble *v_);
typedef void (APIENTRYP PFNGLGETMAPFVPROC) (GLenum target_, GLenum query_, GLfloat *v_);
typedef void (APIENTRYP PFNGLGETMAPIVPROC) (GLenum target_, GLenum query_, GLint *v_);
typedef void (APIENTRYP PFNGLGETMATERIALFVPROC) (GLenum face_, GLenum pname_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETMATERIALIVPROC) (GLenum face_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETPIXELMAPFVPROC) (GLenum map_, GLfloat *values_);
typedef void (APIENTRYP PFNGLGETPIXELMAPUIVPROC) (GLenum map_, GLuint *values_);
typedef void (APIENTRYP PFNGLGETPIXELMAPUSVPROC) (GLenum map_, GLushort *values_);
typedef void (APIENTRYP PFNGLGETPOLYGONSTIPPLEPROC) (GLubyte *mask_);
typedef void (APIENTRYP PFNGLGETTEXENVFVPROC) (GLenum target_, GLenum pname_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETTEXENVIVPROC) (GLenum target_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETTEXGENDVPROC) (GLenum coord_, GLenum pname_, GLdouble *params_);
typedef void (APIENTRYP PFNGLGETTEXGENFVPROC) (GLenum coord_, GLenum pname_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETTEXGENIVPROC) (GLenum coord_, GLenum pname_, GLint *params_);
typedef GLboolean (APIENTRYP PFNGLISLISTPROC) (GLuint list_);
typedef void (APIENTRYP PFNGLFRUSTUMPROC) (GLdouble left_, GLdouble right_, GLdouble bottom_, GLdouble top_, GLdouble zNear_, GLdouble zFar_);
typedef void (APIENTRYP PFNGLLOADIDENTITYPROC) (void);
typedef void (APIENTRYP PFNGLLOADMATRIXFPROC) (const GLfloat *m_);
typedef void (APIENTRYP PFNGLLOADMATRIXDPROC) (const GLdouble *m_);
typedef void (APIENTRYP PFNGLMATRIXMODEPROC) (GLenum mode_);
typedef void (APIENTRYP PFNGLMULTMATRIXFPROC) (const GLfloat *m_);
typedef void (APIENTRYP PFNGLMULTMATRIXDPROC) (const GLdouble *m_);
typedef void (APIENTRYP PFNGLORTHOPROC) (GLdouble left_, GLdouble right_, GLdouble bottom_, GLdouble top_, GLdouble zNear_, GLdouble zFar_);
typedef void (APIENTRYP PFNGLPOPMATRIXPROC) (void);
typedef void (APIENTRYP PFNGLPUSHMATRIXPROC) (void);
typedef void (APIENTRYP PFNGLROTATEDPROC) (GLdouble angle_, GLdouble x_, GLdouble y_, GLdouble z_);
typedef void (APIENTRYP PFNGLROTATEFPROC) (GLfloat angle_, GLfloat x_, GLfloat y_, GLfloat z_);
typedef void (APIENTRYP PFNGLSCALEDPROC) (GLdouble x_, GLdouble y_, GLdouble z_);
typedef void (APIENTRYP PFNGLSCALEFPROC) (GLfloat x_, GLfloat y_, GLfloat z_);
typedef void (APIENTRYP PFNGLTRANSLATEDPROC) (GLdouble x_, GLdouble y_, GLdouble z_);
typedef void (APIENTRYP PFNGLTRANSLATEFPROC) (GLfloat x_, GLfloat y_, GLfloat z_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glCullFace (GLenum mode_);
GLAPI void APIENTRY glFrontFace (GLenum mode_);
GLAPI void APIENTRY glHint (GLenum target_, GLenum mode_);
GLAPI void APIENTRY glLineWidth (GLfloat width_);
GLAPI void APIENTRY glPointSize (GLfloat size_);
GLAPI void APIENTRY glPolygonMode (GLenum face_, GLenum mode_);
GLAPI void APIENTRY glScissor (GLint x_, GLint y_, GLsizei width_, GLsizei height_);
GLAPI void APIENTRY glTexParameterf (GLenum target_, GLenum pname_, GLfloat param_);
GLAPI void APIENTRY glTexParameterfv (GLenum target_, GLenum pname_, const GLfloat *params_);
GLAPI void APIENTRY glTexParameteri (GLenum target_, GLenum pname_, GLint param_);
GLAPI void APIENTRY glTexParameteriv (GLenum target_, GLenum pname_, const GLint *params_);
GLAPI void APIENTRY glTexImage1D (GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLint border_, GLenum format_, GLenum type_, const void *pixels_);
GLAPI void APIENTRY glTexImage2D (GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLsizei height_, GLint border_, GLenum format_, GLenum type_, const void *pixels_);
GLAPI void APIENTRY glDrawBuffer (GLenum buf_);
GLAPI void APIENTRY glClear (GLbitfield mask_);
GLAPI void APIENTRY glClearColor (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_);
GLAPI void APIENTRY glClearStencil (GLint s_);
GLAPI void APIENTRY glClearDepth (GLdouble depth_);
GLAPI void APIENTRY glStencilMask (GLuint mask_);
GLAPI void APIENTRY glColorMask (GLboolean red_, GLboolean green_, GLboolean blue_, GLboolean alpha_);
GLAPI void APIENTRY glDepthMask (GLboolean flag_);
GLAPI void APIENTRY glDisable (GLenum cap_);
GLAPI void APIENTRY glEnable (GLenum cap_);
GLAPI void APIENTRY glFinish (void);
GLAPI void APIENTRY glFlush (void);
GLAPI void APIENTRY glBlendFunc (GLenum sfactor_, GLenum dfactor_);
GLAPI void APIENTRY glLogicOp (GLenum opcode_);
GLAPI void APIENTRY glStencilFunc (GLenum func_, GLint ref_, GLuint mask_);
GLAPI void APIENTRY glStencilOp (GLenum fail_, GLenum zfail_, GLenum zpass_);
GLAPI void APIENTRY glDepthFunc (GLenum func_);
GLAPI void APIENTRY glPixelStoref (GLenum pname_, GLfloat param_);
GLAPI void APIENTRY glPixelStorei (GLenum pname_, GLint param_);
GLAPI void APIENTRY glReadBuffer (GLenum src_);
GLAPI void APIENTRY glReadPixels (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, void *pixels_);
GLAPI void APIENTRY glGetBooleanv (GLenum pname_, GLboolean *data_);
GLAPI void APIENTRY glGetDoublev (GLenum pname_, GLdouble *data_);
GLAPI GLenum APIENTRY glGetError (void);
GLAPI void APIENTRY glGetFloatv (GLenum pname_, GLfloat *data_);
GLAPI void APIENTRY glGetIntegerv (GLenum pname_, GLint *data_);
GLAPI const GLubyte *APIENTRY glGetString (GLenum name_);
GLAPI void APIENTRY glGetTexImage (GLenum target_, GLint level_, GLenum format_, GLenum type_, void *pixels_);
GLAPI void APIENTRY glGetTexParameterfv (GLenum target_, GLenum pname_, GLfloat *params_);
GLAPI void APIENTRY glGetTexParameteriv (GLenum target_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetTexLevelParameterfv (GLenum target_, GLint level_, GLenum pname_, GLfloat *params_);
GLAPI void APIENTRY glGetTexLevelParameteriv (GLenum target_, GLint level_, GLenum pname_, GLint *params_);
GLAPI GLboolean APIENTRY glIsEnabled (GLenum cap_);
GLAPI void APIENTRY glDepthRange (GLdouble near_, GLdouble far_);
GLAPI void APIENTRY glViewport (GLint x_, GLint y_, GLsizei width_, GLsizei height_);
GLAPI void APIENTRY glNewList (GLuint list_, GLenum mode_);
GLAPI void APIENTRY glEndList (void);
GLAPI void APIENTRY glCallList (GLuint list_);
GLAPI void APIENTRY glCallLists (GLsizei n_, GLenum type_, const void *lists_);
GLAPI void APIENTRY glDeleteLists (GLuint list_, GLsizei range_);
GLAPI GLuint APIENTRY glGenLists (GLsizei range_);
GLAPI void APIENTRY glListBase (GLuint base_);
GLAPI void APIENTRY glBegin (GLenum mode_);
GLAPI void APIENTRY glBitmap (GLsizei width_, GLsizei height_, GLfloat xorig_, GLfloat yorig_, GLfloat xmove_, GLfloat ymove_, const GLubyte *bitmap_);
GLAPI void APIENTRY glColor3b (GLbyte red_, GLbyte green_, GLbyte blue_);
GLAPI void APIENTRY glColor3bv (const GLbyte *v_);
GLAPI void APIENTRY glColor3d (GLdouble red_, GLdouble green_, GLdouble blue_);
GLAPI void APIENTRY glColor3dv (const GLdouble *v_);
GLAPI void APIENTRY glColor3f (GLfloat red_, GLfloat green_, GLfloat blue_);
GLAPI void APIENTRY glColor3fv (const GLfloat *v_);
GLAPI void APIENTRY glColor3i (GLint red_, GLint green_, GLint blue_);
GLAPI void APIENTRY glColor3iv (const GLint *v_);
GLAPI void APIENTRY glColor3s (GLshort red_, GLshort green_, GLshort blue_);
GLAPI void APIENTRY glColor3sv (const GLshort *v_);
GLAPI void APIENTRY glColor3ub (GLubyte red_, GLubyte green_, GLubyte blue_);
GLAPI void APIENTRY glColor3ubv (const GLubyte *v_);
GLAPI void APIENTRY glColor3ui (GLuint red_, GLuint green_, GLuint blue_);
GLAPI void APIENTRY glColor3uiv (const GLuint *v_);
GLAPI void APIENTRY glColor3us (GLushort red_, GLushort green_, GLushort blue_);
GLAPI void APIENTRY glColor3usv (const GLushort *v_);
GLAPI void APIENTRY glColor4b (GLbyte red_, GLbyte green_, GLbyte blue_, GLbyte alpha_);
GLAPI void APIENTRY glColor4bv (const GLbyte *v_);
GLAPI void APIENTRY glColor4d (GLdouble red_, GLdouble green_, GLdouble blue_, GLdouble alpha_);
GLAPI void APIENTRY glColor4dv (const GLdouble *v_);
GLAPI void APIENTRY glColor4f (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_);
GLAPI void APIENTRY glColor4fv (const GLfloat *v_);
GLAPI void APIENTRY glColor4i (GLint red_, GLint green_, GLint blue_, GLint alpha_);
GLAPI void APIENTRY glColor4iv (const GLint *v_);
GLAPI void APIENTRY glColor4s (GLshort red_, GLshort green_, GLshort blue_, GLshort alpha_);
GLAPI void APIENTRY glColor4sv (const GLshort *v_);
GLAPI void APIENTRY glColor4ub (GLubyte red_, GLubyte green_, GLubyte blue_, GLubyte alpha_);
GLAPI void APIENTRY glColor4ubv (const GLubyte *v_);
GLAPI void APIENTRY glColor4ui (GLuint red_, GLuint green_, GLuint blue_, GLuint alpha_);
GLAPI void APIENTRY glColor4uiv (const GLuint *v_);
GLAPI void APIENTRY glColor4us (GLushort red_, GLushort green_, GLushort blue_, GLushort alpha_);
GLAPI void APIENTRY glColor4usv (const GLushort *v_);
GLAPI void APIENTRY glEdgeFlag (GLboolean flag_);
GLAPI void APIENTRY glEdgeFlagv (const GLboolean *flag_);
GLAPI void APIENTRY glEnd (void);
GLAPI void APIENTRY glIndexd (GLdouble c_);
GLAPI void APIENTRY glIndexdv (const GLdouble *c_);
GLAPI void APIENTRY glIndexf (GLfloat c_);
GLAPI void APIENTRY glIndexfv (const GLfloat *c_);
GLAPI void APIENTRY glIndexi (GLint c_);
GLAPI void APIENTRY glIndexiv (const GLint *c_);
GLAPI void APIENTRY glIndexs (GLshort c_);
GLAPI void APIENTRY glIndexsv (const GLshort *c_);
GLAPI void APIENTRY glNormal3b (GLbyte nx_, GLbyte ny_, GLbyte nz_);
GLAPI void APIENTRY glNormal3bv (const GLbyte *v_);
GLAPI void APIENTRY glNormal3d (GLdouble nx_, GLdouble ny_, GLdouble nz_);
GLAPI void APIENTRY glNormal3dv (const GLdouble *v_);
GLAPI void APIENTRY glNormal3f (GLfloat nx_, GLfloat ny_, GLfloat nz_);
GLAPI void APIENTRY glNormal3fv (const GLfloat *v_);
GLAPI void APIENTRY glNormal3i (GLint nx_, GLint ny_, GLint nz_);
GLAPI void APIENTRY glNormal3iv (const GLint *v_);
GLAPI void APIENTRY glNormal3s (GLshort nx_, GLshort ny_, GLshort nz_);
GLAPI void APIENTRY glNormal3sv (const GLshort *v_);
GLAPI void APIENTRY glRasterPos2d (GLdouble x_, GLdouble y_);
GLAPI void APIENTRY glRasterPos2dv (const GLdouble *v_);
GLAPI void APIENTRY glRasterPos2f (GLfloat x_, GLfloat y_);
GLAPI void APIENTRY glRasterPos2fv (const GLfloat *v_);
GLAPI void APIENTRY glRasterPos2i (GLint x_, GLint y_);
GLAPI void APIENTRY glRasterPos2iv (const GLint *v_);
GLAPI void APIENTRY glRasterPos2s (GLshort x_, GLshort y_);
GLAPI void APIENTRY glRasterPos2sv (const GLshort *v_);
GLAPI void APIENTRY glRasterPos3d (GLdouble x_, GLdouble y_, GLdouble z_);
GLAPI void APIENTRY glRasterPos3dv (const GLdouble *v_);
GLAPI void APIENTRY glRasterPos3f (GLfloat x_, GLfloat y_, GLfloat z_);
GLAPI void APIENTRY glRasterPos3fv (const GLfloat *v_);
GLAPI void APIENTRY glRasterPos3i (GLint x_, GLint y_, GLint z_);
GLAPI void APIENTRY glRasterPos3iv (const GLint *v_);
GLAPI void APIENTRY glRasterPos3s (GLshort x_, GLshort y_, GLshort z_);
GLAPI void APIENTRY glRasterPos3sv (const GLshort *v_);
GLAPI void APIENTRY glRasterPos4d (GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_);
GLAPI void APIENTRY glRasterPos4dv (const GLdouble *v_);
GLAPI void APIENTRY glRasterPos4f (GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_);
GLAPI void APIENTRY glRasterPos4fv (const GLfloat *v_);
GLAPI void APIENTRY glRasterPos4i (GLint x_, GLint y_, GLint z_, GLint w_);
GLAPI void APIENTRY glRasterPos4iv (const GLint *v_);
GLAPI void APIENTRY glRasterPos4s (GLshort x_, GLshort y_, GLshort z_, GLshort w_);
GLAPI void APIENTRY glRasterPos4sv (const GLshort *v_);
GLAPI void APIENTRY glRectd (GLdouble x1_, GLdouble y1_, GLdouble x2_, GLdouble y2_);
GLAPI void APIENTRY glRectdv (const GLdouble *v1_, const GLdouble *v2_);
GLAPI void APIENTRY glRectf (GLfloat x1_, GLfloat y1_, GLfloat x2_, GLfloat y2_);
GLAPI void APIENTRY glRectfv (const GLfloat *v1_, const GLfloat *v2_);
GLAPI void APIENTRY glRecti (GLint x1_, GLint y1_, GLint x2_, GLint y2_);
GLAPI void APIENTRY glRectiv (const GLint *v1_, const GLint *v2_);
GLAPI void APIENTRY glRects (GLshort x1_, GLshort y1_, GLshort x2_, GLshort y2_);
GLAPI void APIENTRY glRectsv (const GLshort *v1_, const GLshort *v2_);
GLAPI void APIENTRY glTexCoord1d (GLdouble s_);
GLAPI void APIENTRY glTexCoord1dv (const GLdouble *v_);
GLAPI void APIENTRY glTexCoord1f (GLfloat s_);
GLAPI void APIENTRY glTexCoord1fv (const GLfloat *v_);
GLAPI void APIENTRY glTexCoord1i (GLint s_);
GLAPI void APIENTRY glTexCoord1iv (const GLint *v_);
GLAPI void APIENTRY glTexCoord1s (GLshort s_);
GLAPI void APIENTRY glTexCoord1sv (const GLshort *v_);
GLAPI void APIENTRY glTexCoord2d (GLdouble s_, GLdouble t_);
GLAPI void APIENTRY glTexCoord2dv (const GLdouble *v_);
GLAPI void APIENTRY glTexCoord2f (GLfloat s_, GLfloat t_);
GLAPI void APIENTRY glTexCoord2fv (const GLfloat *v_);
GLAPI void APIENTRY glTexCoord2i (GLint s_, GLint t_);
GLAPI void APIENTRY glTexCoord2iv (const GLint *v_);
GLAPI void APIENTRY glTexCoord2s (GLshort s_, GLshort t_);
GLAPI void APIENTRY glTexCoord2sv (const GLshort *v_);
GLAPI void APIENTRY glTexCoord3d (GLdouble s_, GLdouble t_, GLdouble r_);
GLAPI void APIENTRY glTexCoord3dv (const GLdouble *v_);
GLAPI void APIENTRY glTexCoord3f (GLfloat s_, GLfloat t_, GLfloat r_);
GLAPI void APIENTRY glTexCoord3fv (const GLfloat *v_);
GLAPI void APIENTRY glTexCoord3i (GLint s_, GLint t_, GLint r_);
GLAPI void APIENTRY glTexCoord3iv (const GLint *v_);
GLAPI void APIENTRY glTexCoord3s (GLshort s_, GLshort t_, GLshort r_);
GLAPI void APIENTRY glTexCoord3sv (const GLshort *v_);
GLAPI void APIENTRY glTexCoord4d (GLdouble s_, GLdouble t_, GLdouble r_, GLdouble q_);
GLAPI void APIENTRY glTexCoord4dv (const GLdouble *v_);
GLAPI void APIENTRY glTexCoord4f (GLfloat s_, GLfloat t_, GLfloat r_, GLfloat q_);
GLAPI void APIENTRY glTexCoord4fv (const GLfloat *v_);
GLAPI void APIENTRY glTexCoord4i (GLint s_, GLint t_, GLint r_, GLint q_);
GLAPI void APIENTRY glTexCoord4iv (const GLint *v_);
GLAPI void APIENTRY glTexCoord4s (GLshort s_, GLshort t_, GLshort r_, GLshort q_);
GLAPI void APIENTRY glTexCoord4sv (const GLshort *v_);
GLAPI void APIENTRY glVertex2d (GLdouble x_, GLdouble y_);
GLAPI void APIENTRY glVertex2dv (const GLdouble *v_);
GLAPI void APIENTRY glVertex2f (GLfloat x_, GLfloat y_);
GLAPI void APIENTRY glVertex2fv (const GLfloat *v_);
GLAPI void APIENTRY glVertex2i (GLint x_, GLint y_);
GLAPI void APIENTRY glVertex2iv (const GLint *v_);
GLAPI void APIENTRY glVertex2s (GLshort x_, GLshort y_);
GLAPI void APIENTRY glVertex2sv (const GLshort *v_);
GLAPI void APIENTRY glVertex3d (GLdouble x_, GLdouble y_, GLdouble z_);
GLAPI void APIENTRY glVertex3dv (const GLdouble *v_);
GLAPI void APIENTRY glVertex3f (GLfloat x_, GLfloat y_, GLfloat z_);
GLAPI void APIENTRY glVertex3fv (const GLfloat *v_);
GLAPI void APIENTRY glVertex3i (GLint x_, GLint y_, GLint z_);
GLAPI void APIENTRY glVertex3iv (const GLint *v_);
GLAPI void APIENTRY glVertex3s (GLshort x_, GLshort y_, GLshort z_);
GLAPI void APIENTRY glVertex3sv (const GLshort *v_);
GLAPI void APIENTRY glVertex4d (GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_);
GLAPI void APIENTRY glVertex4dv (const GLdouble *v_);
GLAPI void APIENTRY glVertex4f (GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_);
GLAPI void APIENTRY glVertex4fv (const GLfloat *v_);
GLAPI void APIENTRY glVertex4i (GLint x_, GLint y_, GLint z_, GLint w_);
GLAPI void APIENTRY glVertex4iv (const GLint *v_);
GLAPI void APIENTRY glVertex4s (GLshort x_, GLshort y_, GLshort z_, GLshort w_);
GLAPI void APIENTRY glVertex4sv (const GLshort *v_);
GLAPI void APIENTRY glClipPlane (GLenum plane_, const GLdouble *equation_);
GLAPI void APIENTRY glColorMaterial (GLenum face_, GLenum mode_);
GLAPI void APIENTRY glFogf (GLenum pname_, GLfloat param_);
GLAPI void APIENTRY glFogfv (GLenum pname_, const GLfloat *params_);
GLAPI void APIENTRY glFogi (GLenum pname_, GLint param_);
GLAPI void APIENTRY glFogiv (GLenum pname_, const GLint *params_);
GLAPI void APIENTRY glLightf (GLenum light_, GLenum pname_, GLfloat param_);
GLAPI void APIENTRY glLightfv (GLenum light_, GLenum pname_, const GLfloat *params_);
GLAPI void APIENTRY glLighti (GLenum light_, GLenum pname_, GLint param_);
GLAPI void APIENTRY glLightiv (GLenum light_, GLenum pname_, const GLint *params_);
GLAPI void APIENTRY glLightModelf (GLenum pname_, GLfloat param_);
GLAPI void APIENTRY glLightModelfv (GLenum pname_, const GLfloat *params_);
GLAPI void APIENTRY glLightModeli (GLenum pname_, GLint param_);
GLAPI void APIENTRY glLightModeliv (GLenum pname_, const GLint *params_);
GLAPI void APIENTRY glLineStipple (GLint factor_, GLushort pattern_);
GLAPI void APIENTRY glMaterialf (GLenum face_, GLenum pname_, GLfloat param_);
GLAPI void APIENTRY glMaterialfv (GLenum face_, GLenum pname_, const GLfloat *params_);
GLAPI void APIENTRY glMateriali (GLenum face_, GLenum pname_, GLint param_);
GLAPI void APIENTRY glMaterialiv (GLenum face_, GLenum pname_, const GLint *params_);
GLAPI void APIENTRY glPolygonStipple (const GLubyte *mask_);
GLAPI void APIENTRY glShadeModel (GLenum mode_);
GLAPI void APIENTRY glTexEnvf (GLenum target_, GLenum pname_, GLfloat param_);
GLAPI void APIENTRY glTexEnvfv (GLenum target_, GLenum pname_, const GLfloat *params_);
GLAPI void APIENTRY glTexEnvi (GLenum target_, GLenum pname_, GLint param_);
GLAPI void APIENTRY glTexEnviv (GLenum target_, GLenum pname_, const GLint *params_);
GLAPI void APIENTRY glTexGend (GLenum coord_, GLenum pname_, GLdouble param_);
GLAPI void APIENTRY glTexGendv (GLenum coord_, GLenum pname_, const GLdouble *params_);
GLAPI void APIENTRY glTexGenf (GLenum coord_, GLenum pname_, GLfloat param_);
GLAPI void APIENTRY glTexGenfv (GLenum coord_, GLenum pname_, const GLfloat *params_);
GLAPI void APIENTRY glTexGeni (GLenum coord_, GLenum pname_, GLint param_);
GLAPI void APIENTRY glTexGeniv (GLenum coord_, GLenum pname_, const GLint *params_);
GLAPI void APIENTRY glFeedbackBuffer (GLsizei size_, GLenum type_, GLfloat *buffer_);
GLAPI void APIENTRY glSelectBuffer (GLsizei size_, GLuint *buffer_);
GLAPI GLint APIENTRY glRenderMode (GLenum mode_);
GLAPI void APIENTRY glInitNames (void);
GLAPI void APIENTRY glLoadName (GLuint name_);
GLAPI void APIENTRY glPassThrough (GLfloat token_);
GLAPI void APIENTRY glPopName (void);
GLAPI void APIENTRY glPushName (GLuint name_);
GLAPI void APIENTRY glClearAccum (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_);
GLAPI void APIENTRY glClearIndex (GLfloat c_);
GLAPI void APIENTRY glIndexMask (GLuint mask_);
GLAPI void APIENTRY glAccum (GLenum op_, GLfloat value_);
GLAPI void APIENTRY glPopAttrib (void);
GLAPI void APIENTRY glPushAttrib (GLbitfield mask_);
GLAPI void APIENTRY glMap1d (GLenum target_, GLdouble u1_, GLdouble u2_, GLint stride_, GLint order_, const GLdouble *points_);
GLAPI void APIENTRY glMap1f (GLenum target_, GLfloat u1_, GLfloat u2_, GLint stride_, GLint order_, const GLfloat *points_);
GLAPI void APIENTRY glMap2d (GLenum target_, GLdouble u1_, GLdouble u2_, GLint ustride_, GLint uorder_, GLdouble v1_, GLdouble v2_, GLint vstride_, GLint vorder_, const GLdouble *points_);
GLAPI void APIENTRY glMap2f (GLenum target_, GLfloat u1_, GLfloat u2_, GLint ustride_, GLint uorder_, GLfloat v1_, GLfloat v2_, GLint vstride_, GLint vorder_, const GLfloat *points_);
GLAPI void APIENTRY glMapGrid1d (GLint un_, GLdouble u1_, GLdouble u2_);
GLAPI void APIENTRY glMapGrid1f (GLint un_, GLfloat u1_, GLfloat u2_);
GLAPI void APIENTRY glMapGrid2d (GLint un_, GLdouble u1_, GLdouble u2_, GLint vn_, GLdouble v1_, GLdouble v2_);
GLAPI void APIENTRY glMapGrid2f (GLint un_, GLfloat u1_, GLfloat u2_, GLint vn_, GLfloat v1_, GLfloat v2_);
GLAPI void APIENTRY glEvalCoord1d (GLdouble u_);
GLAPI void APIENTRY glEvalCoord1dv (const GLdouble *u_);
GLAPI void APIENTRY glEvalCoord1f (GLfloat u_);
GLAPI void APIENTRY glEvalCoord1fv (const GLfloat *u_);
GLAPI void APIENTRY glEvalCoord2d (GLdouble u_, GLdouble v_);
GLAPI void APIENTRY glEvalCoord2dv (const GLdouble *u_);
GLAPI void APIENTRY glEvalCoord2f (GLfloat u_, GLfloat v_);
GLAPI void APIENTRY glEvalCoord2fv (const GLfloat *u_);
GLAPI void APIENTRY glEvalMesh1 (GLenum mode_, GLint i1_, GLint i2_);
GLAPI void APIENTRY glEvalPoint1 (GLint i_);
GLAPI void APIENTRY glEvalMesh2 (GLenum mode_, GLint i1_, GLint i2_, GLint j1_, GLint j2_);
GLAPI void APIENTRY glEvalPoint2 (GLint i_, GLint j_);
GLAPI void APIENTRY glAlphaFunc (GLenum func_, GLfloat ref_);
GLAPI void APIENTRY glPixelZoom (GLfloat xfactor_, GLfloat yfactor_);
GLAPI void APIENTRY glPixelTransferf (GLenum pname_, GLfloat param_);
GLAPI void APIENTRY glPixelTransferi (GLenum pname_, GLint param_);
GLAPI void APIENTRY glPixelMapfv (GLenum map_, GLsizei mapsize_, const GLfloat *values_);
GLAPI void APIENTRY glPixelMapuiv (GLenum map_, GLsizei mapsize_, const GLuint *values_);
GLAPI void APIENTRY glPixelMapusv (GLenum map_, GLsizei mapsize_, const GLushort *values_);
GLAPI void APIENTRY glCopyPixels (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum type_);
GLAPI void APIENTRY glDrawPixels (GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *pixels_);
GLAPI void APIENTRY glGetClipPlane (GLenum plane_, GLdouble *equation_);
GLAPI void APIENTRY glGetLightfv (GLenum light_, GLenum pname_, GLfloat *params_);
GLAPI void APIENTRY glGetLightiv (GLenum light_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetMapdv (GLenum target_, GLenum query_, GLdouble *v_);
GLAPI void APIENTRY glGetMapfv (GLenum target_, GLenum query_, GLfloat *v_);
GLAPI void APIENTRY glGetMapiv (GLenum target_, GLenum query_, GLint *v_);
GLAPI void APIENTRY glGetMaterialfv (GLenum face_, GLenum pname_, GLfloat *params_);
GLAPI void APIENTRY glGetMaterialiv (GLenum face_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetPixelMapfv (GLenum map_, GLfloat *values_);
GLAPI void APIENTRY glGetPixelMapuiv (GLenum map_, GLuint *values_);
GLAPI void APIENTRY glGetPixelMapusv (GLenum map_, GLushort *values_);
GLAPI void APIENTRY glGetPolygonStipple (GLubyte *mask_);
GLAPI void APIENTRY glGetTexEnvfv (GLenum target_, GLenum pname_, GLfloat *params_);
GLAPI void APIENTRY glGetTexEnviv (GLenum target_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetTexGendv (GLenum coord_, GLenum pname_, GLdouble *params_);
GLAPI void APIENTRY glGetTexGenfv (GLenum coord_, GLenum pname_, GLfloat *params_);
GLAPI void APIENTRY glGetTexGeniv (GLenum coord_, GLenum pname_, GLint *params_);
GLAPI GLboolean APIENTRY glIsList (GLuint list_);
GLAPI void APIENTRY glFrustum (GLdouble left_, GLdouble right_, GLdouble bottom_, GLdouble top_, GLdouble zNear_, GLdouble zFar_);
GLAPI void APIENTRY glLoadIdentity (void);
GLAPI void APIENTRY glLoadMatrixf (const GLfloat *m_);
GLAPI void APIENTRY glLoadMatrixd (const GLdouble *m_);
GLAPI void APIENTRY glMatrixMode (GLenum mode_);
GLAPI void APIENTRY glMultMatrixf (const GLfloat *m_);
GLAPI void APIENTRY glMultMatrixd (const GLdouble *m_);
GLAPI void APIENTRY glOrtho (GLdouble left_, GLdouble right_, GLdouble bottom_, GLdouble top_, GLdouble zNear_, GLdouble zFar_);
GLAPI void APIENTRY glPopMatrix (void);
GLAPI void APIENTRY glPushMatrix (void);
GLAPI void APIENTRY glRotated (GLdouble angle_, GLdouble x_, GLdouble y_, GLdouble z_);
GLAPI void APIENTRY glRotatef (GLfloat angle_, GLfloat x_, GLfloat y_, GLfloat z_);
GLAPI void APIENTRY glScaled (GLdouble x_, GLdouble y_, GLdouble z_);
GLAPI void APIENTRY glScalef (GLfloat x_, GLfloat y_, GLfloat z_);
GLAPI void APIENTRY glTranslated (GLdouble x_, GLdouble y_, GLdouble z_);
GLAPI void APIENTRY glTranslatef (GLfloat x_, GLfloat y_, GLfloat z_);
#endif
#endif /* GL_VERSION_1_0 */

#ifndef GL_VERSION_1_1
#define GL_VERSION_1_1 1
typedef float GLclampf;
typedef double GLclampd;
#define GL_DEPTH_BUFFER_BIT               0x00000100
#define GL_STENCIL_BUFFER_BIT             0x00000400
#define GL_COLOR_BUFFER_BIT               0x00004000
#define GL_FALSE                          0
#define GL_TRUE                           1
#define GL_POINTS                         0x0000
#define GL_LINES                          0x0001
#define GL_LINE_LOOP                      0x0002
#define GL_LINE_STRIP                     0x0003
#define GL_TRIANGLES                      0x0004
#define GL_TRIANGLE_STRIP                 0x0005
#define GL_TRIANGLE_FAN                   0x0006
#define GL_QUADS                          0x0007
#define GL_NEVER                          0x0200
#define GL_LESS                           0x0201
#define GL_EQUAL                          0x0202
#define GL_LEQUAL                         0x0203
#define GL_GREATER                        0x0204
#define GL_NOTEQUAL                       0x0205
#define GL_GEQUAL                         0x0206
#define GL_ALWAYS                         0x0207
#define GL_ZERO                           0
#define GL_ONE                            1
#define GL_SRC_COLOR                      0x0300
#define GL_ONE_MINUS_SRC_COLOR            0x0301
#define GL_SRC_ALPHA                      0x0302
#define GL_ONE_MINUS_SRC_ALPHA            0x0303
#define GL_DST_ALPHA                      0x0304
#define GL_ONE_MINUS_DST_ALPHA            0x0305
#define GL_DST_COLOR                      0x0306
#define GL_ONE_MINUS_DST_COLOR            0x0307
#define GL_SRC_ALPHA_SATURATE             0x0308
#define GL_NONE                           0
#define GL_FRONT_LEFT                     0x0400
#define GL_FRONT_RIGHT                    0x0401
#define GL_BACK_LEFT                      0x0402
#define GL_BACK_RIGHT                     0x0403
#define GL_FRONT                          0x0404
#define GL_BACK                           0x0405
#define GL_LEFT                           0x0406
#define GL_RIGHT                          0x0407
#define GL_FRONT_AND_BACK                 0x0408
#define GL_NO_ERROR                       0
#define GL_INVALID_ENUM                   0x0500
#define GL_INVALID_VALUE                  0x0501
#define GL_INVALID_OPERATION              0x0502
#define GL_OUT_OF_MEMORY                  0x0505
#define GL_CW                             0x0900
#define GL_CCW                            0x0901
#define GL_POINT_SIZE                     0x0B11
#define GL_POINT_SIZE_RANGE               0x0B12
#define GL_POINT_SIZE_GRANULARITY         0x0B13
#define GL_LINE_SMOOTH                    0x0B20
#define GL_LINE_WIDTH                     0x0B21
#define GL_LINE_WIDTH_RANGE               0x0B22
#define GL_LINE_WIDTH_GRANULARITY         0x0B23
#define GL_POLYGON_MODE                   0x0B40
#define GL_POLYGON_SMOOTH                 0x0B41
#define GL_CULL_FACE                      0x0B44
#define GL_CULL_FACE_MODE                 0x0B45
#define GL_FRONT_FACE                     0x0B46
#define GL_DEPTH_RANGE                    0x0B70
#define GL_DEPTH_TEST                     0x0B71
#define GL_DEPTH_WRITEMASK                0x0B72
#define GL_DEPTH_CLEAR_VALUE              0x0B73
#define GL_DEPTH_FUNC                     0x0B74
#define GL_STENCIL_TEST                   0x0B90
#define GL_STENCIL_CLEAR_VALUE            0x0B91
#define GL_STENCIL_FUNC                   0x0B92
#define GL_STENCIL_VALUE_MASK             0x0B93
#define GL_STENCIL_FAIL                   0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL        0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS        0x0B96
#define GL_STENCIL_REF                    0x0B97
#define GL_STENCIL_WRITEMASK              0x0B98
#define GL_VIEWPORT                       0x0BA2
#define GL_DITHER                         0x0BD0
#define GL_BLEND_DST                      0x0BE0
#define GL_BLEND_SRC                      0x0BE1
#define GL_BLEND                          0x0BE2
#define GL_LOGIC_OP_MODE                  0x0BF0
#define GL_COLOR_LOGIC_OP                 0x0BF2
#define GL_DRAW_BUFFER                    0x0C01
#define GL_READ_BUFFER                    0x0C02
#define GL_SCISSOR_BOX                    0x0C10
#define GL_SCISSOR_TEST                   0x0C11
#define GL_COLOR_CLEAR_VALUE              0x0C22
#define GL_COLOR_WRITEMASK                0x0C23
#define GL_DOUBLEBUFFER                   0x0C32
#define GL_STEREO                         0x0C33
#define GL_LINE_SMOOTH_HINT               0x0C52
#define GL_POLYGON_SMOOTH_HINT            0x0C53
#define GL_UNPACK_SWAP_BYTES              0x0CF0
#define GL_UNPACK_LSB_FIRST               0x0CF1
#define GL_UNPACK_ROW_LENGTH              0x0CF2
#define GL_UNPACK_SKIP_ROWS               0x0CF3
#define GL_UNPACK_SKIP_PIXELS             0x0CF4
#define GL_UNPACK_ALIGNMENT               0x0CF5
#define GL_PACK_SWAP_BYTES                0x0D00
#define GL_PACK_LSB_FIRST                 0x0D01
#define GL_PACK_ROW_LENGTH                0x0D02
#define GL_PACK_SKIP_ROWS                 0x0D03
#define GL_PACK_SKIP_PIXELS               0x0D04
#define GL_PACK_ALIGNMENT                 0x0D05
#define GL_MAX_TEXTURE_SIZE               0x0D33
#define GL_MAX_VIEWPORT_DIMS              0x0D3A
#define GL_SUBPIXEL_BITS                  0x0D50
#define GL_TEXTURE_1D                     0x0DE0
#define GL_TEXTURE_2D                     0x0DE1
#define GL_POLYGON_OFFSET_UNITS           0x2A00
#define GL_POLYGON_OFFSET_POINT           0x2A01
#define GL_POLYGON_OFFSET_LINE            0x2A02
#define GL_POLYGON_OFFSET_FILL            0x8037
#define GL_POLYGON_OFFSET_FACTOR          0x8038
#define GL_TEXTURE_BINDING_1D             0x8068
#define GL_TEXTURE_BINDING_2D             0x8069
#define GL_TEXTURE_WIDTH                  0x1000
#define GL_TEXTURE_HEIGHT                 0x1001
#define GL_TEXTURE_INTERNAL_FORMAT        0x1003
#define GL_TEXTURE_BORDER_COLOR           0x1004
#define GL_TEXTURE_RED_SIZE               0x805C
#define GL_TEXTURE_GREEN_SIZE             0x805D
#define GL_TEXTURE_BLUE_SIZE              0x805E
#define GL_TEXTURE_ALPHA_SIZE             0x805F
#define GL_DONT_CARE                      0x1100
#define GL_FASTEST                        0x1101
#define GL_NICEST                         0x1102
#define GL_BYTE                           0x1400
#define GL_UNSIGNED_BYTE                  0x1401
#define GL_SHORT                          0x1402
#define GL_UNSIGNED_SHORT                 0x1403
#define GL_INT                            0x1404
#define GL_UNSIGNED_INT                   0x1405
#define GL_FLOAT                          0x1406
#define GL_DOUBLE                         0x140A
#define GL_STACK_OVERFLOW                 0x0503
#define GL_STACK_UNDERFLOW                0x0504
#define GL_CLEAR                          0x1500
#define GL_AND                            0x1501
#define GL_AND_REVERSE                    0x1502
#define GL_COPY                           0x1503
#define GL_AND_INVERTED                   0x1504
#define GL_NOOP                           0x1505
#define GL_XOR                            0x1506
#define GL_OR                             0x1507
#define GL_NOR                            0x1508
#define GL_EQUIV                          0x1509
#define GL_INVERT                         0x150A
#define GL_OR_REVERSE                     0x150B
#define GL_COPY_INVERTED                  0x150C
#define GL_OR_INVERTED                    0x150D
#define GL_NAND                           0x150E
#define GL_SET                            0x150F
#define GL_TEXTURE                        0x1702
#define GL_COLOR                          0x1800
#define GL_DEPTH                          0x1801
#define GL_STENCIL                        0x1802
#define GL_STENCIL_INDEX                  0x1901
#define GL_DEPTH_COMPONENT                0x1902
#define GL_RED                            0x1903
#define GL_GREEN                          0x1904
#define GL_BLUE                           0x1905
#define GL_ALPHA                          0x1906
#define GL_RGB                            0x1907
#define GL_RGBA                           0x1908
#define GL_POINT                          0x1B00
#define GL_LINE                           0x1B01
#define GL_FILL                           0x1B02
#define GL_KEEP                           0x1E00
#define GL_REPLACE                        0x1E01
#define GL_INCR                           0x1E02
#define GL_DECR                           0x1E03
#define GL_VENDOR                         0x1F00
#define GL_RENDERER                       0x1F01
#define GL_VERSION                        0x1F02
#define GL_EXTENSIONS                     0x1F03
#define GL_NEAREST                        0x2600
#define GL_LINEAR                         0x2601
#define GL_NEAREST_MIPMAP_NEAREST         0x2700
#define GL_LINEAR_MIPMAP_NEAREST          0x2701
#define GL_NEAREST_MIPMAP_LINEAR          0x2702
#define GL_LINEAR_MIPMAP_LINEAR           0x2703
#define GL_TEXTURE_MAG_FILTER             0x2800
#define GL_TEXTURE_MIN_FILTER             0x2801
#define GL_TEXTURE_WRAP_S                 0x2802
#define GL_TEXTURE_WRAP_T                 0x2803
#define GL_PROXY_TEXTURE_1D               0x8063
#define GL_PROXY_TEXTURE_2D               0x8064
#define GL_REPEAT                         0x2901
#define GL_R3_G3_B2                       0x2A10
#define GL_RGB4                           0x804F
#define GL_RGB5                           0x8050
#define GL_RGB8                           0x8051
#define GL_RGB10                          0x8052
#define GL_RGB12                          0x8053
#define GL_RGB16                          0x8054
#define GL_RGBA2                          0x8055
#define GL_RGBA4                          0x8056
#define GL_RGB5_A1                        0x8057
#define GL_RGBA8                          0x8058
#define GL_RGB10_A2                       0x8059
#define GL_RGBA12                         0x805A
#define GL_RGBA16                         0x805B
#define GL_CURRENT_BIT                    0x00000001
#define GL_POINT_BIT                      0x00000002
#define GL_LINE_BIT                       0x00000004
#define GL_POLYGON_BIT                    0x00000008
#define GL_POLYGON_STIPPLE_BIT            0x00000010
#define GL_PIXEL_MODE_BIT                 0x00000020
#define GL_LIGHTING_BIT                   0x00000040
#define GL_FOG_BIT                        0x00000080
#define GL_ACCUM_BUFFER_BIT               0x00000200
#define GL_VIEWPORT_BIT                   0x00000800
#define GL_TRANSFORM_BIT                  0x00001000
#define GL_ENABLE_BIT                     0x00002000
#define GL_HINT_BIT                       0x00008000
#define GL_EVAL_BIT                       0x00010000
#define GL_LIST_BIT                       0x00020000
#define GL_TEXTURE_BIT                    0x00040000
#define GL_SCISSOR_BIT                    0x00080000
#define GL_ALL_ATTRIB_BITS                0xFFFFFFFF
#define GL_CLIENT_PIXEL_STORE_BIT         0x00000001
#define GL_CLIENT_VERTEX_ARRAY_BIT        0x00000002
#define GL_CLIENT_ALL_ATTRIB_BITS         0xFFFFFFFF
#define GL_QUAD_STRIP                     0x0008
#define GL_POLYGON                        0x0009
#define GL_ACCUM                          0x0100
#define GL_LOAD                           0x0101
#define GL_RETURN                         0x0102
#define GL_MULT                           0x0103
#define GL_ADD                            0x0104
#define GL_AUX0                           0x0409
#define GL_AUX1                           0x040A
#define GL_AUX2                           0x040B
#define GL_AUX3                           0x040C
#define GL_2D                             0x0600
#define GL_3D                             0x0601
#define GL_3D_COLOR                       0x0602
#define GL_3D_COLOR_TEXTURE               0x0603
#define GL_4D_COLOR_TEXTURE               0x0604
#define GL_PASS_THROUGH_TOKEN             0x0700
#define GL_POINT_TOKEN                    0x0701
#define GL_LINE_TOKEN                     0x0702
#define GL_POLYGON_TOKEN                  0x0703
#define GL_BITMAP_TOKEN                   0x0704
#define GL_DRAW_PIXEL_TOKEN               0x0705
#define GL_COPY_PIXEL_TOKEN               0x0706
#define GL_LINE_RESET_TOKEN               0x0707
#define GL_EXP                            0x0800
#define GL_EXP2                           0x0801
#define GL_COEFF                          0x0A00
#define GL_ORDER                          0x0A01
#define GL_DOMAIN                         0x0A02
#define GL_PIXEL_MAP_I_TO_I               0x0C70
#define GL_PIXEL_MAP_S_TO_S               0x0C71
#define GL_PIXEL_MAP_I_TO_R               0x0C72
#define GL_PIXEL_MAP_I_TO_G               0x0C73
#define GL_PIXEL_MAP_I_TO_B               0x0C74
#define GL_PIXEL_MAP_I_TO_A               0x0C75
#define GL_PIXEL_MAP_R_TO_R               0x0C76
#define GL_PIXEL_MAP_G_TO_G               0x0C77
#define GL_PIXEL_MAP_B_TO_B               0x0C78
#define GL_PIXEL_MAP_A_TO_A               0x0C79
#define GL_VERTEX_ARRAY_POINTER           0x808E
#define GL_NORMAL_ARRAY_POINTER           0x808F
#define GL_COLOR_ARRAY_POINTER            0x8090
#define GL_INDEX_ARRAY_POINTER            0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER    0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER        0x8093
#define GL_FEEDBACK_BUFFER_POINTER        0x0DF0
#define GL_SELECTION_BUFFER_POINTER       0x0DF3
#define GL_CURRENT_COLOR                  0x0B00
#define GL_CURRENT_INDEX                  0x0B01
#define GL_CURRENT_NORMAL                 0x0B02
#define GL_CURRENT_TEXTURE_COORDS         0x0B03
#define GL_CURRENT_RASTER_COLOR           0x0B04
#define GL_CURRENT_RASTER_INDEX           0x0B05
#define GL_CURRENT_RASTER_TEXTURE_COORDS  0x0B06
#define GL_CURRENT_RASTER_POSITION        0x0B07
#define GL_CURRENT_RASTER_POSITION_VALID  0x0B08
#define GL_CURRENT_RASTER_DISTANCE        0x0B09
#define GL_POINT_SMOOTH                   0x0B10
#define GL_LINE_STIPPLE                   0x0B24
#define GL_LINE_STIPPLE_PATTERN           0x0B25
#define GL_LINE_STIPPLE_REPEAT            0x0B26
#define GL_LIST_MODE                      0x0B30
#define GL_MAX_LIST_NESTING               0x0B31
#define GL_LIST_BASE                      0x0B32
#define GL_LIST_INDEX                     0x0B33
#define GL_POLYGON_STIPPLE                0x0B42
#define GL_EDGE_FLAG                      0x0B43
#define GL_LIGHTING                       0x0B50
#define GL_LIGHT_MODEL_LOCAL_VIEWER       0x0B51
#define GL_LIGHT_MODEL_TWO_SIDE           0x0B52
#define GL_LIGHT_MODEL_AMBIENT            0x0B53
#define GL_SHADE_MODEL                    0x0B54
#define GL_COLOR_MATERIAL_FACE            0x0B55
#define GL_COLOR_MATERIAL_PARAMETER       0x0B56
#define GL_COLOR_MATERIAL                 0x0B57
#define GL_FOG                            0x0B60
#define GL_FOG_INDEX                      0x0B61
#define GL_FOG_DENSITY                    0x0B62
#define GL_FOG_START                      0x0B63
#define GL_FOG_END                        0x0B64
#define GL_FOG_MODE                       0x0B65
#define GL_FOG_COLOR                      0x0B66
#define GL_ACCUM_CLEAR_VALUE              0x0B80
#define GL_MATRIX_MODE                    0x0BA0
#define GL_NORMALIZE                      0x0BA1
#define GL_MODELVIEW_STACK_DEPTH          0x0BA3
#define GL_PROJECTION_STACK_DEPTH         0x0BA4
#define GL_TEXTURE_STACK_DEPTH            0x0BA5
#define GL_MODELVIEW_MATRIX               0x0BA6
#define GL_PROJECTION_MATRIX              0x0BA7
#define GL_TEXTURE_MATRIX                 0x0BA8
#define GL_ATTRIB_STACK_DEPTH             0x0BB0
#define GL_CLIENT_ATTRIB_STACK_DEPTH      0x0BB1
#define GL_ALPHA_TEST                     0x0BC0
#define GL_ALPHA_TEST_FUNC                0x0BC1
#define GL_ALPHA_TEST_REF                 0x0BC2
#define GL_INDEX_LOGIC_OP                 0x0BF1
#define GL_LOGIC_OP                       0x0BF1
#define GL_AUX_BUFFERS                    0x0C00
#define GL_INDEX_CLEAR_VALUE              0x0C20
#define GL_INDEX_WRITEMASK                0x0C21
#define GL_INDEX_MODE                     0x0C30
#define GL_RGBA_MODE                      0x0C31
#define GL_RENDER_MODE                    0x0C40
#define GL_PERSPECTIVE_CORRECTION_HINT    0x0C50
#define GL_POINT_SMOOTH_HINT              0x0C51
#define GL_FOG_HINT                       0x0C54
#define GL_TEXTURE_GEN_S                  0x0C60
#define GL_TEXTURE_GEN_T                  0x0C61
#define GL_TEXTURE_GEN_R                  0x0C62
#define GL_TEXTURE_GEN_Q                  0x0C63
#define GL_PIXEL_MAP_I_TO_I_SIZE          0x0CB0
#define GL_PIXEL_MAP_S_TO_S_SIZE          0x0CB1
#define GL_PIXEL_MAP_I_TO_R_SIZE          0x0CB2
#define GL_PIXEL_MAP_I_TO_G_SIZE          0x0CB3
#define GL_PIXEL_MAP_I_TO_B_SIZE          0x0CB4
#define GL_PIXEL_MAP_I_TO_A_SIZE          0x0CB5
#define GL_PIXEL_MAP_R_TO_R_SIZE          0x0CB6
#define GL_PIXEL_MAP_G_TO_G_SIZE          0x0CB7
#define GL_PIXEL_MAP_B_TO_B_SIZE          0x0CB8
#define GL_PIXEL_MAP_A_TO_A_SIZE          0x0CB9
#define GL_MAP_COLOR                      0x0D10
#define GL_MAP_STENCIL                    0x0D11
#define GL_INDEX_SHIFT                    0x0D12
#define GL_INDEX_OFFSET                   0x0D13
#define GL_RED_SCALE                      0x0D14
#define GL_RED_BIAS                       0x0D15
#define GL_ZOOM_X                         0x0D16
#define GL_ZOOM_Y                         0x0D17
#define GL_GREEN_SCALE                    0x0D18
#define GL_GREEN_BIAS                     0x0D19
#define GL_BLUE_SCALE                     0x0D1A
#define GL_BLUE_BIAS                      0x0D1B
#define GL_ALPHA_SCALE                    0x0D1C
#define GL_ALPHA_BIAS                     0x0D1D
#define GL_DEPTH_SCALE                    0x0D1E
#define GL_DEPTH_BIAS                     0x0D1F
#define GL_MAX_EVAL_ORDER                 0x0D30
#define GL_MAX_LIGHTS                     0x0D31
#define GL_MAX_CLIP_PLANES                0x0D32
#define GL_MAX_PIXEL_MAP_TABLE            0x0D34
#define GL_MAX_ATTRIB_STACK_DEPTH         0x0D35
#define GL_MAX_MODELVIEW_STACK_DEPTH      0x0D36
#define GL_MAX_NAME_STACK_DEPTH           0x0D37
#define GL_MAX_PROJECTION_STACK_DEPTH     0x0D38
#define GL_MAX_TEXTURE_STACK_DEPTH        0x0D39
#define GL_MAX_CLIENT_ATTRIB_STACK_DEPTH  0x0D3B
#define GL_INDEX_BITS                     0x0D51
#define GL_RED_BITS                       0x0D52
#define GL_GREEN_BITS                     0x0D53
#define GL_BLUE_BITS                      0x0D54
#define GL_ALPHA_BITS                     0x0D55
#define GL_DEPTH_BITS                     0x0D56
#define GL_STENCIL_BITS                   0x0D57
#define GL_ACCUM_RED_BITS                 0x0D58
#define GL_ACCUM_GREEN_BITS               0x0D59
#define GL_ACCUM_BLUE_BITS                0x0D5A
#define GL_ACCUM_ALPHA_BITS               0x0D5B
#define GL_NAME_STACK_DEPTH               0x0D70
#define GL_AUTO_NORMAL                    0x0D80
#define GL_MAP1_COLOR_4                   0x0D90
#define GL_MAP1_INDEX                     0x0D91
#define GL_MAP1_NORMAL                    0x0D92
#define GL_MAP1_TEXTURE_COORD_1           0x0D93
#define GL_MAP1_TEXTURE_COORD_2           0x0D94
#define GL_MAP1_TEXTURE_COORD_3           0x0D95
#define GL_MAP1_TEXTURE_COORD_4           0x0D96
#define GL_MAP1_VERTEX_3                  0x0D97
#define GL_MAP1_VERTEX_4                  0x0D98
#define GL_MAP2_COLOR_4                   0x0DB0
#define GL_MAP2_INDEX                     0x0DB1
#define GL_MAP2_NORMAL                    0x0DB2
#define GL_MAP2_TEXTURE_COORD_1           0x0DB3
#define GL_MAP2_TEXTURE_COORD_2           0x0DB4
#define GL_MAP2_TEXTURE_COORD_3           0x0DB5
#define GL_MAP2_TEXTURE_COORD_4           0x0DB6
#define GL_MAP2_VERTEX_3                  0x0DB7
#define GL_MAP2_VERTEX_4                  0x0DB8
#define GL_MAP1_GRID_DOMAIN               0x0DD0
#define GL_MAP1_GRID_SEGMENTS             0x0DD1
#define GL_MAP2_GRID_DOMAIN               0x0DD2
#define GL_MAP2_GRID_SEGMENTS             0x0DD3
#define GL_FEEDBACK_BUFFER_SIZE           0x0DF1
#define GL_FEEDBACK_BUFFER_TYPE           0x0DF2
#define GL_SELECTION_BUFFER_SIZE          0x0DF4
#define GL_VERTEX_ARRAY                   0x8074
#define GL_NORMAL_ARRAY                   0x8075
#define GL_COLOR_ARRAY                    0x8076
#define GL_INDEX_ARRAY                    0x8077
#define GL_TEXTURE_COORD_ARRAY            0x8078
#define GL_EDGE_FLAG_ARRAY                0x8079
#define GL_VERTEX_ARRAY_SIZE              0x807A
#define GL_VERTEX_ARRAY_TYPE              0x807B
#define GL_VERTEX_ARRAY_STRIDE            0x807C
#define GL_NORMAL_ARRAY_TYPE              0x807E
#define GL_NORMAL_ARRAY_STRIDE            0x807F
#define GL_COLOR_ARRAY_SIZE               0x8081
#define GL_COLOR_ARRAY_TYPE               0x8082
#define GL_COLOR_ARRAY_STRIDE             0x8083
#define GL_INDEX_ARRAY_TYPE               0x8085
#define GL_INDEX_ARRAY_STRIDE             0x8086
#define GL_TEXTURE_COORD_ARRAY_SIZE       0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE       0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE     0x808A
#define GL_EDGE_FLAG_ARRAY_STRIDE         0x808C
#define GL_TEXTURE_COMPONENTS             0x1003
#define GL_TEXTURE_BORDER                 0x1005
#define GL_TEXTURE_LUMINANCE_SIZE         0x8060
#define GL_TEXTURE_INTENSITY_SIZE         0x8061
#define GL_TEXTURE_PRIORITY               0x8066
#define GL_TEXTURE_RESIDENT               0x8067
#define GL_AMBIENT                        0x1200
#define GL_DIFFUSE                        0x1201
#define GL_SPECULAR                       0x1202
#define GL_POSITION                       0x1203
#define GL_SPOT_DIRECTION                 0x1204
#define GL_SPOT_EXPONENT                  0x1205
#define GL_SPOT_CUTOFF                    0x1206
#define GL_CONSTANT_ATTENUATION           0x1207
#define GL_LINEAR_ATTENUATION             0x1208
#define GL_QUADRATIC_ATTENUATION          0x1209
#define GL_COMPILE                        0x1300
#define GL_COMPILE_AND_EXECUTE            0x1301
#define GL_2_BYTES                        0x1407
#define GL_3_BYTES                        0x1408
#define GL_4_BYTES                        0x1409
#define GL_EMISSION                       0x1600
#define GL_SHININESS                      0x1601
#define GL_AMBIENT_AND_DIFFUSE            0x1602
#define GL_COLOR_INDEXES                  0x1603
#define GL_MODELVIEW                      0x1700
#define GL_PROJECTION                     0x1701
#define GL_COLOR_INDEX                    0x1900
#define GL_LUMINANCE                      0x1909
#define GL_LUMINANCE_ALPHA                0x190A
#define GL_BITMAP                         0x1A00
#define GL_RENDER                         0x1C00
#define GL_FEEDBACK                       0x1C01
#define GL_SELECT                         0x1C02
#define GL_FLAT                           0x1D00
#define GL_SMOOTH                         0x1D01
#define GL_S                              0x2000
#define GL_T                              0x2001
#define GL_R                              0x2002
#define GL_Q                              0x2003
#define GL_MODULATE                       0x2100
#define GL_DECAL                          0x2101
#define GL_TEXTURE_ENV_MODE               0x2200
#define GL_TEXTURE_ENV_COLOR              0x2201
#define GL_TEXTURE_ENV                    0x2300
#define GL_EYE_LINEAR                     0x2400
#define GL_OBJECT_LINEAR                  0x2401
#define GL_SPHERE_MAP                     0x2402
#define GL_TEXTURE_GEN_MODE               0x2500
#define GL_OBJECT_PLANE                   0x2501
#define GL_EYE_PLANE                      0x2502
#define GL_CLAMP                          0x2900
#define GL_ALPHA4                         0x803B
#define GL_ALPHA8                         0x803C
#define GL_ALPHA12                        0x803D
#define GL_ALPHA16                        0x803E
#define GL_LUMINANCE4                     0x803F
#define GL_LUMINANCE8                     0x8040
#define GL_LUMINANCE12                    0x8041
#define GL_LUMINANCE16                    0x8042
#define GL_LUMINANCE4_ALPHA4              0x8043
#define GL_LUMINANCE6_ALPHA2              0x8044
#define GL_LUMINANCE8_ALPHA8              0x8045
#define GL_LUMINANCE12_ALPHA4             0x8046
#define GL_LUMINANCE12_ALPHA12            0x8047
#define GL_LUMINANCE16_ALPHA16            0x8048
#define GL_INTENSITY                      0x8049
#define GL_INTENSITY4                     0x804A
#define GL_INTENSITY8                     0x804B
#define GL_INTENSITY12                    0x804C
#define GL_INTENSITY16                    0x804D
#define GL_V2F                            0x2A20
#define GL_V3F                            0x2A21
#define GL_C4UB_V2F                       0x2A22
#define GL_C4UB_V3F                       0x2A23
#define GL_C3F_V3F                        0x2A24
#define GL_N3F_V3F                        0x2A25
#define GL_C4F_N3F_V3F                    0x2A26
#define GL_T2F_V3F                        0x2A27
#define GL_T4F_V4F                        0x2A28
#define GL_T2F_C4UB_V3F                   0x2A29
#define GL_T2F_C3F_V3F                    0x2A2A
#define GL_T2F_N3F_V3F                    0x2A2B
#define GL_T2F_C4F_N3F_V3F                0x2A2C
#define GL_T4F_C4F_N3F_V4F                0x2A2D
#define GL_CLIP_PLANE0                    0x3000
#define GL_CLIP_PLANE1                    0x3001
#define GL_CLIP_PLANE2                    0x3002
#define GL_CLIP_PLANE3                    0x3003
#define GL_CLIP_PLANE4                    0x3004
#define GL_CLIP_PLANE5                    0x3005
#define GL_LIGHT0                         0x4000
#define GL_LIGHT1                         0x4001
#define GL_LIGHT2                         0x4002
#define GL_LIGHT3                         0x4003
#define GL_LIGHT4                         0x4004
#define GL_LIGHT5                         0x4005
#define GL_LIGHT6                         0x4006
#define GL_LIGHT7                         0x4007
typedef void (APIENTRYP PFNGLDRAWARRAYSPROC) (GLenum mode_, GLint first_, GLsizei count_);
typedef void (APIENTRYP PFNGLDRAWELEMENTSPROC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_);
typedef void (APIENTRYP PFNGLGETPOINTERVPROC) (GLenum pname_, void **params_);
typedef void (APIENTRYP PFNGLPOLYGONOFFSETPROC) (GLfloat factor_, GLfloat units_);
typedef void (APIENTRYP PFNGLCOPYTEXIMAGE1DPROC) (GLenum target_, GLint level_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLint border_);
typedef void (APIENTRYP PFNGLCOPYTEXIMAGE2DPROC) (GLenum target_, GLint level_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLint border_);
typedef void (APIENTRYP PFNGLCOPYTEXSUBIMAGE1DPROC) (GLenum target_, GLint level_, GLint xoffset_, GLint x_, GLint y_, GLsizei width_);
typedef void (APIENTRYP PFNGLCOPYTEXSUBIMAGE2DPROC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
typedef void (APIENTRYP PFNGLTEXSUBIMAGE1DPROC) (GLenum target_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLenum type_, const void *pixels_);
typedef void (APIENTRYP PFNGLTEXSUBIMAGE2DPROC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *pixels_);
typedef void (APIENTRYP PFNGLBINDTEXTUREPROC) (GLenum target_, GLuint texture_);
typedef void (APIENTRYP PFNGLDELETETEXTURESPROC) (GLsizei n_, const GLuint *textures_);
typedef void (APIENTRYP PFNGLGENTEXTURESPROC) (GLsizei n_, GLuint *textures_);
typedef GLboolean (APIENTRYP PFNGLISTEXTUREPROC) (GLuint texture_);
typedef void (APIENTRYP PFNGLARRAYELEMENTPROC) (GLint i_);
typedef void (APIENTRYP PFNGLCOLORPOINTERPROC) (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
typedef void (APIENTRYP PFNGLDISABLECLIENTSTATEPROC) (GLenum array_);
typedef void (APIENTRYP PFNGLEDGEFLAGPOINTERPROC) (GLsizei stride_, const void *pointer_);
typedef void (APIENTRYP PFNGLENABLECLIENTSTATEPROC) (GLenum array_);
typedef void (APIENTRYP PFNGLINDEXPOINTERPROC) (GLenum type_, GLsizei stride_, const void *pointer_);
typedef void (APIENTRYP PFNGLINTERLEAVEDARRAYSPROC) (GLenum format_, GLsizei stride_, const void *pointer_);
typedef void (APIENTRYP PFNGLNORMALPOINTERPROC) (GLenum type_, GLsizei stride_, const void *pointer_);
typedef void (APIENTRYP PFNGLTEXCOORDPOINTERPROC) (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
typedef void (APIENTRYP PFNGLVERTEXPOINTERPROC) (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
typedef GLboolean (APIENTRYP PFNGLARETEXTURESRESIDENTPROC) (GLsizei n_, const GLuint *textures_, GLboolean *residences_);
typedef void (APIENTRYP PFNGLPRIORITIZETEXTURESPROC) (GLsizei n_, const GLuint *textures_, const GLfloat *priorities_);
typedef void (APIENTRYP PFNGLINDEXUBPROC) (GLubyte c_);
typedef void (APIENTRYP PFNGLINDEXUBVPROC) (const GLubyte *c_);
typedef void (APIENTRYP PFNGLPOPCLIENTATTRIBPROC) (void);
typedef void (APIENTRYP PFNGLPUSHCLIENTATTRIBPROC) (GLbitfield mask_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glDrawArrays (GLenum mode_, GLint first_, GLsizei count_);
GLAPI void APIENTRY glDrawElements (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_);
GLAPI void APIENTRY glGetPointerv (GLenum pname_, void **params_);
GLAPI void APIENTRY glPolygonOffset (GLfloat factor_, GLfloat units_);
GLAPI void APIENTRY glCopyTexImage1D (GLenum target_, GLint level_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLint border_);
GLAPI void APIENTRY glCopyTexImage2D (GLenum target_, GLint level_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLint border_);
GLAPI void APIENTRY glCopyTexSubImage1D (GLenum target_, GLint level_, GLint xoffset_, GLint x_, GLint y_, GLsizei width_);
GLAPI void APIENTRY glCopyTexSubImage2D (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
GLAPI void APIENTRY glTexSubImage1D (GLenum target_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLenum type_, const void *pixels_);
GLAPI void APIENTRY glTexSubImage2D (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *pixels_);
GLAPI void APIENTRY glBindTexture (GLenum target_, GLuint texture_);
GLAPI void APIENTRY glDeleteTextures (GLsizei n_, const GLuint *textures_);
GLAPI void APIENTRY glGenTextures (GLsizei n_, GLuint *textures_);
GLAPI GLboolean APIENTRY glIsTexture (GLuint texture_);
GLAPI void APIENTRY glArrayElement (GLint i_);
GLAPI void APIENTRY glColorPointer (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
GLAPI void APIENTRY glDisableClientState (GLenum array_);
GLAPI void APIENTRY glEdgeFlagPointer (GLsizei stride_, const void *pointer_);
GLAPI void APIENTRY glEnableClientState (GLenum array_);
GLAPI void APIENTRY glIndexPointer (GLenum type_, GLsizei stride_, const void *pointer_);
GLAPI void APIENTRY glInterleavedArrays (GLenum format_, GLsizei stride_, const void *pointer_);
GLAPI void APIENTRY glNormalPointer (GLenum type_, GLsizei stride_, const void *pointer_);
GLAPI void APIENTRY glTexCoordPointer (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
GLAPI void APIENTRY glVertexPointer (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
GLAPI GLboolean APIENTRY glAreTexturesResident (GLsizei n_, const GLuint *textures_, GLboolean *residences_);
GLAPI void APIENTRY glPrioritizeTextures (GLsizei n_, const GLuint *textures_, const GLfloat *priorities_);
GLAPI void APIENTRY glIndexub (GLubyte c_);
GLAPI void APIENTRY glIndexubv (const GLubyte *c_);
GLAPI void APIENTRY glPopClientAttrib (void);
GLAPI void APIENTRY glPushClientAttrib (GLbitfield mask_);
#endif
#endif /* GL_VERSION_1_1 */

#ifndef GL_VERSION_1_2
#define GL_VERSION_1_2 1
#define GL_UNSIGNED_BYTE_3_3_2            0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4         0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1         0x8034
#define GL_UNSIGNED_INT_8_8_8_8           0x8035
#define GL_UNSIGNED_INT_10_10_10_2        0x8036
#define GL_TEXTURE_BINDING_3D             0x806A
#define GL_PACK_SKIP_IMAGES               0x806B
#define GL_PACK_IMAGE_HEIGHT              0x806C
#define GL_UNPACK_SKIP_IMAGES             0x806D
#define GL_UNPACK_IMAGE_HEIGHT            0x806E
#define GL_TEXTURE_3D                     0x806F
#define GL_PROXY_TEXTURE_3D               0x8070
#define GL_TEXTURE_DEPTH                  0x8071
#define GL_TEXTURE_WRAP_R                 0x8072
#define GL_MAX_3D_TEXTURE_SIZE            0x8073
#define GL_UNSIGNED_BYTE_2_3_3_REV        0x8362
#define GL_UNSIGNED_SHORT_5_6_5           0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV       0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV     0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV     0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV       0x8367
#define GL_UNSIGNED_INT_2_10_10_10_REV    0x8368
#define GL_BGR                            0x80E0
#define GL_BGRA                           0x80E1
#define GL_MAX_ELEMENTS_VERTICES          0x80E8
#define GL_MAX_ELEMENTS_INDICES           0x80E9
#define GL_CLAMP_TO_EDGE                  0x812F
#define GL_TEXTURE_MIN_LOD                0x813A
#define GL_TEXTURE_MAX_LOD                0x813B
#define GL_TEXTURE_BASE_LEVEL             0x813C
#define GL_TEXTURE_MAX_LEVEL              0x813D
#define GL_SMOOTH_POINT_SIZE_RANGE        0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY  0x0B13
#define GL_SMOOTH_LINE_WIDTH_RANGE        0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY  0x0B23
#define GL_ALIASED_LINE_WIDTH_RANGE       0x846E
#define GL_RESCALE_NORMAL                 0x803A
#define GL_LIGHT_MODEL_COLOR_CONTROL      0x81F8
#define GL_SINGLE_COLOR                   0x81F9
#define GL_SEPARATE_SPECULAR_COLOR        0x81FA
#define GL_ALIASED_POINT_SIZE_RANGE       0x846D
typedef void (APIENTRYP PFNGLDRAWRANGEELEMENTSPROC) (GLenum mode_, GLuint start_, GLuint end_, GLsizei count_, GLenum type_, const void *indices_);
typedef void (APIENTRYP PFNGLTEXIMAGE3DPROC) (GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLenum format_, GLenum type_, const void *pixels_);
typedef void (APIENTRYP PFNGLTEXSUBIMAGE3DPROC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void *pixels_);
typedef void (APIENTRYP PFNGLCOPYTEXSUBIMAGE3DPROC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glDrawRangeElements (GLenum mode_, GLuint start_, GLuint end_, GLsizei count_, GLenum type_, const void *indices_);
GLAPI void APIENTRY glTexImage3D (GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLenum format_, GLenum type_, const void *pixels_);
GLAPI void APIENTRY glTexSubImage3D (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void *pixels_);
GLAPI void APIENTRY glCopyTexSubImage3D (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
#endif
#endif /* GL_VERSION_1_2 */

#ifndef GL_VERSION_1_3
#define GL_VERSION_1_3 1
#define GL_TEXTURE0                       0x84C0
#define GL_TEXTURE1                       0x84C1
#define GL_TEXTURE2                       0x84C2
#define GL_TEXTURE3                       0x84C3
#define GL_TEXTURE4                       0x84C4
#define GL_TEXTURE5                       0x84C5
#define GL_TEXTURE6                       0x84C6
#define GL_TEXTURE7                       0x84C7
#define GL_TEXTURE8                       0x84C8
#define GL_TEXTURE9                       0x84C9
#define GL_TEXTURE10                      0x84CA
#define GL_TEXTURE11                      0x84CB
#define GL_TEXTURE12                      0x84CC
#define GL_TEXTURE13                      0x84CD
#define GL_TEXTURE14                      0x84CE
#define GL_TEXTURE15                      0x84CF
#define GL_TEXTURE16                      0x84D0
#define GL_TEXTURE17                      0x84D1
#define GL_TEXTURE18                      0x84D2
#define GL_TEXTURE19                      0x84D3
#define GL_TEXTURE20                      0x84D4
#define GL_TEXTURE21                      0x84D5
#define GL_TEXTURE22                      0x84D6
#define GL_TEXTURE23                      0x84D7
#define GL_TEXTURE24                      0x84D8
#define GL_TEXTURE25                      0x84D9
#define GL_TEXTURE26                      0x84DA
#define GL_TEXTURE27                      0x84DB
#define GL_TEXTURE28                      0x84DC
#define GL_TEXTURE29                      0x84DD
#define GL_TEXTURE30                      0x84DE
#define GL_TEXTURE31                      0x84DF
#define GL_ACTIVE_TEXTURE                 0x84E0
#define GL_MULTISAMPLE                    0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE       0x809E
#define GL_SAMPLE_ALPHA_TO_ONE            0x809F
#define GL_SAMPLE_COVERAGE                0x80A0
#define GL_SAMPLE_BUFFERS                 0x80A8
#define GL_SAMPLES                        0x80A9
#define GL_SAMPLE_COVERAGE_VALUE          0x80AA
#define GL_SAMPLE_COVERAGE_INVERT         0x80AB
#define GL_TEXTURE_CUBE_MAP               0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP       0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X    0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X    0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y    0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y    0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z    0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z    0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP         0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE      0x851C
#define GL_COMPRESSED_RGB                 0x84ED
#define GL_COMPRESSED_RGBA                0x84EE
#define GL_TEXTURE_COMPRESSION_HINT       0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE  0x86A0
#define GL_TEXTURE_COMPRESSED             0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS     0x86A3
#define GL_CLAMP_TO_BORDER                0x812D
#define GL_CLIENT_ACTIVE_TEXTURE          0x84E1
#define GL_MAX_TEXTURE_UNITS              0x84E2
#define GL_TRANSPOSE_MODELVIEW_MATRIX     0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX    0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX       0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX         0x84E6
#define GL_MULTISAMPLE_BIT                0x20000000
#define GL_NORMAL_MAP                     0x8511
#define GL_REFLECTION_MAP                 0x8512
#define GL_COMPRESSED_ALPHA               0x84E9
#define GL_COMPRESSED_LUMINANCE           0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA     0x84EB
#define GL_COMPRESSED_INTENSITY           0x84EC
#define GL_COMBINE                        0x8570
#define GL_COMBINE_RGB                    0x8571
#define GL_COMBINE_ALPHA                  0x8572
#define GL_SOURCE0_RGB                    0x8580
#define GL_SOURCE1_RGB                    0x8581
#define GL_SOURCE2_RGB                    0x8582
#define GL_SOURCE0_ALPHA                  0x8588
#define GL_SOURCE1_ALPHA                  0x8589
#define GL_SOURCE2_ALPHA                  0x858A
#define GL_OPERAND0_RGB                   0x8590
#define GL_OPERAND1_RGB                   0x8591
#define GL_OPERAND2_RGB                   0x8592
#define GL_OPERAND0_ALPHA                 0x8598
#define GL_OPERAND1_ALPHA                 0x8599
#define GL_OPERAND2_ALPHA                 0x859A
#define GL_RGB_SCALE                      0x8573
#define GL_ADD_SIGNED                     0x8574
#define GL_INTERPOLATE                    0x8575
#define GL_SUBTRACT                       0x84E7
#define GL_CONSTANT                       0x8576
#define GL_PRIMARY_COLOR                  0x8577
#define GL_PREVIOUS                       0x8578
#define GL_DOT3_RGB                       0x86AE
#define GL_DOT3_RGBA                      0x86AF
typedef void (APIENTRYP PFNGLACTIVETEXTUREPROC) (GLenum texture_);
typedef void (APIENTRYP PFNGLSAMPLECOVERAGEPROC) (GLfloat value_, GLboolean invert_);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXIMAGE3DPROC) (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLsizei imageSize_, const void *data_);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXIMAGE2DPROC) (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLint border_, GLsizei imageSize_, const void *data_);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXIMAGE1DPROC) (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLint border_, GLsizei imageSize_, const void *data_);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLsizei imageSize_, const void *data_);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLsizei imageSize_, const void *data_);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) (GLenum target_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLsizei imageSize_, const void *data_);
typedef void (APIENTRYP PFNGLGETCOMPRESSEDTEXIMAGEPROC) (GLenum target_, GLint level_, void *img_);
typedef void (APIENTRYP PFNGLCLIENTACTIVETEXTUREPROC) (GLenum texture_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1DPROC) (GLenum target_, GLdouble s_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1DVPROC) (GLenum target_, const GLdouble *v_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1FPROC) (GLenum target_, GLfloat s_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1FVPROC) (GLenum target_, const GLfloat *v_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1IPROC) (GLenum target_, GLint s_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1IVPROC) (GLenum target_, const GLint *v_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1SPROC) (GLenum target_, GLshort s_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1SVPROC) (GLenum target_, const GLshort *v_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2DPROC) (GLenum target_, GLdouble s_, GLdouble t_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2DVPROC) (GLenum target_, const GLdouble *v_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2FPROC) (GLenum target_, GLfloat s_, GLfloat t_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2FVPROC) (GLenum target_, const GLfloat *v_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2IPROC) (GLenum target_, GLint s_, GLint t_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2IVPROC) (GLenum target_, const GLint *v_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2SPROC) (GLenum target_, GLshort s_, GLshort t_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2SVPROC) (GLenum target_, const GLshort *v_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3DPROC) (GLenum target_, GLdouble s_, GLdouble t_, GLdouble r_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3DVPROC) (GLenum target_, const GLdouble *v_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3FPROC) (GLenum target_, GLfloat s_, GLfloat t_, GLfloat r_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3FVPROC) (GLenum target_, const GLfloat *v_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3IPROC) (GLenum target_, GLint s_, GLint t_, GLint r_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3IVPROC) (GLenum target_, const GLint *v_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3SPROC) (GLenum target_, GLshort s_, GLshort t_, GLshort r_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3SVPROC) (GLenum target_, const GLshort *v_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4DPROC) (GLenum target_, GLdouble s_, GLdouble t_, GLdouble r_, GLdouble q_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4DVPROC) (GLenum target_, const GLdouble *v_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4FPROC) (GLenum target_, GLfloat s_, GLfloat t_, GLfloat r_, GLfloat q_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4FVPROC) (GLenum target_, const GLfloat *v_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4IPROC) (GLenum target_, GLint s_, GLint t_, GLint r_, GLint q_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4IVPROC) (GLenum target_, const GLint *v_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4SPROC) (GLenum target_, GLshort s_, GLshort t_, GLshort r_, GLshort q_);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4SVPROC) (GLenum target_, const GLshort *v_);
typedef void (APIENTRYP PFNGLLOADTRANSPOSEMATRIXFPROC) (const GLfloat *m_);
typedef void (APIENTRYP PFNGLLOADTRANSPOSEMATRIXDPROC) (const GLdouble *m_);
typedef void (APIENTRYP PFNGLMULTTRANSPOSEMATRIXFPROC) (const GLfloat *m_);
typedef void (APIENTRYP PFNGLMULTTRANSPOSEMATRIXDPROC) (const GLdouble *m_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glActiveTexture (GLenum texture_);
GLAPI void APIENTRY glSampleCoverage (GLfloat value_, GLboolean invert_);
GLAPI void APIENTRY glCompressedTexImage3D (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLsizei imageSize_, const void *data_);
GLAPI void APIENTRY glCompressedTexImage2D (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLint border_, GLsizei imageSize_, const void *data_);
GLAPI void APIENTRY glCompressedTexImage1D (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLint border_, GLsizei imageSize_, const void *data_);
GLAPI void APIENTRY glCompressedTexSubImage3D (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLsizei imageSize_, const void *data_);
GLAPI void APIENTRY glCompressedTexSubImage2D (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLsizei imageSize_, const void *data_);
GLAPI void APIENTRY glCompressedTexSubImage1D (GLenum target_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLsizei imageSize_, const void *data_);
GLAPI void APIENTRY glGetCompressedTexImage (GLenum target_, GLint level_, void *img_);
GLAPI void APIENTRY glClientActiveTexture (GLenum texture_);
GLAPI void APIENTRY glMultiTexCoord1d (GLenum target_, GLdouble s_);
GLAPI void APIENTRY glMultiTexCoord1dv (GLenum target_, const GLdouble *v_);
GLAPI void APIENTRY glMultiTexCoord1f (GLenum target_, GLfloat s_);
GLAPI void APIENTRY glMultiTexCoord1fv (GLenum target_, const GLfloat *v_);
GLAPI void APIENTRY glMultiTexCoord1i (GLenum target_, GLint s_);
GLAPI void APIENTRY glMultiTexCoord1iv (GLenum target_, const GLint *v_);
GLAPI void APIENTRY glMultiTexCoord1s (GLenum target_, GLshort s_);
GLAPI void APIENTRY glMultiTexCoord1sv (GLenum target_, const GLshort *v_);
GLAPI void APIENTRY glMultiTexCoord2d (GLenum target_, GLdouble s_, GLdouble t_);
GLAPI void APIENTRY glMultiTexCoord2dv (GLenum target_, const GLdouble *v_);
GLAPI void APIENTRY glMultiTexCoord2f (GLenum target_, GLfloat s_, GLfloat t_);
GLAPI void APIENTRY glMultiTexCoord2fv (GLenum target_, const GLfloat *v_);
GLAPI void APIENTRY glMultiTexCoord2i (GLenum target_, GLint s_, GLint t_);
GLAPI void APIENTRY glMultiTexCoord2iv (GLenum target_, const GLint *v_);
GLAPI void APIENTRY glMultiTexCoord2s (GLenum target_, GLshort s_, GLshort t_);
GLAPI void APIENTRY glMultiTexCoord2sv (GLenum target_, const GLshort *v_);
GLAPI void APIENTRY glMultiTexCoord3d (GLenum target_, GLdouble s_, GLdouble t_, GLdouble r_);
GLAPI void APIENTRY glMultiTexCoord3dv (GLenum target_, const GLdouble *v_);
GLAPI void APIENTRY glMultiTexCoord3f (GLenum target_, GLfloat s_, GLfloat t_, GLfloat r_);
GLAPI void APIENTRY glMultiTexCoord3fv (GLenum target_, const GLfloat *v_);
GLAPI void APIENTRY glMultiTexCoord3i (GLenum target_, GLint s_, GLint t_, GLint r_);
GLAPI void APIENTRY glMultiTexCoord3iv (GLenum target_, const GLint *v_);
GLAPI void APIENTRY glMultiTexCoord3s (GLenum target_, GLshort s_, GLshort t_, GLshort r_);
GLAPI void APIENTRY glMultiTexCoord3sv (GLenum target_, const GLshort *v_);
GLAPI void APIENTRY glMultiTexCoord4d (GLenum target_, GLdouble s_, GLdouble t_, GLdouble r_, GLdouble q_);
GLAPI void APIENTRY glMultiTexCoord4dv (GLenum target_, const GLdouble *v_);
GLAPI void APIENTRY glMultiTexCoord4f (GLenum target_, GLfloat s_, GLfloat t_, GLfloat r_, GLfloat q_);
GLAPI void APIENTRY glMultiTexCoord4fv (GLenum target_, const GLfloat *v_);
GLAPI void APIENTRY glMultiTexCoord4i (GLenum target_, GLint s_, GLint t_, GLint r_, GLint q_);
GLAPI void APIENTRY glMultiTexCoord4iv (GLenum target_, const GLint *v_);
GLAPI void APIENTRY glMultiTexCoord4s (GLenum target_, GLshort s_, GLshort t_, GLshort r_, GLshort q_);
GLAPI void APIENTRY glMultiTexCoord4sv (GLenum target_, const GLshort *v_);
GLAPI void APIENTRY glLoadTransposeMatrixf (const GLfloat *m_);
GLAPI void APIENTRY glLoadTransposeMatrixd (const GLdouble *m_);
GLAPI void APIENTRY glMultTransposeMatrixf (const GLfloat *m_);
GLAPI void APIENTRY glMultTransposeMatrixd (const GLdouble *m_);
#endif
#endif /* GL_VERSION_1_3 */

#ifndef GL_VERSION_1_4
#define GL_VERSION_1_4 1
#define GL_BLEND_DST_RGB                  0x80C8
#define GL_BLEND_SRC_RGB                  0x80C9
#define GL_BLEND_DST_ALPHA                0x80CA
#define GL_BLEND_SRC_ALPHA                0x80CB
#define GL_POINT_FADE_THRESHOLD_SIZE      0x8128
#define GL_DEPTH_COMPONENT16              0x81A5
#define GL_DEPTH_COMPONENT24              0x81A6
#define GL_DEPTH_COMPONENT32              0x81A7
#define GL_MIRRORED_REPEAT                0x8370
#define GL_MAX_TEXTURE_LOD_BIAS           0x84FD
#define GL_TEXTURE_LOD_BIAS               0x8501
#define GL_INCR_WRAP                      0x8507
#define GL_DECR_WRAP                      0x8508
#define GL_TEXTURE_DEPTH_SIZE             0x884A
#define GL_TEXTURE_COMPARE_MODE           0x884C
#define GL_TEXTURE_COMPARE_FUNC           0x884D
#define GL_POINT_SIZE_MIN                 0x8126
#define GL_POINT_SIZE_MAX                 0x8127
#define GL_POINT_DISTANCE_ATTENUATION     0x8129
#define GL_GENERATE_MIPMAP                0x8191
#define GL_GENERATE_MIPMAP_HINT           0x8192
#define GL_FOG_COORDINATE_SOURCE          0x8450
#define GL_FOG_COORDINATE                 0x8451
#define GL_FRAGMENT_DEPTH                 0x8452
#define GL_CURRENT_FOG_COORDINATE         0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE      0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE    0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER   0x8456
#define GL_FOG_COORDINATE_ARRAY           0x8457
#define GL_COLOR_SUM                      0x8458
#define GL_CURRENT_SECONDARY_COLOR        0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE     0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE     0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE   0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER  0x845D
#define GL_SECONDARY_COLOR_ARRAY          0x845E
#define GL_TEXTURE_FILTER_CONTROL         0x8500
#define GL_DEPTH_TEXTURE_MODE             0x884B
#define GL_COMPARE_R_TO_TEXTURE           0x884E
#define GL_FUNC_ADD                       0x8006
#define GL_FUNC_SUBTRACT                  0x800A
#define GL_FUNC_REVERSE_SUBTRACT          0x800B
#define GL_MIN                            0x8007
#define GL_MAX                            0x8008
#define GL_CONSTANT_COLOR                 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR       0x8002
#define GL_CONSTANT_ALPHA                 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA       0x8004
typedef void (APIENTRYP PFNGLBLENDFUNCSEPARATEPROC) (GLenum sfactorRGB_, GLenum dfactorRGB_, GLenum sfactorAlpha_, GLenum dfactorAlpha_);
typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSPROC) (GLenum mode_, const GLint *first_, const GLsizei *count_, GLsizei drawcount_);
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSPROC) (GLenum mode_, const GLsizei *count_, GLenum type_, const void *const*indices_, GLsizei drawcount_);
typedef void (APIENTRYP PFNGLPOINTPARAMETERFPROC) (GLenum pname_, GLfloat param_);
typedef void (APIENTRYP PFNGLPOINTPARAMETERFVPROC) (GLenum pname_, const GLfloat *params_);
typedef void (APIENTRYP PFNGLPOINTPARAMETERIPROC) (GLenum pname_, GLint param_);
typedef void (APIENTRYP PFNGLPOINTPARAMETERIVPROC) (GLenum pname_, const GLint *params_);
typedef void (APIENTRYP PFNGLFOGCOORDFPROC) (GLfloat coord_);
typedef void (APIENTRYP PFNGLFOGCOORDFVPROC) (const GLfloat *coord_);
typedef void (APIENTRYP PFNGLFOGCOORDDPROC) (GLdouble coord_);
typedef void (APIENTRYP PFNGLFOGCOORDDVPROC) (const GLdouble *coord_);
typedef void (APIENTRYP PFNGLFOGCOORDPOINTERPROC) (GLenum type_, GLsizei stride_, const void *pointer_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3BPROC) (GLbyte red_, GLbyte green_, GLbyte blue_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3BVPROC) (const GLbyte *v_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3DPROC) (GLdouble red_, GLdouble green_, GLdouble blue_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3FPROC) (GLfloat red_, GLfloat green_, GLfloat blue_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3IPROC) (GLint red_, GLint green_, GLint blue_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3SPROC) (GLshort red_, GLshort green_, GLshort blue_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3UBPROC) (GLubyte red_, GLubyte green_, GLubyte blue_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3UBVPROC) (const GLubyte *v_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3UIPROC) (GLuint red_, GLuint green_, GLuint blue_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3UIVPROC) (const GLuint *v_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3USPROC) (GLushort red_, GLushort green_, GLushort blue_);
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3USVPROC) (const GLushort *v_);
typedef void (APIENTRYP PFNGLSECONDARYCOLORPOINTERPROC) (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
typedef void (APIENTRYP PFNGLWINDOWPOS2DPROC) (GLdouble x_, GLdouble y_);
typedef void (APIENTRYP PFNGLWINDOWPOS2DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLWINDOWPOS2FPROC) (GLfloat x_, GLfloat y_);
typedef void (APIENTRYP PFNGLWINDOWPOS2FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLWINDOWPOS2IPROC) (GLint x_, GLint y_);
typedef void (APIENTRYP PFNGLWINDOWPOS2IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLWINDOWPOS2SPROC) (GLshort x_, GLshort y_);
typedef void (APIENTRYP PFNGLWINDOWPOS2SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLWINDOWPOS3DPROC) (GLdouble x_, GLdouble y_, GLdouble z_);
typedef void (APIENTRYP PFNGLWINDOWPOS3DVPROC) (const GLdouble *v_);
typedef void (APIENTRYP PFNGLWINDOWPOS3FPROC) (GLfloat x_, GLfloat y_, GLfloat z_);
typedef void (APIENTRYP PFNGLWINDOWPOS3FVPROC) (const GLfloat *v_);
typedef void (APIENTRYP PFNGLWINDOWPOS3IPROC) (GLint x_, GLint y_, GLint z_);
typedef void (APIENTRYP PFNGLWINDOWPOS3IVPROC) (const GLint *v_);
typedef void (APIENTRYP PFNGLWINDOWPOS3SPROC) (GLshort x_, GLshort y_, GLshort z_);
typedef void (APIENTRYP PFNGLWINDOWPOS3SVPROC) (const GLshort *v_);
typedef void (APIENTRYP PFNGLBLENDCOLORPROC) (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_);
typedef void (APIENTRYP PFNGLBLENDEQUATIONPROC) (GLenum mode_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glBlendFuncSeparate (GLenum sfactorRGB_, GLenum dfactorRGB_, GLenum sfactorAlpha_, GLenum dfactorAlpha_);
GLAPI void APIENTRY glMultiDrawArrays (GLenum mode_, const GLint *first_, const GLsizei *count_, GLsizei drawcount_);
GLAPI void APIENTRY glMultiDrawElements (GLenum mode_, const GLsizei *count_, GLenum type_, const void *const*indices_, GLsizei drawcount_);
GLAPI void APIENTRY glPointParameterf (GLenum pname_, GLfloat param_);
GLAPI void APIENTRY glPointParameterfv (GLenum pname_, const GLfloat *params_);
GLAPI void APIENTRY glPointParameteri (GLenum pname_, GLint param_);
GLAPI void APIENTRY glPointParameteriv (GLenum pname_, const GLint *params_);
GLAPI void APIENTRY glFogCoordf (GLfloat coord_);
GLAPI void APIENTRY glFogCoordfv (const GLfloat *coord_);
GLAPI void APIENTRY glFogCoordd (GLdouble coord_);
GLAPI void APIENTRY glFogCoorddv (const GLdouble *coord_);
GLAPI void APIENTRY glFogCoordPointer (GLenum type_, GLsizei stride_, const void *pointer_);
GLAPI void APIENTRY glSecondaryColor3b (GLbyte red_, GLbyte green_, GLbyte blue_);
GLAPI void APIENTRY glSecondaryColor3bv (const GLbyte *v_);
GLAPI void APIENTRY glSecondaryColor3d (GLdouble red_, GLdouble green_, GLdouble blue_);
GLAPI void APIENTRY glSecondaryColor3dv (const GLdouble *v_);
GLAPI void APIENTRY glSecondaryColor3f (GLfloat red_, GLfloat green_, GLfloat blue_);
GLAPI void APIENTRY glSecondaryColor3fv (const GLfloat *v_);
GLAPI void APIENTRY glSecondaryColor3i (GLint red_, GLint green_, GLint blue_);
GLAPI void APIENTRY glSecondaryColor3iv (const GLint *v_);
GLAPI void APIENTRY glSecondaryColor3s (GLshort red_, GLshort green_, GLshort blue_);
GLAPI void APIENTRY glSecondaryColor3sv (const GLshort *v_);
GLAPI void APIENTRY glSecondaryColor3ub (GLubyte red_, GLubyte green_, GLubyte blue_);
GLAPI void APIENTRY glSecondaryColor3ubv (const GLubyte *v_);
GLAPI void APIENTRY glSecondaryColor3ui (GLuint red_, GLuint green_, GLuint blue_);
GLAPI void APIENTRY glSecondaryColor3uiv (const GLuint *v_);
GLAPI void APIENTRY glSecondaryColor3us (GLushort red_, GLushort green_, GLushort blue_);
GLAPI void APIENTRY glSecondaryColor3usv (const GLushort *v_);
GLAPI void APIENTRY glSecondaryColorPointer (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
GLAPI void APIENTRY glWindowPos2d (GLdouble x_, GLdouble y_);
GLAPI void APIENTRY glWindowPos2dv (const GLdouble *v_);
GLAPI void APIENTRY glWindowPos2f (GLfloat x_, GLfloat y_);
GLAPI void APIENTRY glWindowPos2fv (const GLfloat *v_);
GLAPI void APIENTRY glWindowPos2i (GLint x_, GLint y_);
GLAPI void APIENTRY glWindowPos2iv (const GLint *v_);
GLAPI void APIENTRY glWindowPos2s (GLshort x_, GLshort y_);
GLAPI void APIENTRY glWindowPos2sv (const GLshort *v_);
GLAPI void APIENTRY glWindowPos3d (GLdouble x_, GLdouble y_, GLdouble z_);
GLAPI void APIENTRY glWindowPos3dv (const GLdouble *v_);
GLAPI void APIENTRY glWindowPos3f (GLfloat x_, GLfloat y_, GLfloat z_);
GLAPI void APIENTRY glWindowPos3fv (const GLfloat *v_);
GLAPI void APIENTRY glWindowPos3i (GLint x_, GLint y_, GLint z_);
GLAPI void APIENTRY glWindowPos3iv (const GLint *v_);
GLAPI void APIENTRY glWindowPos3s (GLshort x_, GLshort y_, GLshort z_);
GLAPI void APIENTRY glWindowPos3sv (const GLshort *v_);
GLAPI void APIENTRY glBlendColor (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_);
GLAPI void APIENTRY glBlendEquation (GLenum mode_);
#endif
#endif /* GL_VERSION_1_4 */

#ifndef GL_VERSION_1_5
#define GL_VERSION_1_5 1
#include <stddef.h>
typedef ptrdiff_t GLsizeiptr;
typedef ptrdiff_t GLintptr;
#define GL_BUFFER_SIZE                    0x8764
#define GL_BUFFER_USAGE                   0x8765
#define GL_QUERY_COUNTER_BITS             0x8864
#define GL_CURRENT_QUERY                  0x8865
#define GL_QUERY_RESULT                   0x8866
#define GL_QUERY_RESULT_AVAILABLE         0x8867
#define GL_ARRAY_BUFFER                   0x8892
#define GL_ELEMENT_ARRAY_BUFFER           0x8893
#define GL_ARRAY_BUFFER_BINDING           0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING   0x8895
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_READ_ONLY                      0x88B8
#define GL_WRITE_ONLY                     0x88B9
#define GL_READ_WRITE                     0x88BA
#define GL_BUFFER_ACCESS                  0x88BB
#define GL_BUFFER_MAPPED                  0x88BC
#define GL_BUFFER_MAP_POINTER             0x88BD
#define GL_STREAM_DRAW                    0x88E0
#define GL_STREAM_READ                    0x88E1
#define GL_STREAM_COPY                    0x88E2
#define GL_STATIC_DRAW                    0x88E4
#define GL_STATIC_READ                    0x88E5
#define GL_STATIC_COPY                    0x88E6
#define GL_DYNAMIC_DRAW                   0x88E8
#define GL_DYNAMIC_READ                   0x88E9
#define GL_DYNAMIC_COPY                   0x88EA
#define GL_SAMPLES_PASSED                 0x8914
#define GL_SRC1_ALPHA                     0x8589
#define GL_VERTEX_ARRAY_BUFFER_BINDING    0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING    0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING     0x8898
#define GL_INDEX_ARRAY_BUFFER_BINDING     0x8899
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING 0x889A
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING 0x889B
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING 0x889C
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING 0x889D
#define GL_WEIGHT_ARRAY_BUFFER_BINDING    0x889E
#define GL_FOG_COORD_SRC                  0x8450
#define GL_FOG_COORD                      0x8451
#define GL_CURRENT_FOG_COORD              0x8453
#define GL_FOG_COORD_ARRAY_TYPE           0x8454
#define GL_FOG_COORD_ARRAY_STRIDE         0x8455
#define GL_FOG_COORD_ARRAY_POINTER        0x8456
#define GL_FOG_COORD_ARRAY                0x8457
#define GL_FOG_COORD_ARRAY_BUFFER_BINDING 0x889D
#define GL_SRC0_RGB                       0x8580
#define GL_SRC1_RGB                       0x8581
#define GL_SRC2_RGB                       0x8582
#define GL_SRC0_ALPHA                     0x8588
#define GL_SRC2_ALPHA                     0x858A
typedef void (APIENTRYP PFNGLGENQUERIESPROC) (GLsizei n_, GLuint *ids_);
typedef void (APIENTRYP PFNGLDELETEQUERIESPROC) (GLsizei n_, const GLuint *ids_);
typedef GLboolean (APIENTRYP PFNGLISQUERYPROC) (GLuint id_);
typedef void (APIENTRYP PFNGLBEGINQUERYPROC) (GLenum target_, GLuint id_);
typedef void (APIENTRYP PFNGLENDQUERYPROC) (GLenum target_);
typedef void (APIENTRYP PFNGLGETQUERYIVPROC) (GLenum target_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETQUERYOBJECTIVPROC) (GLuint id_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETQUERYOBJECTUIVPROC) (GLuint id_, GLenum pname_, GLuint *params_);
typedef void (APIENTRYP PFNGLBINDBUFFERPROC) (GLenum target_, GLuint buffer_);
typedef void (APIENTRYP PFNGLDELETEBUFFERSPROC) (GLsizei n_, const GLuint *buffers_);
typedef void (APIENTRYP PFNGLGENBUFFERSPROC) (GLsizei n_, GLuint *buffers_);
typedef GLboolean (APIENTRYP PFNGLISBUFFERPROC) (GLuint buffer_);
typedef void (APIENTRYP PFNGLBUFFERDATAPROC) (GLenum target_, GLsizeiptr size_, const void *data_, GLenum usage_);
typedef void (APIENTRYP PFNGLBUFFERSUBDATAPROC) (GLenum target_, GLintptr offset_, GLsizeiptr size_, const void *data_);
typedef void (APIENTRYP PFNGLGETBUFFERSUBDATAPROC) (GLenum target_, GLintptr offset_, GLsizeiptr size_, void *data_);
typedef void *(APIENTRYP PFNGLMAPBUFFERPROC) (GLenum target_, GLenum access_);
typedef GLboolean (APIENTRYP PFNGLUNMAPBUFFERPROC) (GLenum target_);
typedef void (APIENTRYP PFNGLGETBUFFERPARAMETERIVPROC) (GLenum target_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETBUFFERPOINTERVPROC) (GLenum target_, GLenum pname_, void **params_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glGenQueries (GLsizei n_, GLuint *ids_);
GLAPI void APIENTRY glDeleteQueries (GLsizei n_, const GLuint *ids_);
GLAPI GLboolean APIENTRY glIsQuery (GLuint id_);
GLAPI void APIENTRY glBeginQuery (GLenum target_, GLuint id_);
GLAPI void APIENTRY glEndQuery (GLenum target_);
GLAPI void APIENTRY glGetQueryiv (GLenum target_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetQueryObjectiv (GLuint id_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetQueryObjectuiv (GLuint id_, GLenum pname_, GLuint *params_);
GLAPI void APIENTRY glBindBuffer (GLenum target_, GLuint buffer_);
GLAPI void APIENTRY glDeleteBuffers (GLsizei n_, const GLuint *buffers_);
GLAPI void APIENTRY glGenBuffers (GLsizei n_, GLuint *buffers_);
GLAPI GLboolean APIENTRY glIsBuffer (GLuint buffer_);
GLAPI void APIENTRY glBufferData (GLenum target_, GLsizeiptr size_, const void *data_, GLenum usage_);
GLAPI void APIENTRY glBufferSubData (GLenum target_, GLintptr offset_, GLsizeiptr size_, const void *data_);
GLAPI void APIENTRY glGetBufferSubData (GLenum target_, GLintptr offset_, GLsizeiptr size_, void *data_);
GLAPI void *APIENTRY glMapBuffer (GLenum target_, GLenum access_);
GLAPI GLboolean APIENTRY glUnmapBuffer (GLenum target_);
GLAPI void APIENTRY glGetBufferParameteriv (GLenum target_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetBufferPointerv (GLenum target_, GLenum pname_, void **params_);
#endif
#endif /* GL_VERSION_1_5 */

#ifndef GL_VERSION_2_0
#define GL_VERSION_2_0 1
typedef char GLchar;
#define GL_BLEND_EQUATION_RGB             0x8009
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED    0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE       0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE     0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE       0x8625
#define GL_CURRENT_VERTEX_ATTRIB          0x8626
#define GL_VERTEX_PROGRAM_POINT_SIZE      0x8642
#define GL_VERTEX_ATTRIB_ARRAY_POINTER    0x8645
#define GL_STENCIL_BACK_FUNC              0x8800
#define GL_STENCIL_BACK_FAIL              0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL   0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS   0x8803
#define GL_MAX_DRAW_BUFFERS               0x8824
#define GL_DRAW_BUFFER0                   0x8825
#define GL_DRAW_BUFFER1                   0x8826
#define GL_DRAW_BUFFER2                   0x8827
#define GL_DRAW_BUFFER3                   0x8828
#define GL_DRAW_BUFFER4                   0x8829
#define GL_DRAW_BUFFER5                   0x882A
#define GL_DRAW_BUFFER6                   0x882B
#define GL_DRAW_BUFFER7                   0x882C
#define GL_DRAW_BUFFER8                   0x882D
#define GL_DRAW_BUFFER9                   0x882E
#define GL_DRAW_BUFFER10                  0x882F
#define GL_DRAW_BUFFER11                  0x8830
#define GL_DRAW_BUFFER12                  0x8831
#define GL_DRAW_BUFFER13                  0x8832
#define GL_DRAW_BUFFER14                  0x8833
#define GL_DRAW_BUFFER15                  0x8834
#define GL_BLEND_EQUATION_ALPHA           0x883D
#define GL_MAX_VERTEX_ATTRIBS             0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#define GL_MAX_TEXTURE_IMAGE_UNITS        0x8872
#define GL_FRAGMENT_SHADER                0x8B30
#define GL_VERTEX_SHADER                  0x8B31
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS  0x8B4A
#define GL_MAX_VARYING_FLOATS             0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_SHADER_TYPE                    0x8B4F
#define GL_FLOAT_VEC2                     0x8B50
#define GL_FLOAT_VEC3                     0x8B51
#define GL_FLOAT_VEC4                     0x8B52
#define GL_INT_VEC2                       0x8B53
#define GL_INT_VEC3                       0x8B54
#define GL_INT_VEC4                       0x8B55
#define GL_BOOL                           0x8B56
#define GL_BOOL_VEC2                      0x8B57
#define GL_BOOL_VEC3                      0x8B58
#define GL_BOOL_VEC4                      0x8B59
#define GL_FLOAT_MAT2                     0x8B5A
#define GL_FLOAT_MAT3                     0x8B5B
#define GL_FLOAT_MAT4                     0x8B5C
#define GL_SAMPLER_1D                     0x8B5D
#define GL_SAMPLER_2D                     0x8B5E
#define GL_SAMPLER_3D                     0x8B5F
#define GL_SAMPLER_CUBE                   0x8B60
#define GL_SAMPLER_1D_SHADOW              0x8B61
#define GL_SAMPLER_2D_SHADOW              0x8B62
#define GL_DELETE_STATUS                  0x8B80
#define GL_COMPILE_STATUS                 0x8B81
#define GL_LINK_STATUS                    0x8B82
#define GL_VALIDATE_STATUS                0x8B83
#define GL_INFO_LOG_LENGTH                0x8B84
#define GL_ATTACHED_SHADERS               0x8B85
#define GL_ACTIVE_UNIFORMS                0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH      0x8B87
#define GL_SHADER_SOURCE_LENGTH           0x8B88
#define GL_ACTIVE_ATTRIBUTES              0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH    0x8B8A
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#define GL_SHADING_LANGUAGE_VERSION       0x8B8C
#define GL_CURRENT_PROGRAM                0x8B8D
#define GL_POINT_SPRITE_COORD_ORIGIN      0x8CA0
#define GL_LOWER_LEFT                     0x8CA1
#define GL_UPPER_LEFT                     0x8CA2
#define GL_STENCIL_BACK_REF               0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK        0x8CA4
#define GL_STENCIL_BACK_WRITEMASK         0x8CA5
#define GL_VERTEX_PROGRAM_TWO_SIDE        0x8643
#define GL_POINT_SPRITE                   0x8861
#define GL_COORD_REPLACE                  0x8862
#define GL_MAX_TEXTURE_COORDS             0x8871
typedef void (APIENTRYP PFNGLBLENDEQUATIONSEPARATEPROC) (GLenum modeRGB_, GLenum modeAlpha_);
typedef void (APIENTRYP PFNGLDRAWBUFFERSPROC) (GLsizei n_, const GLenum *bufs_);
typedef void (APIENTRYP PFNGLSTENCILOPSEPARATEPROC) (GLenum face_, GLenum sfail_, GLenum dpfail_, GLenum dppass_);
typedef void (APIENTRYP PFNGLSTENCILFUNCSEPARATEPROC) (GLenum face_, GLenum func_, GLint ref_, GLuint mask_);
typedef void (APIENTRYP PFNGLSTENCILMASKSEPARATEPROC) (GLenum face_, GLuint mask_);
typedef void (APIENTRYP PFNGLATTACHSHADERPROC) (GLuint program_, GLuint shader_);
typedef void (APIENTRYP PFNGLBINDATTRIBLOCATIONPROC) (GLuint program_, GLuint index_, const GLchar *name_);
typedef void (APIENTRYP PFNGLCOMPILESHADERPROC) (GLuint shader_);
typedef GLuint (APIENTRYP PFNGLCREATEPROGRAMPROC) (void);
typedef GLuint (APIENTRYP PFNGLCREATESHADERPROC) (GLenum type_);
typedef void (APIENTRYP PFNGLDELETEPROGRAMPROC) (GLuint program_);
typedef void (APIENTRYP PFNGLDELETESHADERPROC) (GLuint shader_);
typedef void (APIENTRYP PFNGLDETACHSHADERPROC) (GLuint program_, GLuint shader_);
typedef void (APIENTRYP PFNGLDISABLEVERTEXATTRIBARRAYPROC) (GLuint index_);
typedef void (APIENTRYP PFNGLENABLEVERTEXATTRIBARRAYPROC) (GLuint index_);
typedef void (APIENTRYP PFNGLGETACTIVEATTRIBPROC) (GLuint program_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLint *size_, GLenum *type_, GLchar *name_);
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMPROC) (GLuint program_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLint *size_, GLenum *type_, GLchar *name_);
typedef void (APIENTRYP PFNGLGETATTACHEDSHADERSPROC) (GLuint program_, GLsizei maxCount_, GLsizei *count_, GLuint *shaders_);
typedef GLint (APIENTRYP PFNGLGETATTRIBLOCATIONPROC) (GLuint program_, const GLchar *name_);
typedef void (APIENTRYP PFNGLGETPROGRAMIVPROC) (GLuint program_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETPROGRAMINFOLOGPROC) (GLuint program_, GLsizei bufSize_, GLsizei *length_, GLchar *infoLog_);
typedef void (APIENTRYP PFNGLGETSHADERIVPROC) (GLuint shader_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETSHADERINFOLOGPROC) (GLuint shader_, GLsizei bufSize_, GLsizei *length_, GLchar *infoLog_);
typedef void (APIENTRYP PFNGLGETSHADERSOURCEPROC) (GLuint shader_, GLsizei bufSize_, GLsizei *length_, GLchar *source_);
typedef GLint (APIENTRYP PFNGLGETUNIFORMLOCATIONPROC) (GLuint program_, const GLchar *name_);
typedef void (APIENTRYP PFNGLGETUNIFORMFVPROC) (GLuint program_, GLint location_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETUNIFORMIVPROC) (GLuint program_, GLint location_, GLint *params_);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBDVPROC) (GLuint index_, GLenum pname_, GLdouble *params_);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBFVPROC) (GLuint index_, GLenum pname_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBIVPROC) (GLuint index_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBPOINTERVPROC) (GLuint index_, GLenum pname_, void **pointer_);
typedef GLboolean (APIENTRYP PFNGLISPROGRAMPROC) (GLuint program_);
typedef GLboolean (APIENTRYP PFNGLISSHADERPROC) (GLuint shader_);
typedef void (APIENTRYP PFNGLLINKPROGRAMPROC) (GLuint program_);
typedef void (APIENTRYP PFNGLSHADERSOURCEPROC) (GLuint shader_, GLsizei count_, const GLchar *const*string_, const GLint *length_);
typedef void (APIENTRYP PFNGLUSEPROGRAMPROC) (GLuint program_);
typedef void (APIENTRYP PFNGLUNIFORM1FPROC) (GLint location_, GLfloat v0_);
typedef void (APIENTRYP PFNGLUNIFORM2FPROC) (GLint location_, GLfloat v0_, GLfloat v1_);
typedef void (APIENTRYP PFNGLUNIFORM3FPROC) (GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_);
typedef void (APIENTRYP PFNGLUNIFORM4FPROC) (GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_, GLfloat v3_);
typedef void (APIENTRYP PFNGLUNIFORM1IPROC) (GLint location_, GLint v0_);
typedef void (APIENTRYP PFNGLUNIFORM2IPROC) (GLint location_, GLint v0_, GLint v1_);
typedef void (APIENTRYP PFNGLUNIFORM3IPROC) (GLint location_, GLint v0_, GLint v1_, GLint v2_);
typedef void (APIENTRYP PFNGLUNIFORM4IPROC) (GLint location_, GLint v0_, GLint v1_, GLint v2_, GLint v3_);
typedef void (APIENTRYP PFNGLUNIFORM1FVPROC) (GLint location_, GLsizei count_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLUNIFORM2FVPROC) (GLint location_, GLsizei count_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLUNIFORM3FVPROC) (GLint location_, GLsizei count_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLUNIFORM4FVPROC) (GLint location_, GLsizei count_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLUNIFORM1IVPROC) (GLint location_, GLsizei count_, const GLint *value_);
typedef void (APIENTRYP PFNGLUNIFORM2IVPROC) (GLint location_, GLsizei count_, const GLint *value_);
typedef void (APIENTRYP PFNGLUNIFORM3IVPROC) (GLint location_, GLsizei count_, const GLint *value_);
typedef void (APIENTRYP PFNGLUNIFORM4IVPROC) (GLint location_, GLsizei count_, const GLint *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2FVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3FVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4FVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLVALIDATEPROGRAMPROC) (GLuint program_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB1DPROC) (GLuint index_, GLdouble x_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB1DVPROC) (GLuint index_, const GLdouble *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB1FPROC) (GLuint index_, GLfloat x_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB1FVPROC) (GLuint index_, const GLfloat *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB1SPROC) (GLuint index_, GLshort x_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB1SVPROC) (GLuint index_, const GLshort *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB2DPROC) (GLuint index_, GLdouble x_, GLdouble y_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB2DVPROC) (GLuint index_, const GLdouble *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB2FPROC) (GLuint index_, GLfloat x_, GLfloat y_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB2FVPROC) (GLuint index_, const GLfloat *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB2SPROC) (GLuint index_, GLshort x_, GLshort y_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB2SVPROC) (GLuint index_, const GLshort *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB3DPROC) (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB3DVPROC) (GLuint index_, const GLdouble *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB3FPROC) (GLuint index_, GLfloat x_, GLfloat y_, GLfloat z_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB3FVPROC) (GLuint index_, const GLfloat *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB3SPROC) (GLuint index_, GLshort x_, GLshort y_, GLshort z_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB3SVPROC) (GLuint index_, const GLshort *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NBVPROC) (GLuint index_, const GLbyte *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NIVPROC) (GLuint index_, const GLint *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NSVPROC) (GLuint index_, const GLshort *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUBPROC) (GLuint index_, GLubyte x_, GLubyte y_, GLubyte z_, GLubyte w_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUBVPROC) (GLuint index_, const GLubyte *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUIVPROC) (GLuint index_, const GLuint *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUSVPROC) (GLuint index_, const GLushort *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4BVPROC) (GLuint index_, const GLbyte *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4DPROC) (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4DVPROC) (GLuint index_, const GLdouble *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4FPROC) (GLuint index_, GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4FVPROC) (GLuint index_, const GLfloat *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4IVPROC) (GLuint index_, const GLint *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4SPROC) (GLuint index_, GLshort x_, GLshort y_, GLshort z_, GLshort w_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4SVPROC) (GLuint index_, const GLshort *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4UBVPROC) (GLuint index_, const GLubyte *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4UIVPROC) (GLuint index_, const GLuint *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4USVPROC) (GLuint index_, const GLushort *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBPOINTERPROC) (GLuint index_, GLint size_, GLenum type_, GLboolean normalized_, GLsizei stride_, const void *pointer_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glBlendEquationSeparate (GLenum modeRGB_, GLenum modeAlpha_);
GLAPI void APIENTRY glDrawBuffers (GLsizei n_, const GLenum *bufs_);
GLAPI void APIENTRY glStencilOpSeparate (GLenum face_, GLenum sfail_, GLenum dpfail_, GLenum dppass_);
GLAPI void APIENTRY glStencilFuncSeparate (GLenum face_, GLenum func_, GLint ref_, GLuint mask_);
GLAPI void APIENTRY glStencilMaskSeparate (GLenum face_, GLuint mask_);
GLAPI void APIENTRY glAttachShader (GLuint program_, GLuint shader_);
GLAPI void APIENTRY glBindAttribLocation (GLuint program_, GLuint index_, const GLchar *name_);
GLAPI void APIENTRY glCompileShader (GLuint shader_);
GLAPI GLuint APIENTRY glCreateProgram (void);
GLAPI GLuint APIENTRY glCreateShader (GLenum type_);
GLAPI void APIENTRY glDeleteProgram (GLuint program_);
GLAPI void APIENTRY glDeleteShader (GLuint shader_);
GLAPI void APIENTRY glDetachShader (GLuint program_, GLuint shader_);
GLAPI void APIENTRY glDisableVertexAttribArray (GLuint index_);
GLAPI void APIENTRY glEnableVertexAttribArray (GLuint index_);
GLAPI void APIENTRY glGetActiveAttrib (GLuint program_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLint *size_, GLenum *type_, GLchar *name_);
GLAPI void APIENTRY glGetActiveUniform (GLuint program_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLint *size_, GLenum *type_, GLchar *name_);
GLAPI void APIENTRY glGetAttachedShaders (GLuint program_, GLsizei maxCount_, GLsizei *count_, GLuint *shaders_);
GLAPI GLint APIENTRY glGetAttribLocation (GLuint program_, const GLchar *name_);
GLAPI void APIENTRY glGetProgramiv (GLuint program_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetProgramInfoLog (GLuint program_, GLsizei bufSize_, GLsizei *length_, GLchar *infoLog_);
GLAPI void APIENTRY glGetShaderiv (GLuint shader_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetShaderInfoLog (GLuint shader_, GLsizei bufSize_, GLsizei *length_, GLchar *infoLog_);
GLAPI void APIENTRY glGetShaderSource (GLuint shader_, GLsizei bufSize_, GLsizei *length_, GLchar *source_);
GLAPI GLint APIENTRY glGetUniformLocation (GLuint program_, const GLchar *name_);
GLAPI void APIENTRY glGetUniformfv (GLuint program_, GLint location_, GLfloat *params_);
GLAPI void APIENTRY glGetUniformiv (GLuint program_, GLint location_, GLint *params_);
GLAPI void APIENTRY glGetVertexAttribdv (GLuint index_, GLenum pname_, GLdouble *params_);
GLAPI void APIENTRY glGetVertexAttribfv (GLuint index_, GLenum pname_, GLfloat *params_);
GLAPI void APIENTRY glGetVertexAttribiv (GLuint index_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetVertexAttribPointerv (GLuint index_, GLenum pname_, void **pointer_);
GLAPI GLboolean APIENTRY glIsProgram (GLuint program_);
GLAPI GLboolean APIENTRY glIsShader (GLuint shader_);
GLAPI void APIENTRY glLinkProgram (GLuint program_);
GLAPI void APIENTRY glShaderSource (GLuint shader_, GLsizei count_, const GLchar *const*string_, const GLint *length_);
GLAPI void APIENTRY glUseProgram (GLuint program_);
GLAPI void APIENTRY glUniform1f (GLint location_, GLfloat v0_);
GLAPI void APIENTRY glUniform2f (GLint location_, GLfloat v0_, GLfloat v1_);
GLAPI void APIENTRY glUniform3f (GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_);
GLAPI void APIENTRY glUniform4f (GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_, GLfloat v3_);
GLAPI void APIENTRY glUniform1i (GLint location_, GLint v0_);
GLAPI void APIENTRY glUniform2i (GLint location_, GLint v0_, GLint v1_);
GLAPI void APIENTRY glUniform3i (GLint location_, GLint v0_, GLint v1_, GLint v2_);
GLAPI void APIENTRY glUniform4i (GLint location_, GLint v0_, GLint v1_, GLint v2_, GLint v3_);
GLAPI void APIENTRY glUniform1fv (GLint location_, GLsizei count_, const GLfloat *value_);
GLAPI void APIENTRY glUniform2fv (GLint location_, GLsizei count_, const GLfloat *value_);
GLAPI void APIENTRY glUniform3fv (GLint location_, GLsizei count_, const GLfloat *value_);
GLAPI void APIENTRY glUniform4fv (GLint location_, GLsizei count_, const GLfloat *value_);
GLAPI void APIENTRY glUniform1iv (GLint location_, GLsizei count_, const GLint *value_);
GLAPI void APIENTRY glUniform2iv (GLint location_, GLsizei count_, const GLint *value_);
GLAPI void APIENTRY glUniform3iv (GLint location_, GLsizei count_, const GLint *value_);
GLAPI void APIENTRY glUniform4iv (GLint location_, GLsizei count_, const GLint *value_);
GLAPI void APIENTRY glUniformMatrix2fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glUniformMatrix3fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glUniformMatrix4fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glValidateProgram (GLuint program_);
GLAPI void APIENTRY glVertexAttrib1d (GLuint index_, GLdouble x_);
GLAPI void APIENTRY glVertexAttrib1dv (GLuint index_, const GLdouble *v_);
GLAPI void APIENTRY glVertexAttrib1f (GLuint index_, GLfloat x_);
GLAPI void APIENTRY glVertexAttrib1fv (GLuint index_, const GLfloat *v_);
GLAPI void APIENTRY glVertexAttrib1s (GLuint index_, GLshort x_);
GLAPI void APIENTRY glVertexAttrib1sv (GLuint index_, const GLshort *v_);
GLAPI void APIENTRY glVertexAttrib2d (GLuint index_, GLdouble x_, GLdouble y_);
GLAPI void APIENTRY glVertexAttrib2dv (GLuint index_, const GLdouble *v_);
GLAPI void APIENTRY glVertexAttrib2f (GLuint index_, GLfloat x_, GLfloat y_);
GLAPI void APIENTRY glVertexAttrib2fv (GLuint index_, const GLfloat *v_);
GLAPI void APIENTRY glVertexAttrib2s (GLuint index_, GLshort x_, GLshort y_);
GLAPI void APIENTRY glVertexAttrib2sv (GLuint index_, const GLshort *v_);
GLAPI void APIENTRY glVertexAttrib3d (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_);
GLAPI void APIENTRY glVertexAttrib3dv (GLuint index_, const GLdouble *v_);
GLAPI void APIENTRY glVertexAttrib3f (GLuint index_, GLfloat x_, GLfloat y_, GLfloat z_);
GLAPI void APIENTRY glVertexAttrib3fv (GLuint index_, const GLfloat *v_);
GLAPI void APIENTRY glVertexAttrib3s (GLuint index_, GLshort x_, GLshort y_, GLshort z_);
GLAPI void APIENTRY glVertexAttrib3sv (GLuint index_, const GLshort *v_);
GLAPI void APIENTRY glVertexAttrib4Nbv (GLuint index_, const GLbyte *v_);
GLAPI void APIENTRY glVertexAttrib4Niv (GLuint index_, const GLint *v_);
GLAPI void APIENTRY glVertexAttrib4Nsv (GLuint index_, const GLshort *v_);
GLAPI void APIENTRY glVertexAttrib4Nub (GLuint index_, GLubyte x_, GLubyte y_, GLubyte z_, GLubyte w_);
GLAPI void APIENTRY glVertexAttrib4Nubv (GLuint index_, const GLubyte *v_);
GLAPI void APIENTRY glVertexAttrib4Nuiv (GLuint index_, const GLuint *v_);
GLAPI void APIENTRY glVertexAttrib4Nusv (GLuint index_, const GLushort *v_);
GLAPI void APIENTRY glVertexAttrib4bv (GLuint index_, const GLbyte *v_);
GLAPI void APIENTRY glVertexAttrib4d (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_);
GLAPI void APIENTRY glVertexAttrib4dv (GLuint index_, const GLdouble *v_);
GLAPI void APIENTRY glVertexAttrib4f (GLuint index_, GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_);
GLAPI void APIENTRY glVertexAttrib4fv (GLuint index_, const GLfloat *v_);
GLAPI void APIENTRY glVertexAttrib4iv (GLuint index_, const GLint *v_);
GLAPI void APIENTRY glVertexAttrib4s (GLuint index_, GLshort x_, GLshort y_, GLshort z_, GLshort w_);
GLAPI void APIENTRY glVertexAttrib4sv (GLuint index_, const GLshort *v_);
GLAPI void APIENTRY glVertexAttrib4ubv (GLuint index_, const GLubyte *v_);
GLAPI void APIENTRY glVertexAttrib4uiv (GLuint index_, const GLuint *v_);
GLAPI void APIENTRY glVertexAttrib4usv (GLuint index_, const GLushort *v_);
GLAPI void APIENTRY glVertexAttribPointer (GLuint index_, GLint size_, GLenum type_, GLboolean normalized_, GLsizei stride_, const void *pointer_);
#endif
#endif /* GL_VERSION_2_0 */

#ifndef GL_VERSION_2_1
#define GL_VERSION_2_1 1
#define GL_PIXEL_PACK_BUFFER              0x88EB
#define GL_PIXEL_UNPACK_BUFFER            0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING      0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING    0x88EF
#define GL_FLOAT_MAT2x3                   0x8B65
#define GL_FLOAT_MAT2x4                   0x8B66
#define GL_FLOAT_MAT3x2                   0x8B67
#define GL_FLOAT_MAT3x4                   0x8B68
#define GL_FLOAT_MAT4x2                   0x8B69
#define GL_FLOAT_MAT4x3                   0x8B6A
#define GL_SRGB                           0x8C40
#define GL_SRGB8                          0x8C41
#define GL_SRGB_ALPHA                     0x8C42
#define GL_SRGB8_ALPHA8                   0x8C43
#define GL_COMPRESSED_SRGB                0x8C48
#define GL_COMPRESSED_SRGB_ALPHA          0x8C49
#define GL_CURRENT_RASTER_SECONDARY_COLOR 0x845F
#define GL_SLUMINANCE_ALPHA               0x8C44
#define GL_SLUMINANCE8_ALPHA8             0x8C45
#define GL_SLUMINANCE                     0x8C46
#define GL_SLUMINANCE8                    0x8C47
#define GL_COMPRESSED_SLUMINANCE          0x8C4A
#define GL_COMPRESSED_SLUMINANCE_ALPHA    0x8C4B
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X3FVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X2FVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X4FVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X2FVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X4FVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X3FVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glUniformMatrix2x3fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glUniformMatrix3x2fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glUniformMatrix2x4fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glUniformMatrix4x2fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glUniformMatrix3x4fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glUniformMatrix4x3fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
#endif
#endif /* GL_VERSION_2_1 */

#ifndef GL_VERSION_3_0
#define GL_VERSION_3_0 1
typedef unsigned short GLhalf;
#define GL_COMPARE_REF_TO_TEXTURE         0x884E
#define GL_CLIP_DISTANCE0                 0x3000
#define GL_CLIP_DISTANCE1                 0x3001
#define GL_CLIP_DISTANCE2                 0x3002
#define GL_CLIP_DISTANCE3                 0x3003
#define GL_CLIP_DISTANCE4                 0x3004
#define GL_CLIP_DISTANCE5                 0x3005
#define GL_CLIP_DISTANCE6                 0x3006
#define GL_CLIP_DISTANCE7                 0x3007
#define GL_MAX_CLIP_DISTANCES             0x0D32
#define GL_MAJOR_VERSION                  0x821B
#define GL_MINOR_VERSION                  0x821C
#define GL_NUM_EXTENSIONS                 0x821D
#define GL_CONTEXT_FLAGS                  0x821E
#define GL_COMPRESSED_RED                 0x8225
#define GL_COMPRESSED_RG                  0x8226
#define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT 0x00000001
#define GL_RGBA32F                        0x8814
#define GL_RGB32F                         0x8815
#define GL_RGBA16F                        0x881A
#define GL_RGB16F                         0x881B
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER    0x88FD
#define GL_MAX_ARRAY_TEXTURE_LAYERS       0x88FF
#define GL_MIN_PROGRAM_TEXEL_OFFSET       0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET       0x8905
#define GL_CLAMP_READ_COLOR               0x891C
#define GL_FIXED_ONLY                     0x891D
#define GL_MAX_VARYING_COMPONENTS         0x8B4B
#define GL_TEXTURE_1D_ARRAY               0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY         0x8C19
#define GL_TEXTURE_2D_ARRAY               0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY         0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY       0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY       0x8C1D
#define GL_R11F_G11F_B10F                 0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV   0x8C3B
#define GL_RGB9_E5                        0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV       0x8C3E
#define GL_TEXTURE_SHARED_SIZE            0x8C3F
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS    0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
#define GL_PRIMITIVES_GENERATED           0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
#define GL_RASTERIZER_DISCARD             0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
#define GL_INTERLEAVED_ATTRIBS            0x8C8C
#define GL_SEPARATE_ATTRIBS               0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER      0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
#define GL_RGBA32UI                       0x8D70
#define GL_RGB32UI                        0x8D71
#define GL_RGBA16UI                       0x8D76
#define GL_RGB16UI                        0x8D77
#define GL_RGBA8UI                        0x8D7C
#define GL_RGB8UI                         0x8D7D
#define GL_RGBA32I                        0x8D82
#define GL_RGB32I                         0x8D83
#define GL_RGBA16I                        0x8D88
#define GL_RGB16I                         0x8D89
#define GL_RGBA8I                         0x8D8E
#define GL_RGB8I                          0x8D8F
#define GL_RED_INTEGER                    0x8D94
#define GL_GREEN_INTEGER                  0x8D95
#define GL_BLUE_INTEGER                   0x8D96
#define GL_RGB_INTEGER                    0x8D98
#define GL_RGBA_INTEGER                   0x8D99
#define GL_BGR_INTEGER                    0x8D9A
#define GL_BGRA_INTEGER                   0x8D9B
#define GL_SAMPLER_1D_ARRAY               0x8DC0
#define GL_SAMPLER_2D_ARRAY               0x8DC1
#define GL_SAMPLER_1D_ARRAY_SHADOW        0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW        0x8DC4
#define GL_SAMPLER_CUBE_SHADOW            0x8DC5
#define GL_UNSIGNED_INT_VEC2              0x8DC6
#define GL_UNSIGNED_INT_VEC3              0x8DC7
#define GL_UNSIGNED_INT_VEC4              0x8DC8
#define GL_INT_SAMPLER_1D                 0x8DC9
#define GL_INT_SAMPLER_2D                 0x8DCA
#define GL_INT_SAMPLER_3D                 0x8DCB
#define GL_INT_SAMPLER_CUBE               0x8DCC
#define GL_INT_SAMPLER_1D_ARRAY           0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY           0x8DCF
#define GL_UNSIGNED_INT_SAMPLER_1D        0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D        0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D        0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE      0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY  0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY  0x8DD7
#define GL_QUERY_WAIT                     0x8E13
#define GL_QUERY_NO_WAIT                  0x8E14
#define GL_QUERY_BY_REGION_WAIT           0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT        0x8E16
#define GL_BUFFER_ACCESS_FLAGS            0x911F
#define GL_BUFFER_MAP_LENGTH              0x9120
#define GL_BUFFER_MAP_OFFSET              0x9121
#define GL_DEPTH_COMPONENT32F             0x8CAC
#define GL_DEPTH32F_STENCIL8              0x8CAD
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD
#define GL_INVALID_FRAMEBUFFER_OPERATION  0x0506
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING 0x8210
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE 0x8211
#define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE 0x8212
#define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE 0x8213
#define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE 0x8214
#define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE 0x8215
#define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE 0x8216
#define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE 0x8217
#define GL_FRAMEBUFFER_DEFAULT            0x8218
#define GL_FRAMEBUFFER_UNDEFINED          0x8219
#define GL_DEPTH_STENCIL_ATTACHMENT       0x821A
#define GL_MAX_RENDERBUFFER_SIZE          0x84E8
#define GL_DEPTH_STENCIL                  0x84F9
#define GL_UNSIGNED_INT_24_8              0x84FA
#define GL_DEPTH24_STENCIL8               0x88F0
#define GL_TEXTURE_STENCIL_SIZE           0x88F1
#define GL_TEXTURE_RED_TYPE               0x8C10
#define GL_TEXTURE_GREEN_TYPE             0x8C11
#define GL_TEXTURE_BLUE_TYPE              0x8C12
#define GL_TEXTURE_ALPHA_TYPE             0x8C13
#define GL_TEXTURE_DEPTH_TYPE             0x8C16
#define GL_UNSIGNED_NORMALIZED            0x8C17
#define GL_FRAMEBUFFER_BINDING            0x8CA6
#define GL_DRAW_FRAMEBUFFER_BINDING       0x8CA6
#define GL_RENDERBUFFER_BINDING           0x8CA7
#define GL_READ_FRAMEBUFFER               0x8CA8
#define GL_DRAW_FRAMEBUFFER               0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING       0x8CAA
#define GL_RENDERBUFFER_SAMPLES           0x8CAB
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
#define GL_FRAMEBUFFER_COMPLETE           0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER 0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER 0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED        0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS          0x8CDF
#define GL_COLOR_ATTACHMENT0              0x8CE0
#define GL_COLOR_ATTACHMENT1              0x8CE1
#define GL_COLOR_ATTACHMENT2              0x8CE2
#define GL_COLOR_ATTACHMENT3              0x8CE3
#define GL_COLOR_ATTACHMENT4              0x8CE4
#define GL_COLOR_ATTACHMENT5              0x8CE5
#define GL_COLOR_ATTACHMENT6              0x8CE6
#define GL_COLOR_ATTACHMENT7              0x8CE7
#define GL_COLOR_ATTACHMENT8              0x8CE8
#define GL_COLOR_ATTACHMENT9              0x8CE9
#define GL_COLOR_ATTACHMENT10             0x8CEA
#define GL_COLOR_ATTACHMENT11             0x8CEB
#define GL_COLOR_ATTACHMENT12             0x8CEC
#define GL_COLOR_ATTACHMENT13             0x8CED
#define GL_COLOR_ATTACHMENT14             0x8CEE
#define GL_COLOR_ATTACHMENT15             0x8CEF
#define GL_COLOR_ATTACHMENT16             0x8CF0
#define GL_COLOR_ATTACHMENT17             0x8CF1
#define GL_COLOR_ATTACHMENT18             0x8CF2
#define GL_COLOR_ATTACHMENT19             0x8CF3
#define GL_COLOR_ATTACHMENT20             0x8CF4
#define GL_COLOR_ATTACHMENT21             0x8CF5
#define GL_COLOR_ATTACHMENT22             0x8CF6
#define GL_COLOR_ATTACHMENT23             0x8CF7
#define GL_COLOR_ATTACHMENT24             0x8CF8
#define GL_COLOR_ATTACHMENT25             0x8CF9
#define GL_COLOR_ATTACHMENT26             0x8CFA
#define GL_COLOR_ATTACHMENT27             0x8CFB
#define GL_COLOR_ATTACHMENT28             0x8CFC
#define GL_COLOR_ATTACHMENT29             0x8CFD
#define GL_COLOR_ATTACHMENT30             0x8CFE
#define GL_COLOR_ATTACHMENT31             0x8CFF
#define GL_DEPTH_ATTACHMENT               0x8D00
#define GL_STENCIL_ATTACHMENT             0x8D20
#define GL_FRAMEBUFFER                    0x8D40
#define GL_RENDERBUFFER                   0x8D41
#define GL_RENDERBUFFER_WIDTH             0x8D42
#define GL_RENDERBUFFER_HEIGHT            0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT   0x8D44
#define GL_STENCIL_INDEX1                 0x8D46
#define GL_STENCIL_INDEX4                 0x8D47
#define GL_STENCIL_INDEX8                 0x8D48
#define GL_STENCIL_INDEX16                0x8D49
#define GL_RENDERBUFFER_RED_SIZE          0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE        0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE         0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE        0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE        0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE      0x8D55
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
#define GL_MAX_SAMPLES                    0x8D57
#define GL_INDEX                          0x8222
#define GL_TEXTURE_LUMINANCE_TYPE         0x8C14
#define GL_TEXTURE_INTENSITY_TYPE         0x8C15
#define GL_FRAMEBUFFER_SRGB               0x8DB9
#define GL_HALF_FLOAT                     0x140B
#define GL_MAP_READ_BIT                   0x0001
#define GL_MAP_WRITE_BIT                  0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT       0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT      0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT         0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT         0x0020
#define GL_COMPRESSED_RED_RGTC1           0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1    0x8DBC
#define GL_COMPRESSED_RG_RGTC2            0x8DBD
#define GL_COMPRESSED_SIGNED_RG_RGTC2     0x8DBE
#define GL_RG                             0x8227
#define GL_RG_INTEGER                     0x8228
#define GL_R8                             0x8229
#define GL_R16                            0x822A
#define GL_RG8                            0x822B
#define GL_RG16                           0x822C
#define GL_R16F                           0x822D
#define GL_R32F                           0x822E
#define GL_RG16F                          0x822F
#define GL_RG32F                          0x8230
#define GL_R8I                            0x8231
#define GL_R8UI                           0x8232
#define GL_R16I                           0x8233
#define GL_R16UI                          0x8234
#define GL_R32I                           0x8235
#define GL_R32UI                          0x8236
#define GL_RG8I                           0x8237
#define GL_RG8UI                          0x8238
#define GL_RG16I                          0x8239
#define GL_RG16UI                         0x823A
#define GL_RG32I                          0x823B
#define GL_RG32UI                         0x823C
#define GL_VERTEX_ARRAY_BINDING           0x85B5
#define GL_CLAMP_VERTEX_COLOR             0x891A
#define GL_CLAMP_FRAGMENT_COLOR           0x891B
#define GL_ALPHA_INTEGER                  0x8D97
typedef void (APIENTRYP PFNGLCOLORMASKIPROC) (GLuint index_, GLboolean r_, GLboolean g_, GLboolean b_, GLboolean a_);
typedef void (APIENTRYP PFNGLGETBOOLEANI_VPROC) (GLenum target_, GLuint index_, GLboolean *data_);
typedef void (APIENTRYP PFNGLGETINTEGERI_VPROC) (GLenum target_, GLuint index_, GLint *data_);
typedef void (APIENTRYP PFNGLENABLEIPROC) (GLenum target_, GLuint index_);
typedef void (APIENTRYP PFNGLDISABLEIPROC) (GLenum target_, GLuint index_);
typedef GLboolean (APIENTRYP PFNGLISENABLEDIPROC) (GLenum target_, GLuint index_);
typedef void (APIENTRYP PFNGLBEGINTRANSFORMFEEDBACKPROC) (GLenum primitiveMode_);
typedef void (APIENTRYP PFNGLENDTRANSFORMFEEDBACKPROC) (void);
typedef void (APIENTRYP PFNGLBINDBUFFERRANGEPROC) (GLenum target_, GLuint index_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
typedef void (APIENTRYP PFNGLBINDBUFFERBASEPROC) (GLenum target_, GLuint index_, GLuint buffer_);
typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKVARYINGSPROC) (GLuint program_, GLsizei count_, const GLchar *const*varyings_, GLenum bufferMode_);
typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) (GLuint program_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLsizei *size_, GLenum *type_, GLchar *name_);
typedef void (APIENTRYP PFNGLCLAMPCOLORPROC) (GLenum target_, GLenum clamp_);
typedef void (APIENTRYP PFNGLBEGINCONDITIONALRENDERPROC) (GLuint id_, GLenum mode_);
typedef void (APIENTRYP PFNGLENDCONDITIONALRENDERPROC) (void);
typedef void (APIENTRYP PFNGLVERTEXATTRIBIPOINTERPROC) (GLuint index_, GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBIIVPROC) (GLuint index_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBIUIVPROC) (GLuint index_, GLenum pname_, GLuint *params_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1IPROC) (GLuint index_, GLint x_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2IPROC) (GLuint index_, GLint x_, GLint y_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3IPROC) (GLuint index_, GLint x_, GLint y_, GLint z_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4IPROC) (GLuint index_, GLint x_, GLint y_, GLint z_, GLint w_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1UIPROC) (GLuint index_, GLuint x_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2UIPROC) (GLuint index_, GLuint x_, GLuint y_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3UIPROC) (GLuint index_, GLuint x_, GLuint y_, GLuint z_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4UIPROC) (GLuint index_, GLuint x_, GLuint y_, GLuint z_, GLuint w_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1IVPROC) (GLuint index_, const GLint *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2IVPROC) (GLuint index_, const GLint *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3IVPROC) (GLuint index_, const GLint *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4IVPROC) (GLuint index_, const GLint *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1UIVPROC) (GLuint index_, const GLuint *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2UIVPROC) (GLuint index_, const GLuint *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3UIVPROC) (GLuint index_, const GLuint *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4UIVPROC) (GLuint index_, const GLuint *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4BVPROC) (GLuint index_, const GLbyte *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4SVPROC) (GLuint index_, const GLshort *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4UBVPROC) (GLuint index_, const GLubyte *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4USVPROC) (GLuint index_, const GLushort *v_);
typedef void (APIENTRYP PFNGLGETUNIFORMUIVPROC) (GLuint program_, GLint location_, GLuint *params_);
typedef void (APIENTRYP PFNGLBINDFRAGDATALOCATIONPROC) (GLuint program_, GLuint color_, const GLchar *name_);
typedef GLint (APIENTRYP PFNGLGETFRAGDATALOCATIONPROC) (GLuint program_, const GLchar *name_);
typedef void (APIENTRYP PFNGLUNIFORM1UIPROC) (GLint location_, GLuint v0_);
typedef void (APIENTRYP PFNGLUNIFORM2UIPROC) (GLint location_, GLuint v0_, GLuint v1_);
typedef void (APIENTRYP PFNGLUNIFORM3UIPROC) (GLint location_, GLuint v0_, GLuint v1_, GLuint v2_);
typedef void (APIENTRYP PFNGLUNIFORM4UIPROC) (GLint location_, GLuint v0_, GLuint v1_, GLuint v2_, GLuint v3_);
typedef void (APIENTRYP PFNGLUNIFORM1UIVPROC) (GLint location_, GLsizei count_, const GLuint *value_);
typedef void (APIENTRYP PFNGLUNIFORM2UIVPROC) (GLint location_, GLsizei count_, const GLuint *value_);
typedef void (APIENTRYP PFNGLUNIFORM3UIVPROC) (GLint location_, GLsizei count_, const GLuint *value_);
typedef void (APIENTRYP PFNGLUNIFORM4UIVPROC) (GLint location_, GLsizei count_, const GLuint *value_);
typedef void (APIENTRYP PFNGLTEXPARAMETERIIVPROC) (GLenum target_, GLenum pname_, const GLint *params_);
typedef void (APIENTRYP PFNGLTEXPARAMETERIUIVPROC) (GLenum target_, GLenum pname_, const GLuint *params_);
typedef void (APIENTRYP PFNGLGETTEXPARAMETERIIVPROC) (GLenum target_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETTEXPARAMETERIUIVPROC) (GLenum target_, GLenum pname_, GLuint *params_);
typedef void (APIENTRYP PFNGLCLEARBUFFERIVPROC) (GLenum buffer_, GLint drawbuffer_, const GLint *value_);
typedef void (APIENTRYP PFNGLCLEARBUFFERUIVPROC) (GLenum buffer_, GLint drawbuffer_, const GLuint *value_);
typedef void (APIENTRYP PFNGLCLEARBUFFERFVPROC) (GLenum buffer_, GLint drawbuffer_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLCLEARBUFFERFIPROC) (GLenum buffer_, GLint drawbuffer_, GLfloat depth_, GLint stencil_);
typedef const GLubyte *(APIENTRYP PFNGLGETSTRINGIPROC) (GLenum name_, GLuint index_);
typedef GLboolean (APIENTRYP PFNGLISRENDERBUFFERPROC) (GLuint renderbuffer_);
typedef void (APIENTRYP PFNGLBINDRENDERBUFFERPROC) (GLenum target_, GLuint renderbuffer_);
typedef void (APIENTRYP PFNGLDELETERENDERBUFFERSPROC) (GLsizei n_, const GLuint *renderbuffers_);
typedef void (APIENTRYP PFNGLGENRENDERBUFFERSPROC) (GLsizei n_, GLuint *renderbuffers_);
typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEPROC) (GLenum target_, GLenum internalformat_, GLsizei width_, GLsizei height_);
typedef void (APIENTRYP PFNGLGETRENDERBUFFERPARAMETERIVPROC) (GLenum target_, GLenum pname_, GLint *params_);
typedef GLboolean (APIENTRYP PFNGLISFRAMEBUFFERPROC) (GLuint framebuffer_);
typedef void (APIENTRYP PFNGLBINDFRAMEBUFFERPROC) (GLenum target_, GLuint framebuffer_);
typedef void (APIENTRYP PFNGLDELETEFRAMEBUFFERSPROC) (GLsizei n_, const GLuint *framebuffers_);
typedef void (APIENTRYP PFNGLGENFRAMEBUFFERSPROC) (GLsizei n_, GLuint *framebuffers_);
typedef GLenum (APIENTRYP PFNGLCHECKFRAMEBUFFERSTATUSPROC) (GLenum target_);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE1DPROC) (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DPROC) (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE3DPROC) (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_, GLint zoffset_);
typedef void (APIENTRYP PFNGLFRAMEBUFFERRENDERBUFFERPROC) (GLenum target_, GLenum attachment_, GLenum renderbuffertarget_, GLuint renderbuffer_);
typedef void (APIENTRYP PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) (GLenum target_, GLenum attachment_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGENERATEMIPMAPPROC) (GLenum target_);
typedef void (APIENTRYP PFNGLBLITFRAMEBUFFERPROC) (GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_);
typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURELAYERPROC) (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_, GLint layer_);
typedef void *(APIENTRYP PFNGLMAPBUFFERRANGEPROC) (GLenum target_, GLintptr offset_, GLsizeiptr length_, GLbitfield access_);
typedef void (APIENTRYP PFNGLFLUSHMAPPEDBUFFERRANGEPROC) (GLenum target_, GLintptr offset_, GLsizeiptr length_);
typedef void (APIENTRYP PFNGLBINDVERTEXARRAYPROC) (GLuint array_);
typedef void (APIENTRYP PFNGLDELETEVERTEXARRAYSPROC) (GLsizei n_, const GLuint *arrays_);
typedef void (APIENTRYP PFNGLGENVERTEXARRAYSPROC) (GLsizei n_, GLuint *arrays_);
typedef GLboolean (APIENTRYP PFNGLISVERTEXARRAYPROC) (GLuint array_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glColorMaski (GLuint index_, GLboolean r_, GLboolean g_, GLboolean b_, GLboolean a_);
GLAPI void APIENTRY glGetBooleani_v (GLenum target_, GLuint index_, GLboolean *data_);
GLAPI void APIENTRY glGetIntegeri_v (GLenum target_, GLuint index_, GLint *data_);
GLAPI void APIENTRY glEnablei (GLenum target_, GLuint index_);
GLAPI void APIENTRY glDisablei (GLenum target_, GLuint index_);
GLAPI GLboolean APIENTRY glIsEnabledi (GLenum target_, GLuint index_);
GLAPI void APIENTRY glBeginTransformFeedback (GLenum primitiveMode_);
GLAPI void APIENTRY glEndTransformFeedback (void);
GLAPI void APIENTRY glBindBufferRange (GLenum target_, GLuint index_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
GLAPI void APIENTRY glBindBufferBase (GLenum target_, GLuint index_, GLuint buffer_);
GLAPI void APIENTRY glTransformFeedbackVaryings (GLuint program_, GLsizei count_, const GLchar *const*varyings_, GLenum bufferMode_);
GLAPI void APIENTRY glGetTransformFeedbackVarying (GLuint program_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLsizei *size_, GLenum *type_, GLchar *name_);
GLAPI void APIENTRY glClampColor (GLenum target_, GLenum clamp_);
GLAPI void APIENTRY glBeginConditionalRender (GLuint id_, GLenum mode_);
GLAPI void APIENTRY glEndConditionalRender (void);
GLAPI void APIENTRY glVertexAttribIPointer (GLuint index_, GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
GLAPI void APIENTRY glGetVertexAttribIiv (GLuint index_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetVertexAttribIuiv (GLuint index_, GLenum pname_, GLuint *params_);
GLAPI void APIENTRY glVertexAttribI1i (GLuint index_, GLint x_);
GLAPI void APIENTRY glVertexAttribI2i (GLuint index_, GLint x_, GLint y_);
GLAPI void APIENTRY glVertexAttribI3i (GLuint index_, GLint x_, GLint y_, GLint z_);
GLAPI void APIENTRY glVertexAttribI4i (GLuint index_, GLint x_, GLint y_, GLint z_, GLint w_);
GLAPI void APIENTRY glVertexAttribI1ui (GLuint index_, GLuint x_);
GLAPI void APIENTRY glVertexAttribI2ui (GLuint index_, GLuint x_, GLuint y_);
GLAPI void APIENTRY glVertexAttribI3ui (GLuint index_, GLuint x_, GLuint y_, GLuint z_);
GLAPI void APIENTRY glVertexAttribI4ui (GLuint index_, GLuint x_, GLuint y_, GLuint z_, GLuint w_);
GLAPI void APIENTRY glVertexAttribI1iv (GLuint index_, const GLint *v_);
GLAPI void APIENTRY glVertexAttribI2iv (GLuint index_, const GLint *v_);
GLAPI void APIENTRY glVertexAttribI3iv (GLuint index_, const GLint *v_);
GLAPI void APIENTRY glVertexAttribI4iv (GLuint index_, const GLint *v_);
GLAPI void APIENTRY glVertexAttribI1uiv (GLuint index_, const GLuint *v_);
GLAPI void APIENTRY glVertexAttribI2uiv (GLuint index_, const GLuint *v_);
GLAPI void APIENTRY glVertexAttribI3uiv (GLuint index_, const GLuint *v_);
GLAPI void APIENTRY glVertexAttribI4uiv (GLuint index_, const GLuint *v_);
GLAPI void APIENTRY glVertexAttribI4bv (GLuint index_, const GLbyte *v_);
GLAPI void APIENTRY glVertexAttribI4sv (GLuint index_, const GLshort *v_);
GLAPI void APIENTRY glVertexAttribI4ubv (GLuint index_, const GLubyte *v_);
GLAPI void APIENTRY glVertexAttribI4usv (GLuint index_, const GLushort *v_);
GLAPI void APIENTRY glGetUniformuiv (GLuint program_, GLint location_, GLuint *params_);
GLAPI void APIENTRY glBindFragDataLocation (GLuint program_, GLuint color_, const GLchar *name_);
GLAPI GLint APIENTRY glGetFragDataLocation (GLuint program_, const GLchar *name_);
GLAPI void APIENTRY glUniform1ui (GLint location_, GLuint v0_);
GLAPI void APIENTRY glUniform2ui (GLint location_, GLuint v0_, GLuint v1_);
GLAPI void APIENTRY glUniform3ui (GLint location_, GLuint v0_, GLuint v1_, GLuint v2_);
GLAPI void APIENTRY glUniform4ui (GLint location_, GLuint v0_, GLuint v1_, GLuint v2_, GLuint v3_);
GLAPI void APIENTRY glUniform1uiv (GLint location_, GLsizei count_, const GLuint *value_);
GLAPI void APIENTRY glUniform2uiv (GLint location_, GLsizei count_, const GLuint *value_);
GLAPI void APIENTRY glUniform3uiv (GLint location_, GLsizei count_, const GLuint *value_);
GLAPI void APIENTRY glUniform4uiv (GLint location_, GLsizei count_, const GLuint *value_);
GLAPI void APIENTRY glTexParameterIiv (GLenum target_, GLenum pname_, const GLint *params_);
GLAPI void APIENTRY glTexParameterIuiv (GLenum target_, GLenum pname_, const GLuint *params_);
GLAPI void APIENTRY glGetTexParameterIiv (GLenum target_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetTexParameterIuiv (GLenum target_, GLenum pname_, GLuint *params_);
GLAPI void APIENTRY glClearBufferiv (GLenum buffer_, GLint drawbuffer_, const GLint *value_);
GLAPI void APIENTRY glClearBufferuiv (GLenum buffer_, GLint drawbuffer_, const GLuint *value_);
GLAPI void APIENTRY glClearBufferfv (GLenum buffer_, GLint drawbuffer_, const GLfloat *value_);
GLAPI void APIENTRY glClearBufferfi (GLenum buffer_, GLint drawbuffer_, GLfloat depth_, GLint stencil_);
GLAPI const GLubyte *APIENTRY glGetStringi (GLenum name_, GLuint index_);
GLAPI GLboolean APIENTRY glIsRenderbuffer (GLuint renderbuffer_);
GLAPI void APIENTRY glBindRenderbuffer (GLenum target_, GLuint renderbuffer_);
GLAPI void APIENTRY glDeleteRenderbuffers (GLsizei n_, const GLuint *renderbuffers_);
GLAPI void APIENTRY glGenRenderbuffers (GLsizei n_, GLuint *renderbuffers_);
GLAPI void APIENTRY glRenderbufferStorage (GLenum target_, GLenum internalformat_, GLsizei width_, GLsizei height_);
GLAPI void APIENTRY glGetRenderbufferParameteriv (GLenum target_, GLenum pname_, GLint *params_);
GLAPI GLboolean APIENTRY glIsFramebuffer (GLuint framebuffer_);
GLAPI void APIENTRY glBindFramebuffer (GLenum target_, GLuint framebuffer_);
GLAPI void APIENTRY glDeleteFramebuffers (GLsizei n_, const GLuint *framebuffers_);
GLAPI void APIENTRY glGenFramebuffers (GLsizei n_, GLuint *framebuffers_);
GLAPI GLenum APIENTRY glCheckFramebufferStatus (GLenum target_);
GLAPI void APIENTRY glFramebufferTexture1D (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_);
GLAPI void APIENTRY glFramebufferTexture2D (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_);
GLAPI void APIENTRY glFramebufferTexture3D (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_, GLint zoffset_);
GLAPI void APIENTRY glFramebufferRenderbuffer (GLenum target_, GLenum attachment_, GLenum renderbuffertarget_, GLuint renderbuffer_);
GLAPI void APIENTRY glGetFramebufferAttachmentParameteriv (GLenum target_, GLenum attachment_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGenerateMipmap (GLenum target_);
GLAPI void APIENTRY glBlitFramebuffer (GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_);
GLAPI void APIENTRY glRenderbufferStorageMultisample (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
GLAPI void APIENTRY glFramebufferTextureLayer (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_, GLint layer_);
GLAPI void *APIENTRY glMapBufferRange (GLenum target_, GLintptr offset_, GLsizeiptr length_, GLbitfield access_);
GLAPI void APIENTRY glFlushMappedBufferRange (GLenum target_, GLintptr offset_, GLsizeiptr length_);
GLAPI void APIENTRY glBindVertexArray (GLuint array_);
GLAPI void APIENTRY glDeleteVertexArrays (GLsizei n_, const GLuint *arrays_);
GLAPI void APIENTRY glGenVertexArrays (GLsizei n_, GLuint *arrays_);
GLAPI GLboolean APIENTRY glIsVertexArray (GLuint array_);
#endif
#endif /* GL_VERSION_3_0 */

#ifndef GL_VERSION_3_1
#define GL_VERSION_3_1 1
#define GL_SAMPLER_2D_RECT                0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW         0x8B64
#define GL_SAMPLER_BUFFER                 0x8DC2
#define GL_INT_SAMPLER_2D_RECT            0x8DCD
#define GL_INT_SAMPLER_BUFFER             0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT   0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_BUFFER    0x8DD8
#define GL_TEXTURE_BUFFER                 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE        0x8C2B
#define GL_TEXTURE_BINDING_BUFFER         0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING 0x8C2D
#define GL_TEXTURE_RECTANGLE              0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE      0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE        0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE     0x84F8
#define GL_R8_SNORM                       0x8F94
#define GL_RG8_SNORM                      0x8F95
#define GL_RGB8_SNORM                     0x8F96
#define GL_RGBA8_SNORM                    0x8F97
#define GL_R16_SNORM                      0x8F98
#define GL_RG16_SNORM                     0x8F99
#define GL_RGB16_SNORM                    0x8F9A
#define GL_RGBA16_SNORM                   0x8F9B
#define GL_SIGNED_NORMALIZED              0x8F9C
#define GL_PRIMITIVE_RESTART              0x8F9D
#define GL_PRIMITIVE_RESTART_INDEX        0x8F9E
#define GL_COPY_READ_BUFFER               0x8F36
#define GL_COPY_WRITE_BUFFER              0x8F37
#define GL_UNIFORM_BUFFER                 0x8A11
#define GL_UNIFORM_BUFFER_BINDING         0x8A28
#define GL_UNIFORM_BUFFER_START           0x8A29
#define GL_UNIFORM_BUFFER_SIZE            0x8A2A
#define GL_MAX_VERTEX_UNIFORM_BLOCKS      0x8A2B
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS    0x8A2C
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS    0x8A2D
#define GL_MAX_COMBINED_UNIFORM_BLOCKS    0x8A2E
#define GL_MAX_UNIFORM_BUFFER_BINDINGS    0x8A2F
#define GL_MAX_UNIFORM_BLOCK_SIZE         0x8A30
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS 0x8A32
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
#define GL_ACTIVE_UNIFORM_BLOCKS          0x8A36
#define GL_UNIFORM_TYPE                   0x8A37
#define GL_UNIFORM_SIZE                   0x8A38
#define GL_UNIFORM_NAME_LENGTH            0x8A39
#define GL_UNIFORM_BLOCK_INDEX            0x8A3A
#define GL_UNIFORM_OFFSET                 0x8A3B
#define GL_UNIFORM_ARRAY_STRIDE           0x8A3C
#define GL_UNIFORM_MATRIX_STRIDE          0x8A3D
#define GL_UNIFORM_IS_ROW_MAJOR           0x8A3E
#define GL_UNIFORM_BLOCK_BINDING          0x8A3F
#define GL_UNIFORM_BLOCK_DATA_SIZE        0x8A40
#define GL_UNIFORM_BLOCK_NAME_LENGTH      0x8A41
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS  0x8A42
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES 0x8A43
#define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER 0x8A44
#define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER 0x8A45
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
#define GL_INVALID_INDEX                  0xFFFFFFFFu
typedef void (APIENTRYP PFNGLDRAWARRAYSINSTANCEDPROC) (GLenum mode_, GLint first_, GLsizei count_, GLsizei instancecount_);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDPROC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_);
typedef void (APIENTRYP PFNGLTEXBUFFERPROC) (GLenum target_, GLenum internalformat_, GLuint buffer_);
typedef void (APIENTRYP PFNGLPRIMITIVERESTARTINDEXPROC) (GLuint index_);
typedef void (APIENTRYP PFNGLCOPYBUFFERSUBDATAPROC) (GLenum readTarget_, GLenum writeTarget_, GLintptr readOffset_, GLintptr writeOffset_, GLsizeiptr size_);
typedef void (APIENTRYP PFNGLGETUNIFORMINDICESPROC) (GLuint program_, GLsizei uniformCount_, const GLchar *const*uniformNames_, GLuint *uniformIndices_);
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMSIVPROC) (GLuint program_, GLsizei uniformCount_, const GLuint *uniformIndices_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMNAMEPROC) (GLuint program_, GLuint uniformIndex_, GLsizei bufSize_, GLsizei *length_, GLchar *uniformName_);
typedef GLuint (APIENTRYP PFNGLGETUNIFORMBLOCKINDEXPROC) (GLuint program_, const GLchar *uniformBlockName_);
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMBLOCKIVPROC) (GLuint program_, GLuint uniformBlockIndex_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) (GLuint program_, GLuint uniformBlockIndex_, GLsizei bufSize_, GLsizei *length_, GLchar *uniformBlockName_);
typedef void (APIENTRYP PFNGLUNIFORMBLOCKBINDINGPROC) (GLuint program_, GLuint uniformBlockIndex_, GLuint uniformBlockBinding_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glDrawArraysInstanced (GLenum mode_, GLint first_, GLsizei count_, GLsizei instancecount_);
GLAPI void APIENTRY glDrawElementsInstanced (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_);
GLAPI void APIENTRY glTexBuffer (GLenum target_, GLenum internalformat_, GLuint buffer_);
GLAPI void APIENTRY glPrimitiveRestartIndex (GLuint index_);
GLAPI void APIENTRY glCopyBufferSubData (GLenum readTarget_, GLenum writeTarget_, GLintptr readOffset_, GLintptr writeOffset_, GLsizeiptr size_);
GLAPI void APIENTRY glGetUniformIndices (GLuint program_, GLsizei uniformCount_, const GLchar *const*uniformNames_, GLuint *uniformIndices_);
GLAPI void APIENTRY glGetActiveUniformsiv (GLuint program_, GLsizei uniformCount_, const GLuint *uniformIndices_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetActiveUniformName (GLuint program_, GLuint uniformIndex_, GLsizei bufSize_, GLsizei *length_, GLchar *uniformName_);
GLAPI GLuint APIENTRY glGetUniformBlockIndex (GLuint program_, const GLchar *uniformBlockName_);
GLAPI void APIENTRY glGetActiveUniformBlockiv (GLuint program_, GLuint uniformBlockIndex_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetActiveUniformBlockName (GLuint program_, GLuint uniformBlockIndex_, GLsizei bufSize_, GLsizei *length_, GLchar *uniformBlockName_);
GLAPI void APIENTRY glUniformBlockBinding (GLuint program_, GLuint uniformBlockIndex_, GLuint uniformBlockBinding_);
#endif
#endif /* GL_VERSION_3_1 */

#ifndef GL_VERSION_3_2
#define GL_VERSION_3_2 1
typedef struct __GLsync *GLsync;
#ifndef GLEXT_64_TYPES_DEFINED
/* This code block is duplicated in glxext.h, so must be protected */
#define GLEXT_64_TYPES_DEFINED
/* Define int32_t, int64_t, and uint64_t types for UST/MSC */
/* (as used in the GL_EXT_timer_query extension). */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#include <inttypes.h>
#elif defined(__sun__) || defined(__digital__)
#include <inttypes.h>
#if defined(__STDC__)
#if defined(__arch64__) || defined(_LP64)
typedef long int int64_t;
typedef unsigned long int uint64_t;
#else
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#endif /* __arch64__ */
#endif /* __STDC__ */
#elif defined( __VMS ) || defined(__sgi)
#include <inttypes.h>
#elif defined(__SCO__) || defined(__USLC__)
#include <stdint.h>
#elif defined(__UNIXOS2__) || defined(__SOL64__)
typedef long int int32_t;
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#elif defined(_WIN32) && defined(__GNUC__)
#include <stdint.h>
#elif defined(_WIN32)
typedef __int32 int32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
/* Fallback if nothing above works */
#include <inttypes.h>
#endif
#endif
typedef uint64_t GLuint64;
typedef int64_t GLint64;
#define GL_CONTEXT_CORE_PROFILE_BIT       0x00000001
#define GL_CONTEXT_COMPATIBILITY_PROFILE_BIT 0x00000002
#define GL_LINES_ADJACENCY                0x000A
#define GL_LINE_STRIP_ADJACENCY           0x000B
#define GL_TRIANGLES_ADJACENCY            0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY       0x000D
#define GL_PROGRAM_POINT_SIZE             0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS 0x8DA8
#define GL_GEOMETRY_SHADER                0x8DD9
#define GL_GEOMETRY_VERTICES_OUT          0x8916
#define GL_GEOMETRY_INPUT_TYPE            0x8917
#define GL_GEOMETRY_OUTPUT_TYPE           0x8918
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES   0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS 0x8DE1
#define GL_MAX_VERTEX_OUTPUT_COMPONENTS   0x9122
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS  0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS 0x9124
#define GL_MAX_FRAGMENT_INPUT_COMPONENTS  0x9125
#define GL_CONTEXT_PROFILE_MASK           0x9126
#define GL_DEPTH_CLAMP                    0x864F
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION 0x8E4C
#define GL_FIRST_VERTEX_CONVENTION        0x8E4D
#define GL_LAST_VERTEX_CONVENTION         0x8E4E
#define GL_PROVOKING_VERTEX               0x8E4F
#define GL_TEXTURE_CUBE_MAP_SEAMLESS      0x884F
#define GL_MAX_SERVER_WAIT_TIMEOUT        0x9111
#define GL_OBJECT_TYPE                    0x9112
#define GL_SYNC_CONDITION                 0x9113
#define GL_SYNC_STATUS                    0x9114
#define GL_SYNC_FLAGS                     0x9115
#define GL_SYNC_FENCE                     0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE     0x9117
#define GL_UNSIGNALED                     0x9118
#define GL_SIGNALED                       0x9119
#define GL_ALREADY_SIGNALED               0x911A
#define GL_TIMEOUT_EXPIRED                0x911B
#define GL_CONDITION_SATISFIED            0x911C
#define GL_WAIT_FAILED                    0x911D
#define GL_TIMEOUT_IGNORED                0xFFFFFFFFFFFFFFFFull
#define GL_SYNC_FLUSH_COMMANDS_BIT        0x00000001
#define GL_SAMPLE_POSITION                0x8E50
#define GL_SAMPLE_MASK                    0x8E51
#define GL_SAMPLE_MASK_VALUE              0x8E52
#define GL_MAX_SAMPLE_MASK_WORDS          0x8E59
#define GL_TEXTURE_2D_MULTISAMPLE         0x9100
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE   0x9101
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY   0x9102
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9103
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE 0x9104
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY 0x9105
#define GL_TEXTURE_SAMPLES                0x9106
#define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS 0x9107
#define GL_SAMPLER_2D_MULTISAMPLE         0x9108
#define GL_INT_SAMPLER_2D_MULTISAMPLE     0x9109
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE 0x910A
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY   0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910D
#define GL_MAX_COLOR_TEXTURE_SAMPLES      0x910E
#define GL_MAX_DEPTH_TEXTURE_SAMPLES      0x910F
#define GL_MAX_INTEGER_SAMPLES            0x9110
typedef void (APIENTRYP PFNGLDRAWELEMENTSBASEVERTEXPROC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_);
typedef void (APIENTRYP PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) (GLenum mode_, GLuint start_, GLuint end_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLint basevertex_);
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) (GLenum mode_, const GLsizei *count_, GLenum type_, const void *const*indices_, GLsizei drawcount_, const GLint *basevertex_);
typedef void (APIENTRYP PFNGLPROVOKINGVERTEXPROC) (GLenum mode_);
typedef GLsync (APIENTRYP PFNGLFENCESYNCPROC) (GLenum condition_, GLbitfield flags_);
typedef GLboolean (APIENTRYP PFNGLISSYNCPROC) (GLsync sync_);
typedef void (APIENTRYP PFNGLDELETESYNCPROC) (GLsync sync_);
typedef GLenum (APIENTRYP PFNGLCLIENTWAITSYNCPROC) (GLsync sync_, GLbitfield flags_, GLuint64 timeout_);
typedef void (APIENTRYP PFNGLWAITSYNCPROC) (GLsync sync_, GLbitfield flags_, GLuint64 timeout_);
typedef void (APIENTRYP PFNGLGETINTEGER64VPROC) (GLenum pname_, GLint64 *data_);
typedef void (APIENTRYP PFNGLGETSYNCIVPROC) (GLsync sync_, GLenum pname_, GLsizei bufSize_, GLsizei *length_, GLint *values_);
typedef void (APIENTRYP PFNGLGETINTEGER64I_VPROC) (GLenum target_, GLuint index_, GLint64 *data_);
typedef void (APIENTRYP PFNGLGETBUFFERPARAMETERI64VPROC) (GLenum target_, GLenum pname_, GLint64 *params_);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTUREPROC) (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_);
typedef void (APIENTRYP PFNGLTEXIMAGE2DMULTISAMPLEPROC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_);
typedef void (APIENTRYP PFNGLTEXIMAGE3DMULTISAMPLEPROC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_);
typedef void (APIENTRYP PFNGLGETMULTISAMPLEFVPROC) (GLenum pname_, GLuint index_, GLfloat *val_);
typedef void (APIENTRYP PFNGLSAMPLEMASKIPROC) (GLuint maskNumber_, GLbitfield mask_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glDrawElementsBaseVertex (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_);
GLAPI void APIENTRY glDrawRangeElementsBaseVertex (GLenum mode_, GLuint start_, GLuint end_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_);
GLAPI void APIENTRY glDrawElementsInstancedBaseVertex (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLint basevertex_);
GLAPI void APIENTRY glMultiDrawElementsBaseVertex (GLenum mode_, const GLsizei *count_, GLenum type_, const void *const*indices_, GLsizei drawcount_, const GLint *basevertex_);
GLAPI void APIENTRY glProvokingVertex (GLenum mode_);
GLAPI GLsync APIENTRY glFenceSync (GLenum condition_, GLbitfield flags_);
GLAPI GLboolean APIENTRY glIsSync (GLsync sync_);
GLAPI void APIENTRY glDeleteSync (GLsync sync_);
GLAPI GLenum APIENTRY glClientWaitSync (GLsync sync_, GLbitfield flags_, GLuint64 timeout_);
GLAPI void APIENTRY glWaitSync (GLsync sync_, GLbitfield flags_, GLuint64 timeout_);
GLAPI void APIENTRY glGetInteger64v (GLenum pname_, GLint64 *data_);
GLAPI void APIENTRY glGetSynciv (GLsync sync_, GLenum pname_, GLsizei bufSize_, GLsizei *length_, GLint *values_);
GLAPI void APIENTRY glGetInteger64i_v (GLenum target_, GLuint index_, GLint64 *data_);
GLAPI void APIENTRY glGetBufferParameteri64v (GLenum target_, GLenum pname_, GLint64 *params_);
GLAPI void APIENTRY glFramebufferTexture (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_);
GLAPI void APIENTRY glTexImage2DMultisample (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_);
GLAPI void APIENTRY glTexImage3DMultisample (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_);
GLAPI void APIENTRY glGetMultisamplefv (GLenum pname_, GLuint index_, GLfloat *val_);
GLAPI void APIENTRY glSampleMaski (GLuint maskNumber_, GLbitfield mask_);
#endif
#endif /* GL_VERSION_3_2 */

#ifndef GL_VERSION_3_3
#define GL_VERSION_3_3 1
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR    0x88FE
#define GL_SRC1_COLOR                     0x88F9
#define GL_ONE_MINUS_SRC1_COLOR           0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA           0x88FB
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS   0x88FC
#define GL_ANY_SAMPLES_PASSED             0x8C2F
#define GL_SAMPLER_BINDING                0x8919
#define GL_RGB10_A2UI                     0x906F
#define GL_TEXTURE_SWIZZLE_R              0x8E42
#define GL_TEXTURE_SWIZZLE_G              0x8E43
#define GL_TEXTURE_SWIZZLE_B              0x8E44
#define GL_TEXTURE_SWIZZLE_A              0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA           0x8E46
#define GL_TIME_ELAPSED                   0x88BF
#define GL_TIMESTAMP                      0x8E28
#define GL_INT_2_10_10_10_REV             0x8D9F
typedef void (APIENTRYP PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) (GLuint program_, GLuint colorNumber_, GLuint index_, const GLchar *name_);
typedef GLint (APIENTRYP PFNGLGETFRAGDATAINDEXPROC) (GLuint program_, const GLchar *name_);
typedef void (APIENTRYP PFNGLGENSAMPLERSPROC) (GLsizei count_, GLuint *samplers_);
typedef void (APIENTRYP PFNGLDELETESAMPLERSPROC) (GLsizei count_, const GLuint *samplers_);
typedef GLboolean (APIENTRYP PFNGLISSAMPLERPROC) (GLuint sampler_);
typedef void (APIENTRYP PFNGLBINDSAMPLERPROC) (GLuint unit_, GLuint sampler_);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIPROC) (GLuint sampler_, GLenum pname_, GLint param_);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIVPROC) (GLuint sampler_, GLenum pname_, const GLint *param_);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERFPROC) (GLuint sampler_, GLenum pname_, GLfloat param_);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERFVPROC) (GLuint sampler_, GLenum pname_, const GLfloat *param_);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIIVPROC) (GLuint sampler_, GLenum pname_, const GLint *param_);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIUIVPROC) (GLuint sampler_, GLenum pname_, const GLuint *param_);
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERIVPROC) (GLuint sampler_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERIIVPROC) (GLuint sampler_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERFVPROC) (GLuint sampler_, GLenum pname_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERIUIVPROC) (GLuint sampler_, GLenum pname_, GLuint *params_);
typedef void (APIENTRYP PFNGLQUERYCOUNTERPROC) (GLuint id_, GLenum target_);
typedef void (APIENTRYP PFNGLGETQUERYOBJECTI64VPROC) (GLuint id_, GLenum pname_, GLint64 *params_);
typedef void (APIENTRYP PFNGLGETQUERYOBJECTUI64VPROC) (GLuint id_, GLenum pname_, GLuint64 *params_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBDIVISORPROC) (GLuint index_, GLuint divisor_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP1UIPROC) (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP1UIVPROC) (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP2UIPROC) (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP2UIVPROC) (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP3UIPROC) (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP3UIVPROC) (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP4UIPROC) (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP4UIVPROC) (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_);
typedef void (APIENTRYP PFNGLVERTEXP2UIPROC) (GLenum type_, GLuint value_);
typedef void (APIENTRYP PFNGLVERTEXP2UIVPROC) (GLenum type_, const GLuint *value_);
typedef void (APIENTRYP PFNGLVERTEXP3UIPROC) (GLenum type_, GLuint value_);
typedef void (APIENTRYP PFNGLVERTEXP3UIVPROC) (GLenum type_, const GLuint *value_);
typedef void (APIENTRYP PFNGLVERTEXP4UIPROC) (GLenum type_, GLuint value_);
typedef void (APIENTRYP PFNGLVERTEXP4UIVPROC) (GLenum type_, const GLuint *value_);
typedef void (APIENTRYP PFNGLTEXCOORDP1UIPROC) (GLenum type_, GLuint coords_);
typedef void (APIENTRYP PFNGLTEXCOORDP1UIVPROC) (GLenum type_, const GLuint *coords_);
typedef void (APIENTRYP PFNGLTEXCOORDP2UIPROC) (GLenum type_, GLuint coords_);
typedef void (APIENTRYP PFNGLTEXCOORDP2UIVPROC) (GLenum type_, const GLuint *coords_);
typedef void (APIENTRYP PFNGLTEXCOORDP3UIPROC) (GLenum type_, GLuint coords_);
typedef void (APIENTRYP PFNGLTEXCOORDP3UIVPROC) (GLenum type_, const GLuint *coords_);
typedef void (APIENTRYP PFNGLTEXCOORDP4UIPROC) (GLenum type_, GLuint coords_);
typedef void (APIENTRYP PFNGLTEXCOORDP4UIVPROC) (GLenum type_, const GLuint *coords_);
typedef void (APIENTRYP PFNGLMULTITEXCOORDP1UIPROC) (GLenum texture_, GLenum type_, GLuint coords_);
typedef void (APIENTRYP PFNGLMULTITEXCOORDP1UIVPROC) (GLenum texture_, GLenum type_, const GLuint *coords_);
typedef void (APIENTRYP PFNGLMULTITEXCOORDP2UIPROC) (GLenum texture_, GLenum type_, GLuint coords_);
typedef void (APIENTRYP PFNGLMULTITEXCOORDP2UIVPROC) (GLenum texture_, GLenum type_, const GLuint *coords_);
typedef void (APIENTRYP PFNGLMULTITEXCOORDP3UIPROC) (GLenum texture_, GLenum type_, GLuint coords_);
typedef void (APIENTRYP PFNGLMULTITEXCOORDP3UIVPROC) (GLenum texture_, GLenum type_, const GLuint *coords_);
typedef void (APIENTRYP PFNGLMULTITEXCOORDP4UIPROC) (GLenum texture_, GLenum type_, GLuint coords_);
typedef void (APIENTRYP PFNGLMULTITEXCOORDP4UIVPROC) (GLenum texture_, GLenum type_, const GLuint *coords_);
typedef void (APIENTRYP PFNGLNORMALP3UIPROC) (GLenum type_, GLuint coords_);
typedef void (APIENTRYP PFNGLNORMALP3UIVPROC) (GLenum type_, const GLuint *coords_);
typedef void (APIENTRYP PFNGLCOLORP3UIPROC) (GLenum type_, GLuint color_);
typedef void (APIENTRYP PFNGLCOLORP3UIVPROC) (GLenum type_, const GLuint *color_);
typedef void (APIENTRYP PFNGLCOLORP4UIPROC) (GLenum type_, GLuint color_);
typedef void (APIENTRYP PFNGLCOLORP4UIVPROC) (GLenum type_, const GLuint *color_);
typedef void (APIENTRYP PFNGLSECONDARYCOLORP3UIPROC) (GLenum type_, GLuint color_);
typedef void (APIENTRYP PFNGLSECONDARYCOLORP3UIVPROC) (GLenum type_, const GLuint *color_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glBindFragDataLocationIndexed (GLuint program_, GLuint colorNumber_, GLuint index_, const GLchar *name_);
GLAPI GLint APIENTRY glGetFragDataIndex (GLuint program_, const GLchar *name_);
GLAPI void APIENTRY glGenSamplers (GLsizei count_, GLuint *samplers_);
GLAPI void APIENTRY glDeleteSamplers (GLsizei count_, const GLuint *samplers_);
GLAPI GLboolean APIENTRY glIsSampler (GLuint sampler_);
GLAPI void APIENTRY glBindSampler (GLuint unit_, GLuint sampler_);
GLAPI void APIENTRY glSamplerParameteri (GLuint sampler_, GLenum pname_, GLint param_);
GLAPI void APIENTRY glSamplerParameteriv (GLuint sampler_, GLenum pname_, const GLint *param_);
GLAPI void APIENTRY glSamplerParameterf (GLuint sampler_, GLenum pname_, GLfloat param_);
GLAPI void APIENTRY glSamplerParameterfv (GLuint sampler_, GLenum pname_, const GLfloat *param_);
GLAPI void APIENTRY glSamplerParameterIiv (GLuint sampler_, GLenum pname_, const GLint *param_);
GLAPI void APIENTRY glSamplerParameterIuiv (GLuint sampler_, GLenum pname_, const GLuint *param_);
GLAPI void APIENTRY glGetSamplerParameteriv (GLuint sampler_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetSamplerParameterIiv (GLuint sampler_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetSamplerParameterfv (GLuint sampler_, GLenum pname_, GLfloat *params_);
GLAPI void APIENTRY glGetSamplerParameterIuiv (GLuint sampler_, GLenum pname_, GLuint *params_);
GLAPI void APIENTRY glQueryCounter (GLuint id_, GLenum target_);
GLAPI void APIENTRY glGetQueryObjecti64v (GLuint id_, GLenum pname_, GLint64 *params_);
GLAPI void APIENTRY glGetQueryObjectui64v (GLuint id_, GLenum pname_, GLuint64 *params_);
GLAPI void APIENTRY glVertexAttribDivisor (GLuint index_, GLuint divisor_);
GLAPI void APIENTRY glVertexAttribP1ui (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_);
GLAPI void APIENTRY glVertexAttribP1uiv (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_);
GLAPI void APIENTRY glVertexAttribP2ui (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_);
GLAPI void APIENTRY glVertexAttribP2uiv (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_);
GLAPI void APIENTRY glVertexAttribP3ui (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_);
GLAPI void APIENTRY glVertexAttribP3uiv (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_);
GLAPI void APIENTRY glVertexAttribP4ui (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_);
GLAPI void APIENTRY glVertexAttribP4uiv (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_);
GLAPI void APIENTRY glVertexP2ui (GLenum type_, GLuint value_);
GLAPI void APIENTRY glVertexP2uiv (GLenum type_, const GLuint *value_);
GLAPI void APIENTRY glVertexP3ui (GLenum type_, GLuint value_);
GLAPI void APIENTRY glVertexP3uiv (GLenum type_, const GLuint *value_);
GLAPI void APIENTRY glVertexP4ui (GLenum type_, GLuint value_);
GLAPI void APIENTRY glVertexP4uiv (GLenum type_, const GLuint *value_);
GLAPI void APIENTRY glTexCoordP1ui (GLenum type_, GLuint coords_);
GLAPI void APIENTRY glTexCoordP1uiv (GLenum type_, const GLuint *coords_);
GLAPI void APIENTRY glTexCoordP2ui (GLenum type_, GLuint coords_);
GLAPI void APIENTRY glTexCoordP2uiv (GLenum type_, const GLuint *coords_);
GLAPI void APIENTRY glTexCoordP3ui (GLenum type_, GLuint coords_);
GLAPI void APIENTRY glTexCoordP3uiv (GLenum type_, const GLuint *coords_);
GLAPI void APIENTRY glTexCoordP4ui (GLenum type_, GLuint coords_);
GLAPI void APIENTRY glTexCoordP4uiv (GLenum type_, const GLuint *coords_);
GLAPI void APIENTRY glMultiTexCoordP1ui (GLenum texture_, GLenum type_, GLuint coords_);
GLAPI void APIENTRY glMultiTexCoordP1uiv (GLenum texture_, GLenum type_, const GLuint *coords_);
GLAPI void APIENTRY glMultiTexCoordP2ui (GLenum texture_, GLenum type_, GLuint coords_);
GLAPI void APIENTRY glMultiTexCoordP2uiv (GLenum texture_, GLenum type_, const GLuint *coords_);
GLAPI void APIENTRY glMultiTexCoordP3ui (GLenum texture_, GLenum type_, GLuint coords_);
GLAPI void APIENTRY glMultiTexCoordP3uiv (GLenum texture_, GLenum type_, const GLuint *coords_);
GLAPI void APIENTRY glMultiTexCoordP4ui (GLenum texture_, GLenum type_, GLuint coords_);
GLAPI void APIENTRY glMultiTexCoordP4uiv (GLenum texture_, GLenum type_, const GLuint *coords_);
GLAPI void APIENTRY glNormalP3ui (GLenum type_, GLuint coords_);
GLAPI void APIENTRY glNormalP3uiv (GLenum type_, const GLuint *coords_);
GLAPI void APIENTRY glColorP3ui (GLenum type_, GLuint color_);
GLAPI void APIENTRY glColorP3uiv (GLenum type_, const GLuint *color_);
GLAPI void APIENTRY glColorP4ui (GLenum type_, GLuint color_);
GLAPI void APIENTRY glColorP4uiv (GLenum type_, const GLuint *color_);
GLAPI void APIENTRY glSecondaryColorP3ui (GLenum type_, GLuint color_);
GLAPI void APIENTRY glSecondaryColorP3uiv (GLenum type_, const GLuint *color_);
#endif
#endif /* GL_VERSION_3_3 */

#ifndef GL_VERSION_4_0
#define GL_VERSION_4_0 1
#define GL_SAMPLE_SHADING                 0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE       0x8C37
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5F
#define GL_TEXTURE_CUBE_MAP_ARRAY         0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY 0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY   0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY         0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW  0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY     0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY 0x900F
#define GL_DRAW_INDIRECT_BUFFER           0x8F3F
#define GL_DRAW_INDIRECT_BUFFER_BINDING   0x8F43
#define GL_GEOMETRY_SHADER_INVOCATIONS    0x887F
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS 0x8E5A
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET 0x8E5C
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS 0x8E5D
#define GL_MAX_VERTEX_STREAMS             0x8E71
#define GL_DOUBLE_VEC2                    0x8FFC
#define GL_DOUBLE_VEC3                    0x8FFD
#define GL_DOUBLE_VEC4                    0x8FFE
#define GL_DOUBLE_MAT2                    0x8F46
#define GL_DOUBLE_MAT3                    0x8F47
#define GL_DOUBLE_MAT4                    0x8F48
#define GL_DOUBLE_MAT2x3                  0x8F49
#define GL_DOUBLE_MAT2x4                  0x8F4A
#define GL_DOUBLE_MAT3x2                  0x8F4B
#define GL_DOUBLE_MAT3x4                  0x8F4C
#define GL_DOUBLE_MAT4x2                  0x8F4D
#define GL_DOUBLE_MAT4x3                  0x8F4E
#define GL_ACTIVE_SUBROUTINES             0x8DE5
#define GL_ACTIVE_SUBROUTINE_UNIFORMS     0x8DE6
#define GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS 0x8E47
#define GL_ACTIVE_SUBROUTINE_MAX_LENGTH   0x8E48
#define GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH 0x8E49
#define GL_MAX_SUBROUTINES                0x8DE7
#define GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS 0x8DE8
#define GL_NUM_COMPATIBLE_SUBROUTINES     0x8E4A
#define GL_COMPATIBLE_SUBROUTINES         0x8E4B
#define GL_PATCHES                        0x000E
#define GL_PATCH_VERTICES                 0x8E72
#define GL_PATCH_DEFAULT_INNER_LEVEL      0x8E73
#define GL_PATCH_DEFAULT_OUTER_LEVEL      0x8E74
#define GL_TESS_CONTROL_OUTPUT_VERTICES   0x8E75
#define GL_TESS_GEN_MODE                  0x8E76
#define GL_TESS_GEN_SPACING               0x8E77
#define GL_TESS_GEN_VERTEX_ORDER          0x8E78
#define GL_TESS_GEN_POINT_MODE            0x8E79
#define GL_ISOLINES                       0x8E7A
#define GL_FRACTIONAL_ODD                 0x8E7B
#define GL_FRACTIONAL_EVEN                0x8E7C
#define GL_MAX_PATCH_VERTICES             0x8E7D
#define GL_MAX_TESS_GEN_LEVEL             0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS 0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS 0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS 0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS      0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS 0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS 0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS 0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS 0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS 0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS 0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E1F
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER 0x84F0
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER 0x84F1
#define GL_TESS_EVALUATION_SHADER         0x8E87
#define GL_TESS_CONTROL_SHADER            0x8E88
#define GL_TRANSFORM_FEEDBACK             0x8E22
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED 0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE 0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING     0x8E25
#define GL_MAX_TRANSFORM_FEEDBACK_BUFFERS 0x8E70
typedef void (APIENTRYP PFNGLMINSAMPLESHADINGPROC) (GLfloat value_);
typedef void (APIENTRYP PFNGLBLENDEQUATIONIPROC) (GLuint buf_, GLenum mode_);
typedef void (APIENTRYP PFNGLBLENDEQUATIONSEPARATEIPROC) (GLuint buf_, GLenum modeRGB_, GLenum modeAlpha_);
typedef void (APIENTRYP PFNGLBLENDFUNCIPROC) (GLuint buf_, GLenum src_, GLenum dst_);
typedef void (APIENTRYP PFNGLBLENDFUNCSEPARATEIPROC) (GLuint buf_, GLenum srcRGB_, GLenum dstRGB_, GLenum srcAlpha_, GLenum dstAlpha_);
typedef void (APIENTRYP PFNGLDRAWARRAYSINDIRECTPROC) (GLenum mode_, const void *indirect_);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINDIRECTPROC) (GLenum mode_, GLenum type_, const void *indirect_);
typedef void (APIENTRYP PFNGLUNIFORM1DPROC) (GLint location_, GLdouble x_);
typedef void (APIENTRYP PFNGLUNIFORM2DPROC) (GLint location_, GLdouble x_, GLdouble y_);
typedef void (APIENTRYP PFNGLUNIFORM3DPROC) (GLint location_, GLdouble x_, GLdouble y_, GLdouble z_);
typedef void (APIENTRYP PFNGLUNIFORM4DPROC) (GLint location_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_);
typedef void (APIENTRYP PFNGLUNIFORM1DVPROC) (GLint location_, GLsizei count_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLUNIFORM2DVPROC) (GLint location_, GLsizei count_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLUNIFORM3DVPROC) (GLint location_, GLsizei count_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLUNIFORM4DVPROC) (GLint location_, GLsizei count_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2DVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3DVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4DVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X3DVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X4DVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X2DVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X4DVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X2DVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X3DVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLGETUNIFORMDVPROC) (GLuint program_, GLint location_, GLdouble *params_);
typedef GLint (APIENTRYP PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) (GLuint program_, GLenum shadertype_, const GLchar *name_);
typedef GLuint (APIENTRYP PFNGLGETSUBROUTINEINDEXPROC) (GLuint program_, GLenum shadertype_, const GLchar *name_);
typedef void (APIENTRYP PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) (GLuint program_, GLenum shadertype_, GLuint index_, GLenum pname_, GLint *values_);
typedef void (APIENTRYP PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) (GLuint program_, GLenum shadertype_, GLuint index_, GLsizei bufsize_, GLsizei *length_, GLchar *name_);
typedef void (APIENTRYP PFNGLGETACTIVESUBROUTINENAMEPROC) (GLuint program_, GLenum shadertype_, GLuint index_, GLsizei bufsize_, GLsizei *length_, GLchar *name_);
typedef void (APIENTRYP PFNGLUNIFORMSUBROUTINESUIVPROC) (GLenum shadertype_, GLsizei count_, const GLuint *indices_);
typedef void (APIENTRYP PFNGLGETUNIFORMSUBROUTINEUIVPROC) (GLenum shadertype_, GLint location_, GLuint *params_);
typedef void (APIENTRYP PFNGLGETPROGRAMSTAGEIVPROC) (GLuint program_, GLenum shadertype_, GLenum pname_, GLint *values_);
typedef void (APIENTRYP PFNGLPATCHPARAMETERIPROC) (GLenum pname_, GLint value_);
typedef void (APIENTRYP PFNGLPATCHPARAMETERFVPROC) (GLenum pname_, const GLfloat *values_);
typedef void (APIENTRYP PFNGLBINDTRANSFORMFEEDBACKPROC) (GLenum target_, GLuint id_);
typedef void (APIENTRYP PFNGLDELETETRANSFORMFEEDBACKSPROC) (GLsizei n_, const GLuint *ids_);
typedef void (APIENTRYP PFNGLGENTRANSFORMFEEDBACKSPROC) (GLsizei n_, GLuint *ids_);
typedef GLboolean (APIENTRYP PFNGLISTRANSFORMFEEDBACKPROC) (GLuint id_);
typedef void (APIENTRYP PFNGLPAUSETRANSFORMFEEDBACKPROC) (void);
typedef void (APIENTRYP PFNGLRESUMETRANSFORMFEEDBACKPROC) (void);
typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKPROC) (GLenum mode_, GLuint id_);
typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) (GLenum mode_, GLuint id_, GLuint stream_);
typedef void (APIENTRYP PFNGLBEGINQUERYINDEXEDPROC) (GLenum target_, GLuint index_, GLuint id_);
typedef void (APIENTRYP PFNGLENDQUERYINDEXEDPROC) (GLenum target_, GLuint index_);
typedef void (APIENTRYP PFNGLGETQUERYINDEXEDIVPROC) (GLenum target_, GLuint index_, GLenum pname_, GLint *params_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glMinSampleShading (GLfloat value_);
GLAPI void APIENTRY glBlendEquationi (GLuint buf_, GLenum mode_);
GLAPI void APIENTRY glBlendEquationSeparatei (GLuint buf_, GLenum modeRGB_, GLenum modeAlpha_);
GLAPI void APIENTRY glBlendFunci (GLuint buf_, GLenum src_, GLenum dst_);
GLAPI void APIENTRY glBlendFuncSeparatei (GLuint buf_, GLenum srcRGB_, GLenum dstRGB_, GLenum srcAlpha_, GLenum dstAlpha_);
GLAPI void APIENTRY glDrawArraysIndirect (GLenum mode_, const void *indirect_);
GLAPI void APIENTRY glDrawElementsIndirect (GLenum mode_, GLenum type_, const void *indirect_);
GLAPI void APIENTRY glUniform1d (GLint location_, GLdouble x_);
GLAPI void APIENTRY glUniform2d (GLint location_, GLdouble x_, GLdouble y_);
GLAPI void APIENTRY glUniform3d (GLint location_, GLdouble x_, GLdouble y_, GLdouble z_);
GLAPI void APIENTRY glUniform4d (GLint location_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_);
GLAPI void APIENTRY glUniform1dv (GLint location_, GLsizei count_, const GLdouble *value_);
GLAPI void APIENTRY glUniform2dv (GLint location_, GLsizei count_, const GLdouble *value_);
GLAPI void APIENTRY glUniform3dv (GLint location_, GLsizei count_, const GLdouble *value_);
GLAPI void APIENTRY glUniform4dv (GLint location_, GLsizei count_, const GLdouble *value_);
GLAPI void APIENTRY glUniformMatrix2dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glUniformMatrix3dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glUniformMatrix4dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glUniformMatrix2x3dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glUniformMatrix2x4dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glUniformMatrix3x2dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glUniformMatrix3x4dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glUniformMatrix4x2dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glUniformMatrix4x3dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glGetUniformdv (GLuint program_, GLint location_, GLdouble *params_);
GLAPI GLint APIENTRY glGetSubroutineUniformLocation (GLuint program_, GLenum shadertype_, const GLchar *name_);
GLAPI GLuint APIENTRY glGetSubroutineIndex (GLuint program_, GLenum shadertype_, const GLchar *name_);
GLAPI void APIENTRY glGetActiveSubroutineUniformiv (GLuint program_, GLenum shadertype_, GLuint index_, GLenum pname_, GLint *values_);
GLAPI void APIENTRY glGetActiveSubroutineUniformName (GLuint program_, GLenum shadertype_, GLuint index_, GLsizei bufsize_, GLsizei *length_, GLchar *name_);
GLAPI void APIENTRY glGetActiveSubroutineName (GLuint program_, GLenum shadertype_, GLuint index_, GLsizei bufsize_, GLsizei *length_, GLchar *name_);
GLAPI void APIENTRY glUniformSubroutinesuiv (GLenum shadertype_, GLsizei count_, const GLuint *indices_);
GLAPI void APIENTRY glGetUniformSubroutineuiv (GLenum shadertype_, GLint location_, GLuint *params_);
GLAPI void APIENTRY glGetProgramStageiv (GLuint program_, GLenum shadertype_, GLenum pname_, GLint *values_);
GLAPI void APIENTRY glPatchParameteri (GLenum pname_, GLint value_);
GLAPI void APIENTRY glPatchParameterfv (GLenum pname_, const GLfloat *values_);
GLAPI void APIENTRY glBindTransformFeedback (GLenum target_, GLuint id_);
GLAPI void APIENTRY glDeleteTransformFeedbacks (GLsizei n_, const GLuint *ids_);
GLAPI void APIENTRY glGenTransformFeedbacks (GLsizei n_, GLuint *ids_);
GLAPI GLboolean APIENTRY glIsTransformFeedback (GLuint id_);
GLAPI void APIENTRY glPauseTransformFeedback (void);
GLAPI void APIENTRY glResumeTransformFeedback (void);
GLAPI void APIENTRY glDrawTransformFeedback (GLenum mode_, GLuint id_);
GLAPI void APIENTRY glDrawTransformFeedbackStream (GLenum mode_, GLuint id_, GLuint stream_);
GLAPI void APIENTRY glBeginQueryIndexed (GLenum target_, GLuint index_, GLuint id_);
GLAPI void APIENTRY glEndQueryIndexed (GLenum target_, GLuint index_);
GLAPI void APIENTRY glGetQueryIndexediv (GLenum target_, GLuint index_, GLenum pname_, GLint *params_);
#endif
#endif /* GL_VERSION_4_0 */

#ifndef GL_VERSION_4_1
#define GL_VERSION_4_1 1
#define GL_FIXED                          0x140C
#define GL_IMPLEMENTATION_COLOR_READ_TYPE 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B
#define GL_LOW_FLOAT                      0x8DF0
#define GL_MEDIUM_FLOAT                   0x8DF1
#define GL_HIGH_FLOAT                     0x8DF2
#define GL_LOW_INT                        0x8DF3
#define GL_MEDIUM_INT                     0x8DF4
#define GL_HIGH_INT                       0x8DF5
#define GL_SHADER_COMPILER                0x8DFA
#define GL_SHADER_BINARY_FORMATS          0x8DF8
#define GL_NUM_SHADER_BINARY_FORMATS      0x8DF9
#define GL_MAX_VERTEX_UNIFORM_VECTORS     0x8DFB
#define GL_MAX_VARYING_VECTORS            0x8DFC
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS   0x8DFD
#define GL_RGB565                         0x8D62
#define GL_PROGRAM_BINARY_RETRIEVABLE_HINT 0x8257
#define GL_PROGRAM_BINARY_LENGTH          0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS     0x87FE
#define GL_PROGRAM_BINARY_FORMATS         0x87FF
#define GL_VERTEX_SHADER_BIT              0x00000001
#define GL_FRAGMENT_SHADER_BIT            0x00000002
#define GL_GEOMETRY_SHADER_BIT            0x00000004
#define GL_TESS_CONTROL_SHADER_BIT        0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT     0x00000010
#define GL_ALL_SHADER_BITS                0xFFFFFFFF
#define GL_PROGRAM_SEPARABLE              0x8258
#define GL_ACTIVE_PROGRAM                 0x8259
#define GL_PROGRAM_PIPELINE_BINDING       0x825A
#define GL_MAX_VIEWPORTS                  0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS         0x825C
#define GL_VIEWPORT_BOUNDS_RANGE          0x825D
#define GL_LAYER_PROVOKING_VERTEX         0x825E
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX 0x825F
#define GL_UNDEFINED_VERTEX               0x8260
typedef void (APIENTRYP PFNGLRELEASESHADERCOMPILERPROC) (void);
typedef void (APIENTRYP PFNGLSHADERBINARYPROC) (GLsizei count_, const GLuint *shaders_, GLenum binaryformat_, const void *binary_, GLsizei length_);
typedef void (APIENTRYP PFNGLGETSHADERPRECISIONFORMATPROC) (GLenum shadertype_, GLenum precisiontype_, GLint *range_, GLint *precision_);
typedef void (APIENTRYP PFNGLDEPTHRANGEFPROC) (GLfloat n_, GLfloat f_);
typedef void (APIENTRYP PFNGLCLEARDEPTHFPROC) (GLfloat d_);
typedef void (APIENTRYP PFNGLGETPROGRAMBINARYPROC) (GLuint program_, GLsizei bufSize_, GLsizei *length_, GLenum *binaryFormat_, void *binary_);
typedef void (APIENTRYP PFNGLPROGRAMBINARYPROC) (GLuint program_, GLenum binaryFormat_, const void *binary_, GLsizei length_);
typedef void (APIENTRYP PFNGLPROGRAMPARAMETERIPROC) (GLuint program_, GLenum pname_, GLint value_);
typedef void (APIENTRYP PFNGLUSEPROGRAMSTAGESPROC) (GLuint pipeline_, GLbitfield stages_, GLuint program_);
typedef void (APIENTRYP PFNGLACTIVESHADERPROGRAMPROC) (GLuint pipeline_, GLuint program_);
typedef GLuint (APIENTRYP PFNGLCREATESHADERPROGRAMVPROC) (GLenum type_, GLsizei count_, const GLchar *const*strings_);
typedef void (APIENTRYP PFNGLBINDPROGRAMPIPELINEPROC) (GLuint pipeline_);
typedef void (APIENTRYP PFNGLDELETEPROGRAMPIPELINESPROC) (GLsizei n_, const GLuint *pipelines_);
typedef void (APIENTRYP PFNGLGENPROGRAMPIPELINESPROC) (GLsizei n_, GLuint *pipelines_);
typedef GLboolean (APIENTRYP PFNGLISPROGRAMPIPELINEPROC) (GLuint pipeline_);
typedef void (APIENTRYP PFNGLGETPROGRAMPIPELINEIVPROC) (GLuint pipeline_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IPROC) (GLuint program_, GLint location_, GLint v0_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FPROC) (GLuint program_, GLint location_, GLfloat v0_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DPROC) (GLuint program_, GLint location_, GLdouble v0_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIPROC) (GLuint program_, GLint location_, GLuint v0_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IPROC) (GLuint program_, GLint location_, GLint v0_, GLint v1_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FPROC) (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DPROC) (GLuint program_, GLint location_, GLdouble v0_, GLdouble v1_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIPROC) (GLuint program_, GLint location_, GLuint v0_, GLuint v1_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IPROC) (GLuint program_, GLint location_, GLint v0_, GLint v1_, GLint v2_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FPROC) (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DPROC) (GLuint program_, GLint location_, GLdouble v0_, GLdouble v1_, GLdouble v2_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIPROC) (GLuint program_, GLint location_, GLuint v0_, GLuint v1_, GLuint v2_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IPROC) (GLuint program_, GLint location_, GLint v0_, GLint v1_, GLint v2_, GLint v3_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FPROC) (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_, GLfloat v3_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DPROC) (GLuint program_, GLint location_, GLdouble v0_, GLdouble v1_, GLdouble v2_, GLdouble v3_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIPROC) (GLuint program_, GLint location_, GLuint v0_, GLuint v1_, GLuint v2_, GLuint v3_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2FVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3FVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4FVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2DVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3DVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4DVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
typedef void (APIENTRYP PFNGLVALIDATEPROGRAMPIPELINEPROC) (GLuint pipeline_);
typedef void (APIENTRYP PFNGLGETPROGRAMPIPELINEINFOLOGPROC) (GLuint pipeline_, GLsizei bufSize_, GLsizei *length_, GLchar *infoLog_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1DPROC) (GLuint index_, GLdouble x_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2DPROC) (GLuint index_, GLdouble x_, GLdouble y_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3DPROC) (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4DPROC) (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1DVPROC) (GLuint index_, const GLdouble *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2DVPROC) (GLuint index_, const GLdouble *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3DVPROC) (GLuint index_, const GLdouble *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4DVPROC) (GLuint index_, const GLdouble *v_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBLPOINTERPROC) (GLuint index_, GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLDVPROC) (GLuint index_, GLenum pname_, GLdouble *params_);
typedef void (APIENTRYP PFNGLVIEWPORTARRAYVPROC) (GLuint first_, GLsizei count_, const GLfloat *v_);
typedef void (APIENTRYP PFNGLVIEWPORTINDEXEDFPROC) (GLuint index_, GLfloat x_, GLfloat y_, GLfloat w_, GLfloat h_);
typedef void (APIENTRYP PFNGLVIEWPORTINDEXEDFVPROC) (GLuint index_, const GLfloat *v_);
typedef void (APIENTRYP PFNGLSCISSORARRAYVPROC) (GLuint first_, GLsizei count_, const GLint *v_);
typedef void (APIENTRYP PFNGLSCISSORINDEXEDPROC) (GLuint index_, GLint left_, GLint bottom_, GLsizei width_, GLsizei height_);
typedef void (APIENTRYP PFNGLSCISSORINDEXEDVPROC) (GLuint index_, const GLint *v_);
typedef void (APIENTRYP PFNGLDEPTHRANGEARRAYVPROC) (GLuint first_, GLsizei count_, const GLdouble *v_);
typedef void (APIENTRYP PFNGLDEPTHRANGEINDEXEDPROC) (GLuint index_, GLdouble n_, GLdouble f_);
typedef void (APIENTRYP PFNGLGETFLOATI_VPROC) (GLenum target_, GLuint index_, GLfloat *data_);
typedef void (APIENTRYP PFNGLGETDOUBLEI_VPROC) (GLenum target_, GLuint index_, GLdouble *data_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glReleaseShaderCompiler (void);
GLAPI void APIENTRY glShaderBinary (GLsizei count_, const GLuint *shaders_, GLenum binaryformat_, const void *binary_, GLsizei length_);
GLAPI void APIENTRY glGetShaderPrecisionFormat (GLenum shadertype_, GLenum precisiontype_, GLint *range_, GLint *precision_);
GLAPI void APIENTRY glDepthRangef (GLfloat n_, GLfloat f_);
GLAPI void APIENTRY glClearDepthf (GLfloat d_);
GLAPI void APIENTRY glGetProgramBinary (GLuint program_, GLsizei bufSize_, GLsizei *length_, GLenum *binaryFormat_, void *binary_);
GLAPI void APIENTRY glProgramBinary (GLuint program_, GLenum binaryFormat_, const void *binary_, GLsizei length_);
GLAPI void APIENTRY glProgramParameteri (GLuint program_, GLenum pname_, GLint value_);
GLAPI void APIENTRY glUseProgramStages (GLuint pipeline_, GLbitfield stages_, GLuint program_);
GLAPI void APIENTRY glActiveShaderProgram (GLuint pipeline_, GLuint program_);
GLAPI GLuint APIENTRY glCreateShaderProgramv (GLenum type_, GLsizei count_, const GLchar *const*strings_);
GLAPI void APIENTRY glBindProgramPipeline (GLuint pipeline_);
GLAPI void APIENTRY glDeleteProgramPipelines (GLsizei n_, const GLuint *pipelines_);
GLAPI void APIENTRY glGenProgramPipelines (GLsizei n_, GLuint *pipelines_);
GLAPI GLboolean APIENTRY glIsProgramPipeline (GLuint pipeline_);
GLAPI void APIENTRY glGetProgramPipelineiv (GLuint pipeline_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glProgramUniform1i (GLuint program_, GLint location_, GLint v0_);
GLAPI void APIENTRY glProgramUniform1iv (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
GLAPI void APIENTRY glProgramUniform1f (GLuint program_, GLint location_, GLfloat v0_);
GLAPI void APIENTRY glProgramUniform1fv (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
GLAPI void APIENTRY glProgramUniform1d (GLuint program_, GLint location_, GLdouble v0_);
GLAPI void APIENTRY glProgramUniform1dv (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_);
GLAPI void APIENTRY glProgramUniform1ui (GLuint program_, GLint location_, GLuint v0_);
GLAPI void APIENTRY glProgramUniform1uiv (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
GLAPI void APIENTRY glProgramUniform2i (GLuint program_, GLint location_, GLint v0_, GLint v1_);
GLAPI void APIENTRY glProgramUniform2iv (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
GLAPI void APIENTRY glProgramUniform2f (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_);
GLAPI void APIENTRY glProgramUniform2fv (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
GLAPI void APIENTRY glProgramUniform2d (GLuint program_, GLint location_, GLdouble v0_, GLdouble v1_);
GLAPI void APIENTRY glProgramUniform2dv (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_);
GLAPI void APIENTRY glProgramUniform2ui (GLuint program_, GLint location_, GLuint v0_, GLuint v1_);
GLAPI void APIENTRY glProgramUniform2uiv (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
GLAPI void APIENTRY glProgramUniform3i (GLuint program_, GLint location_, GLint v0_, GLint v1_, GLint v2_);
GLAPI void APIENTRY glProgramUniform3iv (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
GLAPI void APIENTRY glProgramUniform3f (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_);
GLAPI void APIENTRY glProgramUniform3fv (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
GLAPI void APIENTRY glProgramUniform3d (GLuint program_, GLint location_, GLdouble v0_, GLdouble v1_, GLdouble v2_);
GLAPI void APIENTRY glProgramUniform3dv (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_);
GLAPI void APIENTRY glProgramUniform3ui (GLuint program_, GLint location_, GLuint v0_, GLuint v1_, GLuint v2_);
GLAPI void APIENTRY glProgramUniform3uiv (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
GLAPI void APIENTRY glProgramUniform4i (GLuint program_, GLint location_, GLint v0_, GLint v1_, GLint v2_, GLint v3_);
GLAPI void APIENTRY glProgramUniform4iv (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
GLAPI void APIENTRY glProgramUniform4f (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_, GLfloat v3_);
GLAPI void APIENTRY glProgramUniform4fv (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
GLAPI void APIENTRY glProgramUniform4d (GLuint program_, GLint location_, GLdouble v0_, GLdouble v1_, GLdouble v2_, GLdouble v3_);
GLAPI void APIENTRY glProgramUniform4dv (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_);
GLAPI void APIENTRY glProgramUniform4ui (GLuint program_, GLint location_, GLuint v0_, GLuint v1_, GLuint v2_, GLuint v3_);
GLAPI void APIENTRY glProgramUniform4uiv (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
GLAPI void APIENTRY glProgramUniformMatrix2fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glProgramUniformMatrix3fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glProgramUniformMatrix4fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glProgramUniformMatrix2dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glProgramUniformMatrix3dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glProgramUniformMatrix4dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glProgramUniformMatrix2x3fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glProgramUniformMatrix3x2fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glProgramUniformMatrix2x4fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glProgramUniformMatrix4x2fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glProgramUniformMatrix3x4fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glProgramUniformMatrix4x3fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GLAPI void APIENTRY glProgramUniformMatrix2x3dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glProgramUniformMatrix3x2dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glProgramUniformMatrix2x4dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glProgramUniformMatrix4x2dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glProgramUniformMatrix3x4dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glProgramUniformMatrix4x3dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
GLAPI void APIENTRY glValidateProgramPipeline (GLuint pipeline_);
GLAPI void APIENTRY glGetProgramPipelineInfoLog (GLuint pipeline_, GLsizei bufSize_, GLsizei *length_, GLchar *infoLog_);
GLAPI void APIENTRY glVertexAttribL1d (GLuint index_, GLdouble x_);
GLAPI void APIENTRY glVertexAttribL2d (GLuint index_, GLdouble x_, GLdouble y_);
GLAPI void APIENTRY glVertexAttribL3d (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_);
GLAPI void APIENTRY glVertexAttribL4d (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_);
GLAPI void APIENTRY glVertexAttribL1dv (GLuint index_, const GLdouble *v_);
GLAPI void APIENTRY glVertexAttribL2dv (GLuint index_, const GLdouble *v_);
GLAPI void APIENTRY glVertexAttribL3dv (GLuint index_, const GLdouble *v_);
GLAPI void APIENTRY glVertexAttribL4dv (GLuint index_, const GLdouble *v_);
GLAPI void APIENTRY glVertexAttribLPointer (GLuint index_, GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
GLAPI void APIENTRY glGetVertexAttribLdv (GLuint index_, GLenum pname_, GLdouble *params_);
GLAPI void APIENTRY glViewportArrayv (GLuint first_, GLsizei count_, const GLfloat *v_);
GLAPI void APIENTRY glViewportIndexedf (GLuint index_, GLfloat x_, GLfloat y_, GLfloat w_, GLfloat h_);
GLAPI void APIENTRY glViewportIndexedfv (GLuint index_, const GLfloat *v_);
GLAPI void APIENTRY glScissorArrayv (GLuint first_, GLsizei count_, const GLint *v_);
GLAPI void APIENTRY glScissorIndexed (GLuint index_, GLint left_, GLint bottom_, GLsizei width_, GLsizei height_);
GLAPI void APIENTRY glScissorIndexedv (GLuint index_, const GLint *v_);
GLAPI void APIENTRY glDepthRangeArrayv (GLuint first_, GLsizei count_, const GLdouble *v_);
GLAPI void APIENTRY glDepthRangeIndexed (GLuint index_, GLdouble n_, GLdouble f_);
GLAPI void APIENTRY glGetFloati_v (GLenum target_, GLuint index_, GLfloat *data_);
GLAPI void APIENTRY glGetDoublei_v (GLenum target_, GLuint index_, GLdouble *data_);
#endif
#endif /* GL_VERSION_4_1 */

#ifndef GL_VERSION_4_2
#define GL_VERSION_4_2 1
#define GL_COPY_READ_BUFFER_BINDING       0x8F36
#define GL_COPY_WRITE_BUFFER_BINDING      0x8F37
#define GL_TRANSFORM_FEEDBACK_ACTIVE      0x8E24
#define GL_TRANSFORM_FEEDBACK_PAUSED      0x8E23
#define GL_UNPACK_COMPRESSED_BLOCK_WIDTH  0x9127
#define GL_UNPACK_COMPRESSED_BLOCK_HEIGHT 0x9128
#define GL_UNPACK_COMPRESSED_BLOCK_DEPTH  0x9129
#define GL_UNPACK_COMPRESSED_BLOCK_SIZE   0x912A
#define GL_PACK_COMPRESSED_BLOCK_WIDTH    0x912B
#define GL_PACK_COMPRESSED_BLOCK_HEIGHT   0x912C
#define GL_PACK_COMPRESSED_BLOCK_DEPTH    0x912D
#define GL_PACK_COMPRESSED_BLOCK_SIZE     0x912E
#define GL_NUM_SAMPLE_COUNTS              0x9380
#define GL_MIN_MAP_BUFFER_ALIGNMENT       0x90BC
#define GL_ATOMIC_COUNTER_BUFFER          0x92C0
#define GL_ATOMIC_COUNTER_BUFFER_BINDING  0x92C1
#define GL_ATOMIC_COUNTER_BUFFER_START    0x92C2
#define GL_ATOMIC_COUNTER_BUFFER_SIZE     0x92C3
#define GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE 0x92C4
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS 0x92C5
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES 0x92C6
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER 0x92C7
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER 0x92C8
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER 0x92C9
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER 0x92CA
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER 0x92CB
#define GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS 0x92CC
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS 0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS 0x92CE
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS 0x92CF
#define GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS 0x92D0
#define GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS 0x92D1
#define GL_MAX_VERTEX_ATOMIC_COUNTERS     0x92D2
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS 0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS 0x92D4
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS   0x92D5
#define GL_MAX_FRAGMENT_ATOMIC_COUNTERS   0x92D6
#define GL_MAX_COMBINED_ATOMIC_COUNTERS   0x92D7
#define GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE 0x92D8
#define GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS 0x92DC
#define GL_ACTIVE_ATOMIC_COUNTER_BUFFERS  0x92D9
#define GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX 0x92DA
#define GL_UNSIGNED_INT_ATOMIC_COUNTER    0x92DB
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT 0x00000001
#define GL_ELEMENT_ARRAY_BARRIER_BIT      0x00000002
#define GL_UNIFORM_BARRIER_BIT            0x00000004
#define GL_TEXTURE_FETCH_BARRIER_BIT      0x00000008
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT 0x00000020
#define GL_COMMAND_BARRIER_BIT            0x00000040
#define GL_PIXEL_BUFFER_BARRIER_BIT       0x00000080
#define GL_TEXTURE_UPDATE_BARRIER_BIT     0x00000100
#define GL_BUFFER_UPDATE_BARRIER_BIT      0x00000200
#define GL_FRAMEBUFFER_BARRIER_BIT        0x00000400
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT 0x00000800
#define GL_ATOMIC_COUNTER_BARRIER_BIT     0x00001000
#define GL_ALL_BARRIER_BITS               0xFFFFFFFF
#define GL_MAX_IMAGE_UNITS                0x8F38
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS 0x8F39
#define GL_IMAGE_BINDING_NAME             0x8F3A
#define GL_IMAGE_BINDING_LEVEL            0x8F3B
#define GL_IMAGE_BINDING_LAYERED          0x8F3C
#define GL_IMAGE_BINDING_LAYER            0x8F3D
#define GL_IMAGE_BINDING_ACCESS           0x8F3E
#define GL_IMAGE_1D                       0x904C
#define GL_IMAGE_2D                       0x904D
#define GL_IMAGE_3D                       0x904E
#define GL_IMAGE_2D_RECT                  0x904F
#define GL_IMAGE_CUBE                     0x9050
#define GL_IMAGE_BUFFER                   0x9051
#define GL_IMAGE_1D_ARRAY                 0x9052
#define GL_IMAGE_2D_ARRAY                 0x9053
#define GL_IMAGE_CUBE_MAP_ARRAY           0x9054
#define GL_IMAGE_2D_MULTISAMPLE           0x9055
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY     0x9056
#define GL_INT_IMAGE_1D                   0x9057
#define GL_INT_IMAGE_2D                   0x9058
#define GL_INT_IMAGE_3D                   0x9059
#define GL_INT_IMAGE_2D_RECT              0x905A
#define GL_INT_IMAGE_CUBE                 0x905B
#define GL_INT_IMAGE_BUFFER               0x905C
#define GL_INT_IMAGE_1D_ARRAY             0x905D
#define GL_INT_IMAGE_2D_ARRAY             0x905E
#define GL_INT_IMAGE_CUBE_MAP_ARRAY       0x905F
#define GL_INT_IMAGE_2D_MULTISAMPLE       0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x9061
#define GL_UNSIGNED_INT_IMAGE_1D          0x9062
#define GL_UNSIGNED_INT_IMAGE_2D          0x9063
#define GL_UNSIGNED_INT_IMAGE_3D          0x9064
#define GL_UNSIGNED_INT_IMAGE_2D_RECT     0x9065
#define GL_UNSIGNED_INT_IMAGE_CUBE        0x9066
#define GL_UNSIGNED_INT_IMAGE_BUFFER      0x9067
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY    0x9068
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY    0x9069
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY 0x906A
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE 0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x906C
#define GL_MAX_IMAGE_SAMPLES              0x906D
#define GL_IMAGE_BINDING_FORMAT           0x906E
#define GL_IMAGE_FORMAT_COMPATIBILITY_TYPE 0x90C7
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE 0x90C8
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS 0x90C9
#define GL_MAX_VERTEX_IMAGE_UNIFORMS      0x90CA
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS 0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS 0x90CC
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS    0x90CD
#define GL_MAX_FRAGMENT_IMAGE_UNIFORMS    0x90CE
#define GL_MAX_COMBINED_IMAGE_UNIFORMS    0x90CF
#define GL_COMPRESSED_RGBA_BPTC_UNORM     0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM 0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT 0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT 0x8E8F
#define GL_TEXTURE_IMMUTABLE_FORMAT       0x912F
typedef void (APIENTRYP PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) (GLenum mode_, GLint first_, GLsizei count_, GLsizei instancecount_, GLuint baseinstance_);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLuint baseinstance_);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLint basevertex_, GLuint baseinstance_);
typedef void (APIENTRYP PFNGLGETINTERNALFORMATIVPROC) (GLenum target_, GLenum internalformat_, GLenum pname_, GLsizei bufSize_, GLint *params_);
typedef void (APIENTRYP PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) (GLuint program_, GLuint bufferIndex_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLBINDIMAGETEXTUREPROC) (GLuint unit_, GLuint texture_, GLint level_, GLboolean layered_, GLint layer_, GLenum access_, GLenum format_);
typedef void (APIENTRYP PFNGLMEMORYBARRIERPROC) (GLbitfield barriers_);
typedef void (APIENTRYP PFNGLTEXSTORAGE1DPROC) (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_);
typedef void (APIENTRYP PFNGLTEXSTORAGE2DPROC) (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_);
typedef void (APIENTRYP PFNGLTEXSTORAGE3DPROC) (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_);
typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) (GLenum mode_, GLuint id_, GLsizei instancecount_);
typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) (GLenum mode_, GLuint id_, GLuint stream_, GLsizei instancecount_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glDrawArraysInstancedBaseInstance (GLenum mode_, GLint first_, GLsizei count_, GLsizei instancecount_, GLuint baseinstance_);
GLAPI void APIENTRY glDrawElementsInstancedBaseInstance (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLuint baseinstance_);
GLAPI void APIENTRY glDrawElementsInstancedBaseVertexBaseInstance (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLint basevertex_, GLuint baseinstance_);
GLAPI void APIENTRY glGetInternalformativ (GLenum target_, GLenum internalformat_, GLenum pname_, GLsizei bufSize_, GLint *params_);
GLAPI void APIENTRY glGetActiveAtomicCounterBufferiv (GLuint program_, GLuint bufferIndex_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glBindImageTexture (GLuint unit_, GLuint texture_, GLint level_, GLboolean layered_, GLint layer_, GLenum access_, GLenum format_);
GLAPI void APIENTRY glMemoryBarrier (GLbitfield barriers_);
GLAPI void APIENTRY glTexStorage1D (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_);
GLAPI void APIENTRY glTexStorage2D (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_);
GLAPI void APIENTRY glTexStorage3D (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_);
GLAPI void APIENTRY glDrawTransformFeedbackInstanced (GLenum mode_, GLuint id_, GLsizei instancecount_);
GLAPI void APIENTRY glDrawTransformFeedbackStreamInstanced (GLenum mode_, GLuint id_, GLuint stream_, GLsizei instancecount_);
#endif
#endif /* GL_VERSION_4_2 */

#ifndef GL_VERSION_4_3
#define GL_VERSION_4_3 1
typedef void (APIENTRY  *GLDEBUGPROC)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
#define GL_NUM_SHADING_LANGUAGE_VERSIONS  0x82E9
#define GL_VERTEX_ATTRIB_ARRAY_LONG       0x874E
#define GL_COMPRESSED_RGB8_ETC2           0x9274
#define GL_COMPRESSED_SRGB8_ETC2          0x9275
#define GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9276
#define GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9277
#define GL_COMPRESSED_RGBA8_ETC2_EAC      0x9278
#define GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC 0x9279
#define GL_COMPRESSED_R11_EAC             0x9270
#define GL_COMPRESSED_SIGNED_R11_EAC      0x9271
#define GL_COMPRESSED_RG11_EAC            0x9272
#define GL_COMPRESSED_SIGNED_RG11_EAC     0x9273
#define GL_PRIMITIVE_RESTART_FIXED_INDEX  0x8D69
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE 0x8D6A
#define GL_MAX_ELEMENT_INDEX              0x8D6B
#define GL_COMPUTE_SHADER                 0x91B9
#define GL_MAX_COMPUTE_UNIFORM_BLOCKS     0x91BB
#define GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS 0x91BC
#define GL_MAX_COMPUTE_IMAGE_UNIFORMS     0x91BD
#define GL_MAX_COMPUTE_SHARED_MEMORY_SIZE 0x8262
#define GL_MAX_COMPUTE_UNIFORM_COMPONENTS 0x8263
#define GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS 0x8264
#define GL_MAX_COMPUTE_ATOMIC_COUNTERS    0x8265
#define GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS 0x8266
#define GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS 0x90EB
#define GL_MAX_COMPUTE_WORK_GROUP_COUNT   0x91BE
#define GL_MAX_COMPUTE_WORK_GROUP_SIZE    0x91BF
#define GL_COMPUTE_WORK_GROUP_SIZE        0x8267
#define GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER 0x90EC
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER 0x90ED
#define GL_DISPATCH_INDIRECT_BUFFER       0x90EE
#define GL_DISPATCH_INDIRECT_BUFFER_BINDING 0x90EF
#define GL_COMPUTE_SHADER_BIT             0x00000020
#define GL_DEBUG_OUTPUT_SYNCHRONOUS       0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION        0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM      0x8245
#define GL_DEBUG_SOURCE_API               0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM     0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER   0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY       0x8249
#define GL_DEBUG_SOURCE_APPLICATION       0x824A
#define GL_DEBUG_SOURCE_OTHER             0x824B
#define GL_DEBUG_TYPE_ERROR               0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR  0x824E
#define GL_DEBUG_TYPE_PORTABILITY         0x824F
#define GL_DEBUG_TYPE_PERFORMANCE         0x8250
#define GL_DEBUG_TYPE_OTHER               0x8251
#define GL_MAX_DEBUG_MESSAGE_LENGTH       0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES      0x9144
#define GL_DEBUG_LOGGED_MESSAGES          0x9145
#define GL_DEBUG_SEVERITY_HIGH            0x9146
#define GL_DEBUG_SEVERITY_MEDIUM          0x9147
#define GL_DEBUG_SEVERITY_LOW             0x9148
#define GL_DEBUG_TYPE_MARKER              0x8268
#define GL_DEBUG_TYPE_PUSH_GROUP          0x8269
#define GL_DEBUG_TYPE_POP_GROUP           0x826A
#define GL_DEBUG_SEVERITY_NOTIFICATION    0x826B
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH    0x826C
#define GL_DEBUG_GROUP_STACK_DEPTH        0x826D
#define GL_BUFFER                         0x82E0
#define GL_SHADER                         0x82E1
#define GL_PROGRAM                        0x82E2
#define GL_QUERY                          0x82E3
#define GL_PROGRAM_PIPELINE               0x82E4
#define GL_SAMPLER                        0x82E6
#define GL_MAX_LABEL_LENGTH               0x82E8
#define GL_DEBUG_OUTPUT                   0x92E0
#define GL_CONTEXT_FLAG_DEBUG_BIT         0x00000002
#define GL_MAX_UNIFORM_LOCATIONS          0x826E
#define GL_FRAMEBUFFER_DEFAULT_WIDTH      0x9310
#define GL_FRAMEBUFFER_DEFAULT_HEIGHT     0x9311
#define GL_FRAMEBUFFER_DEFAULT_LAYERS     0x9312
#define GL_FRAMEBUFFER_DEFAULT_SAMPLES    0x9313
#define GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS 0x9314
#define GL_MAX_FRAMEBUFFER_WIDTH          0x9315
#define GL_MAX_FRAMEBUFFER_HEIGHT         0x9316
#define GL_MAX_FRAMEBUFFER_LAYERS         0x9317
#define GL_MAX_FRAMEBUFFER_SAMPLES        0x9318
#define GL_INTERNALFORMAT_SUPPORTED       0x826F
#define GL_INTERNALFORMAT_PREFERRED       0x8270
#define GL_INTERNALFORMAT_RED_SIZE        0x8271
#define GL_INTERNALFORMAT_GREEN_SIZE      0x8272
#define GL_INTERNALFORMAT_BLUE_SIZE       0x8273
#define GL_INTERNALFORMAT_ALPHA_SIZE      0x8274
#define GL_INTERNALFORMAT_DEPTH_SIZE      0x8275
#define GL_INTERNALFORMAT_STENCIL_SIZE    0x8276
#define GL_INTERNALFORMAT_SHARED_SIZE     0x8277
#define GL_INTERNALFORMAT_RED_TYPE        0x8278
#define GL_INTERNALFORMAT_GREEN_TYPE      0x8279
#define GL_INTERNALFORMAT_BLUE_TYPE       0x827A
#define GL_INTERNALFORMAT_ALPHA_TYPE      0x827B
#define GL_INTERNALFORMAT_DEPTH_TYPE      0x827C
#define GL_INTERNALFORMAT_STENCIL_TYPE    0x827D
#define GL_MAX_WIDTH                      0x827E
#define GL_MAX_HEIGHT                     0x827F
#define GL_MAX_DEPTH                      0x8280
#define GL_MAX_LAYERS                     0x8281
#define GL_MAX_COMBINED_DIMENSIONS        0x8282
#define GL_COLOR_COMPONENTS               0x8283
#define GL_DEPTH_COMPONENTS               0x8284
#define GL_STENCIL_COMPONENTS             0x8285
#define GL_COLOR_RENDERABLE               0x8286
#define GL_DEPTH_RENDERABLE               0x8287
#define GL_STENCIL_RENDERABLE             0x8288
#define GL_FRAMEBUFFER_RENDERABLE         0x8289
#define GL_FRAMEBUFFER_RENDERABLE_LAYERED 0x828A
#define GL_FRAMEBUFFER_BLEND              0x828B
#define GL_READ_PIXELS                    0x828C
#define GL_READ_PIXELS_FORMAT             0x828D
#define GL_READ_PIXELS_TYPE               0x828E
#define GL_TEXTURE_IMAGE_FORMAT           0x828F
#define GL_TEXTURE_IMAGE_TYPE             0x8290
#define GL_GET_TEXTURE_IMAGE_FORMAT       0x8291
#define GL_GET_TEXTURE_IMAGE_TYPE         0x8292
#define GL_MIPMAP                         0x8293
#define GL_MANUAL_GENERATE_MIPMAP         0x8294
#define GL_AUTO_GENERATE_MIPMAP           0x8295
#define GL_COLOR_ENCODING                 0x8296
#define GL_SRGB_READ                      0x8297
#define GL_SRGB_WRITE                     0x8298
#define GL_FILTER                         0x829A
#define GL_VERTEX_TEXTURE                 0x829B
#define GL_TESS_CONTROL_TEXTURE           0x829C
#define GL_TESS_EVALUATION_TEXTURE        0x829D
#define GL_GEOMETRY_TEXTURE               0x829E
#define GL_FRAGMENT_TEXTURE               0x829F
#define GL_COMPUTE_TEXTURE                0x82A0
#define GL_TEXTURE_SHADOW                 0x82A1
#define GL_TEXTURE_GATHER                 0x82A2
#define GL_TEXTURE_GATHER_SHADOW          0x82A3
#define GL_SHADER_IMAGE_LOAD              0x82A4
#define GL_SHADER_IMAGE_STORE             0x82A5
#define GL_SHADER_IMAGE_ATOMIC            0x82A6
#define GL_IMAGE_TEXEL_SIZE               0x82A7
#define GL_IMAGE_COMPATIBILITY_CLASS      0x82A8
#define GL_IMAGE_PIXEL_FORMAT             0x82A9
#define GL_IMAGE_PIXEL_TYPE               0x82AA
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST 0x82AC
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST 0x82AD
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE 0x82AE
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE 0x82AF
#define GL_TEXTURE_COMPRESSED_BLOCK_WIDTH 0x82B1
#define GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT 0x82B2
#define GL_TEXTURE_COMPRESSED_BLOCK_SIZE  0x82B3
#define GL_CLEAR_BUFFER                   0x82B4
#define GL_TEXTURE_VIEW                   0x82B5
#define GL_VIEW_COMPATIBILITY_CLASS       0x82B6
#define GL_FULL_SUPPORT                   0x82B7
#define GL_CAVEAT_SUPPORT                 0x82B8
#define GL_IMAGE_CLASS_4_X_32             0x82B9
#define GL_IMAGE_CLASS_2_X_32             0x82BA
#define GL_IMAGE_CLASS_1_X_32             0x82BB
#define GL_IMAGE_CLASS_4_X_16             0x82BC
#define GL_IMAGE_CLASS_2_X_16             0x82BD
#define GL_IMAGE_CLASS_1_X_16             0x82BE
#define GL_IMAGE_CLASS_4_X_8              0x82BF
#define GL_IMAGE_CLASS_2_X_8              0x82C0
#define GL_IMAGE_CLASS_1_X_8              0x82C1
#define GL_IMAGE_CLASS_11_11_10           0x82C2
#define GL_IMAGE_CLASS_10_10_10_2         0x82C3
#define GL_VIEW_CLASS_128_BITS            0x82C4
#define GL_VIEW_CLASS_96_BITS             0x82C5
#define GL_VIEW_CLASS_64_BITS             0x82C6
#define GL_VIEW_CLASS_48_BITS             0x82C7
#define GL_VIEW_CLASS_32_BITS             0x82C8
#define GL_VIEW_CLASS_24_BITS             0x82C9
#define GL_VIEW_CLASS_16_BITS             0x82CA
#define GL_VIEW_CLASS_8_BITS              0x82CB
#define GL_VIEW_CLASS_S3TC_DXT1_RGB       0x82CC
#define GL_VIEW_CLASS_S3TC_DXT1_RGBA      0x82CD
#define GL_VIEW_CLASS_S3TC_DXT3_RGBA      0x82CE
#define GL_VIEW_CLASS_S3TC_DXT5_RGBA      0x82CF
#define GL_VIEW_CLASS_RGTC1_RED           0x82D0
#define GL_VIEW_CLASS_RGTC2_RG            0x82D1
#define GL_VIEW_CLASS_BPTC_UNORM          0x82D2
#define GL_VIEW_CLASS_BPTC_FLOAT          0x82D3
#define GL_UNIFORM                        0x92E1
#define GL_UNIFORM_BLOCK                  0x92E2
#define GL_PROGRAM_INPUT                  0x92E3
#define GL_PROGRAM_OUTPUT                 0x92E4
#define GL_BUFFER_VARIABLE                0x92E5
#define GL_SHADER_STORAGE_BLOCK           0x92E6
#define GL_VERTEX_SUBROUTINE              0x92E8
#define GL_TESS_CONTROL_SUBROUTINE        0x92E9
#define GL_TESS_EVALUATION_SUBROUTINE     0x92EA
#define GL_GEOMETRY_SUBROUTINE            0x92EB
#define GL_FRAGMENT_SUBROUTINE            0x92EC
#define GL_COMPUTE_SUBROUTINE             0x92ED
#define GL_VERTEX_SUBROUTINE_UNIFORM      0x92EE
#define GL_TESS_CONTROL_SUBROUTINE_UNIFORM 0x92EF
#define GL_TESS_EVALUATION_SUBROUTINE_UNIFORM 0x92F0
#define GL_GEOMETRY_SUBROUTINE_UNIFORM    0x92F1
#define GL_FRAGMENT_SUBROUTINE_UNIFORM    0x92F2
#define GL_COMPUTE_SUBROUTINE_UNIFORM     0x92F3
#define GL_TRANSFORM_FEEDBACK_VARYING     0x92F4
#define GL_ACTIVE_RESOURCES               0x92F5
#define GL_MAX_NAME_LENGTH                0x92F6
#define GL_MAX_NUM_ACTIVE_VARIABLES       0x92F7
#define GL_MAX_NUM_COMPATIBLE_SUBROUTINES 0x92F8
#define GL_NAME_LENGTH                    0x92F9
#define GL_TYPE                           0x92FA
#define GL_ARRAY_SIZE                     0x92FB
#define GL_OFFSET                         0x92FC
#define GL_BLOCK_INDEX                    0x92FD
#define GL_ARRAY_STRIDE                   0x92FE
#define GL_MATRIX_STRIDE                  0x92FF
#define GL_IS_ROW_MAJOR                   0x9300
#define GL_ATOMIC_COUNTER_BUFFER_INDEX    0x9301
#define GL_BUFFER_BINDING                 0x9302
#define GL_BUFFER_DATA_SIZE               0x9303
#define GL_NUM_ACTIVE_VARIABLES           0x9304
#define GL_ACTIVE_VARIABLES               0x9305
#define GL_REFERENCED_BY_VERTEX_SHADER    0x9306
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER 0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER 0x9308
#define GL_REFERENCED_BY_GEOMETRY_SHADER  0x9309
#define GL_REFERENCED_BY_FRAGMENT_SHADER  0x930A
#define GL_REFERENCED_BY_COMPUTE_SHADER   0x930B
#define GL_TOP_LEVEL_ARRAY_SIZE           0x930C
#define GL_TOP_LEVEL_ARRAY_STRIDE         0x930D
#define GL_LOCATION                       0x930E
#define GL_LOCATION_INDEX                 0x930F
#define GL_IS_PER_PATCH                   0x92E7
#define GL_SHADER_STORAGE_BUFFER          0x90D2
#define GL_SHADER_STORAGE_BUFFER_BINDING  0x90D3
#define GL_SHADER_STORAGE_BUFFER_START    0x90D4
#define GL_SHADER_STORAGE_BUFFER_SIZE     0x90D5
#define GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS 0x90D6
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS 0x90D7
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS 0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS 0x90D9
#define GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS 0x90DA
#define GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS 0x90DB
#define GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS 0x90DC
#define GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS 0x90DD
#define GL_MAX_SHADER_STORAGE_BLOCK_SIZE  0x90DE
#define GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT 0x90DF
#define GL_SHADER_STORAGE_BARRIER_BIT     0x00002000
#define GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES 0x8F39
#define GL_DEPTH_STENCIL_TEXTURE_MODE     0x90EA
#define GL_TEXTURE_BUFFER_OFFSET          0x919D
#define GL_TEXTURE_BUFFER_SIZE            0x919E
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT 0x919F
#define GL_TEXTURE_VIEW_MIN_LEVEL         0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS        0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER         0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS        0x82DE
#define GL_TEXTURE_IMMUTABLE_LEVELS       0x82DF
#define GL_VERTEX_ATTRIB_BINDING          0x82D4
#define GL_VERTEX_ATTRIB_RELATIVE_OFFSET  0x82D5
#define GL_VERTEX_BINDING_DIVISOR         0x82D6
#define GL_VERTEX_BINDING_OFFSET          0x82D7
#define GL_VERTEX_BINDING_STRIDE          0x82D8
#define GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET 0x82D9
#define GL_MAX_VERTEX_ATTRIB_BINDINGS     0x82DA
#define GL_VERTEX_BINDING_BUFFER          0x8F4F
#define GL_DISPLAY_LIST                   0x82E7
typedef void (APIENTRYP PFNGLCLEARBUFFERDATAPROC) (GLenum target_, GLenum internalformat_, GLenum format_, GLenum type_, const void *data_);
typedef void (APIENTRYP PFNGLCLEARBUFFERSUBDATAPROC) (GLenum target_, GLenum internalformat_, GLintptr offset_, GLsizeiptr size_, GLenum format_, GLenum type_, const void *data_);
typedef void (APIENTRYP PFNGLDISPATCHCOMPUTEPROC) (GLuint num_groups_x_, GLuint num_groups_y_, GLuint num_groups_z_);
typedef void (APIENTRYP PFNGLDISPATCHCOMPUTEINDIRECTPROC) (GLintptr indirect_);
typedef void (APIENTRYP PFNGLCOPYIMAGESUBDATAPROC) (GLuint srcName_, GLenum srcTarget_, GLint srcLevel_, GLint srcX_, GLint srcY_, GLint srcZ_, GLuint dstName_, GLenum dstTarget_, GLint dstLevel_, GLint dstX_, GLint dstY_, GLint dstZ_, GLsizei srcWidth_, GLsizei srcHeight_, GLsizei srcDepth_);
typedef void (APIENTRYP PFNGLFRAMEBUFFERPARAMETERIPROC) (GLenum target_, GLenum pname_, GLint param_);
typedef void (APIENTRYP PFNGLGETFRAMEBUFFERPARAMETERIVPROC) (GLenum target_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETINTERNALFORMATI64VPROC) (GLenum target_, GLenum internalformat_, GLenum pname_, GLsizei bufSize_, GLint64 *params_);
typedef void (APIENTRYP PFNGLINVALIDATETEXSUBIMAGEPROC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_);
typedef void (APIENTRYP PFNGLINVALIDATETEXIMAGEPROC) (GLuint texture_, GLint level_);
typedef void (APIENTRYP PFNGLINVALIDATEBUFFERSUBDATAPROC) (GLuint buffer_, GLintptr offset_, GLsizeiptr length_);
typedef void (APIENTRYP PFNGLINVALIDATEBUFFERDATAPROC) (GLuint buffer_);
typedef void (APIENTRYP PFNGLINVALIDATEFRAMEBUFFERPROC) (GLenum target_, GLsizei numAttachments_, const GLenum *attachments_);
typedef void (APIENTRYP PFNGLINVALIDATESUBFRAMEBUFFERPROC) (GLenum target_, GLsizei numAttachments_, const GLenum *attachments_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTPROC) (GLenum mode_, const void *indirect_, GLsizei drawcount_, GLsizei stride_);
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTPROC) (GLenum mode_, GLenum type_, const void *indirect_, GLsizei drawcount_, GLsizei stride_);
typedef void (APIENTRYP PFNGLGETPROGRAMINTERFACEIVPROC) (GLuint program_, GLenum programInterface_, GLenum pname_, GLint *params_);
typedef GLuint (APIENTRYP PFNGLGETPROGRAMRESOURCEINDEXPROC) (GLuint program_, GLenum programInterface_, const GLchar *name_);
typedef void (APIENTRYP PFNGLGETPROGRAMRESOURCENAMEPROC) (GLuint program_, GLenum programInterface_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLchar *name_);
typedef void (APIENTRYP PFNGLGETPROGRAMRESOURCEIVPROC) (GLuint program_, GLenum programInterface_, GLuint index_, GLsizei propCount_, const GLenum *props_, GLsizei bufSize_, GLsizei *length_, GLint *params_);
typedef GLint (APIENTRYP PFNGLGETPROGRAMRESOURCELOCATIONPROC) (GLuint program_, GLenum programInterface_, const GLchar *name_);
typedef GLint (APIENTRYP PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) (GLuint program_, GLenum programInterface_, const GLchar *name_);
typedef void (APIENTRYP PFNGLSHADERSTORAGEBLOCKBINDINGPROC) (GLuint program_, GLuint storageBlockIndex_, GLuint storageBlockBinding_);
typedef void (APIENTRYP PFNGLTEXBUFFERRANGEPROC) (GLenum target_, GLenum internalformat_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
typedef void (APIENTRYP PFNGLTEXSTORAGE2DMULTISAMPLEPROC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_);
typedef void (APIENTRYP PFNGLTEXSTORAGE3DMULTISAMPLEPROC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_);
typedef void (APIENTRYP PFNGLTEXTUREVIEWPROC) (GLuint texture_, GLenum target_, GLuint origtexture_, GLenum internalformat_, GLuint minlevel_, GLuint numlevels_, GLuint minlayer_, GLuint numlayers_);
typedef void (APIENTRYP PFNGLBINDVERTEXBUFFERPROC) (GLuint bindingindex_, GLuint buffer_, GLintptr offset_, GLsizei stride_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBFORMATPROC) (GLuint attribindex_, GLint size_, GLenum type_, GLboolean normalized_, GLuint relativeoffset_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBIFORMATPROC) (GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBLFORMATPROC) (GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBBINDINGPROC) (GLuint attribindex_, GLuint bindingindex_);
typedef void (APIENTRYP PFNGLVERTEXBINDINGDIVISORPROC) (GLuint bindingindex_, GLuint divisor_);
typedef void (APIENTRYP PFNGLDEBUGMESSAGECONTROLPROC) (GLenum source_, GLenum type_, GLenum severity_, GLsizei count_, const GLuint *ids_, GLboolean enabled_);
typedef void (APIENTRYP PFNGLDEBUGMESSAGEINSERTPROC) (GLenum source_, GLenum type_, GLuint id_, GLenum severity_, GLsizei length_, const GLchar *buf_);
typedef void (APIENTRYP PFNGLDEBUGMESSAGECALLBACKPROC) (GLDEBUGPROC callback_, const void *userParam_);
typedef GLuint (APIENTRYP PFNGLGETDEBUGMESSAGELOGPROC) (GLuint count_, GLsizei bufSize_, GLenum *sources_, GLenum *types_, GLuint *ids_, GLenum *severities_, GLsizei *lengths_, GLchar *messageLog_);
typedef void (APIENTRYP PFNGLPUSHDEBUGGROUPPROC) (GLenum source_, GLuint id_, GLsizei length_, const GLchar *message_);
typedef void (APIENTRYP PFNGLPOPDEBUGGROUPPROC) (void);
typedef void (APIENTRYP PFNGLOBJECTLABELPROC) (GLenum identifier_, GLuint name_, GLsizei length_, const GLchar *label_);
typedef void (APIENTRYP PFNGLGETOBJECTLABELPROC) (GLenum identifier_, GLuint name_, GLsizei bufSize_, GLsizei *length_, GLchar *label_);
typedef void (APIENTRYP PFNGLOBJECTPTRLABELPROC) (const void *ptr_, GLsizei length_, const GLchar *label_);
typedef void (APIENTRYP PFNGLGETOBJECTPTRLABELPROC) (const void *ptr_, GLsizei bufSize_, GLsizei *length_, GLchar *label_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glClearBufferData (GLenum target_, GLenum internalformat_, GLenum format_, GLenum type_, const void *data_);
GLAPI void APIENTRY glClearBufferSubData (GLenum target_, GLenum internalformat_, GLintptr offset_, GLsizeiptr size_, GLenum format_, GLenum type_, const void *data_);
GLAPI void APIENTRY glDispatchCompute (GLuint num_groups_x_, GLuint num_groups_y_, GLuint num_groups_z_);
GLAPI void APIENTRY glDispatchComputeIndirect (GLintptr indirect_);
GLAPI void APIENTRY glCopyImageSubData (GLuint srcName_, GLenum srcTarget_, GLint srcLevel_, GLint srcX_, GLint srcY_, GLint srcZ_, GLuint dstName_, GLenum dstTarget_, GLint dstLevel_, GLint dstX_, GLint dstY_, GLint dstZ_, GLsizei srcWidth_, GLsizei srcHeight_, GLsizei srcDepth_);
GLAPI void APIENTRY glFramebufferParameteri (GLenum target_, GLenum pname_, GLint param_);
GLAPI void APIENTRY glGetFramebufferParameteriv (GLenum target_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetInternalformati64v (GLenum target_, GLenum internalformat_, GLenum pname_, GLsizei bufSize_, GLint64 *params_);
GLAPI void APIENTRY glInvalidateTexSubImage (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_);
GLAPI void APIENTRY glInvalidateTexImage (GLuint texture_, GLint level_);
GLAPI void APIENTRY glInvalidateBufferSubData (GLuint buffer_, GLintptr offset_, GLsizeiptr length_);
GLAPI void APIENTRY glInvalidateBufferData (GLuint buffer_);
GLAPI void APIENTRY glInvalidateFramebuffer (GLenum target_, GLsizei numAttachments_, const GLenum *attachments_);
GLAPI void APIENTRY glInvalidateSubFramebuffer (GLenum target_, GLsizei numAttachments_, const GLenum *attachments_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
GLAPI void APIENTRY glMultiDrawArraysIndirect (GLenum mode_, const void *indirect_, GLsizei drawcount_, GLsizei stride_);
GLAPI void APIENTRY glMultiDrawElementsIndirect (GLenum mode_, GLenum type_, const void *indirect_, GLsizei drawcount_, GLsizei stride_);
GLAPI void APIENTRY glGetProgramInterfaceiv (GLuint program_, GLenum programInterface_, GLenum pname_, GLint *params_);
GLAPI GLuint APIENTRY glGetProgramResourceIndex (GLuint program_, GLenum programInterface_, const GLchar *name_);
GLAPI void APIENTRY glGetProgramResourceName (GLuint program_, GLenum programInterface_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLchar *name_);
GLAPI void APIENTRY glGetProgramResourceiv (GLuint program_, GLenum programInterface_, GLuint index_, GLsizei propCount_, const GLenum *props_, GLsizei bufSize_, GLsizei *length_, GLint *params_);
GLAPI GLint APIENTRY glGetProgramResourceLocation (GLuint program_, GLenum programInterface_, const GLchar *name_);
GLAPI GLint APIENTRY glGetProgramResourceLocationIndex (GLuint program_, GLenum programInterface_, const GLchar *name_);
GLAPI void APIENTRY glShaderStorageBlockBinding (GLuint program_, GLuint storageBlockIndex_, GLuint storageBlockBinding_);
GLAPI void APIENTRY glTexBufferRange (GLenum target_, GLenum internalformat_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
GLAPI void APIENTRY glTexStorage2DMultisample (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_);
GLAPI void APIENTRY glTexStorage3DMultisample (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_);
GLAPI void APIENTRY glTextureView (GLuint texture_, GLenum target_, GLuint origtexture_, GLenum internalformat_, GLuint minlevel_, GLuint numlevels_, GLuint minlayer_, GLuint numlayers_);
GLAPI void APIENTRY glBindVertexBuffer (GLuint bindingindex_, GLuint buffer_, GLintptr offset_, GLsizei stride_);
GLAPI void APIENTRY glVertexAttribFormat (GLuint attribindex_, GLint size_, GLenum type_, GLboolean normalized_, GLuint relativeoffset_);
GLAPI void APIENTRY glVertexAttribIFormat (GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_);
GLAPI void APIENTRY glVertexAttribLFormat (GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_);
GLAPI void APIENTRY glVertexAttribBinding (GLuint attribindex_, GLuint bindingindex_);
GLAPI void APIENTRY glVertexBindingDivisor (GLuint bindingindex_, GLuint divisor_);
GLAPI void APIENTRY glDebugMessageControl (GLenum source_, GLenum type_, GLenum severity_, GLsizei count_, const GLuint *ids_, GLboolean enabled_);
GLAPI void APIENTRY glDebugMessageInsert (GLenum source_, GLenum type_, GLuint id_, GLenum severity_, GLsizei length_, const GLchar *buf_);
GLAPI void APIENTRY glDebugMessageCallback (GLDEBUGPROC callback_, const void *userParam_);
GLAPI GLuint APIENTRY glGetDebugMessageLog (GLuint count_, GLsizei bufSize_, GLenum *sources_, GLenum *types_, GLuint *ids_, GLenum *severities_, GLsizei *lengths_, GLchar *messageLog_);
GLAPI void APIENTRY glPushDebugGroup (GLenum source_, GLuint id_, GLsizei length_, const GLchar *message_);
GLAPI void APIENTRY glPopDebugGroup (void);
GLAPI void APIENTRY glObjectLabel (GLenum identifier_, GLuint name_, GLsizei length_, const GLchar *label_);
GLAPI void APIENTRY glGetObjectLabel (GLenum identifier_, GLuint name_, GLsizei bufSize_, GLsizei *length_, GLchar *label_);
GLAPI void APIENTRY glObjectPtrLabel (const void *ptr_, GLsizei length_, const GLchar *label_);
GLAPI void APIENTRY glGetObjectPtrLabel (const void *ptr_, GLsizei bufSize_, GLsizei *length_, GLchar *label_);
#endif
#endif /* GL_VERSION_4_3 */

#ifndef GL_VERSION_4_4
#define GL_VERSION_4_4 1
#define GL_MAX_VERTEX_ATTRIB_STRIDE       0x82E5
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED 0x8221
#define GL_TEXTURE_BUFFER_BINDING         0x8C2A
#define GL_MAP_PERSISTENT_BIT             0x0040
#define GL_MAP_COHERENT_BIT               0x0080
#define GL_DYNAMIC_STORAGE_BIT            0x0100
#define GL_CLIENT_STORAGE_BIT             0x0200
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT 0x00004000
#define GL_BUFFER_IMMUTABLE_STORAGE       0x821F
#define GL_BUFFER_STORAGE_FLAGS           0x8220
#define GL_CLEAR_TEXTURE                  0x9365
#define GL_LOCATION_COMPONENT             0x934A
#define GL_TRANSFORM_FEEDBACK_BUFFER_INDEX 0x934B
#define GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE 0x934C
#define GL_QUERY_BUFFER                   0x9192
#define GL_QUERY_BUFFER_BARRIER_BIT       0x00008000
#define GL_QUERY_BUFFER_BINDING           0x9193
#define GL_QUERY_RESULT_NO_WAIT           0x9194
#define GL_MIRROR_CLAMP_TO_EDGE           0x8743
typedef void (APIENTRYP PFNGLBUFFERSTORAGEPROC) (GLenum target_, GLsizeiptr size_, const void *data_, GLbitfield flags_);
typedef void (APIENTRYP PFNGLCLEARTEXIMAGEPROC) (GLuint texture_, GLint level_, GLenum format_, GLenum type_, const void *data_);
typedef void (APIENTRYP PFNGLCLEARTEXSUBIMAGEPROC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void *data_);
typedef void (APIENTRYP PFNGLBINDBUFFERSBASEPROC) (GLenum target_, GLuint first_, GLsizei count_, const GLuint *buffers_);
typedef void (APIENTRYP PFNGLBINDBUFFERSRANGEPROC) (GLenum target_, GLuint first_, GLsizei count_, const GLuint *buffers_, const GLintptr *offsets_, const GLsizeiptr *sizes_);
typedef void (APIENTRYP PFNGLBINDTEXTURESPROC) (GLuint first_, GLsizei count_, const GLuint *textures_);
typedef void (APIENTRYP PFNGLBINDSAMPLERSPROC) (GLuint first_, GLsizei count_, const GLuint *samplers_);
typedef void (APIENTRYP PFNGLBINDIMAGETEXTURESPROC) (GLuint first_, GLsizei count_, const GLuint *textures_);
typedef void (APIENTRYP PFNGLBINDVERTEXBUFFERSPROC) (GLuint first_, GLsizei count_, const GLuint *buffers_, const GLintptr *offsets_, const GLsizei *strides_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glBufferStorage (GLenum target_, GLsizeiptr size_, const void *data_, GLbitfield flags_);
GLAPI void APIENTRY glClearTexImage (GLuint texture_, GLint level_, GLenum format_, GLenum type_, const void *data_);
GLAPI void APIENTRY glClearTexSubImage (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void *data_);
GLAPI void APIENTRY glBindBuffersBase (GLenum target_, GLuint first_, GLsizei count_, const GLuint *buffers_);
GLAPI void APIENTRY glBindBuffersRange (GLenum target_, GLuint first_, GLsizei count_, const GLuint *buffers_, const GLintptr *offsets_, const GLsizeiptr *sizes_);
GLAPI void APIENTRY glBindTextures (GLuint first_, GLsizei count_, const GLuint *textures_);
GLAPI void APIENTRY glBindSamplers (GLuint first_, GLsizei count_, const GLuint *samplers_);
GLAPI void APIENTRY glBindImageTextures (GLuint first_, GLsizei count_, const GLuint *textures_);
GLAPI void APIENTRY glBindVertexBuffers (GLuint first_, GLsizei count_, const GLuint *buffers_, const GLintptr *offsets_, const GLsizei *strides_);
#endif
#endif /* GL_VERSION_4_4 */

#ifndef GL_VERSION_4_5
#define GL_VERSION_4_5 1
#define GL_CONTEXT_LOST                   0x0507
#define GL_NEGATIVE_ONE_TO_ONE            0x935E
#define GL_ZERO_TO_ONE                    0x935F
#define GL_CLIP_ORIGIN                    0x935C
#define GL_CLIP_DEPTH_MODE                0x935D
#define GL_QUERY_WAIT_INVERTED            0x8E17
#define GL_QUERY_NO_WAIT_INVERTED         0x8E18
#define GL_QUERY_BY_REGION_WAIT_INVERTED  0x8E19
#define GL_QUERY_BY_REGION_NO_WAIT_INVERTED 0x8E1A
#define GL_MAX_CULL_DISTANCES             0x82F9
#define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES 0x82FA
#define GL_TEXTURE_TARGET                 0x1006
#define GL_QUERY_TARGET                   0x82EA
#define GL_GUILTY_CONTEXT_RESET           0x8253
#define GL_INNOCENT_CONTEXT_RESET         0x8254
#define GL_UNKNOWN_CONTEXT_RESET          0x8255
#define GL_RESET_NOTIFICATION_STRATEGY    0x8256
#define GL_LOSE_CONTEXT_ON_RESET          0x8252
#define GL_NO_RESET_NOTIFICATION          0x8261
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT 0x00000004
#define GL_CONTEXT_RELEASE_BEHAVIOR       0x82FB
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH 0x82FC
typedef void (APIENTRYP PFNGLCLIPCONTROLPROC) (GLenum origin_, GLenum depth_);
typedef void (APIENTRYP PFNGLCREATETRANSFORMFEEDBACKSPROC) (GLsizei n_, GLuint *ids_);
typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) (GLuint xfb_, GLuint index_, GLuint buffer_);
typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) (GLuint xfb_, GLuint index_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKIVPROC) (GLuint xfb_, GLenum pname_, GLint *param_);
typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKI_VPROC) (GLuint xfb_, GLenum pname_, GLuint index_, GLint *param_);
typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKI64_VPROC) (GLuint xfb_, GLenum pname_, GLuint index_, GLint64 *param_);
typedef void (APIENTRYP PFNGLCREATEBUFFERSPROC) (GLsizei n_, GLuint *buffers_);
typedef void (APIENTRYP PFNGLNAMEDBUFFERSTORAGEPROC) (GLuint buffer_, GLsizeiptr size_, const void *data_, GLbitfield flags_);
typedef void (APIENTRYP PFNGLNAMEDBUFFERDATAPROC) (GLuint buffer_, GLsizeiptr size_, const void *data_, GLenum usage_);
typedef void (APIENTRYP PFNGLNAMEDBUFFERSUBDATAPROC) (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, const void *data_);
typedef void (APIENTRYP PFNGLCOPYNAMEDBUFFERSUBDATAPROC) (GLuint readBuffer_, GLuint writeBuffer_, GLintptr readOffset_, GLintptr writeOffset_, GLsizeiptr size_);
typedef void (APIENTRYP PFNGLCLEARNAMEDBUFFERDATAPROC) (GLuint buffer_, GLenum internalformat_, GLenum format_, GLenum type_, const void *data_);
typedef void (APIENTRYP PFNGLCLEARNAMEDBUFFERSUBDATAPROC) (GLuint buffer_, GLenum internalformat_, GLintptr offset_, GLsizeiptr size_, GLenum format_, GLenum type_, const void *data_);
typedef void *(APIENTRYP PFNGLMAPNAMEDBUFFERPROC) (GLuint buffer_, GLenum access_);
typedef void *(APIENTRYP PFNGLMAPNAMEDBUFFERRANGEPROC) (GLuint buffer_, GLintptr offset_, GLsizeiptr length_, GLbitfield access_);
typedef GLboolean (APIENTRYP PFNGLUNMAPNAMEDBUFFERPROC) (GLuint buffer_);
typedef void (APIENTRYP PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) (GLuint buffer_, GLintptr offset_, GLsizeiptr length_);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPARAMETERIVPROC) (GLuint buffer_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) (GLuint buffer_, GLenum pname_, GLint64 *params_);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPOINTERVPROC) (GLuint buffer_, GLenum pname_, void **params_);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERSUBDATAPROC) (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, void *data_);
typedef void (APIENTRYP PFNGLCREATEFRAMEBUFFERSPROC) (GLsizei n_, GLuint *framebuffers_);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) (GLuint framebuffer_, GLenum attachment_, GLenum renderbuffertarget_, GLuint renderbuffer_);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) (GLuint framebuffer_, GLenum pname_, GLint param_);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) (GLuint framebuffer_, GLenum attachment_, GLuint texture_, GLint level_);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) (GLuint framebuffer_, GLenum attachment_, GLuint texture_, GLint level_, GLint layer_);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) (GLuint framebuffer_, GLenum buf_);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) (GLuint framebuffer_, GLsizei n_, const GLenum *bufs_);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) (GLuint framebuffer_, GLenum src_);
typedef void (APIENTRYP PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) (GLuint framebuffer_, GLsizei numAttachments_, const GLenum *attachments_);
typedef void (APIENTRYP PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) (GLuint framebuffer_, GLsizei numAttachments_, const GLenum *attachments_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, const GLint *value_);
typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, const GLuint *value_);
typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, const GLfloat *value_);
typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, GLfloat depth_, GLint stencil_);
typedef void (APIENTRYP PFNGLBLITNAMEDFRAMEBUFFERPROC) (GLuint readFramebuffer_, GLuint drawFramebuffer_, GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_);
typedef GLenum (APIENTRYP PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) (GLuint framebuffer_, GLenum target_);
typedef void (APIENTRYP PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) (GLuint framebuffer_, GLenum pname_, GLint *param_);
typedef void (APIENTRYP PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) (GLuint framebuffer_, GLenum attachment_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLCREATERENDERBUFFERSPROC) (GLsizei n_, GLuint *renderbuffers_);
typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEPROC) (GLuint renderbuffer_, GLenum internalformat_, GLsizei width_, GLsizei height_);
typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) (GLuint renderbuffer_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
typedef void (APIENTRYP PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) (GLuint renderbuffer_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLCREATETEXTURESPROC) (GLenum target_, GLsizei n_, GLuint *textures_);
typedef void (APIENTRYP PFNGLTEXTUREBUFFERPROC) (GLuint texture_, GLenum internalformat_, GLuint buffer_);
typedef void (APIENTRYP PFNGLTEXTUREBUFFERRANGEPROC) (GLuint texture_, GLenum internalformat_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE1DPROC) (GLuint texture_, GLsizei levels_, GLenum internalformat_, GLsizei width_);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE2DPROC) (GLuint texture_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE3DPROC) (GLuint texture_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) (GLuint texture_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) (GLuint texture_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_);
typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE1DPROC) (GLuint texture_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLenum type_, const void *pixels_);
typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE2DPROC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *pixels_);
typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE3DPROC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void *pixels_);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) (GLuint texture_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLsizei imageSize_, const void *data_);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLsizei imageSize_, const void *data_);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLsizei imageSize_, const void *data_);
typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE1DPROC) (GLuint texture_, GLint level_, GLint xoffset_, GLint x_, GLint y_, GLsizei width_);
typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE2DPROC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE3DPROC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERFPROC) (GLuint texture_, GLenum pname_, GLfloat param_);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERFVPROC) (GLuint texture_, GLenum pname_, const GLfloat *param_);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIPROC) (GLuint texture_, GLenum pname_, GLint param_);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIIVPROC) (GLuint texture_, GLenum pname_, const GLint *params_);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIUIVPROC) (GLuint texture_, GLenum pname_, const GLuint *params_);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIVPROC) (GLuint texture_, GLenum pname_, const GLint *param_);
typedef void (APIENTRYP PFNGLGENERATETEXTUREMIPMAPPROC) (GLuint texture_);
typedef void (APIENTRYP PFNGLBINDTEXTUREUNITPROC) (GLuint unit_, GLuint texture_);
typedef void (APIENTRYP PFNGLGETTEXTUREIMAGEPROC) (GLuint texture_, GLint level_, GLenum format_, GLenum type_, GLsizei bufSize_, void *pixels_);
typedef void (APIENTRYP PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) (GLuint texture_, GLint level_, GLsizei bufSize_, void *pixels_);
typedef void (APIENTRYP PFNGLGETTEXTURELEVELPARAMETERFVPROC) (GLuint texture_, GLint level_, GLenum pname_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETTEXTURELEVELPARAMETERIVPROC) (GLuint texture_, GLint level_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERFVPROC) (GLuint texture_, GLenum pname_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIIVPROC) (GLuint texture_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIUIVPROC) (GLuint texture_, GLenum pname_, GLuint *params_);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIVPROC) (GLuint texture_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLCREATEVERTEXARRAYSPROC) (GLsizei n_, GLuint *arrays_);
typedef void (APIENTRYP PFNGLDISABLEVERTEXARRAYATTRIBPROC) (GLuint vaobj_, GLuint index_);
typedef void (APIENTRYP PFNGLENABLEVERTEXARRAYATTRIBPROC) (GLuint vaobj_, GLuint index_);
typedef void (APIENTRYP PFNGLVERTEXARRAYELEMENTBUFFERPROC) (GLuint vaobj_, GLuint buffer_);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXBUFFERPROC) (GLuint vaobj_, GLuint bindingindex_, GLuint buffer_, GLintptr offset_, GLsizei stride_);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXBUFFERSPROC) (GLuint vaobj_, GLuint first_, GLsizei count_, const GLuint *buffers_, const GLintptr *offsets_, const GLsizei *strides_);
typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBBINDINGPROC) (GLuint vaobj_, GLuint attribindex_, GLuint bindingindex_);
typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBFORMATPROC) (GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLboolean normalized_, GLuint relativeoffset_);
typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBIFORMATPROC) (GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_);
typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBLFORMATPROC) (GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_);
typedef void (APIENTRYP PFNGLVERTEXARRAYBINDINGDIVISORPROC) (GLuint vaobj_, GLuint bindingindex_, GLuint divisor_);
typedef void (APIENTRYP PFNGLGETVERTEXARRAYIVPROC) (GLuint vaobj_, GLenum pname_, GLint *param_);
typedef void (APIENTRYP PFNGLGETVERTEXARRAYINDEXEDIVPROC) (GLuint vaobj_, GLuint index_, GLenum pname_, GLint *param_);
typedef void (APIENTRYP PFNGLGETVERTEXARRAYINDEXED64IVPROC) (GLuint vaobj_, GLuint index_, GLenum pname_, GLint64 *param_);
typedef void (APIENTRYP PFNGLCREATESAMPLERSPROC) (GLsizei n_, GLuint *samplers_);
typedef void (APIENTRYP PFNGLCREATEPROGRAMPIPELINESPROC) (GLsizei n_, GLuint *pipelines_);
typedef void (APIENTRYP PFNGLCREATEQUERIESPROC) (GLenum target_, GLsizei n_, GLuint *ids_);
typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTI64VPROC) (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_);
typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTIVPROC) (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_);
typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTUI64VPROC) (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_);
typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTUIVPROC) (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_);
typedef void (APIENTRYP PFNGLMEMORYBARRIERBYREGIONPROC) (GLbitfield barriers_);
typedef void (APIENTRYP PFNGLGETTEXTURESUBIMAGEPROC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, GLsizei bufSize_, void *pixels_);
typedef void (APIENTRYP PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLsizei bufSize_, void *pixels_);
typedef GLenum (APIENTRYP PFNGLGETGRAPHICSRESETSTATUSPROC) (void);
typedef void (APIENTRYP PFNGLGETNCOMPRESSEDTEXIMAGEPROC) (GLenum target_, GLint lod_, GLsizei bufSize_, void *pixels_);
typedef void (APIENTRYP PFNGLGETNTEXIMAGEPROC) (GLenum target_, GLint level_, GLenum format_, GLenum type_, GLsizei bufSize_, void *pixels_);
typedef void (APIENTRYP PFNGLGETNUNIFORMDVPROC) (GLuint program_, GLint location_, GLsizei bufSize_, GLdouble *params_);
typedef void (APIENTRYP PFNGLGETNUNIFORMFVPROC) (GLuint program_, GLint location_, GLsizei bufSize_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETNUNIFORMIVPROC) (GLuint program_, GLint location_, GLsizei bufSize_, GLint *params_);
typedef void (APIENTRYP PFNGLGETNUNIFORMUIVPROC) (GLuint program_, GLint location_, GLsizei bufSize_, GLuint *params_);
typedef void (APIENTRYP PFNGLREADNPIXELSPROC) (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, GLsizei bufSize_, void *data_);
typedef void (APIENTRYP PFNGLGETNMAPDVPROC) (GLenum target_, GLenum query_, GLsizei bufSize_, GLdouble *v_);
typedef void (APIENTRYP PFNGLGETNMAPFVPROC) (GLenum target_, GLenum query_, GLsizei bufSize_, GLfloat *v_);
typedef void (APIENTRYP PFNGLGETNMAPIVPROC) (GLenum target_, GLenum query_, GLsizei bufSize_, GLint *v_);
typedef void (APIENTRYP PFNGLGETNPIXELMAPFVPROC) (GLenum map_, GLsizei bufSize_, GLfloat *values_);
typedef void (APIENTRYP PFNGLGETNPIXELMAPUIVPROC) (GLenum map_, GLsizei bufSize_, GLuint *values_);
typedef void (APIENTRYP PFNGLGETNPIXELMAPUSVPROC) (GLenum map_, GLsizei bufSize_, GLushort *values_);
typedef void (APIENTRYP PFNGLGETNPOLYGONSTIPPLEPROC) (GLsizei bufSize_, GLubyte *pattern_);
typedef void (APIENTRYP PFNGLGETNCOLORTABLEPROC) (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *table_);
typedef void (APIENTRYP PFNGLGETNCONVOLUTIONFILTERPROC) (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *image_);
typedef void (APIENTRYP PFNGLGETNSEPARABLEFILTERPROC) (GLenum target_, GLenum format_, GLenum type_, GLsizei rowBufSize_, void *row_, GLsizei columnBufSize_, void *column_, void *span_);
typedef void (APIENTRYP PFNGLGETNHISTOGRAMPROC) (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_);
typedef void (APIENTRYP PFNGLGETNMINMAXPROC) (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_);
typedef void (APIENTRYP PFNGLTEXTUREBARRIERPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glClipControl (GLenum origin_, GLenum depth_);
GLAPI void APIENTRY glCreateTransformFeedbacks (GLsizei n_, GLuint *ids_);
GLAPI void APIENTRY glTransformFeedbackBufferBase (GLuint xfb_, GLuint index_, GLuint buffer_);
GLAPI void APIENTRY glTransformFeedbackBufferRange (GLuint xfb_, GLuint index_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
GLAPI void APIENTRY glGetTransformFeedbackiv (GLuint xfb_, GLenum pname_, GLint *param_);
GLAPI void APIENTRY glGetTransformFeedbacki_v (GLuint xfb_, GLenum pname_, GLuint index_, GLint *param_);
GLAPI void APIENTRY glGetTransformFeedbacki64_v (GLuint xfb_, GLenum pname_, GLuint index_, GLint64 *param_);
GLAPI void APIENTRY glCreateBuffers (GLsizei n_, GLuint *buffers_);
GLAPI void APIENTRY glNamedBufferStorage (GLuint buffer_, GLsizeiptr size_, const void *data_, GLbitfield flags_);
GLAPI void APIENTRY glNamedBufferData (GLuint buffer_, GLsizeiptr size_, const void *data_, GLenum usage_);
GLAPI void APIENTRY glNamedBufferSubData (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, const void *data_);
GLAPI void APIENTRY glCopyNamedBufferSubData (GLuint readBuffer_, GLuint writeBuffer_, GLintptr readOffset_, GLintptr writeOffset_, GLsizeiptr size_);
GLAPI void APIENTRY glClearNamedBufferData (GLuint buffer_, GLenum internalformat_, GLenum format_, GLenum type_, const void *data_);
GLAPI void APIENTRY glClearNamedBufferSubData (GLuint buffer_, GLenum internalformat_, GLintptr offset_, GLsizeiptr size_, GLenum format_, GLenum type_, const void *data_);
GLAPI void *APIENTRY glMapNamedBuffer (GLuint buffer_, GLenum access_);
GLAPI void *APIENTRY glMapNamedBufferRange (GLuint buffer_, GLintptr offset_, GLsizeiptr length_, GLbitfield access_);
GLAPI GLboolean APIENTRY glUnmapNamedBuffer (GLuint buffer_);
GLAPI void APIENTRY glFlushMappedNamedBufferRange (GLuint buffer_, GLintptr offset_, GLsizeiptr length_);
GLAPI void APIENTRY glGetNamedBufferParameteriv (GLuint buffer_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetNamedBufferParameteri64v (GLuint buffer_, GLenum pname_, GLint64 *params_);
GLAPI void APIENTRY glGetNamedBufferPointerv (GLuint buffer_, GLenum pname_, void **params_);
GLAPI void APIENTRY glGetNamedBufferSubData (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, void *data_);
GLAPI void APIENTRY glCreateFramebuffers (GLsizei n_, GLuint *framebuffers_);
GLAPI void APIENTRY glNamedFramebufferRenderbuffer (GLuint framebuffer_, GLenum attachment_, GLenum renderbuffertarget_, GLuint renderbuffer_);
GLAPI void APIENTRY glNamedFramebufferParameteri (GLuint framebuffer_, GLenum pname_, GLint param_);
GLAPI void APIENTRY glNamedFramebufferTexture (GLuint framebuffer_, GLenum attachment_, GLuint texture_, GLint level_);
GLAPI void APIENTRY glNamedFramebufferTextureLayer (GLuint framebuffer_, GLenum attachment_, GLuint texture_, GLint level_, GLint layer_);
GLAPI void APIENTRY glNamedFramebufferDrawBuffer (GLuint framebuffer_, GLenum buf_);
GLAPI void APIENTRY glNamedFramebufferDrawBuffers (GLuint framebuffer_, GLsizei n_, const GLenum *bufs_);
GLAPI void APIENTRY glNamedFramebufferReadBuffer (GLuint framebuffer_, GLenum src_);
GLAPI void APIENTRY glInvalidateNamedFramebufferData (GLuint framebuffer_, GLsizei numAttachments_, const GLenum *attachments_);
GLAPI void APIENTRY glInvalidateNamedFramebufferSubData (GLuint framebuffer_, GLsizei numAttachments_, const GLenum *attachments_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
GLAPI void APIENTRY glClearNamedFramebufferiv (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, const GLint *value_);
GLAPI void APIENTRY glClearNamedFramebufferuiv (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, const GLuint *value_);
GLAPI void APIENTRY glClearNamedFramebufferfv (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, const GLfloat *value_);
GLAPI void APIENTRY glClearNamedFramebufferfi (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, GLfloat depth_, GLint stencil_);
GLAPI void APIENTRY glBlitNamedFramebuffer (GLuint readFramebuffer_, GLuint drawFramebuffer_, GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_);
GLAPI GLenum APIENTRY glCheckNamedFramebufferStatus (GLuint framebuffer_, GLenum target_);
GLAPI void APIENTRY glGetNamedFramebufferParameteriv (GLuint framebuffer_, GLenum pname_, GLint *param_);
GLAPI void APIENTRY glGetNamedFramebufferAttachmentParameteriv (GLuint framebuffer_, GLenum attachment_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glCreateRenderbuffers (GLsizei n_, GLuint *renderbuffers_);
GLAPI void APIENTRY glNamedRenderbufferStorage (GLuint renderbuffer_, GLenum internalformat_, GLsizei width_, GLsizei height_);
GLAPI void APIENTRY glNamedRenderbufferStorageMultisample (GLuint renderbuffer_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
GLAPI void APIENTRY glGetNamedRenderbufferParameteriv (GLuint renderbuffer_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glCreateTextures (GLenum target_, GLsizei n_, GLuint *textures_);
GLAPI void APIENTRY glTextureBuffer (GLuint texture_, GLenum internalformat_, GLuint buffer_);
GLAPI void APIENTRY glTextureBufferRange (GLuint texture_, GLenum internalformat_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
GLAPI void APIENTRY glTextureStorage1D (GLuint texture_, GLsizei levels_, GLenum internalformat_, GLsizei width_);
GLAPI void APIENTRY glTextureStorage2D (GLuint texture_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_);
GLAPI void APIENTRY glTextureStorage3D (GLuint texture_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_);
GLAPI void APIENTRY glTextureStorage2DMultisample (GLuint texture_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_);
GLAPI void APIENTRY glTextureStorage3DMultisample (GLuint texture_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_);
GLAPI void APIENTRY glTextureSubImage1D (GLuint texture_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLenum type_, const void *pixels_);
GLAPI void APIENTRY glTextureSubImage2D (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *pixels_);
GLAPI void APIENTRY glTextureSubImage3D (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void *pixels_);
GLAPI void APIENTRY glCompressedTextureSubImage1D (GLuint texture_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLsizei imageSize_, const void *data_);
GLAPI void APIENTRY glCompressedTextureSubImage2D (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLsizei imageSize_, const void *data_);
GLAPI void APIENTRY glCompressedTextureSubImage3D (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLsizei imageSize_, const void *data_);
GLAPI void APIENTRY glCopyTextureSubImage1D (GLuint texture_, GLint level_, GLint xoffset_, GLint x_, GLint y_, GLsizei width_);
GLAPI void APIENTRY glCopyTextureSubImage2D (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
GLAPI void APIENTRY glCopyTextureSubImage3D (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
GLAPI void APIENTRY glTextureParameterf (GLuint texture_, GLenum pname_, GLfloat param_);
GLAPI void APIENTRY glTextureParameterfv (GLuint texture_, GLenum pname_, const GLfloat *param_);
GLAPI void APIENTRY glTextureParameteri (GLuint texture_, GLenum pname_, GLint param_);
GLAPI void APIENTRY glTextureParameterIiv (GLuint texture_, GLenum pname_, const GLint *params_);
GLAPI void APIENTRY glTextureParameterIuiv (GLuint texture_, GLenum pname_, const GLuint *params_);
GLAPI void APIENTRY glTextureParameteriv (GLuint texture_, GLenum pname_, const GLint *param_);
GLAPI void APIENTRY glGenerateTextureMipmap (GLuint texture_);
GLAPI void APIENTRY glBindTextureUnit (GLuint unit_, GLuint texture_);
GLAPI void APIENTRY glGetTextureImage (GLuint texture_, GLint level_, GLenum format_, GLenum type_, GLsizei bufSize_, void *pixels_);
GLAPI void APIENTRY glGetCompressedTextureImage (GLuint texture_, GLint level_, GLsizei bufSize_, void *pixels_);
GLAPI void APIENTRY glGetTextureLevelParameterfv (GLuint texture_, GLint level_, GLenum pname_, GLfloat *params_);
GLAPI void APIENTRY glGetTextureLevelParameteriv (GLuint texture_, GLint level_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetTextureParameterfv (GLuint texture_, GLenum pname_, GLfloat *params_);
GLAPI void APIENTRY glGetTextureParameterIiv (GLuint texture_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetTextureParameterIuiv (GLuint texture_, GLenum pname_, GLuint *params_);
GLAPI void APIENTRY glGetTextureParameteriv (GLuint texture_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glCreateVertexArrays (GLsizei n_, GLuint *arrays_);
GLAPI void APIENTRY glDisableVertexArrayAttrib (GLuint vaobj_, GLuint index_);
GLAPI void APIENTRY glEnableVertexArrayAttrib (GLuint vaobj_, GLuint index_);
GLAPI void APIENTRY glVertexArrayElementBuffer (GLuint vaobj_, GLuint buffer_);
GLAPI void APIENTRY glVertexArrayVertexBuffer (GLuint vaobj_, GLuint bindingindex_, GLuint buffer_, GLintptr offset_, GLsizei stride_);
GLAPI void APIENTRY glVertexArrayVertexBuffers (GLuint vaobj_, GLuint first_, GLsizei count_, const GLuint *buffers_, const GLintptr *offsets_, const GLsizei *strides_);
GLAPI void APIENTRY glVertexArrayAttribBinding (GLuint vaobj_, GLuint attribindex_, GLuint bindingindex_);
GLAPI void APIENTRY glVertexArrayAttribFormat (GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLboolean normalized_, GLuint relativeoffset_);
GLAPI void APIENTRY glVertexArrayAttribIFormat (GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_);
GLAPI void APIENTRY glVertexArrayAttribLFormat (GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_);
GLAPI void APIENTRY glVertexArrayBindingDivisor (GLuint vaobj_, GLuint bindingindex_, GLuint divisor_);
GLAPI void APIENTRY glGetVertexArrayiv (GLuint vaobj_, GLenum pname_, GLint *param_);
GLAPI void APIENTRY glGetVertexArrayIndexediv (GLuint vaobj_, GLuint index_, GLenum pname_, GLint *param_);
GLAPI void APIENTRY glGetVertexArrayIndexed64iv (GLuint vaobj_, GLuint index_, GLenum pname_, GLint64 *param_);
GLAPI void APIENTRY glCreateSamplers (GLsizei n_, GLuint *samplers_);
GLAPI void APIENTRY glCreateProgramPipelines (GLsizei n_, GLuint *pipelines_);
GLAPI void APIENTRY glCreateQueries (GLenum target_, GLsizei n_, GLuint *ids_);
GLAPI void APIENTRY glGetQueryBufferObjecti64v (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_);
GLAPI void APIENTRY glGetQueryBufferObjectiv (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_);
GLAPI void APIENTRY glGetQueryBufferObjectui64v (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_);
GLAPI void APIENTRY glGetQueryBufferObjectuiv (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_);
GLAPI void APIENTRY glMemoryBarrierByRegion (GLbitfield barriers_);
GLAPI void APIENTRY glGetTextureSubImage (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, GLsizei bufSize_, void *pixels_);
GLAPI void APIENTRY glGetCompressedTextureSubImage (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLsizei bufSize_, void *pixels_);
GLAPI GLenum APIENTRY glGetGraphicsResetStatus (void);
GLAPI void APIENTRY glGetnCompressedTexImage (GLenum target_, GLint lod_, GLsizei bufSize_, void *pixels_);
GLAPI void APIENTRY glGetnTexImage (GLenum target_, GLint level_, GLenum format_, GLenum type_, GLsizei bufSize_, void *pixels_);
GLAPI void APIENTRY glGetnUniformdv (GLuint program_, GLint location_, GLsizei bufSize_, GLdouble *params_);
GLAPI void APIENTRY glGetnUniformfv (GLuint program_, GLint location_, GLsizei bufSize_, GLfloat *params_);
GLAPI void APIENTRY glGetnUniformiv (GLuint program_, GLint location_, GLsizei bufSize_, GLint *params_);
GLAPI void APIENTRY glGetnUniformuiv (GLuint program_, GLint location_, GLsizei bufSize_, GLuint *params_);
GLAPI void APIENTRY glReadnPixels (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, GLsizei bufSize_, void *data_);
GLAPI void APIENTRY glGetnMapdv (GLenum target_, GLenum query_, GLsizei bufSize_, GLdouble *v_);
GLAPI void APIENTRY glGetnMapfv (GLenum target_, GLenum query_, GLsizei bufSize_, GLfloat *v_);
GLAPI void APIENTRY glGetnMapiv (GLenum target_, GLenum query_, GLsizei bufSize_, GLint *v_);
GLAPI void APIENTRY glGetnPixelMapfv (GLenum map_, GLsizei bufSize_, GLfloat *values_);
GLAPI void APIENTRY glGetnPixelMapuiv (GLenum map_, GLsizei bufSize_, GLuint *values_);
GLAPI void APIENTRY glGetnPixelMapusv (GLenum map_, GLsizei bufSize_, GLushort *values_);
GLAPI void APIENTRY glGetnPolygonStipple (GLsizei bufSize_, GLubyte *pattern_);
GLAPI void APIENTRY glGetnColorTable (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *table_);
GLAPI void APIENTRY glGetnConvolutionFilter (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *image_);
GLAPI void APIENTRY glGetnSeparableFilter (GLenum target_, GLenum format_, GLenum type_, GLsizei rowBufSize_, void *row_, GLsizei columnBufSize_, void *column_, void *span_);
GLAPI void APIENTRY glGetnHistogram (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_);
GLAPI void APIENTRY glGetnMinmax (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_);
GLAPI void APIENTRY glTextureBarrier (void);
#endif
#endif /* GL_VERSION_4_5 */

#ifndef GL_ARB_ES2_compatibility
#define GL_ARB_ES2_compatibility 1
#endif /* GL_ARB_ES2_compatibility */

#ifndef GL_ARB_ES3_1_compatibility
#define GL_ARB_ES3_1_compatibility 1
#endif /* GL_ARB_ES3_1_compatibility */

#ifndef GL_ARB_ES3_compatibility
#define GL_ARB_ES3_compatibility 1
#endif /* GL_ARB_ES3_compatibility */

#ifndef GL_ARB_arrays_of_arrays
#define GL_ARB_arrays_of_arrays 1
#endif /* GL_ARB_arrays_of_arrays */

#ifndef GL_ARB_base_instance
#define GL_ARB_base_instance 1
#endif /* GL_ARB_base_instance */

#ifndef GL_ARB_bindless_texture
#define GL_ARB_bindless_texture 1
typedef uint64_t GLuint64EXT;
#define GL_UNSIGNED_INT64_ARB             0x140F
typedef GLuint64 (APIENTRYP PFNGLGETTEXTUREHANDLEARBPROC) (GLuint texture_);
typedef GLuint64 (APIENTRYP PFNGLGETTEXTURESAMPLERHANDLEARBPROC) (GLuint texture_, GLuint sampler_);
typedef void (APIENTRYP PFNGLMAKETEXTUREHANDLERESIDENTARBPROC) (GLuint64 handle_);
typedef void (APIENTRYP PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC) (GLuint64 handle_);
typedef GLuint64 (APIENTRYP PFNGLGETIMAGEHANDLEARBPROC) (GLuint texture_, GLint level_, GLboolean layered_, GLint layer_, GLenum format_);
typedef void (APIENTRYP PFNGLMAKEIMAGEHANDLERESIDENTARBPROC) (GLuint64 handle_, GLenum access_);
typedef void (APIENTRYP PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC) (GLuint64 handle_);
typedef void (APIENTRYP PFNGLUNIFORMHANDLEUI64ARBPROC) (GLint location_, GLuint64 value_);
typedef void (APIENTRYP PFNGLUNIFORMHANDLEUI64VARBPROC) (GLint location_, GLsizei count_, const GLuint64 *value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC) (GLuint program_, GLint location_, GLuint64 value_);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC) (GLuint program_, GLint location_, GLsizei count_, const GLuint64 *values_);
typedef GLboolean (APIENTRYP PFNGLISTEXTUREHANDLERESIDENTARBPROC) (GLuint64 handle_);
typedef GLboolean (APIENTRYP PFNGLISIMAGEHANDLERESIDENTARBPROC) (GLuint64 handle_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1UI64ARBPROC) (GLuint index_, GLuint64EXT x_);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1UI64VARBPROC) (GLuint index_, const GLuint64EXT *v_);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLUI64VARBPROC) (GLuint index_, GLenum pname_, GLuint64EXT *params_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI GLuint64 APIENTRY glGetTextureHandleARB (GLuint texture_);
GLAPI GLuint64 APIENTRY glGetTextureSamplerHandleARB (GLuint texture_, GLuint sampler_);
GLAPI void APIENTRY glMakeTextureHandleResidentARB (GLuint64 handle_);
GLAPI void APIENTRY glMakeTextureHandleNonResidentARB (GLuint64 handle_);
GLAPI GLuint64 APIENTRY glGetImageHandleARB (GLuint texture_, GLint level_, GLboolean layered_, GLint layer_, GLenum format_);
GLAPI void APIENTRY glMakeImageHandleResidentARB (GLuint64 handle_, GLenum access_);
GLAPI void APIENTRY glMakeImageHandleNonResidentARB (GLuint64 handle_);
GLAPI void APIENTRY glUniformHandleui64ARB (GLint location_, GLuint64 value_);
GLAPI void APIENTRY glUniformHandleui64vARB (GLint location_, GLsizei count_, const GLuint64 *value_);
GLAPI void APIENTRY glProgramUniformHandleui64ARB (GLuint program_, GLint location_, GLuint64 value_);
GLAPI void APIENTRY glProgramUniformHandleui64vARB (GLuint program_, GLint location_, GLsizei count_, const GLuint64 *values_);
GLAPI GLboolean APIENTRY glIsTextureHandleResidentARB (GLuint64 handle_);
GLAPI GLboolean APIENTRY glIsImageHandleResidentARB (GLuint64 handle_);
GLAPI void APIENTRY glVertexAttribL1ui64ARB (GLuint index_, GLuint64EXT x_);
GLAPI void APIENTRY glVertexAttribL1ui64vARB (GLuint index_, const GLuint64EXT *v_);
GLAPI void APIENTRY glGetVertexAttribLui64vARB (GLuint index_, GLenum pname_, GLuint64EXT *params_);
#endif
#endif /* GL_ARB_bindless_texture */

#ifndef GL_ARB_blend_func_extended
#define GL_ARB_blend_func_extended 1
#endif /* GL_ARB_blend_func_extended */

#ifndef GL_ARB_buffer_storage
#define GL_ARB_buffer_storage 1
#endif /* GL_ARB_buffer_storage */

#ifndef GL_ARB_cl_event
#define GL_ARB_cl_event 1
struct _cl_context;
struct _cl_event;
#define GL_SYNC_CL_EVENT_ARB              0x8240
#define GL_SYNC_CL_EVENT_COMPLETE_ARB     0x8241
typedef GLsync (APIENTRYP PFNGLCREATESYNCFROMCLEVENTARBPROC) (struct _cl_context *context_, struct _cl_event *event_, GLbitfield flags_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI GLsync APIENTRY glCreateSyncFromCLeventARB (struct _cl_context *context_, struct _cl_event *event_, GLbitfield flags_);
#endif
#endif /* GL_ARB_cl_event */

#ifndef GL_ARB_clear_buffer_object
#define GL_ARB_clear_buffer_object 1
#endif /* GL_ARB_clear_buffer_object */

#ifndef GL_ARB_clear_texture
#define GL_ARB_clear_texture 1
#endif /* GL_ARB_clear_texture */

#ifndef GL_ARB_clip_control
#define GL_ARB_clip_control 1
#endif /* GL_ARB_clip_control */

#ifndef GL_ARB_compressed_texture_pixel_storage
#define GL_ARB_compressed_texture_pixel_storage 1
#endif /* GL_ARB_compressed_texture_pixel_storage */

#ifndef GL_ARB_compute_shader
#define GL_ARB_compute_shader 1
#endif /* GL_ARB_compute_shader */

#ifndef GL_ARB_compute_variable_group_size
#define GL_ARB_compute_variable_group_size 1
#define GL_MAX_COMPUTE_VARIABLE_GROUP_INVOCATIONS_ARB 0x9344
#define GL_MAX_COMPUTE_FIXED_GROUP_INVOCATIONS_ARB 0x90EB
#define GL_MAX_COMPUTE_VARIABLE_GROUP_SIZE_ARB 0x9345
#define GL_MAX_COMPUTE_FIXED_GROUP_SIZE_ARB 0x91BF
typedef void (APIENTRYP PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC) (GLuint num_groups_x_, GLuint num_groups_y_, GLuint num_groups_z_, GLuint group_size_x_, GLuint group_size_y_, GLuint group_size_z_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glDispatchComputeGroupSizeARB (GLuint num_groups_x_, GLuint num_groups_y_, GLuint num_groups_z_, GLuint group_size_x_, GLuint group_size_y_, GLuint group_size_z_);
#endif
#endif /* GL_ARB_compute_variable_group_size */

#ifndef GL_ARB_conditional_render_inverted
#define GL_ARB_conditional_render_inverted 1
#endif /* GL_ARB_conditional_render_inverted */

#ifndef GL_ARB_conservative_depth
#define GL_ARB_conservative_depth 1
#endif /* GL_ARB_conservative_depth */

#ifndef GL_ARB_copy_buffer
#define GL_ARB_copy_buffer 1
#endif /* GL_ARB_copy_buffer */

#ifndef GL_ARB_copy_image
#define GL_ARB_copy_image 1
#endif /* GL_ARB_copy_image */

#ifndef GL_ARB_cull_distance
#define GL_ARB_cull_distance 1
#endif /* GL_ARB_cull_distance */

#ifndef GL_ARB_debug_output
#define GL_ARB_debug_output 1
typedef void (APIENTRY  *GLDEBUGPROCARB)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
#define GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB   0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION_ARB    0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM_ARB  0x8245
#define GL_DEBUG_SOURCE_API_ARB           0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB 0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER_ARB 0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY_ARB   0x8249
#define GL_DEBUG_SOURCE_APPLICATION_ARB   0x824A
#define GL_DEBUG_SOURCE_OTHER_ARB         0x824B
#define GL_DEBUG_TYPE_ERROR_ARB           0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB 0x824E
#define GL_DEBUG_TYPE_PORTABILITY_ARB     0x824F
#define GL_DEBUG_TYPE_PERFORMANCE_ARB     0x8250
#define GL_DEBUG_TYPE_OTHER_ARB           0x8251
#define GL_MAX_DEBUG_MESSAGE_LENGTH_ARB   0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_ARB  0x9144
#define GL_DEBUG_LOGGED_MESSAGES_ARB      0x9145
#define GL_DEBUG_SEVERITY_HIGH_ARB        0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_ARB      0x9147
#define GL_DEBUG_SEVERITY_LOW_ARB         0x9148
typedef void (APIENTRYP PFNGLDEBUGMESSAGECONTROLARBPROC) (GLenum source_, GLenum type_, GLenum severity_, GLsizei count_, const GLuint *ids_, GLboolean enabled_);
typedef void (APIENTRYP PFNGLDEBUGMESSAGEINSERTARBPROC) (GLenum source_, GLenum type_, GLuint id_, GLenum severity_, GLsizei length_, const GLchar *buf_);
typedef void (APIENTRYP PFNGLDEBUGMESSAGECALLBACKARBPROC) (GLDEBUGPROCARB callback_, const void *userParam_);
typedef GLuint (APIENTRYP PFNGLGETDEBUGMESSAGELOGARBPROC) (GLuint count_, GLsizei bufSize_, GLenum *sources_, GLenum *types_, GLuint *ids_, GLenum *severities_, GLsizei *lengths_, GLchar *messageLog_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glDebugMessageControlARB (GLenum source_, GLenum type_, GLenum severity_, GLsizei count_, const GLuint *ids_, GLboolean enabled_);
GLAPI void APIENTRY glDebugMessageInsertARB (GLenum source_, GLenum type_, GLuint id_, GLenum severity_, GLsizei length_, const GLchar *buf_);
GLAPI void APIENTRY glDebugMessageCallbackARB (GLDEBUGPROCARB callback_, const void *userParam_);
GLAPI GLuint APIENTRY glGetDebugMessageLogARB (GLuint count_, GLsizei bufSize_, GLenum *sources_, GLenum *types_, GLuint *ids_, GLenum *severities_, GLsizei *lengths_, GLchar *messageLog_);
#endif
#endif /* GL_ARB_debug_output */

#ifndef GL_ARB_depth_buffer_float
#define GL_ARB_depth_buffer_float 1
#endif /* GL_ARB_depth_buffer_float */

#ifndef GL_ARB_depth_clamp
#define GL_ARB_depth_clamp 1
#endif /* GL_ARB_depth_clamp */

#ifndef GL_ARB_derivative_control
#define GL_ARB_derivative_control 1
#endif /* GL_ARB_derivative_control */

#ifndef GL_ARB_direct_state_access
#define GL_ARB_direct_state_access 1
#endif /* GL_ARB_direct_state_access */

#ifndef GL_ARB_draw_buffers_blend
#define GL_ARB_draw_buffers_blend 1
typedef void (APIENTRYP PFNGLBLENDEQUATIONIARBPROC) (GLuint buf_, GLenum mode_);
typedef void (APIENTRYP PFNGLBLENDEQUATIONSEPARATEIARBPROC) (GLuint buf_, GLenum modeRGB_, GLenum modeAlpha_);
typedef void (APIENTRYP PFNGLBLENDFUNCIARBPROC) (GLuint buf_, GLenum src_, GLenum dst_);
typedef void (APIENTRYP PFNGLBLENDFUNCSEPARATEIARBPROC) (GLuint buf_, GLenum srcRGB_, GLenum dstRGB_, GLenum srcAlpha_, GLenum dstAlpha_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glBlendEquationiARB (GLuint buf_, GLenum mode_);
GLAPI void APIENTRY glBlendEquationSeparateiARB (GLuint buf_, GLenum modeRGB_, GLenum modeAlpha_);
GLAPI void APIENTRY glBlendFunciARB (GLuint buf_, GLenum src_, GLenum dst_);
GLAPI void APIENTRY glBlendFuncSeparateiARB (GLuint buf_, GLenum srcRGB_, GLenum dstRGB_, GLenum srcAlpha_, GLenum dstAlpha_);
#endif
#endif /* GL_ARB_draw_buffers_blend */

#ifndef GL_ARB_draw_elements_base_vertex
#define GL_ARB_draw_elements_base_vertex 1
#endif /* GL_ARB_draw_elements_base_vertex */

#ifndef GL_ARB_draw_indirect
#define GL_ARB_draw_indirect 1
#endif /* GL_ARB_draw_indirect */

#ifndef GL_ARB_enhanced_layouts
#define GL_ARB_enhanced_layouts 1
#endif /* GL_ARB_enhanced_layouts */

#ifndef GL_ARB_explicit_attrib_location
#define GL_ARB_explicit_attrib_location 1
#endif /* GL_ARB_explicit_attrib_location */

#ifndef GL_ARB_explicit_uniform_location
#define GL_ARB_explicit_uniform_location 1
#endif /* GL_ARB_explicit_uniform_location */

#ifndef GL_ARB_fragment_coord_conventions
#define GL_ARB_fragment_coord_conventions 1
#endif /* GL_ARB_fragment_coord_conventions */

#ifndef GL_ARB_fragment_layer_viewport
#define GL_ARB_fragment_layer_viewport 1
#endif /* GL_ARB_fragment_layer_viewport */

#ifndef GL_ARB_framebuffer_no_attachments
#define GL_ARB_framebuffer_no_attachments 1
#endif /* GL_ARB_framebuffer_no_attachments */

#ifndef GL_ARB_framebuffer_object
#define GL_ARB_framebuffer_object 1
#endif /* GL_ARB_framebuffer_object */

#ifndef GL_ARB_framebuffer_sRGB
#define GL_ARB_framebuffer_sRGB 1
#endif /* GL_ARB_framebuffer_sRGB */

#ifndef GL_ARB_get_program_binary
#define GL_ARB_get_program_binary 1
#endif /* GL_ARB_get_program_binary */

#ifndef GL_ARB_get_texture_sub_image
#define GL_ARB_get_texture_sub_image 1
#endif /* GL_ARB_get_texture_sub_image */

#ifndef GL_ARB_gpu_shader5
#define GL_ARB_gpu_shader5 1
#endif /* GL_ARB_gpu_shader5 */

#ifndef GL_ARB_gpu_shader_fp64
#define GL_ARB_gpu_shader_fp64 1
#endif /* GL_ARB_gpu_shader_fp64 */

#ifndef GL_ARB_half_float_vertex
#define GL_ARB_half_float_vertex 1
#endif /* GL_ARB_half_float_vertex */

#ifndef GL_ARB_imaging
#define GL_ARB_imaging 1
#define GL_BLEND_COLOR                    0x8005
#define GL_BLEND_EQUATION                 0x8009
#define GL_CONVOLUTION_1D                 0x8010
#define GL_CONVOLUTION_2D                 0x8011
#define GL_SEPARABLE_2D                   0x8012
#define GL_CONVOLUTION_BORDER_MODE        0x8013
#define GL_CONVOLUTION_FILTER_SCALE       0x8014
#define GL_CONVOLUTION_FILTER_BIAS        0x8015
#define GL_REDUCE                         0x8016
#define GL_CONVOLUTION_FORMAT             0x8017
#define GL_CONVOLUTION_WIDTH              0x8018
#define GL_CONVOLUTION_HEIGHT             0x8019
#define GL_MAX_CONVOLUTION_WIDTH          0x801A
#define GL_MAX_CONVOLUTION_HEIGHT         0x801B
#define GL_POST_CONVOLUTION_RED_SCALE     0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE   0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE    0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE   0x801F
#define GL_POST_CONVOLUTION_RED_BIAS      0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS    0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS     0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS    0x8023
#define GL_HISTOGRAM                      0x8024
#define GL_PROXY_HISTOGRAM                0x8025
#define GL_HISTOGRAM_WIDTH                0x8026
#define GL_HISTOGRAM_FORMAT               0x8027
#define GL_HISTOGRAM_RED_SIZE             0x8028
#define GL_HISTOGRAM_GREEN_SIZE           0x8029
#define GL_HISTOGRAM_BLUE_SIZE            0x802A
#define GL_HISTOGRAM_ALPHA_SIZE           0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE       0x802C
#define GL_HISTOGRAM_SINK                 0x802D
#define GL_MINMAX                         0x802E
#define GL_MINMAX_FORMAT                  0x802F
#define GL_MINMAX_SINK                    0x8030
#define GL_TABLE_TOO_LARGE                0x8031
#define GL_COLOR_MATRIX                   0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH       0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH   0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE    0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE  0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE   0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE  0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS     0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS   0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS    0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS   0x80BB
#define GL_COLOR_TABLE                    0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE   0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE  0x80D2
#define GL_PROXY_COLOR_TABLE              0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE 0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE 0x80D5
#define GL_COLOR_TABLE_SCALE              0x80D6
#define GL_COLOR_TABLE_BIAS               0x80D7
#define GL_COLOR_TABLE_FORMAT             0x80D8
#define GL_COLOR_TABLE_WIDTH              0x80D9
#define GL_COLOR_TABLE_RED_SIZE           0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE         0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE          0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE         0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE     0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE     0x80DF
#define GL_CONSTANT_BORDER                0x8151
#define GL_REPLICATE_BORDER               0x8153
#define GL_CONVOLUTION_BORDER_COLOR       0x8154
typedef void (APIENTRYP PFNGLCOLORTABLEPROC) (GLenum target_, GLenum internalformat_, GLsizei width_, GLenum format_, GLenum type_, const void *table_);
typedef void (APIENTRYP PFNGLCOLORTABLEPARAMETERFVPROC) (GLenum target_, GLenum pname_, const GLfloat *params_);
typedef void (APIENTRYP PFNGLCOLORTABLEPARAMETERIVPROC) (GLenum target_, GLenum pname_, const GLint *params_);
typedef void (APIENTRYP PFNGLCOPYCOLORTABLEPROC) (GLenum target_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_);
typedef void (APIENTRYP PFNGLGETCOLORTABLEPROC) (GLenum target_, GLenum format_, GLenum type_, void *table_);
typedef void (APIENTRYP PFNGLGETCOLORTABLEPARAMETERFVPROC) (GLenum target_, GLenum pname_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETCOLORTABLEPARAMETERIVPROC) (GLenum target_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLCOLORSUBTABLEPROC) (GLenum target_, GLsizei start_, GLsizei count_, GLenum format_, GLenum type_, const void *data_);
typedef void (APIENTRYP PFNGLCOPYCOLORSUBTABLEPROC) (GLenum target_, GLsizei start_, GLint x_, GLint y_, GLsizei width_);
typedef void (APIENTRYP PFNGLCONVOLUTIONFILTER1DPROC) (GLenum target_, GLenum internalformat_, GLsizei width_, GLenum format_, GLenum type_, const void *image_);
typedef void (APIENTRYP PFNGLCONVOLUTIONFILTER2DPROC) (GLenum target_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *image_);
typedef void (APIENTRYP PFNGLCONVOLUTIONPARAMETERFPROC) (GLenum target_, GLenum pname_, GLfloat params_);
typedef void (APIENTRYP PFNGLCONVOLUTIONPARAMETERFVPROC) (GLenum target_, GLenum pname_, const GLfloat *params_);
typedef void (APIENTRYP PFNGLCONVOLUTIONPARAMETERIPROC) (GLenum target_, GLenum pname_, GLint params_);
typedef void (APIENTRYP PFNGLCONVOLUTIONPARAMETERIVPROC) (GLenum target_, GLenum pname_, const GLint *params_);
typedef void (APIENTRYP PFNGLCOPYCONVOLUTIONFILTER1DPROC) (GLenum target_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_);
typedef void (APIENTRYP PFNGLCOPYCONVOLUTIONFILTER2DPROC) (GLenum target_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
typedef void (APIENTRYP PFNGLGETCONVOLUTIONFILTERPROC) (GLenum target_, GLenum format_, GLenum type_, void *image_);
typedef void (APIENTRYP PFNGLGETCONVOLUTIONPARAMETERFVPROC) (GLenum target_, GLenum pname_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETCONVOLUTIONPARAMETERIVPROC) (GLenum target_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETSEPARABLEFILTERPROC) (GLenum target_, GLenum format_, GLenum type_, void *row_, void *column_, void *span_);
typedef void (APIENTRYP PFNGLSEPARABLEFILTER2DPROC) (GLenum target_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *row_, const void *column_);
typedef void (APIENTRYP PFNGLGETHISTOGRAMPROC) (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, void *values_);
typedef void (APIENTRYP PFNGLGETHISTOGRAMPARAMETERFVPROC) (GLenum target_, GLenum pname_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETHISTOGRAMPARAMETERIVPROC) (GLenum target_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLGETMINMAXPROC) (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, void *values_);
typedef void (APIENTRYP PFNGLGETMINMAXPARAMETERFVPROC) (GLenum target_, GLenum pname_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETMINMAXPARAMETERIVPROC) (GLenum target_, GLenum pname_, GLint *params_);
typedef void (APIENTRYP PFNGLHISTOGRAMPROC) (GLenum target_, GLsizei width_, GLenum internalformat_, GLboolean sink_);
typedef void (APIENTRYP PFNGLMINMAXPROC) (GLenum target_, GLenum internalformat_, GLboolean sink_);
typedef void (APIENTRYP PFNGLRESETHISTOGRAMPROC) (GLenum target_);
typedef void (APIENTRYP PFNGLRESETMINMAXPROC) (GLenum target_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glColorTable (GLenum target_, GLenum internalformat_, GLsizei width_, GLenum format_, GLenum type_, const void *table_);
GLAPI void APIENTRY glColorTableParameterfv (GLenum target_, GLenum pname_, const GLfloat *params_);
GLAPI void APIENTRY glColorTableParameteriv (GLenum target_, GLenum pname_, const GLint *params_);
GLAPI void APIENTRY glCopyColorTable (GLenum target_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_);
GLAPI void APIENTRY glGetColorTable (GLenum target_, GLenum format_, GLenum type_, void *table_);
GLAPI void APIENTRY glGetColorTableParameterfv (GLenum target_, GLenum pname_, GLfloat *params_);
GLAPI void APIENTRY glGetColorTableParameteriv (GLenum target_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glColorSubTable (GLenum target_, GLsizei start_, GLsizei count_, GLenum format_, GLenum type_, const void *data_);
GLAPI void APIENTRY glCopyColorSubTable (GLenum target_, GLsizei start_, GLint x_, GLint y_, GLsizei width_);
GLAPI void APIENTRY glConvolutionFilter1D (GLenum target_, GLenum internalformat_, GLsizei width_, GLenum format_, GLenum type_, const void *image_);
GLAPI void APIENTRY glConvolutionFilter2D (GLenum target_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *image_);
GLAPI void APIENTRY glConvolutionParameterf (GLenum target_, GLenum pname_, GLfloat params_);
GLAPI void APIENTRY glConvolutionParameterfv (GLenum target_, GLenum pname_, const GLfloat *params_);
GLAPI void APIENTRY glConvolutionParameteri (GLenum target_, GLenum pname_, GLint params_);
GLAPI void APIENTRY glConvolutionParameteriv (GLenum target_, GLenum pname_, const GLint *params_);
GLAPI void APIENTRY glCopyConvolutionFilter1D (GLenum target_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_);
GLAPI void APIENTRY glCopyConvolutionFilter2D (GLenum target_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
GLAPI void APIENTRY glGetConvolutionFilter (GLenum target_, GLenum format_, GLenum type_, void *image_);
GLAPI void APIENTRY glGetConvolutionParameterfv (GLenum target_, GLenum pname_, GLfloat *params_);
GLAPI void APIENTRY glGetConvolutionParameteriv (GLenum target_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetSeparableFilter (GLenum target_, GLenum format_, GLenum type_, void *row_, void *column_, void *span_);
GLAPI void APIENTRY glSeparableFilter2D (GLenum target_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *row_, const void *column_);
GLAPI void APIENTRY glGetHistogram (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, void *values_);
GLAPI void APIENTRY glGetHistogramParameterfv (GLenum target_, GLenum pname_, GLfloat *params_);
GLAPI void APIENTRY glGetHistogramParameteriv (GLenum target_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glGetMinmax (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, void *values_);
GLAPI void APIENTRY glGetMinmaxParameterfv (GLenum target_, GLenum pname_, GLfloat *params_);
GLAPI void APIENTRY glGetMinmaxParameteriv (GLenum target_, GLenum pname_, GLint *params_);
GLAPI void APIENTRY glHistogram (GLenum target_, GLsizei width_, GLenum internalformat_, GLboolean sink_);
GLAPI void APIENTRY glMinmax (GLenum target_, GLenum internalformat_, GLboolean sink_);
GLAPI void APIENTRY glResetHistogram (GLenum target_);
GLAPI void APIENTRY glResetMinmax (GLenum target_);
#endif
#endif /* GL_ARB_imaging */

#ifndef GL_ARB_indirect_parameters
#define GL_ARB_indirect_parameters 1
#define GL_PARAMETER_BUFFER_ARB           0x80EE
#define GL_PARAMETER_BUFFER_BINDING_ARB   0x80EF
typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC) (GLenum mode_, GLintptr indirect_, GLintptr drawcount_, GLsizei maxdrawcount_, GLsizei stride_);
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC) (GLenum mode_, GLenum type_, GLintptr indirect_, GLintptr drawcount_, GLsizei maxdrawcount_, GLsizei stride_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glMultiDrawArraysIndirectCountARB (GLenum mode_, GLintptr indirect_, GLintptr drawcount_, GLsizei maxdrawcount_, GLsizei stride_);
GLAPI void APIENTRY glMultiDrawElementsIndirectCountARB (GLenum mode_, GLenum type_, GLintptr indirect_, GLintptr drawcount_, GLsizei maxdrawcount_, GLsizei stride_);
#endif
#endif /* GL_ARB_indirect_parameters */

#ifndef GL_ARB_internalformat_query
#define GL_ARB_internalformat_query 1
#endif /* GL_ARB_internalformat_query */

#ifndef GL_ARB_internalformat_query2
#define GL_ARB_internalformat_query2 1
#define GL_SRGB_DECODE_ARB                0x8299
#endif /* GL_ARB_internalformat_query2 */

#ifndef GL_ARB_invalidate_subdata
#define GL_ARB_invalidate_subdata 1
#endif /* GL_ARB_invalidate_subdata */

#ifndef GL_ARB_map_buffer_alignment
#define GL_ARB_map_buffer_alignment 1
#endif /* GL_ARB_map_buffer_alignment */

#ifndef GL_ARB_map_buffer_range
#define GL_ARB_map_buffer_range 1
#endif /* GL_ARB_map_buffer_range */

#ifndef GL_ARB_multi_bind
#define GL_ARB_multi_bind 1
#endif /* GL_ARB_multi_bind */

#ifndef GL_ARB_multi_draw_indirect
#define GL_ARB_multi_draw_indirect 1
#endif /* GL_ARB_multi_draw_indirect */

#ifndef GL_ARB_occlusion_query2
#define GL_ARB_occlusion_query2 1
#endif /* GL_ARB_occlusion_query2 */

#ifndef GL_ARB_pipeline_statistics_query
#define GL_ARB_pipeline_statistics_query 1
#define GL_VERTICES_SUBMITTED_ARB         0x82EE
#define GL_PRIMITIVES_SUBMITTED_ARB       0x82EF
#define GL_VERTEX_SHADER_INVOCATIONS_ARB  0x82F0
#define GL_TESS_CONTROL_SHADER_PATCHES_ARB 0x82F1
#define GL_TESS_EVALUATION_SHADER_INVOCATIONS_ARB 0x82F2
#define GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED_ARB 0x82F3
#define GL_FRAGMENT_SHADER_INVOCATIONS_ARB 0x82F4
#define GL_COMPUTE_SHADER_INVOCATIONS_ARB 0x82F5
#define GL_CLIPPING_INPUT_PRIMITIVES_ARB  0x82F6
#define GL_CLIPPING_OUTPUT_PRIMITIVES_ARB 0x82F7
#endif /* GL_ARB_pipeline_statistics_query */

#ifndef GL_ARB_program_interface_query
#define GL_ARB_program_interface_query 1
#endif /* GL_ARB_program_interface_query */

#ifndef GL_ARB_provoking_vertex
#define GL_ARB_provoking_vertex 1
#endif /* GL_ARB_provoking_vertex */

#ifndef GL_ARB_query_buffer_object
#define GL_ARB_query_buffer_object 1
#endif /* GL_ARB_query_buffer_object */

#ifndef GL_ARB_robust_buffer_access_behavior
#define GL_ARB_robust_buffer_access_behavior 1
#endif /* GL_ARB_robust_buffer_access_behavior */

#ifndef GL_ARB_robustness
#define GL_ARB_robustness 1
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB 0x00000004
#define GL_LOSE_CONTEXT_ON_RESET_ARB      0x8252
#define GL_GUILTY_CONTEXT_RESET_ARB       0x8253
#define GL_INNOCENT_CONTEXT_RESET_ARB     0x8254
#define GL_UNKNOWN_CONTEXT_RESET_ARB      0x8255
#define GL_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#define GL_NO_RESET_NOTIFICATION_ARB      0x8261
typedef GLenum (APIENTRYP PFNGLGETGRAPHICSRESETSTATUSARBPROC) (void);
typedef void (APIENTRYP PFNGLGETNTEXIMAGEARBPROC) (GLenum target_, GLint level_, GLenum format_, GLenum type_, GLsizei bufSize_, void *img_);
typedef void (APIENTRYP PFNGLREADNPIXELSARBPROC) (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, GLsizei bufSize_, void *data_);
typedef void (APIENTRYP PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) (GLenum target_, GLint lod_, GLsizei bufSize_, void *img_);
typedef void (APIENTRYP PFNGLGETNUNIFORMFVARBPROC) (GLuint program_, GLint location_, GLsizei bufSize_, GLfloat *params_);
typedef void (APIENTRYP PFNGLGETNUNIFORMIVARBPROC) (GLuint program_, GLint location_, GLsizei bufSize_, GLint *params_);
typedef void (APIENTRYP PFNGLGETNUNIFORMUIVARBPROC) (GLuint program_, GLint location_, GLsizei bufSize_, GLuint *params_);
typedef void (APIENTRYP PFNGLGETNUNIFORMDVARBPROC) (GLuint program_, GLint location_, GLsizei bufSize_, GLdouble *params_);
typedef void (APIENTRYP PFNGLGETNMAPDVARBPROC) (GLenum target_, GLenum query_, GLsizei bufSize_, GLdouble *v_);
typedef void (APIENTRYP PFNGLGETNMAPFVARBPROC) (GLenum target_, GLenum query_, GLsizei bufSize_, GLfloat *v_);
typedef void (APIENTRYP PFNGLGETNMAPIVARBPROC) (GLenum target_, GLenum query_, GLsizei bufSize_, GLint *v_);
typedef void (APIENTRYP PFNGLGETNPIXELMAPFVARBPROC) (GLenum map_, GLsizei bufSize_, GLfloat *values_);
typedef void (APIENTRYP PFNGLGETNPIXELMAPUIVARBPROC) (GLenum map_, GLsizei bufSize_, GLuint *values_);
typedef void (APIENTRYP PFNGLGETNPIXELMAPUSVARBPROC) (GLenum map_, GLsizei bufSize_, GLushort *values_);
typedef void (APIENTRYP PFNGLGETNPOLYGONSTIPPLEARBPROC) (GLsizei bufSize_, GLubyte *pattern_);
typedef void (APIENTRYP PFNGLGETNCOLORTABLEARBPROC) (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *table_);
typedef void (APIENTRYP PFNGLGETNCONVOLUTIONFILTERARBPROC) (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *image_);
typedef void (APIENTRYP PFNGLGETNSEPARABLEFILTERARBPROC) (GLenum target_, GLenum format_, GLenum type_, GLsizei rowBufSize_, void *row_, GLsizei columnBufSize_, void *column_, void *span_);
typedef void (APIENTRYP PFNGLGETNHISTOGRAMARBPROC) (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_);
typedef void (APIENTRYP PFNGLGETNMINMAXARBPROC) (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI GLenum APIENTRY glGetGraphicsResetStatusARB (void);
GLAPI void APIENTRY glGetnTexImageARB (GLenum target_, GLint level_, GLenum format_, GLenum type_, GLsizei bufSize_, void *img_);
GLAPI void APIENTRY glReadnPixelsARB (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, GLsizei bufSize_, void *data_);
GLAPI void APIENTRY glGetnCompressedTexImageARB (GLenum target_, GLint lod_, GLsizei bufSize_, void *img_);
GLAPI void APIENTRY glGetnUniformfvARB (GLuint program_, GLint location_, GLsizei bufSize_, GLfloat *params_);
GLAPI void APIENTRY glGetnUniformivARB (GLuint program_, GLint location_, GLsizei bufSize_, GLint *params_);
GLAPI void APIENTRY glGetnUniformuivARB (GLuint program_, GLint location_, GLsizei bufSize_, GLuint *params_);
GLAPI void APIENTRY glGetnUniformdvARB (GLuint program_, GLint location_, GLsizei bufSize_, GLdouble *params_);
GLAPI void APIENTRY glGetnMapdvARB (GLenum target_, GLenum query_, GLsizei bufSize_, GLdouble *v_);
GLAPI void APIENTRY glGetnMapfvARB (GLenum target_, GLenum query_, GLsizei bufSize_, GLfloat *v_);
GLAPI void APIENTRY glGetnMapivARB (GLenum target_, GLenum query_, GLsizei bufSize_, GLint *v_);
GLAPI void APIENTRY glGetnPixelMapfvARB (GLenum map_, GLsizei bufSize_, GLfloat *values_);
GLAPI void APIENTRY glGetnPixelMapuivARB (GLenum map_, GLsizei bufSize_, GLuint *values_);
GLAPI void APIENTRY glGetnPixelMapusvARB (GLenum map_, GLsizei bufSize_, GLushort *values_);
GLAPI void APIENTRY glGetnPolygonStippleARB (GLsizei bufSize_, GLubyte *pattern_);
GLAPI void APIENTRY glGetnColorTableARB (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *table_);
GLAPI void APIENTRY glGetnConvolutionFilterARB (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *image_);
GLAPI void APIENTRY glGetnSeparableFilterARB (GLenum target_, GLenum format_, GLenum type_, GLsizei rowBufSize_, void *row_, GLsizei columnBufSize_, void *column_, void *span_);
GLAPI void APIENTRY glGetnHistogramARB (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_);
GLAPI void APIENTRY glGetnMinmaxARB (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_);
#endif
#endif /* GL_ARB_robustness */

#ifndef GL_ARB_robustness_isolation
#define GL_ARB_robustness_isolation 1
#endif /* GL_ARB_robustness_isolation */

#ifndef GL_ARB_sample_shading
#define GL_ARB_sample_shading 1
#define GL_SAMPLE_SHADING_ARB             0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE_ARB   0x8C37
typedef void (APIENTRYP PFNGLMINSAMPLESHADINGARBPROC) (GLfloat value_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glMinSampleShadingARB (GLfloat value_);
#endif
#endif /* GL_ARB_sample_shading */

#ifndef GL_ARB_sampler_objects
#define GL_ARB_sampler_objects 1
#endif /* GL_ARB_sampler_objects */

#ifndef GL_ARB_seamless_cube_map
#define GL_ARB_seamless_cube_map 1
#endif /* GL_ARB_seamless_cube_map */

#ifndef GL_ARB_seamless_cubemap_per_texture
#define GL_ARB_seamless_cubemap_per_texture 1
#endif /* GL_ARB_seamless_cubemap_per_texture */

#ifndef GL_ARB_separate_shader_objects
#define GL_ARB_separate_shader_objects 1
#endif /* GL_ARB_separate_shader_objects */

#ifndef GL_ARB_shader_atomic_counters
#define GL_ARB_shader_atomic_counters 1
#endif /* GL_ARB_shader_atomic_counters */

#ifndef GL_ARB_shader_bit_encoding
#define GL_ARB_shader_bit_encoding 1
#endif /* GL_ARB_shader_bit_encoding */

#ifndef GL_ARB_shader_draw_parameters
#define GL_ARB_shader_draw_parameters 1
#endif /* GL_ARB_shader_draw_parameters */

#ifndef GL_ARB_shader_group_vote
#define GL_ARB_shader_group_vote 1
#endif /* GL_ARB_shader_group_vote */

#ifndef GL_ARB_shader_image_load_store
#define GL_ARB_shader_image_load_store 1
#endif /* GL_ARB_shader_image_load_store */

#ifndef GL_ARB_shader_image_size
#define GL_ARB_shader_image_size 1
#endif /* GL_ARB_shader_image_size */

#ifndef GL_ARB_shader_precision
#define GL_ARB_shader_precision 1
#endif /* GL_ARB_shader_precision */

#ifndef GL_ARB_shader_stencil_export
#define GL_ARB_shader_stencil_export 1
#endif /* GL_ARB_shader_stencil_export */

#ifndef GL_ARB_shader_storage_buffer_object
#define GL_ARB_shader_storage_buffer_object 1
#endif /* GL_ARB_shader_storage_buffer_object */

#ifndef GL_ARB_shader_subroutine
#define GL_ARB_shader_subroutine 1
#endif /* GL_ARB_shader_subroutine */

#ifndef GL_ARB_shader_texture_image_samples
#define GL_ARB_shader_texture_image_samples 1
#endif /* GL_ARB_shader_texture_image_samples */

#ifndef GL_ARB_shading_language_420pack
#define GL_ARB_shading_language_420pack 1
#endif /* GL_ARB_shading_language_420pack */

#ifndef GL_ARB_shading_language_include
#define GL_ARB_shading_language_include 1
#define GL_SHADER_INCLUDE_ARB             0x8DAE
#define GL_NAMED_STRING_LENGTH_ARB        0x8DE9
#define GL_NAMED_STRING_TYPE_ARB          0x8DEA
typedef void (APIENTRYP PFNGLNAMEDSTRINGARBPROC) (GLenum type_, GLint namelen_, const GLchar *name_, GLint stringlen_, const GLchar *string_);
typedef void (APIENTRYP PFNGLDELETENAMEDSTRINGARBPROC) (GLint namelen_, const GLchar *name_);
typedef void (APIENTRYP PFNGLCOMPILESHADERINCLUDEARBPROC) (GLuint shader_, GLsizei count_, const GLchar *const*path_, const GLint *length_);
typedef GLboolean (APIENTRYP PFNGLISNAMEDSTRINGARBPROC) (GLint namelen_, const GLchar *name_);
typedef void (APIENTRYP PFNGLGETNAMEDSTRINGARBPROC) (GLint namelen_, const GLchar *name_, GLsizei bufSize_, GLint *stringlen_, GLchar *string_);
typedef void (APIENTRYP PFNGLGETNAMEDSTRINGIVARBPROC) (GLint namelen_, const GLchar *name_, GLenum pname_, GLint *params_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glNamedStringARB (GLenum type_, GLint namelen_, const GLchar *name_, GLint stringlen_, const GLchar *string_);
GLAPI void APIENTRY glDeleteNamedStringARB (GLint namelen_, const GLchar *name_);
GLAPI void APIENTRY glCompileShaderIncludeARB (GLuint shader_, GLsizei count_, const GLchar *const*path_, const GLint *length_);
GLAPI GLboolean APIENTRY glIsNamedStringARB (GLint namelen_, const GLchar *name_);
GLAPI void APIENTRY glGetNamedStringARB (GLint namelen_, const GLchar *name_, GLsizei bufSize_, GLint *stringlen_, GLchar *string_);
GLAPI void APIENTRY glGetNamedStringivARB (GLint namelen_, const GLchar *name_, GLenum pname_, GLint *params_);
#endif
#endif /* GL_ARB_shading_language_include */

#ifndef GL_ARB_shading_language_packing
#define GL_ARB_shading_language_packing 1
#endif /* GL_ARB_shading_language_packing */

#ifndef GL_ARB_sparse_buffer
#define GL_ARB_sparse_buffer 1
#define GL_SPARSE_STORAGE_BIT_ARB         0x0400
#define GL_SPARSE_BUFFER_PAGE_SIZE_ARB    0x82F8
typedef void (APIENTRYP PFNGLBUFFERPAGECOMMITMENTARBPROC) (GLenum target_, GLintptr offset_, GLsizeiptr size_, GLboolean commit_);
typedef void (APIENTRYP PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC) (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, GLboolean commit_);
typedef void (APIENTRYP PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC) (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, GLboolean commit_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glBufferPageCommitmentARB (GLenum target_, GLintptr offset_, GLsizeiptr size_, GLboolean commit_);
GLAPI void APIENTRY glNamedBufferPageCommitmentEXT (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, GLboolean commit_);
GLAPI void APIENTRY glNamedBufferPageCommitmentARB (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, GLboolean commit_);
#endif
#endif /* GL_ARB_sparse_buffer */

#ifndef GL_ARB_sparse_texture
#define GL_ARB_sparse_texture 1
#define GL_TEXTURE_SPARSE_ARB             0x91A6
#define GL_VIRTUAL_PAGE_SIZE_INDEX_ARB    0x91A7
#define GL_NUM_SPARSE_LEVELS_ARB          0x91AA
#define GL_NUM_VIRTUAL_PAGE_SIZES_ARB     0x91A8
#define GL_VIRTUAL_PAGE_SIZE_X_ARB        0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_ARB        0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_ARB        0x9197
#define GL_MAX_SPARSE_TEXTURE_SIZE_ARB    0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_ARB 0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_ARB 0x919A
#define GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_ARB 0x91A9
typedef void (APIENTRYP PFNGLTEXPAGECOMMITMENTARBPROC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean commit_);
#ifdef GL_GLEXT_PROTOTYPES
GLAPI void APIENTRY glTexPageCommitmentARB (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean commit_);
#endif
#endif /* GL_ARB_sparse_texture */

#ifndef GL_ARB_stencil_texturing
#define GL_ARB_stencil_texturing 1
#endif /* GL_ARB_stencil_texturing */

#ifndef GL_ARB_sync
#define GL_ARB_sync 1
#endif /* GL_ARB_sync */

#ifndef GL_ARB_tessellation_shader
#define GL_ARB_tessellation_shader 1
#endif /* GL_ARB_tessellation_shader */

#ifndef GL_ARB_texture_barrier
#define GL_ARB_texture_barrier 1
#endif /* GL_ARB_texture_barrier */

#ifndef GL_ARB_texture_buffer_object_rgb32
#define GL_ARB_texture_buffer_object_rgb32 1
#endif /* GL_ARB_texture_buffer_object_rgb32 */

#ifndef GL_ARB_texture_buffer_range
#define GL_ARB_texture_buffer_range 1
#endif /* GL_ARB_texture_buffer_range */

#ifndef GL_ARB_texture_compression_bptc
#define GL_ARB_texture_compression_bptc 1
#define GL_COMPRESSED_RGBA_BPTC_UNORM_ARB 0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB 0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB 0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB 0x8E8F
#endif /* GL_ARB_texture_compression_bptc */

#ifndef GL_ARB_texture_compression_rgtc
#define GL_ARB_texture_compression_rgtc 1
#endif /* GL_ARB_texture_compression_rgtc */

#ifndef GL_ARB_texture_cube_map_array
#define GL_ARB_texture_cube_map_array 1
#define GL_TEXTURE_CUBE_MAP_ARRAY_ARB     0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB 0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB 0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY_ARB     0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900F
#endif /* GL_ARB_texture_cube_map_array */

#ifndef GL_ARB_texture_gather
#define GL_ARB_texture_gather 1
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5F
#define GL_MAX_PROGRAM_TEXTURE_GATHER_COMPONENTS_ARB 0x8F9F
#endif /* GL_ARB_texture_gather */

#ifndef GL_ARB_texture_mirror_clamp_to_edge
#define GL_ARB_texture_mirror_clamp_to_edge 1
#endif /* GL_ARB_texture_mirror_clamp_to_edge */

#ifndef GL_ARB_texture_multisample
#define GL_ARB_texture_multisample 1
#endif /* GL_ARB_texture_multisample */

#ifndef GL_ARB_texture_query_levels
#define GL_ARB_texture_query_levels 1
#endif /* GL_ARB_texture_query_levels */

#ifndef GL_ARB_texture_query_lod
#define GL_ARB_texture_query_lod 1
#endif /* GL_ARB_texture_query_lod */

#ifndef GL_ARB_texture_rg
#define GL_ARB_texture_rg 1
#endif /* GL_ARB_texture_rg */

#ifndef GL_ARB_texture_rgb10_a2ui
#define GL_ARB_texture_rgb10_a2ui 1
#endif /* GL_ARB_texture_rgb10_a2ui */

#ifndef GL_ARB_texture_stencil8
#define GL_ARB_texture_stencil8 1
#endif /* GL_ARB_texture_stencil8 */

#ifndef GL_ARB_texture_storage
#define GL_ARB_texture_storage 1
#endif /* GL_ARB_texture_storage */

#ifndef GL_ARB_texture_storage_multisample
#define GL_ARB_texture_storage_multisample 1
#endif /* GL_ARB_texture_storage_multisample */

#ifndef GL_ARB_texture_swizzle
#define GL_ARB_texture_swizzle 1
#endif /* GL_ARB_texture_swizzle */

#ifndef GL_ARB_texture_view
#define GL_ARB_texture_view 1
#endif /* GL_ARB_texture_view */

#ifndef GL_ARB_timer_query
#define GL_ARB_timer_query 1
#endif /* GL_ARB_timer_query */

#ifndef GL_ARB_transform_feedback2
#define GL_ARB_transform_feedback2 1
#endif /* GL_ARB_transform_feedback2 */

#ifndef GL_ARB_transform_feedback3
#define GL_ARB_transform_feedback3 1
#endif /* GL_ARB_transform_feedback3 */

#ifndef GL_ARB_transform_feedback_instanced
#define GL_ARB_transform_feedback_instanced 1
#endif /* GL_ARB_transform_feedback_instanced */

#ifndef GL_ARB_transform_feedback_overflow_query
#define GL_ARB_transform_feedback_overflow_query 1
#define GL_TRANSFORM_FEEDBACK_OVERFLOW_ARB 0x82EC
#define GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW_ARB 0x82ED
#endif /* GL_ARB_transform_feedback_overflow_query */

#ifndef GL_ARB_uniform_buffer_object
#define GL_ARB_uniform_buffer_object 1
#endif /* GL_ARB_uniform_buffer_object */

#ifndef GL_ARB_vertex_array_bgra
#define GL_ARB_vertex_array_bgra 1
#endif /* GL_ARB_vertex_array_bgra */

#ifndef GL_ARB_vertex_array_object
#define GL_ARB_vertex_array_object 1
#endif /* GL_ARB_vertex_array_object */

#ifndef GL_ARB_vertex_attrib_64bit
#define GL_ARB_vertex_attrib_64bit 1
#endif /* GL_ARB_vertex_attrib_64bit */

#ifndef GL_ARB_vertex_attrib_binding
#define GL_ARB_vertex_attrib_binding 1
#endif /* GL_ARB_vertex_attrib_binding */

#ifndef GL_ARB_vertex_type_10f_11f_11f_rev
#define GL_ARB_vertex_type_10f_11f_11f_rev 1
#endif /* GL_ARB_vertex_type_10f_11f_11f_rev */

#ifndef GL_ARB_vertex_type_2_10_10_10_rev
#define GL_ARB_vertex_type_2_10_10_10_rev 1
#endif /* GL_ARB_vertex_type_2_10_10_10_rev */

#ifndef GL_ARB_viewport_array
#define GL_ARB_viewport_array 1
#endif /* GL_ARB_viewport_array */

#ifndef GL_KHR_context_flush_control
#define GL_KHR_context_flush_control 1
#endif /* GL_KHR_context_flush_control */

#ifndef GL_KHR_debug
#define GL_KHR_debug 1
#endif /* GL_KHR_debug */

#ifndef GL_KHR_no_error
#define GL_KHR_no_error 1
#define GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR  0x00000008
#endif /* GL_KHR_no_error */

#ifndef GL_KHR_robust_buffer_access_behavior
#define GL_KHR_robust_buffer_access_behavior 1
#endif /* GL_KHR_robust_buffer_access_behavior */

#ifndef GL_KHR_robustness
#define GL_KHR_robustness 1
#define GL_CONTEXT_ROBUST_ACCESS          0x90F3
#endif /* GL_KHR_robustness */

#ifndef GL_KHR_texture_compression_astc_hdr
#define GL_KHR_texture_compression_astc_hdr 1
#define GL_COMPRESSED_RGBA_ASTC_4x4_KHR   0x93B0
#define GL_COMPRESSED_RGBA_ASTC_5x4_KHR   0x93B1
#define GL_COMPRESSED_RGBA_ASTC_5x5_KHR   0x93B2
#define GL_COMPRESSED_RGBA_ASTC_6x5_KHR   0x93B3
#define GL_COMPRESSED_RGBA_ASTC_6x6_KHR   0x93B4
#define GL_COMPRESSED_RGBA_ASTC_8x5_KHR   0x93B5
#define GL_COMPRESSED_RGBA_ASTC_8x6_KHR   0x93B6
#define GL_COMPRESSED_RGBA_ASTC_8x8_KHR   0x93B7
#define GL_COMPRESSED_RGBA_ASTC_10x5_KHR  0x93B8
#define GL_COMPRESSED_RGBA_ASTC_10x6_KHR  0x93B9
#define GL_COMPRESSED_RGBA_ASTC_10x8_KHR  0x93BA
#define GL_COMPRESSED_RGBA_ASTC_10x10_KHR 0x93BB
#define GL_COMPRESSED_RGBA_ASTC_12x10_KHR 0x93BC
#define GL_COMPRESSED_RGBA_ASTC_12x12_KHR 0x93BD
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR 0x93D0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR 0x93D1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR 0x93D2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR 0x93D3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR 0x93D4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR 0x93D5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR 0x93D6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR 0x93D7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR 0x93D8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR 0x93D9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR 0x93DA
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR 0x93DB
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR 0x93DC
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR 0x93DD
#endif /* GL_KHR_texture_compression_astc_hdr */

#ifndef GL_KHR_texture_compression_astc_ldr
#define GL_KHR_texture_compression_astc_ldr 1
#endif /* GL_KHR_texture_compression_astc_ldr */

#ifndef GL_KHR_texture_compression_astc_sliced_3d
#define GL_KHR_texture_compression_astc_sliced_3d 1
#endif /* GL_KHR_texture_compression_astc_sliced_3d */

#ifdef __cplusplus
}
#endif

#endif
