
#ifndef UNITEXT_EXPORT_H
#define UNITEXT_EXPORT_H

#ifdef UNITEXT_STATIC_DEFINE
#  define UNITEXT_EXPORT
#  define UNITEXT_NO_EXPORT
#else
#  ifndef UNITEXT_EXPORT
#    ifdef UniText_EXPORTS
        /* We are building this library */
#      define UNITEXT_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define UNITEXT_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef UNITEXT_NO_EXPORT
#    define UNITEXT_NO_EXPORT 
#  endif
#endif

#ifndef UNITEXT_DEPRECATED
#  define UNITEXT_DEPRECATED __declspec(deprecated)
#endif

#ifndef UNITEXT_DEPRECATED_EXPORT
#  define UNITEXT_DEPRECATED_EXPORT UNITEXT_EXPORT UNITEXT_DEPRECATED
#endif

#ifndef UNITEXT_DEPRECATED_NO_EXPORT
#  define UNITEXT_DEPRECATED_NO_EXPORT UNITEXT_NO_EXPORT UNITEXT_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef UNITEXT_NO_DEPRECATED
#    define UNITEXT_NO_DEPRECATED
#  endif
#endif

#endif /* UNITEXT_EXPORT_H */
