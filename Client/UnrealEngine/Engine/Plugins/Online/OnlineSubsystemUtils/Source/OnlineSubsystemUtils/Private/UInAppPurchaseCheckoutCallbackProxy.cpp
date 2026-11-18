// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 13

// StaticClass @ 14ec43ee0

UClass * __cdecl UInAppPurchaseCheckoutCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseCheckoutCallbackProxy",
               &Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy.InnerSingleton,
               StaticRegisterNativesUInAppPurchaseCheckoutCallbackProxy,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseCheckoutCallbackProxy>,
               InternalVTableHelperCtorCaller<UInAppPurchaseCheckoutCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy.InnerSingleton;
}

// UInAppPurchaseCheckoutCallbackProxy @ 14ec53c30

UInAppPurchaseCheckoutCallbackProxy * __thiscall
UInAppPurchaseCheckoutCallbackProxy::UInAppPurchaseCheckoutCallbackProxy
          (UInAppPurchaseCheckoutCallbackProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SavedPurchaseStatus = Failed;
  this->_padding_ = (longlong)&___7UInAppPurchaseCheckoutCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SavedReceipt).bIsSet = false;
  return this;
}

// UInAppPurchaseCheckoutCallbackProxy @ 14ec53c90

UInAppPurchaseCheckoutCallbackProxy * __thiscall
UInAppPurchaseCheckoutCallbackProxy::UInAppPurchaseCheckoutCallbackProxy
          (UInAppPurchaseCheckoutCallbackProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SavedPurchaseStatus = Failed;
  this->_padding_ = (longlong)&___7UInAppPurchaseCheckoutCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SavedReceipt).bIsSet = false;
  return this;
}

// ~UInAppPurchaseCheckoutCallbackProxy @ 14ec57030

void __thiscall
UInAppPurchaseCheckoutCallbackProxy::~UInAppPurchaseCheckoutCallbackProxy
          (UInAppPurchaseCheckoutCallbackProxy *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInAppPurchaseCheckoutCallbackProxy__6B_;
  if ((this->SavedReceipt).bIsSet != false) {
    pFVar1 = (this->SavedReceipt).TypedValue.TransactionIdentifier.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->SavedReceipt).TypedValue.ValidationInfo.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->SavedReceipt).TypedValue.ItemId.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->SavedReceipt).TypedValue.ItemName.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
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

// operator() @ 14ec58b60

