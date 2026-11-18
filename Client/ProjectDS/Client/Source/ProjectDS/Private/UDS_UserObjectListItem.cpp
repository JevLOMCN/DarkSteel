// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b5d20d0

UClass * __cdecl UDS_UserObjectListItem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_UserObjectListItem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_UserObjectListItem",
               &Z_Registration_Info_UClass_UDS_UserObjectListItem.InnerSingleton,
               StaticRegisterNativesUDS_UserObjectListItem,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_UserObjectListItem>,
               InternalVTableHelperCtorCaller<UDS_UserObjectListItem>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_UserObjectListItem.InnerSingleton;
}

// UDS_UserObjectListItem @ 14b5d8e20

UDS_UserObjectListItem * __thiscall
UDS_UserObjectListItem::UDS_UserObjectListItem(UDS_UserObjectListItem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ListItemIndex = -1;
  this->bIsAnimation = false;
  this->_padding_ = (longlong)&___7UDS_UserObjectListItem__6B_;
  *(undefined8 *)&this->OnListViewBindingComplete = 0;
  *(undefined8 *)&(this->OnListViewBindingComplete).field_0x8 = 0;
  *(undefined4 *)&(this->OnListViewBindingComplete).field_0x10 = 0;
  *(undefined8 *)&this->OnItemInteractionDelegate = 0;
  *(undefined8 *)&(this->OnItemInteractionDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemInteractionDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemInteractionDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnItemFocusLostDelegate = 0;
  *(undefined8 *)&(this->OnItemFocusLostDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemFocusLostDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemFocusLostDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnAnimationCancelDelegate = 0;
  *(undefined8 *)&(this->OnAnimationCancelDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnAnimationCancelDelegate).field_0x10 = 0;
  (this->ViewModelContextArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewModelContextArray).ArrayNum = 0;
  (this->ViewModelContextArray).ArrayMax = 0;
  (this->OwnerWidget).WeakPtr = (FWeakObjectPtr)0x0;
  ::FName::FName(&this->AnimationName,"");
  this->AnimationDelay = 0.0;
  return this;
}

// UDS_UserObjectListItem @ 14b5d8ee0

UDS_UserObjectListItem * __thiscall
UDS_UserObjectListItem::UDS_UserObjectListItem
          (UDS_UserObjectListItem *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ListItemIndex = -1;
  this->bIsAnimation = false;
  this->_padding_ = (longlong)&___7UDS_UserObjectListItem__6B_;
  *(undefined8 *)&this->OnListViewBindingComplete = 0;
  *(undefined8 *)&(this->OnListViewBindingComplete).field_0x8 = 0;
  *(undefined4 *)&(this->OnListViewBindingComplete).field_0x10 = 0;
  *(undefined8 *)&this->OnItemInteractionDelegate = 0;
  *(undefined8 *)&(this->OnItemInteractionDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemInteractionDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemInteractionDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnItemFocusLostDelegate = 0;
  *(undefined8 *)&(this->OnItemFocusLostDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemFocusLostDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemFocusLostDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnAnimationCancelDelegate = 0;
  *(undefined8 *)&(this->OnAnimationCancelDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnAnimationCancelDelegate).field_0x10 = 0;
  (this->ViewModelContextArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewModelContextArray).ArrayNum = 0;
  (this->ViewModelContextArray).ArrayMax = 0;
  (this->OwnerWidget).WeakPtr = (FWeakObjectPtr)0x0;
  ::FName::FName(&this->AnimationName,"");
  this->AnimationDelay = 0.0;
  return this;
}

// ~UDS_UserObjectListItem @ 14b5da140

void __thiscall UDS_UserObjectListItem::~UDS_UserObjectListItem(UDS_UserObjectListItem *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_UserObjectListItem__6B_;
  DestructItems<TSharedPtr<FDS_ViewModelContext,1>,int>
            ((TSharedPtr<FDS_ViewModelContext,1> *)
             (this->ViewModelContextArray).AllocatorInstance.Data,
             (this->ViewModelContextArray).ArrayNum);
  pFVar1 = (this->ViewModelContextArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAnimationCancelDelegate);
  pvVar2 = *(void **)&(this->OnAnimationCancelDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAnimationCancelDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnItemFocusLostDelegate).field_0x8,
             *(int *)&(this->OnItemFocusLostDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnItemFocusLostDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemFocusLostDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnItemInteractionDelegate).field_0x8,
             *(int *)&(this->OnItemInteractionDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnItemInteractionDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemInteractionDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnListViewBindingComplete);
  pvVar2 = *(void **)&(this->OnListViewBindingComplete).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnListViewBindingComplete);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5db500

UClass * __cdecl UDS_UserObjectListItem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_UserObjectListItem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_UserObjectListItem",
               &Z_Registration_Info_UClass_UDS_UserObjectListItem.InnerSingleton,
               StaticRegisterNativesUDS_UserObjectListItem,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_UserObjectListItem>,
               InternalVTableHelperCtorCaller<UDS_UserObjectListItem>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_UserObjectListItem.InnerSingleton;
}

// StaticRegisterNativesUDS_UserObjectListItem @ 14b5dbd40

void __cdecl UDS_UserObjectListItem::StaticRegisterNativesUDS_UserObjectListItem(void)

{
  return;
}

// GetContext<FDS_ViewModelContext_ChatMacro> @ 14bd39f40

TSharedPtr<FDS_ViewModelContext_ChatMacro,1> * __thiscall
UDS_UserObjectListItem::GetContext<FDS_ViewModelContext_ChatMacro>
          (UDS_UserObjectListItem *this,
          TSharedPtr<FDS_ViewModelContext_ChatMacro,1> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  TSharedPtr<FDS_ViewModelContext_ChatMacro,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  iVar1 = (this->ViewModelContextArray).ArrayNum;
  pFVar2 = (this->ViewModelContextArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ViewModelContextArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FDS_ViewModelContext,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) {
      __return_storage_ptr__->Object = (FDS_ViewModelContext_ChatMacro *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    local_28.Object = *(FDS_ViewModelContext **)pFVar2;
    local_28.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar2 + 8);
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SafeCast<FDS_ViewModelContext_ChatMacro>(&local_38,&local_28);
    if (local_38.Object != (FDS_ViewModelContext_ChatMacro *)0x0) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    pFVar2 = pFVar2 + 0x10;
  }
  __return_storage_ptr__->Object = local_38.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetContext<FDS_ViewModelContext_ChatTab> @ 14bda00c0

TSharedPtr<FDS_ViewModelContext_ChatTab,1> * __thiscall
UDS_UserObjectListItem::GetContext<FDS_ViewModelContext_ChatTab>
          (UDS_UserObjectListItem *this,
          TSharedPtr<FDS_ViewModelContext_ChatTab,1> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  TSharedPtr<FDS_ViewModelContext_ChatTab,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  iVar1 = (this->ViewModelContextArray).ArrayNum;
  pFVar2 = (this->ViewModelContextArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ViewModelContextArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FDS_ViewModelContext,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) {
      __return_storage_ptr__->Object = (FDS_ViewModelContext_ChatTab *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    local_28.Object = *(FDS_ViewModelContext **)pFVar2;
    local_28.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar2 + 8);
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SafeCast<FDS_ViewModelContext_ChatTab>(&local_38,&local_28);
    if (local_38.Object != (FDS_ViewModelContext_ChatTab *)0x0) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    pFVar2 = pFVar2 + 0x10;
  }
  __return_storage_ptr__->Object = local_38.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AddContext @ 14bdae660

void __thiscall
UDS_UserObjectListItem::AddContext
          (UDS_UserObjectListItem *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  iVar3 = (this->ViewModelContextArray).ArrayNum;
  piVar1 = &(this->ViewModelContextArray).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ViewModelContextArray).AllocatorInstance,piVar1);
  }
  (this->ViewModelContextArray).ArrayNum = iVar3 + 1;
  pFVar4 = (this->ViewModelContextArray).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(FDS_ViewModelContext **)pFVar4 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar4 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// BindViewModels @ 14bdb1cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_UserObjectListItem::BindViewModels
          (UDS_UserObjectListItem *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [8];
  FReadAccessScope local_1a0;
  FDestructionSentinel local_188;
  undefined1 *local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  iVar1 = (this->ViewModelContextArray).ArrayNum;
  pFVar9 = (this->ViewModelContextArray).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  local_res10 = param_1.WeakPtr;
  while( true ) {
    if ((this->ViewModelContextArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FDS_ViewModelContext,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1a8);
    }
    if (pFVar9 == pFVar10) break;
    local_1a0.DestructionSentinel._0_8_ = *(undefined8 *)pFVar9;
    local_1a0.DestructionSentinel.Accessor = *(FMRSWRecursiveAccessDetector **)(pFVar9 + 8);
    if ((TReferenceControllerBase<1> *)local_1a0.DestructionSentinel.Accessor !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_1a0.DestructionSentinel.Accessor)->SharedReferenceCount
           = (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_1a0.DestructionSentinel.Accessor)->
                   SharedReferenceCount + 1);
      UNLOCK();
    }
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,
               (TSharedPtr<FDS_ViewModelContext,1> *)&local_1a0,false);
    pFVar9 = pFVar9 + 0x10;
  }
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    (this->OwnerWidget).WeakPtr = local_res10;
    pUVar6 = FWeakObjectPtr::Get(&local_res10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar6[0x18].field_0x18,
               (FWriteAccessScope *)&local_188);
    local_170 = &pUVar6[0x18].field_0x20;
    puVar7 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_170);
    plVar11 = (longlong *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___N__6B_;
      *(undefined1 *)(puVar7 + 1) = 1;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_UserObjectListItem____A6AXXZUFDefaultDelegateUserPolicy___N__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_1a0.DestructionSentinel._0_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_1a0);
      puVar7[4] = OnItemInteracted;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    pUVar6 = FWeakObjectPtr::Get(&local_res10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar6[0x19].field_0x8,
               (FWriteAccessScope *)&local_188);
    local_170 = &pUVar6[0x19].field_0x10;
    puVar7 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_170);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___N__6B_;
      *(undefined1 *)(puVar7 + 1) = 0;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_UserObjectListItem____A6AXXZUFDefaultDelegateUserPolicy___N__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_1a0.DestructionSentinel._0_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_1a0);
      puVar7[4] = OnItemInteracted;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    pUVar6 = FWeakObjectPtr::Get(&local_res10);
    pUVar6[0x35].field_0x9 = 1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnListViewBindingComplete,&local_1a0);
    if ((*(int *)&(this->OnListViewBindingComplete).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnListViewBindingComplete).field_0x8,
       plVar2 != (longlong *)0x0)) {
      cVar4 = (**(code **)(*plVar2 + 0x38))();
      if (cVar4 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1a0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnListViewBindingComplete,&local_1a0);
        if (*(int *)&(this->OnListViewBindingComplete).field_0x10 != 0) {
          plVar11 = *(longlong **)&(this->OnListViewBindingComplete).field_0x8;
        }
        (**(code **)(*plVar11 + 0x60))(plVar11);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1a0);
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_UserObjectListItem::BindViewModels",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_168.Ptr,0x123,L"InOwnerWidget is not valid");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  return;
}

