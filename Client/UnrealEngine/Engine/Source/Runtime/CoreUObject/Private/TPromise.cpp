// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// SetValue @ 141f4d730

void __thiscall
TPromise<FSharedBuffer>::SetValue(TPromise<FSharedBuffer> *this,FSharedBuffer *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  TFutureState<FSharedBuffer> *this_00;
  FBufferOwner *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((this->State).Object == (TFutureState<FSharedBuffer> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this->State).Object == (TFutureState<FSharedBuffer> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  this_00 = (this->State).Object;
  if (*(TAtomic<bool> *)&this_00->field_0x68 != (TAtomic<bool>)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (param_1->Owner).Owner;
  if (pFVar3 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar3->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      pFVar3->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)((longlong)pFVar3->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  *(FBufferOwner **)(this_00->Result).Pad = pFVar3;
  FFutureState::MarkComplete((FFutureState *)this_00);
  return;
}

