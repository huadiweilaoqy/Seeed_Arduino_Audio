#include "epiano_samples.h"
const AudioSynthWavetable::sample_data epiano_samples[4] = {
    {
        (int16_t*)sample_0_epiano_coldglass7wave, // sample
        true, // LOOP
        7, // LENGTH_BITS
        (1 << (32 - 7))* WAVETABLE_CENTS_SHIFT(21) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(65) / AUDIO_SAMPLE_RATE_EXACT + 0.5,  // PER_HERTZ_PHASE_INCREMENT
        ((uint32_t)69 - 1) << (32 - 7), // MAX_PHASE
                           ((uint32_t)65 - 1) << (32 - 7), // LOOP_PHASE_END
                           (((uint32_t)65 - 1) << (32 - 7)) - (((uint32_t)17 - 1) << (32 - 7)), // LOOP_PHASE_LENGTH
                           uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-23.2)), // INITIAL_ATTENUATION_SCALAR
                           uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
                           uint32_t(1.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
                           uint32_t(20.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
                           uint32_t(800.14 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
                           uint32_t(680.26 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
                           int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-49.6)) * AudioSynthWavetable::UNITY_GAIN), // SUSTAIN_MULT
                           uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // VIBRATO_DELAY
                           uint32_t(0.1 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
                           (WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
                           (1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
                           uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // MODULATION_DELAY
                           uint32_t(5.4 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
                           (WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
                           (1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
                           int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
                           int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
    },
    {
        (int16_t*)sample_1_epiano_coldglass7wave, // sample
        true, // LOOP
        7, // LENGTH_BITS
        (1 << (32 - 7))* WAVETABLE_CENTS_SHIFT(21) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(65) / AUDIO_SAMPLE_RATE_EXACT + 0.5,  // PER_HERTZ_PHASE_INCREMENT
        ((uint32_t)69 - 1) << (32 - 7), // MAX_PHASE
                           ((uint32_t)65 - 1) << (32 - 7), // LOOP_PHASE_END
                           (((uint32_t)65 - 1) << (32 - 7)) - (((uint32_t)17 - 1) << (32 - 7)), // LOOP_PHASE_LENGTH
                           uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-23.2)), // INITIAL_ATTENUATION_SCALAR
                           uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
                           uint32_t(1.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
                           uint32_t(20.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
                           uint32_t(860.05 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
                           uint32_t(680.26 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
                           int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-47.5)) * AudioSynthWavetable::UNITY_GAIN), // SUSTAIN_MULT
                           uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // VIBRATO_DELAY
                           uint32_t(0.1 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
                           (WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
                           (1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
                           uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // MODULATION_DELAY
                           uint32_t(5.4 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
                           (WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
                           (1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
                           int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
                           int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
    },
    {
        (int16_t*)sample_2_epiano_coldglass7wave, // sample
        true, // LOOP
        7, // LENGTH_BITS
        (1 << (32 - 7))* WAVETABLE_CENTS_SHIFT(21) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(65) / AUDIO_SAMPLE_RATE_EXACT + 0.5,  // PER_HERTZ_PHASE_INCREMENT
        ((uint32_t)69 - 1) << (32 - 7), // MAX_PHASE
                           ((uint32_t)65 - 1) << (32 - 7), // LOOP_PHASE_END
                           (((uint32_t)65 - 1) << (32 - 7)) - (((uint32_t)17 - 1) << (32 - 7)), // LOOP_PHASE_LENGTH
                           uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-23.2)), // INITIAL_ATTENUATION_SCALAR
                           uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
                           uint32_t(1.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
                           uint32_t(20.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
                           uint32_t(2000.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
                           uint32_t(680.26 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
                           int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-49.6)) * AudioSynthWavetable::UNITY_GAIN), // SUSTAIN_MULT
                           uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // VIBRATO_DELAY
                           uint32_t(0.1 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
                           (WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
                           (1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
                           uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // MODULATION_DELAY
                           uint32_t(5.4 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
                           (WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
                           (1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
                           int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
                           int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
    },
    {
        (int16_t*)sample_3_epiano_epiano2ms, // sample
        true, // LOOP
        11, // LENGTH_BITS
        (1 << (32 - 11))* WAVETABLE_CENTS_SHIFT(29) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(82) / AUDIO_SAMPLE_RATE_EXACT + 0.5,  // PER_HERTZ_PHASE_INCREMENT
        ((uint32_t)1172 - 1) << (32 - 11), // MAX_PHASE
                             ((uint32_t)1168 - 1) << (32 - 11), // LOOP_PHASE_END
                             (((uint32_t)1168 - 1) << (32 - 11)) - (((uint32_t)1120 - 1) << (32 - 11)), // LOOP_PHASE_LENGTH
                             uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-23.2)), // INITIAL_ATTENUATION_SCALAR
                             uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
                             uint32_t(1.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
                             uint32_t(20.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
                             uint32_t(800.14 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
                             uint32_t(680.26 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
                             int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-49.6)) * AudioSynthWavetable::UNITY_GAIN), // SUSTAIN_MULT
                             uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // VIBRATO_DELAY
                             uint32_t(0.1 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
                             (WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
                             (1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
                             uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // MODULATION_DELAY
                             uint32_t(5.4 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
                             (WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
                             (1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
                             int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
                             int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
    },
};

const uint32_t sample_0_epiano_coldglass7wave[128] = {
    0x00000000, 0x3549d7cd, 0x14e0eff8, 0xe3bd3b27, 0xf1ca4888, 0x212cfe35, 0x1aa3bac9, 0xd98bd0a6,
    0xbb3f15ac, 0xf66e27b1, 0x44a7fb3b, 0x40a5e39f, 0xf3ce0d09, 0xc5f235ea, 0xe95412c8, 0x1aa2c6bd,
    0x0db7b955, 0xe03b0205, 0xe75843aa, 0x26eb2e0c, 0x4369eb10, 0x083fda8c, 0xbbdf0605, 0xc15c1b69,
    0x0cecf0f1, 0x39bbca08, 0x1509eed1, 0xe4e13ac6, 0xf3c446bc, 0x21b9fcb1, 0x190ebb64, 0xd7aed2b0,
    0xbb3f15ac, 0xf66e27b1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

const uint32_t sample_1_epiano_coldglass7wave[128] = {
    0x00000000, 0x3549d7cd, 0x14e0eff8, 0xe3bd3b27, 0xf1ca4888, 0x212cfe35, 0x1aa3bac9, 0xd98bd0a6,
    0xbb3f15ac, 0xf66e27b1, 0x44a7fb3b, 0x40a5e39f, 0xf3ce0d09, 0xc5f235ea, 0xe95412c8, 0x1aa2c6bd,
    0x0db7b955, 0xe03b0205, 0xe75843aa, 0x26eb2e0c, 0x4369eb10, 0x083fda8c, 0xbbdf0605, 0xc15c1b69,
    0x0cecf0f1, 0x39bbca08, 0x1509eed1, 0xe4e13ac6, 0xf3c446bc, 0x21b9fcb1, 0x190ebb64, 0xd7aed2b0,
    0xbb3f15ac, 0xf66e27b1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

const uint32_t sample_2_epiano_coldglass7wave[128] = {
    0x00000000, 0x3549d7cd, 0x14e0eff8, 0xe3bd3b27, 0xf1ca4888, 0x212cfe35, 0x1aa3bac9, 0xd98bd0a6,
    0xbb3f15ac, 0xf66e27b1, 0x44a7fb3b, 0x40a5e39f, 0xf3ce0d09, 0xc5f235ea, 0xe95412c8, 0x1aa2c6bd,
    0x0db7b955, 0xe03b0205, 0xe75843aa, 0x26eb2e0c, 0x4369eb10, 0x083fda8c, 0xbbdf0605, 0xc15c1b69,
    0x0cecf0f1, 0x39bbca08, 0x1509eed1, 0xe4e13ac6, 0xf3c446bc, 0x21b9fcb1, 0x190ebb64, 0xd7aed2b0,
    0xbb3f15ac, 0xf66e27b1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

const uint32_t sample_3_epiano_epiano2ms[640] = {
    0x00000000, 0x00630062, 0x00640064, 0x00620061, 0x00620064, 0x00640064, 0x00640062, 0x00640063,
    0x00610063, 0x00620064, 0x00640064, 0x00640062, 0x00640064, 0x00630061, 0x00610064, 0x00640064,
    0x00640064, 0x00630064, 0x00640063, 0x00640062, 0x00610063, 0x00620064, 0x00630064, 0x00620064,
    0x00640062, 0x00630061, 0x005d0066, 0x0064006d, 0x0067004b, 0x0050007a, 0x0138ff80, 0xfe4afdf7,
    0xfa92fcf8, 0xf081faba, 0xebc5fd8e, 0xfecefb79, 0x15590d51, 0x06addda4, 0x1d57b1d8, 0x0787efc2,
    0xec476342, 0xf61d7d62, 0x244d355c, 0x3b8aeb44, 0x440ec71e, 0x2de2fc97, 0x1daa596d, 0xdee85918,
    0xd5f0090f, 0x1085d3e3, 0x2cd5bfb0, 0xefd2cdbc, 0x94dbd8a6, 0x91c107d9, 0xf1d51002, 0x364a0216,
    0x2216c36b, 0xfe71affd, 0xc6ffeade, 0xc9e62e22, 0xe4723dd6, 0xf52bf764, 0x2cd9ab7b, 0x5168c58f,
    0x2511262e, 0xf1296017, 0xf16e5e78, 0x15da1b7c, 0x4278e047, 0x6531e360, 0x37cf25d1, 0xc9b84ebf,
    0x9ecc3597, 0xdd880732, 0x2ff3e08b, 0x2266a18b, 0xe0c68d0b, 0xa3dad265, 0xba5f268e, 0xeb954d9b,
    0x09e9f9fa, 0x270ca60e, 0x153dac78, 0xed8bef14, 0xcbb13571, 0xae1f3383, 0xfaacf1bb, 0x696ae0e1,
    0x7036eadb, 0x27b615c5, 0xda094918, 0xc94e5566, 0x0bb12d17, 0x697f0218, 0x739bfe8f, 0x1260fe48,
    0xaaa3000c, 0xad961ce2, 0xddee284a, 0xf9c5da45, 0x02e38d47, 0xea9d9540, 0xe2faeb55, 0xd8294373,
    0xcd152712, 0xfd51e305, 0x216dbf38, 0x1b5fcca7, 0xf78906e2, 0xaf531bb1, 0xd2d10f76, 0x3af516b6,
    0x6b5d083d, 0x4ea401c0, 0x07d21773, 0xd5413413, 0xe82e3a74, 0x36ce358e, 0x60702318, 0x2a03f666,
    0xdbbdd003, 0xc73ef509, 0xc74421c9, 0xcb98fac4, 0xee13af89, 0x04ae935b, 0x124bc437, 0xed901c86,
    0xb4bf29d1, 0xd0060cca, 0x0604ec18, 0x31b7d085, 0x2501e139, 0xd3a6f0d2, 0xc63d07cb, 0x0428407c,
    0x3cb2426b, 0x521818c1, 0x3beff558, 0x080bf98b, 0xf1b91b42, 0x11d94645, 0x35b44f35, 0x1d5b0d30,
    0xfa15c38c, 0xef9ecd43, 0xce570322, 0xad91fdaf, 0xbd52d7a1, 0xef66be62, 0x251ac750, 0x166afbef,
    0xd4ec001a, 0xc7d50390, 0xe72105f1, 0x1604f315, 0x28c0ef17, 0xf5bfdefd, 0xe6dce994, 0x07e22fb9,
    0x25d14f3b, 0x39b730bb, 0x36e1050f, 0x19a9f15e, 0x05000722, 0x166e3909, 0x1f3c5588, 0x04022297,
    0xf624d085, 0x00b7c79c, 0xe479e75c, 0xaddbe8eb, 0xaf4adcfa, 0xdaaad35d, 0x1d1bdb6a, 0x233af923,
    0xe96beeef, 0xd1f2f4ab, 0xdce30940, 0x020e05b6, 0x1fc7ffd4, 0x03e0e1a7, 0xfcd4db03, 0x14af20ea,
    0x1dd54b94, 0x256d3fb1, 0x2b4614e9, 0x1eaef51b, 0x15fdfb1c, 0x1efe2aeb, 0x17d2519b, 0xf5032842,
    0xed65dc16, 0x057bc9d3, 0xeb6cdc8f, 0xb3ebd843, 0xabcbda24, 0xd17edd17, 0x14f3e765, 0x2655fdfe,
    0xf57fe6f2, 0xda31ecb4, 0xdc950805, 0xf8de0c24, 0x1b3808d3, 0x07aee749, 0x0b3ed7bb, 0x1a36186f,
    0x17884be2, 0x1a3646a7, 0x23151f97, 0x25bff486, 0x22b9f052, 0x258620ad, 0x0e044e21, 0xe3c43236,
    0xe5e8e66f, 0x0b69cd4a, 0xf862cbf6, 0xbd4ec3e3, 0xa6c1d5fd, 0xbeeded51, 0x089efbd4, 0x2ab003ab,
    0x0a2ddbbd, 0xee8fd7e0, 0xd8d901ca, 0xe6591930, 0x07ba2054, 0x0c07f57a, 0x23aecef4, 0x32810029,
    0x1b0f3a67, 0x037e4ffc, 0x095338de, 0x1d9c07b7, 0x37d7e9a2, 0x3fa604d9, 0x167b374b, 0xce61318f,
    0xc92a01c0, 0xfb16e6f6, 0x00a7cac4, 0xdb15a744, 0xb997b8d0, 0xb554eb4a, 0xeb3c14f8, 0x16452218,
    0x14f3e32e, 0x0f28c434, 0xf2cce1cc, 0xe0d20f93, 0xec5233cb, 0xf3181881, 0x2511e4a6, 0x4edbf10c,
    0x38361946, 0x073739a5, 0xeb324635, 0xfc9a2a7b, 0x2d7502c9, 0x593bfbb8, 0x38cd10b0, 0xdd300ed6,
    0xb6ce02b7, 0xd30f08a5, 0xe74ce9e1, 0xe789a821, 0xe1ee9a54, 0xd072c7ca, 0xe2950dee, 0xf0f93dac,
    0xf83c0c7d, 0x159ed3d2, 0x1672cd1a, 0x03c5e8a6, 0xeeb31f15, 0xd65e2e57, 0x018b0f67, 0x47800d33,
    0x53ff0b9c, 0x2d3d128c, 0xfa532558, 0xe4952f27, 0x07a8253c, 0x45011c8e, 0x47780e53, 0x00d2eb0b,
    0xccc5e1bb, 0xc56a0361, 0xbd2103fa, 0xccc1c928, 0xec34a3f7, 0xf69fafa5, 0x021de935, 0xef662f02,
    0xd773235c, 0xf569fc9c, 0x146fe34d, 0x1e18db4b, 0x148dfcc6, 0xe2951751, 0xecb41bf4, 0x24f82eb2,
    0x46392607, 0x41bf0b45, 0x1a6c0590, 0xf35812cc, 0xf5ae26cf, 0x213e3a54, 0x30c5294e, 0x0b9cec5b,
    0xeed8c682, 0xdbaee498, 0xb17cf6d0, 0xaa50de36, 0xd45cc677, 0xfbabbcd5, 0x200cd8cf, 0x0c980fbb,
    0xd9a71488, 0xdf4e0c5f, 0xf8ea024e, 0x1a9ced4f, 0x29fbf530, 0x0250fea5, 0xf77f0a80, 0x12ad355e,
    0x2a463e41, 0x35052076, 0x28a10221, 0x0cdffa7a, 0x051f0fd3, 0x14683662, 0x14a63be0, 0xf863007a,
    0xf57acd80, 0xf059d53d, 0xc103db63, 0xa8bed1ce, 0xc068d3de, 0xe961d602, 0x2032e637, 0x1f450861,
    0xf04bff90, 0xe5160167, 0xecb107cf, 0x07c500c8, 0x254f041e, 0x1123fed1, 0x0bb2fd93, 0x1aaa2650,
    0x1ef33ec4, 0x22a42e4a, 0x1dd8100c, 0x145dfabc, 0x136202ca, 0x1cd427bb, 0x0b9e3689, 0xe99e0756,
    0xed5ddb43, 0xf0c5d92d, 0xcb4fce8d, 0xb147c2fb, 0xc046d124, 0xdfe0dea9, 0x190bf3fe, 0x21b20d36,
    0xfbeffbd4, 0xedf1f903, 0xed2d0538, 0x009205f9, 0x1ed10db3, 0x153806fe, 0x147ffb8a, 0x218c1f36,
    0x1dec38a9, 0x19b03172, 0x16ad161f, 0x1325fe03, 0x1a06fe67, 0x212e1fb9, 0x07722fdb, 0xe37b072f,
    0xe800e2bc, 0xee7edc33, 0xcd1ac8d2, 0xb7bbba33, 0xc143ced8, 0xdc7fe3e1, 0x1400fc5f, 0x24071277,
    0x0435f937, 0xf4dbf38a, 0xedb4040e, 0xf9940a37, 0x1bca1647, 0x186e0d00, 0x1e32fa84, 0x280b16ef,
    0x1c1033f8, 0x109833f6, 0x0d611e4c, 0x122a01ad, 0x21eaf9e2, 0x27ca1563, 0x0457262e, 0xdae6099c,
    0xdf38ec48, 0xe969e40c, 0xd297c208, 0xc313ad8c, 0xc6d0c7d9, 0xd646e7ea, 0x09af0965, 0x20c51e2d,
    0x0d1ef9af, 0x0440e97b, 0xf3c7fa82, 0xf51509be, 0x0fb322ad, 0x133e1c74, 0x23cb001c, 0x35b60cf1,
    0x25122396, 0x0b682eb3, 0xfd9b2715, 0x04c30fc8, 0x238b0077, 0x32ff0a42, 0x0f041392, 0xda59fe97,
    0xd45ef42e, 0xd79ef2dd, 0xcc0ec99c, 0xd0a3a790, 0xd93cb880, 0xde74dc97, 0x00ef0d97, 0x100a30f6,
    0x07b20966, 0x0ec3eb6a, 0x05fdeb37, 0xff1afb44, 0x0aa821c9, 0x04b72d68, 0x18271512, 0x392711ed,
    0x35f8157e, 0x195819af, 0xf9dd1e04, 0xf3ab1989, 0x10b113df, 0x311212ae, 0x1af206fa, 0xebcee94f,
    0xda1fe8de, 0xc6dff70b, 0xb6bdd913, 0xca28b61d, 0xe698b78b, 0xf338ccb6, 0x0c430000, 0x06f03278,
    0xf6601d6d, 0x04a5fe3b, 0x0ddfeeb8, 0x12b2ecde, 0x1a7e0f7b, 0x04ed2ada, 0x06f12364, 0x281e2630,
    0x35fc1bbe, 0x28a30d8f, 0x0ac707c4, 0xf4790de8, 0x00701ad8, 0x1c4d24ea, 0x12c90fb0, 0xf865e297,
    0xec97d9a8, 0xcc01e6a3, 0xa964d85b, 0xb8d2c6ac, 0xde4dc9a3, 0xfe24cfa2, 0x20b0f21d, 0x14b822cc,
    0xf1a21c90, 0xf4580d5c, 0x02350107, 0x1583f25b, 0x2d7c05f0, 0x16761bca, 0x08b31d69, 0x17b32e3b,
    0x23fb2ce2, 0x243e1598, 0x168600bf, 0x041afb7c, 0x03910e70, 0x0d7f2873, 0x00001a9d, 0xf264ee20,
    0xf5b5d91d, 0xd996d7b6, 0xb069c6cc, 0xb2b0c651, 0xd0fbd82d, 0xf5b2e05b, 0x27b2f728, 0x261c1914,
    0xfded0f7b, 0xf3ea0a3c, 0xf4d30b3c, 0x0b32ffea, 0x2ed50e17, 0x253d1803, 0x15fc11ec, 0x18262659,
    0x177d301f, 0x165a20af, 0x11c107d5, 0x0bf0f6f7, 0x0f590260, 0x0d9a1cd4, 0xf6f91949, 0xe726f66f,
    0xf09fe481, 0xdbead660, 0xb9fdbad6, 0xbb4fbc73, 0xcf92d897, 0xed9ce9e0, 0x235802cf, 0x2a4c1dbc,
    0x08ae0a15, 0xfb910437, 0xf3d3082c, 0x047605c0, 0x29a516f8, 0x27b71f07, 0x1ddb103e, 0x1d7a1dfa,
    0x16502a10, 0x0ecc21a3, 0x08da0d48, 0x0b15fa08, 0x12b9feff, 0x10d813da, 0xf5291230, 0xe497f62c,
    0xeb04ebcb, 0xd711d944, 0xbc7ab72a, 0xc236b876, 0xd385d64c, 0xec68ec53, 0x20fb0a7a, 0x29b82314,
    0x0e3b0ba4, 0xffba0181, 0xf5e00609, 0x02c50668, 0x283e1a7e, 0x289a2391, 0x1ff31189, 0x1f321af3,
    0x15c92718, 0x0c5120d4, 0x06150dac, 0x0a2cfb59, 0x135cfd92, 0x10de11a8, 0xf4280fcb, 0xe418f673,
    0xe9f5ed49, 0xd621d96c, 0xbd0ab660, 0xc330b7de, 0xd3dcd638, 0xec5aeca7, 0x20db0aef, 0x29b8232d,
    0x0e750ba8, 0x000000d1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

};