// GetListItemIndex @ 14bdc34a0

int __thiscall UDS_UserObjectListItem::GetListItemIndex(UDS_UserObjectListItem *this)

{
  return this->ListItemIndex;
}

// GetOwnerWidget @ 14bdc3cd0

TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> __thiscall
UDS_UserObjectListItem::GetOwnerWidget(UDS_UserObjectListItem *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->OwnerWidget).WeakPtr;
  return (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)in_RDX;
}

// OnItemInteracted @ 14bdcfcb0

void __thiscall UDS_UserObjectListItem::OnItemInteracted(UDS_UserObjectListItem *this,bool param_1)

{
  bool bVar1;
  
  if (param_1) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnItemInteractionDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>::
      Broadcast(&this->OnItemInteractionDelegate,this);
      return;
    }
  }
  else {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnItemFocusLostDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>::
      Broadcast(&this->OnItemFocusLostDelegate,this);
    }
  }
  return;
}

// Reset @ 14bde3100

void __thiscall UDS_UserObjectListItem::Reset(UDS_UserObjectListItem *this)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar3;
  bool bVar4;
  UDS_UserWidget *this_00;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerWidget).WeakPtr);
  if (bVar4) {
    this_00 = (UDS_UserWidget *)FWeakObjectPtr::Get(&(this->OwnerWidget).WeakPtr);
    UDS_UserWidget::OnReleasedListViewEvent(this_00);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (this->OwnerWidget).WeakPtr = local_res8;
  }
  piVar1 = &(this->ViewModelContextArray).ArrayMax;
  pTVar3 = (TSharedPtr<FDS_ViewModelContext,1> *)
           (this->ViewModelContextArray).AllocatorInstance.Data;
  iVar2 = (this->ViewModelContextArray).ArrayNum;
  if (-1 < *piVar1) {
    DestructItems<TSharedPtr<FDS_ViewModelContext,1>,int>(pTVar3,iVar2);
    (this->ViewModelContextArray).ArrayNum = 0;
    return;
  }
  DestructItems<TSharedPtr<FDS_ViewModelContext,1>,int>(pTVar3,iVar2);
  (this->ViewModelContextArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ViewModelContextArray).AllocatorInstance,0,piVar1);
  }
  return;
}

