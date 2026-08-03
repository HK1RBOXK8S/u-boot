/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * (C) Copyright 2021 Rockchip Electronics Co., Ltd
 */

#ifndef __HK1RBOXK8S_RK3528_H
#define __HK1RBOXK8S_RK3528_H

#define ROCKCHIP_DEVICE_SETTINGS \
			"stdout=serial,vidconsole\0" \
			"stderr=serial,vidconsole\0"

#include <configs/rk3528_common.h>

#define CONFIG_BOOTCOMMAND \
   ";" \
   ""

#endif
