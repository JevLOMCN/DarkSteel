// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 17

// FStatsTreeElement @ 1419cf6b0

FStatsTreeElement * __thiscall
FStatsTreeElement::FStatsTreeElement(FStatsTreeElement *this,FStatsTreeElement *param_1)

{
  TArray<TSharedPtr<FStatsTreeElement,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TSharedPtr<FStatsTreeElement,1> *pTVar4;
  
  this->Name = param_1->Name;
  ::FString::FString(&this->Path,&param_1->Path);
  pTVar1 = &this->Children;
  this->Invocations = param_1->Invocations;
  this->Cycles = param_1->Cycles;
  this->CyclesOfChildren = param_1->CyclesOfChildren;
  this->RatioAgainstTotalInclusive = param_1->RatioAgainstTotalInclusive;
  this->RatioAgainstTotalExclusive = param_1->RatioAgainstTotalExclusive;
  this->RatioAgainstMaximumInclusive = param_1->RatioAgainstMaximumInclusive;
  this->RatioAgainstMaximumExclusive = param_1->RatioAgainstMaximumExclusive;
  piVar2 = &(this->Children).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Children).ArrayNum;
  pTVar4 = (TSharedPtr<FStatsTreeElement,1> *)(param_1->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TSharedPtr<FStatsTreeElement,1>,TSharedPtr<FStatsTreeElement,1>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
  }
  return this;
}

// FStatsTreeElement @ 1419cf780

FStatsTreeElement * __thiscall FStatsTreeElement::FStatsTreeElement(FStatsTreeElement *this)

{
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->Path).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).Data.ArrayNum = 0;
  (this->Path).Data.ArrayMax = 0;
  this->Invocations = 0;
  this->Cycles = 0;
  this->CyclesOfChildren = 0;
  this->RatioAgainstTotalInclusive = 0.0;
  this->RatioAgainstTotalExclusive = 0.0;
  this->RatioAgainstMaximumInclusive = 0.0;
  this->RatioAgainstMaximumExclusive = 0.0;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  return this;
}

// AverageSeconds @ 1419e3110

double __thiscall FStatsTreeElement::AverageSeconds(FStatsTreeElement *this,bool param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  double dVar5;
  
  if ((this->Invocations == 0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4520621824010092454>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsHierarchical.cpp"
                         ,0x5a,"Invocations > 0"), bVar3)) {
    pcVar2 = (code *)swi(3);
    dVar5 = (double)(*pcVar2)();
    return dVar5;
  }
  uVar1 = this->Cycles;
  uVar4 = uVar1;
  if ((!param_1) && (uVar4 = uVar1 - this->CyclesOfChildren, uVar1 < this->CyclesOfChildren)) {
    uVar4 = 0;
  }
  return ((double)uVar4 * FGenericPlatformTime::SecondsPerCycle) / (double)this->Invocations;
}

// ComputeChildrenCycles @ 1419e5c70