// ResetContexts @ 14bde3400

void __thiscall UDS_UserObjectListItem::ResetContexts(UDS_UserObjectListItem *this)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar3;
  
  piVar1 = &(this->ViewModelContextArray).ArrayMax;
  pTVar3 = (TSharedPtr<FDS_ViewModelContext,1> *)
           (this->ViewModelContextArray).AllocatorInstance.Data;
  iVar2 = (this->ViewModelContextArray).ArrayNum;
  if (-1 < (this->ViewModelContextArray).ArrayMax) {
    DestructItems<TSharedPtr<FDS_ViewModelContext,1>,int>(pTVar3,iVar2);
    (this->ViewModelContextArray).ArrayNum = 0;
    return;
  }
  DestructItems<TSharedPtr<FDS_ViewModelContext,1>,int>(pTVar3,iVar2);
  (this->ViewModelContextArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ViewModelContextArray).AllocatorInstance,0,piVar1);
  }
  return;
}

// SetAnimation @ 14bde34f0

void __thiscall
UDS_UserObjectListItem::SetAnimation(UDS_UserObjectListItem *this,FName *param_1,float param_2)

{
  this->bIsAnimation = true;
  this->AnimationName = *param_1;
  this->AnimationDelay = param_2;
  return;
}

// SetListItemIndex @ 14bde7420

