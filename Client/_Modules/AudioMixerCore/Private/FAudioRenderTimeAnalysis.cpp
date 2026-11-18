// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerCore
// Functions: 3

// FAudioRenderTimeAnalysis @ 1445261a0

FAudioRenderTimeAnalysis * __thiscall
Audio::FAudioRenderTimeAnalysis::FAudioRenderTimeAnalysis(FAudioRenderTimeAnalysis *this)

{
  int iVar1;
  
  this->AvgRenderTime = 0.0;
  this->MaxRenderTime = 0.0;
  this->TotalRenderTime = 0.0;
  this->StartTime = 0;
  this->RenderTimeCount = 0;
  iVar1 = sRenderInstanceIds + 1;
  this->RenderInstanceId = sRenderInstanceIds;
  sRenderInstanceIds = iVar1;
  return this;
}

// End @ 1445273d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FAudioRenderTimeAnalysis::End(FAudioRenderTimeAnalysis *this)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  uVar1 = this->RenderTimeCount + 1;
  dVar2 = (double)(local_res8[0].s.LowPart - this->StartTime) *
          FGenericPlatformTime::SecondsPerCycle;
  this->RenderTimeCount = uVar1;
  dVar3 = dVar2 + this->TotalRenderTime;
  dVar4 = dVar2 + this->RenderTimeSinceLastLog;
  this->TotalRenderTime = dVar3;
  this->RenderTimeSinceLastLog = dVar4;
  this->AvgRenderTime = dVar3 / (double)uVar1;
  if (this->MaxRenderTime < dVar2) {
    this->MaxRenderTime = dVar2;
  }
  if (this->MaxSinceTick < dVar2) {
    this->MaxSinceTick = dVar2;
  }
  if ((LogRenderTimesCVar == 1) && ((uVar1 & 0x1f) == 0)) {
    this->RenderTimeSinceLastLog = dVar4 * ___real_3fa0000000000000;
    if (3 < (byte)LogAudioMixerDebug._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerDebug);
    }
    this->RenderTimeSinceLastLog = 0.0;
    this->MaxSinceTick = 0.0;
  }
  return;
}

// Start @ 144529a10

void __thiscall Audio::FAudioRenderTimeAnalysis::Start(FAudioRenderTimeAnalysis *this)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  this->StartTime = local_res8[0].s.LowPart;
  return;
}

