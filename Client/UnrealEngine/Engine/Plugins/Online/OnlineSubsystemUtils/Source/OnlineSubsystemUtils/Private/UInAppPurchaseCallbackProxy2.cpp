// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 20

// StaticClass @ 14ec47e60

UClass * __cdecl UInAppPurchaseCallbackProxy2::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseCallbackProxy2",
               &Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2.InnerSingleton,
               StaticRegisterNativesUInAppPurchaseCallbackProxy2,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseCallbackProxy2>,
               InternalVTableHelperCtorCaller<UInAppPurchaseCallbackProxy2>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2.InnerSingleton;
}

// UInAppPurchaseCallbackProxy2 @ 14ec53ae0

UInAppPurchaseCallbackProxy2 * __thiscall
UInAppPurchaseCallbackProxy2::UInAppPurchaseCallbackProxy2
          (UInAppPurchaseCallbackProxy2 *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInAppPurchaseCallbackProxy2__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  *(undefined8 *)&this->InAppPurchaseCompleteDelegate = 0;
  *(undefined8 *)&(this->InAppPurchaseCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->InAppPurchaseCompleteDelegate).field_0x10 = 0;
  (this->InAppPurchaseCompleteDelegateHandle).ID = 0;
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)0x0;
  this->bWasSuccessful = false;
  (this->SavedReceipts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedReceipts).ArrayNum = 0;
  (this->SavedReceipts).ArrayMax = 0;
  (this->PurchasingPlayer).Object = (FUniqueNetId *)0x0;
  (this->PurchasingPlayer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PurchaseInterface).Object = (IOnlinePurchase *)0x0;
  (this->PurchaseInterface).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UInAppPurchaseCallbackProxy2 @ 14ec53b70

UInAppPurchaseCallbackProxy2 * __thiscall
UInAppPurchaseCallbackProxy2::UInAppPurchaseCallbackProxy2
          (UInAppPurchaseCallbackProxy2 *this,FObjectInitializer *param_1)

{
  FWeakObjectPtr local_res8 [2];
  undefined8 local_res18 [2];
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInAppPurchaseCallbackProxy2__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  *(undefined8 *)&this->InAppPurchaseCompleteDelegate = 0;
  *(undefined8 *)&(this->InAppPurchaseCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->InAppPurchaseCompleteDelegate).field_0x10 = 0;
  (this->InAppPurchaseCompleteDelegateHandle).ID = 0;
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)0x0;
  this->bWasSuccessful = false;
  (this->SavedReceipts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedReceipts).ArrayNum = 0;
  (this->SavedReceipts).ArrayMax = 0;
  (this->PurchasingPlayer).Object = (FUniqueNetId *)0x0;
  (this->PurchasingPlayer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PurchaseInterface).Object = (IOnlinePurchase *)0x0;
  (this->PurchaseInterface).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  (this->WorldPtr).WeakPtr = local_res8[0];
  this->bWasSuccessful = false;
  this->SavedPurchaseStatus = Failed;
  return this;
}

// ~UInAppPurchaseCallbackProxy2 @ 14ec56f70

void __thiscall
UInAppPurchaseCallbackProxy2::~UInAppPurchaseCallbackProxy2(UInAppPurchaseCallbackProxy2 *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInAppPurchaseCallbackProxy2__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PurchaseInterface).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PurchasingPlayer).SharedReferenceCount.ReferenceController);
  DestructItems<FInAppPurchaseReceiptInfo2,int>
            ((FInAppPurchaseReceiptInfo2 *)(this->SavedReceipts).AllocatorInstance.Data,
             (this->SavedReceipts).ArrayNum);
  pFVar1 = (this->SavedReceipts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->InAppPurchaseCompleteDelegate);
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

// BeginDestroy @ 14ec60d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UInAppPurchaseCallbackProxy2::BeginDestroy(UInAppPurchaseCallbackProxy2 *this)

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
    while (*(UInAppPurchaseCallbackProxy2 **)FVar3 != this) {
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

// CreateProxyObjectForInAppPurchase @ 14ec6a1b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInAppPurchaseCallbackProxy2 * __cdecl
UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchase
          (APlayerController *param_1,FInAppPurchaseProductRequest2 *param_2)

{
  UObject *pUVar1;
  UInAppPurchaseCallbackProxy2 *this;
  
  pUVar1 = GetTransientPackageAsObject();
  this = NewObject<UInAppPurchaseCallbackProxy2>(pUVar1);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  Trigger(this,param_1,param_2);
  return this;
}

// CreateProxyObjectForInAppPurchaseQueryOwned @ 14ec6a500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInAppPurchaseCallbackProxy2 * __cdecl
UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseQueryOwned
          (APlayerController *param_1)

{
  UObject *pUVar1;
  UInAppPurchaseCallbackProxy2 *this;
  
  pUVar1 = GetTransientPackageAsObject();
  this = NewObject<UInAppPurchaseCallbackProxy2>(pUVar1);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  TriggerGetOwnedPurchases(this,param_1);
  return this;
}

// CreateProxyObjectForInAppPurchaseUnprocessedPurchases @ 14ec6a6c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInAppPurchaseCallbackProxy2 * __cdecl
UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseUnprocessedPurchases
          (APlayerController *param_1)

{
  UObject *pUVar1;
  UInAppPurchaseCallbackProxy2 *this;
  
  pUVar1 = GetTransientPackageAsObject();
  this = NewObject<UInAppPurchaseCallbackProxy2>(pUVar1);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  TriggerGetUnprocessedPurchases(this,param_1);
  return this;
}

// GetPrivateStaticClass @ 14ec77dc0

UClass * __cdecl UInAppPurchaseCallbackProxy2::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseCallbackProxy2",
               &Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2.InnerSingleton,
               StaticRegisterNativesUInAppPurchaseCallbackProxy2,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseCallbackProxy2>,
               InternalVTableHelperCtorCaller<UInAppPurchaseCallbackProxy2>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2.InnerSingleton;
}

// OnCheckoutComplete @ 14ec84dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInAppPurchaseCallbackProxy2::OnCheckoutComplete
          (UInAppPurchaseCallbackProxy2 *this,FOnlineError *param_1,
          TSharedRef<FPurchaseReceipt,1> *param_2)