void __thiscall
`UInAppPurchaseCheckoutCallbackProxy::OnPurchaseComplete'::__l5::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  FInAppPurchaseReceiptInfo2 local_48;
  
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0xa0) != '\0') {
    FOnlineProxyInAppCheckoutResult::Broadcast
              ((FOnlineProxyInAppCheckoutResult *)(lVar1 + 0x28),
               *(EInAppPurchaseStatus *)(*(longlong *)this + 0xa8),
               (FInAppPurchaseReceiptInfo2 *)(lVar1 + 0x60));
    return;
  }
  local_48.ItemName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ItemName.Data.ArrayNum = 0;
  local_48.ItemName.Data.ArrayMax = 0;
  local_48.ItemId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ItemId.Data.ArrayNum = 0;
  local_48.ItemId.Data.ArrayMax = 0;
  local_48.ValidationInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ValidationInfo.Data.ArrayNum = 0;
  local_48.ValidationInfo.Data.ArrayMax = 0;
  local_48.TransactionIdentifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.TransactionIdentifier.Data.ArrayNum = 0;
  local_48.TransactionIdentifier.Data.ArrayMax = 0;
  FOnlineProxyInAppCheckoutResult::Broadcast
            ((FOnlineProxyInAppCheckoutResult *)(lVar1 + 0x40),
             *(EInAppPurchaseStatus *)(lVar1 + 0xa8),&local_48);
  if (local_48.TransactionIdentifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_48.TransactionIdentifier.Data.AllocatorInstance.Data);
  }
  if (local_48.ValidationInfo.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ValidationInfo.Data.AllocatorInstance.Data);
  }
  if (local_48.ItemId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ItemId.Data.AllocatorInstance.Data);
  }
  if (local_48.ItemName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ItemName.Data.AllocatorInstance.Data);
  }
  return;
}

// ClearPreviousResult @ 14ec625e0

void __thiscall
UInAppPurchaseCheckoutCallbackProxy::ClearPreviousResult(UInAppPurchaseCheckoutCallbackProxy *this)

{
  FScriptContainerElement *pFVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  if ((this->SavedReceipt).bIsSet != false) {
    pFVar1 = (this->SavedReceipt).TypedValue.TransactionIdentifier.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->SavedReceipt).TypedValue.ValidationInfo.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->SavedReceipt).TypedValue.ItemId.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->SavedReceipt).TypedValue.ItemName.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->SavedReceipt).bIsSet = false;
  }
  this->SavedPurchaseStatus = Failed;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->WorldPtr).WeakPtr = local_res8;
  return;
}

// CreateProxyObjectForInAppPurchaseCheckout @ 14ec6a210

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

UInAppPurchaseCheckoutCallbackProxy * __cdecl
UInAppPurchaseCheckoutCallbackProxy::CreateProxyObjectForInAppPurchaseCheckout
          (APlayerController *param_1,FInAppPurchaseProductRequest2 *param_2)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInAppPurchaseCheckoutCallbackProxy *this;
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
  this = (UInAppPurchaseCheckoutCallbackProxy *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  TriggerCheckout(this,param_1,param_2);
  return this;
}

// GetPrivateStaticClass @ 14ec77e70

UClass * __cdecl UInAppPurchaseCheckoutCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseCheckoutCallbackProxy",
               &Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy.InnerSingleton,
               StaticRegisterNativesUInAppPurchaseCheckoutCallbackProxy,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseCheckoutCallbackProxy>,
               InternalVTableHelperCtorCaller<UInAppPurchaseCheckoutCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy.InnerSingleton;
}

// OnCheckoutComplete @ 14ec85300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInAppPurchaseCheckoutCallbackProxy::OnCheckoutComplete
          (UInAppPurchaseCheckoutCallbackProxy *this,FOnlineError *param_1,
          TSharedRef<FPurchaseReceipt,1> *param_2)

{
  TOptional<FInAppPurchaseReceiptInfo2> *pTVar1;
  int iVar2;
  FPurchaseReceipt *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  EInAppPurchaseStatus EVar7;
  bool bVar8;
  int iVar9;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((param_1->bSucceeded == false) && (param_1->Result != Success)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  EVar7 = PurchaseStatusFromOnlineError(param_1);
  this->SavedPurchaseStatus = EVar7;
  if (bVar8) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    FFrame::KismetExecutionMessage
              (L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Success: Storing receipt",Log,
               (FName)0x0);
    pFVar3 = param_2->Object;
    if (((pFVar3->ReceiptOffers).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (pFVar3->ReceiptOffers).AllocatorInstance.Data;
    if ((*(int *)(pFVar4 + 0x38) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)(pFVar4 + 0x30);
    iVar2 = *(int *)(lVar5 + 0x20);
    iVar9 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar9 = 0;
    }
    ::FString::AssignRange(&local_48,*(wchar_t **)(lVar5 + 0x18),iVar9);
    pFVar3 = param_2->Object;
    if (((pFVar3->ReceiptOffers).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (pFVar3->ReceiptOffers).AllocatorInstance.Data;
    if ((*(int *)(pFVar4 + 0x38) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)(pFVar4 + 0x30);
    iVar2 = *(int *)(lVar5 + 0x10);
    iVar9 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar9 = 0;
    }
    ::FString::AssignRange(&local_58,*(wchar_t **)(lVar5 + 8),iVar9);
    pFVar3 = param_2->Object;
    if (((pFVar3->ReceiptOffers).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (pFVar3->ReceiptOffers).AllocatorInstance.Data;
    if ((*(int *)(pFVar4 + 0x38) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)(pFVar4 + 0x30);
    iVar2 = *(int *)(lVar5 + 0x30);
    iVar9 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar9 = 0;
    }
    ::FString::AssignRange(&local_38,*(wchar_t **)(lVar5 + 0x28),iVar9);
    iVar2 = (param_2->Object->TransactionId).Data.ArrayNum;
    iVar9 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar9 = 0;
    }
    ::FString::AssignRange
              (&local_28,(wchar_t *)(param_2->Object->TransactionId).Data.AllocatorInstance.Data,
               iVar9);
    pTVar1 = &this->SavedReceipt;
    if ((TOptional<FInAppPurchaseReceiptInfo2> *)&local_58 != pTVar1) {
      if ((this->SavedReceipt).bIsSet != false) {
        pFVar4 = (this->SavedReceipt).TypedValue.TransactionIdentifier.Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        pFVar4 = (this->SavedReceipt).TypedValue.ValidationInfo.Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        pFVar4 = (this->SavedReceipt).TypedValue.ItemId.Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        pFVar4 = (pTVar1->TypedValue).ItemName.Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
      }
      (pTVar1->TypedValue).ItemName.Data.AllocatorInstance.Data =
           local_58.Data.AllocatorInstance.Data;
      (this->SavedReceipt).TypedValue.ItemName.Data.ArrayNum = local_58.Data.ArrayNum;
      (this->SavedReceipt).TypedValue.ItemName.Data.ArrayMax = local_58.Data.ArrayMax;
      (this->SavedReceipt).TypedValue.ItemId.Data.AllocatorInstance.Data =
           local_48.Data.AllocatorInstance.Data;
      (this->SavedReceipt).TypedValue.ItemId.Data.ArrayNum = local_48.Data.ArrayNum;
      (this->SavedReceipt).TypedValue.ItemId.Data.ArrayMax = local_48.Data.ArrayMax;
      (this->SavedReceipt).TypedValue.ValidationInfo.Data.AllocatorInstance.Data =
           local_38.Data.AllocatorInstance.Data;
      (this->SavedReceipt).TypedValue.ValidationInfo.Data.ArrayNum = local_38.Data.ArrayNum;
      (this->SavedReceipt).TypedValue.ValidationInfo.Data.ArrayMax = local_38.Data.ArrayMax;
      (this->SavedReceipt).TypedValue.TransactionIdentifier.Data.AllocatorInstance.Data =
           local_28.Data.AllocatorInstance.Data;
      (this->SavedReceipt).TypedValue.TransactionIdentifier.Data.ArrayNum = local_28.Data.ArrayNum;
      (this->SavedReceipt).TypedValue.TransactionIdentifier.Data.ArrayMax = local_28.Data.ArrayMax;
      (this->SavedReceipt).bIsSet = true;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    FFrame::KismetExecutionMessage
              (L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Failure: Emptying saved receipts"
               ,Log,(FName)0x0);
    if ((this->SavedReceipt).bIsSet != false) {
      pFVar4 = (this->SavedReceipt).TypedValue.TransactionIdentifier.Data.AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (this->SavedReceipt).TypedValue.ValidationInfo.Data.AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (this->SavedReceipt).TypedValue.ItemId.Data.AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (this->SavedReceipt).TypedValue.ItemName.Data.AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (this->SavedReceipt).bIsSet = false;
    }
  }
  OnPurchaseComplete(this);
  return;
}

// OnPurchaseComplete @ 14ec898b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInAppPurchaseCheckoutCallbackProxy::OnPurchaseComplete(UInAppPurchaseCheckoutCallbackProxy *this)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseCheckoutCallbackProxy::OnPurchaseComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete>
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
            (FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseCheckoutCallbackProxy::OnPurchaseComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete>
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
        (FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseCheckoutCallbackProxy::OnPurchaseComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete>
         )0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete"
                             );
      FVar5 = (FThreadSafeStaticStat<_private:_void___cdecl_UInAppPurchaseCheckoutCallbackProxy::OnPurchaseComplete(void)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_DelayInAppPurchaseComplete>
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
      *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UInAppPurchaseCheckoutCallbackProxy::OnPurchaseComplete'::`5'::<lambda_1>_>
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

