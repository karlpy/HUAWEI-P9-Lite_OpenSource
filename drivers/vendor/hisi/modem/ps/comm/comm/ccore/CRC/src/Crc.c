



/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "Crc.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
    协议栈打印打点方式下的.C文件宏定义
*****************************************************************************/
#define     THIS_FILE_ID                PS_FILE_ID_CRC_C /*lint !e767*/



/*****************************************************************************
  2 全局变量定义
*****************************************************************************/
/*
    30-bit CRC, polynomial:
    g(x) = x**30 + x**29 + x**21 + x**20 + x**15 + x**13 + x**12 + x**11 + x**8 + x**7 + x**6 + x**2 + x + 1
*/
const VOS_UINT32 g_aucCRC30Table[256] = {
  0x00000000, 0x2030b9c7, 0x2051ca49, 0x0061738e, 0x20932d55, 0x00a39492, 0x00c2e71c, 0x20f25edb,
  0x2116e36d, 0x01265aaa, 0x01472924, 0x217790e3, 0x0185ce38, 0x21b577ff, 0x21d40471, 0x01e4bdb6,
  0x221d7f1d, 0x022dc6da, 0x024cb554, 0x227c0c93, 0x028e5248, 0x22beeb8f, 0x22df9801, 0x02ef21c6,
  0x030b9c70, 0x233b25b7, 0x235a5639, 0x036aeffe, 0x2398b125, 0x03a808e2, 0x03c97b6c, 0x23f9c2ab,
  0x240a47fd, 0x043afe3a, 0x045b8db4, 0x246b3473, 0x04996aa8, 0x24a9d36f, 0x24c8a0e1, 0x04f81926,
  0x051ca490, 0x252c1d57, 0x254d6ed9, 0x057dd71e, 0x258f89c5, 0x05bf3002, 0x05de438c, 0x25eefa4b,
  0x061738e0, 0x26278127, 0x2646f2a9, 0x06764b6e, 0x268415b5, 0x06b4ac72, 0x06d5dffc, 0x26e5663b,
  0x2701db8d, 0x0731624a, 0x075011c4, 0x2760a803, 0x0792f6d8, 0x27a24f1f, 0x27c33c91, 0x07f38556,
  0x2824363d, 0x08148ffa, 0x0875fc74, 0x284545b3, 0x08b71b68, 0x2887a2af, 0x28e6d121, 0x08d668e6,
  0x0932d550, 0x29026c97, 0x29631f19, 0x0953a6de, 0x29a1f805, 0x099141c2, 0x09f0324c, 0x29c08b8b,
  0x0a394920, 0x2a09f0e7, 0x2a688369, 0x0a583aae, 0x2aaa6475, 0x0a9addb2, 0x0afbae3c, 0x2acb17fb,
  0x2b2faa4d, 0x0b1f138a, 0x0b7e6004, 0x2b4ed9c3, 0x0bbc8718, 0x2b8c3edf, 0x2bed4d51, 0x0bddf496,
  0x0c2e71c0, 0x2c1ec807, 0x2c7fbb89, 0x0c4f024e, 0x2cbd5c95, 0x0c8de552, 0x0cec96dc, 0x2cdc2f1b,
  0x2d3892ad, 0x0d082b6a, 0x0d6958e4, 0x2d59e123, 0x0dabbff8, 0x2d9b063f, 0x2dfa75b1, 0x0dcacc76,
  0x2e330edd, 0x0e03b71a, 0x0e62c494, 0x2e527d53, 0x0ea02388, 0x2e909a4f, 0x2ef1e9c1, 0x0ec15006,
  0x0f25edb0, 0x2f155477, 0x2f7427f9, 0x0f449e3e, 0x2fb6c0e5, 0x0f867922, 0x0fe70aac, 0x2fd7b36b,
  0x3078d5bd, 0x10486c7a, 0x10291ff4, 0x3019a633, 0x10ebf8e8, 0x30db412f, 0x30ba32a1, 0x108a8b66,
  0x116e36d0, 0x315e8f17, 0x313ffc99, 0x110f455e, 0x31fd1b85, 0x11cda242, 0x11acd1cc, 0x319c680b,
  0x1265aaa0, 0x32551367, 0x323460e9, 0x1204d92e, 0x32f687f5, 0x12c63e32, 0x12a74dbc, 0x3297f47b,
  0x337349cd, 0x1343f00a, 0x13228384, 0x33123a43, 0x13e06498, 0x33d0dd5f, 0x33b1aed1, 0x13811716,
  0x14729240, 0x34422b87, 0x34235809, 0x1413e1ce, 0x34e1bf15, 0x14d106d2, 0x14b0755c, 0x3480cc9b,
  0x3564712d, 0x1554c8ea, 0x1535bb64, 0x350502a3, 0x15f75c78, 0x35c7e5bf, 0x35a69631, 0x15962ff6,
  0x366fed5d, 0x165f549a, 0x163e2714, 0x360e9ed3, 0x16fcc008, 0x36cc79cf, 0x36ad0a41, 0x169db386,
  0x17790e30, 0x3749b7f7, 0x3728c479, 0x17187dbe, 0x37ea2365, 0x17da9aa2, 0x17bbe92c, 0x378b50eb,
  0x185ce380, 0x386c5a47, 0x380d29c9, 0x183d900e, 0x38cfced5, 0x18ff7712, 0x189e049c, 0x38aebd5b,
  0x394a00ed, 0x197ab92a, 0x191bcaa4, 0x392b7363, 0x19d92db8, 0x39e9947f, 0x3988e7f1, 0x19b85e36,
  0x3a419c9d, 0x1a71255a, 0x1a1056d4, 0x3a20ef13, 0x1ad2b1c8, 0x3ae2080f, 0x3a837b81, 0x1ab3c246,
  0x1b577ff0, 0x3b67c637, 0x3b06b5b9, 0x1b360c7e, 0x3bc452a5, 0x1bf4eb62, 0x1b9598ec, 0x3ba5212b,
  0x3c56a47d, 0x1c661dba, 0x1c076e34, 0x3c37d7f3, 0x1cc58928, 0x3cf530ef, 0x3c944361, 0x1ca4faa6,
  0x1d404710, 0x3d70fed7, 0x3d118d59, 0x1d21349e, 0x3dd36a45, 0x1de3d382, 0x1d82a00c, 0x3db219cb,
  0x1e4bdb60, 0x3e7b62a7, 0x3e1a1129, 0x1e2aa8ee, 0x3ed8f635, 0x1ee84ff2, 0x1e893c7c, 0x3eb985bb,
  0x3f5d380d, 0x1f6d81ca, 0x1f0cf244, 0x3f3c4b83, 0x1fce1558, 0x3ffeac9f, 0x3f9fdf11, 0x1faf66d6
};

