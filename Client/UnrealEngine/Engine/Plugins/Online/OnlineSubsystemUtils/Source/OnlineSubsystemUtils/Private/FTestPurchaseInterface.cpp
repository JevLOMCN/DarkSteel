// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 8

// FTestPurchaseInterface @ 14ecd85e0

/* WARNING: Enum "Type": Some values do not have unique names */

FTestPurchaseInterface * __thiscall
FTestPurchaseInterface::FTestPurchaseInterface(FTestPurchaseInterface *this,FString *param_1)

{
  FString local_18;
  
  *(undefined4 *)((longlong)&(this->CheckoutRequest).AccountId.field0_0x0 + 0xc) = 0xffffffff;
  (this->SubsystemName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubsystemName).Data.ArrayNum = 0;
  (this->SubsystemName).Data.ArrayMax = 0;
  this->OnlineSub = (IOnlineSubsystem *)0x0;
  (this->LocalUserId).Object = (FUniqueNetId *)0x0;
  (this->LocalUserId).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CheckoutRequest).PurchaseOffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheckoutRequest).PurchaseOffers.ArrayNum = 0;
  (this->CheckoutRequest).PurchaseOffers.ArrayMax = 0;
  (this->CheckoutRequest).AccountId.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->CheckoutRequest).AccountId.field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->CheckoutRequest).AdditionalCheckoutProperties = 0;
  *(undefined8 *)&(this->CheckoutRequest).AdditionalCheckoutProperties.field_0x8 = 0;
  *(undefined8 *)&(this->CheckoutRequest).AdditionalCheckoutProperties.field_0x20 = 0;
  *(undefined4 *)&(this->CheckoutRequest).AdditionalCheckoutProperties.field_0x28 = 0;
  *(undefined4 *)&(this->CheckoutRequest).AdditionalCheckoutProperties.field_0x2c = 0x80;
  *(undefined4 *)&(this->CheckoutRequest).AdditionalCheckoutProperties.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CheckoutRequest).AdditionalCheckoutProperties.field_0x34 = 0;
  *(undefined8 *)&(this->CheckoutRequest).AdditionalCheckoutProperties.field_0x40 = 0;
  *(undefined4 *)&(this->CheckoutRequest).AdditionalCheckoutProperties.field_0x48 = 0;
  if (3 < (byte)LogOnlinePurchase._0_1_) {
    ::FString::PrintfImpl(&local_18,L"FTestPurchaseInterface::FTestPurchaseInterface");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePurchase);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  ::FString::operator=(&this->SubsystemName,param_1);
  return this;
}

// ~FTestPurchaseInterface @ 14ecdb400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestPurchaseInterface::~FTestPurchaseInterface(FTestPurchaseInterface *this)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  if (3 < (byte)LogOnlinePurchase._0_1_) {
    ::FString::PrintfImpl(&local_18,L"FTestPurchaseInterface::~FTestPurchaseInterface");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePurchase);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  FPurchaseCheckoutRequest::~FPurchaseCheckoutRequest(&this->CheckoutRequest);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LocalUserId).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SubsystemName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FinishTest @ 14ece6b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestPurchaseInterface::FinishTest(FTestPurchaseInterface *this)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  if (this != (FTestPurchaseInterface *)0x0) {
    if (3 < (byte)LogOnlinePurchase._0_1_) {
      ::FString::PrintfImpl(&local_18,L"FTestPurchaseInterface::~FTestPurchaseInterface");
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePurchase);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    FPurchaseCheckoutRequest::~FPurchaseCheckoutRequest(&this->CheckoutRequest);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->LocalUserId).SharedReferenceCount.ReferenceController);
    pFVar1 = (this->SubsystemName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(this,0x98);
  }
  return;
}

