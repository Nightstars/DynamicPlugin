#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(MYPLGUIN_LIB)
#  define MYPLGUIN_EXPORT Q_DECL_EXPORT
# else
#  define MYPLGUIN_EXPORT Q_DECL_IMPORT
# endif
#else
# define MYPLGUIN_EXPORT
#endif
