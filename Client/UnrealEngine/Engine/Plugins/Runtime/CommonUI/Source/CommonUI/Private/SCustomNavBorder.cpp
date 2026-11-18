// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 2

// Construct @ 14a7c6260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SCustomNavBorder::Construct(SCustomNavBorder *this,FArguments *param_1)

{
  TDelegate<bool___cdecl(EUINavigation),FDefaultDelegateUserPolicy> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  FArguments *pFVar7;
  atomic<int> *paVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 local_468 [8];
  ForAnyElementType local_460;
  int local_458;
  TSharedRef<ISlateMetaData,1> local_450;
  FDestructionSentinel local_440;
  SWidget *local_428;
  TReferenceControllerBase<1> *pTStack_420;
  FReadAccessScope local_418;
  FReadAccessScope local_400;
  FArguments local_3e8;
  
  pFVar7 = SBorder::FArguments::FArguments(&local_3e8);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pFVar7->_HAlign = HAlign_Fill;
  pFVar7->_VAlign = VAlign_Fill;
  pFVar7 = SBorder::FArguments::Padding(pFVar7,0.0);
  pTVar1 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar2 = (param_1->_Content).Widget.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_428 = (pFVar7->_Content).Widget.Object;
  pTStack_420 = (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar7->_Content).Widget.Object = pSVar2;
  (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_420);
  SBorder::Construct((SBorder *)this,pFVar7);
  SBorder::FArguments::~FArguments(&local_3e8);
  this_00 = &this->OnHandleNavigation;
  if (&param_1->_OnHandleNavigation != this_00) {
    local_468 = (undefined1  [8])0x0;
    local_460.Data = (FScriptContainerElement *)0x0;
    local_458 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnHandleNavigation,&local_400);
    if ((*(int *)&(param_1->_OnHandleNavigation).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnHandleNavigation).field_0x8, plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_468);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_400);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_468);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_468,
               (FWriteAccessScope *)&local_440);
    if ((local_458 != 0) && (local_460.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_460.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_460,0,0,0x10);
      local_458 = 0;
    }
    if (local_440.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_440.Accessor,&local_440);
    }
    if (local_460.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_468);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_418);
  if (((*(int *)&(this->OnHandleNavigation).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->OnHandleNavigation).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*plVar3 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_418);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_418);
    local_450.SharedReferenceCount.ReferenceController = ::operator_new(0xb0);
    if (local_450.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_450.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
      local_450.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_450.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (local_450.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_450.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFSimulatedNavigationMetaData___00_SharedPointerInternals__6B_
      ;
      local_450.SharedReferenceCount.ReferenceController[1]._padding_ =
           (longlong)&___7FSimulatedNavigationMetaData__6B_;
      local_450.SharedReferenceCount.ReferenceController[2]._padding_ = 0;
      local_450.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
      local_450.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
      local_450.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
      local_450.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
      local_450.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
      local_450.SharedReferenceCount.ReferenceController[5]._padding_ = 0;
      local_450.SharedReferenceCount.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
      local_450.SharedReferenceCount.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
      local_450.SharedReferenceCount.ReferenceController[6].SharedReferenceCount = (atomic<int>)0x0;
      local_450.SharedReferenceCount.ReferenceController[6].WeakReferenceCount = (atomic<int>)0x0;
      local_450.SharedReferenceCount.ReferenceController[7]._padding_ = 0;
      local_450.SharedReferenceCount.ReferenceController[8]._padding_ = 0;
      local_450.SharedReferenceCount.ReferenceController[8].SharedReferenceCount = (atomic<int>)0x0;
      local_450.SharedReferenceCount.ReferenceController[8].WeakReferenceCount = (atomic<int>)0x0;
      local_450.SharedReferenceCount.ReferenceController[9].SharedReferenceCount = (atomic<int>)0x0;
      local_450.SharedReferenceCount.ReferenceController[9].WeakReferenceCount = (atomic<int>)0x0;
      local_450.SharedReferenceCount.ReferenceController[10]._padding_ = 0;
      *(undefined1 *)&local_450.SharedReferenceCount.ReferenceController[10].SharedReferenceCount =
           0;
      for (paVar8 = &local_450.SharedReferenceCount.ReferenceController[1].SharedReferenceCount;
          paVar8 != &local_450.SharedReferenceCount.ReferenceController[10].SharedReferenceCount;
          paVar8 = paVar8 + 6) {
        *(undefined1 *)paVar8 = 1;
      }
      if ((local_450.SharedReferenceCount.ReferenceController + 1 ==
           (TReferenceControllerBase<1> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      LOCK();
      (local_450.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_450.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar9 = local_450.SharedReferenceCount.ReferenceController;
      local_450.Object = (ISlateMetaData *)(local_450.SharedReferenceCount.ReferenceController + 1);
    }
    SWidget::AddMetadataInternal((SWidget *)this,&local_450);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_450.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  return;
}

// OnNavigation @ 14a7fe1c0

FNavigationReply * __thiscall
SCustomNavBorder::OnNavigation
          (SCustomNavBorder *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2)

{
  EUINavigation EVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  longlong *plVar5;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnHandleNavigation,
             &local_28);
  plVar5 = (longlong *)0x0;
  if (((*(int *)&(this->OnHandleNavigation).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->OnHandleNavigation).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar2 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    EVar1 = param_2->NavigationType;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnHandleNavigation,
               &local_28);
    if (*(int *)&(this->OnHandleNavigation).field_0x10 != 0) {
      plVar5 = *(longlong **)&(this->OnHandleNavigation).field_0x8;
    }
    cVar4 = (**(code **)(*plVar5 + 0x60))(plVar5,EVar1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (cVar4 != '\0') {
      (__return_storage_ptr__->EventHandler).Object = (SWidget *)0x0;
      (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)0x0;
      (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->FocusDelegate = 0;
      *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x8 = 0;
      __return_storage_ptr__->BoundaryRule = Explicit;
      pTVar3 = (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController;
      (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)0x0;
      (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->EventHandler).Object = (SWidget *)0x0;
  (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)0x0;
  (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->FocusDelegate = 0;
  *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x8 = 0;
  __return_storage_ptr__->BoundaryRule = Escape;
  return __return_storage_ptr__;
}

