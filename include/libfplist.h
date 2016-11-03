/*
 * Library to support the plist formats
 *
 * Copyright (C) 2016, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modisoy
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

#if !defined( _LIBFPLIST_H )
#define _LIBFPLIST_H

#include <libfplist/definitions.h>
#include <libfplist/error.h>
#include <libfplist/extern.h>
#include <libfplist/features.h>
#include <libfplist/types.h>

#include <stdio.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* -------------------------------------------------------------------------
 * Support functions
 * ------------------------------------------------------------------------- */

/* Returns the library version
 */
LIBFPLIST_EXTERN \
const char *libfplist_get_version(
             void );

/* -------------------------------------------------------------------------
 * Error functions
 * ------------------------------------------------------------------------- */

/* Frees an error
 */
LIBFPLIST_EXTERN \
void libfplist_error_free(
      libfplist_error_t **error );

/* Prints a descriptive string of the error to the stream
 * Returns the amount of printed characters if successful or -1 on error
 */
LIBFPLIST_EXTERN \
int libfplist_error_fprint(
     libfplist_error_t *error,
     FILE *stream );

/* Prints a descriptive string of the error to the string
 * The end-of-string character is not included in the return value
 * Returns the amount of printed characters if successful or -1 on error
 */
LIBFPLIST_EXTERN \
int libfplist_error_sprint(
     libfplist_error_t *error,
     char *string,
     size_t size );

/* Prints a backtrace of the error to the stream
 * Returns the amount of printed characters if successful or -1 on error
 */
LIBFPLIST_EXTERN \
int libfplist_error_backtrace_fprint(
     libfplist_error_t *error,
     FILE *stream );

/* Prints a backtrace of the error to the string
 * The end-of-string character is not included in the return value
 * Returns the amount of printed characters if successful or -1 on error
 */
LIBFPLIST_EXTERN \
int libfplist_error_backtrace_sprint(
     libfplist_error_t *error,
     char *string,
     size_t size );

/* -------------------------------------------------------------------------
 * Key functions
 * ------------------------------------------------------------------------- */

/* Creates a key
 * Make sure the value key is referencing, is set to NULL
 * Returns 1 if successful or -1 on error
 */
LIBFPLIST_EXTERN \
int libfplist_key_initialize(
     libfplist_key_t **key,
     libfplist_error_t **error );

/* Frees an key
 * Returns 1 if successful or -1 on error
 */
LIBFPLIST_EXTERN \
int libfplist_key_free(
     libfplist_key_t **key,
     libfplist_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBFPLIST_H ) */
