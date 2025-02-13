/* SPDX-License-Identifier: MIT
 *
 * Copyright © 2024 Intel Corporation
 */

#ifndef GHE_H_
#define GHE_H_

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

enum pipe_id {
	GlobalHist_PIPE_A = 0,
	GlobalHist_PIPE_B = 1,
	GlobalHist_PIPE_C = 2,
	GlobalHist_PIPE_D = 3
};

struct globalhist_args {
	enum pipe_id pipeid;
	bool isprogramdiet;
	uint8_t histogrammode;
	uint32_t binscount;
	uint8_t ietmode;
	uint32_t ietlutentries;
	uint64_t *dietfactor;
	uint64_t *histogram;
	uint32_t resolution_x;
	uint32_t resolution_y;
};

void histogram_compute_generate_data_bin(struct globalhist_args *gheargs);
#endif
