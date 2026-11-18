// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 17

// StaticClass @ 14ec47830

UClass * __cdecl UInAppPurchaseReceiptsCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseReceiptsCallbackProxy",
               &Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy.InnerSingleton,
               StaticRegisterNativesUInAppPurchaseReceiptsCallbackProxy,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseReceiptsCallbackProxy>,
               InternalVTableHelperCtorCaller<UInAppPurchaseReceiptsCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy.InnerSingleton;
}

// UInAppPurchaseReceiptsCallbackProxy @ 14ec53df0

UInAppPurchaseReceiptsCallbackProxy * __thiscall
UInAppPurchaseReceiptsCallbackProxy::UInAppPurchaseReceiptsCallbackProxy
          (UInAppPurchaseReceiptsCallbackProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SavedPurchaseStatus = Failed;
  this->_padding_ = (longlong)&___7UInAppPurchaseReceiptsCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  *(undefined8 *)&this->InAppPurchaseCompleteDelegate = 0;
  *(undefined8 *)&(this->InAppPurchaseCompleteDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InAppPurchaseCompleteDelegate).field_0x10 = 0;
  (this->InAppPurchaseCompleteDelegateHandle).ID = 0;
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)0x0;
  this->bWasSuccessful = false;
  (this->SavedReceipts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedReceipts).ArrayNum = 0;
  (this->SavedReceipts).ArrayMax = 0;
  return this;
}

// UInAppPurchaseReceiptsCallbackProxy @ 14ec53e60

UInAppPurchaseReceiptsCallbackProxy * __thiscall
UInAppPurchaseReceiptsCallbackProxy::UInAppPurchaseReceiptsCallbackProxy
          (UInAppPurchaseReceiptsCallbackProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SavedPurchaseStatus = Failed;
  this->_padding_ = (longlong)&___7UInAppPurchaseReceiptsCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  *(undefined8 *)&this->InAppPurchaseCompleteDelegate = 0;
  *(undefined8 *)&(this->InAppPurchaseCompleteDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InAppPurchaseCompleteDelegate).field_0x10 = 0;
  (this->InAppPurchaseCompleteDelegateHandle).ID = 0;
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)0x0;
  this->bWasSuccessful = false;
  (this->SavedReceipts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedReceipts).ArrayNum = 0;
  (this->SavedReceipts).ArrayMax = 0;
  return this;
}

// ~UInAppPurchaseReceiptsCallbackProxy @ 14ec57180

void __thiscall
UInAppPurchaseReceiptsCallbackProxy::~UInAppPurchaseReceiptsCallbackProxy
          (UInAppPurchaseReceiptsCallbackProxy *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInAppPurchaseReceiptsCallbackProxy__6B_;
  DestructItems<FInAppPurchaseReceiptInfo2,int>
            ((FInAppPurchaseReceiptInfo2 *)(this->SavedReceipts).AllocatorInstance.Data,
             (this->SavedReceipts).ArrayNum);
  pFVar1 = (this->SavedReceipts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->InAppPurchaseCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InAppPurchaseCompleteDelegate);
  pvVar2 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UObject::~UObject((UObject *)this);
  return;
}

// ClearPreviousResult @ 14ec62670

void __thiscall
UInAppPurchaseReceiptsCallbackProxy::ClearPreviousResult(UInAppPurchaseReceiptsCallbackProxy *this)

{
  int *piVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this->bWasSuccessful = false;
  this->SavedPurchaseStatus = Failed;
  DestructItems<FInAppPurchaseReceiptInfo2,int>
            ((FInAppPurchaseReceiptInfo2 *)(this->SavedReceipts).AllocatorInstance.Data,
             (this->SavedReceipts).ArrayNum);
  piVar1 = &(this->SavedReceipts).ArrayMax;
  (this->SavedReceipts).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->SavedReceipts).AllocatorInstance,0,piVar1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->WorldPtr).WeakPtr = local_res8;
  return;
}

// CreateProxyObjectForInAppPurchaseGetKnownReceipts @ 14ec6a3d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInAppPurchaseReceiptsCallbackProxy * __cdecl
UInAppPurchaseReceiptsCallbackProxy::CreateProxyObjectForInAppPurchaseGetKnownReceipts
          (APlayerController *param_1)

{
  UObject *pUVar1;
  UInAppPurchaseReceiptsCallbackProxy *this;
  
  pUVar1 = GetTransientPackageAsObject();
  this = NewObject<UInAppPurchaseReceiptsCallbackProxy>(pUVar1);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  TriggerGetKnownReceipts(this,param_1);
  return this;
}

// CreateProxyObjectForInAppPurchaseQueryOwnedProducts @ 14ec6a550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInAppPurchaseReceiptsCallbackProxy * __cdecl
UInAppPurchaseReceiptsCallbackProxy::CreateProxyObjectForInAppPurchaseQueryOwnedProducts
          (APlayerController *param_1)

{
  UObject *pUVar1;
  UInAppPurchaseReceiptsCallbackProxy *this;
  
  pUVar1 = GetTransientPackageAsObject();
  this = NewObject<UInAppPurchaseReceiptsCallbackProxy>(pUVar1);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  TriggerGetOwnedProducts(this,param_1,false);
  return this;
}

// CreateProxyObjectForInAppPurchaseRestoreOwnedProducts @ 14ec6a670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInAppPurchaseReceiptsCallbackProxy * __cdecl
UInAppPurchaseReceiptsCallbackProxy::CreateProxyObjectForInAppPurchaseRestoreOwnedProducts
          (APlayerController *param_1)

