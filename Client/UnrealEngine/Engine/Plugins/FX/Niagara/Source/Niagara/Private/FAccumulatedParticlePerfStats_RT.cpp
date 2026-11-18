// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// GetPerFrameMax @ 1492a5bf0

float __thiscall
FAccumulatedParticlePerfStats_RT::GetPerFrameMax(FAccumulatedParticlePerfStats_RT *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<unsigned___int64> FVar4;
  float fVar5;
  
  uVar3 = 0;
  if (param_1 < (this->MaxPerFrameTotalCycles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar5 = (float)(*pcVar1)();
    return fVar5;
  }
  FVar4 = (this->MaxPerFrameTotalCycles).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned___int64>)0x0) {
    FVar4 = (ForElementType<unsigned___int64>)&this->MaxPerFrameTotalCycles;
  }
  return (float)((double)*(ulonglong *)((longlong)FVar4 + (longlong)param_1 * 8) *
                 FGenericPlatformTime::SecondsPerCycle64 * __real_412e848000000000);
}

// GetPerInstanceMax @ 1492a5e10

float __thiscall
FAccumulatedParticlePerfStats_RT::GetPerInstanceMax
          (FAccumulatedParticlePerfStats_RT *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<unsigned___int64> FVar4;
  float fVar5;
  
  uVar3 = 0;
  if (param_1 < (this->MaxPerInstanceCycles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar5 = (float)(*pcVar1)();
    return fVar5;
  }
  FVar4 = (this->MaxPerInstanceCycles).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned___int64>)0x0) {
    FVar4 = (ForElementType<unsigned___int64>)&this->MaxPerInstanceCycles;
  }
  return (float)((double)*(ulonglong *)((longlong)FVar4 + (longlong)param_1 * 8) *
                 FGenericPlatformTime::SecondsPerCycle64 * __real_412e848000000000);
}

// GetPerInstanceMaxCycles @ 149355450

ulong64 __thiscall
FAccumulatedParticlePerfStats_RT::GetPerInstanceMaxCycles
          (FAccumulatedParticlePerfStats_RT *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 uVar4;
  ForElementType<unsigned___int64> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->MaxPerInstanceCycles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  FVar5 = (this->MaxPerInstanceCycles).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<unsigned___int64>)0x0) {
    FVar5 = (ForElementType<unsigned___int64>)&this->MaxPerInstanceCycles;
  }
  return *(ulong64 *)((longlong)FVar5 + (longlong)param_1 * 8);
}