/*
    16-bit CRC, polynomial:
    g(x) = x**16 + x**12 + x**5 + 1
*/
const VOS_UINT16 g_ausCRC16Table[256] = {
  0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7,
  0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef,
  0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6,
  0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de,
  0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485,
  0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d,
  0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4,
  0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc,
  0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823,
  0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b,
  0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12,
  0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a,
  0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41,
  0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49,
  0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70,
  0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78,
  0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f,
  0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067,
  0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e,
  0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256,
  0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d,
  0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405,
  0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c,
  0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634,
  0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab,
  0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3,
  0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a,
  0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92,
  0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9,
  0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1,
  0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8,
  0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0
};

/*
    8-bit CRC，polynomial;
    g(x) = x**8 + x**7 + x**4 + x**3 + x + 1
*/
const VOS_UINT8 g_aucCDMACRC8Table[256] = {
    0x00,0x9b,0xad,0x36,0xc1,0x5a,0x6c,0xf7,
    0x19,0x82,0xb4,0x2f,0xd8,0x43,0x75,0xee,
    0x32,0xa9,0x9f,0x04,0xf3,0x68,0x5e,0xc5,
    0x2b,0xb0,0x86,0x1d,0xea,0x71,0x47,0xdc,
    0x64,0xff,0xc9,0x52,0xa5,0x3e,0x08,0x93,
    0x7d,0xe6,0xd0,0x4b,0xbc,0x27,0x11,0x8a,
    0x56,0xcd,0xfb,0x60,0x97,0x0c,0x3a,0xa1,
    0x4f,0xd4,0xe2,0x79,0x8e,0x15,0x23,0xb8,
    0xc8,0x53,0x65,0xfe,0x09,0x92,0xa4,0x3f,
    0xd1,0x4a,0x7c,0xe7,0x10,0x8b,0xbd,0x26,
    0xfa,0x61,0x57,0xcc,0x3b,0xa0,0x96,0x0d,
    0xe3,0x78,0x4e,0xd5,0x22,0xb9,0x8f,0x14,
    0xac,0x37,0x01,0x9a,0x6d,0xf6,0xc0,0x5b,
    0xb5,0x2e,0x18,0x83,0x74,0xef,0xd9,0x42,
    0x9e,0x05,0x33,0xa8,0x5f,0xc4,0xf2,0x69,
    0x87,0x1c,0x2a,0xb1,0x46,0xdd,0xeb,0x70,
    0x0b,0x90,0xa6,0x3d,0xca,0x51,0x67,0xfc,
    0x12,0x89,0xbf,0x24,0xd3,0x48,0x7e,0xe5,
    0x39,0xa2,0x94,0x0f,0xf8,0x63,0x55,0xce,
    0x20,0xbb,0x8d,0x16,0xe1,0x7a,0x4c,0xd7,
    0x6f,0xf4,0xc2,0x59,0xae,0x35,0x03,0x98,
    0x76,0xed,0xdb,0x40,0xb7,0x2c,0x1a,0x81,
    0x5d,0xc6,0xf0,0x6b,0x9c,0x07,0x31,0xaa,
    0x44,0xdf,0xe9,0x72,0x85,0x1e,0x28,0xb3,
    0xc3,0x58,0x6e,0xf5,0x02,0x99,0xaf,0x34,
    0xda,0x41,0x77,0xec,0x1b,0x80,0xb6,0x2d,
    0xf1,0x6a,0x5c,0xc7,0x30,0xab,0x9d,0x06,
    0xe8,0x73,0x45,0xde,0x29,0xb2,0x84,0x1f,
    0xa7,0x3c,0x0a,0x91,0x66,0xfd,0xcb,0x50,
    0xbe,0x25,0x13,0x88,0x7f,0xe4,0xd2,0x49,
    0x95,0x0e,0x38,0xa3,0x54,0xcf,0xf9,0x62,
    0x8c,0x17,0x21,0xba,0x4d,0xd6,0xe0,0x7b
};

