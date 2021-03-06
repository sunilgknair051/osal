/*
 * 
 *    Copyright (c) 2020, United States government as represented by the
 *    administrator of the National Aeronautics Space Administration.
 *    All rights reserved. This software was created at NASA Goddard
 *    Space Flight Center pursuant to government contracts.
 * 
 *    This is governed by the NASA Open Source Agreement and may be used,
 *    distributed and modified only according to the terms of that agreement.
 * 
 */


/**
 * \file     osapi-idmap-impl-stubs.c
 * \ingroup  ut-stubs
 * \author   joseph.p.hickey@nasa.gov
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#include "utstubs.h"

#include "os-shared-idmap.h"

/*
 * Table locking and unlocking for global objects can be done at the shared code
 * layer but the actual implementation is OS-specific
 */
UT_DEFAULT_STUB(OS_Lock_Global_Impl,(uint32 idtype))
UT_DEFAULT_STUB(OS_Unlock_Global_Impl,(uint32 idtype))


