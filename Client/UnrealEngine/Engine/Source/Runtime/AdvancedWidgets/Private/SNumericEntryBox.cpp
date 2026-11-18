// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 2

// SetMaxFractionalDigits @ 14d8872d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<float>::SetMaxFractionalDigits
          (SNumericEntryBox<float> *this,TAttribute<TOptional<int>_> *param_1)

{
  INumericTypeInterface<float> *pIVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<int> *pTVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  int local_98;
  char local_94;
  undefined1 local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  ForAnyElementType FStack_80;
  ulonglong local_78;
  int local_70;
  char local_6c;
  undefined1 local_68;
  undefined1 local_60 [8];
  ForAnyElementType FStack_58;
  int local_50;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  
  if ((this->Interface).Object == (INumericTypeInterface<float> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->Interface).Object;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x28);
  pTVar4 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar4->bIsSet == false) {
    local_6c = (this->MaxFractionalDigits).Value.bIsSet;
    if ((bool)local_6c != false) {
      local_70 = (this->MaxFractionalDigits).Value.TypedValue;
    }
    local_68 = (this->MaxFractionalDigits).bIsSet;
    local_50 = 0;
    local_60 = (undefined1  [8])0x0;
    FStack_58.Data = (FScriptContainerElement *)0x0;
    TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy> *)local_60,
               &(this->MaxFractionalDigits).Getter);
    (*pcVar2)(pIVar1,&local_70);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
               (FWriteAccessScope *)&local_30);
    if ((local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_58.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (FStack_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data);
    }
    this_00 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60;
  }
  else {
    pTVar4 = TAttribute<TOptional<int>_>::Get(param_1);
    local_94 = pTVar4->bIsSet;
    if ((bool)local_94 != false) {
      local_98 = pTVar4->TypedValue;
    }
    local_90 = 1;
    local_78 = 0;
    local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_80.Data = (FScriptContainerElement *)0x0;
    (*pcVar2)(pIVar1,&local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_88,(FWriteAccessScope *)&local_48);
    if (((int)local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_80.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
      local_78 = local_78 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_80.Data);
    }
    this_00 = &local_88;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&this_00->AccessDetector);
  this->bCachedValueStringDirty = true;
  return;
}

// SetMinFractionalDigits @ 14d8874d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<float>::SetMinFractionalDigits
          (SNumericEntryBox<float> *this,TAttribute<TOptional<int>_> *param_1)

{
  INumericTypeInterface<float> *pIVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<int> *pTVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  int local_98;
  char local_94;
  undefined1 local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  ForAnyElementType FStack_80;
  ulonglong local_78;
  int local_70;
  char local_6c;
  undefined1 local_68;
  undefined1 local_60 [8];
  ForAnyElementType FStack_58;
  int local_50;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  
  if ((this->Interface).Object == (INumericTypeInterface<float> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->Interface).Object;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
  pTVar4 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar4->bIsSet == false) {
    local_6c = (this->MinFractionalDigits).Value.bIsSet;
    if ((bool)local_6c != false) {
      local_70 = (this->MinFractionalDigits).Value.TypedValue;
    }
    local_68 = (this->MinFractionalDigits).bIsSet;
    local_50 = 0;
    local_60 = (undefined1  [8])0x0;
    FStack_58.Data = (FScriptContainerElement *)0x0;
    TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy> *)local_60,
               &(this->MinFractionalDigits).Getter);
    (*pcVar2)(pIVar1,&local_70);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
               (FWriteAccessScope *)&local_30);
    if ((local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_58.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (FStack_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data);
    }
    this_00 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60;
  }
  else {
    pTVar4 = TAttribute<TOptional<int>_>::Get(param_1);
    local_94 = pTVar4->bIsSet;
    if ((bool)local_94 != false) {
      local_98 = pTVar4->TypedValue;
    }
    local_90 = 1;
    local_78 = 0;
    local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_80.Data = (FScriptContainerElement *)0x0;
    (*pcVar2)(pIVar1,&local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_88,(FWriteAccessScope *)&local_48);
    if (((int)local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_80.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
      local_78 = local_78 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_80.Data);
    }
    this_00 = &local_88;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&this_00->AccessDetector);
  this->bCachedValueStringDirty = true;
  return;
}