/*
    32-bit FCS，polynomial:
    g(x) = x**32 + x**26 + x**23 + x**22 + x**16 + x**12 + x**11
           + x**10 + x**8 + x**7 + x**5 + x**4 + x**2 + x + 1
*/
const VOS_UINT32 g_aucFCS32Table[256] = {
    0x00000000, 0x77073096, 0xee0e612c, 0x990951ba, 0x076dc419, 0x706af48f, 0xe963a535, 0x9e6495a3,
    0x0edb8832, 0x79dcb8a4, 0xe0d5e91e, 0x97d2d988, 0x09b64c2b, 0x7eb17cbd, 0xe7b82d07, 0x90bf1d91,
    0x1db71064, 0x6ab020f2, 0xf3b97148, 0x84be41de, 0x1adad47d, 0x6ddde4eb, 0xf4d4b551, 0x83d385c7,
    0x136c9856, 0x646ba8c0, 0xfd62f97a, 0x8a65c9ec, 0x14015c4f, 0x63066cd9, 0xfa0f3d63, 0x8d080df5,
    0x3b6e20c8, 0x4c69105e, 0xd56041e4, 0xa2677172, 0x3c03e4d1, 0x4b04d447, 0xd20d85fd, 0xa50ab56b,
    0x35b5a8fa, 0x42b2986c, 0xdbbbc9d6, 0xacbcf940, 0x32d86ce3, 0x45df5c75, 0xdcd60dcf, 0xabd13d59,
    0x26d930ac, 0x51de003a, 0xc8d75180, 0xbfd06116, 0x21b4f4b5, 0x56b3c423, 0xcfba9599, 0xb8bda50f,
    0x2802b89e, 0x5f058808, 0xc60cd9b2, 0xb10be924, 0x2f6f7c87, 0x58684c11, 0xc1611dab, 0xb6662d3d,
    0x76dc4190, 0x01db7106, 0x98d220bc, 0xefd5102a, 0x71b18589, 0x06b6b51f, 0x9fbfe4a5, 0xe8b8d433,
    0x7807c9a2, 0x0f00f934, 0x9609a88e, 0xe10e9818, 0x7f6a0dbb, 0x086d3d2d, 0x91646c97, 0xe6635c01,
    0x6b6b51f4, 0x1c6c6162, 0x856530d8, 0xf262004e, 0x6c0695ed, 0x1b01a57b, 0x8208f4c1, 0xf50fc457,
    0x65b0d9c6, 0x12b7e950, 0x8bbeb8ea, 0xfcb9887c, 0x62dd1ddf, 0x15da2d49, 0x8cd37cf3, 0xfbd44c65,
    0x4db26158, 0x3ab551ce, 0xa3bc0074, 0xd4bb30e2, 0x4adfa541, 0x3dd895d7, 0xa4d1c46d, 0xd3d6f4fb,
    0x4369e96a, 0x346ed9fc, 0xad678846, 0xda60b8d0, 0x44042d73, 0x33031de5, 0xaa0a4c5f, 0xdd0d7cc9,
    0x5005713c, 0x270241aa, 0xbe0b1010, 0xc90c2086, 0x5768b525, 0x206f85b3, 0xb966d409, 0xce61e49f,
    0x5edef90e, 0x29d9c998, 0xb0d09822, 0xc7d7a8b4, 0x59b33d17, 0x2eb40d81, 0xb7bd5c3b, 0xc0ba6cad,
    0xedb88320, 0x9abfb3b6, 0x03b6e20c, 0x74b1d29a, 0xead54739, 0x9dd277af, 0x04db2615, 0x73dc1683,
    0xe3630b12, 0x94643b84, 0x0d6d6a3e, 0x7a6a5aa8, 0xe40ecf0b, 0x9309ff9d, 0x0a00ae27, 0x7d079eb1,
    0xf00f9344, 0x8708a3d2, 0x1e01f268, 0x6906c2fe, 0xf762575d, 0x806567cb, 0x196c3671, 0x6e6b06e7,
    0xfed41b76, 0x89d32be0, 0x10da7a5a, 0x67dd4acc, 0xf9b9df6f, 0x8ebeeff9, 0x17b7be43, 0x60b08ed5,
    0xd6d6a3e8, 0xa1d1937e, 0x38d8c2c4, 0x4fdff252, 0xd1bb67f1, 0xa6bc5767, 0x3fb506dd, 0x48b2364b,
    0xd80d2bda, 0xaf0a1b4c, 0x36034af6, 0x41047a60, 0xdf60efc3, 0xa867df55, 0x316e8eef, 0x4669be79,
    0xcb61b38c, 0xbc66831a, 0x256fd2a0, 0x5268e236, 0xcc0c7795, 0xbb0b4703, 0x220216b9, 0x5505262f,
    0xc5ba3bbe, 0xb2bd0b28, 0x2bb45a92, 0x5cb36a04, 0xc2d7ffa7, 0xb5d0cf31, 0x2cd99e8b, 0x5bdeae1d,
    0x9b64c2b0, 0xec63f226, 0x756aa39c, 0x026d930a, 0x9c0906a9, 0xeb0e363f, 0x72076785, 0x05005713,
    0x95bf4a82, 0xe2b87a14, 0x7bb12bae, 0x0cb61b38, 0x92d28e9b, 0xe5d5be0d, 0x7cdcefb7, 0x0bdbdf21,
    0x86d3d2d4, 0xf1d4e242, 0x68ddb3f8, 0x1fda836e, 0x81be16cd, 0xf6b9265b, 0x6fb077e1, 0x18b74777,
    0x88085ae6, 0xff0f6a70, 0x66063bca, 0x11010b5c, 0x8f659eff, 0xf862ae69, 0x616bffd3, 0x166ccf45,
    0xa00ae278, 0xd70dd2ee, 0x4e048354, 0x3903b3c2, 0xa7672661, 0xd06016f7, 0x4969474d, 0x3e6e77db,
    0xaed16a4a, 0xd9d65adc, 0x40df0b66, 0x37d83bf0, 0xa9bcae53, 0xdebb9ec5, 0x47b2cf7f, 0x30b5ffe9,
    0xbdbdf21c, 0xcabac28a, 0x53b39330, 0x24b4a3a6, 0xbad03605, 0xcdd70693, 0x54de5729, 0x23d967bf,
    0xb3667a2e, 0xc4614ab8, 0x5d681b02, 0x2a6f2b94, 0xb40bbe37, 0xc30c8ea1, 0x5a05df1b, 0x2d02ef8d
};

