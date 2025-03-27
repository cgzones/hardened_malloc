#pragma once

#if CONFIG_BLOCK_OPS_CHECK_SIZE && !defined(HAS_ARM_MTE)
# include "musl.h"
# define h_memcpy_internal musl_memcpy
# define h_memmove_internal musl_memmove
# define h_memset_internal musl_memset
#else
# define h_memcpy_internal memcpy
# define h_memmove_internal memmove
# define h_memset_internal memset
#endif