// OnCheckoutComplete @ 14eceb5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestPurchaseInterface::OnCheckoutComplete
          (FTestPurchaseInterface *this,FOnlineError *param_1,
          TSharedRef<FPurchaseReceipt,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FDelegateAllocation local_90;
  FString local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  FString local_38;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  if (4 < (byte)LogOnlinePurchase._0_1_) {
    FOnlineError::ToLogString(param_1,&local_38);
    ::FString::PrintfImpl(&local_80,L"Checkout completed with Result=[%s]");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePurchase);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  plVar3 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x98))(this->OnlineSub,local_28);
  if ((*plVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar3 = (longlong *)*plVar3;
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_90.DelegateSize = 0;
  pcVar1 = *(code **)(*plVar3 + 0x38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)&local_58);
  local_40 = &local_90;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_90);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestPurchaseInterface____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnQueryReceiptsPostCheckout;
    puVar4[3] = this;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (((this->LocalUserId).Object == (FUniqueNetId *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*pcVar1)(plVar3,(this->LocalUserId).Object,1,&local_98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)&local_70);
  if ((local_90.DelegateSize != 0) &&
     (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_90.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_90,0,0,0x10);
    local_90.DelegateSize = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_90.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return;
}

// OnQueryReceiptsPostCheckout @ 14eceffe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestPurchaseInterface::OnQueryReceiptsPostCheckout
          (FTestPurchaseInterface *this,FOnlineError *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (4 < (byte)LogOnlinePurchase._0_1_) {
    FOnlineError::ToLogString(param_1,&local_28);
    ::FString::PrintfImpl(&local_38,L"Query receipts post-checkout completed with Result=[%s]");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePurchase);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  plVar3 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x98))(this->OnlineSub,local_18);
  if ((*plVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar3 = (longlong *)*plVar3;
  pcVar1 = *(code **)(*plVar3 + 0x40);
  if (((this->LocalUserId).Object == (FUniqueNetId *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*pcVar1)(plVar3,(this->LocalUserId).Object,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  DumpReceiptInfo(&local_48);
  FinishTest(this);
  DestructItems<FPurchaseReceipt,int>
            ((FPurchaseReceipt *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FPurchaseReceipt *)local_48.AllocatorInstance.Data != (FPurchaseReceipt *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// OnQueryReceiptsPreCheckout @ 14ecf0160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestPurchaseInterface::OnQueryReceiptsPreCheckout
          (FTestPurchaseInterface *this,FOnlineError *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> local_a0;
  FString local_90;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FString local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  if (4 < (byte)LogOnlinePurchase._0_1_) {
    FOnlineError::ToLogString(param_1,&local_48);
    ::FString::PrintfImpl(&local_90,L"Query receipts pre-checkout completed with Result=[%s]");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePurchase);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  plVar3 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x98))(this->OnlineSub,local_38);
  if ((*plVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar3 = (longlong *)*plVar3;
  pcVar1 = *(code **)(*plVar3 + 0x40);
  if (((this->LocalUserId).Object == (FUniqueNetId *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*pcVar1)(plVar3,(this->LocalUserId).Object,&local_a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  DumpReceiptInfo(&local_a0);
  plVar3 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x98))(this->OnlineSub,local_28);
  if ((*plVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar3 = (longlong *)*plVar3;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  pcVar1 = *(code **)(*plVar3 + 0x18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_68);
  local_50 = &local_b0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_b0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestPurchaseInterface____A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnCheckoutComplete;
    puVar4[3] = this;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (((this->LocalUserId).Object == (FUniqueNetId *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*pcVar1)(plVar3,(this->LocalUserId).Object,&this->CheckoutRequest,&local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_80);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  DestructItems<FPurchaseReceipt,int>
            ((FPurchaseReceipt *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
  if ((FPurchaseReceipt *)local_a0.AllocatorInstance.Data != (FPurchaseReceipt *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return;
}

// StartNextTest @ 14ecfae50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestPurchaseInterface::StartNextTest(FTestPurchaseInterface *this)

{
  FUniqueNetId *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  FString local_90;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  void *local_38 [2];
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  plVar5 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x98))(this->OnlineSub,local_48);
  if ((*plVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar5 = (longlong *)*plVar5;
  pcVar2 = *(code **)(*plVar5 + 8);
  if (((this->LocalUserId).Object == (FUniqueNetId *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar4 = (*pcVar2)(plVar5,(this->LocalUserId).Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  if (cVar4 == '\0') {
    if (2 < (byte)LogOnlinePurchase._0_1_) {
      if (((this->LocalUserId).Object == (FUniqueNetId *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->LocalUserId).Object;
      (**(code **)(*(longlong *)pFVar1 + 0x38))(pFVar1,local_38);
      ::FString::PrintfImpl(&local_90,L"Purchasing not allowed for user %s");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePurchase);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
    FinishTest(this);
  }
  else {
    plVar5 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x98))(this->OnlineSub,local_28);
    if ((*plVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar5 = (longlong *)*plVar5;
    local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    pcVar2 = *(code **)(*plVar5 + 0x38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a8,(FWriteAccessScope *)&local_68);
    local_50 = &local_a0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_a0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFTestPurchaseInterface____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[4] = OnQueryReceiptsPreCheckout;
      puVar6[3] = this;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (((this->LocalUserId).Object == (FUniqueNetId *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*pcVar2)(plVar5,(this->LocalUserId).Object,1,&local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a8,(FWriteAccessScope *)&local_80);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  return;
}

// Test @ 14ecfdf80

/* WARNING: Removing unreachable block (ram,0x00014ecfe35d) */
/* WARNING: Removing unreachable block (ram,0x00014ecfe36c) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTestPurchaseInterface::Test
          (FTestPurchaseInterface *this,UWorld *param_1,FString *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  IOnlineSubsystem *pIVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  FString local_128;
  FString local_118;
  undefined4 local_108;
  FString local_100;
  FString local_f0;
  FName local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FName local_88;
  undefined1 local_80 [8];
  TReferenceControllerBase<1> *local_78;
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  undefined1 local_50 [8];
  TReferenceControllerBase<1> *local_48;
  
  if (3 < (byte)LogOnlinePurchase._0_1_) {
    ::FString::PrintfImpl(&local_d8,L"FTestPurchaseInterface::Test");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePurchase);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  iVar2 = (this->SubsystemName).Data.ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if (iVar6 == 0) {
    local_e0.ComparisonIndex.Value = 0;
    local_e0.Number = 0;
    pFVar7 = &local_e0;
  }
  else if (iVar2 == 0) {
    pFVar7 = ::FName::FName(&local_88,L"",FNAME_Find);
  }
  else {
    pFVar7 = ::FName::FName(&local_88,(wchar_t *)(this->SubsystemName).Data.AllocatorInstance.Data,
                            FNAME_Find);
  }
  pIVar8 = IOnlineSubsystem::Get(pFVar7);
  this->OnlineSub = pIVar8;
  if (pIVar8 == (IOnlineSubsystem *)0x0) {
    if ((byte)LogOnlinePurchase._0_1_ < 3) goto LAB_14ecfe4f9;
    ::FString::PrintfImpl(&local_98,L"Failed to get OSS interface for %s.");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePurchase);
    local_c8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
  }
  else {
    plVar9 = (longlong *)(**(code **)(pIVar8->_padding_ + 0x80))(pIVar8,local_80);
    lVar12 = *plVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
    if (lVar12 != 0) {
      plVar9 = (longlong *)
               (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_60);
      if ((*plVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar10 = (undefined8 *)
                (**(code **)(*(longlong *)*plVar9 + 0x110))((longlong *)*plVar9,local_70,0);
      if (&this->LocalUserId != (TSharedPtr<FUniqueNetId_const_,1> *)puVar10) {
        (this->LocalUserId).Object = (FUniqueNetId *)*puVar10;
        *puVar10 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->LocalUserId).SharedReferenceCount,(FSharedReferencer<1> *)(puVar10 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
    }
    if ((this->LocalUserId).Object == (FUniqueNetId *)0x0) {
      if ((byte)LogOnlinePurchase._0_1_ < 3) goto LAB_14ecfe4f9;
      ::FString::PrintfImpl(&local_a8,L"No logged in user.");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePurchase);
      local_c8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    }
    else {
      plVar9 = (longlong *)
               (**(code **)(this->OnlineSub->_padding_ + 0x98))(this->OnlineSub,local_50);
      lVar12 = *plVar9;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
      if (lVar12 == 0) {
        if ((byte)LogOnlinePurchase._0_1_ < 3) goto LAB_14ecfe4f9;
        ::FString::PrintfImpl(&local_b8,L"Failed to get Purchase interface for %s");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePurchase);
        local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      }
      else {
        iVar2 = param_3->ArrayNum;
        if (0 < iVar2) {
          pFVar11 = (param_3->AllocatorInstance).Data;
          pFVar13 = pFVar11 + (longlong)iVar2 * 0x10;
          while( true ) {
            if (param_3->ArrayNum != iVar2) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res8);
            }
            if (pFVar11 == pFVar13) {
              StartNextTest(this);
              return;
            }
            _Src = *(void **)pFVar11;
            local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_f0.Data.ArrayNum = *(int *)(pFVar11 + 8);
            lVar12 = (longlong)local_f0.Data.ArrayNum;
            if (local_f0.Data.ArrayNum == 0) {
              local_f0.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_f0,
                         local_f0.Data.ArrayNum,&local_f0.Data.ArrayMax);
              memcpy(local_f0.Data.AllocatorInstance.Data,_Src,lVar12 * 2);
            }
            local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_100.Data.ArrayNum = (param_2->Data).ArrayNum;
            lVar12 = (longlong)local_100.Data.ArrayNum;
            pFVar3 = (param_2->Data).AllocatorInstance.Data;
            if (local_100.Data.ArrayNum == 0) {
              local_100.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_100.Data.ArrayNum,0,(ForAnyElementType *)&local_100,
                         local_100.Data.ArrayNum,&local_100.Data.ArrayMax);
              memcpy(local_100.Data.AllocatorInstance.Data,pFVar3,lVar12 * 2);
            }
            ::FString::FString(&local_128,&local_100);
            ::FString::FString(&local_118,&local_f0);
            pFVar3 = (this->CheckoutRequest).PurchaseOffers.AllocatorInstance.Data;
            local_108 = 1;
            if (((pFVar3 <= (FScriptContainerElement *)&local_128) &&
                ((FScriptContainerElement *)&local_128 <
                 pFVar3 + (longlong)(this->CheckoutRequest).PurchaseOffers.ArrayMax * 0x28)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) break;
            iVar6 = (this->CheckoutRequest).PurchaseOffers.ArrayNum;
            piVar1 = &(this->CheckoutRequest).PurchaseOffers.ArrayMax;
            if (iVar6 == *piVar1) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x828,(ForAnyElementType *)&this->CheckoutRequest,piVar1);
            }
            (this->CheckoutRequest).PurchaseOffers.ArrayNum = iVar6 + 1;
            pFVar3 = (this->CheckoutRequest).PurchaseOffers.AllocatorInstance.Data;
            *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x28) = 0;
            pFVar3 = pFVar3 + (longlong)iVar6 * 0x28;
            *(FScriptContainerElement **)pFVar3 = local_128.Data.AllocatorInstance.Data;
            *(int *)(pFVar3 + 8) = local_128.Data.ArrayNum;
            *(int *)(pFVar3 + 0xc) = local_128.Data.ArrayMax;
            *(undefined8 *)(pFVar3 + 0x10) = 0;
            *(FScriptContainerElement **)(pFVar3 + 0x10) = local_118.Data.AllocatorInstance.Data;
            *(int *)(pFVar3 + 0x18) = local_118.Data.ArrayNum;
            *(int *)(pFVar3 + 0x1c) = local_118.Data.ArrayMax;
            *(undefined4 *)(pFVar3 + 0x20) = local_108;
            local_118.Data.ArrayNum = 0;
            local_118.Data.ArrayMax = 0;
            local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_128.Data.ArrayNum = 0;
            local_128.Data.ArrayMax = 0;
            local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data.AllocatorInstance.Data);
            }
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
            pFVar11 = pFVar11 + 0x10;
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((byte)LogOnlinePurchase._0_1_ < 3) goto LAB_14ecfe4f9;
        ::FString::PrintfImpl(&local_c8,L"No offer ids specified for purchase");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePurchase);
      }
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
LAB_14ecfe4f9:
  FinishTest(this);
  return;
}