{
  TArray<FInAppPurchaseReceiptInfo2,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  EInAppPurchaseStatus EVar6;
  bool bVar7;
  int iVar8;
  IOnlinePurchase *pIVar9;
  FUniqueNetId *pFVar10;
  FString *pFVar11;
  int *piVar12;
  FPurchaseReceipt *pFVar13;
  FScriptContainerElement *this_00;
  int iVar14;
  int iVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FPurchaseReceipt *local_50;
  undefined8 local_48;
  
  this->bWasSuccessful = false;
  local_50 = (FPurchaseReceipt *)0x0;
  local_48 = 0;
  if ((param_1->bSucceeded == false) && (param_1->Result != Success)) {
    EVar6 = PurchaseStatusFromOnlineError(param_1);
    this->SavedPurchaseStatus = EVar6;
  }
  else {
    EVar6 = PurchaseStatusFromOnlineError(param_1);
    this->SavedPurchaseStatus = EVar6;
    if ((this->PurchaseInterface).Object != (IOnlinePurchase *)0x0) {
      if ((this->PurchasingPlayer).Object == (FUniqueNetId *)0x0) {
        FFrame::KismetExecutionMessage
                  (L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Invalid or uninitialized PurchasingPlayer"
                   ,Warning,(FName)0x0);
      }
      else {
        pIVar9 = TSharedPtr<IOnlinePurchase,1>::operator->(&this->PurchaseInterface);
        pcVar4 = *(code **)(pIVar9->_padding_ + 0x40);
        pFVar10 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>
                            (&this->PurchasingPlayer);
        (*pcVar4)(pIVar9,pFVar10,&local_50);
        iVar15 = (int)local_48;
        pFVar11 = &local_50->TransactionId;
        pFVar13 = local_50 + (int)local_48;
        while( true ) {
          if ((int)local_48 != iVar15) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FPurchaseReceipt,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if ((FPurchaseReceipt *)((longlong)(pFVar11 + -1) + 8) == pFVar13) break;
          if ((*(EPurchaseTransactionState *)(pFVar11 + 1) == Purchased) ||
             (*(EPurchaseTransactionState *)(pFVar11 + 1) == Restored)) {
            FFrame::KismetExecutionMessage
                      (L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - FinalizingPurchase",
                       Warning,(FName)0x0);
            if (((this->PurchaseInterface).Object == (IOnlinePurchase *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pIVar9 = (this->PurchaseInterface).Object;
            pcVar4 = *(code **)(pIVar9->_padding_ + 0x28);
            if (((this->PurchasingPlayer).Object == (FUniqueNetId *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (*pcVar4)(pIVar9,(this->PurchasingPlayer).Object,pFVar11);
            this->bWasSuccessful = true;
          }
          pFVar11 = pFVar11 + 3;
        }
      }
    }
  }
  FFrame::KismetExecutionMessage
            (L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Emptying savedreceipts",Warning,
             (FName)0x0);
  pTVar1 = &this->SavedReceipts;
  DestructItems<FInAppPurchaseReceiptInfo2,int>
            ((FInAppPurchaseReceiptInfo2 *)(pTVar1->AllocatorInstance).Data,
             (this->SavedReceipts).ArrayNum);
  iVar15 = 0;
  (this->SavedReceipts).ArrayNum = 0;
  if ((this->SavedReceipts).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&pTVar1->AllocatorInstance,0,&(this->SavedReceipts).ArrayMax);
  }
  FFrame::KismetExecutionMessage
            (L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Iterating OutReceipts",Warning,
             (FName)0x0);
  iVar5 = (int)local_48;
  piVar12 = &(local_50->ReceiptOffers).ArrayNum;
  pFVar13 = local_50 + (int)local_48;
  do {
    if ((int)local_48 != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPurchaseReceipt,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if ((FPurchaseReceipt *)(piVar12 + -10) == pFVar13) {
      FFrame::KismetExecutionMessage
                (L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Calling OnPurchaseCOmplete",
                 Warning,(FName)0x0);
      OnPurchaseComplete(this);
      DestructItems<FPurchaseReceipt,int>(local_50,(int)local_48);
      if (local_50 != (FPurchaseReceipt *)0x0) {
        FMemory::Free(local_50);
      }
      return;
    }
    if (((char)piVar12[-4] == '\x02') || ((char)piVar12[-4] == '\x06')) {
      iVar8 = (this->SavedReceipts).ArrayNum;
      if (iVar8 == (this->SavedReceipts).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&pTVar1->AllocatorInstance,&(this->SavedReceipts).ArrayMax);
      }
      (this->SavedReceipts).ArrayNum = iVar8 + 1;
      this_00 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x40;
      DefaultConstructItems<FInAppPurchaseReceiptInfo2,int>(this_00,1);
      FFrame::KismetExecutionMessage
                (L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Writing Receipt to savedreceipts"
                 ,Warning,(FName)0x0);
      if ((*piVar12 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (((TArray<FPurchaseReceipt::FReceiptOfferEntry,TSizedDefaultAllocator<32>_> *)
                (piVar12 + -2))->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + 0x38) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(pFVar2 + 0x30);
      iVar8 = *(int *)(lVar3 + 0x20);
      iVar14 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar14 = iVar15;
      }
      ::FString::AssignRange((FString *)(this_00 + 0x10),*(wchar_t **)(lVar3 + 0x18),iVar14);
      if ((*piVar12 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (((TArray<FPurchaseReceipt::FReceiptOfferEntry,TSizedDefaultAllocator<32>_> *)
                (piVar12 + -2))->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + 0x38) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(pFVar2 + 0x30);
      iVar8 = *(int *)(lVar3 + 0x10);
      iVar14 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar14 = iVar15;
      }
      ::FString::AssignRange((FString *)this_00,*(wchar_t **)(lVar3 + 8),iVar14);
      if ((*piVar12 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (((TArray<FPurchaseReceipt::FReceiptOfferEntry,TSizedDefaultAllocator<32>_> *)
                (piVar12 + -2))->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + 0x38) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(pFVar2 + 0x30);
      iVar8 = *(int *)(lVar3 + 0x30);
      iVar14 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar14 = iVar15;
      }
      ::FString::AssignRange((FString *)(this_00 + 0x20),*(wchar_t **)(lVar3 + 0x28),iVar14);
    }
    piVar12 = piVar12 + 0xc;
  } while( true );
}

// OnInAppPurchaseComplete_Delayed @ 14ec87f70

void __thiscall
UInAppPurchaseCallbackProxy2::OnInAppPurchaseComplete_Delayed(UInAppPurchaseCallbackProxy2 *this)

{
  longlong lVar1;
  
  lVar1 = 0x28;
  if (this->bWasSuccessful == false) {
    lVar1 = 0x40;
  }
  FInAppPurchaseResult2::Broadcast
            ((FInAppPurchaseResult2 *)((longlong)&this->_padding_ + lVar1),this->SavedPurchaseStatus
             ,&this->SavedReceipts);
  return;
}

// OnPurchaseComplete @ 14ec895f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UInAppPurchaseCallbackProxy2::OnPurchaseComplete(UInAppPurchaseCallbackProxy2 *this)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseCallbackProxy2::OnPurchaseComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete>
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
        if (StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete ==
            (FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseCallbackProxy2::OnPurchaseComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete>
             )0x0) {
          pFVar4 = ::FName::FName(&local_res8,
                                  "STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)
                     &StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete,*pFVar4,
                     L"FSimpleDelegateGraphTask.DelayInAppPurchaseComplete",
                     "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,
                     ST_int64,true,false,MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    FVar5 = StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete;
    if (StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseCallbackProxy2::OnPurchaseComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete>
         )0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete"
                             );
      FVar5 = (FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseCallbackProxy2::OnPurchaseComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete,*pFVar4
                           ,L"FSimpleDelegateGraphTask.DelayInAppPurchaseComplete",
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
      *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UInAppPurchaseCallbackProxy2::OnPurchaseComplete'::`5'::<lambda_1>_>
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

// OnQueryReceiptsComplete @ 14ec89e60

void __thiscall
UInAppPurchaseCallbackProxy2::OnQueryReceiptsComplete
          (UInAppPurchaseCallbackProxy2 *this,FOnlineError *param_1)

{
  int *piVar1;
  bool bVar2;
  EInAppPurchaseStatus EVar3;
  
  DestructItems<FInAppPurchaseReceiptInfo2,int>
            ((FInAppPurchaseReceiptInfo2 *)(this->SavedReceipts).AllocatorInstance.Data,
             (this->SavedReceipts).ArrayNum);
  piVar1 = &(this->SavedReceipts).ArrayMax;
  (this->SavedReceipts).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->SavedReceipts).AllocatorInstance,0,piVar1);
  }
  if ((param_1->bSucceeded == false) && (param_1->Result != Success)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  this->bWasSuccessful = bVar2;
  EVar3 = PurchaseStatusFromOnlineError(param_1);
  this->SavedPurchaseStatus = EVar3;
  OnPurchaseComplete(this);
  return;
}

// StaticRegisterNativesUInAppPurchaseCallbackProxy2 @ 14ec997d0

void __cdecl UInAppPurchaseCallbackProxy2::StaticRegisterNativesUInAppPurchaseCallbackProxy2(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Trigger @ 14ec9c0d0

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
UInAppPurchaseCallbackProxy2::Trigger
          (UInAppPurchaseCallbackProxy2 *this,APlayerController *param_1,
          FInAppPurchaseProductRequest2 *param_2)

{
  TSharedPtr<IOnlinePurchase,1> *this_00;
  TSharedPtr<FUniqueNetId_const_,1> *this_01;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  FModuleManager *this_02;
  FName *pFVar5;
  FOnlineSubsystemModule *pFVar6;
  IOnlineSubsystem *pIVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  ULocalPlayer *this_03;
  FUniqueNetIdRepl *this_04;
  FUniqueNetId *pFVar10;
  TSharedRef<FUniqueNetId_const_,1> *pTVar11;
  IOnlinePurchase *pIVar12;
  wchar_t *pwVar13;
  undefined1 auStackY_168 [32];
  FName local_138;
  FDestructionSentinel local_130;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  TSharedPtr<FUniqueNetId_const_,1> local_100;
  undefined1 local_e8 [32];
  undefined1 local_c8 [24];
  undefined8 uStack_b0;
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  void *local_88;
  ulonglong local_80;
  undefined1 local_78 [24];
  FDelegateAllocation *local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this->bFailedToEvenSubmit = true;
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  local_130.AccessType = Reader;
  local_130._4_4_ = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_138,(FObjectPtr)&local_130);
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)local_138;
  if (param_1 == (APlayerController *)0x0) {
    return;
  }
  local_130._0_8_ = AActor::GetWorld((AActor *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UWorld *)local_130._0_8_ != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_130._0_8_);
  }
  FWeakObjectPtr::operator=(&(this->WorldPtr).WeakPtr,(FObjectPtr)&local_130);
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  if (param_1->_padding_ == 0) {
    pwVar13 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state";
  }
  else {
    this_02 = FModuleManager::Get();
    pFVar5 = ::FName::FName((FName *)&local_130,"OnlineSubsystem");
    bVar3 = FModuleManager::IsModuleLoaded(this_02,*pFVar5);
    if (bVar3) {
      pFVar5 = ::FName::FName((FName *)&local_130,"OnlineSubsystem");
      pFVar6 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar5);
      cVar4 = (**(code **)(pFVar6->_padding_ + 0x70))(pFVar6,0);
      if (cVar4 != '\0') {
        local_138.ComparisonIndex.Value = 0;
        local_138.Number = 0;
        pIVar7 = IOnlineSubsystem::Get(&local_138);
        if (pIVar7 != (IOnlineSubsystem *)0x0) {
          puVar8 = (undefined8 *)(**(code **)(pIVar7->_padding_ + 0x98))(pIVar7,&local_130);
          this_00 = &this->PurchaseInterface;
          if (this_00 != (TSharedPtr<IOnlinePurchase,1> *)puVar8) {
            this_00->Object = (IOnlinePurchase *)*puVar8;
            *puVar8 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->PurchaseInterface).SharedReferenceCount,
                       (FSharedReferencer<1> *)(puVar8 + 1));
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_130.Accessor);
          if (this_00->Object != (IOnlinePurchase *)0x0) {
            this->bFailedToEvenSubmit = false;
            local_118 = (undefined1  [8])0x0;
            local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_110.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
                       (FWriteAccessScope *)local_78);
            local_60 = &local_110;
            puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_110);
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = &
                        ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar9 = FDelegateHandle::GenerateNewID();
              puVar8[2] = uVar9;
              *puVar8 = &
                        ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseCallbackProxy2____A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              puVar8[3] = 0;
              local_130._0_8_ = this;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_130);
              puVar8[4] = OnCheckoutComplete;
            }
            if (local_78[0x10] == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                        ((FMRSWRecursiveAccessDetector *)local_78._8_8_,
                         (FDestructionSentinel *)local_78);
            }
            TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &this->InAppPurchaseCompleteDelegate,
                       (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
                       (FWriteAccessScope *)&local_130);
            if ((local_110.DelegateSize != 0) &&
               (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_110,0,0,0x10);
              local_110.DelegateSize = 0;
            }
            if (local_130.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
            }
            if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_110.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_118);
            bVar3 = param_2->bIsConsumable;
            local_e8._0_8_ = (FPurchaseOfferEntry *)0x0;
            local_90 = 0;
            local_c8._16_8_ = 0;
            uStack_b0 = 0;
            local_80 = 0;
            local_e8._8_4_ = 0;
            local_e8._12_4_ = 0;
            local_c8._8_8_ = 0;
            local_e8._16_8_ = (FScriptContainerElement *)0x0;
            local_e8._24_4_ = 0;
            local_e8._28_4_ = -1;
            local_c8._0_8_ = (FScriptContainerElement *)0x0;
            local_a8 = (void *)0x0;
            local_a0 = 0;
            local_9c = 0x80;
            local_98 = 0xffffffff;
            local_94 = 0;
            local_88 = (void *)0x0;
            ::FString::FString((FString *)&local_130,"");
            FPurchaseCheckoutRequest::AddPurchaseOffer
                      ((FPurchaseCheckoutRequest *)local_e8,(FString *)&local_130,
                       &param_2->ProductIdentifier,1,bVar3);
            if ((UWorld *)local_130._0_8_ != (UWorld *)0x0) {
              FMemory::Free((void *)local_130._0_8_);
            }
            this_03 = APlayerController::GetLocalPlayer(param_1);
            this_04 = ULocalPlayer::GetUniqueNetIdFromCachedControllerId
                                (this_03,(FUniqueNetIdRepl *)local_78);
            pFVar10 = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)this_04);
            pTVar11 = TSharedFromThis<FUniqueNetId,1>::AsShared
                                ((TSharedFromThis<FUniqueNetId,1> *)&pFVar10->field_0x8,
                                 (TSharedRef<FUniqueNetId_const_,1> *)&local_130);
            local_100.SharedReferenceCount.ReferenceController =
                 (pTVar11->SharedReferenceCount).ReferenceController;
            local_100.Object = pTVar11->Object;
            if (local_100.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            this_01 = &this->PurchasingPlayer;
            if (this_01 != &local_100) {
              this_01->Object = local_100.Object;
              local_100.Object = (FUniqueNetId *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(this->PurchasingPlayer).SharedReferenceCount,
                         &local_100.SharedReferenceCount);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_100.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_130.Accessor);
            FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)local_78);
            pIVar12 = TSharedPtr<IOnlinePurchase,1>::operator->(this_00);
            pcVar1 = *(code **)(pIVar12->_padding_ + 0x18);
            pFVar10 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(this_01);
            (*pcVar1)(pIVar12,pFVar10,local_e8,&this->InAppPurchaseCompleteDelegate);
            local_80 = local_80 & 0xffffffff00000000;
            if (local_88 != (void *)0x0) {
              FMemory::Free(local_88);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_c8,0,local_c8._8_4_);
            iVar2 = SUB84(local_c8._8_8_,4);
            local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
            if (iVar2 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
            }
            local_94 = 0;
            local_a0 = 0;
            local_98 = 0xffffffff;
            if (0x80 < local_9c) {
              local_9c = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
            }
            if (local_a8 != (void *)0x0) {
              FMemory::Free(local_a8);
            }
            if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_c8._0_8_);
            }
            if ((local_e8._28_4_ != -1) &&
               ((FScriptContainerElement *)local_e8._16_8_ != (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_e8._16_8_);
            }
            DestructItems<FPurchaseCheckoutRequest::FPurchaseOfferEntry,int>
                      ((FPurchaseOfferEntry *)local_e8._0_8_,local_e8._8_4_);
            if ((FPurchaseOfferEntry *)local_e8._0_8_ != (FPurchaseOfferEntry *)0x0) {
              FMemory::Free((void *)local_e8._0_8_);
            }
            goto LAB_14ec9c5b4;
          }
          pwVar13 = 
          L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
          ;
          goto LAB_14ec9c5a8;
        }
      }
    }
    pwVar13 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
  }
