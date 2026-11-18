// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// UpdateValue @ 14d48f8a0

void __thiscall
TraceServices::TCounterDataIterator<double>::UpdateValue(TCounterDataIterator<double> *this)

{
  long64 *plVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  longlong lVar4;
  TArray<double,TSizedDefaultAllocator<64>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  ECounterOpType EVar9;
  double dVar10;
  
  pdVar3 = (this->TimestampsIterator).CurrentItem;
  if (pdVar3 != (double *)0x0) {
    bVar7 = false;
    while ((lVar4 = (this->FrameStartTimesIterator).Index, -1 < lVar4 &&
           (pTVar5 = (this->FrameStartTimesIterator).Container, lVar4 < pTVar5->ArrayNum))) {
      if ((lVar4 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (pTVar5->AllocatorInstance).Data + lVar4 * 8;
      if (*pdVar3 < *(double *)pFVar2 || *pdVar3 == *(double *)pFVar2) break;
      plVar1 = &(this->FrameStartTimesIterator).Index;
      *plVar1 = *plVar1 + 1;
      bVar7 = true;
    }
    this->CurrentTime = *pdVar3;
    if (bVar7) {
      EVar9 = Set;
    }
    else {
      EVar9 = *(this->OpTypesIterator).CurrentItem;
    }
    pdVar3 = (this->OpArgumentsIterator).CurrentItem;
    this->CurrentOp = EVar9;
    dVar10 = *pdVar3;
    this->CurrentOpArgument = dVar10;
    if (EVar9 != Set) {
      if (EVar9 != Add) {
        return;
      }
      dVar10 = dVar10 + this->CurrentValue;
    }
    this->CurrentValue = dVar10;
  }
  return;
}

// UpdateValue @ 14d48f9b0

void __thiscall
TraceServices::TCounterDataIterator<__int64>::UpdateValue(TCounterDataIterator<__int64> *this)

{
  long64 *plVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  longlong lVar4;
  TArray<double,TSizedDefaultAllocator<64>_> *pTVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  ECounterOpType EVar10;
  
  pdVar3 = (this->TimestampsIterator).CurrentItem;
  if (pdVar3 != (double *)0x0) {
    bVar8 = false;
    while (lVar4 = (this->FrameStartTimesIterator).Index, -1 < lVar4) {
      pTVar5 = (this->FrameStartTimesIterator).Container;
      if (pTVar5->ArrayNum <= lVar4) break;
      if (lVar4 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar2 = (pTVar5->AllocatorInstance).Data + lVar4 * 8;
      if (*pdVar3 < *(double *)pFVar2 || *pdVar3 == *(double *)pFVar2) break;
      plVar1 = &(this->FrameStartTimesIterator).Index;
      *plVar1 = *plVar1 + 1;
      bVar8 = true;
    }
    this->CurrentTime = *pdVar3;
    if (bVar8) {
      EVar10 = Set;
    }
    else {
      EVar10 = *(this->OpTypesIterator).CurrentItem;
    }
    plVar6 = (this->OpArgumentsIterator).CurrentItem;
    this->CurrentOp = EVar10;
    lVar4 = *plVar6;
    this->CurrentOpArgument = lVar4;
    if (EVar10 == Set) {
      this->CurrentValue = lVar4;
    }
    else if (EVar10 == Add) {
      this->CurrentValue = this->CurrentValue + lVar4;
      return;
    }
  }
  return;
}