/*
    16-bit FCS， polynomial:
    g(x) = x**16 + x**15 + x**10 + x**3
*/
const VOS_UINT16 g_ausFCS16Table[256] = {
    0x0000, 0x1189, 0x2312, 0x329b, 0x4624, 0x57ad, 0x6536, 0x74bf,
    0x8c48, 0x9dc1, 0xaf5a, 0xbed3, 0xca6c, 0xdbe5, 0xe97e, 0xf8f7,
    0x1081, 0x0108, 0x3393, 0x221a, 0x56a5, 0x472c, 0x75b7, 0x643e,
    0x9cc9, 0x8d40, 0xbfdb, 0xae52, 0xdaed, 0xcb64, 0xf9ff, 0xe876,
    0x2102, 0x308b, 0x0210, 0x1399, 0x6726, 0x76af, 0x4434, 0x55bd,
    0xad4a, 0xbcc3, 0x8e58, 0x9fd1, 0xeb6e, 0xfae7, 0xc87c, 0xd9f5,
    0x3183, 0x200a, 0x1291, 0x0318, 0x77a7, 0x662e, 0x54b5, 0x453c,
    0xbdcb, 0xac42, 0x9ed9, 0x8f50, 0xfbef, 0xea66, 0xd8fd, 0xc974,
    0x4204, 0x538d, 0x6116, 0x709f, 0x0420, 0x15a9, 0x2732, 0x36bb,
    0xce4c, 0xdfc5, 0xed5e, 0xfcd7, 0x8868, 0x99e1, 0xab7a, 0xbaf3,
    0x5285, 0x430c, 0x7197, 0x601e, 0x14a1, 0x0528, 0x37b3, 0x263a,
    0xdecd, 0xcf44, 0xfddf, 0xec56, 0x98e9, 0x8960, 0xbbfb, 0xaa72,
    0x6306, 0x728f, 0x4014, 0x519d, 0x2522, 0x34ab, 0x0630, 0x17b9,
    0xef4e, 0xfec7, 0xcc5c, 0xddd5, 0xa96a, 0xb8e3, 0x8a78, 0x9bf1,
    0x7387, 0x620e, 0x5095, 0x411c, 0x35a3, 0x242a, 0x16b1, 0x0738,
    0xffcf, 0xee46, 0xdcdd, 0xcd54, 0xb9eb, 0xa862, 0x9af9, 0x8b70,
    0x8408, 0x9581, 0xa71a, 0xb693, 0xc22c, 0xd3a5, 0xe13e, 0xf0b7,
    0x0840, 0x19c9, 0x2b52, 0x3adb, 0x4e64, 0x5fed, 0x6d76, 0x7cff,
    0x9489, 0x8500, 0xb79b, 0xa612, 0xd2ad, 0xc324, 0xf1bf, 0xe036,
    0x18c1, 0x0948, 0x3bd3, 0x2a5a, 0x5ee5, 0x4f6c, 0x7df7, 0x6c7e,
    0xa50a, 0xb483, 0x8618, 0x9791, 0xe32e, 0xf2a7, 0xc03c, 0xd1b5,
    0x2942, 0x38cb, 0x0a50, 0x1bd9, 0x6f66, 0x7eef, 0x4c74, 0x5dfd,
    0xb58b, 0xa402, 0x9699, 0x8710, 0xf3af, 0xe226, 0xd0bd, 0xc134,
    0x39c3, 0x284a, 0x1ad1, 0x0b58, 0x7fe7, 0x6e6e, 0x5cf5, 0x4d7c,
    0xc60c, 0xd785, 0xe51e, 0xf497, 0x8028, 0x91a1, 0xa33a, 0xb2b3,
    0x4a44, 0x5bcd, 0x6956, 0x78df, 0x0c60, 0x1de9, 0x2f72, 0x3efb,
    0xd68d, 0xc704, 0xf59f, 0xe416, 0x90a9, 0x8120, 0xb3bb, 0xa232,
    0x5ac5, 0x4b4c, 0x79d7, 0x685e, 0x1ce1, 0x0d68, 0x3ff3, 0x2e7a,
    0xe70e, 0xf687, 0xc41c, 0xd595, 0xa12a, 0xb0a3, 0x8238, 0x93b1,
    0x6b46, 0x7acf, 0x4854, 0x59dd, 0x2d62, 0x3ceb, 0x0e70, 0x1ff9,
    0xf78f, 0xe606, 0xd49d, 0xc514, 0xb1ab, 0xa022, 0x92b9, 0x8330,
    0x7bc7, 0x6a4e, 0x58d5, 0x495c, 0x3de3, 0x2c6a, 0x1ef1, 0x0f78
};

