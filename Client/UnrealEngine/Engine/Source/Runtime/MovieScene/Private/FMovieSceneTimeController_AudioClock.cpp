// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// GetCurrentTime @ 146217500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall
FMovieSceneTimeController_AudioClock::GetCurrentTime(FMovieSceneTimeController_AudioClock *this)

{
  FAudioDeviceHandle *this_00;
  FAudioDevice *pFVar1;
  double dVar2;
  LARGE_INTEGER local_res10 [3];
  FAudioDeviceHandle local_28;
  
  pFVar1 = (FAudioDevice *)0x0;
  local_res10[0].s.LowPart = 0;
  if (GEngine != (UEngine *)0x0) {
    this_00 = UEngine::GetMainAudioDevice(GEngine,&local_28);
    pFVar1 = FAudioDeviceHandle::GetAudioDevice(this_00);
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  }
  if (pFVar1 != (FAudioDevice *)0x0) {
    dVar2 = (double)(**(code **)(pFVar1->_padding_ + 0x238))(pFVar1);
    return dVar2;
  }
  QueryPerformanceCounter(local_res10);
  return (double)CONCAT44(local_res10[0].s.HighPart,local_res10[0].s.LowPart) *
         FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
}