void __cdecl
`FStatsTreeElement::UpdatePostMeasurement'::__l2::Local::ComputeChildrenCycles
          (FStatsTreeElement *param_1)

{
  int iVar1;
  FStatsTreeElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if (param_1 != (FStatsTreeElement *)0x0) {
    iVar1 = (param_1->Children).ArrayNum;
    if (0 < iVar1) {
      param_1->CyclesOfChildren = 0;
      pFVar3 = (param_1->Children).AllocatorInstance.Data;
      pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((param_1->Children).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TSharedPtr<FStatsTreeElement,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar3 == pFVar4) break;
        pFVar2 = *(FStatsTreeElement **)pFVar3;
        if (pFVar2 != (FStatsTreeElement *)0x0) {
          param_1->CyclesOfChildren = param_1->CyclesOfChildren + pFVar2->Cycles;
          ComputeChildrenCycles(pFVar2);
        }
        pFVar3 = pFVar3 + 0x10;
      }
    }
  }
  return;
}

// Contribution @ 1419e6260

double __thiscall FStatsTreeElement::Contribution(FStatsTreeElement *this,bool param_1,bool param_2)

{
  if (!param_2) {
    if (param_1) {
      return this->RatioAgainstMaximumExclusive;
    }
    return this->RatioAgainstTotalExclusive;
  }
  if (param_1) {
    return this->RatioAgainstMaximumInclusive;
  }
  return this->RatioAgainstTotalInclusive;
}

// FindChild @ 1419f9450

FStatsTreeElement * __thiscall
FStatsTreeElement::FindChild(FStatsTreeElement *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FStatsTreeElement *pFVar8;
  FStatsTreeElement *pFVar9;
  uint uVar10;
  FStatsTreeElement *pFVar11;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((param_1->Data).ArrayNum < 2) {
    return this;
  }
  pFVar8 = (FStatsTreeElement *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::FString(&local_38,L".");
  bVar4 = ::FString::Split(param_1,&local_38,&local_48,&local_58);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar9 = pFVar8;
  if (bVar4) {
    pFVar8 = FindChild(this,&local_48);
    if (pFVar8 != (FStatsTreeElement *)0x0) {
      pFVar9 = FindChild(pFVar8,&local_58);
    }
  }
  else {
    pFVar11 = pFVar8;
    if (0 < (this->Children).ArrayNum) {
      do {
        uVar10 = (uint)pFVar8;
        uVar5 = 0;
        if ((int)uVar10 < (this->Children).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FStatsTreeElement *)(*pcVar2)();
          return pFVar8;
        }
        if (*(longlong *)
             ((this->Children).AllocatorInstance.Data + (longlong)&(pFVar11->Name).ComparisonIndex)
            != 0) {
          uVar5 = 0;
          if ((int)uVar10 < (this->Children).ArrayNum) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FStatsTreeElement *)(*pcVar2)();
            return pFVar8;
          }
          pFVar1 = (this->Children).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar1 + (longlong)&(pFVar11->Name).ComparisonIndex) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FStatsTreeElement *)(*pcVar2)();
            return pFVar8;
          }
          ::FName::ToString(*(FName **)(pFVar1 + (longlong)&(pFVar11->Name).ComparisonIndex),
                            &local_28);
          FVar3.Data = local_28.Data.AllocatorInstance.Data;
          iVar7 = (param_1->Data).ArrayNum;
          iVar6 = local_28.Data.ArrayNum;
          if (iVar6 == iVar7) {
            if (iVar6 < 2) {
              bVar4 = true;
            }
            else {
              iVar7 = wcscmp((wchar_t *)local_28.Data.AllocatorInstance.Data,
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
              bVar4 = iVar7 == 0;
            }
          }
          else {
            bVar4 = iVar6 + iVar7 == 1;
          }
          if (FVar3.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar3.Data);
          }
          if (bVar4) {
            uVar5 = 0;
            if ((int)uVar10 < (this->Children).ArrayNum) {
              uVar5 = ~uVar10 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              pFVar8 = (FStatsTreeElement *)(*pcVar2)();
              return pFVar8;
            }
            pFVar9 = *(FStatsTreeElement **)
                      ((this->Children).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10);
            break;
          }
        }
        pFVar8 = (FStatsTreeElement *)(ulonglong)(uVar10 + 1);
        pFVar9 = (FStatsTreeElement *)0x0;
        pFVar11 = (FStatsTreeElement *)&(pFVar11->Path).Data.ArrayNum;
      } while ((int)(uVar10 + 1) < (this->Children).ArrayNum);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return pFVar9;
}

// GetChildren @ 1419fcd80

TArray<TSharedPtr<FStatsTreeElement,1>,TSizedDefaultAllocator<32>_> * __thiscall
FStatsTreeElement::GetChildren(FStatsTreeElement *this)

{
  return &this->Children;
}

// GetFName @ 1419fdf20

FName __thiscall FStatsTreeElement::GetFName(FStatsTreeElement *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->Name;
  return in_RDX;
}

// GetName @ 141a01080

FString * __thiscall
FStatsTreeElement::GetName(FStatsTreeElement *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&this->Name,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPath @ 141a01560

FString * __thiscall
FStatsTreeElement::GetPath(FStatsTreeElement *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->Path);
  return __return_storage_ptr__;
}

// MaxCycles @ 141a0a890

uint __thiscall FStatsTreeElement::MaxCycles(FStatsTreeElement *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar5 = this->Cycles;
  uVar7 = 0;
  uVar4 = 0;
  uVar8 = uVar5;
  if ((!param_1) && (uVar8 = uVar5 - this->CyclesOfChildren, uVar5 < this->CyclesOfChildren)) {
    uVar8 = uVar4;
  }
  uVar9 = uVar7;
  if (0 < (this->Children).ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar5 = uVar4;
      if ((int)uVar6 < (this->Children).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      uVar5 = uVar8;
      if (*(longlong *)((this->Children).AllocatorInstance.Data + uVar9) != 0) {
        uVar5 = uVar4;
        if ((int)uVar6 < (this->Children).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
        pFVar1 = (this->Children).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar1 + uVar9) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
        uVar5 = MaxCycles(*(FStatsTreeElement **)(pFVar1 + uVar9),param_1);
        if (uVar5 < uVar8) {
          uVar5 = uVar8;
        }
      }
      uVar8 = uVar5;
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar9 = uVar9 + 0x10;
    } while ((int)(uVar6 + 1) < (this->Children).ArrayNum);
  }
  return uVar8;
}

// Num @ 141a0f5f0

uint __thiscall FStatsTreeElement::Num(FStatsTreeElement *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar4 = this->Invocations;
  if (!param_1) {
    return uVar4;
  }
  uVar6 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Children).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      if (*(longlong *)((this->Children).AllocatorInstance.Data + lVar7) != 0) {
        uVar5 = 0;
        if ((int)uVar6 < (this->Children).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
        pFVar1 = (this->Children).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar1 + lVar7) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
        uVar5 = Num(*(FStatsTreeElement **)(pFVar1 + lVar7),param_1);
        uVar4 = uVar4 + uVar5;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < (this->Children).ArrayNum);
  }
  return uVar4;
}

// RemoveCyclesForTimers @ 141a19d40

void __cdecl
`FStatsTreeElement::UpdatePostMeasurement'::__l2::Local::RemoveCyclesForTimers
          (FStatsTreeElement *param_1,double param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar6 [16];
  undefined1 local_res8 [8];
  
  if (param_1 != (FStatsTreeElement *)0x0) {
    if (param_1->Cycles != 0) {
      uVar3 = param_1->Invocations;
      uVar2 = FStatsTreeElement::Num(param_1,true);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (double)(uVar2 - uVar3) * param_2 + __real_3feff7ced916872b;
      auVar6 = roundpd(extraout_XMM0,auVar6,1);
      uVar3 = (uint)(longlong)auVar6._0_8_;
      if (param_1->Cycles < uVar3) {
        param_1->Cycles = 0;
      }
      else {
        param_1->Cycles = param_1->Cycles - uVar3;
      }
    }
    iVar1 = (param_1->Children).ArrayNum;
    pFVar4 = (param_1->Children).AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((param_1->Children).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<FStatsTreeElement,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) break;
      if (*(FStatsTreeElement **)pFVar4 != (FStatsTreeElement *)0x0) {
        RemoveCyclesForTimers(*(FStatsTreeElement **)pFVar4,param_2);
      }
      pFVar4 = pFVar4 + 0x10;
    }
  }
  return;
}

