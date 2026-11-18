// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 14

// GetEventCollection @ 14d4bd710

FInstanceEventCollection * __thiscall
UE::StateTreeDebugger::FScrubState::GetEventCollection(FScrubState *this)

{
  FInstanceEventCollection *pFVar1;
  
  pFVar1 = &FInstanceEventCollection::Invalid;
  if (this->EventCollection != (FInstanceEventCollection *)0x0) {
    pFVar1 = this->EventCollection;
  }
  return pFVar1;
}

// GotoNextActiveStates @ 14d4c1c40

double __thiscall UE::StateTreeDebugger::FScrubState::GotoNextActiveStates(FScrubState *this)

{
  if (this->ScrubTimeBoundState == BeforeLowerBound) {
    SetActiveStatesIndex(this,0);
    return this->ScrubTime;
  }
  SetActiveStatesIndex(this,this->ActiveStatesIndex + 1);
  return this->ScrubTime;
}

// GotoNextFrame @ 14d4c1c80

double __thiscall UE::StateTreeDebugger::FScrubState::GotoNextFrame(FScrubState *this)

{
  if (this->ScrubTimeBoundState == InBounds) {
    SetFrameSpanIndex(this,this->FrameSpanIndex + 1);
    return this->ScrubTime;
  }
  SetFrameSpanIndex(this,0);
  return this->ScrubTime;
}

// GotoPreviousActiveStates @ 14d4c1cc0

double __thiscall UE::StateTreeDebugger::FScrubState::GotoPreviousActiveStates(FScrubState *this)

{
  FInstanceEventCollection *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  double dVar5;
  
  pFVar1 = this->EventCollection;
  if (this->ScrubTimeBoundState == AfterHigherBound) {
    iVar4 = (pFVar1->ActiveStatesChanges).ArrayNum + -1;
  }
  else {
    iVar4 = this->ActiveStatesIndex;
    if ((-1 < iVar4) && (iVar4 < (pFVar1->ActiveStatesChanges).ArrayNum)) {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        dVar5 = (double)(*pcVar2)();
        return dVar5;
      }
      if (*(int *)((pFVar1->ActiveStatesChanges).AllocatorInstance.Data + (longlong)iVar4 * 8) <
          this->FrameSpanIndex) {
        iVar4 = this->ActiveStatesIndex;
        goto LAB_14d4c1d45;
      }
    }
    iVar4 = this->ActiveStatesIndex + -1;
  }
LAB_14d4c1d45:
  SetActiveStatesIndex(this,iVar4);
  return this->ScrubTime;
}

// GotoPreviousFrame @ 14d4c1d70

double __thiscall UE::StateTreeDebugger::FScrubState::GotoPreviousFrame(FScrubState *this)

{
  if (this->ScrubTimeBoundState == InBounds) {
    SetFrameSpanIndex(this,this->FrameSpanIndex + -1);
    return this->ScrubTime;
  }
  SetFrameSpanIndex(this,(this->EventCollection->FrameSpans).ArrayNum + -1);
  return this->ScrubTime;
}

// HasNextActiveStates @ 14d4c2420

bool __thiscall UE::StateTreeDebugger::FScrubState::HasNextActiveStates(FScrubState *this)

{
  FInstanceEventCollection *pFVar1;
  int iVar2;
  
  pFVar1 = this->EventCollection;
  if ((pFVar1 != (FInstanceEventCollection *)0x0) &&
     (((this->ScrubTimeBoundState == BeforeLowerBound &&
       (0 < (pFVar1->ActiveStatesChanges).ArrayNum)) ||
      ((this->ActiveStatesIndex != -1 &&
       ((iVar2 = this->ActiveStatesIndex + 1, -1 < iVar2 &&
        (iVar2 < (pFVar1->ActiveStatesChanges).ArrayNum)))))))) {
    return true;
  }
  return false;
}

// HasNextFrame @ 14d4c2460

bool __thiscall UE::StateTreeDebugger::FScrubState::HasNextFrame(FScrubState *this)

{
  int iVar1;
  
  if (this->EventCollection == (FInstanceEventCollection *)0x0) {
    return false;
  }
  if (this->ScrubTimeBoundState == InBounds) {
    iVar1 = this->FrameSpanIndex + 1;
    if ((-1 < iVar1) && (iVar1 < (this->EventCollection->FrameSpans).ArrayNum)) {
      return true;
    }
    return false;
  }
  return this->ScrubTimeBoundState == BeforeLowerBound;
}

// HasPreviousActiveStates @ 14d4c24a0

bool __thiscall UE::StateTreeDebugger::FScrubState::HasPreviousActiveStates(FScrubState *this)

