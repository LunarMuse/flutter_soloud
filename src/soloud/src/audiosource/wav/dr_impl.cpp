/// Removing these defines from here to put them in mp3_stream_decoder.cpp because
/// static members are not used by SoLoud but I need them in mp3_stream_decoder.cpp
// #define DR_MP3_IMPLEMENTATION
// #define DR_MP3_NO_STDIO
// #define DR_MP3_FLOAT_OUTPUT
#include "dr_mp3.h"

#define DR_WAV_IMPLEMENTATION
#define DR_WAV_NO_STDIO
#include "dr_wav.h"

/// As for dr_mp3
// #define DR_FLAC_IMPLEMENTATION
// #define DR_FLAC_NO_STDIO
// #define DR_FLAC_NO_CRC
#include "dr_flac.h"
