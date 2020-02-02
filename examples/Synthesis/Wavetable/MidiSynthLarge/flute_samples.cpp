#include "flute_samples.h"
const AudioSynthWavetable::sample_data flute_samples[1] = {
    {
        (int16_t*)sample_0_flute_flutec4, // sample
        true, // LOOP
        11, // LENGTH_BITS
        (1 << (32 - 11))* WAVETABLE_CENTS_SHIFT(-28) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(89) / AUDIO_SAMPLE_RATE_EXACT + 0.5,  // PER_HERTZ_PHASE_INCREMENT
        ((uint32_t)1431 - 1) << (32 - 11), // MAX_PHASE
                             ((uint32_t)1427 - 1) << (32 - 11), // LOOP_PHASE_END
                             (((uint32_t)1427 - 1) << (32 - 11)) - (((uint32_t)1365 - 1) << (32 - 11)), // LOOP_PHASE_LENGTH
                             uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-0.0)), // INITIAL_ATTENUATION_SCALAR
                             uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
                             uint32_t(59.03 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
                             uint32_t(160.06 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
                             uint32_t(5819.25 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
                             uint32_t(100.02 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
                             int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-3.4)) * AudioSynthWavetable::UNITY_GAIN), // SUSTAIN_MULT
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

const uint32_t sample_0_flute_flutec4[768] = {
    0x00000000, 0x024300df, 0xfecd0140, 0xffe5fdec, 0xfeb00179, 0x0306fecd, 0x021d0534, 0x021bfe27,
    0xfe0601f2, 0xff2dfc12, 0x059e0458, 0xfab70015, 0x0413ffc2, 0x01780416, 0x038e00fb, 0x03ee06d8,
    0x09340901, 0xfcfbff58, 0x04bcff1a, 0x030509c9, 0x03b8fcf8, 0x02c7098a, 0x026600aa, 0x04f30571,
    0xf668fba5, 0x01f0fb64, 0x07030392, 0x05d2059b, 0xfe98000d, 0x047efe03, 0x086501ed, 0x08920ceb,
    0x05fe06cb, 0xfc4efe22, 0xf839fee5, 0x0b7a0435, 0x00c00532, 0x007cff84, 0x0076ff34, 0x0214fd9f,
    0xfee2017d, 0x065e04a2, 0x004c086b, 0xfaa7fe91, 0x09460051, 0x0b8b0a0e, 0x06840a45, 0x00d6ffb1,
    0x026b0207, 0xff4afce5, 0x073c025e, 0xfd6a0455, 0xf5f6fd4f, 0x020df8bd, 0x017c0246, 0x00a1031d,
    0x0586033e, 0xf6e2fc5c, 0xfd8cf477, 0x0fcb0937, 0x07490b64, 0x077607e1, 0xfec7fbd4, 0xfa89fcde,
    0x09eb02ed, 0x0a4b082b, 0xfaa60475, 0xf4a6f7da, 0xf9fff74c, 0xfef2f489, 0x0af40db2, 0xf7ec0142,
    0xf61bf0c4, 0xfce7f900, 0x0b3e0b02, 0x0efc0a77, 0x00c808d6, 0x0155012d, 0xf753f7c2, 0x0b7cfe35,
    0x0937074e, 0x04de088d, 0xf6bffdb7, 0xef62f212, 0xfb42f071, 0x075f0475, 0x014809fe, 0xf08bf6b1,
    0xf885f38d, 0x0051fdba, 0x11d00af8, 0x122210b4, 0x01010cd5, 0xf80cf799, 0x009afca3, 0x05bd02b6,
    0x08250975, 0xfa8402cc, 0xf305f242, 0xf641f4e7, 0xfe0afa56, 0x0226043c, 0xf9ab0360, 0xefcff379,
    0xf6b2f349, 0x0ee50227, 0x15cf138e, 0x0f631522, 0x010b06a7, 0xfc23fcfb, 0xfd39fa5e, 0x06e20383,
    0xfeab041a, 0xfa14fd14, 0xf398f67d, 0xf7a4f43b, 0xff0bfb55, 0xfd9bfe26, 0xf945fd04, 0xf357f5fa,
    0x01f9f740, 0x12860b78, 0x173917ae, 0x0eab1429, 0x0148076a, 0xfad7fd87, 0x00c5fe79, 0x00dfff83,
    0xfb30ff5d, 0xf700f9f4, 0xf00cf1a3, 0xf7fdf2ad, 0xfdd4fb9f, 0xffce0023, 0xf603fbbc, 0xf8f4f568,
    0x0a40ffec, 0x1516124e, 0x1a8f18bc, 0x0aab174d, 0xfd6f080f, 0xfcfffac1, 0xfb8affc8, 0xfa86ff58,
    0xf891f6e4, 0xecb7f638, 0xf173ed9b, 0xfaeff1a3, 0xfa75fe7e, 0xfd67fef9, 0xfbb1f9e1, 0xfdbffd09,
    0x0e4105fc, 0x1d691626, 0x18051bb7, 0x0e0b137c, 0xfd2805ba, 0xfb65f928, 0xfa41fa53, 0xf96bfc0c,
    0xf013f5cd, 0xea4febe2, 0xea5aea86, 0xfc16f313, 0x016afe70, 0xfc7702bc, 0xff98fbb8, 0x05da0243,
    0x14180fa7, 0x1efd1dbe, 0x1a911936, 0x04e112e6, 0xfbf000c2, 0xf79ef9c0, 0xfaa4f888, 0xf0bdfa40,
    0xe90febdc, 0xe286e617, 0xf142e665, 0xffe9f97e, 0x029002f0, 0x02fe02c1, 0x03fc02cf, 0x12aa0ba1,
    0x1b6e1853, 0x1b4e1c79, 0x100c1b1f, 0x038c0b02, 0xf713fb94, 0xf802fa14, 0xf67ef8a1, 0xeab1f073,
    0xdcebe40d, 0xe508dd7e, 0xf0c5e942, 0x006bfba5, 0x08ec065d, 0x0e7a08ca, 0x105f0ef6, 0x1b8517f7,
    0x19a41a77, 0x16171873, 0x0bca12a3, 0xffd603cf, 0xf9c7fc1c, 0xf607f7ad, 0xf003f234, 0xdee4e914,
    0xdbadda5d, 0xe13edb55, 0xf6b2eb8e, 0x069500d3, 0x111808e8, 0x19f614ae, 0x20201e8b, 0x20c520c3,
    0x13951c12, 0x0aa80e1e, 0x066708f3, 0x002c0297, 0xf859fbf6, 0xf0a7f685, 0xe1bde8bf, 0xd6d4dbce,
    0xd6f9d30f, 0xe488db26, 0xfc26f2a4, 0x0b2804d6, 0x1a3611b5, 0x2c2925b9, 0x29822cf0, 0x1cfc258f,
    0x07550e1c, 0x03a80450, 0x047f0520, 0x00fe035f, 0xf5a2fb3e, 0xe126ee53, 0xd3c1daa3, 0xd038cfde,
    0xda8fd57c, 0xed24e462, 0x00dbf545, 0x11120b2f, 0x2f662017, 0x3c2536ec, 0x2ed939ef, 0x057e1cfb,
    0xfae8fbfe, 0x0659ffe5, 0x08f8087f, 0xfe97050f, 0xe760f4c4, 0xd31eda80, 0xca0ccbd4, 0xd27ccf37,
    0xe433db9d, 0xf210eab1, 0x0450faa9, 0x25ad11be, 0x478a38a4, 0x4a0f4b90, 0x1ac0399c, 0xf201fe7b,
    0xfb9df1d8, 0x0ba20648, 0x0bd90dcb, 0xf38701a1, 0xd26ee2a0, 0xc353c831, 0xcdb3c53b, 0xdc5bd578,
    0xe8b8e33c, 0xf562edab, 0x100afd17, 0x40b62ab3, 0x5c39537e, 0x418a5905, 0xf73d1a28, 0xea26e83f,
    0x06e0f7b3, 0x13901056, 0x02861011, 0xdef5f175, 0xc0b0cc0e, 0xc0f1bc83, 0xd77dcb81, 0xe82cdf11,
    0xebe2e969, 0xf95aef37, 0x2c100e32, 0x5dbd491d, 0x62a36a8a, 0x1ae44467, 0xdfb0f258, 0xf2b9e37e,
    0x14260623, 0x15201927, 0xf090073f, 0xc54bd8eb, 0xb5b6b7dd, 0xc9f7bc86, 0xe475d802, 0xea59eade,
    0xec4be99b, 0x0d14f63d, 0x4bab2b94, 0x6f8d6597, 0x4a616825, 0xed2f18f5, 0xdf71dc8b, 0x058df05b,
    0x1c6014d0, 0x09d71a63, 0xd7def230, 0xb45fc057, 0xb76eb0ef, 0xd9dbc8c3, 0xed27e57c, 0xe9d0ed3e,
    0xf4b6ead3, 0x2e1f0bf9, 0x69a14f59, 0x6be27575, 0x15324a89, 0xd931ea17, 0xef98dd6a, 0x16630503,
    0x1df21feb, 0xf4be0d03, 0xbeacd82f, 0xae06b121, 0xc442b51b, 0xe594d709, 0xed2aed7e, 0xeb4cea54,
    0x0e5df5e6, 0x51c4307d, 0x76726de4, 0x47c66af8, 0xe76e0f7a, 0xdd7ed9f7, 0x06d6ef8d, 0x217815bb,
    0x0f832045, 0xd988f6c0, 0xaf24bdf8, 0xb2b9aa78, 0xd501c539, 0xeda6e472, 0xea8fecc2, 0xf7adeb3a,
    0x33e51143, 0x6dc35576, 0x69177620, 0x0c3044e3, 0xd975e743, 0xef32dd7a, 0x15fa04e6, 0x21fa223f,
    0xf8c810d4, 0xbf1cd9e5, 0xa84bae29, 0xbd92adbe, 0xe589d379, 0xef28eee0, 0xec68ec2b, 0x121ff913,
    0x550f3353, 0x78456fda, 0x44216aab, 0xe521058a, 0xdcfdd7bb, 0x054cefb7, 0x24f51665, 0x12f523ea,
    0xdb29fa9d, 0xac7ebe62, 0xaba9a66b, 0xd239bb61, 0xef31e43c, 0xed78f045, 0xfabbece8, 0x34f9122c,
    0x6de35720, 0x69277782, 0x0621400f, 0xd6bbe4e9, 0xeff8def8, 0x17810494, 0x23f324fd, 0xfb8c14f7,
    0xc13fdd98, 0xa2eead6c, 0xba04a7a9, 0xe43bd126, 0xf2a8efc2, 0xf01fefcc, 0x12e8fba2, 0x56503450,
    0x77ad6e57, 0x41a1698f, 0xe3060734, 0xdc62d585, 0x047aee8c, 0x24d61646, 0x183326eb, 0xdeebfe18,
    0xabecc19e, 0xa5c6a310, 0xcfacb916, 0xeff3e31d, 0xf221f39d, 0xfe40f31e, 0x3366139e, 0x6eec5595,
    0x66d07703, 0x04ed3e71, 0xd60ce42d, 0xeccfdad7, 0x19430461, 0x2699275a, 0xfe051646, 0xc27edea4,
    0xa2b9ace6, 0xb5c0a66f, 0xe183cdf2, 0xf524f0ac, 0xf56cf391, 0x15ec0059, 0x546c34fe, 0x6fc36a55,
    0x3f4d6578, 0xe4100785, 0xdc34d678, 0x0575ee58, 0x25ac17d7, 0x16ed25a6, 0xe03dffa2, 0xac6bc311,
    0xa304a1ed, 0xcbcfb23f, 0xf045e033, 0xf66bf63f, 0x029bf83c, 0x3263153b, 0x68565291, 0x64a6707b,
    0x087a3c8c, 0xd7abe65a, 0xf016dd37, 0x17a704f5, 0x26632690, 0x003c1869, 0xc42de120, 0xa059aac9,
    0xaf7fa3c7, 0xe164c60c, 0xf730f0fe, 0xf8ccf900, 0x156e01d5, 0x5125313e, 0x6f83696c, 0x3a0d624d,
    0xe5b5063c, 0xddabd8d7, 0x05b1f16e, 0x253f1860, 0x18d1255c, 0xe3e4028b, 0xae8fc53c, 0xa0909efe,
    0xc7e7afbe, 0xef72de26, 0xf8aff694, 0x04a6fb83, 0x32e816e6, 0x6685503c, 0x5d486bdb, 0x07fc384a,
    0xda51e66e, 0xf155dff6, 0x17aa05e0, 0x24b823be, 0x048f1975, 0xc86be728, 0xa158af54, 0xade0a219,
    0xd9e0c370, 0xf696ecc0, 0xfe91fbb1, 0x19340687, 0x4ed0330d, 0x6b12636a, 0x3726587d, 0xe99806f1,
    0xdfc8da46, 0x06d9f146, 0x23641738, 0x199524c1, 0xea340630, 0xb1f7cb74, 0xa12ea21e, 0xbfe5abde,
    0xea75d86d, 0xfce7f60e, 0x088d0115, 0x33711a7f, 0x60c84e34, 0x569466ef, 0x070d35b2, 0xdcc1e7c3,
    0xf3aee2cb, 0x16ec08ab, 0x23872134, 0x072a1905, 0xcf54ed1a, 0xa5c5b526, 0xab90a2b4, 0xd212bd58,
    0xf3b0e823, 0x025efd48, 0x1ab10a98, 0x4ac53398, 0x63045f64, 0x335854d1, 0xe8f407d7, 0xe40bdfab,
    0x07ccf4a6, 0x204c157c, 0x19be2301, 0xf04508e3, 0xb84ad23f, 0xa2b8a7e3, 0xbbd2abf6, 0xe4b9cf20,
    0xfc60f17a, 0x0be5039f, 0x33351bd9, 0x5b1b4a79, 0x524960c9, 0x08c0336f, 0xdfc9eb52, 0xf77de4c3,
    0x16b70a14, 0x22b420f1, 0x095d193a, 0xd445effa, 0xabe3bca8, 0xac0aa57d, 0xccc9b7f3, 0xf0e8dde8,
    0x04a0fd1a, 0x1cef0c56, 0x49cc320d, 0x5af95901, 0x32c04d20, 0xec3907f7, 0xe882e22a, 0x0a46fabe,
    0x20751725, 0x178f2095, 0xf23e08f6, 0xc235d8f7, 0xa682ae9e, 0xb766ac72, 0xdc79c65f, 0xfce9edba,
    0x0dcc0722, 0x31961cb8, 0x55e646b9, 0x4b1558bd, 0x08e02ebe, 0xe3b8ed62, 0xfafaea77, 0x17500ca7,
    0x20f51f58, 0x0a321853, 0xdb96f46c, 0xb1acc4ca, 0xac5da866, 0xc30fb779, 0xebb7d952, 0x06ecfdaf,
    0x1d110fb3, 0x45f93169, 0x56b9551d, 0x2dfc4ae1, 0xeb460756, 0xebcde2e0, 0x0edbfcb7, 0x20691a11,
    0x18d420b2, 0xf6200985, 0xc62bdd44, 0xad79b510, 0xb577ad21, 0xd3b4c1cb, 0xf9c2ea4b, 0x1124080a,
    0x31e01e80, 0x52ad45ec, 0x498f551f, 0x09342c6e, 0xe346ed7d, 0xfd3aec1c, 0x1aab0e28, 0x1f322191,
    0x0ac518c3, 0xe10df78b, 0xb7e7cad3, 0xacdaae07, 0xbfa6b41a, 0xe6d3d192, 0x07e3f70f, 0x1f531128,
    0x46383205, 0x55685225, 0x2eea4778, 0xede809ae, 0xead4e45e, 0x0f48fd02, 0x22191aeb, 0x18fc2118,
    0xf9b80ca4, 0xce75e3ac, 0xafd7bb73, 0xb2aaabf7, 0xcb9fbf1e, 0xf472e2ec, 0x12490772, 0x30bb1f6d,
    0x511244d6, 0x483e529e, 0x0cb72de9, 0xe319eee5, 0xfe0be9af, 0x1bea0e84, 0x22b32253, 0x0f141b8b,
    0xe524fb6d, 0xbea4d0b5, 0xadc6b267, 0xbd9cb1f5, 0xdc27c9a2, 0x0732f15e, 0x1fef113a, 0x41b32fa9,
    0x51ff4f76, 0x312645e0, 0xef7f0ecb, 0xebdce39b, 0x0e22f9f8, 0x25771bf1, 0x1e9c25f7, 0xfcf30f1a,
    0xd2d0e72b, 0xb37ac10a, 0xb20fad71, 0xc7bcbd22, 0xefefdad4, 0x0e97018f, 0x2d031dd1, 0x4dcf3fc6,
    0x48555072, 0x12513143, 0xe31cf231, 0xf998e7b7, 0x1d680dbe, 0x268025f5, 0x132c217d, 0xe8b3ff9d,
    0xc29bd3db, 0xafddb58c, 0xbc8db3b8, 0xd792c815, 0xff25eb6a, 0x1ad80e4f, 0x3cc62b9f, 0x4fc74b63,
    0x33db4899, 0xf6e61255, 0xe6dfe5b0, 0x0cd5f577, 0x26cf1cfc, 0x21f129c7, 0x00e41498, 0xd53dea1a,
    0xb5e7c42c, 0xb37fb02e, 0xc7fcbc78, 0xea81d75d, 0x0e10ff25, 0x2b891ad5, 0x4b2e3ccb, 0x48774ff2,
    0x126833db, 0xe598f6e2, 0xf55de6ff, 0x1cfc0cd5, 0x29c726cf, 0x149821f1, 0xea1a00e4, 0xc42cd53d,
    0xb02eb5e7, 0xbc78b37f, 0xd75dc7fc, 0xff25ea81, 0x1ad50e10, 0x3ccb2b89, 0x4ff24b2e, 0x33db4877,
    0xf6e21268, 0xe6ffe598, 0x0cb8f55d, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000,
};
