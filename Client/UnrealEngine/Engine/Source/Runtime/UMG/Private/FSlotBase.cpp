// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// SetAttribute<bool,bool> @ 1468fcd50

bool __thiscall
FSlotBase::SetAttribute<bool,bool>
          (FSlotBase *this,TAttribute<bool> *param_1,TAttribute<bool> *param_2,
          EInvalidateWidgetReason param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  EInvalidateWidgetReason EVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  int local_58;
  FDestructionSentinel local_50;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
             (FReadAccessScope *)&local_50);
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_1->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar5 + 0x38))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)&local_50);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_50);
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if ((param_1->bIsSet == param_2->bIsSet) && (param_1->Value == param_2->Value)) {
        return false;
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 (FReadAccessScope *)&local_50);
      if ((*(int *)&(param_1->Getter).field_0x10 == 0) ||
         (plVar5 = *(longlong **)&(param_1->Getter).field_0x8, plVar5 == (longlong *)0x0)) {
        lVar8 = 0;
      }
      else {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res10);
        lVar8 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_50);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
                 (FReadAccessScope *)&local_50);
      if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
         (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 == (longlong *)0x0)) {
        lVar7 = 0;
      }
      else {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res10);
        lVar7 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_50);
      if (lVar8 == lVar7) {
        return false;
      }
    }
  }
  bVar3 = TAttribute<bool>::IsBound(param_1);
  bVar4 = TAttribute<bool>::IsBound(param_2);
  param_1->Value = param_2->Value;
  param_1->bIsSet = param_2->bIsSet;
  if (&param_2->Getter != &param_1->Getter) {
    local_68 = (undefined1  [8])0x0;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
               (FReadAccessScope *)&local_50);
    if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x50))(plVar5,local_68);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_60.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  EVar6 = param_3 | Volatility;
  if (bVar3 == bVar4) {
    EVar6 = param_3;
  }
  Invalidate(this,EVar6);
  return true;
}

