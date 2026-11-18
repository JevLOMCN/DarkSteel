// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioPlatformSupportWasapi
// Functions: 2

// FramesToRefTime @ 148d42070

long64 __cdecl Audio::FWasapiAudioUtils::FramesToRefTime(uint param_1,uint param_2)

{
  return (longlong)
         ROUND((double)((ulonglong)param_1 * 10000000) * (__real_4000000000000000 / (double)param_2)
               + __real_3fe0000000000000) >> 1;
}

// RefTimeToFrames @ 148d42510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl Audio::FWasapiAudioUtils::RefTimeToFrames(long64 param_1,uint param_2)

{
  return (longlong)
         ROUND((double)(longlong)((ulonglong)param_2 * param_1) * ___real_3e8ad7f29abcaf48 +
               __real_3fe0000000000000) >> 1;
}