LAB_14ec9c5a8:
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  FFrame::KismetExecutionMessage(pwVar13,Warning,(FName)0x0);
LAB_14ec9c5b4:
  if (this->bFailedToEvenSubmit != false) {
    OnPurchaseComplete(this);
  }
  return;
}

// TriggerGetOwnedPurchases @ 14ec9dbb0

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
UInAppPurchaseCallbackProxy2::TriggerGetOwnedPurchases
          (UInAppPurchaseCallbackProxy2 *this,APlayerController *param_1)

{
  TSharedPtr<IOnlinePurchase,1> *this_00;
  TSharedPtr<FUniqueNetId_const_,1> *this_01;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FModuleManager *this_02;
  FName *pFVar4;
  FOnlineSubsystemModule *pFVar5;
  IOnlineSubsystem *pIVar6;
  undefined8 *puVar7;
  ULocalPlayer *this_03;
  FUniqueNetIdRepl *this_04;
  FUniqueNetId *pFVar8;
  TSharedRef<FUniqueNetId_const_,1> *pTVar9;
  IOnlinePurchase *pIVar10;
  ulong64 uVar11;
  wchar_t *pwVar12;
  undefined1 auStack_d8 [32];
  FName local_b8;
  FDestructionSentinel local_b0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FDelegateAllocation local_90;
  TSharedPtr<FUniqueNetId_const_,1> local_80;
  undefined1 local_70 [24];
  FDelegateAllocation *local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this->bFailedToEvenSubmit = true;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  local_b0.AccessType = Reader;
  local_b0._4_4_ = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_b8,(FObjectPtr)&local_b0);
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)local_b8;
  if (param_1 == (APlayerController *)0x0) {
    return;
  }
  local_b0._0_8_ = AActor::GetWorld((AActor *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UWorld *)local_b0._0_8_ != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b0._0_8_);
  }
  FWeakObjectPtr::operator=(&(this->WorldPtr).WeakPtr,(FObjectPtr)&local_b0);
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  if (param_1->_padding_ == 0) {
    pwVar12 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state";
  }
  else {
    this_02 = FModuleManager::Get();
    pFVar4 = ::FName::FName((FName *)&local_b0,"OnlineSubsystem");
    bVar2 = FModuleManager::IsModuleLoaded(this_02,*pFVar4);
    if (bVar2) {
      pFVar4 = ::FName::FName((FName *)&local_b0,"OnlineSubsystem");
      pFVar5 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar4);
      cVar3 = (**(code **)(pFVar5->_padding_ + 0x70))(pFVar5,0);
      if (cVar3 != '\0') {
        local_b8.ComparisonIndex.Value = 0;
        local_b8.Number = 0;
        pIVar6 = IOnlineSubsystem::Get(&local_b8);
        if (pIVar6 != (IOnlineSubsystem *)0x0) {
          puVar7 = (undefined8 *)(**(code **)(pIVar6->_padding_ + 0x98))(pIVar6,&local_b0);
          this_00 = &this->PurchaseInterface;
          if (this_00 != (TSharedPtr<IOnlinePurchase,1> *)puVar7) {
            this_00->Object = (IOnlinePurchase *)*puVar7;
            *puVar7 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->PurchaseInterface).SharedReferenceCount,
                       (FSharedReferencer<1> *)(puVar7 + 1));
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_b0.Accessor);
          if (this_00->Object != (IOnlinePurchase *)0x0) {
            this_03 = APlayerController::GetLocalPlayer(param_1);
            this_04 = ULocalPlayer::GetUniqueNetIdFromCachedControllerId
                                (this_03,(FUniqueNetIdRepl *)local_70);
            pFVar8 = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)this_04);
            pTVar9 = TSharedFromThis<FUniqueNetId,1>::AsShared
                               ((TSharedFromThis<FUniqueNetId,1> *)&pFVar8->field_0x8,
                                (TSharedRef<FUniqueNetId_const_,1> *)&local_b0);
            local_80.SharedReferenceCount.ReferenceController =
                 (pTVar9->SharedReferenceCount).ReferenceController;
            local_80.Object = pTVar9->Object;
            if (local_80.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            this_01 = &this->PurchasingPlayer;
            if (this_01 != &local_80) {
              this_01->Object = local_80.Object;
              local_80.Object = (FUniqueNetId *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(this->PurchasingPlayer).SharedReferenceCount,
                         &local_80.SharedReferenceCount);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_80.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_b0.Accessor);
            FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)local_70);
            pIVar10 = TSharedPtr<IOnlinePurchase,1>::operator->(this_00);
            local_98.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_90.DelegateSize = 0;
            pcVar1 = *(code **)(pIVar10->_padding_ + 0x38);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_98,(FWriteAccessScope *)local_70);
            local_58 = &local_90;
            puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_90);
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = &
                        ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar11 = FDelegateHandle::GenerateNewID();
              puVar7[2] = uVar11;
              *puVar7 = &
                        ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseCallbackProxy2____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              puVar7[3] = 0;
              local_b0._0_8_ = this;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_b0);
              puVar7[4] = OnQueryReceiptsComplete;
            }
            if (local_70[0x10] == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                        ((FMRSWRecursiveAccessDetector *)local_70._8_8_,
                         (FDestructionSentinel *)local_70);
            }
            pFVar8 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(this_01);
            (*pcVar1)(pIVar10,pFVar8,0,&local_98);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_98,(FWriteAccessScope *)&local_b0);
            if ((local_90.DelegateSize != 0) &&
               (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_90.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_90,0,0,0x10);
              local_90.DelegateSize = 0;
            }
            if (local_b0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
            }
            if (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_90.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
            goto LAB_14ec9df17;
          }
          pwVar12 = 
          L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
          ;
          goto LAB_14ec9df0c;
        }
      }
    }
    pwVar12 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
  }
