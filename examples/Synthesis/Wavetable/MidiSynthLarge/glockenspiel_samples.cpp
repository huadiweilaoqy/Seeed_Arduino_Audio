#include "glockenspiel_samples.h"
const AudioSynthWavetable::sample_data glockenspiel_samples[2] = {
    {
        (int16_t*)sample_0_glockenspiel_sinetick, // sample
        false, // LOOP
        7, // LENGTH_BITS
        (1 << (32 - 7))* WAVETABLE_CENTS_SHIFT(11) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(52) / AUDIO_SAMPLE_RATE_EXACT + 0.5,  // PER_HERTZ_PHASE_INCREMENT
        ((uint32_t)72 - 1) << (32 - 7), // MAX_PHASE
                           ((uint32_t)68 - 1) << (32 - 7), // LOOP_PHASE_END
                           (((uint32_t)68 - 1) << (32 - 7)) - (((uint32_t)7 - 1) << (32 - 7)), // LOOP_PHASE_LENGTH
                           uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-5.2)), // INITIAL_ATTENUATION_SCALAR
                           uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
                           uint32_t(6.20 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
                           uint32_t(240.09 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
                           uint32_t(1269.42 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
                           uint32_t(306.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
                           int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-14.9)) * AudioSynthWavetable::UNITY_GAIN), // SUSTAIN_MULT
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
        (int16_t*)sample_1_glockenspiel_sinetick, // sample
        false, // LOOP
        7, // LENGTH_BITS
        (1 << (32 - 7))* WAVETABLE_CENTS_SHIFT(11) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(52) / AUDIO_SAMPLE_RATE_EXACT + 0.5,  // PER_HERTZ_PHASE_INCREMENT
        ((uint32_t)72 - 1) << (32 - 7), // MAX_PHASE
                           ((uint32_t)68 - 1) << (32 - 7), // LOOP_PHASE_END
                           (((uint32_t)68 - 1) << (32 - 7)) - (((uint32_t)7 - 1) << (32 - 7)), // LOOP_PHASE_LENGTH
                           uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-5.2)), // INITIAL_ATTENUATION_SCALAR
                           uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
                           uint32_t(6.20 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
                           uint32_t(240.09 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
                           uint32_t(1269.42 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
                           uint32_t(306.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
                           int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-14.9)) * AudioSynthWavetable::UNITY_GAIN), // SUSTAIN_MULT
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

const uint32_t sample_0_glockenspiel_sinetick[128] = {
    0x00000000, 0x78bc7a66, 0x723075f8, 0x676e6d4c, 0x590760a7, 0x4751508b, 0x33203d8a, 0x1cfa283a,
    0x05e51191, 0xee80fa2b, 0xd7d7e316, 0xc29bccf0, 0xaf84b8bc, 0x9f67a704, 0x92bb9899, 0x8a098ddb,
    0x85968746, 0x85988505, 0x8a068740, 0x92b18dce, 0x9f579891, 0xaf73a6f6, 0xc274b8ac, 0xd7c4ccdc,
    0xee6be304, 0x05d2fa17, 0x1ce8117e, 0x330c2827, 0x47423d63, 0x58f7507a, 0x67656097, 0x72236d43,
    0x78b875f5, 0x7aff7a68, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

const uint32_t sample_1_glockenspiel_sinetick[128] = {
    0x00000000, 0x78bc7a66, 0x723075f8, 0x676e6d4c, 0x590760a7, 0x4751508b, 0x33203d8a, 0x1cfa283a,
    0x05e51191, 0xee80fa2b, 0xd7d7e316, 0xc29bccf0, 0xaf84b8bc, 0x9f67a704, 0x92bb9899, 0x8a098ddb,
    0x85968746, 0x85988505, 0x8a068740, 0x92b18dce, 0x9f579891, 0xaf73a6f6, 0xc274b8ac, 0xd7c4ccdc,
    0xee6be304, 0x05d2fa17, 0x1ce8117e, 0x330c2827, 0x47423d63, 0x58f7507a, 0x67656097, 0x72236d43,
    0x78b875f5, 0x7aff7a68, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};
