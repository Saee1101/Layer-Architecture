// #ifndef CONNECTIONS_GLOBAL_H
// #define CONNECTIONS_GLOBAL_H

// #include <QtCore/qglobal.h>

#if defined(CONNECTIONS_LIBRARY)
#define CONNECTIONS_EXPORT Q_DECL_EXPORT
#else
#define CONNECTIONS_EXPORT Q_DECL_IMPORT
#endif

// #endif // CONNECTIONS_GLOBAL_H
