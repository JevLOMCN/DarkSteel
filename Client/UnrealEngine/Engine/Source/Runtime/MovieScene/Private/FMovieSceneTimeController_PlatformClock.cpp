// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// GetCurrentTime @ 146217590

double __thiscall
FMovieSceneTimeController_PlatformClock::GetCurrentTime
          (FMovieSceneTimeController_PlatformClock *this)

{
  LARGE_INTEGER local_res10 [3];
  
  QueryPerformanceCounter(local_res10);
  return (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
}

