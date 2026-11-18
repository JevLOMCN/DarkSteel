// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// GetWindowMode @ 1426c02c0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall SWindow::GetWindowMode(SWindow *this)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  if ((this->NativeWindow).Object == (FGenericWindow *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001426c0308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar3 = (**(code **)(((this->NativeWindow).Object)->_padding_ + 0x68))();
  return TVar3;
}

// SetWidgetToFocusOnActivate @ 1426de5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::SetWidgetToFocusOnActivate(SWindow *this,TSharedPtr<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->WidgetToFocusOnActivate).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->WidgetToFocusOnActivate).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->WidgetToFocusOnActivate).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->WidgetToFocusOnActivate).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTitle @ 1427876c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::SetTitle(SWindow *this,FText *param_1)

{
  FGenericWindow *pFVar1;
  code *pcVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  undefined1 local_res8 [8];
  FDestructionSentinel local_58;
  FText local_40;
  bool local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_40.TextData.Reference = (param_1->TextData).Reference;
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 8))
              (local_40.TextData.Reference,local_res8);
  }
  local_40.Flags = param_1->Flags;
  local_30 = true;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(this->Title).Value,&local_40);
  (this->Title).bIsSet = local_30;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Title).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0xd8);
    pFVar3 = FText::ToString(param_1);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    (*pcVar2)(pFVar1,pwVar4);
  }
  return;
}

