// Qubic Programming Interface 1.0.0

#pragma once

#include "../platform/m256.h"
#include "../platform/memory.h"

namespace QPI
{
	/*

	Prohibited character combinations:

	"
	#
	%
	'
	* not as multiplication operator
	..
	/ as division operator
	::
	[
	]
	__
	double
	float
	typedef
	union

	*/

	typedef bool bit;
	typedef signed char sint8;
	typedef unsigned char uint8;
	typedef signed short sint16;
	typedef unsigned short uint16;
	typedef signed int sint32;
	typedef unsigned int uint32;
	typedef signed long long sint64;
	typedef unsigned long long uint64;
	typedef m256i id;

#define bit_2x bit_2
#define bit_4x bit_4
#define bit_8x bit_8
#define bit_16x bit_16
#define bit_32x bit_32
#define bit_64x bit_64
#define bit_128x bit_128
#define bit_256x bit_256
#define bit_512x bit_512
#define bit_1024x bit_1024
#define bit_2048x bit_2048
#define bit_4096x bit_4096
#define bit_8192x bit_8192
#define bit_16384x bit_16384
#define bit_32768x bit_32768
#define bit_65536x bit_65536
#define bit_131072x bit_131072
#define bit_262144x bit_262144
#define bit_524288x bit_524288
#define bit_1048576x bit_1048576
#define bit_2097152x bit_2097152
#define bit_4194304x bit_4194304
#define bit_8388608x bit_8388608
#define bit_16777216x bit_16777216
#define sint8_2x sint8_2
#define sint8_4x sint8_4
#define sint8_8x sint8_8
#define sint8_16x sint8_16
#define sint8_32x sint8_32
#define sint8_64x sint8_64
#define sint8_128x sint8_128
#define sint8_256x sint8_256
#define sint8_512x sint8_512
#define sint8_1024x sint8_1024
#define sint8_2048x sint8_2048
#define sint8_4096x sint8_4096
#define sint8_8192x sint8_8192
#define sint8_16384x sint8_16384
#define sint8_32768x sint8_32768
#define sint8_65536x sint8_65536
#define sint8_131072x sint8_131072
#define sint8_262144x sint8_262144
#define sint8_524288x sint8_524288
#define sint8_1048576x sint8_1048576
#define sint8_2097152x sint8_2097152
#define sint8_4194304x sint8_4194304
#define sint8_8388608x sint8_8388608
#define sint8_16777216x sint8_16777216
#define uint8_2x uint8_2
#define uint8_4x uint8_4
#define uint8_8x uint8_8
#define uint8_16x uint8_16
#define uint8_32x uint8_32
#define uint8_64x uint8_64
#define uint8_128x uint8_128
#define uint8_256x uint8_256
#define uint8_512x uint8_512
#define uint8_1024x uint8_1024
#define uint8_2048x uint8_2048
#define uint8_4096x uint8_4096
#define uint8_8192x uint8_8192
#define uint8_16384x uint8_16384
#define uint8_32768x uint8_32768
#define uint8_65536x uint8_65536
#define uint8_131072x uint8_131072
#define uint8_262144x uint8_262144
#define uint8_524288x uint8_524288
#define uint8_1048576x uint8_1048576
#define uint8_2097152x uint8_2097152
#define uint8_4194304x uint8_4194304
#define uint8_8388608x uint8_8388608
#define uint8_16777216x uint8_16777216
#define sint16_2x sint16_2
#define sint16_4x sint16_4
#define sint16_8x sint16_8
#define sint16_16x sint16_16
#define sint16_32x sint16_32
#define sint16_64x sint16_64
#define sint16_128x sint16_128
#define sint16_256x sint16_256
#define sint16_512x sint16_512
#define sint16_1024x sint16_1024
#define sint16_2048x sint16_2048
#define sint16_4096x sint16_4096
#define sint16_8192x sint16_8192
#define sint16_16384x sint16_16384
#define sint16_32768x sint16_32768
#define sint16_65536x sint16_65536
#define sint16_131072x sint16_131072
#define sint16_262144x sint16_262144
#define sint16_524288x sint16_524288
#define sint16_1048576x sint16_1048576
#define sint16_2097152x sint16_2097152
#define sint16_4194304x sint16_4194304
#define sint16_8388608x sint16_8388608
#define sint16_16777216x sint16_16777216
#define uint16_2x uint16_2
#define uint16_4x uint16_4
#define uint16_8x uint16_8
#define uint16_16x uint16_16
#define uint16_32x uint16_32
#define uint16_64x uint16_64
#define uint16_128x uint16_128
#define uint16_256x uint16_256
#define uint16_512x uint16_512
#define uint16_1024x uint16_1024
#define uint16_2048x uint16_2048
#define uint16_4096x uint16_4096
#define uint16_8192x uint16_8192
#define uint16_16384x uint16_16384
#define uint16_32768x uint16_32768
#define uint16_65536x uint16_65536
#define uint16_131072x uint16_131072
#define uint16_262144x uint16_262144
#define uint16_524288x uint16_524288
#define uint16_1048576x uint16_1048576
#define uint16_2097152x uint16_2097152
#define uint16_4194304x uint16_4194304
#define uint16_8388608x uint16_8388608
#define uint16_16777216x uint16_16777216
#define sint32_2x sint32_2
#define sint32_4x sint32_4
#define sint32_8x sint32_8
#define sint32_16x sint32_16
#define sint32_32x sint32_32
#define sint32_64x sint32_64
#define sint32_128x sint32_128
#define sint32_256x sint32_256
#define sint32_512x sint32_512
#define sint32_1024x sint32_1024
#define sint32_2048x sint32_2048
#define sint32_4096x sint32_4096
#define sint32_8192x sint32_8192
#define sint32_16384x sint32_16384
#define sint32_32768x sint32_32768
#define sint32_65536x sint32_65536
#define sint32_131072x sint32_131072
#define sint32_262144x sint32_262144
#define sint32_524288x sint32_524288
#define sint32_1048576x sint32_1048576
#define sint32_2097152x sint32_2097152
#define sint32_4194304x sint32_4194304
#define sint32_8388608x sint32_8388608
#define sint32_16777216x sint32_16777216
#define uint32_2x uint32_2
#define uint32_4x uint32_4
#define uint32_8x uint32_8
#define uint32_16x uint32_16
#define uint32_32x uint32_32
#define uint32_64x uint32_64
#define uint32_128x uint32_128
#define uint32_256x uint32_256
#define uint32_512x uint32_512
#define uint32_1024x uint32_1024
#define uint32_2048x uint32_2048
#define uint32_4096x uint32_4096
#define uint32_8192x uint32_8192
#define uint32_16384x uint32_16384
#define uint32_32768x uint32_32768
#define uint32_65536x uint32_65536
#define uint32_131072x uint32_131072
#define uint32_262144x uint32_262144
#define uint32_524288x uint32_524288
#define uint32_1048576x uint32_1048576
#define uint32_2097152x uint32_2097152
#define uint32_4194304x uint32_4194304
#define uint32_8388608x uint32_8388608
#define uint32_16777216x uint32_16777216
#define sint64_2x sint64_2
#define sint64_4x sint64_4
#define sint64_8x sint64_8
#define sint64_16x sint64_16
#define sint64_32x sint64_32
#define sint64_64x sint64_64
#define sint64_128x sint64_128
#define sint64_256x sint64_256
#define sint64_512x sint64_512
#define sint64_1024x sint64_1024
#define sint64_2048x sint64_2048
#define sint64_4096x sint64_4096
#define sint64_8192x sint64_8192
#define sint64_16384x sint64_16384
#define sint64_32768x sint64_32768
#define sint64_65536x sint64_65536
#define sint64_131072x sint64_131072
#define sint64_262144x sint64_262144
#define sint64_524288x sint64_524288
#define sint64_1048576x sint64_1048576
#define sint64_2097152x sint64_2097152
#define sint64_4194304x sint64_4194304
#define sint64_8388608x sint64_8388608
#define sint64_16777216x sint64_16777216
#define uint64_2x uint64_2
#define uint64_4x uint64_4
#define uint64_8x uint64_8
#define uint64_16x uint64_16
#define uint64_32x uint64_32
#define uint64_64x uint64_64
#define uint64_128x uint64_128
#define uint64_256x uint64_256
#define uint64_512x uint64_512
#define uint64_1024x uint64_1024
#define uint64_2048x uint64_2048
#define uint64_4096x uint64_4096
#define uint64_8192x uint64_8192
#define uint64_16384x uint64_16384
#define uint64_32768x uint64_32768
#define uint64_65536x uint64_65536
#define uint64_131072x uint64_131072
#define uint64_262144x uint64_262144
#define uint64_524288x uint64_524288
#define uint64_1048576x uint64_1048576
#define uint64_2097152x uint64_2097152
#define uint64_4194304x uint64_4194304
#define uint64_8388608x uint64_8388608
#define uint64_16777216x uint64_16777216
#define id_2x id_2
#define id_4x id_4
#define id_8x id_8
#define id_16x id_16
#define id_32x id_32
#define id_64x id_64
#define id_128x id_128
#define id_256x id_256
#define id_512x id_512
#define id_1024x id_1024
#define id_2048x id_2048
#define id_4096x id_4096
#define id_8192x id_8192
#define id_16384x id_16384
#define id_32768x id_32768
#define id_65536x id_65536
#define id_131072x id_131072
#define id_262144x id_262144
#define id_524288x id_524288
#define id_1048576x id_1048576
#define id_2097152x id_2097152
#define id_4194304x id_4194304
#define id_8388608x id_8388608
#define id_16777216x id_16777216
#define index_2x index_<2>
#define index_4x index_<4>
#define index_8x index_<8>
#define index_16x index_<16>
#define index_32x index_<32>
#define index_64x index_<64>
#define index_128x index_<128>
#define index_256x index_<256>
#define index_512x index_<512>
#define index_1024x index_<1024>
#define index_2048x index_<2048>
#define index_4096x index_<4096>
#define index_8192x index_<8192>
#define index_16384x index_<16384>
#define index_32768x index_<32768>
#define index_65536x index_<65536>
#define index_131072x index_<131072>
#define index_262144x index_<262144>
#define index_524288x index_<524288>
#define index_1048576x index_<1048576>
#define index_2097152x index_<2097152>
#define index_4194304x index_<4194304>
#define index_8388608x index_<8388608>
#define index_16777216x index_<16777216>
#define index_33554432x index_<33554432>

#define bit_2x2 bit_4
#define bit_4x2 bit_8
#define bit_8x2 bit_16
#define bit_16x2 bit_32
#define bit_32x2 bit_64
#define bit_64x2 bit_128
#define bit_128x2 bit_256
#define bit_256x2 bit_512
#define bit_512x2 bit_1024
#define bit_1024x2 bit_2048
#define bit_2048x2 bit_4096
#define bit_4096x2 bit_8192
#define bit_8192x2 bit_16384
#define bit_16384x2 bit_32768
#define bit_32768x2 bit_65536
#define bit_65536x2 bit_131072
#define bit_131072x2 bit_262144
#define bit_262144x2 bit_524288
#define bit_524288x2 bit_1048576
#define bit_1048576x2 bit_2097152
#define bit_2097152x2 bit_4194304
#define bit_4194304x2 bit_8388608
#define bit_8388608x2 bit_16777216
#define sint8_2x2 sint8_4
#define sint8_4x2 sint8_8
#define sint8_8x2 sint8_16
#define sint8_16x2 sint8_32
#define sint8_32x2 sint8_64
#define sint8_64x2 sint8_128
#define sint8_128x2 sint8_256
#define sint8_256x2 sint8_512
#define sint8_512x2 sint8_1024
#define sint8_1024x2 sint8_2048
#define sint8_2048x2 sint8_4096
#define sint8_4096x2 sint8_8192
#define sint8_8192x2 sint8_16384
#define sint8_16384x2 sint8_32768
#define sint8_32768x2 sint8_65536
#define sint8_65536x2 sint8_131072
#define sint8_131072x2 sint8_262144
#define sint8_262144x2 sint8_524288
#define sint8_524288x2 sint8_1048576
#define sint8_1048576x2 sint8_2097152
#define sint8_2097152x2 sint8_4194304
#define sint8_4194304x2 sint8_8388608
#define sint8_8388608x2 sint8_16777216
#define uint8_2x2 uint8_4
#define uint8_4x2 uint8_8
#define uint8_8x2 uint8_16
#define uint8_16x2 uint8_32
#define uint8_32x2 uint8_64
#define uint8_64x2 uint8_128
#define uint8_128x2 uint8_256
#define uint8_256x2 uint8_512
#define uint8_512x2 uint8_1024
#define uint8_1024x2 uint8_2048
#define uint8_2048x2 uint8_4096
#define uint8_4096x2 uint8_8192
#define uint8_8192x2 uint8_16384
#define uint8_16384x2 uint8_32768
#define uint8_32768x2 uint8_65536
#define uint8_65536x2 uint8_131072
#define uint8_131072x2 uint8_262144
#define uint8_262144x2 uint8_524288
#define uint8_524288x2 uint8_1048576
#define uint8_1048576x2 uint8_2097152
#define uint8_2097152x2 uint8_4194304
#define uint8_4194304x2 uint8_8388608
#define uint8_8388608x2 uint8_16777216
#define sint16_2x2 sint16_4
#define sint16_4x2 sint16_8
#define sint16_8x2 sint16_16
#define sint16_16x2 sint16_32
#define sint16_32x2 sint16_64
#define sint16_64x2 sint16_128
#define sint16_128x2 sint16_256
#define sint16_256x2 sint16_512
#define sint16_512x2 sint16_1024
#define sint16_1024x2 sint16_2048
#define sint16_2048x2 sint16_4096
#define sint16_4096x2 sint16_8192
#define sint16_8192x2 sint16_16384
#define sint16_16384x2 sint16_32768
#define sint16_32768x2 sint16_65536
#define sint16_65536x2 sint16_131072
#define sint16_131072x2 sint16_262144
#define sint16_262144x2 sint16_524288
#define sint16_524288x2 sint16_1048576
#define sint16_1048576x2 sint16_2097152
#define sint16_2097152x2 sint16_4194304
#define sint16_4194304x2 sint16_8388608
#define sint16_8388608x2 sint16_16777216
#define uint16_2x2 uint16_4
#define uint16_4x2 uint16_8
#define uint16_8x2 uint16_16
#define uint16_16x2 uint16_32
#define uint16_32x2 uint16_64
#define uint16_64x2 uint16_128
#define uint16_128x2 uint16_256
#define uint16_256x2 uint16_512
#define uint16_512x2 uint16_1024
#define uint16_1024x2 uint16_2048
#define uint16_2048x2 uint16_4096
#define uint16_4096x2 uint16_8192
#define uint16_8192x2 uint16_16384
#define uint16_16384x2 uint16_32768
#define uint16_32768x2 uint16_65536
#define uint16_65536x2 uint16_131072
#define uint16_131072x2 uint16_262144
#define uint16_262144x2 uint16_524288
#define uint16_524288x2 uint16_1048576
#define uint16_1048576x2 uint16_2097152
#define uint16_2097152x2 uint16_4194304
#define uint16_4194304x2 uint16_8388608
#define uint16_8388608x2 uint16_16777216
#define sint32_2x2 sint32_4
#define sint32_4x2 sint32_8
#define sint32_8x2 sint32_16
#define sint32_16x2 sint32_32
#define sint32_32x2 sint32_64
#define sint32_64x2 sint32_128
#define sint32_128x2 sint32_256
#define sint32_256x2 sint32_512
#define sint32_512x2 sint32_1024
#define sint32_1024x2 sint32_2048
#define sint32_2048x2 sint32_4096
#define sint32_4096x2 sint32_8192
#define sint32_8192x2 sint32_16384
#define sint32_16384x2 sint32_32768
#define sint32_32768x2 sint32_65536
#define sint32_65536x2 sint32_131072
#define sint32_131072x2 sint32_262144
#define sint32_262144x2 sint32_524288
#define sint32_524288x2 sint32_1048576
#define sint32_1048576x2 sint32_2097152
#define sint32_2097152x2 sint32_4194304
#define sint32_4194304x2 sint32_8388608
#define sint32_8388608x2 sint32_16777216
#define uint32_2x2 uint32_4
#define uint32_4x2 uint32_8
#define uint32_8x2 uint32_16
#define uint32_16x2 uint32_32
#define uint32_32x2 uint32_64
#define uint32_64x2 uint32_128
#define uint32_128x2 uint32_256
#define uint32_256x2 uint32_512
#define uint32_512x2 uint32_1024
#define uint32_1024x2 uint32_2048
#define uint32_2048x2 uint32_4096
#define uint32_4096x2 uint32_8192
#define uint32_8192x2 uint32_16384
#define uint32_16384x2 uint32_32768
#define uint32_32768x2 uint32_65536
#define uint32_65536x2 uint32_131072
#define uint32_131072x2 uint32_262144
#define uint32_262144x2 uint32_524288
#define uint32_524288x2 uint32_1048576
#define uint32_1048576x2 uint32_2097152
#define uint32_2097152x2 uint32_4194304
#define uint32_4194304x2 uint32_8388608
#define uint32_8388608x2 uint32_16777216
#define sint64_2x2 sint64_4
#define sint64_4x2 sint64_8
#define sint64_8x2 sint64_16
#define sint64_16x2 sint64_32
#define sint64_32x2 sint64_64
#define sint64_64x2 sint64_128
#define sint64_128x2 sint64_256
#define sint64_256x2 sint64_512
#define sint64_512x2 sint64_1024
#define sint64_1024x2 sint64_2048
#define sint64_2048x2 sint64_4096
#define sint64_4096x2 sint64_8192
#define sint64_8192x2 sint64_16384
#define sint64_16384x2 sint64_32768
#define sint64_32768x2 sint64_65536
#define sint64_65536x2 sint64_131072
#define sint64_131072x2 sint64_262144
#define sint64_262144x2 sint64_524288
#define sint64_524288x2 sint64_1048576
#define sint64_1048576x2 sint64_2097152
#define sint64_2097152x2 sint64_4194304
#define sint64_4194304x2 sint64_8388608
#define sint64_8388608x2 sint64_16777216
#define uint64_2x2 uint64_4
#define uint64_4x2 uint64_8
#define uint64_8x2 uint64_16
#define uint64_16x2 uint64_32
#define uint64_32x2 uint64_64
#define uint64_64x2 uint64_128
#define uint64_128x2 uint64_256
#define uint64_256x2 uint64_512
#define uint64_512x2 uint64_1024
#define uint64_1024x2 uint64_2048
#define uint64_2048x2 uint64_4096
#define uint64_4096x2 uint64_8192
#define uint64_8192x2 uint64_16384
#define uint64_16384x2 uint64_32768
#define uint64_32768x2 uint64_65536
#define uint64_65536x2 uint64_131072
#define uint64_131072x2 uint64_262144
#define uint64_262144x2 uint64_524288
#define uint64_524288x2 uint64_1048576
#define uint64_1048576x2 uint64_2097152
#define uint64_2097152x2 uint64_4194304
#define uint64_4194304x2 uint64_8388608
#define uint64_8388608x2 uint64_16777216
#define id_2x2 id_4
#define id_4x2 id_8
#define id_8x2 id_16
#define id_16x2 id_32
#define id_32x2 id_64
#define id_64x2 id_128
#define id_128x2 id_256
#define id_256x2 id_512
#define id_512x2 id_1024
#define id_1024x2 id_2048
#define id_2048x2 id_4096
#define id_4096x2 id_8192
#define id_8192x2 id_16384
#define id_16384x2 id_32768
#define id_32768x2 id_65536
#define id_65536x2 id_131072
#define id_131072x2 id_262144
#define id_262144x2 id_524288
#define id_524288x2 id_1048576
#define id_1048576x2 id_2097152
#define id_2097152x2 id_4194304
#define id_4194304x2 id_8388608
#define id_8388608x2 id_16777216
#define index_2x2 index_<4>
#define index_4x2 index_<8>
#define index_8x2 index_<16>
#define index_16x2 index_<32>
#define index_32x2 index_<64>
#define index_64x2 index_<128>
#define index_128x2 index_<256>
#define index_256x2 index_<512>
#define index_512x2 index_<1024>
#define index_1024x2 index_<2048>
#define index_2048x2 index_<4096>
#define index_4096x2 index_<8192>
#define index_8192x2 index_<16384>
#define index_16384x2 index_<32768>
#define index_32768x2 index_<65536>
#define index_65536x2 index_<131072>
#define index_131072x2 index_<262144>
#define index_262144x2 index_<524288>
#define index_524288x2 index_<1048576>
#define index_1048576x2 index_<2097152>
#define index_2097152x2 index_<4194304>
#define index_4194304x2 index_<8388608>
#define index_8388608x2 index_<16777216>
#define index_16777216x2 index_<33554432>

#define NULL_ID _mm256_setzero_si256()
	constexpr sint64 NULL_INDEX = -1;

#define _A 0
#define _B 1
#define _C 2
#define _D 3
#define _E 4
#define _F 5
#define _G 6
#define _H 7
#define _I 8
#define _J 9
#define _K 10
#define _L 11
#define _M 12
#define _N 13
#define _O 14
#define _P 15
#define _Q 16
#define _R 17
#define _S 18
#define _T 19
#define _U 20
#define _V 21
#define _W 22
#define _X 23
#define _Y 24
#define _Z 25
#define ID(_00, _01, _02, _03, _04, _05, _06, _07, _08, _09, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55) _mm256_set_epi64x(((((((((((((((uint64)_55) * 26 + _54) * 26 + _53) * 26 + _52) * 26 + _51) * 26 + _50) * 26 + _49) * 26 + _48) * 26 + _47) * 26 + _46) * 26 + _45) * 26 + _44) * 26 + _43) * 26 + _42, ((((((((((((((uint64)_41) * 26 + _40) * 26 + _39) * 26 + _38) * 26 + _37) * 26 + _36) * 26 + _35) * 26 + _34) * 26 + _33) * 26 + _32) * 26 + _31) * 26 + _30) * 26 + _29) * 26 + _28, ((((((((((((((uint64)_27) * 26 + _26) * 26 + _25) * 26 + _24) * 26 + _23) * 26 + _22) * 26 + _21) * 26 + _20) * 26 + _19) * 26 + _18) * 26 + _17) * 26 + _16) * 26 + _15) * 26 + _14, ((((((((((((((uint64)_13) * 26 + _12) * 26 + _11) * 26 + _10) * 26 + _09) * 26 + _08) * 26 + _07) * 26 + _06) * 26 + _05) * 26 + _04) * 26 + _03) * 26 + _02) * 26 + _01) * 26 + _00)

#define NUMBER_OF_COMPUTORS 676

#define JANUARY 1
#define FEBRUARY 2
#define MARCH 3
#define APRIL 4
#define MAY 5
#define JUNE 6
#define JULY 7
#define AUGUST 8
#define SEPTEMBER 9
#define OCTOBER 10
#define NOVEMBER 11
#define DECEMBER 12

#define WEDNESDAY 0
#define THURSDAY 1
#define FRIDAY 2
#define SATURDAY 3
#define SUNDAY 4
#define MONDAY 5
#define TUESDAY 6

#define X_MULTIPLIER 1

