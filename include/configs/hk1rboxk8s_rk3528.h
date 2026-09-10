/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * (C) Copyright 2021 Rockchip Electronics Co., Ltd
 */

#ifndef __HK1RBOXK8S_RK3528_H
#define __HK1RBOXK8S_RK3528_H

#define ROCKCHIP_DEVICE_SETTINGS \
			"stdout=serial,vidconsole\0" \
			"stderr=serial,vidconsole\0" \
			HK1RBOXK8S_RK3528_SETTINGS

#include <configs/rk3528_common.h>

#define HK1RBOXK8S_RK3528_SETTINGS \
    "extraargs=earlycon=uart8250,mmio32,0xff9f0000 console=ttyS0,1500000n8 keep_bootcon loglevel=7\0" \
    "ipaddr=192.168.1.22\0" \
    "netmask=255.255.255.0\0" \
    "gatewayip=192.168.1.1\0" \
    "serverip=192.168.1.1\0"

#endif

