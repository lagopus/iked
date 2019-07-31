/*
 * Copyright (C) 2008 Tobias Brunner
 * Hochschule fuer Technik Rapperswil
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

/**
 * @defgroup lagopus_pfkey lagopus_pfkey
 * @ingroup cplugins
 *
 * @defgroup lagopus_pfkey_plugin lagopus_pfkey_plugin
 * @{ @ingroup lagopus_pfkey
 */

#ifndef LAGOPUS_PFKEY_PLUGIN_H_
#define LAGOPUS_PFKEY_PLUGIN_H_

#include <plugins/plugin.h>

typedef struct lagopus_pfkey_plugin_t lagopus_pfkey_plugin_t;

/**
 * PF_KEY lagopus interface plugin
 */
struct lagopus_pfkey_plugin_t {

	/**
	 * implements plugin interface
	 */
	plugin_t plugin;
};

#endif /** LAGOPUS_PFKEY_PLUGIN_H_ @}*/