const VOS_UINT8                        g_ausFCS8Table[] = 
{
    0x07, 0xd4, 0xa0, 0x4a, 0xc9, 0x7f, 0x1c, 0x93, 0x9a, 0x2c, 0x76, 0xf9, 0x31, 0xe2, 0xaf, 0x45,
    0xbd, 0x32, 0x51, 0xe7, 0x64, 0x8e, 0xfa, 0x29, 0x6b, 0x81, 0xcc, 0x1f, 0xd7, 0x58, 0x02, 0xb4, /*32*/
    0xf3, 0x19, 0x6d, 0xbe, 0x2a, 0xa5, 0xc6, 0x70, 0x40, 0xcf, 0x95, 0x23, 0xfc, 0x16, 0x5b, 0x88,
    0x5e, 0xe8, 0x8b, 0x04, 0x90, 0x43, 0x37, 0xdd, 0xa6, 0x75, 0x38, 0xd2, 0x0d, 0xbb, 0xe1, 0x6e, /*64*/
    0xee, 0x61, 0x3b, 0x8d, 0x52, 0xb8, 0xf5, 0x26, 0x5d, 0xb7, 0xc3, 0x10, 0x84, 0x0b, 0x68, 0xde,
    0x08, 0xdb, 0x96, 0x7c, 0xa3, 0x15, 0x4f, 0xc0, 0xf0, 0x46, 0x25, 0xaa, 0x3e, 0xed, 0x99, 0x73, /*96*/
    0x34, 0x82, 0xd8, 0x57, 0x9f, 0x4c, 0x01, 0xeb, 0xa9, 0x7a, 0x0e, 0xe4, 0x67, 0xd1, 0xb2, 0x3d,
    0xc5, 0x2f, 0x62, 0xb1, 0x79, 0xf6, 0xac, 0x1a, 0x13, 0x9c, 0xff, 0x49, 0xca, 0x20, 0x54, 0x87, /*128*/
    0x78, 0xab, 0xdf, 0x35, 0xb6, 0x00, 0x63, 0xec, 0xe5, 0x53, 0x09, 0x86, 0x4e, 0x9d, 0xd0, 0x3a,
    0xc2, 0x4d, 0x2e, 0x98, 0x1b, 0xf1, 0x85, 0x56, 0x14, 0xfe, 0xb3, 0x60, 0xa8, 0x27, 0x7d, 0xcb, /*160*/
    0x8c, 0x66, 0x12, 0xc1, 0x55, 0xda, 0xb9, 0x0f, 0x3f, 0xb0, 0xea, 0x5c, 0x83, 0x69, 0x24, 0xf7,
    0x21, 0x97, 0xf4, 0x7b, 0xef, 0x3c, 0x48, 0xa2, 0xd9, 0x0a, 0x47, 0xad, 0x72, 0xc4, 0x9e, 0x11, /*192*/
    0x91, 0x1e, 0x44, 0xf2, 0x2d, 0xc7, 0x8a, 0x59, 0x22, 0xc8, 0xbc, 0x6f, 0xfb, 0x74, 0x17, 0xa1,
    0x77, 0xa4, 0xe9, 0x03, 0xdc, 0x6a, 0x30, 0xbf, 0x8f, 0x39, 0x5a, 0xd5, 0x41, 0x92, 0xe6, 0x0c, /*224*/
    0x4b, 0xfd, 0xa7, 0x28, 0xe0, 0x33, 0x7e, 0x94, 0xd6, 0x05, 0x71, 0x9b, 0x18, 0xae, 0xcd, 0x42,
    0xba, 0x50, 0x1d, 0xce, 0x06, 0x89, 0xd3, 0x65, 0x6c, 0xe3, 0x80, 0x36, 0xb5, 0x5f, 0x2b, 0xf8 /*256*/
};


