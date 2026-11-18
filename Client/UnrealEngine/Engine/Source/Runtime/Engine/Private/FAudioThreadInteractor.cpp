// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// UseAudioThreadCVarSinkFunction @ 1476ccd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FAudioThreadInteractor::UseAudioThreadCVarSinkFunction(void)

{
  bool bVar1;
  
  bVar1 = GCVarSuspendAudioThread != 0;
  if (`public:_static_void___cdecl_FAudioThreadInteractor::UseAudioThreadCVarSinkFunction(void)'::
      __l2::bLastSuspendAudioThread != bVar1) {
    `public:_static_void___cdecl_FAudioThreadInteractor::UseAudioThreadCVarSinkFunction(void)'::__l2
    ::bLastSuspendAudioThread = bVar1;
    if (bVar1) {
      bVar1 = IsAudioThreadRunning();
      if (bVar1) {
        FAudioThread::SuspendAudioThread();
        return;
      }
    }
    if (GIsAudioThreadSuspended != (atomic<bool>)0x0) {
      FAudioThread::ResumeAudioThread();
      return;
    }
    if ((FAudioThread::bUseThreadedAudio == false) && (2 < (byte)LogAudio._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_void___cdecl_FAudioThreadInteractor::UseAudioThreadCVarSinkFunction(void)'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogAudio);
      return;
    }
  }
  return;
}

