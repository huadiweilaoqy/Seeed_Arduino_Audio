#include "clarinet_samples.h"
const AudioSynthWavetable::sample_data clarinet_samples[2] = {
    {
        (int16_t*)sample_0_clarinet_clarinetd2, // sample
        true, // LOOP
        10, // LENGTH_BITS
        (1 << (32 - 10))* WAVETABLE_CENTS_SHIFT(0) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(74) / AUDIO_SAMPLE_RATE_EXACT + 0.5,  // PER_HERTZ_PHASE_INCREMENT
        ((uint32_t)676 - 1) << (32 - 10), // MAX_PHASE
                            ((uint32_t)671 - 1) << (32 - 10), // LOOP_PHASE_END
                            (((uint32_t)671 - 1) << (32 - 10)) - (((uint32_t)596 - 1) << (32 - 10)), // LOOP_PHASE_LENGTH
                            uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-2.2)), // INITIAL_ATTENUATION_SCALAR
                            uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
                            uint32_t(6.20 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
                            uint32_t(20.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
                            uint32_t(20.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
                            uint32_t(100.02 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
                            int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-5.5)) * AudioSynthWavetable::UNITY_GAIN), // SUSTAIN_MULT
                            uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // VIBRATO_DELAY
                            uint32_t(0.1 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
                            (WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
                            (1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
                            uint32_t(260.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // MODULATION_DELAY
                            uint32_t(5.0 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
                            (WAVETABLE_CENTS_SHIFT(9) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
                            (1.0 - WAVETABLE_CENTS_SHIFT(-9)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
                            int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
                            int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
    },
    {
        (int16_t*)sample_1_clarinet_clarinetb2, // sample
        true, // LOOP
        10, // LENGTH_BITS
        (1 << (32 - 10))* WAVETABLE_CENTS_SHIFT(49) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(80) / AUDIO_SAMPLE_RATE_EXACT + 0.5,  // PER_HERTZ_PHASE_INCREMENT
        ((uint32_t)700 - 1) << (32 - 10), // MAX_PHASE
                            ((uint32_t)695 - 1) << (32 - 10), // LOOP_PHASE_END
                            (((uint32_t)695 - 1) << (32 - 10)) - (((uint32_t)586 - 1) << (32 - 10)), // LOOP_PHASE_LENGTH
                            uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-2.2)), // INITIAL_ATTENUATION_SCALAR
                            uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
                            uint32_t(6.20 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
                            uint32_t(20.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
                            uint32_t(20.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
                            uint32_t(100.02 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
                            int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-5.5)) * AudioSynthWavetable::UNITY_GAIN), // SUSTAIN_MULT
                            uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // VIBRATO_DELAY
                            uint32_t(0.1 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
                            (WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
                            (1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
                            uint32_t(260.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // MODULATION_DELAY
                            uint32_t(5.0 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
                            (WAVETABLE_CENTS_SHIFT(9) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
                            (1.0 - WAVETABLE_CENTS_SHIFT(-9)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
                            int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
                            int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
    },
};

const uint32_t sample_0_clarinet_clarinetd2[384] = {
    0x00000000, 0x033d02a9, 0x03750270, 0x02830366, 0x02d90328, 0x038b029b, 0x025502c9, 0x02b6030f,
    0x034702c7, 0x02fb02cc, 0x03050374, 0x03520331, 0x02a402a7, 0x0208028b, 0x01dc0214, 0x01400155,
    0x00b40117, 0x00050064, 0xff70ff97, 0xfedaff5d, 0xfe20fe6c, 0xfdb9fdaf, 0xfd89fdaf, 0xfe03fde9,
    0xfdfbfdf3, 0xfe16fdf3, 0xfe45fe5f, 0xfdc8fded, 0xfd8efd75, 0xfdc1fddc, 0xfe06fdf1, 0xfea5fe1a,
    0xff07fee9, 0xffaaff76, 0x00d1001f, 0x0180011a, 0x027701f5, 0x03580303, 0x03bd0399, 0x04d70471,
    0x051904be, 0x04d104eb, 0x054e0567, 0x050b0538, 0x04a50491, 0x049c04c8, 0x049f04a2, 0x04b5048d,
    0x04b404ee, 0x047b04b3, 0x0428043c, 0x02fb03af, 0x027402f3, 0x017d01c1, 0xff6b0067, 0xfea5ff4e,
    0xfdaafe20, 0xfc69fce0, 0xfb63fbea, 0xfb9dfb81, 0xfb9afb85, 0xfae8fb38, 0xfaf4fb24, 0xfb15fb04,
    0xfb05faaf, 0xfb98fb88, 0xfbcafbc4, 0xfc0dfbb5, 0xfc82fc60, 0xfd4dfcd6, 0xfe6bfda6, 0xff6bff1b,
    0x00b70027, 0x02cc0185, 0x04cd03ec, 0x063e058e, 0x07c606fb, 0x088b0870, 0x0881087d, 0x094008e9,
    0x08ed0901, 0x08aa08e9, 0x089c08f5, 0x08b1085f, 0x08670849, 0x0735082b, 0x07210752, 0x068c06d3,
    0x053405be, 0x045d04a2, 0x030a03df, 0x00f80222, 0xfea1ffde, 0xfc42fd4e, 0xf9f3fafa, 0xf858f928,
    0xf70af7db, 0xf5eff670, 0xf4d6f537, 0xf4f7f4a3, 0xf564f543, 0xf5abf59e, 0xf6a2f624, 0xf7d8f6f9,
    0xf844f836, 0xf8f7f8cd, 0xfa38f950, 0xfbb5fb04, 0xfdd9fcd4, 0x0104ff19, 0x034f0248, 0x05810478,
    0x085d06f5, 0x0b7609c8, 0x0e170cb1, 0x0f800f04, 0x10ab102e, 0x11741125, 0x107a10fb, 0x0f660ff9,
    0x0e8b0f20, 0x0cc50dae, 0x0c1f0c2b, 0x0b8d0bf6, 0x0a470b03, 0x08f209af, 0x07810845, 0x059406b0,
    0x027a0400, 0xff4400f8, 0xfbc2fdd4, 0xf7d8f98d, 0xf41df5f9, 0xefe0f200, 0xece7ee57, 0xeab9ebf4,
    0xe98ae9a2, 0xe966e93a, 0xe9dfe9c8, 0xec16eacc, 0xef36ed47, 0xf278f107, 0xf58ff429, 0xf86cf6e1,
    0xfa48f981, 0xfb4cfaf3, 0xfcb6fbed, 0xffd1fdca, 0x04dc0227, 0x0a6307d5, 0x10490d4d, 0x15d21306,
    0x1a86187d, 0x1da41c4f, 0x1ed21e75, 0x1e0f1ee9, 0x1b3b1c6a, 0x17f2199f, 0x13f81660, 0x1177123b,
    0x0f5f1033, 0x0e440f1b, 0x0e7a0e0e, 0x0db10e10, 0x0b360ca3, 0x07f70a35, 0x04220594, 0xfe3d0121,
    0xf7ddfbd2, 0xf177f472, 0xe9eded8e, 0xe129e5eb, 0xdad9dd95, 0xd688d7e7, 0xd4a3d5d8, 0xd711d577,
    0xdcd4d8f7, 0xe54ae0fe, 0xf0e2eb77, 0xf98bf532, 0xfcc0fb8f, 0xfc64fde4, 0xf7b6fa40, 0xf2eff461,
    0xf2a0f2a4, 0xf821f4c7, 0x0229fc08, 0x0d62080f, 0x1b6014a2, 0x27ec2194, 0x31562ca7, 0x37903599,
    0x374c384d, 0x2fa73410, 0x23bb29d1, 0x176f1dd0, 0x0bca1179, 0x06f60809, 0x0bf10901, 0x1607113e,
    0x19841754, 0x15d3191f, 0x108d13b8, 0x0a670cda, 0x067f085f, 0x034a0547, 0xfaabff67, 0xec81f444,
    0xdcb3e4eb, 0xce5dd4be, 0xbf16c6a8, 0xb7ddba85, 0xb97cb714, 0xc5bcbda3, 0xdf53d260, 0xf7e2ec96,
    0x06e2ff88, 0x0bab0b70, 0x034309eb, 0xef9ff8d9, 0xe180e699, 0xe03adff5, 0xeb35e547, 0xf4aaef67,
    0x009ef9bb, 0x127d0a0e, 0x2058190a, 0x33f12995, 0x46853e8d, 0x53e34cb3, 0x58095887, 0x482d5444,
    0x212a3564, 0xf9150af7, 0xeaa2ee99, 0x0049f302, 0x1a660dbd, 0x2a4e2432, 0x26bb2b2c, 0x17e4209c,
    0x0d250fba, 0x0ca40bba, 0x123f111c, 0x116311c6, 0x03f20c89, 0xe957f95a, 0xc86bd6df, 0xac4eb80f,
    0xa7dfa9cd, 0xa95ca7ea, 0xb143aa77, 0xcd1ebdc1, 0xea45de6a, 0xfa0ff07c, 0x0fa505c9, 0x19961989,
    0x02a80e57, 0xe56ff48e, 0xd041d996, 0xd516cf7c, 0xd8a7d6fa, 0xe703dcca, 0x0a89f8d6, 0x1bb21656,
    0x273e1ebd, 0x3efc3429, 0x52de495c, 0x62f5593e, 0x6d5f6ce1, 0x4f316411, 0x122430dc, 0xdbb0f4ec,
    0xdf16d447, 0x0c9df28c, 0x2ad22094, 0x3a163573, 0x2da336d2, 0x0da11c3c, 0x07e7085a, 0x15b50cab,
    0x1d161a7e, 0x19b91e59, 0x0cc514d0, 0xe2fbfa14, 0xb365ca7f, 0x9b9da454, 0x9360941f, 0x9da99896,
    0xb8c6a8c9, 0xdf53cb5f, 0xef3dec5f, 0xf694ef28, 0x10320331, 0x13d91639, 0xfe790aa3, 0xdccaee0e,
    0xca5ad00c, 0xcef3cc3e, 0xccb7ccfb, 0xea2cd639, 0x10f5fed0, 0x1be019d9, 0x2e3f237c, 0x45b5395e,
    0x57f74f1d, 0x6fe963db, 0x74b876fa, 0x461163fd, 0xffd2233f, 0xce4edfef, 0xe3e4d1dd, 0x174dfd82,
    0x380a2a6c, 0x408e411a, 0x24ee36f2, 0x0a911411, 0x0a47074b, 0x17251148, 0x1ccb1b31, 0x1a541be7,
    0x034a144a, 0xcf9dea9a, 0xa782b7c5, 0x93399d06, 0x93328f4c, 0xa4d798e0, 0xc7c3b4a8, 0xeb7ddcec,
    0xef73f024, 0x0217f59f, 0x15cd0f27, 0x0aa613e4, 0xeeb0fece, 0xd046dd2f, 0xcc38ca82, 0xccfbceeb,
    0xd026caba, 0x0000de92, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

const uint32_t sample_1_clarinet_clarinetb2[384] = {
    0x00000000, 0x019001fb, 0x00860104, 0xff50fffb, 0xfe3dfeae, 0xfd6cfdde, 0xfce5fd0e, 0xfcbcfcca,
    0xfd08fce4, 0xfd4afd17, 0xfe09fdaa, 0xfe2efe3c, 0xfdc6fdfb, 0xfd02fd7a, 0xfcaafca8, 0xfcebfcd3,
    0xfd34fcfa, 0xfe5ffdad, 0x0017ff34, 0x01bc00f5, 0x03220274, 0x03e203a1, 0x043003fc, 0x0482046d,
    0x04410470, 0x03ec040e, 0x03da03e2, 0x03d003cd, 0x03de03d7, 0x03b803cd, 0x03d603c0, 0x034803b9,
    0x01950290, 0xffc40099, 0xfeb8ff1c, 0xfea6fe8a, 0xff31feee, 0xff36ff50, 0xfed5ff1c, 0xfe2efe5c,
    0xfd8cfdf1, 0xfca6fd14, 0xfc4bfc60, 0xfccefc88, 0xfd60fd0d, 0xfe16fdb4, 0xff68feae, 0x009c000a,
    0x01b6012a, 0x029a022e, 0x02d402dc, 0x028d02b2, 0x02660274, 0x02900278, 0x02f70296, 0x03890342,
    0x042803ea, 0x03f60444, 0x0304038d, 0x014d0244, 0xff4a0033, 0xfdb8fe76, 0xfca1fd1e, 0xfbd8fc26,
    0xfbd4fbe2, 0xfb44fba4, 0xfab0fae3, 0xfa6efa82, 0xfa34fa2a, 0xfa3cfa4c, 0xfa23fa4c, 0xfa56fa28,
    0xfb26faa9, 0xfc84fbb2, 0xfeaafd80, 0x005eff9f, 0x02040128, 0x039202da, 0x04c80441, 0x0564052f,
    0x060205a2, 0x06ad0651, 0x073e06fb, 0x07800756, 0x0749078c, 0x072e0726, 0x06e30734, 0x057a0640,
    0x03c604b8, 0x019402a0, 0xffd400aa, 0xfe36ff02, 0xfd54fdb2, 0xfcaefcec, 0xfbf9fc67, 0xfaeefb68,
    0xf9d8fa7c, 0xf8b8f944, 0xf788f81c, 0xf6e4f6ec, 0xf826f75f, 0xfa4ef92c, 0xfce8fb93, 0xff56fe38,
    0x010c0058, 0x029a01cb, 0x03ea0330, 0x050c0454, 0x06d2060c, 0x0760073a, 0x07910794, 0x075e078a,
    0x06e00720, 0x066406a9, 0x059e05fa, 0x03fa04d6, 0x018402df, 0xff200054, 0xfd36fe30, 0xfb76fc34,
    0xfa5efad2, 0xf918f9b0, 0xf7a4f85c, 0xf659f712, 0xf4a5f591, 0xf336f3e3, 0xf269f2c6, 0xf274f247,
    0xf38cf2c8, 0xf5c4f494, 0xf852f726, 0xfae8f991, 0xfe66fc70, 0x02ec0090, 0x072e052e, 0x0a9408fc,
    0x0cca0bd6, 0x0e060d8d, 0x0e8e0e78, 0x0e400e70, 0x0dc60dee, 0x0cce0d70, 0x0a2c0ba8, 0x07d508ec,
    0x060206ea, 0x04c80555, 0x0378041a, 0x00d90261, 0xfd5cff1e, 0xfa12fbbc, 0xf6c4f86d, 0xf3e4f538,
    0xf1d4f2bc, 0xf13df15e, 0xf15ef136, 0xf21ef1b8, 0xf2daf282, 0xf368f31a, 0xf49cf3de, 0xf71cf5b6,
    0xfac8f8cc, 0xffcefd36, 0x052e0272, 0x0b16080e, 0x109c0dee, 0x13ca12ae, 0x13e21423, 0x11ca130e,
    0x0e841068, 0x09a10c38, 0x0516070e, 0x03fa0402, 0x057e0482, 0x081e06c4, 0x090a090b, 0x051007d2,
    0xfcc3014d, 0xf2aef7c0, 0xeaceee24, 0xe792e89a, 0xe7b7e742, 0xea7fe8de, 0xef24ecca, 0xf2d4f155,
    0xf372f377, 0xf12cf27c, 0xee9befc4, 0xed3aedb8, 0xef06ed98, 0xf68cf203, 0x02bcfc44, 0x10880958,
    0x1f8c1853, 0x29b4253d, 0x29f32b77, 0x1d3525b0, 0x076b1260, 0xf6d0fda0, 0xf48af3b3, 0x00c4f932,
    0x12c60998, 0x20661ac9, 0x21b7230e, 0x14a61c76, 0x00ec0b62, 0xec4cf65a, 0xdd58e38e, 0xd9d6da24,
    0xdfafdbc4, 0xeca7e57f, 0xf970f3d9, 0xfd92fcbc, 0xfa64fc9a, 0xf1b6f6a7, 0xe6c6ec2a, 0xdfeae276,
    0xe11fdfbc, 0xeb0ce4b4, 0x016cf3f7, 0x20ff1117, 0x3ed530e6, 0x466946bf, 0x2b433d48, 0xfec8150d,
    0xe23decbb, 0xe269df28, 0xf4b8ea2e, 0x11bc0219, 0x2f52217c, 0x3d31396a, 0x31f43a2d, 0x10f5239a,
    0xe9c8fd1c, 0xcb6dd92c, 0xc0cdc291, 0xce2ec4d5, 0xea80db94, 0x00e0f817, 0x04930468, 0xff9e031e,
    0xf2cff9ee, 0xe2d0ead8, 0xd7c8dbd7, 0xd25bd4b6, 0xd147d14c, 0xe405d6b6, 0x0f37f7cd, 0x469f2c0c,
    0x63b3591c, 0x494f5e15, 0x0bfe2ba6, 0xe08ef1c6, 0xd747d83c, 0xe607dcd4, 0x0808f4d2, 0x2dde1b8a,
    0x47083cfb, 0x4e234cc5, 0x39564794, 0x039021ac, 0xca45e56c, 0xad70b747, 0xb88dae3c, 0xe1d0ca86,
    0x0536f664, 0x0c5a0b64, 0x08440bcf, 0xf868027e, 0xe5d4ee84, 0xd8d9ddfe, 0xcacdd302, 0xbdd9c30f,
    0xc868bd17, 0xfa38dd9a, 0x443a1d5a, 0x73af61b0, 0x623b765f, 0x1a96404f, 0xe177f964, 0xcd2bd365,
    0xd91acfca, 0x0116e94a, 0x2e0a1959, 0x4d393f40, 0x60705791, 0x565160dd, 0x1f9941b0, 0xd352f927,
    0xa209b3f8, 0xa71e9ccc, 0xd4d8bb41, 0x0116eea0, 0x0d350b68, 0x085d0c1a, 0xf8ba01bc, 0xe764ee66,
    0xdc5fe158, 0xcdc6d766, 0xb9a2c331, 0xb6d7b332, 0xde6bc659, 0x27e2fde0, 0x6b174e63, 0x75b77c2f,
    0x37b65c63, 0xf28c11ca, 0xd046dc60, 0xd332cd8b, 0xf23edeb3, 0x1f9309bf, 0x4444336a, 0x5db951d8,
    0x5fd16448, 0x3326501f, 0xe7260dc7, 0xac2cc442, 0xa3e5a090, 0xcb52b362, 0xfc16e685, 0x0d4209bc,
    0x089e0bd2, 0xfc220320, 0xea45f230, 0xde43e3b8, 0xd2b7d9ee, 0xbe58c865, 0xb445b68f, 0xd4aabf4c,
    0x1831f1fa, 0x62694227, 0x7b0b7772, 0x451b6720, 0xfbe81e7f, 0xd31ae2b0, 0xce61cc0d, 0xe8c8d7c2,
    0x19590104, 0x400a2e45, 0x5a664ec6, 0x644b640a, 0x4365594f, 0xf9022047, 0xb2edd270, 0x9c44a104,
    0xbbaea71e, 0xef2cd586, 0x0b770164, 0x0c1a0d30, 0x010e0818, 0x0000f77d, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};
