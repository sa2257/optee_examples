#ifndef __LOCT_SENSOR_TA_H__
#define __LOCT_SENSOR_TA_H__

/* UUID of the loct_sensor example trusted application */
/* ef4ab125-da43-4c41-8d77-4c9b5ef8129e */
#define TA_LOCT_SENSOR_UUID \
	{ 0xef4ab125, 0xda43, 0x4c41, { \
		0x8d, 0x77, 0x4c, 0x9b, 0x5e, 0xf8, 0x12, 0x9e } }

/*
 * in	params[0].value.a key size
 */
#define TA_LOCT_SENSOR_CMD_GEN_KEY		0

/*
 * in	params[1].memref  input
 * out	params[2].memref  output
 */
#define TA_LOCT_SENSOR_CMD_ENCRYPT		1

#endif /* __LOCT_SENSOR_TA_H */
