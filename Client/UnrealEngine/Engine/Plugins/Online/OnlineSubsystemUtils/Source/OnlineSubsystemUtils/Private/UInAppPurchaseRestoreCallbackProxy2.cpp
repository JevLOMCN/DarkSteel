// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 13

// StaticClass @ 14ec489a0

UClass * __cdecl UInAppPurchaseRestoreCallbackProxy2::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseRestoreCallbackProxy2",
               &Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.InnerSingleton,
               StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy2,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseRestoreCallbackProxy2>,
               InternalVTableHelperCtorCaller<UInAppPurchaseRestoreCallbackProxy2>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.InnerSingleton;
}

// UInAppPurchaseRestoreCallbackProxy2 @ 14ec53ed0

UInAppPurchaseRestoreCallbackProxy2 * __thiscall
UInAppPurchaseRestoreCallbackProxy2::UInAppPurchaseRestoreCallbackProxy2
          (UInAppPurchaseRestoreCallbackProxy2 *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInAppPurchaseRestoreCallbackProxy2__6B_;
  (this->PurchasingPlayer)._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SavedReceipts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedReceipts).ArrayNum = 0;
  (this->SavedReceipts).ArrayMax = 0;
  (this->PurchaseInterface).Object = (IOnlinePurchase *)0x0;
  (this->PurchaseInterface).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PurchasingPlayer)._padding_ = 0;
  (this->PurchasingPlayer)._padding_ = 0;
  *(undefined1 *)&(this->PurchasingPlayer)._padding_ = 0;
  (this->PurchasingPlayer).ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PurchasingPlayer).ReplicationBytes.ArrayNum = 0;
  (this->PurchasingPlayer).ReplicationBytes.ArrayMax = 0;
  return this;
}

// UInAppPurchaseRestoreCallbackProxy2 @ 14ec53f60

UInAppPurchaseRestoreCallbackProxy2 * __thiscall
UInAppPurchaseRestoreCallbackProxy2::UInAppPurchaseRestoreCallbackProxy2
          (UInAppPurchaseRestoreCallbackProxy2 *this,FObjectInitializer *param_1)

{
  FWeakObjectPtr local_res8 [2];
  undefined8 local_res18 [2];
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInAppPurchaseRestoreCallbackProxy2__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SavedReceipts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedReceipts).ArrayNum = 0;
  (this->SavedReceipts).ArrayMax = 0;
  (this->PurchaseInterface).Object = (IOnlinePurchase *)0x0;
  (this->PurchaseInterface).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PurchasingPlayer)._padding_ = 0;
  (this->PurchasingPlayer)._padding_ = 0;
  *(undefined1 *)&(this->PurchasingPlayer)._padding_ = 0;
  (this->PurchasingPlayer).ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PurchasingPlayer).ReplicationBytes.ArrayNum = 0;
  (this->PurchasingPlayer).ReplicationBytes.ArrayMax = 0;
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = 0;
  (this->PurchasingPlayer)._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  (this->WorldPtr).WeakPtr = local_res8[0];
  return this;
}

// ~UInAppPurchaseRestoreCallbackProxy2 @ 14ec57220

void __thiscall
UInAppPurchaseRestoreCallbackProxy2::~UInAppPurchaseRestoreCallbackProxy2
          (UInAppPurchaseRestoreCallbackProxy2 *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInAppPurchaseRestoreCallbackProxy2__6B_;
  FUniqueNetIdRepl::~FUniqueNetIdRepl(&this->PurchasingPlayer);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PurchaseInterface).SharedReferenceCount.ReferenceController);
  DestructItems<FInAppPurchaseRestoreInfo2,int>
            ((FInAppPurchaseRestoreInfo2 *)(this->SavedReceipts).AllocatorInstance.Data,
             (this->SavedReceipts).ArrayNum);
  pFVar1 = (this->SavedReceipts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// BeginDestroy @ 14ec60d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInAppPurchaseRestoreCallbackProxy2::BeginDestroy(UInAppPurchaseRestoreCallbackProxy2 *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UInAppPurchaseRestoreCallbackProxy2 **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// CreateProxyObjectForInAppPurchaseRestore @ 14ec6a5a0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInAppPurchaseRestoreCallbackProxy2 * __cdecl
UInAppPurchaseRestoreCallbackProxy2::CreateProxyObjectForInAppPurchaseRestore
          (TArray<FInAppPurchaseProductRequest2,TSizedDefaultAllocator<32>_> *param_1,
          APlayerController *param_2)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInAppPurchaseRestoreCallbackProxy2 *this;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  this = (UInAppPurchaseRestoreCallbackProxy2 *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  Trigger(this,param_1,param_2);
  return this;
}

// GetPrivateStaticClass @ 14ec78130

UClass * __cdecl UInAppPurchaseRestoreCallbackProxy2::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseRestoreCallbackProxy2",
               &Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.InnerSingleton,
               StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy2,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseRestoreCallbackProxy2>,
               InternalVTableHelperCtorCaller<UInAppPurchaseRestoreCallbackProxy2>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.InnerSingleton;
}

