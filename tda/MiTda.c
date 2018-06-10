/*
 * miTda.c
 *
 *  Created on: Jun 10, 2018
 *      Author: dsanchez
 */

#include "MiTda.h"

#include <string.h>

MiTda* mitda_init(MiTda* this) {
	memset(this, 0x0, sizeof(MiTda));
	return this;
}
