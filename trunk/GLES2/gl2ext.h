#ifndef __gl2ext_h_
#define __gl2ext_h_ 1

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

#ifndef GL_APIENTRYP
#define GL_APIENTRYP GL_APIENTRY*
#endif

/* Generated on date 20160128 */

/* Generated C header for:
 * API: gles2
 * Profile: common
 * Versions considered: 2\.[0-9]
 * Versions emitted: _nomatch_^
 * Default extensions included: gles2
 * Additional extensions included: _nomatch_^
 * Extensions removed: _nomatch_^
 */

#ifndef GL_KHR_blend_equation_advanced
#define GL_KHR_blend_equation_advanced 1
#define GL_MULTIPLY_KHR                   0x9294
#define GL_SCREEN_KHR                     0x9295
#define GL_OVERLAY_KHR                    0x9296
#define GL_DARKEN_KHR                     0x9297
#define GL_LIGHTEN_KHR                    0x9298
#define GL_COLORDODGE_KHR                 0x9299
#define GL_COLORBURN_KHR                  0x929A
#define GL_HARDLIGHT_KHR                  0x929B
#define GL_SOFTLIGHT_KHR                  0x929C
#define GL_DIFFERENCE_KHR                 0x929E
#define GL_EXCLUSION_KHR                  0x92A0
#define GL_HSL_HUE_KHR                    0x92AD
#define GL_HSL_SATURATION_KHR             0x92AE
#define GL_HSL_COLOR_KHR                  0x92AF
#define GL_HSL_LUMINOSITY_KHR             0x92B0
typedef void (GL_APIENTRYP PFNGLBLENDBARRIERKHRPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glBlendBarrierKHR (void);
#endif
#endif /* GL_KHR_blend_equation_advanced */

#ifndef GL_KHR_blend_equation_advanced_coherent
#define GL_KHR_blend_equation_advanced_coherent 1
#define GL_BLEND_ADVANCED_COHERENT_KHR    0x9285
#endif /* GL_KHR_blend_equation_advanced_coherent */

#ifndef GL_KHR_context_flush_control
#define GL_KHR_context_flush_control 1
#define GL_CONTEXT_RELEASE_BEHAVIOR_KHR   0x82FB
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR 0x82FC
#endif /* GL_KHR_context_flush_control */

#ifndef GL_KHR_debug
#define GL_KHR_debug 1
typedef void (GL_APIENTRY  *GLDEBUGPROCKHR)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
#define GL_SAMPLER                        0x82E6
#define GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR   0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION_KHR    0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM_KHR  0x8245
#define GL_DEBUG_SOURCE_API_KHR           0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR 0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER_KHR 0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY_KHR   0x8249
#define GL_DEBUG_SOURCE_APPLICATION_KHR   0x824A
#define GL_DEBUG_SOURCE_OTHER_KHR         0x824B
#define GL_DEBUG_TYPE_ERROR_KHR           0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR 0x824E
#define GL_DEBUG_TYPE_PORTABILITY_KHR     0x824F
#define GL_DEBUG_TYPE_PERFORMANCE_KHR     0x8250
#define GL_DEBUG_TYPE_OTHER_KHR           0x8251
#define GL_DEBUG_TYPE_MARKER_KHR          0x8268
#define GL_DEBUG_TYPE_PUSH_GROUP_KHR      0x8269
#define GL_DEBUG_TYPE_POP_GROUP_KHR       0x826A
#define GL_DEBUG_SEVERITY_NOTIFICATION_KHR 0x826B
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR 0x826C
#define GL_DEBUG_GROUP_STACK_DEPTH_KHR    0x826D
#define GL_BUFFER_KHR                     0x82E0
#define GL_SHADER_KHR                     0x82E1
#define GL_PROGRAM_KHR                    0x82E2
#define GL_VERTEX_ARRAY_KHR               0x8074
#define GL_QUERY_KHR                      0x82E3
#define GL_PROGRAM_PIPELINE_KHR           0x82E4
#define GL_SAMPLER_KHR                    0x82E6
#define GL_MAX_LABEL_LENGTH_KHR           0x82E8
#define GL_MAX_DEBUG_MESSAGE_LENGTH_KHR   0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_KHR  0x9144
#define GL_DEBUG_LOGGED_MESSAGES_KHR      0x9145
#define GL_DEBUG_SEVERITY_HIGH_KHR        0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_KHR      0x9147
#define GL_DEBUG_SEVERITY_LOW_KHR         0x9148
#define GL_DEBUG_OUTPUT_KHR               0x92E0
#define GL_CONTEXT_FLAG_DEBUG_BIT_KHR     0x00000002
#define GL_STACK_OVERFLOW_KHR             0x0503
#define GL_STACK_UNDERFLOW_KHR            0x0504
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGECONTROLKHRPROC) (GLenum source_, GLenum type_, GLenum severity_, GLsizei count_, const GLuint *ids_, GLboolean enabled_);
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGEINSERTKHRPROC) (GLenum source_, GLenum type_, GLuint id_, GLenum severity_, GLsizei length_, const GLchar *buf_);
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGECALLBACKKHRPROC) (GLDEBUGPROCKHR callback_, const void *userParam_);
typedef GLuint (GL_APIENTRYP PFNGLGETDEBUGMESSAGELOGKHRPROC) (GLuint count_, GLsizei bufSize_, GLenum *sources_, GLenum *types_, GLuint *ids_, GLenum *severities_, GLsizei *lengths_, GLchar *messageLog_);
typedef void (GL_APIENTRYP PFNGLPUSHDEBUGGROUPKHRPROC) (GLenum source_, GLuint id_, GLsizei length_, const GLchar *message_);
typedef void (GL_APIENTRYP PFNGLPOPDEBUGGROUPKHRPROC) (void);
typedef void (GL_APIENTRYP PFNGLOBJECTLABELKHRPROC) (GLenum identifier_, GLuint name_, GLsizei length_, const GLchar *label_);
typedef void (GL_APIENTRYP PFNGLGETOBJECTLABELKHRPROC) (GLenum identifier_, GLuint name_, GLsizei bufSize_, GLsizei *length_, GLchar *label_);
typedef void (GL_APIENTRYP PFNGLOBJECTPTRLABELKHRPROC) (const void *ptr_, GLsizei length_, const GLchar *label_);
typedef void (GL_APIENTRYP PFNGLGETOBJECTPTRLABELKHRPROC) (const void *ptr_, GLsizei bufSize_, GLsizei *length_, GLchar *label_);
typedef void (GL_APIENTRYP PFNGLGETPOINTERVKHRPROC) (GLenum pname_, void **params_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDebugMessageControlKHR (GLenum source_, GLenum type_, GLenum severity_, GLsizei count_, const GLuint *ids_, GLboolean enabled_);
GL_APICALL void GL_APIENTRY glDebugMessageInsertKHR (GLenum source_, GLenum type_, GLuint id_, GLenum severity_, GLsizei length_, const GLchar *buf_);
GL_APICALL void GL_APIENTRY glDebugMessageCallbackKHR (GLDEBUGPROCKHR callback_, const void *userParam_);
GL_APICALL GLuint GL_APIENTRY glGetDebugMessageLogKHR (GLuint count_, GLsizei bufSize_, GLenum *sources_, GLenum *types_, GLuint *ids_, GLenum *severities_, GLsizei *lengths_, GLchar *messageLog_);
GL_APICALL void GL_APIENTRY glPushDebugGroupKHR (GLenum source_, GLuint id_, GLsizei length_, const GLchar *message_);
GL_APICALL void GL_APIENTRY glPopDebugGroupKHR (void);
GL_APICALL void GL_APIENTRY glObjectLabelKHR (GLenum identifier_, GLuint name_, GLsizei length_, const GLchar *label_);
GL_APICALL void GL_APIENTRY glGetObjectLabelKHR (GLenum identifier_, GLuint name_, GLsizei bufSize_, GLsizei *length_, GLchar *label_);
GL_APICALL void GL_APIENTRY glObjectPtrLabelKHR (const void *ptr_, GLsizei length_, const GLchar *label_);
GL_APICALL void GL_APIENTRY glGetObjectPtrLabelKHR (const void *ptr_, GLsizei bufSize_, GLsizei *length_, GLchar *label_);
GL_APICALL void GL_APIENTRY glGetPointervKHR (GLenum pname_, void **params_);
#endif
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
#define GL_CONTEXT_ROBUST_ACCESS_KHR      0x90F3
#define GL_LOSE_CONTEXT_ON_RESET_KHR      0x8252
#define GL_GUILTY_CONTEXT_RESET_KHR       0x8253
#define GL_INNOCENT_CONTEXT_RESET_KHR     0x8254
#define GL_UNKNOWN_CONTEXT_RESET_KHR      0x8255
#define GL_RESET_NOTIFICATION_STRATEGY_KHR 0x8256
#define GL_NO_RESET_NOTIFICATION_KHR      0x8261
#define GL_CONTEXT_LOST_KHR               0x0507
typedef GLenum (GL_APIENTRYP PFNGLGETGRAPHICSRESETSTATUSKHRPROC) (void);
typedef void (GL_APIENTRYP PFNGLREADNPIXELSKHRPROC) (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, GLsizei bufSize_, void *data_);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMFVKHRPROC) (GLuint program_, GLint location_, GLsizei bufSize_, GLfloat *params_);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMIVKHRPROC) (GLuint program_, GLint location_, GLsizei bufSize_, GLint *params_);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMUIVKHRPROC) (GLuint program_, GLint location_, GLsizei bufSize_, GLuint *params_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL GLenum GL_APIENTRY glGetGraphicsResetStatusKHR (void);
GL_APICALL void GL_APIENTRY glReadnPixelsKHR (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, GLsizei bufSize_, void *data_);
GL_APICALL void GL_APIENTRY glGetnUniformfvKHR (GLuint program_, GLint location_, GLsizei bufSize_, GLfloat *params_);
GL_APICALL void GL_APIENTRY glGetnUniformivKHR (GLuint program_, GLint location_, GLsizei bufSize_, GLint *params_);
GL_APICALL void GL_APIENTRY glGetnUniformuivKHR (GLuint program_, GLint location_, GLsizei bufSize_, GLuint *params_);
#endif
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

#ifndef GL_OES_EGL_image
#define GL_OES_EGL_image 1
typedef void *GLeglImageOES;
typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETTEXTURE2DOESPROC) (GLenum target_, GLeglImageOES image_);
typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC) (GLenum target_, GLeglImageOES image_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glEGLImageTargetTexture2DOES (GLenum target_, GLeglImageOES image_);
GL_APICALL void GL_APIENTRY glEGLImageTargetRenderbufferStorageOES (GLenum target_, GLeglImageOES image_);
#endif
#endif /* GL_OES_EGL_image */

#ifndef GL_OES_EGL_image_external
#define GL_OES_EGL_image_external 1
#define GL_TEXTURE_EXTERNAL_OES           0x8D65
#define GL_TEXTURE_BINDING_EXTERNAL_OES   0x8D67
#define GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES 0x8D68
#define GL_SAMPLER_EXTERNAL_OES           0x8D66
#endif /* GL_OES_EGL_image_external */

#ifndef GL_OES_EGL_image_external_essl3
#define GL_OES_EGL_image_external_essl3 1
#endif /* GL_OES_EGL_image_external_essl3 */

#ifndef GL_OES_compressed_ETC1_RGB8_sub_texture
#define GL_OES_compressed_ETC1_RGB8_sub_texture 1
#endif /* GL_OES_compressed_ETC1_RGB8_sub_texture */

#ifndef GL_OES_compressed_ETC1_RGB8_texture
#define GL_OES_compressed_ETC1_RGB8_texture 1
#define GL_ETC1_RGB8_OES                  0x8D64
#endif /* GL_OES_compressed_ETC1_RGB8_texture */

#ifndef GL_OES_compressed_paletted_texture
#define GL_OES_compressed_paletted_texture 1
#define GL_PALETTE4_RGB8_OES              0x8B90
#define GL_PALETTE4_RGBA8_OES             0x8B91
#define GL_PALETTE4_R5_G6_B5_OES          0x8B92
#define GL_PALETTE4_RGBA4_OES             0x8B93
#define GL_PALETTE4_RGB5_A1_OES           0x8B94
#define GL_PALETTE8_RGB8_OES              0x8B95
#define GL_PALETTE8_RGBA8_OES             0x8B96
#define GL_PALETTE8_R5_G6_B5_OES          0x8B97
#define GL_PALETTE8_RGBA4_OES             0x8B98
#define GL_PALETTE8_RGB5_A1_OES           0x8B99
#endif /* GL_OES_compressed_paletted_texture */

#ifndef GL_OES_copy_image
#define GL_OES_copy_image 1
typedef void (GL_APIENTRYP PFNGLCOPYIMAGESUBDATAOESPROC) (GLuint srcName_, GLenum srcTarget_, GLint srcLevel_, GLint srcX_, GLint srcY_, GLint srcZ_, GLuint dstName_, GLenum dstTarget_, GLint dstLevel_, GLint dstX_, GLint dstY_, GLint dstZ_, GLsizei srcWidth_, GLsizei srcHeight_, GLsizei srcDepth_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glCopyImageSubDataOES (GLuint srcName_, GLenum srcTarget_, GLint srcLevel_, GLint srcX_, GLint srcY_, GLint srcZ_, GLuint dstName_, GLenum dstTarget_, GLint dstLevel_, GLint dstX_, GLint dstY_, GLint dstZ_, GLsizei srcWidth_, GLsizei srcHeight_, GLsizei srcDepth_);
#endif
#endif /* GL_OES_copy_image */

#ifndef GL_OES_depth24
#define GL_OES_depth24 1
#define GL_DEPTH_COMPONENT24_OES          0x81A6
#endif /* GL_OES_depth24 */

#ifndef GL_OES_depth32
#define GL_OES_depth32 1
#define GL_DEPTH_COMPONENT32_OES          0x81A7
#endif /* GL_OES_depth32 */

#ifndef GL_OES_depth_texture
#define GL_OES_depth_texture 1
#endif /* GL_OES_depth_texture */

#ifndef GL_OES_draw_buffers_indexed
#define GL_OES_draw_buffers_indexed 1
#define GL_MIN                            0x8007
#define GL_MAX                            0x8008
typedef void (GL_APIENTRYP PFNGLENABLEIOESPROC) (GLenum target_, GLuint index_);
typedef void (GL_APIENTRYP PFNGLDISABLEIOESPROC) (GLenum target_, GLuint index_);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONIOESPROC) (GLuint buf_, GLenum mode_);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONSEPARATEIOESPROC) (GLuint buf_, GLenum modeRGB_, GLenum modeAlpha_);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCIOESPROC) (GLuint buf_, GLenum src_, GLenum dst_);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCSEPARATEIOESPROC) (GLuint buf_, GLenum srcRGB_, GLenum dstRGB_, GLenum srcAlpha_, GLenum dstAlpha_);
typedef void (GL_APIENTRYP PFNGLCOLORMASKIOESPROC) (GLuint index_, GLboolean r_, GLboolean g_, GLboolean b_, GLboolean a_);
typedef GLboolean (GL_APIENTRYP PFNGLISENABLEDIOESPROC) (GLenum target_, GLuint index_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glEnableiOES (GLenum target_, GLuint index_);
GL_APICALL void GL_APIENTRY glDisableiOES (GLenum target_, GLuint index_);
GL_APICALL void GL_APIENTRY glBlendEquationiOES (GLuint buf_, GLenum mode_);
GL_APICALL void GL_APIENTRY glBlendEquationSeparateiOES (GLuint buf_, GLenum modeRGB_, GLenum modeAlpha_);
GL_APICALL void GL_APIENTRY glBlendFunciOES (GLuint buf_, GLenum src_, GLenum dst_);
GL_APICALL void GL_APIENTRY glBlendFuncSeparateiOES (GLuint buf_, GLenum srcRGB_, GLenum dstRGB_, GLenum srcAlpha_, GLenum dstAlpha_);
GL_APICALL void GL_APIENTRY glColorMaskiOES (GLuint index_, GLboolean r_, GLboolean g_, GLboolean b_, GLboolean a_);
GL_APICALL GLboolean GL_APIENTRY glIsEnablediOES (GLenum target_, GLuint index_);
#endif
#endif /* GL_OES_draw_buffers_indexed */

#ifndef GL_OES_draw_elements_base_vertex
#define GL_OES_draw_elements_base_vertex 1
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSBASEVERTEXOESPROC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_);
typedef void (GL_APIENTRYP PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC) (GLenum mode_, GLuint start_, GLuint end_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLint basevertex_);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSBASEVERTEXOESPROC) (GLenum mode_, const GLsizei *count_, GLenum type_, const void *const*indices_, GLsizei primcount_, const GLint *basevertex_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDrawElementsBaseVertexOES (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_);
GL_APICALL void GL_APIENTRY glDrawRangeElementsBaseVertexOES (GLenum mode_, GLuint start_, GLuint end_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_);
GL_APICALL void GL_APIENTRY glDrawElementsInstancedBaseVertexOES (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLint basevertex_);
GL_APICALL void GL_APIENTRY glMultiDrawElementsBaseVertexOES (GLenum mode_, const GLsizei *count_, GLenum type_, const void *const*indices_, GLsizei primcount_, const GLint *basevertex_);
#endif
#endif /* GL_OES_draw_elements_base_vertex */

#ifndef GL_OES_element_index_uint
#define GL_OES_element_index_uint 1
#endif /* GL_OES_element_index_uint */

#ifndef GL_OES_fbo_render_mipmap
#define GL_OES_fbo_render_mipmap 1
#endif /* GL_OES_fbo_render_mipmap */

#ifndef GL_OES_fragment_precision_high
#define GL_OES_fragment_precision_high 1
#endif /* GL_OES_fragment_precision_high */

#ifndef GL_OES_geometry_point_size
#define GL_OES_geometry_point_size 1
#endif /* GL_OES_geometry_point_size */

#ifndef GL_OES_geometry_shader
#define GL_OES_geometry_shader 1
#define GL_GEOMETRY_SHADER_OES            0x8DD9
#define GL_GEOMETRY_SHADER_BIT_OES        0x00000004
#define GL_GEOMETRY_LINKED_VERTICES_OUT_OES 0x8916
#define GL_GEOMETRY_LINKED_INPUT_TYPE_OES 0x8917
#define GL_GEOMETRY_LINKED_OUTPUT_TYPE_OES 0x8918
#define GL_GEOMETRY_SHADER_INVOCATIONS_OES 0x887F
#define GL_LAYER_PROVOKING_VERTEX_OES     0x825E
#define GL_LINES_ADJACENCY_OES            0x000A
#define GL_LINE_STRIP_ADJACENCY_OES       0x000B
#define GL_TRIANGLES_ADJACENCY_OES        0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_OES   0x000D
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_OES 0x8DDF
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS_OES 0x8A2C
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_OES 0x8A32
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS_OES 0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_OES 0x9124
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_OES 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_OES 0x8DE1
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS_OES 0x8E5A
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_OES 0x8C29
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_OES 0x92CF
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS_OES 0x92D5
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS_OES 0x90CD
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_OES 0x90D7
#define GL_FIRST_VERTEX_CONVENTION_OES    0x8E4D
#define GL_LAST_VERTEX_CONVENTION_OES     0x8E4E
#define GL_UNDEFINED_VERTEX_OES           0x8260
#define GL_PRIMITIVES_GENERATED_OES       0x8C87
#define GL_FRAMEBUFFER_DEFAULT_LAYERS_OES 0x9312
#define GL_MAX_FRAMEBUFFER_LAYERS_OES     0x9317
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_OES 0x8DA8
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_OES 0x8DA7
#define GL_REFERENCED_BY_GEOMETRY_SHADER_OES 0x9309
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREOESPROC) (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glFramebufferTextureOES (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_);
#endif
#endif /* GL_OES_geometry_shader */

#ifndef GL_OES_get_program_binary
#define GL_OES_get_program_binary 1
#define GL_PROGRAM_BINARY_LENGTH_OES      0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS_OES 0x87FE
#define GL_PROGRAM_BINARY_FORMATS_OES     0x87FF
typedef void (GL_APIENTRYP PFNGLGETPROGRAMBINARYOESPROC) (GLuint program_, GLsizei bufSize_, GLsizei *length_, GLenum *binaryFormat_, void *binary_);
typedef void (GL_APIENTRYP PFNGLPROGRAMBINARYOESPROC) (GLuint program_, GLenum binaryFormat_, const void *binary_, GLint length_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glGetProgramBinaryOES (GLuint program_, GLsizei bufSize_, GLsizei *length_, GLenum *binaryFormat_, void *binary_);
GL_APICALL void GL_APIENTRY glProgramBinaryOES (GLuint program_, GLenum binaryFormat_, const void *binary_, GLint length_);
#endif
#endif /* GL_OES_get_program_binary */

#ifndef GL_OES_gpu_shader5
#define GL_OES_gpu_shader5 1
#endif /* GL_OES_gpu_shader5 */

#ifndef GL_OES_mapbuffer
#define GL_OES_mapbuffer 1
#define GL_WRITE_ONLY_OES                 0x88B9
#define GL_BUFFER_ACCESS_OES              0x88BB
#define GL_BUFFER_MAPPED_OES              0x88BC
#define GL_BUFFER_MAP_POINTER_OES         0x88BD
typedef void *(GL_APIENTRYP PFNGLMAPBUFFEROESPROC) (GLenum target_, GLenum access_);
typedef GLboolean (GL_APIENTRYP PFNGLUNMAPBUFFEROESPROC) (GLenum target_);
typedef void (GL_APIENTRYP PFNGLGETBUFFERPOINTERVOESPROC) (GLenum target_, GLenum pname_, void **params_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void *GL_APIENTRY glMapBufferOES (GLenum target_, GLenum access_);
GL_APICALL GLboolean GL_APIENTRY glUnmapBufferOES (GLenum target_);
GL_APICALL void GL_APIENTRY glGetBufferPointervOES (GLenum target_, GLenum pname_, void **params_);
#endif
#endif /* GL_OES_mapbuffer */

#ifndef GL_OES_packed_depth_stencil
#define GL_OES_packed_depth_stencil 1
#define GL_DEPTH_STENCIL_OES              0x84F9
#define GL_UNSIGNED_INT_24_8_OES          0x84FA
#define GL_DEPTH24_STENCIL8_OES           0x88F0
#endif /* GL_OES_packed_depth_stencil */

#ifndef GL_OES_primitive_bounding_box
#define GL_OES_primitive_bounding_box 1
#define GL_PRIMITIVE_BOUNDING_BOX_OES     0x92BE
typedef void (GL_APIENTRYP PFNGLPRIMITIVEBOUNDINGBOXOESPROC) (GLfloat minX_, GLfloat minY_, GLfloat minZ_, GLfloat minW_, GLfloat maxX_, GLfloat maxY_, GLfloat maxZ_, GLfloat maxW_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glPrimitiveBoundingBoxOES (GLfloat minX_, GLfloat minY_, GLfloat minZ_, GLfloat minW_, GLfloat maxX_, GLfloat maxY_, GLfloat maxZ_, GLfloat maxW_);
#endif
#endif /* GL_OES_primitive_bounding_box */

#ifndef GL_OES_required_internalformat
#define GL_OES_required_internalformat 1
#define GL_ALPHA8_OES                     0x803C
#define GL_DEPTH_COMPONENT16_OES          0x81A5
#define GL_LUMINANCE4_ALPHA4_OES          0x8043
#define GL_LUMINANCE8_ALPHA8_OES          0x8045
#define GL_LUMINANCE8_OES                 0x8040
#define GL_RGBA4_OES                      0x8056
#define GL_RGB5_A1_OES                    0x8057
#define GL_RGB565_OES                     0x8D62
#define GL_RGB8_OES                       0x8051
#define GL_RGBA8_OES                      0x8058
#define GL_RGB10_EXT                      0x8052
#define GL_RGB10_A2_EXT                   0x8059
#endif /* GL_OES_required_internalformat */

#ifndef GL_OES_rgb8_rgba8
#define GL_OES_rgb8_rgba8 1
#endif /* GL_OES_rgb8_rgba8 */

#ifndef GL_OES_sample_shading
#define GL_OES_sample_shading 1
#define GL_SAMPLE_SHADING_OES             0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE_OES   0x8C37
typedef void (GL_APIENTRYP PFNGLMINSAMPLESHADINGOESPROC) (GLfloat value_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glMinSampleShadingOES (GLfloat value_);
#endif
#endif /* GL_OES_sample_shading */

#ifndef GL_OES_sample_variables
#define GL_OES_sample_variables 1
#endif /* GL_OES_sample_variables */

#ifndef GL_OES_shader_image_atomic
#define GL_OES_shader_image_atomic 1
#endif /* GL_OES_shader_image_atomic */

#ifndef GL_OES_shader_io_blocks
#define GL_OES_shader_io_blocks 1
#endif /* GL_OES_shader_io_blocks */

#ifndef GL_OES_shader_multisample_interpolation
#define GL_OES_shader_multisample_interpolation 1
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES 0x8E5C
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES 0x8E5D
#endif /* GL_OES_shader_multisample_interpolation */

#ifndef GL_OES_standard_derivatives
#define GL_OES_standard_derivatives 1
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES 0x8B8B
#endif /* GL_OES_standard_derivatives */

#ifndef GL_OES_stencil1
#define GL_OES_stencil1 1
#define GL_STENCIL_INDEX1_OES             0x8D46
#endif /* GL_OES_stencil1 */

#ifndef GL_OES_stencil4
#define GL_OES_stencil4 1
#define GL_STENCIL_INDEX4_OES             0x8D47
#endif /* GL_OES_stencil4 */

#ifndef GL_OES_surfaceless_context
#define GL_OES_surfaceless_context 1
#define GL_FRAMEBUFFER_UNDEFINED_OES      0x8219
#endif /* GL_OES_surfaceless_context */

#ifndef GL_OES_tessellation_point_size
#define GL_OES_tessellation_point_size 1
#endif /* GL_OES_tessellation_point_size */

#ifndef GL_OES_tessellation_shader
#define GL_OES_tessellation_shader 1
#define GL_PATCHES_OES                    0x000E
#define GL_PATCH_VERTICES_OES             0x8E72
#define GL_TESS_CONTROL_OUTPUT_VERTICES_OES 0x8E75
#define GL_TESS_GEN_MODE_OES              0x8E76
#define GL_TESS_GEN_SPACING_OES           0x8E77
#define GL_TESS_GEN_VERTEX_ORDER_OES      0x8E78
#define GL_TESS_GEN_POINT_MODE_OES        0x8E79
#define GL_ISOLINES_OES                   0x8E7A
#define GL_QUADS_OES                      0x0007
#define GL_FRACTIONAL_ODD_OES             0x8E7B
#define GL_FRACTIONAL_EVEN_OES            0x8E7C
#define GL_MAX_PATCH_VERTICES_OES         0x8E7D
#define GL_MAX_TESS_GEN_LEVEL_OES         0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_OES 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_OES 0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_OES 0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_OES 0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_OES 0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS_OES  0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_OES 0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_OES 0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_OES 0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_OES 0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_OES 0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_OES 0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_OES 0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_OES 0x8E1F
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_OES 0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_OES 0x92CE
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_OES 0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_OES 0x92D4
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_OES 0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_OES 0x90CC
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_OES 0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_OES 0x90D9
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED_OES 0x8221
#define GL_IS_PER_PATCH_OES               0x92E7
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER_OES 0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER_OES 0x9308
#define GL_TESS_CONTROL_SHADER_OES        0x8E88
#define GL_TESS_EVALUATION_SHADER_OES     0x8E87
#define GL_TESS_CONTROL_SHADER_BIT_OES    0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT_OES 0x00000010
typedef void (GL_APIENTRYP PFNGLPATCHPARAMETERIOESPROC) (GLenum pname_, GLint value_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glPatchParameteriOES (GLenum pname_, GLint value_);
#endif
#endif /* GL_OES_tessellation_shader */

#ifndef GL_OES_texture_3D
#define GL_OES_texture_3D 1
#define GL_TEXTURE_WRAP_R_OES             0x8072
#define GL_TEXTURE_3D_OES                 0x806F
#define GL_TEXTURE_BINDING_3D_OES         0x806A
#define GL_MAX_3D_TEXTURE_SIZE_OES        0x8073
#define GL_SAMPLER_3D_OES                 0x8B5F
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES 0x8CD4
typedef void (GL_APIENTRYP PFNGLTEXIMAGE3DOESPROC) (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLenum format_, GLenum type_, const void *pixels_);
typedef void (GL_APIENTRYP PFNGLTEXSUBIMAGE3DOESPROC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void *pixels_);
typedef void (GL_APIENTRYP PFNGLCOPYTEXSUBIMAGE3DOESPROC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
typedef void (GL_APIENTRYP PFNGLCOMPRESSEDTEXIMAGE3DOESPROC) (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLsizei imageSize_, const void *data_);
typedef void (GL_APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLsizei imageSize_, const void *data_);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE3DOESPROC) (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_, GLint zoffset_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glTexImage3DOES (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLenum format_, GLenum type_, const void *pixels_);
GL_APICALL void GL_APIENTRY glTexSubImage3DOES (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void *pixels_);
GL_APICALL void GL_APIENTRY glCopyTexSubImage3DOES (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_);
GL_APICALL void GL_APIENTRY glCompressedTexImage3DOES (GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLsizei imageSize_, const void *data_);
GL_APICALL void GL_APIENTRY glCompressedTexSubImage3DOES (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLsizei imageSize_, const void *data_);
GL_APICALL void GL_APIENTRY glFramebufferTexture3DOES (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_, GLint zoffset_);
#endif
#endif /* GL_OES_texture_3D */

#ifndef GL_OES_texture_border_clamp
#define GL_OES_texture_border_clamp 1
#define GL_TEXTURE_BORDER_COLOR_OES       0x1004
#define GL_CLAMP_TO_BORDER_OES            0x812D
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIIVOESPROC) (GLenum target_, GLenum pname_, const GLint *params_);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIUIVOESPROC) (GLenum target_, GLenum pname_, const GLuint *params_);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIIVOESPROC) (GLenum target_, GLenum pname_, GLint *params_);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIUIVOESPROC) (GLenum target_, GLenum pname_, GLuint *params_);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIIVOESPROC) (GLuint sampler_, GLenum pname_, const GLint *param_);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIUIVOESPROC) (GLuint sampler_, GLenum pname_, const GLuint *param_);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIIVOESPROC) (GLuint sampler_, GLenum pname_, GLint *params_);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIUIVOESPROC) (GLuint sampler_, GLenum pname_, GLuint *params_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glTexParameterIivOES (GLenum target_, GLenum pname_, const GLint *params_);
GL_APICALL void GL_APIENTRY glTexParameterIuivOES (GLenum target_, GLenum pname_, const GLuint *params_);
GL_APICALL void GL_APIENTRY glGetTexParameterIivOES (GLenum target_, GLenum pname_, GLint *params_);
GL_APICALL void GL_APIENTRY glGetTexParameterIuivOES (GLenum target_, GLenum pname_, GLuint *params_);
GL_APICALL void GL_APIENTRY glSamplerParameterIivOES (GLuint sampler_, GLenum pname_, const GLint *param_);
GL_APICALL void GL_APIENTRY glSamplerParameterIuivOES (GLuint sampler_, GLenum pname_, const GLuint *param_);
GL_APICALL void GL_APIENTRY glGetSamplerParameterIivOES (GLuint sampler_, GLenum pname_, GLint *params_);
GL_APICALL void GL_APIENTRY glGetSamplerParameterIuivOES (GLuint sampler_, GLenum pname_, GLuint *params_);
#endif
#endif /* GL_OES_texture_border_clamp */

#ifndef GL_OES_texture_buffer
#define GL_OES_texture_buffer 1
#define GL_TEXTURE_BUFFER_OES             0x8C2A
#define GL_TEXTURE_BUFFER_BINDING_OES     0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_OES    0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_OES     0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_OES 0x8C2D
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_OES 0x919F
#define GL_SAMPLER_BUFFER_OES             0x8DC2
#define GL_INT_SAMPLER_BUFFER_OES         0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_OES 0x8DD8
#define GL_IMAGE_BUFFER_OES               0x9051
#define GL_INT_IMAGE_BUFFER_OES           0x905C
#define GL_UNSIGNED_INT_IMAGE_BUFFER_OES  0x9067
#define GL_TEXTURE_BUFFER_OFFSET_OES      0x919D
#define GL_TEXTURE_BUFFER_SIZE_OES        0x919E
typedef void (GL_APIENTRYP PFNGLTEXBUFFEROESPROC) (GLenum target_, GLenum internalformat_, GLuint buffer_);
typedef void (GL_APIENTRYP PFNGLTEXBUFFERRANGEOESPROC) (GLenum target_, GLenum internalformat_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glTexBufferOES (GLenum target_, GLenum internalformat_, GLuint buffer_);
GL_APICALL void GL_APIENTRY glTexBufferRangeOES (GLenum target_, GLenum internalformat_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
#endif
#endif /* GL_OES_texture_buffer */

#ifndef GL_OES_texture_compression_astc
#define GL_OES_texture_compression_astc 1
#define GL_COMPRESSED_RGBA_ASTC_3x3x3_OES 0x93C0
#define GL_COMPRESSED_RGBA_ASTC_4x3x3_OES 0x93C1
#define GL_COMPRESSED_RGBA_ASTC_4x4x3_OES 0x93C2
#define GL_COMPRESSED_RGBA_ASTC_4x4x4_OES 0x93C3
#define GL_COMPRESSED_RGBA_ASTC_5x4x4_OES 0x93C4
#define GL_COMPRESSED_RGBA_ASTC_5x5x4_OES 0x93C5
#define GL_COMPRESSED_RGBA_ASTC_5x5x5_OES 0x93C6
#define GL_COMPRESSED_RGBA_ASTC_6x5x5_OES 0x93C7
#define GL_COMPRESSED_RGBA_ASTC_6x6x5_OES 0x93C8
#define GL_COMPRESSED_RGBA_ASTC_6x6x6_OES 0x93C9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES 0x93E0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES 0x93E1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES 0x93E2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES 0x93E3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES 0x93E4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES 0x93E5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES 0x93E6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES 0x93E7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES 0x93E8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES 0x93E9
#endif /* GL_OES_texture_compression_astc */

#ifndef GL_OES_texture_cube_map_array
#define GL_OES_texture_cube_map_array 1
#define GL_TEXTURE_CUBE_MAP_ARRAY_OES     0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_OES 0x900A
#define GL_SAMPLER_CUBE_MAP_ARRAY_OES     0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_OES 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_OES 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_OES 0x900F
#define GL_IMAGE_CUBE_MAP_ARRAY_OES       0x9054
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_OES   0x905F
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_OES 0x906A
#endif /* GL_OES_texture_cube_map_array */

#ifndef GL_OES_texture_float
#define GL_OES_texture_float 1
#endif /* GL_OES_texture_float */

#ifndef GL_OES_texture_float_linear
#define GL_OES_texture_float_linear 1
#endif /* GL_OES_texture_float_linear */

#ifndef GL_OES_texture_half_float
#define GL_OES_texture_half_float 1
#define GL_HALF_FLOAT_OES                 0x8D61
#endif /* GL_OES_texture_half_float */

#ifndef GL_OES_texture_half_float_linear
#define GL_OES_texture_half_float_linear 1
#endif /* GL_OES_texture_half_float_linear */

#ifndef GL_OES_texture_npot
#define GL_OES_texture_npot 1
#endif /* GL_OES_texture_npot */

#ifndef GL_OES_texture_stencil8
#define GL_OES_texture_stencil8 1
#define GL_STENCIL_INDEX_OES              0x1901
#define GL_STENCIL_INDEX8_OES             0x8D48
#endif /* GL_OES_texture_stencil8 */

#ifndef GL_OES_texture_storage_multisample_2d_array
#define GL_OES_texture_storage_multisample_2d_array 1
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES 0x9102
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES 0x9105
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES 0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES 0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES 0x910D
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glTexStorage3DMultisampleOES (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_);
#endif
#endif /* GL_OES_texture_storage_multisample_2d_array */

#ifndef GL_OES_texture_view
#define GL_OES_texture_view 1
#define GL_TEXTURE_VIEW_MIN_LEVEL_OES     0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS_OES    0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER_OES     0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS_OES    0x82DE
#define GL_TEXTURE_IMMUTABLE_LEVELS       0x82DF
typedef void (GL_APIENTRYP PFNGLTEXTUREVIEWOESPROC) (GLuint texture_, GLenum target_, GLuint origtexture_, GLenum internalformat_, GLuint minlevel_, GLuint numlevels_, GLuint minlayer_, GLuint numlayers_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glTextureViewOES (GLuint texture_, GLenum target_, GLuint origtexture_, GLenum internalformat_, GLuint minlevel_, GLuint numlevels_, GLuint minlayer_, GLuint numlayers_);
#endif
#endif /* GL_OES_texture_view */

#ifndef GL_OES_vertex_array_object
#define GL_OES_vertex_array_object 1
#define GL_VERTEX_ARRAY_BINDING_OES       0x85B5
typedef void (GL_APIENTRYP PFNGLBINDVERTEXARRAYOESPROC) (GLuint array_);
typedef void (GL_APIENTRYP PFNGLDELETEVERTEXARRAYSOESPROC) (GLsizei n_, const GLuint *arrays_);
typedef void (GL_APIENTRYP PFNGLGENVERTEXARRAYSOESPROC) (GLsizei n_, GLuint *arrays_);
typedef GLboolean (GL_APIENTRYP PFNGLISVERTEXARRAYOESPROC) (GLuint array_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glBindVertexArrayOES (GLuint array_);
GL_APICALL void GL_APIENTRY glDeleteVertexArraysOES (GLsizei n_, const GLuint *arrays_);
GL_APICALL void GL_APIENTRY glGenVertexArraysOES (GLsizei n_, GLuint *arrays_);
GL_APICALL GLboolean GL_APIENTRY glIsVertexArrayOES (GLuint array_);
#endif
#endif /* GL_OES_vertex_array_object */

#ifndef GL_OES_vertex_half_float
#define GL_OES_vertex_half_float 1
#endif /* GL_OES_vertex_half_float */

#ifndef GL_OES_vertex_type_10_10_10_2
#define GL_OES_vertex_type_10_10_10_2 1
#define GL_UNSIGNED_INT_10_10_10_2_OES    0x8DF6
#define GL_INT_10_10_10_2_OES             0x8DF7
#endif /* GL_OES_vertex_type_10_10_10_2 */

#ifndef GL_AMD_compressed_3DC_texture
#define GL_AMD_compressed_3DC_texture 1
#define GL_3DC_X_AMD                      0x87F9
#define GL_3DC_XY_AMD                     0x87FA
#endif /* GL_AMD_compressed_3DC_texture */

#ifndef GL_AMD_compressed_ATC_texture
#define GL_AMD_compressed_ATC_texture 1
#define GL_ATC_RGB_AMD                    0x8C92
#define GL_ATC_RGBA_EXPLICIT_ALPHA_AMD    0x8C93
#define GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD 0x87EE
#endif /* GL_AMD_compressed_ATC_texture */

#ifndef GL_AMD_performance_monitor
#define GL_AMD_performance_monitor 1
#define GL_COUNTER_TYPE_AMD               0x8BC0
#define GL_COUNTER_RANGE_AMD              0x8BC1
#define GL_UNSIGNED_INT64_AMD             0x8BC2
#define GL_PERCENTAGE_AMD                 0x8BC3
#define GL_PERFMON_RESULT_AVAILABLE_AMD   0x8BC4
#define GL_PERFMON_RESULT_SIZE_AMD        0x8BC5
#define GL_PERFMON_RESULT_AMD             0x8BC6
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORGROUPSAMDPROC) (GLint *numGroups_, GLsizei groupsSize_, GLuint *groups_);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERSAMDPROC) (GLuint group_, GLint *numCounters_, GLint *maxActiveCounters_, GLsizei counterSize_, GLuint *counters_);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) (GLuint group_, GLsizei bufSize_, GLsizei *length_, GLchar *groupString_);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) (GLuint group_, GLuint counter_, GLsizei bufSize_, GLsizei *length_, GLchar *counterString_);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) (GLuint group_, GLuint counter_, GLenum pname_, void *data_);
typedef void (GL_APIENTRYP PFNGLGENPERFMONITORSAMDPROC) (GLsizei n_, GLuint *monitors_);
typedef void (GL_APIENTRYP PFNGLDELETEPERFMONITORSAMDPROC) (GLsizei n_, GLuint *monitors_);
typedef void (GL_APIENTRYP PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) (GLuint monitor_, GLboolean enable_, GLuint group_, GLint numCounters_, GLuint *counterList_);
typedef void (GL_APIENTRYP PFNGLBEGINPERFMONITORAMDPROC) (GLuint monitor_);
typedef void (GL_APIENTRYP PFNGLENDPERFMONITORAMDPROC) (GLuint monitor_);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) (GLuint monitor_, GLenum pname_, GLsizei dataSize_, GLuint *data_, GLint *bytesWritten_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glGetPerfMonitorGroupsAMD (GLint *numGroups_, GLsizei groupsSize_, GLuint *groups_);
GL_APICALL void GL_APIENTRY glGetPerfMonitorCountersAMD (GLuint group_, GLint *numCounters_, GLint *maxActiveCounters_, GLsizei counterSize_, GLuint *counters_);
GL_APICALL void GL_APIENTRY glGetPerfMonitorGroupStringAMD (GLuint group_, GLsizei bufSize_, GLsizei *length_, GLchar *groupString_);
GL_APICALL void GL_APIENTRY glGetPerfMonitorCounterStringAMD (GLuint group_, GLuint counter_, GLsizei bufSize_, GLsizei *length_, GLchar *counterString_);
GL_APICALL void GL_APIENTRY glGetPerfMonitorCounterInfoAMD (GLuint group_, GLuint counter_, GLenum pname_, void *data_);
GL_APICALL void GL_APIENTRY glGenPerfMonitorsAMD (GLsizei n_, GLuint *monitors_);
GL_APICALL void GL_APIENTRY glDeletePerfMonitorsAMD (GLsizei n_, GLuint *monitors_);
GL_APICALL void GL_APIENTRY glSelectPerfMonitorCountersAMD (GLuint monitor_, GLboolean enable_, GLuint group_, GLint numCounters_, GLuint *counterList_);
GL_APICALL void GL_APIENTRY glBeginPerfMonitorAMD (GLuint monitor_);
GL_APICALL void GL_APIENTRY glEndPerfMonitorAMD (GLuint monitor_);
GL_APICALL void GL_APIENTRY glGetPerfMonitorCounterDataAMD (GLuint monitor_, GLenum pname_, GLsizei dataSize_, GLuint *data_, GLint *bytesWritten_);
#endif
#endif /* GL_AMD_performance_monitor */

#ifndef GL_AMD_program_binary_Z400
#define GL_AMD_program_binary_Z400 1
#define GL_Z400_BINARY_AMD                0x8740
#endif /* GL_AMD_program_binary_Z400 */

#ifndef GL_ANDROID_extension_pack_es31a
#define GL_ANDROID_extension_pack_es31a 1
#endif /* GL_ANDROID_extension_pack_es31a */

#ifndef GL_ANGLE_depth_texture
#define GL_ANGLE_depth_texture 1
#endif /* GL_ANGLE_depth_texture */

#ifndef GL_ANGLE_framebuffer_blit
#define GL_ANGLE_framebuffer_blit 1
#define GL_READ_FRAMEBUFFER_ANGLE         0x8CA8
#define GL_DRAW_FRAMEBUFFER_ANGLE         0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_ANGLE 0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_ANGLE 0x8CAA
typedef void (GL_APIENTRYP PFNGLBLITFRAMEBUFFERANGLEPROC) (GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glBlitFramebufferANGLE (GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_);
#endif
#endif /* GL_ANGLE_framebuffer_blit */

#ifndef GL_ANGLE_framebuffer_multisample
#define GL_ANGLE_framebuffer_multisample 1
#define GL_RENDERBUFFER_SAMPLES_ANGLE     0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE 0x8D56
#define GL_MAX_SAMPLES_ANGLE              0x8D57
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleANGLE (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
#endif
#endif /* GL_ANGLE_framebuffer_multisample */

#ifndef GL_ANGLE_instanced_arrays
#define GL_ANGLE_instanced_arrays 1
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE 0x88FE
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDANGLEPROC) (GLenum mode_, GLint first_, GLsizei count_, GLsizei primcount_);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDANGLEPROC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei primcount_);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBDIVISORANGLEPROC) (GLuint index_, GLuint divisor_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDrawArraysInstancedANGLE (GLenum mode_, GLint first_, GLsizei count_, GLsizei primcount_);
GL_APICALL void GL_APIENTRY glDrawElementsInstancedANGLE (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei primcount_);
GL_APICALL void GL_APIENTRY glVertexAttribDivisorANGLE (GLuint index_, GLuint divisor_);
#endif
#endif /* GL_ANGLE_instanced_arrays */

#ifndef GL_ANGLE_pack_reverse_row_order
#define GL_ANGLE_pack_reverse_row_order 1
#define GL_PACK_REVERSE_ROW_ORDER_ANGLE   0x93A4
#endif /* GL_ANGLE_pack_reverse_row_order */

#ifndef GL_ANGLE_program_binary
#define GL_ANGLE_program_binary 1
#define GL_PROGRAM_BINARY_ANGLE           0x93A6
#endif /* GL_ANGLE_program_binary */

#ifndef GL_ANGLE_texture_compression_dxt3
#define GL_ANGLE_texture_compression_dxt3 1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE 0x83F2
#endif /* GL_ANGLE_texture_compression_dxt3 */

#ifndef GL_ANGLE_texture_compression_dxt5
#define GL_ANGLE_texture_compression_dxt5 1
#define GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE 0x83F3
#endif /* GL_ANGLE_texture_compression_dxt5 */

#ifndef GL_ANGLE_texture_usage
#define GL_ANGLE_texture_usage 1
#define GL_TEXTURE_USAGE_ANGLE            0x93A2
#define GL_FRAMEBUFFER_ATTACHMENT_ANGLE   0x93A3
#endif /* GL_ANGLE_texture_usage */

#ifndef GL_ANGLE_translated_shader_source
#define GL_ANGLE_translated_shader_source 1
#define GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE 0x93A0
typedef void (GL_APIENTRYP PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC) (GLuint shader_, GLsizei bufsize_, GLsizei *length_, GLchar *source_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glGetTranslatedShaderSourceANGLE (GLuint shader_, GLsizei bufsize_, GLsizei *length_, GLchar *source_);
#endif
#endif /* GL_ANGLE_translated_shader_source */

#ifndef GL_APPLE_clip_distance
#define GL_APPLE_clip_distance 1
#define GL_MAX_CLIP_DISTANCES_APPLE       0x0D32
#define GL_CLIP_DISTANCE0_APPLE           0x3000
#define GL_CLIP_DISTANCE1_APPLE           0x3001
#define GL_CLIP_DISTANCE2_APPLE           0x3002
#define GL_CLIP_DISTANCE3_APPLE           0x3003
#define GL_CLIP_DISTANCE4_APPLE           0x3004
#define GL_CLIP_DISTANCE5_APPLE           0x3005
#define GL_CLIP_DISTANCE6_APPLE           0x3006
#define GL_CLIP_DISTANCE7_APPLE           0x3007
#endif /* GL_APPLE_clip_distance */

#ifndef GL_APPLE_color_buffer_packed_float
#define GL_APPLE_color_buffer_packed_float 1
#endif /* GL_APPLE_color_buffer_packed_float */

#ifndef GL_APPLE_copy_texture_levels
#define GL_APPLE_copy_texture_levels 1
typedef void (GL_APIENTRYP PFNGLCOPYTEXTURELEVELSAPPLEPROC) (GLuint destinationTexture_, GLuint sourceTexture_, GLint sourceBaseLevel_, GLsizei sourceLevelCount_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glCopyTextureLevelsAPPLE (GLuint destinationTexture_, GLuint sourceTexture_, GLint sourceBaseLevel_, GLsizei sourceLevelCount_);
#endif
#endif /* GL_APPLE_copy_texture_levels */

#ifndef GL_APPLE_framebuffer_multisample
#define GL_APPLE_framebuffer_multisample 1
#define GL_RENDERBUFFER_SAMPLES_APPLE     0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE 0x8D56
#define GL_MAX_SAMPLES_APPLE              0x8D57
#define GL_READ_FRAMEBUFFER_APPLE         0x8CA8
#define GL_DRAW_FRAMEBUFFER_APPLE         0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_APPLE 0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_APPLE 0x8CAA
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
typedef void (GL_APIENTRYP PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleAPPLE (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
GL_APICALL void GL_APIENTRY glResolveMultisampleFramebufferAPPLE (void);
#endif
#endif /* GL_APPLE_framebuffer_multisample */

#ifndef GL_APPLE_rgb_422
#define GL_APPLE_rgb_422 1
#define GL_RGB_422_APPLE                  0x8A1F
#define GL_UNSIGNED_SHORT_8_8_APPLE       0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE   0x85BB
#define GL_RGB_RAW_422_APPLE              0x8A51
#endif /* GL_APPLE_rgb_422 */

#ifndef GL_APPLE_sync
#define GL_APPLE_sync 1
#define GL_SYNC_OBJECT_APPLE              0x8A53
#define GL_MAX_SERVER_WAIT_TIMEOUT_APPLE  0x9111
#define GL_OBJECT_TYPE_APPLE              0x9112
#define GL_SYNC_CONDITION_APPLE           0x9113
#define GL_SYNC_STATUS_APPLE              0x9114
#define GL_SYNC_FLAGS_APPLE               0x9115
#define GL_SYNC_FENCE_APPLE               0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE 0x9117
#define GL_UNSIGNALED_APPLE               0x9118
#define GL_SIGNALED_APPLE                 0x9119
#define GL_ALREADY_SIGNALED_APPLE         0x911A
#define GL_TIMEOUT_EXPIRED_APPLE          0x911B
#define GL_CONDITION_SATISFIED_APPLE      0x911C
#define GL_WAIT_FAILED_APPLE              0x911D
#define GL_SYNC_FLUSH_COMMANDS_BIT_APPLE  0x00000001
#define GL_TIMEOUT_IGNORED_APPLE          0xFFFFFFFFFFFFFFFFull
typedef GLsync (GL_APIENTRYP PFNGLFENCESYNCAPPLEPROC) (GLenum condition_, GLbitfield flags_);
typedef GLboolean (GL_APIENTRYP PFNGLISSYNCAPPLEPROC) (GLsync sync_);
typedef void (GL_APIENTRYP PFNGLDELETESYNCAPPLEPROC) (GLsync sync_);
typedef GLenum (GL_APIENTRYP PFNGLCLIENTWAITSYNCAPPLEPROC) (GLsync sync_, GLbitfield flags_, GLuint64 timeout_);
typedef void (GL_APIENTRYP PFNGLWAITSYNCAPPLEPROC) (GLsync sync_, GLbitfield flags_, GLuint64 timeout_);
typedef void (GL_APIENTRYP PFNGLGETINTEGER64VAPPLEPROC) (GLenum pname_, GLint64 *params_);
typedef void (GL_APIENTRYP PFNGLGETSYNCIVAPPLEPROC) (GLsync sync_, GLenum pname_, GLsizei bufSize_, GLsizei *length_, GLint *values_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL GLsync GL_APIENTRY glFenceSyncAPPLE (GLenum condition_, GLbitfield flags_);
GL_APICALL GLboolean GL_APIENTRY glIsSyncAPPLE (GLsync sync_);
GL_APICALL void GL_APIENTRY glDeleteSyncAPPLE (GLsync sync_);
GL_APICALL GLenum GL_APIENTRY glClientWaitSyncAPPLE (GLsync sync_, GLbitfield flags_, GLuint64 timeout_);
GL_APICALL void GL_APIENTRY glWaitSyncAPPLE (GLsync sync_, GLbitfield flags_, GLuint64 timeout_);
GL_APICALL void GL_APIENTRY glGetInteger64vAPPLE (GLenum pname_, GLint64 *params_);
GL_APICALL void GL_APIENTRY glGetSyncivAPPLE (GLsync sync_, GLenum pname_, GLsizei bufSize_, GLsizei *length_, GLint *values_);
#endif
#endif /* GL_APPLE_sync */

#ifndef GL_APPLE_texture_format_BGRA8888
#define GL_APPLE_texture_format_BGRA8888 1
#define GL_BGRA_EXT                       0x80E1
#define GL_BGRA8_EXT                      0x93A1
#endif /* GL_APPLE_texture_format_BGRA8888 */

#ifndef GL_APPLE_texture_max_level
#define GL_APPLE_texture_max_level 1
#define GL_TEXTURE_MAX_LEVEL_APPLE        0x813D
#endif /* GL_APPLE_texture_max_level */

#ifndef GL_APPLE_texture_packed_float
#define GL_APPLE_texture_packed_float 1
#define GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE 0x8C3B
#define GL_UNSIGNED_INT_5_9_9_9_REV_APPLE 0x8C3E
#define GL_R11F_G11F_B10F_APPLE           0x8C3A
#define GL_RGB9_E5_APPLE                  0x8C3D
#endif /* GL_APPLE_texture_packed_float */

#ifndef GL_ARM_mali_program_binary
#define GL_ARM_mali_program_binary 1
#define GL_MALI_PROGRAM_BINARY_ARM        0x8F61
#endif /* GL_ARM_mali_program_binary */

#ifndef GL_ARM_mali_shader_binary
#define GL_ARM_mali_shader_binary 1
#define GL_MALI_SHADER_BINARY_ARM         0x8F60
#endif /* GL_ARM_mali_shader_binary */

#ifndef GL_ARM_rgba8
#define GL_ARM_rgba8 1
#endif /* GL_ARM_rgba8 */

#ifndef GL_ARM_shader_framebuffer_fetch
#define GL_ARM_shader_framebuffer_fetch 1
#define GL_FETCH_PER_SAMPLE_ARM           0x8F65
#define GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM 0x8F66
#endif /* GL_ARM_shader_framebuffer_fetch */

#ifndef GL_ARM_shader_framebuffer_fetch_depth_stencil
#define GL_ARM_shader_framebuffer_fetch_depth_stencil 1
#endif /* GL_ARM_shader_framebuffer_fetch_depth_stencil */

#ifndef GL_DMP_program_binary
#define GL_DMP_program_binary 1
#define GL_SMAPHS30_PROGRAM_BINARY_DMP    0x9251
#define GL_SMAPHS_PROGRAM_BINARY_DMP      0x9252
#define GL_DMP_PROGRAM_BINARY_DMP         0x9253
#endif /* GL_DMP_program_binary */

#ifndef GL_DMP_shader_binary
#define GL_DMP_shader_binary 1
#define GL_SHADER_BINARY_DMP              0x9250
#endif /* GL_DMP_shader_binary */

#ifndef GL_EXT_YUV_target
#define GL_EXT_YUV_target 1
#define GL_SAMPLER_EXTERNAL_2D_Y2Y_EXT    0x8BE7
#endif /* GL_EXT_YUV_target */

#ifndef GL_EXT_base_instance
#define GL_EXT_base_instance 1
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC) (GLenum mode_, GLint first_, GLsizei count_, GLsizei instancecount_, GLuint baseinstance_);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLuint baseinstance_);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLint basevertex_, GLuint baseinstance_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDrawArraysInstancedBaseInstanceEXT (GLenum mode_, GLint first_, GLsizei count_, GLsizei instancecount_, GLuint baseinstance_);
GL_APICALL void GL_APIENTRY glDrawElementsInstancedBaseInstanceEXT (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLuint baseinstance_);
GL_APICALL void GL_APIENTRY glDrawElementsInstancedBaseVertexBaseInstanceEXT (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLint basevertex_, GLuint baseinstance_);
#endif
#endif /* GL_EXT_base_instance */

#ifndef GL_EXT_blend_func_extended
#define GL_EXT_blend_func_extended 1
#define GL_SRC1_COLOR_EXT                 0x88F9
#define GL_SRC1_ALPHA_EXT                 0x8589
#define GL_ONE_MINUS_SRC1_COLOR_EXT       0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA_EXT       0x88FB
#define GL_SRC_ALPHA_SATURATE_EXT         0x0308
#define GL_LOCATION_INDEX_EXT             0x930F
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS_EXT 0x88FC
typedef void (GL_APIENTRYP PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC) (GLuint program_, GLuint colorNumber_, GLuint index_, const GLchar *name_);
typedef void (GL_APIENTRYP PFNGLBINDFRAGDATALOCATIONEXTPROC) (GLuint program_, GLuint color_, const GLchar *name_);
typedef GLint (GL_APIENTRYP PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC) (GLuint program_, GLenum programInterface_, const GLchar *name_);
typedef GLint (GL_APIENTRYP PFNGLGETFRAGDATAINDEXEXTPROC) (GLuint program_, const GLchar *name_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glBindFragDataLocationIndexedEXT (GLuint program_, GLuint colorNumber_, GLuint index_, const GLchar *name_);
GL_APICALL void GL_APIENTRY glBindFragDataLocationEXT (GLuint program_, GLuint color_, const GLchar *name_);
GL_APICALL GLint GL_APIENTRY glGetProgramResourceLocationIndexEXT (GLuint program_, GLenum programInterface_, const GLchar *name_);
GL_APICALL GLint GL_APIENTRY glGetFragDataIndexEXT (GLuint program_, const GLchar *name_);
#endif
#endif /* GL_EXT_blend_func_extended */

#ifndef GL_EXT_blend_minmax
#define GL_EXT_blend_minmax 1
#define GL_MIN_EXT                        0x8007
#define GL_MAX_EXT                        0x8008
#endif /* GL_EXT_blend_minmax */

#ifndef GL_EXT_buffer_storage
#define GL_EXT_buffer_storage 1
#define GL_MAP_READ_BIT                   0x0001
#define GL_MAP_WRITE_BIT                  0x0002
#define GL_MAP_PERSISTENT_BIT_EXT         0x0040
#define GL_MAP_COHERENT_BIT_EXT           0x0080
#define GL_DYNAMIC_STORAGE_BIT_EXT        0x0100
#define GL_CLIENT_STORAGE_BIT_EXT         0x0200
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT 0x00004000
#define GL_BUFFER_IMMUTABLE_STORAGE_EXT   0x821F
#define GL_BUFFER_STORAGE_FLAGS_EXT       0x8220
typedef void (GL_APIENTRYP PFNGLBUFFERSTORAGEEXTPROC) (GLenum target_, GLsizeiptr size_, const void *data_, GLbitfield flags_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glBufferStorageEXT (GLenum target_, GLsizeiptr size_, const void *data_, GLbitfield flags_);
#endif
#endif /* GL_EXT_buffer_storage */

#ifndef GL_EXT_color_buffer_float
#define GL_EXT_color_buffer_float 1
#endif /* GL_EXT_color_buffer_float */

#ifndef GL_EXT_color_buffer_half_float
#define GL_EXT_color_buffer_half_float 1
#define GL_RGBA16F_EXT                    0x881A
#define GL_RGB16F_EXT                     0x881B
#define GL_RG16F_EXT                      0x822F
#define GL_R16F_EXT                       0x822D
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT 0x8211
#define GL_UNSIGNED_NORMALIZED_EXT        0x8C17
#endif /* GL_EXT_color_buffer_half_float */

#ifndef GL_EXT_copy_image
#define GL_EXT_copy_image 1
typedef void (GL_APIENTRYP PFNGLCOPYIMAGESUBDATAEXTPROC) (GLuint srcName_, GLenum srcTarget_, GLint srcLevel_, GLint srcX_, GLint srcY_, GLint srcZ_, GLuint dstName_, GLenum dstTarget_, GLint dstLevel_, GLint dstX_, GLint dstY_, GLint dstZ_, GLsizei srcWidth_, GLsizei srcHeight_, GLsizei srcDepth_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glCopyImageSubDataEXT (GLuint srcName_, GLenum srcTarget_, GLint srcLevel_, GLint srcX_, GLint srcY_, GLint srcZ_, GLuint dstName_, GLenum dstTarget_, GLint dstLevel_, GLint dstX_, GLint dstY_, GLint dstZ_, GLsizei srcWidth_, GLsizei srcHeight_, GLsizei srcDepth_);
#endif
#endif /* GL_EXT_copy_image */

#ifndef GL_EXT_debug_label
#define GL_EXT_debug_label 1
#define GL_PROGRAM_PIPELINE_OBJECT_EXT    0x8A4F
#define GL_PROGRAM_OBJECT_EXT             0x8B40
#define GL_SHADER_OBJECT_EXT              0x8B48
#define GL_BUFFER_OBJECT_EXT              0x9151
#define GL_QUERY_OBJECT_EXT               0x9153
#define GL_VERTEX_ARRAY_OBJECT_EXT        0x9154
#define GL_TRANSFORM_FEEDBACK             0x8E22
typedef void (GL_APIENTRYP PFNGLLABELOBJECTEXTPROC) (GLenum type_, GLuint object_, GLsizei length_, const GLchar *label_);
typedef void (GL_APIENTRYP PFNGLGETOBJECTLABELEXTPROC) (GLenum type_, GLuint object_, GLsizei bufSize_, GLsizei *length_, GLchar *label_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glLabelObjectEXT (GLenum type_, GLuint object_, GLsizei length_, const GLchar *label_);
GL_APICALL void GL_APIENTRY glGetObjectLabelEXT (GLenum type_, GLuint object_, GLsizei bufSize_, GLsizei *length_, GLchar *label_);
#endif
#endif /* GL_EXT_debug_label */

#ifndef GL_EXT_debug_marker
#define GL_EXT_debug_marker 1
typedef void (GL_APIENTRYP PFNGLINSERTEVENTMARKEREXTPROC) (GLsizei length_, const GLchar *marker_);
typedef void (GL_APIENTRYP PFNGLPUSHGROUPMARKEREXTPROC) (GLsizei length_, const GLchar *marker_);
typedef void (GL_APIENTRYP PFNGLPOPGROUPMARKEREXTPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glInsertEventMarkerEXT (GLsizei length_, const GLchar *marker_);
GL_APICALL void GL_APIENTRY glPushGroupMarkerEXT (GLsizei length_, const GLchar *marker_);
GL_APICALL void GL_APIENTRY glPopGroupMarkerEXT (void);
#endif
#endif /* GL_EXT_debug_marker */

#ifndef GL_EXT_discard_framebuffer
#define GL_EXT_discard_framebuffer 1
#define GL_COLOR_EXT                      0x1800
#define GL_DEPTH_EXT                      0x1801
#define GL_STENCIL_EXT                    0x1802
typedef void (GL_APIENTRYP PFNGLDISCARDFRAMEBUFFEREXTPROC) (GLenum target_, GLsizei numAttachments_, const GLenum *attachments_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDiscardFramebufferEXT (GLenum target_, GLsizei numAttachments_, const GLenum *attachments_);
#endif
#endif /* GL_EXT_discard_framebuffer */

#ifndef GL_EXT_disjoint_timer_query
#define GL_EXT_disjoint_timer_query 1
#define GL_QUERY_COUNTER_BITS_EXT         0x8864
#define GL_CURRENT_QUERY_EXT              0x8865
#define GL_QUERY_RESULT_EXT               0x8866
#define GL_QUERY_RESULT_AVAILABLE_EXT     0x8867
#define GL_TIME_ELAPSED_EXT               0x88BF
#define GL_TIMESTAMP_EXT                  0x8E28
#define GL_GPU_DISJOINT_EXT               0x8FBB
typedef void (GL_APIENTRYP PFNGLGENQUERIESEXTPROC) (GLsizei n_, GLuint *ids_);
typedef void (GL_APIENTRYP PFNGLDELETEQUERIESEXTPROC) (GLsizei n_, const GLuint *ids_);
typedef GLboolean (GL_APIENTRYP PFNGLISQUERYEXTPROC) (GLuint id_);
typedef void (GL_APIENTRYP PFNGLBEGINQUERYEXTPROC) (GLenum target_, GLuint id_);
typedef void (GL_APIENTRYP PFNGLENDQUERYEXTPROC) (GLenum target_);
typedef void (GL_APIENTRYP PFNGLQUERYCOUNTEREXTPROC) (GLuint id_, GLenum target_);
typedef void (GL_APIENTRYP PFNGLGETQUERYIVEXTPROC) (GLenum target_, GLenum pname_, GLint *params_);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTIVEXTPROC) (GLuint id_, GLenum pname_, GLint *params_);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTUIVEXTPROC) (GLuint id_, GLenum pname_, GLuint *params_);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTI64VEXTPROC) (GLuint id_, GLenum pname_, GLint64 *params_);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTUI64VEXTPROC) (GLuint id_, GLenum pname_, GLuint64 *params_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glGenQueriesEXT (GLsizei n_, GLuint *ids_);
GL_APICALL void GL_APIENTRY glDeleteQueriesEXT (GLsizei n_, const GLuint *ids_);
GL_APICALL GLboolean GL_APIENTRY glIsQueryEXT (GLuint id_);
GL_APICALL void GL_APIENTRY glBeginQueryEXT (GLenum target_, GLuint id_);
GL_APICALL void GL_APIENTRY glEndQueryEXT (GLenum target_);
GL_APICALL void GL_APIENTRY glQueryCounterEXT (GLuint id_, GLenum target_);
GL_APICALL void GL_APIENTRY glGetQueryivEXT (GLenum target_, GLenum pname_, GLint *params_);
GL_APICALL void GL_APIENTRY glGetQueryObjectivEXT (GLuint id_, GLenum pname_, GLint *params_);
GL_APICALL void GL_APIENTRY glGetQueryObjectuivEXT (GLuint id_, GLenum pname_, GLuint *params_);
GL_APICALL void GL_APIENTRY glGetQueryObjecti64vEXT (GLuint id_, GLenum pname_, GLint64 *params_);
GL_APICALL void GL_APIENTRY glGetQueryObjectui64vEXT (GLuint id_, GLenum pname_, GLuint64 *params_);
#endif
#endif /* GL_EXT_disjoint_timer_query */

#ifndef GL_EXT_draw_buffers
#define GL_EXT_draw_buffers 1
#define GL_MAX_COLOR_ATTACHMENTS_EXT      0x8CDF
#define GL_MAX_DRAW_BUFFERS_EXT           0x8824
#define GL_DRAW_BUFFER0_EXT               0x8825
#define GL_DRAW_BUFFER1_EXT               0x8826
#define GL_DRAW_BUFFER2_EXT               0x8827
#define GL_DRAW_BUFFER3_EXT               0x8828
#define GL_DRAW_BUFFER4_EXT               0x8829
#define GL_DRAW_BUFFER5_EXT               0x882A
#define GL_DRAW_BUFFER6_EXT               0x882B
#define GL_DRAW_BUFFER7_EXT               0x882C
#define GL_DRAW_BUFFER8_EXT               0x882D
#define GL_DRAW_BUFFER9_EXT               0x882E
#define GL_DRAW_BUFFER10_EXT              0x882F
#define GL_DRAW_BUFFER11_EXT              0x8830
#define GL_DRAW_BUFFER12_EXT              0x8831
#define GL_DRAW_BUFFER13_EXT              0x8832
#define GL_DRAW_BUFFER14_EXT              0x8833
#define GL_DRAW_BUFFER15_EXT              0x8834
#define GL_COLOR_ATTACHMENT0_EXT          0x8CE0
#define GL_COLOR_ATTACHMENT1_EXT          0x8CE1
#define GL_COLOR_ATTACHMENT2_EXT          0x8CE2
#define GL_COLOR_ATTACHMENT3_EXT          0x8CE3
#define GL_COLOR_ATTACHMENT4_EXT          0x8CE4
#define GL_COLOR_ATTACHMENT5_EXT          0x8CE5
#define GL_COLOR_ATTACHMENT6_EXT          0x8CE6
#define GL_COLOR_ATTACHMENT7_EXT          0x8CE7
#define GL_COLOR_ATTACHMENT8_EXT          0x8CE8
#define GL_COLOR_ATTACHMENT9_EXT          0x8CE9
#define GL_COLOR_ATTACHMENT10_EXT         0x8CEA
#define GL_COLOR_ATTACHMENT11_EXT         0x8CEB
#define GL_COLOR_ATTACHMENT12_EXT         0x8CEC
#define GL_COLOR_ATTACHMENT13_EXT         0x8CED
#define GL_COLOR_ATTACHMENT14_EXT         0x8CEE
#define GL_COLOR_ATTACHMENT15_EXT         0x8CEF
typedef void (GL_APIENTRYP PFNGLDRAWBUFFERSEXTPROC) (GLsizei n_, const GLenum *bufs_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDrawBuffersEXT (GLsizei n_, const GLenum *bufs_);
#endif
#endif /* GL_EXT_draw_buffers */

#ifndef GL_EXT_draw_buffers_indexed
#define GL_EXT_draw_buffers_indexed 1
typedef void (GL_APIENTRYP PFNGLENABLEIEXTPROC) (GLenum target_, GLuint index_);
typedef void (GL_APIENTRYP PFNGLDISABLEIEXTPROC) (GLenum target_, GLuint index_);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONIEXTPROC) (GLuint buf_, GLenum mode_);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONSEPARATEIEXTPROC) (GLuint buf_, GLenum modeRGB_, GLenum modeAlpha_);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCIEXTPROC) (GLuint buf_, GLenum src_, GLenum dst_);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCSEPARATEIEXTPROC) (GLuint buf_, GLenum srcRGB_, GLenum dstRGB_, GLenum srcAlpha_, GLenum dstAlpha_);
typedef void (GL_APIENTRYP PFNGLCOLORMASKIEXTPROC) (GLuint index_, GLboolean r_, GLboolean g_, GLboolean b_, GLboolean a_);
typedef GLboolean (GL_APIENTRYP PFNGLISENABLEDIEXTPROC) (GLenum target_, GLuint index_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glEnableiEXT (GLenum target_, GLuint index_);
GL_APICALL void GL_APIENTRY glDisableiEXT (GLenum target_, GLuint index_);
GL_APICALL void GL_APIENTRY glBlendEquationiEXT (GLuint buf_, GLenum mode_);
GL_APICALL void GL_APIENTRY glBlendEquationSeparateiEXT (GLuint buf_, GLenum modeRGB_, GLenum modeAlpha_);
GL_APICALL void GL_APIENTRY glBlendFunciEXT (GLuint buf_, GLenum src_, GLenum dst_);
GL_APICALL void GL_APIENTRY glBlendFuncSeparateiEXT (GLuint buf_, GLenum srcRGB_, GLenum dstRGB_, GLenum srcAlpha_, GLenum dstAlpha_);
GL_APICALL void GL_APIENTRY glColorMaskiEXT (GLuint index_, GLboolean r_, GLboolean g_, GLboolean b_, GLboolean a_);
GL_APICALL GLboolean GL_APIENTRY glIsEnablediEXT (GLenum target_, GLuint index_);
#endif
#endif /* GL_EXT_draw_buffers_indexed */

#ifndef GL_EXT_draw_elements_base_vertex
#define GL_EXT_draw_elements_base_vertex 1
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSBASEVERTEXEXTPROC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_);
typedef void (GL_APIENTRYP PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC) (GLenum mode_, GLuint start_, GLuint end_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLint basevertex_);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC) (GLenum mode_, const GLsizei *count_, GLenum type_, const void *const*indices_, GLsizei primcount_, const GLint *basevertex_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDrawElementsBaseVertexEXT (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_);
GL_APICALL void GL_APIENTRY glDrawRangeElementsBaseVertexEXT (GLenum mode_, GLuint start_, GLuint end_, GLsizei count_, GLenum type_, const void *indices_, GLint basevertex_);
GL_APICALL void GL_APIENTRY glDrawElementsInstancedBaseVertexEXT (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei instancecount_, GLint basevertex_);
GL_APICALL void GL_APIENTRY glMultiDrawElementsBaseVertexEXT (GLenum mode_, const GLsizei *count_, GLenum type_, const void *const*indices_, GLsizei primcount_, const GLint *basevertex_);
#endif
#endif /* GL_EXT_draw_elements_base_vertex */

#ifndef GL_EXT_draw_instanced
#define GL_EXT_draw_instanced 1
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDEXTPROC) (GLenum mode_, GLint start_, GLsizei count_, GLsizei primcount_);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDEXTPROC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei primcount_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDrawArraysInstancedEXT (GLenum mode_, GLint start_, GLsizei count_, GLsizei primcount_);
GL_APICALL void GL_APIENTRY glDrawElementsInstancedEXT (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei primcount_);
#endif
#endif /* GL_EXT_draw_instanced */

#ifndef GL_EXT_float_blend
#define GL_EXT_float_blend 1
#endif /* GL_EXT_float_blend */

#ifndef GL_EXT_geometry_point_size
#define GL_EXT_geometry_point_size 1
#endif /* GL_EXT_geometry_point_size */

#ifndef GL_EXT_geometry_shader
#define GL_EXT_geometry_shader 1
#define GL_GEOMETRY_SHADER_EXT            0x8DD9
#define GL_GEOMETRY_SHADER_BIT_EXT        0x00000004
#define GL_GEOMETRY_LINKED_VERTICES_OUT_EXT 0x8916
#define GL_GEOMETRY_LINKED_INPUT_TYPE_EXT 0x8917
#define GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT 0x8918
#define GL_GEOMETRY_SHADER_INVOCATIONS_EXT 0x887F
#define GL_LAYER_PROVOKING_VERTEX_EXT     0x825E
#define GL_LINES_ADJACENCY_EXT            0x000A
#define GL_LINE_STRIP_ADJACENCY_EXT       0x000B
#define GL_TRIANGLES_ADJACENCY_EXT        0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_EXT   0x000D
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT 0x8DDF
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT 0x8A2C
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT 0x8A32
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT 0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT 0x9124
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT 0x8DE1
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT 0x8E5A
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT 0x8C29
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT 0x92CF
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT 0x92D5
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT 0x90CD
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT 0x90D7
#define GL_FIRST_VERTEX_CONVENTION_EXT    0x8E4D
#define GL_LAST_VERTEX_CONVENTION_EXT     0x8E4E
#define GL_UNDEFINED_VERTEX_EXT           0x8260
#define GL_PRIMITIVES_GENERATED_EXT       0x8C87
#define GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT 0x9312
#define GL_MAX_FRAMEBUFFER_LAYERS_EXT     0x9317
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT 0x8DA8
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT 0x8DA7
#define GL_REFERENCED_BY_GEOMETRY_SHADER_EXT 0x9309
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREEXTPROC) (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glFramebufferTextureEXT (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_);
#endif
#endif /* GL_EXT_geometry_shader */

#ifndef GL_EXT_gpu_shader5
#define GL_EXT_gpu_shader5 1
#endif /* GL_EXT_gpu_shader5 */

#ifndef GL_EXT_instanced_arrays
#define GL_EXT_instanced_arrays 1
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT 0x88FE
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBDIVISOREXTPROC) (GLuint index_, GLuint divisor_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glVertexAttribDivisorEXT (GLuint index_, GLuint divisor_);
#endif
#endif /* GL_EXT_instanced_arrays */

#ifndef GL_EXT_map_buffer_range
#define GL_EXT_map_buffer_range 1
#define GL_MAP_READ_BIT_EXT               0x0001
#define GL_MAP_WRITE_BIT_EXT              0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT_EXT   0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT_EXT  0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT_EXT     0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT_EXT     0x0020
typedef void *(GL_APIENTRYP PFNGLMAPBUFFERRANGEEXTPROC) (GLenum target_, GLintptr offset_, GLsizeiptr length_, GLbitfield access_);
typedef void (GL_APIENTRYP PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC) (GLenum target_, GLintptr offset_, GLsizeiptr length_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void *GL_APIENTRY glMapBufferRangeEXT (GLenum target_, GLintptr offset_, GLsizeiptr length_, GLbitfield access_);
GL_APICALL void GL_APIENTRY glFlushMappedBufferRangeEXT (GLenum target_, GLintptr offset_, GLsizeiptr length_);
#endif
#endif /* GL_EXT_map_buffer_range */

#ifndef GL_EXT_multi_draw_arrays
#define GL_EXT_multi_draw_arrays 1
typedef void (GL_APIENTRYP PFNGLMULTIDRAWARRAYSEXTPROC) (GLenum mode_, const GLint *first_, const GLsizei *count_, GLsizei primcount_);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSEXTPROC) (GLenum mode_, const GLsizei *count_, GLenum type_, const void *const*indices_, GLsizei primcount_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glMultiDrawArraysEXT (GLenum mode_, const GLint *first_, const GLsizei *count_, GLsizei primcount_);
GL_APICALL void GL_APIENTRY glMultiDrawElementsEXT (GLenum mode_, const GLsizei *count_, GLenum type_, const void *const*indices_, GLsizei primcount_);
#endif
#endif /* GL_EXT_multi_draw_arrays */

#ifndef GL_EXT_multi_draw_indirect
#define GL_EXT_multi_draw_indirect 1
typedef void (GL_APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC) (GLenum mode_, const void *indirect_, GLsizei drawcount_, GLsizei stride_);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC) (GLenum mode_, GLenum type_, const void *indirect_, GLsizei drawcount_, GLsizei stride_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glMultiDrawArraysIndirectEXT (GLenum mode_, const void *indirect_, GLsizei drawcount_, GLsizei stride_);
GL_APICALL void GL_APIENTRY glMultiDrawElementsIndirectEXT (GLenum mode_, GLenum type_, const void *indirect_, GLsizei drawcount_, GLsizei stride_);
#endif
#endif /* GL_EXT_multi_draw_indirect */

#ifndef GL_EXT_multisampled_compatibility
#define GL_EXT_multisampled_compatibility 1
#define GL_MULTISAMPLE_EXT                0x809D
#define GL_SAMPLE_ALPHA_TO_ONE_EXT        0x809F
#endif /* GL_EXT_multisampled_compatibility */

#ifndef GL_EXT_multisampled_render_to_texture
#define GL_EXT_multisampled_render_to_texture 1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT 0x8D6C
#define GL_RENDERBUFFER_SAMPLES_EXT       0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT 0x8D56
#define GL_MAX_SAMPLES_EXT                0x8D57
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC) (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_, GLsizei samples_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleEXT (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
GL_APICALL void GL_APIENTRY glFramebufferTexture2DMultisampleEXT (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_, GLsizei samples_);
#endif
#endif /* GL_EXT_multisampled_render_to_texture */

#ifndef GL_EXT_multiview_draw_buffers
#define GL_EXT_multiview_draw_buffers 1
#define GL_COLOR_ATTACHMENT_EXT           0x90F0
#define GL_MULTIVIEW_EXT                  0x90F1
#define GL_DRAW_BUFFER_EXT                0x0C01
#define GL_READ_BUFFER_EXT                0x0C02
#define GL_MAX_MULTIVIEW_BUFFERS_EXT      0x90F2
typedef void (GL_APIENTRYP PFNGLREADBUFFERINDEXEDEXTPROC) (GLenum src_, GLint index_);
typedef void (GL_APIENTRYP PFNGLDRAWBUFFERSINDEXEDEXTPROC) (GLint n_, const GLenum *location_, const GLint *indices_);
typedef void (GL_APIENTRYP PFNGLGETINTEGERI_VEXTPROC) (GLenum target_, GLuint index_, GLint *data_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glReadBufferIndexedEXT (GLenum src_, GLint index_);
GL_APICALL void GL_APIENTRY glDrawBuffersIndexedEXT (GLint n_, const GLenum *location_, const GLint *indices_);
GL_APICALL void GL_APIENTRY glGetIntegeri_vEXT (GLenum target_, GLuint index_, GLint *data_);
#endif
#endif /* GL_EXT_multiview_draw_buffers */

#ifndef GL_EXT_occlusion_query_boolean
#define GL_EXT_occlusion_query_boolean 1
#define GL_ANY_SAMPLES_PASSED_EXT         0x8C2F
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT 0x8D6A
#endif /* GL_EXT_occlusion_query_boolean */

#ifndef GL_EXT_polygon_offset_clamp
#define GL_EXT_polygon_offset_clamp 1
#define GL_POLYGON_OFFSET_CLAMP_EXT       0x8E1B
typedef void (GL_APIENTRYP PFNGLPOLYGONOFFSETCLAMPEXTPROC) (GLfloat factor_, GLfloat units_, GLfloat clamp_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glPolygonOffsetClampEXT (GLfloat factor_, GLfloat units_, GLfloat clamp_);
#endif
#endif /* GL_EXT_polygon_offset_clamp */

#ifndef GL_EXT_post_depth_coverage
#define GL_EXT_post_depth_coverage 1
#endif /* GL_EXT_post_depth_coverage */

#ifndef GL_EXT_primitive_bounding_box
#define GL_EXT_primitive_bounding_box 1
#define GL_PRIMITIVE_BOUNDING_BOX_EXT     0x92BE
typedef void (GL_APIENTRYP PFNGLPRIMITIVEBOUNDINGBOXEXTPROC) (GLfloat minX_, GLfloat minY_, GLfloat minZ_, GLfloat minW_, GLfloat maxX_, GLfloat maxY_, GLfloat maxZ_, GLfloat maxW_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glPrimitiveBoundingBoxEXT (GLfloat minX_, GLfloat minY_, GLfloat minZ_, GLfloat minW_, GLfloat maxX_, GLfloat maxY_, GLfloat maxZ_, GLfloat maxW_);
#endif
#endif /* GL_EXT_primitive_bounding_box */

#ifndef GL_EXT_pvrtc_sRGB
#define GL_EXT_pvrtc_sRGB 1
#define GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT 0x8A54
#define GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT 0x8A55
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT 0x8A56
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT 0x8A57
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV2_IMG 0x93F0
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV2_IMG 0x93F1
#endif /* GL_EXT_pvrtc_sRGB */

#ifndef GL_EXT_raster_multisample
#define GL_EXT_raster_multisample 1
#define GL_RASTER_MULTISAMPLE_EXT         0x9327
#define GL_RASTER_SAMPLES_EXT             0x9328
#define GL_MAX_RASTER_SAMPLES_EXT         0x9329
#define GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT 0x932A
#define GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT 0x932B
#define GL_EFFECTIVE_RASTER_SAMPLES_EXT   0x932C
typedef void (GL_APIENTRYP PFNGLRASTERSAMPLESEXTPROC) (GLuint samples_, GLboolean fixedsamplelocations_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glRasterSamplesEXT (GLuint samples_, GLboolean fixedsamplelocations_);
#endif
#endif /* GL_EXT_raster_multisample */

#ifndef GL_EXT_read_format_bgra
#define GL_EXT_read_format_bgra 1
#define GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT 0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT 0x8366
#endif /* GL_EXT_read_format_bgra */

#ifndef GL_EXT_render_snorm
#define GL_EXT_render_snorm 1
#define GL_R8_SNORM                       0x8F94
#define GL_RG8_SNORM                      0x8F95
#define GL_RGBA8_SNORM                    0x8F97
#define GL_R16_SNORM_EXT                  0x8F98
#define GL_RG16_SNORM_EXT                 0x8F99
#define GL_RGBA16_SNORM_EXT               0x8F9B
#endif /* GL_EXT_render_snorm */

#ifndef GL_EXT_robustness
#define GL_EXT_robustness 1
#define GL_GUILTY_CONTEXT_RESET_EXT       0x8253
#define GL_INNOCENT_CONTEXT_RESET_EXT     0x8254
#define GL_UNKNOWN_CONTEXT_RESET_EXT      0x8255
#define GL_CONTEXT_ROBUST_ACCESS_EXT      0x90F3
#define GL_RESET_NOTIFICATION_STRATEGY_EXT 0x8256
#define GL_LOSE_CONTEXT_ON_RESET_EXT      0x8252
#define GL_NO_RESET_NOTIFICATION_EXT      0x8261
typedef GLenum (GL_APIENTRYP PFNGLGETGRAPHICSRESETSTATUSEXTPROC) (void);
typedef void (GL_APIENTRYP PFNGLREADNPIXELSEXTPROC) (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, GLsizei bufSize_, void *data_);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMFVEXTPROC) (GLuint program_, GLint location_, GLsizei bufSize_, GLfloat *params_);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMIVEXTPROC) (GLuint program_, GLint location_, GLsizei bufSize_, GLint *params_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL GLenum GL_APIENTRY glGetGraphicsResetStatusEXT (void);
GL_APICALL void GL_APIENTRY glReadnPixelsEXT (GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, GLsizei bufSize_, void *data_);
GL_APICALL void GL_APIENTRY glGetnUniformfvEXT (GLuint program_, GLint location_, GLsizei bufSize_, GLfloat *params_);
GL_APICALL void GL_APIENTRY glGetnUniformivEXT (GLuint program_, GLint location_, GLsizei bufSize_, GLint *params_);
#endif
#endif /* GL_EXT_robustness */

#ifndef GL_EXT_sRGB
#define GL_EXT_sRGB 1
#define GL_SRGB_EXT                       0x8C40
#define GL_SRGB_ALPHA_EXT                 0x8C42
#define GL_SRGB8_ALPHA8_EXT               0x8C43
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT 0x8210
#endif /* GL_EXT_sRGB */

#ifndef GL_EXT_sRGB_write_control
#define GL_EXT_sRGB_write_control 1
#define GL_FRAMEBUFFER_SRGB_EXT           0x8DB9
#endif /* GL_EXT_sRGB_write_control */

#ifndef GL_EXT_separate_shader_objects
#define GL_EXT_separate_shader_objects 1
#define GL_ACTIVE_PROGRAM_EXT             0x8259
#define GL_VERTEX_SHADER_BIT_EXT          0x00000001
#define GL_FRAGMENT_SHADER_BIT_EXT        0x00000002
#define GL_ALL_SHADER_BITS_EXT            0xFFFFFFFF
#define GL_PROGRAM_SEPARABLE_EXT          0x8258
#define GL_PROGRAM_PIPELINE_BINDING_EXT   0x825A
typedef void (GL_APIENTRYP PFNGLACTIVESHADERPROGRAMEXTPROC) (GLuint pipeline_, GLuint program_);
typedef void (GL_APIENTRYP PFNGLBINDPROGRAMPIPELINEEXTPROC) (GLuint pipeline_);
typedef GLuint (GL_APIENTRYP PFNGLCREATESHADERPROGRAMVEXTPROC) (GLenum type_, GLsizei count_, const GLchar **strings_);
typedef void (GL_APIENTRYP PFNGLDELETEPROGRAMPIPELINESEXTPROC) (GLsizei n_, const GLuint *pipelines_);
typedef void (GL_APIENTRYP PFNGLGENPROGRAMPIPELINESEXTPROC) (GLsizei n_, GLuint *pipelines_);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC) (GLuint pipeline_, GLsizei bufSize_, GLsizei *length_, GLchar *infoLog_);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMPIPELINEIVEXTPROC) (GLuint pipeline_, GLenum pname_, GLint *params_);
typedef GLboolean (GL_APIENTRYP PFNGLISPROGRAMPIPELINEEXTPROC) (GLuint pipeline_);
typedef void (GL_APIENTRYP PFNGLPROGRAMPARAMETERIEXTPROC) (GLuint program_, GLenum pname_, GLint value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1FEXTPROC) (GLuint program_, GLint location_, GLfloat v0_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1FVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1IEXTPROC) (GLuint program_, GLint location_, GLint v0_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1IVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2FEXTPROC) (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2FVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2IEXTPROC) (GLuint program_, GLint location_, GLint v0_, GLint v1_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2IVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3FEXTPROC) (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3FVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3IEXTPROC) (GLuint program_, GLint location_, GLint v0_, GLint v1_, GLint v2_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3IVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4FEXTPROC) (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_, GLfloat v3_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4FVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4IEXTPROC) (GLuint program_, GLint location_, GLint v0_, GLint v1_, GLint v2_, GLint v3_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4IVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLUSEPROGRAMSTAGESEXTPROC) (GLuint pipeline_, GLbitfield stages_, GLuint program_);
typedef void (GL_APIENTRYP PFNGLVALIDATEPROGRAMPIPELINEEXTPROC) (GLuint pipeline_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UIEXTPROC) (GLuint program_, GLint location_, GLuint v0_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UIEXTPROC) (GLuint program_, GLint location_, GLuint v0_, GLuint v1_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UIEXTPROC) (GLuint program_, GLint location_, GLuint v0_, GLuint v1_, GLuint v2_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UIEXTPROC) (GLuint program_, GLint location_, GLuint v0_, GLuint v1_, GLuint v2_, GLuint v3_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UIVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UIVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UIVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UIVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glActiveShaderProgramEXT (GLuint pipeline_, GLuint program_);
GL_APICALL void GL_APIENTRY glBindProgramPipelineEXT (GLuint pipeline_);
GL_APICALL GLuint GL_APIENTRY glCreateShaderProgramvEXT (GLenum type_, GLsizei count_, const GLchar **strings_);
GL_APICALL void GL_APIENTRY glDeleteProgramPipelinesEXT (GLsizei n_, const GLuint *pipelines_);
GL_APICALL void GL_APIENTRY glGenProgramPipelinesEXT (GLsizei n_, GLuint *pipelines_);
GL_APICALL void GL_APIENTRY glGetProgramPipelineInfoLogEXT (GLuint pipeline_, GLsizei bufSize_, GLsizei *length_, GLchar *infoLog_);
GL_APICALL void GL_APIENTRY glGetProgramPipelineivEXT (GLuint pipeline_, GLenum pname_, GLint *params_);
GL_APICALL GLboolean GL_APIENTRY glIsProgramPipelineEXT (GLuint pipeline_);
GL_APICALL void GL_APIENTRY glProgramParameteriEXT (GLuint program_, GLenum pname_, GLint value_);
GL_APICALL void GL_APIENTRY glProgramUniform1fEXT (GLuint program_, GLint location_, GLfloat v0_);
GL_APICALL void GL_APIENTRY glProgramUniform1fvEXT (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glProgramUniform1iEXT (GLuint program_, GLint location_, GLint v0_);
GL_APICALL void GL_APIENTRY glProgramUniform1ivEXT (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
GL_APICALL void GL_APIENTRY glProgramUniform2fEXT (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_);
GL_APICALL void GL_APIENTRY glProgramUniform2fvEXT (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glProgramUniform2iEXT (GLuint program_, GLint location_, GLint v0_, GLint v1_);
GL_APICALL void GL_APIENTRY glProgramUniform2ivEXT (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
GL_APICALL void GL_APIENTRY glProgramUniform3fEXT (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_);
GL_APICALL void GL_APIENTRY glProgramUniform3fvEXT (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glProgramUniform3iEXT (GLuint program_, GLint location_, GLint v0_, GLint v1_, GLint v2_);
GL_APICALL void GL_APIENTRY glProgramUniform3ivEXT (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
GL_APICALL void GL_APIENTRY glProgramUniform4fEXT (GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_, GLfloat v3_);
GL_APICALL void GL_APIENTRY glProgramUniform4fvEXT (GLuint program_, GLint location_, GLsizei count_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glProgramUniform4iEXT (GLuint program_, GLint location_, GLint v0_, GLint v1_, GLint v2_, GLint v3_);
GL_APICALL void GL_APIENTRY glProgramUniform4ivEXT (GLuint program_, GLint location_, GLsizei count_, const GLint *value_);
GL_APICALL void GL_APIENTRY glProgramUniformMatrix2fvEXT (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glProgramUniformMatrix3fvEXT (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glProgramUniformMatrix4fvEXT (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glUseProgramStagesEXT (GLuint pipeline_, GLbitfield stages_, GLuint program_);
GL_APICALL void GL_APIENTRY glValidateProgramPipelineEXT (GLuint pipeline_);
GL_APICALL void GL_APIENTRY glProgramUniform1uiEXT (GLuint program_, GLint location_, GLuint v0_);
GL_APICALL void GL_APIENTRY glProgramUniform2uiEXT (GLuint program_, GLint location_, GLuint v0_, GLuint v1_);
GL_APICALL void GL_APIENTRY glProgramUniform3uiEXT (GLuint program_, GLint location_, GLuint v0_, GLuint v1_, GLuint v2_);
GL_APICALL void GL_APIENTRY glProgramUniform4uiEXT (GLuint program_, GLint location_, GLuint v0_, GLuint v1_, GLuint v2_, GLuint v3_);
GL_APICALL void GL_APIENTRY glProgramUniform1uivEXT (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
GL_APICALL void GL_APIENTRY glProgramUniform2uivEXT (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
GL_APICALL void GL_APIENTRY glProgramUniform3uivEXT (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
GL_APICALL void GL_APIENTRY glProgramUniform4uivEXT (GLuint program_, GLint location_, GLsizei count_, const GLuint *value_);
GL_APICALL void GL_APIENTRY glProgramUniformMatrix2x3fvEXT (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glProgramUniformMatrix3x2fvEXT (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glProgramUniformMatrix2x4fvEXT (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glProgramUniformMatrix4x2fvEXT (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glProgramUniformMatrix3x4fvEXT (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glProgramUniformMatrix4x3fvEXT (GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
#endif
#endif /* GL_EXT_separate_shader_objects */

#ifndef GL_EXT_shader_framebuffer_fetch
#define GL_EXT_shader_framebuffer_fetch 1
#define GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT 0x8A52
#endif /* GL_EXT_shader_framebuffer_fetch */

#ifndef GL_EXT_shader_group_vote
#define GL_EXT_shader_group_vote 1
#endif /* GL_EXT_shader_group_vote */

#ifndef GL_EXT_shader_implicit_conversions
#define GL_EXT_shader_implicit_conversions 1
#endif /* GL_EXT_shader_implicit_conversions */

#ifndef GL_EXT_shader_integer_mix
#define GL_EXT_shader_integer_mix 1
#endif /* GL_EXT_shader_integer_mix */

#ifndef GL_EXT_shader_io_blocks
#define GL_EXT_shader_io_blocks 1
#endif /* GL_EXT_shader_io_blocks */

#ifndef GL_EXT_shader_pixel_local_storage
#define GL_EXT_shader_pixel_local_storage 1
#define GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT 0x8F63
#define GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT 0x8F67
#define GL_SHADER_PIXEL_LOCAL_STORAGE_EXT 0x8F64
#endif /* GL_EXT_shader_pixel_local_storage */

#ifndef GL_EXT_shader_pixel_local_storage2
#define GL_EXT_shader_pixel_local_storage2 1
#define GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_FAST_SIZE_EXT 0x9650
#define GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_SIZE_EXT 0x9651
#define GL_FRAMEBUFFER_INCOMPLETE_INSUFFICIENT_SHADER_COMBINED_LOCAL_STORAGE_EXT 0x9652
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC) (GLuint target_, GLsizei size_);
typedef GLsizei (GL_APIENTRYP PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC) (GLuint target_);
typedef void (GL_APIENTRYP PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC) (GLsizei offset_, GLsizei n_, const GLuint *values_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glFramebufferPixelLocalStorageSizeEXT (GLuint target_, GLsizei size_);
GL_APICALL GLsizei GL_APIENTRY glGetFramebufferPixelLocalStorageSizeEXT (GLuint target_);
GL_APICALL void GL_APIENTRY glClearPixelLocalStorageuiEXT (GLsizei offset_, GLsizei n_, const GLuint *values_);
#endif
#endif /* GL_EXT_shader_pixel_local_storage2 */

#ifndef GL_EXT_shader_texture_lod
#define GL_EXT_shader_texture_lod 1
#endif /* GL_EXT_shader_texture_lod */

#ifndef GL_EXT_shadow_samplers
#define GL_EXT_shadow_samplers 1
#define GL_TEXTURE_COMPARE_MODE_EXT       0x884C
#define GL_TEXTURE_COMPARE_FUNC_EXT       0x884D
#define GL_COMPARE_REF_TO_TEXTURE_EXT     0x884E
#define GL_SAMPLER_2D_SHADOW_EXT          0x8B62
#endif /* GL_EXT_shadow_samplers */

#ifndef GL_EXT_sparse_texture
#define GL_EXT_sparse_texture 1
#define GL_TEXTURE_SPARSE_EXT             0x91A6
#define GL_VIRTUAL_PAGE_SIZE_INDEX_EXT    0x91A7
#define GL_NUM_SPARSE_LEVELS_EXT          0x91AA
#define GL_NUM_VIRTUAL_PAGE_SIZES_EXT     0x91A8
#define GL_VIRTUAL_PAGE_SIZE_X_EXT        0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_EXT        0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_EXT        0x9197
#define GL_TEXTURE_2D_ARRAY               0x8C1A
#define GL_TEXTURE_3D                     0x806F
#define GL_MAX_SPARSE_TEXTURE_SIZE_EXT    0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_EXT 0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_EXT 0x919A
#define GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_EXT 0x91A9
typedef void (GL_APIENTRYP PFNGLTEXPAGECOMMITMENTEXTPROC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean commit_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glTexPageCommitmentEXT (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean commit_);
#endif
#endif /* GL_EXT_sparse_texture */

#ifndef GL_EXT_tessellation_point_size
#define GL_EXT_tessellation_point_size 1
#endif /* GL_EXT_tessellation_point_size */

#ifndef GL_EXT_tessellation_shader
#define GL_EXT_tessellation_shader 1
#define GL_PATCHES_EXT                    0x000E
#define GL_PATCH_VERTICES_EXT             0x8E72
#define GL_TESS_CONTROL_OUTPUT_VERTICES_EXT 0x8E75
#define GL_TESS_GEN_MODE_EXT              0x8E76
#define GL_TESS_GEN_SPACING_EXT           0x8E77
#define GL_TESS_GEN_VERTEX_ORDER_EXT      0x8E78
#define GL_TESS_GEN_POINT_MODE_EXT        0x8E79
#define GL_ISOLINES_EXT                   0x8E7A
#define GL_QUADS_EXT                      0x0007
#define GL_FRACTIONAL_ODD_EXT             0x8E7B
#define GL_FRACTIONAL_EVEN_EXT            0x8E7C
#define GL_MAX_PATCH_VERTICES_EXT         0x8E7D
#define GL_MAX_TESS_GEN_LEVEL_EXT         0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT 0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT 0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT 0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT 0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS_EXT  0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT 0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT 0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT 0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT 0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT 0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT 0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT 0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT 0x8E1F
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT 0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT 0x92CE
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT 0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT 0x92D4
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT 0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT 0x90CC
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT 0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT 0x90D9
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED 0x8221
#define GL_IS_PER_PATCH_EXT               0x92E7
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT 0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT 0x9308
#define GL_TESS_CONTROL_SHADER_EXT        0x8E88
#define GL_TESS_EVALUATION_SHADER_EXT     0x8E87
#define GL_TESS_CONTROL_SHADER_BIT_EXT    0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT_EXT 0x00000010
typedef void (GL_APIENTRYP PFNGLPATCHPARAMETERIEXTPROC) (GLenum pname_, GLint value_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glPatchParameteriEXT (GLenum pname_, GLint value_);
#endif
#endif /* GL_EXT_tessellation_shader */

#ifndef GL_EXT_texture_border_clamp
#define GL_EXT_texture_border_clamp 1
#define GL_TEXTURE_BORDER_COLOR_EXT       0x1004
#define GL_CLAMP_TO_BORDER_EXT            0x812D
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIIVEXTPROC) (GLenum target_, GLenum pname_, const GLint *params_);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIUIVEXTPROC) (GLenum target_, GLenum pname_, const GLuint *params_);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIIVEXTPROC) (GLenum target_, GLenum pname_, GLint *params_);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIUIVEXTPROC) (GLenum target_, GLenum pname_, GLuint *params_);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIIVEXTPROC) (GLuint sampler_, GLenum pname_, const GLint *param_);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIUIVEXTPROC) (GLuint sampler_, GLenum pname_, const GLuint *param_);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIIVEXTPROC) (GLuint sampler_, GLenum pname_, GLint *params_);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIUIVEXTPROC) (GLuint sampler_, GLenum pname_, GLuint *params_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glTexParameterIivEXT (GLenum target_, GLenum pname_, const GLint *params_);
GL_APICALL void GL_APIENTRY glTexParameterIuivEXT (GLenum target_, GLenum pname_, const GLuint *params_);
GL_APICALL void GL_APIENTRY glGetTexParameterIivEXT (GLenum target_, GLenum pname_, GLint *params_);
GL_APICALL void GL_APIENTRY glGetTexParameterIuivEXT (GLenum target_, GLenum pname_, GLuint *params_);
GL_APICALL void GL_APIENTRY glSamplerParameterIivEXT (GLuint sampler_, GLenum pname_, const GLint *param_);
GL_APICALL void GL_APIENTRY glSamplerParameterIuivEXT (GLuint sampler_, GLenum pname_, const GLuint *param_);
GL_APICALL void GL_APIENTRY glGetSamplerParameterIivEXT (GLuint sampler_, GLenum pname_, GLint *params_);
GL_APICALL void GL_APIENTRY glGetSamplerParameterIuivEXT (GLuint sampler_, GLenum pname_, GLuint *params_);
#endif
#endif /* GL_EXT_texture_border_clamp */

#ifndef GL_EXT_texture_buffer
#define GL_EXT_texture_buffer 1
#define GL_TEXTURE_BUFFER_EXT             0x8C2A
#define GL_TEXTURE_BUFFER_BINDING_EXT     0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_EXT    0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_EXT     0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT 0x8C2D
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT 0x919F
#define GL_SAMPLER_BUFFER_EXT             0x8DC2
#define GL_INT_SAMPLER_BUFFER_EXT         0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT 0x8DD8
#define GL_IMAGE_BUFFER_EXT               0x9051
#define GL_INT_IMAGE_BUFFER_EXT           0x905C
#define GL_UNSIGNED_INT_IMAGE_BUFFER_EXT  0x9067
#define GL_TEXTURE_BUFFER_OFFSET_EXT      0x919D
#define GL_TEXTURE_BUFFER_SIZE_EXT        0x919E
typedef void (GL_APIENTRYP PFNGLTEXBUFFEREXTPROC) (GLenum target_, GLenum internalformat_, GLuint buffer_);
typedef void (GL_APIENTRYP PFNGLTEXBUFFERRANGEEXTPROC) (GLenum target_, GLenum internalformat_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glTexBufferEXT (GLenum target_, GLenum internalformat_, GLuint buffer_);
GL_APICALL void GL_APIENTRY glTexBufferRangeEXT (GLenum target_, GLenum internalformat_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_);
#endif
#endif /* GL_EXT_texture_buffer */

#ifndef GL_EXT_texture_compression_dxt1
#define GL_EXT_texture_compression_dxt1 1
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT   0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT  0x83F1
#endif /* GL_EXT_texture_compression_dxt1 */

#ifndef GL_EXT_texture_compression_s3tc
#define GL_EXT_texture_compression_s3tc 1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT  0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT  0x83F3
#endif /* GL_EXT_texture_compression_s3tc */

#ifndef GL_EXT_texture_cube_map_array
#define GL_EXT_texture_cube_map_array 1
#define GL_TEXTURE_CUBE_MAP_ARRAY_EXT     0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT 0x900A
#define GL_SAMPLER_CUBE_MAP_ARRAY_EXT     0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT 0x900F
#define GL_IMAGE_CUBE_MAP_ARRAY_EXT       0x9054
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT   0x905F
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT 0x906A
#endif /* GL_EXT_texture_cube_map_array */

#ifndef GL_EXT_texture_filter_anisotropic
#define GL_EXT_texture_filter_anisotropic 1
#define GL_TEXTURE_MAX_ANISOTROPY_EXT     0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF
#endif /* GL_EXT_texture_filter_anisotropic */

#ifndef GL_EXT_texture_filter_minmax
#define GL_EXT_texture_filter_minmax 1
#endif /* GL_EXT_texture_filter_minmax */

#ifndef GL_EXT_texture_format_BGRA8888
#define GL_EXT_texture_format_BGRA8888 1
#endif /* GL_EXT_texture_format_BGRA8888 */

#ifndef GL_EXT_texture_norm16
#define GL_EXT_texture_norm16 1
#define GL_R16_EXT                        0x822A
#define GL_RG16_EXT                       0x822C
#define GL_RGBA16_EXT                     0x805B
#define GL_RGB16_EXT                      0x8054
#define GL_RGB16_SNORM_EXT                0x8F9A
#endif /* GL_EXT_texture_norm16 */

#ifndef GL_EXT_texture_rg
#define GL_EXT_texture_rg 1
#define GL_RED_EXT                        0x1903
#define GL_RG_EXT                         0x8227
#define GL_R8_EXT                         0x8229
#define GL_RG8_EXT                        0x822B
#endif /* GL_EXT_texture_rg */

#ifndef GL_EXT_texture_sRGB_R8
#define GL_EXT_texture_sRGB_R8 1
#define GL_SR8_EXT                        0x8FBD
#endif /* GL_EXT_texture_sRGB_R8 */

#ifndef GL_EXT_texture_sRGB_RG8
#define GL_EXT_texture_sRGB_RG8 1
#define GL_SRG8_EXT                       0x8FBE
#endif /* GL_EXT_texture_sRGB_RG8 */

#ifndef GL_EXT_texture_sRGB_decode
#define GL_EXT_texture_sRGB_decode 1
#define GL_TEXTURE_SRGB_DECODE_EXT        0x8A48
#define GL_DECODE_EXT                     0x8A49
#define GL_SKIP_DECODE_EXT                0x8A4A
#endif /* GL_EXT_texture_sRGB_decode */

#ifndef GL_EXT_texture_storage
#define GL_EXT_texture_storage 1
#define GL_TEXTURE_IMMUTABLE_FORMAT_EXT   0x912F
#define GL_ALPHA8_EXT                     0x803C
#define GL_LUMINANCE8_EXT                 0x8040
#define GL_LUMINANCE8_ALPHA8_EXT          0x8045
#define GL_RGBA32F_EXT                    0x8814
#define GL_RGB32F_EXT                     0x8815
#define GL_ALPHA32F_EXT                   0x8816
#define GL_LUMINANCE32F_EXT               0x8818
#define GL_LUMINANCE_ALPHA32F_EXT         0x8819
#define GL_ALPHA16F_EXT                   0x881C
#define GL_LUMINANCE16F_EXT               0x881E
#define GL_LUMINANCE_ALPHA16F_EXT         0x881F
#define GL_R32F_EXT                       0x822E
#define GL_RG32F_EXT                      0x8230
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE1DEXTPROC) (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE2DEXTPROC) (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE3DEXTPROC) (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGE1DEXTPROC) (GLuint texture_, GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGE2DEXTPROC) (GLuint texture_, GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGE3DEXTPROC) (GLuint texture_, GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glTexStorage1DEXT (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_);
GL_APICALL void GL_APIENTRY glTexStorage2DEXT (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_);
GL_APICALL void GL_APIENTRY glTexStorage3DEXT (GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_);
GL_APICALL void GL_APIENTRY glTextureStorage1DEXT (GLuint texture_, GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_);
GL_APICALL void GL_APIENTRY glTextureStorage2DEXT (GLuint texture_, GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_);
GL_APICALL void GL_APIENTRY glTextureStorage3DEXT (GLuint texture_, GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_);
#endif
#endif /* GL_EXT_texture_storage */

#ifndef GL_EXT_texture_type_2_10_10_10_REV
#define GL_EXT_texture_type_2_10_10_10_REV 1
#define GL_UNSIGNED_INT_2_10_10_10_REV_EXT 0x8368
#endif /* GL_EXT_texture_type_2_10_10_10_REV */

#ifndef GL_EXT_texture_view
#define GL_EXT_texture_view 1
#define GL_TEXTURE_VIEW_MIN_LEVEL_EXT     0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS_EXT    0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER_EXT     0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS_EXT    0x82DE
typedef void (GL_APIENTRYP PFNGLTEXTUREVIEWEXTPROC) (GLuint texture_, GLenum target_, GLuint origtexture_, GLenum internalformat_, GLuint minlevel_, GLuint numlevels_, GLuint minlayer_, GLuint numlayers_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glTextureViewEXT (GLuint texture_, GLenum target_, GLuint origtexture_, GLenum internalformat_, GLuint minlevel_, GLuint numlevels_, GLuint minlayer_, GLuint numlayers_);
#endif
#endif /* GL_EXT_texture_view */

#ifndef GL_EXT_unpack_subimage
#define GL_EXT_unpack_subimage 1
#define GL_UNPACK_ROW_LENGTH_EXT          0x0CF2
#define GL_UNPACK_SKIP_ROWS_EXT           0x0CF3
#define GL_UNPACK_SKIP_PIXELS_EXT         0x0CF4
#endif /* GL_EXT_unpack_subimage */

#ifndef GL_FJ_shader_binary_GCCSO
#define GL_FJ_shader_binary_GCCSO 1
#define GL_GCCSO_SHADER_BINARY_FJ         0x9260
#endif /* GL_FJ_shader_binary_GCCSO */

#ifndef GL_IMG_framebuffer_downsample
#define GL_IMG_framebuffer_downsample 1
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_AND_DOWNSAMPLE_IMG 0x913C
#define GL_NUM_DOWNSAMPLE_SCALES_IMG      0x913D
#define GL_DOWNSAMPLE_SCALES_IMG          0x913E
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SCALE_IMG 0x913F
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DDOWNSAMPLEIMGPROC) (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_, GLint xscale_, GLint yscale_);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURELAYERDOWNSAMPLEIMGPROC) (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_, GLint layer_, GLint xscale_, GLint yscale_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glFramebufferTexture2DDownsampleIMG (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_, GLint xscale_, GLint yscale_);
GL_APICALL void GL_APIENTRY glFramebufferTextureLayerDownsampleIMG (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_, GLint layer_, GLint xscale_, GLint yscale_);
#endif
#endif /* GL_IMG_framebuffer_downsample */

#ifndef GL_IMG_multisampled_render_to_texture
#define GL_IMG_multisampled_render_to_texture 1
#define GL_RENDERBUFFER_SAMPLES_IMG       0x9133
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG 0x9134
#define GL_MAX_SAMPLES_IMG                0x9135
#define GL_TEXTURE_SAMPLES_IMG            0x9136
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC) (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_, GLsizei samples_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleIMG (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
GL_APICALL void GL_APIENTRY glFramebufferTexture2DMultisampleIMG (GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_, GLsizei samples_);
#endif
#endif /* GL_IMG_multisampled_render_to_texture */

#ifndef GL_IMG_program_binary
#define GL_IMG_program_binary 1
#define GL_SGX_PROGRAM_BINARY_IMG         0x9130
#endif /* GL_IMG_program_binary */

#ifndef GL_IMG_read_format
#define GL_IMG_read_format 1
#define GL_BGRA_IMG                       0x80E1
#define GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG 0x8365
#endif /* GL_IMG_read_format */

#ifndef GL_IMG_shader_binary
#define GL_IMG_shader_binary 1
#define GL_SGX_BINARY_IMG                 0x8C0A
#endif /* GL_IMG_shader_binary */

#ifndef GL_IMG_texture_compression_pvrtc
#define GL_IMG_texture_compression_pvrtc 1
#define GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG 0x8C00
#define GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG 0x8C01
#define GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG 0x8C02
#define GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG 0x8C03
#endif /* GL_IMG_texture_compression_pvrtc */

#ifndef GL_IMG_texture_compression_pvrtc2
#define GL_IMG_texture_compression_pvrtc2 1
#define GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG 0x9137
#define GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG 0x9138
#endif /* GL_IMG_texture_compression_pvrtc2 */

#ifndef GL_IMG_texture_filter_cubic
#define GL_IMG_texture_filter_cubic 1
#define GL_CUBIC_IMG                      0x9139
#define GL_CUBIC_MIPMAP_NEAREST_IMG       0x913A
#define GL_CUBIC_MIPMAP_LINEAR_IMG        0x913B
#endif /* GL_IMG_texture_filter_cubic */

#ifndef GL_INTEL_framebuffer_CMAA
#define GL_INTEL_framebuffer_CMAA 1
typedef void (GL_APIENTRYP PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glApplyFramebufferAttachmentCMAAINTEL (void);
#endif
#endif /* GL_INTEL_framebuffer_CMAA */

#ifndef GL_INTEL_performance_query
#define GL_INTEL_performance_query 1
#define GL_PERFQUERY_SINGLE_CONTEXT_INTEL 0x00000000
#define GL_PERFQUERY_GLOBAL_CONTEXT_INTEL 0x00000001
#define GL_PERFQUERY_WAIT_INTEL           0x83FB
#define GL_PERFQUERY_FLUSH_INTEL          0x83FA
#define GL_PERFQUERY_DONOT_FLUSH_INTEL    0x83F9
#define GL_PERFQUERY_COUNTER_EVENT_INTEL  0x94F0
#define GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL 0x94F1
#define GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL 0x94F2
#define GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL 0x94F3
#define GL_PERFQUERY_COUNTER_RAW_INTEL    0x94F4
#define GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL 0x94F5
#define GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL 0x94F8
#define GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL 0x94F9
#define GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL 0x94FA
#define GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL 0x94FB
#define GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL 0x94FC
#define GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL 0x94FD
#define GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL 0x94FE
#define GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL 0x94FF
#define GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL 0x9500
typedef void (GL_APIENTRYP PFNGLBEGINPERFQUERYINTELPROC) (GLuint queryHandle_);
typedef void (GL_APIENTRYP PFNGLCREATEPERFQUERYINTELPROC) (GLuint queryId_, GLuint *queryHandle_);
typedef void (GL_APIENTRYP PFNGLDELETEPERFQUERYINTELPROC) (GLuint queryHandle_);
typedef void (GL_APIENTRYP PFNGLENDPERFQUERYINTELPROC) (GLuint queryHandle_);
typedef void (GL_APIENTRYP PFNGLGETFIRSTPERFQUERYIDINTELPROC) (GLuint *queryId_);
typedef void (GL_APIENTRYP PFNGLGETNEXTPERFQUERYIDINTELPROC) (GLuint queryId_, GLuint *nextQueryId_);
typedef void (GL_APIENTRYP PFNGLGETPERFCOUNTERINFOINTELPROC) (GLuint queryId_, GLuint counterId_, GLuint counterNameLength_, GLchar *counterName_, GLuint counterDescLength_, GLchar *counterDesc_, GLuint *counterOffset_, GLuint *counterDataSize_, GLuint *counterTypeEnum_, GLuint *counterDataTypeEnum_, GLuint64 *rawCounterMaxValue_);
typedef void (GL_APIENTRYP PFNGLGETPERFQUERYDATAINTELPROC) (GLuint queryHandle_, GLuint flags_, GLsizei dataSize_, GLvoid *data_, GLuint *bytesWritten_);
typedef void (GL_APIENTRYP PFNGLGETPERFQUERYIDBYNAMEINTELPROC) (GLchar *queryName_, GLuint *queryId_);
typedef void (GL_APIENTRYP PFNGLGETPERFQUERYINFOINTELPROC) (GLuint queryId_, GLuint queryNameLength_, GLchar *queryName_, GLuint *dataSize_, GLuint *noCounters_, GLuint *noInstances_, GLuint *capsMask_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glBeginPerfQueryINTEL (GLuint queryHandle_);
GL_APICALL void GL_APIENTRY glCreatePerfQueryINTEL (GLuint queryId_, GLuint *queryHandle_);
GL_APICALL void GL_APIENTRY glDeletePerfQueryINTEL (GLuint queryHandle_);
GL_APICALL void GL_APIENTRY glEndPerfQueryINTEL (GLuint queryHandle_);
GL_APICALL void GL_APIENTRY glGetFirstPerfQueryIdINTEL (GLuint *queryId_);
GL_APICALL void GL_APIENTRY glGetNextPerfQueryIdINTEL (GLuint queryId_, GLuint *nextQueryId_);
GL_APICALL void GL_APIENTRY glGetPerfCounterInfoINTEL (GLuint queryId_, GLuint counterId_, GLuint counterNameLength_, GLchar *counterName_, GLuint counterDescLength_, GLchar *counterDesc_, GLuint *counterOffset_, GLuint *counterDataSize_, GLuint *counterTypeEnum_, GLuint *counterDataTypeEnum_, GLuint64 *rawCounterMaxValue_);
GL_APICALL void GL_APIENTRY glGetPerfQueryDataINTEL (GLuint queryHandle_, GLuint flags_, GLsizei dataSize_, GLvoid *data_, GLuint *bytesWritten_);
GL_APICALL void GL_APIENTRY glGetPerfQueryIdByNameINTEL (GLchar *queryName_, GLuint *queryId_);
GL_APICALL void GL_APIENTRY glGetPerfQueryInfoINTEL (GLuint queryId_, GLuint queryNameLength_, GLchar *queryName_, GLuint *dataSize_, GLuint *noCounters_, GLuint *noInstances_, GLuint *capsMask_);
#endif
#endif /* GL_INTEL_performance_query */

#ifndef GL_NV_bindless_texture
#define GL_NV_bindless_texture 1
typedef GLuint64 (GL_APIENTRYP PFNGLGETTEXTUREHANDLENVPROC) (GLuint texture_);
typedef GLuint64 (GL_APIENTRYP PFNGLGETTEXTURESAMPLERHANDLENVPROC) (GLuint texture_, GLuint sampler_);
typedef void (GL_APIENTRYP PFNGLMAKETEXTUREHANDLERESIDENTNVPROC) (GLuint64 handle_);
typedef void (GL_APIENTRYP PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC) (GLuint64 handle_);
typedef GLuint64 (GL_APIENTRYP PFNGLGETIMAGEHANDLENVPROC) (GLuint texture_, GLint level_, GLboolean layered_, GLint layer_, GLenum format_);
typedef void (GL_APIENTRYP PFNGLMAKEIMAGEHANDLERESIDENTNVPROC) (GLuint64 handle_, GLenum access_);
typedef void (GL_APIENTRYP PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC) (GLuint64 handle_);
typedef void (GL_APIENTRYP PFNGLUNIFORMHANDLEUI64NVPROC) (GLint location_, GLuint64 value_);
typedef void (GL_APIENTRYP PFNGLUNIFORMHANDLEUI64VNVPROC) (GLint location_, GLsizei count_, const GLuint64 *value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC) (GLuint program_, GLint location_, GLuint64 value_);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC) (GLuint program_, GLint location_, GLsizei count_, const GLuint64 *values_);
typedef GLboolean (GL_APIENTRYP PFNGLISTEXTUREHANDLERESIDENTNVPROC) (GLuint64 handle_);
typedef GLboolean (GL_APIENTRYP PFNGLISIMAGEHANDLERESIDENTNVPROC) (GLuint64 handle_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL GLuint64 GL_APIENTRY glGetTextureHandleNV (GLuint texture_);
GL_APICALL GLuint64 GL_APIENTRY glGetTextureSamplerHandleNV (GLuint texture_, GLuint sampler_);
GL_APICALL void GL_APIENTRY glMakeTextureHandleResidentNV (GLuint64 handle_);
GL_APICALL void GL_APIENTRY glMakeTextureHandleNonResidentNV (GLuint64 handle_);
GL_APICALL GLuint64 GL_APIENTRY glGetImageHandleNV (GLuint texture_, GLint level_, GLboolean layered_, GLint layer_, GLenum format_);
GL_APICALL void GL_APIENTRY glMakeImageHandleResidentNV (GLuint64 handle_, GLenum access_);
GL_APICALL void GL_APIENTRY glMakeImageHandleNonResidentNV (GLuint64 handle_);
GL_APICALL void GL_APIENTRY glUniformHandleui64NV (GLint location_, GLuint64 value_);
GL_APICALL void GL_APIENTRY glUniformHandleui64vNV (GLint location_, GLsizei count_, const GLuint64 *value_);
GL_APICALL void GL_APIENTRY glProgramUniformHandleui64NV (GLuint program_, GLint location_, GLuint64 value_);
GL_APICALL void GL_APIENTRY glProgramUniformHandleui64vNV (GLuint program_, GLint location_, GLsizei count_, const GLuint64 *values_);
GL_APICALL GLboolean GL_APIENTRY glIsTextureHandleResidentNV (GLuint64 handle_);
GL_APICALL GLboolean GL_APIENTRY glIsImageHandleResidentNV (GLuint64 handle_);
#endif
#endif /* GL_NV_bindless_texture */

#ifndef GL_NV_blend_equation_advanced
#define GL_NV_blend_equation_advanced 1
#define GL_BLEND_OVERLAP_NV               0x9281
#define GL_BLEND_PREMULTIPLIED_SRC_NV     0x9280
#define GL_BLUE_NV                        0x1905
#define GL_COLORBURN_NV                   0x929A
#define GL_COLORDODGE_NV                  0x9299
#define GL_CONJOINT_NV                    0x9284
#define GL_CONTRAST_NV                    0x92A1
#define GL_DARKEN_NV                      0x9297
#define GL_DIFFERENCE_NV                  0x929E
#define GL_DISJOINT_NV                    0x9283
#define GL_DST_ATOP_NV                    0x928F
#define GL_DST_IN_NV                      0x928B
#define GL_DST_NV                         0x9287
#define GL_DST_OUT_NV                     0x928D
#define GL_DST_OVER_NV                    0x9289
#define GL_EXCLUSION_NV                   0x92A0
#define GL_GREEN_NV                       0x1904
#define GL_HARDLIGHT_NV                   0x929B
#define GL_HARDMIX_NV                     0x92A9
#define GL_HSL_COLOR_NV                   0x92AF
#define GL_HSL_HUE_NV                     0x92AD
#define GL_HSL_LUMINOSITY_NV              0x92B0
#define GL_HSL_SATURATION_NV              0x92AE
#define GL_INVERT_OVG_NV                  0x92B4
#define GL_INVERT_RGB_NV                  0x92A3
#define GL_LIGHTEN_NV                     0x9298
#define GL_LINEARBURN_NV                  0x92A5
#define GL_LINEARDODGE_NV                 0x92A4
#define GL_LINEARLIGHT_NV                 0x92A7
#define GL_MINUS_CLAMPED_NV               0x92B3
#define GL_MINUS_NV                       0x929F
#define GL_MULTIPLY_NV                    0x9294
#define GL_OVERLAY_NV                     0x9296
#define GL_PINLIGHT_NV                    0x92A8
#define GL_PLUS_CLAMPED_ALPHA_NV          0x92B2
#define GL_PLUS_CLAMPED_NV                0x92B1
#define GL_PLUS_DARKER_NV                 0x9292
#define GL_PLUS_NV                        0x9291
#define GL_RED_NV                         0x1903
#define GL_SCREEN_NV                      0x9295
#define GL_SOFTLIGHT_NV                   0x929C
#define GL_SRC_ATOP_NV                    0x928E
#define GL_SRC_IN_NV                      0x928A
#define GL_SRC_NV                         0x9286
#define GL_SRC_OUT_NV                     0x928C
#define GL_SRC_OVER_NV                    0x9288
#define GL_UNCORRELATED_NV                0x9282
#define GL_VIVIDLIGHT_NV                  0x92A6
#define GL_XOR_NV                         0x1506
typedef void (GL_APIENTRYP PFNGLBLENDPARAMETERINVPROC) (GLenum pname_, GLint value_);
typedef void (GL_APIENTRYP PFNGLBLENDBARRIERNVPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glBlendParameteriNV (GLenum pname_, GLint value_);
GL_APICALL void GL_APIENTRY glBlendBarrierNV (void);
#endif
#endif /* GL_NV_blend_equation_advanced */

#ifndef GL_NV_blend_equation_advanced_coherent
#define GL_NV_blend_equation_advanced_coherent 1
#define GL_BLEND_ADVANCED_COHERENT_NV     0x9285
#endif /* GL_NV_blend_equation_advanced_coherent */

#ifndef GL_NV_conditional_render
#define GL_NV_conditional_render 1
#define GL_QUERY_WAIT_NV                  0x8E13
#define GL_QUERY_NO_WAIT_NV               0x8E14
#define GL_QUERY_BY_REGION_WAIT_NV        0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT_NV     0x8E16
typedef void (GL_APIENTRYP PFNGLBEGINCONDITIONALRENDERNVPROC) (GLuint id_, GLenum mode_);
typedef void (GL_APIENTRYP PFNGLENDCONDITIONALRENDERNVPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glBeginConditionalRenderNV (GLuint id_, GLenum mode_);
GL_APICALL void GL_APIENTRY glEndConditionalRenderNV (void);
#endif
#endif /* GL_NV_conditional_render */

#ifndef GL_NV_conservative_raster
#define GL_NV_conservative_raster 1
#define GL_CONSERVATIVE_RASTERIZATION_NV  0x9346
#define GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV 0x9347
#define GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV 0x9348
#define GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV 0x9349
typedef void (GL_APIENTRYP PFNGLSUBPIXELPRECISIONBIASNVPROC) (GLuint xbits_, GLuint ybits_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glSubpixelPrecisionBiasNV (GLuint xbits_, GLuint ybits_);
#endif
#endif /* GL_NV_conservative_raster */

#ifndef GL_NV_copy_buffer
#define GL_NV_copy_buffer 1
#define GL_COPY_READ_BUFFER_NV            0x8F36
#define GL_COPY_WRITE_BUFFER_NV           0x8F37
typedef void (GL_APIENTRYP PFNGLCOPYBUFFERSUBDATANVPROC) (GLenum readTarget_, GLenum writeTarget_, GLintptr readOffset_, GLintptr writeOffset_, GLsizeiptr size_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glCopyBufferSubDataNV (GLenum readTarget_, GLenum writeTarget_, GLintptr readOffset_, GLintptr writeOffset_, GLsizeiptr size_);
#endif
#endif /* GL_NV_copy_buffer */

#ifndef GL_NV_coverage_sample
#define GL_NV_coverage_sample 1
#define GL_COVERAGE_COMPONENT_NV          0x8ED0
#define GL_COVERAGE_COMPONENT4_NV         0x8ED1
#define GL_COVERAGE_ATTACHMENT_NV         0x8ED2
#define GL_COVERAGE_BUFFERS_NV            0x8ED3
#define GL_COVERAGE_SAMPLES_NV            0x8ED4
#define GL_COVERAGE_ALL_FRAGMENTS_NV      0x8ED5
#define GL_COVERAGE_EDGE_FRAGMENTS_NV     0x8ED6
#define GL_COVERAGE_AUTOMATIC_NV          0x8ED7
#define GL_COVERAGE_BUFFER_BIT_NV         0x00008000
typedef void (GL_APIENTRYP PFNGLCOVERAGEMASKNVPROC) (GLboolean mask_);
typedef void (GL_APIENTRYP PFNGLCOVERAGEOPERATIONNVPROC) (GLenum operation_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glCoverageMaskNV (GLboolean mask_);
GL_APICALL void GL_APIENTRY glCoverageOperationNV (GLenum operation_);
#endif
#endif /* GL_NV_coverage_sample */

#ifndef GL_NV_depth_nonlinear
#define GL_NV_depth_nonlinear 1
#define GL_DEPTH_COMPONENT16_NONLINEAR_NV 0x8E2C
#endif /* GL_NV_depth_nonlinear */

#ifndef GL_NV_draw_buffers
#define GL_NV_draw_buffers 1
#define GL_MAX_DRAW_BUFFERS_NV            0x8824
#define GL_DRAW_BUFFER0_NV                0x8825
#define GL_DRAW_BUFFER1_NV                0x8826
#define GL_DRAW_BUFFER2_NV                0x8827
#define GL_DRAW_BUFFER3_NV                0x8828
#define GL_DRAW_BUFFER4_NV                0x8829
#define GL_DRAW_BUFFER5_NV                0x882A
#define GL_DRAW_BUFFER6_NV                0x882B
#define GL_DRAW_BUFFER7_NV                0x882C
#define GL_DRAW_BUFFER8_NV                0x882D
#define GL_DRAW_BUFFER9_NV                0x882E
#define GL_DRAW_BUFFER10_NV               0x882F
#define GL_DRAW_BUFFER11_NV               0x8830
#define GL_DRAW_BUFFER12_NV               0x8831
#define GL_DRAW_BUFFER13_NV               0x8832
#define GL_DRAW_BUFFER14_NV               0x8833
#define GL_DRAW_BUFFER15_NV               0x8834
#define GL_COLOR_ATTACHMENT0_NV           0x8CE0
#define GL_COLOR_ATTACHMENT1_NV           0x8CE1
#define GL_COLOR_ATTACHMENT2_NV           0x8CE2
#define GL_COLOR_ATTACHMENT3_NV           0x8CE3
#define GL_COLOR_ATTACHMENT4_NV           0x8CE4
#define GL_COLOR_ATTACHMENT5_NV           0x8CE5
#define GL_COLOR_ATTACHMENT6_NV           0x8CE6
#define GL_COLOR_ATTACHMENT7_NV           0x8CE7
#define GL_COLOR_ATTACHMENT8_NV           0x8CE8
#define GL_COLOR_ATTACHMENT9_NV           0x8CE9
#define GL_COLOR_ATTACHMENT10_NV          0x8CEA
#define GL_COLOR_ATTACHMENT11_NV          0x8CEB
#define GL_COLOR_ATTACHMENT12_NV          0x8CEC
#define GL_COLOR_ATTACHMENT13_NV          0x8CED
#define GL_COLOR_ATTACHMENT14_NV          0x8CEE
#define GL_COLOR_ATTACHMENT15_NV          0x8CEF
typedef void (GL_APIENTRYP PFNGLDRAWBUFFERSNVPROC) (GLsizei n_, const GLenum *bufs_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDrawBuffersNV (GLsizei n_, const GLenum *bufs_);
#endif
#endif /* GL_NV_draw_buffers */

#ifndef GL_NV_draw_instanced
#define GL_NV_draw_instanced 1
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDNVPROC) (GLenum mode_, GLint first_, GLsizei count_, GLsizei primcount_);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDNVPROC) (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei primcount_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDrawArraysInstancedNV (GLenum mode_, GLint first_, GLsizei count_, GLsizei primcount_);
GL_APICALL void GL_APIENTRY glDrawElementsInstancedNV (GLenum mode_, GLsizei count_, GLenum type_, const void *indices_, GLsizei primcount_);
#endif
#endif /* GL_NV_draw_instanced */

#ifndef GL_NV_explicit_attrib_location
#define GL_NV_explicit_attrib_location 1
#endif /* GL_NV_explicit_attrib_location */

#ifndef GL_NV_fbo_color_attachments
#define GL_NV_fbo_color_attachments 1
#define GL_MAX_COLOR_ATTACHMENTS_NV       0x8CDF
#endif /* GL_NV_fbo_color_attachments */

#ifndef GL_NV_fence
#define GL_NV_fence 1
#define GL_ALL_COMPLETED_NV               0x84F2
#define GL_FENCE_STATUS_NV                0x84F3
#define GL_FENCE_CONDITION_NV             0x84F4
typedef void (GL_APIENTRYP PFNGLDELETEFENCESNVPROC) (GLsizei n_, const GLuint *fences_);
typedef void (GL_APIENTRYP PFNGLGENFENCESNVPROC) (GLsizei n_, GLuint *fences_);
typedef GLboolean (GL_APIENTRYP PFNGLISFENCENVPROC) (GLuint fence_);
typedef GLboolean (GL_APIENTRYP PFNGLTESTFENCENVPROC) (GLuint fence_);
typedef void (GL_APIENTRYP PFNGLGETFENCEIVNVPROC) (GLuint fence_, GLenum pname_, GLint *params_);
typedef void (GL_APIENTRYP PFNGLFINISHFENCENVPROC) (GLuint fence_);
typedef void (GL_APIENTRYP PFNGLSETFENCENVPROC) (GLuint fence_, GLenum condition_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDeleteFencesNV (GLsizei n_, const GLuint *fences_);
GL_APICALL void GL_APIENTRY glGenFencesNV (GLsizei n_, GLuint *fences_);
GL_APICALL GLboolean GL_APIENTRY glIsFenceNV (GLuint fence_);
GL_APICALL GLboolean GL_APIENTRY glTestFenceNV (GLuint fence_);
GL_APICALL void GL_APIENTRY glGetFenceivNV (GLuint fence_, GLenum pname_, GLint *params_);
GL_APICALL void GL_APIENTRY glFinishFenceNV (GLuint fence_);
GL_APICALL void GL_APIENTRY glSetFenceNV (GLuint fence_, GLenum condition_);
#endif
#endif /* GL_NV_fence */

#ifndef GL_NV_fill_rectangle
#define GL_NV_fill_rectangle 1
#define GL_FILL_RECTANGLE_NV              0x933C
#endif /* GL_NV_fill_rectangle */

#ifndef GL_NV_fragment_coverage_to_color
#define GL_NV_fragment_coverage_to_color 1
#define GL_FRAGMENT_COVERAGE_TO_COLOR_NV  0x92DD
#define GL_FRAGMENT_COVERAGE_COLOR_NV     0x92DE
typedef void (GL_APIENTRYP PFNGLFRAGMENTCOVERAGECOLORNVPROC) (GLuint color_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glFragmentCoverageColorNV (GLuint color_);
#endif
#endif /* GL_NV_fragment_coverage_to_color */

#ifndef GL_NV_fragment_shader_interlock
#define GL_NV_fragment_shader_interlock 1
#endif /* GL_NV_fragment_shader_interlock */

#ifndef GL_NV_framebuffer_blit
#define GL_NV_framebuffer_blit 1
#define GL_READ_FRAMEBUFFER_NV            0x8CA8
#define GL_DRAW_FRAMEBUFFER_NV            0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_NV    0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_NV    0x8CAA
typedef void (GL_APIENTRYP PFNGLBLITFRAMEBUFFERNVPROC) (GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glBlitFramebufferNV (GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_);
#endif
#endif /* GL_NV_framebuffer_blit */

#ifndef GL_NV_framebuffer_mixed_samples
#define GL_NV_framebuffer_mixed_samples 1
#define GL_COVERAGE_MODULATION_TABLE_NV   0x9331
#define GL_COLOR_SAMPLES_NV               0x8E20
#define GL_DEPTH_SAMPLES_NV               0x932D
#define GL_STENCIL_SAMPLES_NV             0x932E
#define GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV 0x932F
#define GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV 0x9330
#define GL_COVERAGE_MODULATION_NV         0x9332
#define GL_COVERAGE_MODULATION_TABLE_SIZE_NV 0x9333
typedef void (GL_APIENTRYP PFNGLCOVERAGEMODULATIONTABLENVPROC) (GLsizei n_, const GLfloat *v_);
typedef void (GL_APIENTRYP PFNGLGETCOVERAGEMODULATIONTABLENVPROC) (GLsizei bufsize_, GLfloat *v_);
typedef void (GL_APIENTRYP PFNGLCOVERAGEMODULATIONNVPROC) (GLenum components_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glCoverageModulationTableNV (GLsizei n_, const GLfloat *v_);
GL_APICALL void GL_APIENTRY glGetCoverageModulationTableNV (GLsizei bufsize_, GLfloat *v_);
GL_APICALL void GL_APIENTRY glCoverageModulationNV (GLenum components_);
#endif
#endif /* GL_NV_framebuffer_mixed_samples */

#ifndef GL_NV_framebuffer_multisample
#define GL_NV_framebuffer_multisample 1
#define GL_RENDERBUFFER_SAMPLES_NV        0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV 0x8D56
#define GL_MAX_SAMPLES_NV                 0x8D57
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC) (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleNV (GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_);
#endif
#endif /* GL_NV_framebuffer_multisample */

#ifndef GL_NV_generate_mipmap_sRGB
#define GL_NV_generate_mipmap_sRGB 1
#endif /* GL_NV_generate_mipmap_sRGB */

#ifndef GL_NV_geometry_shader_passthrough
#define GL_NV_geometry_shader_passthrough 1
#endif /* GL_NV_geometry_shader_passthrough */

#ifndef GL_NV_image_formats
#define GL_NV_image_formats 1
#endif /* GL_NV_image_formats */

#ifndef GL_NV_instanced_arrays
#define GL_NV_instanced_arrays 1
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV 0x88FE
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBDIVISORNVPROC) (GLuint index_, GLuint divisor_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glVertexAttribDivisorNV (GLuint index_, GLuint divisor_);
#endif
#endif /* GL_NV_instanced_arrays */

#ifndef GL_NV_internalformat_sample_query
#define GL_NV_internalformat_sample_query 1
#define GL_TEXTURE_2D_MULTISAMPLE         0x9100
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY   0x9102
#define GL_MULTISAMPLES_NV                0x9371
#define GL_SUPERSAMPLE_SCALE_X_NV         0x9372
#define GL_SUPERSAMPLE_SCALE_Y_NV         0x9373
#define GL_CONFORMANT_NV                  0x9374
typedef void (GL_APIENTRYP PFNGLGETINTERNALFORMATSAMPLEIVNVPROC) (GLenum target_, GLenum internalformat_, GLsizei samples_, GLenum pname_, GLsizei bufSize_, GLint *params_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glGetInternalformatSampleivNV (GLenum target_, GLenum internalformat_, GLsizei samples_, GLenum pname_, GLsizei bufSize_, GLint *params_);
#endif
#endif /* GL_NV_internalformat_sample_query */

#ifndef GL_NV_non_square_matrices
#define GL_NV_non_square_matrices 1
#define GL_FLOAT_MAT2x3_NV                0x8B65
#define GL_FLOAT_MAT2x4_NV                0x8B66
#define GL_FLOAT_MAT3x2_NV                0x8B67
#define GL_FLOAT_MAT3x4_NV                0x8B68
#define GL_FLOAT_MAT4x2_NV                0x8B69
#define GL_FLOAT_MAT4x3_NV                0x8B6A
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX2X3FVNVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX3X2FVNVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX2X4FVNVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX4X2FVNVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX3X4FVNVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX4X3FVNVPROC) (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glUniformMatrix2x3fvNV (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glUniformMatrix3x2fvNV (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glUniformMatrix2x4fvNV (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glUniformMatrix4x2fvNV (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glUniformMatrix3x4fvNV (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glUniformMatrix4x3fvNV (GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat *value_);
#endif
#endif /* GL_NV_non_square_matrices */

#ifndef GL_NV_path_rendering
#define GL_NV_path_rendering 1
#define GL_PATH_FORMAT_SVG_NV             0x9070
#define GL_PATH_FORMAT_PS_NV              0x9071
#define GL_STANDARD_FONT_NAME_NV          0x9072
#define GL_SYSTEM_FONT_NAME_NV            0x9073
#define GL_FILE_NAME_NV                   0x9074
#define GL_PATH_STROKE_WIDTH_NV           0x9075
#define GL_PATH_END_CAPS_NV               0x9076
#define GL_PATH_INITIAL_END_CAP_NV        0x9077
#define GL_PATH_TERMINAL_END_CAP_NV       0x9078
#define GL_PATH_JOIN_STYLE_NV             0x9079
#define GL_PATH_MITER_LIMIT_NV            0x907A
#define GL_PATH_DASH_CAPS_NV              0x907B
#define GL_PATH_INITIAL_DASH_CAP_NV       0x907C
#define GL_PATH_TERMINAL_DASH_CAP_NV      0x907D
#define GL_PATH_DASH_OFFSET_NV            0x907E
#define GL_PATH_CLIENT_LENGTH_NV          0x907F
#define GL_PATH_FILL_MODE_NV              0x9080
#define GL_PATH_FILL_MASK_NV              0x9081
#define GL_PATH_FILL_COVER_MODE_NV        0x9082
#define GL_PATH_STROKE_COVER_MODE_NV      0x9083
#define GL_PATH_STROKE_MASK_NV            0x9084
#define GL_COUNT_UP_NV                    0x9088
#define GL_COUNT_DOWN_NV                  0x9089
#define GL_PATH_OBJECT_BOUNDING_BOX_NV    0x908A
#define GL_CONVEX_HULL_NV                 0x908B
#define GL_BOUNDING_BOX_NV                0x908D
#define GL_TRANSLATE_X_NV                 0x908E
#define GL_TRANSLATE_Y_NV                 0x908F
#define GL_TRANSLATE_2D_NV                0x9090
#define GL_TRANSLATE_3D_NV                0x9091
#define GL_AFFINE_2D_NV                   0x9092
#define GL_AFFINE_3D_NV                   0x9094
#define GL_TRANSPOSE_AFFINE_2D_NV         0x9096
#define GL_TRANSPOSE_AFFINE_3D_NV         0x9098
#define GL_UTF8_NV                        0x909A
#define GL_UTF16_NV                       0x909B
#define GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV 0x909C
#define GL_PATH_COMMAND_COUNT_NV          0x909D
#define GL_PATH_COORD_COUNT_NV            0x909E
#define GL_PATH_DASH_ARRAY_COUNT_NV       0x909F
#define GL_PATH_COMPUTED_LENGTH_NV        0x90A0
#define GL_PATH_FILL_BOUNDING_BOX_NV      0x90A1
#define GL_PATH_STROKE_BOUNDING_BOX_NV    0x90A2
#define GL_SQUARE_NV                      0x90A3
#define GL_ROUND_NV                       0x90A4
#define GL_TRIANGULAR_NV                  0x90A5
#define GL_BEVEL_NV                       0x90A6
#define GL_MITER_REVERT_NV                0x90A7
#define GL_MITER_TRUNCATE_NV              0x90A8
#define GL_SKIP_MISSING_GLYPH_NV          0x90A9
#define GL_USE_MISSING_GLYPH_NV           0x90AA
#define GL_PATH_ERROR_POSITION_NV         0x90AB
#define GL_ACCUM_ADJACENT_PAIRS_NV        0x90AD
#define GL_ADJACENT_PAIRS_NV              0x90AE
#define GL_FIRST_TO_REST_NV               0x90AF
#define GL_PATH_GEN_MODE_NV               0x90B0
#define GL_PATH_GEN_COEFF_NV              0x90B1
#define GL_PATH_GEN_COMPONENTS_NV         0x90B3
#define GL_PATH_STENCIL_FUNC_NV           0x90B7
#define GL_PATH_STENCIL_REF_NV            0x90B8
#define GL_PATH_STENCIL_VALUE_MASK_NV     0x90B9
#define GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV 0x90BD
#define GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV 0x90BE
#define GL_PATH_COVER_DEPTH_FUNC_NV       0x90BF
#define GL_PATH_DASH_OFFSET_RESET_NV      0x90B4
#define GL_MOVE_TO_RESETS_NV              0x90B5
#define GL_MOVE_TO_CONTINUES_NV           0x90B6
#define GL_CLOSE_PATH_NV                  0x00
#define GL_MOVE_TO_NV                     0x02
#define GL_RELATIVE_MOVE_TO_NV            0x03
#define GL_LINE_TO_NV                     0x04
#define GL_RELATIVE_LINE_TO_NV            0x05
#define GL_HORIZONTAL_LINE_TO_NV          0x06
#define GL_RELATIVE_HORIZONTAL_LINE_TO_NV 0x07
#define GL_VERTICAL_LINE_TO_NV            0x08
#define GL_RELATIVE_VERTICAL_LINE_TO_NV   0x09
#define GL_QUADRATIC_CURVE_TO_NV          0x0A
#define GL_RELATIVE_QUADRATIC_CURVE_TO_NV 0x0B
#define GL_CUBIC_CURVE_TO_NV              0x0C
#define GL_RELATIVE_CUBIC_CURVE_TO_NV     0x0D
#define GL_SMOOTH_QUADRATIC_CURVE_TO_NV   0x0E
#define GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV 0x0F
#define GL_SMOOTH_CUBIC_CURVE_TO_NV       0x10
#define GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV 0x11
#define GL_SMALL_CCW_ARC_TO_NV            0x12
#define GL_RELATIVE_SMALL_CCW_ARC_TO_NV   0x13
#define GL_SMALL_CW_ARC_TO_NV             0x14
#define GL_RELATIVE_SMALL_CW_ARC_TO_NV    0x15
#define GL_LARGE_CCW_ARC_TO_NV            0x16
#define GL_RELATIVE_LARGE_CCW_ARC_TO_NV   0x17
#define GL_LARGE_CW_ARC_TO_NV             0x18
#define GL_RELATIVE_LARGE_CW_ARC_TO_NV    0x19
#define GL_RESTART_PATH_NV                0xF0
#define GL_DUP_FIRST_CUBIC_CURVE_TO_NV    0xF2
#define GL_DUP_LAST_CUBIC_CURVE_TO_NV     0xF4
#define GL_RECT_NV                        0xF6
#define GL_CIRCULAR_CCW_ARC_TO_NV         0xF8
#define GL_CIRCULAR_CW_ARC_TO_NV          0xFA
#define GL_CIRCULAR_TANGENT_ARC_TO_NV     0xFC
#define GL_ARC_TO_NV                      0xFE
#define GL_RELATIVE_ARC_TO_NV             0xFF
#define GL_BOLD_BIT_NV                    0x01
#define GL_ITALIC_BIT_NV                  0x02
#define GL_GLYPH_WIDTH_BIT_NV             0x01
#define GL_GLYPH_HEIGHT_BIT_NV            0x02
#define GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV 0x04
#define GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV 0x08
#define GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV 0x10
#define GL_GLYPH_VERTICAL_BEARING_X_BIT_NV 0x20
#define GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV 0x40
#define GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV 0x80
#define GL_GLYPH_HAS_KERNING_BIT_NV       0x100
#define GL_FONT_X_MIN_BOUNDS_BIT_NV       0x00010000
#define GL_FONT_Y_MIN_BOUNDS_BIT_NV       0x00020000
#define GL_FONT_X_MAX_BOUNDS_BIT_NV       0x00040000
#define GL_FONT_Y_MAX_BOUNDS_BIT_NV       0x00080000
#define GL_FONT_UNITS_PER_EM_BIT_NV       0x00100000
#define GL_FONT_ASCENDER_BIT_NV           0x00200000
#define GL_FONT_DESCENDER_BIT_NV          0x00400000
#define GL_FONT_HEIGHT_BIT_NV             0x00800000
#define GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV  0x01000000
#define GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV 0x02000000
#define GL_FONT_UNDERLINE_POSITION_BIT_NV 0x04000000
#define GL_FONT_UNDERLINE_THICKNESS_BIT_NV 0x08000000
#define GL_FONT_HAS_KERNING_BIT_NV        0x10000000
#define GL_ROUNDED_RECT_NV                0xE8
#define GL_RELATIVE_ROUNDED_RECT_NV       0xE9
#define GL_ROUNDED_RECT2_NV               0xEA
#define GL_RELATIVE_ROUNDED_RECT2_NV      0xEB
#define GL_ROUNDED_RECT4_NV               0xEC
#define GL_RELATIVE_ROUNDED_RECT4_NV      0xED
#define GL_ROUNDED_RECT8_NV               0xEE
#define GL_RELATIVE_ROUNDED_RECT8_NV      0xEF
#define GL_RELATIVE_RECT_NV               0xF7
#define GL_FONT_GLYPHS_AVAILABLE_NV       0x9368
#define GL_FONT_TARGET_UNAVAILABLE_NV     0x9369
#define GL_FONT_UNAVAILABLE_NV            0x936A
#define GL_FONT_UNINTELLIGIBLE_NV         0x936B
#define GL_CONIC_CURVE_TO_NV              0x1A
#define GL_RELATIVE_CONIC_CURVE_TO_NV     0x1B
#define GL_FONT_NUM_GLYPH_INDICES_BIT_NV  0x20000000
#define GL_STANDARD_FONT_FORMAT_NV        0x936C
#define GL_PATH_PROJECTION_NV             0x1701
#define GL_PATH_MODELVIEW_NV              0x1700
#define GL_PATH_MODELVIEW_STACK_DEPTH_NV  0x0BA3
#define GL_PATH_MODELVIEW_MATRIX_NV       0x0BA6
#define GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV 0x0D36
#define GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV 0x84E3
#define GL_PATH_PROJECTION_STACK_DEPTH_NV 0x0BA4
#define GL_PATH_PROJECTION_MATRIX_NV      0x0BA7
#define GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV 0x0D38
#define GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV 0x84E4
#define GL_FRAGMENT_INPUT_NV              0x936D
typedef GLuint (GL_APIENTRYP PFNGLGENPATHSNVPROC) (GLsizei range_);
typedef void (GL_APIENTRYP PFNGLDELETEPATHSNVPROC) (GLuint path_, GLsizei range_);
typedef GLboolean (GL_APIENTRYP PFNGLISPATHNVPROC) (GLuint path_);
typedef void (GL_APIENTRYP PFNGLPATHCOMMANDSNVPROC) (GLuint path_, GLsizei numCommands_, const GLubyte *commands_, GLsizei numCoords_, GLenum coordType_, const void *coords_);
typedef void (GL_APIENTRYP PFNGLPATHCOORDSNVPROC) (GLuint path_, GLsizei numCoords_, GLenum coordType_, const void *coords_);
typedef void (GL_APIENTRYP PFNGLPATHSUBCOMMANDSNVPROC) (GLuint path_, GLsizei commandStart_, GLsizei commandsToDelete_, GLsizei numCommands_, const GLubyte *commands_, GLsizei numCoords_, GLenum coordType_, const void *coords_);
typedef void (GL_APIENTRYP PFNGLPATHSUBCOORDSNVPROC) (GLuint path_, GLsizei coordStart_, GLsizei numCoords_, GLenum coordType_, const void *coords_);
typedef void (GL_APIENTRYP PFNGLPATHSTRINGNVPROC) (GLuint path_, GLenum format_, GLsizei length_, const void *pathString_);
typedef void (GL_APIENTRYP PFNGLPATHGLYPHSNVPROC) (GLuint firstPathName_, GLenum fontTarget_, const void *fontName_, GLbitfield fontStyle_, GLsizei numGlyphs_, GLenum type_, const void *charcodes_, GLenum handleMissingGlyphs_, GLuint pathParameterTemplate_, GLfloat emScale_);
typedef void (GL_APIENTRYP PFNGLPATHGLYPHRANGENVPROC) (GLuint firstPathName_, GLenum fontTarget_, const void *fontName_, GLbitfield fontStyle_, GLuint firstGlyph_, GLsizei numGlyphs_, GLenum handleMissingGlyphs_, GLuint pathParameterTemplate_, GLfloat emScale_);
typedef void (GL_APIENTRYP PFNGLWEIGHTPATHSNVPROC) (GLuint resultPath_, GLsizei numPaths_, const GLuint *paths_, const GLfloat *weights_);
typedef void (GL_APIENTRYP PFNGLCOPYPATHNVPROC) (GLuint resultPath_, GLuint srcPath_);
typedef void (GL_APIENTRYP PFNGLINTERPOLATEPATHSNVPROC) (GLuint resultPath_, GLuint pathA_, GLuint pathB_, GLfloat weight_);
typedef void (GL_APIENTRYP PFNGLTRANSFORMPATHNVPROC) (GLuint resultPath_, GLuint srcPath_, GLenum transformType_, const GLfloat *transformValues_);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERIVNVPROC) (GLuint path_, GLenum pname_, const GLint *value_);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERINVPROC) (GLuint path_, GLenum pname_, GLint value_);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERFVNVPROC) (GLuint path_, GLenum pname_, const GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERFNVPROC) (GLuint path_, GLenum pname_, GLfloat value_);
typedef void (GL_APIENTRYP PFNGLPATHDASHARRAYNVPROC) (GLuint path_, GLsizei dashCount_, const GLfloat *dashArray_);
typedef void (GL_APIENTRYP PFNGLPATHSTENCILFUNCNVPROC) (GLenum func_, GLint ref_, GLuint mask_);
typedef void (GL_APIENTRYP PFNGLPATHSTENCILDEPTHOFFSETNVPROC) (GLfloat factor_, GLfloat units_);
typedef void (GL_APIENTRYP PFNGLSTENCILFILLPATHNVPROC) (GLuint path_, GLenum fillMode_, GLuint mask_);
typedef void (GL_APIENTRYP PFNGLSTENCILSTROKEPATHNVPROC) (GLuint path_, GLint reference_, GLuint mask_);
typedef void (GL_APIENTRYP PFNGLSTENCILFILLPATHINSTANCEDNVPROC) (GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLenum fillMode_, GLuint mask_, GLenum transformType_, const GLfloat *transformValues_);
typedef void (GL_APIENTRYP PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC) (GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLint reference_, GLuint mask_, GLenum transformType_, const GLfloat *transformValues_);
typedef void (GL_APIENTRYP PFNGLPATHCOVERDEPTHFUNCNVPROC) (GLenum func_);
typedef void (GL_APIENTRYP PFNGLCOVERFILLPATHNVPROC) (GLuint path_, GLenum coverMode_);
typedef void (GL_APIENTRYP PFNGLCOVERSTROKEPATHNVPROC) (GLuint path_, GLenum coverMode_);
typedef void (GL_APIENTRYP PFNGLCOVERFILLPATHINSTANCEDNVPROC) (GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLenum coverMode_, GLenum transformType_, const GLfloat *transformValues_);
typedef void (GL_APIENTRYP PFNGLCOVERSTROKEPATHINSTANCEDNVPROC) (GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLenum coverMode_, GLenum transformType_, const GLfloat *transformValues_);
typedef void (GL_APIENTRYP PFNGLGETPATHPARAMETERIVNVPROC) (GLuint path_, GLenum pname_, GLint *value_);
typedef void (GL_APIENTRYP PFNGLGETPATHPARAMETERFVNVPROC) (GLuint path_, GLenum pname_, GLfloat *value_);
typedef void (GL_APIENTRYP PFNGLGETPATHCOMMANDSNVPROC) (GLuint path_, GLubyte *commands_);
typedef void (GL_APIENTRYP PFNGLGETPATHCOORDSNVPROC) (GLuint path_, GLfloat *coords_);
typedef void (GL_APIENTRYP PFNGLGETPATHDASHARRAYNVPROC) (GLuint path_, GLfloat *dashArray_);
typedef void (GL_APIENTRYP PFNGLGETPATHMETRICSNVPROC) (GLbitfield metricQueryMask_, GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLsizei stride_, GLfloat *metrics_);
typedef void (GL_APIENTRYP PFNGLGETPATHMETRICRANGENVPROC) (GLbitfield metricQueryMask_, GLuint firstPathName_, GLsizei numPaths_, GLsizei stride_, GLfloat *metrics_);
typedef void (GL_APIENTRYP PFNGLGETPATHSPACINGNVPROC) (GLenum pathListMode_, GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLfloat advanceScale_, GLfloat kerningScale_, GLenum transformType_, GLfloat *returnedSpacing_);
typedef GLboolean (GL_APIENTRYP PFNGLISPOINTINFILLPATHNVPROC) (GLuint path_, GLuint mask_, GLfloat x_, GLfloat y_);
typedef GLboolean (GL_APIENTRYP PFNGLISPOINTINSTROKEPATHNVPROC) (GLuint path_, GLfloat x_, GLfloat y_);
typedef GLfloat (GL_APIENTRYP PFNGLGETPATHLENGTHNVPROC) (GLuint path_, GLsizei startSegment_, GLsizei numSegments_);
typedef GLboolean (GL_APIENTRYP PFNGLPOINTALONGPATHNVPROC) (GLuint path_, GLsizei startSegment_, GLsizei numSegments_, GLfloat distance_, GLfloat *x_, GLfloat *y_, GLfloat *tangentX_, GLfloat *tangentY_);
typedef void (GL_APIENTRYP PFNGLMATRIXLOAD3X2FNVPROC) (GLenum matrixMode_, const GLfloat *m_);
typedef void (GL_APIENTRYP PFNGLMATRIXLOAD3X3FNVPROC) (GLenum matrixMode_, const GLfloat *m_);
typedef void (GL_APIENTRYP PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC) (GLenum matrixMode_, const GLfloat *m_);
typedef void (GL_APIENTRYP PFNGLMATRIXMULT3X2FNVPROC) (GLenum matrixMode_, const GLfloat *m_);
typedef void (GL_APIENTRYP PFNGLMATRIXMULT3X3FNVPROC) (GLenum matrixMode_, const GLfloat *m_);
typedef void (GL_APIENTRYP PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC) (GLenum matrixMode_, const GLfloat *m_);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERFILLPATHNVPROC) (GLuint path_, GLenum fillMode_, GLuint mask_, GLenum coverMode_);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC) (GLuint path_, GLint reference_, GLuint mask_, GLenum coverMode_);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC) (GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLenum fillMode_, GLuint mask_, GLenum coverMode_, GLenum transformType_, const GLfloat *transformValues_);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC) (GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLint reference_, GLuint mask_, GLenum coverMode_, GLenum transformType_, const GLfloat *transformValues_);
typedef GLenum (GL_APIENTRYP PFNGLPATHGLYPHINDEXRANGENVPROC) (GLenum fontTarget_, const void *fontName_, GLbitfield fontStyle_, GLuint pathParameterTemplate_, GLfloat emScale_, GLuint baseAndCount[2]_);
typedef GLenum (GL_APIENTRYP PFNGLPATHGLYPHINDEXARRAYNVPROC) (GLuint firstPathName_, GLenum fontTarget_, const void *fontName_, GLbitfield fontStyle_, GLuint firstGlyphIndex_, GLsizei numGlyphs_, GLuint pathParameterTemplate_, GLfloat emScale_);
typedef GLenum (GL_APIENTRYP PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC) (GLuint firstPathName_, GLenum fontTarget_, GLsizeiptr fontSize_, const void *fontData_, GLsizei faceIndex_, GLuint firstGlyphIndex_, GLsizei numGlyphs_, GLuint pathParameterTemplate_, GLfloat emScale_);
typedef void (GL_APIENTRYP PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC) (GLuint program_, GLint location_, GLenum genMode_, GLint components_, const GLfloat *coeffs_);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMRESOURCEFVNVPROC) (GLuint program_, GLenum programInterface_, GLuint index_, GLsizei propCount_, const GLenum *props_, GLsizei bufSize_, GLsizei *length_, GLfloat *params_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL GLuint GL_APIENTRY glGenPathsNV (GLsizei range_);
GL_APICALL void GL_APIENTRY glDeletePathsNV (GLuint path_, GLsizei range_);
GL_APICALL GLboolean GL_APIENTRY glIsPathNV (GLuint path_);
GL_APICALL void GL_APIENTRY glPathCommandsNV (GLuint path_, GLsizei numCommands_, const GLubyte *commands_, GLsizei numCoords_, GLenum coordType_, const void *coords_);
GL_APICALL void GL_APIENTRY glPathCoordsNV (GLuint path_, GLsizei numCoords_, GLenum coordType_, const void *coords_);
GL_APICALL void GL_APIENTRY glPathSubCommandsNV (GLuint path_, GLsizei commandStart_, GLsizei commandsToDelete_, GLsizei numCommands_, const GLubyte *commands_, GLsizei numCoords_, GLenum coordType_, const void *coords_);
GL_APICALL void GL_APIENTRY glPathSubCoordsNV (GLuint path_, GLsizei coordStart_, GLsizei numCoords_, GLenum coordType_, const void *coords_);
GL_APICALL void GL_APIENTRY glPathStringNV (GLuint path_, GLenum format_, GLsizei length_, const void *pathString_);
GL_APICALL void GL_APIENTRY glPathGlyphsNV (GLuint firstPathName_, GLenum fontTarget_, const void *fontName_, GLbitfield fontStyle_, GLsizei numGlyphs_, GLenum type_, const void *charcodes_, GLenum handleMissingGlyphs_, GLuint pathParameterTemplate_, GLfloat emScale_);
GL_APICALL void GL_APIENTRY glPathGlyphRangeNV (GLuint firstPathName_, GLenum fontTarget_, const void *fontName_, GLbitfield fontStyle_, GLuint firstGlyph_, GLsizei numGlyphs_, GLenum handleMissingGlyphs_, GLuint pathParameterTemplate_, GLfloat emScale_);
GL_APICALL void GL_APIENTRY glWeightPathsNV (GLuint resultPath_, GLsizei numPaths_, const GLuint *paths_, const GLfloat *weights_);
GL_APICALL void GL_APIENTRY glCopyPathNV (GLuint resultPath_, GLuint srcPath_);
GL_APICALL void GL_APIENTRY glInterpolatePathsNV (GLuint resultPath_, GLuint pathA_, GLuint pathB_, GLfloat weight_);
GL_APICALL void GL_APIENTRY glTransformPathNV (GLuint resultPath_, GLuint srcPath_, GLenum transformType_, const GLfloat *transformValues_);
GL_APICALL void GL_APIENTRY glPathParameterivNV (GLuint path_, GLenum pname_, const GLint *value_);
GL_APICALL void GL_APIENTRY glPathParameteriNV (GLuint path_, GLenum pname_, GLint value_);
GL_APICALL void GL_APIENTRY glPathParameterfvNV (GLuint path_, GLenum pname_, const GLfloat *value_);
GL_APICALL void GL_APIENTRY glPathParameterfNV (GLuint path_, GLenum pname_, GLfloat value_);
GL_APICALL void GL_APIENTRY glPathDashArrayNV (GLuint path_, GLsizei dashCount_, const GLfloat *dashArray_);
GL_APICALL void GL_APIENTRY glPathStencilFuncNV (GLenum func_, GLint ref_, GLuint mask_);
GL_APICALL void GL_APIENTRY glPathStencilDepthOffsetNV (GLfloat factor_, GLfloat units_);
GL_APICALL void GL_APIENTRY glStencilFillPathNV (GLuint path_, GLenum fillMode_, GLuint mask_);
GL_APICALL void GL_APIENTRY glStencilStrokePathNV (GLuint path_, GLint reference_, GLuint mask_);
GL_APICALL void GL_APIENTRY glStencilFillPathInstancedNV (GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLenum fillMode_, GLuint mask_, GLenum transformType_, const GLfloat *transformValues_);
GL_APICALL void GL_APIENTRY glStencilStrokePathInstancedNV (GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLint reference_, GLuint mask_, GLenum transformType_, const GLfloat *transformValues_);
GL_APICALL void GL_APIENTRY glPathCoverDepthFuncNV (GLenum func_);
GL_APICALL void GL_APIENTRY glCoverFillPathNV (GLuint path_, GLenum coverMode_);
GL_APICALL void GL_APIENTRY glCoverStrokePathNV (GLuint path_, GLenum coverMode_);
GL_APICALL void GL_APIENTRY glCoverFillPathInstancedNV (GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLenum coverMode_, GLenum transformType_, const GLfloat *transformValues_);
GL_APICALL void GL_APIENTRY glCoverStrokePathInstancedNV (GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLenum coverMode_, GLenum transformType_, const GLfloat *transformValues_);
GL_APICALL void GL_APIENTRY glGetPathParameterivNV (GLuint path_, GLenum pname_, GLint *value_);
GL_APICALL void GL_APIENTRY glGetPathParameterfvNV (GLuint path_, GLenum pname_, GLfloat *value_);
GL_APICALL void GL_APIENTRY glGetPathCommandsNV (GLuint path_, GLubyte *commands_);
GL_APICALL void GL_APIENTRY glGetPathCoordsNV (GLuint path_, GLfloat *coords_);
GL_APICALL void GL_APIENTRY glGetPathDashArrayNV (GLuint path_, GLfloat *dashArray_);
GL_APICALL void GL_APIENTRY glGetPathMetricsNV (GLbitfield metricQueryMask_, GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLsizei stride_, GLfloat *metrics_);
GL_APICALL void GL_APIENTRY glGetPathMetricRangeNV (GLbitfield metricQueryMask_, GLuint firstPathName_, GLsizei numPaths_, GLsizei stride_, GLfloat *metrics_);
GL_APICALL void GL_APIENTRY glGetPathSpacingNV (GLenum pathListMode_, GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLfloat advanceScale_, GLfloat kerningScale_, GLenum transformType_, GLfloat *returnedSpacing_);
GL_APICALL GLboolean GL_APIENTRY glIsPointInFillPathNV (GLuint path_, GLuint mask_, GLfloat x_, GLfloat y_);
GL_APICALL GLboolean GL_APIENTRY glIsPointInStrokePathNV (GLuint path_, GLfloat x_, GLfloat y_);
GL_APICALL GLfloat GL_APIENTRY glGetPathLengthNV (GLuint path_, GLsizei startSegment_, GLsizei numSegments_);
GL_APICALL GLboolean GL_APIENTRY glPointAlongPathNV (GLuint path_, GLsizei startSegment_, GLsizei numSegments_, GLfloat distance_, GLfloat *x_, GLfloat *y_, GLfloat *tangentX_, GLfloat *tangentY_);
GL_APICALL void GL_APIENTRY glMatrixLoad3x2fNV (GLenum matrixMode_, const GLfloat *m_);
GL_APICALL void GL_APIENTRY glMatrixLoad3x3fNV (GLenum matrixMode_, const GLfloat *m_);
GL_APICALL void GL_APIENTRY glMatrixLoadTranspose3x3fNV (GLenum matrixMode_, const GLfloat *m_);
GL_APICALL void GL_APIENTRY glMatrixMult3x2fNV (GLenum matrixMode_, const GLfloat *m_);
GL_APICALL void GL_APIENTRY glMatrixMult3x3fNV (GLenum matrixMode_, const GLfloat *m_);
GL_APICALL void GL_APIENTRY glMatrixMultTranspose3x3fNV (GLenum matrixMode_, const GLfloat *m_);
GL_APICALL void GL_APIENTRY glStencilThenCoverFillPathNV (GLuint path_, GLenum fillMode_, GLuint mask_, GLenum coverMode_);
GL_APICALL void GL_APIENTRY glStencilThenCoverStrokePathNV (GLuint path_, GLint reference_, GLuint mask_, GLenum coverMode_);
GL_APICALL void GL_APIENTRY glStencilThenCoverFillPathInstancedNV (GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLenum fillMode_, GLuint mask_, GLenum coverMode_, GLenum transformType_, const GLfloat *transformValues_);
GL_APICALL void GL_APIENTRY glStencilThenCoverStrokePathInstancedNV (GLsizei numPaths_, GLenum pathNameType_, const void *paths_, GLuint pathBase_, GLint reference_, GLuint mask_, GLenum coverMode_, GLenum transformType_, const GLfloat *transformValues_);
GL_APICALL GLenum GL_APIENTRY glPathGlyphIndexRangeNV (GLenum fontTarget_, const void *fontName_, GLbitfield fontStyle_, GLuint pathParameterTemplate_, GLfloat emScale_, GLuint baseAndCount[2]_);
GL_APICALL GLenum GL_APIENTRY glPathGlyphIndexArrayNV (GLuint firstPathName_, GLenum fontTarget_, const void *fontName_, GLbitfield fontStyle_, GLuint firstGlyphIndex_, GLsizei numGlyphs_, GLuint pathParameterTemplate_, GLfloat emScale_);
GL_APICALL GLenum GL_APIENTRY glPathMemoryGlyphIndexArrayNV (GLuint firstPathName_, GLenum fontTarget_, GLsizeiptr fontSize_, const void *fontData_, GLsizei faceIndex_, GLuint firstGlyphIndex_, GLsizei numGlyphs_, GLuint pathParameterTemplate_, GLfloat emScale_);
GL_APICALL void GL_APIENTRY glProgramPathFragmentInputGenNV (GLuint program_, GLint location_, GLenum genMode_, GLint components_, const GLfloat *coeffs_);
GL_APICALL void GL_APIENTRY glGetProgramResourcefvNV (GLuint program_, GLenum programInterface_, GLuint index_, GLsizei propCount_, const GLenum *props_, GLsizei bufSize_, GLsizei *length_, GLfloat *params_);
#endif
#endif /* GL_NV_path_rendering */

#ifndef GL_NV_path_rendering_shared_edge
#define GL_NV_path_rendering_shared_edge 1
#define GL_SHARED_EDGE_NV                 0xC0
#endif /* GL_NV_path_rendering_shared_edge */

#ifndef GL_NV_polygon_mode
#define GL_NV_polygon_mode 1
#define GL_POLYGON_MODE_NV                0x0B40
#define GL_POLYGON_OFFSET_POINT_NV        0x2A01
#define GL_POLYGON_OFFSET_LINE_NV         0x2A02
#define GL_POINT_NV                       0x1B00
#define GL_LINE_NV                        0x1B01
#define GL_FILL_NV                        0x1B02
typedef void (GL_APIENTRYP PFNGLPOLYGONMODENVPROC) (GLenum face_, GLenum mode_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glPolygonModeNV (GLenum face_, GLenum mode_);
#endif
#endif /* GL_NV_polygon_mode */

#ifndef GL_NV_read_buffer
#define GL_NV_read_buffer 1
#define GL_READ_BUFFER_NV                 0x0C02
typedef void (GL_APIENTRYP PFNGLREADBUFFERNVPROC) (GLenum mode_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glReadBufferNV (GLenum mode_);
#endif
#endif /* GL_NV_read_buffer */

#ifndef GL_NV_read_buffer_front
#define GL_NV_read_buffer_front 1
#endif /* GL_NV_read_buffer_front */

#ifndef GL_NV_read_depth
#define GL_NV_read_depth 1
#endif /* GL_NV_read_depth */

#ifndef GL_NV_read_depth_stencil
#define GL_NV_read_depth_stencil 1
#endif /* GL_NV_read_depth_stencil */

#ifndef GL_NV_read_stencil
#define GL_NV_read_stencil 1
#endif /* GL_NV_read_stencil */

#ifndef GL_NV_sRGB_formats
#define GL_NV_sRGB_formats 1
#define GL_SLUMINANCE_NV                  0x8C46
#define GL_SLUMINANCE_ALPHA_NV            0x8C44
#define GL_SRGB8_NV                       0x8C41
#define GL_SLUMINANCE8_NV                 0x8C47
#define GL_SLUMINANCE8_ALPHA8_NV          0x8C45
#define GL_COMPRESSED_SRGB_S3TC_DXT1_NV   0x8C4C
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV 0x8C4D
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV 0x8C4E
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV 0x8C4F
#define GL_ETC1_SRGB8_NV                  0x88EE
#endif /* GL_NV_sRGB_formats */

#ifndef GL_NV_sample_locations
#define GL_NV_sample_locations 1
#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV 0x933D
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV 0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV 0x933F
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV 0x9340
#define GL_SAMPLE_LOCATION_NV             0x8E50
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_NV 0x9341
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV 0x9342
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV 0x9343
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) (GLenum target_, GLuint start_, GLsizei count_, const GLfloat *v_);
typedef void (GL_APIENTRYP PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) (GLuint framebuffer_, GLuint start_, GLsizei count_, const GLfloat *v_);
typedef void (GL_APIENTRYP PFNGLRESOLVEDEPTHVALUESNVPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glFramebufferSampleLocationsfvNV (GLenum target_, GLuint start_, GLsizei count_, const GLfloat *v_);
GL_APICALL void GL_APIENTRY glNamedFramebufferSampleLocationsfvNV (GLuint framebuffer_, GLuint start_, GLsizei count_, const GLfloat *v_);
GL_APICALL void GL_APIENTRY glResolveDepthValuesNV (void);
#endif
#endif /* GL_NV_sample_locations */

#ifndef GL_NV_sample_mask_override_coverage
#define GL_NV_sample_mask_override_coverage 1
#endif /* GL_NV_sample_mask_override_coverage */

#ifndef GL_NV_shader_noperspective_interpolation
#define GL_NV_shader_noperspective_interpolation 1
#endif /* GL_NV_shader_noperspective_interpolation */

#ifndef GL_NV_shadow_samplers_array
#define GL_NV_shadow_samplers_array 1
#define GL_SAMPLER_2D_ARRAY_SHADOW_NV     0x8DC4
#endif /* GL_NV_shadow_samplers_array */

#ifndef GL_NV_shadow_samplers_cube
#define GL_NV_shadow_samplers_cube 1
#define GL_SAMPLER_CUBE_SHADOW_NV         0x8DC5
#endif /* GL_NV_shadow_samplers_cube */

#ifndef GL_NV_texture_border_clamp
#define GL_NV_texture_border_clamp 1
#define GL_TEXTURE_BORDER_COLOR_NV        0x1004
#define GL_CLAMP_TO_BORDER_NV             0x812D
#endif /* GL_NV_texture_border_clamp */

#ifndef GL_NV_texture_compression_s3tc_update
#define GL_NV_texture_compression_s3tc_update 1
#endif /* GL_NV_texture_compression_s3tc_update */

#ifndef GL_NV_texture_npot_2D_mipmap
#define GL_NV_texture_npot_2D_mipmap 1
#endif /* GL_NV_texture_npot_2D_mipmap */

#ifndef GL_NV_viewport_array
#define GL_NV_viewport_array 1
#define GL_MAX_VIEWPORTS_NV               0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS_NV      0x825C
#define GL_VIEWPORT_BOUNDS_RANGE_NV       0x825D
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX_NV 0x825F
typedef void (GL_APIENTRYP PFNGLVIEWPORTARRAYVNVPROC) (GLuint first_, GLsizei count_, const GLfloat *v_);
typedef void (GL_APIENTRYP PFNGLVIEWPORTINDEXEDFNVPROC) (GLuint index_, GLfloat x_, GLfloat y_, GLfloat w_, GLfloat h_);
typedef void (GL_APIENTRYP PFNGLVIEWPORTINDEXEDFVNVPROC) (GLuint index_, const GLfloat *v_);
typedef void (GL_APIENTRYP PFNGLSCISSORARRAYVNVPROC) (GLuint first_, GLsizei count_, const GLint *v_);
typedef void (GL_APIENTRYP PFNGLSCISSORINDEXEDNVPROC) (GLuint index_, GLint left_, GLint bottom_, GLsizei width_, GLsizei height_);
typedef void (GL_APIENTRYP PFNGLSCISSORINDEXEDVNVPROC) (GLuint index_, const GLint *v_);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEARRAYFVNVPROC) (GLuint first_, GLsizei count_, const GLfloat *v_);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEINDEXEDFNVPROC) (GLuint index_, GLfloat n_, GLfloat f_);
typedef void (GL_APIENTRYP PFNGLGETFLOATI_VNVPROC) (GLenum target_, GLuint index_, GLfloat *data_);
typedef void (GL_APIENTRYP PFNGLENABLEINVPROC) (GLenum target_, GLuint index_);
typedef void (GL_APIENTRYP PFNGLDISABLEINVPROC) (GLenum target_, GLuint index_);
typedef GLboolean (GL_APIENTRYP PFNGLISENABLEDINVPROC) (GLenum target_, GLuint index_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glViewportArrayvNV (GLuint first_, GLsizei count_, const GLfloat *v_);
GL_APICALL void GL_APIENTRY glViewportIndexedfNV (GLuint index_, GLfloat x_, GLfloat y_, GLfloat w_, GLfloat h_);
GL_APICALL void GL_APIENTRY glViewportIndexedfvNV (GLuint index_, const GLfloat *v_);
GL_APICALL void GL_APIENTRY glScissorArrayvNV (GLuint first_, GLsizei count_, const GLint *v_);
GL_APICALL void GL_APIENTRY glScissorIndexedNV (GLuint index_, GLint left_, GLint bottom_, GLsizei width_, GLsizei height_);
GL_APICALL void GL_APIENTRY glScissorIndexedvNV (GLuint index_, const GLint *v_);
GL_APICALL void GL_APIENTRY glDepthRangeArrayfvNV (GLuint first_, GLsizei count_, const GLfloat *v_);
GL_APICALL void GL_APIENTRY glDepthRangeIndexedfNV (GLuint index_, GLfloat n_, GLfloat f_);
GL_APICALL void GL_APIENTRY glGetFloati_vNV (GLenum target_, GLuint index_, GLfloat *data_);
GL_APICALL void GL_APIENTRY glEnableiNV (GLenum target_, GLuint index_);
GL_APICALL void GL_APIENTRY glDisableiNV (GLenum target_, GLuint index_);
GL_APICALL GLboolean GL_APIENTRY glIsEnablediNV (GLenum target_, GLuint index_);
#endif
#endif /* GL_NV_viewport_array */

#ifndef GL_NV_viewport_array2
#define GL_NV_viewport_array2 1
#endif /* GL_NV_viewport_array2 */

#ifndef GL_OVR_multiview
#define GL_OVR_multiview 1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR 0x9630
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR 0x9632
#define GL_MAX_VIEWS_OVR                  0x9631
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_, GLint baseViewIndex_, GLsizei numViews_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glFramebufferTextureMultiviewOVR (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_, GLint baseViewIndex_, GLsizei numViews_);
#endif
#endif /* GL_OVR_multiview */

#ifndef GL_OVR_multiview2
#define GL_OVR_multiview2 1
#endif /* GL_OVR_multiview2 */

#ifndef GL_OVR_multiview_multisampled_render_to_texture
#define GL_OVR_multiview_multisampled_render_to_texture 1
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC) (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_, GLsizei samples_, GLint baseViewIndex_, GLsizei numViews_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glFramebufferTextureMultisampleMultiviewOVR (GLenum target_, GLenum attachment_, GLuint texture_, GLint level_, GLsizei samples_, GLint baseViewIndex_, GLsizei numViews_);
#endif
#endif /* GL_OVR_multiview_multisampled_render_to_texture */

#ifndef GL_QCOM_alpha_test
#define GL_QCOM_alpha_test 1
#define GL_ALPHA_TEST_QCOM                0x0BC0
#define GL_ALPHA_TEST_FUNC_QCOM           0x0BC1
#define GL_ALPHA_TEST_REF_QCOM            0x0BC2
typedef void (GL_APIENTRYP PFNGLALPHAFUNCQCOMPROC) (GLenum func_, GLclampf ref_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glAlphaFuncQCOM (GLenum func_, GLclampf ref_);
#endif
#endif /* GL_QCOM_alpha_test */

#ifndef GL_QCOM_binning_control
#define GL_QCOM_binning_control 1
#define GL_BINNING_CONTROL_HINT_QCOM      0x8FB0
#define GL_CPU_OPTIMIZED_QCOM             0x8FB1
#define GL_GPU_OPTIMIZED_QCOM             0x8FB2
#define GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM 0x8FB3
#endif /* GL_QCOM_binning_control */

#ifndef GL_QCOM_driver_control
#define GL_QCOM_driver_control 1
typedef void (GL_APIENTRYP PFNGLGETDRIVERCONTROLSQCOMPROC) (GLint *num_, GLsizei size_, GLuint *driverControls_);
typedef void (GL_APIENTRYP PFNGLGETDRIVERCONTROLSTRINGQCOMPROC) (GLuint driverControl_, GLsizei bufSize_, GLsizei *length_, GLchar *driverControlString_);
typedef void (GL_APIENTRYP PFNGLENABLEDRIVERCONTROLQCOMPROC) (GLuint driverControl_);
typedef void (GL_APIENTRYP PFNGLDISABLEDRIVERCONTROLQCOMPROC) (GLuint driverControl_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glGetDriverControlsQCOM (GLint *num_, GLsizei size_, GLuint *driverControls_);
GL_APICALL void GL_APIENTRY glGetDriverControlStringQCOM (GLuint driverControl_, GLsizei bufSize_, GLsizei *length_, GLchar *driverControlString_);
GL_APICALL void GL_APIENTRY glEnableDriverControlQCOM (GLuint driverControl_);
GL_APICALL void GL_APIENTRY glDisableDriverControlQCOM (GLuint driverControl_);
#endif
#endif /* GL_QCOM_driver_control */

#ifndef GL_QCOM_extended_get
#define GL_QCOM_extended_get 1
#define GL_TEXTURE_WIDTH_QCOM             0x8BD2
#define GL_TEXTURE_HEIGHT_QCOM            0x8BD3
#define GL_TEXTURE_DEPTH_QCOM             0x8BD4
#define GL_TEXTURE_INTERNAL_FORMAT_QCOM   0x8BD5
#define GL_TEXTURE_FORMAT_QCOM            0x8BD6
#define GL_TEXTURE_TYPE_QCOM              0x8BD7
#define GL_TEXTURE_IMAGE_VALID_QCOM       0x8BD8
#define GL_TEXTURE_NUM_LEVELS_QCOM        0x8BD9
#define GL_TEXTURE_TARGET_QCOM            0x8BDA
#define GL_TEXTURE_OBJECT_VALID_QCOM      0x8BDB
#define GL_STATE_RESTORE                  0x8BDC
typedef void (GL_APIENTRYP PFNGLEXTGETTEXTURESQCOMPROC) (GLuint *textures_, GLint maxTextures_, GLint *numTextures_);
typedef void (GL_APIENTRYP PFNGLEXTGETBUFFERSQCOMPROC) (GLuint *buffers_, GLint maxBuffers_, GLint *numBuffers_);
typedef void (GL_APIENTRYP PFNGLEXTGETRENDERBUFFERSQCOMPROC) (GLuint *renderbuffers_, GLint maxRenderbuffers_, GLint *numRenderbuffers_);
typedef void (GL_APIENTRYP PFNGLEXTGETFRAMEBUFFERSQCOMPROC) (GLuint *framebuffers_, GLint maxFramebuffers_, GLint *numFramebuffers_);
typedef void (GL_APIENTRYP PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC) (GLuint texture_, GLenum face_, GLint level_, GLenum pname_, GLint *params_);
typedef void (GL_APIENTRYP PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC) (GLenum target_, GLenum pname_, GLint param_);
typedef void (GL_APIENTRYP PFNGLEXTGETTEXSUBIMAGEQCOMPROC) (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, void *texels_);
typedef void (GL_APIENTRYP PFNGLEXTGETBUFFERPOINTERVQCOMPROC) (GLenum target_, void **params_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glExtGetTexturesQCOM (GLuint *textures_, GLint maxTextures_, GLint *numTextures_);
GL_APICALL void GL_APIENTRY glExtGetBuffersQCOM (GLuint *buffers_, GLint maxBuffers_, GLint *numBuffers_);
GL_APICALL void GL_APIENTRY glExtGetRenderbuffersQCOM (GLuint *renderbuffers_, GLint maxRenderbuffers_, GLint *numRenderbuffers_);
GL_APICALL void GL_APIENTRY glExtGetFramebuffersQCOM (GLuint *framebuffers_, GLint maxFramebuffers_, GLint *numFramebuffers_);
GL_APICALL void GL_APIENTRY glExtGetTexLevelParameterivQCOM (GLuint texture_, GLenum face_, GLint level_, GLenum pname_, GLint *params_);
GL_APICALL void GL_APIENTRY glExtTexObjectStateOverrideiQCOM (GLenum target_, GLenum pname_, GLint param_);
GL_APICALL void GL_APIENTRY glExtGetTexSubImageQCOM (GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, void *texels_);
GL_APICALL void GL_APIENTRY glExtGetBufferPointervQCOM (GLenum target_, void **params_);
#endif
#endif /* GL_QCOM_extended_get */

#ifndef GL_QCOM_extended_get2
#define GL_QCOM_extended_get2 1
typedef void (GL_APIENTRYP PFNGLEXTGETSHADERSQCOMPROC) (GLuint *shaders_, GLint maxShaders_, GLint *numShaders_);
typedef void (GL_APIENTRYP PFNGLEXTGETPROGRAMSQCOMPROC) (GLuint *programs_, GLint maxPrograms_, GLint *numPrograms_);
typedef GLboolean (GL_APIENTRYP PFNGLEXTISPROGRAMBINARYQCOMPROC) (GLuint program_);
typedef void (GL_APIENTRYP PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC) (GLuint program_, GLenum shadertype_, GLchar *source_, GLint *length_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glExtGetShadersQCOM (GLuint *shaders_, GLint maxShaders_, GLint *numShaders_);
GL_APICALL void GL_APIENTRY glExtGetProgramsQCOM (GLuint *programs_, GLint maxPrograms_, GLint *numPrograms_);
GL_APICALL GLboolean GL_APIENTRY glExtIsProgramBinaryQCOM (GLuint program_);
GL_APICALL void GL_APIENTRY glExtGetProgramBinarySourceQCOM (GLuint program_, GLenum shadertype_, GLchar *source_, GLint *length_);
#endif
#endif /* GL_QCOM_extended_get2 */

#ifndef GL_QCOM_perfmon_global_mode
#define GL_QCOM_perfmon_global_mode 1
#define GL_PERFMON_GLOBAL_MODE_QCOM       0x8FA0
#endif /* GL_QCOM_perfmon_global_mode */

#ifndef GL_QCOM_tiled_rendering
#define GL_QCOM_tiled_rendering 1
#define GL_COLOR_BUFFER_BIT0_QCOM         0x00000001
#define GL_COLOR_BUFFER_BIT1_QCOM         0x00000002
#define GL_COLOR_BUFFER_BIT2_QCOM         0x00000004
#define GL_COLOR_BUFFER_BIT3_QCOM         0x00000008
#define GL_COLOR_BUFFER_BIT4_QCOM         0x00000010
#define GL_COLOR_BUFFER_BIT5_QCOM         0x00000020
#define GL_COLOR_BUFFER_BIT6_QCOM         0x00000040
#define GL_COLOR_BUFFER_BIT7_QCOM         0x00000080
#define GL_DEPTH_BUFFER_BIT0_QCOM         0x00000100
#define GL_DEPTH_BUFFER_BIT1_QCOM         0x00000200
#define GL_DEPTH_BUFFER_BIT2_QCOM         0x00000400
#define GL_DEPTH_BUFFER_BIT3_QCOM         0x00000800
#define GL_DEPTH_BUFFER_BIT4_QCOM         0x00001000
#define GL_DEPTH_BUFFER_BIT5_QCOM         0x00002000
#define GL_DEPTH_BUFFER_BIT6_QCOM         0x00004000
#define GL_DEPTH_BUFFER_BIT7_QCOM         0x00008000
#define GL_STENCIL_BUFFER_BIT0_QCOM       0x00010000
#define GL_STENCIL_BUFFER_BIT1_QCOM       0x00020000
#define GL_STENCIL_BUFFER_BIT2_QCOM       0x00040000
#define GL_STENCIL_BUFFER_BIT3_QCOM       0x00080000
#define GL_STENCIL_BUFFER_BIT4_QCOM       0x00100000
#define GL_STENCIL_BUFFER_BIT5_QCOM       0x00200000
#define GL_STENCIL_BUFFER_BIT6_QCOM       0x00400000
#define GL_STENCIL_BUFFER_BIT7_QCOM       0x00800000
#define GL_MULTISAMPLE_BUFFER_BIT0_QCOM   0x01000000
#define GL_MULTISAMPLE_BUFFER_BIT1_QCOM   0x02000000
#define GL_MULTISAMPLE_BUFFER_BIT2_QCOM   0x04000000
#define GL_MULTISAMPLE_BUFFER_BIT3_QCOM   0x08000000
#define GL_MULTISAMPLE_BUFFER_BIT4_QCOM   0x10000000
#define GL_MULTISAMPLE_BUFFER_BIT5_QCOM   0x20000000
#define GL_MULTISAMPLE_BUFFER_BIT6_QCOM   0x40000000
#define GL_MULTISAMPLE_BUFFER_BIT7_QCOM   0x80000000
typedef void (GL_APIENTRYP PFNGLSTARTTILINGQCOMPROC) (GLuint x_, GLuint y_, GLuint width_, GLuint height_, GLbitfield preserveMask_);
typedef void (GL_APIENTRYP PFNGLENDTILINGQCOMPROC) (GLbitfield preserveMask_);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glStartTilingQCOM (GLuint x_, GLuint y_, GLuint width_, GLuint height_, GLbitfield preserveMask_);
GL_APICALL void GL_APIENTRY glEndTilingQCOM (GLbitfield preserveMask_);
#endif
#endif /* GL_QCOM_tiled_rendering */

#ifndef GL_QCOM_writeonly_rendering
#define GL_QCOM_writeonly_rendering 1
#define GL_WRITEONLY_RENDERING_QCOM       0x8823
#endif /* GL_QCOM_writeonly_rendering */

#ifndef GL_VIV_shader_binary
#define GL_VIV_shader_binary 1
#define GL_SHADER_BINARY_VIV              0x8FC4
#endif /* GL_VIV_shader_binary */

#ifdef __cplusplus
}
#endif

#endif
