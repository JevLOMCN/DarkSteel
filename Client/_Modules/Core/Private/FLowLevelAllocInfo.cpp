// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FLowLevelAllocInfo @ 141678af0

FLowLevelAllocInfo * __thiscall
UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo::FLowLevelAllocInfo(FLowLevelAllocInfo *this)

{
  *(undefined8 *)this->Tag = 0xffffffffffffffff;
  return this;
}

// GetTag @ 1416a03c0

FTagData * __thiscall
UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo::GetTag
          (FLowLevelAllocInfo *this,FLowLevelMemTracker *param_1,ELLMTagSet param_2)

{
  uint uVar1;
  FTagDataArray *pFVar2;
  code *pcVar3;
  bool bVar4;
  FTagData *pFVar5;
  FTagData *pFVar6;
  uint uVar7;
  
  AcquireSRWLockShared((PSRWLOCK)&param_1->TagDataMutex);
  pFVar5 = (FTagData *)0x0;
  pFVar6 = pFVar5;
  if (param_2 != None) {
    if (param_2 == UObjectClasses) {
      pFVar6 = (FTagData *)&DAT_00000004;
    }
    else {
      HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
  }
  uVar1 = *(uint *)((longlong)this->Tag + (longlong)&pFVar6->Name);
  if (-1 < (int)uVar1) {
    pFVar2 = param_1->TagDatas;
    uVar7 = 0;
    if ((int)uVar1 < *(int *)&pFVar2->field_0x10) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FTagData *)(*pcVar3)();
      return pFVar5;
    }
    pFVar5 = *(FTagData **)(*(longlong *)pFVar2 + (longlong)(int)uVar1 * 8);
  }
  ReleaseSRWLockShared((PSRWLOCK)&param_1->TagDataMutex);
  return pFVar5;
}