// StaticRegisterNativesUInAppPurchaseCheckoutCallbackProxy @ 14ec99810

void __cdecl
UInAppPurchaseCheckoutCallbackProxy::StaticRegisterNativesUInAppPurchaseCheckoutCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TriggerCheckout @ 14ec9cc00

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
UInAppPurchaseCheckoutCallbackProxy::TriggerCheckout
          (UInAppPurchaseCheckoutCallbackProxy *this,APlayerController *param_1,
          FInAppPurchaseProductRequest2 *param_2)

{
  FScriptContainerElement *pFVar1;
  FUniqueNetId *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  FModuleManager *this_00;
  FName *pFVar8;
  FOnlineSubsystemModule *pFVar9;
  IOnlineSubsystem *pIVar10;
  ULocalPlayer *this_01;
  undefined8 *puVar11;
  ulong64 uVar12;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar13;
  wchar_t *pwVar14;
  longlong *plVar15;
  undefined1 auStackY_208 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1d0;
  FDelegateAllocation local_1c8;
  FWeakObjectPtr local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  FName local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong *local_178;
  TReferenceControllerBase<1> *local_170;
  undefined8 local_168;
  UWorld *local_160;
  UInAppPurchaseCheckoutCallbackProxy *local_158;
  FString local_150;
  FDestructionSentinel local_140;
  FDestructionSentinel local_128;
  FDelegateAllocation *local_110;
  FName local_108;
  FName local_100;
  TSharedPtr<FUniqueNetId_const_,1> local_f8;
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
  FUniqueNetIdRepl local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((this->SavedReceipt).bIsSet != false) {
    pFVar1 = (this->SavedReceipt).TypedValue.TransactionIdentifier.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->SavedReceipt).TypedValue.ValidationInfo.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->SavedReceipt).TypedValue.ItemId.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->SavedReceipt).TypedValue.ItemName.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->SavedReceipt).bIsSet = false;
  }
  this->SavedPurchaseStatus = Failed;
  local_1b8.ObjectIndex = 0;
  local_1b8.ObjectSerialNumber = 0;
  local_168 = 0;
  FWeakObjectPtr::operator=(&local_1b8,(FObjectPtr)&local_168);
  (this->WorldPtr).WeakPtr = local_1b8;
  if (param_1 == (APlayerController *)0x0) {
    local_1b0 = 0;
    FFrame::KismetExecutionMessage
              (L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state",Warning,(FName)0x0);
    return;
  }
  local_160 = AActor::GetWorld((AActor *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_160 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_160);
  }
  FWeakObjectPtr::operator=(&(this->WorldPtr).WeakPtr,(FObjectPtr)&local_160);
  bVar4 = true;
  if (param_1->_padding_ == 0) {
    local_1a8 = 0;
    pwVar14 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state";
  }
  else {
    local_1a0 = 0;
    this_00 = FModuleManager::Get();
    pFVar8 = ::FName::FName(&local_108,"OnlineSubsystem");
    bVar6 = FModuleManager::IsModuleLoaded(this_00,*pFVar8);
    if (bVar6) {
      pFVar8 = ::FName::FName(&local_100,"OnlineSubsystem");
      pFVar9 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar8);
      cVar7 = (**(code **)(pFVar9->_padding_ + 0x70))(pFVar9,0);
      if (cVar7 != '\0') {
        local_198.ComparisonIndex.Value = 0;
        local_198.Number = 0;
        pIVar10 = IOnlineSubsystem::Get(&local_198);
        if (pIVar10 != (IOnlineSubsystem *)0x0) {
          (**(code **)(pIVar10->_padding_ + 0x98))(pIVar10,&local_178);
          if (local_178 == (longlong *)0x0) {
            local_190 = 0;
            FFrame::KismetExecutionMessage
                      (L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
                       ,Warning,(FName)0x0);
          }
          else {
            this_01 = APlayerController::GetLocalPlayer(param_1);
            ULocalPlayer::GetUniqueNetIdFromCachedControllerId(this_01,&local_78);
            bVar6 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&local_78);
            if (bVar6) {
              local_1d0.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              bVar4 = false;
              local_1c8.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_1d0,(FWriteAccessScope *)&local_128);
              local_110 = &local_1c8;
              puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_1c8);
              if (puVar11 != (undefined8 *)0x0) {
                *puVar11 = &
                           ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar12 = FDelegateHandle::GenerateNewID();
                puVar11[2] = uVar12;
                *puVar11 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseCheckoutCallbackProxy____A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                puVar11[3] = 0;
                local_158 = this;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_158);
                puVar11[4] = OnCheckoutComplete;
              }
              if (local_128.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
              }
              bVar6 = param_2->bIsConsumable;
              local_e8._0_8_ = (FPurchaseOfferEntry *)0x0;
              local_90 = 0;
              local_c8._16_8_ = 0;
              uStack_b0 = 0;
              local_80 = 0;
              local_e8._8_4_ = 0;
              local_e8._12_4_ = 0;
              local_e8._16_8_ = (FScriptContainerElement *)0x0;
              local_e8._24_4_ = 0;
              local_e8._28_4_ = -1;
              local_c8._0_8_ = (FScriptContainerElement *)0x0;
              local_c8._8_8_ = 0;
              local_a8 = (void *)0x0;
              local_a0 = 0;
              local_9c = 0x80;
              local_98 = 0xffffffff;
              local_94 = 0;
              local_88 = (void *)0x0;
              ::FString::FString(&local_150,"");
              FPurchaseCheckoutRequest::AddPurchaseOffer
                        ((FPurchaseCheckoutRequest *)local_e8,&local_150,&param_2->ProductIdentifier
                         ,1,bVar6);
              if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_150.Data.AllocatorInstance.Data);
              }
              plVar15 = local_178;
              if ((local_178 == (longlong *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), plVar15 = local_178, bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcVar3 = *(code **)(*plVar15 + 0x18);
              pTVar13 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&local_78,&local_f8);
              if ((pTVar13->Object == (FUniqueNetId *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x44d,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar2 = pTVar13->Object;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_f8.SharedReferenceCount.ReferenceController);
              (*pcVar3)(plVar15,pFVar2,local_e8,&local_1d0);
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
              if ((FPurchaseOfferEntry *)local_e8._0_8_ != (FPurchaseOfferEntry *)0x0) {
                FMemory::Free((void *)local_e8._0_8_);
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_1d0,(FWriteAccessScope *)&local_140);
              if ((local_1c8.DelegateSize != 0) &&
                 (local_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_1c8.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_1c8,0,0,0x10);
                local_1c8.DelegateSize = 0;
              }
              if (local_140.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
              }
              if (local_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_1c8.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1d0.AccessDetector)
              ;
            }
            else {
              local_188 = 0;
              FFrame::KismetExecutionMessage
                        (L"UInAppPurchaseCallbackProxy::Trigger - Invalid player UniqueNetId",
                         Warning,(FName)0x0);
            }
            FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_78);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_170);
          if (!bVar4) {
            return;
          }
          goto LAB_14ec9d154;
        }
      }
    }
    local_180 = 0;
    pwVar14 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
  }
  FFrame::KismetExecutionMessage(pwVar14,Warning,(FName)0x0);
