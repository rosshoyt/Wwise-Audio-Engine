#pragma once
#include <AK/SoundEngine/Common/AkMemoryMgr.h>                  // Memory Manager interface
#include <AK/SoundEngine/Common/AkModule.h>                     // Default memory manager
#include <assert.h>                                             // Assert   

class WwiseAudioEngine
{
public:
    WwiseAudioEngine();

private:
    bool InitSoundEngine();

};

