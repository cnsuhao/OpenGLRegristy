#ifndef __wgl_h_
#define __wgl_h_ 1

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

#include <windows.h>
/* Generated on date 20160324 */

/* Generated C header for:
 * API: wgl
 * Versions considered: .*
 * Versions emitted: .*
 * Default extensions included: wgl
 * Additional extensions included: _nomatch_^
 * Extensions removed: _nomatch_^
 */

#define APIENTRY 
#ifndef WGL_VERSION_1_0
#define WGL_VERSION_1_0 1
#define WGL_FONT_LINES                    0
#define WGL_FONT_POLYGONS                 1
#define WGL_SWAP_MAIN_PLANE               0x00000001
#define WGL_SWAP_OVERLAY1                 0x00000002
#define WGL_SWAP_OVERLAY2                 0x00000004
#define WGL_SWAP_OVERLAY3                 0x00000008
#define WGL_SWAP_OVERLAY4                 0x00000010
#define WGL_SWAP_OVERLAY5                 0x00000020
#define WGL_SWAP_OVERLAY6                 0x00000040
#define WGL_SWAP_OVERLAY7                 0x00000080
#define WGL_SWAP_OVERLAY8                 0x00000100
#define WGL_SWAP_OVERLAY9                 0x00000200
#define WGL_SWAP_OVERLAY10                0x00000400
#define WGL_SWAP_OVERLAY11                0x00000800
#define WGL_SWAP_OVERLAY12                0x00001000
#define WGL_SWAP_OVERLAY13                0x00002000
#define WGL_SWAP_OVERLAY14                0x00004000
#define WGL_SWAP_OVERLAY15                0x00008000
#define WGL_SWAP_UNDERLAY1                0x00010000
#define WGL_SWAP_UNDERLAY2                0x00020000
#define WGL_SWAP_UNDERLAY3                0x00040000
#define WGL_SWAP_UNDERLAY4                0x00080000
#define WGL_SWAP_UNDERLAY5                0x00100000
#define WGL_SWAP_UNDERLAY6                0x00200000
#define WGL_SWAP_UNDERLAY7                0x00400000
#define WGL_SWAP_UNDERLAY8                0x00800000
#define WGL_SWAP_UNDERLAY9                0x01000000
#define WGL_SWAP_UNDERLAY10               0x02000000
#define WGL_SWAP_UNDERLAY11               0x04000000
#define WGL_SWAP_UNDERLAY12               0x08000000
#define WGL_SWAP_UNDERLAY13               0x10000000
#define WGL_SWAP_UNDERLAY14               0x20000000
#define WGL_SWAP_UNDERLAY15               0x40000000
typedef BOOL (APIENTRY * PFNWGLCOPYCONTEXTPROC) (HGLRC hglrcSrc_, HGLRC hglrcDst_, UINT mask_);
typedef HGLRC (APIENTRY * PFNWGLCREATECONTEXTPROC) (HDC hDc_);
typedef HGLRC (APIENTRY * PFNWGLCREATELAYERCONTEXTPROC) (HDC hDc_, int level_);
typedef BOOL (APIENTRY * PFNWGLDELETECONTEXTPROC) (HGLRC oldContext_);
typedef BOOL (APIENTRY * PFNWGLDESCRIBELAYERPLANEPROC) (HDC hDc_, int pixelFormat_, int layerPlane_, UINT nBytes_, const LAYERPLANEDESCRIPTOR *plpd_);
typedef HGLRC (APIENTRY * PFNWGLGETCURRENTCONTEXTPROC) (void);
typedef HDC (APIENTRY * PFNWGLGETCURRENTDCPROC) (void);
typedef int (APIENTRY * PFNWGLGETLAYERPALETTEENTRIESPROC) (HDC hdc_, int iLayerPlane_, int iStart_, int cEntries_, const COLORREF *pcr_);
typedef PROC (APIENTRY * PFNWGLGETPROCADDRESSPROC) (LPCSTR lpszProc_);
typedef BOOL (APIENTRY * PFNWGLMAKECURRENTPROC) (HDC hDc_, HGLRC newContext_);
typedef BOOL (APIENTRY * PFNWGLREALIZELAYERPALETTEPROC) (HDC hdc_, int iLayerPlane_, BOOL bRealize_);
typedef int (APIENTRY * PFNWGLSETLAYERPALETTEENTRIESPROC) (HDC hdc_, int iLayerPlane_, int iStart_, int cEntries_, const COLORREF *pcr_);
typedef BOOL (APIENTRY * PFNWGLSHARELISTSPROC) (HGLRC hrcSrvShare_, HGLRC hrcSrvSource_);
typedef BOOL (APIENTRY * PFNWGLSWAPLAYERBUFFERSPROC) (HDC hdc_, UINT fuFlags_);
typedef BOOL (APIENTRY * PFNWGLUSEFONTBITMAPSPROC) (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_);
typedef BOOL (APIENTRY * PFNWGLUSEFONTBITMAPSAPROC) (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_);
typedef BOOL (APIENTRY * PFNWGLUSEFONTBITMAPSWPROC) (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_);
typedef BOOL (APIENTRY * PFNWGLUSEFONTOUTLINESPROC) (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_, FLOAT deviation_, FLOAT extrusion_, int format_, LPGLYPHMETRICSFLOAT lpgmf_);
typedef BOOL (APIENTRY * PFNWGLUSEFONTOUTLINESAPROC) (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_, FLOAT deviation_, FLOAT extrusion_, int format_, LPGLYPHMETRICSFLOAT lpgmf_);
typedef BOOL (APIENTRY * PFNWGLUSEFONTOUTLINESWPROC) (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_, FLOAT deviation_, FLOAT extrusion_, int format_, LPGLYPHMETRICSFLOAT lpgmf_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglCopyContext (HGLRC hglrcSrc_, HGLRC hglrcDst_, UINT mask_);
GLAPI HGLRC APIENTRY wglCreateContext (HDC hDc_);
GLAPI HGLRC APIENTRY wglCreateLayerContext (HDC hDc_, int level_);
GLAPI BOOL APIENTRY wglDeleteContext (HGLRC oldContext_);
GLAPI BOOL APIENTRY wglDescribeLayerPlane (HDC hDc_, int pixelFormat_, int layerPlane_, UINT nBytes_, const LAYERPLANEDESCRIPTOR *plpd_);
GLAPI HGLRC APIENTRY wglGetCurrentContext (void);
GLAPI HDC APIENTRY wglGetCurrentDC (void);
GLAPI int APIENTRY wglGetLayerPaletteEntries (HDC hdc_, int iLayerPlane_, int iStart_, int cEntries_, const COLORREF *pcr_);
GLAPI PROC APIENTRY wglGetProcAddress (LPCSTR lpszProc_);
GLAPI BOOL APIENTRY wglMakeCurrent (HDC hDc_, HGLRC newContext_);
GLAPI BOOL APIENTRY wglRealizeLayerPalette (HDC hdc_, int iLayerPlane_, BOOL bRealize_);
GLAPI int APIENTRY wglSetLayerPaletteEntries (HDC hdc_, int iLayerPlane_, int iStart_, int cEntries_, const COLORREF *pcr_);
GLAPI BOOL APIENTRY wglShareLists (HGLRC hrcSrvShare_, HGLRC hrcSrvSource_);
GLAPI BOOL APIENTRY wglSwapLayerBuffers (HDC hdc_, UINT fuFlags_);
GLAPI BOOL APIENTRY wglUseFontBitmaps (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_);
GLAPI BOOL APIENTRY wglUseFontBitmapsA (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_);
GLAPI BOOL APIENTRY wglUseFontBitmapsW (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_);
GLAPI BOOL APIENTRY wglUseFontOutlines (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_, FLOAT deviation_, FLOAT extrusion_, int format_, LPGLYPHMETRICSFLOAT lpgmf_);
GLAPI BOOL APIENTRY wglUseFontOutlinesA (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_, FLOAT deviation_, FLOAT extrusion_, int format_, LPGLYPHMETRICSFLOAT lpgmf_);
GLAPI BOOL APIENTRY wglUseFontOutlinesW (HDC hDC_, DWORD first_, DWORD count_, DWORD listBase_, FLOAT deviation_, FLOAT extrusion_, int format_, LPGLYPHMETRICSFLOAT lpgmf_);
#endif
#endif /* WGL_VERSION_1_0 */

#ifndef WGL_ARB_buffer_region
#define WGL_ARB_buffer_region 1
#define WGL_FRONT_COLOR_BUFFER_BIT_ARB    0x00000001
#define WGL_BACK_COLOR_BUFFER_BIT_ARB     0x00000002
#define WGL_DEPTH_BUFFER_BIT_ARB          0x00000004
#define WGL_STENCIL_BUFFER_BIT_ARB        0x00000008
typedef HANDLE (APIENTRY * PFNWGLCREATEBUFFERREGIONARBPROC) (HDC hDC_, int iLayerPlane_, UINT uType_);
typedef VOID (APIENTRY * PFNWGLDELETEBUFFERREGIONARBPROC) (HANDLE hRegion_);
typedef BOOL (APIENTRY * PFNWGLSAVEBUFFERREGIONARBPROC) (HANDLE hRegion_, int x_, int y_, int width_, int height_);
typedef BOOL (APIENTRY * PFNWGLRESTOREBUFFERREGIONARBPROC) (HANDLE hRegion_, int x_, int y_, int width_, int height_, int xSrc_, int ySrc_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI HANDLE APIENTRY wglCreateBufferRegionARB (HDC hDC_, int iLayerPlane_, UINT uType_);
GLAPI VOID APIENTRY wglDeleteBufferRegionARB (HANDLE hRegion_);
GLAPI BOOL APIENTRY wglSaveBufferRegionARB (HANDLE hRegion_, int x_, int y_, int width_, int height_);
GLAPI BOOL APIENTRY wglRestoreBufferRegionARB (HANDLE hRegion_, int x_, int y_, int width_, int height_, int xSrc_, int ySrc_);
#endif
#endif /* WGL_ARB_buffer_region */

#ifndef WGL_ARB_context_flush_control
#define WGL_ARB_context_flush_control 1
#define WGL_CONTEXT_RELEASE_BEHAVIOR_ARB  0x2097
#define WGL_CONTEXT_RELEASE_BEHAVIOR_NONE_ARB 0
#define WGL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB 0x2098
#endif /* WGL_ARB_context_flush_control */

#ifndef WGL_ARB_create_context
#define WGL_ARB_create_context 1
#define WGL_CONTEXT_DEBUG_BIT_ARB         0x00000001
#define WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB 0x00000002
#define WGL_CONTEXT_MAJOR_VERSION_ARB     0x2091
#define WGL_CONTEXT_MINOR_VERSION_ARB     0x2092
#define WGL_CONTEXT_LAYER_PLANE_ARB       0x2093
#define WGL_CONTEXT_FLAGS_ARB             0x2094
#define ERROR_INVALID_VERSION_ARB         0x2095
typedef HGLRC (APIENTRY * PFNWGLCREATECONTEXTATTRIBSARBPROC) (HDC hDC_, HGLRC hShareContext_, const int *attribList_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI HGLRC APIENTRY wglCreateContextAttribsARB (HDC hDC_, HGLRC hShareContext_, const int *attribList_);
#endif
#endif /* WGL_ARB_create_context */

#ifndef WGL_ARB_create_context_profile
#define WGL_ARB_create_context_profile 1
#define WGL_CONTEXT_PROFILE_MASK_ARB      0x9126
#define WGL_CONTEXT_CORE_PROFILE_BIT_ARB  0x00000001
#define WGL_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB 0x00000002
#define ERROR_INVALID_PROFILE_ARB         0x2096
#endif /* WGL_ARB_create_context_profile */

#ifndef WGL_ARB_create_context_robustness
#define WGL_ARB_create_context_robustness 1
#define WGL_CONTEXT_ROBUST_ACCESS_BIT_ARB 0x00000004
#define WGL_LOSE_CONTEXT_ON_RESET_ARB     0x8252
#define WGL_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#define WGL_NO_RESET_NOTIFICATION_ARB     0x8261
#endif /* WGL_ARB_create_context_robustness */

#ifndef WGL_ARB_extensions_string
#define WGL_ARB_extensions_string 1
typedef const char *(APIENTRY * PFNWGLGETEXTENSIONSSTRINGARBPROC) (HDC hdc_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI const char *APIENTRY wglGetExtensionsStringARB (HDC hdc_);
#endif
#endif /* WGL_ARB_extensions_string */

#ifndef WGL_ARB_framebuffer_sRGB
#define WGL_ARB_framebuffer_sRGB 1
#define WGL_FRAMEBUFFER_SRGB_CAPABLE_ARB  0x20A9
#endif /* WGL_ARB_framebuffer_sRGB */

#ifndef WGL_ARB_make_current_read
#define WGL_ARB_make_current_read 1
#define ERROR_INVALID_PIXEL_TYPE_ARB      0x2043
#define ERROR_INCOMPATIBLE_DEVICE_CONTEXTS_ARB 0x2054
typedef BOOL (APIENTRY * PFNWGLMAKECONTEXTCURRENTARBPROC) (HDC hDrawDC_, HDC hReadDC_, HGLRC hglrc_);
typedef HDC (APIENTRY * PFNWGLGETCURRENTREADDCARBPROC) (void);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglMakeContextCurrentARB (HDC hDrawDC_, HDC hReadDC_, HGLRC hglrc_);
GLAPI HDC APIENTRY wglGetCurrentReadDCARB (void);
#endif
#endif /* WGL_ARB_make_current_read */

#ifndef WGL_ARB_multisample
#define WGL_ARB_multisample 1
#define WGL_SAMPLE_BUFFERS_ARB            0x2041
#define WGL_SAMPLES_ARB                   0x2042
#endif /* WGL_ARB_multisample */

#ifndef WGL_ARB_pbuffer
#define WGL_ARB_pbuffer 1
DECLARE_HANDLE(HPBUFFERARB);
#define WGL_DRAW_TO_PBUFFER_ARB           0x202D
#define WGL_MAX_PBUFFER_PIXELS_ARB        0x202E
#define WGL_MAX_PBUFFER_WIDTH_ARB         0x202F
#define WGL_MAX_PBUFFER_HEIGHT_ARB        0x2030
#define WGL_PBUFFER_LARGEST_ARB           0x2033
#define WGL_PBUFFER_WIDTH_ARB             0x2034
#define WGL_PBUFFER_HEIGHT_ARB            0x2035
#define WGL_PBUFFER_LOST_ARB              0x2036
typedef HPBUFFERARB (APIENTRY * PFNWGLCREATEPBUFFERARBPROC) (HDC hDC_, int iPixelFormat_, int iWidth_, int iHeight_, const int *piAttribList_);
typedef HDC (APIENTRY * PFNWGLGETPBUFFERDCARBPROC) (HPBUFFERARB hPbuffer_);
typedef int (APIENTRY * PFNWGLRELEASEPBUFFERDCARBPROC) (HPBUFFERARB hPbuffer_, HDC hDC_);
typedef BOOL (APIENTRY * PFNWGLDESTROYPBUFFERARBPROC) (HPBUFFERARB hPbuffer_);
typedef BOOL (APIENTRY * PFNWGLQUERYPBUFFERARBPROC) (HPBUFFERARB hPbuffer_, int iAttribute_, int *piValue_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI HPBUFFERARB APIENTRY wglCreatePbufferARB (HDC hDC_, int iPixelFormat_, int iWidth_, int iHeight_, const int *piAttribList_);
GLAPI HDC APIENTRY wglGetPbufferDCARB (HPBUFFERARB hPbuffer_);
GLAPI int APIENTRY wglReleasePbufferDCARB (HPBUFFERARB hPbuffer_, HDC hDC_);
GLAPI BOOL APIENTRY wglDestroyPbufferARB (HPBUFFERARB hPbuffer_);
GLAPI BOOL APIENTRY wglQueryPbufferARB (HPBUFFERARB hPbuffer_, int iAttribute_, int *piValue_);
#endif
#endif /* WGL_ARB_pbuffer */

#ifndef WGL_ARB_pixel_format
#define WGL_ARB_pixel_format 1
#define WGL_NUMBER_PIXEL_FORMATS_ARB      0x2000
#define WGL_DRAW_TO_WINDOW_ARB            0x2001
#define WGL_DRAW_TO_BITMAP_ARB            0x2002
#define WGL_ACCELERATION_ARB              0x2003
#define WGL_NEED_PALETTE_ARB              0x2004
#define WGL_NEED_SYSTEM_PALETTE_ARB       0x2005
#define WGL_SWAP_LAYER_BUFFERS_ARB        0x2006
#define WGL_SWAP_METHOD_ARB               0x2007
#define WGL_NUMBER_OVERLAYS_ARB           0x2008
#define WGL_NUMBER_UNDERLAYS_ARB          0x2009
#define WGL_TRANSPARENT_ARB               0x200A
#define WGL_TRANSPARENT_RED_VALUE_ARB     0x2037
#define WGL_TRANSPARENT_GREEN_VALUE_ARB   0x2038
#define WGL_TRANSPARENT_BLUE_VALUE_ARB    0x2039
#define WGL_TRANSPARENT_ALPHA_VALUE_ARB   0x203A
#define WGL_TRANSPARENT_INDEX_VALUE_ARB   0x203B
#define WGL_SHARE_DEPTH_ARB               0x200C
#define WGL_SHARE_STENCIL_ARB             0x200D
#define WGL_SHARE_ACCUM_ARB               0x200E
#define WGL_SUPPORT_GDI_ARB               0x200F
#define WGL_SUPPORT_OPENGL_ARB            0x2010
#define WGL_DOUBLE_BUFFER_ARB             0x2011
#define WGL_STEREO_ARB                    0x2012
#define WGL_PIXEL_TYPE_ARB                0x2013
#define WGL_COLOR_BITS_ARB                0x2014
#define WGL_RED_BITS_ARB                  0x2015
#define WGL_RED_SHIFT_ARB                 0x2016
#define WGL_GREEN_BITS_ARB                0x2017
#define WGL_GREEN_SHIFT_ARB               0x2018
#define WGL_BLUE_BITS_ARB                 0x2019
#define WGL_BLUE_SHIFT_ARB                0x201A
#define WGL_ALPHA_BITS_ARB                0x201B
#define WGL_ALPHA_SHIFT_ARB               0x201C
#define WGL_ACCUM_BITS_ARB                0x201D
#define WGL_ACCUM_RED_BITS_ARB            0x201E
#define WGL_ACCUM_GREEN_BITS_ARB          0x201F
#define WGL_ACCUM_BLUE_BITS_ARB           0x2020
#define WGL_ACCUM_ALPHA_BITS_ARB          0x2021
#define WGL_DEPTH_BITS_ARB                0x2022
#define WGL_STENCIL_BITS_ARB              0x2023
#define WGL_AUX_BUFFERS_ARB               0x2024
#define WGL_NO_ACCELERATION_ARB           0x2025
#define WGL_GENERIC_ACCELERATION_ARB      0x2026
#define WGL_FULL_ACCELERATION_ARB         0x2027
#define WGL_SWAP_EXCHANGE_ARB             0x2028
#define WGL_SWAP_COPY_ARB                 0x2029
#define WGL_SWAP_UNDEFINED_ARB            0x202A
#define WGL_TYPE_RGBA_ARB                 0x202B
#define WGL_TYPE_COLORINDEX_ARB           0x202C
typedef BOOL (APIENTRY * PFNWGLGETPIXELFORMATATTRIBIVARBPROC) (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, const int *piAttributes_, int *piValues_);
typedef BOOL (APIENTRY * PFNWGLGETPIXELFORMATATTRIBFVARBPROC) (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, const int *piAttributes_, FLOAT *pfValues_);
typedef BOOL (APIENTRY * PFNWGLCHOOSEPIXELFORMATARBPROC) (HDC hdc_, const int *piAttribIList_, const FLOAT *pfAttribFList_, UINT nMaxFormats_, int *piFormats_, UINT *nNumFormats_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglGetPixelFormatAttribivARB (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, const int *piAttributes_, int *piValues_);
GLAPI BOOL APIENTRY wglGetPixelFormatAttribfvARB (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, const int *piAttributes_, FLOAT *pfValues_);
GLAPI BOOL APIENTRY wglChoosePixelFormatARB (HDC hdc_, const int *piAttribIList_, const FLOAT *pfAttribFList_, UINT nMaxFormats_, int *piFormats_, UINT *nNumFormats_);
#endif
#endif /* WGL_ARB_pixel_format */

#ifndef WGL_ARB_pixel_format_float
#define WGL_ARB_pixel_format_float 1
#define WGL_TYPE_RGBA_FLOAT_ARB           0x21A0
#endif /* WGL_ARB_pixel_format_float */

#ifndef WGL_ARB_render_texture
#define WGL_ARB_render_texture 1
#define WGL_BIND_TO_TEXTURE_RGB_ARB       0x2070
#define WGL_BIND_TO_TEXTURE_RGBA_ARB      0x2071
#define WGL_TEXTURE_FORMAT_ARB            0x2072
#define WGL_TEXTURE_TARGET_ARB            0x2073
#define WGL_MIPMAP_TEXTURE_ARB            0x2074
#define WGL_TEXTURE_RGB_ARB               0x2075
#define WGL_TEXTURE_RGBA_ARB              0x2076
#define WGL_NO_TEXTURE_ARB                0x2077
#define WGL_TEXTURE_CUBE_MAP_ARB          0x2078
#define WGL_TEXTURE_1D_ARB                0x2079
#define WGL_TEXTURE_2D_ARB                0x207A
#define WGL_MIPMAP_LEVEL_ARB              0x207B
#define WGL_CUBE_MAP_FACE_ARB             0x207C
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB 0x207D
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB 0x207E
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB 0x207F
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB 0x2080
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB 0x2081
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB 0x2082
#define WGL_FRONT_LEFT_ARB                0x2083
#define WGL_FRONT_RIGHT_ARB               0x2084
#define WGL_BACK_LEFT_ARB                 0x2085
#define WGL_BACK_RIGHT_ARB                0x2086
#define WGL_AUX0_ARB                      0x2087
#define WGL_AUX1_ARB                      0x2088
#define WGL_AUX2_ARB                      0x2089
#define WGL_AUX3_ARB                      0x208A
#define WGL_AUX4_ARB                      0x208B
#define WGL_AUX5_ARB                      0x208C
#define WGL_AUX6_ARB                      0x208D
#define WGL_AUX7_ARB                      0x208E
#define WGL_AUX8_ARB                      0x208F
#define WGL_AUX9_ARB                      0x2090
typedef BOOL (APIENTRY * PFNWGLBINDTEXIMAGEARBPROC) (HPBUFFERARB hPbuffer_, int iBuffer_);
typedef BOOL (APIENTRY * PFNWGLRELEASETEXIMAGEARBPROC) (HPBUFFERARB hPbuffer_, int iBuffer_);
typedef BOOL (APIENTRY * PFNWGLSETPBUFFERATTRIBARBPROC) (HPBUFFERARB hPbuffer_, const int *piAttribList_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglBindTexImageARB (HPBUFFERARB hPbuffer_, int iBuffer_);
GLAPI BOOL APIENTRY wglReleaseTexImageARB (HPBUFFERARB hPbuffer_, int iBuffer_);
GLAPI BOOL APIENTRY wglSetPbufferAttribARB (HPBUFFERARB hPbuffer_, const int *piAttribList_);
#endif
#endif /* WGL_ARB_render_texture */

#ifndef WGL_ARB_robustness_application_isolation
#define WGL_ARB_robustness_application_isolation 1
#define WGL_CONTEXT_RESET_ISOLATION_BIT_ARB 0x00000008
#endif /* WGL_ARB_robustness_application_isolation */

#ifndef WGL_ARB_robustness_share_group_isolation
#define WGL_ARB_robustness_share_group_isolation 1
#endif /* WGL_ARB_robustness_share_group_isolation */

#ifndef WGL_3DFX_multisample
#define WGL_3DFX_multisample 1
#define WGL_SAMPLE_BUFFERS_3DFX           0x2060
#define WGL_SAMPLES_3DFX                  0x2061
#endif /* WGL_3DFX_multisample */

#ifndef WGL_3DL_stereo_control
#define WGL_3DL_stereo_control 1
#define WGL_STEREO_EMITTER_ENABLE_3DL     0x2055
#define WGL_STEREO_EMITTER_DISABLE_3DL    0x2056
#define WGL_STEREO_POLARITY_NORMAL_3DL    0x2057
#define WGL_STEREO_POLARITY_INVERT_3DL    0x2058
typedef BOOL (APIENTRY * PFNWGLSETSTEREOEMITTERSTATE3DLPROC) (HDC hDC_, UINT uState_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglSetStereoEmitterState3DL (HDC hDC_, UINT uState_);
#endif
#endif /* WGL_3DL_stereo_control */

#ifndef WGL_AMD_gpu_association
#define WGL_AMD_gpu_association 1
#define WGL_GPU_VENDOR_AMD                0x1F00
#define WGL_GPU_RENDERER_STRING_AMD       0x1F01
#define WGL_GPU_OPENGL_VERSION_STRING_AMD 0x1F02
#define WGL_GPU_FASTEST_TARGET_GPUS_AMD   0x21A2
#define WGL_GPU_RAM_AMD                   0x21A3
#define WGL_GPU_CLOCK_AMD                 0x21A4
#define WGL_GPU_NUM_PIPES_AMD             0x21A5
#define WGL_GPU_NUM_SIMD_AMD              0x21A6
#define WGL_GPU_NUM_RB_AMD                0x21A7
#define WGL_GPU_NUM_SPI_AMD               0x21A8
typedef UINT (APIENTRY * PFNWGLGETGPUIDSAMDPROC) (UINT maxCount_, UINT *ids_);
typedef INT (APIENTRY * PFNWGLGETGPUINFOAMDPROC) (UINT id_, int property_, GLenum dataType_, UINT size_, void *data_);
typedef UINT (APIENTRY * PFNWGLGETCONTEXTGPUIDAMDPROC) (HGLRC hglrc_);
typedef HGLRC (APIENTRY * PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC) (UINT id_);
typedef HGLRC (APIENTRY * PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) (UINT id_, HGLRC hShareContext_, const int *attribList_);
typedef BOOL (APIENTRY * PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC) (HGLRC hglrc_);
typedef BOOL (APIENTRY * PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) (HGLRC hglrc_);
typedef HGLRC (APIENTRY * PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC) (void);
typedef VOID (APIENTRY * PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC) (HGLRC dstCtx_, GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI UINT APIENTRY wglGetGPUIDsAMD (UINT maxCount_, UINT *ids_);
GLAPI INT APIENTRY wglGetGPUInfoAMD (UINT id_, int property_, GLenum dataType_, UINT size_, void *data_);
GLAPI UINT APIENTRY wglGetContextGPUIDAMD (HGLRC hglrc_);
GLAPI HGLRC APIENTRY wglCreateAssociatedContextAMD (UINT id_);
GLAPI HGLRC APIENTRY wglCreateAssociatedContextAttribsAMD (UINT id_, HGLRC hShareContext_, const int *attribList_);
GLAPI BOOL APIENTRY wglDeleteAssociatedContextAMD (HGLRC hglrc_);
GLAPI BOOL APIENTRY wglMakeAssociatedContextCurrentAMD (HGLRC hglrc_);
GLAPI HGLRC APIENTRY wglGetCurrentAssociatedContextAMD (void);
GLAPI VOID APIENTRY wglBlitContextFramebufferAMD (HGLRC dstCtx_, GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_);
#endif
#endif /* WGL_AMD_gpu_association */

#ifndef WGL_ATI_pixel_format_float
#define WGL_ATI_pixel_format_float 1
#define WGL_TYPE_RGBA_FLOAT_ATI           0x21A0
#endif /* WGL_ATI_pixel_format_float */

#ifndef WGL_EXT_create_context_es2_profile
#define WGL_EXT_create_context_es2_profile 1
#define WGL_CONTEXT_ES2_PROFILE_BIT_EXT   0x00000004
#endif /* WGL_EXT_create_context_es2_profile */

#ifndef WGL_EXT_create_context_es_profile
#define WGL_EXT_create_context_es_profile 1
#define WGL_CONTEXT_ES_PROFILE_BIT_EXT    0x00000004
#endif /* WGL_EXT_create_context_es_profile */

#ifndef WGL_EXT_depth_float
#define WGL_EXT_depth_float 1
#define WGL_DEPTH_FLOAT_EXT               0x2040
#endif /* WGL_EXT_depth_float */

#ifndef WGL_EXT_display_color_table
#define WGL_EXT_display_color_table 1
typedef GLboolean (APIENTRY * PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC) (GLushort id_);
typedef GLboolean (APIENTRY * PFNWGLLOADDISPLAYCOLORTABLEEXTPROC) (const GLushort *table_, GLuint length_);
typedef GLboolean (APIENTRY * PFNWGLBINDDISPLAYCOLORTABLEEXTPROC) (GLushort id_);
typedef VOID (APIENTRY * PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC) (GLushort id_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI GLboolean APIENTRY wglCreateDisplayColorTableEXT (GLushort id_);
GLAPI GLboolean APIENTRY wglLoadDisplayColorTableEXT (const GLushort *table_, GLuint length_);
GLAPI GLboolean APIENTRY wglBindDisplayColorTableEXT (GLushort id_);
GLAPI VOID APIENTRY wglDestroyDisplayColorTableEXT (GLushort id_);
#endif
#endif /* WGL_EXT_display_color_table */

#ifndef WGL_EXT_extensions_string
#define WGL_EXT_extensions_string 1
typedef const char *(APIENTRY * PFNWGLGETEXTENSIONSSTRINGEXTPROC) (void);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI const char *APIENTRY wglGetExtensionsStringEXT (void);
#endif
#endif /* WGL_EXT_extensions_string */

#ifndef WGL_EXT_framebuffer_sRGB
#define WGL_EXT_framebuffer_sRGB 1
#define WGL_FRAMEBUFFER_SRGB_CAPABLE_EXT  0x20A9
#endif /* WGL_EXT_framebuffer_sRGB */

#ifndef WGL_EXT_make_current_read
#define WGL_EXT_make_current_read 1
#define ERROR_INVALID_PIXEL_TYPE_EXT      0x2043
typedef BOOL (APIENTRY * PFNWGLMAKECONTEXTCURRENTEXTPROC) (HDC hDrawDC_, HDC hReadDC_, HGLRC hglrc_);
typedef HDC (APIENTRY * PFNWGLGETCURRENTREADDCEXTPROC) (void);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglMakeContextCurrentEXT (HDC hDrawDC_, HDC hReadDC_, HGLRC hglrc_);
GLAPI HDC APIENTRY wglGetCurrentReadDCEXT (void);
#endif
#endif /* WGL_EXT_make_current_read */

#ifndef WGL_EXT_multisample
#define WGL_EXT_multisample 1
#define WGL_SAMPLE_BUFFERS_EXT            0x2041
#define WGL_SAMPLES_EXT                   0x2042
#endif /* WGL_EXT_multisample */

#ifndef WGL_EXT_pbuffer
#define WGL_EXT_pbuffer 1
DECLARE_HANDLE(HPBUFFEREXT);
#define WGL_DRAW_TO_PBUFFER_EXT           0x202D
#define WGL_MAX_PBUFFER_PIXELS_EXT        0x202E
#define WGL_MAX_PBUFFER_WIDTH_EXT         0x202F
#define WGL_MAX_PBUFFER_HEIGHT_EXT        0x2030
#define WGL_OPTIMAL_PBUFFER_WIDTH_EXT     0x2031
#define WGL_OPTIMAL_PBUFFER_HEIGHT_EXT    0x2032
#define WGL_PBUFFER_LARGEST_EXT           0x2033
#define WGL_PBUFFER_WIDTH_EXT             0x2034
#define WGL_PBUFFER_HEIGHT_EXT            0x2035
typedef HPBUFFEREXT (APIENTRY * PFNWGLCREATEPBUFFEREXTPROC) (HDC hDC_, int iPixelFormat_, int iWidth_, int iHeight_, const int *piAttribList_);
typedef HDC (APIENTRY * PFNWGLGETPBUFFERDCEXTPROC) (HPBUFFEREXT hPbuffer_);
typedef int (APIENTRY * PFNWGLRELEASEPBUFFERDCEXTPROC) (HPBUFFEREXT hPbuffer_, HDC hDC_);
typedef BOOL (APIENTRY * PFNWGLDESTROYPBUFFEREXTPROC) (HPBUFFEREXT hPbuffer_);
typedef BOOL (APIENTRY * PFNWGLQUERYPBUFFEREXTPROC) (HPBUFFEREXT hPbuffer_, int iAttribute_, int *piValue_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI HPBUFFEREXT APIENTRY wglCreatePbufferEXT (HDC hDC_, int iPixelFormat_, int iWidth_, int iHeight_, const int *piAttribList_);
GLAPI HDC APIENTRY wglGetPbufferDCEXT (HPBUFFEREXT hPbuffer_);
GLAPI int APIENTRY wglReleasePbufferDCEXT (HPBUFFEREXT hPbuffer_, HDC hDC_);
GLAPI BOOL APIENTRY wglDestroyPbufferEXT (HPBUFFEREXT hPbuffer_);
GLAPI BOOL APIENTRY wglQueryPbufferEXT (HPBUFFEREXT hPbuffer_, int iAttribute_, int *piValue_);
#endif
#endif /* WGL_EXT_pbuffer */

#ifndef WGL_EXT_pixel_format
#define WGL_EXT_pixel_format 1
#define WGL_NUMBER_PIXEL_FORMATS_EXT      0x2000
#define WGL_DRAW_TO_WINDOW_EXT            0x2001
#define WGL_DRAW_TO_BITMAP_EXT            0x2002
#define WGL_ACCELERATION_EXT              0x2003
#define WGL_NEED_PALETTE_EXT              0x2004
#define WGL_NEED_SYSTEM_PALETTE_EXT       0x2005
#define WGL_SWAP_LAYER_BUFFERS_EXT        0x2006
#define WGL_SWAP_METHOD_EXT               0x2007
#define WGL_NUMBER_OVERLAYS_EXT           0x2008
#define WGL_NUMBER_UNDERLAYS_EXT          0x2009
#define WGL_TRANSPARENT_EXT               0x200A
#define WGL_TRANSPARENT_VALUE_EXT         0x200B
#define WGL_SHARE_DEPTH_EXT               0x200C
#define WGL_SHARE_STENCIL_EXT             0x200D
#define WGL_SHARE_ACCUM_EXT               0x200E
#define WGL_SUPPORT_GDI_EXT               0x200F
#define WGL_SUPPORT_OPENGL_EXT            0x2010
#define WGL_DOUBLE_BUFFER_EXT             0x2011
#define WGL_STEREO_EXT                    0x2012
#define WGL_PIXEL_TYPE_EXT                0x2013
#define WGL_COLOR_BITS_EXT                0x2014
#define WGL_RED_BITS_EXT                  0x2015
#define WGL_RED_SHIFT_EXT                 0x2016
#define WGL_GREEN_BITS_EXT                0x2017
#define WGL_GREEN_SHIFT_EXT               0x2018
#define WGL_BLUE_BITS_EXT                 0x2019
#define WGL_BLUE_SHIFT_EXT                0x201A
#define WGL_ALPHA_BITS_EXT                0x201B
#define WGL_ALPHA_SHIFT_EXT               0x201C
#define WGL_ACCUM_BITS_EXT                0x201D
#define WGL_ACCUM_RED_BITS_EXT            0x201E
#define WGL_ACCUM_GREEN_BITS_EXT          0x201F
#define WGL_ACCUM_BLUE_BITS_EXT           0x2020
#define WGL_ACCUM_ALPHA_BITS_EXT          0x2021
#define WGL_DEPTH_BITS_EXT                0x2022
#define WGL_STENCIL_BITS_EXT              0x2023
#define WGL_AUX_BUFFERS_EXT               0x2024
#define WGL_NO_ACCELERATION_EXT           0x2025
#define WGL_GENERIC_ACCELERATION_EXT      0x2026
#define WGL_FULL_ACCELERATION_EXT         0x2027
#define WGL_SWAP_EXCHANGE_EXT             0x2028
#define WGL_SWAP_COPY_EXT                 0x2029
#define WGL_SWAP_UNDEFINED_EXT            0x202A
#define WGL_TYPE_RGBA_EXT                 0x202B
#define WGL_TYPE_COLORINDEX_EXT           0x202C
typedef BOOL (APIENTRY * PFNWGLGETPIXELFORMATATTRIBIVEXTPROC) (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, int *piAttributes_, int *piValues_);
typedef BOOL (APIENTRY * PFNWGLGETPIXELFORMATATTRIBFVEXTPROC) (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, int *piAttributes_, FLOAT *pfValues_);
typedef BOOL (APIENTRY * PFNWGLCHOOSEPIXELFORMATEXTPROC) (HDC hdc_, const int *piAttribIList_, const FLOAT *pfAttribFList_, UINT nMaxFormats_, int *piFormats_, UINT *nNumFormats_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglGetPixelFormatAttribivEXT (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, int *piAttributes_, int *piValues_);
GLAPI BOOL APIENTRY wglGetPixelFormatAttribfvEXT (HDC hdc_, int iPixelFormat_, int iLayerPlane_, UINT nAttributes_, int *piAttributes_, FLOAT *pfValues_);
GLAPI BOOL APIENTRY wglChoosePixelFormatEXT (HDC hdc_, const int *piAttribIList_, const FLOAT *pfAttribFList_, UINT nMaxFormats_, int *piFormats_, UINT *nNumFormats_);
#endif
#endif /* WGL_EXT_pixel_format */

#ifndef WGL_EXT_pixel_format_packed_float
#define WGL_EXT_pixel_format_packed_float 1
#define WGL_TYPE_RGBA_UNSIGNED_FLOAT_EXT  0x20A8
#endif /* WGL_EXT_pixel_format_packed_float */

#ifndef WGL_EXT_swap_control
#define WGL_EXT_swap_control 1
typedef BOOL (APIENTRY * PFNWGLSWAPINTERVALEXTPROC) (int interval_);
typedef int (APIENTRY * PFNWGLGETSWAPINTERVALEXTPROC) (void);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglSwapIntervalEXT (int interval_);
GLAPI int APIENTRY wglGetSwapIntervalEXT (void);
#endif
#endif /* WGL_EXT_swap_control */

#ifndef WGL_EXT_swap_control_tear
#define WGL_EXT_swap_control_tear 1
#endif /* WGL_EXT_swap_control_tear */

#ifndef WGL_I3D_digital_video_control
#define WGL_I3D_digital_video_control 1
#define WGL_DIGITAL_VIDEO_CURSOR_ALPHA_FRAMEBUFFER_I3D 0x2050
#define WGL_DIGITAL_VIDEO_CURSOR_ALPHA_VALUE_I3D 0x2051
#define WGL_DIGITAL_VIDEO_CURSOR_INCLUDED_I3D 0x2052
#define WGL_DIGITAL_VIDEO_GAMMA_CORRECTED_I3D 0x2053
typedef BOOL (APIENTRY * PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC) (HDC hDC_, int iAttribute_, int *piValue_);
typedef BOOL (APIENTRY * PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC) (HDC hDC_, int iAttribute_, const int *piValue_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglGetDigitalVideoParametersI3D (HDC hDC_, int iAttribute_, int *piValue_);
GLAPI BOOL APIENTRY wglSetDigitalVideoParametersI3D (HDC hDC_, int iAttribute_, const int *piValue_);
#endif
#endif /* WGL_I3D_digital_video_control */

#ifndef WGL_I3D_gamma
#define WGL_I3D_gamma 1
#define WGL_GAMMA_TABLE_SIZE_I3D          0x204E
#define WGL_GAMMA_EXCLUDE_DESKTOP_I3D     0x204F
typedef BOOL (APIENTRY * PFNWGLGETGAMMATABLEPARAMETERSI3DPROC) (HDC hDC_, int iAttribute_, int *piValue_);
typedef BOOL (APIENTRY * PFNWGLSETGAMMATABLEPARAMETERSI3DPROC) (HDC hDC_, int iAttribute_, const int *piValue_);
typedef BOOL (APIENTRY * PFNWGLGETGAMMATABLEI3DPROC) (HDC hDC_, int iEntries_, USHORT *puRed_, USHORT *puGreen_, USHORT *puBlue_);
typedef BOOL (APIENTRY * PFNWGLSETGAMMATABLEI3DPROC) (HDC hDC_, int iEntries_, const USHORT *puRed_, const USHORT *puGreen_, const USHORT *puBlue_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglGetGammaTableParametersI3D (HDC hDC_, int iAttribute_, int *piValue_);
GLAPI BOOL APIENTRY wglSetGammaTableParametersI3D (HDC hDC_, int iAttribute_, const int *piValue_);
GLAPI BOOL APIENTRY wglGetGammaTableI3D (HDC hDC_, int iEntries_, USHORT *puRed_, USHORT *puGreen_, USHORT *puBlue_);
GLAPI BOOL APIENTRY wglSetGammaTableI3D (HDC hDC_, int iEntries_, const USHORT *puRed_, const USHORT *puGreen_, const USHORT *puBlue_);
#endif
#endif /* WGL_I3D_gamma */

#ifndef WGL_I3D_genlock
#define WGL_I3D_genlock 1
#define WGL_GENLOCK_SOURCE_MULTIVIEW_I3D  0x2044
#define WGL_GENLOCK_SOURCE_EXTERNAL_SYNC_I3D 0x2045
#define WGL_GENLOCK_SOURCE_EXTERNAL_FIELD_I3D 0x2046
#define WGL_GENLOCK_SOURCE_EXTERNAL_TTL_I3D 0x2047
#define WGL_GENLOCK_SOURCE_DIGITAL_SYNC_I3D 0x2048
#define WGL_GENLOCK_SOURCE_DIGITAL_FIELD_I3D 0x2049
#define WGL_GENLOCK_SOURCE_EDGE_FALLING_I3D 0x204A
#define WGL_GENLOCK_SOURCE_EDGE_RISING_I3D 0x204B
#define WGL_GENLOCK_SOURCE_EDGE_BOTH_I3D  0x204C
typedef BOOL (APIENTRY * PFNWGLENABLEGENLOCKI3DPROC) (HDC hDC_);
typedef BOOL (APIENTRY * PFNWGLDISABLEGENLOCKI3DPROC) (HDC hDC_);
typedef BOOL (APIENTRY * PFNWGLISENABLEDGENLOCKI3DPROC) (HDC hDC_, BOOL *pFlag_);
typedef BOOL (APIENTRY * PFNWGLGENLOCKSOURCEI3DPROC) (HDC hDC_, UINT uSource_);
typedef BOOL (APIENTRY * PFNWGLGETGENLOCKSOURCEI3DPROC) (HDC hDC_, UINT *uSource_);
typedef BOOL (APIENTRY * PFNWGLGENLOCKSOURCEEDGEI3DPROC) (HDC hDC_, UINT uEdge_);
typedef BOOL (APIENTRY * PFNWGLGETGENLOCKSOURCEEDGEI3DPROC) (HDC hDC_, UINT *uEdge_);
typedef BOOL (APIENTRY * PFNWGLGENLOCKSAMPLERATEI3DPROC) (HDC hDC_, UINT uRate_);
typedef BOOL (APIENTRY * PFNWGLGETGENLOCKSAMPLERATEI3DPROC) (HDC hDC_, UINT *uRate_);
typedef BOOL (APIENTRY * PFNWGLGENLOCKSOURCEDELAYI3DPROC) (HDC hDC_, UINT uDelay_);
typedef BOOL (APIENTRY * PFNWGLGETGENLOCKSOURCEDELAYI3DPROC) (HDC hDC_, UINT *uDelay_);
typedef BOOL (APIENTRY * PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC) (HDC hDC_, UINT *uMaxLineDelay_, UINT *uMaxPixelDelay_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglEnableGenlockI3D (HDC hDC_);
GLAPI BOOL APIENTRY wglDisableGenlockI3D (HDC hDC_);
GLAPI BOOL APIENTRY wglIsEnabledGenlockI3D (HDC hDC_, BOOL *pFlag_);
GLAPI BOOL APIENTRY wglGenlockSourceI3D (HDC hDC_, UINT uSource_);
GLAPI BOOL APIENTRY wglGetGenlockSourceI3D (HDC hDC_, UINT *uSource_);
GLAPI BOOL APIENTRY wglGenlockSourceEdgeI3D (HDC hDC_, UINT uEdge_);
GLAPI BOOL APIENTRY wglGetGenlockSourceEdgeI3D (HDC hDC_, UINT *uEdge_);
GLAPI BOOL APIENTRY wglGenlockSampleRateI3D (HDC hDC_, UINT uRate_);
GLAPI BOOL APIENTRY wglGetGenlockSampleRateI3D (HDC hDC_, UINT *uRate_);
GLAPI BOOL APIENTRY wglGenlockSourceDelayI3D (HDC hDC_, UINT uDelay_);
GLAPI BOOL APIENTRY wglGetGenlockSourceDelayI3D (HDC hDC_, UINT *uDelay_);
GLAPI BOOL APIENTRY wglQueryGenlockMaxSourceDelayI3D (HDC hDC_, UINT *uMaxLineDelay_, UINT *uMaxPixelDelay_);
#endif
#endif /* WGL_I3D_genlock */

#ifndef WGL_I3D_image_buffer
#define WGL_I3D_image_buffer 1
#define WGL_IMAGE_BUFFER_MIN_ACCESS_I3D   0x00000001
#define WGL_IMAGE_BUFFER_LOCK_I3D         0x00000002
typedef LPVOID (APIENTRY * PFNWGLCREATEIMAGEBUFFERI3DPROC) (HDC hDC_, DWORD dwSize_, UINT uFlags_);
typedef BOOL (APIENTRY * PFNWGLDESTROYIMAGEBUFFERI3DPROC) (HDC hDC_, LPVOID pAddress_);
typedef BOOL (APIENTRY * PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC) (HDC hDC_, const HANDLE *pEvent_, const LPVOID *pAddress_, const DWORD *pSize_, UINT count_);
typedef BOOL (APIENTRY * PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC) (HDC hDC_, const LPVOID *pAddress_, UINT count_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI LPVOID APIENTRY wglCreateImageBufferI3D (HDC hDC_, DWORD dwSize_, UINT uFlags_);
GLAPI BOOL APIENTRY wglDestroyImageBufferI3D (HDC hDC_, LPVOID pAddress_);
GLAPI BOOL APIENTRY wglAssociateImageBufferEventsI3D (HDC hDC_, const HANDLE *pEvent_, const LPVOID *pAddress_, const DWORD *pSize_, UINT count_);
GLAPI BOOL APIENTRY wglReleaseImageBufferEventsI3D (HDC hDC_, const LPVOID *pAddress_, UINT count_);
#endif
#endif /* WGL_I3D_image_buffer */

#ifndef WGL_I3D_swap_frame_lock
#define WGL_I3D_swap_frame_lock 1
typedef BOOL (APIENTRY * PFNWGLENABLEFRAMELOCKI3DPROC) (void);
typedef BOOL (APIENTRY * PFNWGLDISABLEFRAMELOCKI3DPROC) (void);
typedef BOOL (APIENTRY * PFNWGLISENABLEDFRAMELOCKI3DPROC) (BOOL *pFlag_);
typedef BOOL (APIENTRY * PFNWGLQUERYFRAMELOCKMASTERI3DPROC) (BOOL *pFlag_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglEnableFrameLockI3D (void);
GLAPI BOOL APIENTRY wglDisableFrameLockI3D (void);
GLAPI BOOL APIENTRY wglIsEnabledFrameLockI3D (BOOL *pFlag_);
GLAPI BOOL APIENTRY wglQueryFrameLockMasterI3D (BOOL *pFlag_);
#endif
#endif /* WGL_I3D_swap_frame_lock */

#ifndef WGL_I3D_swap_frame_usage
#define WGL_I3D_swap_frame_usage 1
typedef BOOL (APIENTRY * PFNWGLGETFRAMEUSAGEI3DPROC) (float *pUsage_);
typedef BOOL (APIENTRY * PFNWGLBEGINFRAMETRACKINGI3DPROC) (void);
typedef BOOL (APIENTRY * PFNWGLENDFRAMETRACKINGI3DPROC) (void);
typedef BOOL (APIENTRY * PFNWGLQUERYFRAMETRACKINGI3DPROC) (DWORD *pFrameCount_, DWORD *pMissedFrames_, float *pLastMissedUsage_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglGetFrameUsageI3D (float *pUsage_);
GLAPI BOOL APIENTRY wglBeginFrameTrackingI3D (void);
GLAPI BOOL APIENTRY wglEndFrameTrackingI3D (void);
GLAPI BOOL APIENTRY wglQueryFrameTrackingI3D (DWORD *pFrameCount_, DWORD *pMissedFrames_, float *pLastMissedUsage_);
#endif
#endif /* WGL_I3D_swap_frame_usage */

#ifndef WGL_NV_DX_interop
#define WGL_NV_DX_interop 1
#define WGL_ACCESS_READ_ONLY_NV           0x00000000
#define WGL_ACCESS_READ_WRITE_NV          0x00000001
#define WGL_ACCESS_WRITE_DISCARD_NV       0x00000002
typedef BOOL (APIENTRY * PFNWGLDXSETRESOURCESHAREHANDLENVPROC) (void *dxObject_, HANDLE shareHandle_);
typedef HANDLE (APIENTRY * PFNWGLDXOPENDEVICENVPROC) (void *dxDevice_);
typedef BOOL (APIENTRY * PFNWGLDXCLOSEDEVICENVPROC) (HANDLE hDevice_);
typedef HANDLE (APIENTRY * PFNWGLDXREGISTEROBJECTNVPROC) (HANDLE hDevice_, void *dxObject_, GLuint name_, GLenum type_, GLenum access_);
typedef BOOL (APIENTRY * PFNWGLDXUNREGISTEROBJECTNVPROC) (HANDLE hDevice_, HANDLE hObject_);
typedef BOOL (APIENTRY * PFNWGLDXOBJECTACCESSNVPROC) (HANDLE hObject_, GLenum access_);
typedef BOOL (APIENTRY * PFNWGLDXLOCKOBJECTSNVPROC) (HANDLE hDevice_, GLint count_, HANDLE *hObjects_);
typedef BOOL (APIENTRY * PFNWGLDXUNLOCKOBJECTSNVPROC) (HANDLE hDevice_, GLint count_, HANDLE *hObjects_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglDXSetResourceShareHandleNV (void *dxObject_, HANDLE shareHandle_);
GLAPI HANDLE APIENTRY wglDXOpenDeviceNV (void *dxDevice_);
GLAPI BOOL APIENTRY wglDXCloseDeviceNV (HANDLE hDevice_);
GLAPI HANDLE APIENTRY wglDXRegisterObjectNV (HANDLE hDevice_, void *dxObject_, GLuint name_, GLenum type_, GLenum access_);
GLAPI BOOL APIENTRY wglDXUnregisterObjectNV (HANDLE hDevice_, HANDLE hObject_);
GLAPI BOOL APIENTRY wglDXObjectAccessNV (HANDLE hObject_, GLenum access_);
GLAPI BOOL APIENTRY wglDXLockObjectsNV (HANDLE hDevice_, GLint count_, HANDLE *hObjects_);
GLAPI BOOL APIENTRY wglDXUnlockObjectsNV (HANDLE hDevice_, GLint count_, HANDLE *hObjects_);
#endif
#endif /* WGL_NV_DX_interop */

#ifndef WGL_NV_DX_interop2
#define WGL_NV_DX_interop2 1
#endif /* WGL_NV_DX_interop2 */

#ifndef WGL_NV_copy_image
#define WGL_NV_copy_image 1
typedef BOOL (APIENTRY * PFNWGLCOPYIMAGESUBDATANVPROC) (HGLRC hSrcRC_, GLuint srcName_, GLenum srcTarget_, GLint srcLevel_, GLint srcX_, GLint srcY_, GLint srcZ_, HGLRC hDstRC_, GLuint dstName_, GLenum dstTarget_, GLint dstLevel_, GLint dstX_, GLint dstY_, GLint dstZ_, GLsizei width_, GLsizei height_, GLsizei depth_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglCopyImageSubDataNV (HGLRC hSrcRC_, GLuint srcName_, GLenum srcTarget_, GLint srcLevel_, GLint srcX_, GLint srcY_, GLint srcZ_, HGLRC hDstRC_, GLuint dstName_, GLenum dstTarget_, GLint dstLevel_, GLint dstX_, GLint dstY_, GLint dstZ_, GLsizei width_, GLsizei height_, GLsizei depth_);
#endif
#endif /* WGL_NV_copy_image */

#ifndef WGL_NV_delay_before_swap
#define WGL_NV_delay_before_swap 1
typedef BOOL (APIENTRY * PFNWGLDELAYBEFORESWAPNVPROC) (HDC hDC_, GLfloat seconds_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglDelayBeforeSwapNV (HDC hDC_, GLfloat seconds_);
#endif
#endif /* WGL_NV_delay_before_swap */

#ifndef WGL_NV_float_buffer
#define WGL_NV_float_buffer 1
#define WGL_FLOAT_COMPONENTS_NV           0x20B0
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_R_NV 0x20B1
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RG_NV 0x20B2
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGB_NV 0x20B3
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGBA_NV 0x20B4
#define WGL_TEXTURE_FLOAT_R_NV            0x20B5
#define WGL_TEXTURE_FLOAT_RG_NV           0x20B6
#define WGL_TEXTURE_FLOAT_RGB_NV          0x20B7
#define WGL_TEXTURE_FLOAT_RGBA_NV         0x20B8
#endif /* WGL_NV_float_buffer */

#ifndef WGL_NV_gpu_affinity
#define WGL_NV_gpu_affinity 1
DECLARE_HANDLE(HGPUNV);
struct _GPU_DEVICE {
    DWORD  cb;
    CHAR   DeviceName[32];
    CHAR   DeviceString[128];
    DWORD  Flags;
    RECT   rcVirtualScreen;
};
typedef struct _GPU_DEVICE *PGPU_DEVICE;
#define ERROR_INCOMPATIBLE_AFFINITY_MASKS_NV 0x20D0
#define ERROR_MISSING_AFFINITY_MASK_NV    0x20D1
typedef BOOL (APIENTRY * PFNWGLENUMGPUSNVPROC) (UINT iGpuIndex_, HGPUNV *phGpu_);
typedef BOOL (APIENTRY * PFNWGLENUMGPUDEVICESNVPROC) (HGPUNV hGpu_, UINT iDeviceIndex_, PGPU_DEVICE lpGpuDevice_);
typedef HDC (APIENTRY * PFNWGLCREATEAFFINITYDCNVPROC) (const HGPUNV *phGpuList_);
typedef BOOL (APIENTRY * PFNWGLENUMGPUSFROMAFFINITYDCNVPROC) (HDC hAffinityDC_, UINT iGpuIndex_, HGPUNV *hGpu_);
typedef BOOL (APIENTRY * PFNWGLDELETEDCNVPROC) (HDC hdc_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglEnumGpusNV (UINT iGpuIndex_, HGPUNV *phGpu_);
GLAPI BOOL APIENTRY wglEnumGpuDevicesNV (HGPUNV hGpu_, UINT iDeviceIndex_, PGPU_DEVICE lpGpuDevice_);
GLAPI HDC APIENTRY wglCreateAffinityDCNV (const HGPUNV *phGpuList_);
GLAPI BOOL APIENTRY wglEnumGpusFromAffinityDCNV (HDC hAffinityDC_, UINT iGpuIndex_, HGPUNV *hGpu_);
GLAPI BOOL APIENTRY wglDeleteDCNV (HDC hdc_);
#endif
#endif /* WGL_NV_gpu_affinity */

#ifndef WGL_NV_multisample_coverage
#define WGL_NV_multisample_coverage 1
#define WGL_COVERAGE_SAMPLES_NV           0x2042
#define WGL_COLOR_SAMPLES_NV              0x20B9
#endif /* WGL_NV_multisample_coverage */

#ifndef WGL_NV_present_video
#define WGL_NV_present_video 1
DECLARE_HANDLE(HVIDEOOUTPUTDEVICENV);
#define WGL_NUM_VIDEO_SLOTS_NV            0x20F0
typedef int (APIENTRY * PFNWGLENUMERATEVIDEODEVICESNVPROC) (HDC hDC_, HVIDEOOUTPUTDEVICENV *phDeviceList_);
typedef BOOL (APIENTRY * PFNWGLBINDVIDEODEVICENVPROC) (HDC hDC_, unsigned int uVideoSlot_, HVIDEOOUTPUTDEVICENV hVideoDevice_, const int *piAttribList_);
typedef BOOL (APIENTRY * PFNWGLQUERYCURRENTCONTEXTNVPROC) (int iAttribute_, int *piValue_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI int APIENTRY wglEnumerateVideoDevicesNV (HDC hDC_, HVIDEOOUTPUTDEVICENV *phDeviceList_);
GLAPI BOOL APIENTRY wglBindVideoDeviceNV (HDC hDC_, unsigned int uVideoSlot_, HVIDEOOUTPUTDEVICENV hVideoDevice_, const int *piAttribList_);
GLAPI BOOL APIENTRY wglQueryCurrentContextNV (int iAttribute_, int *piValue_);
#endif
#endif /* WGL_NV_present_video */

#ifndef WGL_NV_render_depth_texture
#define WGL_NV_render_depth_texture 1
#define WGL_BIND_TO_TEXTURE_DEPTH_NV      0x20A3
#define WGL_BIND_TO_TEXTURE_RECTANGLE_DEPTH_NV 0x20A4
#define WGL_DEPTH_TEXTURE_FORMAT_NV       0x20A5
#define WGL_TEXTURE_DEPTH_COMPONENT_NV    0x20A6
#define WGL_DEPTH_COMPONENT_NV            0x20A7
#endif /* WGL_NV_render_depth_texture */

#ifndef WGL_NV_render_texture_rectangle
#define WGL_NV_render_texture_rectangle 1
#define WGL_BIND_TO_TEXTURE_RECTANGLE_RGB_NV 0x20A0
#define WGL_BIND_TO_TEXTURE_RECTANGLE_RGBA_NV 0x20A1
#define WGL_TEXTURE_RECTANGLE_NV          0x20A2
#endif /* WGL_NV_render_texture_rectangle */

#ifndef WGL_NV_swap_group
#define WGL_NV_swap_group 1
typedef BOOL (APIENTRY * PFNWGLJOINSWAPGROUPNVPROC) (HDC hDC_, GLuint group_);
typedef BOOL (APIENTRY * PFNWGLBINDSWAPBARRIERNVPROC) (GLuint group_, GLuint barrier_);
typedef BOOL (APIENTRY * PFNWGLQUERYSWAPGROUPNVPROC) (HDC hDC_, GLuint *group_, GLuint *barrier_);
typedef BOOL (APIENTRY * PFNWGLQUERYMAXSWAPGROUPSNVPROC) (HDC hDC_, GLuint *maxGroups_, GLuint *maxBarriers_);
typedef BOOL (APIENTRY * PFNWGLQUERYFRAMECOUNTNVPROC) (HDC hDC_, GLuint *count_);
typedef BOOL (APIENTRY * PFNWGLRESETFRAMECOUNTNVPROC) (HDC hDC_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglJoinSwapGroupNV (HDC hDC_, GLuint group_);
GLAPI BOOL APIENTRY wglBindSwapBarrierNV (GLuint group_, GLuint barrier_);
GLAPI BOOL APIENTRY wglQuerySwapGroupNV (HDC hDC_, GLuint *group_, GLuint *barrier_);
GLAPI BOOL APIENTRY wglQueryMaxSwapGroupsNV (HDC hDC_, GLuint *maxGroups_, GLuint *maxBarriers_);
GLAPI BOOL APIENTRY wglQueryFrameCountNV (HDC hDC_, GLuint *count_);
GLAPI BOOL APIENTRY wglResetFrameCountNV (HDC hDC_);
#endif
#endif /* WGL_NV_swap_group */

#ifndef WGL_NV_vertex_array_range
#define WGL_NV_vertex_array_range 1
typedef void *(APIENTRY * PFNWGLALLOCATEMEMORYNVPROC) (GLsizei size_, GLfloat readfreq_, GLfloat writefreq_, GLfloat priority_);
typedef void (APIENTRY * PFNWGLFREEMEMORYNVPROC) (void *pointer_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI void *APIENTRY wglAllocateMemoryNV (GLsizei size_, GLfloat readfreq_, GLfloat writefreq_, GLfloat priority_);
GLAPI void APIENTRY wglFreeMemoryNV (void *pointer_);
#endif
#endif /* WGL_NV_vertex_array_range */

#ifndef WGL_NV_video_capture
#define WGL_NV_video_capture 1
DECLARE_HANDLE(HVIDEOINPUTDEVICENV);
#define WGL_UNIQUE_ID_NV                  0x20CE
#define WGL_NUM_VIDEO_CAPTURE_SLOTS_NV    0x20CF
typedef BOOL (APIENTRY * PFNWGLBINDVIDEOCAPTUREDEVICENVPROC) (UINT uVideoSlot_, HVIDEOINPUTDEVICENV hDevice_);
typedef UINT (APIENTRY * PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC) (HDC hDc_, HVIDEOINPUTDEVICENV *phDeviceList_);
typedef BOOL (APIENTRY * PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC) (HDC hDc_, HVIDEOINPUTDEVICENV hDevice_);
typedef BOOL (APIENTRY * PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC) (HDC hDc_, HVIDEOINPUTDEVICENV hDevice_, int iAttribute_, int *piValue_);
typedef BOOL (APIENTRY * PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC) (HDC hDc_, HVIDEOINPUTDEVICENV hDevice_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglBindVideoCaptureDeviceNV (UINT uVideoSlot_, HVIDEOINPUTDEVICENV hDevice_);
GLAPI UINT APIENTRY wglEnumerateVideoCaptureDevicesNV (HDC hDc_, HVIDEOINPUTDEVICENV *phDeviceList_);
GLAPI BOOL APIENTRY wglLockVideoCaptureDeviceNV (HDC hDc_, HVIDEOINPUTDEVICENV hDevice_);
GLAPI BOOL APIENTRY wglQueryVideoCaptureDeviceNV (HDC hDc_, HVIDEOINPUTDEVICENV hDevice_, int iAttribute_, int *piValue_);
GLAPI BOOL APIENTRY wglReleaseVideoCaptureDeviceNV (HDC hDc_, HVIDEOINPUTDEVICENV hDevice_);
#endif
#endif /* WGL_NV_video_capture */

#ifndef WGL_NV_video_output
#define WGL_NV_video_output 1
DECLARE_HANDLE(HPVIDEODEV);
#define WGL_BIND_TO_VIDEO_RGB_NV          0x20C0
#define WGL_BIND_TO_VIDEO_RGBA_NV         0x20C1
#define WGL_BIND_TO_VIDEO_RGB_AND_DEPTH_NV 0x20C2
#define WGL_VIDEO_OUT_COLOR_NV            0x20C3
#define WGL_VIDEO_OUT_ALPHA_NV            0x20C4
#define WGL_VIDEO_OUT_DEPTH_NV            0x20C5
#define WGL_VIDEO_OUT_COLOR_AND_ALPHA_NV  0x20C6
#define WGL_VIDEO_OUT_COLOR_AND_DEPTH_NV  0x20C7
#define WGL_VIDEO_OUT_FRAME               0x20C8
#define WGL_VIDEO_OUT_FIELD_1             0x20C9
#define WGL_VIDEO_OUT_FIELD_2             0x20CA
#define WGL_VIDEO_OUT_STACKED_FIELDS_1_2  0x20CB
#define WGL_VIDEO_OUT_STACKED_FIELDS_2_1  0x20CC
typedef BOOL (APIENTRY * PFNWGLGETVIDEODEVICENVPROC) (HDC hDC_, int numDevices_, HPVIDEODEV *hVideoDevice_);
typedef BOOL (APIENTRY * PFNWGLRELEASEVIDEODEVICENVPROC) (HPVIDEODEV hVideoDevice_);
typedef BOOL (APIENTRY * PFNWGLBINDVIDEOIMAGENVPROC) (HPVIDEODEV hVideoDevice_, HPBUFFERARB hPbuffer_, int iVideoBuffer_);
typedef BOOL (APIENTRY * PFNWGLRELEASEVIDEOIMAGENVPROC) (HPBUFFERARB hPbuffer_, int iVideoBuffer_);
typedef BOOL (APIENTRY * PFNWGLSENDPBUFFERTOVIDEONVPROC) (HPBUFFERARB hPbuffer_, int iBufferType_, unsigned long *pulCounterPbuffer_, BOOL bBlock_);
typedef BOOL (APIENTRY * PFNWGLGETVIDEOINFONVPROC) (HPVIDEODEV hpVideoDevice_, unsigned long *pulCounterOutputPbuffer_, unsigned long *pulCounterOutputVideo_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglGetVideoDeviceNV (HDC hDC_, int numDevices_, HPVIDEODEV *hVideoDevice_);
GLAPI BOOL APIENTRY wglReleaseVideoDeviceNV (HPVIDEODEV hVideoDevice_);
GLAPI BOOL APIENTRY wglBindVideoImageNV (HPVIDEODEV hVideoDevice_, HPBUFFERARB hPbuffer_, int iVideoBuffer_);
GLAPI BOOL APIENTRY wglReleaseVideoImageNV (HPBUFFERARB hPbuffer_, int iVideoBuffer_);
GLAPI BOOL APIENTRY wglSendPbufferToVideoNV (HPBUFFERARB hPbuffer_, int iBufferType_, unsigned long *pulCounterPbuffer_, BOOL bBlock_);
GLAPI BOOL APIENTRY wglGetVideoInfoNV (HPVIDEODEV hpVideoDevice_, unsigned long *pulCounterOutputPbuffer_, unsigned long *pulCounterOutputVideo_);
#endif
#endif /* WGL_NV_video_output */

#ifndef WGL_OML_sync_control
#define WGL_OML_sync_control 1
typedef BOOL (APIENTRY * PFNWGLGETSYNCVALUESOMLPROC) (HDC hdc_, INT64 *ust_, INT64 *msc_, INT64 *sbc_);
typedef BOOL (APIENTRY * PFNWGLGETMSCRATEOMLPROC) (HDC hdc_, INT32 *numerator_, INT32 *denominator_);
typedef INT64 (APIENTRY * PFNWGLSWAPBUFFERSMSCOMLPROC) (HDC hdc_, INT64 target_msc_, INT64 divisor_, INT64 remainder_);
typedef INT64 (APIENTRY * PFNWGLSWAPLAYERBUFFERSMSCOMLPROC) (HDC hdc_, int fuPlanes_, INT64 target_msc_, INT64 divisor_, INT64 remainder_);
typedef BOOL (APIENTRY * PFNWGLWAITFORMSCOMLPROC) (HDC hdc_, INT64 target_msc_, INT64 divisor_, INT64 remainder_, INT64 *ust_, INT64 *msc_, INT64 *sbc_);
typedef BOOL (APIENTRY * PFNWGLWAITFORSBCOMLPROC) (HDC hdc_, INT64 target_sbc_, INT64 *ust_, INT64 *msc_, INT64 *sbc_);
#ifdef WGL_WGLEXT_PROTOTYPES
GLAPI BOOL APIENTRY wglGetSyncValuesOML (HDC hdc_, INT64 *ust_, INT64 *msc_, INT64 *sbc_);
GLAPI BOOL APIENTRY wglGetMscRateOML (HDC hdc_, INT32 *numerator_, INT32 *denominator_);
GLAPI INT64 APIENTRY wglSwapBuffersMscOML (HDC hdc_, INT64 target_msc_, INT64 divisor_, INT64 remainder_);
GLAPI INT64 APIENTRY wglSwapLayerBuffersMscOML (HDC hdc_, int fuPlanes_, INT64 target_msc_, INT64 divisor_, INT64 remainder_);
GLAPI BOOL APIENTRY wglWaitForMscOML (HDC hdc_, INT64 target_msc_, INT64 divisor_, INT64 remainder_, INT64 *ust_, INT64 *msc_, INT64 *sbc_);
GLAPI BOOL APIENTRY wglWaitForSbcOML (HDC hdc_, INT64 target_sbc_, INT64 *ust_, INT64 *msc_, INT64 *sbc_);
#endif
#endif /* WGL_OML_sync_control */

#ifdef __cplusplus
}
#endif

#endif
