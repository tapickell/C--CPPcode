#ifndef TESTING_GLOBAL_H
#define TESTING_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TESTING_LIBRARY)
#  define TESTINGSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TESTINGSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TESTING_GLOBAL_H
