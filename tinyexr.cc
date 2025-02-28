#if defined(_WIN32)
#ifndef NOMINMAX
#define NOMINMAX
#endif
#endif

#if TINYEXR_USE_MINIZ==1
// included by tinyexr.h
#elif TINYEXR_USE_NANOZLIB==1
// included by tinyexr.h
#elif TINYEXR_USE_STB_ZLIB==1
#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include <stb_image_write.h>
#elif TINYEXR_USE_ZLIBNG==1
#include <zlib-ng.h>
#else
#include <zlib.h>
#endif

#define TINYEXR_IMPLEMENTATION
#include "tinyexr.h"
