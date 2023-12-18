#pragma once

// Struct to represent audio data
struct AudioData {
    uint32_t sampleRate;      // Audio sample rate (e.g., 44100 Hz)
    uint16_t bitsPerSample;   // Number of bits per audio sample (e.g., 16 bits)
    uint16_t numChannels;     // Number of audio channels (e.g., 2 for stereo)
    std::vector<int16_t> samples; // Actual audio samples (16-bit signed integers)
};