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
 * @defgroup lagopus_pfkey_ipsec_i lagopus_pfkey_ipsec
 * @{ @ingroup lagopus_pfkey
 */

#ifndef LAGOPUS_PFKEY_IPSEC_H_
#define LAGOPUS_PFKEY_IPSEC_H_

#include <kernel/kernel_ipsec.h>

typedef struct lagopus_pfkey_ipsec_t lagopus_pfkey_ipsec_t;

/**
 * Implementation of the lagopus ipsec interface using PF_KEY.
 */
struct lagopus_pfkey_ipsec_t {

	/**
	 * Implements lagopus_ipsec_t interface
	 */
	kernel_ipsec_t interface;
};

/**
 * Create a PF_KEY lagopus ipsec interface instance.
 *
 * @return lagopus_pfkey_ipsec_t instance
 */
lagopus_pfkey_ipsec_t *lagopus_pfkey_ipsec_create();

#endif /** LAGOPUS_PFKEY_IPSEC_H_ @}*/
