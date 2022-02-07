/*
 * Copyright (C) 2000-2006 Erik Andersen <andersen@uclibc.org>
 *
 * Licensed under the LGPL v2.1, see the file COPYING.LIB in this tarball.
 */

#define GETXXKEY_FUNC		getpwnam
#define GETXXKEY_ENTTYPE	struct passwd
#define GETXXKEY_ADD_PARAMS	const char *name
#define GETXXKEY_ADD_VARIABLES	name
#define GETXXKEY_BUFLEN		__UCLIBC_PWD_BUFFER_SIZE__
#define GETXXKEY_FUNC_HIDDEN
#include "pwd_grp.c"