{
  FInstanceEventCollection *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  pFVar1 = this->EventCollection;
  if (pFVar1 != (FInstanceEventCollection *)0x0) {
    iVar5 = this->ActiveStatesIndex;
    if (iVar5 != -1) {
      if ((this->ScrubTimeBoundState != AfterHigherBound) ||
         ((pFVar1->ActiveStatesChanges).ArrayNum < 1)) {
        if ((-1 < iVar5) && (iVar5 < (pFVar1->ActiveStatesChanges).ArrayNum)) {
          if ((iVar5 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if (*(int *)((pFVar1->ActiveStatesChanges).AllocatorInstance.Data + (longlong)iVar5 * 8) <
              this->FrameSpanIndex) {
            return true;
          }
        }
        iVar5 = this->ActiveStatesIndex + -1;
        if (iVar5 < 0) {
          return false;
        }
        if ((pFVar1->ActiveStatesChanges).ArrayNum <= iVar5) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// HasPreviousFrame @ 14d4c2560

bool __thiscall UE::StateTreeDebugger::FScrubState::HasPreviousFrame(FScrubState *this)

{
  int iVar1;
  
  if (this->EventCollection == (FInstanceEventCollection *)0x0) {
    return false;
  }
  if (this->ScrubTimeBoundState == InBounds) {
    iVar1 = this->FrameSpanIndex + -1;
    if ((-1 < iVar1) && (iVar1 < (this->EventCollection->FrameSpans).ArrayNum)) {
      return true;
    }
    return false;
  }
  return this->ScrubTimeBoundState == AfterHigherBound;
}

// SetActiveStatesIndex @ 14d4cfb60

void __thiscall
UE::StateTreeDebugger::FScrubState::SetActiveStatesIndex(FScrubState *this,int param_1)

{
  int *piVar1;
  FInstanceEventCollection *pFVar2;
  FInstanceEventCollection *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  piVar1 = &this->ActiveStatesIndex;
  *piVar1 = param_1;
  if (this->EventCollection == (FInstanceEventCollection *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventCollection != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeDebuggerTypes.cpp"
                       ,0x72,L"Internal method expecting validity checks before getting called.");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((*piVar1 < 0) || ((this->EventCollection->ActiveStatesChanges).ArrayNum <= *piVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventCollection->ActiveStatesChanges.IsValidIndex(ActiveStatesIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeDebuggerTypes.cpp"
                       ,0x73,L"Internal method expecting validity checks before getting called.");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar7 = *piVar1;
  pFVar2 = this->EventCollection;
  uVar6 = 0;
  if ((int)uVar7 < (pFVar2->ActiveStatesChanges).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
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
  pFVar3 = this->EventCollection;
  uVar7 = *(uint *)((pFVar2->ActiveStatesChanges).AllocatorInstance.Data + (longlong)(int)uVar7 * 8)
  ;
  this->FrameSpanIndex = uVar7;
  uVar6 = 0;
  if ((int)uVar7 < (pFVar3->FrameSpans).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
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
  uVar6 = this->FrameSpanIndex;
  pFVar2 = this->EventCollection;
  this->ScrubTime =
       *(double *)((pFVar3->FrameSpans).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30 + 0x20)
  ;
  uVar7 = 0;
  if ((int)uVar6 < (pFVar2->FrameSpans).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
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
  this->TraceFrameIndex =
       *(ulong64 *)((pFVar2->FrameSpans).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30);
  this->ScrubTimeBoundState = InBounds;
  return;
}

// SetEventCollection @ 14d4d0000

void __thiscall
UE::StateTreeDebugger::FScrubState::SetEventCollection
          (FScrubState *this,FInstanceEventCollection *param_1)

{
  this->EventCollection = param_1;
  SetScrubTime(this,this->ScrubTime,true);
  return;
}

// SetFrameSpanIndex @ 14d4d0020

void __thiscall UE::StateTreeDebugger::FScrubState::SetFrameSpanIndex(FScrubState *this,int param_1)

{
  int *piVar1;
  FInstanceEventCollection *pFVar2;
  FInstanceEventCollection *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  piVar1 = &this->FrameSpanIndex;
  *piVar1 = param_1;
  if (this->EventCollection == (FInstanceEventCollection *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventCollection != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeDebuggerTypes.cpp"
                       ,0x65,L"Internal method expecting validity checks before getting called.");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((*piVar1 < 0) || ((this->EventCollection->FrameSpans).ArrayNum <= *piVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventCollection->FrameSpans.IsValidIndex(FrameSpanIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeDebuggerTypes.cpp"
                       ,0x66,L"Internal method expecting validity checks before getting called.");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar8 = *piVar1;
  pFVar2 = this->EventCollection;
  uVar7 = 0;
  if ((int)uVar8 < (pFVar2->FrameSpans).ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
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
  uVar7 = *piVar1;
  pFVar3 = this->EventCollection;
  this->ScrubTime =
       *(double *)((pFVar2->FrameSpans).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x30 + 0x20)
  ;
  uVar8 = 0;
  if ((int)uVar7 < (pFVar3->FrameSpans).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  this->TraceFrameIndex =
       *(ulong64 *)((pFVar3->FrameSpans).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30);
  this->ScrubTimeBoundState = InBounds;
  if (this->EventCollection == (FInstanceEventCollection *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventCollection != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeDebuggerTypes.cpp"
                       ,0xe5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = TArray<UE::StateTreeDebugger::FInstanceEventCollection::FActiveStatesChangePair,TSizedDefaultAllocator<32>_>
          ::
          FindLastByPredicate<_UE::StateTreeDebugger::FScrubState::UpdateActiveStatesIndex_::__l2::<lambda_1>_>
                    (&this->EventCollection->ActiveStatesChanges,(<lambda_1>)param_1,
                     (this->EventCollection->ActiveStatesChanges).ArrayNum);
  this->ActiveStatesIndex = iVar6;
  return;
}

// SetScrubTime @ 14d4d02f0

bool __thiscall
UE::StateTreeDebugger::FScrubState::SetScrubTime(FScrubState *this,double param_1,bool param_2)

{
  double dVar1;
  int iVar2;
  FInstanceEventCollection *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  int iVar12;
  
  if ((!param_2) && (param_1 == this->ScrubTime)) {
    return false;
  }
  pFVar3 = this->EventCollection;
  this->ScrubTimeBoundState = Unset;
  this->TraceFrameIndex = 0xffffffffffffffff;
  this->FrameSpanIndex = -1;
  this->ActiveStatesIndex = -1;
  if ((pFVar3 != (FInstanceEventCollection *)0x0) &&
     (iVar2 = (pFVar3->FrameSpans).ArrayNum, 0 < iVar2)) {
    dVar1 = *(double *)((pFVar3->FrameSpans).AllocatorInstance.Data + 0x20);
    uVar9 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar9 = ~(iVar2 - 1U) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    iVar2 = (pFVar3->FrameSpans).ArrayNum;
    pFVar4 = (pFVar3->FrameSpans).AllocatorInstance.Data;
    pFVar10 = pFVar4 + (longlong)iVar2 * 0x30;
    if (dVar1 <= param_1) {
      pFVar6 = pFVar4;
      if (param_1 <=
          (*(double *)(pFVar10 + -0x20) - *(double *)(pFVar10 + -0x28)) +
          *(double *)(pFVar10 + -0x10)) {
        for (; pFVar6 != pFVar10; pFVar6 = pFVar6 + 0x30) {
          if (param_1 < *(double *)(pFVar6 + 0x20)) {
            lVar11 = ((longlong)pFVar6 - (longlong)pFVar4) / 6 +
                     ((longlong)pFVar6 - (longlong)pFVar4 >> 0x3f);
            iVar12 = (int)(lVar11 >> 3) - (int)(lVar11 >> 0x3f);
            if (((iVar12 != -1) && (iVar2 = iVar12, iVar12 == 0)) &&
               (bVar7 = Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_3777258041288687540>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeDebuggerTypes.cpp"
                                   ,0x4c,
                                   "NextFrameSpanIndex == INDEX_NONE || NextFrameSpanIndex > 0"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            break;
          }
        }
        SetFrameSpanIndex(this,iVar2 + -1);
      }
      else {
        this->ScrubTimeBoundState = AfterHigherBound;
        UpdateActiveStatesIndex(this,(pFVar3->FrameSpans).ArrayNum + -1);
      }
    }
    else {
      this->ScrubTimeBoundState = BeforeLowerBound;
    }
  }
  this->ScrubTime = param_1;
  return true;
}

// UpdateActiveStatesIndex @ 14d4d3db0

void __thiscall
UE::StateTreeDebugger::FScrubState::UpdateActiveStatesIndex(FScrubState *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->EventCollection == (FInstanceEventCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventCollection != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeDebuggerTypes.cpp"
                       ,0xe5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = TArray<UE::StateTreeDebugger::FInstanceEventCollection::FActiveStatesChangePair,TSizedDefaultAllocator<32>_>
          ::
          FindLastByPredicate<_UE::StateTreeDebugger::FScrubState::UpdateActiveStatesIndex_::__l2::<lambda_1>_>
                    (&this->EventCollection->ActiveStatesChanges,(<lambda_1>)param_1,
                     (this->EventCollection->ActiveStatesChanges).ArrayNum);
  this->ActiveStatesIndex = iVar3;
  return;
}