	struct bit_2
	{
	private:
		uint64 _values;

	public:
		inline bit get(uint64 index)
		{
			return (_values >> (index & 1)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values = (_values & (~(1ULL << (index & 1)))) | (((uint64)value) << (index & 1));
		}
	};

	struct bit_4
	{
	private:
		uint64 _values;

	public:
		inline bit get(uint64 index)
		{
			return (_values >> (index & 3)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values = (_values & (~(1ULL << (index & 3)))) | (((uint64)value) << (index & 3));
		}
	};

	struct bit_8
	{
	private:
		uint64 _values;

	public:
		inline bit get(uint64 index)
		{
			return (_values >> (index & 7)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values = (_values & (~(1ULL << (index & 7)))) | (((uint64)value) << (index & 7));
		}
	};

	struct bit_16
	{
	private:
		uint64 _values;

	public:
		inline bit get(uint64 index)
		{
			return (_values >> (index & 15)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values = (_values & (~(1ULL << (index & 15)))) | (((uint64)value) << (index & 15));
		}
	};

	struct bit_32
	{
	private:
		uint64 _values;

	public:
		inline bit get(uint64 index)
		{
			return (_values >> (index & 31)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values = (_values & (~(1ULL << (index & 31)))) | (((uint64)value) << (index & 31));
		}
	};

