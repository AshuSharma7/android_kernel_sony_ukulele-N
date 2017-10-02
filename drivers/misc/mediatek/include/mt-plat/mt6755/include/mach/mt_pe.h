/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _CUST_PE_H_
#define _CUST_PE_H_

/* Pump Express support (fast charging) */
#define TA_START_BATTERY_SOC	1
#define TA_STOP_BATTERY_SOC	85
// <<< 2016/11/24-youchihwang. Battery. FP002219. IEEE 1725 (Battery Safety). Temperature.
#if 0
#define TA_AC_12V_INPUT_CURRENT CHARGE_CURRENT_3200_00_MA
#define TA_AC_9V_INPUT_CURRENT	CHARGE_CURRENT_3200_00_MA
#define TA_AC_7V_INPUT_CURRENT	CHARGE_CURRENT_3200_00_MA
#define TA_AC_CHARGING_CURRENT	CHARGE_CURRENT_3200_00_MA
#else
#define TA_AC_12V_INPUT_CURRENT CHARGE_CURRENT_1550_00_MA
#define TA_AC_9V_INPUT_CURRENT	CHARGE_CURRENT_1550_00_MA
#define TA_AC_7V_INPUT_CURRENT	CHARGE_CURRENT_1550_00_MA
#define TA_AC_CHARGING_CURRENT	CHARGE_CURRENT_1550_00_MA
#endif
// >>> 2016/11/24-youchihwang. Battery. FP002219. IEEE 1725 (Battery Safety). Temperature.
#define TA_9V_SUPPORT
// <<< 2017/04/28-youchihwang. Battery. Disable 12V support on mtk quick charging PEP mode.
#if 0
#define TA_12V_SUPPORT
#else
//#define TA_12V_SUPPORT
#endif
// >>> 2017/04/28-youchihwang. Battery. Disable 12V support on mtk quick charging PEP mode.

/* Ichg threshold for leaving PE+/PE+20 */
#define PEP20_ICHG_LEAVE_THRESHOLD 1000 /* mA */
#define PEP_ICHG_LEAVE_THRESHOLD 1000 /* mA */

/* For PE+20, VBUS V.S. VBAT table, according to BQ25896 */
// <<< 2017/04/25-youchihwang. Battery. Setting the charger voltage of the Quick Charging mode
#if 0
#define VBAT3400_VBUS CHR_VOLT_08_000000_V
#define VBAT3500_VBUS CHR_VOLT_08_500000_V
#define VBAT3600_VBUS CHR_VOLT_08_500000_V
#define VBAT3700_VBUS CHR_VOLT_09_000000_V
#define VBAT3800_VBUS CHR_VOLT_09_000000_V
#define VBAT3900_VBUS CHR_VOLT_09_000000_V
#define VBAT4000_VBUS CHR_VOLT_09_500000_V
#define VBAT4100_VBUS CHR_VOLT_09_500000_V
#define VBAT4200_VBUS CHR_VOLT_10_000000_V
#define VBAT4300_VBUS CHR_VOLT_10_000000_V
#else
#define VBAT3400_VBUS CHR_VOLT_08_000000_V
#define VBAT3500_VBUS CHR_VOLT_09_000000_V
#define VBAT3600_VBUS CHR_VOLT_09_000000_V
#define VBAT3700_VBUS CHR_VOLT_09_000000_V
#define VBAT3800_VBUS CHR_VOLT_09_000000_V
#define VBAT3900_VBUS CHR_VOLT_09_000000_V
#define VBAT4000_VBUS CHR_VOLT_09_000000_V
#define VBAT4100_VBUS CHR_VOLT_09_000000_V
#define VBAT4200_VBUS CHR_VOLT_09_000000_V
#define VBAT4300_VBUS CHR_VOLT_09_000000_V
#endif
// >>> 2017/04/25-youchihwang. Battery. Setting the charger voltage of the Quick Charging mode

#endif /* _CUST_PE_H_ */
