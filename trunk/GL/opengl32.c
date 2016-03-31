#ifndef __opengl32_c_
#define __opengl32_c_ 1
#include "glcorearb.h"
#ifdef __cplusplus
extern "C" {
#endif

/* Generated C header for:
 * API: gl
 * Profile: compatibility
 * Versions considered: .*
 * Versions emitted: .*
 * Default extensions included: glcore
 * Additional extensions included: _nomatch_^
 * Extensions removed: _nomatch_^
 */

#define APIENTRY _stdcall 
#ifdef GL_VERSION_1_0
GLAPI void APIENTRY glCullFace (GLenum mode_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum mode_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glCullFace"));
(*fun)(mode_);
AfterProcess("glCullFace");

}
GLAPI void APIENTRY glFrontFace (GLenum mode_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum mode_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glFrontFace"));
(*fun)(mode_);
AfterProcess("glFrontFace");

}
GLAPI void APIENTRY glHint (GLenum target_, GLenum mode_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum mode_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glHint"));
(*fun)(target_,mode_);
AfterProcess("glHint");

}
GLAPI void APIENTRY glLineWidth (GLfloat width_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat width_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glLineWidth"));
(*fun)(width_);
AfterProcess("glLineWidth");

}
GLAPI void APIENTRY glPointSize (GLfloat size_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat size_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPointSize"));
(*fun)(size_);
AfterProcess("glPointSize");

}
GLAPI void APIENTRY glPolygonMode (GLenum face_, GLenum mode_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum face_, GLenum mode_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPolygonMode"));
(*fun)(face_,mode_);
AfterProcess("glPolygonMode");

}
GLAPI void APIENTRY glScissor (GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint x_, GLint y_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glScissor"));
(*fun)(x_,y_,width_,height_);
AfterProcess("glScissor");

}
GLAPI void APIENTRY glTexParameterf (GLenum target_, GLenum pname_, GLfloat param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLfloat param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexParameterf"));
(*fun)(target_,pname_,param_);
AfterProcess("glTexParameterf");

}
GLAPI void APIENTRY glTexParameterfv (GLenum target_, GLenum pname_, const GLfloat *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, const GLfloat *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexParameterfv"));
(*fun)(target_,pname_,params_);
AfterProcess("glTexParameterfv");

}
GLAPI void APIENTRY glTexParameteri (GLenum target_, GLenum pname_, GLint param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexParameteri"));
(*fun)(target_,pname_,param_);
AfterProcess("glTexParameteri");

}
GLAPI void APIENTRY glTexParameteriv (GLenum target_, GLenum pname_, const GLint *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, const GLint *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexParameteriv"));
(*fun)(target_,pname_,params_);
AfterProcess("glTexParameteriv");

}
GLAPI void APIENTRY glTexImage1D (GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLint border_, GLenum format_, GLenum type_, const void *pixels_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLint border_, GLenum format_, GLenum type_, const void *pixels_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexImage1D"));
(*fun)(target_,level_,internalformat_,width_,border_,format_,type_,pixels_);
AfterProcess("glTexImage1D");

}
GLAPI void APIENTRY glTexImage2D (GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLsizei height_, GLint border_, GLenum format_, GLenum type_, const void *pixels_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLsizei height_, GLint border_, GLenum format_, GLenum type_, const void *pixels_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexImage2D"));
(*fun)(target_,level_,internalformat_,width_,height_,border_,format_,type_,pixels_);
AfterProcess("glTexImage2D");

}
GLAPI void APIENTRY glDrawBuffer (GLenum buf_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum buf_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glDrawBuffer"));
(*fun)(buf_);
AfterProcess("glDrawBuffer");

}
GLAPI void APIENTRY glClear (GLbitfield mask_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLbitfield mask_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glClear"));
(*fun)(mask_);
AfterProcess("glClear");

}
GLAPI void APIENTRY glClearColor (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glClearColor"));
(*fun)(red_,green_,blue_,alpha_);
AfterProcess("glClearColor");

}
GLAPI void APIENTRY glClearStencil (GLint s_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint s_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glClearStencil"));
(*fun)(s_);
AfterProcess("glClearStencil");

}
GLAPI void APIENTRY glClearDepth (GLdouble depth_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble depth_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glClearDepth"));
(*fun)(depth_);
AfterProcess("glClearDepth");

}
GLAPI void APIENTRY glStencilMask (GLuint mask_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLuint mask_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glStencilMask"));
(*fun)(mask_);
AfterProcess("glStencilMask");

}
GLAPI void APIENTRY glColorMask (GLboolean red_, GLboolean green_, GLboolean blue_, GLboolean alpha_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLboolean red_, GLboolean green_, GLboolean blue_, GLboolean alpha_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColorMask"));
(*fun)(red_,green_,blue_,alpha_);
AfterProcess("glColorMask");

}
GLAPI void APIENTRY glDepthMask (GLboolean flag_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLboolean flag_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glDepthMask"));
(*fun)(flag_);
AfterProcess("glDepthMask");

}
GLAPI void APIENTRY glDisable (GLenum cap_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum cap_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glDisable"));
(*fun)(cap_);
AfterProcess("glDisable");

}
GLAPI void APIENTRY glEnable (GLenum cap_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum cap_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEnable"));
(*fun)(cap_);
AfterProcess("glEnable");

}
GLAPI void APIENTRY glFinish (void)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glFinish"));
(*fun)();
AfterProcess("glFinish");

}
GLAPI void APIENTRY glFlush (void)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glFlush"));
(*fun)();
AfterProcess("glFlush");

}
GLAPI void APIENTRY glBlendFunc (GLenum sfactor_, GLenum dfactor_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum sfactor_, GLenum dfactor_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glBlendFunc"));
(*fun)(sfactor_,dfactor_);
AfterProcess("glBlendFunc");

}
GLAPI void APIENTRY glLogicOp (GLenum opcode_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum opcode_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glLogicOp"));
(*fun)(opcode_);
AfterProcess("glLogicOp");

}
GLAPI void APIENTRY glStencilFunc (GLenum func_, GLint ref_, GLuint mask_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum func_, GLint ref_, GLuint mask_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glStencilFunc"));
(*fun)(func_,ref_,mask_);
AfterProcess("glStencilFunc");

}
GLAPI void APIENTRY glStencilOp (GLenum fail_, GLenum zfail_, GLenum zpass_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum fail_, GLenum zfail_, GLenum zpass_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glStencilOp"));
(*fun)(fail_,zfail_,zpass_);
AfterProcess("glStencilOp");

}
GLAPI void APIENTRY glDepthFunc (GLenum func_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum func_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glDepthFunc"));
(*fun)(func_);
AfterProcess("glDepthFunc");

}
GLAPI void APIENTRY glPixelStoref (GLenum pname_, GLfloat param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLfloat param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPixelStoref"));
(*fun)(pname_,param_);
AfterProcess("glPixelStoref");

}
GLAPI void APIENTRY glPixelStorei (GLenum pname_, GLint param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLint param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPixelStorei"));
(*fun)(pname_,param_);
AfterProcess("glPixelStorei");

}
GLAPI void APIENTRY glReadBuffer (GLenum src_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum src_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glReadBuffer"));
(*fun)(src_);
AfterProcess("glReadBuffer");

}
GLAPI void APIENTRY glReadPixels (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, void *pixels_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, void *pixels_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glReadPixels"));
(*fun)(x_,y_,width_,height_,format_,type_,pixels_);
AfterProcess("glReadPixels");

}
GLAPI void APIENTRY glGetBooleanv (GLenum pname_, GLboolean *data_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLboolean *data_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetBooleanv"));
(*fun)(pname_,data_);
AfterProcess("glGetBooleanv");

}
GLAPI void APIENTRY glGetDoublev (GLenum pname_, GLdouble *data_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLdouble *data_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetDoublev"));
(*fun)(pname_,data_);
AfterProcess("glGetDoublev");

}
GLAPI GLenum APIENTRY glGetError (void)
{
HINSTANCE hInst = GetDLLInstance();
typedef GLenum (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetError"));
GLenum returnValue = (*fun)();
//AfterProcess("glGetError");
return returnValue;
}
GLAPI void APIENTRY glGetFloatv (GLenum pname_, GLfloat *data_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLfloat *data_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetFloatv"));
(*fun)(pname_,data_);
AfterProcess("glGetFloatv");

}
GLAPI void APIENTRY glGetIntegerv (GLenum pname_, GLint *data_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLint *data_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetIntegerv"));
(*fun)(pname_,data_);
AfterProcess("glGetIntegerv");

}
GLAPI const GLubyte *APIENTRY glGetString (GLenum name_)
{
HINSTANCE hInst = GetDLLInstance();
typedef const GLubyte *(INTER_CALL *FUNC) (GLenum name_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetString"));
const GLubyte *returnValue = (*fun)(name_);
AfterProcess("glGetString");
return returnValue;
}
GLAPI void APIENTRY glGetTexImage (GLenum target_, GLint level_, GLenum format_, GLenum type_, void *pixels_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLenum format_, GLenum type_, void *pixels_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetTexImage"));
(*fun)(target_,level_,format_,type_,pixels_);
AfterProcess("glGetTexImage");

}
GLAPI void APIENTRY glGetTexParameterfv (GLenum target_, GLenum pname_, GLfloat *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLfloat *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetTexParameterfv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetTexParameterfv");

}
GLAPI void APIENTRY glGetTexParameteriv (GLenum target_, GLenum pname_, GLint *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetTexParameteriv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetTexParameteriv");

}
GLAPI void APIENTRY glGetTexLevelParameterfv (GLenum target_, GLint level_, GLenum pname_, GLfloat *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLenum pname_, GLfloat *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetTexLevelParameterfv"));
(*fun)(target_,level_,pname_,params_);
AfterProcess("glGetTexLevelParameterfv");

}
GLAPI void APIENTRY glGetTexLevelParameteriv (GLenum target_, GLint level_, GLenum pname_, GLint *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetTexLevelParameteriv"));
(*fun)(target_,level_,pname_,params_);
AfterProcess("glGetTexLevelParameteriv");

}
GLAPI GLboolean APIENTRY glIsEnabled (GLenum cap_)
{
HINSTANCE hInst = GetDLLInstance();
typedef GLboolean (INTER_CALL *FUNC) (GLenum cap_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glIsEnabled"));
GLboolean returnValue = (*fun)(cap_);
AfterProcess("glIsEnabled");
return returnValue;
}
GLAPI void APIENTRY glDepthRange (GLdouble near_, GLdouble far_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble near_, GLdouble far_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glDepthRange"));
(*fun)(near_,far_);
AfterProcess("glDepthRange");

}
GLAPI void APIENTRY glViewport (GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint x_, GLint y_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glViewport"));
(*fun)(x_,y_,width_,height_);
AfterProcess("glViewport");

}
GLAPI void APIENTRY glNewList (GLuint list_, GLenum mode_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLuint list_, GLenum mode_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glNewList"));
(*fun)(list_,mode_);
AfterProcess("glNewList");

}
GLAPI void APIENTRY glEndList (void)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEndList"));
(*fun)();
AfterProcess("glEndList");

}
GLAPI void APIENTRY glCallList (GLuint list_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLuint list_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glCallList"));
(*fun)(list_);
AfterProcess("glCallList");

}
GLAPI void APIENTRY glCallLists (GLsizei n_, GLenum type_, const void *lists_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLenum type_, const void *lists_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glCallLists"));
(*fun)(n_,type_,lists_);
AfterProcess("glCallLists");

}
GLAPI void APIENTRY glDeleteLists (GLuint list_, GLsizei range_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLuint list_, GLsizei range_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glDeleteLists"));
(*fun)(list_,range_);
AfterProcess("glDeleteLists");

}
GLAPI GLuint APIENTRY glGenLists (GLsizei range_)
{
HINSTANCE hInst = GetDLLInstance();
typedef GLuint (INTER_CALL *FUNC) (GLsizei range_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGenLists"));
GLuint returnValue = (*fun)(range_);
AfterProcess("glGenLists");
return returnValue;
}
GLAPI void APIENTRY glListBase (GLuint base_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLuint base_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glListBase"));
(*fun)(base_);
AfterProcess("glListBase");

}
GLAPI void APIENTRY glBegin (GLenum mode_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum mode_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glBegin"));
(*fun)(mode_);
AfterProcess("glBegin");

}
GLAPI void APIENTRY glBitmap (GLsizei width_, GLsizei height_, GLfloat xorig_, GLfloat yorig_, GLfloat xmove_, GLfloat ymove_, const GLubyte *bitmap_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLsizei width_, GLsizei height_, GLfloat xorig_, GLfloat yorig_, GLfloat xmove_, GLfloat ymove_, const GLubyte *bitmap_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glBitmap"));
(*fun)(width_,height_,xorig_,yorig_,xmove_,ymove_,bitmap_);
AfterProcess("glBitmap");

}
GLAPI void APIENTRY glColor3b (GLbyte red_, GLbyte green_, GLbyte blue_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLbyte red_, GLbyte green_, GLbyte blue_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3b"));
(*fun)(red_,green_,blue_);
AfterProcess("glColor3b");

}
GLAPI void APIENTRY glColor3bv (const GLbyte *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLbyte *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3bv"));
(*fun)(v_);
AfterProcess("glColor3bv");

}
GLAPI void APIENTRY glColor3d (GLdouble red_, GLdouble green_, GLdouble blue_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble red_, GLdouble green_, GLdouble blue_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3d"));
(*fun)(red_,green_,blue_);
AfterProcess("glColor3d");

}
GLAPI void APIENTRY glColor3dv (const GLdouble *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3dv"));
(*fun)(v_);
AfterProcess("glColor3dv");

}
GLAPI void APIENTRY glColor3f (GLfloat red_, GLfloat green_, GLfloat blue_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat red_, GLfloat green_, GLfloat blue_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3f"));
(*fun)(red_,green_,blue_);
AfterProcess("glColor3f");

}
GLAPI void APIENTRY glColor3fv (const GLfloat *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3fv"));
(*fun)(v_);
AfterProcess("glColor3fv");

}
GLAPI void APIENTRY glColor3i (GLint red_, GLint green_, GLint blue_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint red_, GLint green_, GLint blue_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3i"));
(*fun)(red_,green_,blue_);
AfterProcess("glColor3i");

}
GLAPI void APIENTRY glColor3iv (const GLint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3iv"));
(*fun)(v_);
AfterProcess("glColor3iv");

}
GLAPI void APIENTRY glColor3s (GLshort red_, GLshort green_, GLshort blue_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLshort red_, GLshort green_, GLshort blue_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3s"));
(*fun)(red_,green_,blue_);
AfterProcess("glColor3s");

}
GLAPI void APIENTRY glColor3sv (const GLshort *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3sv"));
(*fun)(v_);
AfterProcess("glColor3sv");

}
GLAPI void APIENTRY glColor3ub (GLubyte red_, GLubyte green_, GLubyte blue_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLubyte red_, GLubyte green_, GLubyte blue_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3ub"));
(*fun)(red_,green_,blue_);
AfterProcess("glColor3ub");

}
GLAPI void APIENTRY glColor3ubv (const GLubyte *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLubyte *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3ubv"));
(*fun)(v_);
AfterProcess("glColor3ubv");

}
GLAPI void APIENTRY glColor3ui (GLuint red_, GLuint green_, GLuint blue_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLuint red_, GLuint green_, GLuint blue_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3ui"));
(*fun)(red_,green_,blue_);
AfterProcess("glColor3ui");

}
GLAPI void APIENTRY glColor3uiv (const GLuint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLuint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3uiv"));
(*fun)(v_);
AfterProcess("glColor3uiv");

}
GLAPI void APIENTRY glColor3us (GLushort red_, GLushort green_, GLushort blue_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLushort red_, GLushort green_, GLushort blue_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3us"));
(*fun)(red_,green_,blue_);
AfterProcess("glColor3us");

}
GLAPI void APIENTRY glColor3usv (const GLushort *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLushort *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor3usv"));
(*fun)(v_);
AfterProcess("glColor3usv");

}
GLAPI void APIENTRY glColor4b (GLbyte red_, GLbyte green_, GLbyte blue_, GLbyte alpha_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLbyte red_, GLbyte green_, GLbyte blue_, GLbyte alpha_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4b"));
(*fun)(red_,green_,blue_,alpha_);
AfterProcess("glColor4b");

}
GLAPI void APIENTRY glColor4bv (const GLbyte *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLbyte *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4bv"));
(*fun)(v_);
AfterProcess("glColor4bv");

}
GLAPI void APIENTRY glColor4d (GLdouble red_, GLdouble green_, GLdouble blue_, GLdouble alpha_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble red_, GLdouble green_, GLdouble blue_, GLdouble alpha_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4d"));
(*fun)(red_,green_,blue_,alpha_);
AfterProcess("glColor4d");

}
GLAPI void APIENTRY glColor4dv (const GLdouble *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4dv"));
(*fun)(v_);
AfterProcess("glColor4dv");

}
GLAPI void APIENTRY glColor4f (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4f"));
(*fun)(red_,green_,blue_,alpha_);
AfterProcess("glColor4f");

}
GLAPI void APIENTRY glColor4fv (const GLfloat *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4fv"));
(*fun)(v_);
AfterProcess("glColor4fv");

}
GLAPI void APIENTRY glColor4i (GLint red_, GLint green_, GLint blue_, GLint alpha_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint red_, GLint green_, GLint blue_, GLint alpha_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4i"));
(*fun)(red_,green_,blue_,alpha_);
AfterProcess("glColor4i");

}
GLAPI void APIENTRY glColor4iv (const GLint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4iv"));
(*fun)(v_);
AfterProcess("glColor4iv");

}
GLAPI void APIENTRY glColor4s (GLshort red_, GLshort green_, GLshort blue_, GLshort alpha_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLshort red_, GLshort green_, GLshort blue_, GLshort alpha_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4s"));
(*fun)(red_,green_,blue_,alpha_);
AfterProcess("glColor4s");

}
GLAPI void APIENTRY glColor4sv (const GLshort *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4sv"));
(*fun)(v_);
AfterProcess("glColor4sv");

}
GLAPI void APIENTRY glColor4ub (GLubyte red_, GLubyte green_, GLubyte blue_, GLubyte alpha_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLubyte red_, GLubyte green_, GLubyte blue_, GLubyte alpha_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4ub"));
(*fun)(red_,green_,blue_,alpha_);
AfterProcess("glColor4ub");

}
GLAPI void APIENTRY glColor4ubv (const GLubyte *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLubyte *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4ubv"));
(*fun)(v_);
AfterProcess("glColor4ubv");

}
GLAPI void APIENTRY glColor4ui (GLuint red_, GLuint green_, GLuint blue_, GLuint alpha_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLuint red_, GLuint green_, GLuint blue_, GLuint alpha_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4ui"));
(*fun)(red_,green_,blue_,alpha_);
AfterProcess("glColor4ui");

}
GLAPI void APIENTRY glColor4uiv (const GLuint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLuint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4uiv"));
(*fun)(v_);
AfterProcess("glColor4uiv");

}
GLAPI void APIENTRY glColor4us (GLushort red_, GLushort green_, GLushort blue_, GLushort alpha_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLushort red_, GLushort green_, GLushort blue_, GLushort alpha_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4us"));
(*fun)(red_,green_,blue_,alpha_);
AfterProcess("glColor4us");

}
GLAPI void APIENTRY glColor4usv (const GLushort *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLushort *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColor4usv"));
(*fun)(v_);
AfterProcess("glColor4usv");

}
GLAPI void APIENTRY glEdgeFlag (GLboolean flag_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLboolean flag_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEdgeFlag"));
(*fun)(flag_);
AfterProcess("glEdgeFlag");

}
GLAPI void APIENTRY glEdgeFlagv (const GLboolean *flag_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLboolean *flag_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEdgeFlagv"));
(*fun)(flag_);
AfterProcess("glEdgeFlagv");

}
GLAPI void APIENTRY glEnd (void)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEnd"));
(*fun)();
AfterProcess("glEnd");

}
GLAPI void APIENTRY glIndexd (GLdouble c_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble c_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glIndexd"));
(*fun)(c_);
AfterProcess("glIndexd");

}
GLAPI void APIENTRY glIndexdv (const GLdouble *c_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *c_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glIndexdv"));
(*fun)(c_);
AfterProcess("glIndexdv");

}
GLAPI void APIENTRY glIndexf (GLfloat c_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat c_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glIndexf"));
(*fun)(c_);
AfterProcess("glIndexf");

}
GLAPI void APIENTRY glIndexfv (const GLfloat *c_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *c_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glIndexfv"));
(*fun)(c_);
AfterProcess("glIndexfv");

}
GLAPI void APIENTRY glIndexi (GLint c_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint c_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glIndexi"));
(*fun)(c_);
AfterProcess("glIndexi");

}
GLAPI void APIENTRY glIndexiv (const GLint *c_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLint *c_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glIndexiv"));
(*fun)(c_);
AfterProcess("glIndexiv");

}
GLAPI void APIENTRY glIndexs (GLshort c_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLshort c_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glIndexs"));
(*fun)(c_);
AfterProcess("glIndexs");

}
GLAPI void APIENTRY glIndexsv (const GLshort *c_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLshort *c_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glIndexsv"));
(*fun)(c_);
AfterProcess("glIndexsv");

}
GLAPI void APIENTRY glNormal3b (GLbyte nx_, GLbyte ny_, GLbyte nz_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLbyte nx_, GLbyte ny_, GLbyte nz_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glNormal3b"));
(*fun)(nx_,ny_,nz_);
AfterProcess("glNormal3b");

}
GLAPI void APIENTRY glNormal3bv (const GLbyte *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLbyte *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glNormal3bv"));
(*fun)(v_);
AfterProcess("glNormal3bv");

}
GLAPI void APIENTRY glNormal3d (GLdouble nx_, GLdouble ny_, GLdouble nz_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble nx_, GLdouble ny_, GLdouble nz_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glNormal3d"));
(*fun)(nx_,ny_,nz_);
AfterProcess("glNormal3d");

}
GLAPI void APIENTRY glNormal3dv (const GLdouble *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glNormal3dv"));
(*fun)(v_);
AfterProcess("glNormal3dv");

}
GLAPI void APIENTRY glNormal3f (GLfloat nx_, GLfloat ny_, GLfloat nz_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat nx_, GLfloat ny_, GLfloat nz_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glNormal3f"));
(*fun)(nx_,ny_,nz_);
AfterProcess("glNormal3f");

}
GLAPI void APIENTRY glNormal3fv (const GLfloat *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glNormal3fv"));
(*fun)(v_);
AfterProcess("glNormal3fv");

}
GLAPI void APIENTRY glNormal3i (GLint nx_, GLint ny_, GLint nz_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint nx_, GLint ny_, GLint nz_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glNormal3i"));
(*fun)(nx_,ny_,nz_);
AfterProcess("glNormal3i");

}
GLAPI void APIENTRY glNormal3iv (const GLint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glNormal3iv"));
(*fun)(v_);
AfterProcess("glNormal3iv");

}
GLAPI void APIENTRY glNormal3s (GLshort nx_, GLshort ny_, GLshort nz_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLshort nx_, GLshort ny_, GLshort nz_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glNormal3s"));
(*fun)(nx_,ny_,nz_);
AfterProcess("glNormal3s");

}
GLAPI void APIENTRY glNormal3sv (const GLshort *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glNormal3sv"));
(*fun)(v_);
AfterProcess("glNormal3sv");

}
GLAPI void APIENTRY glRasterPos2d (GLdouble x_, GLdouble y_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble x_, GLdouble y_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos2d"));
(*fun)(x_,y_);
AfterProcess("glRasterPos2d");

}
GLAPI void APIENTRY glRasterPos2dv (const GLdouble *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos2dv"));
(*fun)(v_);
AfterProcess("glRasterPos2dv");

}
GLAPI void APIENTRY glRasterPos2f (GLfloat x_, GLfloat y_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat x_, GLfloat y_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos2f"));
(*fun)(x_,y_);
AfterProcess("glRasterPos2f");

}
GLAPI void APIENTRY glRasterPos2fv (const GLfloat *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos2fv"));
(*fun)(v_);
AfterProcess("glRasterPos2fv");

}
GLAPI void APIENTRY glRasterPos2i (GLint x_, GLint y_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint x_, GLint y_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos2i"));
(*fun)(x_,y_);
AfterProcess("glRasterPos2i");

}
GLAPI void APIENTRY glRasterPos2iv (const GLint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos2iv"));
(*fun)(v_);
AfterProcess("glRasterPos2iv");

}
GLAPI void APIENTRY glRasterPos2s (GLshort x_, GLshort y_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLshort x_, GLshort y_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos2s"));
(*fun)(x_,y_);
AfterProcess("glRasterPos2s");

}
GLAPI void APIENTRY glRasterPos2sv (const GLshort *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos2sv"));
(*fun)(v_);
AfterProcess("glRasterPos2sv");

}
GLAPI void APIENTRY glRasterPos3d (GLdouble x_, GLdouble y_, GLdouble z_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble x_, GLdouble y_, GLdouble z_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos3d"));
(*fun)(x_,y_,z_);
AfterProcess("glRasterPos3d");

}
GLAPI void APIENTRY glRasterPos3dv (const GLdouble *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos3dv"));
(*fun)(v_);
AfterProcess("glRasterPos3dv");

}
GLAPI void APIENTRY glRasterPos3f (GLfloat x_, GLfloat y_, GLfloat z_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat x_, GLfloat y_, GLfloat z_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos3f"));
(*fun)(x_,y_,z_);
AfterProcess("glRasterPos3f");

}
GLAPI void APIENTRY glRasterPos3fv (const GLfloat *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos3fv"));
(*fun)(v_);
AfterProcess("glRasterPos3fv");

}
GLAPI void APIENTRY glRasterPos3i (GLint x_, GLint y_, GLint z_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint x_, GLint y_, GLint z_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos3i"));
(*fun)(x_,y_,z_);
AfterProcess("glRasterPos3i");

}
GLAPI void APIENTRY glRasterPos3iv (const GLint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos3iv"));
(*fun)(v_);
AfterProcess("glRasterPos3iv");

}
GLAPI void APIENTRY glRasterPos3s (GLshort x_, GLshort y_, GLshort z_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLshort x_, GLshort y_, GLshort z_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos3s"));
(*fun)(x_,y_,z_);
AfterProcess("glRasterPos3s");

}
GLAPI void APIENTRY glRasterPos3sv (const GLshort *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos3sv"));
(*fun)(v_);
AfterProcess("glRasterPos3sv");

}
GLAPI void APIENTRY glRasterPos4d (GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos4d"));
(*fun)(x_,y_,z_,w_);
AfterProcess("glRasterPos4d");

}
GLAPI void APIENTRY glRasterPos4dv (const GLdouble *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos4dv"));
(*fun)(v_);
AfterProcess("glRasterPos4dv");

}
GLAPI void APIENTRY glRasterPos4f (GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos4f"));
(*fun)(x_,y_,z_,w_);
AfterProcess("glRasterPos4f");

}
GLAPI void APIENTRY glRasterPos4fv (const GLfloat *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos4fv"));
(*fun)(v_);
AfterProcess("glRasterPos4fv");

}
GLAPI void APIENTRY glRasterPos4i (GLint x_, GLint y_, GLint z_, GLint w_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint x_, GLint y_, GLint z_, GLint w_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos4i"));
(*fun)(x_,y_,z_,w_);
AfterProcess("glRasterPos4i");

}
GLAPI void APIENTRY glRasterPos4iv (const GLint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos4iv"));
(*fun)(v_);
AfterProcess("glRasterPos4iv");

}
GLAPI void APIENTRY glRasterPos4s (GLshort x_, GLshort y_, GLshort z_, GLshort w_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLshort x_, GLshort y_, GLshort z_, GLshort w_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos4s"));
(*fun)(x_,y_,z_,w_);
AfterProcess("glRasterPos4s");

}
GLAPI void APIENTRY glRasterPos4sv (const GLshort *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRasterPos4sv"));
(*fun)(v_);
AfterProcess("glRasterPos4sv");

}
GLAPI void APIENTRY glRectd (GLdouble x1_, GLdouble y1_, GLdouble x2_, GLdouble y2_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble x1_, GLdouble y1_, GLdouble x2_, GLdouble y2_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRectd"));
(*fun)(x1_,y1_,x2_,y2_);
AfterProcess("glRectd");

}
GLAPI void APIENTRY glRectdv (const GLdouble *v1_, const GLdouble *v2_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *v1_, const GLdouble *v2_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRectdv"));
(*fun)(v1_,v2_);
AfterProcess("glRectdv");

}
GLAPI void APIENTRY glRectf (GLfloat x1_, GLfloat y1_, GLfloat x2_, GLfloat y2_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat x1_, GLfloat y1_, GLfloat x2_, GLfloat y2_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRectf"));
(*fun)(x1_,y1_,x2_,y2_);
AfterProcess("glRectf");

}
GLAPI void APIENTRY glRectfv (const GLfloat *v1_, const GLfloat *v2_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *v1_, const GLfloat *v2_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRectfv"));
(*fun)(v1_,v2_);
AfterProcess("glRectfv");

}
GLAPI void APIENTRY glRecti (GLint x1_, GLint y1_, GLint x2_, GLint y2_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint x1_, GLint y1_, GLint x2_, GLint y2_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRecti"));
(*fun)(x1_,y1_,x2_,y2_);
AfterProcess("glRecti");

}
GLAPI void APIENTRY glRectiv (const GLint *v1_, const GLint *v2_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLint *v1_, const GLint *v2_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRectiv"));
(*fun)(v1_,v2_);
AfterProcess("glRectiv");

}
GLAPI void APIENTRY glRects (GLshort x1_, GLshort y1_, GLshort x2_, GLshort y2_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLshort x1_, GLshort y1_, GLshort x2_, GLshort y2_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRects"));
(*fun)(x1_,y1_,x2_,y2_);
AfterProcess("glRects");

}
GLAPI void APIENTRY glRectsv (const GLshort *v1_, const GLshort *v2_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLshort *v1_, const GLshort *v2_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRectsv"));
(*fun)(v1_,v2_);
AfterProcess("glRectsv");

}
GLAPI void APIENTRY glTexCoord1d (GLdouble s_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble s_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord1d"));
(*fun)(s_);
AfterProcess("glTexCoord1d");

}
GLAPI void APIENTRY glTexCoord1dv (const GLdouble *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord1dv"));
(*fun)(v_);
AfterProcess("glTexCoord1dv");

}
GLAPI void APIENTRY glTexCoord1f (GLfloat s_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat s_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord1f"));
(*fun)(s_);
AfterProcess("glTexCoord1f");

}
GLAPI void APIENTRY glTexCoord1fv (const GLfloat *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord1fv"));
(*fun)(v_);
AfterProcess("glTexCoord1fv");

}
GLAPI void APIENTRY glTexCoord1i (GLint s_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint s_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord1i"));
(*fun)(s_);
AfterProcess("glTexCoord1i");

}
GLAPI void APIENTRY glTexCoord1iv (const GLint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord1iv"));
(*fun)(v_);
AfterProcess("glTexCoord1iv");

}
GLAPI void APIENTRY glTexCoord1s (GLshort s_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLshort s_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord1s"));
(*fun)(s_);
AfterProcess("glTexCoord1s");

}
GLAPI void APIENTRY glTexCoord1sv (const GLshort *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord1sv"));
(*fun)(v_);
AfterProcess("glTexCoord1sv");

}
GLAPI void APIENTRY glTexCoord2d (GLdouble s_, GLdouble t_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble s_, GLdouble t_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord2d"));
(*fun)(s_,t_);
AfterProcess("glTexCoord2d");

}
GLAPI void APIENTRY glTexCoord2dv (const GLdouble *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord2dv"));
(*fun)(v_);
AfterProcess("glTexCoord2dv");

}
GLAPI void APIENTRY glTexCoord2f (GLfloat s_, GLfloat t_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat s_, GLfloat t_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord2f"));
(*fun)(s_,t_);
AfterProcess("glTexCoord2f");

}
GLAPI void APIENTRY glTexCoord2fv (const GLfloat *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord2fv"));
(*fun)(v_);
AfterProcess("glTexCoord2fv");

}
GLAPI void APIENTRY glTexCoord2i (GLint s_, GLint t_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint s_, GLint t_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord2i"));
(*fun)(s_,t_);
AfterProcess("glTexCoord2i");

}
GLAPI void APIENTRY glTexCoord2iv (const GLint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord2iv"));
(*fun)(v_);
AfterProcess("glTexCoord2iv");

}
GLAPI void APIENTRY glTexCoord2s (GLshort s_, GLshort t_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLshort s_, GLshort t_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord2s"));
(*fun)(s_,t_);
AfterProcess("glTexCoord2s");

}
GLAPI void APIENTRY glTexCoord2sv (const GLshort *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord2sv"));
(*fun)(v_);
AfterProcess("glTexCoord2sv");

}
GLAPI void APIENTRY glTexCoord3d (GLdouble s_, GLdouble t_, GLdouble r_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble s_, GLdouble t_, GLdouble r_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord3d"));
(*fun)(s_,t_,r_);
AfterProcess("glTexCoord3d");

}
GLAPI void APIENTRY glTexCoord3dv (const GLdouble *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord3dv"));
(*fun)(v_);
AfterProcess("glTexCoord3dv");

}
GLAPI void APIENTRY glTexCoord3f (GLfloat s_, GLfloat t_, GLfloat r_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat s_, GLfloat t_, GLfloat r_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord3f"));
(*fun)(s_,t_,r_);
AfterProcess("glTexCoord3f");

}
GLAPI void APIENTRY glTexCoord3fv (const GLfloat *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord3fv"));
(*fun)(v_);
AfterProcess("glTexCoord3fv");

}
GLAPI void APIENTRY glTexCoord3i (GLint s_, GLint t_, GLint r_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint s_, GLint t_, GLint r_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord3i"));
(*fun)(s_,t_,r_);
AfterProcess("glTexCoord3i");

}
GLAPI void APIENTRY glTexCoord3iv (const GLint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord3iv"));
(*fun)(v_);
AfterProcess("glTexCoord3iv");

}
GLAPI void APIENTRY glTexCoord3s (GLshort s_, GLshort t_, GLshort r_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLshort s_, GLshort t_, GLshort r_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord3s"));
(*fun)(s_,t_,r_);
AfterProcess("glTexCoord3s");

}
GLAPI void APIENTRY glTexCoord3sv (const GLshort *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord3sv"));
(*fun)(v_);
AfterProcess("glTexCoord3sv");

}
GLAPI void APIENTRY glTexCoord4d (GLdouble s_, GLdouble t_, GLdouble r_, GLdouble q_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble s_, GLdouble t_, GLdouble r_, GLdouble q_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord4d"));
(*fun)(s_,t_,r_,q_);
AfterProcess("glTexCoord4d");

}
GLAPI void APIENTRY glTexCoord4dv (const GLdouble *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord4dv"));
(*fun)(v_);
AfterProcess("glTexCoord4dv");

}
GLAPI void APIENTRY glTexCoord4f (GLfloat s_, GLfloat t_, GLfloat r_, GLfloat q_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat s_, GLfloat t_, GLfloat r_, GLfloat q_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord4f"));
(*fun)(s_,t_,r_,q_);
AfterProcess("glTexCoord4f");

}
GLAPI void APIENTRY glTexCoord4fv (const GLfloat *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord4fv"));
(*fun)(v_);
AfterProcess("glTexCoord4fv");

}
GLAPI void APIENTRY glTexCoord4i (GLint s_, GLint t_, GLint r_, GLint q_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint s_, GLint t_, GLint r_, GLint q_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord4i"));
(*fun)(s_,t_,r_,q_);
AfterProcess("glTexCoord4i");

}
GLAPI void APIENTRY glTexCoord4iv (const GLint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord4iv"));
(*fun)(v_);
AfterProcess("glTexCoord4iv");

}
GLAPI void APIENTRY glTexCoord4s (GLshort s_, GLshort t_, GLshort r_, GLshort q_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLshort s_, GLshort t_, GLshort r_, GLshort q_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord4s"));
(*fun)(s_,t_,r_,q_);
AfterProcess("glTexCoord4s");

}
GLAPI void APIENTRY glTexCoord4sv (const GLshort *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexCoord4sv"));
(*fun)(v_);
AfterProcess("glTexCoord4sv");

}
GLAPI void APIENTRY glVertex2d (GLdouble x_, GLdouble y_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble x_, GLdouble y_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex2d"));
(*fun)(x_,y_);
AfterProcess("glVertex2d");

}
GLAPI void APIENTRY glVertex2dv (const GLdouble *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex2dv"));
(*fun)(v_);
AfterProcess("glVertex2dv");

}
GLAPI void APIENTRY glVertex2f (GLfloat x_, GLfloat y_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat x_, GLfloat y_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex2f"));
(*fun)(x_,y_);
AfterProcess("glVertex2f");

}
GLAPI void APIENTRY glVertex2fv (const GLfloat *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex2fv"));
(*fun)(v_);
AfterProcess("glVertex2fv");

}
GLAPI void APIENTRY glVertex2i (GLint x_, GLint y_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint x_, GLint y_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex2i"));
(*fun)(x_,y_);
AfterProcess("glVertex2i");

}
GLAPI void APIENTRY glVertex2iv (const GLint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex2iv"));
(*fun)(v_);
AfterProcess("glVertex2iv");

}
GLAPI void APIENTRY glVertex2s (GLshort x_, GLshort y_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLshort x_, GLshort y_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex2s"));
(*fun)(x_,y_);
AfterProcess("glVertex2s");

}
GLAPI void APIENTRY glVertex2sv (const GLshort *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex2sv"));
(*fun)(v_);
AfterProcess("glVertex2sv");

}
GLAPI void APIENTRY glVertex3d (GLdouble x_, GLdouble y_, GLdouble z_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble x_, GLdouble y_, GLdouble z_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex3d"));
(*fun)(x_,y_,z_);
AfterProcess("glVertex3d");

}
GLAPI void APIENTRY glVertex3dv (const GLdouble *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex3dv"));
(*fun)(v_);
AfterProcess("glVertex3dv");

}
GLAPI void APIENTRY glVertex3f (GLfloat x_, GLfloat y_, GLfloat z_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat x_, GLfloat y_, GLfloat z_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex3f"));
(*fun)(x_,y_,z_);
AfterProcess("glVertex3f");

}
GLAPI void APIENTRY glVertex3fv (const GLfloat *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex3fv"));
(*fun)(v_);
AfterProcess("glVertex3fv");

}
GLAPI void APIENTRY glVertex3i (GLint x_, GLint y_, GLint z_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint x_, GLint y_, GLint z_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex3i"));
(*fun)(x_,y_,z_);
AfterProcess("glVertex3i");

}
GLAPI void APIENTRY glVertex3iv (const GLint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex3iv"));
(*fun)(v_);
AfterProcess("glVertex3iv");

}
GLAPI void APIENTRY glVertex3s (GLshort x_, GLshort y_, GLshort z_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLshort x_, GLshort y_, GLshort z_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex3s"));
(*fun)(x_,y_,z_);
AfterProcess("glVertex3s");

}
GLAPI void APIENTRY glVertex3sv (const GLshort *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex3sv"));
(*fun)(v_);
AfterProcess("glVertex3sv");

}
GLAPI void APIENTRY glVertex4d (GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex4d"));
(*fun)(x_,y_,z_,w_);
AfterProcess("glVertex4d");

}
GLAPI void APIENTRY glVertex4dv (const GLdouble *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex4dv"));
(*fun)(v_);
AfterProcess("glVertex4dv");

}
GLAPI void APIENTRY glVertex4f (GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex4f"));
(*fun)(x_,y_,z_,w_);
AfterProcess("glVertex4f");

}
GLAPI void APIENTRY glVertex4fv (const GLfloat *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex4fv"));
(*fun)(v_);
AfterProcess("glVertex4fv");

}
GLAPI void APIENTRY glVertex4i (GLint x_, GLint y_, GLint z_, GLint w_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint x_, GLint y_, GLint z_, GLint w_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex4i"));
(*fun)(x_,y_,z_,w_);
AfterProcess("glVertex4i");

}
GLAPI void APIENTRY glVertex4iv (const GLint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex4iv"));
(*fun)(v_);
AfterProcess("glVertex4iv");

}
GLAPI void APIENTRY glVertex4s (GLshort x_, GLshort y_, GLshort z_, GLshort w_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLshort x_, GLshort y_, GLshort z_, GLshort w_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex4s"));
(*fun)(x_,y_,z_,w_);
AfterProcess("glVertex4s");

}
GLAPI void APIENTRY glVertex4sv (const GLshort *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glVertex4sv"));
(*fun)(v_);
AfterProcess("glVertex4sv");

}
GLAPI void APIENTRY glClipPlane (GLenum plane_, const GLdouble *equation_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum plane_, const GLdouble *equation_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glClipPlane"));
(*fun)(plane_,equation_);
AfterProcess("glClipPlane");

}
GLAPI void APIENTRY glColorMaterial (GLenum face_, GLenum mode_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum face_, GLenum mode_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glColorMaterial"));
(*fun)(face_,mode_);
AfterProcess("glColorMaterial");

}
GLAPI void APIENTRY glFogf (GLenum pname_, GLfloat param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLfloat param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glFogf"));
(*fun)(pname_,param_);
AfterProcess("glFogf");

}
GLAPI void APIENTRY glFogfv (GLenum pname_, const GLfloat *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, const GLfloat *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glFogfv"));
(*fun)(pname_,params_);
AfterProcess("glFogfv");

}
GLAPI void APIENTRY glFogi (GLenum pname_, GLint param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLint param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glFogi"));
(*fun)(pname_,param_);
AfterProcess("glFogi");

}
GLAPI void APIENTRY glFogiv (GLenum pname_, const GLint *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, const GLint *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glFogiv"));
(*fun)(pname_,params_);
AfterProcess("glFogiv");

}
GLAPI void APIENTRY glLightf (GLenum light_, GLenum pname_, GLfloat param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum light_, GLenum pname_, GLfloat param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glLightf"));
(*fun)(light_,pname_,param_);
AfterProcess("glLightf");

}
GLAPI void APIENTRY glLightfv (GLenum light_, GLenum pname_, const GLfloat *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum light_, GLenum pname_, const GLfloat *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glLightfv"));
(*fun)(light_,pname_,params_);
AfterProcess("glLightfv");

}
GLAPI void APIENTRY glLighti (GLenum light_, GLenum pname_, GLint param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum light_, GLenum pname_, GLint param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glLighti"));
(*fun)(light_,pname_,param_);
AfterProcess("glLighti");

}
GLAPI void APIENTRY glLightiv (GLenum light_, GLenum pname_, const GLint *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum light_, GLenum pname_, const GLint *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glLightiv"));
(*fun)(light_,pname_,params_);
AfterProcess("glLightiv");

}
GLAPI void APIENTRY glLightModelf (GLenum pname_, GLfloat param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLfloat param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glLightModelf"));
(*fun)(pname_,param_);
AfterProcess("glLightModelf");

}
GLAPI void APIENTRY glLightModelfv (GLenum pname_, const GLfloat *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, const GLfloat *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glLightModelfv"));
(*fun)(pname_,params_);
AfterProcess("glLightModelfv");

}
GLAPI void APIENTRY glLightModeli (GLenum pname_, GLint param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLint param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glLightModeli"));
(*fun)(pname_,param_);
AfterProcess("glLightModeli");

}
GLAPI void APIENTRY glLightModeliv (GLenum pname_, const GLint *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, const GLint *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glLightModeliv"));
(*fun)(pname_,params_);
AfterProcess("glLightModeliv");

}
GLAPI void APIENTRY glLineStipple (GLint factor_, GLushort pattern_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint factor_, GLushort pattern_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glLineStipple"));
(*fun)(factor_,pattern_);
AfterProcess("glLineStipple");

}
GLAPI void APIENTRY glMaterialf (GLenum face_, GLenum pname_, GLfloat param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum face_, GLenum pname_, GLfloat param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glMaterialf"));
(*fun)(face_,pname_,param_);
AfterProcess("glMaterialf");

}
GLAPI void APIENTRY glMaterialfv (GLenum face_, GLenum pname_, const GLfloat *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum face_, GLenum pname_, const GLfloat *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glMaterialfv"));
(*fun)(face_,pname_,params_);
AfterProcess("glMaterialfv");

}
GLAPI void APIENTRY glMateriali (GLenum face_, GLenum pname_, GLint param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum face_, GLenum pname_, GLint param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glMateriali"));
(*fun)(face_,pname_,param_);
AfterProcess("glMateriali");

}
GLAPI void APIENTRY glMaterialiv (GLenum face_, GLenum pname_, const GLint *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum face_, GLenum pname_, const GLint *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glMaterialiv"));
(*fun)(face_,pname_,params_);
AfterProcess("glMaterialiv");

}
GLAPI void APIENTRY glPolygonStipple (const GLubyte *mask_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLubyte *mask_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPolygonStipple"));
(*fun)(mask_);
AfterProcess("glPolygonStipple");

}
GLAPI void APIENTRY glShadeModel (GLenum mode_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum mode_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glShadeModel"));
(*fun)(mode_);
AfterProcess("glShadeModel");

}
GLAPI void APIENTRY glTexEnvf (GLenum target_, GLenum pname_, GLfloat param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLfloat param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexEnvf"));
(*fun)(target_,pname_,param_);
AfterProcess("glTexEnvf");

}
GLAPI void APIENTRY glTexEnvfv (GLenum target_, GLenum pname_, const GLfloat *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, const GLfloat *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexEnvfv"));
(*fun)(target_,pname_,params_);
AfterProcess("glTexEnvfv");

}
GLAPI void APIENTRY glTexEnvi (GLenum target_, GLenum pname_, GLint param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexEnvi"));
(*fun)(target_,pname_,param_);
AfterProcess("glTexEnvi");

}
GLAPI void APIENTRY glTexEnviv (GLenum target_, GLenum pname_, const GLint *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, const GLint *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexEnviv"));
(*fun)(target_,pname_,params_);
AfterProcess("glTexEnviv");

}
GLAPI void APIENTRY glTexGend (GLenum coord_, GLenum pname_, GLdouble param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum coord_, GLenum pname_, GLdouble param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexGend"));
(*fun)(coord_,pname_,param_);
AfterProcess("glTexGend");

}
GLAPI void APIENTRY glTexGendv (GLenum coord_, GLenum pname_, const GLdouble *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum coord_, GLenum pname_, const GLdouble *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexGendv"));
(*fun)(coord_,pname_,params_);
AfterProcess("glTexGendv");

}
GLAPI void APIENTRY glTexGenf (GLenum coord_, GLenum pname_, GLfloat param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum coord_, GLenum pname_, GLfloat param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexGenf"));
(*fun)(coord_,pname_,param_);
AfterProcess("glTexGenf");

}
GLAPI void APIENTRY glTexGenfv (GLenum coord_, GLenum pname_, const GLfloat *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum coord_, GLenum pname_, const GLfloat *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexGenfv"));
(*fun)(coord_,pname_,params_);
AfterProcess("glTexGenfv");

}
GLAPI void APIENTRY glTexGeni (GLenum coord_, GLenum pname_, GLint param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum coord_, GLenum pname_, GLint param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexGeni"));
(*fun)(coord_,pname_,param_);
AfterProcess("glTexGeni");

}
GLAPI void APIENTRY glTexGeniv (GLenum coord_, GLenum pname_, const GLint *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum coord_, GLenum pname_, const GLint *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTexGeniv"));
(*fun)(coord_,pname_,params_);
AfterProcess("glTexGeniv");

}
GLAPI void APIENTRY glFeedbackBuffer (GLsizei size_, GLenum type_, GLfloat *buffer_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLsizei size_, GLenum type_, GLfloat *buffer_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glFeedbackBuffer"));
(*fun)(size_,type_,buffer_);
AfterProcess("glFeedbackBuffer");

}
GLAPI void APIENTRY glSelectBuffer (GLsizei size_, GLuint *buffer_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLsizei size_, GLuint *buffer_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glSelectBuffer"));
(*fun)(size_,buffer_);
AfterProcess("glSelectBuffer");

}
GLAPI GLint APIENTRY glRenderMode (GLenum mode_)
{
HINSTANCE hInst = GetDLLInstance();
typedef GLint (INTER_CALL *FUNC) (GLenum mode_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRenderMode"));
GLint returnValue = (*fun)(mode_);
AfterProcess("glRenderMode");
return returnValue;
}
GLAPI void APIENTRY glInitNames (void)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glInitNames"));
(*fun)();
AfterProcess("glInitNames");

}
GLAPI void APIENTRY glLoadName (GLuint name_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLuint name_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glLoadName"));
(*fun)(name_);
AfterProcess("glLoadName");

}
GLAPI void APIENTRY glPassThrough (GLfloat token_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat token_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPassThrough"));
(*fun)(token_);
AfterProcess("glPassThrough");

}
GLAPI void APIENTRY glPopName (void)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPopName"));
(*fun)();
AfterProcess("glPopName");

}
GLAPI void APIENTRY glPushName (GLuint name_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLuint name_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPushName"));
(*fun)(name_);
AfterProcess("glPushName");

}
GLAPI void APIENTRY glClearAccum (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glClearAccum"));
(*fun)(red_,green_,blue_,alpha_);
AfterProcess("glClearAccum");

}
GLAPI void APIENTRY glClearIndex (GLfloat c_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat c_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glClearIndex"));
(*fun)(c_);
AfterProcess("glClearIndex");

}
GLAPI void APIENTRY glIndexMask (GLuint mask_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLuint mask_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glIndexMask"));
(*fun)(mask_);
AfterProcess("glIndexMask");

}
GLAPI void APIENTRY glAccum (GLenum op_, GLfloat value_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum op_, GLfloat value_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glAccum"));
(*fun)(op_,value_);
AfterProcess("glAccum");

}
GLAPI void APIENTRY glPopAttrib (void)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPopAttrib"));
(*fun)();
AfterProcess("glPopAttrib");

}
GLAPI void APIENTRY glPushAttrib (GLbitfield mask_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLbitfield mask_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPushAttrib"));
(*fun)(mask_);
AfterProcess("glPushAttrib");

}
GLAPI void APIENTRY glMap1d (GLenum target_, GLdouble u1_, GLdouble u2_, GLint stride_, GLint order_, const GLdouble *points_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLdouble u1_, GLdouble u2_, GLint stride_, GLint order_, const GLdouble *points_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glMap1d"));
(*fun)(target_,u1_,u2_,stride_,order_,points_);
AfterProcess("glMap1d");

}
GLAPI void APIENTRY glMap1f (GLenum target_, GLfloat u1_, GLfloat u2_, GLint stride_, GLint order_, const GLfloat *points_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLfloat u1_, GLfloat u2_, GLint stride_, GLint order_, const GLfloat *points_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glMap1f"));
(*fun)(target_,u1_,u2_,stride_,order_,points_);
AfterProcess("glMap1f");

}
GLAPI void APIENTRY glMap2d (GLenum target_, GLdouble u1_, GLdouble u2_, GLint ustride_, GLint uorder_, GLdouble v1_, GLdouble v2_, GLint vstride_, GLint vorder_, const GLdouble *points_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLdouble u1_, GLdouble u2_, GLint ustride_, GLint uorder_, GLdouble v1_, GLdouble v2_, GLint vstride_, GLint vorder_, const GLdouble *points_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glMap2d"));
(*fun)(target_,u1_,u2_,ustride_,uorder_,v1_,v2_,vstride_,vorder_,points_);
AfterProcess("glMap2d");

}
GLAPI void APIENTRY glMap2f (GLenum target_, GLfloat u1_, GLfloat u2_, GLint ustride_, GLint uorder_, GLfloat v1_, GLfloat v2_, GLint vstride_, GLint vorder_, const GLfloat *points_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLfloat u1_, GLfloat u2_, GLint ustride_, GLint uorder_, GLfloat v1_, GLfloat v2_, GLint vstride_, GLint vorder_, const GLfloat *points_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glMap2f"));
(*fun)(target_,u1_,u2_,ustride_,uorder_,v1_,v2_,vstride_,vorder_,points_);
AfterProcess("glMap2f");

}
GLAPI void APIENTRY glMapGrid1d (GLint un_, GLdouble u1_, GLdouble u2_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint un_, GLdouble u1_, GLdouble u2_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glMapGrid1d"));
(*fun)(un_,u1_,u2_);
AfterProcess("glMapGrid1d");

}
GLAPI void APIENTRY glMapGrid1f (GLint un_, GLfloat u1_, GLfloat u2_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint un_, GLfloat u1_, GLfloat u2_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glMapGrid1f"));
(*fun)(un_,u1_,u2_);
AfterProcess("glMapGrid1f");

}
GLAPI void APIENTRY glMapGrid2d (GLint un_, GLdouble u1_, GLdouble u2_, GLint vn_, GLdouble v1_, GLdouble v2_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint un_, GLdouble u1_, GLdouble u2_, GLint vn_, GLdouble v1_, GLdouble v2_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glMapGrid2d"));
(*fun)(un_,u1_,u2_,vn_,v1_,v2_);
AfterProcess("glMapGrid2d");

}
GLAPI void APIENTRY glMapGrid2f (GLint un_, GLfloat u1_, GLfloat u2_, GLint vn_, GLfloat v1_, GLfloat v2_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint un_, GLfloat u1_, GLfloat u2_, GLint vn_, GLfloat v1_, GLfloat v2_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glMapGrid2f"));
(*fun)(un_,u1_,u2_,vn_,v1_,v2_);
AfterProcess("glMapGrid2f");

}
GLAPI void APIENTRY glEvalCoord1d (GLdouble u_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble u_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEvalCoord1d"));
(*fun)(u_);
AfterProcess("glEvalCoord1d");

}
GLAPI void APIENTRY glEvalCoord1dv (const GLdouble *u_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *u_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEvalCoord1dv"));
(*fun)(u_);
AfterProcess("glEvalCoord1dv");

}
GLAPI void APIENTRY glEvalCoord1f (GLfloat u_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat u_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEvalCoord1f"));
(*fun)(u_);
AfterProcess("glEvalCoord1f");

}
GLAPI void APIENTRY glEvalCoord1fv (const GLfloat *u_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *u_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEvalCoord1fv"));
(*fun)(u_);
AfterProcess("glEvalCoord1fv");

}
GLAPI void APIENTRY glEvalCoord2d (GLdouble u_, GLdouble v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble u_, GLdouble v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEvalCoord2d"));
(*fun)(u_,v_);
AfterProcess("glEvalCoord2d");

}
GLAPI void APIENTRY glEvalCoord2dv (const GLdouble *u_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *u_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEvalCoord2dv"));
(*fun)(u_);
AfterProcess("glEvalCoord2dv");

}
GLAPI void APIENTRY glEvalCoord2f (GLfloat u_, GLfloat v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat u_, GLfloat v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEvalCoord2f"));
(*fun)(u_,v_);
AfterProcess("glEvalCoord2f");

}
GLAPI void APIENTRY glEvalCoord2fv (const GLfloat *u_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *u_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEvalCoord2fv"));
(*fun)(u_);
AfterProcess("glEvalCoord2fv");

}
GLAPI void APIENTRY glEvalMesh1 (GLenum mode_, GLint i1_, GLint i2_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLint i1_, GLint i2_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEvalMesh1"));
(*fun)(mode_,i1_,i2_);
AfterProcess("glEvalMesh1");

}
GLAPI void APIENTRY glEvalPoint1 (GLint i_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint i_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEvalPoint1"));
(*fun)(i_);
AfterProcess("glEvalPoint1");

}
GLAPI void APIENTRY glEvalMesh2 (GLenum mode_, GLint i1_, GLint i2_, GLint j1_, GLint j2_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLint i1_, GLint i2_, GLint j1_, GLint j2_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEvalMesh2"));
(*fun)(mode_,i1_,i2_,j1_,j2_);
AfterProcess("glEvalMesh2");

}
GLAPI void APIENTRY glEvalPoint2 (GLint i_, GLint j_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint i_, GLint j_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glEvalPoint2"));
(*fun)(i_,j_);
AfterProcess("glEvalPoint2");

}
GLAPI void APIENTRY glAlphaFunc (GLenum func_, GLfloat ref_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum func_, GLfloat ref_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glAlphaFunc"));
(*fun)(func_,ref_);
AfterProcess("glAlphaFunc");

}
GLAPI void APIENTRY glPixelZoom (GLfloat xfactor_, GLfloat yfactor_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat xfactor_, GLfloat yfactor_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPixelZoom"));
(*fun)(xfactor_,yfactor_);
AfterProcess("glPixelZoom");

}
GLAPI void APIENTRY glPixelTransferf (GLenum pname_, GLfloat param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLfloat param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPixelTransferf"));
(*fun)(pname_,param_);
AfterProcess("glPixelTransferf");

}
GLAPI void APIENTRY glPixelTransferi (GLenum pname_, GLint param_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLint param_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPixelTransferi"));
(*fun)(pname_,param_);
AfterProcess("glPixelTransferi");

}
GLAPI void APIENTRY glPixelMapfv (GLenum map_, GLsizei mapsize_, const GLfloat *values_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum map_, GLsizei mapsize_, const GLfloat *values_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPixelMapfv"));
(*fun)(map_,mapsize_,values_);
AfterProcess("glPixelMapfv");

}
GLAPI void APIENTRY glPixelMapuiv (GLenum map_, GLsizei mapsize_, const GLuint *values_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum map_, GLsizei mapsize_, const GLuint *values_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPixelMapuiv"));
(*fun)(map_,mapsize_,values_);
AfterProcess("glPixelMapuiv");

}
GLAPI void APIENTRY glPixelMapusv (GLenum map_, GLsizei mapsize_, const GLushort *values_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum map_, GLsizei mapsize_, const GLushort *values_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPixelMapusv"));
(*fun)(map_,mapsize_,values_);
AfterProcess("glPixelMapusv");

}
GLAPI void APIENTRY glCopyPixels (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum type_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum type_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glCopyPixels"));
(*fun)(x_,y_,width_,height_,type_);
AfterProcess("glCopyPixels");

}
GLAPI void APIENTRY glDrawPixels (GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *pixels_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *pixels_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glDrawPixels"));
(*fun)(width_,height_,format_,type_,pixels_);
AfterProcess("glDrawPixels");

}
GLAPI void APIENTRY glGetClipPlane (GLenum plane_, GLdouble *equation_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum plane_, GLdouble *equation_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetClipPlane"));
(*fun)(plane_,equation_);
AfterProcess("glGetClipPlane");

}
GLAPI void APIENTRY glGetLightfv (GLenum light_, GLenum pname_, GLfloat *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum light_, GLenum pname_, GLfloat *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetLightfv"));
(*fun)(light_,pname_,params_);
AfterProcess("glGetLightfv");

}
GLAPI void APIENTRY glGetLightiv (GLenum light_, GLenum pname_, GLint *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum light_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetLightiv"));
(*fun)(light_,pname_,params_);
AfterProcess("glGetLightiv");

}
GLAPI void APIENTRY glGetMapdv (GLenum target_, GLenum query_, GLdouble *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum query_, GLdouble *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetMapdv"));
(*fun)(target_,query_,v_);
AfterProcess("glGetMapdv");

}
GLAPI void APIENTRY glGetMapfv (GLenum target_, GLenum query_, GLfloat *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum query_, GLfloat *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetMapfv"));
(*fun)(target_,query_,v_);
AfterProcess("glGetMapfv");

}
GLAPI void APIENTRY glGetMapiv (GLenum target_, GLenum query_, GLint *v_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum query_, GLint *v_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetMapiv"));
(*fun)(target_,query_,v_);
AfterProcess("glGetMapiv");

}
GLAPI void APIENTRY glGetMaterialfv (GLenum face_, GLenum pname_, GLfloat *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum face_, GLenum pname_, GLfloat *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetMaterialfv"));
(*fun)(face_,pname_,params_);
AfterProcess("glGetMaterialfv");

}
GLAPI void APIENTRY glGetMaterialiv (GLenum face_, GLenum pname_, GLint *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum face_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetMaterialiv"));
(*fun)(face_,pname_,params_);
AfterProcess("glGetMaterialiv");

}
GLAPI void APIENTRY glGetPixelMapfv (GLenum map_, GLfloat *values_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum map_, GLfloat *values_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetPixelMapfv"));
(*fun)(map_,values_);
AfterProcess("glGetPixelMapfv");

}
GLAPI void APIENTRY glGetPixelMapuiv (GLenum map_, GLuint *values_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum map_, GLuint *values_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetPixelMapuiv"));
(*fun)(map_,values_);
AfterProcess("glGetPixelMapuiv");

}
GLAPI void APIENTRY glGetPixelMapusv (GLenum map_, GLushort *values_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum map_, GLushort *values_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetPixelMapusv"));
(*fun)(map_,values_);
AfterProcess("glGetPixelMapusv");

}
GLAPI void APIENTRY glGetPolygonStipple (GLubyte *mask_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLubyte *mask_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetPolygonStipple"));
(*fun)(mask_);
AfterProcess("glGetPolygonStipple");

}
GLAPI void APIENTRY glGetTexEnvfv (GLenum target_, GLenum pname_, GLfloat *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLfloat *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetTexEnvfv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetTexEnvfv");

}
GLAPI void APIENTRY glGetTexEnviv (GLenum target_, GLenum pname_, GLint *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetTexEnviv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetTexEnviv");

}
GLAPI void APIENTRY glGetTexGendv (GLenum coord_, GLenum pname_, GLdouble *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum coord_, GLenum pname_, GLdouble *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetTexGendv"));
(*fun)(coord_,pname_,params_);
AfterProcess("glGetTexGendv");

}
GLAPI void APIENTRY glGetTexGenfv (GLenum coord_, GLenum pname_, GLfloat *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum coord_, GLenum pname_, GLfloat *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetTexGenfv"));
(*fun)(coord_,pname_,params_);
AfterProcess("glGetTexGenfv");

}
GLAPI void APIENTRY glGetTexGeniv (GLenum coord_, GLenum pname_, GLint *params_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum coord_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glGetTexGeniv"));
(*fun)(coord_,pname_,params_);
AfterProcess("glGetTexGeniv");

}
GLAPI GLboolean APIENTRY glIsList (GLuint list_)
{
HINSTANCE hInst = GetDLLInstance();
typedef GLboolean (INTER_CALL *FUNC) (GLuint list_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glIsList"));
GLboolean returnValue = (*fun)(list_);
AfterProcess("glIsList");
return returnValue;
}
GLAPI void APIENTRY glFrustum (GLdouble left_, GLdouble right_, GLdouble bottom_, GLdouble top_, GLdouble zNear_, GLdouble zFar_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble left_, GLdouble right_, GLdouble bottom_, GLdouble top_, GLdouble zNear_, GLdouble zFar_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glFrustum"));
(*fun)(left_,right_,bottom_,top_,zNear_,zFar_);
AfterProcess("glFrustum");

}
GLAPI void APIENTRY glLoadIdentity (void)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glLoadIdentity"));
(*fun)();
AfterProcess("glLoadIdentity");

}
GLAPI void APIENTRY glLoadMatrixf (const GLfloat *m_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *m_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glLoadMatrixf"));
(*fun)(m_);
AfterProcess("glLoadMatrixf");

}
GLAPI void APIENTRY glLoadMatrixd (const GLdouble *m_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *m_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glLoadMatrixd"));
(*fun)(m_);
AfterProcess("glLoadMatrixd");

}
GLAPI void APIENTRY glMatrixMode (GLenum mode_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLenum mode_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glMatrixMode"));
(*fun)(mode_);
AfterProcess("glMatrixMode");

}
GLAPI void APIENTRY glMultMatrixf (const GLfloat *m_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLfloat *m_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glMultMatrixf"));
(*fun)(m_);
AfterProcess("glMultMatrixf");

}
GLAPI void APIENTRY glMultMatrixd (const GLdouble *m_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (const GLdouble *m_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glMultMatrixd"));
(*fun)(m_);
AfterProcess("glMultMatrixd");

}
GLAPI void APIENTRY glOrtho (GLdouble left_, GLdouble right_, GLdouble bottom_, GLdouble top_, GLdouble zNear_, GLdouble zFar_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble left_, GLdouble right_, GLdouble bottom_, GLdouble top_, GLdouble zNear_, GLdouble zFar_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glOrtho"));
(*fun)(left_,right_,bottom_,top_,zNear_,zFar_);
AfterProcess("glOrtho");

}
GLAPI void APIENTRY glPopMatrix (void)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPopMatrix"));
(*fun)();
AfterProcess("glPopMatrix");

}
GLAPI void APIENTRY glPushMatrix (void)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glPushMatrix"));
(*fun)();
AfterProcess("glPushMatrix");

}
GLAPI void APIENTRY glRotated (GLdouble angle_, GLdouble x_, GLdouble y_, GLdouble z_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble angle_, GLdouble x_, GLdouble y_, GLdouble z_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRotated"));
(*fun)(angle_,x_,y_,z_);
AfterProcess("glRotated");

}
GLAPI void APIENTRY glRotatef (GLfloat angle_, GLfloat x_, GLfloat y_, GLfloat z_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat angle_, GLfloat x_, GLfloat y_, GLfloat z_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glRotatef"));
(*fun)(angle_,x_,y_,z_);
AfterProcess("glRotatef");

}
GLAPI void APIENTRY glScaled (GLdouble x_, GLdouble y_, GLdouble z_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble x_, GLdouble y_, GLdouble z_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glScaled"));
(*fun)(x_,y_,z_);
AfterProcess("glScaled");

}
GLAPI void APIENTRY glScalef (GLfloat x_, GLfloat y_, GLfloat z_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat x_, GLfloat y_, GLfloat z_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glScalef"));
(*fun)(x_,y_,z_);
AfterProcess("glScalef");

}
GLAPI void APIENTRY glTranslated (GLdouble x_, GLdouble y_, GLdouble z_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLdouble x_, GLdouble y_, GLdouble z_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTranslated"));
(*fun)(x_,y_,z_);
AfterProcess("glTranslated");

}
GLAPI void APIENTRY glTranslatef (GLfloat x_, GLfloat y_, GLfloat z_)
{
HINSTANCE hInst = GetDLLInstance();
typedef void (INTER_CALL *FUNC) (GLfloat x_, GLfloat y_, GLfloat z_);
FUNC fun = (FUNC) ( GetProcAddress(hInst,"glTranslatef"));
(*fun)(x_,y_,z_);
AfterProcess("glTranslatef");

}
#endif /* GL_VERSION_1_0 */