// OnInAppPurchaseRestoreComplete @ 14ec884b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInAppPurchaseRestoreCallbackProxy2::OnInAppPurchaseRestoreComplete
          (UInAppPurchaseRestoreCallbackProxy2 *this)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseRestoreCallbackProxy2::OnInAppPurchaseRestoreComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRestoreComplete>
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
        if (StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRestoreComplete ==
            (FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseRestoreCallbackProxy2::OnInAppPurchaseRestoreComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRestoreComplete>
             )0x0) {
          pFVar4 = ::FName::FName(&local_res8,
                                  "STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRestoreComplete")
          ;
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)
                     &StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRestoreComplete,
                     *pFVar4,L"FSimpleDelegateGraphTask.DelayInAppPurchaseRestoreComplete",
                     "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,
                     ST_int64,true,false,MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    FVar5 = StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRestoreComplete;
    if (StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRestoreComplete ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseRestoreCallbackProxy2::OnInAppPurchaseRestoreComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRestoreComplete>
         )0x0) {
      pFVar4 = ::FName::FName(&local_res8,
                              "STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRestoreComplete");
      FVar5 = (FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseRestoreCallbackProxy2::OnInAppPurchaseRestoreComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRestoreComplete>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseRestoreComplete,
                           *pFVar4,L"FSimpleDelegateGraphTask.DelayInAppPurchaseRestoreComplete",
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
      *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UInAppPurchaseRestoreCallbackProxy2::OnInAppPurchaseRestoreComplete'::`5'::<lambda_1>_>
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

// OnInAppPurchaseRestoreComplete_Delayed @ 14ec88770

void __thiscall
UInAppPurchaseRestoreCallbackProxy2::OnInAppPurchaseRestoreComplete_Delayed
          (UInAppPurchaseRestoreCallbackProxy2 *this)

{
  longlong lVar1;
  
  lVar1 = 0x28;
  if (this->bWasSuccessful == false) {
    lVar1 = 0x40;
  }
  FInAppPurchaseRestoreResult2::Broadcast
            ((FInAppPurchaseRestoreResult2 *)((longlong)&this->_padding_ + lVar1),
             this->SavedPurchaseStatus,&this->SavedReceipts);
  return;
}

// OnQueryReceiptsComplete @ 14ec8a460

/* WARNING: Removing unreachable block (ram,0x00014ec8a647) */
/* WARNING: Removing unreachable block (ram,0x00014ec8a594) */
/* WARNING: Removing unreachable block (ram,0x00014ec8a8f0) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInAppPurchaseRestoreCallbackProxy2::OnQueryReceiptsComplete
          (UInAppPurchaseRestoreCallbackProxy2 *this,FOnlineError *param_1)

{
  int *piVar1;
  int iVar2;
  IOnlinePurchase *pIVar3;
  FUniqueNetId *pFVar4;
  code *pcVar5;
  EInAppPurchaseStatus EVar6;
  bool bVar7;
  int iVar8;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar9;
  longlong lVar10;
  int *piVar11;
  FScriptContainerElement *this_00;
  TSharedPtr<FUniqueNetId_const_,1> local_58;
  
  if ((param_1->bSucceeded == false) && (param_1->Result != Success)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  this->bWasSuccessful = bVar7;
  EVar6 = PurchaseStatusFromOnlineError(param_1);
  pIVar3 = (this->PurchaseInterface).Object;
  this->SavedPurchaseStatus = EVar6;
  if ((pIVar3 == (IOnlinePurchase *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PurchaseInterface.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\InAppPurchaseRestoreCallbackProxy2.cpp"
                         ,0x49,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->PurchaseInterface).Object == (IOnlinePurchase *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar3 = (this->PurchaseInterface).Object;
  pcVar5 = *(code **)(pIVar3->_padding_ + 0x40);
  pTVar9 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&this->PurchasingPlayer,&local_58);
  if ((pTVar9->Object == (FUniqueNetId *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = pTVar9->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  (*pcVar5)(pIVar3,pFVar4);
  for (lVar10 = 0; lVar10 != 0; lVar10 = lVar10 + 0x30) {
    if (*(char *)(lVar10 + 0x18) == '\x06') {
      this->SavedPurchaseStatus = Restored;
    }
  }
  DestructItems<FInAppPurchaseRestoreInfo2,int>
            ((FInAppPurchaseRestoreInfo2 *)(this->SavedReceipts).AllocatorInstance.Data,
             (this->SavedReceipts).ArrayNum);
  piVar1 = &(this->SavedReceipts).ArrayMax;
  (this->SavedReceipts).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->SavedReceipts).AllocatorInstance,0,piVar1);
  }
  FFrame::KismetExecutionMessage
            (L"UInAppPurchaseRestoreCallbackProxy2::OnQueryReceiptsComplete - Iterating OutReceipts"
             ,Log,(FName)0x0);
  piVar11 = (int *)&DAT_00000028;
  do {
    if (piVar11 == (int *)&DAT_00000028) {
      OnInAppPurchaseRestoreComplete(this);
      DestructItems<FPurchaseReceipt,int>((FPurchaseReceipt *)0x0,0);
      return;
    }
    if ((char)piVar11[-4] == '\x06') {
      iVar8 = (this->SavedReceipts).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&(this->SavedReceipts).AllocatorInstance,piVar1);
      }
      (this->SavedReceipts).ArrayNum = iVar8 + 1;
      this_00 = (this->SavedReceipts).AllocatorInstance.Data + (longlong)iVar8 * 0x30;
      DefaultConstructItems<FInAppPurchaseRestoreInfo2,int>(this_00,1);
      FFrame::KismetExecutionMessage
                (L"UInAppPurchaseRestoreCallbackProxy2::OnQueryReceiptsComplete - Writing Receipt to savedreceipts"
                 ,Log,(FName)0x0);
      if ((*piVar11 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar10 = *(longlong *)(piVar11 + -2);
      if ((*(int *)(lVar10 + 0x38) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar10 = *(longlong *)(lVar10 + 0x30);
      iVar2 = *(int *)(lVar10 + 0x20);
      iVar8 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar8 = 0;
      }
      ::FString::AssignRange((FString *)(this_00 + 0x10),*(wchar_t **)(lVar10 + 0x18),iVar8);
      if ((*piVar11 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar10 = *(longlong *)(piVar11 + -2);
      if ((*(int *)(lVar10 + 0x38) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar10 = *(longlong *)(lVar10 + 0x30);
      iVar2 = *(int *)(lVar10 + 0x10);
      iVar8 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar8 = 0;
      }
      ::FString::AssignRange((FString *)this_00,*(wchar_t **)(lVar10 + 8),iVar8);
      if ((*piVar11 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar10 = *(longlong *)(piVar11 + -2);
      if ((*(int *)(lVar10 + 0x38) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar10 = *(longlong *)(lVar10 + 0x30);
      iVar2 = *(int *)(lVar10 + 0x30);
      iVar8 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar8 = 0;
      }
      ::FString::AssignRange((FString *)(this_00 + 0x20),*(wchar_t **)(lVar10 + 0x28),iVar8);
    }
    piVar11 = piVar11 + 0xc;
  } while( true );
}

// StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy2 @ 14ec99910

void __cdecl
UInAppPurchaseRestoreCallbackProxy2::StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy2(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Trigger @ 14ec9c880

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
UInAppPurchaseRestoreCallbackProxy2::Trigger
          (UInAppPurchaseRestoreCallbackProxy2 *this,
          TArray<FInAppPurchaseProductRequest2,TSizedDefaultAllocator<32>_> *param_1,
          APlayerController *param_2)

{
  TSharedPtr<IOnlinePurchase,1> *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FModuleManager *this_01;
  FName *pFVar4;
  FOnlineSubsystemModule *pFVar5;
  IOnlineSubsystem *pIVar6;
  undefined8 *puVar7;
  ULocalPlayer *this_02;
  FUniqueNetIdRepl *this_03;
  FUniqueNetId *pFVar8;
  TSharedRef<FUniqueNetId_const_,1> *pTVar9;
  IOnlinePurchase *pIVar10;
  ulong64 uVar11;
  wchar_t *pwVar12;
  undefined1 auStack_e8 [32];
  FName local_c8;
  FDestructionSentinel local_c0;
  undefined1 local_a8 [16];
  int local_98;
  undefined1 local_78 [24];
  undefined1 *local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  this->bWasSuccessful = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  local_c0.AccessType = Reader;
  local_c0._4_4_ = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_c8,(FObjectPtr)&local_c0);
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)local_c8;
  if (param_2 == (APlayerController *)0x0) {
    return;
  }
  local_c0._0_8_ = AActor::GetWorld((AActor *)param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UWorld *)local_c0._0_8_ != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c0._0_8_);
  }
  FWeakObjectPtr::operator=(&(this->WorldPtr).WeakPtr,(FObjectPtr)&local_c0);
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if (param_2->_padding_ == 0) {
    pwVar12 = L"UInAppPurchaseRestoreCallbackProxy2::Trigger - Invalid player state";
  }
  else {
    this_01 = FModuleManager::Get();
    pFVar4 = ::FName::FName((FName *)&local_c0,"OnlineSubsystem");
    bVar2 = FModuleManager::IsModuleLoaded(this_01,*pFVar4);
    if (bVar2) {
      pFVar4 = ::FName::FName((FName *)&local_c0,"OnlineSubsystem");
      pFVar5 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar4);
      cVar3 = (**(code **)(pFVar5->_padding_ + 0x70))(pFVar5,0);
      if (cVar3 != '\0') {
        local_c8.ComparisonIndex.Value = 0;
        local_c8.Number = 0;
        pIVar6 = IOnlineSubsystem::Get(&local_c8);
        if (pIVar6 != (IOnlineSubsystem *)0x0) {
          puVar7 = (undefined8 *)(**(code **)(pIVar6->_padding_ + 0x98))(pIVar6,&local_c0);
          this_00 = &this->PurchaseInterface;
          if (this_00 != (TSharedPtr<IOnlinePurchase,1> *)puVar7) {
            this_00->Object = (IOnlinePurchase *)*puVar7;
            *puVar7 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->PurchaseInterface).SharedReferenceCount,
                       (FSharedReferencer<1> *)(puVar7 + 1));
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_c0.Accessor);
          if (this_00->Object != (IOnlinePurchase *)0x0) {
            this_02 = APlayerController::GetLocalPlayer(param_2);
            this_03 = ULocalPlayer::GetUniqueNetIdFromCachedControllerId
                                (this_02,(FUniqueNetIdRepl *)local_a8);
            pFVar8 = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)this_03);
            pTVar9 = TSharedFromThis<FUniqueNetId,1>::AsShared
                               ((TSharedFromThis<FUniqueNetId,1> *)&pFVar8->field_0x8,
                                (TSharedRef<FUniqueNetId_const_,1> *)&local_c0);
            FUniqueNetIdRepl::FUniqueNetIdRepl((FUniqueNetIdRepl *)local_78,pTVar9);
            FUniqueNetIdRepl::operator=(&this->PurchasingPlayer,(FUniqueNetIdRepl *)local_78);
            FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)local_78);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_c0.Accessor);
            FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)local_a8);
            pIVar10 = TSharedPtr<IOnlinePurchase,1>::operator->(this_00);
            local_a8._0_8_ = (atomic<unsigned___int64>)0x0;
            local_a8._8_8_ = (undefined8 *)0x0;
            local_98 = 0;
            pcVar1 = *(code **)(pIVar10->_padding_ + 0x38);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                       (FWriteAccessScope *)local_78);
            local_60 = local_a8 + 8;
            puVar7 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(local_a8 + 8))
            ;
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = &
                        ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar11 = FDelegateHandle::GenerateNewID();
              puVar7[2] = uVar11;
              *puVar7 = &
                        ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseRestoreCallbackProxy2____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              puVar7[3] = 0;
              local_c0._0_8_ = this;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_c0);
              puVar7[4] = OnQueryReceiptsComplete;
            }
            if (local_78[0x10] == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                        ((FMRSWRecursiveAccessDetector *)local_78._8_8_,
                         (FDestructionSentinel *)local_78);
            }
            pFVar8 = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)&this->PurchasingPlayer);
            (*pcVar1)(pIVar10,pFVar8,1,local_a8);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                       (FWriteAccessScope *)&local_c0);
            if ((local_98 != 0) && ((undefined8 *)local_a8._8_8_ != (undefined8 *)0x0)) {
              (*(code *)**(undefined8 **)local_a8._8_8_)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)(local_a8 + 8),0,0,0x10);
              local_98 = 0;
            }
            if (local_c0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
            }
            if ((undefined8 *)local_a8._8_8_ != (undefined8 *)0x0) {
              FMemory::Free((void *)local_a8._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_a8);
            return;
          }
          pwVar12 = 
          L"UInAppPurchaseRestoreCallbackProxy2::Trigger - In-App Purchases are not supported by Online Subsystem"
          ;
          goto LAB_14ec9cbbd;
        }
      }
    }
    pwVar12 = 
    L"UInAppPurchaseRestoreCallbackProxy2::Trigger - Invalid or uninitialized OnlineSubsystem";
  }
LAB_14ec9cbbd:
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  FFrame::KismetExecutionMessage(pwVar12,Warning,(FName)0x0);
  this->bWasSuccessful = false;
  OnInAppPurchaseRestoreComplete(this);
  return;
}

// execCreateProxyObjectForInAppPurchaseRestore @ 14eca3aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInAppPurchaseRestoreCallbackProxy2::execCreateProxyObjectForInAppPurchaseRestore
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *this;
  FProperty *pFVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  APlayerController *this_00;
  bool bVar5;
  char cVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UWorld *this_01;
  FModuleManager *this_02;
  FName *pFVar9;
  FOnlineSubsystemModule *pFVar10;
  IOnlineSubsystem *pIVar11;
  undefined8 *puVar12;
  ULocalPlayer *this_03;
  FUniqueNetIdRepl *this_04;
  FUniqueNetId *pFVar13;
  TSharedRef<FUniqueNetId_const_,1> *pTVar14;
  IOnlinePurchase *pIVar15;
  ulong64 uVar16;
  wchar_t *pwVar17;
  longlong *plVar18;
  undefined1 auStack_188 [32];
  FName local_168;
  FDestructionSentinel local_160;
  APlayerController *local_148;
  FInAppPurchaseProductRequest2 *local_140;
  undefined8 local_138;
  undefined1 local_128 [128];
  undefined1 local_a8 [16];
  int local_98;
  undefined1 local_78 [24];
  undefined1 *local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_140 = (FInAppPurchaseProductRequest2 *)0x0;
  local_138 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  local_148 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  this_00 = local_148;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_128,pUVar8);
  local_128._8_8_ = pUVar7;
  this_01 = (UWorld *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
  if (local_128._64_8_ != 0) {
    plVar18 = (longlong *)(local_128 + 0x50);
    if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_128._104_8_;
    }
    (**(code **)(*plVar18 + 0x10))(plVar18);
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_01,RF_StrongRefOnFrame);
  *(bool *)&(this_01->NetworkManager).field0_0x0 = false;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  local_160._0_8_ = (UWorld *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_168,(FObjectPtr)&local_160);
  *(FName *)((longlong)&(this_01->NetworkManager).field0_0x0 + 4) = local_168;
  if (this_00 == (APlayerController *)0x0) goto LAB_14eca3f17;
  local_160._0_8_ = AActor::GetWorld((AActor *)this_00);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UWorld *)local_160._0_8_ != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_160._0_8_);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)((longlong)&(this_01->NetworkManager).field0_0x0 + 4),
             (FObjectPtr)&local_160);
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  if (this_00->_padding_ == 0) {
    pwVar17 = L"UInAppPurchaseRestoreCallbackProxy2::Trigger - Invalid player state";
  }
  else {
    this_02 = FModuleManager::Get();
    pFVar9 = ::FName::FName((FName *)&local_160,"OnlineSubsystem");
    bVar5 = FModuleManager::IsModuleLoaded(this_02,*pFVar9);
    if (bVar5) {
      pFVar9 = ::FName::FName((FName *)&local_160,"OnlineSubsystem");
      pFVar10 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar9);
      cVar6 = (**(code **)(pFVar10->_padding_ + 0x70))(pFVar10,0);
      if (cVar6 != '\0') {
        local_168.ComparisonIndex.Value = 0;
        local_168.Number = 0;
        pIVar11 = IOnlineSubsystem::Get(&local_168);
        if (pIVar11 != (IOnlineSubsystem *)0x0) {
          puVar12 = (undefined8 *)(**(code **)(pIVar11->_padding_ + 0x98))(pIVar11,&local_160);
          this = &(this_01->ExtraReferencedObjects).ArrayNum;
          if (this != (int *)puVar12) {
            uVar2 = *puVar12;
            (this_01->ExtraReferencedObjects).ArrayNum = (int)uVar2;
            (this_01->ExtraReferencedObjects).ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
            *puVar12 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)&this_01->PerModuleDataObjects,
                       (FSharedReferencer<1> *)(puVar12 + 1));
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_160.Accessor);
          lVar3._0_4_ = (this_01->ExtraReferencedObjects).ArrayNum;
          lVar3._4_4_ = (this_01->ExtraReferencedObjects).ArrayMax;
          if (lVar3 != 0) {
            this_03 = APlayerController::GetLocalPlayer(this_00);
            this_04 = ULocalPlayer::GetUniqueNetIdFromCachedControllerId
                                (this_03,(FUniqueNetIdRepl *)local_a8);
            pFVar13 = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)this_04);
            pTVar14 = TSharedFromThis<FUniqueNetId,1>::AsShared
                                ((TSharedFromThis<FUniqueNetId,1> *)&pFVar13->field_0x8,
                                 (TSharedRef<FUniqueNetId_const_,1> *)&local_160);
            FUniqueNetIdRepl::FUniqueNetIdRepl((FUniqueNetIdRepl *)local_78,pTVar14);
            FUniqueNetIdRepl::operator=
                      ((FUniqueNetIdRepl *)&(this_01->PerModuleDataObjects).ArrayNum,
                       (FUniqueNetIdRepl *)local_78);
            FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)local_78);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_160.Accessor);
            FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)local_a8);
            pIVar15 = TSharedPtr<IOnlinePurchase,1>::operator->
                                ((TSharedPtr<IOnlinePurchase,1> *)this);
            local_a8._0_8_ = (atomic<unsigned___int64>)0x0;
            local_a8._8_8_ = (undefined8 *)0x0;
            local_98 = 0;
            pcVar4 = *(code **)(pIVar15->_padding_ + 0x38);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                       (FWriteAccessScope *)local_78);
            local_60 = local_a8 + 8;
            puVar12 = UE::Core::Private::DelegateAllocate
                                (0x28,(FDelegateAllocation *)(local_a8 + 8));
            if (puVar12 != (undefined8 *)0x0) {
              *puVar12 = &
                         ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar16 = FDelegateHandle::GenerateNewID();
              puVar12[2] = uVar16;
              *puVar12 = &
                         ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseRestoreCallbackProxy2____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_01);
              }
              puVar12[3] = 0;
              local_160._0_8_ = this_01;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_01);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_160);
              puVar12[4] = OnQueryReceiptsComplete;
            }
            if (local_78[0x10] == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                        ((FMRSWRecursiveAccessDetector *)local_78._8_8_,
                         (FDestructionSentinel *)local_78);
            }
            pFVar13 = FUniqueNetIdWrapper::operator*
                                ((FUniqueNetIdWrapper *)&(this_01->PerModuleDataObjects).ArrayNum);
            (*pcVar4)(pIVar15,pFVar13,1,local_a8);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                       (FWriteAccessScope *)&local_160);
            if ((local_98 != 0) && ((undefined8 *)local_a8._8_8_ != (undefined8 *)0x0)) {
              (*(code *)**(undefined8 **)local_a8._8_8_)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)(local_a8 + 8),0,0,0x10);
              local_98 = 0;
            }
            if (local_160.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
            }
            if ((undefined8 *)local_a8._8_8_ != (undefined8 *)0x0) {
              FMemory::Free((void *)local_a8._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_a8);
            goto LAB_14eca3f17;
          }
          pwVar17 = 
          L"UInAppPurchaseRestoreCallbackProxy2::Trigger - In-App Purchases are not supported by Online Subsystem"
          ;
          goto LAB_14eca3eff;
        }
      }
    }
    pwVar17 = 
    L"UInAppPurchaseRestoreCallbackProxy2::Trigger - Invalid or uninitialized OnlineSubsystem";
  }
LAB_14eca3eff:
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  FFrame::KismetExecutionMessage(pwVar17,Warning,(FName)0x0);
  *(bool *)&(this_01->NetworkManager).field0_0x0 = false;
  OnInAppPurchaseRestoreComplete((UInAppPurchaseRestoreCallbackProxy2 *)this_01);
LAB_14eca3f17:
  *(UWorld **)param_3 = this_01;
  DestructItems<FInAppPurchaseProductRequest2,int>(local_140,(int)local_138);
  if (local_140 != (FInAppPurchaseProductRequest2 *)0x0) {
    FMemory::Free(local_140);
  }
  return;
}

