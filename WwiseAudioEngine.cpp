#include "WwiseAudioEngine.h"

WwiseAudioEngine::WwiseAudioEngine()
{
    InitSoundEngine();
}


bool WwiseAudioEngine::InitSoundEngine()
{
    AkMemSettings memSettings;

    AK::MemoryMgr::GetDefaultSettings(memSettings);

    if (AK::MemoryMgr::Init(&memSettings) != AK_Success)

    {

        assert(!"Could not create the memory manager.");

        return false;

    }
    return true;
}