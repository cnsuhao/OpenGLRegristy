#ifndef __wgl_c_
#define __wgl_c_ 1
#include "wgl.h"
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

#if defined(_WIN32) && !defined(APIENTRY) && !defined(__CYGWIN__) && !defined(__SCITECH_SNAP__)
#define WIN32_LEAN_AND_MEAN 1
#include <windows.h>
#endif

    /* Generated on date 20160325 */

    /* Generated C header for:
    * API: wgl
    * Versions considered: .*
    * Versions emitted: .*
    * Default extensions included: wgl
    * Additional extensions included: _nomatch_^
    * Extensions removed: _nomatch_^
    */
#define APIENTRY _stdcall 
    HINSTANCE GetDLLInstance()
    {
        static HINSTANCE hInst = 0;
        int errorCode, errorCode1;
        errorCode = GetLastError();
        if (hInst == 0)
        {
            hInst = LoadLibraryA("C:/Windows/system32/opengl32.dll");
            //hInst = LoadLibraryA("C:/Windows/SysWOW64/opengl32.dll");

            errorCode1 = GetLastError();
        }
        return hInst;
    }
#ifdef WGL_VERSION_1_0
    GLAPI BOOL APIENTRY wglCopyContext (HGLRC hglrcSrc_, HGLRC hglrcDst_, UINT mask_)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef BOOL (INTER_CALL *FUNC) (HGLRC hglrcSrc_, HGLRC hglrcDst_, UINT mask_);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglCopyContext"));
        BOOL returnValue = (*fun)(hglrcSrc_,hglrcDst_,mask_);
        return returnValue;
    }
    GLAPI HGLRC APIENTRY wglCreateContext (HDC hDc_)
    {
        int errorCode0 = GetLastError();
        HINSTANCE hInst = GetDLLInstance();
        typedef HGLRC (INTER_CALL *FUNC) (HDC hDc_);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglCreateContext"));
        HGLRC returnValue = (*fun)(hDc_);
        int errorCode = GetLastError();
        return returnValue;
    }
    GLAPI HGLRC APIENTRY wglCreateLayerContext (HDC hDc_, int level_)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef HGLRC (INTER_CALL *FUNC) (HDC hDc_, int level_);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglCreateLayerContext"));
        HGLRC returnValue = (*fun)(hDc_,level_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglDeleteContext (HGLRC oldContext_)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef BOOL (INTER_CALL *FUNC) (HGLRC oldContext_);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglDeleteContext"));
        BOOL returnValue = (*fun)(oldContext_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglDescribeLayerPlane (HDC hDc_, int pixelFormat_, int layerPlane_, UINT nBytes_, const LAYERPLANEDESCRIPTOR *plpd_)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef BOOL (INTER_CALL *FUNC) (HDC hDc_, int pixelFormat_, int layerPlane_, UINT nBytes_, const LAYERPLANEDESCRIPTOR *plpd_);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglDescribeLayerPlane"));
        BOOL returnValue = (*fun)(hDc_,pixelFormat_,layerPlane_,nBytes_,plpd_);
        return returnValue;
    }
    GLAPI HGLRC APIENTRY wglGetCurrentContext (void)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef HGLRC (INTER_CALL *FUNC) (void);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglGetCurrentContext"));
        HGLRC returnValue = (*fun)();
        return returnValue;
    }
    GLAPI HDC APIENTRY wglGetCurrentDC (void)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef HDC (INTER_CALL *FUNC) (void);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglGetCurrentDC"));
        HDC returnValue = (*fun)();
        return returnValue;
    }
    GLAPI int APIENTRY wglGetLayerPaletteEntries (HDC hdc_, int iLayerPlane_, int iStart_, int cEntries_, const COLORREF *pcr_)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef int (INTER_CALL *FUNC) (HDC hdc_, int iLayerPlane_, int iStart_, int cEntries_, const COLORREF *pcr_);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglGetLayerPaletteEntries"));
        int returnValue = (*fun)(hdc_,iLayerPlane_,iStart_,cEntries_,pcr_);
        return returnValue;
    }
    GLAPI PROC APIENTRY wglGetProcAddress (LPCSTR lpszProc_)
    {
        int errorCode0 = GetLastError();
        HINSTANCE hInst = GetDLLInstance();
        int errorCode5 = GetLastError();
        typedef PROC (INTER_CALL *FUNC) (LPCSTR lpszProc_);

        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglGetProcAddress"));
        int errorCode1 = GetLastError();
        PROC returnValue = (*fun)(lpszProc_);
        int errorCode2 = GetLastError();
        if (returnValue == NULL)
        {
            int errorCode3 = GetLastError();
            FUNC fun = (FUNC) ( GetProcAddress(hInst,lpszProc_));
            int errorCode4 = GetLastError();
            return fun;
        }
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglMakeCurrent (HDC hDc_, HGLRC newContext_)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef BOOL (INTER_CALL *FUNC) (HDC hDc_, HGLRC newContext_);
        FUNC fun = (FUNC) ( GetProcAddress(hInst, "wglMakeCurrent"));
        BOOL returnValue = (*fun)(hDc_,newContext_);
        int errorCode = GetLastError();
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglRealizeLayerPalette (HDC hdc_, int iLayerPlane_, BOOL bRealize_)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef BOOL (INTER_CALL *FUNC) (HDC hdc_, int iLayerPlane_, BOOL bRealize_);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglRealizeLayerPalette"));
        BOOL returnValue = (*fun)(hdc_,iLayerPlane_,bRealize_);
        return returnValue;
    }
    GLAPI int APIENTRY wglSetLayerPaletteEntries (HDC hdc_, int iLayerPlane_, int iStart_, int cEntries_, const COLORREF *pcr_)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef int (INTER_CALL *FUNC) (HDC hdc_, int iLayerPlane_, int iStart_, int cEntries_, const COLORREF *pcr_);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglSetLayerPaletteEntries"));
        int returnValue = (*fun)(hdc_,iLayerPlane_,iStart_,cEntries_,pcr_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglShareLists (HGLRC hrcSrvShare_, HGLRC hrcSrvSource_)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef BOOL (INTER_CALL *FUNC) (HGLRC hrcSrvShare_, HGLRC hrcSrvSource_);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglShareLists"));
        BOOL returnValue = (*fun)(hrcSrvShare_,hrcSrvSource_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglSwapLayerBuffers (HDC hdc_, UINT fuFlags_)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef BOOL (INTER_CALL *FUNC) (HDC hdc_, UINT fuFlags_);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglSwapLayerBuffers"));
        BOOL returnValue = (*fun)(hdc_,fuFlags_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglUseFontBitmaps (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglUseFontBitmaps"));
        BOOL returnValue = (*fun)(hDC_,first_,count_,listBase_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglUseFontBitmapsA (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglUseFontBitmapsA"));
        BOOL returnValue = (*fun)(hDC_,first_,count_,listBase_);
        return returnValue;
    }

    //extern GLAPI BOOL  APIENTRY wglUseFontBitmapsW(HDC, DWORD, DWORD, DWORD);
    //GLAPI BOOL APIENTRY wglUseFontBitmapsW (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_)
    //{
    //HINSTANCE hInst = GetDLLInstance();
    //typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_);
    //FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglUseFontBitmapsW"));
    //BOOL returnValue = (*fun)(hDC_,first_,count_,listBase_);
    //return returnValue;
    //}
    GLAPI BOOL APIENTRY wglUseFontOutlines (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_, FLOAT deviation_, FLOAT extrusion_, int format_, LPGLYPHMETRICSFLOAT lpgmf_)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_, FLOAT deviation_, FLOAT extrusion_, int format_, LPGLYPHMETRICSFLOAT lpgmf_);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglUseFontOutlines"));
        BOOL returnValue = (*fun)(hDC_,first_,count_,listBase_,deviation_,extrusion_,format_,lpgmf_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglUseFontOutlinesA (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_, FLOAT deviation_, FLOAT extrusion_, int format_, LPGLYPHMETRICSFLOAT lpgmf_)
    {
        HINSTANCE hInst = GetDLLInstance();
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_, FLOAT deviation_, FLOAT extrusion_, int format_, LPGLYPHMETRICSFLOAT lpgmf_);
        FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglUseFontOutlinesA"));
        BOOL returnValue = (*fun)(hDC_,first_,count_,listBase_,deviation_,extrusion_,format_,lpgmf_);
        return returnValue;
    }
    //WINGDIAPI BOOL WINAPI wglUseFontOutlinesW (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_, FLOAT deviation_, FLOAT extrusion_, int format_, LPGLYPHMETRICSFLOAT lpgmf_)
    //{
    //    HINSTANCE hInst = GetDLLInstance();
    //    typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_, FLOAT deviation_, FLOAT extrusion_, int format_, LPGLYPHMETRICSFLOAT lpgmf_);
    //    FUNC fun = (FUNC) ( GetProcAddress(hInst,"wglUseFontOutlinesW"));
    //    BOOL returnValue = (*fun)(hDC_,first_,count_,listBase_,deviation_,extrusion_,format_,lpgmf_);
    //    return returnValue;
    //}
#endif /* WGL_VERSION_1_0 */

#ifdef WGL_ARB_buffer_region
    GLAPI HANDLE APIENTRY wglCreateBufferRegionARB (HDC hDC_, int iLayerPlane_, UINT uType_)
    {
        typedef HANDLE (INTER_CALL *FUNC) (HDC hDC_, int iLayerPlane_, UINT uType_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglCreateBufferRegionARB"));
        HANDLE returnValue = (*fun)(hDC_,iLayerPlane_,uType_);
        return returnValue;
    }
    GLAPI VOID APIENTRY wglDeleteBufferRegionARB (HANDLE hRegion_)
    {
        typedef VOID (INTER_CALL *FUNC) (HANDLE hRegion_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDeleteBufferRegionARB"));
        (*fun)(hRegion_);

    }
    GLAPI BOOL APIENTRY wglSaveBufferRegionARB (HANDLE hRegion_, int x_, int y_, int width_, int height_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HANDLE hRegion_, int x_, int y_, int width_, int height_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglSaveBufferRegionARB"));
        BOOL returnValue = (*fun)(hRegion_,x_,y_,width_,height_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglRestoreBufferRegionARB (HANDLE hRegion_, int x_, int y_, int width_, int height_, int xSrc_, int ySrc_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HANDLE hRegion_, int x_, int y_, int width_, int height_, int xSrc_, int ySrc_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglRestoreBufferRegionARB"));
        BOOL returnValue = (*fun)(hRegion_,x_,y_,width_,height_,xSrc_,ySrc_);
        return returnValue;
    }
#endif /* WGL_ARB_buffer_region */

#ifdef WGL_ARB_context_flush_control
#endif /* WGL_ARB_context_flush_control */

#ifdef WGL_ARB_create_context
    GLAPI HGLRC APIENTRY wglCreateContextAttribsARB (HDC hDC_, HGLRC hShareContext_, const int *attribList_)
    {
        typedef HGLRC (INTER_CALL *FUNC) (HDC hDC_, HGLRC hShareContext_, const int *attribList_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglCreateContextAttribsARB"));
        HGLRC returnValue = (*fun)(hDC_,hShareContext_,attribList_);
        return returnValue;
    }
#endif /* WGL_ARB_create_context */

#ifdef WGL_ARB_create_context_profile
#endif /* WGL_ARB_create_context_profile */

#ifdef WGL_ARB_create_context_robustness
#endif /* WGL_ARB_create_context_robustness */

#ifdef WGL_ARB_extensions_string
    GLAPI const char *APIENTRY wglGetExtensionsStringARB (HDC hdc_)
    {
        typedef const char *(INTER_CALL *FUNC) (HDC hdc_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetExtensionsStringARB"));
        const char *returnValue = (*fun)(hdc_);
        return returnValue;
    }
#endif /* WGL_ARB_extensions_string */

#ifdef WGL_ARB_framebuffer_sRGB
#endif /* WGL_ARB_framebuffer_sRGB */

#ifdef WGL_ARB_make_current_read
    GLAPI BOOL APIENTRY wglMakeContextCurrentARB (HDC hDrawDC_, HDC hReadDC_, HGLRC hglrc_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDrawDC_, HDC hReadDC_, HGLRC hglrc_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglMakeContextCurrentARB"));
        BOOL returnValue = (*fun)(hDrawDC_,hReadDC_,hglrc_);
        return returnValue;
    }
    GLAPI HDC APIENTRY wglGetCurrentReadDCARB (void)
    {
        typedef HDC (INTER_CALL *FUNC) (void);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetCurrentReadDCARB"));
        HDC returnValue = (*fun)();
        return returnValue;
    }
#endif /* WGL_ARB_make_current_read */

#ifdef WGL_ARB_multisample
#endif /* WGL_ARB_multisample */

#ifdef WGL_ARB_pbuffer
    GLAPI HPBUFFERARB APIENTRY wglCreatePbufferARB (HDC hDC_, int iPixelFormat_, int iWidth_, int iHeight_, const int *piAttribList_)
    {
        typedef HPBUFFERARB (INTER_CALL *FUNC) (HDC hDC_, int iPixelFormat_, int iWidth_, int iHeight_, const int *piAttribList_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglCreatePbufferARB"));
        HPBUFFERARB returnValue = (*fun)(hDC_,iPixelFormat_,iWidth_,iHeight_,piAttribList_);
        return returnValue;
    }
    GLAPI HDC APIENTRY wglGetPbufferDCARB (HPBUFFERARB hPbuffer_)
    {
        typedef HDC (INTER_CALL *FUNC) (HPBUFFERARB hPbuffer_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetPbufferDCARB"));
        HDC returnValue = (*fun)(hPbuffer_);
        return returnValue;
    }
    GLAPI int APIENTRY wglReleasePbufferDCARB (HPBUFFERARB hPbuffer_, HDC hDC_)
    {
        typedef int (INTER_CALL *FUNC) (HPBUFFERARB hPbuffer_, HDC hDC_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglReleasePbufferDCARB"));
        int returnValue = (*fun)(hPbuffer_,hDC_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglDestroyPbufferARB (HPBUFFERARB hPbuffer_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HPBUFFERARB hPbuffer_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDestroyPbufferARB"));
        BOOL returnValue = (*fun)(hPbuffer_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglQueryPbufferARB (HPBUFFERARB hPbuffer_, int iAttribute_, int *piValue_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HPBUFFERARB hPbuffer_, int iAttribute_, int *piValue_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglQueryPbufferARB"));
        BOOL returnValue = (*fun)(hPbuffer_,iAttribute_,piValue_);
        return returnValue;
    }
#endif /* WGL_ARB_pbuffer */

#ifdef WGL_ARB_pixel_format
    GLAPI BOOL APIENTRY wglGetPixelFormatAttribivARB (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, const int *piAttributes_, int *piValues_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, const int *piAttributes_, int *piValues_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetPixelFormatAttribivARB"));
        BOOL returnValue = (*fun)(hdc_,iPixelFormat_,iLayerPlane_,nAttributes_,piAttributes_,piValues_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglGetPixelFormatAttribfvARB (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, const int *piAttributes_, FLOAT *pfValues_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, const int *piAttributes_, FLOAT *pfValues_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetPixelFormatAttribfvARB"));
        BOOL returnValue = (*fun)(hdc_,iPixelFormat_,iLayerPlane_,nAttributes_,piAttributes_,pfValues_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglChoosePixelFormatARB (HDC hdc_, const int *piAttribIList_, const FLOAT *pfAttribFList_, UINT nMaxFormats_, int *piFormats_, UINT *nNumFormats_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hdc_, const int *piAttribIList_, const FLOAT *pfAttribFList_, UINT nMaxFormats_, int *piFormats_, UINT *nNumFormats_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglChoosePixelFormatARB"));
        BOOL returnValue = (*fun)(hdc_,piAttribIList_,pfAttribFList_,nMaxFormats_,piFormats_,nNumFormats_);
        return returnValue;
    }
    GLAPI int APIENTRY wglChoosePixelFormat (HDC hdc_, const PIXELFORMATDESCRIPTOR *ppfd)
    {
        int errorCode0 = GetLastError();
        typedef int (INTER_CALL *FUNC) (HDC hdc_, const PIXELFORMATDESCRIPTOR *ppfd);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglChoosePixelFormat"));
        int errorCode1 = GetLastError();
        int returnValue = (*fun)(hdc_,ppfd);
        int errorCode2 = GetLastError();

        return returnValue;
    }
    GLAPI int APIENTRY wglSetPixelFormat (HDC hdc_, int format, const PIXELFORMATDESCRIPTOR * ppfd)
    {
        typedef int (INTER_CALL *FUNC) (HDC hdc_, int format, const PIXELFORMATDESCRIPTOR * ppfd);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglSetPixelFormat"));
        int returnValue = (*fun)(hdc_,format, ppfd);
        int errorCode0 = GetLastError();
        return returnValue;
    }
    GLAPI int APIENTRY wglDescribePixelFormat(HDC                     hdc_,
        int                     iPixelFormat,
        UINT                    nBytes,
        LPPIXELFORMATDESCRIPTOR ppfd
        )
    {
        typedef int (INTER_CALL *FUNC) (HDC                     hdc_,
            int                     iPixelFormat,
            UINT                    nBytes,
            LPPIXELFORMATDESCRIPTOR ppfd
            );
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDescribePixelFormat"));
        int returnValue = (*fun)(hdc_,iPixelFormat, nBytes, ppfd);
        int errorCode0 = GetLastError();
        return returnValue;
    }
    GLAPI PROC APIENTRY wglGetDefaultProcAddress(LPCSTR proc)
    {
        typedef PROC (INTER_CALL *FUNC) (LPCSTR proc);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetDefaultProcAddress"));
        PROC returnValue = (*fun)(proc);
        return returnValue;
    }
    GLAPI int APIENTRY wglGetPixelFormat(HDC hdc_)
    {
        typedef int (INTER_CALL *FUNC) (HDC hdc_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetPixelFormat"));
        int returnValue = (*fun)(hdc_);
        int errorCode0 = GetLastError();
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglSwapBuffers(HDC hdc_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hdc_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglSwapBuffers"));
        BOOL returnValue = (*fun)(hdc_);
        return returnValue;
    }
    //WINGDIAPI DWORD WINAPI wglSwapMultipleBuffers(UINT, CONST WGLSWAP *);
    GLAPI DWORD APIENTRY wglSwapMultipleBuffers(UINT index, CONST WGLSWAP *pbuffer)
    {
        typedef DWORD (INTER_CALL *FUNC) (UINT, CONST WGLSWAP *);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglSwapMultipleBuffers"));
        DWORD returnValue = (*fun)(index, pbuffer);
        return returnValue;
    }
#endif /* WGL_ARB_pixel_format */

#ifdef WGL_ARB_pixel_format_float
#endif /* WGL_ARB_pixel_format_float */

#ifdef WGL_ARB_render_texture
    GLAPI BOOL APIENTRY wglBindTexImageARB (HPBUFFERARB hPbuffer_, int iBuffer_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HPBUFFERARB hPbuffer_, int iBuffer_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglBindTexImageARB"));
        BOOL returnValue = (*fun)(hPbuffer_,iBuffer_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglReleaseTexImageARB (HPBUFFERARB hPbuffer_, int iBuffer_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HPBUFFERARB hPbuffer_, int iBuffer_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglReleaseTexImageARB"));
        BOOL returnValue = (*fun)(hPbuffer_,iBuffer_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglSetPbufferAttribARB (HPBUFFERARB hPbuffer_, const int *piAttribList_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HPBUFFERARB hPbuffer_, const int *piAttribList_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglSetPbufferAttribARB"));
        BOOL returnValue = (*fun)(hPbuffer_,piAttribList_);
        return returnValue;
    }
#endif /* WGL_ARB_render_texture */

#ifdef WGL_ARB_robustness_application_isolation
#endif /* WGL_ARB_robustness_application_isolation */

#ifdef WGL_ARB_robustness_share_group_isolation
#endif /* WGL_ARB_robustness_share_group_isolation */

#ifdef WGL_3DFX_multisample
#endif /* WGL_3DFX_multisample */

#ifdef WGL_3DL_stereo_control
    GLAPI BOOL APIENTRY wglSetStereoEmitterState3DL (HDC hDC_, UINT uState_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, UINT uState_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglSetStereoEmitterState3DL"));
        BOOL returnValue = (*fun)(hDC_,uState_);
        return returnValue;
    }
#endif /* WGL_3DL_stereo_control */

#ifdef WGL_AMD_gpu_association
    GLAPI UINT APIENTRY wglGetGPUIDsAMD (UINT maxCount_, UINT *ids_)
    {
        typedef UINT (INTER_CALL *FUNC) (UINT maxCount_, UINT *ids_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetGPUIDsAMD"));
        UINT returnValue = (*fun)(maxCount_,ids_);
        return returnValue;
    }
    GLAPI INT APIENTRY wglGetGPUInfoAMD (UINT id_, int property_, GLenum dataType_, UINT size_, void *data_)
    {
        typedef INT (INTER_CALL *FUNC) (UINT id_, int property_, GLenum dataType_, UINT size_, void *data_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetGPUInfoAMD"));
        INT returnValue = (*fun)(id_,property_,dataType_,size_,data_);
        return returnValue;
    }
    GLAPI UINT APIENTRY wglGetContextGPUIDAMD (HGLRC hglrc_)
    {
        typedef UINT (INTER_CALL *FUNC) (HGLRC hglrc_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetContextGPUIDAMD"));
        UINT returnValue = (*fun)(hglrc_);
        return returnValue;
    }
    GLAPI HGLRC APIENTRY wglCreateAssociatedContextAMD (UINT id_)
    {
        typedef HGLRC (INTER_CALL *FUNC) (UINT id_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglCreateAssociatedContextAMD"));
        HGLRC returnValue = (*fun)(id_);
        return returnValue;
    }
    GLAPI HGLRC APIENTRY wglCreateAssociatedContextAttribsAMD (UINT id_, HGLRC hShareContext_, const int *attribList_)
    {
        typedef HGLRC (INTER_CALL *FUNC) (UINT id_, HGLRC hShareContext_, const int *attribList_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglCreateAssociatedContextAttribsAMD"));
        HGLRC returnValue = (*fun)(id_,hShareContext_,attribList_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglDeleteAssociatedContextAMD (HGLRC hglrc_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HGLRC hglrc_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDeleteAssociatedContextAMD"));
        BOOL returnValue = (*fun)(hglrc_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglMakeAssociatedContextCurrentAMD (HGLRC hglrc_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HGLRC hglrc_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglMakeAssociatedContextCurrentAMD"));
        BOOL returnValue = (*fun)(hglrc_);
        return returnValue;
    }
    GLAPI HGLRC APIENTRY wglGetCurrentAssociatedContextAMD (void)
    {
        typedef HGLRC (INTER_CALL *FUNC) (void);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetCurrentAssociatedContextAMD"));
        HGLRC returnValue = (*fun)();
        return returnValue;
    }
    GLAPI VOID APIENTRY wglBlitContextFramebufferAMD (HGLRC dstCtx_, GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_)
    {
        typedef VOID (INTER_CALL *FUNC) (HGLRC dstCtx_, GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglBlitContextFramebufferAMD"));
        (*fun)(dstCtx_,srcX0_,srcY0_,srcX1_,srcY1_,dstX0_,dstY0_,dstX1_,dstY1_,mask_,filter_);

    }
#endif /* WGL_AMD_gpu_association */

#ifdef WGL_ATI_pixel_format_float
#endif /* WGL_ATI_pixel_format_float */

#ifdef WGL_EXT_create_context_es2_profile
#endif /* WGL_EXT_create_context_es2_profile */

#ifdef WGL_EXT_create_context_es_profile
#endif /* WGL_EXT_create_context_es_profile */

#ifdef WGL_EXT_depth_float
#endif /* WGL_EXT_depth_float */

#ifdef WGL_EXT_display_color_table
    GLAPI GLboolean APIENTRY wglCreateDisplayColorTableEXT (GLushort id_)
    {
        typedef GLboolean (INTER_CALL *FUNC) (GLushort id_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglCreateDisplayColorTableEXT"));
        GLboolean returnValue = (*fun)(id_);
        return returnValue;
    }
    GLAPI GLboolean APIENTRY wglLoadDisplayColorTableEXT (const GLushort *table_, GLuint length_)
    {
        typedef GLboolean (INTER_CALL *FUNC) (const GLushort *table_, GLuint length_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglLoadDisplayColorTableEXT"));
        GLboolean returnValue = (*fun)(table_,length_);
        return returnValue;
    }
    GLAPI GLboolean APIENTRY wglBindDisplayColorTableEXT (GLushort id_)
    {
        typedef GLboolean (INTER_CALL *FUNC) (GLushort id_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglBindDisplayColorTableEXT"));
        GLboolean returnValue = (*fun)(id_);
        return returnValue;
    }
    GLAPI VOID APIENTRY wglDestroyDisplayColorTableEXT (GLushort id_)
    {
        typedef VOID (INTER_CALL *FUNC) (GLushort id_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDestroyDisplayColorTableEXT"));
        (*fun)(id_);

    }
#endif /* WGL_EXT_display_color_table */

#ifdef WGL_EXT_extensions_string
    GLAPI const char *APIENTRY wglGetExtensionsStringEXT (void)
    {
        typedef const char *(INTER_CALL *FUNC) (void);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetExtensionsStringEXT"));
        const char *returnValue = (*fun)();
        return returnValue;
    }
#endif /* WGL_EXT_extensions_string */

#ifdef WGL_EXT_framebuffer_sRGB
#endif /* WGL_EXT_framebuffer_sRGB */

#ifdef WGL_EXT_make_current_read
    GLAPI BOOL APIENTRY wglMakeContextCurrentEXT (HDC hDrawDC_, HDC hReadDC_, HGLRC hglrc_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDrawDC_, HDC hReadDC_, HGLRC hglrc_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglMakeContextCurrentEXT"));
        BOOL returnValue = (*fun)(hDrawDC_,hReadDC_,hglrc_);
        return returnValue;
    }
    GLAPI HDC APIENTRY wglGetCurrentReadDCEXT (void)
    {
        typedef HDC (INTER_CALL *FUNC) (void);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetCurrentReadDCEXT"));
        HDC returnValue = (*fun)();
        return returnValue;
    }
#endif /* WGL_EXT_make_current_read */

#ifdef WGL_EXT_multisample
#endif /* WGL_EXT_multisample */

#ifdef WGL_EXT_pbuffer
    GLAPI HPBUFFEREXT APIENTRY wglCreatePbufferEXT (HDC hDC_, int iPixelFormat_, int iWidth_, int iHeight_, const int *piAttribList_)
    {
        typedef HPBUFFEREXT (INTER_CALL *FUNC) (HDC hDC_, int iPixelFormat_, int iWidth_, int iHeight_, const int *piAttribList_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglCreatePbufferEXT"));
        HPBUFFEREXT returnValue = (*fun)(hDC_,iPixelFormat_,iWidth_,iHeight_,piAttribList_);
        return returnValue;
    }
    GLAPI HDC APIENTRY wglGetPbufferDCEXT (HPBUFFEREXT hPbuffer_)
    {
        typedef HDC (INTER_CALL *FUNC) (HPBUFFEREXT hPbuffer_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetPbufferDCEXT"));
        HDC returnValue = (*fun)(hPbuffer_);
        return returnValue;
    }
    GLAPI int APIENTRY wglReleasePbufferDCEXT (HPBUFFEREXT hPbuffer_, HDC hDC_)
    {
        typedef int (INTER_CALL *FUNC) (HPBUFFEREXT hPbuffer_, HDC hDC_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglReleasePbufferDCEXT"));
        int returnValue = (*fun)(hPbuffer_,hDC_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglDestroyPbufferEXT (HPBUFFEREXT hPbuffer_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HPBUFFEREXT hPbuffer_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDestroyPbufferEXT"));
        BOOL returnValue = (*fun)(hPbuffer_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglQueryPbufferEXT (HPBUFFEREXT hPbuffer_, int iAttribute_, int *piValue_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HPBUFFEREXT hPbuffer_, int iAttribute_, int *piValue_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglQueryPbufferEXT"));
        BOOL returnValue = (*fun)(hPbuffer_,iAttribute_,piValue_);
        return returnValue;
    }
#endif /* WGL_EXT_pbuffer */

#ifdef WGL_EXT_pixel_format
    GLAPI BOOL APIENTRY wglGetPixelFormatAttribivEXT (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, int *piAttributes_, int *piValues_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, int *piAttributes_, int *piValues_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetPixelFormatAttribivEXT"));
        BOOL returnValue = (*fun)(hdc_,iPixelFormat_,iLayerPlane_,nAttributes_,piAttributes_,piValues_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglGetPixelFormatAttribfvEXT (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, int *piAttributes_, FLOAT *pfValues_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, int *piAttributes_, FLOAT *pfValues_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetPixelFormatAttribfvEXT"));
        BOOL returnValue = (*fun)(hdc_,iPixelFormat_,iLayerPlane_,nAttributes_,piAttributes_,pfValues_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglChoosePixelFormatEXT (HDC hdc_, const int *piAttribIList_, const FLOAT *pfAttribFList_, UINT nMaxFormats_, int *piFormats_, UINT *nNumFormats_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hdc_, const int *piAttribIList_, const FLOAT *pfAttribFList_, UINT nMaxFormats_, int *piFormats_, UINT *nNumFormats_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglChoosePixelFormatEXT"));
        BOOL returnValue = (*fun)(hdc_,piAttribIList_,pfAttribFList_,nMaxFormats_,piFormats_,nNumFormats_);
        return returnValue;
    }
#endif /* WGL_EXT_pixel_format */

#ifdef WGL_EXT_pixel_format_packed_float
#endif /* WGL_EXT_pixel_format_packed_float */

#ifdef WGL_EXT_swap_control
    GLAPI BOOL APIENTRY wglSwapIntervalEXT (int interval_)
    {
        typedef BOOL (INTER_CALL *FUNC) (int interval_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglSwapIntervalEXT"));
        BOOL returnValue = (*fun)(interval_);
        return returnValue;
    }
    GLAPI int APIENTRY wglGetSwapIntervalEXT (void)
    {
        typedef int (INTER_CALL *FUNC) (void);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetSwapIntervalEXT"));
        int returnValue = (*fun)();
        return returnValue;
    }
#endif /* WGL_EXT_swap_control */

#ifdef WGL_EXT_swap_control_tear
#endif /* WGL_EXT_swap_control_tear */

#ifdef WGL_I3D_digital_video_control
    GLAPI BOOL APIENTRY wglGetDigitalVideoParametersI3D (HDC hDC_, int iAttribute_, int *piValue_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, int iAttribute_, int *piValue_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetDigitalVideoParametersI3D"));
        BOOL returnValue = (*fun)(hDC_,iAttribute_,piValue_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglSetDigitalVideoParametersI3D (HDC hDC_, int iAttribute_, const int *piValue_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, int iAttribute_, const int *piValue_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglSetDigitalVideoParametersI3D"));
        BOOL returnValue = (*fun)(hDC_,iAttribute_,piValue_);
        return returnValue;
    }
#endif /* WGL_I3D_digital_video_control */

#ifdef WGL_I3D_gamma
    GLAPI BOOL APIENTRY wglGetGammaTableParametersI3D (HDC hDC_, int iAttribute_, int *piValue_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, int iAttribute_, int *piValue_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetGammaTableParametersI3D"));
        BOOL returnValue = (*fun)(hDC_,iAttribute_,piValue_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglSetGammaTableParametersI3D (HDC hDC_, int iAttribute_, const int *piValue_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, int iAttribute_, const int *piValue_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglSetGammaTableParametersI3D"));
        BOOL returnValue = (*fun)(hDC_,iAttribute_,piValue_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglGetGammaTableI3D (HDC hDC_, int iEntries_, USHORT *puRed_, USHORT *puGreen_, USHORT *puBlue_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, int iEntries_, USHORT *puRed_, USHORT *puGreen_, USHORT *puBlue_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetGammaTableI3D"));
        BOOL returnValue = (*fun)(hDC_,iEntries_,puRed_,puGreen_,puBlue_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglSetGammaTableI3D (HDC hDC_, int iEntries_, const USHORT *puRed_, const USHORT *puGreen_, const USHORT *puBlue_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, int iEntries_, const USHORT *puRed_, const USHORT *puGreen_, const USHORT *puBlue_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglSetGammaTableI3D"));
        BOOL returnValue = (*fun)(hDC_,iEntries_,puRed_,puGreen_,puBlue_);
        return returnValue;
    }
#endif /* WGL_I3D_gamma */

#ifdef WGL_I3D_genlock
    GLAPI BOOL APIENTRY wglEnableGenlockI3D (HDC hDC_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglEnableGenlockI3D"));
        BOOL returnValue = (*fun)(hDC_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglDisableGenlockI3D (HDC hDC_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDisableGenlockI3D"));
        BOOL returnValue = (*fun)(hDC_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglIsEnabledGenlockI3D (HDC hDC_, BOOL *pFlag_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, BOOL *pFlag_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglIsEnabledGenlockI3D"));
        BOOL returnValue = (*fun)(hDC_,pFlag_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglGenlockSourceI3D (HDC hDC_, UINT uSource_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, UINT uSource_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGenlockSourceI3D"));
        BOOL returnValue = (*fun)(hDC_,uSource_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglGetGenlockSourceI3D (HDC hDC_, UINT *uSource_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, UINT *uSource_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetGenlockSourceI3D"));
        BOOL returnValue = (*fun)(hDC_,uSource_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglGenlockSourceEdgeI3D (HDC hDC_, UINT uEdge_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, UINT uEdge_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGenlockSourceEdgeI3D"));
        BOOL returnValue = (*fun)(hDC_,uEdge_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglGetGenlockSourceEdgeI3D (HDC hDC_, UINT *uEdge_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, UINT *uEdge_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetGenlockSourceEdgeI3D"));
        BOOL returnValue = (*fun)(hDC_,uEdge_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglGenlockSampleRateI3D (HDC hDC_, UINT uRate_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, UINT uRate_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGenlockSampleRateI3D"));
        BOOL returnValue = (*fun)(hDC_,uRate_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglGetGenlockSampleRateI3D (HDC hDC_, UINT *uRate_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, UINT *uRate_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetGenlockSampleRateI3D"));
        BOOL returnValue = (*fun)(hDC_,uRate_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglGenlockSourceDelayI3D (HDC hDC_, UINT uDelay_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, UINT uDelay_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGenlockSourceDelayI3D"));
        BOOL returnValue = (*fun)(hDC_,uDelay_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglGetGenlockSourceDelayI3D (HDC hDC_, UINT *uDelay_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, UINT *uDelay_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetGenlockSourceDelayI3D"));
        BOOL returnValue = (*fun)(hDC_,uDelay_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglQueryGenlockMaxSourceDelayI3D (HDC hDC_, UINT *uMaxLineDelay_, UINT *uMaxPixelDelay_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, UINT *uMaxLineDelay_, UINT *uMaxPixelDelay_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglQueryGenlockMaxSourceDelayI3D"));
        BOOL returnValue = (*fun)(hDC_,uMaxLineDelay_,uMaxPixelDelay_);
        return returnValue;
    }
#endif /* WGL_I3D_genlock */

#ifdef WGL_I3D_image_buffer
    GLAPI LPVOID APIENTRY wglCreateImageBufferI3D (HDC hDC_, DWORD dwSize_, UINT uFlags_)
    {
        typedef LPVOID (INTER_CALL *FUNC) (HDC hDC_, DWORD dwSize_, UINT uFlags_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglCreateImageBufferI3D"));
        LPVOID returnValue = (*fun)(hDC_,dwSize_,uFlags_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglDestroyImageBufferI3D (HDC hDC_, LPVOID pAddress_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, LPVOID pAddress_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDestroyImageBufferI3D"));
        BOOL returnValue = (*fun)(hDC_,pAddress_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglAssociateImageBufferEventsI3D (HDC hDC_, const HANDLE *pEvent_, const LPVOID *pAddress_, const DWORD *pSize_, UINT count_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, const HANDLE *pEvent_, const LPVOID *pAddress_, const DWORD *pSize_, UINT count_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglAssociateImageBufferEventsI3D"));
        BOOL returnValue = (*fun)(hDC_,pEvent_,pAddress_,pSize_,count_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglReleaseImageBufferEventsI3D (HDC hDC_, const LPVOID *pAddress_, UINT count_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, const LPVOID *pAddress_, UINT count_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglReleaseImageBufferEventsI3D"));
        BOOL returnValue = (*fun)(hDC_,pAddress_,count_);
        return returnValue;
    }
#endif /* WGL_I3D_image_buffer */

#ifdef WGL_I3D_swap_frame_lock
    GLAPI BOOL APIENTRY wglEnableFrameLockI3D (void)
    {
        typedef BOOL (INTER_CALL *FUNC) (void);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglEnableFrameLockI3D"));
        BOOL returnValue = (*fun)();
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglDisableFrameLockI3D (void)
    {
        typedef BOOL (INTER_CALL *FUNC) (void);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDisableFrameLockI3D"));
        BOOL returnValue = (*fun)();
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglIsEnabledFrameLockI3D (BOOL *pFlag_)
    {
        typedef BOOL (INTER_CALL *FUNC) (BOOL *pFlag_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglIsEnabledFrameLockI3D"));
        BOOL returnValue = (*fun)(pFlag_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglQueryFrameLockMasterI3D (BOOL *pFlag_)
    {
        typedef BOOL (INTER_CALL *FUNC) (BOOL *pFlag_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglQueryFrameLockMasterI3D"));
        BOOL returnValue = (*fun)(pFlag_);
        return returnValue;
    }
#endif /* WGL_I3D_swap_frame_lock */

#ifdef WGL_I3D_swap_frame_usage
    GLAPI BOOL APIENTRY wglGetFrameUsageI3D (float *pUsage_)
    {
        typedef BOOL (INTER_CALL *FUNC) (float *pUsage_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetFrameUsageI3D"));
        BOOL returnValue = (*fun)(pUsage_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglBeginFrameTrackingI3D (void)
    {
        typedef BOOL (INTER_CALL *FUNC) (void);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglBeginFrameTrackingI3D"));
        BOOL returnValue = (*fun)();
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglEndFrameTrackingI3D (void)
    {
        typedef BOOL (INTER_CALL *FUNC) (void);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglEndFrameTrackingI3D"));
        BOOL returnValue = (*fun)();
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglQueryFrameTrackingI3D (DWORD *pFrameCount_, DWORD *pMissedFrames_, float *pLastMissedUsage_)
    {
        typedef BOOL (INTER_CALL *FUNC) (DWORD *pFrameCount_, DWORD *pMissedFrames_, float *pLastMissedUsage_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglQueryFrameTrackingI3D"));
        BOOL returnValue = (*fun)(pFrameCount_,pMissedFrames_,pLastMissedUsage_);
        return returnValue;
    }
#endif /* WGL_I3D_swap_frame_usage */

#ifdef WGL_NV_DX_interop
    GLAPI BOOL APIENTRY wglDXSetResourceShareHandleNV (void *dxObject_, HANDLE shareHandle_)
    {
        typedef BOOL (INTER_CALL *FUNC) (void *dxObject_, HANDLE shareHandle_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDXSetResourceShareHandleNV"));
        BOOL returnValue = (*fun)(dxObject_,shareHandle_);
        return returnValue;
    }
    GLAPI HANDLE APIENTRY wglDXOpenDeviceNV (void *dxDevice_)
    {
        typedef HANDLE (INTER_CALL *FUNC) (void *dxDevice_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDXOpenDeviceNV"));
        HANDLE returnValue = (*fun)(dxDevice_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglDXCloseDeviceNV (HANDLE hDevice_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HANDLE hDevice_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDXCloseDeviceNV"));
        BOOL returnValue = (*fun)(hDevice_);
        return returnValue;
    }
    GLAPI HANDLE APIENTRY wglDXRegisterObjectNV (HANDLE hDevice_, void *dxObject_, GLuint name_, GLenum type_, GLenum access_)
    {
        typedef HANDLE (INTER_CALL *FUNC) (HANDLE hDevice_, void *dxObject_, GLuint name_, GLenum type_, GLenum access_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDXRegisterObjectNV"));
        HANDLE returnValue = (*fun)(hDevice_,dxObject_,name_,type_,access_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglDXUnregisterObjectNV (HANDLE hDevice_, HANDLE hObject_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HANDLE hDevice_, HANDLE hObject_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDXUnregisterObjectNV"));
        BOOL returnValue = (*fun)(hDevice_,hObject_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglDXObjectAccessNV (HANDLE hObject_, GLenum access_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HANDLE hObject_, GLenum access_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDXObjectAccessNV"));
        BOOL returnValue = (*fun)(hObject_,access_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglDXLockObjectsNV (HANDLE hDevice_, GLint count_, HANDLE *hObjects_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HANDLE hDevice_, GLint count_, HANDLE *hObjects_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDXLockObjectsNV"));
        BOOL returnValue = (*fun)(hDevice_,count_,hObjects_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglDXUnlockObjectsNV (HANDLE hDevice_, GLint count_, HANDLE *hObjects_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HANDLE hDevice_, GLint count_, HANDLE *hObjects_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDXUnlockObjectsNV"));
        BOOL returnValue = (*fun)(hDevice_,count_,hObjects_);
        return returnValue;
    }
#endif /* WGL_NV_DX_interop */

#ifdef WGL_NV_DX_interop2
#endif /* WGL_NV_DX_interop2 */

#ifdef WGL_NV_copy_image
    GLAPI BOOL APIENTRY wglCopyImageSubDataNV (HGLRC hSrcRC_, GLuint srcName_, GLenum srcTarget_, GLint srcLevel_, GLint srcX_, GLint srcY_, GLint srcZ_, HGLRC hDstRC_, GLuint dstName_, GLenum dstTarget_, GLint dstLevel_, GLint dstX_, GLint dstY_, GLint dstZ_, GLsizei width_, GLsizei height_, GLsizei depth_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HGLRC hSrcRC_, GLuint srcName_, GLenum srcTarget_, GLint srcLevel_, GLint srcX_, GLint srcY_, GLint srcZ_, HGLRC hDstRC_, GLuint dstName_, GLenum dstTarget_, GLint dstLevel_, GLint dstX_, GLint dstY_, GLint dstZ_, GLsizei width_, GLsizei height_, GLsizei depth_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglCopyImageSubDataNV"));
        BOOL returnValue = (*fun)(hSrcRC_,srcName_,srcTarget_,srcLevel_,srcX_,srcY_,srcZ_,hDstRC_,dstName_,dstTarget_,dstLevel_,dstX_,dstY_,dstZ_,width_,height_,depth_);
        return returnValue;
    }
#endif /* WGL_NV_copy_image */

#ifdef WGL_NV_delay_before_swap
    GLAPI BOOL APIENTRY wglDelayBeforeSwapNV (HDC hDC_, GLfloat seconds_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, GLfloat seconds_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDelayBeforeSwapNV"));
        BOOL returnValue = (*fun)(hDC_,seconds_);
        return returnValue;
    }
#endif /* WGL_NV_delay_before_swap */

#ifdef WGL_NV_float_buffer
#endif /* WGL_NV_float_buffer */

#ifdef WGL_NV_gpu_affinity
    GLAPI BOOL APIENTRY wglEnumGpusNV (UINT iGpuIndex_, HGPUNV *phGpu_)
    {
        typedef BOOL (INTER_CALL *FUNC) (UINT iGpuIndex_, HGPUNV *phGpu_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglEnumGpusNV"));
        BOOL returnValue = (*fun)(iGpuIndex_,phGpu_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglEnumGpuDevicesNV (HGPUNV hGpu_, UINT iDeviceIndex_, PGPU_DEVICE lpGpuDevice_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HGPUNV hGpu_, UINT iDeviceIndex_, PGPU_DEVICE lpGpuDevice_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglEnumGpuDevicesNV"));
        BOOL returnValue = (*fun)(hGpu_,iDeviceIndex_,lpGpuDevice_);
        return returnValue;
    }
    GLAPI HDC APIENTRY wglCreateAffinityDCNV (const HGPUNV *phGpuList_)
    {
        typedef HDC (INTER_CALL *FUNC) (const HGPUNV *phGpuList_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglCreateAffinityDCNV"));
        HDC returnValue = (*fun)(phGpuList_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglEnumGpusFromAffinityDCNV (HDC hAffinityDC_, UINT iGpuIndex_, HGPUNV *hGpu_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hAffinityDC_, UINT iGpuIndex_, HGPUNV *hGpu_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglEnumGpusFromAffinityDCNV"));
        BOOL returnValue = (*fun)(hAffinityDC_,iGpuIndex_,hGpu_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglDeleteDCNV (HDC hdc_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hdc_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglDeleteDCNV"));
        BOOL returnValue = (*fun)(hdc_);
        return returnValue;
    }
#endif /* WGL_NV_gpu_affinity */

#ifdef WGL_NV_multisample_coverage
#endif /* WGL_NV_multisample_coverage */

#ifdef WGL_NV_present_video
    GLAPI int APIENTRY wglEnumerateVideoDevicesNV (HDC hDC_, HVIDEOOUTPUTDEVICENV *phDeviceList_)
    {
        typedef int (INTER_CALL *FUNC) (HDC hDC_, HVIDEOOUTPUTDEVICENV *phDeviceList_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglEnumerateVideoDevicesNV"));
        int returnValue = (*fun)(hDC_,phDeviceList_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglBindVideoDeviceNV (HDC hDC_, unsigned int uVideoSlot_, HVIDEOOUTPUTDEVICENV hVideoDevice_, const int *piAttribList_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, unsigned int uVideoSlot_, HVIDEOOUTPUTDEVICENV hVideoDevice_, const int *piAttribList_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglBindVideoDeviceNV"));
        BOOL returnValue = (*fun)(hDC_,uVideoSlot_,hVideoDevice_,piAttribList_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglQueryCurrentContextNV (int iAttribute_, int *piValue_)
    {
        typedef BOOL (INTER_CALL *FUNC) (int iAttribute_, int *piValue_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglQueryCurrentContextNV"));
        BOOL returnValue = (*fun)(iAttribute_,piValue_);
        return returnValue;
    }
#endif /* WGL_NV_present_video */

#ifdef WGL_NV_render_depth_texture
#endif /* WGL_NV_render_depth_texture */

#ifdef WGL_NV_render_texture_rectangle
#endif /* WGL_NV_render_texture_rectangle */

#ifdef WGL_NV_swap_group
    GLAPI BOOL APIENTRY wglJoinSwapGroupNV (HDC hDC_, GLuint group_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, GLuint group_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglJoinSwapGroupNV"));
        BOOL returnValue = (*fun)(hDC_,group_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglBindSwapBarrierNV (GLuint group_, GLuint barrier_)
    {
        typedef BOOL (INTER_CALL *FUNC) (GLuint group_, GLuint barrier_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglBindSwapBarrierNV"));
        BOOL returnValue = (*fun)(group_,barrier_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglQuerySwapGroupNV (HDC hDC_, GLuint *group_, GLuint *barrier_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, GLuint *group_, GLuint *barrier_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglQuerySwapGroupNV"));
        BOOL returnValue = (*fun)(hDC_,group_,barrier_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglQueryMaxSwapGroupsNV (HDC hDC_, GLuint *maxGroups_, GLuint *maxBarriers_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, GLuint *maxGroups_, GLuint *maxBarriers_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglQueryMaxSwapGroupsNV"));
        BOOL returnValue = (*fun)(hDC_,maxGroups_,maxBarriers_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglQueryFrameCountNV (HDC hDC_, GLuint *count_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, GLuint *count_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglQueryFrameCountNV"));
        BOOL returnValue = (*fun)(hDC_,count_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglResetFrameCountNV (HDC hDC_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglResetFrameCountNV"));
        BOOL returnValue = (*fun)(hDC_);
        return returnValue;
    }
#endif /* WGL_NV_swap_group */

#ifdef WGL_NV_vertex_array_range
    GLAPI void *APIENTRY wglAllocateMemoryNV (GLsizei size_, GLfloat readfreq_, GLfloat writefreq_, GLfloat priority_)
    {
        typedef void *(INTER_CALL *FUNC) (GLsizei size_, GLfloat readfreq_, GLfloat writefreq_, GLfloat priority_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglAllocateMemoryNV"));
        void *returnValue = (*fun)(size_,readfreq_,writefreq_,priority_);
        return returnValue;
    }
    GLAPI void APIENTRY wglFreeMemoryNV (void *pointer_)
    {
        typedef void (INTER_CALL *FUNC) (void *pointer_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglFreeMemoryNV"));
        (*fun)(pointer_);

    }
#endif /* WGL_NV_vertex_array_range */

#ifdef WGL_NV_video_capture
    GLAPI BOOL APIENTRY wglBindVideoCaptureDeviceNV (UINT uVideoSlot_, HVIDEOINPUTDEVICENV hDevice_)
    {
        typedef BOOL (INTER_CALL *FUNC) (UINT uVideoSlot_, HVIDEOINPUTDEVICENV hDevice_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglBindVideoCaptureDeviceNV"));
        BOOL returnValue = (*fun)(uVideoSlot_,hDevice_);
        return returnValue;
    }
    GLAPI UINT APIENTRY wglEnumerateVideoCaptureDevicesNV (HDC hDc_, HVIDEOINPUTDEVICENV *phDeviceList_)
    {
        typedef UINT (INTER_CALL *FUNC) (HDC hDc_, HVIDEOINPUTDEVICENV *phDeviceList_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglEnumerateVideoCaptureDevicesNV"));
        UINT returnValue = (*fun)(hDc_,phDeviceList_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglLockVideoCaptureDeviceNV (HDC hDc_, HVIDEOINPUTDEVICENV hDevice_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDc_, HVIDEOINPUTDEVICENV hDevice_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglLockVideoCaptureDeviceNV"));
        BOOL returnValue = (*fun)(hDc_,hDevice_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglQueryVideoCaptureDeviceNV (HDC hDc_, HVIDEOINPUTDEVICENV hDevice_, int iAttribute_, int *piValue_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDc_, HVIDEOINPUTDEVICENV hDevice_, int iAttribute_, int *piValue_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglQueryVideoCaptureDeviceNV"));
        BOOL returnValue = (*fun)(hDc_,hDevice_,iAttribute_,piValue_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglReleaseVideoCaptureDeviceNV (HDC hDc_, HVIDEOINPUTDEVICENV hDevice_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDc_, HVIDEOINPUTDEVICENV hDevice_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglReleaseVideoCaptureDeviceNV"));
        BOOL returnValue = (*fun)(hDc_,hDevice_);
        return returnValue;
    }
#endif /* WGL_NV_video_capture */

#ifdef WGL_NV_video_output
    GLAPI BOOL APIENTRY wglGetVideoDeviceNV (HDC hDC_, int numDevices_, HPVIDEODEV *hVideoDevice_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hDC_, int numDevices_, HPVIDEODEV *hVideoDevice_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetVideoDeviceNV"));
        BOOL returnValue = (*fun)(hDC_,numDevices_,hVideoDevice_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglReleaseVideoDeviceNV (HPVIDEODEV hVideoDevice_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HPVIDEODEV hVideoDevice_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglReleaseVideoDeviceNV"));
        BOOL returnValue = (*fun)(hVideoDevice_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglBindVideoImageNV (HPVIDEODEV hVideoDevice_, HPBUFFERARB hPbuffer_, int iVideoBuffer_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HPVIDEODEV hVideoDevice_, HPBUFFERARB hPbuffer_, int iVideoBuffer_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglBindVideoImageNV"));
        BOOL returnValue = (*fun)(hVideoDevice_,hPbuffer_,iVideoBuffer_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglReleaseVideoImageNV (HPBUFFERARB hPbuffer_, int iVideoBuffer_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HPBUFFERARB hPbuffer_, int iVideoBuffer_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglReleaseVideoImageNV"));
        BOOL returnValue = (*fun)(hPbuffer_,iVideoBuffer_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglSendPbufferToVideoNV (HPBUFFERARB hPbuffer_, int iBufferType_, unsigned long *pulCounterPbuffer_, BOOL bBlock_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HPBUFFERARB hPbuffer_, int iBufferType_, unsigned long *pulCounterPbuffer_, BOOL bBlock_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglSendPbufferToVideoNV"));
        BOOL returnValue = (*fun)(hPbuffer_,iBufferType_,pulCounterPbuffer_,bBlock_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglGetVideoInfoNV (HPVIDEODEV hpVideoDevice_, unsigned long *pulCounterOutputPbuffer_, unsigned long *pulCounterOutputVideo_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HPVIDEODEV hpVideoDevice_, unsigned long *pulCounterOutputPbuffer_, unsigned long *pulCounterOutputVideo_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetVideoInfoNV"));
        BOOL returnValue = (*fun)(hpVideoDevice_,pulCounterOutputPbuffer_,pulCounterOutputVideo_);
        return returnValue;
    }
#endif /* WGL_NV_video_output */

#ifdef WGL_OML_sync_control
    GLAPI BOOL APIENTRY wglGetSyncValuesOML (HDC hdc_, INT64 *ust_, INT64 *msc_, INT64 *sbc_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hdc_, INT64 *ust_, INT64 *msc_, INT64 *sbc_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetSyncValuesOML"));
        BOOL returnValue = (*fun)(hdc_,ust_,msc_,sbc_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglGetMscRateOML (HDC hdc_, INT32 *numerator_, INT32 *denominator_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hdc_, INT32 *numerator_, INT32 *denominator_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglGetMscRateOML"));
        BOOL returnValue = (*fun)(hdc_,numerator_,denominator_);
        return returnValue;
    }
    GLAPI INT64 APIENTRY wglSwapBuffersMscOML (HDC hdc_, INT64 target_msc_, INT64 divisor_, INT64 remainder_)
    {
        typedef INT64 (INTER_CALL *FUNC) (HDC hdc_, INT64 target_msc_, INT64 divisor_, INT64 remainder_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglSwapBuffersMscOML"));
        INT64 returnValue = (*fun)(hdc_,target_msc_,divisor_,remainder_);
        return returnValue;
    }
    GLAPI INT64 APIENTRY wglSwapLayerBuffersMscOML (HDC hdc_, int fuPlanes_, INT64 target_msc_, INT64 divisor_, INT64 remainder_)
    {
        typedef INT64 (INTER_CALL *FUNC) (HDC hdc_, int fuPlanes_, INT64 target_msc_, INT64 divisor_, INT64 remainder_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglSwapLayerBuffersMscOML"));
        INT64 returnValue = (*fun)(hdc_,fuPlanes_,target_msc_,divisor_,remainder_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglWaitForMscOML (HDC hdc_, INT64 target_msc_, INT64 divisor_, INT64 remainder_, INT64 *ust_, INT64 *msc_, INT64 *sbc_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hdc_, INT64 target_msc_, INT64 divisor_, INT64 remainder_, INT64 *ust_, INT64 *msc_, INT64 *sbc_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglWaitForMscOML"));
        BOOL returnValue = (*fun)(hdc_,target_msc_,divisor_,remainder_,ust_,msc_,sbc_);
        return returnValue;
    }
    GLAPI BOOL APIENTRY wglWaitForSbcOML (HDC hdc_, INT64 target_sbc_, INT64 *ust_, INT64 *msc_, INT64 *sbc_)
    {
        typedef BOOL (INTER_CALL *FUNC) (HDC hdc_, INT64 target_sbc_, INT64 *ust_, INT64 *msc_, INT64 *sbc_);
        FUNC fun = (FUNC)(wglGetProcAddress((LPCSTR)(const GLubyte*)"wglWaitForSbcOML"));
        BOOL returnValue = (*fun)(hdc_,target_sbc_,ust_,msc_,sbc_);
        return returnValue;
    }
#endif /* WGL_OML_sync_control */

#ifdef __cplusplus
}
#endif

#endif
