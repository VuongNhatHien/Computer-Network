//#pragma once
//#include "Audio.h"
//
//#include <vector>
//
// Serialize audio data to a byte buffer
//std::vector<uint8_t> SerializeAudioData(const AudioData& audio) {
//    std::vector<uint8_t> buffer;
//
//     Serialize metadata
//    buffer.insert(buffer.end(), reinterpret_cast<const uint8_t*>(&audio.sampleRate), reinterpret_cast<const uint8_t*>(&audio.sampleRate) + sizeof(audio.sampleRate));
//    buffer.insert(buffer.end(), reinterpret_cast<const uint8_t*>(&audio.bitsPerSample), reinterpret_cast<const uint8_t*>(&audio.bitsPerSample) + sizeof(audio.bitsPerSample));
//    buffer.insert(buffer.end(), reinterpret_cast<const uint8_t*>(&audio.numChannels), reinterpret_cast<const uint8_t*>(&audio.numChannels) + sizeof(audio.numChannels));
//
//     Serialize audio samples
//    buffer.insert(buffer.end(), reinterpret_cast<const uint8_t*>(audio.samples.data()), reinterpret_cast<const uint8_t*>(audio.samples.data() + audio.samples.size()));
//
//    return buffer;
//}