LAB_14ec9df0c:
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FFrame::KismetExecutionMessage(pwVar12,Warning,(FName)0x0);
LAB_14ec9df17:
  if (this->bFailedToEvenSubmit != false) {
    OnPurchaseComplete(this);
  }
  return;
}

// TriggerGetUnprocessedPurchases @ 14ec9df50

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
UInAppPurchaseCallbackProxy2::TriggerGetUnprocessedPurchases
          (UInAppPurchaseCallbackProxy2 *this,APlayerController *param_1)

{
  TSharedPtr<IOnlinePurchase,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FModuleManager *this_00;
  FName *pFVar5;
  FOnlineSubsystemModule *pFVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ULocalPlayer *this_01;
  FUniqueNetIdRepl *this_02;
  FUniqueNetId *pFVar9;
  TSharedRef<FUniqueNetId_const_,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FOnlineError *pFVar12;
  wchar_t *pwVar13;
  undefined1 auStack_148 [32];
  FWeakObjectPtr local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  FUniqueNetId *local_f8;
  FSharedReferencer<1> local_f0;
  undefined8 local_e8;
  UWorld *local_e0;
  TSharedRef<FPurchaseReceipt,1> local_d8;
  FName local_c8;
  FName local_c0;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  TSharedRef<FUniqueNetId_const_,1> local_a8;
  FOnlineError local_98;
  FUniqueNetIdRepl local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128.ObjectIndex = 0;
  local_128.ObjectSerialNumber = 0;
  local_e8 = 0;
  FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_e8);
  (this->WorldPtr).WeakPtr = local_128;
  if (param_1 != (APlayerController *)0x0) {
    local_e0 = AActor::GetWorld((AActor *)param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_e0);
    }
    FWeakObjectPtr::operator=(&(this->WorldPtr).WeakPtr,(FObjectPtr)&local_e0);
    if (param_1->_padding_ != 0) {
      local_120 = 0;
      this_00 = FModuleManager::Get();
      pFVar5 = ::FName::FName(&local_c8,"OnlineSubsystem");
      bVar3 = FModuleManager::IsModuleLoaded(this_00,*pFVar5);
      if (bVar3) {
        pFVar5 = ::FName::FName(&local_c0,"OnlineSubsystem");
        pFVar6 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar5);
        cVar4 = (**(code **)(pFVar6->_padding_ + 0x70))(pFVar6,0);
        if (cVar4 != '\0') {
          local_118 = 0;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
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
          pFVar6 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                             (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                              ::__l2::OnlineSubsystemModuleName);
          plVar7 = (longlong *)(**(code **)(pFVar6->_padding_ + 0x50))(pFVar6,local_118);
          if (plVar7 != (longlong *)0x0) {
            puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x98))(plVar7,local_b8);
            pTVar1 = &this->PurchaseInterface;
            if (pTVar1 != (TSharedPtr<IOnlinePurchase,1> *)puVar8) {
              pTVar1->Object = (IOnlinePurchase *)*puVar8;
              *puVar8 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(this->PurchaseInterface).SharedReferenceCount,
                         (FSharedReferencer<1> *)(puVar8 + 1));
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_b0);
            if (pTVar1->Object != (IOnlinePurchase *)0x0) {
              this_01 = APlayerController::GetLocalPlayer(param_1);
              this_02 = ULocalPlayer::GetUniqueNetIdFromCachedControllerId(this_01,&local_58);
              pFVar9 = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)this_02);
              pTVar10 = TSharedFromThis<FUniqueNetId,1>::AsShared
                                  ((TSharedFromThis<FUniqueNetId,1> *)&pFVar9->field_0x8,&local_a8);
              local_f0.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
              local_f8 = pTVar10->Object;
              if (local_f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_f0.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(local_f0.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              if (&this->PurchasingPlayer != (TSharedPtr<FUniqueNetId_const_,1> *)&local_f8) {
                (this->PurchasingPlayer).Object = local_f8;
                local_f8 = (FUniqueNetId *)0x0;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          (&(this->PurchasingPlayer).SharedReferenceCount,&local_f0);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_f0.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_a8.SharedReferenceCount.ReferenceController);
              local_58._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
              if (local_58.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_58.ReplicationBytes.AllocatorInstance.Data);
              }
              if ((1 < (byte)local_58._padding_) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[(byte)local_58._padding_])(&local_58._padding_);
              pTVar11 = ::operator_new(0x40);
              if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
                pTVar11 = (TReferenceControllerBase<1> *)0x0;
              }
              else {
                pTVar11->SharedReferenceCount = (atomic<int>)0x1;
                pTVar11->WeakReferenceCount = (atomic<int>)0x1;
                pTVar11->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_VFPurchaseReceipt___00_SharedPointerInternals__6B_
                ;
                pTVar11[1]._padding_ = (longlong)&___7FPurchaseReceipt__6B_;
                local_d8.Object = (FPurchaseReceipt *)(pTVar11 + 1);
                pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
                pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
                pTVar11[2]._padding_ = 0;
                *(undefined1 *)&pTVar11[2].SharedReferenceCount = 0;
                pTVar11[3]._padding_ = 0;
                pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
                pTVar11[3].WeakReferenceCount = (atomic<int>)0x0;
                local_d8.SharedReferenceCount.ReferenceController = pTVar11;
                if ((local_d8.Object == (FPurchaseReceipt *)0x0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InObject != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x246,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              pFVar12 = FOnlineError::FOnlineError(&local_98,true);
              OnCheckoutComplete(this,pFVar12,&local_d8);
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
                        (pTVar11);
              return;
            }
            local_110 = 0;
            pwVar13 = 
            L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
            ;
            goto LAB_14ec9e2c8;
          }
        }
      }
      local_108 = 0;
      pwVar13 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
      goto LAB_14ec9e2c8;
    }
  }
  local_100 = 0;
  pwVar13 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state";
