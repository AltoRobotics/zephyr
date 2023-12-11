/*
 * Copyright (c) 2023 Nordic Semiconductor ASA
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DRIVERS_SENSOR_QDEV_STM32_H_
#define ZEPHYR_INCLUDE_DRIVERS_SENSOR_QDEV_STM32_H_

#include <zephyr/drivers/sensor.h>

/* QDEC - STM32 specific channels */
enum sensor_channel_qdec_stm32 {
	SENSOR_CHAN_RAW_COUNT = SENSOR_CHAN_PRIV_START,
};
void qdec_stm32_set(const struct device *dev, uint32_t val);

#endif // ZEPHYR_INCLUDE_DRIVERS_SENSOR_QDEV_STM32_H_
