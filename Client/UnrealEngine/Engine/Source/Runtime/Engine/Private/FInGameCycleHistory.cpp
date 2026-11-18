// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FInGameCycleHistory @ 147cc41b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FInGameCycleHistory * __thiscall
FInGameCycleHistory::FInGameCycleHistory(FInGameCycleHistory *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = &(this->FrameCycles).ArrayMax;
  this->CurrFrameCycles = (TAtomic<unsigned___int64>)0x0;
  (this->FrameCycles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameCycles).ArrayNum = 0;
  *piVar1 = 0;
  this->TotalCycles = 0;
  this->CachedAverageCycles = (TAtomic<unsigned___int64>)0x0;
  this->FrameIdx = 0;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->FrameCycles,param_1,Default);
  LOCK();
  this->CurrFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  uVar2 = (this->FrameCycles).ArrayNum;
  if (-1 < (int)uVar2) {
    (this->FrameCycles).ArrayNum = 0;
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&(this->FrameCycles).AllocatorInstance,0,piVar1);
    }
    TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this->FrameCycles,uVar2,Default);
    this->TotalCycles = 0;
    LOCK();
    this->CachedAverageCycles = (TAtomic<unsigned___int64>)0x0;
    UNLOCK();
    this->FrameIdx = 0;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// NextFrame @ 147d1b4d0

void __thiscall FInGameCycleHistory::NextFrame(FInGameCycleHistory *this)

{
  uint uVar1;
  int iVar2;
  TAtomic<unsigned___int64> TVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  if ((this->FrameCycles).ArrayNum <= this->FrameIdx) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameIdx < FrameCycles.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InGamePerformanceTracker.cpp"
                       ,0xd,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->TotalCycles = this->TotalCycles + (longlong)this->CurrFrameCycles;
  uVar1 = this->FrameIdx;
  uVar6 = 0;
  if ((int)uVar1 < (this->FrameCycles).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->TotalCycles =
       this->TotalCycles -
       *(longlong *)((this->FrameCycles).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  TVar3 = this->CurrFrameCycles;
  uVar1 = this->FrameIdx;
  uVar6 = 0;
  if ((int)uVar1 < (this->FrameCycles).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(TAtomic<unsigned___int64> *)
   ((this->FrameCycles).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) = TVar3;
  LOCK();
  this->CurrFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  iVar2 = (this->FrameCycles).ArrayNum;
  this->FrameIdx = (this->FrameIdx + 1) % iVar2;
  LOCK();
  this->CachedAverageCycles =
       (TAtomic<unsigned___int64>)(this->TotalCycles / (ulonglong)(longlong)iVar2);
  UNLOCK();
  return;
}