/*
CRC table for 32 bit CRC with generator polynomial 0x04c11db7,
calculated 8 bits at a time, MSB first.
x^32+x^26+x^23+x^22+x^16+x^12+x^11+x^10+x^8+x^7+x^5+x^4+x^2+x^1+1
*/
const VOS_UINT32              g_aulfcs32_table[] =
{
  0x00000000UL,  0x04c11db7UL,  0x09823b6eUL,  0x0d4326d9UL,
  0x130476dcUL,  0x17c56b6bUL,  0x1a864db2UL,  0x1e475005UL,
  0x2608edb8UL,  0x22c9f00fUL,  0x2f8ad6d6UL,  0x2b4bcb61UL,
  0x350c9b64UL,  0x31cd86d3UL,  0x3c8ea00aUL,  0x384fbdbdUL,
  0x4c11db70UL,  0x48d0c6c7UL,  0x4593e01eUL,  0x4152fda9UL,
  0x5f15adacUL,  0x5bd4b01bUL,  0x569796c2UL,  0x52568b75UL,
  0x6a1936c8UL,  0x6ed82b7fUL,  0x639b0da6UL,  0x675a1011UL,
  0x791d4014UL,  0x7ddc5da3UL,  0x709f7b7aUL,  0x745e66cdUL,
  0x9823b6e0UL,  0x9ce2ab57UL,  0x91a18d8eUL,  0x95609039UL,
  0x8b27c03cUL,  0x8fe6dd8bUL,  0x82a5fb52UL,  0x8664e6e5UL,
  0xbe2b5b58UL,  0xbaea46efUL,  0xb7a96036UL,  0xb3687d81UL,
  0xad2f2d84UL,  0xa9ee3033UL,  0xa4ad16eaUL,  0xa06c0b5dUL,
  0xd4326d90UL,  0xd0f37027UL,  0xddb056feUL,  0xd9714b49UL,
  0xc7361b4cUL,  0xc3f706fbUL,  0xceb42022UL,  0xca753d95UL,
  0xf23a8028UL,  0xf6fb9d9fUL,  0xfbb8bb46UL,  0xff79a6f1UL,
  0xe13ef6f4UL,  0xe5ffeb43UL,  0xe8bccd9aUL,  0xec7dd02dUL,
  0x34867077UL,  0x30476dc0UL,  0x3d044b19UL,  0x39c556aeUL,
  0x278206abUL,  0x23431b1cUL,  0x2e003dc5UL,  0x2ac12072UL,
  0x128e9dcfUL,  0x164f8078UL,  0x1b0ca6a1UL,  0x1fcdbb16UL,
  0x018aeb13UL,  0x054bf6a4UL,  0x0808d07dUL,  0x0cc9cdcaUL,
  0x7897ab07UL,  0x7c56b6b0UL,  0x71159069UL,  0x75d48ddeUL,
  0x6b93dddbUL,  0x6f52c06cUL,  0x6211e6b5UL,  0x66d0fb02UL,
  0x5e9f46bfUL,  0x5a5e5b08UL,  0x571d7dd1UL,  0x53dc6066UL,
  0x4d9b3063UL,  0x495a2dd4UL,  0x44190b0dUL,  0x40d816baUL,
  0xaca5c697UL,  0xa864db20UL,  0xa527fdf9UL,  0xa1e6e04eUL,
  0xbfa1b04bUL,  0xbb60adfcUL,  0xb6238b25UL,  0xb2e29692UL,
  0x8aad2b2fUL,  0x8e6c3698UL,  0x832f1041UL,  0x87ee0df6UL,
  0x99a95df3UL,  0x9d684044UL,  0x902b669dUL,  0x94ea7b2aUL,
  0xe0b41de7UL,  0xe4750050UL,  0xe9362689UL,  0xedf73b3eUL,
  0xf3b06b3bUL,  0xf771768cUL,  0xfa325055UL,  0xfef34de2UL,
  0xc6bcf05fUL,  0xc27dede8UL,  0xcf3ecb31UL,  0xcbffd686UL,
  0xd5b88683UL,  0xd1799b34UL,  0xdc3abdedUL,  0xd8fba05aUL,
  0x690ce0eeUL,  0x6dcdfd59UL,  0x608edb80UL,  0x644fc637UL,
  0x7a089632UL,  0x7ec98b85UL,  0x738aad5cUL,  0x774bb0ebUL,
  0x4f040d56UL,  0x4bc510e1UL,  0x46863638UL,  0x42472b8fUL,
  0x5c007b8aUL,  0x58c1663dUL,  0x558240e4UL,  0x51435d53UL,
  0x251d3b9eUL,  0x21dc2629UL,  0x2c9f00f0UL,  0x285e1d47UL,
  0x36194d42UL,  0x32d850f5UL,  0x3f9b762cUL,  0x3b5a6b9bUL,
  0x0315d626UL,  0x07d4cb91UL,  0x0a97ed48UL,  0x0e56f0ffUL,
  0x1011a0faUL,  0x14d0bd4dUL,  0x19939b94UL,  0x1d528623UL,
  0xf12f560eUL,  0xf5ee4bb9UL,  0xf8ad6d60UL,  0xfc6c70d7UL,
  0xe22b20d2UL,  0xe6ea3d65UL,  0xeba91bbcUL,  0xef68060bUL,
  0xd727bbb6UL,  0xd3e6a601UL,  0xdea580d8UL,  0xda649d6fUL,
  0xc423cd6aUL,  0xc0e2d0ddUL,  0xcda1f604UL,  0xc960ebb3UL,
  0xbd3e8d7eUL,  0xb9ff90c9UL,  0xb4bcb610UL,  0xb07daba7UL,
  0xae3afba2UL,  0xaafbe615UL,  0xa7b8c0ccUL,  0xa379dd7bUL,
  0x9b3660c6UL,  0x9ff77d71UL,  0x92b45ba8UL,  0x9675461fUL,
  0x8832161aUL,  0x8cf30badUL,  0x81b02d74UL,  0x857130c3UL,
  0x5d8a9099UL,  0x594b8d2eUL,  0x5408abf7UL,  0x50c9b640UL,
  0x4e8ee645UL,  0x4a4ffbf2UL,  0x470cdd2bUL,  0x43cdc09cUL,
  0x7b827d21UL,  0x7f436096UL,  0x7200464fUL,  0x76c15bf8UL,
  0x68860bfdUL,  0x6c47164aUL,  0x61043093UL,  0x65c52d24UL,
  0x119b4be9UL,  0x155a565eUL,  0x18197087UL,  0x1cd86d30UL,
  0x029f3d35UL,  0x065e2082UL,  0x0b1d065bUL,  0x0fdc1becUL,
  0x3793a651UL,  0x3352bbe6UL,  0x3e119d3fUL,  0x3ad08088UL,
  0x2497d08dUL,  0x2056cd3aUL,  0x2d15ebe3UL,  0x29d4f654UL,
  0xc5a92679UL,  0xc1683bceUL,  0xcc2b1d17UL,  0xc8ea00a0UL,
  0xd6ad50a5UL,  0xd26c4d12UL,  0xdf2f6bcbUL,  0xdbee767cUL,
  0xe3a1cbc1UL,  0xe760d676UL,  0xea23f0afUL,  0xeee2ed18UL,
  0xf0a5bd1dUL,  0xf464a0aaUL,  0xf9278673UL,  0xfde69bc4UL,
  0x89b8fd09UL,  0x8d79e0beUL,  0x803ac667UL,  0x84fbdbd0UL,
  0x9abc8bd5UL,  0x9e7d9662UL,  0x933eb0bbUL,  0x97ffad0cUL,
  0xafb010b1UL,  0xab710d06UL,  0xa6322bdfUL,  0xa2f33668UL,
  0xbcb4666dUL,  0xb8757bdaUL,  0xb5365d03UL,  0xb1f740b4UL
};