LAB_14ec9e2c8:
  FFrame::KismetExecutionMessage(pwVar13,Warning,(FName)0x0);
  return;
}

// execCreateProxyObjectForInAppPurchase @ 14eca1dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
UInAppPurchaseCallbackProxy2::execCreateProxyObjectForInAppPurchase
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *this;
  int *this_00;
  FProperty *pFVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  APlayerController *this_01;
  bool bVar6;
  char cVar7;
  UObject *pUVar8;
  UWorld *this_02;
  FModuleManager *this_03;
  FName *pFVar9;
  FOnlineSubsystemModule *pFVar10;
  IOnlineSubsystem *pIVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  ULocalPlayer *this_04;
  FUniqueNetIdRepl *this_05;
  FUniqueNetId *pFVar14;
  TSharedRef<FUniqueNetId_const_,1> *pTVar15;
  IOnlinePurchase *pIVar16;
  FString *pFVar17;
  undefined1 auStackY_188 [32];
  FName local_158;
  undefined8 *local_150;
  FDestructionSentinel local_148;
  undefined1 local_130 [8];
  FDelegateAllocation local_128;
  APlayerController *local_118;
  TSharedPtr<FUniqueNetId_const_,1> local_110;
  FString local_100;
  undefined1 local_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [24];
  undefined8 uStack_b0;
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  void *local_88;
  ulonglong local_80;
  undefined1 local_78 [24];
  FDelegateAllocation *local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_118 = (APlayerController *)0x0;
  local_150 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.Data.ArrayNum = 0;
  local_100.Data.ArrayMax = 0;
  local_f0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  this_01 = local_118;
  pFVar17 = &local_100;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar17 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar8 = GetTransientPackageAsObject();
  this_02 = (UWorld *)NewObject<UInAppPurchaseCallbackProxy2>(pUVar8);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_02,RF_StrongRefOnFrame);
  *(bool *)&(this_02->ExtraReferencedObjects).ArrayNum = true;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  local_148._0_8_ = (UWorld *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_158,(FObjectPtr)&local_148);
  ((TWeakObjectPtr<UWorld,FWeakObjectPtr> *)&(this_02->ExtraReferencedObjects).ArrayMax)->WeakPtr =
       (FWeakObjectPtr)local_158;
  if (this_01 == (APlayerController *)0x0) goto LAB_14eca233e;
  local_148._0_8_ = AActor::GetWorld((AActor *)this_01);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UWorld *)local_148._0_8_ != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_148._0_8_);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&(this_02->ExtraReferencedObjects).ArrayMax,(FObjectPtr)&local_148);
  if (this_01->_padding_ == 0) {
    local_150 = (undefined8 *)0x0;
    FFrame::KismetExecutionMessage
              (L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state",Warning,(FName)0x0);
  }
  else {
    local_158.ComparisonIndex.Value = 0;
    local_158.Number = 0;
    this_03 = FModuleManager::Get();
    pFVar9 = ::FName::FName((FName *)&local_148,"OnlineSubsystem");
    bVar6 = FModuleManager::IsModuleLoaded(this_03,*pFVar9);
    if (bVar6) {
      pFVar9 = ::FName::FName((FName *)&local_148,"OnlineSubsystem");
      pFVar10 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar9);
      cVar7 = (**(code **)(pFVar10->_padding_ + 0x70))(pFVar10,0);
      if (cVar7 != '\0') {
        local_158.ComparisonIndex.Value = 0;
        local_158.Number = 0;
        pIVar11 = IOnlineSubsystem::Get(&local_158);
        if (pIVar11 != (IOnlineSubsystem *)0x0) {
          puVar12 = (undefined8 *)(**(code **)(pIVar11->_padding_ + 0x98))(pIVar11,&local_148);
          this = &(this_02->StreamingLevelsToConsider).StreamingLevels.ArrayNum;
          if (this != (int *)puVar12) {
            uVar2 = *puVar12;
            (this_02->StreamingLevelsToConsider).StreamingLevels.ArrayNum = (int)uVar2;
            (this_02->StreamingLevelsToConsider).StreamingLevels.ArrayMax =
                 (int)((ulonglong)uVar2 >> 0x20);
            *puVar12 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)&(this_02->StreamingLevelsToConsider).LevelsToProcess
                       ,(FSharedReferencer<1> *)(puVar12 + 1));
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_148.Accessor);
          lVar3._0_4_ = (this_02->StreamingLevelsToConsider).StreamingLevels.ArrayNum;
          lVar3._4_4_ = (this_02->StreamingLevelsToConsider).StreamingLevels.ArrayMax;
          if (lVar3 == 0) {
            local_158.ComparisonIndex.Value = 0;
            local_158.Number = 0;
            FFrame::KismetExecutionMessage
                      (L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
                       ,Warning,(FName)0x0);
            param_3 = local_150;
          }
          else {
            *(bool *)&(this_02->ExtraReferencedObjects).ArrayNum = false;
            local_130 = (undefined1  [8])0x0;
            local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_128.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
                       (FWriteAccessScope *)local_78);
            local_60 = &local_128;
            puVar12 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
            if (puVar12 != (undefined8 *)0x0) {
              *puVar12 = &
                         ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar13 = FDelegateHandle::GenerateNewID();
              puVar12[2] = uVar13;
              *puVar12 = &
                         ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseCallbackProxy2____A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_02);
              }
              puVar12[3] = 0;
              local_148._0_8_ = this_02;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_02);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_148);
              puVar12[4] = OnCheckoutComplete;
            }
            if (local_78[0x10] == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                        ((FMRSWRecursiveAccessDetector *)local_78._8_8_,
                         (FDestructionSentinel *)local_78);
            }
            TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_02->NetworkManager,
                       (TDelegateBase<FNotThreadSafeDelegateMode> *)local_130);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
                       (FWriteAccessScope *)&local_148);
            if ((local_128.DelegateSize != 0) &&
               (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_128,0,0,0x10);
              local_128.DelegateSize = 0;
            }
            if (local_148.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
            }
            if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_128.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_130);
            bVar6 = *(bool *)&pFVar17[1].Data.AllocatorInstance.Data;
            local_e8._0_8_ = (FPurchaseOfferEntry *)0x0;
            local_90 = 0;
            local_c8._16_8_ = 0;
            uStack_b0 = 0;
            local_80 = 0;
            local_e8._8_4_ = 0;
            local_e8._12_4_ = 0;
            local_c8._8_8_ = 0;
            local_e8._16_8_ = (FScriptContainerElement *)0x0;
            local_e8._24_4_ = 0;
            local_e8._28_4_ = -1;
            local_c8._0_8_ = (FScriptContainerElement *)0x0;
            local_a8 = (void *)0x0;
            local_a0 = 0;
            local_9c = 0x80;
            local_98 = 0xffffffff;
            local_94 = 0;
            local_88 = (void *)0x0;
            ::FString::FString((FString *)&local_148,"");
            FPurchaseCheckoutRequest::AddPurchaseOffer
                      ((FPurchaseCheckoutRequest *)local_e8,(FString *)&local_148,pFVar17,1,bVar6);
            if ((UWorld *)local_148._0_8_ != (UWorld *)0x0) {
              FMemory::Free((void *)local_148._0_8_);
            }
            this_04 = APlayerController::GetLocalPlayer(this_01);
            this_05 = ULocalPlayer::GetUniqueNetIdFromCachedControllerId
                                (this_04,(FUniqueNetIdRepl *)local_78);
            pFVar14 = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)this_05);
            pTVar15 = TSharedFromThis<FUniqueNetId,1>::AsShared
                                ((TSharedFromThis<FUniqueNetId,1> *)&pFVar14->field_0x8,
                                 (TSharedRef<FUniqueNetId_const_,1> *)&local_148);
            local_110.SharedReferenceCount.ReferenceController =
                 (pTVar15->SharedReferenceCount).ReferenceController;
            local_110.Object = pTVar15->Object;
            if (local_110.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            this_00 = &(this_02->StreamingLevels).ArrayNum;
            if ((TSharedPtr<FUniqueNetId_const_,1> *)this_00 != &local_110) {
              *(FUniqueNetId **)this_00 = local_110.Object;
              local_110.Object = (FUniqueNetId *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)&this_02->StreamingLevelsToConsider,
                         &local_110.SharedReferenceCount);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_110.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_148.Accessor);
            FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)local_78);
            pIVar16 = TSharedPtr<IOnlinePurchase,1>::operator->
                                ((TSharedPtr<IOnlinePurchase,1> *)this);
            pcVar4 = *(code **)(pIVar16->_padding_ + 0x18);
            pFVar14 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>
                                ((TSharedPtr<FUniqueNetId_const_,1> *)this_00);
            (*pcVar4)(pIVar16,pFVar14,local_e8,
                      (TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                       *)&this_02->NetworkManager);
            local_80 = local_80 & 0xffffffff00000000;
            if (local_88 != (void *)0x0) {
              FMemory::Free(local_88);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_c8,0,local_c8._8_4_);
            iVar5 = SUB84(local_c8._8_8_,4);
            local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
            if (iVar5 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
            }
            local_98 = 0xffffffff;
            local_94 = 0;
            local_a0 = 0;
            if (0x80 < local_9c) {
              local_9c = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
            }
            if (local_a8 != (void *)0x0) {
              FMemory::Free(local_a8);
            }
            if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_c8._0_8_);
            }
            if ((local_e8._28_4_ != -1) &&
               ((FScriptContainerElement *)local_e8._16_8_ != (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_e8._16_8_);
            }
            DestructItems<FPurchaseCheckoutRequest::FPurchaseOfferEntry,int>
                      ((FPurchaseOfferEntry *)local_e8._0_8_,local_e8._8_4_);
            param_3 = local_150;
            if ((FPurchaseOfferEntry *)local_e8._0_8_ != (FPurchaseOfferEntry *)0x0) {
              FMemory::Free((void *)local_e8._0_8_);
              param_3 = local_150;
            }
          }
          goto LAB_14eca2330;
        }
      }
    }
    local_150 = (undefined8 *)0x0;
    FFrame::KismetExecutionMessage
              (L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem",
               Warning,(FName)0x0);
  }
