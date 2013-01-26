/* arch/arm/mach-msm/htc_bdaddress.c
 *
 * Code to extract Bluetooth bd_address information
 * from ATAG set up by the bootloader.
 *
 * Copyright (C) 2010 HTC Corporation
 * Author:Yomin Lin <yomin_lin@htc.com>
 * Author:Allen Ou <allen_ou@htc.com>
 *
 */

/* configuration tags specific to Bluetooth*/
#define ATAG_BLUETOOTH 0x43294329
#define MAX_BT_SIZE 0x8U

void bt_export_bd_address(void);
