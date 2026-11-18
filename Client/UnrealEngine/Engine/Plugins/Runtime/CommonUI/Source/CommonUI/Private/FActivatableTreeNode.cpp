// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 34

// FActivatableTreeNode @ 14a7a8f80

FActivatableTreeNode * __thiscall
FActivatableTreeNode::FActivatableTreeNode
          (FActivatableTreeNode *this,UCommonUIActionRouterBase *param_1,
          UCommonActivatableWidget *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FName local_res8;
  FString local_28;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FActionRouterBindingCollection__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCommonUIActionRouterBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->_padding_ = 0;
  local_res8 = (FName)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCommonUIActionRouterBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  pFVar1 = &this->DebugWidgetName;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FActivatableTreeNode__6B_;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)&this->OnActivated = 0;
  *(undefined8 *)&(this->OnActivated).field_0x8 = 0;
  *(undefined4 *)&(this->OnActivated).field_0x10 = 0;
  *(undefined8 *)&this->OnDeactivated = 0;
  *(undefined8 *)&(this->OnDeactivated).field_0x8 = 0;
  *(undefined4 *)&(this->OnDeactivated).field_0x10 = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugWidgetName).Data.ArrayNum = 0;
  (this->DebugWidgetName).Data.ArrayMax = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UCommonActivatableWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->RepresentedWidget).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (FName)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UCommonActivatableWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->RepresentedWidget).WeakPtr,(FObjectPtr)&local_res8);
  (this->Parent).Object = (FActivatableTreeNode *)0x0;
  (this->Parent).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  (this->FocusRestorationTarget).Object = (SWidget *)0x0;
  (this->FocusRestorationTarget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bCanReceiveInput = false;
  (this->RegisteredPreprocessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredPreprocessors).ArrayNum = 0;
  (this->RegisteredPreprocessors).ArrayMax = 0;
  (this->ScrollRecipients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScrollRecipients).ArrayNum = 0;
  (this->ScrollRecipients).ArrayMax = 0;
  local_res8 = (FName)param_2->_padding_;
  ::FName::ToString(&local_res8,&local_28);
  if (pFVar1 != &local_28) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (this->DebugWidgetName).Data.ArrayNum = local_28.Data.ArrayNum;
    (this->DebugWidgetName).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// FActivatableTreeNode @ 14a7a9150

FActivatableTreeNode * __thiscall
FActivatableTreeNode::FActivatableTreeNode
          (FActivatableTreeNode *this,UCommonUIActionRouterBase *param_1,
          UCommonActivatableWidget *param_2,TSharedRef<FActivatableTreeNode,1> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FActivatableTreeNode(this,param_1,param_2);
  this->_padding_ = (longlong)&___7FActivatableTreeNode__6B_;
  (this->Parent).Object = param_3->Object;
  pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->Parent).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->Parent).WeakReferenceCount.ReferenceController;
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
    (this->Parent).WeakReferenceCount.ReferenceController = pTVar3;
  }
  return this;
}

// ~FActivatableTreeNode @ 14a7b0db0

void __thiscall FActivatableTreeNode::~FActivatableTreeNode(FActivatableTreeNode *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *pvVar5;
  bool bVar6;
  
  this->_padding_ = (longlong)&___7FActivatableTreeNode__6B_;
  if (this->bCanReceiveInput != false) {
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar6) {
      HandleWidgetDeactivated(this);
    }
  }
  pFVar3 = (this->ScrollRecipients).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FInputPreprocessorRegistration,int>
            ((FInputPreprocessorRegistration *)
             (this->RegisteredPreprocessors).AllocatorInstance.Data,
             (this->RegisteredPreprocessors).ArrayNum);
  pFVar3 = (this->RegisteredPreprocessors).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pTVar4 = (this->FocusRestorationTarget).WeakReferenceCount.ReferenceController;
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
  DestructItems<TSharedRef<FActivatableTreeNode,1>,int>
            ((TSharedRef<FActivatableTreeNode,1> *)(this->Children).AllocatorInstance.Data,
             (this->Children).ArrayNum);
  pFVar3 = (this->Children).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pTVar4 = (this->Parent).WeakReferenceCount.ReferenceController;
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
  pFVar3 = (this->DebugWidgetName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDeactivated);
  pvVar5 = *(void **)&(this->OnDeactivated).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDeactivated);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnActivated);
  pvVar5 = *(void **)&(this->OnActivated).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActivated);
  FActionRouterBindingCollection::~FActionRouterBindingCollection
            ((FActionRouterBindingCollection *)this);
  return;
}

// AddChildNode @ 14a7be120

TSharedRef<FActivatableTreeNode,1> * __thiscall
FActivatableTreeNode::AddChildNode
          (FActivatableTreeNode *this,TSharedRef<FActivatableTreeNode,1> *__return_storage_ptr__,
          UCommonActivatableWidget *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  TArray<TSharedRef<FActivatableTreeNode,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<int> aVar4;
  UCommonActivatableWidget *pUVar5;
  FActivatableTreeNode *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FActivatableTreeNode *this_00;
  TSharedRef<FActionRouterBindingCollection,1> *pTVar12;
  TSharedRef<FActivatableTreeNode,1> *pTVar13;
  UCommonUIActionRouterBase *pUVar14;
  FScriptContainerElement *pFVar15;
  TRawPtrProxy<FActivatableTreeNode> local_res10 [3];
  UCommonActivatableWidget *local_58;
  ulonglong uStack_50;
  TSharedRef<FActionRouterBindingCollection,1> local_48;
  
  bVar9 = false;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  local_58 = (UCommonActivatableWidget *)HandleChildSlateReleased;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<FActivatableTreeNode,UCommonActivatableWidget_*>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &param_1->OnSlateReleasedEvent,(FActivatableTreeNode *)(local_res10 + 1),
             (pmf_eefd811c *)this,&local_58);
  this_00 = ::operator_new(0xf0);
  if (this_00 == (FActivatableTreeNode *)0x0) {
    this_00 = (FActivatableTreeNode *)0x0;
  }
  else {
    pTVar12 = TSharedFromThis<FActionRouterBindingCollection,1>::AsShared
                        ((TSharedFromThis<FActionRouterBindingCollection,1> *)&this->_padding_,
                         &local_48);
    pUVar5 = (UCommonActivatableWidget *)(pTVar12->SharedReferenceCount).ReferenceController;
    pFVar6 = (FActivatableTreeNode *)pTVar12->Object;
    if (pUVar5 != (UCommonActivatableWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pUVar5->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pUVar5->_padding_ + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (!bVar9) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActionRouterPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                         ,0x48,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TSharedRef<FActivatableTreeNode,1> *)(*pcVar8)();
        return pTVar13;
      }
    }
    pUVar14 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    FActivatableTreeNode(this_00,pUVar14,param_1);
    this_00->_padding_ = (longlong)&___7FActivatableTreeNode__6B_;
    (this_00->Parent).Object = pFVar6;
    if (pUVar5 != (UCommonActivatableWidget *)
                  (this_00->Parent).WeakReferenceCount.ReferenceController) {
      if (pUVar5 != (UCommonActivatableWidget *)0x0) {
        LOCK();
        ((atomic<int> *)&pUVar5->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pUVar5->_padding_)[1] + 1);
        UNLOCK();
      }
      pTVar7 = (this_00->Parent).WeakReferenceCount.ReferenceController;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar7->WeakReferenceCount;
        aVar4 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
        }
      }
      (this_00->Parent).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pUVar5;
    }
    bVar9 = true;
    param_1 = pUVar5;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InObject || !InObject->DoesSharedInstanceExist()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x7a5,L"Trying to share an already-shared object");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TSharedRef<FActivatableTreeNode,1> *)(*pcVar8)();
        return pTVar13;
      }
    }
  }
  local_res10[0].Object = this_00;
  TSharedRef<FActivatableTreeNode,1>::TSharedRef<FActivatableTreeNode,1><FActivatableTreeNode>
            (__return_storage_ptr__,local_res10);
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)param_1);
  }
  (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x28))();
  pTVar3 = &this->Children;
  pTVar13 = (TSharedRef<FActivatableTreeNode,1> *)(pTVar3->AllocatorInstance).Data;
  if ((pTVar13 <= __return_storage_ptr__) &&
     (__return_storage_ptr__ < pTVar13 + (this->Children).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TSharedRef<FActivatableTreeNode,1> *)(*pcVar8)();
      return pTVar13;
    }
  }
  iVar11 = (this->Children).ArrayNum;
  piVar2 = &(this->Children).ArrayMax;
  if (iVar11 == *piVar2) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->Children).ArrayNum = iVar11 + 1;
  pFVar15 = (pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
  *(FActivatableTreeNode **)pFVar15 = __return_storage_ptr__->Object;
  pTVar7 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar15 + 8) = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// AddInputPreprocessor @ 14a7be420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FActivatableTreeNode::AddInputPreprocessor
          (FActivatableTreeNode *this,TSharedRef<IInputProcessor,1> *param_1,
          FInputPreprocessorRegistrationKey *param_2)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FInputPreprocessorRegistrationKey FVar3;
  IInputProcessor *pIVar4;
  FScriptContainerElement *pFVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  FSlateApplication *this_00;
  TSharedPtr<IInputProcessor,1> local_28;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  FVar3 = *param_2;
  pIVar4 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar7 = (this->RegisteredPreprocessors).ArrayNum;
  piVar1 = &(this->RegisteredPreprocessors).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->RegisteredPreprocessors).AllocatorInstance,piVar1);
  }
  lVar8 = (longlong)iVar7;
  (this->RegisteredPreprocessors).ArrayNum = iVar7 + 1;
  pFVar5 = (this->RegisteredPreprocessors).AllocatorInstance.Data;
  *(FInputPreprocessorRegistrationKey *)(pFVar5 + lVar8 * 0x18) = FVar3;
  *(IInputProcessor **)(pFVar5 + lVar8 * 0x18 + 8) = pIVar4;
  *(TReferenceControllerBase<1> **)(pFVar5 + lVar8 * 0x18 + 0x10) = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  cVar6 = (**(code **)(this->_padding_ + 0x18))(this);
  if (cVar6 != '\0') {
    this_00 = FSlateApplication::Get();
    local_28.Object = param_1->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::RegisterInputPreProcessor(this_00,&local_28,param_2);
  }
  return;
}