	struct bit_64
	{
	private:
		uint64 _values;

	public:
		inline bit get(uint64 index)
		{
			return (_values >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values = (_values & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_128
	{
	private:
		uint64 _values[2];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_256
	{
	private:
		uint64 _values[4];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_512
	{
	private:
		uint64 _values[8];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_1024
	{
	private:
		uint64 _values[16];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_2048
	{
	private:
		uint64 _values[32];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_4096
	{
	private:
		uint64 _values[64];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_8192
	{
	private:
		uint64 _values[128];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_16384
	{
	private:
		uint64 _values[256];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_32768
	{
	private:
		uint64 _values[512];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_65536
	{
	private:
		uint64 _values[1024];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_131072
	{
	private:
		uint64 _values[2048];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_262144
	{
	private:
		uint64 _values[4096];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_524288
	{
	private:
		uint64 _values[8192];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_1048576
	{
	private:
		uint64 _values[16384];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_2097152
	{
	private:
		uint64 _values[32768];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_4194304
	{
	private:
		uint64 _values[65536];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_8388608
	{
	private:
		uint64 _values[131072];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_16777216
	{
	private:
		uint64 _values[262144];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct bit_16777216x2
	{
	private:
		uint64 _values[524288];

	public:
		inline bit get(uint64 index)
		{
			return (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] >> (index & 63)) & 1;
		}

		inline void set(uint64 index, bit value)
		{
			_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] = (_values[(index >> 6) & (sizeof(_values) / sizeof(_values[0]) - 1)] & (~(1ULL << (index & 63)))) | (((uint64)value) << (index & 63));
		}
	};

	struct sint8_2
	{
	private:
		sint8 _values[2];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_4
	{
	private:
		sint8 _values[4];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_8
	{
	private:
		sint8 _values[8];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_16
	{
	private:
		sint8 _values[16];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_32
	{
	private:
		sint8 _values[32];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}

		inline void set(id value)
		{
			*((id*)_values) = value;
		}
	};

	struct sint8_64
	{
	private:
		sint8 _values[64];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_128
	{
	private:
		sint8 _values[128];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_256
	{
	private:
		sint8 _values[256];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_512
	{
	private:
		sint8 _values[512];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_1024
	{
	private:
		sint8 _values[1024];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_2048
	{
	private:
		sint8 _values[2048];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_4096
	{
	private:
		sint8 _values[4096];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_8192
	{
	private:
		sint8 _values[8192];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_16384
	{
	private:
		sint8 _values[16384];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_32768
	{
	private:
		sint8 _values[32768];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_65536
	{
	private:
		sint8 _values[65536];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_131072
	{
	private:
		sint8 _values[131072];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_262144
	{
	private:
		sint8 _values[262144];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_524288
	{
	private:
		sint8 _values[524288];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_1048576
	{
	private:
		sint8 _values[1048576];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_2097152
	{
	private:
		sint8 _values[2097152];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_4194304
	{
	private:
		sint8 _values[4194304];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_8388608
	{
	private:
		sint8 _values[8388608];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_16777216
	{
	private:
		sint8 _values[16777216];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint8_16777216x2
	{
	private:
		sint8 _values[33554432];

	public:
		inline sint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_2
	{
	private:
		uint8 _values[2];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_4
	{
	private:
		uint8 _values[4];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_8
	{
	private:
		uint8 _values[8];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_16
	{
	private:
		uint8 _values[16];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_32
	{
	private:
		uint8 _values[32];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}

		inline void set(id value)
		{
			*((id*)_values) = value;
		}
	};

	struct uint8_64
	{
	private:
		uint8 _values[64];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_128
	{
	private:
		uint8 _values[128];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_256
	{
	private:
		uint8 _values[256];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_512
	{
	private:
		uint8 _values[512];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_1024
	{
	private:
		uint8 _values[1024];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_2048
	{
	private:
		uint8 _values[2048];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_4096
	{
	private:
		uint8 _values[4096];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_8192
	{
	private:
		uint8 _values[8192];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_16384
	{
	private:
		uint8 _values[16384];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_32768
	{
	private:
		uint8 _values[32768];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_65536
	{
	private:
		uint8 _values[65536];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_131072
	{
	private:
		uint8 _values[131072];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_262144
	{
	private:
		uint8 _values[262144];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_524288
	{
	private:
		uint8 _values[524288];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_1048576
	{
	private:
		uint8 _values[1048576];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_2097152
	{
	private:
		uint8 _values[2097152];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_4194304
	{
	private:
		uint8 _values[4194304];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_8388608
	{
	private:
		uint8 _values[8388608];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_16777216
	{
	private:
		uint8 _values[16777216];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint8_16777216x2
	{
	private:
		uint8 _values[33554432];

	public:
		inline uint8 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint8 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_2
	{
	private:
		sint16 _values[2];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_4
	{
	private:
		sint16 _values[4];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_8
	{
	private:
		sint16 _values[8];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_16
	{
	private:
		sint16 _values[16];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}

		inline void set(id value)
		{
			*((id*)_values) = value;
		}
	};

	struct sint16_32
	{
	private:
		sint16 _values[32];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_64
	{
	private:
		sint16 _values[64];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_128
	{
	private:
		sint16 _values[128];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_256
	{
	private:
		sint16 _values[256];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_512
	{
	private:
		sint16 _values[512];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_1024
	{
	private:
		sint16 _values[1024];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_2048
	{
	private:
		sint16 _values[2048];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_4096
	{
	private:
		sint16 _values[4096];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_8192
	{
	private:
		sint16 _values[8192];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_16384
	{
	private:
		sint16 _values[16384];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_32768
	{
	private:
		sint16 _values[32768];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_65536
	{
	private:
		sint16 _values[65536];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_131072
	{
	private:
		sint16 _values[131072];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_262144
	{
	private:
		sint16 _values[262144];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_524288
	{
	private:
		sint16 _values[524288];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_1048576
	{
	private:
		sint16 _values[1048576];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_2097152
	{
	private:
		sint16 _values[2097152];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_4194304
	{
	private:
		sint16 _values[4194304];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_8388608
	{
	private:
		sint16 _values[8388608];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_16777216
	{
	private:
		sint16 _values[16777216];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint16_16777216x2
	{
	private:
		sint16 _values[33554432];

	public:
		inline sint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_2
	{
	private:
		uint16 _values[2];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_4
	{
	private:
		uint16 _values[4];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_8
	{
	private:
		uint16 _values[8];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_16
	{
	private:
		uint16 _values[16];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}

		inline void set(id value)
		{
			*((id*)_values) = value;
		}
	};

	struct uint16_32
	{
	private:
		uint16 _values[32];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_64
	{
	private:
		uint16 _values[64];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_128
	{
	private:
		uint16 _values[128];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_256
	{
	private:
		uint16 _values[256];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_512
	{
	private:
		uint16 _values[512];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_1024
	{
	private:
		uint16 _values[1024];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_2048
	{
	private:
		uint16 _values[2048];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_4096
	{
	private:
		uint16 _values[4096];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_8192
	{
	private:
		uint16 _values[8192];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_16384
	{
	private:
		uint16 _values[16384];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_32768
	{
	private:
		uint16 _values[32768];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_65536
	{
	private:
		uint16 _values[65536];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_131072
	{
	private:
		uint16 _values[131072];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_262144
	{
	private:
		uint16 _values[262144];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_524288
	{
	private:
		uint16 _values[524288];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_1048576
	{
	private:
		uint16 _values[1048576];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_2097152
	{
	private:
		uint16 _values[2097152];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_4194304
	{
	private:
		uint16 _values[4194304];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_8388608
	{
	private:
		uint16 _values[8388608];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_16777216
	{
	private:
		uint16 _values[16777216];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint16_16777216x2
	{
	private:
		uint16 _values[33554432];

	public:
		inline uint16 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint16 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_2
	{
	private:
		sint32 _values[2];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_4
	{
	private:
		sint32 _values[4];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_8
	{
	private:
		sint32 _values[8];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}

		inline void set(id value)
		{
			*((id*)_values) = value;
		}
	};

	struct sint32_16
	{
	private:
		sint32 _values[16];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_32
	{
	private:
		sint32 _values[32];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_64
	{
	private:
		sint32 _values[64];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_128
	{
	private:
		sint32 _values[128];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_256
	{
	private:
		sint32 _values[256];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_512
	{
	private:
		sint32 _values[512];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_1024
	{
	private:
		sint32 _values[1024];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_2048
	{
	private:
		sint32 _values[2048];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_4096
	{
	private:
		sint32 _values[4096];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_8192
	{
	private:
		sint32 _values[8192];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_16384
	{
	private:
		sint32 _values[16384];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_32768
	{
	private:
		sint32 _values[32768];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_65536
	{
	private:
		sint32 _values[65536];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_131072
	{
	private:
		sint32 _values[131072];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_262144
	{
	private:
		sint32 _values[262144];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_524288
	{
	private:
		sint32 _values[524288];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_1048576
	{
	private:
		sint32 _values[1048576];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_2097152
	{
	private:
		sint32 _values[2097152];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_4194304
	{
	private:
		sint32 _values[4194304];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_8388608
	{
	private:
		sint32 _values[8388608];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_16777216
	{
	private:
		sint32 _values[16777216];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint32_16777216x2
	{
	private:
		sint32 _values[33554432];

	public:
		inline sint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_2
	{
	private:
		uint32 _values[2];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_4
	{
	private:
		uint32 _values[4];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_8
	{
	private:
		uint32 _values[8];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}

		inline void set(id value)
		{
			*((id*)_values) = value;
		}
	};

	struct uint32_16
	{
	private:
		uint32 _values[16];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_32
	{
	private:
		uint32 _values[32];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_64
	{
	private:
		uint32 _values[64];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_128
	{
	private:
		uint32 _values[128];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_256
	{
	private:
		uint32 _values[256];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_512
	{
	private:
		uint32 _values[512];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_1024
	{
	private:
		uint32 _values[1024];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_2048
	{
	private:
		uint32 _values[2048];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_4096
	{
	private:
		uint32 _values[4096];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_8192
	{
	private:
		uint32 _values[8192];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_16384
	{
	private:
		uint32 _values[16384];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_32768
	{
	private:
		uint32 _values[32768];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_65536
	{
	private:
		uint32 _values[65536];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_131072
	{
	private:
		uint32 _values[131072];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_262144
	{
	private:
		uint32 _values[262144];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_524288
	{
	private:
		uint32 _values[524288];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_1048576
	{
	private:
		uint32 _values[1048576];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_2097152
	{
	private:
		uint32 _values[2097152];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_4194304
	{
	private:
		uint32 _values[4194304];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_8388608
	{
	private:
		uint32 _values[8388608];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_16777216
	{
	private:
		uint32 _values[16777216];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint32_16777216x2
	{
	private:
		uint32 _values[33554432];

	public:
		inline uint32 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_2
	{
	private:
		sint64 _values[2];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_4
	{
	private:
		sint64 _values[4];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}

		inline void set(id value)
		{
			*((id*)_values) = value;
		}
	};

	struct sint64_8
	{
	private:
		sint64 _values[8];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_16
	{
	private:
		sint64 _values[16];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_32
	{
	private:
		sint64 _values[32];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_64
	{
	private:
		sint64 _values[64];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_128
	{
	private:
		sint64 _values[128];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_256
	{
	private:
		sint64 _values[256];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_512
	{
	private:
		sint64 _values[512];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_1024
	{
	private:
		sint64 _values[1024];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_2048
	{
	private:
		sint64 _values[2048];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_4096
	{
	private:
		sint64 _values[4096];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_8192
	{
	private:
		sint64 _values[8192];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_16384
	{
	private:
		sint64 _values[16384];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_32768
	{
	private:
		sint64 _values[32768];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_65536
	{
	private:
		sint64 _values[65536];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_131072
	{
	private:
		sint64 _values[131072];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_262144
	{
	private:
		sint64 _values[262144];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_524288
	{
	private:
		sint64 _values[524288];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_1048576
	{
	private:
		sint64 _values[1048576];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_2097152
	{
	private:
		sint64 _values[2097152];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_4194304
	{
	private:
		sint64 _values[4194304];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_8388608
	{
	private:
		sint64 _values[8388608];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_16777216
	{
	private:
		sint64 _values[16777216];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct sint64_16777216x2
	{
	private:
		sint64 _values[33554432];

	public:
		inline sint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_2
	{
	private:
		uint64 _values[2];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_4
	{
	private:
		uint64 _values[4];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}

		inline void set(id value)
		{
			*((id*)_values) = value;
		}
	};

	struct uint64_8
	{
	private:
		uint64 _values[8];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_16
	{
	private:
		uint64 _values[16];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_32
	{
	private:
		uint64 _values[32];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_64
	{
	private:
		uint64 _values[64];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_128
	{
	private:
		uint64 _values[128];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_256
	{
	private:
		uint64 _values[256];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_512
	{
	private:
		uint64 _values[512];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_1024
	{
	private:
		uint64 _values[1024];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_2048
	{
	private:
		uint64 _values[2048];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_4096
	{
	private:
		uint64 _values[4096];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_8192
	{
	private:
		uint64 _values[8192];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_16384
	{
	private:
		uint64 _values[16384];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_32768
	{
	private:
		uint64 _values[32768];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_65536
	{
	private:
		uint64 _values[65536];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_131072
	{
	private:
		uint64 _values[131072];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_262144
	{
	private:
		uint64 _values[262144];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_524288
	{
	private:
		uint64 _values[524288];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_1048576
	{
	private:
		uint64 _values[1048576];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_2097152
	{
	private:
		uint64 _values[2097152];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_4194304
	{
	private:
		uint64 _values[4194304];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_8388608
	{
	private:
		uint64 _values[8388608];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_16777216
	{
	private:
		uint64 _values[16777216];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct uint64_16777216x2
	{
	private:
		uint64 _values[33554432];

	public:
		inline uint64 get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, uint64 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_1
	{
	private:
		id _value;

	public:
		inline id get(uint64 index)
		{
			return _value;
		}

		inline void set(uint64 index, id value)
		{
			_value = value;
		}

		inline void set(sint8_32 value)
		{
			_value = _mm256_set_epi8(value.get(31), value.get(30), value.get(29), value.get(28), value.get(27), value.get(26), value.get(25), value.get(24), value.get(23), value.get(22), value.get(21), value.get(20), value.get(19), value.get(18), value.get(17), value.get(16), value.get(15), value.get(14), value.get(13), value.get(12), value.get(11), value.get(10), value.get(9), value.get(8), value.get(7), value.get(6), value.get(5), value.get(4), value.get(3), value.get(2), value.get(1), value.get(0));
		}

		inline void set(uint8_32 value)
		{
			_value = _mm256_set_epi8(value.get(31), value.get(30), value.get(29), value.get(28), value.get(27), value.get(26), value.get(25), value.get(24), value.get(23), value.get(22), value.get(21), value.get(20), value.get(19), value.get(18), value.get(17), value.get(16), value.get(15), value.get(14), value.get(13), value.get(12), value.get(11), value.get(10), value.get(9), value.get(8), value.get(7), value.get(6), value.get(5), value.get(4), value.get(3), value.get(2), value.get(1), value.get(0));
		}

		inline void set(sint16_16 value)
		{
			_value = _mm256_set_epi16(value.get(15), value.get(14), value.get(13), value.get(12), value.get(11), value.get(10), value.get(9), value.get(8), value.get(7), value.get(6), value.get(5), value.get(4), value.get(3), value.get(2), value.get(1), value.get(0));
		}

		inline void set(uint16_16 value)
		{
			_value = _mm256_set_epi16(value.get(15), value.get(14), value.get(13), value.get(12), value.get(11), value.get(10), value.get(9), value.get(8), value.get(7), value.get(6), value.get(5), value.get(4), value.get(3), value.get(2), value.get(1), value.get(0));
		}

		inline void set(sint32_8 value)
		{
			_value = _mm256_set_epi32(value.get(7), value.get(6), value.get(5), value.get(4), value.get(3), value.get(2), value.get(1), value.get(0));
		}

		inline void set(uint32_8 value)
		{
			_value = _mm256_set_epi32(value.get(7), value.get(6), value.get(5), value.get(4), value.get(3), value.get(2), value.get(1), value.get(0));
		}

		inline void set(sint64_4 value)
		{
			_value = _mm256_set_epi64x(value.get(3), value.get(2), value.get(1), value.get(0));
		}

		inline void set(uint64_4 value)
		{
			_value = _mm256_set_epi64x(value.get(3), value.get(2), value.get(1), value.get(0));
		}
	};

	struct id_2
	{
	private:
		id _values[2];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_4
	{
	private:
		id _values[4];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_8
	{
	private:
		id _values[8];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_16
	{
	private:
		id _values[16];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_32
	{
	private:
		id _values[32];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_64
	{
	private:
		id _values[64];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_128
	{
	private:
		id _values[128];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_256
	{
	private:
		id _values[256];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_512
	{
	private:
		id _values[512];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_1024
	{
	private:
		id _values[1024];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_2048
	{
	private:
		id _values[2048];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_4096
	{
	private:
		id _values[4096];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_8192
	{
	private:
		id _values[8192];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_16384
	{
	private:
		id _values[16384];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_32768
	{
	private:
		id _values[32768];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_65536
	{
	private:
		id _values[65536];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_131072
	{
	private:
		id _values[131072];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_262144
	{
	private:
		id _values[262144];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_524288
	{
	private:
		id _values[524288];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_1048576
	{
	private:
		id _values[1048576];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_2097152
	{
	private:
		id _values[2097152];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_4194304
	{
	private:
		id _values[4194304];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_8388608
	{
	private:
		id _values[8388608];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_16777216
	{
	private:
		id _values[16777216];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	struct id_16777216x2
	{
	private:
		id _values[33554432];

	public:
		inline id get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, id value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	template <typename T, uint64 L>
	struct array
	{
	private:
		static_assert(L && !(L & (L - 1)),
			"The capacity of the array must be 2^N."
			);

		T _values[L];

	public:
		inline T get(uint64 index)
		{
			return _values[index & (sizeof(_values) / sizeof(_values[0]) - 1)];
		}

		inline void set(uint64 index, sint32 value)
		{
			_values[index & (sizeof(_values) / sizeof(_values[0]) - 1)] = value;
		}
	};

	// Collection of priority queues of elements with type T and total element capacity L.
	// Each ID pov (point of view) has an own queue.
	template <typename T, uint64 L>
	struct collection
	{
	private:
		static_assert(L && !(L & (L - 1)),
			"The capacity of the collection must be 2^N."
			);

		// Hash map of point of views = element filters, each with one priority queue (or empty)
		struct PoV
		{
			id value;
			sint64 headIndex, tailIndex;
			uint64 population;
		} _povs[L];
		
		// 2 bits per element of _povs: 0b00 = not occupied; 0b01 = occupied; 0b10 = occupied but marked for removal; 0b11 is unused
		// The state "occupied but marked for removal" is needed for finding the index of a pov in the hash map. Setting an entry to
		// "not occupied" in remove() would potentially undo a collision, create a gap, and mess up the entry search.
		uint64 _povOccupationFlags[(L * 2 + 63) / 64];

		// Array of elements (filled sequentially), each belongs to one PoV / priority queue (or is empty)
		struct Element
		{
			T value;
			sint64 prevElementIndex, nextElementIndex;
			sint64 priority;
			sint64 povIndex;
		} _elements[L];
		uint64 _population;

		// Return index of id pov in hash map _povs, or NULL_INDEX if not found
		sint64 _povIndex(const id& pov) const
		{
			sint64 povIndex = pov.m256i_u64[0] & (L - 1);
			for (sint64 counter = 0; counter < L; counter++)
			{
				if (!(_povOccupationFlags[povIndex >> 5] & (1ULL << ((povIndex & 31) << 1))))
				{
					if (!(_povOccupationFlags[povIndex >> 5] & (2ULL << ((povIndex & 31) << 1))))
					{
						return NULL_INDEX;
					}
				}
				else
				{
					if (_povs[povIndex].value == pov)
					{
						return povIndex;
					}
				}

				povIndex = (povIndex + 1) & (L - 1);
			}

			return NULL_INDEX;
		}

	public:
		// Add element to priority queue of ID pov, return elementIndex of new element
		sint64 add(const id& pov, T element, sint64 priority)
		{
			if (_population < capacity())
			{
				// search in pov hash map
				sint64 povIndex = pov.m256i_u64[0] & (L - 1);
				for (sint64 counter = 0; counter < L; counter++)
				{
					if (!(_povOccupationFlags[povIndex >> 5] & (1ULL << ((povIndex & 31) << 1))))
					{
						if (!(_povOccupationFlags[povIndex >> 5] & (2ULL << ((povIndex & 31) << 1))))
						{
							// empty pov entry -> init new priority queue with 1 element
							_povOccupationFlags[povIndex >> 5] |= (1ULL << ((povIndex & 31) << 1));

							_povs[povIndex].value = pov;
							_povs[povIndex].tailIndex = _povs[povIndex].headIndex = _population;
							_povs[povIndex].population = 1;

							copyMem(&_elements[_population].value, &element, sizeof(T));
							_elements[_population].nextElementIndex = _elements[_population].prevElementIndex = NULL_INDEX;
							_elements[_population].priority = priority;
							_elements[_population].povIndex = povIndex;

							return _population++;
						}
					}
					else
					{
						if (_povs[povIndex].value == pov)
						{
							// found pov entry -> insert element in priority queue of pov
							sint64 elementIndex = _povs[povIndex].headIndex;
							while (_elements[elementIndex].priority <= priority) // TODO: Use a more efficient approach instead of simple iteration
							{
								if (_elements[elementIndex].nextElementIndex >= 0)
								{
									elementIndex = _elements[elementIndex].nextElementIndex;
								}
								else
								{
									// insert at the end of the priority queue
									_povs[povIndex].tailIndex = _population;
									_povs[povIndex].population++;

									copyMem(&_elements[_population].value, &element, sizeof(T));
									_elements[_population].prevElementIndex = elementIndex;
									_elements[_population].nextElementIndex = NULL_INDEX;
									_elements[_population].priority = priority;
									_elements[_population].povIndex = povIndex;

									_elements[elementIndex].nextElementIndex = _population;

									return _population++;
								}
							}
							if (_elements[elementIndex].prevElementIndex < 0)
							{
								// insert at the beginning of the priority queue
								_povs[povIndex].headIndex = _population;
								_povs[povIndex].population++;

								copyMem(&_elements[_population].value, &element, sizeof(T));
								_elements[_population].prevElementIndex = NULL_INDEX;
								_elements[_population].nextElementIndex = elementIndex;
								_elements[_population].priority = priority;
								_elements[_population].povIndex = povIndex;

								_elements[elementIndex].prevElementIndex = _population;

								return _population++;
							}
							else
							{
								// insert in the middle of the priority queue (before elementIndex)
								const sint64 newElementIndex = _population;
								const sint64 prevElementIndex = _elements[elementIndex].prevElementIndex;
								const sint64 nextElementIndex = elementIndex;

								_povs[povIndex].population++;

								copyMem(&_elements[newElementIndex].value, &element, sizeof(T));
								_elements[newElementIndex].prevElementIndex = prevElementIndex;
								_elements[newElementIndex].nextElementIndex = nextElementIndex;
								_elements[newElementIndex].priority = priority;
								_elements[newElementIndex].povIndex = povIndex;

								_elements[nextElementIndex].prevElementIndex = newElementIndex;
								_elements[prevElementIndex].nextElementIndex = newElementIndex;

								return _population++;
							}
						}
					}

					povIndex = (povIndex + 1) & (L - 1);
				}
			}

			return NULL_INDEX;
		}

		// Return maximum number of elements that may be stored.
		static constexpr uint64 capacity()
		{
			return L;
		}

		// Remove all povs marked for removal, this is a very expensive operation
		void cleanup()
		{
			// _povs gets occupied over time with entries of type 3 which means they are marked for cleanup.
			// Once cleanup is called it's necessary to remove all these type 3 entries by reconstructing a fresh collection residing in scratchpad buffer.
			// Corresponding elements are be sorted too for faster uniform access, tail and head, prev and next are changed accordingly.
			// Cleanup() called for a collection having only type 3 entries in _povs must give the result equal to reset() memory content wise.

			// Speedup case of empty collection
			if (!population())
			{
				reset();
				return;
			}
			
			// Create empty collection in scratchpad
			collection<T, L> * copy = reinterpret_cast<collection<T, L>*>(::__scratchpad());
			copy->reset();

			// Go through pov hash map. For each pov that is occupied but not marked for removal, insert pov in new collection and copy priority queue in order,
			// sequentially filling entry array of new collection.
			for (sint64 oldPovIndexGroup = 0; oldPovIndexGroup < (L >> 5); oldPovIndexGroup++)
			{
				// Fast skipping of empty entries
				if (_povOccupationFlags[oldPovIndexGroup] == 0)
				{
					continue;
				}

				for (sint64 oldPovIndexOffset = 0; oldPovIndexOffset < 64; oldPovIndexOffset += 2)
				{
					// Only add pov to new collection that are occupied and not marked for removal
					uint64 occupationFlags = (_povOccupationFlags[oldPovIndexGroup] >> oldPovIndexOffset) & 3ULL;
					if (occupationFlags == 1)
					{
						const sint64 oldPovIndex = (oldPovIndexGroup << 5) + (oldPovIndexOffset >> 1);
						const PoV& oldPovEntry = _povs[oldPovIndex];
						const id& pov = oldPovEntry.value;
						const sint64 oldHeadIndex = oldPovEntry.headIndex;
						const sint64 oldTailIndex = oldPovEntry.tailIndex;

						// 1. Insert pov entry in new pov hash map (at empty entry)
						sint64 newPovIndex = pov.m256i_u64[0] & (L - 1);
						for (sint64 counter = 0; counter < L; counter++)
						{
							if ((copy->_povOccupationFlags[newPovIndex >> 5] & (3ULL << ((newPovIndex & 31) << 1))) == 0)
							{
								copy->_povOccupationFlags[newPovIndex >> 5] |= (1ULL << ((newPovIndex & 31) << 1));

								copy->_povs[newPovIndex].value = pov;
								copy->_povs[newPovIndex].headIndex = copy->_population;
								copy->_povs[newPovIndex].tailIndex = copy->_population + oldPovEntry.population - 1;
								copy->_povs[newPovIndex].population = oldPovEntry.population;

								break;
							}

							newPovIndex = (newPovIndex + 1) & (L - 1);
						}

						// 2. Copy priority queue of pov
						sint64 oldElementIndex = oldHeadIndex;
						while (oldElementIndex != NULL_INDEX)
						{
							const sint64 newElementIndex = copy->_population;

							copyMem(&copy->_elements[newElementIndex].value, &_elements[oldElementIndex].value, sizeof(T));
							copy->_elements[newElementIndex].prevElementIndex = (oldElementIndex == oldHeadIndex) ? NULL_INDEX : newElementIndex - 1;
							copy->_elements[newElementIndex].nextElementIndex = (oldElementIndex == oldTailIndex) ? NULL_INDEX : newElementIndex + 1;
							copy->_elements[newElementIndex].priority = _elements[oldElementIndex].priority;
							copy->_elements[newElementIndex].povIndex = newPovIndex;

							++copy->_population;
							oldElementIndex = _elements[oldElementIndex].nextElementIndex;
						}
					}
				}
			}

			// Replace content of this object with cleaned copy
			copyMem(this, copy, sizeof(*this));
		}

		// Return element value at elementIndex.
		inline T element(sint64 elementIndex) const
		{
			return _elements[elementIndex & (L - 1)].value;
		}

		// Return elementIndex of first element in priority queue of pov (or NULL_INDEX if pov is unknown).
		sint64 headIndex(const id& pov) const
		{
			const sint64 povIndex = _povIndex(pov);

			return povIndex < 0 ? NULL_INDEX : _povs[povIndex].headIndex;
		}

		// Return elementIndex of next element in priority queue (or NULL_INDEX if this is the last element).
		sint64 nextElementIndex(sint64 elementIndex) const
		{
			return _elements[elementIndex & (L - 1)].nextElementIndex;
		}

		// Return overall number of elements.
		inline uint64 population() const
		{
			return _population;
		}

		// Return number of elements of specific PoV.
		uint64 population(const id& pov) const
		{
			const sint64 povIndex = _povIndex(pov);

			return povIndex < 0 ? 0 : _povs[povIndex].population;
		}

		// Return point of view elementIndex belongs to (or 0 id if unused).
		id pov(sint64 elementIndex) const
		{
			return _povs[_elements[elementIndex & (L - 1)].povIndex].value;
		}

		// Return elementIndex of previous element in priority queue (or NULL_INDEX if this is the last element).
		sint64 prevElementIndex(sint64 elementIndex) const
		{
			return _elements[elementIndex & (L - 1)].prevElementIndex;
		}

		// Return priority of elementIndex (or 0 id if unused).
		sint64 priority(sint64 elementIndex) const
		{
			return _elements[elementIndex & (L - 1)].priority;
		}

		// Remove element and mark its pov for removal, if the last element.
		void remove(sint64 elementIndex)
		{
			elementIndex &= (L - 1); // Don't use "elementIndex %= _population;" for an non-empty collection to get rid of the following "if (elementIndex < _population)"!
			if (elementIndex < _population)
			{
				const sint64 povIndex = _elements[elementIndex].povIndex;

				if (_povs[povIndex].population)
				{
					if (--_povs[povIndex].population)
					{
						if (_elements[elementIndex].prevElementIndex == NULL_INDEX)
						{
							_povs[povIndex].headIndex = _elements[elementIndex].nextElementIndex;
						}
						else
						{
							_elements[_elements[elementIndex].prevElementIndex].nextElementIndex = _elements[elementIndex].nextElementIndex;
						}
						if (_elements[elementIndex].nextElementIndex == NULL_INDEX)
						{
							_povs[povIndex].tailIndex = _elements[elementIndex].prevElementIndex;
						}
						else
						{
							_elements[_elements[elementIndex].nextElementIndex].prevElementIndex = _elements[elementIndex].prevElementIndex;
						}
					}
					else
					{
						_povOccupationFlags[povIndex >> 5] ^= (3ULL << ((povIndex & 31) << 1));
					}

					if (--_population && elementIndex != _population)
					{
						// Move last element to fill new gap in array
						copyMem(&_elements[elementIndex], &_elements[_population], sizeof(_elements[0]));

						if (_elements[elementIndex].prevElementIndex == NULL_INDEX)
						{
							_povs[_elements[elementIndex].povIndex].headIndex = elementIndex;
						}
						else
						{
							_elements[_elements[elementIndex].prevElementIndex].nextElementIndex = elementIndex;
						}
						if (_elements[elementIndex].nextElementIndex == NULL_INDEX)
						{
							_povs[_elements[elementIndex].povIndex].tailIndex = elementIndex;
						}
						else
						{
							_elements[_elements[elementIndex].nextElementIndex].prevElementIndex = elementIndex;
						}
					}
				}
			}
		}

		// Reinitialize as empty collection.
		void reset()
		{
			setMem(this, sizeof(*this), 0);
		}

		// Return elementIndex of last element in priority queue of pov (or NULL_INDEX if pov is unknown).
		sint64 tailIndex(const id& pov) const
		{
			const sint64 povIndex = _povIndex(pov);

			return povIndex < 0 ? NULL_INDEX : _povs[povIndex].tailIndex;
		}
	};

	//////////

	// Divide a by b, but return 0 if b is 0 (rounding to lower magnitude in case of integers)
	template <typename T>
	inline static T div(T a, T b)
	{
		return b ? (a / b) : 0;
	}

	// Return remainder of dividing a by b, but return 0 if b is 0 (requires modulo % operator)
	template <typename T>
	inline static T mod(T a, T b)
	{
		return b ? (a % b) : 0;
	}

	//////////

	struct Entity
	{
		id id;
		sint64 incomingAmount, outgoingAmount;
		uint32 numberOfIncomingTransfers, numberOfOutgoingTransfers;
		uint32 latestIncomingTransferTick, latestOutgoingTransferTick;
	};

	//////////

#if !defined(NO_UEFI)
	static id arbitrator(
	) {
		return ::__arbitrator();
	}

	static sint64 burn(
		sint64 amount
	) {
		return ::__burn(amount);
	}

	static id computor(
		uint16 computorIndex // [0..675]
	) {
		return ::__computor(computorIndex);
	}

	static uint8 day(
	) { // [1..31]
		return ::__day();
	}

	static uint8 dayOfWeek(
		uint8 year, // (0 = 2000, 1 = 2001, ..., 99 = 2099)
		uint8 month,
		uint8 day
	) { // [0..6]
		return ::__dayOfWeek(year, month, day);
	}

	static uint16 epoch(
	) { // [0..9'999]
		return ::__epoch();
	}

	static bit getEntity(
		id id,
		::Entity& entity
	) { // Returns "true" if the entity has been found, returns "false" otherwise
		return ::__getEntity(id, entity);
	}

	static uint8 hour(
	) { // [0..23]
		return ::__hour();
	}

	static sint64 invocationReward(
	) {
		return ::__invocationReward();
	}

	static id invocator(
	) { // Returns the id of the user/contract who has triggered this contract; returns NULL_ID if there has been no user/contract
		return ::__invocator();
	}

	static sint64 issueAsset(
		uint64 name,
		id issuer,
		sint8 numberOfDecimalPlaces,
		sint64 numberOfShares,
		uint64 unitOfMeasurement
	) {
		return ::__issueAsset(name, issuer, numberOfDecimalPlaces, numberOfShares, unitOfMeasurement);
	}

	template <typename T>
	static id K12(
		T data
	) {
		return __K12(data);
	}

	static uint16 millisecond(
	) { // [0..999]
		return ::__millisecond();
	}

	static uint8 minute(
	) { // [0..59]
		return ::__minute();
	}

	static uint8 month(
	) { // [1..12]
		return ::__month();
	}

	static id nextId(
		id currentId
	) {
		return ::__nextId(currentId);
	}

	static id originator(
	) { // Returns the id of the user who has triggered the whole chain of invocations with their transaction; returns NULL_ID if there has been no user
		return ::__originator();
	}

	static uint8 second(
	) { // [0..59]
		return ::__second();
	}

	static uint32 tick(
	) { // [0..999'999'999]
		return ::__tick();
	}

	static sint64 transfer( // Attempts to transfer energy from this qubic
		id destination, // Destination to transfer to, use NULL_ID to destroy the transferred energy
		sint64 amount // Energy amount to transfer, must be in [0..1'000'000'000'000'000] range
	) { // Returns remaining energy amount; if the value is less than 0 then the attempt has failed, in this case the absolute value equals to the insufficient amount
		return ::__transfer(destination, amount);
	}

	static sint64 transferShareOwnershipAndPossession(
		uint64 assetName,
		id issuer,
		id owner,
		id possessor,
		sint64 numberOfShares,
		id newOwnerAndPossessor
	) { // Returns remaining number of possessed shares satisfying all the conditions; if the value is less than 0 then the attempt has failed, in this case the absolute value equals to the insufficient number
		return ::__transferShareOwnershipAndPossession(assetName, issuer, owner, possessor, numberOfShares, newOwnerAndPossessor);
	}

	static uint8 year(
	) { // [0..99] (0 = 2000, 1 = 2001, ..., 99 = 2099)
		return ::__year();
	}
#endif

	//////////

	#define INITIALIZE public: static void __initialize(CONTRACT_STATE_TYPE& state) { constexpr unsigned int __functionOrProcedureId = (CONTRACT_INDEX << 22) | __LINE__; ::__beginFunctionOrProcedure(__functionOrProcedureId);

	#define BEGIN_EPOCH public: static void __beginEpoch(CONTRACT_STATE_TYPE& state) { constexpr unsigned int __functionOrProcedureId = (CONTRACT_INDEX << 22) | __LINE__; ::__beginFunctionOrProcedure(__functionOrProcedureId);

	#define END_EPOCH public: static void __endEpoch(CONTRACT_STATE_TYPE& state) { constexpr unsigned int __functionOrProcedureId = (CONTRACT_INDEX << 22) | __LINE__; ::__beginFunctionOrProcedure(__functionOrProcedureId);

	#define BEGIN_TICK public: static void __beginTick(CONTRACT_STATE_TYPE& state) { constexpr unsigned int __functionOrProcedureId = (CONTRACT_INDEX << 22) | __LINE__; ::__beginFunctionOrProcedure(__functionOrProcedureId);

	#define END_TICK public: static void __endTick(CONTRACT_STATE_TYPE& state) { constexpr unsigned int __functionOrProcedureId = (CONTRACT_INDEX << 22) | __LINE__; ::__beginFunctionOrProcedure(__functionOrProcedureId);

	#define EXPAND public: static void __expand(CONTRACT_STATE_TYPE& state, CONTRACT_STATE2_TYPE& state2) { constexpr unsigned int __functionOrProcedureId = (CONTRACT_INDEX << 22) | __LINE__; ::__beginFunctionOrProcedure(__functionOrProcedureId);

	#define LOG_DEBUG(message) __logContractDebugMessage(message);

	#define LOG_ERROR(message) __logContractErrorMessage(message);

	#define LOG_INFO(message) __logContractInfoMessage(message);

	#define LOG_WARNING(message) __logContractWarningMessage(message);

	#define PRIVATE(functionOrProcedure) private: static void functionOrProcedure(CONTRACT_STATE_TYPE& state, functionOrProcedure##_input& input, functionOrProcedure##_output& output) { constexpr unsigned int __functionOrProcedureId = (CONTRACT_INDEX << 22) | __LINE__; ::__beginFunctionOrProcedure(__functionOrProcedureId);

	#define PUBLIC(functionOrProcedure) public: static void functionOrProcedure(CONTRACT_STATE_TYPE& state, functionOrProcedure##_input& input, functionOrProcedure##_output& output) { constexpr unsigned int __functionOrProcedureId = (CONTRACT_INDEX << 22) | __LINE__; ::__beginFunctionOrProcedure(__functionOrProcedureId);

	#define REGISTER_USER_FUNCTIONS public: static void __registerUserFunctions() { constexpr unsigned int __functionOrProcedureId = (CONTRACT_INDEX << 22) | __LINE__; ::__beginFunctionOrProcedure(__functionOrProcedureId);

	#define REGISTER_USER_PROCEDURES public: static void __registerUserProcedures() { constexpr unsigned int __functionOrProcedureId = (CONTRACT_INDEX << 22) | __LINE__; ::__beginFunctionOrProcedure(__functionOrProcedureId);

	#define _ ::__endFunctionOrProcedure(__functionOrProcedureId); }

	#define REGISTER_USER_FUNCTION(userFunction, inputType) __registerUserFunction((USER_FUNCTION)userFunction, inputType, sizeof(userFunction##_input), sizeof(userFunction##_output));

	#define REGISTER_USER_PROCEDURE(userProcedure, inputType) __registerUserProcedure((USER_PROCEDURE)userProcedure, inputType, sizeof(userProcedure##_input), sizeof(userProcedure##_output));

	#define SELF _mm256_set_epi64x(0, 0, 0, CONTRACT_INDEX)
}