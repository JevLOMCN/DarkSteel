// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// GetInterpolatedAudioClock @ 146502fd0

double __thiscall
Audio::FAudioClockTimingData::GetInterpolatedAudioClock
          (FAudioClockTimingData *this,double param_1,double param_2)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  if (0.0 < this->UpdateTime) {
    QueryPerformanceCounter(local_res8);
    dVar1 = (((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000) - this->UpdateTime) / param_2;
    if (__real_3ff0000000000000 <= dVar1) {
      dVar1 = __real_3ff0000000000000;
    }
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    param_1 = dVar1 * param_2 + param_1;
  }
  return param_1;
}