/*****************************************************************************
  3 函数实现
*****************************************************************************/


VOS_UINT32 CRC_CalculateCRC30(const VOS_UINT8 *pucDataBuf, VOS_UINT16 usLengthBits)
{
    VOS_UINT32                          ulLoop;
    VOS_UINT32                          ulCRC30;
    VOS_UINT32                          ucData;
    VOS_UINT16                          usLengthByte;
    VOS_UINT16                          usRemainerBitsLength;
    VOS_INT16                           sCurrBit;

    ulCRC30 = CRC_30_BIT_SEED;
    usLengthByte = usLengthBits / 8;

    /* 采用查表法，按照字节计算每一个byte的CRC */
    for (ulLoop = 0 ; ulLoop < usLengthByte; ulLoop++)
    {
        ulCRC30 = g_aucCRC30Table[(GET_30_BIT_HIGH_8_BIT(ulCRC30) ^ (*(pucDataBuf+ulLoop))) & CRC_FCS_BIT_OPR_8] ^ UL_CRC_LEFT_SHIFT_8_BIT(ulCRC30);
    }

    usRemainerBitsLength = usLengthBits % 8;

    /* 如果字节流长度不是8的倍数，则按照bit计算每一bit的CRC */
    if (0 != usRemainerBitsLength)
    {
        /* 取出剩余数据，并将剩余bit流左移到高22位 */
        ucData = UC_LEFT_SHIFT_22_BIT(pucDataBuf+ulLoop);

        sCurrBit = 0;

        while (sCurrBit < usRemainerBitsLength)
        {
            /* 如果最高位不是1，就左移一位；如果是1，则计算该bit的CRC */
            if (0 != GET_30_BIT_HIGHEST_BIT(ulCRC30 ^ ucData))
            {
                ulCRC30 <<= 1;
                ulCRC30 ^= CRC_30_POLYNOMIAL;
            }
            else
            {
                ulCRC30 <<= 1;
            }
            ucData <<= 1;

            sCurrBit++;
        }

    }

    ulCRC30 ^= CRC_30_BIT_SEED;

    /* 高2位清零 */
    ulCRC30 &= CRC_30_BIT_SEED;

    return ulCRC30;
}




VOS_UINT16 CRC_CalculateCRC16(const VOS_UINT8 *pucDataBuf, VOS_UINT32 ulLengthBits)
{
    VOS_UINT32                          ulLoop;
    VOS_UINT16                          usCRC16;
    VOS_UINT16                          ucData;
    VOS_UINT32                          ulLengthByte;
    VOS_UINT32                          ulRemainerBitsLength;
    VOS_UINT32                          ulCurrBit;


    usCRC16 = CRC_16_BIT_SEED;
    ulLengthByte = ulLengthBits / 8;

    /* 采用查表法，按照字节计算每一个byte的CRC */
    for (ulLoop = 0 ; ulLoop < ulLengthByte; ulLoop++)
    {
        usCRC16 = (VOS_UINT16)(g_ausCRC16Table[US_CRC_RIGHT_SHIFT_8_BIT(usCRC16) ^ (*(pucDataBuf+ulLoop))] ^ US_CRC_LEFT_SHIFT_8_BIT(usCRC16));
    }

    ulRemainerBitsLength = ulLengthBits % 8;

    /* 如果字节流长度不是8的倍数，则按照bit计算每一bit的CRC */
    if (0 != ulRemainerBitsLength)
    {
        /* 取出剩余数据，并将剩余bit流左移到高8位 */
        ucData = UC_LEFT_SHIFT_8_BIT(pucDataBuf+ulLoop);

        ulCurrBit = 0;

        while (ulCurrBit < ulRemainerBitsLength)
        {
            /* 如果最高位不是1，就左移一位；如果是1，则计算该bit的CRC */
            if (0 != GET_16_BIT_HIGHEST_BIT(usCRC16 ^ ucData))
            {
                usCRC16 <<= 1;
                usCRC16 ^= CRC_16_POLYNOMIAL;
            }
            else
            {
                usCRC16 <<= 1;
            }
            ucData <<= 1;

            ulCurrBit++;
        }

    }

    usCRC16 ^= CRC_16_BIT_SEED;

    return usCRC16;
}