LAB_14eca2330:
  if (*(bool *)&(this_02->ExtraReferencedObjects).ArrayNum != false) {
    OnPurchaseComplete((UInAppPurchaseCallbackProxy2 *)this_02);
  }
LAB_14eca233e:
  *(UWorld **)param_3 = this_02;
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  return;
}

// execCreateProxyObjectForInAppPurchaseQueryOwned @ 14eca31d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
UInAppPurchaseCallbackProxy2::execCreateProxyObjectForInAppPurchaseQueryOwned
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *this;
  int *this_00;
  FProperty *pFVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  APlayerController *this_01;
  bool bVar5;
  char cVar6;
  UObject *pUVar7;
  UWorld *this_02;
  FModuleManager *this_03;
  FName *pFVar8;
  FOnlineSubsystemModule *pFVar9;
  IOnlineSubsystem *pIVar10;
  undefined8 *puVar11;
  ULocalPlayer *this_04;
  FUniqueNetIdRepl *this_05;
  FUniqueNetId *pFVar12;
  TSharedRef<FUniqueNetId_const_,1> *pTVar13;
  IOnlinePurchase *pIVar14;
  ulong64 uVar15;
  wchar_t *pwVar16;
  undefined1 auStack_e8 [32];
  FName local_c8;
  FDestructionSentinel local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  APlayerController *local_90;
  TSharedPtr<FUniqueNetId_const_,1> local_88;
  undefined1 local_78 [24];
  FDelegateAllocation *local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_90 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  this_01 = local_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar7 = GetTransientPackageAsObject();
  this_02 = (UWorld *)NewObject<UInAppPurchaseCallbackProxy2>(pUVar7);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_02,RF_StrongRefOnFrame);
  *(bool *)&(this_02->ExtraReferencedObjects).ArrayNum = true;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  local_c0.AccessType = Reader;
  local_c0._4_4_ = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_c8,(FObjectPtr)&local_c0);
  ((TWeakObjectPtr<UWorld,FWeakObjectPtr> *)&(this_02->ExtraReferencedObjects).ArrayMax)->WeakPtr =
       (FWeakObjectPtr)local_c8;
  if (this_01 == (APlayerController *)0x0) goto LAB_14eca35a9;
  local_c0._0_8_ = AActor::GetWorld((AActor *)this_01);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UWorld *)local_c0._0_8_ != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c0._0_8_);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&(this_02->ExtraReferencedObjects).ArrayMax,(FObjectPtr)&local_c0);
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if (this_01->_padding_ == 0) {
    pwVar16 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state";
LAB_14eca3590:
    local_c8.ComparisonIndex.Value = 0;
    local_c8.Number = 0;
    FFrame::KismetExecutionMessage(pwVar16,Warning,(FName)0x0);
  }
  else {
    this_03 = FModuleManager::Get();
    pFVar8 = ::FName::FName((FName *)&local_c0,"OnlineSubsystem");
    bVar5 = FModuleManager::IsModuleLoaded(this_03,*pFVar8);
    if (!bVar5) {
LAB_14eca357c:
      pwVar16 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
      goto LAB_14eca3590;
    }
    pFVar8 = ::FName::FName((FName *)&local_c0,"OnlineSubsystem");
    pFVar9 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar8);
    cVar6 = (**(code **)(pFVar9->_padding_ + 0x70))(pFVar9,0);
    if (cVar6 == '\0') goto LAB_14eca357c;
    local_c8.ComparisonIndex.Value = 0;
    local_c8.Number = 0;
    pIVar10 = IOnlineSubsystem::Get(&local_c8);
    if (pIVar10 == (IOnlineSubsystem *)0x0) goto LAB_14eca357c;
    puVar11 = (undefined8 *)(**(code **)(pIVar10->_padding_ + 0x98))(pIVar10,&local_c0);
    this = &(this_02->StreamingLevelsToConsider).StreamingLevels.ArrayNum;
    if (this != (int *)puVar11) {
      uVar2 = *puVar11;
      (this_02->StreamingLevelsToConsider).StreamingLevels.ArrayNum = (int)uVar2;
      (this_02->StreamingLevelsToConsider).StreamingLevels.ArrayMax =
           (int)((ulonglong)uVar2 >> 0x20);
      *puVar11 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&(this_02->StreamingLevelsToConsider).LevelsToProcess,
                 (FSharedReferencer<1> *)(puVar11 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_c0.Accessor);
    lVar3._0_4_ = (this_02->StreamingLevelsToConsider).StreamingLevels.ArrayNum;
    lVar3._4_4_ = (this_02->StreamingLevelsToConsider).StreamingLevels.ArrayMax;
    if (lVar3 == 0) {
      pwVar16 = 
      L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
      ;
      goto LAB_14eca3590;
    }
    this_04 = APlayerController::GetLocalPlayer(this_01);
    this_05 = ULocalPlayer::GetUniqueNetIdFromCachedControllerId
                        (this_04,(FUniqueNetIdRepl *)local_78);
    pFVar12 = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)this_05);
    pTVar13 = TSharedFromThis<FUniqueNetId,1>::AsShared
                        ((TSharedFromThis<FUniqueNetId,1> *)&pFVar12->field_0x8,
                         (TSharedRef<FUniqueNetId_const_,1> *)&local_c0);
    local_88.SharedReferenceCount.ReferenceController =
         (pTVar13->SharedReferenceCount).ReferenceController;
    local_88.Object = pTVar13->Object;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00 = &(this_02->StreamingLevels).ArrayNum;
    if ((TSharedPtr<FUniqueNetId_const_,1> *)this_00 != &local_88) {
      *(FUniqueNetId **)this_00 = local_88.Object;
      local_88.Object = (FUniqueNetId *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this_02->StreamingLevelsToConsider,
                 &local_88.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_c0.Accessor);
    FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)local_78);
    pIVar14 = TSharedPtr<IOnlinePurchase,1>::operator->((TSharedPtr<IOnlinePurchase,1> *)this);
    local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    pcVar4 = *(code **)(pIVar14->_padding_ + 0x38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a8,(FWriteAccessScope *)local_78);
    local_60 = &local_a0;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_a0);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar15;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseCallbackProxy2____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_02);
      }
      puVar11[3] = 0;
      local_c0._0_8_ = this_02;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_02);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_c0);
      puVar11[4] = OnQueryReceiptsComplete;
    }
    if (local_78[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_78._8_8_,(FDestructionSentinel *)local_78);
    }
    pFVar12 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>
                        ((TSharedPtr<FUniqueNetId_const_,1> *)this_00);
    (*pcVar4)(pIVar14,pFVar12,0,&local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a8,(FWriteAccessScope *)&local_c0);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  }
  if (*(bool *)&(this_02->ExtraReferencedObjects).ArrayNum != false) {
    OnPurchaseComplete((UInAppPurchaseCallbackProxy2 *)this_02);
  }
