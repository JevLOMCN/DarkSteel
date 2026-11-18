// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 3

// Construct @ 146c78ae0

void __thiscall SDefaultMovieBorder::Construct(SDefaultMovieBorder *this,FArguments *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  FArguments *pFVar6;
  ISlateStyle *pIVar7;
  FName *pFVar8;
  FName local_res8;
  undefined1 local_468 [8];
  ForAnyElementType local_460;
  int local_458;
  FDestructionSentinel local_450;
  FSlateBrush *local_438;
  undefined1 local_430;
  undefined1 local_428 [8];
  ForAnyElementType FStack_420;
  ulonglong local_418;
  FArguments local_410;
  
  if (&param_1->_OnKeyDown != &this->OnKeyDownHandler) {
    local_468 = (undefined1  [8])0x0;
    local_460.Data = (FScriptContainerElement *)0x0;
    local_458 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnKeyDown,
               (FReadAccessScope *)&local_450);
    if ((*(int *)&(param_1->_OnKeyDown).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_OnKeyDown).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_468);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_450);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_468);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_468,
               (FWriteAccessScope *)&local_450);
    if ((local_458 != 0) && (local_460.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_460.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_460,0,0,0x10);
      local_458 = 0;
    }
    if (local_450.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_450.Accessor,&local_450);
    }
    if (local_460.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_468);
  }
  pFVar6 = SBorder::FArguments::FArguments(&local_410);
  pIVar7 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar7 + 0x50);
  pFVar8 = ::FName::FName(&local_res8,L"BlackBrush");
  local_438 = (FSlateBrush *)(*pcVar2)(pIVar7,*pFVar8,0,0);
  local_430 = 1;
  local_418 = 0;
  local_428 = (undefined1  [8])0x0;
  FStack_420.Data = (FScriptContainerElement *)0x0;
  (pFVar6->_BorderImage).Value = local_438;
  (pFVar6->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_428);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_428,
             (FWriteAccessScope *)&local_450);
  if (((int)local_418 != 0) && (FStack_420.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_420.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_420,0,0,0x10);
    local_418 = local_418 & 0xffffffff00000000;
  }
  if (local_450.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_450.Accessor,&local_450);
  }
  if (FStack_420.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_420.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_428);
  if (&param_1->_OnMouseButtonDown != &pFVar6->_OnMouseButtonDown) {
    local_468 = (undefined1  [8])0x0;
    local_460.Data = (FScriptContainerElement *)0x0;
    local_458 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnMouseButtonDown,(FReadAccessScope *)&local_450);
    if ((*(int *)&(param_1->_OnMouseButtonDown).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_OnMouseButtonDown).field_0x8, plVar1 != (longlong *)0x0))
    {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_468);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_450);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar6->_OnMouseButtonDown,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_468);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_468,
               (FWriteAccessScope *)&local_450);
    if ((local_458 != 0) && (local_460.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_460.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_460,0,0,0x10);
      local_458 = 0;
    }
    if (local_450.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_450.Accessor,&local_450);
    }
    if (local_460.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_468);
  }
  pFVar6 = SBorder::FArguments::Padding(pFVar6,0.0);
  pTVar3 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->_Content).Widget.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar6->_Content).Widget.Object = pSVar4;
  (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SBorder::Construct((SBorder *)this,pFVar6);
  SBorder::FArguments::~FArguments(&local_410);
  return;
}

// OnKeyDown @ 146c7f580

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDefaultMovieBorder::OnKeyDown
          (SDefaultMovieBorder *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler,
             &local_28);
  if (((*(int *)&(this->OnKeyDownHandler).field_0x10 != 0) &&
      (plVar2 = *(longlong **)&(this->OnKeyDownHandler).field_0x8, plVar2 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler,
               &local_28);
    if (*(int *)&(this->OnKeyDownHandler).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->OnKeyDownHandler).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,__return_storage_ptr__,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SWidget::OnKeyDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// SupportsKeyboardFocus @ 146c81350

bool __thiscall SDefaultMovieBorder::SupportsKeyboardFocus(SDefaultMovieBorder *this)

{
  return true;
}

