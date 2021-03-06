#ifndef _SI2144_FIRMWARE_2_1_BUILD_1_H_
#define _SI2144_FIRMWARE_2_1_BUILD_1_H_

#define FIRMWARE_MAJOR        2
#define FIRMWARE_MINOR        1
#define BUILD_VERSION         1

#ifndef __FIRMWARE_STRUCT__
#define __FIRMWARE_STRUCT__
typedef struct firmware_struct {
	unsigned char firmware_len;
	unsigned char firmware_table[16];
} firmware_struct;
#endif /* __FIRMWARE_STRUCT__ */

firmware_struct Si2144_FW_2_1b1[] = {
{ 8 , { 0x05,0x11,0x9B,0x85,0x51,0xBB,0x0C,0xBF } },
{ 16 , { 0x0C,0x9D,0xE0,0x66,0x12,0x70,0xA5,0x0A,0x0C,0x2B,0x81,0x1E,0xDA,0x1A,0xD4,0x2D } },
{ 11 , { 0x4A,0xD3,0x5A,0x0C,0xF2,0xA6,0x71,0x34,0x1B,0x48,0x8D } },
{ 14 , { 0x4D,0xF8,0x63,0x73,0x5F,0xD7,0x0C,0xF0,0x7E,0x2F,0xC0,0xA4,0x65,0x71 } },
{ 16 , { 0x37,0x80,0x3C,0x4A,0x4B,0xA4,0xDB,0x75,0xD0,0x39,0x23,0x36,0xBE,0xEA,0xA2,0x26 } },
{ 16 , { 0x3F,0x3D,0xDD,0x4D,0x67,0x0E,0xF7,0x8F,0xF0,0xDF,0x4A,0x21,0xBD,0x96,0xA0,0x65 } },
{ 16 , { 0x3F,0x1C,0x05,0xC9,0x92,0x69,0xE0,0xAF,0xA2,0xE0,0xD9,0x0A,0x7D,0x16,0xF0,0x75 } },
{ 16 , { 0x3F,0x10,0x7F,0x29,0xDF,0x39,0xF4,0x59,0x8F,0xF1,0x76,0xE6,0x85,0x2E,0x1E,0x6F } },
{ 15 , { 0x42,0xCC,0xDD,0x0C,0xB8,0x97,0xD4,0x5F,0x24,0xAA,0x95,0x43,0x39,0xAE,0xB0 } },
{ 16 , { 0x08,0x4E,0xE9,0x12,0xCF,0xA2,0xED,0x45,0x07,0xA7,0xA4,0xC8,0xAD,0x22,0x11,0x1B } },
{ 16 , { 0x07,0x3D,0xCC,0x9F,0xCF,0x10,0x38,0x6E,0x07,0x82,0xB9,0x48,0xC5,0xC5,0xEE,0x93 } },
{ 8 , { 0x0C,0x59,0xFA,0xCB,0xD1,0x25,0x93,0x89 } }
};

#define FIRMWARE_LINES_2_1b1 (sizeof(Si2144_FW_2_1b1)/(sizeof(firmware_struct)))
#define RAM_SIG_2_1b1 0x96861247
#define RAM_CRC_2_1b1 0x50D5

#endif /* _SI2144_FIRMWARE_2_1_BUILD_1_H_ */