VOS_UINT8 CRC_CalculateCRC8(const VOS_UINT8 *pucDataBuf, VOS_UINT16 usLengthBits)
{
    VOS_UINT32                          ulLoop;
    VOS_UINT8                           ucCRC8;
    VOS_UINT8                           ucData;
    VOS_UINT16                          usLengthByte;
    VOS_UINT16                          usRemainerBitsLength;
    VOS_INT16                           sCurrBit;

    ucCRC8 = CRC_8_BIT_SEED;
    usLengthByte = usLengthBits / 8;

    /* 采用查表法，按照字节计算每一个byte的CRC */
    for (ulLoop = 0 ; ulLoop < usLengthByte; ulLoop++)
    {
        ucCRC8 = g_aucCDMACRC8Table[ucCRC8 ^ (*(pucDataBuf+ulLoop))];
    }

    usRemainerBitsLength = usLengthBits % 8;

    /* 如果字节流长度不是8的倍数，则按照bit计算每一bit的CRC */
    if (0 != usRemainerBitsLength)
    {
        /* 取出剩余bit流 */
        ucData = *(pucDataBuf+ulLoop);

        sCurrBit = 0;

        while (sCurrBit < usRemainerBitsLength)
        {
            if (((ucCRC8 ^ ucData) & 0x80) != 0)
            {
                ucCRC8 <<= 1;
                ucCRC8 ^= CRC_8_POLYNOMIAL;
            }
            else
            {
                ucCRC8 <<= 1;
            }
            sCurrBit++;
        }

    }

    ucCRC8 ^= CRC_8_BIT_SEED;

    return ucCRC8;
}




VOS_UINT32 FCS_CalculateFCS32
(
    const VOS_UINT8                     *pucDataBuf,
    VOS_UINT16                           ulBitLength,
    VOS_UINT32                           ulSeed
)
{
    VOS_UINT32                          ulFCS32;
    VOS_UINT32                          ulData;

    /*lint -e440 -e443*/
    /* 采用查表法，按照字节计算每一个byte的FCS */
    for (ulFCS32 = ulSeed; ulBitLength >= 8; pucDataBuf++)
    {
        ulFCS32 = g_aulfcs32_table[((ulFCS32 >> 24) ^ (*pucDataBuf))] ^ (ulFCS32 << 8);
        ulBitLength -= 8;
    }
    /*lint +e440 +e443*/

    /* 计算不足一个byte的剩余bit的CRC，一次计算一个bit */
    if (ulBitLength != 0)
    {
    /* 将最后剩余不满8bit的数转换成UINT32的高位 */
        ulData = ((VOS_UINT32)(*pucDataBuf)) << 24;
        while (ulBitLength-- != 0)
        {
          if (((ulFCS32 ^ ulData) & FCS_32_MSB_MASK) != 0)
          {
            ulFCS32 <<= 1;
            ulFCS32 ^= FCS_32_POLYNOMIAL;
          }
          else
          {
            ulFCS32 <<= 1;
          }
      /* 将最高位移除，进行下一个bit的计算 */
          ulData <<= 1;
        }
    }

    /* 返回最终的结果 */
    return ulFCS32;
}




VOS_UINT16 FCS_CalculateFCS16(const VOS_UINT8 *pucDataBuf, VOS_UINT16 usLength)
{
    VOS_UINT32                          ulLoop;
    VOS_UINT16                          usFCS16;

    usFCS16 = FCS_16_BIT_SEED;

    /* 采用查表法，按照字节计算每一个byte的FCS */
    for (ulLoop = 0 ; ulLoop < usLength; ulLoop++)
    {
        usFCS16 = US_FCS_RIGHT_SHIFT_8_BIT(usFCS16) ^ g_ausFCS16Table[(usFCS16 ^ (*(pucDataBuf+ulLoop))) & CRC_FCS_BIT_OPR_8];
    }

    usFCS16 ^= FCS_16_BIT_SEED;

    return usFCS16;
}

/** **************************************************************************
8 bit FCS calculation.

*/
/*
   History        :
   1.Date         : 2014/12/04
     Author       : 
     Modification : 
******************************************************************************/

VOS_UINT8 FCS_CalculateFCS8(VOS_UINT8 usSN)
{
    
    return g_ausFCS8Table[usSN];
}


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

