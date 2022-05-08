/*
 *  Copyright (C) 2010-2022 Fabio Cavallo (aka FHorse)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef MAPPER_BMC830425C_H_
#define MAPPER_BMC830425C_H_

#include "common.h"

void map_init_BMC830425C(void);
void extcl_cpu_wr_mem_BMC830425C(WORD address, BYTE value);
BYTE extcl_save_mapper_BMC830425C(BYTE mode, BYTE slot, FILE *fp);

#endif /* MAPPER_BMC830425C_H_ */