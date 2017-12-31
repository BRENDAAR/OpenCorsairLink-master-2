/*
 * This file is part of OpenCorsairLink.
 * Copyright (C) 2017  Sean Nelson <audiohacked@gmail.com>

 * OpenCorsairLink is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * any later version.

 * OpenCorsairLink is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with OpenCorsairLink.  If not, see <http://www.gnu.org/licenses/>.
 */

/*! \file lowlevel/hid.h
 *  \brief Lowlevel Routines for USB HID based devices
 */
#ifndef _LOWLEVEL_HID_H
#define _LOWLEVEL_HID_H

int corsairlink_hid_init(struct libusb_device_handle *dev_handle,
			uint8_t endpoint);

int corsairlink_hid_deinit(struct libusb_device_handle *dev_handle,
			uint8_t endpoint);

int corsairlink_hid_write(struct libusb_device_handle *dev_handle,
 			uint8_t endpoint,
			uint8_t *data,
			int length);

int corsairlink_hid_read(struct libusb_device_handle *dev_handle,
			uint8_t endpoint,
			uint8_t *data,
			int length);

#endif