// AddScrollRecipient @ 14a7be740

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FActivatableTreeNode::AddScrollRecipient(FActivatableTreeNode *this,UWidget *param_1)

{
  FWeakObjectPtr local_res8;
  UWidget *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>_>
            (&this->ScrollRecipients,(TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *)&local_res8);
  return;
}

// AppendAllActiveActions @ 14a7bea40

void __thiscall
FActivatableTreeNode::AppendAllActiveActions
          (FActivatableTreeNode *this,
          TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  cVar2 = (**(code **)(this->_padding_ + 0x18))();
  if (cVar2 != '\0') {
    TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_>::
    Append<FUIActionBindingHandle,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *)
                       &this->_padding_);
    iVar1 = (this->Children).ArrayNum;
    pFVar3 = (this->Children).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->Children).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedRef<FActivatableTreeNode,1>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar4) break;
      AppendAllActiveActions(*(FActivatableTreeNode **)pFVar3,param_1);
      pFVar3 = pFVar3 + 0x10;
    }
  }
  return;
}

// AppendValidScrollRecipients @ 14a7bec90

void __thiscall
FActivatableTreeNode::AppendValidScrollRecipients
          (FActivatableTreeNode *this,TArray<UWidget_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  UObject *local_38 [2];
  
  cVar4 = (**(code **)(this->_padding_ + 0x18))();
  if (cVar4 != '\0') {
    uVar8 = 0;
    if (0 < (this->ScrollRecipients).ArrayNum) {
      pTVar2 = &this->ScrollRecipients;
      do {
        uVar10 = ~uVar8 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar8 < (this->ScrollRecipients).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_38[0] = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          ((pTVar2->AllocatorInstance).Data +
                                          (longlong)(int)uVar8 * 8));
        if (local_38[0] == (UObject *)0x0) {
          uVar6 = 0;
          if ((int)uVar8 < (this->ScrollRecipients).ArrayNum) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8;
          iVar7 = (this->ScrollRecipients).ArrayNum + ~uVar8;
          if (iVar7 != 0) {
            memmove(pFVar9,pFVar9 + 8,(longlong)iVar7 << 3);
          }
          piVar1 = &(this->ScrollRecipients).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&pTVar2->AllocatorInstance,(this->ScrollRecipients).ArrayNum,
                     &(this->ScrollRecipients).ArrayMax);
          uVar8 = uVar8 - 1;
        }
        else {
          pFVar9 = (param_1->AllocatorInstance).Data;
          if (((pFVar9 <= (FScriptContainerElement *)local_38) &&
              ((FScriptContainerElement *)local_38 < pFVar9 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = param_1->ArrayNum;
          if (iVar7 == param_1->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar7 + 1;
          *(UObject **)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38[0];
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (this->ScrollRecipients).ArrayNum);
    }
    iVar7 = (this->Children).ArrayNum;
    pFVar9 = (this->Children).AllocatorInstance.Data;
    pFVar11 = pFVar9 + (longlong)iVar7 * 0x10;
    while( true ) {
      if ((this->Children).ArrayNum != iVar7) {
        `TCheckedPointerIterator<TSharedRef<FActivatableTreeNode,1>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar9 == pFVar11) break;
      AppendValidScrollRecipients(*(FActivatableTreeNode **)pFVar9,param_1);
      pFVar9 = pFVar9 + 0x10;
    }
  }
  return;
}

// CacheFocusRestorationTarget @ 14a7c3450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FActivatableTreeNode::CacheFocusRestorationTarget(FActivatableTreeNode *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  int iVar7;
  atomic<int> aVar8;
  int iVar9;
  FSlateApplication *pFVar10;
  UCommonUIActionRouterBase *this_00;
  UObject *pUVar11;
  ULocalPlayer *pUVar12;
  UCommonActivatableWidget *pUVar13;
  UCommonActivatableWidget *pUVar14;
  UCommonActivatableWidget *pUVar15;
  UCommonActivatableWidget *pUVar16;
  UCommonActivatableWidget *pUVar17;
  FName local_res8;
  UCommonActivatableWidget *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FString local_58;
  TSharedPtr<SWidget,1> local_48;
  FString local_38;
  FString local_28;
  
  pUVar17 = (UCommonActivatableWidget *)0x0;
  pFVar10 = FSlateApplication::Get();
  pcVar3 = *(code **)(*(longlong *)pFVar10 + 0x170);
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActionRouterPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                         ,0x48,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  iVar7 = UCommonUIActionRouterBase::GetLocalPlayerIndex(this_00);
  (*pcVar3)(pFVar10,&local_68,iVar7);
  pUVar13 = pUVar17;
  if (local_68 != (UCommonActivatableWidget *)0x0) {
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActionRouterPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                           ,0x48,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar12 = CastChecked<ULocalPlayer,UObject>(*(UObject **)&pUVar11->field_0x20);
    local_48.Object = (SWidget *)local_68;
    local_48.SharedReferenceCount.ReferenceController = pTStack_60;
    if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar13 = UCommonUIActionRouterBase::FindActivatable(&local_48,pUVar12);
  }
  pUVar16 = (UCommonActivatableWidget *)
            (this->FocusRestorationTarget).WeakReferenceCount.ReferenceController;
  pUVar14 = pUVar17;
  pUVar15 = pUVar16;
  if (pUVar16 != (UCommonActivatableWidget *)0x0) {
    aVar2 = *(atomic<int> *)&pUVar16->_padding_;
    do {
      pUVar15 = pUVar17;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7c3581;
      LOCK();
      aVar8 = *(atomic<int> *)&pUVar16->_padding_;
      bVar6 = aVar2 == aVar8;
      if (bVar6) {
        *(atomic<int> *)&pUVar16->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar8;
    } while (!bVar6);
    pUVar14 = (UCommonActivatableWidget *)(this->FocusRestorationTarget).Object;
    pUVar15 = pUVar16;
  }
LAB_14a7c3581:
  if ((local_68 == pUVar14) ||
     ((local_68 != (UCommonActivatableWidget *)0x0 &&
      ((pUVar13 == (UCommonActivatableWidget *)0x0 ||
       (bVar6 = IsWidgetInNodeHierarchy(pUVar13,this), !bVar6)))))) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar15);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar15);
    if (6 < (byte)LogUIActionRouter._0_1_) {
      FReflectionMetaData::GetWidgetDebugInfo(&local_28,(SWidget *)local_68);
      pUVar13 = (UCommonActivatableWidget *)
                (this->FocusRestorationTarget).WeakReferenceCount.ReferenceController;
      pUVar16 = pUVar13;
      if (pUVar13 != (UCommonActivatableWidget *)0x0) {
        iVar7 = (int)pUVar13->_padding_;
        do {
          pUVar16 = pUVar17;
          if (iVar7 == 0) goto LAB_14a7c3611;
          LOCK();
          iVar9 = (int)pUVar13->_padding_;
          bVar6 = iVar7 == iVar9;
          if (bVar6) {
            *(int *)&pUVar13->_padding_ = iVar7 + 1;
            iVar9 = iVar7;
          }
          UNLOCK();
          iVar7 = iVar9;
        } while (!bVar6);
        pUVar17 = (UCommonActivatableWidget *)(this->FocusRestorationTarget).Object;
        pUVar16 = pUVar13;
      }
LAB_14a7c3611:
      FReflectionMetaData::GetWidgetDebugInfo(&local_38,(SWidget *)pUVar17);
      pUVar11 = FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
      if (pUVar11 == (UObject *)0x0) {
        ::FString::FString(&local_58,L"None");
      }
      else {
        local_res8.ComparisonIndex.Value = *(uint *)&pUVar11->field_0x18;
        local_res8.Number = *(uint *)&pUVar11->field_0x1c;
        ::FName::ToString(&local_res8,&local_58);
      }
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar16);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pTVar5 = pTStack_60;
    (this->FocusRestorationTarget).Object = (SWidget *)local_68;
    if (pTStack_60 != (this->FocusRestorationTarget).WeakReferenceCount.ReferenceController) {
      if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_60->WeakReferenceCount = (atomic<int>)((int)pTStack_60->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->FocusRestorationTarget).WeakReferenceCount.ReferenceController;
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
      (this->FocusRestorationTarget).WeakReferenceCount.ReferenceController = pTVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return;
}

// DebugDumpRecursive @ 14a7d2960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FActivatableTreeNode::DebugDumpRecursive
          (FActivatableTreeNode *this,FString *param_1,int param_2,bool param_3,bool param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  UWidget *this_00;
  TSharedPtr<SWidget,1> *pTVar6;
  UObject *pUVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FName local_70;
  FScriptContainerElement *local_68;
  FString local_60;
  FString local_50;
  TSharedPtr<SWidget,1> local_40;
  
  bVar4 = param_5;
  if ((param_5) || (bVar5 = IsWidgetActivated(this), bVar5)) {
    uVar3 = SpacesPerDepthLevel * param_2;
    if (0xfe < SpacesPerDepthLevel * param_2) {
      uVar3 = 0xfe;
    }
    bVar5 = FWeakObjectPtr::IsValid(&(this->RepresentedWidget).WeakPtr);
    if (bVar5) {
      this_00 = (UWidget *)FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
      pTVar6 = UWidget::GetCachedWidget(this_00,&local_40);
      if ((pTVar6->Object == (SWidget *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar7 = FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
      pwVar8 = L"true";
      if (pUVar7[0x1b].field_0x20 == '\0') {
        pwVar8 = L"false";
      }
      ::FString::FString(&local_50,pwVar8);
      local_68 = (FScriptContainerElement *)L"";
      if (local_50.Data.ArrayNum != 0) {
        local_68 = local_50.Data.AllocatorInstance.Data;
      }
      pUVar7 = FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
      local_70.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
      local_70.Number = *(uint *)&pUVar7->field_0x1c;
      ::FName::ToString(&local_70,&local_60);
      if ((0xff < uVar3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                             ,0x272,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::AppendfImpl
                (param_1,L"\n%s%s: IsActivated? [%s]. LayerId=[%d]. [%d] Normal Bindings.");
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
    }
    else {
      if ((0xff < uVar3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                             ,0x272,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::AppendfImpl(param_1,L"\n%s!!INVALID NODE!! [%d] Action Bindings.");
    }
    if (param_3) {
      FActionRouterBindingCollection::DebugDumpActionBindings
                ((FActionRouterBindingCollection *)this,param_1,uVar3);
    }
    if (param_4) {
      iVar1 = (this->Children).ArrayNum;
      pFVar9 = (this->Children).AllocatorInstance.Data;
      pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->Children).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TSharedRef<FActivatableTreeNode,1>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&param_5);
        }
        if (pFVar9 == pFVar10) break;
        DebugDumpRecursive(*(FActivatableTreeNode **)pFVar9,param_1,param_2 + 1,param_3,true,bVar4);
        pFVar9 = pFVar9 + 0x10;
      }
    }
  }
  return;
}

// DoesPathSupportActivationFocus @ 14a7d4220

bool __thiscall FActivatableTreeNode::DoesPathSupportActivationFocus(FActivatableTreeNode *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FActivatableTreeNode *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  UObject *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  FActivatableTreeNode *pFVar13;
  bool bVar14;
  
  bVar5 = DoesWidgetSupportActivationFocus(this);
  pTVar11 = (this->Parent).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar11->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7d4270;
      }
      LOCK();
      aVar7 = pTVar11->SharedReferenceCount;
      bVar14 = aVar2 == aVar7;
      if (bVar14) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar14);
    pFVar4 = (this->Parent).Object;
    while ((pFVar4 != (FActivatableTreeNode *)0x0 &&
           (bVar14 = bVar5 != false, bVar5 = false, bVar14))) {
      if ((pFVar4 == (FActivatableTreeNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      bVar5 = FWeakObjectPtr::IsValid(&(pFVar4->RepresentedWidget).WeakPtr);
      if (bVar5) {
        pUVar8 = FWeakObjectPtr::Get(&(pFVar4->RepresentedWidget).WeakPtr);
        if (pUVar8[0x19].field_0x1 == '\0') goto LAB_14a7d4312;
        bVar5 = true;
      }
      else {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8809435093299889167>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                           ,0x40f,"RepresentedWidget.IsValid()");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
LAB_14a7d4312:
        bVar5 = false;
      }
      if ((pFVar4 == (FActivatableTreeNode *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar13 = (FActivatableTreeNode *)0x0;
      pTVar9 = (pFVar4->Parent).WeakReferenceCount.ReferenceController;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = pTVar9->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14a7d4374;
          }
          LOCK();
          aVar7 = pTVar9->SharedReferenceCount;
          bVar14 = aVar2 == aVar7;
          if (bVar14) {
            pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar7 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar7;
        } while (!bVar14);
        pFVar13 = (pFVar4->Parent).Object;
      }
LAB_14a7d4374:
      pTVar10 = pTVar9;
      pTVar12 = pTVar11;
      if (pTVar9 != pTVar11) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        pTVar12 = pTVar9;
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar11->SharedReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)pTVar11->_padding_)(pTVar11);
            LOCK();
            paVar1 = &pTVar11->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar11->_padding_ + 8))(pTVar11);
              pTVar10 = (TReferenceControllerBase<1> *)0x0;
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      pTVar11 = pTVar12;
      pFVar4 = pFVar13;
    }
  }
LAB_14a7d4270:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return bVar5;
}

// DoesWidgetSupportActivationFocus @ 14a7d4410

bool __thiscall FActivatableTreeNode::DoesWidgetSupportActivationFocus(FActivatableTreeNode *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->RepresentedWidget).WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
    if (pUVar4[0x19].field_0x1 != '\0') {
      return true;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8809435093299889167>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,0x40f,"RepresentedWidget.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// FindActivationMetadata @ 14a7dbc30

FActivationMetadata __thiscall
FActivatableTreeNode::FindActivationMetadata(FActivatableTreeNode *this)

{
  char cVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  TOptional<unsigned_char> TVar6;
  FActivationMetadata FVar7;
  atomic<int> aVar8;
  UObject *pUVar9;
  undefined1 *puVar10;
  undefined6 extraout_var;
  undefined1 *in_RDX;
  FActivatableTreeNode *this_00;
  FActivatableTreeNode *pFVar11;
  FActivatableTreeNode *pFVar12;
  char cVar13;
  undefined1 local_res18 [2];
  undefined1 local_res1a;
  undefined1 local_res20 [8];
  undefined1 local_38;
  char local_37;
  
  bVar5 = FWeakObjectPtr::IsValid(&(this->RepresentedWidget).WeakPtr);
  if (bVar5) {
    pUVar9 = FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
    puVar10 = (undefined1 *)(**(code **)(*(longlong *)pUVar9 + 0x4e0))(pUVar9,local_res20);
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8809435093299889234>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,0x452,"RepresentedWidget.IsValid()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TOptional<unsigned_char>)(*pcVar3)();
      return (FActivationMetadata)TVar6;
    }
    local_res1a = 0;
    puVar10 = local_res18;
  }
  cVar13 = puVar10[2];
  if (cVar13 != '\0') {
    local_37 = puVar10[1];
    if (local_37 != '\0') {
      local_38 = *puVar10;
    }
    goto LAB_14a7dbdb1;
  }
  if ((((this->Parent).Object == (FActivatableTreeNode *)0x0) ||
      (pTVar2 = (this->Parent).WeakReferenceCount.ReferenceController,
      pTVar2 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar2->SharedReferenceCount < 1))
  goto LAB_14a7dbdb1;
  pFVar12 = (FActivatableTreeNode *)(this->Parent).WeakReferenceCount.ReferenceController;
  this_00 = (FActivatableTreeNode *)0x0;
  pFVar11 = pFVar12;
  if (pFVar12 == (FActivatableTreeNode *)0x0) {
LAB_14a7dbd31:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pFVar12 = pFVar11;
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TOptional<unsigned_char>)(*pcVar3)();
      return (FActivationMetadata)TVar6;
    }
  }
  else {
    aVar4 = *(atomic<int> *)&pFVar12->_padding_;
    do {
      pFVar11 = this_00;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14a7dbd31;
      LOCK();
      aVar8 = *(atomic<int> *)&pFVar12->_padding_;
      bVar5 = aVar4 == aVar8;
      if (bVar5) {
        *(atomic<int> *)&pFVar12->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar8 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar8;
    } while (!bVar5);
    this_00 = (this->Parent).Object;
    pFVar11 = pFVar12;
    if (this_00 == (FActivatableTreeNode *)0x0) goto LAB_14a7dbd31;
  }
  FVar7 = FindActivationMetadata(this_00);
  puVar10 = (undefined1 *)CONCAT62(extraout_var,FVar7.MetadataEnum);
  if (puVar10 == &local_38) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
  }
  else {
    cVar1 = puVar10[1];
    if (cVar1 != '\0') {
      local_38 = *puVar10;
    }
    cVar13 = '\x01';
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    local_37 = cVar1;
  }
LAB_14a7dbdb1:
  if (cVar13 == '\0') {
    in_RDX[1] = 0;
  }
  else {
    in_RDX[1] = local_37;
    if (local_37 != '\0') {
      *in_RDX = local_38;
      return (FActivationMetadata)SUB82(in_RDX,0);
    }
  }
  return (FActivationMetadata)SUB82(in_RDX,0);
}

// FindDesiredActionDomainInputConfig @ 14a7dc120

TOptional<FUIInputConfig> __thiscall
FActivatableTreeNode::FindDesiredActionDomainInputConfig(FActivatableTreeNode *this)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  UCommonActivatableWidget *this_00;
  TObjectPtr<UCommonInputActionDomain> TVar6;
  undefined4 *puVar7;
  undefined4 *in_RDX;
  undefined2 local_res8;
  undefined1 local_resa;
  char local_resb;
  undefined1 local_resc;
  undefined2 local_resd;
  undefined4 local_res10;
  undefined1 local_res16;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->RepresentedWidget).WeakPtr);
  if (bVar4) {
    this_00 = (UCommonActivatableWidget *)FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
    TVar6 = UCommonActivatableWidget::GetCalculatedActionDomain(this_00);
    lVar2 = *(longlong *)TVar6.field0_0x0;
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x38) != '\0')) {
      local_resb = *(char *)(lVar2 + 0x3a);
      if ((local_resb == '\x01') || (local_resb == '\x02')) {
        local_resc = 1;
      }
      else {
        local_resc = 0;
      }
      local_res8 = 0;
      puVar7 = (undefined4 *)&local_res8;
      local_resa = *(undefined1 *)(lVar2 + 0x39);
      local_resd = 0x101;
      goto LAB_14a7dc177;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8809435093299889227>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,1099,"RepresentedWidget.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return SUB87(uVar5,0);
    }
  }
  local_res16 = 0;
  puVar7 = &local_res10;
LAB_14a7dc177:
  cVar1 = *(char *)((longlong)puVar7 + 6);
  *(char *)((longlong)in_RDX + 6) = cVar1;
  if (cVar1 != '\0') {
    *in_RDX = *puVar7;
    *(undefined2 *)(in_RDX + 1) = *(undefined2 *)(puVar7 + 1);
  }
  return SUB87(in_RDX,0);
}

// FindDesiredInputConfig @ 14a7dc210

TOptional<FUIInputConfig> __thiscall
FActivatableTreeNode::FindDesiredInputConfig(FActivatableTreeNode *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  TOptional<FUIInputConfig> TVar7;
  undefined8 uVar8;
  UObject *pUVar9;
  int *piVar10;
  UCommonActivatableWidget *this_00;
  TObjectPtr<UCommonInputActionDomain> TVar11;
  undefined1 extraout_var;
  int *in_RDX;
  FActivatableTreeNode *pFVar12;
  FActivatableTreeNode *pFVar13;
  char cVar14;
  undefined1 uVar15;
  FActivatableTreeNode *this_01;
  int local_res8;
  undefined1 local_resc [12];
  int local_res18;
  undefined2 local_res1c;
  int local_res20;
  undefined1 local_res26;
  int local_68;
  undefined2 local_64;
  char local_62;
  undefined1 local_53;
  
  bVar5 = FWeakObjectPtr::IsValid(&(this->RepresentedWidget).WeakPtr);
  if (bVar5) {
    pUVar9 = FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
    piVar10 = (int *)(**(code **)(*(longlong *)pUVar9 + 0x4e8))(pUVar9);
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8809435093299889209>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,0x439,"RepresentedWidget.IsValid()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return SUB87(uVar8,0);
    }
    local_res26 = 0;
    piVar10 = &local_res20;
  }
  cVar14 = *(char *)((longlong)piVar10 + 6);
  if (cVar14 != '\0') {
    local_68 = *piVar10;
    local_64 = (undefined2)piVar10[1];
  }
  local_62 = cVar14;
  bVar5 = FWeakObjectPtr::IsValid(&(this->RepresentedWidget).WeakPtr);
  if (bVar5) {
    this_00 = (UCommonActivatableWidget *)FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
    TVar11 = UCommonActivatableWidget::GetCalculatedActionDomain(this_00);
    lVar1 = *(longlong *)TVar11.field0_0x0;
    if ((lVar1 == 0) || (*(char *)(lVar1 + 0x38) == '\0')) goto LAB_14a7dc2e4;
    if ((*(char *)(lVar1 + 0x3a) == '\x01') || (*(char *)(lVar1 + 0x3a) == '\x02')) {
      local_resc[0] = 1;
    }
    else {
      local_resc[0] = 0;
    }
    local_res8 = (uint)*(ushort *)(lVar1 + 0x39) << 0x10;
    uVar15 = 1;
    bVar5 = true;
    local_resc._1_2_ = 0x101;
    local_res1c = local_resc._0_2_;
    local_res18 = local_res8;
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8809435093299889227>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,1099,"RepresentedWidget.IsValid()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return SUB87(uVar8,0);
    }
LAB_14a7dc2e4:
    uVar15 = 0;
    bVar5 = false;
    local_53 = 0;
  }
  if (cVar14 == '\0') {
    if (bVar5) {
      *(undefined1 *)((longlong)in_RDX + 6) = uVar15;
      *in_RDX = local_res18;
      *(undefined2 *)(in_RDX + 1) = local_res1c;
      goto LAB_14a7dc458;
    }
    if ((((this->Parent).Object == (FActivatableTreeNode *)0x0) ||
        (pTVar2 = (this->Parent).WeakReferenceCount.ReferenceController,
        pTVar2 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar2->SharedReferenceCount < 1))
    goto LAB_14a7dc442;
    pFVar13 = (FActivatableTreeNode *)(this->Parent).WeakReferenceCount.ReferenceController;
    this_01 = (FActivatableTreeNode *)0x0;
    pFVar12 = pFVar13;
    if (pFVar13 == (FActivatableTreeNode *)0x0) {
LAB_14a7dc3e5:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      pFVar13 = pFVar12;
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return SUB87(uVar8,0);
      }
    }
    else {
      aVar4 = *(atomic<int> *)&pFVar13->_padding_;
      do {
        pFVar12 = this_01;
        if (aVar4 == (atomic<int>)0x0) goto LAB_14a7dc3e5;
        LOCK();
        aVar6 = *(atomic<int> *)&pFVar13->_padding_;
        bVar5 = aVar4 == aVar6;
        if (bVar5) {
          *(atomic<int> *)&pFVar13->_padding_ = (atomic<int>)((int)aVar4 + 1);
          aVar6 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar6;
      } while (!bVar5);
      this_01 = (this->Parent).Object;
      pFVar12 = pFVar13;
      if (this_01 == (FActivatableTreeNode *)0x0) goto LAB_14a7dc3e5;
    }
    TVar7 = FindDesiredInputConfig(this_01);
    piVar10 = (int *)CONCAT17(extraout_var,TVar7);
    if ((piVar10 != &local_68) && (*(char *)((longlong)piVar10 + 6) != '\0')) {
      local_68 = *piVar10;
      cVar14 = '\x01';
      local_64 = (undefined2)piVar10[1];
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar13);
  }
LAB_14a7dc442:
  *(char *)((longlong)in_RDX + 6) = cVar14;
  if (cVar14 != '\0') {
    *in_RDX = local_68;
    *(undefined2 *)(in_RDX + 1) = local_64;
  }
LAB_14a7dc458:
  return SUB87(in_RDX,0);
}

// GetFocusFallbackTarget @ 14a7e25c0

TSharedPtr<SWidget,1> * __thiscall
FActivatableTreeNode::GetFocusFallbackTarget
          (FActivatableTreeNode *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (SWidget *)0x0;
  pTVar1 = (this->FocusRestorationTarget).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->FocusRestorationTarget).Object;
  }
  return __return_storage_ptr__;
}

// GetLastPaintLayer @ 14a7e3250

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FActivatableTreeNode::GetLastPaintLayer(FActivatableTreeNode *this)

{
  int iVar1;
  SWidget *pSVar2;
  bool bVar3;
  UWidget *this_00;
  TSharedPtr<SWidget,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<SWidget,1> local_18;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->RepresentedWidget).WeakPtr);
  if (bVar3) {
    this_00 = (UWidget *)FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
    pTVar4 = UWidget::GetCachedWidget(this_00,&local_18);
    pSVar2 = pTVar4->Object;
    pTVar5 = (pTVar4->SharedReferenceCount).ReferenceController;
    (pTVar4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar4->Object = (SWidget *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pSVar2 != (SWidget *)0x0) {
      iVar1 = (pSVar2->PersistentState).LayerId;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return iVar1;
    }
  }
  else {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return -1;
}

// GetRoot @ 14a7e7450

TSharedRef<FActivatableTreeRoot,1> * __thiscall
FActivatableTreeNode::GetRoot
          (FActivatableTreeNode *this,TSharedRef<FActivatableTreeRoot,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FActivatableTreeRoot *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TSharedRef<FActivatableTreeRoot,1> *pTVar6;
  TSharedRef<FActionRouterBindingCollection,1> *pTVar7;
  FActivatableTreeNode *pFVar8;
  FActivatableTreeNode *pFVar9;
  FActivatableTreeNode *this_00;
  bool bVar10;
  TSharedRef<FActionRouterBindingCollection,1> local_18;
  
  if ((((this->Parent).Object == (FActivatableTreeNode *)0x0) ||
      (pTVar1 = (this->Parent).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    pTVar7 = TSharedFromThis<FActionRouterBindingCollection,1>::AsShared
                       ((TSharedFromThis<FActionRouterBindingCollection,1> *)&this->_padding_,
                        &local_18);
    pFVar9 = (FActivatableTreeNode *)(pTVar7->SharedReferenceCount).ReferenceController;
    pFVar2 = (FActivatableTreeRoot *)pTVar7->Object;
    if (pFVar9 == (FActivatableTreeNode *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      __return_storage_ptr__->Object = pFVar2;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      *(atomic<int> *)&pFVar9->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar9->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      __return_storage_ptr__->Object = pFVar2;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)pFVar9;
      LOCK();
      *(atomic<int> *)&pFVar9->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar9->_padding_ + 1);
      UNLOCK();
    }
    goto LAB_14a7e7538;
  }
  pFVar9 = (FActivatableTreeNode *)(this->Parent).WeakReferenceCount.ReferenceController;
  this_00 = (FActivatableTreeNode *)0x0;
  pFVar8 = pFVar9;
  if (pFVar9 == (FActivatableTreeNode *)0x0) {
LAB_14a7e74b1:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pFVar9 = pFVar8;
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FActivatableTreeRoot,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  else {
    aVar4 = *(atomic<int> *)&pFVar9->_padding_;
    do {
      pFVar8 = this_00;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14a7e74b1;
      LOCK();
      aVar5 = *(atomic<int> *)&pFVar9->_padding_;
      bVar10 = aVar4 == aVar5;
      if (bVar10) {
        *(atomic<int> *)&pFVar9->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar10);
    this_00 = (this->Parent).Object;
    pFVar8 = pFVar9;
    if (this_00 == (FActivatableTreeNode *)0x0) goto LAB_14a7e74b1;
  }
  GetRoot(this_00,__return_storage_ptr__);
LAB_14a7e7538:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar9);
  return __return_storage_ptr__;
}

// HandleChildSlateReleased @ 14a7eba10

void __thiscall
FActivatableTreeNode::HandleChildSlateReleased
          (FActivatableTreeNode *this,UCommonActivatableWidget *param_1)

{
  TArray<TSharedRef<FActivatableTreeNode,1>,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UCommonActivatableWidget *pUVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->OnSlateReleasedEvent,
             this);
  this_00 = &this->Children;
  pFVar2 = (this_00->AllocatorInstance).Data;
  iVar1 = (this->Children).ArrayNum;
  pFVar8 = pFVar2;
  do {
    if (pFVar8 == pFVar2 + (longlong)iVar1 * 0x10) {
LAB_14a7eba7d:
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8809435093299889471>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                         ,0x53f,"ChildToRemoveIdx != INDEX_NONE");
      if (!bVar4) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar6 = (UCommonActivatableWidget *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)pFVar8 + 0x90));
    if (pUVar6 == param_1) {
      uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 4);
      if (uVar7 != 0xffffffff) {
        uVar5 = 0;
        if ((int)uVar7 < (this->Children).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<TSharedRef<FActivatableTreeNode,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_00,uVar7);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,(this->Children).ArrayNum,
                   &(this->Children).ArrayMax);
        return;
      }
      goto LAB_14a7eba7d;
    }
    pFVar8 = pFVar8 + 0x10;
  } while( true );
}

// HandleWidgetActivated @ 14a7f0770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FActivatableTreeNode::HandleWidgetActivated(FActivatableTreeNode *this)

{
  longlong *plVar1;
  FActivatableTreeNode *pFVar2;
  FActivatableTreeRoot *this_00;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  char cVar5;
  atomic<int> aVar6;
  TSharedRef<FActivatableTreeRoot,1> *pTVar7;
  TSharedRef<FActionRouterBindingCollection,1> *pTVar8;
  UObject *pUVar9;
  ULocalPlayer *this_01;
  UCommonUIActionRouterBase *pUVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  TSharedPtr<FActivatableTreeNode,1> local_38;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnActivated,&local_28)
  ;
  if ((*(int *)&(this->OnActivated).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnActivated).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pTVar11 = (this->Parent).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar11->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7f07d2;
      }
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar12 = aVar4 == aVar6;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar12);
    pFVar2 = (this->Parent).Object;
    if ((pFVar2 != (FActivatableTreeNode *)0x0) &&
       (cVar5 = (**(code **)(pFVar2->_padding_ + 0x18))(), cVar5 != '\0')) {
      SetCanReceiveInput(this,true);
      bVar12 = DoesPathSupportActivationFocus(this);
      if (bVar12) {
        pTVar7 = GetRoot(this,(TSharedRef<FActivatableTreeRoot,1> *)&local_28);
        this_00 = pTVar7->Object;
        pTVar8 = TSharedFromThis<FActionRouterBindingCollection,1>::AsShared
                           ((TSharedFromThis<FActionRouterBindingCollection,1> *)&this->_padding_,
                            (TSharedRef<FActionRouterBindingCollection,1> *)&local_38);
        pTVar3 = (pTVar8->SharedReferenceCount).ReferenceController;
        pFVar2 = (FActivatableTreeNode *)pTVar8->Object;
        if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.SharedReferenceCount.ReferenceController);
        }
        else {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.SharedReferenceCount.ReferenceController);
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_38.Object = pFVar2;
        local_38.SharedReferenceCount.ReferenceController = pTVar3;
        FActivatableTreeRoot::UpdateLeafmostActiveNode(this_00,&local_38,true);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        return;
      }
      bVar12 = FWeakObjectPtr::IsValid(&(this->RepresentedWidget).WeakPtr);
      if (bVar12) {
        pUVar9 = FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
        this_01 = (ULocalPlayer *)(**(code **)(*(longlong *)pUVar9 + 0x2e0))(pUVar9);
        if (this_01 != (ULocalPlayer *)0x0) {
          pUVar10 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_01);
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&pUVar10->OnBoundActionsUpdatedEvent);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar11);
          return;
        }
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &DAT_00000118);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        return;
      }
    }
  }
LAB_14a7f07d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// HandleWidgetDeactivated @ 14a7f0940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FActivatableTreeNode::HandleWidgetDeactivated(FActivatableTreeNode *this)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  FActivatableTreeRoot *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  char cVar6;
  atomic<int> aVar7;
  UCommonUIActionRouterBase *pUVar8;
  TSharedRef<FActivatableTreeRoot,1> *pTVar9;
  FActivatableTreeNode *pFVar10;
  FSharedReferencer<1> FVar11;
  FActivatableTreeNode *pFVar12;
  FActivatableTreeNode *local_68;
  FSharedReferencer<1> FStack_60;
  undefined8 local_58;
  FSharedReferencer<1> local_50;
  TSharedPtr<FActivatableTreeNode,1> local_48;
  TSharedRef<FActivatableTreeRoot,1> local_38;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDeactivated,
             &local_28);
  if ((*(int *)&(this->OnDeactivated).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnDeactivated).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if ((((this->bCanReceiveInput != false) &&
       (SetCanReceiveInput(this,false), (this->Parent).Object != (FActivatableTreeNode *)0x0)) &&
      (pTVar2 = (this->Parent).WeakReferenceCount.ReferenceController,
      pTVar2 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar2->SharedReferenceCount)) {
    bVar5 = DoesPathSupportActivationFocus(this);
    if (bVar5) {
      pFVar10 = (FActivatableTreeNode *)0x0;
      FStack_60.ReferenceController = (this->Parent).WeakReferenceCount.ReferenceController;
      FVar11.ReferenceController = FStack_60.ReferenceController;
      if ((FActivatableTreeNode *)FStack_60.ReferenceController != (FActivatableTreeNode *)0x0) {
        aVar4 = *(atomic<int> *)&((FActivatableTreeNode *)FStack_60.ReferenceController)->_padding_;
        do {
          FVar11.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
          if (aVar4 == (atomic<int>)0x0) goto LAB_14a7f0b8d;
          LOCK();
          aVar7 = *(atomic<int> *)
                   &((FActivatableTreeNode *)FStack_60.ReferenceController)->_padding_;
          bVar5 = aVar4 == aVar7;
          if (bVar5) {
            *(atomic<int> *)&((FActivatableTreeNode *)FStack_60.ReferenceController)->_padding_ =
                 (atomic<int>)((int)aVar4 + 1);
            aVar7 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar7;
        } while (!bVar5);
        FVar11.ReferenceController = FStack_60.ReferenceController;
        if (((FActivatableTreeNode *)FStack_60.ReferenceController != (FActivatableTreeNode *)0x0)
           && (local_68 = (this->Parent).Object, local_68 != (FActivatableTreeNode *)0x0)) {
          do {
            cVar6 = (**(code **)(local_68->_padding_ + 0x18))(local_68);
            if (cVar6 != '\0') break;
            if ((local_68 == (FActivatableTreeNode *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_50.ReferenceController = (local_68->Parent).WeakReferenceCount.ReferenceController
            ;
            pFVar12 = pFVar10;
            if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              aVar4 = (local_50.ReferenceController)->SharedReferenceCount;
              do {
                if (aVar4 == (atomic<int>)0x0) {
                  local_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                  goto LAB_14a7f0aa7;
                }
                LOCK();
                aVar7 = (local_50.ReferenceController)->SharedReferenceCount;
                bVar5 = aVar4 == aVar7;
                if (bVar5) {
                  (local_50.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)((int)aVar4 + 1);
                  aVar7 = aVar4;
                }
                UNLOCK();
                aVar4 = aVar7;
              } while (!bVar5);
              pFVar12 = (local_68->Parent).Object;
            }
LAB_14a7f0aa7:
            local_58 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_60,&local_50);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_50.ReferenceController);
            local_68 = pFVar12;
          } while (pFVar12 != (FActivatableTreeNode *)0x0);
          pUVar8 = FActionRouterBindingCollection::GetActionRouter
                             ((FActionRouterBindingCollection *)this);
          FVar11.ReferenceController = FStack_60.ReferenceController;
          if ((FActivatableTreeNode *)FStack_60.ReferenceController != (FActivatableTreeNode *)0x0)
          {
            LOCK();
            (FStack_60.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_60.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar9 = GetRoot(this,&local_38);
          pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
          this_00 = pTVar9->Object;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (this_00 != (FActivatableTreeRoot *)0x0) {
            if (this_00 == (pUVar8->ActiveRootNode).Object) {
              local_48.Object = local_68;
              local_48.SharedReferenceCount.ReferenceController = FStack_60.ReferenceController;
              if ((FActivatableTreeNode *)FVar11.ReferenceController != (FActivatableTreeNode *)0x0)
              {
                LOCK();
                (FVar11.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              bVar5 = FActivatableTreeRoot::UpdateLeafmostActiveNode(this_00,&local_48,true);
              if ((!bVar5) && (2 < (byte)LogUIActionRouter._0_1_)) {
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
              }
            }
            else {
              UCommonUIActionRouterBase::RefreshActionDomainLeafNodeConfig(pUVar8);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar11.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.SharedReferenceCount.ReferenceController);
        }
      }
LAB_14a7f0b8d:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar11.ReferenceController);
      return;
    }
    pUVar8 = FActionRouterBindingCollection::GetActionRouter((FActionRouterBindingCollection *)this)
    ;
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&pUVar8->OnBoundActionsUpdatedEvent);
  }
  return;
}

// Init @ 14a7f2410

void __thiscall FActivatableTreeNode::Init(FActivatableTreeNode *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<FActivatableTreeNode>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pUVar1[0x1d].field_0x18,(FActivatableTreeNode *)&stack0x00000008,(pmf_04ddc356 *)this)
  ;
  pUVar1 = FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<FActivatableTreeNode>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pUVar1[0x1e].field_0x10,(FActivatableTreeNode *)&stack0x00000008,(pmf_04ddc356 *)this)
  ;
  pUVar1 = FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
  if (pUVar1[0x1b].field_0x20 != '\0') {
    HandleWidgetActivated(this);
  }
  return;
}

// IsExclusiveParentOfWidget @ 14a7f56f0

bool __thiscall
FActivatableTreeNode::IsExclusiveParentOfWidget
          (FActivatableTreeNode *this,TSharedPtr<SWidget,1> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [16];
  
  bVar4 = IsParentOfWidget(this,param_1,ExcludeSelf);
  if (bVar4) {
    iVar1 = (this->Children).ArrayNum;
    pFVar7 = (this->Children).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->Children).ArrayNum != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FActivatableTreeNode,1>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res18);
      }
      if (pFVar7 == pFVar8) break;
      lVar2 = *(longlong *)pFVar7;
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar2 + 0x90));
      if (bVar4) {
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar2 + 0x90));
        if (pUVar6[0x19].field_0x1 != '\0') {
          bVar4 = IsParentOfWidget(*(FActivatableTreeNode **)pFVar7,param_1,ExcludeSelf);
          if (bVar4) goto LAB_14a7f57d0;
        }
      }
      else {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8809435093299889167>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                           ,0x40f,"RepresentedWidget.IsValid()");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pFVar7 = pFVar7 + 0x10;
    }
    bVar4 = true;
  }
  else {
LAB_14a7f57d0:
    bVar4 = false;
  }
  return bVar4;
}

// IsParentOfWidget @ 14a7f6370

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FActivatableTreeNode::IsParentOfWidget
          (FActivatableTreeNode *this,TSharedPtr<SWidget,1> *param_1,EIsParentSearchType param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  int iVar7;
  UWidget *this_00;
  SWidget *pSVar8;
  int iVar9;
  FSharedReferencer<1> FVar10;
  SWidget *pSVar11;
  FSharedReferencer<1> local_60;
  SWidget *local_58;
  TReferenceControllerBase<1> *local_50;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  SWidget *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedPtr<SWidget,1> local_28;
  
  if (param_1->Object != (SWidget *)0x0) {
    bVar4 = FWeakObjectPtr::IsValid(&(this->RepresentedWidget).WeakPtr);
    if (bVar4) {
      this_00 = (UWidget *)FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
      UWidget::GetCachedWidget(this_00,&local_28);
      iVar9 = 0;
      if (param_2 == ExcludeSelf) {
        pSVar8 = TSharedPtr<SWidget,1>::operator->(param_1);
        local_58 = (SWidget *)0x0;
        local_50 = (pSVar8->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
        if (local_50 != (TReferenceControllerBase<1> *)0x0) {
          aVar2 = local_50->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              local_50 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14a7f6446;
            }
            LOCK();
            aVar6 = local_50->SharedReferenceCount;
            bVar4 = aVar2 == aVar6;
            if (bVar4) {
              local_50->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
              aVar6 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar6;
          } while (!bVar4);
          local_58 = (pSVar8->ParentWidgetPtr).Object;
        }
LAB_14a7f6446:
        pSVar8 = local_58;
        FVar10.ReferenceController = local_50;
        iVar7 = iVar9;
        iVar9 = 1;
      }
      else {
        pSVar8 = param_1->Object;
        FVar10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
        if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar10.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar7 = 2;
        local_38 = pSVar8;
        local_30 = FVar10.ReferenceController;
      }
      pTVar3 = local_50;
      if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar10.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_60.ReferenceController = FVar10.ReferenceController;
      if (iVar7 != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
      }
      if (iVar9 != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
      do {
        if ((pSVar8 == (SWidget *)0x0) ||
           (FVar10.ReferenceController = local_60.ReferenceController, pSVar8 == local_28.Object)) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar10.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_28.SharedReferenceCount.ReferenceController);
          return pSVar8 != (SWidget *)0x0;
        }
        if ((pSVar8 == (SWidget *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        local_40.ReferenceController =
             (pSVar8->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
        pSVar11 = (SWidget *)0x0;
        if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          aVar2 = (local_40.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              local_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14a7f6539;
            }
            LOCK();
            aVar6 = (local_40.ReferenceController)->SharedReferenceCount;
            bVar4 = aVar2 == aVar6;
            if (bVar4) {
              (local_40.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
              aVar6 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar6;
          } while (!bVar4);
          pSVar11 = (pSVar8->ParentWidgetPtr).Object;
        }
LAB_14a7f6539:
        local_48 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_60,&local_40);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40.ReferenceController);
        pSVar8 = pSVar11;
        FVar10.ReferenceController = local_60.ReferenceController;
      } while( true );
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8809435093299889354>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,0x4ca,"RepresentedWidget.IsValid()");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  return false;
}

// IsReceivingInput @ 14a7f66a0

bool __thiscall FActivatableTreeNode::IsReceivingInput(FActivatableTreeNode *this)

{
  bool bVar1;
  
  if (this->bCanReceiveInput != false) {
    bVar1 = IsWidgetActivated(this);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsWidgetActivated @ 14a7f7350

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FActivatableTreeNode::IsWidgetActivated(FActivatableTreeNode *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  UObject *pUVar7;
  FActivatableTreeNode *pFVar8;
  FActivatableTreeNode *pFVar9;
  FActivatableTreeNode *pFVar10;
  uint uStackX_c;
  
  pFVar8 = (FActivatableTreeNode *)0x0;
  if (((byte)LogUIActionRouter._0_1_ < 3) ||
     (bVar4 = FWeakObjectPtr::IsValid(&(this->RepresentedWidget).WeakPtr), bVar4))
  goto LAB_14a7f747b;
  if (((this->Parent).Object == (FActivatableTreeNode *)0x0) ||
     ((pTVar1 = (this->Parent).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0 || ((int)pTVar1->SharedReferenceCount < 1)))) {
    pFVar10 = (FActivatableTreeNode *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pFVar10 = (FActivatableTreeNode *)(this->Parent).WeakReferenceCount.ReferenceController;
    pFVar9 = pFVar10;
    if (pFVar10 == (FActivatableTreeNode *)0x0) {
LAB_14a7f73e1:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      pFVar10 = pFVar9;
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    else {
      aVar3 = *(atomic<int> *)&pFVar10->_padding_;
      do {
        pFVar9 = pFVar8;
        if (aVar3 == (atomic<int>)0x0) goto LAB_14a7f73e1;
        LOCK();
        aVar6 = *(atomic<int> *)&pFVar10->_padding_;
        bVar4 = aVar3 == aVar6;
        if (bVar4) {
          *(atomic<int> *)&pFVar10->_padding_ = (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar4);
      pFVar8 = (this->Parent).Object;
      pFVar9 = pFVar10;
      if (pFVar8 == (FActivatableTreeNode *)0x0) goto LAB_14a7f73e1;
    }
    if ((pFVar8->DebugWidgetName).Data.ArrayNum == 0) {
      pFVar8 = (FActivatableTreeNode *)&DAT_00000001;
    }
    else {
      pFVar8 = (FActivatableTreeNode *)&DAT_00000001;
    }
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
  if (pFVar8 != (FActivatableTreeNode *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
  }
LAB_14a7f747b:
  bVar4 = FWeakObjectPtr::IsValid(&(this->RepresentedWidget).WeakPtr);
  if (bVar4) {
    pUVar7 = FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
    if (pUVar7[0x1b].field_0x20 != '\0') {
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8809435093299889162>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,0x40a,"RepresentedWidget.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// IsWidgetReachableForInput @ 14a7f7970

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FActivatableTreeNode::IsWidgetReachableForInput(FActivatableTreeNode *this,UWidget *param_1)

{
  SWidget *pSVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  TSharedPtr<SWidget,1> *pTVar7;
  UWidget *this_00;
  SWidget *pSVar8;
  SWidget *pSVar9;
  FSharedReferencer<1> local_50;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  TSharedPtr<SWidget,1> local_38;
  TSharedPtr<SWidget,1> local_28 [2];
  
  pSVar8 = (SWidget *)0x0;
  if (param_1 == (UWidget *)0x0) {
    local_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar8;
  }
  else {
    pTVar7 = UWidget::GetCachedWidget(param_1,local_28);
    local_50.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar7->Object;
    (pTVar7->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar7->Object = (SWidget *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28[0].SharedReferenceCount.ReferenceController);
    if (pSVar1 == (SWidget *)0x0) goto LAB_14a7f7b75;
    bVar4 = FWeakObjectPtr::IsValid(&(this->RepresentedWidget).WeakPtr);
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RepresentedWidget.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                           ,0x3bd,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    this_00 = (UWidget *)FWeakObjectPtr::Get(&(this->RepresentedWidget).WeakPtr);
    UWidget::GetCachedWidget(this_00,&local_38);
    if (local_38.Object != (SWidget *)0x0) {
      do {
        if ((pSVar1 == (SWidget *)0x0) || (pSVar1 == local_38.Object)) {
          bVar4 = true;
LAB_14a7f7b52:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_50.ReferenceController);
          return bVar4;
        }
        if ((pSVar1 == (SWidget *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        bVar4 = CanWidgetReceiveInput(pSVar1);
        if (!bVar4) {
          bVar4 = false;
          goto LAB_14a7f7b52;
        }
        if ((pSVar1 == (SWidget *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        local_40.ReferenceController =
             (pSVar1->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
        pSVar9 = pSVar8;
        if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          aVar3 = (local_40.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              local_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14a7f7b13;
            }
            LOCK();
            aVar6 = (local_40.ReferenceController)->SharedReferenceCount;
            bVar4 = aVar3 == aVar6;
            if (bVar4) {
              (local_40.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
              aVar6 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar6;
          } while (!bVar4);
          pSVar9 = (pSVar1->ParentWidgetPtr).Object;
        }
LAB_14a7f7b13:
        local_48 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&local_40);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40.ReferenceController);
        pSVar1 = pSVar9;
      } while( true );
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8809435093299889087>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,0x3bf,"RepresentedSlateWidget");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
LAB_14a7f7b75:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  return false;
}

// IsWidgetValid @ 14a7f7ba0

bool __thiscall FActivatableTreeNode::IsWidgetValid(FActivatableTreeNode *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->RepresentedWidget).WeakPtr);
  return bVar1;
}

// ProcessHoldInput @ 14a803620

EProcessHoldActionResult __thiscall
FActivatableTreeNode::ProcessHoldInput
          (FActivatableTreeNode *this,ECommonInputMode param_1,FKey *param_2,EInputEvent param_3,
          int param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  EProcessHoldActionResult EVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FKey local_48;
  
  cVar4 = (**(code **)(this->_padding_ + 0x18))();
  if (cVar4 == '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
    return Unhandled;
  }
  pFVar6 = (this->Children).AllocatorInstance.Data;
  iVar1 = (this->Children).ArrayNum;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Children).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FActivatableTreeNode,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) {
      local_48.KeyName = param_2->KeyName;
      local_48.KeyDetails.Object = (param_2->KeyDetails).Object;
      local_48.KeyDetails.SharedReferenceCount.ReferenceController =
           (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
      if (local_48.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      EVar5 = FActionRouterBindingCollection::ProcessHoldInput
                        ((FActionRouterBindingCollection *)this,param_1,&local_48,param_3,param_4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return EVar5;
    }
    plVar2 = *(longlong **)pFVar6;
    pcVar3 = *(code **)(*plVar2 + 8);
    local_48.KeyName = param_2->KeyName;
    local_48.KeyDetails.Object = (param_2->KeyDetails).Object;
    local_48.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
    if (local_48.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    EVar5 = (*pcVar3)(plVar2,param_1,&local_48,param_3,param_4);
    if (EVar5 != Unhandled) break;
    pFVar6 = pFVar6 + 0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return EVar5;
}

// ProcessNormalInput @ 14a804440

bool __thiscall
FActivatableTreeNode::ProcessNormalInput
          (FActivatableTreeNode *this,ECommonInputMode param_1,FKey *param_2,EInputEvent param_3,
          int param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FKey local_48;
  
  cVar4 = (**(code **)(this->_padding_ + 0x18))();
  if (cVar4 == '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
    return false;
  }
  pFVar6 = (this->Children).AllocatorInstance.Data;
  iVar1 = (this->Children).ArrayNum;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Children).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FActivatableTreeNode,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) {
      local_48.KeyName = param_2->KeyName;
      local_48.KeyDetails.Object = (param_2->KeyDetails).Object;
      local_48.KeyDetails.SharedReferenceCount.ReferenceController =
           (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
      if (local_48.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar5 = FActionRouterBindingCollection::ProcessNormalInput
                        ((FActionRouterBindingCollection *)this,param_1,&local_48,param_3,param_4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return bVar5;
    }
    plVar2 = *(longlong **)pFVar6;
    pcVar3 = *(code **)(*plVar2 + 0x10);
    local_48.KeyName = param_2->KeyName;
    local_48.KeyDetails.Object = (param_2->KeyDetails).Object;
    local_48.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
    if (local_48.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar4 = (*pcVar3)(plVar2,param_1,&local_48,param_3,param_4);
    if (cVar4 != '\0') break;
    pFVar6 = pFVar6 + 0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return true;
}

// RegisterPreprocessors @ 14a80ef70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FActivatableTreeNode::RegisterPreprocessors(FActivatableTreeNode *this)

{
  FInputPreprocessorRegistrationKey *pFVar1;
  int iVar2;
  code *pcVar3;
  FSlateApplication *this_00;
  char cVar4;
  bool bVar5;
  FInputPreprocessorRegistrationKey *pFVar6;
  undefined1 local_res8 [8];
  TSharedPtr<IInputProcessor,1> local_18;
  
  cVar4 = (**(code **)(this->_padding_ + 0x18))();
  if (cVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsReceivingInput()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,0x547,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = (this->RegisteredPreprocessors).ArrayNum;
  pFVar6 = (FInputPreprocessorRegistrationKey *)
           (this->RegisteredPreprocessors).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 3;
  while( true ) {
    if ((this->RegisteredPreprocessors).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInputPreprocessorRegistration,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                         ,0x141,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = IsInSlateThread();
      if (!bVar5) {
        bVar5 = (*IsInAsyncLoadingThread)();
        if (!bVar5) {
          bVar5 = IsInParallelLoadingThread();
          if (!bVar5) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                               ,0x142,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
      }
    }
    if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this_00 = FSlateApplication::CurrentApplication.Object;
    local_18.Object = *(IInputProcessor **)(pFVar6 + 1);
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar6 + 2);
    if ((FInputPreprocessorRegistrationKey)local_18.SharedReferenceCount.ReferenceController !=
        (FInputPreprocessorRegistrationKey)0x0) {
      LOCK();
      *(int *)((longlong)local_18.SharedReferenceCount.ReferenceController + 8) =
           *(int *)((longlong)local_18.SharedReferenceCount.ReferenceController + 8) + 1;
      UNLOCK();
    }
    FSlateApplication::RegisterInputPreProcessor(this_00,&local_18,pFVar6);
    pFVar6 = pFVar6 + 3;
  }
  return;
}

// RemoveScrollRecipient @ 14a8138b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FActivatableTreeNode::RemoveScrollRecipient(FActivatableTreeNode *this,UWidget *param_1)

{
  FWeakObjectPtr local_res8;
  UWidget *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Remove
            (&this->ScrollRecipients,(TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *)&local_res8);
  return;
}

// SetCanReceiveInput @ 14a8176c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FActivatableTreeNode::SetCanReceiveInput(FActivatableTreeNode *this,bool param_1)

{
  FInputPreprocessorRegistrationKey *pFVar1;
  int iVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  FActivatableTreeNode *this_00;
  FSlateApplication *pFVar5;
  bool bVar6;
  char cVar7;
  FInputPreprocessorRegistrationKey *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  TSharedPtr<IInputProcessor,1> local_58;
  TSharedPtr<IInputProcessor,1> local_48;
  
  if ((param_1 != this->bCanReceiveInput) &&
     ((!param_1 || (bVar6 = IsWidgetActivated(this), bVar6)))) {
    pcVar3 = *(code **)(this->_padding_ + 0x18);
    this->bCanReceiveInput = param_1;
    cVar7 = (*pcVar3)(this);
    if (param_1) {
      if ((cVar7 == '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsReceivingInput()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                             ,0x547,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = (this->RegisteredPreprocessors).ArrayNum;
      pFVar8 = (FInputPreprocessorRegistrationKey *)
               (this->RegisteredPreprocessors).AllocatorInstance.Data;
      pFVar1 = pFVar8 + (longlong)iVar2 * 3;
      while( true ) {
        if ((this->RegisteredPreprocessors).ArrayNum != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FInputPreprocessorRegistration,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar8 == pFVar1) break;
        if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentApplication.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                               ,0x141,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar6 = IsInGameThread();
        if ((((!bVar6) && (bVar6 = IsInSlateThread(), !bVar6)) &&
            (bVar6 = (*IsInAsyncLoadingThread)(), !bVar6)) &&
           ((bVar6 = IsInParallelLoadingThread(), !bVar6 &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                ,0x142,L""), bVar6)))) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar5 = FSlateApplication::CurrentApplication.Object;
        local_58.Object = *(IInputProcessor **)(pFVar8 + 1);
        local_58.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar8 + 2);
        if ((FInputPreprocessorRegistrationKey)local_58.SharedReferenceCount.ReferenceController !=
            (FInputPreprocessorRegistrationKey)0x0) {
          LOCK();
          *(int *)((longlong)local_58.SharedReferenceCount.ReferenceController + 8) =
               *(int *)((longlong)local_58.SharedReferenceCount.ReferenceController + 8) + 1;
          UNLOCK();
        }
        FSlateApplication::RegisterInputPreProcessor(pFVar5,&local_58,pFVar8);
        pFVar8 = pFVar8 + 3;
      }
    }
    else {
      if ((cVar7 != '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsReceivingInput()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                             ,0x550,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = (this->RegisteredPreprocessors).ArrayNum;
      pFVar9 = (this->RegisteredPreprocessors).AllocatorInstance.Data;
      pFVar10 = pFVar9 + (longlong)iVar2 * 0x18;
      while( true ) {
        if ((this->RegisteredPreprocessors).ArrayNum != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FInputPreprocessorRegistration,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar9 == pFVar10) break;
        if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentApplication.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                               ,0x141,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar6 = IsInGameThread();
        if ((((!bVar6) && (bVar6 = IsInSlateThread(), !bVar6)) &&
            (bVar6 = (*IsInAsyncLoadingThread)(), !bVar6)) &&
           ((bVar6 = IsInParallelLoadingThread(), !bVar6 &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                ,0x142,L""), bVar6)))) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar5 = FSlateApplication::CurrentApplication.Object;
        local_48.Object = *(IInputProcessor **)(pFVar9 + 8);
        local_48.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar9 + 0x10);
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FSlateApplication::UnregisterInputPreProcessor(pFVar5,&local_48);
        pFVar9 = pFVar9 + 0x18;
      }
    }
    iVar2 = (this->Children).ArrayNum;
    pFVar10 = (this->Children).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->Children).ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FActivatableTreeNode,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar10 == pFVar9) break;
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
      this_00 = *(FActivatableTreeNode **)pFVar10;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FActivatableTreeNode *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      SetCanReceiveInput(this_00,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar10 = pFVar10 + 0x10;
    }
  }
  return;
}

// UnregisterPreprocessors @ 14a8255d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FActivatableTreeNode::UnregisterPreprocessors(FActivatableTreeNode *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  FSlateApplication *this_00;
  char cVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  TSharedPtr<IInputProcessor,1> local_18;
  
  cVar4 = (**(code **)(this->_padding_ + 0x18))();
  if (cVar4 != '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsReceivingInput()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,0x550,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = (this->RegisteredPreprocessors).ArrayNum;
  pFVar6 = (this->RegisteredPreprocessors).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->RegisteredPreprocessors).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInputPreprocessorRegistration,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                         ,0x141,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = IsInSlateThread();
      if (!bVar5) {
        bVar5 = (*IsInAsyncLoadingThread)();
        if (!bVar5) {
          bVar5 = IsInParallelLoadingThread();
          if (!bVar5) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                               ,0x142,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
      }
    }
    if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this_00 = FSlateApplication::CurrentApplication.Object;
    local_18.Object = *(IInputProcessor **)(pFVar6 + 8);
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar6 + 0x10);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::UnregisterInputPreProcessor(this_00,&local_18);
    pFVar6 = pFVar6 + 0x18;
  }
  return;
}