LAB_14ec9d154:
  OnPurchaseComplete(this);
  return;
}

// execCreateProxyObjectForInAppPurchaseCheckout @ 14eca23d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UInAppPurchaseCheckoutCallbackProxy::execCreateProxyObjectForInAppPurchaseCheckout
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  APlayerController *pAVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UInAppPurchaseCheckoutCallbackProxy *this;
  longlong *plVar5;
  FInAppPurchaseProductRequest2 *pFVar6;
  undefined1 auStack_e8 [32];
  APlayerController *local_c8;
  FInAppPurchaseProductRequest2 local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
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
  local_c0.ProductIdentifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ProductIdentifier.Data.ArrayNum = 0;
  local_c0.ProductIdentifier.Data.ArrayMax = 0;
  local_c0.bIsConsumable = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  pAVar2 = local_c8;
  pFVar6 = &local_c0;
  if ((FInAppPurchaseProductRequest2 *)param_2->MostRecentPropertyAddress !=
      (FInAppPurchaseProductRequest2 *)0x0) {
    pFVar6 = (FInAppPurchaseProductRequest2 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar3;
  this = (UInAppPurchaseCheckoutCallbackProxy *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  TriggerCheckout(this,pAVar2,pFVar6);
  *(UInAppPurchaseCheckoutCallbackProxy **)param_3 = this;
  if (local_c0.ProductIdentifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.ProductIdentifier.Data.AllocatorInstance.Data);
  }
  return;
}

