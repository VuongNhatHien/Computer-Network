#include "Audio.h"
#include <vector>

// Deserialize audio data from a byte buffer
AudioData DeserializeAudioData(const std::vector<uint8_t>& buffer) {
    AudioData audio;

    // Deserialize metadata
    auto iter = buffer.begin();
    audio.sampleRate = *reinterpret_cast<const uint32_t*>(&(*iter));
    iter += sizeof(audio.sampleRate);
    audio.bitsPerSample = *reinterpret_cast<const uint16_t*>(&(*iter));
    iter += sizeof(audio.bitsPerSample);
    audio.numChannels = *reinterpret_cast<const uint16_t*>(&(*iter));
    iter += sizeof(audio.numChannels);

    // Deserialize audio samples
    audio.samples.resize((buffer.size() - (iter - buffer.begin())) / sizeof(int16_t));
    std::memcpy(audio.samples.data(), &(*iter), audio.samples.size() * sizeof(int16_t));

    return audio;
}