{
  UObject *pUVar1;
  UInAppPurchaseReceiptsCallbackProxy *this;
  
  pUVar1 = GetTransientPackageAsObject();
  this = NewObject<UInAppPurchaseReceiptsCallbackProxy>(pUVar1);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  TriggerGetOwnedProducts(this,param_1,true);
  return this;
}

// GetPrivateStaticClass @ 14ec78080

UClass * __cdecl UInAppPurchaseReceiptsCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseReceiptsCallbackProxy",
               &Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy.InnerSingleton,
               StaticRegisterNativesUInAppPurchaseReceiptsCallbackProxy,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseReceiptsCallbackProxy>,
               InternalVTableHelperCtorCaller<UInAppPurchaseReceiptsCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy.InnerSingleton;
}

// OnQueryComplete @ 14ec89b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInAppPurchaseReceiptsCallbackProxy::OnQueryComplete(UInAppPurchaseReceiptsCallbackProxy *this)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseReceiptsCallbackProxy::OnQueryComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppQueryReceiptsComplete>
  FVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FName local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->WorldPtr).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppQueryReceiptsComplete ==
            (FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseReceiptsCallbackProxy::OnQueryComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppQueryReceiptsComplete>
             )0x0) {
          pFVar4 = ::FName::FName(&local_res8,
                                  "STAT_FSimpleDelegateGraphTask_DelayInAppQueryReceiptsComplete");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)
                     &StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppQueryReceiptsComplete,*pFVar4,
                     L"FSimpleDelegateGraphTask.DelayInAppQueryReceiptsComplete",
                     "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,
                     ST_int64,true,false,MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    FVar5 = StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppQueryReceiptsComplete;
    if (StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppQueryReceiptsComplete ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseReceiptsCallbackProxy::OnQueryComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppQueryReceiptsComplete>
         )0x0) {
      pFVar4 = ::FName::FName(&local_res8,
                              "STAT_FSimpleDelegateGraphTask_DelayInAppQueryReceiptsComplete");
      FVar5 = (FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseReceiptsCallbackProxy::OnQueryComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppQueryReceiptsComplete>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppQueryReceiptsComplete,
                           *pFVar4,L"FSimpleDelegateGraphTask.DelayInAppQueryReceiptsComplete",
                           "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,
                           true,ST_int64,true,false,MCR_Invalid);
    }
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UInAppPurchaseReceiptsCallbackProxy::OnQueryComplete'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar6[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_res8,
               (TStatIdData *)&local_58,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)FVar5,MainQueue);
    if (local_res8 != (FName)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_res8 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)local_res8)(local_res8,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  }
  return;
}

