#ifndef __SIGN_SENSOR_TA_H__
#define __SIGN_SENSOR_TA_H__

/* UUID of the sign_sensor example trusted application */
/* 305aa099-79a3-4641-9e5e-ccca0a8be00b */
#define TA_SIGN_SENSOR_UUID \
	{ 0x305aa099, 0x79a3, 0x4641, { \
		0x9e, 0x5e, 0xcc, 0xca, 0x0a, 0x8b, 0xe0, 0x0b } }

/*
 * in	params[0].value.a key size
 */
#define TA_SIGN_SENSOR_CMD_GEN_KEY		0

/*
 * in	params[1].memref  input
 * out	params[2].memref  output
 */
#define TA_SIGN_SENSOR_CMD_ENCRYPT		1

#endif /* __SIGN_SENSOR_TA_H */
