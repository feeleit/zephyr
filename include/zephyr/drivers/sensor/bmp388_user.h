/*
 * Copyright (c) 2024 Feele
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * User-facing header for BMP388/BMP390 sensor configuration.
 */

#ifndef ZEPHYR_INCLUDE_DRIVERS_SENSOR_BMP388_USER_H_
#define ZEPHYR_INCLUDE_DRIVERS_SENSOR_BMP388_USER_H_

#include <zephyr/drivers/sensor.h>

/* Custom sensor attribute for power mode control */
#define BMP388_ATTR_POWER_MODE (SENSOR_ATTR_PRIV_START + 1u)

/**
 * Power modes for BMP388/BMP390
 * Use with sensor_attr_set(dev, SENSOR_CHAN_ALL, BMP388_ATTR_POWER_MODE, &val)
 * where val.val1 is one of these enum values.
 */
enum bmp388_powermode {
	/** Sleep mode - sensor in lowest power state */
	BMP388_POWERMODE_SLEEP = 0,
	/** Forced mode - single measurement, then returns to sleep */
	BMP388_POWERMODE_FORCED = 1,
	/** Normal mode - continuous measurements at ODR rate */
	BMP388_POWERMODE_NORMAL = 3,
};

#endif /* ZEPHYR_INCLUDE_DRIVERS_SENSOR_BMP388_USER_H_ */
