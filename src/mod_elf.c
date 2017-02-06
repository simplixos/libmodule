/***********************************************************************
 * SimplixOS Operating System
 *
 * File: src/bos/libmodule/src/mod_elf.c
 *
 * Description:
 *      Portable Module loader implementation data structs and
 *      constants.
 *
 * License:
 * SimplixOS Operating System - An experimental operating system.
 * Copyright (C) 2015-17 Aun-Ali Zaidi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 ***********************************************************************/

#include <bos/k/mods/mod_elf.h>

#include <stdint.h>

typedef unsigned int pid_t;

#pragma GCC diagnostic ignored "-Wunused-paramter"

int elf_loadModule(char *module_name, char *elf_image, uint32_t base, int mode, char *p, char *workdir, pid_t *parent)
{
	// TODO: Once Memory Manager and Scheduler are complete, add the ELF module handler
}
