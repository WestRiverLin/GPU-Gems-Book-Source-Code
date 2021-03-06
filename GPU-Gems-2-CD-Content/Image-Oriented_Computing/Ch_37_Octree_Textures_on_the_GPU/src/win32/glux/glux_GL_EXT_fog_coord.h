
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:34 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_EXT_fog_coord__
#define __GLUX_GL_EXT_fog_coord__

GLUX_NEW_PLUGIN(GL_EXT_fog_coord);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_FOG_COORDINATE_SOURCE_EXT
#  define GL_FOG_COORDINATE_SOURCE_EXT 0x8450
#endif
#ifndef GL_FOG_COORDINATE_EXT
#  define GL_FOG_COORDINATE_EXT 0x8451
#endif
#ifndef GL_FRAGMENT_DEPTH_EXT
#  define GL_FRAGMENT_DEPTH_EXT 0x8452
#endif
#ifndef GL_CURRENT_FOG_COORDINATE_EXT
#  define GL_CURRENT_FOG_COORDINATE_EXT 0x8453
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_TYPE_EXT
#  define GL_FOG_COORDINATE_ARRAY_TYPE_EXT 0x8454
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_STRIDE_EXT
#  define GL_FOG_COORDINATE_ARRAY_STRIDE_EXT 0x8455
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_POINTER_EXT
#  define GL_FOG_COORDINATE_ARRAY_POINTER_EXT 0x8456
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_EXT
#  define GL_FOG_COORDINATE_ARRAY_EXT 0x8457
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glFogCoordfEXT
typedef void (APIENTRYP PFNGLUXFOGCOORDFEXTPROC) (GLfloat coord);
#endif
#ifndef __GLUX__GLFCT_glFogCoordfvEXT
typedef void (APIENTRYP PFNGLUXFOGCOORDFVEXTPROC) (const GLfloat *coord);
#endif
#ifndef __GLUX__GLFCT_glFogCoorddEXT
typedef void (APIENTRYP PFNGLUXFOGCOORDDEXTPROC) (GLdouble coord);
#endif
#ifndef __GLUX__GLFCT_glFogCoorddvEXT
typedef void (APIENTRYP PFNGLUXFOGCOORDDVEXTPROC) (const GLdouble *coord);
#endif
#ifndef __GLUX__GLFCT_glFogCoordPointerEXT
typedef void (APIENTRYP PFNGLUXFOGCOORDPOINTEREXTPROC) (GLenum type, GLsizei stride, const GLvoid *pointer);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glFogCoordfEXT
extern PFNGLUXFOGCOORDFEXTPROC glFogCoordfEXT;
#endif
#ifndef __GLUX__GLFCT_glFogCoordfvEXT
extern PFNGLUXFOGCOORDFVEXTPROC glFogCoordfvEXT;
#endif
#ifndef __GLUX__GLFCT_glFogCoorddEXT
extern PFNGLUXFOGCOORDDEXTPROC glFogCoorddEXT;
#endif
#ifndef __GLUX__GLFCT_glFogCoorddvEXT
extern PFNGLUXFOGCOORDDVEXTPROC glFogCoorddvEXT;
#endif
#ifndef __GLUX__GLFCT_glFogCoordPointerEXT
extern PFNGLUXFOGCOORDPOINTEREXTPROC glFogCoordPointerEXT;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