void __thiscall UDS_UserObjectListItem::SetListItemIndex(UDS_UserObjectListItem *this,int param_1)

{
  this->ListItemIndex = param_1;
  return;
}

// SetStopAnimation @ 14bde9040

void __thiscall UDS_UserObjectListItem::SetStopAnimation(UDS_UserObjectListItem *this)

{
  this->bIsAnimation = false;
  return;
}

// GetContext<FDS_ViewModelContext_Interaction> @ 14be050e0

TSharedPtr<FDS_ViewModelContext_Interaction,1> * __thiscall
UDS_UserObjectListItem::GetContext<FDS_ViewModelContext_Interaction>
          (UDS_UserObjectListItem *this,
          TSharedPtr<FDS_ViewModelContext_Interaction,1> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  TSharedPtr<FDS_ViewModelContext_Interaction,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  iVar1 = (this->ViewModelContextArray).ArrayNum;
  pFVar2 = (this->ViewModelContextArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ViewModelContextArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FDS_ViewModelContext,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) {
      __return_storage_ptr__->Object = (FDS_ViewModelContext_Interaction *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    local_28.Object = *(FDS_ViewModelContext **)pFVar2;
    local_28.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar2 + 8);
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SafeCast<FDS_ViewModelContext_Interaction>(&local_38,&local_28);
    if (local_38.Object != (FDS_ViewModelContext_Interaction *)0x0) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    pFVar2 = pFVar2 + 0x10;
  }
  __return_storage_ptr__->Object = local_38.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