#ifdef GL_VERSION_1_1
GLAPI void APIENTRY glDrawArrays (GLenum mode_, GLint first_, GLsizei count_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLint first_, GLsizei count_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawArrays"));
(*fun)(mode_,first_,count_);
AfterProcess("glDrawArrays");

}
GLAPI void APIENTRY glDrawElements (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawElements"));
(*fun)(mode_,count_,type_,indices_);
AfterProcess("glDrawElements");

}
GLAPI void APIENTRY glGetPointerv (GLenum pname_, void **params_)
{
typedef void (INTER_CALL *FUNC) (GLenum pname_, void **params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetPointerv"));
(*fun)(pname_,params_);
AfterProcess("glGetPointerv");

}
GLAPI void APIENTRY glPolygonOffset (GLfloat factor_, GLfloat units_)
{
typedef void (INTER_CALL *FUNC) (GLfloat factor_, GLfloat units_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glPolygonOffset"));
(*fun)(factor_,units_);
AfterProcess("glPolygonOffset");

}
GLAPI void APIENTRY glCopyTexImage1D (GLenum target_, GLint level_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLint border_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLint border_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCopyTexImage1D"));
(*fun)(target_,level_,internalformat_,x_,y_,width_,border_);
AfterProcess("glCopyTexImage1D");

}
GLAPI void APIENTRY glCopyTexImage2D (GLenum target_, GLint level_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLint border_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLint border_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCopyTexImage2D"));
(*fun)(target_,level_,internalformat_,x_,y_,width_,height_,border_);
AfterProcess("glCopyTexImage2D");

}
GLAPI void APIENTRY glCopyTexSubImage1D (GLenum target_, GLint level_, GLint xoffset_, GLint x_, GLint y_, GLsizei width_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLint xoffset_, GLint x_, GLint y_, GLsizei width_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCopyTexSubImage1D"));
(*fun)(target_,level_,xoffset_,x_,y_,width_);
AfterProcess("glCopyTexSubImage1D");

}
GLAPI void APIENTRY glCopyTexSubImage2D (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCopyTexSubImage2D"));
(*fun)(target_,level_,xoffset_,yoffset_,x_,y_,width_,height_);
AfterProcess("glCopyTexSubImage2D");

}
GLAPI void APIENTRY glTexSubImage1D (GLenum target_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLenum type_, const void *pixels_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLenum type_, const void *pixels_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexSubImage1D"));
(*fun)(target_,level_,xoffset_,width_,format_,type_,pixels_);
AfterProcess("glTexSubImage1D");

}
GLAPI void APIENTRY glTexSubImage2D (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *pixels_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *pixels_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexSubImage2D"));
(*fun)(target_,level_,xoffset_,yoffset_,width_,height_,format_,type_,pixels_);
AfterProcess("glTexSubImage2D");

}
GLAPI void APIENTRY glBindTexture (GLenum target_, GLuint texture_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint texture_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindTexture"));
(*fun)(target_,texture_);
AfterProcess("glBindTexture");

}
GLAPI void APIENTRY glDeleteTextures (GLsizei n_, const GLuint *textures_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, const GLuint *textures_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDeleteTextures"));
(*fun)(n_,textures_);
AfterProcess("glDeleteTextures");

}
GLAPI void APIENTRY glGenTextures (GLsizei n_, GLuint *textures_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLuint *textures_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGenTextures"));
(*fun)(n_,textures_);
AfterProcess("glGenTextures");

}
GLAPI GLboolean APIENTRY glIsTexture (GLuint texture_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLuint texture_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsTexture"));
GLboolean returnValue = (*fun)(texture_);
AfterProcess("glIsTexture");
return returnValue;
}
GLAPI void APIENTRY glArrayElement (GLint i_)
{
typedef void (INTER_CALL *FUNC) (GLint i_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glArrayElement"));
(*fun)(i_);
AfterProcess("glArrayElement");

}
GLAPI void APIENTRY glColorPointer (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_)
{
typedef void (INTER_CALL *FUNC) (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glColorPointer"));
(*fun)(size_,type_,stride_,pointer_);
AfterProcess("glColorPointer");

}
GLAPI void APIENTRY glDisableClientState (GLenum array_)
{
typedef void (INTER_CALL *FUNC) (GLenum array_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDisableClientState"));
(*fun)(array_);
AfterProcess("glDisableClientState");

}
GLAPI void APIENTRY glEdgeFlagPointer (GLsizei stride_, const void *pointer_)
{
typedef void (INTER_CALL *FUNC) (GLsizei stride_, const void *pointer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glEdgeFlagPointer"));
(*fun)(stride_,pointer_);
AfterProcess("glEdgeFlagPointer");

}
GLAPI void APIENTRY glEnableClientState (GLenum array_)
{
typedef void (INTER_CALL *FUNC) (GLenum array_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glEnableClientState"));
(*fun)(array_);
AfterProcess("glEnableClientState");

}
GLAPI void APIENTRY glIndexPointer (GLenum type_, GLsizei stride_, const void *pointer_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, GLsizei stride_, const void *pointer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIndexPointer"));
(*fun)(type_,stride_,pointer_);
AfterProcess("glIndexPointer");

}
GLAPI void APIENTRY glInterleavedArrays (GLenum format_, GLsizei stride_, const void *pointer_)
{
typedef void (INTER_CALL *FUNC) (GLenum format_, GLsizei stride_, const void *pointer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glInterleavedArrays"));
(*fun)(format_,stride_,pointer_);
AfterProcess("glInterleavedArrays");

}
GLAPI void APIENTRY glNormalPointer (GLenum type_, GLsizei stride_, const void *pointer_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, GLsizei stride_, const void *pointer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNormalPointer"));
(*fun)(type_,stride_,pointer_);
AfterProcess("glNormalPointer");

}
GLAPI void APIENTRY glTexCoordPointer (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_)
{
typedef void (INTER_CALL *FUNC) (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexCoordPointer"));
(*fun)(size_,type_,stride_,pointer_);
AfterProcess("glTexCoordPointer");

}
GLAPI void APIENTRY glVertexPointer (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_)
{
typedef void (INTER_CALL *FUNC) (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexPointer"));
(*fun)(size_,type_,stride_,pointer_);
AfterProcess("glVertexPointer");

}
GLAPI GLboolean APIENTRY glAreTexturesResident (GLsizei n_, const GLuint *textures_, GLboolean *residences_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLsizei n_, const GLuint *textures_, GLboolean *residences_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glAreTexturesResident"));
GLboolean returnValue = (*fun)(n_,textures_,residences_);
AfterProcess("glAreTexturesResident");
return returnValue;
}
GLAPI void APIENTRY glPrioritizeTextures (GLsizei n_, const GLuint *textures_, const GLfloat *priorities_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, const GLuint *textures_, const GLfloat *priorities_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glPrioritizeTextures"));
(*fun)(n_,textures_,priorities_);
AfterProcess("glPrioritizeTextures");

}
GLAPI void APIENTRY glIndexub (GLubyte c_)
{
typedef void (INTER_CALL *FUNC) (GLubyte c_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIndexub"));
(*fun)(c_);
AfterProcess("glIndexub");

}
GLAPI void APIENTRY glIndexubv (const GLubyte *c_)
{
typedef void (INTER_CALL *FUNC) (const GLubyte *c_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIndexubv"));
(*fun)(c_);
AfterProcess("glIndexubv");

}
GLAPI void APIENTRY glPopClientAttrib (void)
{
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glPopClientAttrib"));
(*fun)();
AfterProcess("glPopClientAttrib");

}
GLAPI void APIENTRY glPushClientAttrib (GLbitfield mask_)
{
typedef void (INTER_CALL *FUNC) (GLbitfield mask_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glPushClientAttrib"));
(*fun)(mask_);
AfterProcess("glPushClientAttrib");

}
#endif /* GL_VERSION_1_1 */

#ifdef GL_VERSION_1_2
GLAPI void APIENTRY glDrawRangeElements (GLenum mode_, GLuint start_, GLuint end_, GLsizei count_, GLenum type_, const void *indices_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLuint start_, GLuint end_, GLsizei count_, GLenum type_, const void *indices_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawRangeElements"));
(*fun)(mode_,start_,end_,count_,type_,indices_);
AfterProcess("glDrawRangeElements");

}
GLAPI void APIENTRY glTexImage3D (GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLenum format_, GLenum type_, const void *pixels_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLenum format_, GLenum type_, const void *pixels_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexImage3D"));
(*fun)(target_,level_,internalformat_,width_,height_,depth_,border_,format_,type_,pixels_);
AfterProcess("glTexImage3D");

}
GLAPI void APIENTRY glTexSubImage3D (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void *pixels_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void *pixels_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexSubImage3D"));
(*fun)(target_,level_,xoffset_,yoffset_,zoffset_,width_,height_,depth_,format_,type_,pixels_);
AfterProcess("glTexSubImage3D");

}
GLAPI void APIENTRY glCopyTexSubImage3D (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCopyTexSubImage3D"));
(*fun)(target_,level_,xoffset_,yoffset_,zoffset_,x_,y_,width_,height_);
AfterProcess("glCopyTexSubImage3D");

}
#endif /* GL_VERSION_1_2 */

#ifdef GL_VERSION_1_3
GLAPI void APIENTRY glActiveTexture (GLenum texture_)
{
typedef void (INTER_CALL *FUNC) (GLenum texture_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glActiveTexture"));
(*fun)(texture_);
AfterProcess("glActiveTexture");

}
GLAPI void APIENTRY glSampleCoverage (GLfloat value_, GLboolean invert_)
{
typedef void (INTER_CALL *FUNC) (GLfloat value_, GLboolean invert_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSampleCoverage"));
(*fun)(value_,invert_);
AfterProcess("glSampleCoverage");

}
GLAPI void APIENTRY glCompressedTexImage3D (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLsizei imageSize_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLsizei imageSize_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCompressedTexImage3D"));
(*fun)(target_,level_,internalformat_,width_,height_,depth_,border_,imageSize_,data_);
AfterProcess("glCompressedTexImage3D");

}
GLAPI void APIENTRY glCompressedTexImage2D (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLint border_, GLsizei imageSize_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLint border_, GLsizei imageSize_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCompressedTexImage2D"));
(*fun)(target_,level_,internalformat_,width_,height_,border_,imageSize_,data_);
AfterProcess("glCompressedTexImage2D");

}
GLAPI void APIENTRY glCompressedTexImage1D (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLint border_, GLsizei imageSize_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLint border_, GLsizei imageSize_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCompressedTexImage1D"));
(*fun)(target_,level_,internalformat_,width_,border_,imageSize_,data_);
AfterProcess("glCompressedTexImage1D");

}
GLAPI void APIENTRY glCompressedTexSubImage3D (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLsizei imageSize_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLsizei imageSize_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCompressedTexSubImage3D"));
(*fun)(target_,level_,xoffset_,yoffset_,zoffset_,width_,height_,depth_,format_,imageSize_,data_);
AfterProcess("glCompressedTexSubImage3D");

}
GLAPI void APIENTRY glCompressedTexSubImage2D (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLsizei imageSize_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLsizei imageSize_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCompressedTexSubImage2D"));
(*fun)(target_,level_,xoffset_,yoffset_,width_,height_,format_,imageSize_,data_);
AfterProcess("glCompressedTexSubImage2D");

}
GLAPI void APIENTRY glCompressedTexSubImage1D (GLenum target_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLsizei imageSize_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLsizei imageSize_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCompressedTexSubImage1D"));
(*fun)(target_,level_,xoffset_,width_,format_,imageSize_,data_);
AfterProcess("glCompressedTexSubImage1D");

}
GLAPI void APIENTRY glGetCompressedTexImage (GLenum target_, GLint level_, void *img_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, void *img_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetCompressedTexImage"));
(*fun)(target_,level_,img_);
AfterProcess("glGetCompressedTexImage");

}
GLAPI void APIENTRY glClientActiveTexture (GLenum texture_)
{
typedef void (INTER_CALL *FUNC) (GLenum texture_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClientActiveTexture"));
(*fun)(texture_);
AfterProcess("glClientActiveTexture");

}
GLAPI void APIENTRY glMultiTexCoord1d (GLenum target_, GLdouble s_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLdouble s_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord1d"));
(*fun)(target_,s_);
AfterProcess("glMultiTexCoord1d");

}
GLAPI void APIENTRY glMultiTexCoord1dv (GLenum target_, const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord1dv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord1dv");

}
GLAPI void APIENTRY glMultiTexCoord1f (GLenum target_, GLfloat s_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLfloat s_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord1f"));
(*fun)(target_,s_);
AfterProcess("glMultiTexCoord1f");

}
GLAPI void APIENTRY glMultiTexCoord1fv (GLenum target_, const GLfloat *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLfloat *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord1fv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord1fv");

}
GLAPI void APIENTRY glMultiTexCoord1i (GLenum target_, GLint s_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint s_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord1i"));
(*fun)(target_,s_);
AfterProcess("glMultiTexCoord1i");

}
GLAPI void APIENTRY glMultiTexCoord1iv (GLenum target_, const GLint *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord1iv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord1iv");

}
GLAPI void APIENTRY glMultiTexCoord1s (GLenum target_, GLshort s_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLshort s_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord1s"));
(*fun)(target_,s_);
AfterProcess("glMultiTexCoord1s");

}
GLAPI void APIENTRY glMultiTexCoord1sv (GLenum target_, const GLshort *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLshort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord1sv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord1sv");

}
GLAPI void APIENTRY glMultiTexCoord2d (GLenum target_, GLdouble s_, GLdouble t_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLdouble s_, GLdouble t_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord2d"));
(*fun)(target_,s_,t_);
AfterProcess("glMultiTexCoord2d");

}
GLAPI void APIENTRY glMultiTexCoord2dv (GLenum target_, const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord2dv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord2dv");

}
GLAPI void APIENTRY glMultiTexCoord2f (GLenum target_, GLfloat s_, GLfloat t_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLfloat s_, GLfloat t_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord2f"));
(*fun)(target_,s_,t_);
AfterProcess("glMultiTexCoord2f");

}
GLAPI void APIENTRY glMultiTexCoord2fv (GLenum target_, const GLfloat *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLfloat *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord2fv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord2fv");

}
GLAPI void APIENTRY glMultiTexCoord2i (GLenum target_, GLint s_, GLint t_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint s_, GLint t_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord2i"));
(*fun)(target_,s_,t_);
AfterProcess("glMultiTexCoord2i");

}
GLAPI void APIENTRY glMultiTexCoord2iv (GLenum target_, const GLint *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord2iv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord2iv");

}
GLAPI void APIENTRY glMultiTexCoord2s (GLenum target_, GLshort s_, GLshort t_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLshort s_, GLshort t_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord2s"));
(*fun)(target_,s_,t_);
AfterProcess("glMultiTexCoord2s");

}
GLAPI void APIENTRY glMultiTexCoord2sv (GLenum target_, const GLshort *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLshort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord2sv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord2sv");

}
GLAPI void APIENTRY glMultiTexCoord3d (GLenum target_, GLdouble s_, GLdouble t_, GLdouble r_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLdouble s_, GLdouble t_, GLdouble r_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord3d"));
(*fun)(target_,s_,t_,r_);
AfterProcess("glMultiTexCoord3d");

}
GLAPI void APIENTRY glMultiTexCoord3dv (GLenum target_, const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord3dv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord3dv");

}
GLAPI void APIENTRY glMultiTexCoord3f (GLenum target_, GLfloat s_, GLfloat t_, GLfloat r_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLfloat s_, GLfloat t_, GLfloat r_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord3f"));
(*fun)(target_,s_,t_,r_);
AfterProcess("glMultiTexCoord3f");

}
GLAPI void APIENTRY glMultiTexCoord3fv (GLenum target_, const GLfloat *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLfloat *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord3fv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord3fv");

}
GLAPI void APIENTRY glMultiTexCoord3i (GLenum target_, GLint s_, GLint t_, GLint r_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint s_, GLint t_, GLint r_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord3i"));
(*fun)(target_,s_,t_,r_);
AfterProcess("glMultiTexCoord3i");

}
GLAPI void APIENTRY glMultiTexCoord3iv (GLenum target_, const GLint *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord3iv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord3iv");

}
GLAPI void APIENTRY glMultiTexCoord3s (GLenum target_, GLshort s_, GLshort t_, GLshort r_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLshort s_, GLshort t_, GLshort r_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord3s"));
(*fun)(target_,s_,t_,r_);
AfterProcess("glMultiTexCoord3s");

}
GLAPI void APIENTRY glMultiTexCoord3sv (GLenum target_, const GLshort *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLshort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord3sv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord3sv");

}
GLAPI void APIENTRY glMultiTexCoord4d (GLenum target_, GLdouble s_, GLdouble t_, GLdouble r_, GLdouble q_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLdouble s_, GLdouble t_, GLdouble r_, GLdouble q_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord4d"));
(*fun)(target_,s_,t_,r_,q_);
AfterProcess("glMultiTexCoord4d");

}
GLAPI void APIENTRY glMultiTexCoord4dv (GLenum target_, const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord4dv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord4dv");

}
GLAPI void APIENTRY glMultiTexCoord4f (GLenum target_, GLfloat s_, GLfloat t_, GLfloat r_, GLfloat q_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLfloat s_, GLfloat t_, GLfloat r_, GLfloat q_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord4f"));
(*fun)(target_,s_,t_,r_,q_);
AfterProcess("glMultiTexCoord4f");

}
GLAPI void APIENTRY glMultiTexCoord4fv (GLenum target_, const GLfloat *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLfloat *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord4fv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord4fv");

}
GLAPI void APIENTRY glMultiTexCoord4i (GLenum target_, GLint s_, GLint t_, GLint r_, GLint q_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint s_, GLint t_, GLint r_, GLint q_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord4i"));
(*fun)(target_,s_,t_,r_,q_);
AfterProcess("glMultiTexCoord4i");

}
GLAPI void APIENTRY glMultiTexCoord4iv (GLenum target_, const GLint *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord4iv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord4iv");

}
GLAPI void APIENTRY glMultiTexCoord4s (GLenum target_, GLshort s_, GLshort t_, GLshort r_, GLshort q_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLshort s_, GLshort t_, GLshort r_, GLshort q_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord4s"));
(*fun)(target_,s_,t_,r_,q_);
AfterProcess("glMultiTexCoord4s");

}
GLAPI void APIENTRY glMultiTexCoord4sv (GLenum target_, const GLshort *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, const GLshort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoord4sv"));
(*fun)(target_,v_);
AfterProcess("glMultiTexCoord4sv");

}
GLAPI void APIENTRY glLoadTransposeMatrixf (const GLfloat *m_)
{
typedef void (INTER_CALL *FUNC) (const GLfloat *m_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glLoadTransposeMatrixf"));
(*fun)(m_);
AfterProcess("glLoadTransposeMatrixf");

}
GLAPI void APIENTRY glLoadTransposeMatrixd (const GLdouble *m_)
{
typedef void (INTER_CALL *FUNC) (const GLdouble *m_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glLoadTransposeMatrixd"));
(*fun)(m_);
AfterProcess("glLoadTransposeMatrixd");

}
GLAPI void APIENTRY glMultTransposeMatrixf (const GLfloat *m_)
{
typedef void (INTER_CALL *FUNC) (const GLfloat *m_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultTransposeMatrixf"));
(*fun)(m_);
AfterProcess("glMultTransposeMatrixf");

}
GLAPI void APIENTRY glMultTransposeMatrixd (const GLdouble *m_)
{
typedef void (INTER_CALL *FUNC) (const GLdouble *m_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultTransposeMatrixd"));
(*fun)(m_);
AfterProcess("glMultTransposeMatrixd");

}
#endif /* GL_VERSION_1_3 */

#ifdef GL_VERSION_1_4
GLAPI void APIENTRY glBlendFuncSeparate (GLenum sfactorRGB_, GLenum dfactorRGB_, GLenum sfactorAlpha_, GLenum dfactorAlpha_)
{
typedef void (INTER_CALL *FUNC) (GLenum sfactorRGB_, GLenum dfactorRGB_, GLenum sfactorAlpha_, GLenum dfactorAlpha_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBlendFuncSeparate"));
(*fun)(sfactorRGB_,dfactorRGB_,sfactorAlpha_,dfactorAlpha_);
AfterProcess("glBlendFuncSeparate");

}
GLAPI void APIENTRY glMultiDrawArrays (GLenum mode_, const GLint *first_, const GLsizei *count_, GLsizei drawcount_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, const GLint *first_, const GLsizei *count_, GLsizei drawcount_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiDrawArrays"));
(*fun)(mode_,first_,count_,drawcount_);
AfterProcess("glMultiDrawArrays");

}
GLAPI void APIENTRY glMultiDrawElements (GLenum mode_, const GLsizei *count_, GLenum type_, const void *const*indices_, GLsizei drawcount_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, const GLsizei *count_, GLenum type_, const void *const*indices_, GLsizei drawcount_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiDrawElements"));
(*fun)(mode_,count_,type_,indices_,drawcount_);
AfterProcess("glMultiDrawElements");

}
GLAPI void APIENTRY glPointParameterf (GLenum pname_, GLfloat param_)
{
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLfloat param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glPointParameterf"));
(*fun)(pname_,param_);
AfterProcess("glPointParameterf");

}
GLAPI void APIENTRY glPointParameterfv (GLenum pname_, const GLfloat *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum pname_, const GLfloat *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glPointParameterfv"));
(*fun)(pname_,params_);
AfterProcess("glPointParameterfv");

}
GLAPI void APIENTRY glPointParameteri (GLenum pname_, GLint param_)
{
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLint param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glPointParameteri"));
(*fun)(pname_,param_);
AfterProcess("glPointParameteri");

}
GLAPI void APIENTRY glPointParameteriv (GLenum pname_, const GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum pname_, const GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glPointParameteriv"));
(*fun)(pname_,params_);
AfterProcess("glPointParameteriv");

}
GLAPI void APIENTRY glFogCoordf (GLfloat coord_)
{
typedef void (INTER_CALL *FUNC) (GLfloat coord_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glFogCoordf"));
(*fun)(coord_);
AfterProcess("glFogCoordf");

}
GLAPI void APIENTRY glFogCoordfv (const GLfloat *coord_)
{
typedef void (INTER_CALL *FUNC) (const GLfloat *coord_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glFogCoordfv"));
(*fun)(coord_);
AfterProcess("glFogCoordfv");

}
GLAPI void APIENTRY glFogCoordd (GLdouble coord_)
{
typedef void (INTER_CALL *FUNC) (GLdouble coord_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glFogCoordd"));
(*fun)(coord_);
AfterProcess("glFogCoordd");

}
GLAPI void APIENTRY glFogCoorddv (const GLdouble *coord_)
{
typedef void (INTER_CALL *FUNC) (const GLdouble *coord_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glFogCoorddv"));
(*fun)(coord_);
AfterProcess("glFogCoorddv");

}
GLAPI void APIENTRY glFogCoordPointer (GLenum type_, GLsizei stride_, const void *pointer_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, GLsizei stride_, const void *pointer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glFogCoordPointer"));
(*fun)(type_,stride_,pointer_);
AfterProcess("glFogCoordPointer");

}
GLAPI void APIENTRY glSecondaryColor3b (GLbyte red_, GLbyte green_, GLbyte blue_)
{
typedef void (INTER_CALL *FUNC) (GLbyte red_, GLbyte green_, GLbyte blue_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3b"));
(*fun)(red_,green_,blue_);
AfterProcess("glSecondaryColor3b");

}
GLAPI void APIENTRY glSecondaryColor3bv (const GLbyte *v_)
{
typedef void (INTER_CALL *FUNC) (const GLbyte *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3bv"));
(*fun)(v_);
AfterProcess("glSecondaryColor3bv");

}
GLAPI void APIENTRY glSecondaryColor3d (GLdouble red_, GLdouble green_, GLdouble blue_)
{
typedef void (INTER_CALL *FUNC) (GLdouble red_, GLdouble green_, GLdouble blue_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3d"));
(*fun)(red_,green_,blue_);
AfterProcess("glSecondaryColor3d");

}
GLAPI void APIENTRY glSecondaryColor3dv (const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3dv"));
(*fun)(v_);
AfterProcess("glSecondaryColor3dv");

}
GLAPI void APIENTRY glSecondaryColor3f (GLfloat red_, GLfloat green_, GLfloat blue_)
{
typedef void (INTER_CALL *FUNC) (GLfloat red_, GLfloat green_, GLfloat blue_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3f"));
(*fun)(red_,green_,blue_);
AfterProcess("glSecondaryColor3f");

}
GLAPI void APIENTRY glSecondaryColor3fv (const GLfloat *v_)
{
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3fv"));
(*fun)(v_);
AfterProcess("glSecondaryColor3fv");

}
GLAPI void APIENTRY glSecondaryColor3i (GLint red_, GLint green_, GLint blue_)
{
typedef void (INTER_CALL *FUNC) (GLint red_, GLint green_, GLint blue_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3i"));
(*fun)(red_,green_,blue_);
AfterProcess("glSecondaryColor3i");

}
GLAPI void APIENTRY glSecondaryColor3iv (const GLint *v_)
{
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3iv"));
(*fun)(v_);
AfterProcess("glSecondaryColor3iv");

}
GLAPI void APIENTRY glSecondaryColor3s (GLshort red_, GLshort green_, GLshort blue_)
{
typedef void (INTER_CALL *FUNC) (GLshort red_, GLshort green_, GLshort blue_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3s"));
(*fun)(red_,green_,blue_);
AfterProcess("glSecondaryColor3s");

}
GLAPI void APIENTRY glSecondaryColor3sv (const GLshort *v_)
{
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3sv"));
(*fun)(v_);
AfterProcess("glSecondaryColor3sv");

}
GLAPI void APIENTRY glSecondaryColor3ub (GLubyte red_, GLubyte green_, GLubyte blue_)
{
typedef void (INTER_CALL *FUNC) (GLubyte red_, GLubyte green_, GLubyte blue_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3ub"));
(*fun)(red_,green_,blue_);
AfterProcess("glSecondaryColor3ub");

}
GLAPI void APIENTRY glSecondaryColor3ubv (const GLubyte *v_)
{
typedef void (INTER_CALL *FUNC) (const GLubyte *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3ubv"));
(*fun)(v_);
AfterProcess("glSecondaryColor3ubv");

}
GLAPI void APIENTRY glSecondaryColor3ui (GLuint red_, GLuint green_, GLuint blue_)
{
typedef void (INTER_CALL *FUNC) (GLuint red_, GLuint green_, GLuint blue_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3ui"));
(*fun)(red_,green_,blue_);
AfterProcess("glSecondaryColor3ui");

}
GLAPI void APIENTRY glSecondaryColor3uiv (const GLuint *v_)
{
typedef void (INTER_CALL *FUNC) (const GLuint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3uiv"));
(*fun)(v_);
AfterProcess("glSecondaryColor3uiv");

}
GLAPI void APIENTRY glSecondaryColor3us (GLushort red_, GLushort green_, GLushort blue_)
{
typedef void (INTER_CALL *FUNC) (GLushort red_, GLushort green_, GLushort blue_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3us"));
(*fun)(red_,green_,blue_);
AfterProcess("glSecondaryColor3us");

}
GLAPI void APIENTRY glSecondaryColor3usv (const GLushort *v_)
{
typedef void (INTER_CALL *FUNC) (const GLushort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColor3usv"));
(*fun)(v_);
AfterProcess("glSecondaryColor3usv");

}
GLAPI void APIENTRY glSecondaryColorPointer (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_)
{
typedef void (INTER_CALL *FUNC) (GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColorPointer"));
(*fun)(size_,type_,stride_,pointer_);
AfterProcess("glSecondaryColorPointer");

}
GLAPI void APIENTRY glWindowPos2d (GLdouble x_, GLdouble y_)
{
typedef void (INTER_CALL *FUNC) (GLdouble x_, GLdouble y_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos2d"));
(*fun)(x_,y_);
AfterProcess("glWindowPos2d");

}
GLAPI void APIENTRY glWindowPos2dv (const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos2dv"));
(*fun)(v_);
AfterProcess("glWindowPos2dv");

}
GLAPI void APIENTRY glWindowPos2f (GLfloat x_, GLfloat y_)
{
typedef void (INTER_CALL *FUNC) (GLfloat x_, GLfloat y_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos2f"));
(*fun)(x_,y_);
AfterProcess("glWindowPos2f");

}
GLAPI void APIENTRY glWindowPos2fv (const GLfloat *v_)
{
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos2fv"));
(*fun)(v_);
AfterProcess("glWindowPos2fv");

}
GLAPI void APIENTRY glWindowPos2i (GLint x_, GLint y_)
{
typedef void (INTER_CALL *FUNC) (GLint x_, GLint y_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos2i"));
(*fun)(x_,y_);
AfterProcess("glWindowPos2i");

}
GLAPI void APIENTRY glWindowPos2iv (const GLint *v_)
{
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos2iv"));
(*fun)(v_);
AfterProcess("glWindowPos2iv");

}
GLAPI void APIENTRY glWindowPos2s (GLshort x_, GLshort y_)
{
typedef void (INTER_CALL *FUNC) (GLshort x_, GLshort y_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos2s"));
(*fun)(x_,y_);
AfterProcess("glWindowPos2s");

}
GLAPI void APIENTRY glWindowPos2sv (const GLshort *v_)
{
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos2sv"));
(*fun)(v_);
AfterProcess("glWindowPos2sv");

}
GLAPI void APIENTRY glWindowPos3d (GLdouble x_, GLdouble y_, GLdouble z_)
{
typedef void (INTER_CALL *FUNC) (GLdouble x_, GLdouble y_, GLdouble z_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos3d"));
(*fun)(x_,y_,z_);
AfterProcess("glWindowPos3d");

}
GLAPI void APIENTRY glWindowPos3dv (const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos3dv"));
(*fun)(v_);
AfterProcess("glWindowPos3dv");

}
GLAPI void APIENTRY glWindowPos3f (GLfloat x_, GLfloat y_, GLfloat z_)
{
typedef void (INTER_CALL *FUNC) (GLfloat x_, GLfloat y_, GLfloat z_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos3f"));
(*fun)(x_,y_,z_);
AfterProcess("glWindowPos3f");

}
GLAPI void APIENTRY glWindowPos3fv (const GLfloat *v_)
{
typedef void (INTER_CALL *FUNC) (const GLfloat *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos3fv"));
(*fun)(v_);
AfterProcess("glWindowPos3fv");

}
GLAPI void APIENTRY glWindowPos3i (GLint x_, GLint y_, GLint z_)
{
typedef void (INTER_CALL *FUNC) (GLint x_, GLint y_, GLint z_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos3i"));
(*fun)(x_,y_,z_);
AfterProcess("glWindowPos3i");

}
GLAPI void APIENTRY glWindowPos3iv (const GLint *v_)
{
typedef void (INTER_CALL *FUNC) (const GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos3iv"));
(*fun)(v_);
AfterProcess("glWindowPos3iv");

}
GLAPI void APIENTRY glWindowPos3s (GLshort x_, GLshort y_, GLshort z_)
{
typedef void (INTER_CALL *FUNC) (GLshort x_, GLshort y_, GLshort z_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos3s"));
(*fun)(x_,y_,z_);
AfterProcess("glWindowPos3s");

}
GLAPI void APIENTRY glWindowPos3sv (const GLshort *v_)
{
typedef void (INTER_CALL *FUNC) (const GLshort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWindowPos3sv"));
(*fun)(v_);
AfterProcess("glWindowPos3sv");

}
GLAPI void APIENTRY glBlendColor (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_)
{
typedef void (INTER_CALL *FUNC) (GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBlendColor"));
(*fun)(red_,green_,blue_,alpha_);
AfterProcess("glBlendColor");

}
GLAPI void APIENTRY glBlendEquation (GLenum mode_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBlendEquation"));
(*fun)(mode_);
AfterProcess("glBlendEquation");

}
#endif /* GL_VERSION_1_4 */

#ifdef GL_VERSION_1_5
GLAPI void APIENTRY glGenQueries (GLsizei n_, GLuint *ids_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLuint *ids_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGenQueries"));
(*fun)(n_,ids_);
AfterProcess("glGenQueries");

}
GLAPI void APIENTRY glDeleteQueries (GLsizei n_, const GLuint *ids_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, const GLuint *ids_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDeleteQueries"));
(*fun)(n_,ids_);
AfterProcess("glDeleteQueries");

}
GLAPI GLboolean APIENTRY glIsQuery (GLuint id_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLuint id_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsQuery"));
GLboolean returnValue = (*fun)(id_);
AfterProcess("glIsQuery");
return returnValue;
}
GLAPI void APIENTRY glBeginQuery (GLenum target_, GLuint id_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint id_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBeginQuery"));
(*fun)(target_,id_);
AfterProcess("glBeginQuery");

}
GLAPI void APIENTRY glEndQuery (GLenum target_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glEndQuery"));
(*fun)(target_);
AfterProcess("glEndQuery");

}
GLAPI void APIENTRY glGetQueryiv (GLenum target_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetQueryiv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetQueryiv");

}
GLAPI void APIENTRY glGetQueryObjectiv (GLuint id_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint id_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetQueryObjectiv"));
(*fun)(id_,pname_,params_);
AfterProcess("glGetQueryObjectiv");

}
GLAPI void APIENTRY glGetQueryObjectuiv (GLuint id_, GLenum pname_, GLuint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint id_, GLenum pname_, GLuint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetQueryObjectuiv"));
(*fun)(id_,pname_,params_);
AfterProcess("glGetQueryObjectuiv");

}
GLAPI void APIENTRY glBindBuffer (GLenum target_, GLuint buffer_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint buffer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindBuffer"));
(*fun)(target_,buffer_);
AfterProcess("glBindBuffer");

}
GLAPI void APIENTRY glDeleteBuffers (GLsizei n_, const GLuint *buffers_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, const GLuint *buffers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDeleteBuffers"));
(*fun)(n_,buffers_);
AfterProcess("glDeleteBuffers");

}
GLAPI void APIENTRY glGenBuffers (GLsizei n_, GLuint *buffers_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLuint *buffers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGenBuffers"));
(*fun)(n_,buffers_);
AfterProcess("glGenBuffers");

}
GLAPI GLboolean APIENTRY glIsBuffer (GLuint buffer_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLuint buffer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsBuffer"));
GLboolean returnValue = (*fun)(buffer_);
AfterProcess("glIsBuffer");
return returnValue;
}
GLAPI void APIENTRY glBufferData (GLenum target_, GLsizeiptr size_, const void *data_, GLenum usage_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizeiptr size_, const void *data_, GLenum usage_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBufferData"));
(*fun)(target_,size_,data_,usage_);
AfterProcess("glBufferData");

}
GLAPI void APIENTRY glBufferSubData (GLenum target_, GLintptr offset_, GLsizeiptr size_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLintptr offset_, GLsizeiptr size_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBufferSubData"));
(*fun)(target_,offset_,size_,data_);
AfterProcess("glBufferSubData");

}
GLAPI void APIENTRY glGetBufferSubData (GLenum target_, GLintptr offset_, GLsizeiptr size_, void *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLintptr offset_, GLsizeiptr size_, void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetBufferSubData"));
(*fun)(target_,offset_,size_,data_);
AfterProcess("glGetBufferSubData");

}
GLAPI void *APIENTRY glMapBuffer (GLenum target_, GLenum access_)
{
typedef void *(INTER_CALL *FUNC) (GLenum target_, GLenum access_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMapBuffer"));
void *returnValue = (*fun)(target_,access_);
AfterProcess("glMapBuffer");
return returnValue;
}
GLAPI GLboolean APIENTRY glUnmapBuffer (GLenum target_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLenum target_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUnmapBuffer"));
GLboolean returnValue = (*fun)(target_);
AfterProcess("glUnmapBuffer");
return returnValue;
}
GLAPI void APIENTRY glGetBufferParameteriv (GLenum target_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetBufferParameteriv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetBufferParameteriv");

}
GLAPI void APIENTRY glGetBufferPointerv (GLenum target_, GLenum pname_, void **params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, void **params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetBufferPointerv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetBufferPointerv");

}
#endif /* GL_VERSION_1_5 */

#ifdef GL_VERSION_2_0
GLAPI void APIENTRY glBlendEquationSeparate (GLenum modeRGB_, GLenum modeAlpha_)
{
typedef void (INTER_CALL *FUNC) (GLenum modeRGB_, GLenum modeAlpha_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBlendEquationSeparate"));
(*fun)(modeRGB_,modeAlpha_);
AfterProcess("glBlendEquationSeparate");

}
GLAPI void APIENTRY glDrawBuffers (GLsizei n_, const GLenum *bufs_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, const GLenum *bufs_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawBuffers"));
(*fun)(n_,bufs_);
AfterProcess("glDrawBuffers");

}
GLAPI void APIENTRY glStencilOpSeparate (GLenum face_, GLenum sfail_, GLenum dpfail_, GLenum dppass_)
{
typedef void (INTER_CALL *FUNC) (GLenum face_, GLenum sfail_, GLenum dpfail_, GLenum dppass_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glStencilOpSeparate"));
(*fun)(face_,sfail_,dpfail_,dppass_);
AfterProcess("glStencilOpSeparate");

}
GLAPI void APIENTRY glStencilFuncSeparate (GLenum face_, GLenum func_, GLint ref_, GLuint mask_)
{
typedef void (INTER_CALL *FUNC) (GLenum face_, GLenum func_, GLint ref_, GLuint mask_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glStencilFuncSeparate"));
(*fun)(face_,func_,ref_,mask_);
AfterProcess("glStencilFuncSeparate");

}
GLAPI void APIENTRY glStencilMaskSeparate (GLenum face_, GLuint mask_)
{
typedef void (INTER_CALL *FUNC) (GLenum face_, GLuint mask_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glStencilMaskSeparate"));
(*fun)(face_,mask_);
AfterProcess("glStencilMaskSeparate");

}
GLAPI void APIENTRY glAttachShader (GLuint program_, GLuint shader_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLuint shader_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glAttachShader"));
(*fun)(program_,shader_);
AfterProcess("glAttachShader");

}
GLAPI void APIENTRY glBindAttribLocation (GLuint program_, GLuint index_, const GLchar *name_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLuint index_, const GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindAttribLocation"));
(*fun)(program_,index_,name_);
AfterProcess("glBindAttribLocation");

}
GLAPI void APIENTRY glCompileShader (GLuint shader_)
{
typedef void (INTER_CALL *FUNC) (GLuint shader_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCompileShader"));
(*fun)(shader_);
AfterProcess("glCompileShader");

}
GLAPI GLuint APIENTRY glCreateProgram (void)
{
typedef GLuint (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCreateProgram"));
GLuint returnValue = (*fun)();
AfterProcess("glCreateProgram");
return returnValue;
}
GLAPI GLuint APIENTRY glCreateShader (GLenum type_)
{
typedef GLuint (INTER_CALL *FUNC) (GLenum type_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCreateShader"));
GLuint returnValue = (*fun)(type_);
AfterProcess("glCreateShader");
return returnValue;
}
GLAPI void APIENTRY glDeleteProgram (GLuint program_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDeleteProgram"));
(*fun)(program_);
AfterProcess("glDeleteProgram");

}
GLAPI void APIENTRY glDeleteShader (GLuint shader_)
{
typedef void (INTER_CALL *FUNC) (GLuint shader_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDeleteShader"));
(*fun)(shader_);
AfterProcess("glDeleteShader");

}
GLAPI void APIENTRY glDetachShader (GLuint program_, GLuint shader_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLuint shader_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDetachShader"));
(*fun)(program_,shader_);
AfterProcess("glDetachShader");

}
GLAPI void APIENTRY glDisableVertexAttribArray (GLuint index_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDisableVertexAttribArray"));
(*fun)(index_);
AfterProcess("glDisableVertexAttribArray");

}
GLAPI void APIENTRY glEnableVertexAttribArray (GLuint index_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glEnableVertexAttribArray"));
(*fun)(index_);
AfterProcess("glEnableVertexAttribArray");

}
GLAPI void APIENTRY glGetActiveAttrib (GLuint program_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLint *size_, GLenum *type_, GLchar *name_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLint *size_, GLenum *type_, GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetActiveAttrib"));
(*fun)(program_,index_,bufSize_,length_,size_,type_,name_);
AfterProcess("glGetActiveAttrib");

}
GLAPI void APIENTRY glGetActiveUniform (GLuint program_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLint *size_, GLenum *type_, GLchar *name_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLint *size_, GLenum *type_, GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetActiveUniform"));
(*fun)(program_,index_,bufSize_,length_,size_,type_,name_);
AfterProcess("glGetActiveUniform");

}
GLAPI void APIENTRY glGetAttachedShaders (GLuint program_, GLsizei maxCount_, GLsizei *count_, GLuint *shaders_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLsizei maxCount_, GLsizei *count_, GLuint *shaders_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetAttachedShaders"));
(*fun)(program_,maxCount_,count_,shaders_);
AfterProcess("glGetAttachedShaders");

}
GLAPI GLint APIENTRY glGetAttribLocation (GLuint program_, const GLchar *name_)
{
typedef GLint (INTER_CALL *FUNC) (GLuint program_, const GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetAttribLocation"));
GLint returnValue = (*fun)(program_,name_);
AfterProcess("glGetAttribLocation");
return returnValue;
}
GLAPI void APIENTRY glGetProgramiv (GLuint program_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetProgramiv"));
(*fun)(program_,pname_,params_);
AfterProcess("glGetProgramiv");

}
GLAPI void APIENTRY glGetProgramInfoLog (GLuint program_, GLsizei bufSize_, GLsizei *length_, GLchar *infoLog_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLsizei bufSize_, GLsizei *length_, GLchar *infoLog_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetProgramInfoLog"));
(*fun)(program_,bufSize_,length_,infoLog_);
AfterProcess("glGetProgramInfoLog");

}
GLAPI void APIENTRY glGetShaderiv (GLuint shader_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint shader_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetShaderiv"));
(*fun)(shader_,pname_,params_);
AfterProcess("glGetShaderiv");

}
GLAPI void APIENTRY glGetShaderInfoLog (GLuint shader_, GLsizei bufSize_, GLsizei *length_, GLchar *infoLog_)
{
typedef void (INTER_CALL *FUNC) (GLuint shader_, GLsizei bufSize_, GLsizei *length_, GLchar *infoLog_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetShaderInfoLog"));
(*fun)(shader_,bufSize_,length_,infoLog_);
AfterProcess("glGetShaderInfoLog");

}
GLAPI void APIENTRY glGetShaderSource (GLuint shader_, GLsizei bufSize_, GLsizei *length_, GLchar *source_)
{
typedef void (INTER_CALL *FUNC) (GLuint shader_, GLsizei bufSize_, GLsizei *length_, GLchar *source_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetShaderSource"));
(*fun)(shader_,bufSize_,length_,source_);
AfterProcess("glGetShaderSource");

}
GLAPI GLint APIENTRY glGetUniformLocation (GLuint program_, const GLchar *name_)
{
typedef GLint (INTER_CALL *FUNC) (GLuint program_, const GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetUniformLocation"));
GLint returnValue = (*fun)(program_,name_);
AfterProcess("glGetUniformLocation");
return returnValue;
}
GLAPI void APIENTRY glGetUniformfv (GLuint program_, GLint location_, GLfloat *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLfloat *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetUniformfv"));
(*fun)(program_,location_,params_);
AfterProcess("glGetUniformfv");

}
GLAPI void APIENTRY glGetUniformiv (GLuint program_, GLint location_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetUniformiv"));
(*fun)(program_,location_,params_);
AfterProcess("glGetUniformiv");

}
GLAPI void APIENTRY glGetVertexAttribdv (GLuint index_, GLenum pname_, GLdouble *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum pname_, GLdouble *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetVertexAttribdv"));
(*fun)(index_,pname_,params_);
AfterProcess("glGetVertexAttribdv");

}
GLAPI void APIENTRY glGetVertexAttribfv (GLuint index_, GLenum pname_, GLfloat *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum pname_, GLfloat *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetVertexAttribfv"));
(*fun)(index_,pname_,params_);
AfterProcess("glGetVertexAttribfv");

}
GLAPI void APIENTRY glGetVertexAttribiv (GLuint index_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetVertexAttribiv"));
(*fun)(index_,pname_,params_);
AfterProcess("glGetVertexAttribiv");

}
GLAPI void APIENTRY glGetVertexAttribPointerv (GLuint index_, GLenum pname_, void **pointer_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum pname_, void **pointer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetVertexAttribPointerv"));
(*fun)(index_,pname_,pointer_);
AfterProcess("glGetVertexAttribPointerv");

}
GLAPI GLboolean APIENTRY glIsProgram (GLuint program_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLuint program_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsProgram"));
GLboolean returnValue = (*fun)(program_);
AfterProcess("glIsProgram");
return returnValue;
}
GLAPI GLboolean APIENTRY glIsShader (GLuint shader_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLuint shader_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsShader"));
GLboolean returnValue = (*fun)(shader_);
AfterProcess("glIsShader");
return returnValue;
}
GLAPI void APIENTRY glLinkProgram (GLuint program_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glLinkProgram"));
(*fun)(program_);
AfterProcess("glLinkProgram");

}
GLAPI void APIENTRY glShaderSource (GLuint shader_, GLsizei count_, const GLchar *const*string_, const GLint *length_)
{
typedef void (INTER_CALL *FUNC) (GLuint shader_, GLsizei count_, const GLchar *const*string_, const GLint *length_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glShaderSource"));
(*fun)(shader_,count_,string_,length_);
AfterProcess("glShaderSource");

}
GLAPI void APIENTRY glUseProgram (GLuint program_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUseProgram"));
(*fun)(program_);
AfterProcess("glUseProgram");

}
GLAPI void APIENTRY glUniform1f (GLint location_, GLfloat v0_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLfloat v0_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform1f"));
(*fun)(location_,v0_);
AfterProcess("glUniform1f");

}
GLAPI void APIENTRY glUniform2f (GLint location_, GLfloat v0_, GLfloat v1_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLfloat v0_, GLfloat v1_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform2f"));
(*fun)(location_,v0_,v1_);
AfterProcess("glUniform2f");

}
GLAPI void APIENTRY glUniform3f (GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform3f"));
(*fun)(location_,v0_,v1_,v2_);
AfterProcess("glUniform3f");

}
GLAPI void APIENTRY glUniform4f (GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_, GLfloat v3_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_, GLfloat v3_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform4f"));
(*fun)(location_,v0_,v1_,v2_,v3_);
AfterProcess("glUniform4f");

}
GLAPI void APIENTRY glUniform1i (GLint location_, GLint v0_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLint v0_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform1i"));
(*fun)(location_,v0_);
AfterProcess("glUniform1i");

}
GLAPI void APIENTRY glUniform2i (GLint location_, GLint v0_, GLint v1_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLint v0_, GLint v1_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform2i"));
(*fun)(location_,v0_,v1_);
AfterProcess("glUniform2i");

}
GLAPI void APIENTRY glUniform3i (GLint location_, GLint v0_, GLint v1_, GLint v2_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLint v0_, GLint v1_, GLint v2_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform3i"));
(*fun)(location_,v0_,v1_,v2_);
AfterProcess("glUniform3i");

}
GLAPI void APIENTRY glUniform4i (GLint location_, GLint v0_, GLint v1_, GLint v2_, GLint v3_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLint v0_, GLint v1_, GLint v2_, GLint v3_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform4i"));
(*fun)(location_,v0_,v1_,v2_,v3_);
AfterProcess("glUniform4i");

}
GLAPI void APIENTRY glUniform1fv (GLint location_, GLsizei count_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform1fv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform1fv");

}
GLAPI void APIENTRY glUniform2fv (GLint location_, GLsizei count_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform2fv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform2fv");

}
GLAPI void APIENTRY glUniform3fv (GLint location_, GLsizei count_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform3fv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform3fv");

}
GLAPI void APIENTRY glUniform4fv (GLint location_, GLsizei count_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform4fv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform4fv");

}
GLAPI void APIENTRY glUniform1iv (GLint location_, GLsizei count_, const GLint *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform1iv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform1iv");

}
GLAPI void APIENTRY glUniform2iv (GLint location_, GLsizei count_, const GLint *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform2iv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform2iv");

}
GLAPI void APIENTRY glUniform3iv (GLint location_, GLsizei count_, const GLint *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform3iv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform3iv");

}
GLAPI void APIENTRY glUniform4iv (GLint location_, GLsizei count_, const GLint *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform4iv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform4iv");

}
GLAPI void APIENTRY glUniformMatrix2fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix2fv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix2fv");

}
GLAPI void APIENTRY glUniformMatrix3fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix3fv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix3fv");

}
GLAPI void APIENTRY glUniformMatrix4fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix4fv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix4fv");

}
GLAPI void APIENTRY glValidateProgram (GLuint program_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glValidateProgram"));
(*fun)(program_);
AfterProcess("glValidateProgram");

}
GLAPI void APIENTRY glVertexAttrib1d (GLuint index_, GLdouble x_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLdouble x_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib1d"));
(*fun)(index_,x_);
AfterProcess("glVertexAttrib1d");

}
GLAPI void APIENTRY glVertexAttrib1dv (GLuint index_, const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib1dv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib1dv");

}
GLAPI void APIENTRY glVertexAttrib1f (GLuint index_, GLfloat x_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLfloat x_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib1f"));
(*fun)(index_,x_);
AfterProcess("glVertexAttrib1f");

}
GLAPI void APIENTRY glVertexAttrib1fv (GLuint index_, const GLfloat *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLfloat *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib1fv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib1fv");

}
GLAPI void APIENTRY glVertexAttrib1s (GLuint index_, GLshort x_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLshort x_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib1s"));
(*fun)(index_,x_);
AfterProcess("glVertexAttrib1s");

}
GLAPI void APIENTRY glVertexAttrib1sv (GLuint index_, const GLshort *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLshort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib1sv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib1sv");

}
GLAPI void APIENTRY glVertexAttrib2d (GLuint index_, GLdouble x_, GLdouble y_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLdouble x_, GLdouble y_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib2d"));
(*fun)(index_,x_,y_);
AfterProcess("glVertexAttrib2d");

}
GLAPI void APIENTRY glVertexAttrib2dv (GLuint index_, const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib2dv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib2dv");

}
GLAPI void APIENTRY glVertexAttrib2f (GLuint index_, GLfloat x_, GLfloat y_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLfloat x_, GLfloat y_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib2f"));
(*fun)(index_,x_,y_);
AfterProcess("glVertexAttrib2f");

}
GLAPI void APIENTRY glVertexAttrib2fv (GLuint index_, const GLfloat *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLfloat *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib2fv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib2fv");

}
GLAPI void APIENTRY glVertexAttrib2s (GLuint index_, GLshort x_, GLshort y_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLshort x_, GLshort y_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib2s"));
(*fun)(index_,x_,y_);
AfterProcess("glVertexAttrib2s");

}
GLAPI void APIENTRY glVertexAttrib2sv (GLuint index_, const GLshort *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLshort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib2sv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib2sv");

}
GLAPI void APIENTRY glVertexAttrib3d (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib3d"));
(*fun)(index_,x_,y_,z_);
AfterProcess("glVertexAttrib3d");

}
GLAPI void APIENTRY glVertexAttrib3dv (GLuint index_, const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib3dv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib3dv");

}
GLAPI void APIENTRY glVertexAttrib3f (GLuint index_, GLfloat x_, GLfloat y_, GLfloat z_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLfloat x_, GLfloat y_, GLfloat z_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib3f"));
(*fun)(index_,x_,y_,z_);
AfterProcess("glVertexAttrib3f");

}
GLAPI void APIENTRY glVertexAttrib3fv (GLuint index_, const GLfloat *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLfloat *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib3fv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib3fv");

}
GLAPI void APIENTRY glVertexAttrib3s (GLuint index_, GLshort x_, GLshort y_, GLshort z_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLshort x_, GLshort y_, GLshort z_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib3s"));
(*fun)(index_,x_,y_,z_);
AfterProcess("glVertexAttrib3s");

}
GLAPI void APIENTRY glVertexAttrib3sv (GLuint index_, const GLshort *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLshort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib3sv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib3sv");

}
GLAPI void APIENTRY glVertexAttrib4Nbv (GLuint index_, const GLbyte *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLbyte *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4Nbv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib4Nbv");

}
GLAPI void APIENTRY glVertexAttrib4Niv (GLuint index_, const GLint *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4Niv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib4Niv");

}
GLAPI void APIENTRY glVertexAttrib4Nsv (GLuint index_, const GLshort *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLshort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4Nsv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib4Nsv");

}
GLAPI void APIENTRY glVertexAttrib4Nub (GLuint index_, GLubyte x_, GLubyte y_, GLubyte z_, GLubyte w_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLubyte x_, GLubyte y_, GLubyte z_, GLubyte w_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4Nub"));
(*fun)(index_,x_,y_,z_,w_);
AfterProcess("glVertexAttrib4Nub");

}
GLAPI void APIENTRY glVertexAttrib4Nubv (GLuint index_, const GLubyte *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLubyte *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4Nubv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib4Nubv");

}
GLAPI void APIENTRY glVertexAttrib4Nuiv (GLuint index_, const GLuint *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLuint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4Nuiv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib4Nuiv");

}
GLAPI void APIENTRY glVertexAttrib4Nusv (GLuint index_, const GLushort *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLushort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4Nusv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib4Nusv");

}
GLAPI void APIENTRY glVertexAttrib4bv (GLuint index_, const GLbyte *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLbyte *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4bv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib4bv");

}
GLAPI void APIENTRY glVertexAttrib4d (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4d"));
(*fun)(index_,x_,y_,z_,w_);
AfterProcess("glVertexAttrib4d");

}
GLAPI void APIENTRY glVertexAttrib4dv (GLuint index_, const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4dv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib4dv");

}
GLAPI void APIENTRY glVertexAttrib4f (GLuint index_, GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4f"));
(*fun)(index_,x_,y_,z_,w_);
AfterProcess("glVertexAttrib4f");

}
GLAPI void APIENTRY glVertexAttrib4fv (GLuint index_, const GLfloat *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLfloat *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4fv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib4fv");

}
GLAPI void APIENTRY glVertexAttrib4iv (GLuint index_, const GLint *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4iv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib4iv");

}
GLAPI void APIENTRY glVertexAttrib4s (GLuint index_, GLshort x_, GLshort y_, GLshort z_, GLshort w_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLshort x_, GLshort y_, GLshort z_, GLshort w_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4s"));
(*fun)(index_,x_,y_,z_,w_);
AfterProcess("glVertexAttrib4s");

}
GLAPI void APIENTRY glVertexAttrib4sv (GLuint index_, const GLshort *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLshort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4sv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib4sv");

}
GLAPI void APIENTRY glVertexAttrib4ubv (GLuint index_, const GLubyte *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLubyte *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4ubv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib4ubv");

}
GLAPI void APIENTRY glVertexAttrib4uiv (GLuint index_, const GLuint *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLuint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4uiv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib4uiv");

}
GLAPI void APIENTRY glVertexAttrib4usv (GLuint index_, const GLushort *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLushort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttrib4usv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttrib4usv");

}
GLAPI void APIENTRY glVertexAttribPointer (GLuint index_, GLint size_, GLenum type_, GLboolean normalized_, GLsizei stride_, const void *pointer_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLint size_, GLenum type_, GLboolean normalized_, GLsizei stride_, const void *pointer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribPointer"));
(*fun)(index_,size_,type_,normalized_,stride_,pointer_);
AfterProcess("glVertexAttribPointer");

}
#endif /* GL_VERSION_2_0 */

#ifdef GL_VERSION_2_1
GLAPI void APIENTRY glUniformMatrix2x3fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix2x3fv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix2x3fv");

}
GLAPI void APIENTRY glUniformMatrix3x2fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix3x2fv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix3x2fv");

}
GLAPI void APIENTRY glUniformMatrix2x4fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix2x4fv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix2x4fv");

}
GLAPI void APIENTRY glUniformMatrix4x2fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix4x2fv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix4x2fv");

}
GLAPI void APIENTRY glUniformMatrix3x4fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix3x4fv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix3x4fv");

}
GLAPI void APIENTRY glUniformMatrix4x3fv (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix4x3fv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix4x3fv");

}
#endif /* GL_VERSION_2_1 */

#ifdef GL_VERSION_3_0
GLAPI void APIENTRY glColorMaski (GLuint index_, GLboolean r_, GLboolean g_, GLboolean b_, GLboolean a_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLboolean r_, GLboolean g_, GLboolean b_, GLboolean a_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glColorMaski"));
(*fun)(index_,r_,g_,b_,a_);
AfterProcess("glColorMaski");

}
GLAPI void APIENTRY glGetBooleani_v (GLenum target_, GLuint index_, GLboolean *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint index_, GLboolean *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetBooleani_v"));
(*fun)(target_,index_,data_);
AfterProcess("glGetBooleani_v");

}
GLAPI void APIENTRY glGetIntegeri_v (GLenum target_, GLuint index_, GLint *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint index_, GLint *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetIntegeri_v"));
(*fun)(target_,index_,data_);
AfterProcess("glGetIntegeri_v");

}
GLAPI void APIENTRY glEnablei (GLenum target_, GLuint index_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint index_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glEnablei"));
(*fun)(target_,index_);
AfterProcess("glEnablei");

}
GLAPI void APIENTRY glDisablei (GLenum target_, GLuint index_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint index_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDisablei"));
(*fun)(target_,index_);
AfterProcess("glDisablei");

}
GLAPI GLboolean APIENTRY glIsEnabledi (GLenum target_, GLuint index_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLenum target_, GLuint index_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsEnabledi"));
GLboolean returnValue = (*fun)(target_,index_);
AfterProcess("glIsEnabledi");
return returnValue;
}
GLAPI void APIENTRY glBeginTransformFeedback (GLenum primitiveMode_)
{
typedef void (INTER_CALL *FUNC) (GLenum primitiveMode_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBeginTransformFeedback"));
(*fun)(primitiveMode_);
AfterProcess("glBeginTransformFeedback");

}
GLAPI void APIENTRY glEndTransformFeedback (void)
{
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glEndTransformFeedback"));
(*fun)();
AfterProcess("glEndTransformFeedback");

}
GLAPI void APIENTRY glBindBufferRange (GLenum target_, GLuint index_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint index_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindBufferRange"));
(*fun)(target_,index_,buffer_,offset_,size_);
AfterProcess("glBindBufferRange");

}
GLAPI void APIENTRY glBindBufferBase (GLenum target_, GLuint index_, GLuint buffer_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint index_, GLuint buffer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindBufferBase"));
(*fun)(target_,index_,buffer_);
AfterProcess("glBindBufferBase");

}
GLAPI void APIENTRY glTransformFeedbackVaryings (GLuint program_, GLsizei count_, const GLchar *const*varyings_, GLenum bufferMode_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLsizei count_, const GLchar *const*varyings_, GLenum bufferMode_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTransformFeedbackVaryings"));
(*fun)(program_,count_,varyings_,bufferMode_);
AfterProcess("glTransformFeedbackVaryings");

}
GLAPI void APIENTRY glGetTransformFeedbackVarying (GLuint program_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLsizei *size_, GLenum *type_, GLchar *name_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLsizei *size_, GLenum *type_, GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTransformFeedbackVarying"));
(*fun)(program_,index_,bufSize_,length_,size_,type_,name_);
AfterProcess("glGetTransformFeedbackVarying");

}
GLAPI void APIENTRY glClampColor (GLenum target_, GLenum clamp_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum clamp_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClampColor"));
(*fun)(target_,clamp_);
AfterProcess("glClampColor");

}
GLAPI void APIENTRY glBeginConditionalRender (GLuint id_, GLenum mode_)
{
typedef void (INTER_CALL *FUNC) (GLuint id_, GLenum mode_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBeginConditionalRender"));
(*fun)(id_,mode_);
AfterProcess("glBeginConditionalRender");

}
GLAPI void APIENTRY glEndConditionalRender (void)
{
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glEndConditionalRender"));
(*fun)();
AfterProcess("glEndConditionalRender");

}
GLAPI void APIENTRY glVertexAttribIPointer (GLuint index_, GLint size_, GLenum type_, GLsizei stride_, const void *pointer_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribIPointer"));
(*fun)(index_,size_,type_,stride_,pointer_);
AfterProcess("glVertexAttribIPointer");

}
GLAPI void APIENTRY glGetVertexAttribIiv (GLuint index_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetVertexAttribIiv"));
(*fun)(index_,pname_,params_);
AfterProcess("glGetVertexAttribIiv");

}
GLAPI void APIENTRY glGetVertexAttribIuiv (GLuint index_, GLenum pname_, GLuint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum pname_, GLuint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetVertexAttribIuiv"));
(*fun)(index_,pname_,params_);
AfterProcess("glGetVertexAttribIuiv");

}
GLAPI void APIENTRY glVertexAttribI1i (GLuint index_, GLint x_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLint x_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI1i"));
(*fun)(index_,x_);
AfterProcess("glVertexAttribI1i");

}
GLAPI void APIENTRY glVertexAttribI2i (GLuint index_, GLint x_, GLint y_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLint x_, GLint y_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI2i"));
(*fun)(index_,x_,y_);
AfterProcess("glVertexAttribI2i");

}
GLAPI void APIENTRY glVertexAttribI3i (GLuint index_, GLint x_, GLint y_, GLint z_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLint x_, GLint y_, GLint z_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI3i"));
(*fun)(index_,x_,y_,z_);
AfterProcess("glVertexAttribI3i");

}
GLAPI void APIENTRY glVertexAttribI4i (GLuint index_, GLint x_, GLint y_, GLint z_, GLint w_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLint x_, GLint y_, GLint z_, GLint w_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI4i"));
(*fun)(index_,x_,y_,z_,w_);
AfterProcess("glVertexAttribI4i");

}
GLAPI void APIENTRY glVertexAttribI1ui (GLuint index_, GLuint x_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLuint x_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI1ui"));
(*fun)(index_,x_);
AfterProcess("glVertexAttribI1ui");

}
GLAPI void APIENTRY glVertexAttribI2ui (GLuint index_, GLuint x_, GLuint y_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLuint x_, GLuint y_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI2ui"));
(*fun)(index_,x_,y_);
AfterProcess("glVertexAttribI2ui");

}
GLAPI void APIENTRY glVertexAttribI3ui (GLuint index_, GLuint x_, GLuint y_, GLuint z_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLuint x_, GLuint y_, GLuint z_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI3ui"));
(*fun)(index_,x_,y_,z_);
AfterProcess("glVertexAttribI3ui");

}
GLAPI void APIENTRY glVertexAttribI4ui (GLuint index_, GLuint x_, GLuint y_, GLuint z_, GLuint w_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLuint x_, GLuint y_, GLuint z_, GLuint w_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI4ui"));
(*fun)(index_,x_,y_,z_,w_);
AfterProcess("glVertexAttribI4ui");

}
GLAPI void APIENTRY glVertexAttribI1iv (GLuint index_, const GLint *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI1iv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribI1iv");

}
GLAPI void APIENTRY glVertexAttribI2iv (GLuint index_, const GLint *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI2iv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribI2iv");

}
GLAPI void APIENTRY glVertexAttribI3iv (GLuint index_, const GLint *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI3iv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribI3iv");

}
GLAPI void APIENTRY glVertexAttribI4iv (GLuint index_, const GLint *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI4iv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribI4iv");

}
GLAPI void APIENTRY glVertexAttribI1uiv (GLuint index_, const GLuint *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLuint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI1uiv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribI1uiv");

}
GLAPI void APIENTRY glVertexAttribI2uiv (GLuint index_, const GLuint *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLuint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI2uiv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribI2uiv");

}
GLAPI void APIENTRY glVertexAttribI3uiv (GLuint index_, const GLuint *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLuint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI3uiv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribI3uiv");

}
GLAPI void APIENTRY glVertexAttribI4uiv (GLuint index_, const GLuint *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLuint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI4uiv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribI4uiv");

}
GLAPI void APIENTRY glVertexAttribI4bv (GLuint index_, const GLbyte *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLbyte *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI4bv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribI4bv");

}
GLAPI void APIENTRY glVertexAttribI4sv (GLuint index_, const GLshort *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLshort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI4sv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribI4sv");

}
GLAPI void APIENTRY glVertexAttribI4ubv (GLuint index_, const GLubyte *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLubyte *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI4ubv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribI4ubv");

}
GLAPI void APIENTRY glVertexAttribI4usv (GLuint index_, const GLushort *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLushort *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribI4usv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribI4usv");

}
GLAPI void APIENTRY glGetUniformuiv (GLuint program_, GLint location_, GLuint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLuint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetUniformuiv"));
(*fun)(program_,location_,params_);
AfterProcess("glGetUniformuiv");

}
GLAPI void APIENTRY glBindFragDataLocation (GLuint program_, GLuint color_, const GLchar *name_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLuint color_, const GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindFragDataLocation"));
(*fun)(program_,color_,name_);
AfterProcess("glBindFragDataLocation");

}
GLAPI GLint APIENTRY glGetFragDataLocation (GLuint program_, const GLchar *name_)
{
typedef GLint (INTER_CALL *FUNC) (GLuint program_, const GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetFragDataLocation"));
GLint returnValue = (*fun)(program_,name_);
AfterProcess("glGetFragDataLocation");
return returnValue;
}
GLAPI void APIENTRY glUniform1ui (GLint location_, GLuint v0_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLuint v0_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform1ui"));
(*fun)(location_,v0_);
AfterProcess("glUniform1ui");

}
GLAPI void APIENTRY glUniform2ui (GLint location_, GLuint v0_, GLuint v1_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLuint v0_, GLuint v1_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform2ui"));
(*fun)(location_,v0_,v1_);
AfterProcess("glUniform2ui");

}
GLAPI void APIENTRY glUniform3ui (GLint location_, GLuint v0_, GLuint v1_, GLuint v2_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLuint v0_, GLuint v1_, GLuint v2_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform3ui"));
(*fun)(location_,v0_,v1_,v2_);
AfterProcess("glUniform3ui");

}
GLAPI void APIENTRY glUniform4ui (GLint location_, GLuint v0_, GLuint v1_, GLuint v2_, GLuint v3_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLuint v0_, GLuint v1_, GLuint v2_, GLuint v3_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform4ui"));
(*fun)(location_,v0_,v1_,v2_,v3_);
AfterProcess("glUniform4ui");

}
GLAPI void APIENTRY glUniform1uiv (GLint location_, GLsizei count_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform1uiv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform1uiv");

}
GLAPI void APIENTRY glUniform2uiv (GLint location_, GLsizei count_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform2uiv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform2uiv");

}
GLAPI void APIENTRY glUniform3uiv (GLint location_, GLsizei count_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform3uiv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform3uiv");

}
GLAPI void APIENTRY glUniform4uiv (GLint location_, GLsizei count_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform4uiv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform4uiv");

}
GLAPI void APIENTRY glTexParameterIiv (GLenum target_, GLenum pname_, const GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, const GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexParameterIiv"));
(*fun)(target_,pname_,params_);
AfterProcess("glTexParameterIiv");

}
GLAPI void APIENTRY glTexParameterIuiv (GLenum target_, GLenum pname_, const GLuint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, const GLuint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexParameterIuiv"));
(*fun)(target_,pname_,params_);
AfterProcess("glTexParameterIuiv");

}
GLAPI void APIENTRY glGetTexParameterIiv (GLenum target_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTexParameterIiv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetTexParameterIiv");

}
GLAPI void APIENTRY glGetTexParameterIuiv (GLenum target_, GLenum pname_, GLuint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLuint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTexParameterIuiv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetTexParameterIuiv");

}
GLAPI void APIENTRY glClearBufferiv (GLenum buffer_, GLint drawbuffer_, const GLint *value_)
{
typedef void (INTER_CALL *FUNC) (GLenum buffer_, GLint drawbuffer_, const GLint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClearBufferiv"));
(*fun)(buffer_,drawbuffer_,value_);
AfterProcess("glClearBufferiv");

}
GLAPI void APIENTRY glClearBufferuiv (GLenum buffer_, GLint drawbuffer_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLenum buffer_, GLint drawbuffer_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClearBufferuiv"));
(*fun)(buffer_,drawbuffer_,value_);
AfterProcess("glClearBufferuiv");

}
GLAPI void APIENTRY glClearBufferfv (GLenum buffer_, GLint drawbuffer_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLenum buffer_, GLint drawbuffer_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClearBufferfv"));
(*fun)(buffer_,drawbuffer_,value_);
AfterProcess("glClearBufferfv");

}
GLAPI void APIENTRY glClearBufferfi (GLenum buffer_, GLint drawbuffer_, GLfloat depth_, GLint stencil_)
{
typedef void (INTER_CALL *FUNC) (GLenum buffer_, GLint drawbuffer_, GLfloat depth_, GLint stencil_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClearBufferfi"));
(*fun)(buffer_,drawbuffer_,depth_,stencil_);
AfterProcess("glClearBufferfi");

}
GLAPI const GLubyte *APIENTRY glGetStringi (GLenum name_, GLuint index_)
{
typedef const GLubyte *(INTER_CALL *FUNC) (GLenum name_, GLuint index_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetStringi"));
const GLubyte *returnValue = (*fun)(name_,index_);
AfterProcess("glGetStringi");
return returnValue;
}
GLAPI GLboolean APIENTRY glIsRenderbuffer (GLuint renderbuffer_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLuint renderbuffer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsRenderbuffer"));
GLboolean returnValue = (*fun)(renderbuffer_);
AfterProcess("glIsRenderbuffer");
return returnValue;
}
GLAPI void APIENTRY glBindRenderbuffer (GLenum target_, GLuint renderbuffer_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint renderbuffer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindRenderbuffer"));
(*fun)(target_,renderbuffer_);
AfterProcess("glBindRenderbuffer");

}
GLAPI void APIENTRY glDeleteRenderbuffers (GLsizei n_, const GLuint *renderbuffers_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, const GLuint *renderbuffers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDeleteRenderbuffers"));
(*fun)(n_,renderbuffers_);
AfterProcess("glDeleteRenderbuffers");

}
GLAPI void APIENTRY glGenRenderbuffers (GLsizei n_, GLuint *renderbuffers_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLuint *renderbuffers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGenRenderbuffers"));
(*fun)(n_,renderbuffers_);
AfterProcess("glGenRenderbuffers");

}
GLAPI void APIENTRY glRenderbufferStorage (GLenum target_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum internalformat_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glRenderbufferStorage"));
(*fun)(target_,internalformat_,width_,height_);
AfterProcess("glRenderbufferStorage");

}
GLAPI void APIENTRY glGetRenderbufferParameteriv (GLenum target_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetRenderbufferParameteriv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetRenderbufferParameteriv");

}
GLAPI GLboolean APIENTRY glIsFramebuffer (GLuint framebuffer_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLuint framebuffer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsFramebuffer"));
GLboolean returnValue = (*fun)(framebuffer_);
AfterProcess("glIsFramebuffer");
return returnValue;
}
GLAPI void APIENTRY glBindFramebuffer (GLenum target_, GLuint framebuffer_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint framebuffer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindFramebuffer"));
(*fun)(target_,framebuffer_);
AfterProcess("glBindFramebuffer");

}
GLAPI void APIENTRY glDeleteFramebuffers (GLsizei n_, const GLuint *framebuffers_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, const GLuint *framebuffers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDeleteFramebuffers"));
(*fun)(n_,framebuffers_);
AfterProcess("glDeleteFramebuffers");

}
GLAPI void APIENTRY glGenFramebuffers (GLsizei n_, GLuint *framebuffers_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLuint *framebuffers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGenFramebuffers"));
(*fun)(n_,framebuffers_);
AfterProcess("glGenFramebuffers");

}
GLAPI GLenum APIENTRY glCheckFramebufferStatus (GLenum target_)
{
typedef GLenum (INTER_CALL *FUNC) (GLenum target_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCheckFramebufferStatus"));
GLenum returnValue = (*fun)(target_);
AfterProcess("glCheckFramebufferStatus");
return returnValue;
}
GLAPI void APIENTRY glFramebufferTexture1D (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glFramebufferTexture1D"));
(*fun)(target_,attachment_,textarget_,texture_,level_);
AfterProcess("glFramebufferTexture1D");

}
GLAPI void APIENTRY glFramebufferTexture2D (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glFramebufferTexture2D"));
(*fun)(target_,attachment_,textarget_,texture_,level_);
AfterProcess("glFramebufferTexture2D");

}
GLAPI void APIENTRY glFramebufferTexture3D (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_, GLint zoffset_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_, GLint zoffset_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glFramebufferTexture3D"));
(*fun)(target_,attachment_,textarget_,texture_,level_,zoffset_);
AfterProcess("glFramebufferTexture3D");

}
GLAPI void APIENTRY glFramebufferRenderbuffer (GLenum target_, GLenum attachment_, GLenum renderbuffertarget_, GLuint renderbuffer_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum attachment_, GLenum renderbuffertarget_, GLuint renderbuffer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glFramebufferRenderbuffer"));
(*fun)(target_,attachment_,renderbuffertarget_,renderbuffer_);
AfterProcess("glFramebufferRenderbuffer");

}
GLAPI void APIENTRY glGetFramebufferAttachmentParameteriv (GLenum target_, GLenum attachment_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum attachment_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetFramebufferAttachmentParameteriv"));
(*fun)(target_,attachment_,pname_,params_);
AfterProcess("glGetFramebufferAttachmentParameteriv");

}
GLAPI void APIENTRY glGenerateMipmap (GLenum target_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGenerateMipmap"));
(*fun)(target_);
AfterProcess("glGenerateMipmap");

}
GLAPI void APIENTRY glBlitFramebuffer (GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_)
{
typedef void (INTER_CALL *FUNC) (GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBlitFramebuffer"));
(*fun)(srcX0_,srcY0_,srcX1_,srcY1_,dstX0_,dstY0_,dstX1_,dstY1_,mask_,filter_);
AfterProcess("glBlitFramebuffer");

}
GLAPI void APIENTRY glRenderbufferStorageMultisample (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glRenderbufferStorageMultisample"));
(*fun)(target_,samples_,internalformat_,width_,height_);
AfterProcess("glRenderbufferStorageMultisample");

}
GLAPI void APIENTRY glFramebufferTextureLayer (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_, GLint layer_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_, GLint layer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glFramebufferTextureLayer"));
(*fun)(target_,attachment_,texture_,level_,layer_);
AfterProcess("glFramebufferTextureLayer");

}
GLAPI void *APIENTRY glMapBufferRange (GLenum target_, GLintptr offset_, GLsizeiptr length_, GLbitfield access_)
{
typedef void *(INTER_CALL *FUNC) (GLenum target_, GLintptr offset_, GLsizeiptr length_, GLbitfield access_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMapBufferRange"));
void *returnValue = (*fun)(target_,offset_,length_,access_);
AfterProcess("glMapBufferRange");
return returnValue;
}
GLAPI void APIENTRY glFlushMappedBufferRange (GLenum target_, GLintptr offset_, GLsizeiptr length_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLintptr offset_, GLsizeiptr length_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glFlushMappedBufferRange"));
(*fun)(target_,offset_,length_);
AfterProcess("glFlushMappedBufferRange");

}
GLAPI void APIENTRY glBindVertexArray (GLuint array_)
{
typedef void (INTER_CALL *FUNC) (GLuint array_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindVertexArray"));
(*fun)(array_);
AfterProcess("glBindVertexArray");

}
GLAPI void APIENTRY glDeleteVertexArrays (GLsizei n_, const GLuint *arrays_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, const GLuint *arrays_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDeleteVertexArrays"));
(*fun)(n_,arrays_);
AfterProcess("glDeleteVertexArrays");

}
GLAPI void APIENTRY glGenVertexArrays (GLsizei n_, GLuint *arrays_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLuint *arrays_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGenVertexArrays"));
(*fun)(n_,arrays_);
AfterProcess("glGenVertexArrays");

}
GLAPI GLboolean APIENTRY glIsVertexArray (GLuint array_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLuint array_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsVertexArray"));
GLboolean returnValue = (*fun)(array_);
AfterProcess("glIsVertexArray");
return returnValue;
}
#endif /* GL_VERSION_3_0 */

#ifdef GL_VERSION_3_1
GLAPI void APIENTRY glDrawArraysInstanced (GLenum mode_, GLint first_, GLsizei count_, GLsizei instancecount_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLint first_, GLsizei count_, GLsizei instancecount_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawArraysInstanced"));
(*fun)(mode_,first_,count_,instancecount_);
AfterProcess("glDrawArraysInstanced");

}
GLAPI void APIENTRY glDrawElementsInstanced (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawElementsInstanced"));
(*fun)(mode_,count_,type_,indices_,instancecount_);
AfterProcess("glDrawElementsInstanced");

}
GLAPI void APIENTRY glTexBuffer (GLenum target_, GLenum internalformat_, GLuint buffer_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum internalformat_, GLuint buffer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexBuffer"));
(*fun)(target_,internalformat_,buffer_);
AfterProcess("glTexBuffer");

}
GLAPI void APIENTRY glPrimitiveRestartIndex (GLuint index_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glPrimitiveRestartIndex"));
(*fun)(index_);
AfterProcess("glPrimitiveRestartIndex");

}
GLAPI void APIENTRY glCopyBufferSubData (GLenum readTarget_, GLenum writeTarget_, GLintptr readOffset_, GLintptr writeOffset_, GLsizeiptr size_)
{
typedef void (INTER_CALL *FUNC) (GLenum readTarget_, GLenum writeTarget_, GLintptr readOffset_, GLintptr writeOffset_, GLsizeiptr size_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCopyBufferSubData"));
(*fun)(readTarget_,writeTarget_,readOffset_,writeOffset_,size_);
AfterProcess("glCopyBufferSubData");

}
GLAPI void APIENTRY glGetUniformIndices (GLuint program_, GLsizei uniformCount_, const GLchar *const*uniformNames_, GLuint *uniformIndices_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLsizei uniformCount_, const GLchar *const*uniformNames_, GLuint *uniformIndices_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetUniformIndices"));
(*fun)(program_,uniformCount_,uniformNames_,uniformIndices_);
AfterProcess("glGetUniformIndices");

}
GLAPI void APIENTRY glGetActiveUniformsiv (GLuint program_, GLsizei uniformCount_, const GLuint *uniformIndices_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLsizei uniformCount_, const GLuint *uniformIndices_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetActiveUniformsiv"));
(*fun)(program_,uniformCount_,uniformIndices_,pname_,params_);
AfterProcess("glGetActiveUniformsiv");

}
GLAPI void APIENTRY glGetActiveUniformName (GLuint program_, GLuint uniformIndex_, GLsizei bufSize_, GLsizei *length_, GLchar *uniformName_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLuint uniformIndex_, GLsizei bufSize_, GLsizei *length_, GLchar *uniformName_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetActiveUniformName"));
(*fun)(program_,uniformIndex_,bufSize_,length_,uniformName_);
AfterProcess("glGetActiveUniformName");

}
GLAPI GLuint APIENTRY glGetUniformBlockIndex (GLuint program_, const GLchar *uniformBlockName_)
{
typedef GLuint (INTER_CALL *FUNC) (GLuint program_, const GLchar *uniformBlockName_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetUniformBlockIndex"));
GLuint returnValue = (*fun)(program_,uniformBlockName_);
AfterProcess("glGetUniformBlockIndex");
return returnValue;
}
GLAPI void APIENTRY glGetActiveUniformBlockiv (GLuint program_, GLuint uniformBlockIndex_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLuint uniformBlockIndex_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetActiveUniformBlockiv"));
(*fun)(program_,uniformBlockIndex_,pname_,params_);
AfterProcess("glGetActiveUniformBlockiv");

}
GLAPI void APIENTRY glGetActiveUniformBlockName (GLuint program_, GLuint uniformBlockIndex_, GLsizei bufSize_, GLsizei *length_, GLchar *uniformBlockName_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLuint uniformBlockIndex_, GLsizei bufSize_, GLsizei *length_, GLchar *uniformBlockName_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetActiveUniformBlockName"));
(*fun)(program_,uniformBlockIndex_,bufSize_,length_,uniformBlockName_);
AfterProcess("glGetActiveUniformBlockName");

}
GLAPI void APIENTRY glUniformBlockBinding (GLuint program_, GLuint uniformBlockIndex_, GLuint uniformBlockBinding_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLuint uniformBlockIndex_, GLuint uniformBlockBinding_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformBlockBinding"));
(*fun)(program_,uniformBlockIndex_,uniformBlockBinding_);
AfterProcess("glUniformBlockBinding");

}
#endif /* GL_VERSION_3_1 */

#ifdef GL_VERSION_3_2
GLAPI void APIENTRY glDrawElementsBaseVertex (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawElementsBaseVertex"));
(*fun)(mode_,count_,type_,indices_,basevertex_);
AfterProcess("glDrawElementsBaseVertex");

}
GLAPI void APIENTRY glDrawRangeElementsBaseVertex (GLenum mode_, GLuint start_, GLuint end_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLuint start_, GLuint end_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawRangeElementsBaseVertex"));
(*fun)(mode_,start_,end_,count_,type_,indices_,basevertex_);
AfterProcess("glDrawRangeElementsBaseVertex");

}
GLAPI void APIENTRY glDrawElementsInstancedBaseVertex (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLint basevertex_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLint basevertex_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawElementsInstancedBaseVertex"));
(*fun)(mode_,count_,type_,indices_,instancecount_,basevertex_);
AfterProcess("glDrawElementsInstancedBaseVertex");

}
GLAPI void APIENTRY glMultiDrawElementsBaseVertex (GLenum mode_, const GLsizei *count_, GLenum type_, const void *const*indices_, GLsizei drawcount_, const GLint *basevertex_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, const GLsizei *count_, GLenum type_, const void *const*indices_, GLsizei drawcount_, const GLint *basevertex_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiDrawElementsBaseVertex"));
(*fun)(mode_,count_,type_,indices_,drawcount_,basevertex_);
AfterProcess("glMultiDrawElementsBaseVertex");

}
GLAPI void APIENTRY glProvokingVertex (GLenum mode_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProvokingVertex"));
(*fun)(mode_);
AfterProcess("glProvokingVertex");

}
GLAPI GLsync APIENTRY glFenceSync (GLenum condition_, GLbitfield flags_)
{
typedef GLsync (INTER_CALL *FUNC) (GLenum condition_, GLbitfield flags_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glFenceSync"));
GLsync returnValue = (*fun)(condition_,flags_);
AfterProcess("glFenceSync");
return returnValue;
}
GLAPI GLboolean APIENTRY glIsSync (GLsync sync_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLsync sync_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsSync"));
GLboolean returnValue = (*fun)(sync_);
AfterProcess("glIsSync");
return returnValue;
}
GLAPI void APIENTRY glDeleteSync (GLsync sync_)
{
typedef void (INTER_CALL *FUNC) (GLsync sync_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDeleteSync"));
(*fun)(sync_);
AfterProcess("glDeleteSync");

}
GLAPI GLenum APIENTRY glClientWaitSync (GLsync sync_, GLbitfield flags_, GLuint64 timeout_)
{
typedef GLenum (INTER_CALL *FUNC) (GLsync sync_, GLbitfield flags_, GLuint64 timeout_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClientWaitSync"));
GLenum returnValue = (*fun)(sync_,flags_,timeout_);
AfterProcess("glClientWaitSync");
return returnValue;
}
GLAPI void APIENTRY glWaitSync (GLsync sync_, GLbitfield flags_, GLuint64 timeout_)
{
typedef void (INTER_CALL *FUNC) (GLsync sync_, GLbitfield flags_, GLuint64 timeout_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glWaitSync"));
(*fun)(sync_,flags_,timeout_);
AfterProcess("glWaitSync");

}
GLAPI void APIENTRY glGetInteger64v (GLenum pname_, GLint64 *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLint64 *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetInteger64v"));
(*fun)(pname_,data_);
AfterProcess("glGetInteger64v");

}
GLAPI void APIENTRY glGetSynciv (GLsync sync_, GLenum pname_, GLsizei bufSize_, GLsizei *length_, GLint *values_)
{
typedef void (INTER_CALL *FUNC) (GLsync sync_, GLenum pname_, GLsizei bufSize_, GLsizei *length_, GLint *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetSynciv"));
(*fun)(sync_,pname_,bufSize_,length_,values_);
AfterProcess("glGetSynciv");

}
GLAPI void APIENTRY glGetInteger64i_v (GLenum target_, GLuint index_, GLint64 *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint index_, GLint64 *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetInteger64i_v"));
(*fun)(target_,index_,data_);
AfterProcess("glGetInteger64i_v");

}
GLAPI void APIENTRY glGetBufferParameteri64v (GLenum target_, GLenum pname_, GLint64 *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint64 *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetBufferParameteri64v"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetBufferParameteri64v");

}
GLAPI void APIENTRY glFramebufferTexture (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glFramebufferTexture"));
(*fun)(target_,attachment_,texture_,level_);
AfterProcess("glFramebufferTexture");

}
GLAPI void APIENTRY glTexImage2DMultisample (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexImage2DMultisample"));
(*fun)(target_,samples_,internalformat_,width_,height_,fixedsamplelocations_);
AfterProcess("glTexImage2DMultisample");

}
GLAPI void APIENTRY glTexImage3DMultisample (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexImage3DMultisample"));
(*fun)(target_,samples_,internalformat_,width_,height_,depth_,fixedsamplelocations_);
AfterProcess("glTexImage3DMultisample");

}
GLAPI void APIENTRY glGetMultisamplefv (GLenum pname_, GLuint index_, GLfloat *val_)
{
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLuint index_, GLfloat *val_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetMultisamplefv"));
(*fun)(pname_,index_,val_);
AfterProcess("glGetMultisamplefv");

}
GLAPI void APIENTRY glSampleMaski (GLuint maskNumber_, GLbitfield mask_)
{
typedef void (INTER_CALL *FUNC) (GLuint maskNumber_, GLbitfield mask_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSampleMaski"));
(*fun)(maskNumber_,mask_);
AfterProcess("glSampleMaski");

}
#endif /* GL_VERSION_3_2 */

#ifdef GL_VERSION_3_3
GLAPI void APIENTRY glBindFragDataLocationIndexed (GLuint program_, GLuint colorNumber_, GLuint index_, const GLchar *name_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLuint colorNumber_, GLuint index_, const GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindFragDataLocationIndexed"));
(*fun)(program_,colorNumber_,index_,name_);
AfterProcess("glBindFragDataLocationIndexed");

}
GLAPI GLint APIENTRY glGetFragDataIndex (GLuint program_, const GLchar *name_)
{
typedef GLint (INTER_CALL *FUNC) (GLuint program_, const GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetFragDataIndex"));
GLint returnValue = (*fun)(program_,name_);
AfterProcess("glGetFragDataIndex");
return returnValue;
}
GLAPI void APIENTRY glGenSamplers (GLsizei count_, GLuint *samplers_)
{
typedef void (INTER_CALL *FUNC) (GLsizei count_, GLuint *samplers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGenSamplers"));
(*fun)(count_,samplers_);
AfterProcess("glGenSamplers");

}
GLAPI void APIENTRY glDeleteSamplers (GLsizei count_, const GLuint *samplers_)
{
typedef void (INTER_CALL *FUNC) (GLsizei count_, const GLuint *samplers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDeleteSamplers"));
(*fun)(count_,samplers_);
AfterProcess("glDeleteSamplers");

}
GLAPI GLboolean APIENTRY glIsSampler (GLuint sampler_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLuint sampler_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsSampler"));
GLboolean returnValue = (*fun)(sampler_);
AfterProcess("glIsSampler");
return returnValue;
}
GLAPI void APIENTRY glBindSampler (GLuint unit_, GLuint sampler_)
{
typedef void (INTER_CALL *FUNC) (GLuint unit_, GLuint sampler_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindSampler"));
(*fun)(unit_,sampler_);
AfterProcess("glBindSampler");

}
GLAPI void APIENTRY glSamplerParameteri (GLuint sampler_, GLenum pname_, GLint param_)
{
typedef void (INTER_CALL *FUNC) (GLuint sampler_, GLenum pname_, GLint param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSamplerParameteri"));
(*fun)(sampler_,pname_,param_);
AfterProcess("glSamplerParameteri");

}
GLAPI void APIENTRY glSamplerParameteriv (GLuint sampler_, GLenum pname_, const GLint *param_)
{
typedef void (INTER_CALL *FUNC) (GLuint sampler_, GLenum pname_, const GLint *param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSamplerParameteriv"));
(*fun)(sampler_,pname_,param_);
AfterProcess("glSamplerParameteriv");

}
GLAPI void APIENTRY glSamplerParameterf (GLuint sampler_, GLenum pname_, GLfloat param_)
{
typedef void (INTER_CALL *FUNC) (GLuint sampler_, GLenum pname_, GLfloat param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSamplerParameterf"));
(*fun)(sampler_,pname_,param_);
AfterProcess("glSamplerParameterf");

}
GLAPI void APIENTRY glSamplerParameterfv (GLuint sampler_, GLenum pname_, const GLfloat *param_)
{
typedef void (INTER_CALL *FUNC) (GLuint sampler_, GLenum pname_, const GLfloat *param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSamplerParameterfv"));
(*fun)(sampler_,pname_,param_);
AfterProcess("glSamplerParameterfv");

}
GLAPI void APIENTRY glSamplerParameterIiv (GLuint sampler_, GLenum pname_, const GLint *param_)
{
typedef void (INTER_CALL *FUNC) (GLuint sampler_, GLenum pname_, const GLint *param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSamplerParameterIiv"));
(*fun)(sampler_,pname_,param_);
AfterProcess("glSamplerParameterIiv");

}
GLAPI void APIENTRY glSamplerParameterIuiv (GLuint sampler_, GLenum pname_, const GLuint *param_)
{
typedef void (INTER_CALL *FUNC) (GLuint sampler_, GLenum pname_, const GLuint *param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSamplerParameterIuiv"));
(*fun)(sampler_,pname_,param_);
AfterProcess("glSamplerParameterIuiv");

}
GLAPI void APIENTRY glGetSamplerParameteriv (GLuint sampler_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint sampler_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetSamplerParameteriv"));
(*fun)(sampler_,pname_,params_);
AfterProcess("glGetSamplerParameteriv");

}
GLAPI void APIENTRY glGetSamplerParameterIiv (GLuint sampler_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint sampler_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetSamplerParameterIiv"));
(*fun)(sampler_,pname_,params_);
AfterProcess("glGetSamplerParameterIiv");

}
GLAPI void APIENTRY glGetSamplerParameterfv (GLuint sampler_, GLenum pname_, GLfloat *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint sampler_, GLenum pname_, GLfloat *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetSamplerParameterfv"));
(*fun)(sampler_,pname_,params_);
AfterProcess("glGetSamplerParameterfv");

}
GLAPI void APIENTRY glGetSamplerParameterIuiv (GLuint sampler_, GLenum pname_, GLuint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint sampler_, GLenum pname_, GLuint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetSamplerParameterIuiv"));
(*fun)(sampler_,pname_,params_);
AfterProcess("glGetSamplerParameterIuiv");

}
GLAPI void APIENTRY glQueryCounter (GLuint id_, GLenum target_)
{
typedef void (INTER_CALL *FUNC) (GLuint id_, GLenum target_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glQueryCounter"));
(*fun)(id_,target_);
AfterProcess("glQueryCounter");

}
GLAPI void APIENTRY glGetQueryObjecti64v (GLuint id_, GLenum pname_, GLint64 *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint id_, GLenum pname_, GLint64 *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetQueryObjecti64v"));
(*fun)(id_,pname_,params_);
AfterProcess("glGetQueryObjecti64v");

}
GLAPI void APIENTRY glGetQueryObjectui64v (GLuint id_, GLenum pname_, GLuint64 *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint id_, GLenum pname_, GLuint64 *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetQueryObjectui64v"));
(*fun)(id_,pname_,params_);
AfterProcess("glGetQueryObjectui64v");

}
GLAPI void APIENTRY glVertexAttribDivisor (GLuint index_, GLuint divisor_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLuint divisor_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribDivisor"));
(*fun)(index_,divisor_);
AfterProcess("glVertexAttribDivisor");

}
GLAPI void APIENTRY glVertexAttribP1ui (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribP1ui"));
(*fun)(index_,type_,normalized_,value_);
AfterProcess("glVertexAttribP1ui");

}
GLAPI void APIENTRY glVertexAttribP1uiv (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribP1uiv"));
(*fun)(index_,type_,normalized_,value_);
AfterProcess("glVertexAttribP1uiv");

}
GLAPI void APIENTRY glVertexAttribP2ui (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribP2ui"));
(*fun)(index_,type_,normalized_,value_);
AfterProcess("glVertexAttribP2ui");

}
GLAPI void APIENTRY glVertexAttribP2uiv (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribP2uiv"));
(*fun)(index_,type_,normalized_,value_);
AfterProcess("glVertexAttribP2uiv");

}
GLAPI void APIENTRY glVertexAttribP3ui (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribP3ui"));
(*fun)(index_,type_,normalized_,value_);
AfterProcess("glVertexAttribP3ui");

}
GLAPI void APIENTRY glVertexAttribP3uiv (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribP3uiv"));
(*fun)(index_,type_,normalized_,value_);
AfterProcess("glVertexAttribP3uiv");

}
GLAPI void APIENTRY glVertexAttribP4ui (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribP4ui"));
(*fun)(index_,type_,normalized_,value_);
AfterProcess("glVertexAttribP4ui");

}
GLAPI void APIENTRY glVertexAttribP4uiv (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum type_, GLboolean normalized_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribP4uiv"));
(*fun)(index_,type_,normalized_,value_);
AfterProcess("glVertexAttribP4uiv");

}
GLAPI void APIENTRY glVertexP2ui (GLenum type_, GLuint value_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, GLuint value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexP2ui"));
(*fun)(type_,value_);
AfterProcess("glVertexP2ui");

}
GLAPI void APIENTRY glVertexP2uiv (GLenum type_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexP2uiv"));
(*fun)(type_,value_);
AfterProcess("glVertexP2uiv");

}
GLAPI void APIENTRY glVertexP3ui (GLenum type_, GLuint value_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, GLuint value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexP3ui"));
(*fun)(type_,value_);
AfterProcess("glVertexP3ui");

}
GLAPI void APIENTRY glVertexP3uiv (GLenum type_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexP3uiv"));
(*fun)(type_,value_);
AfterProcess("glVertexP3uiv");

}
GLAPI void APIENTRY glVertexP4ui (GLenum type_, GLuint value_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, GLuint value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexP4ui"));
(*fun)(type_,value_);
AfterProcess("glVertexP4ui");

}
GLAPI void APIENTRY glVertexP4uiv (GLenum type_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexP4uiv"));
(*fun)(type_,value_);
AfterProcess("glVertexP4uiv");

}
GLAPI void APIENTRY glTexCoordP1ui (GLenum type_, GLuint coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, GLuint coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexCoordP1ui"));
(*fun)(type_,coords_);
AfterProcess("glTexCoordP1ui");

}
GLAPI void APIENTRY glTexCoordP1uiv (GLenum type_, const GLuint *coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, const GLuint *coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexCoordP1uiv"));
(*fun)(type_,coords_);
AfterProcess("glTexCoordP1uiv");

}
GLAPI void APIENTRY glTexCoordP2ui (GLenum type_, GLuint coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, GLuint coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexCoordP2ui"));
(*fun)(type_,coords_);
AfterProcess("glTexCoordP2ui");

}
GLAPI void APIENTRY glTexCoordP2uiv (GLenum type_, const GLuint *coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, const GLuint *coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexCoordP2uiv"));
(*fun)(type_,coords_);
AfterProcess("glTexCoordP2uiv");

}
GLAPI void APIENTRY glTexCoordP3ui (GLenum type_, GLuint coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, GLuint coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexCoordP3ui"));
(*fun)(type_,coords_);
AfterProcess("glTexCoordP3ui");

}
GLAPI void APIENTRY glTexCoordP3uiv (GLenum type_, const GLuint *coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, const GLuint *coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexCoordP3uiv"));
(*fun)(type_,coords_);
AfterProcess("glTexCoordP3uiv");

}
GLAPI void APIENTRY glTexCoordP4ui (GLenum type_, GLuint coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, GLuint coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexCoordP4ui"));
(*fun)(type_,coords_);
AfterProcess("glTexCoordP4ui");

}
GLAPI void APIENTRY glTexCoordP4uiv (GLenum type_, const GLuint *coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, const GLuint *coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexCoordP4uiv"));
(*fun)(type_,coords_);
AfterProcess("glTexCoordP4uiv");

}
GLAPI void APIENTRY glMultiTexCoordP1ui (GLenum texture_, GLenum type_, GLuint coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum texture_, GLenum type_, GLuint coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoordP1ui"));
(*fun)(texture_,type_,coords_);
AfterProcess("glMultiTexCoordP1ui");

}
GLAPI void APIENTRY glMultiTexCoordP1uiv (GLenum texture_, GLenum type_, const GLuint *coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum texture_, GLenum type_, const GLuint *coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoordP1uiv"));
(*fun)(texture_,type_,coords_);
AfterProcess("glMultiTexCoordP1uiv");

}
GLAPI void APIENTRY glMultiTexCoordP2ui (GLenum texture_, GLenum type_, GLuint coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum texture_, GLenum type_, GLuint coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoordP2ui"));
(*fun)(texture_,type_,coords_);
AfterProcess("glMultiTexCoordP2ui");

}
GLAPI void APIENTRY glMultiTexCoordP2uiv (GLenum texture_, GLenum type_, const GLuint *coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum texture_, GLenum type_, const GLuint *coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoordP2uiv"));
(*fun)(texture_,type_,coords_);
AfterProcess("glMultiTexCoordP2uiv");

}
GLAPI void APIENTRY glMultiTexCoordP3ui (GLenum texture_, GLenum type_, GLuint coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum texture_, GLenum type_, GLuint coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoordP3ui"));
(*fun)(texture_,type_,coords_);
AfterProcess("glMultiTexCoordP3ui");

}
GLAPI void APIENTRY glMultiTexCoordP3uiv (GLenum texture_, GLenum type_, const GLuint *coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum texture_, GLenum type_, const GLuint *coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoordP3uiv"));
(*fun)(texture_,type_,coords_);
AfterProcess("glMultiTexCoordP3uiv");

}
GLAPI void APIENTRY glMultiTexCoordP4ui (GLenum texture_, GLenum type_, GLuint coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum texture_, GLenum type_, GLuint coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoordP4ui"));
(*fun)(texture_,type_,coords_);
AfterProcess("glMultiTexCoordP4ui");

}
GLAPI void APIENTRY glMultiTexCoordP4uiv (GLenum texture_, GLenum type_, const GLuint *coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum texture_, GLenum type_, const GLuint *coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiTexCoordP4uiv"));
(*fun)(texture_,type_,coords_);
AfterProcess("glMultiTexCoordP4uiv");

}
GLAPI void APIENTRY glNormalP3ui (GLenum type_, GLuint coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, GLuint coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNormalP3ui"));
(*fun)(type_,coords_);
AfterProcess("glNormalP3ui");

}
GLAPI void APIENTRY glNormalP3uiv (GLenum type_, const GLuint *coords_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, const GLuint *coords_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNormalP3uiv"));
(*fun)(type_,coords_);
AfterProcess("glNormalP3uiv");

}
GLAPI void APIENTRY glColorP3ui (GLenum type_, GLuint color_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, GLuint color_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glColorP3ui"));
(*fun)(type_,color_);
AfterProcess("glColorP3ui");

}
GLAPI void APIENTRY glColorP3uiv (GLenum type_, const GLuint *color_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, const GLuint *color_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glColorP3uiv"));
(*fun)(type_,color_);
AfterProcess("glColorP3uiv");

}
GLAPI void APIENTRY glColorP4ui (GLenum type_, GLuint color_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, GLuint color_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glColorP4ui"));
(*fun)(type_,color_);
AfterProcess("glColorP4ui");

}
GLAPI void APIENTRY glColorP4uiv (GLenum type_, const GLuint *color_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, const GLuint *color_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glColorP4uiv"));
(*fun)(type_,color_);
AfterProcess("glColorP4uiv");

}
GLAPI void APIENTRY glSecondaryColorP3ui (GLenum type_, GLuint color_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, GLuint color_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColorP3ui"));
(*fun)(type_,color_);
AfterProcess("glSecondaryColorP3ui");

}
GLAPI void APIENTRY glSecondaryColorP3uiv (GLenum type_, const GLuint *color_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, const GLuint *color_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSecondaryColorP3uiv"));
(*fun)(type_,color_);
AfterProcess("glSecondaryColorP3uiv");

}
#endif /* GL_VERSION_3_3 */

#ifdef GL_VERSION_4_0
GLAPI void APIENTRY glMinSampleShading (GLfloat value_)
{
typedef void (INTER_CALL *FUNC) (GLfloat value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMinSampleShading"));
(*fun)(value_);
AfterProcess("glMinSampleShading");

}
GLAPI void APIENTRY glBlendEquationi (GLuint buf_, GLenum mode_)
{
typedef void (INTER_CALL *FUNC) (GLuint buf_, GLenum mode_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBlendEquationi"));
(*fun)(buf_,mode_);
AfterProcess("glBlendEquationi");

}
GLAPI void APIENTRY glBlendEquationSeparatei (GLuint buf_, GLenum modeRGB_, GLenum modeAlpha_)
{
typedef void (INTER_CALL *FUNC) (GLuint buf_, GLenum modeRGB_, GLenum modeAlpha_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBlendEquationSeparatei"));
(*fun)(buf_,modeRGB_,modeAlpha_);
AfterProcess("glBlendEquationSeparatei");

}
GLAPI void APIENTRY glBlendFunci (GLuint buf_, GLenum src_, GLenum dst_)
{
typedef void (INTER_CALL *FUNC) (GLuint buf_, GLenum src_, GLenum dst_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBlendFunci"));
(*fun)(buf_,src_,dst_);
AfterProcess("glBlendFunci");

}
GLAPI void APIENTRY glBlendFuncSeparatei (GLuint buf_, GLenum srcRGB_, GLenum dstRGB_, GLenum srcAlpha_, GLenum dstAlpha_)
{
typedef void (INTER_CALL *FUNC) (GLuint buf_, GLenum srcRGB_, GLenum dstRGB_, GLenum srcAlpha_, GLenum dstAlpha_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBlendFuncSeparatei"));
(*fun)(buf_,srcRGB_,dstRGB_,srcAlpha_,dstAlpha_);
AfterProcess("glBlendFuncSeparatei");

}
GLAPI void APIENTRY glDrawArraysIndirect (GLenum mode_, const void *indirect_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, const void *indirect_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawArraysIndirect"));
(*fun)(mode_,indirect_);
AfterProcess("glDrawArraysIndirect");

}
GLAPI void APIENTRY glDrawElementsIndirect (GLenum mode_, GLenum type_, const void *indirect_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLenum type_, const void *indirect_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawElementsIndirect"));
(*fun)(mode_,type_,indirect_);
AfterProcess("glDrawElementsIndirect");

}
GLAPI void APIENTRY glUniform1d (GLint location_, GLdouble x_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLdouble x_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform1d"));
(*fun)(location_,x_);
AfterProcess("glUniform1d");

}
GLAPI void APIENTRY glUniform2d (GLint location_, GLdouble x_, GLdouble y_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLdouble x_, GLdouble y_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform2d"));
(*fun)(location_,x_,y_);
AfterProcess("glUniform2d");

}
GLAPI void APIENTRY glUniform3d (GLint location_, GLdouble x_, GLdouble y_, GLdouble z_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLdouble x_, GLdouble y_, GLdouble z_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform3d"));
(*fun)(location_,x_,y_,z_);
AfterProcess("glUniform3d");

}
GLAPI void APIENTRY glUniform4d (GLint location_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform4d"));
(*fun)(location_,x_,y_,z_,w_);
AfterProcess("glUniform4d");

}
GLAPI void APIENTRY glUniform1dv (GLint location_, GLsizei count_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform1dv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform1dv");

}
GLAPI void APIENTRY glUniform2dv (GLint location_, GLsizei count_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform2dv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform2dv");

}
GLAPI void APIENTRY glUniform3dv (GLint location_, GLsizei count_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform3dv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform3dv");

}
GLAPI void APIENTRY glUniform4dv (GLint location_, GLsizei count_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniform4dv"));
(*fun)(location_,count_,value_);
AfterProcess("glUniform4dv");

}
GLAPI void APIENTRY glUniformMatrix2dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix2dv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix2dv");

}
GLAPI void APIENTRY glUniformMatrix3dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix3dv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix3dv");

}
GLAPI void APIENTRY glUniformMatrix4dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix4dv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix4dv");

}
GLAPI void APIENTRY glUniformMatrix2x3dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix2x3dv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix2x3dv");

}
GLAPI void APIENTRY glUniformMatrix2x4dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix2x4dv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix2x4dv");

}
GLAPI void APIENTRY glUniformMatrix3x2dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix3x2dv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix3x2dv");

}
GLAPI void APIENTRY glUniformMatrix3x4dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix3x4dv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix3x4dv");

}
GLAPI void APIENTRY glUniformMatrix4x2dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix4x2dv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix4x2dv");

}
GLAPI void APIENTRY glUniformMatrix4x3dv (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformMatrix4x3dv"));
(*fun)(location_,count_,transpose_,value_);
AfterProcess("glUniformMatrix4x3dv");

}
GLAPI void APIENTRY glGetUniformdv (GLuint program_, GLint location_, GLdouble *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLdouble *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetUniformdv"));
(*fun)(program_,location_,params_);
AfterProcess("glGetUniformdv");

}
GLAPI GLint APIENTRY glGetSubroutineUniformLocation (GLuint program_, GLenum shadertype_, const GLchar *name_)
{
typedef GLint (INTER_CALL *FUNC) (GLuint program_, GLenum shadertype_, const GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetSubroutineUniformLocation"));
GLint returnValue = (*fun)(program_,shadertype_,name_);
AfterProcess("glGetSubroutineUniformLocation");
return returnValue;
}
GLAPI GLuint APIENTRY glGetSubroutineIndex (GLuint program_, GLenum shadertype_, const GLchar *name_)
{
typedef GLuint (INTER_CALL *FUNC) (GLuint program_, GLenum shadertype_, const GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetSubroutineIndex"));
GLuint returnValue = (*fun)(program_,shadertype_,name_);
AfterProcess("glGetSubroutineIndex");
return returnValue;
}
GLAPI void APIENTRY glGetActiveSubroutineUniformiv (GLuint program_, GLenum shadertype_, GLuint index_, GLenum pname_, GLint *values_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLenum shadertype_, GLuint index_, GLenum pname_, GLint *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetActiveSubroutineUniformiv"));
(*fun)(program_,shadertype_,index_,pname_,values_);
AfterProcess("glGetActiveSubroutineUniformiv");

}
GLAPI void APIENTRY glGetActiveSubroutineUniformName (GLuint program_, GLenum shadertype_, GLuint index_, GLsizei bufsize_, GLsizei *length_, GLchar *name_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLenum shadertype_, GLuint index_, GLsizei bufsize_, GLsizei *length_, GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetActiveSubroutineUniformName"));
(*fun)(program_,shadertype_,index_,bufsize_,length_,name_);
AfterProcess("glGetActiveSubroutineUniformName");

}
GLAPI void APIENTRY glGetActiveSubroutineName (GLuint program_, GLenum shadertype_, GLuint index_, GLsizei bufsize_, GLsizei *length_, GLchar *name_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLenum shadertype_, GLuint index_, GLsizei bufsize_, GLsizei *length_, GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetActiveSubroutineName"));
(*fun)(program_,shadertype_,index_,bufsize_,length_,name_);
AfterProcess("glGetActiveSubroutineName");

}
GLAPI void APIENTRY glUniformSubroutinesuiv (GLenum shadertype_, GLsizei count_, const GLuint *indices_)
{
typedef void (INTER_CALL *FUNC) (GLenum shadertype_, GLsizei count_, const GLuint *indices_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformSubroutinesuiv"));
(*fun)(shadertype_,count_,indices_);
AfterProcess("glUniformSubroutinesuiv");

}
GLAPI void APIENTRY glGetUniformSubroutineuiv (GLenum shadertype_, GLint location_, GLuint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum shadertype_, GLint location_, GLuint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetUniformSubroutineuiv"));
(*fun)(shadertype_,location_,params_);
AfterProcess("glGetUniformSubroutineuiv");

}
GLAPI void APIENTRY glGetProgramStageiv (GLuint program_, GLenum shadertype_, GLenum pname_, GLint *values_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLenum shadertype_, GLenum pname_, GLint *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetProgramStageiv"));
(*fun)(program_,shadertype_,pname_,values_);
AfterProcess("glGetProgramStageiv");

}
GLAPI void APIENTRY glPatchParameteri (GLenum pname_, GLint value_)
{
typedef void (INTER_CALL *FUNC) (GLenum pname_, GLint value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glPatchParameteri"));
(*fun)(pname_,value_);
AfterProcess("glPatchParameteri");

}
GLAPI void APIENTRY glPatchParameterfv (GLenum pname_, const GLfloat *values_)
{
typedef void (INTER_CALL *FUNC) (GLenum pname_, const GLfloat *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glPatchParameterfv"));
(*fun)(pname_,values_);
AfterProcess("glPatchParameterfv");

}
GLAPI void APIENTRY glBindTransformFeedback (GLenum target_, GLuint id_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint id_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindTransformFeedback"));
(*fun)(target_,id_);
AfterProcess("glBindTransformFeedback");

}
GLAPI void APIENTRY glDeleteTransformFeedbacks (GLsizei n_, const GLuint *ids_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, const GLuint *ids_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDeleteTransformFeedbacks"));
(*fun)(n_,ids_);
AfterProcess("glDeleteTransformFeedbacks");

}
GLAPI void APIENTRY glGenTransformFeedbacks (GLsizei n_, GLuint *ids_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLuint *ids_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGenTransformFeedbacks"));
(*fun)(n_,ids_);
AfterProcess("glGenTransformFeedbacks");

}
GLAPI GLboolean APIENTRY glIsTransformFeedback (GLuint id_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLuint id_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsTransformFeedback"));
GLboolean returnValue = (*fun)(id_);
AfterProcess("glIsTransformFeedback");
return returnValue;
}
GLAPI void APIENTRY glPauseTransformFeedback (void)
{
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glPauseTransformFeedback"));
(*fun)();
AfterProcess("glPauseTransformFeedback");

}
GLAPI void APIENTRY glResumeTransformFeedback (void)
{
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glResumeTransformFeedback"));
(*fun)();
AfterProcess("glResumeTransformFeedback");

}
GLAPI void APIENTRY glDrawTransformFeedback (GLenum mode_, GLuint id_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLuint id_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawTransformFeedback"));
(*fun)(mode_,id_);
AfterProcess("glDrawTransformFeedback");

}
GLAPI void APIENTRY glDrawTransformFeedbackStream (GLenum mode_, GLuint id_, GLuint stream_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLuint id_, GLuint stream_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawTransformFeedbackStream"));
(*fun)(mode_,id_,stream_);
AfterProcess("glDrawTransformFeedbackStream");

}
GLAPI void APIENTRY glBeginQueryIndexed (GLenum target_, GLuint index_, GLuint id_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint index_, GLuint id_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBeginQueryIndexed"));
(*fun)(target_,index_,id_);
AfterProcess("glBeginQueryIndexed");

}
GLAPI void APIENTRY glEndQueryIndexed (GLenum target_, GLuint index_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint index_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glEndQueryIndexed"));
(*fun)(target_,index_);
AfterProcess("glEndQueryIndexed");

}
GLAPI void APIENTRY glGetQueryIndexediv (GLenum target_, GLuint index_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint index_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetQueryIndexediv"));
(*fun)(target_,index_,pname_,params_);
AfterProcess("glGetQueryIndexediv");

}
#endif /* GL_VERSION_4_0 */

#ifdef GL_VERSION_4_1
GLAPI void APIENTRY glReleaseShaderCompiler (void)
{
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glReleaseShaderCompiler"));
(*fun)();
AfterProcess("glReleaseShaderCompiler");

}
GLAPI void APIENTRY glShaderBinary (GLsizei count_, const GLuint *shaders_, GLenum binaryformat_, const void *binary_, GLsizei length_)
{
typedef void (INTER_CALL *FUNC) (GLsizei count_, const GLuint *shaders_, GLenum binaryformat_, const void *binary_, GLsizei length_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glShaderBinary"));
(*fun)(count_,shaders_,binaryformat_,binary_,length_);
AfterProcess("glShaderBinary");

}
GLAPI void APIENTRY glGetShaderPrecisionFormat (GLenum shadertype_, GLenum precisiontype_, GLint *range_, GLint *precision_)
{
typedef void (INTER_CALL *FUNC) (GLenum shadertype_, GLenum precisiontype_, GLint *range_, GLint *precision_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetShaderPrecisionFormat"));
(*fun)(shadertype_,precisiontype_,range_,precision_);
AfterProcess("glGetShaderPrecisionFormat");

}
GLAPI void APIENTRY glDepthRangef (GLfloat n_, GLfloat f_)
{
typedef void (INTER_CALL *FUNC) (GLfloat n_, GLfloat f_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDepthRangef"));
(*fun)(n_,f_);
AfterProcess("glDepthRangef");

}
GLAPI void APIENTRY glClearDepthf (GLfloat d_)
{
typedef void (INTER_CALL *FUNC) (GLfloat d_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClearDepthf"));
(*fun)(d_);
AfterProcess("glClearDepthf");

}
GLAPI void APIENTRY glGetProgramBinary (GLuint program_, GLsizei bufSize_, GLsizei *length_, GLenum *binaryFormat_, void *binary_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLsizei bufSize_, GLsizei *length_, GLenum *binaryFormat_, void *binary_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetProgramBinary"));
(*fun)(program_,bufSize_,length_,binaryFormat_,binary_);
AfterProcess("glGetProgramBinary");

}
GLAPI void APIENTRY glProgramBinary (GLuint program_, GLenum binaryFormat_, const void *binary_, GLsizei length_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLenum binaryFormat_, const void *binary_, GLsizei length_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramBinary"));
(*fun)(program_,binaryFormat_,binary_,length_);
AfterProcess("glProgramBinary");

}
GLAPI void APIENTRY glProgramParameteri (GLuint program_, GLenum pname_, GLint value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLenum pname_, GLint value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramParameteri"));
(*fun)(program_,pname_,value_);
AfterProcess("glProgramParameteri");

}
GLAPI void APIENTRY glUseProgramStages (GLuint pipeline_, GLbitfield stages_, GLuint program_)
{
typedef void (INTER_CALL *FUNC) (GLuint pipeline_, GLbitfield stages_, GLuint program_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUseProgramStages"));
(*fun)(pipeline_,stages_,program_);
AfterProcess("glUseProgramStages");

}
GLAPI void APIENTRY glActiveShaderProgram (GLuint pipeline_, GLuint program_)
{
typedef void (INTER_CALL *FUNC) (GLuint pipeline_, GLuint program_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glActiveShaderProgram"));
(*fun)(pipeline_,program_);
AfterProcess("glActiveShaderProgram");

}
GLAPI GLuint APIENTRY glCreateShaderProgramv (GLenum type_, GLsizei count_, const GLchar *const*strings_)
{
typedef GLuint (INTER_CALL *FUNC) (GLenum type_, GLsizei count_, const GLchar *const*strings_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCreateShaderProgramv"));
GLuint returnValue = (*fun)(type_,count_,strings_);
AfterProcess("glCreateShaderProgramv");
return returnValue;
}
GLAPI void APIENTRY glBindProgramPipeline (GLuint pipeline_)
{
typedef void (INTER_CALL *FUNC) (GLuint pipeline_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindProgramPipeline"));
(*fun)(pipeline_);
AfterProcess("glBindProgramPipeline");

}
GLAPI void APIENTRY glDeleteProgramPipelines (GLsizei n_, const GLuint *pipelines_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, const GLuint *pipelines_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDeleteProgramPipelines"));
(*fun)(n_,pipelines_);
AfterProcess("glDeleteProgramPipelines");

}
GLAPI void APIENTRY glGenProgramPipelines (GLsizei n_, GLuint *pipelines_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLuint *pipelines_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGenProgramPipelines"));
(*fun)(n_,pipelines_);
AfterProcess("glGenProgramPipelines");

}
GLAPI GLboolean APIENTRY glIsProgramPipeline (GLuint pipeline_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLuint pipeline_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsProgramPipeline"));
GLboolean returnValue = (*fun)(pipeline_);
AfterProcess("glIsProgramPipeline");
return returnValue;
}
GLAPI void APIENTRY glGetProgramPipelineiv (GLuint pipeline_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint pipeline_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetProgramPipelineiv"));
(*fun)(pipeline_,pname_,params_);
AfterProcess("glGetProgramPipelineiv");

}
GLAPI void APIENTRY glProgramUniform1i (GLuint program_, GLint location_, GLint v0_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLint v0_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform1i"));
(*fun)(program_,location_,v0_);
AfterProcess("glProgramUniform1i");

}
GLAPI void APIENTRY glProgramUniform1iv (GLuint program_, GLint location_, GLsizei count_, const GLint *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform1iv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform1iv");

}
GLAPI void APIENTRY glProgramUniform1f (GLuint program_, GLint location_, GLfloat v0_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLfloat v0_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform1f"));
(*fun)(program_,location_,v0_);
AfterProcess("glProgramUniform1f");

}
GLAPI void APIENTRY glProgramUniform1fv (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform1fv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform1fv");

}
GLAPI void APIENTRY glProgramUniform1d (GLuint program_, GLint location_, GLdouble v0_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLdouble v0_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform1d"));
(*fun)(program_,location_,v0_);
AfterProcess("glProgramUniform1d");

}
GLAPI void APIENTRY glProgramUniform1dv (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform1dv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform1dv");

}
GLAPI void APIENTRY glProgramUniform1ui (GLuint program_, GLint location_, GLuint v0_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLuint v0_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform1ui"));
(*fun)(program_,location_,v0_);
AfterProcess("glProgramUniform1ui");

}
GLAPI void APIENTRY glProgramUniform1uiv (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform1uiv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform1uiv");

}
GLAPI void APIENTRY glProgramUniform2i (GLuint program_, GLint location_, GLint v0_, GLint v1_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLint v0_, GLint v1_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform2i"));
(*fun)(program_,location_,v0_,v1_);
AfterProcess("glProgramUniform2i");

}
GLAPI void APIENTRY glProgramUniform2iv (GLuint program_, GLint location_, GLsizei count_, const GLint *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform2iv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform2iv");

}
GLAPI void APIENTRY glProgramUniform2f (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform2f"));
(*fun)(program_,location_,v0_,v1_);
AfterProcess("glProgramUniform2f");

}
GLAPI void APIENTRY glProgramUniform2fv (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform2fv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform2fv");

}
GLAPI void APIENTRY glProgramUniform2d (GLuint program_, GLint location_, GLdouble v0_, GLdouble v1_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLdouble v0_, GLdouble v1_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform2d"));
(*fun)(program_,location_,v0_,v1_);
AfterProcess("glProgramUniform2d");

}
GLAPI void APIENTRY glProgramUniform2dv (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform2dv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform2dv");

}
GLAPI void APIENTRY glProgramUniform2ui (GLuint program_, GLint location_, GLuint v0_, GLuint v1_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLuint v0_, GLuint v1_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform2ui"));
(*fun)(program_,location_,v0_,v1_);
AfterProcess("glProgramUniform2ui");

}
GLAPI void APIENTRY glProgramUniform2uiv (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform2uiv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform2uiv");

}
GLAPI void APIENTRY glProgramUniform3i (GLuint program_, GLint location_, GLint v0_, GLint v1_, GLint v2_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLint v0_, GLint v1_, GLint v2_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform3i"));
(*fun)(program_,location_,v0_,v1_,v2_);
AfterProcess("glProgramUniform3i");

}
GLAPI void APIENTRY glProgramUniform3iv (GLuint program_, GLint location_, GLsizei count_, const GLint *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform3iv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform3iv");

}
GLAPI void APIENTRY glProgramUniform3f (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform3f"));
(*fun)(program_,location_,v0_,v1_,v2_);
AfterProcess("glProgramUniform3f");

}
GLAPI void APIENTRY glProgramUniform3fv (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform3fv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform3fv");

}
GLAPI void APIENTRY glProgramUniform3d (GLuint program_, GLint location_, GLdouble v0_, GLdouble v1_, GLdouble v2_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLdouble v0_, GLdouble v1_, GLdouble v2_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform3d"));
(*fun)(program_,location_,v0_,v1_,v2_);
AfterProcess("glProgramUniform3d");

}
GLAPI void APIENTRY glProgramUniform3dv (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform3dv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform3dv");

}
GLAPI void APIENTRY glProgramUniform3ui (GLuint program_, GLint location_, GLuint v0_, GLuint v1_, GLuint v2_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLuint v0_, GLuint v1_, GLuint v2_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform3ui"));
(*fun)(program_,location_,v0_,v1_,v2_);
AfterProcess("glProgramUniform3ui");

}
GLAPI void APIENTRY glProgramUniform3uiv (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform3uiv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform3uiv");

}
GLAPI void APIENTRY glProgramUniform4i (GLuint program_, GLint location_, GLint v0_, GLint v1_, GLint v2_, GLint v3_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLint v0_, GLint v1_, GLint v2_, GLint v3_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform4i"));
(*fun)(program_,location_,v0_,v1_,v2_,v3_);
AfterProcess("glProgramUniform4i");

}
GLAPI void APIENTRY glProgramUniform4iv (GLuint program_, GLint location_, GLsizei count_, const GLint *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform4iv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform4iv");

}
GLAPI void APIENTRY glProgramUniform4f (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_, GLfloat v3_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_, GLfloat v3_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform4f"));
(*fun)(program_,location_,v0_,v1_,v2_,v3_);
AfterProcess("glProgramUniform4f");

}
GLAPI void APIENTRY glProgramUniform4fv (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform4fv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform4fv");

}
GLAPI void APIENTRY glProgramUniform4d (GLuint program_, GLint location_, GLdouble v0_, GLdouble v1_, GLdouble v2_, GLdouble v3_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLdouble v0_, GLdouble v1_, GLdouble v2_, GLdouble v3_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform4d"));
(*fun)(program_,location_,v0_,v1_,v2_,v3_);
AfterProcess("glProgramUniform4d");

}
GLAPI void APIENTRY glProgramUniform4dv (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform4dv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform4dv");

}
GLAPI void APIENTRY glProgramUniform4ui (GLuint program_, GLint location_, GLuint v0_, GLuint v1_, GLuint v2_, GLuint v3_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLuint v0_, GLuint v1_, GLuint v2_, GLuint v3_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform4ui"));
(*fun)(program_,location_,v0_,v1_,v2_,v3_);
AfterProcess("glProgramUniform4ui");

}
GLAPI void APIENTRY glProgramUniform4uiv (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniform4uiv"));
(*fun)(program_,location_,count_,value_);
AfterProcess("glProgramUniform4uiv");

}
GLAPI void APIENTRY glProgramUniformMatrix2fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix2fv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix2fv");

}
GLAPI void APIENTRY glProgramUniformMatrix3fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix3fv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix3fv");

}
GLAPI void APIENTRY glProgramUniformMatrix4fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix4fv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix4fv");

}
GLAPI void APIENTRY glProgramUniformMatrix2dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix2dv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix2dv");

}
GLAPI void APIENTRY glProgramUniformMatrix3dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix3dv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix3dv");

}
GLAPI void APIENTRY glProgramUniformMatrix4dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix4dv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix4dv");

}
GLAPI void APIENTRY glProgramUniformMatrix2x3fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix2x3fv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix2x3fv");

}
GLAPI void APIENTRY glProgramUniformMatrix3x2fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix3x2fv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix3x2fv");

}
GLAPI void APIENTRY glProgramUniformMatrix2x4fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix2x4fv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix2x4fv");

}
GLAPI void APIENTRY glProgramUniformMatrix4x2fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix4x2fv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix4x2fv");

}
GLAPI void APIENTRY glProgramUniformMatrix3x4fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix3x4fv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix3x4fv");

}
GLAPI void APIENTRY glProgramUniformMatrix4x3fv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix4x3fv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix4x3fv");

}
GLAPI void APIENTRY glProgramUniformMatrix2x3dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix2x3dv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix2x3dv");

}
GLAPI void APIENTRY glProgramUniformMatrix3x2dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix3x2dv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix3x2dv");

}
GLAPI void APIENTRY glProgramUniformMatrix2x4dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix2x4dv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix2x4dv");

}
GLAPI void APIENTRY glProgramUniformMatrix4x2dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix4x2dv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix4x2dv");

}
GLAPI void APIENTRY glProgramUniformMatrix3x4dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix3x4dv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix3x4dv");

}
GLAPI void APIENTRY glProgramUniformMatrix4x3dv (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformMatrix4x3dv"));
(*fun)(program_,location_,count_,transpose_,value_);
AfterProcess("glProgramUniformMatrix4x3dv");

}
GLAPI void APIENTRY glValidateProgramPipeline (GLuint pipeline_)
{
typedef void (INTER_CALL *FUNC) (GLuint pipeline_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glValidateProgramPipeline"));
(*fun)(pipeline_);
AfterProcess("glValidateProgramPipeline");

}
GLAPI void APIENTRY glGetProgramPipelineInfoLog (GLuint pipeline_, GLsizei bufSize_, GLsizei *length_, GLchar *infoLog_)
{
typedef void (INTER_CALL *FUNC) (GLuint pipeline_, GLsizei bufSize_, GLsizei *length_, GLchar *infoLog_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetProgramPipelineInfoLog"));
(*fun)(pipeline_,bufSize_,length_,infoLog_);
AfterProcess("glGetProgramPipelineInfoLog");

}
GLAPI void APIENTRY glVertexAttribL1d (GLuint index_, GLdouble x_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLdouble x_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribL1d"));
(*fun)(index_,x_);
AfterProcess("glVertexAttribL1d");

}
GLAPI void APIENTRY glVertexAttribL2d (GLuint index_, GLdouble x_, GLdouble y_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLdouble x_, GLdouble y_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribL2d"));
(*fun)(index_,x_,y_);
AfterProcess("glVertexAttribL2d");

}
GLAPI void APIENTRY glVertexAttribL3d (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribL3d"));
(*fun)(index_,x_,y_,z_);
AfterProcess("glVertexAttribL3d");

}
GLAPI void APIENTRY glVertexAttribL4d (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribL4d"));
(*fun)(index_,x_,y_,z_,w_);
AfterProcess("glVertexAttribL4d");

}
GLAPI void APIENTRY glVertexAttribL1dv (GLuint index_, const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribL1dv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribL1dv");

}
GLAPI void APIENTRY glVertexAttribL2dv (GLuint index_, const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribL2dv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribL2dv");

}
GLAPI void APIENTRY glVertexAttribL3dv (GLuint index_, const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribL3dv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribL3dv");

}
GLAPI void APIENTRY glVertexAttribL4dv (GLuint index_, const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribL4dv"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribL4dv");

}
GLAPI void APIENTRY glVertexAttribLPointer (GLuint index_, GLint size_, GLenum type_, GLsizei stride_, const void *pointer_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLint size_, GLenum type_, GLsizei stride_, const void *pointer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribLPointer"));
(*fun)(index_,size_,type_,stride_,pointer_);
AfterProcess("glVertexAttribLPointer");

}
GLAPI void APIENTRY glGetVertexAttribLdv (GLuint index_, GLenum pname_, GLdouble *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum pname_, GLdouble *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetVertexAttribLdv"));
(*fun)(index_,pname_,params_);
AfterProcess("glGetVertexAttribLdv");

}
GLAPI void APIENTRY glViewportArrayv (GLuint first_, GLsizei count_, const GLfloat *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint first_, GLsizei count_, const GLfloat *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glViewportArrayv"));
(*fun)(first_,count_,v_);
AfterProcess("glViewportArrayv");

}
GLAPI void APIENTRY glViewportIndexedf (GLuint index_, GLfloat x_, GLfloat y_, GLfloat w_, GLfloat h_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLfloat x_, GLfloat y_, GLfloat w_, GLfloat h_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glViewportIndexedf"));
(*fun)(index_,x_,y_,w_,h_);
AfterProcess("glViewportIndexedf");

}
GLAPI void APIENTRY glViewportIndexedfv (GLuint index_, const GLfloat *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLfloat *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glViewportIndexedfv"));
(*fun)(index_,v_);
AfterProcess("glViewportIndexedfv");

}
GLAPI void APIENTRY glScissorArrayv (GLuint first_, GLsizei count_, const GLint *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint first_, GLsizei count_, const GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glScissorArrayv"));
(*fun)(first_,count_,v_);
AfterProcess("glScissorArrayv");

}
GLAPI void APIENTRY glScissorIndexed (GLuint index_, GLint left_, GLint bottom_, GLsizei width_, GLsizei height_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLint left_, GLint bottom_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glScissorIndexed"));
(*fun)(index_,left_,bottom_,width_,height_);
AfterProcess("glScissorIndexed");

}
GLAPI void APIENTRY glScissorIndexedv (GLuint index_, const GLint *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glScissorIndexedv"));
(*fun)(index_,v_);
AfterProcess("glScissorIndexedv");

}
GLAPI void APIENTRY glDepthRangeArrayv (GLuint first_, GLsizei count_, const GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint first_, GLsizei count_, const GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDepthRangeArrayv"));
(*fun)(first_,count_,v_);
AfterProcess("glDepthRangeArrayv");

}
GLAPI void APIENTRY glDepthRangeIndexed (GLuint index_, GLdouble n_, GLdouble f_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLdouble n_, GLdouble f_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDepthRangeIndexed"));
(*fun)(index_,n_,f_);
AfterProcess("glDepthRangeIndexed");

}
GLAPI void APIENTRY glGetFloati_v (GLenum target_, GLuint index_, GLfloat *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint index_, GLfloat *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetFloati_v"));
(*fun)(target_,index_,data_);
AfterProcess("glGetFloati_v");

}
GLAPI void APIENTRY glGetDoublei_v (GLenum target_, GLuint index_, GLdouble *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint index_, GLdouble *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetDoublei_v"));
(*fun)(target_,index_,data_);
AfterProcess("glGetDoublei_v");

}
#endif /* GL_VERSION_4_1 */

#ifdef GL_VERSION_4_2
GLAPI void APIENTRY glDrawArraysInstancedBaseInstance (GLenum mode_, GLint first_, GLsizei count_, GLsizei instancecount_, GLuint baseinstance_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLint first_, GLsizei count_, GLsizei instancecount_, GLuint baseinstance_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawArraysInstancedBaseInstance"));
(*fun)(mode_,first_,count_,instancecount_,baseinstance_);
AfterProcess("glDrawArraysInstancedBaseInstance");

}
GLAPI void APIENTRY glDrawElementsInstancedBaseInstance (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLuint baseinstance_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLuint baseinstance_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawElementsInstancedBaseInstance"));
(*fun)(mode_,count_,type_,indices_,instancecount_,baseinstance_);
AfterProcess("glDrawElementsInstancedBaseInstance");

}
GLAPI void APIENTRY glDrawElementsInstancedBaseVertexBaseInstance (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLint basevertex_, GLuint baseinstance_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLint basevertex_, GLuint baseinstance_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawElementsInstancedBaseVertexBaseInstance"));
(*fun)(mode_,count_,type_,indices_,instancecount_,basevertex_,baseinstance_);
AfterProcess("glDrawElementsInstancedBaseVertexBaseInstance");

}
GLAPI void APIENTRY glGetInternalformativ (GLenum target_, GLenum internalformat_, GLenum pname_, GLsizei bufSize_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum internalformat_, GLenum pname_, GLsizei bufSize_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetInternalformativ"));
(*fun)(target_,internalformat_,pname_,bufSize_,params_);
AfterProcess("glGetInternalformativ");

}
GLAPI void APIENTRY glGetActiveAtomicCounterBufferiv (GLuint program_, GLuint bufferIndex_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLuint bufferIndex_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetActiveAtomicCounterBufferiv"));
(*fun)(program_,bufferIndex_,pname_,params_);
AfterProcess("glGetActiveAtomicCounterBufferiv");

}
GLAPI void APIENTRY glBindImageTexture (GLuint unit_, GLuint texture_, GLint level_, GLboolean layered_, GLint layer_, GLenum access_, GLenum format_)
{
typedef void (INTER_CALL *FUNC) (GLuint unit_, GLuint texture_, GLint level_, GLboolean layered_, GLint layer_, GLenum access_, GLenum format_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindImageTexture"));
(*fun)(unit_,texture_,level_,layered_,layer_,access_,format_);
AfterProcess("glBindImageTexture");

}
GLAPI void APIENTRY glMemoryBarrier (GLbitfield barriers_)
{
typedef void (INTER_CALL *FUNC) (GLbitfield barriers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMemoryBarrier"));
(*fun)(barriers_);
AfterProcess("glMemoryBarrier");

}
GLAPI void APIENTRY glTexStorage1D (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexStorage1D"));
(*fun)(target_,levels_,internalformat_,width_);
AfterProcess("glTexStorage1D");

}
GLAPI void APIENTRY glTexStorage2D (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexStorage2D"));
(*fun)(target_,levels_,internalformat_,width_,height_);
AfterProcess("glTexStorage2D");

}
GLAPI void APIENTRY glTexStorage3D (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexStorage3D"));
(*fun)(target_,levels_,internalformat_,width_,height_,depth_);
AfterProcess("glTexStorage3D");

}
GLAPI void APIENTRY glDrawTransformFeedbackInstanced (GLenum mode_, GLuint id_, GLsizei instancecount_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLuint id_, GLsizei instancecount_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawTransformFeedbackInstanced"));
(*fun)(mode_,id_,instancecount_);
AfterProcess("glDrawTransformFeedbackInstanced");

}
GLAPI void APIENTRY glDrawTransformFeedbackStreamInstanced (GLenum mode_, GLuint id_, GLuint stream_, GLsizei instancecount_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLuint id_, GLuint stream_, GLsizei instancecount_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDrawTransformFeedbackStreamInstanced"));
(*fun)(mode_,id_,stream_,instancecount_);
AfterProcess("glDrawTransformFeedbackStreamInstanced");

}
#endif /* GL_VERSION_4_2 */

#ifdef GL_VERSION_4_3
GLAPI void APIENTRY glClearBufferData (GLenum target_, GLenum internalformat_, GLenum format_, GLenum type_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum internalformat_, GLenum format_, GLenum type_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClearBufferData"));
(*fun)(target_,internalformat_,format_,type_,data_);
AfterProcess("glClearBufferData");

}
GLAPI void APIENTRY glClearBufferSubData (GLenum target_, GLenum internalformat_, GLintptr offset_, GLsizeiptr size_, GLenum format_, GLenum type_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum internalformat_, GLintptr offset_, GLsizeiptr size_, GLenum format_, GLenum type_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClearBufferSubData"));
(*fun)(target_,internalformat_,offset_,size_,format_,type_,data_);
AfterProcess("glClearBufferSubData");

}
GLAPI void APIENTRY glDispatchCompute (GLuint num_groups_x_, GLuint num_groups_y_, GLuint num_groups_z_)
{
typedef void (INTER_CALL *FUNC) (GLuint num_groups_x_, GLuint num_groups_y_, GLuint num_groups_z_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDispatchCompute"));
(*fun)(num_groups_x_,num_groups_y_,num_groups_z_);
AfterProcess("glDispatchCompute");

}
GLAPI void APIENTRY glDispatchComputeIndirect (GLintptr indirect_)
{
typedef void (INTER_CALL *FUNC) (GLintptr indirect_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDispatchComputeIndirect"));
(*fun)(indirect_);
AfterProcess("glDispatchComputeIndirect");

}
GLAPI void APIENTRY glCopyImageSubData (GLuint srcName_, GLenum srcTarget_, GLint srcLevel_, GLint srcX_, GLint srcY_, GLint srcZ_, GLuint dstName_, GLenum dstTarget_, GLint dstLevel_, GLint dstX_, GLint dstY_, GLint dstZ_, GLsizei srcWidth_, GLsizei srcHeight_, GLsizei srcDepth_)
{
typedef void (INTER_CALL *FUNC) (GLuint srcName_, GLenum srcTarget_, GLint srcLevel_, GLint srcX_, GLint srcY_, GLint srcZ_, GLuint dstName_, GLenum dstTarget_, GLint dstLevel_, GLint dstX_, GLint dstY_, GLint dstZ_, GLsizei srcWidth_, GLsizei srcHeight_, GLsizei srcDepth_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCopyImageSubData"));
(*fun)(srcName_,srcTarget_,srcLevel_,srcX_,srcY_,srcZ_,dstName_,dstTarget_,dstLevel_,dstX_,dstY_,dstZ_,srcWidth_,srcHeight_,srcDepth_);
AfterProcess("glCopyImageSubData");

}
GLAPI void APIENTRY glFramebufferParameteri (GLenum target_, GLenum pname_, GLint param_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glFramebufferParameteri"));
(*fun)(target_,pname_,param_);
AfterProcess("glFramebufferParameteri");

}
GLAPI void APIENTRY glGetFramebufferParameteriv (GLenum target_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetFramebufferParameteriv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetFramebufferParameteriv");

}
GLAPI void APIENTRY glGetInternalformati64v (GLenum target_, GLenum internalformat_, GLenum pname_, GLsizei bufSize_, GLint64 *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum internalformat_, GLenum pname_, GLsizei bufSize_, GLint64 *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetInternalformati64v"));
(*fun)(target_,internalformat_,pname_,bufSize_,params_);
AfterProcess("glGetInternalformati64v");

}
GLAPI void APIENTRY glInvalidateTexSubImage (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glInvalidateTexSubImage"));
(*fun)(texture_,level_,xoffset_,yoffset_,zoffset_,width_,height_,depth_);
AfterProcess("glInvalidateTexSubImage");

}
GLAPI void APIENTRY glInvalidateTexImage (GLuint texture_, GLint level_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glInvalidateTexImage"));
(*fun)(texture_,level_);
AfterProcess("glInvalidateTexImage");

}
GLAPI void APIENTRY glInvalidateBufferSubData (GLuint buffer_, GLintptr offset_, GLsizeiptr length_)
{
typedef void (INTER_CALL *FUNC) (GLuint buffer_, GLintptr offset_, GLsizeiptr length_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glInvalidateBufferSubData"));
(*fun)(buffer_,offset_,length_);
AfterProcess("glInvalidateBufferSubData");

}
GLAPI void APIENTRY glInvalidateBufferData (GLuint buffer_)
{
typedef void (INTER_CALL *FUNC) (GLuint buffer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glInvalidateBufferData"));
(*fun)(buffer_);
AfterProcess("glInvalidateBufferData");

}
GLAPI void APIENTRY glInvalidateFramebuffer (GLenum target_, GLsizei numAttachments_, const GLenum *attachments_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizei numAttachments_, const GLenum *attachments_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glInvalidateFramebuffer"));
(*fun)(target_,numAttachments_,attachments_);
AfterProcess("glInvalidateFramebuffer");

}
GLAPI void APIENTRY glInvalidateSubFramebuffer (GLenum target_, GLsizei numAttachments_, const GLenum *attachments_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizei numAttachments_, const GLenum *attachments_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glInvalidateSubFramebuffer"));
(*fun)(target_,numAttachments_,attachments_,x_,y_,width_,height_);
AfterProcess("glInvalidateSubFramebuffer");

}
GLAPI void APIENTRY glMultiDrawArraysIndirect (GLenum mode_, const void *indirect_, GLsizei drawcount_, GLsizei stride_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, const void *indirect_, GLsizei drawcount_, GLsizei stride_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiDrawArraysIndirect"));
(*fun)(mode_,indirect_,drawcount_,stride_);
AfterProcess("glMultiDrawArraysIndirect");

}
GLAPI void APIENTRY glMultiDrawElementsIndirect (GLenum mode_, GLenum type_, const void *indirect_, GLsizei drawcount_, GLsizei stride_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLenum type_, const void *indirect_, GLsizei drawcount_, GLsizei stride_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiDrawElementsIndirect"));
(*fun)(mode_,type_,indirect_,drawcount_,stride_);
AfterProcess("glMultiDrawElementsIndirect");

}
GLAPI void APIENTRY glGetProgramInterfaceiv (GLuint program_, GLenum programInterface_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLenum programInterface_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetProgramInterfaceiv"));
(*fun)(program_,programInterface_,pname_,params_);
AfterProcess("glGetProgramInterfaceiv");

}
GLAPI GLuint APIENTRY glGetProgramResourceIndex (GLuint program_, GLenum programInterface_, const GLchar *name_)
{
typedef GLuint (INTER_CALL *FUNC) (GLuint program_, GLenum programInterface_, const GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetProgramResourceIndex"));
GLuint returnValue = (*fun)(program_,programInterface_,name_);
AfterProcess("glGetProgramResourceIndex");
return returnValue;
}
GLAPI void APIENTRY glGetProgramResourceName (GLuint program_, GLenum programInterface_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLchar *name_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLenum programInterface_, GLuint index_, GLsizei bufSize_, GLsizei *length_, GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetProgramResourceName"));
(*fun)(program_,programInterface_,index_,bufSize_,length_,name_);
AfterProcess("glGetProgramResourceName");

}
GLAPI void APIENTRY glGetProgramResourceiv (GLuint program_, GLenum programInterface_, GLuint index_, GLsizei propCount_, const GLenum *props_, GLsizei bufSize_, GLsizei *length_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLenum programInterface_, GLuint index_, GLsizei propCount_, const GLenum *props_, GLsizei bufSize_, GLsizei *length_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetProgramResourceiv"));
(*fun)(program_,programInterface_,index_,propCount_,props_,bufSize_,length_,params_);
AfterProcess("glGetProgramResourceiv");

}
GLAPI GLint APIENTRY glGetProgramResourceLocation (GLuint program_, GLenum programInterface_, const GLchar *name_)
{
typedef GLint (INTER_CALL *FUNC) (GLuint program_, GLenum programInterface_, const GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetProgramResourceLocation"));
GLint returnValue = (*fun)(program_,programInterface_,name_);
AfterProcess("glGetProgramResourceLocation");
return returnValue;
}
GLAPI GLint APIENTRY glGetProgramResourceLocationIndex (GLuint program_, GLenum programInterface_, const GLchar *name_)
{
typedef GLint (INTER_CALL *FUNC) (GLuint program_, GLenum programInterface_, const GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetProgramResourceLocationIndex"));
GLint returnValue = (*fun)(program_,programInterface_,name_);
AfterProcess("glGetProgramResourceLocationIndex");
return returnValue;
}
GLAPI void APIENTRY glShaderStorageBlockBinding (GLuint program_, GLuint storageBlockIndex_, GLuint storageBlockBinding_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLuint storageBlockIndex_, GLuint storageBlockBinding_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glShaderStorageBlockBinding"));
(*fun)(program_,storageBlockIndex_,storageBlockBinding_);
AfterProcess("glShaderStorageBlockBinding");

}
GLAPI void APIENTRY glTexBufferRange (GLenum target_, GLenum internalformat_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum internalformat_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexBufferRange"));
(*fun)(target_,internalformat_,buffer_,offset_,size_);
AfterProcess("glTexBufferRange");

}
GLAPI void APIENTRY glTexStorage2DMultisample (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexStorage2DMultisample"));
(*fun)(target_,samples_,internalformat_,width_,height_,fixedsamplelocations_);
AfterProcess("glTexStorage2DMultisample");

}
GLAPI void APIENTRY glTexStorage3DMultisample (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexStorage3DMultisample"));
(*fun)(target_,samples_,internalformat_,width_,height_,depth_,fixedsamplelocations_);
AfterProcess("glTexStorage3DMultisample");

}
GLAPI void APIENTRY glTextureView (GLuint texture_, GLenum target_, GLuint origtexture_, GLenum internalformat_, GLuint minlevel_, GLuint numlevels_, GLuint minlayer_, GLuint numlayers_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLenum target_, GLuint origtexture_, GLenum internalformat_, GLuint minlevel_, GLuint numlevels_, GLuint minlayer_, GLuint numlayers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureView"));
(*fun)(texture_,target_,origtexture_,internalformat_,minlevel_,numlevels_,minlayer_,numlayers_);
AfterProcess("glTextureView");

}
GLAPI void APIENTRY glBindVertexBuffer (GLuint bindingindex_, GLuint buffer_, GLintptr offset_, GLsizei stride_)
{
typedef void (INTER_CALL *FUNC) (GLuint bindingindex_, GLuint buffer_, GLintptr offset_, GLsizei stride_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindVertexBuffer"));
(*fun)(bindingindex_,buffer_,offset_,stride_);
AfterProcess("glBindVertexBuffer");

}
GLAPI void APIENTRY glVertexAttribFormat (GLuint attribindex_, GLint size_, GLenum type_, GLboolean normalized_, GLuint relativeoffset_)
{
typedef void (INTER_CALL *FUNC) (GLuint attribindex_, GLint size_, GLenum type_, GLboolean normalized_, GLuint relativeoffset_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribFormat"));
(*fun)(attribindex_,size_,type_,normalized_,relativeoffset_);
AfterProcess("glVertexAttribFormat");

}
GLAPI void APIENTRY glVertexAttribIFormat (GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_)
{
typedef void (INTER_CALL *FUNC) (GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribIFormat"));
(*fun)(attribindex_,size_,type_,relativeoffset_);
AfterProcess("glVertexAttribIFormat");

}
GLAPI void APIENTRY glVertexAttribLFormat (GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_)
{
typedef void (INTER_CALL *FUNC) (GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribLFormat"));
(*fun)(attribindex_,size_,type_,relativeoffset_);
AfterProcess("glVertexAttribLFormat");

}
GLAPI void APIENTRY glVertexAttribBinding (GLuint attribindex_, GLuint bindingindex_)
{
typedef void (INTER_CALL *FUNC) (GLuint attribindex_, GLuint bindingindex_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribBinding"));
(*fun)(attribindex_,bindingindex_);
AfterProcess("glVertexAttribBinding");

}
GLAPI void APIENTRY glVertexBindingDivisor (GLuint bindingindex_, GLuint divisor_)
{
typedef void (INTER_CALL *FUNC) (GLuint bindingindex_, GLuint divisor_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexBindingDivisor"));
(*fun)(bindingindex_,divisor_);
AfterProcess("glVertexBindingDivisor");

}
GLAPI void APIENTRY glDebugMessageControl (GLenum source_, GLenum type_, GLenum severity_, GLsizei count_, const GLuint *ids_, GLboolean enabled_)
{
typedef void (INTER_CALL *FUNC) (GLenum source_, GLenum type_, GLenum severity_, GLsizei count_, const GLuint *ids_, GLboolean enabled_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDebugMessageControl"));
(*fun)(source_,type_,severity_,count_,ids_,enabled_);
AfterProcess("glDebugMessageControl");

}
GLAPI void APIENTRY glDebugMessageInsert (GLenum source_, GLenum type_, GLuint id_, GLenum severity_, GLsizei length_, const GLchar *buf_)
{
typedef void (INTER_CALL *FUNC) (GLenum source_, GLenum type_, GLuint id_, GLenum severity_, GLsizei length_, const GLchar *buf_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDebugMessageInsert"));
(*fun)(source_,type_,id_,severity_,length_,buf_);
AfterProcess("glDebugMessageInsert");

}
GLAPI void APIENTRY glDebugMessageCallback (GLDEBUGPROC callback_, const void *userParam_)
{
typedef void (INTER_CALL *FUNC) (GLDEBUGPROC callback_, const void *userParam_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDebugMessageCallback"));
(*fun)(callback_,userParam_);
AfterProcess("glDebugMessageCallback");

}
GLAPI GLuint APIENTRY glGetDebugMessageLog (GLuint count_, GLsizei bufSize_, GLenum *sources_, GLenum *types_, GLuint *ids_, GLenum *severities_, GLsizei *lengths_, GLchar *messageLog_)
{
typedef GLuint (INTER_CALL *FUNC) (GLuint count_, GLsizei bufSize_, GLenum *sources_, GLenum *types_, GLuint *ids_, GLenum *severities_, GLsizei *lengths_, GLchar *messageLog_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetDebugMessageLog"));
GLuint returnValue = (*fun)(count_,bufSize_,sources_,types_,ids_,severities_,lengths_,messageLog_);
AfterProcess("glGetDebugMessageLog");
return returnValue;
}
GLAPI void APIENTRY glPushDebugGroup (GLenum source_, GLuint id_, GLsizei length_, const GLchar *message_)
{
typedef void (INTER_CALL *FUNC) (GLenum source_, GLuint id_, GLsizei length_, const GLchar *message_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glPushDebugGroup"));
(*fun)(source_,id_,length_,message_);
AfterProcess("glPushDebugGroup");

}
GLAPI void APIENTRY glPopDebugGroup (void)
{
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glPopDebugGroup"));
(*fun)();
AfterProcess("glPopDebugGroup");

}
GLAPI void APIENTRY glObjectLabel (GLenum identifier_, GLuint name_, GLsizei length_, const GLchar *label_)
{
typedef void (INTER_CALL *FUNC) (GLenum identifier_, GLuint name_, GLsizei length_, const GLchar *label_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glObjectLabel"));
(*fun)(identifier_,name_,length_,label_);
AfterProcess("glObjectLabel");

}
GLAPI void APIENTRY glGetObjectLabel (GLenum identifier_, GLuint name_, GLsizei bufSize_, GLsizei *length_, GLchar *label_)
{
typedef void (INTER_CALL *FUNC) (GLenum identifier_, GLuint name_, GLsizei bufSize_, GLsizei *length_, GLchar *label_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetObjectLabel"));
(*fun)(identifier_,name_,bufSize_,length_,label_);
AfterProcess("glGetObjectLabel");

}
GLAPI void APIENTRY glObjectPtrLabel (const void *ptr_, GLsizei length_, const GLchar *label_)
{
typedef void (INTER_CALL *FUNC) (const void *ptr_, GLsizei length_, const GLchar *label_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glObjectPtrLabel"));
(*fun)(ptr_,length_,label_);
AfterProcess("glObjectPtrLabel");

}
GLAPI void APIENTRY glGetObjectPtrLabel (const void *ptr_, GLsizei bufSize_, GLsizei *length_, GLchar *label_)
{
typedef void (INTER_CALL *FUNC) (const void *ptr_, GLsizei bufSize_, GLsizei *length_, GLchar *label_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetObjectPtrLabel"));
(*fun)(ptr_,bufSize_,length_,label_);
AfterProcess("glGetObjectPtrLabel");

}
#endif /* GL_VERSION_4_3 */

#ifdef GL_VERSION_4_4
GLAPI void APIENTRY glBufferStorage (GLenum target_, GLsizeiptr size_, const void *data_, GLbitfield flags_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizeiptr size_, const void *data_, GLbitfield flags_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBufferStorage"));
(*fun)(target_,size_,data_,flags_);
AfterProcess("glBufferStorage");

}
GLAPI void APIENTRY glClearTexImage (GLuint texture_, GLint level_, GLenum format_, GLenum type_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLenum format_, GLenum type_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClearTexImage"));
(*fun)(texture_,level_,format_,type_,data_);
AfterProcess("glClearTexImage");

}
GLAPI void APIENTRY glClearTexSubImage (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClearTexSubImage"));
(*fun)(texture_,level_,xoffset_,yoffset_,zoffset_,width_,height_,depth_,format_,type_,data_);
AfterProcess("glClearTexSubImage");

}
GLAPI void APIENTRY glBindBuffersBase (GLenum target_, GLuint first_, GLsizei count_, const GLuint *buffers_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint first_, GLsizei count_, const GLuint *buffers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindBuffersBase"));
(*fun)(target_,first_,count_,buffers_);
AfterProcess("glBindBuffersBase");

}
GLAPI void APIENTRY glBindBuffersRange (GLenum target_, GLuint first_, GLsizei count_, const GLuint *buffers_, const GLintptr *offsets_, const GLsizeiptr *sizes_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLuint first_, GLsizei count_, const GLuint *buffers_, const GLintptr *offsets_, const GLsizeiptr *sizes_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindBuffersRange"));
(*fun)(target_,first_,count_,buffers_,offsets_,sizes_);
AfterProcess("glBindBuffersRange");

}
GLAPI void APIENTRY glBindTextures (GLuint first_, GLsizei count_, const GLuint *textures_)
{
typedef void (INTER_CALL *FUNC) (GLuint first_, GLsizei count_, const GLuint *textures_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindTextures"));
(*fun)(first_,count_,textures_);
AfterProcess("glBindTextures");

}
GLAPI void APIENTRY glBindSamplers (GLuint first_, GLsizei count_, const GLuint *samplers_)
{
typedef void (INTER_CALL *FUNC) (GLuint first_, GLsizei count_, const GLuint *samplers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindSamplers"));
(*fun)(first_,count_,samplers_);
AfterProcess("glBindSamplers");

}
GLAPI void APIENTRY glBindImageTextures (GLuint first_, GLsizei count_, const GLuint *textures_)
{
typedef void (INTER_CALL *FUNC) (GLuint first_, GLsizei count_, const GLuint *textures_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindImageTextures"));
(*fun)(first_,count_,textures_);
AfterProcess("glBindImageTextures");

}
GLAPI void APIENTRY glBindVertexBuffers (GLuint first_, GLsizei count_, const GLuint *buffers_, const GLintptr *offsets_, const GLsizei *strides_)
{
typedef void (INTER_CALL *FUNC) (GLuint first_, GLsizei count_, const GLuint *buffers_, const GLintptr *offsets_, const GLsizei *strides_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindVertexBuffers"));
(*fun)(first_,count_,buffers_,offsets_,strides_);
AfterProcess("glBindVertexBuffers");

}
#endif /* GL_VERSION_4_4 */

#ifdef GL_VERSION_4_5
GLAPI void APIENTRY glClipControl (GLenum origin_, GLenum depth_)
{
typedef void (INTER_CALL *FUNC) (GLenum origin_, GLenum depth_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClipControl"));
(*fun)(origin_,depth_);
AfterProcess("glClipControl");

}
GLAPI void APIENTRY glCreateTransformFeedbacks (GLsizei n_, GLuint *ids_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLuint *ids_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCreateTransformFeedbacks"));
(*fun)(n_,ids_);
AfterProcess("glCreateTransformFeedbacks");

}
GLAPI void APIENTRY glTransformFeedbackBufferBase (GLuint xfb_, GLuint index_, GLuint buffer_)
{
typedef void (INTER_CALL *FUNC) (GLuint xfb_, GLuint index_, GLuint buffer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTransformFeedbackBufferBase"));
(*fun)(xfb_,index_,buffer_);
AfterProcess("glTransformFeedbackBufferBase");

}
GLAPI void APIENTRY glTransformFeedbackBufferRange (GLuint xfb_, GLuint index_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_)
{
typedef void (INTER_CALL *FUNC) (GLuint xfb_, GLuint index_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTransformFeedbackBufferRange"));
(*fun)(xfb_,index_,buffer_,offset_,size_);
AfterProcess("glTransformFeedbackBufferRange");

}
GLAPI void APIENTRY glGetTransformFeedbackiv (GLuint xfb_, GLenum pname_, GLint *param_)
{
typedef void (INTER_CALL *FUNC) (GLuint xfb_, GLenum pname_, GLint *param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTransformFeedbackiv"));
(*fun)(xfb_,pname_,param_);
AfterProcess("glGetTransformFeedbackiv");

}
GLAPI void APIENTRY glGetTransformFeedbacki_v (GLuint xfb_, GLenum pname_, GLuint index_, GLint *param_)
{
typedef void (INTER_CALL *FUNC) (GLuint xfb_, GLenum pname_, GLuint index_, GLint *param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTransformFeedbacki_v"));
(*fun)(xfb_,pname_,index_,param_);
AfterProcess("glGetTransformFeedbacki_v");

}
GLAPI void APIENTRY glGetTransformFeedbacki64_v (GLuint xfb_, GLenum pname_, GLuint index_, GLint64 *param_)
{
typedef void (INTER_CALL *FUNC) (GLuint xfb_, GLenum pname_, GLuint index_, GLint64 *param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTransformFeedbacki64_v"));
(*fun)(xfb_,pname_,index_,param_);
AfterProcess("glGetTransformFeedbacki64_v");

}
GLAPI void APIENTRY glCreateBuffers (GLsizei n_, GLuint *buffers_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLuint *buffers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCreateBuffers"));
(*fun)(n_,buffers_);
AfterProcess("glCreateBuffers");

}
GLAPI void APIENTRY glNamedBufferStorage (GLuint buffer_, GLsizeiptr size_, const void *data_, GLbitfield flags_)
{
typedef void (INTER_CALL *FUNC) (GLuint buffer_, GLsizeiptr size_, const void *data_, GLbitfield flags_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNamedBufferStorage"));
(*fun)(buffer_,size_,data_,flags_);
AfterProcess("glNamedBufferStorage");

}
GLAPI void APIENTRY glNamedBufferData (GLuint buffer_, GLsizeiptr size_, const void *data_, GLenum usage_)
{
typedef void (INTER_CALL *FUNC) (GLuint buffer_, GLsizeiptr size_, const void *data_, GLenum usage_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNamedBufferData"));
(*fun)(buffer_,size_,data_,usage_);
AfterProcess("glNamedBufferData");

}
GLAPI void APIENTRY glNamedBufferSubData (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNamedBufferSubData"));
(*fun)(buffer_,offset_,size_,data_);
AfterProcess("glNamedBufferSubData");

}
GLAPI void APIENTRY glCopyNamedBufferSubData (GLuint readBuffer_, GLuint writeBuffer_, GLintptr readOffset_, GLintptr writeOffset_, GLsizeiptr size_)
{
typedef void (INTER_CALL *FUNC) (GLuint readBuffer_, GLuint writeBuffer_, GLintptr readOffset_, GLintptr writeOffset_, GLsizeiptr size_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCopyNamedBufferSubData"));
(*fun)(readBuffer_,writeBuffer_,readOffset_,writeOffset_,size_);
AfterProcess("glCopyNamedBufferSubData");

}
GLAPI void APIENTRY glClearNamedBufferData (GLuint buffer_, GLenum internalformat_, GLenum format_, GLenum type_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLuint buffer_, GLenum internalformat_, GLenum format_, GLenum type_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClearNamedBufferData"));
(*fun)(buffer_,internalformat_,format_,type_,data_);
AfterProcess("glClearNamedBufferData");

}
GLAPI void APIENTRY glClearNamedBufferSubData (GLuint buffer_, GLenum internalformat_, GLintptr offset_, GLsizeiptr size_, GLenum format_, GLenum type_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLuint buffer_, GLenum internalformat_, GLintptr offset_, GLsizeiptr size_, GLenum format_, GLenum type_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClearNamedBufferSubData"));
(*fun)(buffer_,internalformat_,offset_,size_,format_,type_,data_);
AfterProcess("glClearNamedBufferSubData");

}
GLAPI void *APIENTRY glMapNamedBuffer (GLuint buffer_, GLenum access_)
{
typedef void *(INTER_CALL *FUNC) (GLuint buffer_, GLenum access_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMapNamedBuffer"));
void *returnValue = (*fun)(buffer_,access_);
AfterProcess("glMapNamedBuffer");
return returnValue;
}
GLAPI void *APIENTRY glMapNamedBufferRange (GLuint buffer_, GLintptr offset_, GLsizeiptr length_, GLbitfield access_)
{
typedef void *(INTER_CALL *FUNC) (GLuint buffer_, GLintptr offset_, GLsizeiptr length_, GLbitfield access_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMapNamedBufferRange"));
void *returnValue = (*fun)(buffer_,offset_,length_,access_);
AfterProcess("glMapNamedBufferRange");
return returnValue;
}
GLAPI GLboolean APIENTRY glUnmapNamedBuffer (GLuint buffer_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLuint buffer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUnmapNamedBuffer"));
GLboolean returnValue = (*fun)(buffer_);
AfterProcess("glUnmapNamedBuffer");
return returnValue;
}
GLAPI void APIENTRY glFlushMappedNamedBufferRange (GLuint buffer_, GLintptr offset_, GLsizeiptr length_)
{
typedef void (INTER_CALL *FUNC) (GLuint buffer_, GLintptr offset_, GLsizeiptr length_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glFlushMappedNamedBufferRange"));
(*fun)(buffer_,offset_,length_);
AfterProcess("glFlushMappedNamedBufferRange");

}
GLAPI void APIENTRY glGetNamedBufferParameteriv (GLuint buffer_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint buffer_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetNamedBufferParameteriv"));
(*fun)(buffer_,pname_,params_);
AfterProcess("glGetNamedBufferParameteriv");

}
GLAPI void APIENTRY glGetNamedBufferParameteri64v (GLuint buffer_, GLenum pname_, GLint64 *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint buffer_, GLenum pname_, GLint64 *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetNamedBufferParameteri64v"));
(*fun)(buffer_,pname_,params_);
AfterProcess("glGetNamedBufferParameteri64v");

}
GLAPI void APIENTRY glGetNamedBufferPointerv (GLuint buffer_, GLenum pname_, void **params_)
{
typedef void (INTER_CALL *FUNC) (GLuint buffer_, GLenum pname_, void **params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetNamedBufferPointerv"));
(*fun)(buffer_,pname_,params_);
AfterProcess("glGetNamedBufferPointerv");

}
GLAPI void APIENTRY glGetNamedBufferSubData (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, void *data_)
{
typedef void (INTER_CALL *FUNC) (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetNamedBufferSubData"));
(*fun)(buffer_,offset_,size_,data_);
AfterProcess("glGetNamedBufferSubData");

}
GLAPI void APIENTRY glCreateFramebuffers (GLsizei n_, GLuint *framebuffers_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLuint *framebuffers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCreateFramebuffers"));
(*fun)(n_,framebuffers_);
AfterProcess("glCreateFramebuffers");

}
GLAPI void APIENTRY glNamedFramebufferRenderbuffer (GLuint framebuffer_, GLenum attachment_, GLenum renderbuffertarget_, GLuint renderbuffer_)
{
typedef void (INTER_CALL *FUNC) (GLuint framebuffer_, GLenum attachment_, GLenum renderbuffertarget_, GLuint renderbuffer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNamedFramebufferRenderbuffer"));
(*fun)(framebuffer_,attachment_,renderbuffertarget_,renderbuffer_);
AfterProcess("glNamedFramebufferRenderbuffer");

}
GLAPI void APIENTRY glNamedFramebufferParameteri (GLuint framebuffer_, GLenum pname_, GLint param_)
{
typedef void (INTER_CALL *FUNC) (GLuint framebuffer_, GLenum pname_, GLint param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNamedFramebufferParameteri"));
(*fun)(framebuffer_,pname_,param_);
AfterProcess("glNamedFramebufferParameteri");

}
GLAPI void APIENTRY glNamedFramebufferTexture (GLuint framebuffer_, GLenum attachment_, GLuint texture_, GLint level_)
{
typedef void (INTER_CALL *FUNC) (GLuint framebuffer_, GLenum attachment_, GLuint texture_, GLint level_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNamedFramebufferTexture"));
(*fun)(framebuffer_,attachment_,texture_,level_);
AfterProcess("glNamedFramebufferTexture");

}
GLAPI void APIENTRY glNamedFramebufferTextureLayer (GLuint framebuffer_, GLenum attachment_, GLuint texture_, GLint level_, GLint layer_)
{
typedef void (INTER_CALL *FUNC) (GLuint framebuffer_, GLenum attachment_, GLuint texture_, GLint level_, GLint layer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNamedFramebufferTextureLayer"));
(*fun)(framebuffer_,attachment_,texture_,level_,layer_);
AfterProcess("glNamedFramebufferTextureLayer");

}
GLAPI void APIENTRY glNamedFramebufferDrawBuffer (GLuint framebuffer_, GLenum buf_)
{
typedef void (INTER_CALL *FUNC) (GLuint framebuffer_, GLenum buf_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNamedFramebufferDrawBuffer"));
(*fun)(framebuffer_,buf_);
AfterProcess("glNamedFramebufferDrawBuffer");

}
GLAPI void APIENTRY glNamedFramebufferDrawBuffers (GLuint framebuffer_, GLsizei n_, const GLenum *bufs_)
{
typedef void (INTER_CALL *FUNC) (GLuint framebuffer_, GLsizei n_, const GLenum *bufs_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNamedFramebufferDrawBuffers"));
(*fun)(framebuffer_,n_,bufs_);
AfterProcess("glNamedFramebufferDrawBuffers");

}
GLAPI void APIENTRY glNamedFramebufferReadBuffer (GLuint framebuffer_, GLenum src_)
{
typedef void (INTER_CALL *FUNC) (GLuint framebuffer_, GLenum src_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNamedFramebufferReadBuffer"));
(*fun)(framebuffer_,src_);
AfterProcess("glNamedFramebufferReadBuffer");

}
GLAPI void APIENTRY glInvalidateNamedFramebufferData (GLuint framebuffer_, GLsizei numAttachments_, const GLenum *attachments_)
{
typedef void (INTER_CALL *FUNC) (GLuint framebuffer_, GLsizei numAttachments_, const GLenum *attachments_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glInvalidateNamedFramebufferData"));
(*fun)(framebuffer_,numAttachments_,attachments_);
AfterProcess("glInvalidateNamedFramebufferData");

}
GLAPI void APIENTRY glInvalidateNamedFramebufferSubData (GLuint framebuffer_, GLsizei numAttachments_, const GLenum *attachments_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
typedef void (INTER_CALL *FUNC) (GLuint framebuffer_, GLsizei numAttachments_, const GLenum *attachments_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glInvalidateNamedFramebufferSubData"));
(*fun)(framebuffer_,numAttachments_,attachments_,x_,y_,width_,height_);
AfterProcess("glInvalidateNamedFramebufferSubData");

}
GLAPI void APIENTRY glClearNamedFramebufferiv (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, const GLint *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, const GLint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClearNamedFramebufferiv"));
(*fun)(framebuffer_,buffer_,drawbuffer_,value_);
AfterProcess("glClearNamedFramebufferiv");

}
GLAPI void APIENTRY glClearNamedFramebufferuiv (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, const GLuint *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, const GLuint *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClearNamedFramebufferuiv"));
(*fun)(framebuffer_,buffer_,drawbuffer_,value_);
AfterProcess("glClearNamedFramebufferuiv");

}
GLAPI void APIENTRY glClearNamedFramebufferfv (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, const GLfloat *value_)
{
typedef void (INTER_CALL *FUNC) (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, const GLfloat *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClearNamedFramebufferfv"));
(*fun)(framebuffer_,buffer_,drawbuffer_,value_);
AfterProcess("glClearNamedFramebufferfv");

}
GLAPI void APIENTRY glClearNamedFramebufferfi (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, GLfloat depth_, GLint stencil_)
{
typedef void (INTER_CALL *FUNC) (GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, GLfloat depth_, GLint stencil_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glClearNamedFramebufferfi"));
(*fun)(framebuffer_,buffer_,drawbuffer_,depth_,stencil_);
AfterProcess("glClearNamedFramebufferfi");

}
GLAPI void APIENTRY glBlitNamedFramebuffer (GLuint readFramebuffer_, GLuint drawFramebuffer_, GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_)
{
typedef void (INTER_CALL *FUNC) (GLuint readFramebuffer_, GLuint drawFramebuffer_, GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBlitNamedFramebuffer"));
(*fun)(readFramebuffer_,drawFramebuffer_,srcX0_,srcY0_,srcX1_,srcY1_,dstX0_,dstY0_,dstX1_,dstY1_,mask_,filter_);
AfterProcess("glBlitNamedFramebuffer");

}
GLAPI GLenum APIENTRY glCheckNamedFramebufferStatus (GLuint framebuffer_, GLenum target_)
{
typedef GLenum (INTER_CALL *FUNC) (GLuint framebuffer_, GLenum target_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCheckNamedFramebufferStatus"));
GLenum returnValue = (*fun)(framebuffer_,target_);
AfterProcess("glCheckNamedFramebufferStatus");
return returnValue;
}
GLAPI void APIENTRY glGetNamedFramebufferParameteriv (GLuint framebuffer_, GLenum pname_, GLint *param_)
{
typedef void (INTER_CALL *FUNC) (GLuint framebuffer_, GLenum pname_, GLint *param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetNamedFramebufferParameteriv"));
(*fun)(framebuffer_,pname_,param_);
AfterProcess("glGetNamedFramebufferParameteriv");

}
GLAPI void APIENTRY glGetNamedFramebufferAttachmentParameteriv (GLuint framebuffer_, GLenum attachment_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint framebuffer_, GLenum attachment_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetNamedFramebufferAttachmentParameteriv"));
(*fun)(framebuffer_,attachment_,pname_,params_);
AfterProcess("glGetNamedFramebufferAttachmentParameteriv");

}
GLAPI void APIENTRY glCreateRenderbuffers (GLsizei n_, GLuint *renderbuffers_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLuint *renderbuffers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCreateRenderbuffers"));
(*fun)(n_,renderbuffers_);
AfterProcess("glCreateRenderbuffers");

}
GLAPI void APIENTRY glNamedRenderbufferStorage (GLuint renderbuffer_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
typedef void (INTER_CALL *FUNC) (GLuint renderbuffer_, GLenum internalformat_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNamedRenderbufferStorage"));
(*fun)(renderbuffer_,internalformat_,width_,height_);
AfterProcess("glNamedRenderbufferStorage");

}
GLAPI void APIENTRY glNamedRenderbufferStorageMultisample (GLuint renderbuffer_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
typedef void (INTER_CALL *FUNC) (GLuint renderbuffer_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNamedRenderbufferStorageMultisample"));
(*fun)(renderbuffer_,samples_,internalformat_,width_,height_);
AfterProcess("glNamedRenderbufferStorageMultisample");

}
GLAPI void APIENTRY glGetNamedRenderbufferParameteriv (GLuint renderbuffer_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint renderbuffer_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetNamedRenderbufferParameteriv"));
(*fun)(renderbuffer_,pname_,params_);
AfterProcess("glGetNamedRenderbufferParameteriv");

}
GLAPI void APIENTRY glCreateTextures (GLenum target_, GLsizei n_, GLuint *textures_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizei n_, GLuint *textures_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCreateTextures"));
(*fun)(target_,n_,textures_);
AfterProcess("glCreateTextures");

}
GLAPI void APIENTRY glTextureBuffer (GLuint texture_, GLenum internalformat_, GLuint buffer_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLenum internalformat_, GLuint buffer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureBuffer"));
(*fun)(texture_,internalformat_,buffer_);
AfterProcess("glTextureBuffer");

}
GLAPI void APIENTRY glTextureBufferRange (GLuint texture_, GLenum internalformat_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLenum internalformat_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureBufferRange"));
(*fun)(texture_,internalformat_,buffer_,offset_,size_);
AfterProcess("glTextureBufferRange");

}
GLAPI void APIENTRY glTextureStorage1D (GLuint texture_, GLsizei levels_, GLenum internalformat_, GLsizei width_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLsizei levels_, GLenum internalformat_, GLsizei width_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureStorage1D"));
(*fun)(texture_,levels_,internalformat_,width_);
AfterProcess("glTextureStorage1D");

}
GLAPI void APIENTRY glTextureStorage2D (GLuint texture_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureStorage2D"));
(*fun)(texture_,levels_,internalformat_,width_,height_);
AfterProcess("glTextureStorage2D");

}
GLAPI void APIENTRY glTextureStorage3D (GLuint texture_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureStorage3D"));
(*fun)(texture_,levels_,internalformat_,width_,height_,depth_);
AfterProcess("glTextureStorage3D");

}
GLAPI void APIENTRY glTextureStorage2DMultisample (GLuint texture_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureStorage2DMultisample"));
(*fun)(texture_,samples_,internalformat_,width_,height_,fixedsamplelocations_);
AfterProcess("glTextureStorage2DMultisample");

}
GLAPI void APIENTRY glTextureStorage3DMultisample (GLuint texture_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureStorage3DMultisample"));
(*fun)(texture_,samples_,internalformat_,width_,height_,depth_,fixedsamplelocations_);
AfterProcess("glTextureStorage3DMultisample");

}
GLAPI void APIENTRY glTextureSubImage1D (GLuint texture_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLenum type_, const void *pixels_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLenum type_, const void *pixels_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureSubImage1D"));
(*fun)(texture_,level_,xoffset_,width_,format_,type_,pixels_);
AfterProcess("glTextureSubImage1D");

}
GLAPI void APIENTRY glTextureSubImage2D (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *pixels_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *pixels_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureSubImage2D"));
(*fun)(texture_,level_,xoffset_,yoffset_,width_,height_,format_,type_,pixels_);
AfterProcess("glTextureSubImage2D");

}
GLAPI void APIENTRY glTextureSubImage3D (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void *pixels_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void *pixels_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureSubImage3D"));
(*fun)(texture_,level_,xoffset_,yoffset_,zoffset_,width_,height_,depth_,format_,type_,pixels_);
AfterProcess("glTextureSubImage3D");

}
GLAPI void APIENTRY glCompressedTextureSubImage1D (GLuint texture_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLsizei imageSize_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLsizei imageSize_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCompressedTextureSubImage1D"));
(*fun)(texture_,level_,xoffset_,width_,format_,imageSize_,data_);
AfterProcess("glCompressedTextureSubImage1D");

}
GLAPI void APIENTRY glCompressedTextureSubImage2D (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLsizei imageSize_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLsizei imageSize_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCompressedTextureSubImage2D"));
(*fun)(texture_,level_,xoffset_,yoffset_,width_,height_,format_,imageSize_,data_);
AfterProcess("glCompressedTextureSubImage2D");

}
GLAPI void APIENTRY glCompressedTextureSubImage3D (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLsizei imageSize_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLsizei imageSize_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCompressedTextureSubImage3D"));
(*fun)(texture_,level_,xoffset_,yoffset_,zoffset_,width_,height_,depth_,format_,imageSize_,data_);
AfterProcess("glCompressedTextureSubImage3D");

}
GLAPI void APIENTRY glCopyTextureSubImage1D (GLuint texture_, GLint level_, GLint xoffset_, GLint x_, GLint y_, GLsizei width_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLint xoffset_, GLint x_, GLint y_, GLsizei width_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCopyTextureSubImage1D"));
(*fun)(texture_,level_,xoffset_,x_,y_,width_);
AfterProcess("glCopyTextureSubImage1D");

}
GLAPI void APIENTRY glCopyTextureSubImage2D (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCopyTextureSubImage2D"));
(*fun)(texture_,level_,xoffset_,yoffset_,x_,y_,width_,height_);
AfterProcess("glCopyTextureSubImage2D");

}
GLAPI void APIENTRY glCopyTextureSubImage3D (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCopyTextureSubImage3D"));
(*fun)(texture_,level_,xoffset_,yoffset_,zoffset_,x_,y_,width_,height_);
AfterProcess("glCopyTextureSubImage3D");

}
GLAPI void APIENTRY glTextureParameterf (GLuint texture_, GLenum pname_, GLfloat param_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLenum pname_, GLfloat param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureParameterf"));
(*fun)(texture_,pname_,param_);
AfterProcess("glTextureParameterf");

}
GLAPI void APIENTRY glTextureParameterfv (GLuint texture_, GLenum pname_, const GLfloat *param_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLenum pname_, const GLfloat *param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureParameterfv"));
(*fun)(texture_,pname_,param_);
AfterProcess("glTextureParameterfv");

}
GLAPI void APIENTRY glTextureParameteri (GLuint texture_, GLenum pname_, GLint param_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLenum pname_, GLint param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureParameteri"));
(*fun)(texture_,pname_,param_);
AfterProcess("glTextureParameteri");

}
GLAPI void APIENTRY glTextureParameterIiv (GLuint texture_, GLenum pname_, const GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLenum pname_, const GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureParameterIiv"));
(*fun)(texture_,pname_,params_);
AfterProcess("glTextureParameterIiv");

}
GLAPI void APIENTRY glTextureParameterIuiv (GLuint texture_, GLenum pname_, const GLuint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLenum pname_, const GLuint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureParameterIuiv"));
(*fun)(texture_,pname_,params_);
AfterProcess("glTextureParameterIuiv");

}
GLAPI void APIENTRY glTextureParameteriv (GLuint texture_, GLenum pname_, const GLint *param_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLenum pname_, const GLint *param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureParameteriv"));
(*fun)(texture_,pname_,param_);
AfterProcess("glTextureParameteriv");

}
GLAPI void APIENTRY glGenerateTextureMipmap (GLuint texture_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGenerateTextureMipmap"));
(*fun)(texture_);
AfterProcess("glGenerateTextureMipmap");

}
GLAPI void APIENTRY glBindTextureUnit (GLuint unit_, GLuint texture_)
{
typedef void (INTER_CALL *FUNC) (GLuint unit_, GLuint texture_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBindTextureUnit"));
(*fun)(unit_,texture_);
AfterProcess("glBindTextureUnit");

}
GLAPI void APIENTRY glGetTextureImage (GLuint texture_, GLint level_, GLenum format_, GLenum type_, GLsizei bufSize_, void *pixels_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLenum format_, GLenum type_, GLsizei bufSize_, void *pixels_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTextureImage"));
(*fun)(texture_,level_,format_,type_,bufSize_,pixels_);
AfterProcess("glGetTextureImage");

}
GLAPI void APIENTRY glGetCompressedTextureImage (GLuint texture_, GLint level_, GLsizei bufSize_, void *pixels_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLsizei bufSize_, void *pixels_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetCompressedTextureImage"));
(*fun)(texture_,level_,bufSize_,pixels_);
AfterProcess("glGetCompressedTextureImage");

}
GLAPI void APIENTRY glGetTextureLevelParameterfv (GLuint texture_, GLint level_, GLenum pname_, GLfloat *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLenum pname_, GLfloat *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTextureLevelParameterfv"));
(*fun)(texture_,level_,pname_,params_);
AfterProcess("glGetTextureLevelParameterfv");

}
GLAPI void APIENTRY glGetTextureLevelParameteriv (GLuint texture_, GLint level_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTextureLevelParameteriv"));
(*fun)(texture_,level_,pname_,params_);
AfterProcess("glGetTextureLevelParameteriv");

}
GLAPI void APIENTRY glGetTextureParameterfv (GLuint texture_, GLenum pname_, GLfloat *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLenum pname_, GLfloat *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTextureParameterfv"));
(*fun)(texture_,pname_,params_);
AfterProcess("glGetTextureParameterfv");

}
GLAPI void APIENTRY glGetTextureParameterIiv (GLuint texture_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTextureParameterIiv"));
(*fun)(texture_,pname_,params_);
AfterProcess("glGetTextureParameterIiv");

}
GLAPI void APIENTRY glGetTextureParameterIuiv (GLuint texture_, GLenum pname_, GLuint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLenum pname_, GLuint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTextureParameterIuiv"));
(*fun)(texture_,pname_,params_);
AfterProcess("glGetTextureParameterIuiv");

}
GLAPI void APIENTRY glGetTextureParameteriv (GLuint texture_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTextureParameteriv"));
(*fun)(texture_,pname_,params_);
AfterProcess("glGetTextureParameteriv");

}
GLAPI void APIENTRY glCreateVertexArrays (GLsizei n_, GLuint *arrays_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLuint *arrays_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCreateVertexArrays"));
(*fun)(n_,arrays_);
AfterProcess("glCreateVertexArrays");

}
GLAPI void APIENTRY glDisableVertexArrayAttrib (GLuint vaobj_, GLuint index_)
{
typedef void (INTER_CALL *FUNC) (GLuint vaobj_, GLuint index_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDisableVertexArrayAttrib"));
(*fun)(vaobj_,index_);
AfterProcess("glDisableVertexArrayAttrib");

}
GLAPI void APIENTRY glEnableVertexArrayAttrib (GLuint vaobj_, GLuint index_)
{
typedef void (INTER_CALL *FUNC) (GLuint vaobj_, GLuint index_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glEnableVertexArrayAttrib"));
(*fun)(vaobj_,index_);
AfterProcess("glEnableVertexArrayAttrib");

}
GLAPI void APIENTRY glVertexArrayElementBuffer (GLuint vaobj_, GLuint buffer_)
{
typedef void (INTER_CALL *FUNC) (GLuint vaobj_, GLuint buffer_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexArrayElementBuffer"));
(*fun)(vaobj_,buffer_);
AfterProcess("glVertexArrayElementBuffer");

}
GLAPI void APIENTRY glVertexArrayVertexBuffer (GLuint vaobj_, GLuint bindingindex_, GLuint buffer_, GLintptr offset_, GLsizei stride_)
{
typedef void (INTER_CALL *FUNC) (GLuint vaobj_, GLuint bindingindex_, GLuint buffer_, GLintptr offset_, GLsizei stride_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexArrayVertexBuffer"));
(*fun)(vaobj_,bindingindex_,buffer_,offset_,stride_);
AfterProcess("glVertexArrayVertexBuffer");

}
GLAPI void APIENTRY glVertexArrayVertexBuffers (GLuint vaobj_, GLuint first_, GLsizei count_, const GLuint *buffers_, const GLintptr *offsets_, const GLsizei *strides_)
{
typedef void (INTER_CALL *FUNC) (GLuint vaobj_, GLuint first_, GLsizei count_, const GLuint *buffers_, const GLintptr *offsets_, const GLsizei *strides_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexArrayVertexBuffers"));
(*fun)(vaobj_,first_,count_,buffers_,offsets_,strides_);
AfterProcess("glVertexArrayVertexBuffers");

}
GLAPI void APIENTRY glVertexArrayAttribBinding (GLuint vaobj_, GLuint attribindex_, GLuint bindingindex_)
{
typedef void (INTER_CALL *FUNC) (GLuint vaobj_, GLuint attribindex_, GLuint bindingindex_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexArrayAttribBinding"));
(*fun)(vaobj_,attribindex_,bindingindex_);
AfterProcess("glVertexArrayAttribBinding");

}
GLAPI void APIENTRY glVertexArrayAttribFormat (GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLboolean normalized_, GLuint relativeoffset_)
{
typedef void (INTER_CALL *FUNC) (GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLboolean normalized_, GLuint relativeoffset_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexArrayAttribFormat"));
(*fun)(vaobj_,attribindex_,size_,type_,normalized_,relativeoffset_);
AfterProcess("glVertexArrayAttribFormat");

}
GLAPI void APIENTRY glVertexArrayAttribIFormat (GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_)
{
typedef void (INTER_CALL *FUNC) (GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexArrayAttribIFormat"));
(*fun)(vaobj_,attribindex_,size_,type_,relativeoffset_);
AfterProcess("glVertexArrayAttribIFormat");

}
GLAPI void APIENTRY glVertexArrayAttribLFormat (GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_)
{
typedef void (INTER_CALL *FUNC) (GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexArrayAttribLFormat"));
(*fun)(vaobj_,attribindex_,size_,type_,relativeoffset_);
AfterProcess("glVertexArrayAttribLFormat");

}
GLAPI void APIENTRY glVertexArrayBindingDivisor (GLuint vaobj_, GLuint bindingindex_, GLuint divisor_)
{
typedef void (INTER_CALL *FUNC) (GLuint vaobj_, GLuint bindingindex_, GLuint divisor_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexArrayBindingDivisor"));
(*fun)(vaobj_,bindingindex_,divisor_);
AfterProcess("glVertexArrayBindingDivisor");

}
GLAPI void APIENTRY glGetVertexArrayiv (GLuint vaobj_, GLenum pname_, GLint *param_)
{
typedef void (INTER_CALL *FUNC) (GLuint vaobj_, GLenum pname_, GLint *param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetVertexArrayiv"));
(*fun)(vaobj_,pname_,param_);
AfterProcess("glGetVertexArrayiv");

}
GLAPI void APIENTRY glGetVertexArrayIndexediv (GLuint vaobj_, GLuint index_, GLenum pname_, GLint *param_)
{
typedef void (INTER_CALL *FUNC) (GLuint vaobj_, GLuint index_, GLenum pname_, GLint *param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetVertexArrayIndexediv"));
(*fun)(vaobj_,index_,pname_,param_);
AfterProcess("glGetVertexArrayIndexediv");

}
GLAPI void APIENTRY glGetVertexArrayIndexed64iv (GLuint vaobj_, GLuint index_, GLenum pname_, GLint64 *param_)
{
typedef void (INTER_CALL *FUNC) (GLuint vaobj_, GLuint index_, GLenum pname_, GLint64 *param_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetVertexArrayIndexed64iv"));
(*fun)(vaobj_,index_,pname_,param_);
AfterProcess("glGetVertexArrayIndexed64iv");

}
GLAPI void APIENTRY glCreateSamplers (GLsizei n_, GLuint *samplers_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLuint *samplers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCreateSamplers"));
(*fun)(n_,samplers_);
AfterProcess("glCreateSamplers");

}
GLAPI void APIENTRY glCreateProgramPipelines (GLsizei n_, GLuint *pipelines_)
{
typedef void (INTER_CALL *FUNC) (GLsizei n_, GLuint *pipelines_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCreateProgramPipelines"));
(*fun)(n_,pipelines_);
AfterProcess("glCreateProgramPipelines");

}
GLAPI void APIENTRY glCreateQueries (GLenum target_, GLsizei n_, GLuint *ids_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizei n_, GLuint *ids_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCreateQueries"));
(*fun)(target_,n_,ids_);
AfterProcess("glCreateQueries");

}
GLAPI void APIENTRY glGetQueryBufferObjecti64v (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_)
{
typedef void (INTER_CALL *FUNC) (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetQueryBufferObjecti64v"));
(*fun)(id_,buffer_,pname_,offset_);
AfterProcess("glGetQueryBufferObjecti64v");

}
GLAPI void APIENTRY glGetQueryBufferObjectiv (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_)
{
typedef void (INTER_CALL *FUNC) (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetQueryBufferObjectiv"));
(*fun)(id_,buffer_,pname_,offset_);
AfterProcess("glGetQueryBufferObjectiv");

}
GLAPI void APIENTRY glGetQueryBufferObjectui64v (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_)
{
typedef void (INTER_CALL *FUNC) (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetQueryBufferObjectui64v"));
(*fun)(id_,buffer_,pname_,offset_);
AfterProcess("glGetQueryBufferObjectui64v");

}
GLAPI void APIENTRY glGetQueryBufferObjectuiv (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_)
{
typedef void (INTER_CALL *FUNC) (GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetQueryBufferObjectuiv"));
(*fun)(id_,buffer_,pname_,offset_);
AfterProcess("glGetQueryBufferObjectuiv");

}
GLAPI void APIENTRY glMemoryBarrierByRegion (GLbitfield barriers_)
{
typedef void (INTER_CALL *FUNC) (GLbitfield barriers_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMemoryBarrierByRegion"));
(*fun)(barriers_);
AfterProcess("glMemoryBarrierByRegion");

}
GLAPI void APIENTRY glGetTextureSubImage (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, GLsizei bufSize_, void *pixels_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, GLsizei bufSize_, void *pixels_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTextureSubImage"));
(*fun)(texture_,level_,xoffset_,yoffset_,zoffset_,width_,height_,depth_,format_,type_,bufSize_,pixels_);
AfterProcess("glGetTextureSubImage");

}
GLAPI void APIENTRY glGetCompressedTextureSubImage (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLsizei bufSize_, void *pixels_)
{
typedef void (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLsizei bufSize_, void *pixels_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetCompressedTextureSubImage"));
(*fun)(texture_,level_,xoffset_,yoffset_,zoffset_,width_,height_,depth_,bufSize_,pixels_);
AfterProcess("glGetCompressedTextureSubImage");

}
GLAPI GLenum APIENTRY glGetGraphicsResetStatus (void)
{
typedef GLenum (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetGraphicsResetStatus"));
GLenum returnValue = (*fun)();
AfterProcess("glGetGraphicsResetStatus");
return returnValue;
}
GLAPI void APIENTRY glGetnCompressedTexImage (GLenum target_, GLint lod_, GLsizei bufSize_, void *pixels_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint lod_, GLsizei bufSize_, void *pixels_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnCompressedTexImage"));
(*fun)(target_,lod_,bufSize_,pixels_);
AfterProcess("glGetnCompressedTexImage");

}
GLAPI void APIENTRY glGetnTexImage (GLenum target_, GLint level_, GLenum format_, GLenum type_, GLsizei bufSize_, void *pixels_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLenum format_, GLenum type_, GLsizei bufSize_, void *pixels_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnTexImage"));
(*fun)(target_,level_,format_,type_,bufSize_,pixels_);
AfterProcess("glGetnTexImage");

}
GLAPI void APIENTRY glGetnUniformdv (GLuint program_, GLint location_, GLsizei bufSize_, GLdouble *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei bufSize_, GLdouble *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnUniformdv"));
(*fun)(program_,location_,bufSize_,params_);
AfterProcess("glGetnUniformdv");

}
GLAPI void APIENTRY glGetnUniformfv (GLuint program_, GLint location_, GLsizei bufSize_, GLfloat *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei bufSize_, GLfloat *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnUniformfv"));
(*fun)(program_,location_,bufSize_,params_);
AfterProcess("glGetnUniformfv");

}
GLAPI void APIENTRY glGetnUniformiv (GLuint program_, GLint location_, GLsizei bufSize_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei bufSize_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnUniformiv"));
(*fun)(program_,location_,bufSize_,params_);
AfterProcess("glGetnUniformiv");

}
GLAPI void APIENTRY glGetnUniformuiv (GLuint program_, GLint location_, GLsizei bufSize_, GLuint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei bufSize_, GLuint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnUniformuiv"));
(*fun)(program_,location_,bufSize_,params_);
AfterProcess("glGetnUniformuiv");

}
GLAPI void APIENTRY glReadnPixels (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, GLsizei bufSize_, void *data_)
{
typedef void (INTER_CALL *FUNC) (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, GLsizei bufSize_, void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glReadnPixels"));
(*fun)(x_,y_,width_,height_,format_,type_,bufSize_,data_);
AfterProcess("glReadnPixels");

}
GLAPI void APIENTRY glGetnMapdv (GLenum target_, GLenum query_, GLsizei bufSize_, GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum query_, GLsizei bufSize_, GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnMapdv"));
(*fun)(target_,query_,bufSize_,v_);
AfterProcess("glGetnMapdv");

}
GLAPI void APIENTRY glGetnMapfv (GLenum target_, GLenum query_, GLsizei bufSize_, GLfloat *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum query_, GLsizei bufSize_, GLfloat *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnMapfv"));
(*fun)(target_,query_,bufSize_,v_);
AfterProcess("glGetnMapfv");

}
GLAPI void APIENTRY glGetnMapiv (GLenum target_, GLenum query_, GLsizei bufSize_, GLint *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum query_, GLsizei bufSize_, GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnMapiv"));
(*fun)(target_,query_,bufSize_,v_);
AfterProcess("glGetnMapiv");

}
GLAPI void APIENTRY glGetnPixelMapfv (GLenum map_, GLsizei bufSize_, GLfloat *values_)
{
typedef void (INTER_CALL *FUNC) (GLenum map_, GLsizei bufSize_, GLfloat *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnPixelMapfv"));
(*fun)(map_,bufSize_,values_);
AfterProcess("glGetnPixelMapfv");

}
GLAPI void APIENTRY glGetnPixelMapuiv (GLenum map_, GLsizei bufSize_, GLuint *values_)
{
typedef void (INTER_CALL *FUNC) (GLenum map_, GLsizei bufSize_, GLuint *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnPixelMapuiv"));
(*fun)(map_,bufSize_,values_);
AfterProcess("glGetnPixelMapuiv");

}
GLAPI void APIENTRY glGetnPixelMapusv (GLenum map_, GLsizei bufSize_, GLushort *values_)
{
typedef void (INTER_CALL *FUNC) (GLenum map_, GLsizei bufSize_, GLushort *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnPixelMapusv"));
(*fun)(map_,bufSize_,values_);
AfterProcess("glGetnPixelMapusv");

}
GLAPI void APIENTRY glGetnPolygonStipple (GLsizei bufSize_, GLubyte *pattern_)
{
typedef void (INTER_CALL *FUNC) (GLsizei bufSize_, GLubyte *pattern_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnPolygonStipple"));
(*fun)(bufSize_,pattern_);
AfterProcess("glGetnPolygonStipple");

}
GLAPI void APIENTRY glGetnColorTable (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *table_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *table_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnColorTable"));
(*fun)(target_,format_,type_,bufSize_,table_);
AfterProcess("glGetnColorTable");

}
GLAPI void APIENTRY glGetnConvolutionFilter (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *image_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *image_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnConvolutionFilter"));
(*fun)(target_,format_,type_,bufSize_,image_);
AfterProcess("glGetnConvolutionFilter");

}
GLAPI void APIENTRY glGetnSeparableFilter (GLenum target_, GLenum format_, GLenum type_, GLsizei rowBufSize_, void *row_, GLsizei columnBufSize_, void *column_, void *span_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum format_, GLenum type_, GLsizei rowBufSize_, void *row_, GLsizei columnBufSize_, void *column_, void *span_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnSeparableFilter"));
(*fun)(target_,format_,type_,rowBufSize_,row_,columnBufSize_,column_,span_);
AfterProcess("glGetnSeparableFilter");

}
GLAPI void APIENTRY glGetnHistogram (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnHistogram"));
(*fun)(target_,reset_,format_,type_,bufSize_,values_);
AfterProcess("glGetnHistogram");

}
GLAPI void APIENTRY glGetnMinmax (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnMinmax"));
(*fun)(target_,reset_,format_,type_,bufSize_,values_);
AfterProcess("glGetnMinmax");

}
GLAPI void APIENTRY glTextureBarrier (void)
{
typedef void (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTextureBarrier"));
(*fun)();
AfterProcess("glTextureBarrier");

}
#endif /* GL_VERSION_4_5 */

#ifdef GL_ARB_ES2_compatibility
#endif /* GL_ARB_ES2_compatibility */

#ifdef GL_ARB_ES3_1_compatibility
#endif /* GL_ARB_ES3_1_compatibility */

#ifdef GL_ARB_ES3_compatibility
#endif /* GL_ARB_ES3_compatibility */

#ifdef GL_ARB_arrays_of_arrays
#endif /* GL_ARB_arrays_of_arrays */

#ifdef GL_ARB_base_instance
#endif /* GL_ARB_base_instance */

#ifdef GL_ARB_bindless_texture
GLAPI GLuint64 APIENTRY glGetTextureHandleARB (GLuint texture_)
{
typedef GLuint64 (INTER_CALL *FUNC) (GLuint texture_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTextureHandleARB"));
GLuint64 returnValue = (*fun)(texture_);
AfterProcess("glGetTextureHandleARB");
return returnValue;
}
GLAPI GLuint64 APIENTRY glGetTextureSamplerHandleARB (GLuint texture_, GLuint sampler_)
{
typedef GLuint64 (INTER_CALL *FUNC) (GLuint texture_, GLuint sampler_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetTextureSamplerHandleARB"));
GLuint64 returnValue = (*fun)(texture_,sampler_);
AfterProcess("glGetTextureSamplerHandleARB");
return returnValue;
}
GLAPI void APIENTRY glMakeTextureHandleResidentARB (GLuint64 handle_)
{
typedef void (INTER_CALL *FUNC) (GLuint64 handle_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMakeTextureHandleResidentARB"));
(*fun)(handle_);
AfterProcess("glMakeTextureHandleResidentARB");

}
GLAPI void APIENTRY glMakeTextureHandleNonResidentARB (GLuint64 handle_)
{
typedef void (INTER_CALL *FUNC) (GLuint64 handle_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMakeTextureHandleNonResidentARB"));
(*fun)(handle_);
AfterProcess("glMakeTextureHandleNonResidentARB");

}
GLAPI GLuint64 APIENTRY glGetImageHandleARB (GLuint texture_, GLint level_, GLboolean layered_, GLint layer_, GLenum format_)
{
typedef GLuint64 (INTER_CALL *FUNC) (GLuint texture_, GLint level_, GLboolean layered_, GLint layer_, GLenum format_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetImageHandleARB"));
GLuint64 returnValue = (*fun)(texture_,level_,layered_,layer_,format_);
AfterProcess("glGetImageHandleARB");
return returnValue;
}
GLAPI void APIENTRY glMakeImageHandleResidentARB (GLuint64 handle_, GLenum access_)
{
typedef void (INTER_CALL *FUNC) (GLuint64 handle_, GLenum access_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMakeImageHandleResidentARB"));
(*fun)(handle_,access_);
AfterProcess("glMakeImageHandleResidentARB");

}
GLAPI void APIENTRY glMakeImageHandleNonResidentARB (GLuint64 handle_)
{
typedef void (INTER_CALL *FUNC) (GLuint64 handle_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMakeImageHandleNonResidentARB"));
(*fun)(handle_);
AfterProcess("glMakeImageHandleNonResidentARB");

}
GLAPI void APIENTRY glUniformHandleui64ARB (GLint location_, GLuint64 value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLuint64 value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformHandleui64ARB"));
(*fun)(location_,value_);
AfterProcess("glUniformHandleui64ARB");

}
GLAPI void APIENTRY glUniformHandleui64vARB (GLint location_, GLsizei count_, const GLuint64 *value_)
{
typedef void (INTER_CALL *FUNC) (GLint location_, GLsizei count_, const GLuint64 *value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glUniformHandleui64vARB"));
(*fun)(location_,count_,value_);
AfterProcess("glUniformHandleui64vARB");

}
GLAPI void APIENTRY glProgramUniformHandleui64ARB (GLuint program_, GLint location_, GLuint64 value_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLuint64 value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformHandleui64ARB"));
(*fun)(program_,location_,value_);
AfterProcess("glProgramUniformHandleui64ARB");

}
GLAPI void APIENTRY glProgramUniformHandleui64vARB (GLuint program_, GLint location_, GLsizei count_, const GLuint64 *values_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei count_, const GLuint64 *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glProgramUniformHandleui64vARB"));
(*fun)(program_,location_,count_,values_);
AfterProcess("glProgramUniformHandleui64vARB");

}
GLAPI GLboolean APIENTRY glIsTextureHandleResidentARB (GLuint64 handle_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLuint64 handle_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsTextureHandleResidentARB"));
GLboolean returnValue = (*fun)(handle_);
AfterProcess("glIsTextureHandleResidentARB");
return returnValue;
}
GLAPI GLboolean APIENTRY glIsImageHandleResidentARB (GLuint64 handle_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLuint64 handle_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsImageHandleResidentARB"));
GLboolean returnValue = (*fun)(handle_);
AfterProcess("glIsImageHandleResidentARB");
return returnValue;
}
GLAPI void APIENTRY glVertexAttribL1ui64ARB (GLuint index_, GLuint64EXT x_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLuint64EXT x_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribL1ui64ARB"));
(*fun)(index_,x_);
AfterProcess("glVertexAttribL1ui64ARB");

}
GLAPI void APIENTRY glVertexAttribL1ui64vARB (GLuint index_, const GLuint64EXT *v_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, const GLuint64EXT *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glVertexAttribL1ui64vARB"));
(*fun)(index_,v_);
AfterProcess("glVertexAttribL1ui64vARB");

}
GLAPI void APIENTRY glGetVertexAttribLui64vARB (GLuint index_, GLenum pname_, GLuint64EXT *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint index_, GLenum pname_, GLuint64EXT *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetVertexAttribLui64vARB"));
(*fun)(index_,pname_,params_);
AfterProcess("glGetVertexAttribLui64vARB");

}
#endif /* GL_ARB_bindless_texture */

#ifdef GL_ARB_blend_func_extended
#endif /* GL_ARB_blend_func_extended */

#ifdef GL_ARB_buffer_storage
#endif /* GL_ARB_buffer_storage */

#ifdef GL_ARB_cl_event
GLAPI GLsync APIENTRY glCreateSyncFromCLeventARB (struct _cl_context *context_, struct _cl_event *event_, GLbitfield flags_)
{
typedef GLsync (INTER_CALL *FUNC) (struct _cl_context *context_, struct _cl_event *event_, GLbitfield flags_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCreateSyncFromCLeventARB"));
GLsync returnValue = (*fun)(context_,event_,flags_);
AfterProcess("glCreateSyncFromCLeventARB");
return returnValue;
}
#endif /* GL_ARB_cl_event */

#ifdef GL_ARB_clear_buffer_object
#endif /* GL_ARB_clear_buffer_object */

#ifdef GL_ARB_clear_texture
#endif /* GL_ARB_clear_texture */

#ifdef GL_ARB_clip_control
#endif /* GL_ARB_clip_control */

#ifdef GL_ARB_compressed_texture_pixel_storage
#endif /* GL_ARB_compressed_texture_pixel_storage */

#ifdef GL_ARB_compute_shader
#endif /* GL_ARB_compute_shader */

#ifdef GL_ARB_compute_variable_group_size
GLAPI void APIENTRY glDispatchComputeGroupSizeARB (GLuint num_groups_x_, GLuint num_groups_y_, GLuint num_groups_z_, GLuint group_size_x_, GLuint group_size_y_, GLuint group_size_z_)
{
typedef void (INTER_CALL *FUNC) (GLuint num_groups_x_, GLuint num_groups_y_, GLuint num_groups_z_, GLuint group_size_x_, GLuint group_size_y_, GLuint group_size_z_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDispatchComputeGroupSizeARB"));
(*fun)(num_groups_x_,num_groups_y_,num_groups_z_,group_size_x_,group_size_y_,group_size_z_);
AfterProcess("glDispatchComputeGroupSizeARB");

}
#endif /* GL_ARB_compute_variable_group_size */

#ifdef GL_ARB_conditional_render_inverted
#endif /* GL_ARB_conditional_render_inverted */

#ifdef GL_ARB_conservative_depth
#endif /* GL_ARB_conservative_depth */

#ifdef GL_ARB_copy_buffer
#endif /* GL_ARB_copy_buffer */

#ifdef GL_ARB_copy_image
#endif /* GL_ARB_copy_image */

#ifdef GL_ARB_cull_distance
#endif /* GL_ARB_cull_distance */

#ifdef GL_ARB_debug_output
GLAPI void APIENTRY glDebugMessageControlARB (GLenum source_, GLenum type_, GLenum severity_, GLsizei count_, const GLuint *ids_, GLboolean enabled_)
{
typedef void (INTER_CALL *FUNC) (GLenum source_, GLenum type_, GLenum severity_, GLsizei count_, const GLuint *ids_, GLboolean enabled_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDebugMessageControlARB"));
(*fun)(source_,type_,severity_,count_,ids_,enabled_);
AfterProcess("glDebugMessageControlARB");

}
GLAPI void APIENTRY glDebugMessageInsertARB (GLenum source_, GLenum type_, GLuint id_, GLenum severity_, GLsizei length_, const GLchar *buf_)
{
typedef void (INTER_CALL *FUNC) (GLenum source_, GLenum type_, GLuint id_, GLenum severity_, GLsizei length_, const GLchar *buf_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDebugMessageInsertARB"));
(*fun)(source_,type_,id_,severity_,length_,buf_);
AfterProcess("glDebugMessageInsertARB");

}
GLAPI void APIENTRY glDebugMessageCallbackARB (GLDEBUGPROCARB callback_, const void *userParam_)
{
typedef void (INTER_CALL *FUNC) (GLDEBUGPROCARB callback_, const void *userParam_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDebugMessageCallbackARB"));
(*fun)(callback_,userParam_);
AfterProcess("glDebugMessageCallbackARB");

}
GLAPI GLuint APIENTRY glGetDebugMessageLogARB (GLuint count_, GLsizei bufSize_, GLenum *sources_, GLenum *types_, GLuint *ids_, GLenum *severities_, GLsizei *lengths_, GLchar *messageLog_)
{
typedef GLuint (INTER_CALL *FUNC) (GLuint count_, GLsizei bufSize_, GLenum *sources_, GLenum *types_, GLuint *ids_, GLenum *severities_, GLsizei *lengths_, GLchar *messageLog_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetDebugMessageLogARB"));
GLuint returnValue = (*fun)(count_,bufSize_,sources_,types_,ids_,severities_,lengths_,messageLog_);
AfterProcess("glGetDebugMessageLogARB");
return returnValue;
}
#endif /* GL_ARB_debug_output */

#ifdef GL_ARB_depth_buffer_float
#endif /* GL_ARB_depth_buffer_float */

#ifdef GL_ARB_depth_clamp
#endif /* GL_ARB_depth_clamp */

#ifdef GL_ARB_derivative_control
#endif /* GL_ARB_derivative_control */

#ifdef GL_ARB_direct_state_access
#endif /* GL_ARB_direct_state_access */

#ifdef GL_ARB_draw_buffers_blend
GLAPI void APIENTRY glBlendEquationiARB (GLuint buf_, GLenum mode_)
{
typedef void (INTER_CALL *FUNC) (GLuint buf_, GLenum mode_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBlendEquationiARB"));
(*fun)(buf_,mode_);
AfterProcess("glBlendEquationiARB");

}
GLAPI void APIENTRY glBlendEquationSeparateiARB (GLuint buf_, GLenum modeRGB_, GLenum modeAlpha_)
{
typedef void (INTER_CALL *FUNC) (GLuint buf_, GLenum modeRGB_, GLenum modeAlpha_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBlendEquationSeparateiARB"));
(*fun)(buf_,modeRGB_,modeAlpha_);
AfterProcess("glBlendEquationSeparateiARB");

}
GLAPI void APIENTRY glBlendFunciARB (GLuint buf_, GLenum src_, GLenum dst_)
{
typedef void (INTER_CALL *FUNC) (GLuint buf_, GLenum src_, GLenum dst_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBlendFunciARB"));
(*fun)(buf_,src_,dst_);
AfterProcess("glBlendFunciARB");

}
GLAPI void APIENTRY glBlendFuncSeparateiARB (GLuint buf_, GLenum srcRGB_, GLenum dstRGB_, GLenum srcAlpha_, GLenum dstAlpha_)
{
typedef void (INTER_CALL *FUNC) (GLuint buf_, GLenum srcRGB_, GLenum dstRGB_, GLenum srcAlpha_, GLenum dstAlpha_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBlendFuncSeparateiARB"));
(*fun)(buf_,srcRGB_,dstRGB_,srcAlpha_,dstAlpha_);
AfterProcess("glBlendFuncSeparateiARB");

}
#endif /* GL_ARB_draw_buffers_blend */

#ifdef GL_ARB_draw_elements_base_vertex
#endif /* GL_ARB_draw_elements_base_vertex */

#ifdef GL_ARB_draw_indirect
#endif /* GL_ARB_draw_indirect */

#ifdef GL_ARB_enhanced_layouts
#endif /* GL_ARB_enhanced_layouts */

#ifdef GL_ARB_explicit_attrib_location
#endif /* GL_ARB_explicit_attrib_location */

#ifdef GL_ARB_explicit_uniform_location
#endif /* GL_ARB_explicit_uniform_location */

#ifdef GL_ARB_fragment_coord_conventions
#endif /* GL_ARB_fragment_coord_conventions */

#ifdef GL_ARB_fragment_layer_viewport
#endif /* GL_ARB_fragment_layer_viewport */

#ifdef GL_ARB_framebuffer_no_attachments
#endif /* GL_ARB_framebuffer_no_attachments */

#ifdef GL_ARB_framebuffer_object
#endif /* GL_ARB_framebuffer_object */

#ifdef GL_ARB_framebuffer_sRGB
#endif /* GL_ARB_framebuffer_sRGB */

#ifdef GL_ARB_get_program_binary
#endif /* GL_ARB_get_program_binary */

#ifdef GL_ARB_get_texture_sub_image
#endif /* GL_ARB_get_texture_sub_image */

#ifdef GL_ARB_gpu_shader5
#endif /* GL_ARB_gpu_shader5 */

#ifdef GL_ARB_gpu_shader_fp64
#endif /* GL_ARB_gpu_shader_fp64 */

#ifdef GL_ARB_half_float_vertex
#endif /* GL_ARB_half_float_vertex */

#ifdef GL_ARB_imaging
GLAPI void APIENTRY glColorTable (GLenum target_, GLenum internalformat_, GLsizei width_, GLenum format_, GLenum type_, const void *table_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum internalformat_, GLsizei width_, GLenum format_, GLenum type_, const void *table_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glColorTable"));
(*fun)(target_,internalformat_,width_,format_,type_,table_);
AfterProcess("glColorTable");

}
GLAPI void APIENTRY glColorTableParameterfv (GLenum target_, GLenum pname_, const GLfloat *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, const GLfloat *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glColorTableParameterfv"));
(*fun)(target_,pname_,params_);
AfterProcess("glColorTableParameterfv");

}
GLAPI void APIENTRY glColorTableParameteriv (GLenum target_, GLenum pname_, const GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, const GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glColorTableParameteriv"));
(*fun)(target_,pname_,params_);
AfterProcess("glColorTableParameteriv");

}
GLAPI void APIENTRY glCopyColorTable (GLenum target_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCopyColorTable"));
(*fun)(target_,internalformat_,x_,y_,width_);
AfterProcess("glCopyColorTable");

}
GLAPI void APIENTRY glGetColorTable (GLenum target_, GLenum format_, GLenum type_, void *table_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum format_, GLenum type_, void *table_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetColorTable"));
(*fun)(target_,format_,type_,table_);
AfterProcess("glGetColorTable");

}
GLAPI void APIENTRY glGetColorTableParameterfv (GLenum target_, GLenum pname_, GLfloat *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLfloat *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetColorTableParameterfv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetColorTableParameterfv");

}
GLAPI void APIENTRY glGetColorTableParameteriv (GLenum target_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetColorTableParameteriv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetColorTableParameteriv");

}
GLAPI void APIENTRY glColorSubTable (GLenum target_, GLsizei start_, GLsizei count_, GLenum format_, GLenum type_, const void *data_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizei start_, GLsizei count_, GLenum format_, GLenum type_, const void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glColorSubTable"));
(*fun)(target_,start_,count_,format_,type_,data_);
AfterProcess("glColorSubTable");

}
GLAPI void APIENTRY glCopyColorSubTable (GLenum target_, GLsizei start_, GLint x_, GLint y_, GLsizei width_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizei start_, GLint x_, GLint y_, GLsizei width_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCopyColorSubTable"));
(*fun)(target_,start_,x_,y_,width_);
AfterProcess("glCopyColorSubTable");

}
GLAPI void APIENTRY glConvolutionFilter1D (GLenum target_, GLenum internalformat_, GLsizei width_, GLenum format_, GLenum type_, const void *image_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum internalformat_, GLsizei width_, GLenum format_, GLenum type_, const void *image_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glConvolutionFilter1D"));
(*fun)(target_,internalformat_,width_,format_,type_,image_);
AfterProcess("glConvolutionFilter1D");

}
GLAPI void APIENTRY glConvolutionFilter2D (GLenum target_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *image_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *image_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glConvolutionFilter2D"));
(*fun)(target_,internalformat_,width_,height_,format_,type_,image_);
AfterProcess("glConvolutionFilter2D");

}
GLAPI void APIENTRY glConvolutionParameterf (GLenum target_, GLenum pname_, GLfloat params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLfloat params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glConvolutionParameterf"));
(*fun)(target_,pname_,params_);
AfterProcess("glConvolutionParameterf");

}
GLAPI void APIENTRY glConvolutionParameterfv (GLenum target_, GLenum pname_, const GLfloat *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, const GLfloat *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glConvolutionParameterfv"));
(*fun)(target_,pname_,params_);
AfterProcess("glConvolutionParameterfv");

}
GLAPI void APIENTRY glConvolutionParameteri (GLenum target_, GLenum pname_, GLint params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glConvolutionParameteri"));
(*fun)(target_,pname_,params_);
AfterProcess("glConvolutionParameteri");

}
GLAPI void APIENTRY glConvolutionParameteriv (GLenum target_, GLenum pname_, const GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, const GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glConvolutionParameteriv"));
(*fun)(target_,pname_,params_);
AfterProcess("glConvolutionParameteriv");

}
GLAPI void APIENTRY glCopyConvolutionFilter1D (GLenum target_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCopyConvolutionFilter1D"));
(*fun)(target_,internalformat_,x_,y_,width_);
AfterProcess("glCopyConvolutionFilter1D");

}
GLAPI void APIENTRY glCopyConvolutionFilter2D (GLenum target_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCopyConvolutionFilter2D"));
(*fun)(target_,internalformat_,x_,y_,width_,height_);
AfterProcess("glCopyConvolutionFilter2D");

}
GLAPI void APIENTRY glGetConvolutionFilter (GLenum target_, GLenum format_, GLenum type_, void *image_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum format_, GLenum type_, void *image_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetConvolutionFilter"));
(*fun)(target_,format_,type_,image_);
AfterProcess("glGetConvolutionFilter");

}
GLAPI void APIENTRY glGetConvolutionParameterfv (GLenum target_, GLenum pname_, GLfloat *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLfloat *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetConvolutionParameterfv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetConvolutionParameterfv");

}
GLAPI void APIENTRY glGetConvolutionParameteriv (GLenum target_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetConvolutionParameteriv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetConvolutionParameteriv");

}
GLAPI void APIENTRY glGetSeparableFilter (GLenum target_, GLenum format_, GLenum type_, void *row_, void *column_, void *span_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum format_, GLenum type_, void *row_, void *column_, void *span_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetSeparableFilter"));
(*fun)(target_,format_,type_,row_,column_,span_);
AfterProcess("glGetSeparableFilter");

}
GLAPI void APIENTRY glSeparableFilter2D (GLenum target_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *row_, const void *column_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void *row_, const void *column_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glSeparableFilter2D"));
(*fun)(target_,internalformat_,width_,height_,format_,type_,row_,column_);
AfterProcess("glSeparableFilter2D");

}
GLAPI void APIENTRY glGetHistogram (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, void *values_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, void *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetHistogram"));
(*fun)(target_,reset_,format_,type_,values_);
AfterProcess("glGetHistogram");

}
GLAPI void APIENTRY glGetHistogramParameterfv (GLenum target_, GLenum pname_, GLfloat *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLfloat *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetHistogramParameterfv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetHistogramParameterfv");

}
GLAPI void APIENTRY glGetHistogramParameteriv (GLenum target_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetHistogramParameteriv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetHistogramParameteriv");

}
GLAPI void APIENTRY glGetMinmax (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, void *values_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, void *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetMinmax"));
(*fun)(target_,reset_,format_,type_,values_);
AfterProcess("glGetMinmax");

}
GLAPI void APIENTRY glGetMinmaxParameterfv (GLenum target_, GLenum pname_, GLfloat *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLfloat *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetMinmaxParameterfv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetMinmaxParameterfv");

}
GLAPI void APIENTRY glGetMinmaxParameteriv (GLenum target_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetMinmaxParameteriv"));
(*fun)(target_,pname_,params_);
AfterProcess("glGetMinmaxParameteriv");

}
GLAPI void APIENTRY glHistogram (GLenum target_, GLsizei width_, GLenum internalformat_, GLboolean sink_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLsizei width_, GLenum internalformat_, GLboolean sink_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glHistogram"));
(*fun)(target_,width_,internalformat_,sink_);
AfterProcess("glHistogram");

}
GLAPI void APIENTRY glMinmax (GLenum target_, GLenum internalformat_, GLboolean sink_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum internalformat_, GLboolean sink_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMinmax"));
(*fun)(target_,internalformat_,sink_);
AfterProcess("glMinmax");

}
GLAPI void APIENTRY glResetHistogram (GLenum target_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glResetHistogram"));
(*fun)(target_);
AfterProcess("glResetHistogram");

}
GLAPI void APIENTRY glResetMinmax (GLenum target_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glResetMinmax"));
(*fun)(target_);
AfterProcess("glResetMinmax");

}
#endif /* GL_ARB_imaging */

#ifdef GL_ARB_indirect_parameters
GLAPI void APIENTRY glMultiDrawArraysIndirectCountARB (GLenum mode_, GLintptr indirect_, GLintptr drawcount_, GLsizei maxdrawcount_, GLsizei stride_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLintptr indirect_, GLintptr drawcount_, GLsizei maxdrawcount_, GLsizei stride_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiDrawArraysIndirectCountARB"));
(*fun)(mode_,indirect_,drawcount_,maxdrawcount_,stride_);
AfterProcess("glMultiDrawArraysIndirectCountARB");

}
GLAPI void APIENTRY glMultiDrawElementsIndirectCountARB (GLenum mode_, GLenum type_, GLintptr indirect_, GLintptr drawcount_, GLsizei maxdrawcount_, GLsizei stride_)
{
typedef void (INTER_CALL *FUNC) (GLenum mode_, GLenum type_, GLintptr indirect_, GLintptr drawcount_, GLsizei maxdrawcount_, GLsizei stride_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMultiDrawElementsIndirectCountARB"));
(*fun)(mode_,type_,indirect_,drawcount_,maxdrawcount_,stride_);
AfterProcess("glMultiDrawElementsIndirectCountARB");

}
#endif /* GL_ARB_indirect_parameters */

#ifdef GL_ARB_internalformat_query
#endif /* GL_ARB_internalformat_query */

#ifdef GL_ARB_internalformat_query2
#endif /* GL_ARB_internalformat_query2 */

#ifdef GL_ARB_invalidate_subdata
#endif /* GL_ARB_invalidate_subdata */

#ifdef GL_ARB_map_buffer_alignment
#endif /* GL_ARB_map_buffer_alignment */

#ifdef GL_ARB_map_buffer_range
#endif /* GL_ARB_map_buffer_range */

#ifdef GL_ARB_multi_bind
#endif /* GL_ARB_multi_bind */

#ifdef GL_ARB_multi_draw_indirect
#endif /* GL_ARB_multi_draw_indirect */

#ifdef GL_ARB_occlusion_query2
#endif /* GL_ARB_occlusion_query2 */

#ifdef GL_ARB_pipeline_statistics_query
#endif /* GL_ARB_pipeline_statistics_query */

#ifdef GL_ARB_program_interface_query
#endif /* GL_ARB_program_interface_query */

#ifdef GL_ARB_provoking_vertex
#endif /* GL_ARB_provoking_vertex */

#ifdef GL_ARB_query_buffer_object
#endif /* GL_ARB_query_buffer_object */

#ifdef GL_ARB_robust_buffer_access_behavior
#endif /* GL_ARB_robust_buffer_access_behavior */

#ifdef GL_ARB_robustness
GLAPI GLenum APIENTRY glGetGraphicsResetStatusARB (void)
{
typedef GLenum (INTER_CALL *FUNC) (void);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetGraphicsResetStatusARB"));
GLenum returnValue = (*fun)();
AfterProcess("glGetGraphicsResetStatusARB");
return returnValue;
}
GLAPI void APIENTRY glGetnTexImageARB (GLenum target_, GLint level_, GLenum format_, GLenum type_, GLsizei bufSize_, void *img_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLenum format_, GLenum type_, GLsizei bufSize_, void *img_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnTexImageARB"));
(*fun)(target_,level_,format_,type_,bufSize_,img_);
AfterProcess("glGetnTexImageARB");

}
GLAPI void APIENTRY glReadnPixelsARB (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, GLsizei bufSize_, void *data_)
{
typedef void (INTER_CALL *FUNC) (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, GLsizei bufSize_, void *data_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glReadnPixelsARB"));
(*fun)(x_,y_,width_,height_,format_,type_,bufSize_,data_);
AfterProcess("glReadnPixelsARB");

}
GLAPI void APIENTRY glGetnCompressedTexImageARB (GLenum target_, GLint lod_, GLsizei bufSize_, void *img_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint lod_, GLsizei bufSize_, void *img_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnCompressedTexImageARB"));
(*fun)(target_,lod_,bufSize_,img_);
AfterProcess("glGetnCompressedTexImageARB");

}
GLAPI void APIENTRY glGetnUniformfvARB (GLuint program_, GLint location_, GLsizei bufSize_, GLfloat *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei bufSize_, GLfloat *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnUniformfvARB"));
(*fun)(program_,location_,bufSize_,params_);
AfterProcess("glGetnUniformfvARB");

}
GLAPI void APIENTRY glGetnUniformivARB (GLuint program_, GLint location_, GLsizei bufSize_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei bufSize_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnUniformivARB"));
(*fun)(program_,location_,bufSize_,params_);
AfterProcess("glGetnUniformivARB");

}
GLAPI void APIENTRY glGetnUniformuivARB (GLuint program_, GLint location_, GLsizei bufSize_, GLuint *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei bufSize_, GLuint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnUniformuivARB"));
(*fun)(program_,location_,bufSize_,params_);
AfterProcess("glGetnUniformuivARB");

}
GLAPI void APIENTRY glGetnUniformdvARB (GLuint program_, GLint location_, GLsizei bufSize_, GLdouble *params_)
{
typedef void (INTER_CALL *FUNC) (GLuint program_, GLint location_, GLsizei bufSize_, GLdouble *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnUniformdvARB"));
(*fun)(program_,location_,bufSize_,params_);
AfterProcess("glGetnUniformdvARB");

}
GLAPI void APIENTRY glGetnMapdvARB (GLenum target_, GLenum query_, GLsizei bufSize_, GLdouble *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum query_, GLsizei bufSize_, GLdouble *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnMapdvARB"));
(*fun)(target_,query_,bufSize_,v_);
AfterProcess("glGetnMapdvARB");

}
GLAPI void APIENTRY glGetnMapfvARB (GLenum target_, GLenum query_, GLsizei bufSize_, GLfloat *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum query_, GLsizei bufSize_, GLfloat *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnMapfvARB"));
(*fun)(target_,query_,bufSize_,v_);
AfterProcess("glGetnMapfvARB");

}
GLAPI void APIENTRY glGetnMapivARB (GLenum target_, GLenum query_, GLsizei bufSize_, GLint *v_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum query_, GLsizei bufSize_, GLint *v_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnMapivARB"));
(*fun)(target_,query_,bufSize_,v_);
AfterProcess("glGetnMapivARB");

}
GLAPI void APIENTRY glGetnPixelMapfvARB (GLenum map_, GLsizei bufSize_, GLfloat *values_)
{
typedef void (INTER_CALL *FUNC) (GLenum map_, GLsizei bufSize_, GLfloat *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnPixelMapfvARB"));
(*fun)(map_,bufSize_,values_);
AfterProcess("glGetnPixelMapfvARB");

}
GLAPI void APIENTRY glGetnPixelMapuivARB (GLenum map_, GLsizei bufSize_, GLuint *values_)
{
typedef void (INTER_CALL *FUNC) (GLenum map_, GLsizei bufSize_, GLuint *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnPixelMapuivARB"));
(*fun)(map_,bufSize_,values_);
AfterProcess("glGetnPixelMapuivARB");

}
GLAPI void APIENTRY glGetnPixelMapusvARB (GLenum map_, GLsizei bufSize_, GLushort *values_)
{
typedef void (INTER_CALL *FUNC) (GLenum map_, GLsizei bufSize_, GLushort *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnPixelMapusvARB"));
(*fun)(map_,bufSize_,values_);
AfterProcess("glGetnPixelMapusvARB");

}
GLAPI void APIENTRY glGetnPolygonStippleARB (GLsizei bufSize_, GLubyte *pattern_)
{
typedef void (INTER_CALL *FUNC) (GLsizei bufSize_, GLubyte *pattern_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnPolygonStippleARB"));
(*fun)(bufSize_,pattern_);
AfterProcess("glGetnPolygonStippleARB");

}
GLAPI void APIENTRY glGetnColorTableARB (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *table_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *table_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnColorTableARB"));
(*fun)(target_,format_,type_,bufSize_,table_);
AfterProcess("glGetnColorTableARB");

}
GLAPI void APIENTRY glGetnConvolutionFilterARB (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *image_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void *image_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnConvolutionFilterARB"));
(*fun)(target_,format_,type_,bufSize_,image_);
AfterProcess("glGetnConvolutionFilterARB");

}
GLAPI void APIENTRY glGetnSeparableFilterARB (GLenum target_, GLenum format_, GLenum type_, GLsizei rowBufSize_, void *row_, GLsizei columnBufSize_, void *column_, void *span_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLenum format_, GLenum type_, GLsizei rowBufSize_, void *row_, GLsizei columnBufSize_, void *column_, void *span_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnSeparableFilterARB"));
(*fun)(target_,format_,type_,rowBufSize_,row_,columnBufSize_,column_,span_);
AfterProcess("glGetnSeparableFilterARB");

}
GLAPI void APIENTRY glGetnHistogramARB (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnHistogramARB"));
(*fun)(target_,reset_,format_,type_,bufSize_,values_);
AfterProcess("glGetnHistogramARB");

}
GLAPI void APIENTRY glGetnMinmaxARB (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void *values_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetnMinmaxARB"));
(*fun)(target_,reset_,format_,type_,bufSize_,values_);
AfterProcess("glGetnMinmaxARB");

}
#endif /* GL_ARB_robustness */

#ifdef GL_ARB_robustness_isolation
#endif /* GL_ARB_robustness_isolation */

#ifdef GL_ARB_sample_shading
GLAPI void APIENTRY glMinSampleShadingARB (GLfloat value_)
{
typedef void (INTER_CALL *FUNC) (GLfloat value_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glMinSampleShadingARB"));
(*fun)(value_);
AfterProcess("glMinSampleShadingARB");

}
#endif /* GL_ARB_sample_shading */

#ifdef GL_ARB_sampler_objects
#endif /* GL_ARB_sampler_objects */

#ifdef GL_ARB_seamless_cube_map
#endif /* GL_ARB_seamless_cube_map */

#ifdef GL_ARB_seamless_cubemap_per_texture
#endif /* GL_ARB_seamless_cubemap_per_texture */

#ifdef GL_ARB_separate_shader_objects
#endif /* GL_ARB_separate_shader_objects */

#ifdef GL_ARB_shader_atomic_counters
#endif /* GL_ARB_shader_atomic_counters */

#ifdef GL_ARB_shader_bit_encoding
#endif /* GL_ARB_shader_bit_encoding */

#ifdef GL_ARB_shader_draw_parameters
#endif /* GL_ARB_shader_draw_parameters */

#ifdef GL_ARB_shader_group_vote
#endif /* GL_ARB_shader_group_vote */

#ifdef GL_ARB_shader_image_load_store
#endif /* GL_ARB_shader_image_load_store */

#ifdef GL_ARB_shader_image_size
#endif /* GL_ARB_shader_image_size */

#ifdef GL_ARB_shader_precision
#endif /* GL_ARB_shader_precision */

#ifdef GL_ARB_shader_stencil_export
#endif /* GL_ARB_shader_stencil_export */

#ifdef GL_ARB_shader_storage_buffer_object
#endif /* GL_ARB_shader_storage_buffer_object */

#ifdef GL_ARB_shader_subroutine
#endif /* GL_ARB_shader_subroutine */

#ifdef GL_ARB_shader_texture_image_samples
#endif /* GL_ARB_shader_texture_image_samples */

#ifdef GL_ARB_shading_language_420pack
#endif /* GL_ARB_shading_language_420pack */

#ifdef GL_ARB_shading_language_include
GLAPI void APIENTRY glNamedStringARB (GLenum type_, GLint namelen_, const GLchar *name_, GLint stringlen_, const GLchar *string_)
{
typedef void (INTER_CALL *FUNC) (GLenum type_, GLint namelen_, const GLchar *name_, GLint stringlen_, const GLchar *string_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNamedStringARB"));
(*fun)(type_,namelen_,name_,stringlen_,string_);
AfterProcess("glNamedStringARB");

}
GLAPI void APIENTRY glDeleteNamedStringARB (GLint namelen_, const GLchar *name_)
{
typedef void (INTER_CALL *FUNC) (GLint namelen_, const GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glDeleteNamedStringARB"));
(*fun)(namelen_,name_);
AfterProcess("glDeleteNamedStringARB");

}
GLAPI void APIENTRY glCompileShaderIncludeARB (GLuint shader_, GLsizei count_, const GLchar *const*path_, const GLint *length_)
{
typedef void (INTER_CALL *FUNC) (GLuint shader_, GLsizei count_, const GLchar *const*path_, const GLint *length_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glCompileShaderIncludeARB"));
(*fun)(shader_,count_,path_,length_);
AfterProcess("glCompileShaderIncludeARB");

}
GLAPI GLboolean APIENTRY glIsNamedStringARB (GLint namelen_, const GLchar *name_)
{
typedef GLboolean (INTER_CALL *FUNC) (GLint namelen_, const GLchar *name_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glIsNamedStringARB"));
GLboolean returnValue = (*fun)(namelen_,name_);
AfterProcess("glIsNamedStringARB");
return returnValue;
}
GLAPI void APIENTRY glGetNamedStringARB (GLint namelen_, const GLchar *name_, GLsizei bufSize_, GLint *stringlen_, GLchar *string_)
{
typedef void (INTER_CALL *FUNC) (GLint namelen_, const GLchar *name_, GLsizei bufSize_, GLint *stringlen_, GLchar *string_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetNamedStringARB"));
(*fun)(namelen_,name_,bufSize_,stringlen_,string_);
AfterProcess("glGetNamedStringARB");

}
GLAPI void APIENTRY glGetNamedStringivARB (GLint namelen_, const GLchar *name_, GLenum pname_, GLint *params_)
{
typedef void (INTER_CALL *FUNC) (GLint namelen_, const GLchar *name_, GLenum pname_, GLint *params_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glGetNamedStringivARB"));
(*fun)(namelen_,name_,pname_,params_);
AfterProcess("glGetNamedStringivARB");

}
#endif /* GL_ARB_shading_language_include */

#ifdef GL_ARB_shading_language_packing
#endif /* GL_ARB_shading_language_packing */

#ifdef GL_ARB_sparse_buffer
GLAPI void APIENTRY glBufferPageCommitmentARB (GLenum target_, GLintptr offset_, GLsizeiptr size_, GLboolean commit_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLintptr offset_, GLsizeiptr size_, GLboolean commit_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glBufferPageCommitmentARB"));
(*fun)(target_,offset_,size_,commit_);
AfterProcess("glBufferPageCommitmentARB");

}
GLAPI void APIENTRY glNamedBufferPageCommitmentEXT (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, GLboolean commit_)
{
typedef void (INTER_CALL *FUNC) (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, GLboolean commit_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNamedBufferPageCommitmentEXT"));
(*fun)(buffer_,offset_,size_,commit_);
AfterProcess("glNamedBufferPageCommitmentEXT");

}
GLAPI void APIENTRY glNamedBufferPageCommitmentARB (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, GLboolean commit_)
{
typedef void (INTER_CALL *FUNC) (GLuint buffer_, GLintptr offset_, GLsizeiptr size_, GLboolean commit_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glNamedBufferPageCommitmentARB"));
(*fun)(buffer_,offset_,size_,commit_);
AfterProcess("glNamedBufferPageCommitmentARB");

}
#endif /* GL_ARB_sparse_buffer */

#ifdef GL_ARB_sparse_texture
GLAPI void APIENTRY glTexPageCommitmentARB (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean commit_)
{
typedef void (INTER_CALL *FUNC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean commit_);
FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"glTexPageCommitmentARB"));
(*fun)(target_,level_,xoffset_,yoffset_,zoffset_,width_,height_,depth_,commit_);
AfterProcess("glTexPageCommitmentARB");

}
#endif /* GL_ARB_sparse_texture */

#ifdef GL_ARB_stencil_texturing
#endif /* GL_ARB_stencil_texturing */

#ifdef GL_ARB_sync
#endif /* GL_ARB_sync */

#ifdef GL_ARB_tessellation_shader
#endif /* GL_ARB_tessellation_shader */

#ifdef GL_ARB_texture_barrier
#endif /* GL_ARB_texture_barrier */

#ifdef GL_ARB_texture_buffer_object_rgb32
#endif /* GL_ARB_texture_buffer_object_rgb32 */

#ifdef GL_ARB_texture_buffer_range
#endif /* GL_ARB_texture_buffer_range */

#ifdef GL_ARB_texture_compression_bptc
#endif /* GL_ARB_texture_compression_bptc */

#ifdef GL_ARB_texture_compression_rgtc
#endif /* GL_ARB_texture_compression_rgtc */

#ifdef GL_ARB_texture_cube_map_array
#endif /* GL_ARB_texture_cube_map_array */

#ifdef GL_ARB_texture_gather
#endif /* GL_ARB_texture_gather */

#ifdef GL_ARB_texture_mirror_clamp_to_edge
#endif /* GL_ARB_texture_mirror_clamp_to_edge */

#ifdef GL_ARB_texture_multisample
#endif /* GL_ARB_texture_multisample */

#ifdef GL_ARB_texture_query_levels
#endif /* GL_ARB_texture_query_levels */

#ifdef GL_ARB_texture_query_lod
#endif /* GL_ARB_texture_query_lod */

#ifdef GL_ARB_texture_rg
#endif /* GL_ARB_texture_rg */

#ifdef GL_ARB_texture_rgb10_a2ui
#endif /* GL_ARB_texture_rgb10_a2ui */

#ifdef GL_ARB_texture_stencil8
#endif /* GL_ARB_texture_stencil8 */

#ifdef GL_ARB_texture_storage
#endif /* GL_ARB_texture_storage */

#ifdef GL_ARB_texture_storage_multisample
#endif /* GL_ARB_texture_storage_multisample */

#ifdef GL_ARB_texture_swizzle
#endif /* GL_ARB_texture_swizzle */

#ifdef GL_ARB_texture_view
#endif /* GL_ARB_texture_view */

#ifdef GL_ARB_timer_query
#endif /* GL_ARB_timer_query */

#ifdef GL_ARB_transform_feedback2
#endif /* GL_ARB_transform_feedback2 */

#ifdef GL_ARB_transform_feedback3
#endif /* GL_ARB_transform_feedback3 */

#ifdef GL_ARB_transform_feedback_instanced
#endif /* GL_ARB_transform_feedback_instanced */

#ifdef GL_ARB_transform_feedback_overflow_query
#endif /* GL_ARB_transform_feedback_overflow_query */

#ifdef GL_ARB_uniform_buffer_object
#endif /* GL_ARB_uniform_buffer_object */

#ifdef GL_ARB_vertex_array_bgra
#endif /* GL_ARB_vertex_array_bgra */

#ifdef GL_ARB_vertex_array_object
#endif /* GL_ARB_vertex_array_object */

#ifdef GL_ARB_vertex_attrib_64bit
#endif /* GL_ARB_vertex_attrib_64bit */

#ifdef GL_ARB_vertex_attrib_binding
#endif /* GL_ARB_vertex_attrib_binding */

#ifdef GL_ARB_vertex_type_10f_11f_11f_rev
#endif /* GL_ARB_vertex_type_10f_11f_11f_rev */

#ifdef GL_ARB_vertex_type_2_10_10_10_rev
#endif /* GL_ARB_vertex_type_2_10_10_10_rev */

#ifdef GL_ARB_viewport_array
#endif /* GL_ARB_viewport_array */

#ifdef GL_KHR_context_flush_control
#endif /* GL_KHR_context_flush_control */

#ifdef GL_KHR_debug
#endif /* GL_KHR_debug */

#ifdef GL_KHR_no_error
#endif /* GL_KHR_no_error */

#ifdef GL_KHR_robust_buffer_access_behavior
#endif /* GL_KHR_robust_buffer_access_behavior */

#ifdef GL_KHR_robustness
#endif /* GL_KHR_robustness */

#ifdef GL_KHR_texture_compression_astc_hdr
#endif /* GL_KHR_texture_compression_astc_hdr */

#ifdef GL_KHR_texture_compression_astc_ldr
#endif /* GL_KHR_texture_compression_astc_ldr */

#ifdef GL_KHR_texture_compression_astc_sliced_3d
#endif /* GL_KHR_texture_compression_astc_sliced_3d */

#ifdef __cplusplus
}
#endif

#endif