// TotalCycles @ 141a256a0

uint __thiscall FStatsTreeElement::TotalCycles(FStatsTreeElement *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = this->Cycles;
  uVar2 = uVar1;
  if ((!param_1) && (uVar2 = uVar1 - this->CyclesOfChildren, uVar1 < this->CyclesOfChildren)) {
    uVar2 = 0;
  }
  return uVar2;
}

// TotalSeconds @ 141a256c0

double __thiscall FStatsTreeElement::TotalSeconds(FStatsTreeElement *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = this->Cycles;
  uVar2 = uVar1;
  if ((!param_1) && (uVar2 = uVar1 - this->CyclesOfChildren, uVar1 < this->CyclesOfChildren)) {
    uVar2 = 0;
  }
  return (double)uVar2 * FGenericPlatformTime::SecondsPerCycle;
}

// UpdatePostMeasurement @ 141a2c3d0

void __thiscall FStatsTreeElement::UpdatePostMeasurement(FStatsTreeElement *this,double param_1)

{
  int iVar1;
  FStatsTreeElement *pFVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if (__real_3e45798ee0000000 < param_1) {
    `FStatsTreeElement::UpdatePostMeasurement'::__l2::Local::RemoveCyclesForTimers(this,param_1);
  }
  if (this != (FStatsTreeElement *)0x0) {
    iVar1 = (this->Children).ArrayNum;
    if (0 < iVar1) {
      this->CyclesOfChildren = 0;
      pFVar5 = (this->Children).AllocatorInstance.Data;
      pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->Children).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TSharedPtr<FStatsTreeElement,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar5 == pFVar6) break;
        pFVar2 = *(FStatsTreeElement **)pFVar5;
        if (pFVar2 != (FStatsTreeElement *)0x0) {
          this->CyclesOfChildren = this->CyclesOfChildren + pFVar2->Cycles;
          `FStatsTreeElement::UpdatePostMeasurement'::__l2::Local::ComputeChildrenCycles(pFVar2);
        }
        pFVar5 = pFVar5 + 0x10;
      }
    }
  }
  uVar3 = MaxCycles(this,true);
  uVar4 = MaxCycles(this,false);
  `FStatsTreeElement::UpdatePostMeasurement'::__l2::Local::UpdateRatios(this,0,0,uVar3,uVar4);
  return;
}

// UpdateRatios @ 141a2c5a0

void __cdecl
`FStatsTreeElement::UpdatePostMeasurement'::__l2::Local::UpdateRatios
          (FStatsTreeElement *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  if (param_1 != (FStatsTreeElement *)0x0) {
    param_1->RatioAgainstTotalInclusive = 0.0;
    param_1->RatioAgainstTotalExclusive = 0.0;
    param_1->RatioAgainstMaximumInclusive = 0.0;
    param_1->RatioAgainstMaximumExclusive = 0.0;
    if (param_2 != 0) {
      param_1->RatioAgainstTotalInclusive = (double)param_1->Cycles / (double)param_2;
    }
    if (param_3 != 0) {
      uVar7 = 0;
      if (param_1->CyclesOfChildren <= param_1->Cycles) {
        uVar7 = param_1->Cycles - param_1->CyclesOfChildren;
      }
      param_1->RatioAgainstTotalExclusive = (double)uVar7 / (double)param_3;
    }
    if (param_4 != 0) {
      param_1->RatioAgainstMaximumInclusive = (double)param_1->Cycles / (double)param_4;
    }
    if (param_5 != 0) {
      param_1->RatioAgainstMaximumExclusive = (double)param_1->Cycles / (double)param_5;
    }
    iVar1 = (param_1->Children).ArrayNum;
    uVar7 = 0;
    pFVar5 = (param_1->Children).AllocatorInstance.Data;
    uVar8 = 0;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((param_1->Children).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<FStatsTreeElement,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      lVar3 = *(longlong *)pFVar5;
      if (lVar3 != 0) {
        uVar2 = *(uint *)(lVar3 + 0x1c);
        uVar8 = uVar8 + uVar2;
        iVar4 = 0;
        if (*(uint *)(lVar3 + 0x20) <= uVar2) {
          iVar4 = uVar2 - *(int *)(lVar3 + 0x20);
        }
        uVar7 = uVar7 + iVar4;
      }
      pFVar5 = pFVar5 + 0x10;
    }
    iVar1 = (param_1->Children).ArrayNum;
    pFVar5 = (param_1->Children).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((param_1->Children).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<FStatsTreeElement,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      if (*(FStatsTreeElement **)pFVar5 != (FStatsTreeElement *)0x0) {
        UpdateRatios(*(FStatsTreeElement **)pFVar5,uVar8,uVar7,param_4,param_5);
      }
      pFVar5 = pFVar5 + 0x10;
    }
  }
  return;
}

