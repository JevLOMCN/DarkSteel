// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FParticlePerfStatsListener_TimedTest @ 14815a8e0

FParticlePerfStatsListener_TimedTest * __thiscall
FParticlePerfStatsListener_TimedTest::FParticlePerfStatsListener_TimedTest
          (FParticlePerfStatsListener_TimedTest *this,int param_1,bool param_2,bool param_3,
          bool param_4)

{
  FParticlePerfStatsListener_GatherAll::FParticlePerfStatsListener_GatherAll
            ((FParticlePerfStatsListener_GatherAll *)this,param_2,param_3,param_4);
  this->FramesRemaining = param_1;
  this->_padding_ = (longlong)&___7FParticlePerfStatsListener_TimedTest__6B_;
  return this;
}

// AllowOrphaned @ 1481664d0

bool __thiscall
FParticlePerfStatsListener_TimedTest::AllowOrphaned(FParticlePerfStatsListener_TimedTest *this)

{
  return true;
}

// End @ 1481725b0

void __thiscall
FParticlePerfStatsListener_TimedTest::End(FParticlePerfStatsListener_TimedTest *this)

{
  FOutputDeviceRedirector *pFVar1;
  
  pFVar1 = GetGlobalLogSingleton();
  if (pFVar1 != (FOutputDeviceRedirector *)0x0) {
    pFVar1 = GetGlobalLogSingleton();
    FParticlePerfStatsListener_GatherAll::DumpStatsToDevice
              ((FParticlePerfStatsListener_GatherAll *)this,(FOutputDevice *)pFVar1);
  }
  FParticlePerfStatsListener_GatherAll::DumpStatsToFile
            ((FParticlePerfStatsListener_GatherAll *)this);
  return;
}

// Tick @ 1481a28e0

bool __thiscall
FParticlePerfStatsListener_TimedTest::Tick(FParticlePerfStatsListener_TimedTest *this)

{
  FParticlePerfStatsListener_GatherAll::Tick((FParticlePerfStatsListener_GatherAll *)this);
  this->FramesRemaining = this->FramesRemaining + -1;
  return 0 < this->FramesRemaining;
}