LAB_14eca35a9:
  *(UWorld **)param_3 = this_02;
  return;
}

// execCreateProxyObjectForInAppPurchaseUnprocessedPurchases @ 14eca4450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UInAppPurchaseCallbackProxy2::execCreateProxyObjectForInAppPurchaseUnprocessedPurchases
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TSharedPtr<IOnlinePurchase,1> *pTVar1;
  FProperty *pFVar2;
  code *pcVar3;
  APlayerController *this;
  bool bVar4;
  char cVar5;
  UObject *pUVar6;
  UInAppPurchaseCallbackProxy2 *this_00;
  FModuleManager *this_01;
  FName *pFVar7;
  FOnlineSubsystemModule *pFVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ULocalPlayer *this_02;
  FUniqueNetIdRepl *this_03;
  FUniqueNetId *pFVar11;
  TSharedRef<FUniqueNetId_const_,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  FOnlineError *pFVar14;
  wchar_t *pwVar15;
  undefined1 auStack_158 [32];
  APlayerController *local_138;
  FWeakObjectPtr local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  FUniqueNetId *local_100;
  FSharedReferencer<1> local_f8;
  undefined8 local_f0;
  UWorld *local_e8;
  TSharedRef<FPurchaseReceipt,1> local_e0;
  FName local_d0;
  FName local_c8;
  undefined1 local_c0 [8];
  TReferenceControllerBase<1> *local_b8;
  TSharedRef<FUniqueNetId_const_,1> local_b0;
  FOnlineError local_a0;
  FUniqueNetIdRepl local_60;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  this = local_138;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar6 = GetTransientPackageAsObject();
  this_00 = NewObject<UInAppPurchaseCallbackProxy2>(pUVar6);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_StrongRefOnFrame);
  local_130.ObjectIndex = 0;
  local_130.ObjectSerialNumber = 0;
  local_f0 = 0;
  FWeakObjectPtr::operator=(&local_130,(FObjectPtr)&local_f0);
  (this_00->WorldPtr).WeakPtr = local_130;
  if (this == (APlayerController *)0x0) {
LAB_14eca482a:
    local_108 = 0;
    pwVar15 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state";
  }
  else {
    local_e8 = AActor::GetWorld((AActor *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_e8);
    }
    FWeakObjectPtr::operator=(&(this_00->WorldPtr).WeakPtr,(FObjectPtr)&local_e8);
    if (this->_padding_ == 0) goto LAB_14eca482a;
    local_128 = 0;
    this_01 = FModuleManager::Get();
    pFVar7 = ::FName::FName(&local_d0,"OnlineSubsystem");
    bVar4 = FModuleManager::IsModuleLoaded(this_01,*pFVar7);
    if (bVar4) {
      pFVar7 = ::FName::FName(&local_c8,"OnlineSubsystem");
      pFVar8 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar7);
      cVar5 = (**(code **)(pFVar8->_padding_ + 0x70))(pFVar8,0);
      if (cVar5 == '\0') goto LAB_14eca4819;
      local_120 = 0;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                          ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
          _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      pFVar8 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                         (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                          ::__l2::OnlineSubsystemModuleName);
      plVar9 = (longlong *)(**(code **)(pFVar8->_padding_ + 0x50))(pFVar8,local_120);
      if (plVar9 == (longlong *)0x0) goto LAB_14eca4819;
      puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x98))(plVar9,local_c0);
      pTVar1 = &this_00->PurchaseInterface;
      if (pTVar1 != (TSharedPtr<IOnlinePurchase,1> *)puVar10) {
        pTVar1->Object = (IOnlinePurchase *)*puVar10;
        *puVar10 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this_00->PurchaseInterface).SharedReferenceCount,
                   (FSharedReferencer<1> *)(puVar10 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
      if (pTVar1->Object != (IOnlinePurchase *)0x0) {
        this_02 = APlayerController::GetLocalPlayer(this);
        this_03 = ULocalPlayer::GetUniqueNetIdFromCachedControllerId(this_02,&local_60);
        pFVar11 = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)this_03);
        pTVar12 = TSharedFromThis<FUniqueNetId,1>::AsShared
                            ((TSharedFromThis<FUniqueNetId,1> *)&pFVar11->field_0x8,&local_b0);
        local_f8.ReferenceController = (pTVar12->SharedReferenceCount).ReferenceController;
        local_100 = pTVar12->Object;
        if (local_f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_f8.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_f8.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (&this_00->PurchasingPlayer != (TSharedPtr<FUniqueNetId_const_,1> *)&local_100) {
          (this_00->PurchasingPlayer).Object = local_100;
          local_100 = (FUniqueNetId *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this_00->PurchasingPlayer).SharedReferenceCount,&local_f8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0.SharedReferenceCount.ReferenceController);
        local_60._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
        if (local_60.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.ReplicationBytes.AllocatorInstance.Data);
        }
        if (1 < (byte)local_60._padding_) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[(byte)local_60._padding_])(&local_60._padding_);
        pTVar13 = ::operator_new(0x40);
        if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar13->SharedReferenceCount = (atomic<int>)0x1;
          pTVar13->WeakReferenceCount = (atomic<int>)0x1;
          pTVar13->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFPurchaseReceipt___00_SharedPointerInternals__6B_
          ;
          pTVar13[1]._padding_ = (longlong)&___7FPurchaseReceipt__6B_;
          local_e0.Object = (FPurchaseReceipt *)(pTVar13 + 1);
          pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
          pTVar13[2]._padding_ = 0;
          *(undefined1 *)&pTVar13[2].SharedReferenceCount = 0;
          pTVar13[3]._padding_ = 0;
          pTVar13[3].SharedReferenceCount = (atomic<int>)0x0;
          pTVar13[3].WeakReferenceCount = (atomic<int>)0x0;
          local_e0.SharedReferenceCount.ReferenceController = pTVar13;
          if (local_e0.Object == (FPurchaseReceipt *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        pFVar14 = FOnlineError::FOnlineError(&local_a0,true);
        OnCheckoutComplete(this_00,pFVar14,&local_e0);
        if (local_a0.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a0.ErrorMessage.TextData.Reference + 0x10))();
        }
        if (local_a0.ErrorCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.ErrorCode.Data.AllocatorInstance.Data);
        }
        if (local_a0.ErrorRaw.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.ErrorRaw.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        goto LAB_14eca4840;
      }
      local_118 = 0;
      pwVar15 = 
      L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
      ;
    }
    else {
LAB_14eca4819:
      local_110 = 0;
      pwVar15 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
    }
  }
  FFrame::KismetExecutionMessage(pwVar15,Warning,(FName)0x0);
LAB_14eca4840:
  *(UInAppPurchaseCallbackProxy2 **)param_3 = this_00;
  return;
}