// OnQueryReceiptsComplete @ 14ec89f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInAppPurchaseReceiptsCallbackProxy::OnQueryReceiptsComplete
          (UInAppPurchaseReceiptsCallbackProxy *this,FOnlineError *param_1,
          TWeakPtr<FUniqueNetId_const_,1> *param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  FUniqueNetId *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  EInAppPurchaseStatus EVar8;
  bool bVar9;
  char cVar10;
  atomic<int> aVar11;
  int iVar12;
  FModuleManager *this_00;
  FName *pFVar13;
  FOnlineSubsystemModule *pFVar14;
  longlong *plVar15;
  TArray<FPurchaseReceipt::FReceiptOfferEntry,TSizedDefaultAllocator<32>_> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  FScriptContainerElement *this_01;
  FPurchaseReceipt *pFVar19;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  FName local_80;
  FName local_78;
  FPurchaseReceipt *local_70;
  undefined8 local_68;
  longlong *local_60;
  TReferenceControllerBase<1> *local_58;
  
  if ((param_1->bSucceeded == false) && (param_1->Result != Success)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  this->bWasSuccessful = bVar9;
  EVar8 = PurchaseStatusFromOnlineError(param_1);
  this->SavedPurchaseStatus = EVar8;
  local_res10 = 0;
  this_00 = FModuleManager::Get();
  pFVar13 = ::FName::FName(&local_80,"OnlineSubsystem");
  bVar9 = FModuleManager::IsModuleLoaded(this_00,*pFVar13);
  if (bVar9) {
    pFVar13 = ::FName::FName(&local_78,"OnlineSubsystem");
    pFVar14 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar13);
    cVar10 = (**(code **)(pFVar14->_padding_ + 0x70))(pFVar14,0);
    if (cVar10 != '\0') {
      local_res18 = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                        ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
        _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pFVar14 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                          (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                           ::__l2::OnlineSubsystemModuleName);
      plVar15 = (longlong *)(**(code **)(pFVar14->_padding_ + 0x50))(pFVar14,local_res18);
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x98))(plVar15,&local_60);
        if (local_60 == (longlong *)0x0) {
          FFrame::KismetExecutionMessage
                    (L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
                     ,Warning,(FName)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58);
        }
        else {
          pTVar18 = (param_2->WeakReferenceCount).ReferenceController;
          pTVar17 = pTVar18;
          if ((pTVar18 != (TReferenceControllerBase<1> *)0x0) &&
             (aVar11 = pTVar18->SharedReferenceCount, pTVar17 = (TReferenceControllerBase<1> *)0x0,
             aVar11 != (atomic<int>)0x0)) {
LAB_14ec8a040:
            LOCK();
            aVar3 = pTVar18->SharedReferenceCount;
            bVar9 = aVar11 == aVar3;
            if (bVar9) {
              pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
              aVar3 = aVar11;
            }
            aVar11 = aVar3;
            UNLOCK();
            if (!bVar9) goto code_r0x00014ec8a04a;
            pFVar4 = param_2->Object;
            pTVar17 = pTVar18;
            if (pFVar4 != (FUniqueNetId *)0x0) {
              local_70 = (FPurchaseReceipt *)0x0;
              local_68 = 0;
              if ((local_60 == (longlong *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              (**(code **)(*local_60 + 0x40))(local_60,pFVar4,&local_70);
              local_res20 = 0;
              FFrame::KismetExecutionMessage
                        (L"UInAppPurchaseCallbackProxy::OnQueryReceiptsComplete - Storing Receipts",
                         Log,(FName)0x0);
              iVar7 = (int)local_68;
              pTVar16 = &local_70->ReceiptOffers;
              pFVar19 = local_70 + (int)local_68;
              while( true ) {
                if ((int)local_68 != iVar7) {
                  local_res8[0] = 0;
                  `TCheckedPointerIterator<FPurchaseReceipt,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_res8);
                }
                if ((FPurchaseReceipt *)(pTVar16 + -2) == pFVar19) break;
                iVar12 = (this->SavedReceipts).ArrayNum;
                piVar2 = &(this->SavedReceipts).ArrayMax;
                if (iVar12 == *piVar2) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x840,&(this->SavedReceipts).AllocatorInstance,piVar2);
                }
                (this->SavedReceipts).ArrayNum = iVar12 + 1;
                this_01 = (this->SavedReceipts).AllocatorInstance.Data + (longlong)iVar12 * 0x40;
                DefaultConstructItems<FInAppPurchaseReceiptInfo2,int>(this_01,1);
                if ((pTVar16->ArrayNum < 1) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar5 = (pTVar16->AllocatorInstance).Data;
                if ((*(int *)(pFVar5 + 0x38) < 1) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                ::FString::operator=
                          ((FString *)(this_01 + 0x10),
                           (FString *)(*(longlong *)(pFVar5 + 0x30) + 0x18));
                if ((pTVar16->ArrayNum < 1) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar5 = (pTVar16->AllocatorInstance).Data;
                if ((*(int *)(pFVar5 + 0x38) < 1) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                ::FString::operator=
                          ((FString *)this_01,(FString *)(*(longlong *)(pFVar5 + 0x30) + 8));
                if ((pTVar16->ArrayNum < 1) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar5 = (pTVar16->AllocatorInstance).Data;
                if ((*(int *)(pFVar5 + 0x38) < 1) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                ::FString::operator=
                          ((FString *)(this_01 + 0x20),
                           (FString *)(*(longlong *)(pFVar5 + 0x30) + 0x28));
                ::FString::operator=
                          ((FString *)(this_01 + 0x30),
                           &((FPurchaseReceipt *)(pTVar16 + -2))->TransactionId);
                pTVar16 = pTVar16 + 3;
              }
              DestructItems<FPurchaseReceipt,int>(local_70,(int)local_68);
              if (local_70 != (FPurchaseReceipt *)0x0) {
                FMemory::Free(local_70);
              }
              goto LAB_14ec8a067;
            }
          }
LAB_14ec8a051:
          FFrame::KismetExecutionMessage
                    (L"UInAppPurchaseCallbackProxy::OnQueryReceiptsComplete - Unknown PurchaseingPlayer"
                     ,Warning,(FName)0x0);
          pTVar18 = pTVar17;
LAB_14ec8a067:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar18);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58);
        }
        goto LAB_14ec8a3c7;
      }
    }
  }
  FFrame::KismetExecutionMessage
            (L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem",
             Warning,(FName)0x0);
LAB_14ec8a3c7:
  OnQueryComplete(this);
  pTVar18 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar18->WeakReferenceCount;
    aVar11 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar11 == (atomic<int>)0x1) {
      (**(code **)(pTVar18->_padding_ + 8))(pTVar18,1);
    }
  }
  return;
code_r0x00014ec8a04a:
  if (aVar11 == (atomic<int>)0x0) goto LAB_14ec8a051;
  goto LAB_14ec8a040;
}

// StaticRegisterNativesUInAppPurchaseReceiptsCallbackProxy @ 14ec998d0

void __cdecl
UInAppPurchaseReceiptsCallbackProxy::StaticRegisterNativesUInAppPurchaseReceiptsCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TriggerGetKnownReceipts @ 14ec9d4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInAppPurchaseReceiptsCallbackProxy::TriggerGetKnownReceipts
          (UInAppPurchaseReceiptsCallbackProxy *this,APlayerController *param_1)

{
  FUniqueNetId *pFVar1;
  bool bVar2;
  char cVar3;
  FModuleManager *this_00;
  FName *pFVar4;
  FOnlineSubsystemModule *pFVar5;
  IOnlineSubsystem *pIVar6;
  ULocalPlayer *this_01;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar7;
  TSharedRef<FUniqueNetId_const_,1> *pTVar8;
  FOnlineError *pFVar9;
  undefined1 auStack_e8 [32];
  TSharedRef<FUniqueNetId_const_,1> local_c8;
  TSharedPtr<FUniqueNetId_const_,1> local_b8;
  longlong local_a8;
  TReferenceControllerBase<1> *local_a0;
  FOnlineError local_98;
  FUniqueNetIdRepl local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  ClearPreviousResult(this);
  if (param_1 != (APlayerController *)0x0) {
    local_c8.Object = (FUniqueNetId *)AActor::GetWorld((AActor *)param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UWorld *)local_c8.Object != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_c8.Object);
    }
    FWeakObjectPtr::operator=(&(this->WorldPtr).WeakPtr,(FObjectPtr)&local_c8);
    local_c8.Object = (FUniqueNetId *)0x0;
    if (param_1->_padding_ != 0) {
      this_00 = FModuleManager::Get();
      pFVar4 = ::FName::FName((FName *)&local_b8,"OnlineSubsystem");
      bVar2 = FModuleManager::IsModuleLoaded(this_00,*pFVar4);
      if (bVar2) {
        pFVar4 = ::FName::FName((FName *)&local_b8,"OnlineSubsystem");
        pFVar5 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar4);
        cVar3 = (**(code **)(pFVar5->_padding_ + 0x70))(pFVar5,local_c8.Object);
        if (cVar3 != '\0') {
          local_c8.Object = (FUniqueNetId *)0x0;
          pIVar6 = IOnlineSubsystem::Get((FName *)&local_c8);
          if (pIVar6 != (IOnlineSubsystem *)0x0) {
            (**(code **)(pIVar6->_padding_ + 0x98))(pIVar6,&local_a8);
            if (local_a8 == 0) {
              local_c8.Object = (FUniqueNetId *)0x0;
              FFrame::KismetExecutionMessage
                        (L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
                         ,Warning,(FName)0x0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_a0);
              return;
            }
            this_01 = APlayerController::GetLocalPlayer(param_1);
            ULocalPlayer::GetUniqueNetIdFromCachedControllerId(this_01,&local_58);
            bVar2 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&local_58);
            if (bVar2) {
              pTVar7 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&local_58,&local_b8);
              pFVar1 = pTVar7->Object;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_b8.SharedReferenceCount.ReferenceController);
              pTVar8 = TSharedFromThis<FUniqueNetId,1>::AsShared
                                 ((TSharedFromThis<FUniqueNetId,1> *)&pFVar1->field_0x8,&local_c8);
              local_b8.SharedReferenceCount.ReferenceController =
                   (pTVar8->SharedReferenceCount).ReferenceController;
              local_b8.Object = pTVar8->Object;
              if (local_b8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                     (atomic<int>)
                     ((int)(local_b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount +
                     1);
                UNLOCK();
              }
              pFVar9 = FOnlineError::FOnlineError(&local_98,true);
              OnQueryReceiptsComplete(this,pFVar9,(TWeakPtr<FUniqueNetId_const_,1> *)&local_b8);
              if (local_98.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_98.ErrorMessage.TextData.Reference + 0x10))();
              }
              if (local_98.ErrorCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(local_98.ErrorCode.Data.AllocatorInstance.Data);
              }
              if (local_98.ErrorRaw.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.ErrorRaw.Data.AllocatorInstance.Data);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_c8.SharedReferenceCount.ReferenceController);
            }
            else {
              local_c8.Object = (FUniqueNetId *)0x0;
              FFrame::KismetExecutionMessage
                        (L"UInAppPurchaseCallbackProxy::Trigger - Invalid player UniqueNetId",
                         Warning,(FName)0x0);
            }
            FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_58);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a0);
            return;
          }
        }
      }
      local_c8.Object = (FUniqueNetId *)0x0;
      FFrame::KismetExecutionMessage
                (L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem",
                 Warning,(FName)0x0);
      return;
    }
  }
  local_c8.Object = (FUniqueNetId *)0x0;
  FFrame::KismetExecutionMessage
            (L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state",Warning,(FName)0x0);
  return;
}

// TriggerGetOwnedProducts @ 14ec9d750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInAppPurchaseReceiptsCallbackProxy::TriggerGetOwnedProducts
          (UInAppPurchaseReceiptsCallbackProxy *this,APlayerController *param_1,bool param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FUniqueNetId *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  FModuleManager *this_00;
  FName *pFVar8;
  FOnlineSubsystemModule *pFVar9;
  IOnlineSubsystem *pIVar10;
  ULocalPlayer *this_01;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar11;
  TSharedRef<FUniqueNetId_const_,1> *pTVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  wchar_t *pwVar15;
  TReferenceControllerBase<1> *pTVar16;
  longlong *plVar17;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_160;
  FDelegateAllocation local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  FName local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  TReferenceControllerBase<1> *local_108;
  UWorld *local_100;
  UInAppPurchaseReceiptsCallbackProxy *local_f8;
  code *local_f0;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  FName local_b0;
  FName local_a8;
  TSharedPtr<FUniqueNetId_const_,1> local_a0;
  TSharedPtr<FUniqueNetId_const_,1> local_90;
  TSharedRef<FUniqueNetId_const_,1> local_80;
  FUniqueNetIdRepl local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_168 = param_2;
  ClearPreviousResult(this);
  if (param_1 == (APlayerController *)0x0) {
    local_148 = 0;
    FFrame::KismetExecutionMessage
              (L"UInAppPurchaseCallbackProxy::Trigger - Invalid  player controller",Warning,
               (FName)0x0);
    return;
  }
  local_100 = AActor::GetWorld((AActor *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_100 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_100);
  }
  FWeakObjectPtr::operator=(&(this->WorldPtr).WeakPtr,(FObjectPtr)&local_100);
  bVar5 = true;
  if (param_1->_padding_ == 0) {
    local_140 = 0;
    pwVar15 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state";
  }
  else {
    local_138 = 0;
    this_00 = FModuleManager::Get();
    pFVar8 = ::FName::FName(&local_b0,"OnlineSubsystem");
    bVar6 = FModuleManager::IsModuleLoaded(this_00,*pFVar8);
    if (bVar6) {
      pFVar8 = ::FName::FName(&local_a8,"OnlineSubsystem");
      pFVar9 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar8);
      cVar7 = (**(code **)(pFVar9->_padding_ + 0x70))(pFVar9,0);
      if (cVar7 != '\0') {
        local_130.ComparisonIndex.Value = 0;
        local_130.Number = 0;
        pIVar10 = IOnlineSubsystem::Get(&local_130);
        if (pIVar10 != (IOnlineSubsystem *)0x0) {
          (**(code **)(pIVar10->_padding_ + 0x98))(pIVar10,&local_110);
          if (local_110 == (longlong *)0x0) {
            local_128 = 0;
            FFrame::KismetExecutionMessage
                      (L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
                       ,Warning,(FName)0x0);
          }
          else {
            this_01 = APlayerController::GetLocalPlayer(param_1);
            ULocalPlayer::GetUniqueNetIdFromCachedControllerId(this_01,&local_70);
            bVar6 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&local_70);
            if (bVar6) {
              bVar5 = false;
              plVar17 = local_110;
              if ((local_110 == (longlong *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), plVar17 = local_110, bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_f0 = *(code **)(*plVar17 + 0x38);
              pTVar11 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&local_70,&local_a0);
              pFVar3 = pTVar11->Object;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_a0.SharedReferenceCount.ReferenceController);
              pTVar12 = TSharedFromThis<FUniqueNetId,1>::AsShared
                                  ((TSharedFromThis<FUniqueNetId,1> *)&pFVar3->field_0x8,&local_80);
              pTVar16 = (pTVar12->SharedReferenceCount).ReferenceController;
              pFVar3 = pTVar12->Object;
              if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
                UNLOCK();
              }
              local_160.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              local_158.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_158.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_160,(FWriteAccessScope *)&local_d0);
              local_b8 = &local_158;
              puVar13 = UE::Core::Private::DelegateAllocate(0x30,&local_158);
              if (puVar13 != (undefined8 *)0x0) {
                *puVar13 = &
                           ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy__V__TWeakPtr___CBVFUniqueNetId___00____6B_
                ;
                puVar13[2] = pTVar16;
                puVar13[1] = pFVar3;
                uVar14 = FDelegateHandle::GenerateNewID();
                puVar13[3] = uVar14;
                *puVar13 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseReceiptsCallbackProxy____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy__V__TWeakPtr___CBVFUniqueNetId___00____6B_
                ;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this != (UInAppPurchaseReceiptsCallbackProxy *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                puVar13[4] = 0;
                local_f8 = this;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this != (UInAppPurchaseReceiptsCallbackProxy *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 4),(FObjectPtr)&local_f8);
                puVar13[5] = OnQueryReceiptsComplete;
                pTVar16 = (TReferenceControllerBase<1> *)0x0;
              }
              if (local_d0.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
              }
              pTVar11 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&local_70,&local_90);
              if ((pTVar11->Object == (FUniqueNetId *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x44d,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar3 = pTVar11->Object;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_90.SharedReferenceCount.ReferenceController);
              (*local_f0)(plVar17,pFVar3,local_168,&local_160);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_160,(FWriteAccessScope *)&local_e8);
              if ((local_158.DelegateSize != 0) &&
                 (local_158.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_158.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_158,0,0,0x10);
                local_158.DelegateSize = 0;
              }
              if (local_e8.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
              }
              if (local_158.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_158.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_160.AccessDetector)
              ;
              if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar1 = &pTVar16->WeakReferenceCount;
                aVar2 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if (aVar2 == (atomic<int>)0x1) {
                  (**(code **)(pTVar16->_padding_ + 8))(pTVar16,1);
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_80.SharedReferenceCount.ReferenceController);
            }
            else {
              local_120 = 0;
              FFrame::KismetExecutionMessage
                        (L"UInAppPurchaseCallbackProxy::Trigger - Invalid player UniqueNetId",
                         Warning,(FName)0x0);
            }
            FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_70);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_108);
          if (!bVar5) {
            return;
          }
          goto LAB_14ec9db6f;
        }
      }
    }
    local_118 = 0;
    pwVar15 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
  }
  FFrame::KismetExecutionMessage(pwVar15,Warning,(FName)0x0);
LAB_14ec9db6f:
  OnQueryComplete(this);
  return;
}

// execCreateProxyObjectForInAppPurchaseGetKnownReceipts @ 14eca2980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInAppPurchaseReceiptsCallbackProxy::execCreateProxyObjectForInAppPurchaseGetKnownReceipts
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FUniqueNetId *pFVar2;
  APlayerController *this;
  bool bVar3;
  char cVar4;
  UObject *pUVar5;
  UInAppPurchaseReceiptsCallbackProxy *this_00;
  FModuleManager *this_01;
  FName *pFVar6;
  FOnlineSubsystemModule *pFVar7;
  IOnlineSubsystem *pIVar8;
  ULocalPlayer *this_02;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar9;
  TSharedRef<FUniqueNetId_const_,1> *pTVar10;
  FOnlineError *pFVar11;
  wchar_t *pwVar12;
  undefined1 auStack_f8 [32];
  TSharedRef<FUniqueNetId_const_,1> local_d8;
  APlayerController *local_c8;
  TSharedPtr<FUniqueNetId_const_,1> local_c0;
  longlong local_b0;
  TReferenceControllerBase<1> *local_a8;
  FOnlineError local_a0;
  FUniqueNetIdRepl local_60;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_c8 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  this = local_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = GetTransientPackageAsObject();
  this_00 = NewObject<UInAppPurchaseReceiptsCallbackProxy>(pUVar5);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_StrongRefOnFrame);
  ClearPreviousResult(this_00);
  if (this == (APlayerController *)0x0) {
    pwVar12 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state";
  }
  else {
    local_d8.Object = (FUniqueNetId *)AActor::GetWorld((AActor *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UWorld *)local_d8.Object != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_d8.Object);
    }
    FWeakObjectPtr::operator=(&(this_00->WorldPtr).WeakPtr,(FObjectPtr)&local_d8);
    local_d8.Object = (FUniqueNetId *)0x0;
    if (this->_padding_ == 0) {
      pwVar12 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state";
    }
    else {
      this_01 = FModuleManager::Get();
      pFVar6 = ::FName::FName((FName *)&local_c0,"OnlineSubsystem");
      bVar3 = FModuleManager::IsModuleLoaded(this_01,*pFVar6);
      if (bVar3) {
        pFVar6 = ::FName::FName((FName *)&local_c0,"OnlineSubsystem");
        pFVar7 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar6);
        cVar4 = (**(code **)(pFVar7->_padding_ + 0x70))(pFVar7,local_d8.Object);
        if (cVar4 != '\0') {
          local_d8.Object = (FUniqueNetId *)0x0;
          pIVar8 = IOnlineSubsystem::Get((FName *)&local_d8);
          if (pIVar8 != (IOnlineSubsystem *)0x0) {
            (**(code **)(pIVar8->_padding_ + 0x98))(pIVar8,&local_b0);
            if (local_b0 == 0) {
              local_d8.Object = (FUniqueNetId *)0x0;
              FFrame::KismetExecutionMessage
                        (L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
                         ,Warning,(FName)0x0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_a8);
            }
            else {
              this_02 = APlayerController::GetLocalPlayer(this);
              ULocalPlayer::GetUniqueNetIdFromCachedControllerId(this_02,&local_60);
              bVar3 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&local_60);
              if (bVar3) {
                pTVar9 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&local_60,&local_c0);
                pFVar2 = pTVar9->Object;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_c0.SharedReferenceCount.ReferenceController);
                pTVar10 = TSharedFromThis<FUniqueNetId,1>::AsShared
                                    ((TSharedFromThis<FUniqueNetId,1> *)&pFVar2->field_0x8,&local_d8
                                    );
                local_c0.Object = pTVar10->Object;
                local_c0.SharedReferenceCount.ReferenceController =
                     (pTVar10->SharedReferenceCount).ReferenceController;
                if (local_c0.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_c0.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                       (atomic<int>)
                       ((int)(local_c0.SharedReferenceCount.ReferenceController)->WeakReferenceCount
                       + 1);
                  UNLOCK();
                }
                pFVar11 = FOnlineError::FOnlineError(&local_a0,true);
                OnQueryReceiptsComplete
                          (this_00,pFVar11,(TWeakPtr<FUniqueNetId_const_,1> *)&local_c0);
                if (local_a0.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_a0.ErrorMessage.TextData.Reference + 0x10))();
                }
                if (local_a0.ErrorCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                   ) {
                  FMemory::Free(local_a0.ErrorCode.Data.AllocatorInstance.Data);
                }
                if (local_a0.ErrorRaw.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free(local_a0.ErrorRaw.Data.AllocatorInstance.Data);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_d8.SharedReferenceCount.ReferenceController);
              }
              else {
                local_d8.Object = (FUniqueNetId *)0x0;
                FFrame::KismetExecutionMessage
                          (L"UInAppPurchaseCallbackProxy::Trigger - Invalid player UniqueNetId",
                           Warning,(FName)0x0);
              }
              FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_60);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_a8);
            }
            goto LAB_14eca2c22;
          }
        }
      }
      pwVar12 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
    }
  }
  local_d8.Object = (FUniqueNetId *)0x0;
  FFrame::KismetExecutionMessage(pwVar12,Warning,(FName)0x0);
LAB_14eca2c22:
  *(UInAppPurchaseReceiptsCallbackProxy **)param_3 = this_00;
  return;
}

// execCreateProxyObjectForInAppPurchaseQueryOwnedProducts @ 14eca35d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInAppPurchaseReceiptsCallbackProxy::execCreateProxyObjectForInAppPurchaseQueryOwnedProducts
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  FUniqueNetId *pFVar4;
  code *pcVar5;
  APlayerController *this;
  bool bVar6;
  char cVar7;
  UObject *pUVar8;
  UInAppPurchaseReceiptsCallbackProxy *this_00;
  FModuleManager *this_01;
  FName *pFVar9;
  FOnlineSubsystemModule *pFVar10;
  IOnlineSubsystem *pIVar11;
  ULocalPlayer *this_02;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar12;
  TSharedRef<FUniqueNetId_const_,1> *pTVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  wchar_t *pwVar16;
  TReferenceControllerBase<1> *pTVar17;
  longlong *plVar18;
  undefined1 auStack_188 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  FDelegateAllocation local_160;
  APlayerController *local_150;
  longlong *local_148;
  TReferenceControllerBase<1> *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  FName local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  UWorld *local_100;
  UInAppPurchaseReceiptsCallbackProxy *local_f8;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  FName local_b8;
  FName local_b0;
  TSharedPtr<FUniqueNetId_const_,1> local_a8;
  TSharedPtr<FUniqueNetId_const_,1> local_98;
  TSharedRef<FUniqueNetId_const_,1> local_88;
  FUniqueNetIdRepl local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_150 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  this = local_150;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar8 = GetTransientPackageAsObject();
  this_00 = NewObject<UInAppPurchaseReceiptsCallbackProxy>(pUVar8);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_StrongRefOnFrame);
  ClearPreviousResult(this_00);
  if (this == (APlayerController *)0x0) {
    local_138 = 0;
    FFrame::KismetExecutionMessage
              (L"UInAppPurchaseCallbackProxy::Trigger - Invalid  player controller",Warning,
               (FName)0x0);
    goto LAB_14eca3a6f;
  }
  local_100 = AActor::GetWorld((AActor *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_100 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_100);
  }
  FWeakObjectPtr::operator=(&(this_00->WorldPtr).WeakPtr,(FObjectPtr)&local_100);
  if (this->_padding_ == 0) {
    local_130 = 0;
    pwVar16 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state";
LAB_14eca3a60:
    FFrame::KismetExecutionMessage(pwVar16,Warning,(FName)0x0);
  }
  else {
    local_128 = 0;
    this_01 = FModuleManager::Get();
    pFVar9 = ::FName::FName(&local_b8,"OnlineSubsystem");
    bVar6 = FModuleManager::IsModuleLoaded(this_01,*pFVar9);
    if (!bVar6) {
LAB_14eca3a52:
      local_108 = 0;
      pwVar16 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
      goto LAB_14eca3a60;
    }
    pFVar9 = ::FName::FName(&local_b0,"OnlineSubsystem");
    pFVar10 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar9);
    cVar7 = (**(code **)(pFVar10->_padding_ + 0x70))(pFVar10,0);
    if (cVar7 == '\0') goto LAB_14eca3a52;
    local_120.ComparisonIndex.Value = 0;
    local_120.Number = 0;
    pIVar11 = IOnlineSubsystem::Get(&local_120);
    if (pIVar11 == (IOnlineSubsystem *)0x0) goto LAB_14eca3a52;
    (**(code **)(pIVar11->_padding_ + 0x98))(pIVar11,&local_148);
    if (local_148 == (longlong *)0x0) {
      local_118 = 0;
      FFrame::KismetExecutionMessage
                (L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
                 ,Warning,(FName)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140)
      ;
    }
    else {
      this_02 = APlayerController::GetLocalPlayer(this);
      ULocalPlayer::GetUniqueNetIdFromCachedControllerId(this_02,&local_78);
      bVar6 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&local_78);
      if (bVar6) {
        plVar18 = local_148;
        if ((local_148 == (longlong *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar18 = local_148, bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = *(code **)(*plVar18 + 0x38);
        pTVar12 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&local_78,&local_a8);
        pFVar4 = pTVar12->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        pTVar13 = TSharedFromThis<FUniqueNetId,1>::AsShared
                            ((TSharedFromThis<FUniqueNetId,1> *)&pFVar4->field_0x8,&local_88);
        pTVar17 = (pTVar13->SharedReferenceCount).ReferenceController;
        pFVar4 = pTVar13->Object;
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
          UNLOCK();
        }
        local_168.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_160.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_168,(FWriteAccessScope *)&local_d8);
        local_c0 = &local_160;
        puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_160);
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy__V__TWeakPtr___CBVFUniqueNetId___00____6B_
          ;
          puVar14[2] = pTVar17;
          pTVar17 = (TReferenceControllerBase<1> *)0x0;
          puVar14[1] = pFVar4;
          uVar15 = FDelegateHandle::GenerateNewID();
          puVar14[3] = uVar15;
          *puVar14 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseReceiptsCallbackProxy____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy__V__TWeakPtr___CBVFUniqueNetId___00____6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_00 != (UInAppPurchaseReceiptsCallbackProxy *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          puVar14[4] = 0;
          local_f8 = this_00;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_00 != (UInAppPurchaseReceiptsCallbackProxy *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 4),(FObjectPtr)&local_f8);
          puVar14[5] = OnQueryReceiptsComplete;
        }
        if (local_d8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
        }
        pTVar12 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&local_78,&local_98);
        if ((pTVar12->Object == (FUniqueNetId *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = pTVar12->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        (*pcVar5)(plVar18,pFVar4,0,&local_168);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_168,(FWriteAccessScope *)&local_f0);
        if ((local_160.DelegateSize != 0) &&
           (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_160.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_160,0,0,0x10);
          local_160.DelegateSize = 0;
        }
        if (local_f0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
        }
        if (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_160.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar17->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar17->_padding_ + 8))(pTVar17,1);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_140);
        goto LAB_14eca3a6f;
      }
      local_110 = 0;
      FFrame::KismetExecutionMessage
                (L"UInAppPurchaseCallbackProxy::Trigger - Invalid player UniqueNetId",Warning,
                 (FName)0x0);
      FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140)
      ;
    }
  }
  OnQueryComplete(this_00);
LAB_14eca3a6f:
  *(UInAppPurchaseReceiptsCallbackProxy **)param_3 = this_00;
  return;
}

// execCreateProxyObjectForInAppPurchaseRestoreOwnedProducts @ 14eca3f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInAppPurchaseReceiptsCallbackProxy::execCreateProxyObjectForInAppPurchaseRestoreOwnedProducts
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  FUniqueNetId *pFVar4;
  code *pcVar5;
  APlayerController *this;
  bool bVar6;
  char cVar7;
  UObject *pUVar8;
  UInAppPurchaseReceiptsCallbackProxy *this_00;
  FModuleManager *this_01;
  FName *pFVar9;
  FOnlineSubsystemModule *pFVar10;
  IOnlineSubsystem *pIVar11;
  ULocalPlayer *this_02;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar12;
  TSharedRef<FUniqueNetId_const_,1> *pTVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  wchar_t *pwVar16;
  TReferenceControllerBase<1> *pTVar17;
  longlong *plVar18;
  undefined1 auStack_188 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  FDelegateAllocation local_160;
  APlayerController *local_150;
  longlong *local_148;
  TReferenceControllerBase<1> *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  FName local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  UWorld *local_100;
  UInAppPurchaseReceiptsCallbackProxy *local_f8;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  FName local_b8;
  FName local_b0;
  TSharedPtr<FUniqueNetId_const_,1> local_a8;
  TSharedPtr<FUniqueNetId_const_,1> local_98;
  TSharedRef<FUniqueNetId_const_,1> local_88;
  FUniqueNetIdRepl local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_150 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  this = local_150;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar8 = GetTransientPackageAsObject();
  this_00 = NewObject<UInAppPurchaseReceiptsCallbackProxy>(pUVar8);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_StrongRefOnFrame);
  ClearPreviousResult(this_00);
  if (this == (APlayerController *)0x0) {
    local_138 = 0;
    FFrame::KismetExecutionMessage
              (L"UInAppPurchaseCallbackProxy::Trigger - Invalid  player controller",Warning,
               (FName)0x0);
    goto LAB_14eca441f;
  }
  local_100 = AActor::GetWorld((AActor *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_100 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_100);
  }
  FWeakObjectPtr::operator=(&(this_00->WorldPtr).WeakPtr,(FObjectPtr)&local_100);
  if (this->_padding_ == 0) {
    local_130 = 0;
    pwVar16 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state";
LAB_14eca4410:
    FFrame::KismetExecutionMessage(pwVar16,Warning,(FName)0x0);
  }
  else {
    local_128 = 0;
    this_01 = FModuleManager::Get();
    pFVar9 = ::FName::FName(&local_b8,"OnlineSubsystem");
    bVar6 = FModuleManager::IsModuleLoaded(this_01,*pFVar9);
    if (!bVar6) {
LAB_14eca4402:
      local_108 = 0;
      pwVar16 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
      goto LAB_14eca4410;
    }
    pFVar9 = ::FName::FName(&local_b0,"OnlineSubsystem");
    pFVar10 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar9);
    cVar7 = (**(code **)(pFVar10->_padding_ + 0x70))(pFVar10,0);
    if (cVar7 == '\0') goto LAB_14eca4402;
    local_120.ComparisonIndex.Value = 0;
    local_120.Number = 0;
    pIVar11 = IOnlineSubsystem::Get(&local_120);
    if (pIVar11 == (IOnlineSubsystem *)0x0) goto LAB_14eca4402;
    (**(code **)(pIVar11->_padding_ + 0x98))(pIVar11,&local_148);
    if (local_148 == (longlong *)0x0) {
      local_118 = 0;
      FFrame::KismetExecutionMessage
                (L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
                 ,Warning,(FName)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140)
      ;
    }
    else {
      this_02 = APlayerController::GetLocalPlayer(this);
      ULocalPlayer::GetUniqueNetIdFromCachedControllerId(this_02,&local_78);
      bVar6 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&local_78);
      if (bVar6) {
        plVar18 = local_148;
        if ((local_148 == (longlong *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar18 = local_148, bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = *(code **)(*plVar18 + 0x38);
        pTVar12 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&local_78,&local_a8);
        pFVar4 = pTVar12->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        pTVar13 = TSharedFromThis<FUniqueNetId,1>::AsShared
                            ((TSharedFromThis<FUniqueNetId,1> *)&pFVar4->field_0x8,&local_88);
        pTVar17 = (pTVar13->SharedReferenceCount).ReferenceController;
        pFVar4 = pTVar13->Object;
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
          UNLOCK();
        }
        local_168.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_160.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_168,(FWriteAccessScope *)&local_d8);
        local_c0 = &local_160;
        puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_160);
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy__V__TWeakPtr___CBVFUniqueNetId___00____6B_
          ;
          puVar14[2] = pTVar17;
          pTVar17 = (TReferenceControllerBase<1> *)0x0;
          puVar14[1] = pFVar4;
          uVar15 = FDelegateHandle::GenerateNewID();
          puVar14[3] = uVar15;
          *puVar14 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseReceiptsCallbackProxy____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy__V__TWeakPtr___CBVFUniqueNetId___00____6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_00 != (UInAppPurchaseReceiptsCallbackProxy *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          puVar14[4] = 0;
          local_f8 = this_00;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_00 != (UInAppPurchaseReceiptsCallbackProxy *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 4),(FObjectPtr)&local_f8);
          puVar14[5] = OnQueryReceiptsComplete;
        }
        if (local_d8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
        }
        pTVar12 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&local_78,&local_98);
        if ((pTVar12->Object == (FUniqueNetId *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = pTVar12->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        (*pcVar5)(plVar18,pFVar4,1,&local_168);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_168,(FWriteAccessScope *)&local_f0);
        if ((local_160.DelegateSize != 0) &&
           (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_160.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_160,0,0,0x10);
          local_160.DelegateSize = 0;
        }
        if (local_f0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
        }
        if (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_160.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar17->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar17->_padding_ + 8))(pTVar17,1);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_140);
        goto LAB_14eca441f;
      }
      local_110 = 0;
      FFrame::KismetExecutionMessage
                (L"UInAppPurchaseCallbackProxy::Trigger - Invalid player UniqueNetId",Warning,
                 (FName)0x0);
      FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140)
      ;
    }
  }
  OnQueryComplete(this_00);
LAB_14eca441f:
  *(UInAppPurchaseReceiptsCallbackProxy **)param_3 = this_00;
  return;
}

