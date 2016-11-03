/*
 * Plist key functions
 *
 * Copyright (C) 2016, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFPLIST_KEY_H )
#define _LIBFPLIST_KEY_H

#include <common.h>
#include <types.h>

#include "libfplist_extern.h"
#include "libfplist_libcerror.h"
#include "libfplist_types.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libfplist_internal_key libfplist_internal_key_t;

struct libfplist_internal_key
{
	int dummy;
};

LIBFPLIST_EXTERN \
int libfplist_key_initialize(
     libfplist_key_t **key,
     libcerror_error_t **error );

LIBFPLIST_EXTERN \
int libfplist_key_free(
     libfplist_key_t **key,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBFPLIST_KEY_H ) */
