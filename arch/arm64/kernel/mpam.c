/* SPDX-License-Identifier: GPL-2.0 */
/* Copyright (C) 2021 Arm Ltd. */

#include <asm/mpam.h>

#include <linux/jump_label.h>
#include <linux/percpu.h>

DEFINE_STATIC_KEY_FALSE(arm64_mpam_has_hcr);
DEFINE_STATIC_KEY_FALSE(mpam_enabled);
DEFINE_PER_CPU(u64, arm64_mpam_default);
DEFINE_PER_CPU(u64, arm64_mpam_current);

