/*
 * oap_test.h
 *
 *  Created on: Sep 11, 2017
 *      Author: kris
 *
 *  This file is part of OpenAirProject-ESP32.
 *
 *  OpenAirProject-ESP32 is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  OpenAirProject-ESP32 is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with OpenAirProject-ESP32.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef COMPONENTS_OAP_COMMON_TEST_INCLUDE_OAP_TEST_H_
#define COMPONENTS_OAP_COMMON_TEST_INCLUDE_OAP_TEST_H_

/**
 * init wifi, do not wait for IP
 */
void test_init_wifi();

/**
 * init wifi and wait for IP
 */
void test_require_wifi();

#endif /* COMPONENTS_OAP_COMMON_TEST_INCLUDE_OAP_TEST_H_ */
