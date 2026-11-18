// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 68

// FOnlineSubsystemImpl @ 14eb30e20

FOnlineSubsystemImpl * __thiscall
FOnlineSubsystemImpl::FOnlineSubsystemImpl(FOnlineSubsystemImpl *this,FName param_1,FName param_2)

{
  FTSTicker *pFVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  TMulticastDelegate<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  *this_00;
  
  pFVar1 = FTSTicker::GetCoreTicker();
  pTVar3 = (TNode *)0x0;
  *(undefined ***)this = &___7IOnlineSubsystem__6B_;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 2;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 2;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 2;
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)&this->field_0x88,0.0,pFVar1);
  this->SubsystemName = param_1;
  *(undefined ***)this = &_vftable__for__IOnlineSubsystem__;
  *(undefined ***)&this->field_0x88 = &_vftable__for__FTSTickerObjectBase__;
  this->InstanceName = param_2;
  this->bForceDedicated = false;
  this->NamedInterfaces = (UNamedInterfaces *)0x0;
  pTVar2 = ::operator_new(0x20);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar2->Item = 0;
    *(undefined8 *)&(pTVar2->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar2->Item).field_0x10 = 0;
    pTVar2->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar2->Item = 0;
    *(undefined8 *)&(pTVar2->Item).field_0x8 = 0;
    *(undefined4 *)&(pTVar2->Item).field_0x10 = 0;
    pTVar3 = pTVar2;
  }
  (this->NextTickQueue).Tail = pTVar3;
  (this->NextTickQueue).Head = pTVar3;
  (this->CurrentTickBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentTickBuffer).ArrayNum = 0;
  (this->CurrentTickBuffer).ArrayMax = 0;
  this->bTickerStarted = true;
  this_00 = FCoreDelegates::TSOnConfigSectionsChanged();
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  ::AddRaw<FOnlineSubsystemImpl>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
              *)this_00,(FOnlineSubsystemImpl *)&stack0x00000008,(pmf_5d550794 *)this);
  *(undefined ***)this = &_vftable__for__IOnlineSubsystem__;
  *(undefined ***)&this->field_0x88 = &_vftable__for__FTSTickerObjectBase__;
  GetBuildUniqueId();
  return this;
}

// FOnlineSubsystemImpl @ 14eb30fa0

FOnlineSubsystemImpl * __thiscall
FOnlineSubsystemImpl::FOnlineSubsystemImpl
          (FOnlineSubsystemImpl *this,FName param_1,FName param_2,FTSTicker *param_3)

{
  TNode *pTVar1;
  TNode *pTVar2;
  TMulticastDelegate<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  *this_00;
  
  pTVar2 = (TNode *)0x0;
  *(undefined ***)this = &___7IOnlineSubsystem__6B_;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 2;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 2;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 2;
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)&this->field_0x88,0.0,param_3);
  this->SubsystemName = param_1;
  *(undefined ***)this = &_vftable__for__IOnlineSubsystem__;
  this->InstanceName = param_2;
  *(undefined ***)&this->field_0x88 = &_vftable__for__FTSTickerObjectBase__;
  this->bForceDedicated = false;
  this->NamedInterfaces = (UNamedInterfaces *)0x0;
  pTVar1 = ::operator_new(0x20);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x10 = 0;
    pTVar1->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = 0;
    *(undefined4 *)&(pTVar1->Item).field_0x10 = 0;
    pTVar2 = pTVar1;
  }
  (this->NextTickQueue).Tail = pTVar2;
  (this->NextTickQueue).Head = pTVar2;
  (this->CurrentTickBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentTickBuffer).ArrayNum = 0;
  (this->CurrentTickBuffer).ArrayMax = 0;
  this->bTickerStarted = true;
  this_00 = FCoreDelegates::TSOnConfigSectionsChanged();
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  ::AddRaw<FOnlineSubsystemImpl>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
              *)this_00,(FOnlineSubsystemImpl *)&stack0x00000008,(pmf_5d550794 *)this);
  return this;
}

// ~FOnlineSubsystemImpl @ 14eb35540

void __thiscall FOnlineSubsystemImpl::~FOnlineSubsystemImpl(FOnlineSubsystemImpl *this)

{
  FScriptContainerElement *pFVar1;
  TNode *pTVar2;
  
  *(undefined ***)this = &_vftable__for__IOnlineSubsystem__;
  *(undefined ***)&this->field_0x88 = &_vftable__for__FTSTickerObjectBase__;
  DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (this->CurrentTickBuffer).AllocatorInstance.Data,(this->CurrentTickBuffer).ArrayNum);
  pFVar1 = (this->CurrentTickBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->NextTickQueue).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->NextTickQueue).Tail = pTVar2->NextNode;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar2->Item);
    ::operator_delete(pTVar2,0x20);
    pTVar2 = (this->NextTickQueue).Tail;
  }
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)&this->field_0x88);
  IOnlineSubsystem::~IOnlineSubsystem((IOnlineSubsystem *)this);
  return;
}

// operator() @ 14eb7fcb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FOnlineSubsystemImpl::HandlePresenceExecCommands'::__l8::<lambda_1>::operator()
          (void *this,FUniqueNetId *param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  longlong *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  longlong *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  void *local_48 [2];
  void *local_38 [2];
  FString local_28;
  
  bVar6 = false;
  if (3 < (byte)LogOnline._0_1_) {
    (**(code **)(*(longlong *)param_1 + 0x38))(param_1,local_48);
    ::FString::PrintfImpl(&local_98,L"Presence [%s]");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  if (!param_2) {
    if ((byte)LogOnline._0_1_ < 4) {
      return;
    }
    ::FString::PrintfImpl(&local_58,L"Failed to query presence");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
    return;
  }
  (**(code **)(**(longlong **)this + 200))(*(longlong **)this,&local_a8);
  if (local_a8 == (longlong *)0x0) goto LAB_14eb7ff8c;
  local_b8 = (longlong *)0x0;
  pTStack_b0 = (TReferenceControllerBase<1> *)0x0;
  if ((local_a8 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (**(code **)(*local_a8 + 0x68))(local_a8,param_1,&local_b8);
  if ((iVar4 == 0) && (local_b8 != (longlong *)0x0)) {
    if (3 < (byte)LogOnline._0_1_) {
      if ((local_b8 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = local_b8;
      FOnlineUserPresenceStatus::ToDebugString
                ((FOnlineUserPresenceStatus *)(local_b8 + 4),&local_28);
      plVar1 = (longlong *)*plVar1;
      if (plVar1 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar1 + 0x38))(plVar1,local_38);
        if (*(int *)(lVar5 + 8) == 0) {
          bVar6 = true;
        }
        else {
          bVar6 = true;
        }
      }
      ::FString::PrintfImpl
                (&local_78,
                 L"FOnlineUserPresence {Online: %d Playing: %d ThisGame: %d Joinable: %d VoiceSupport: %d SessionId: %s Status: %s"
                );
      if ((bVar6) && (local_38[0] != (void *)0x0)) {
        FMemory::Free(local_38[0]);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_88,L"- %s");
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      local_68.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        local_68.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      }
LAB_14eb7ff79:
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (3 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl(&local_68,L"Failed to get cached presence");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    goto LAB_14eb7ff79;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
LAB_14eb7ff8c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
  return;
}

// operator() @ 14eb80010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FOnlineSubsystemImpl::HandleStoreExecCommands'::__l35::<lambda_1>::operator()
          (void *this,bool param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          FString *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  TSharedRef<FOnlineStoreOffer,1> *pTVar4;
  TSharedRef<FOnlineStoreOffer,1> *pTVar5;
  undefined1 local_res10 [8];
  TSharedRef<FOnlineStoreOffer,1> *local_38;
  undefined8 local_30;
  FString local_28;
  FString local_18;
  
  if ((!param_1) && (1 < (byte)LogOnline._0_1_)) {
    ::FString::PrintfImpl(&local_28,L"QueryOffersById failed: %s");
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  local_38 = (TSharedRef<FOnlineStoreOffer,1> *)0x0;
  local_30 = 0;
  if ((*(longlong *)this == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(**(longlong **)this + 0x48))(*(longlong **)this,&local_38);
  iVar2 = (int)local_30;
  pTVar5 = local_38 + (int)local_30;
  pTVar4 = local_38;
  while( true ) {
    if ((int)local_30 != iVar2) {
      `TCheckedPointerIterator<TSharedRef<FOnlineStoreOffer,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pTVar4 == pTVar5) break;
    if (4 < (byte)LogOnline._0_1_) {
      FText::ToString(&pTVar4->Object->PriceText);
      FText::ToString(&pTVar4->Object->Title);
      ::FString::PrintfImpl(&local_18,L"Product Id=%s, Title=%s, Price=%s");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pTVar4 = pTVar4 + 1;
  }
  DestructItems<TSharedRef<FOnlineStoreOffer,1>,int>(local_38,(int)local_30);
  if (local_38 != (TSharedRef<FOnlineStoreOffer,1> *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// operator() @ 14eb80210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FOnlineSubsystemImpl::HandlePurchaseExecCommands'::__l101::<lambda_1>::operator()
          (void *this,FOnlineError *param_1,TSharedRef<FPurchaseReceipt,1> *param_2)

{
  int iVar1;
  int iVar2;
  FPurchaseReceipt *pFVar3;
  longlong lVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [8];
  FString local_48;
  FString local_38;
  
  if (4 < (byte)LogOnline._0_1_) {
    ::LexToString(param_2->Object->TransactionState);
    if (param_1->bSucceeded == false) {
      FText::ToString(&param_1->ErrorMessage);
      ::FString::PrintfImpl(&local_48,L"Failure ErrorCode=%s, Message=%s, Raw=%s");
    }
    else {
      ::FString::FString(&local_48,L"Succeeded");
    }
    ::FString::PrintfImpl(&local_38,L"Checkout Result=%s TransactionId=%s TransactionState=%s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = param_2->Object;
  pFVar7 = (pFVar3->ReceiptOffers).AllocatorInstance.Data;
  iVar1 = (pFVar3->ReceiptOffers).ArrayNum;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x40;
  pFVar6 = pFVar7 + 0x38;
  while( true ) {
    if ((pFVar3->ReceiptOffers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPurchaseReceipt::FReceiptOfferEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar8) break;
    if (4 < (byte)LogOnline._0_1_) {
      ::FString::PrintfImpl(&local_38,L"  OfferEntry Namespace=%s OfferId=%s Quantity=%d");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    iVar2 = *(int *)pFVar6;
    lVar4 = *(longlong *)(pFVar6 + -8);
    lVar5 = (longlong)iVar2 * 0x38 + lVar4;
    while( true ) {
      if (*(int *)pFVar6 != iVar2) {
        `TCheckedPointerIterator<FPurchaseReceipt::FLineItemInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (lVar4 == lVar5) break;
      if (4 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl(&local_48,L"    LineItem Name=%s UniqueId=%s ValidationInfo=%s");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      lVar4 = lVar4 + 0x38;
    }
    pFVar7 = pFVar7 + 0x40;
    pFVar6 = pFVar6 + 0x40;
  }
  return;
}

// DumpReceipts @ 14ebefb80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineSubsystemImpl::DumpReceipts(FOnlineSubsystemImpl *this,FUniqueNetId *param_1)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  int *piVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint local_res8 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FPurchaseReceipt *local_d8;
  undefined8 local_d0;
  uint local_c8;
  int *local_c0;
  FString local_b8;
  longlong *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FScriptContainerElement *local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  (**(code **)(*(longlong *)this + 0x98))();
  if (local_a8 != (longlong *)0x0) {
    local_d8 = (FPurchaseReceipt *)0x0;
    local_d0 = 0;
    if ((local_a8 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*local_a8 + 0x40))(local_a8,param_1,&local_d8);
    uVar6 = (ulonglong)(int)(uint)local_d0;
    local_c8 = (uint)local_d0;
    if ((int)(uint)local_d0 < 1) {
      if (3 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl(&local_b8,L"No receipts!");
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if ((FPurchaseReceipt *)local_b8.Data.AllocatorInstance.Data != (FPurchaseReceipt *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)(local_d8 + uVar6);
      piVar9 = &(local_d8->ReceiptOffers).ArrayNum;
      while( true ) {
        FVar3.Data = local_b8.Data.AllocatorInstance.Data;
        local_c0 = piVar9;
        if ((uint)local_d0 != (int)uVar6) {
          `TCheckedPointerIterator<FPurchaseReceipt,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if ((FPurchaseReceipt *)(piVar9 + -10) == (FPurchaseReceipt *)FVar3.Data) break;
        if (3 < (byte)LogOnline._0_1_) {
          ::LexToString(*(EPurchaseTransactionState *)(piVar9 + -4));
          ::FString::PrintfImpl(&local_90,L"Receipt: %s %s");
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          if (3 < (byte)LogOnline._0_1_) {
            ::FString::PrintfImpl(&local_80,L"-Offers:");
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
          }
        }
        local_res8[0] = *piVar9;
        uVar6 = (ulonglong)(int)local_res8[0];
        pFVar10 = (((TArray<FPurchaseReceipt::FReceiptOfferEntry,TSizedDefaultAllocator<32>_> *)
                   (piVar9 + -2))->AllocatorInstance).Data;
        local_98 = pFVar10 + uVar6 * 0x40;
        pFVar8 = pFVar10 + 0x38;
        while( true ) {
          pFVar4 = local_98;
          if (*piVar9 != (uint)uVar6) {
            `TCheckedPointerIterator<FPurchaseReceipt::FReceiptOfferEntry_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_res18);
          }
          if (pFVar10 == pFVar4) break;
          if (3 < (byte)LogOnline._0_1_) {
            ::FString::PrintfImpl(&local_70,L" -Namespace: %s Id: %s Quantity: %d");
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
            if (3 < (byte)LogOnline._0_1_) {
              ::FString::PrintfImpl(&local_60,L" -LineItems:");
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
              if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60.Data.AllocatorInstance.Data);
              }
            }
          }
          iVar1 = *(int *)pFVar8;
          lVar7 = *(longlong *)(pFVar8 + -8);
          lVar11 = (longlong)iVar1 * 0x38 + lVar7;
          while( true ) {
            if (*(int *)pFVar8 != iVar1) {
              `TCheckedPointerIterator<FPurchaseReceipt::FLineItemInfo_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_res20);
            }
            if (lVar7 == lVar11) break;
            if (3 < (byte)LogOnline._0_1_) {
              ::FString::PrintfImpl(&local_50,L"  -Name: %s Id: %s ValidationInfo: %d bytes");
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
              if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_50.Data.AllocatorInstance.Data);
              }
            }
            lVar7 = lVar7 + 0x38;
          }
          pFVar10 = pFVar10 + 0x40;
          pFVar8 = pFVar8 + 0x40;
          uVar6 = (ulonglong)local_res8[0];
          piVar9 = local_c0;
        }
        piVar9 = piVar9 + 0xc;
        uVar6 = (ulonglong)local_c8;
      }
    }
    DestructItems<FPurchaseReceipt,int>(local_d8,(uint)local_d0);
    if (local_d8 != (FPurchaseReceipt *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
  return;
}

// Exec @ 14ebf1060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FOnlineSubsystemImpl::Exec
          (FOnlineSubsystemImpl *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  wchar_t *local_res18;
  int local_48 [2];
  wchar_t *local_40;
  wchar_t *local_38;
  longlong *local_30;
  TReferenceControllerBase<1> *local_28;
  longlong *local_20;
  TReferenceControllerBase<1> *local_18;
  
  local_res18 = param_2;
  bVar2 = FParse::Command(&local_res18,L"FRIEND",true);
  if (bVar2) {
    bVar2 = HandleFriendExecCommands(this,param_1,local_res18,param_3);
  }
  else {
    bVar2 = FParse::Command(&local_res18,L"IDENTITY",true);
    if (bVar2) {
      local_40 = local_res18;
      bVar2 = false;
      bVar3 = FParse::Command(&local_40,L"TRIGGERONAUTHABOUTTOEXPIREDELEGATES",true);
      if (bVar3) {
        (**(code **)(*(longlong *)this + 0x80))(this,&local_30);
        if (local_30 != (longlong *)0x0) {
          local_48[0] = 0;
          FParse::Value(local_40,L"LocalUserNum=",local_48);
          if ((local_30 == (longlong *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
          (**(code **)(*local_30 + 0x60))(local_30,local_48[0]);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28);
        bVar2 = true;
      }
    }
    else {
      bVar2 = FParse::Command(&local_res18,L"SESSION",true);
      if (bVar2) {
        local_38 = local_res18;
        bVar2 = false;
        bVar3 = FParse::Command(&local_38,L"DUMP",true);
        if (bVar3) {
          (**(code **)(*(longlong *)this + 0x20))(this,&local_20);
          if (local_20 != (longlong *)0x0) {
            if ((local_20 == (longlong *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
            (**(code **)(*local_20 + 0x450))();
          }
          bVar2 = true;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18);
        }
      }
      else {
        bVar2 = FParse::Command(&local_res18,L"PRESENCE",true);
        if (bVar2) {
          bVar2 = HandlePresenceExecCommands(this,param_1,local_res18,param_3);
        }
        else {
          bVar2 = FParse::Command(&local_res18,L"PURCHASE",true);
          if (bVar2) {
            bVar2 = HandlePurchaseExecCommands(this,param_1,local_res18,param_3);
          }
          else {
            bVar2 = FParse::Command(&local_res18,L"STORE",true);
            if (bVar2) {
              bVar2 = HandleStoreExecCommands(this,param_1,local_res18,param_3);
            }
            else {
              bVar2 = false;
            }
          }
        }
      }
    }
  }
  return bVar2;
}

// ExecuteDelegateNextTick @ 14ebf3540

void __thiscall
FOnlineSubsystemImpl::ExecuteDelegateNextTick
          (FOnlineSubsystemImpl *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  pTVar1 = &this->NextTickQueue;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&pTVar3->Item,param_1);
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar3;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar3;
    UNLOCK();
  }
  return;
}

// FilterResponseStr @ 14ebf84b0

FString * __cdecl
FOnlineSubsystemImpl::FilterResponseStr
          (FString *__return_storage_ptr__,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  ::FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FinalizeReceipts @ 14ebf84d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlineSubsystemImpl::FinalizeReceipts(FOnlineSubsystemImpl *this,FUniqueNetId *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  FScriptContainerElement *pFVar3;
  FPurchaseReceipt *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  FPurchaseReceipt *pFVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  FUniqueNetId *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_188;
  undefined8 local_180;
  longlong local_178;
  FPurchaseReceipt *local_170;
  FPurchaseReceipt *local_168;
  undefined8 local_160;
  wchar_t *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  longlong *local_128;
  TReferenceControllerBase<1> *local_120;
  FScriptContainerElement *local_118;
  longlong local_110;
  FScriptContainerElement *local_108;
  FPurchaseReceipt *local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  wchar_t *local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  
  local_res10 = param_1;
  (**(code **)(*(longlong *)this + 0x98))(this,&local_128);
  if (local_128 != (longlong *)0x0) {
    local_168 = (FPurchaseReceipt *)0x0;
    local_160 = 0;
    if ((local_128 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*local_128 + 0x40))(local_128,param_1,&local_168);
    uVar9 = (ulonglong)(int)(uint)local_160;
    local_130 = (uint)local_160;
    local_100 = local_168 + uVar9;
    pFVar12 = local_168;
    while( true ) {
      pFVar4 = local_100;
      local_170 = pFVar12;
      if ((uint)local_160 != (int)uVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPurchaseReceipt,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar12 == pFVar4) break;
      if (3 < (byte)LogOnline._0_1_) {
        switch(pFVar12->TransactionState) {
        case NotStarted:
          break;
        case Processing:
          break;
        case Purchased:
          break;
        case Failed:
          break;
        case Deferred:
          break;
        case Canceled:
          break;
        case Restored:
          break;
        case NotAllowed:
          break;
        case Invalid:
        }
        ::FString::PrintfImpl(&local_f8,L"Receipt: %s %s");
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      local_134 = (pFVar12->ReceiptOffers).ArrayNum;
      uVar9 = (ulonglong)(int)local_134;
      pFVar14 = (pFVar12->ReceiptOffers).AllocatorInstance.Data;
      local_108 = pFVar14 + uVar9 * 0x40;
      local_188.Data = (FScriptContainerElement *)0x0;
      local_180 = 0;
      while( true ) {
        pFVar3 = local_108;
        local_118 = pFVar14;
        if ((pFVar12->ReceiptOffers).ArrayNum != (int)uVar9) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FPurchaseReceipt::FReceiptOfferEntry_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar14 == pFVar3) break;
        if (3 < (byte)LogOnline._0_1_) {
          ::FString::PrintfImpl(&local_e8,L" -Namespace: %s Id: %s Quantity: %d");
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if (3 < (byte)LogOnline._0_1_) {
            ::FString::PrintfImpl(&local_d8,L" -LineItems:");
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
          }
        }
        local_138 = *(uint *)(pFVar14 + 0x38);
        uVar9 = (ulonglong)(int)local_138;
        lVar11 = *(longlong *)(pFVar14 + 0x30);
        local_110 = uVar9 * 0x38 + lVar11;
        while( true ) {
          lVar10 = local_110;
          local_178 = lVar11;
          if (*(int *)(pFVar14 + 0x38) != (int)uVar9) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FPurchaseReceipt::FLineItemInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res20);
          }
          if (lVar11 == lVar10) break;
          if (3 < (byte)LogOnline._0_1_) {
            ::FString::PrintfImpl(&local_c8,L"  -Name: %s Id: %s ValidationInfo: %d bytes");
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
          }
          FVar2.Data = local_188.Data;
          local_158 = *(wchar_t **)(lVar11 + 0x18);
          local_148 = *(wchar_t **)(lVar11 + 0x28);
          iVar8 = *(int *)(lVar11 + 0x20) + -1;
          if (*(int *)(lVar11 + 0x20) == 0) {
            iVar8 = 0;
          }
          iStack_140 = *(int *)(lVar11 + 0x30) + -1;
          if (*(int *)(lVar11 + 0x30) == 0) {
            iStack_140 = 0;
          }
          pFVar14 = local_188.Data + (longlong)(int)local_180 * 0x20;
          lVar10 = lVar11;
          for (FVar13.Data = local_188.Data; iStack_150 = iVar8, FVar13.Data != pFVar14;
              FVar13.Data = FVar13.Data + 0x20) {
            iVar7 = *(int *)(FVar13.Data + 8);
            if ((iVar7 == iVar8) &&
               ((((uStack_80 = CONCAT44(uStack_14c,iVar8), local_88 = local_158, iVar7 == 0 ||
                  (iVar8 == 0)) ||
                 (iVar6 = FGenericPlatformStricmp::Strnicmp
                                    (*(wchar_t **)FVar13.Data,local_158,(longlong)iVar8), iVar6 == 0
                 )) && (iVar6 = iStack_140, iVar7 == iVar8)))) {
              iVar8 = *(int *)(FVar13.Data + 0x18);
              if (iVar8 == iStack_140) {
                uStack_70 = CONCAT44(uStack_13c,iStack_140);
                local_78 = local_148;
                if ((((iVar8 == 0) || (iStack_140 == 0)) ||
                    (iVar7 = FGenericPlatformStricmp::Strnicmp
                                       (*(wchar_t **)(FVar13.Data + 0x10),local_148,
                                        (longlong)iStack_140), iVar7 == 0)) && (iVar8 == iVar6)) {
                  lVar10 = local_178;
                  if ((int)((longlong)FVar13.Data - (longlong)FVar2.Data >> 5) != -1) {
                    if (3 < (byte)LogOnline._0_1_) {
                      ::FString::PrintfImpl(&local_b8,L"Already finalized by sibling LineItem");
                      UE::Logging::Private::BasicLog<4>
                                (&::LOG_Static,(FLogCategoryBase *)&LogOnline);
                      lVar10 = local_178;
                      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                        lVar10 = local_178;
                      }
                    }
                    goto LAB_14ebf8c3f;
                  }
                  break;
                }
              }
            }
            lVar10 = local_178;
            iVar8 = iStack_150;
          }
          if (*(int *)(lVar10 + 0x30) < 2) {
            if (3 < (byte)LogOnline._0_1_) {
              ::FString::PrintfImpl(&local_a8,L"Not redeemable");
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            if (3 < (byte)LogOnline._0_1_) {
              ::FString::PrintfImpl(&local_98,L"Finalizing %s!");
              UE::Logging::Private::BasicLog<4>
                        ((FStaticBasicLogRecord *)&PTR_u__s_s_153024bc8,
                         (FLogCategoryBase *)&LogOnline);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
            }
            if ((local_128 == (longlong *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            (**(code **)(*local_128 + 0x20))
                      (local_128,local_res10,lVar11 + 0x18,(undefined8 *)(lVar11 + 0x28));
            FVar2.Data = local_188.Data;
            pFVar14 = local_188.Data + (longlong)(int)local_180 * 0x20;
            FVar13.Data = local_188.Data;
            if (local_188.Data != pFVar14) {
              do {
                iVar7 = iStack_150;
                iVar8 = *(int *)(FVar13.Data + 8);
                if (iVar8 == iStack_150) {
                  uStack_60 = CONCAT44(uStack_14c,iStack_150);
                  local_68 = local_158;
                  if ((((iVar8 == 0) || (iStack_150 == 0)) ||
                      (iVar6 = FGenericPlatformStricmp::Strnicmp
                                         (*(wchar_t **)FVar13.Data,local_158,(longlong)iStack_150),
                      iVar6 == 0)) && (iVar6 = iStack_140, iVar8 == iVar7)) {
                    iVar8 = *(int *)(FVar13.Data + 0x18);
                    if (iVar8 == iStack_140) {
                      uStack_50 = CONCAT44(uStack_13c,iStack_140);
                      local_58 = local_148;
                      if ((((iVar8 == 0) || (iStack_140 == 0)) ||
                          (iVar7 = FGenericPlatformStricmp::Strnicmp
                                             (*(wchar_t **)(FVar13.Data + 0x10),local_148,
                                              (longlong)iStack_140), iVar7 == 0)) &&
                         (iVar8 == iVar6)) {
                        lVar10 = local_178;
                        if ((int)((longlong)FVar13.Data - (longlong)FVar2.Data >> 5) != -1)
                        goto LAB_14ebf8c3f;
                        break;
                      }
                    }
                  }
                }
                FVar13.Data = FVar13.Data + 0x20;
              } while (FVar13.Data != pFVar14);
              lVar10 = local_178;
            }
            iVar8 = (int)local_180;
            if ((local_188.Data <= (FScriptContainerElement *)&local_158) &&
               ((FScriptContainerElement *)&local_158 <
                local_188.Data + (longlong)local_180._4_4_ * 0x20)) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              iVar8 = (int)local_180;
            }
            if (iVar8 == local_180._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,&local_188,(int *)((longlong)&local_180 + 4));
            }
            local_180 = CONCAT44(local_180._4_4_,iVar8 + 1);
            *(wchar_t **)(local_188.Data + (longlong)iVar8 * 0x20) = local_158;
            *(ulonglong *)(local_188.Data + (longlong)iVar8 * 0x20 + 8) =
                 CONCAT44(uStack_14c,iStack_150);
            *(wchar_t **)(local_188.Data + (longlong)iVar8 * 0x20 + 0x10) = local_148;
            *(ulonglong *)(local_188.Data + (longlong)iVar8 * 0x20 + 0x10 + 8) =
                 CONCAT44(uStack_13c,iStack_140);
          }
LAB_14ebf8c3f:
          lVar11 = lVar10 + 0x38;
          uVar9 = (ulonglong)local_138;
          pFVar12 = local_170;
          pFVar14 = local_118;
        }
        pFVar14 = pFVar14 + 0x40;
        uVar9 = (ulonglong)local_134;
      }
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
      pFVar12 = pFVar12 + 1;
      uVar9 = (ulonglong)local_130;
    }
    DestructItems<FPurchaseReceipt,int>(local_168,(uint)local_160);
    if (local_168 != (FPurchaseReceipt *)0x0) {
      FMemory::Free(local_168);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120);
  return;
}

// GetAchievementsInterface @ 14ebfbc80

TSharedPtr<IOnlineAchievements,1> * __thiscall
FOnlineSubsystemImpl::GetAchievementsInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineAchievements,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineAchievements *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChatInterface @ 14ebff780

TSharedPtr<IOnlineChat,1> * __thiscall
FOnlineSubsystemImpl::GetChatInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineChat,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineChat *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetEntitlementsInterface @ 14ebffdd0

TSharedPtr<IOnlineEntitlements,1> * __thiscall
FOnlineSubsystemImpl::GetEntitlementsInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineEntitlements,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineEntitlements *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetEventsInterface @ 14ec00040

TSharedPtr<IOnlineEvents,1> * __thiscall
FOnlineSubsystemImpl::GetEventsInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineEvents,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineEvents *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetExternalUIInterface @ 14ec00060

TSharedPtr<IOnlineExternalUI,1> * __thiscall
FOnlineSubsystemImpl::GetExternalUIInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineExternalUI,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineExternalUI *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetGameActivityInterface @ 14ec002f0

TSharedPtr<IOnlineGameActivity,1> * __thiscall
FOnlineSubsystemImpl::GetGameActivityInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineGameActivity,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineGameActivity *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetGameItemStatsInterface @ 14ec00310

TSharedPtr<IOnlineGameItemStats,1> * __thiscall
FOnlineSubsystemImpl::GetGameItemStatsInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineGameItemStats,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineGameItemStats *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetGameMatchesInterface @ 14ec00330

TSharedPtr<IOnlineGameMatches,1> * __thiscall
FOnlineSubsystemImpl::GetGameMatchesInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineGameMatches,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineGameMatches *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetGroupsInterface @ 14ec00380

TSharedPtr<IOnlineGroups,1> * __thiscall
FOnlineSubsystemImpl::GetGroupsInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineGroups,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineGroups *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetIdentityInterface @ 14ec005f0

TSharedPtr<IOnlineIdentity,1> * __thiscall
FOnlineSubsystemImpl::GetIdentityInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineIdentity,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineIdentity *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetInstanceName @ 14ec00610

FName __thiscall FOnlineSubsystemImpl::GetInstanceName(FOnlineSubsystemImpl *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->InstanceName;
  return in_RDX;
}

// GetLeaderboardsInterface @ 14ec00630

TSharedPtr<IOnlineLeaderboards,1> * __thiscall
FOnlineSubsystemImpl::GetLeaderboardsInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineLeaderboards,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineLeaderboards *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetMessageInterface @ 14ec00800

TSharedPtr<IOnlineMessage,1> * __thiscall
FOnlineSubsystemImpl::GetMessageInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineMessage,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineMessage *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetMessageSanitizer @ 14ec00820

TSharedPtr<IMessageSanitizer,1> * __thiscall
FOnlineSubsystemImpl::GetMessageSanitizer
          (FOnlineSubsystemImpl *this,TSharedPtr<IMessageSanitizer,1> *__return_storage_ptr__,
          int param_1,FString *param_2)

{
  bool bVar1;
  FOnlineSubsystemModule *pFVar2;
  FOnlineSubsystemImpl *pFVar3;
  IMessageSanitizer **ppIVar4;
  wchar_t *pwVar5;
  IOnlineSubsystem *pIVar6;
  FSharedReferencer<1> FVar7;
  IMessageSanitizer *pIVar8;
  int *piVar9;
  IMessageSanitizer *local_48;
  FSharedReferencer<1> FStack_40;
  FString local_38;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  local_48 = (IMessageSanitizer *)0x0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_38,L"SanitizerPlatformService");
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar9 < `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByConfig(FString_const&___ptr64,bool)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByConfig(FString_const&___ptr64,bool)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByConfig(FString_const&___ptr64,bool)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByConfig(FString_const&___ptr64,bool)'
                    ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
    _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByConfig(FString_const&___ptr64,bool)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar2 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                     (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByConfig(FString_const&___ptr64,bool)'
                      ::__l2::OnlineSubsystemModuleName);
  pFVar3 = (FOnlineSubsystemImpl *)(**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,&local_38,1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (pFVar3 == (FOnlineSubsystemImpl *)0x0) {
    if ((*piVar9 < `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                   ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                      ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
      _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pFVar2 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                       (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                        ::__l2::OnlineSubsystemModuleName);
    pFVar3 = (FOnlineSubsystemImpl *)(**(code **)(pFVar2->_padding_ + 0x58))(pFVar2,1);
    if (pFVar3 != (FOnlineSubsystemImpl *)0x0) goto LAB_14ec008f5;
LAB_14ec00984:
    pIVar8 = local_48;
    pwVar5 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar5,L"testsanitizer");
    if ((bVar1) &&
       (pIVar6 = IOnlineSubsystem::Get(&NULL_SUBSYSTEM), pIVar6 != (IOnlineSubsystem *)0x0)) {
      (**(code **)(pIVar6->_padding_ + 0x30))(pIVar6,__return_storage_ptr__,param_1,param_2);
      FVar7.ReferenceController = FStack_40.ReferenceController;
      goto LAB_14ec0095b;
    }
  }
  else {
LAB_14ec008f5:
    if (pFVar3 == this) goto LAB_14ec00984;
    ppIVar4 = (IMessageSanitizer **)
              (**(code **)(*(longlong *)pFVar3 + 0x30))(pFVar3,local_28,param_1,param_2);
    if (&local_48 != ppIVar4) {
      local_48 = *ppIVar4;
      *ppIVar4 = (IMessageSanitizer *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_40,(FSharedReferencer<1> *)(ppIVar4 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    pIVar8 = local_48;
    if (local_48 == (IMessageSanitizer *)0x0) goto LAB_14ec00984;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FStack_40.ReferenceController
  ;
  __return_storage_ptr__->Object = pIVar8;
  FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14ec0095b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return __return_storage_ptr__;
}

// GetNamedInterface @ 14ec00a50

UObject * __thiscall
FOnlineSubsystemImpl::GetNamedInterface(FOnlineSubsystemImpl *this,FName param_1)

{
  int iVar1;
  UNamedInterfaces *pUVar2;
  FName *pFVar3;
  FName *pFVar4;
  undefined1 local_res8 [8];
  
  if (this->NamedInterfaces == (UNamedInterfaces *)0x0) {
    InitNamedInterfaces(this);
  }
  pUVar2 = this->NamedInterfaces;
  if (pUVar2 != (UNamedInterfaces *)0x0) {
    pFVar4 = (FName *)(pUVar2->NamedInterfaces).AllocatorInstance.Data;
    iVar1 = (pUVar2->NamedInterfaces).ArrayNum;
    pFVar3 = pFVar4 + (longlong)iVar1 * 2;
    while( true ) {
      if ((pUVar2->NamedInterfaces).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNamedInterface_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar4 == pFVar3) break;
      if (*pFVar4 == param_1) {
        return (UObject *)pFVar4[1];
      }
      pFVar4 = pFVar4 + 2;
    }
    return (UObject *)0x0;
  }
  return (UObject *)0x0;
}

// GetOnlineContentAgeRestrictionInterface @ 14ec02630

TSharedPtr<IOnlineContentAgeRestriction,1> * __thiscall
FOnlineSubsystemImpl::GetOnlineContentAgeRestrictionInterface
          (FOnlineSubsystemImpl *this,
          TSharedPtr<IOnlineContentAgeRestriction,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineContentAgeRestriction *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetOnlineEnvironment @ 14ec02650

Type __thiscall FOnlineSubsystemImpl::GetOnlineEnvironment(FOnlineSubsystemImpl *this)

{
  return Unknown;
}

// GetOnlineEnvironmentName @ 14ec02660

FString * __thiscall
FOnlineSubsystemImpl::GetOnlineEnvironmentName
          (FOnlineSubsystemImpl *this,FString *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)this + 400))();
  if (iVar1 == 0) {
    ::FString::FString(__return_storage_ptr__,L"Development");
    return __return_storage_ptr__;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      ::FString::FString(__return_storage_ptr__,L"Unknown");
      return __return_storage_ptr__;
    }
    ::FString::FString(__return_storage_ptr__,L"Production");
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Certification");
  return __return_storage_ptr__;
}

// GetPartyInterface @ 14ec02800

TSharedPtr<IOnlinePartySystem,1> * __thiscall
FOnlineSubsystemImpl::GetPartyInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlinePartySystem,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlinePartySystem *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPresenceInterface @ 14ec02860

TSharedPtr<IOnlinePresence,1> * __thiscall
FOnlineSubsystemImpl::GetPresenceInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlinePresence,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlinePresence *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPurchaseInterface @ 14ec029f0

TSharedPtr<IOnlinePurchase,1> * __thiscall
FOnlineSubsystemImpl::GetPurchaseInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlinePurchase,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlinePurchase *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSharedCloudInterface @ 14ec02a10

TSharedPtr<IOnlineSharedCloud,1> * __thiscall
FOnlineSubsystemImpl::GetSharedCloudInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineSharedCloud,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineSharedCloud *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSharingInterface @ 14ec02a30

TSharedPtr<IOnlineSharing,1> * __thiscall
FOnlineSubsystemImpl::GetSharingInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineSharing,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineSharing *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSocialPlatformName @ 14ec02a70

FText * __thiscall
FOnlineSubsystemImpl::GetSocialPlatformName
          (FOnlineSubsystemImpl *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetStatsInterface @ 14ec02ac0

TSharedPtr<IOnlineStats,1> * __thiscall
FOnlineSubsystemImpl::GetStatsInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineStats,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineStats *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetStoreV2Interface @ 14ec02ae0

TSharedPtr<IOnlineStoreV2,1> * __thiscall
FOnlineSubsystemImpl::GetStoreV2Interface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineStoreV2,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineStoreV2 *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSubsystemName @ 14ec030c0

FName __thiscall FOnlineSubsystemImpl::GetSubsystemName(FOnlineSubsystemImpl *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->SubsystemName;
  return in_RDX;
}

// GetTimeInterface @ 14ec03320

TSharedPtr<IOnlineTime,1> * __thiscall
FOnlineSubsystemImpl::GetTimeInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineTime,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineTime *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetTitleFileInterface @ 14ec03340

TSharedPtr<IOnlineTitleFile,1> * __thiscall
FOnlineSubsystemImpl::GetTitleFileInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineTitleFile,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineTitleFile *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetTournamentInterface @ 14ec03360

TSharedPtr<IOnlineTournament,1> * __thiscall
FOnlineSubsystemImpl::GetTournamentInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineTournament,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineTournament *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetTurnBasedInterface @ 14ec034a0

TSharedPtr<IOnlineTurnBased,1> * __thiscall
FOnlineSubsystemImpl::GetTurnBasedInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineTurnBased,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineTurnBased *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetUserCloudInterface @ 14ec05030

TSharedPtr<IOnlineUserCloud,1> * __thiscall
FOnlineSubsystemImpl::GetUserCloudInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineUserCloud,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineUserCloud *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetUserInterface @ 14ec05050

TSharedPtr<IOnlineUser,1> * __thiscall
FOnlineSubsystemImpl::GetUserInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineUser,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineUser *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetVoiceInterface @ 14ec05670

TSharedPtr<IOnlineVoice,1> * __thiscall
FOnlineSubsystemImpl::GetVoiceInterface
          (FOnlineSubsystemImpl *this,TSharedPtr<IOnlineVoice,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineVoice *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// HandleFriendExecCommands @ 14ec05690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FOnlineSubsystemImpl::HandleFriendExecCommands
          (FOnlineSubsystemImpl *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  FOnlineFriend *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ForAnyElementType _Str;
  longlong *plVar10;
  TSharedRef<FOnlineFriend,1> *pTVar11;
  ulonglong uVar12;
  bool bVar13;
  uint uVar14;
  wchar_t *local_res18;
  int local_358;
  int local_354;
  int local_350;
  uint local_34c;
  TSharedRef<FOnlineFriend,1> *local_348;
  undefined8 local_340;
  TSharedRef<FOnlineFriend,1> *local_338;
  undefined8 local_330;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_328;
  ForAnyElementType local_320;
  ulonglong local_318;
  FString local_310;
  FString local_300;
  FString local_2f0;
  longlong *local_2e0;
  TReferenceControllerBase<1> *local_2d8;
  FString local_2d0;
  longlong *local_2c0;
  TReferenceControllerBase<1> *local_2b8;
  longlong *local_2b0;
  TReferenceControllerBase<1> *local_2a8;
  longlong *local_2a0;
  TReferenceControllerBase<1> *local_298;
  longlong *local_290;
  TReferenceControllerBase<1> *local_288;
  longlong *local_280;
  TReferenceControllerBase<1> *local_278;
  longlong *local_270;
  TReferenceControllerBase<1> *local_268;
  longlong *local_260;
  TReferenceControllerBase<1> *local_258;
  longlong *local_250;
  TReferenceControllerBase<1> *local_248;
  void *local_240;
  undefined8 local_238;
  FString local_230;
  FString local_220;
  FString local_210;
  longlong local_200;
  TReferenceControllerBase<1> *local_1f8;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  void *local_d0 [2];
  FString local_c0;
  longlong local_b0;
  TReferenceControllerBase<1> *local_a8;
  FString local_a0;
  FDestructionSentinel local_90;
  void *local_78 [2];
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  void *local_58 [2];
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  void *local_38 [2];
  ulonglong uVar15;
  
  bVar13 = false;
  local_res18 = param_2;
  bVar3 = FParse::Command(&local_res18,L"BLOCK",true);
  uVar12 = 0;
  if (bVar3) {
    FParse::Token(&local_210,&local_res18,false);
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_210.Data.ArrayNum != 0) {
      _Str.Data = local_210.Data.AllocatorInstance.Data;
    }
    uVar6 = _wtoi((wchar_t *)_Str.Data);
    FParse::Token(&local_220,&local_res18,false);
    if ((local_220.Data.ArrayNum < 2) || (4 < uVar6)) {
      if (2 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl(&local_230,L"usage: FRIEND BLOCK <localnum> <userid>");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      (**(code **)(*(longlong *)this + 0x80))(this,&local_280);
      if (local_280 != (longlong *)0x0) {
        if ((local_280 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        (**(code **)(*local_280 + 0x120))(local_280,&local_b0,&local_220);
        (**(code **)(*(longlong *)this + 0x28))(this,&local_290);
        if (local_290 != (longlong *)0x0) {
          plVar10 = local_290;
          if ((local_290 == (longlong *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), plVar10 = local_290, bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          pcVar2 = *(code **)(*plVar10 + 0x260);
          if ((local_b0 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          (*pcVar2)(plVar10,0,local_b0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_288);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_278)
      ;
    }
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = FParse::Command(&local_res18,L"QUERYRECENT",true);
    if (bVar3) {
      (**(code **)(*(longlong *)this + 0x80))(this,&local_2e0);
      local_248 = local_2d8;
      if (local_2e0 != (longlong *)0x0) {
        FParse::Token(&local_1f0,&local_res18,false);
        uVar6 = 0;
        if (1 < local_1f0.Data.ArrayNum) {
          uVar6 = _wtoi((wchar_t *)local_1f0.Data.AllocatorInstance.Data);
        }
        FParse::Token(&local_a0,&local_res18,false);
        if ((local_2e0 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        (**(code **)(*local_2e0 + 0x110))(local_2e0,&local_200,uVar6);
        (**(code **)(*(longlong *)this + 0x28))(this,&local_270);
        if (local_270 != (longlong *)0x0) {
          plVar10 = local_270;
          if ((local_270 == (longlong *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), plVar10 = local_270, bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          pcVar2 = *(code **)(*plVar10 + 0x1e8);
          if ((local_200 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          (*pcVar2)(plVar10,local_200,&local_a0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_268);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1f8);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        local_248 = local_2d8;
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          local_248 = local_2d8;
        }
      }
    }
    else {
      bVar3 = FParse::Command(&local_res18,L"DUMPRECENT",true);
      if (bVar3) {
        (**(code **)(*(longlong *)this + 0x28))(this,&local_260);
        local_248 = local_258;
        if (local_260 != (longlong *)0x0) {
          if ((local_260 == (longlong *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          (**(code **)(*local_260 + 0x238))();
          local_248 = local_258;
        }
      }
      else {
        bVar3 = FParse::Command(&local_res18,L"DUMPBLOCKED",true);
        if (!bVar3) goto LAB_14ec05b25;
        (**(code **)(*(longlong *)this + 0x28))(this,&local_250);
        if (local_250 != (longlong *)0x0) {
          if ((local_250 == (longlong *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          (**(code **)(*local_250 + 0x280))();
        }
      }
    }
    bVar13 = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_248);
  }
LAB_14ec05b25:
  bVar3 = FParse::Command(&local_res18,L"READFRIENDSLIST",true);
  if (bVar3) {
    (**(code **)(*(longlong *)this + 0x28))(this,&local_2c0);
    if (local_2c0 != (longlong *)0x0) {
      local_358 = 0;
      FParse::Value(local_res18,L"LocalUserNum=",&local_358);
      local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d0.Data.ArrayNum = 0;
      local_2d0.Data.ArrayMax = 0;
      FParse::Value(local_res18,L"ListName=",&local_2d0,true,(wchar_t **)0x0);
      if ((local_2c0 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_318 = 0;
      local_328.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_320.Data = (FScriptContainerElement *)0x0;
      (**(code **)(*local_2c0 + 0xe8))(local_2c0,local_358,&local_2d0,&local_328);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_328,(FWriteAccessScope *)&local_90);
      if (((int)local_318 != 0) && (local_320.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_320.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_320,0,0,0x10);
        local_318 = local_318 & 0xffffffff00000000;
      }
      if (local_90.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
      }
      if (local_320.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_328.AccessDetector);
      if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2b8);
    return true;
  }
  bVar3 = FParse::Command(&local_res18,L"DUMPFRIENDSLIST",true);
  if (bVar3) {
    (**(code **)(*(longlong *)this + 0x28))(this,&local_2b0);
    if (local_2b0 != (longlong *)0x0) {
      local_354 = 0;
      FParse::Value(local_res18,L"LocalUserNum=",&local_354);
      local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_310.Data.ArrayNum = 0;
      local_310.Data.ArrayMax = 0;
      FParse::Value(local_res18,L"ListName=",&local_310,true,(wchar_t **)0x0);
      local_348 = (TSharedRef<FOnlineFriend,1> *)0x0;
      local_340 = 0;
      if ((local_2b0 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      cVar5 = (**(code **)(*local_2b0 + 0x1c8))(local_2b0,local_354,&local_310,&local_348);
      if (cVar5 == '\0') {
        if (2 < (byte)LogOnline._0_1_) {
          ::FString::PrintfImpl(&local_f0,L"[%hs] Friend list with name %s was not found");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        if (4 < (byte)LogOnlineFriend._0_1_) {
          ::FString::PrintfImpl(&local_1e0,L"GetFriendsList returned %d friends");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
        }
        uVar15 = uVar12;
        if (0 < (int)local_340) {
          do {
            uVar14 = (uint)uVar15;
            uVar6 = 0;
            if ((int)uVar14 < (int)local_340) {
              uVar6 = ~uVar14 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            plVar10 = *(longlong **)((longlong)&local_348->Object + uVar12);
            lVar8 = (**(code **)(*plVar10 + 0x38))(plVar10);
            if (4 < (byte)LogOnlineFriend._0_1_) {
              puVar9 = (undefined8 *)(**(code **)(*plVar10 + 8))(plVar10,local_68);
              (**(code **)(*(longlong *)*puVar9 + 0x38))((longlong *)*puVar9,local_78);
              local_240 = (void *)0x0;
              local_238 = 0;
              (**(code **)(*plVar10 + 0x18))(plVar10,local_38,&local_240);
              ::FString::PrintfImpl(&local_1d0,L"\tIdx %d DisplayName (%s) NetId (%s)");
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
              if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
              }
              if (local_38[0] != (void *)0x0) {
                FMemory::Free(local_38[0]);
              }
              if (local_240 != (void *)0x0) {
                FMemory::Free(local_240);
              }
              if (local_78[0] != (void *)0x0) {
                FMemory::Free(local_78[0]);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_60);
              if (4 < (byte)LogOnlineFriend._0_1_) {
                uVar7 = (**(code **)(*plVar10 + 0x30))(plVar10);
                switch(uVar7) {
                case 0:
                  break;
                case 1:
                  break;
                case 2:
                  break;
                case 3:
                  break;
                case 4:
                  break;
                case 5:
                }
                ::FString::PrintfImpl(&local_1c0,L"\t\t Invite status (%s)");
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
                if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                }
                if (4 < (byte)LogOnlineFriend._0_1_) {
                  ::FString::PrintfImpl(&local_1b0,L"\t\t Presence: %s");
                  UE::Logging::Private::BasicLog<5>
                            ((FStaticBasicLogRecord *)&PTR_u__s_s_1530251c0,
                             (FLogCategoryBase *)&LogOnlineFriend);
                  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                  }
                  if (4 < (byte)LogOnlineFriend._0_1_) {
                    EOnlinePresenceState::ToString(*(Type *)(lVar8 + 0x30));
                    ::FString::PrintfImpl(&local_1a0,L"\t\t State: %s");
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
                    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                    }
                    if (4 < (byte)LogOnlineFriend._0_1_) {
                      ::FString::PrintfImpl(&local_180,L"%u");
                      ::FString::PrintfImpl(&local_190,L"\t\t bIsOnline (%s)");
                      UE::Logging::Private::BasicLog<5>
                                (&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
                      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_190.Data.AllocatorInstance.Data);
                      }
                      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_180.Data.AllocatorInstance.Data);
                      }
                      if (4 < (byte)LogOnlineFriend._0_1_) {
                        ::FString::PrintfImpl(&local_160,L"%u");
                        ::FString::PrintfImpl(&local_170,L"\t\t bIsPlaying (%s)");
                        UE::Logging::Private::BasicLog<5>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
                        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_170.Data.AllocatorInstance.Data);
                        }
                        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_160.Data.AllocatorInstance.Data);
                        }
                        if (4 < (byte)LogOnlineFriend._0_1_) {
                          ::FString::PrintfImpl(&local_140,L"%u");
                          ::FString::PrintfImpl(&local_150,L"\t\t bIsPlayingThisGame (%s)");
                          UE::Logging::Private::BasicLog<5>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
                          if (local_150.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_150.Data.AllocatorInstance.Data);
                          }
                          if (local_140.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_140.Data.AllocatorInstance.Data);
                          }
                          if (4 < (byte)LogOnlineFriend._0_1_) {
                            ::FString::PrintfImpl(&local_120,L"%u");
                            ::FString::PrintfImpl(&local_130,L"\t\t bIsJoinable (%s)");
                            UE::Logging::Private::BasicLog<5>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
                            if (local_130.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_130.Data.AllocatorInstance.Data);
                            }
                            if (local_120.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_120.Data.AllocatorInstance.Data);
                            }
                            if (4 < (byte)LogOnlineFriend._0_1_) {
                              ::FString::PrintfImpl(&local_100,L"%u");
                              ::FString::PrintfImpl(&local_110,L"\t\t bHasVoiceSupport (%s)");
                              UE::Logging::Private::BasicLog<5>
                                        (&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
                              if (local_110.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_110.Data.AllocatorInstance.Data);
                              }
                              if (local_100.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_100.Data.AllocatorInstance.Data);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar12 = uVar12 + 0x10;
            uVar15 = (ulonglong)(uVar14 + 1);
          } while ((int)(uVar14 + 1) < (int)local_340);
        }
      }
      DestructItems<TSharedRef<FOnlineFriend,1>,int>(local_348,(int)local_340);
      if (local_348 != (TSharedRef<FOnlineFriend,1> *)0x0) {
        FMemory::Free(local_348);
      }
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2a8);
    return true;
  }
  bVar3 = FParse::Command(&local_res18,L"GETDISPLAYNAME",true);
  if (!bVar3) {
    return bVar13;
  }
  (**(code **)(*(longlong *)this + 0x28))(this,&local_2a0);
  if (local_2a0 == (longlong *)0x0) goto LAB_14ec067bb;
  local_350 = 0;
  FParse::Value(local_res18,L"LocalUserNum=",&local_350);
  local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.Data.ArrayNum = 0;
  local_2f0.Data.ArrayMax = 0;
  FParse::Value(local_res18,L"ListName=",&local_2f0,true,(wchar_t **)0x0);
  local_34c = 0;
  FParse::Value(local_res18,L"FriendIndex=",(int *)&local_34c);
  local_338 = (TSharedRef<FOnlineFriend,1> *)0x0;
  local_330 = 0;
  if ((local_2a0 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  (**(code **)(*local_2a0 + 0x1c8))(local_2a0,local_350,&local_2f0,&local_338);
  lVar8 = (longlong)(int)local_34c;
  if (((int)local_34c < 0) || ((int)local_330 <= (int)local_34c)) {
    if (2 < (byte)LogOnline._0_1_) {
      ::FString::PrintfImpl(&local_c0,L"[%hs] Index %d not valid for friend list %s");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      goto LAB_14ec06786;
    }
  }
  else {
    uVar6 = 0;
    if ((int)local_34c < (int)local_330) {
      uVar6 = ~local_34c >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar11 = local_338 + lVar8;
    local_300.Data.ArrayNum = 0;
    local_300.Data.ArrayMax = 0;
    FParse::Value(local_res18,L"Platform=",&local_300,true,(wchar_t **)0x0);
    pFVar1 = pTVar11->Object;
    (**(code **)((longlong)*pFVar1 + 0x18))(pFVar1,local_d0,&local_300);
    if (4 < (byte)LogOnline._0_1_) {
      pFVar1 = pTVar11->Object;
      puVar9 = (undefined8 *)(**(code **)((longlong)*pFVar1 + 8))(pFVar1,local_48);
      (**(code **)(*(longlong *)*puVar9 + 0x38))((longlong *)*puVar9,local_58);
      ::FString::PrintfImpl
                (&local_e0,L"[%hs] GetDisplayName(%s) call for user %s returned with: %s");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    }
    local_c0.Data.AllocatorInstance.Data = local_300.Data.AllocatorInstance.Data;
    if (local_d0[0] != (void *)0x0) {
      FMemory::Free(local_d0[0]);
      local_c0.Data.AllocatorInstance.Data = local_300.Data.AllocatorInstance.Data;
    }
LAB_14ec06786:
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TSharedRef<FOnlineFriend,1>,int>(local_338,(int)local_330);
  if (local_338 != (TSharedRef<FOnlineFriend,1> *)0x0) {
    FMemory::Free(local_338);
  }
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
LAB_14ec067bb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_298);
  return true;
}

// HandleIdentityExecCommands @ 14ec06810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FOnlineSubsystemImpl::HandleIdentityExecCommands
          (FOnlineSubsystemImpl *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  wchar_t *local_res18 [2];
  int local_28 [2];
  longlong *local_20;
  TReferenceControllerBase<1> *local_18;
  
  local_res18[0] = param_2;
  bVar2 = FParse::Command(local_res18,L"TRIGGERONAUTHABOUTTOEXPIREDELEGATES",true);
  if (!bVar2) {
    return false;
  }
  (**(code **)(*(longlong *)this + 0x80))(this,&local_20);
  if (local_20 != (longlong *)0x0) {
    local_28[0] = 0;
    FParse::Value(local_res18[0],L"LocalUserNum=",local_28);
    if ((local_20 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (**(code **)(*local_20 + 0x60))(local_20,local_28[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  return true;
}

// HandlePresenceExecCommands @ 14ec068d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FOnlineSubsystemImpl::HandlePresenceExecCommands
          (FOnlineSubsystemImpl *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  TSharedPtr<IOnlineIdentity,1> *pTVar8;
  longlong *plVar9;
  TSharedRef<FOnlineFriend,1> *pTVar10;
  TSharedRef<FOnlineFriend,1> *pTVar11;
  wchar_t *local_res18;
  undefined1 local_f8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  FDelegateAllocation local_e8;
  TSharedRef<FOnlineFriend,1> *local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  TReferenceControllerBase<1> *local_c0;
  TSharedPtr<FUniqueNetId_const_,1> local_b8;
  longlong *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FString local_98;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  undefined1 local_50 [8];
  TReferenceControllerBase<1> *local_48;
  undefined1 local_40 [24];
  
  local_res18 = param_2;
  bVar3 = FParse::Command(&local_res18,L"DUMP",true);
  if (!bVar3) {
    return false;
  }
  (**(code **)(*(longlong *)this + 200))(this,&local_c8);
  if (local_c8 != (longlong *)0x0) {
    local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_f0,(FWriteAccessScope *)&local_70);
    local_58 = &local_e8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_e8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy,`FOnlineSubsystemImpl::HandlePresenceExecCommands'::`8'::<lambda_1>_>
                 ::_vftable_;
      puVar5[3] = this;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    local_d8 = (TSharedRef<FOnlineFriend,1> *)0x0;
    local_d0 = 0;
    (**(code **)(*(longlong *)this + 0x28))(this,&local_a8);
    if (local_a8 != (longlong *)0x0) {
      plVar9 = local_a8;
      if ((local_a8 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), plVar9 = local_a8, bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pcVar1 = *(code **)(*plVar9 + 0x1c8);
      ::FString::FString(&local_98,L"default");
      (*pcVar1)(plVar9,0,&local_98,&local_d8);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    iVar2 = (int)local_d0;
    uVar7 = (ulonglong)(int)local_d0;
    pTVar11 = local_d8 + uVar7;
    pTVar10 = local_d8;
    while( true ) {
      if ((int)uVar7 != iVar2) {
        local_f8[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FOnlineFriend,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (pTVar10 == pTVar11) break;
      if ((local_c8 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      plVar9 = local_c8;
      pcVar1 = *(code **)(*local_c8 + 0x20);
      puVar5 = (undefined8 *)(**(code **)((longlong)*pTVar10->Object + 8))(pTVar10->Object,local_50)
      ;
      (*pcVar1)(plVar9,*puVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
      uVar7 = local_d0 & 0xffffffff;
      pTVar10 = pTVar10 + 1;
    }
    pTVar8 = (TSharedPtr<IOnlineIdentity,1> *)(**(code **)(*(longlong *)this + 0x80))(this,local_40)
    ;
    GetFirstSignedInUser(&local_b8,pTVar8);
    if (local_b8.Object != (FUniqueNetId *)0x0) {
      plVar9 = local_c8;
      if ((local_c8 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), plVar9 = local_c8, bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pcVar1 = *(code **)(*plVar9 + 0x20);
      if ((local_b8.Object == (FUniqueNetId *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (*pcVar1)(plVar9,local_b8.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    DestructItems<TSharedRef<FOnlineFriend,1>,int>(local_d8,(int)local_d0);
    if (local_d8 != (TSharedRef<FOnlineFriend,1> *)0x0) {
      FMemory::Free(local_d8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_f0,(FWriteAccessScope *)&local_88);
    if ((local_e8.DelegateSize != 0) &&
       (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e8,0,0,0x10);
      local_e8.DelegateSize = 0;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    if (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
  return true;
}

// HandlePurchaseExecCommands @ 14ec06ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ec0744c) */
/* WARNING: Removing unreachable block (ram,0x00014ec0745a) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FOnlineSubsystemImpl::HandlePurchaseExecCommands
          (FOnlineSubsystemImpl *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  longlong *plVar12;
  bool bVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_2b8 [32];
  undefined1 local_268 [8];
  wchar_t *local_260;
  FUniqueNetId *local_258;
  TReferenceControllerBase<1> *local_250;
  TArray<FString,TSizedDefaultAllocator<32>_> local_248;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_238;
  FDelegateAllocation local_230;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_220;
  FDelegateAllocation local_218;
  FString local_208;
  longlong *local_1f8;
  TReferenceControllerBase<1> *local_1f0;
  longlong *local_1e8;
  TReferenceControllerBase<1> *local_1e0;
  FPurchaseOfferEntry local_1d8;
  FString local_1b0;
  FString local_1a0;
  longlong local_190;
  TReferenceControllerBase<1> *local_188;
  FString local_180;
  FString local_170;
  code *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  FString local_148;
  FString local_138;
  FString local_128;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDelegateAllocation *local_d0;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  ForAnyElementType local_98;
  int local_8c;
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  bVar13 = false;
  local_260 = param_2;
  (**(code **)(*(longlong *)this + 0x98))(this,&local_1e8);
  (**(code **)(*(longlong *)this + 0x80))(this,&local_1f8);
  bVar2 = false;
  if ((local_1e8 == (longlong *)0x0) || (local_1f8 == (longlong *)0x0)) goto LAB_14ec076f6;
  bVar2 = FParse::Command(&local_260,L"RECEIPTS",true);
  if (bVar2) {
    FParse::Token(&local_208,&local_260,false);
    if (local_208.Data.ArrayNum < 2) {
      local_128.Data.AllocatorInstance.Data = local_208.Data.AllocatorInstance.Data;
      if ((byte)LogOnline._0_1_ < 3) goto LAB_14ec076d4;
      ::FString::PrintfImpl(&local_180,L"usage: PURCHASE RECEIPTS <command> <userid>");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    }
    else {
      FParse::Token(&local_148,&local_260,false);
      if (local_148.Data.ArrayNum < 2) {
        local_180.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
        if (2 < (byte)LogOnline._0_1_) {
          ::FString::PrintfImpl(&local_170,L"usage: PURCHASE RECEIPTS <command> <userid>");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          local_180.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
            local_180.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
          }
        }
      }
      else {
        if ((local_1f8 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        (**(code **)(*local_1f8 + 0x120))(local_1f8,&local_258,&local_148);
        if (local_258 != (FUniqueNetId *)0x0) {
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_208.Data.ArrayNum != 0) {
            FVar11.Data = local_208.Data.AllocatorInstance.Data;
          }
          iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,L"RESTORE");
          if (iVar5 == 0) {
            local_158 = OnQueryReceiptsComplete;
            iStack_14c = local_128.Data.ArrayMax;
            local_238.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            local_230.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_230.DelegateSize = 0;
            uStack_150 = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_238,(FWriteAccessScope *)&local_e8);
            local_d0 = &local_230;
            puVar7 = UE::Core::Private::DelegateAllocate(0x38,&local_230);
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = &
                        ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy__V__TSharedPtr___CBVFUniqueNetId___00____6B_
              ;
              puVar7[1] = local_258;
              puVar7[2] = local_250;
              if (local_250 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_250->SharedReferenceCount =
                     (atomic<int>)((int)local_250->SharedReferenceCount + 1);
                UNLOCK();
              }
              uVar8 = FDelegateHandle::GenerateNewID();
              puVar7[3] = uVar8;
              puVar7[5] = local_158;
              puVar7[6] = CONCAT44(iStack_14c,uStack_150);
              *puVar7 = &
                        ___7__TBaseRawMethodDelegateInstance__0A_VFOnlineSubsystemImpl____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy__V__TSharedPtr___CBVFUniqueNetId___00____6B_
              ;
              puVar7[4] = this;
              if ((puVar7[5] == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InUserObject != nullptr && MethodPtr != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                     ,0x1d8,L""), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
            }
            if (local_e8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
            }
            plVar12 = local_1e8;
            if ((local_1e8 == (longlong *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), plVar12 = local_1e8, bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            pcVar1 = *(code **)(*plVar12 + 0x38);
            if ((local_258 == (FUniqueNetId *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            (*pcVar1)(plVar12,local_258,1,&local_238);
            bVar13 = true;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_238,(FWriteAccessScope *)&local_118);
            if ((local_230.DelegateSize != 0) &&
               (local_230.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_230.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_230,0,0,0x10);
              local_230.DelegateSize = 0;
            }
            if (local_118.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
            }
            if (local_230.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_230.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_238.AccessDetector);
          }
          else {
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_208.Data.ArrayNum != 0) {
              FVar11.Data = local_208.Data.AllocatorInstance.Data;
            }
            iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,L"DUMP");
            if (iVar5 == 0) {
              if ((local_258 == (FUniqueNetId *)0x0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x44d,L""), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              DumpReceipts(this,local_258);
            }
            else {
              FVar11.Data = (FScriptContainerElement *)L"";
              if (local_208.Data.ArrayNum != 0) {
                FVar11.Data = local_208.Data.AllocatorInstance.Data;
              }
              iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,L"FINALIZE");
              if (iVar5 != 0) goto LAB_14ec070fa;
              if ((local_258 == (FUniqueNetId *)0x0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x44d,L""), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              FinalizeReceipts(this,local_258);
            }
            bVar13 = true;
          }
        }
LAB_14ec070fa:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_250);
        local_180.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
      }
    }
    local_128.Data.AllocatorInstance.Data = local_208.Data.AllocatorInstance.Data;
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
      local_128.Data.AllocatorInstance.Data = local_208.Data.AllocatorInstance.Data;
    }
  }
  else {
    bVar4 = FParse::Command(&local_260,L"BUY",true);
    bVar2 = bVar13;
    if (!bVar4) goto LAB_14ec076f6;
    FParse::Token(&local_128,&local_260,false);
    FParse::Token(&local_1b0,&local_260,false);
    local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.ArrayNum = 0;
    local_248.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_128,&local_248,L",",true);
    if ((local_248.ArrayNum == 0) || (local_1b0.Data.ArrayNum < 2)) {
      if (2 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl
                  (&local_138,L"usage: PURCHASE BUY <comma_separated_productids> <userid>");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      bVar13 = true;
      if ((local_1f8 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      (**(code **)(*local_1f8 + 0x120))(local_1f8,&local_190,&local_1b0);
      FVar11.Data = local_1b0.Data.AllocatorInstance.Data;
      if (local_190 != 0) {
        local_a8.Data = (FScriptContainerElement *)0x0;
        local_a0 = 0;
        local_8c = -1;
        local_88._0_8_ = 0;
        local_88._8_8_ = 0;
        local_88._32_8_ = 0;
        local_88._40_4_ = 0;
        local_88._44_4_ = 0x80;
        local_88._48_4_ = 0xffffffff;
        local_88._52_4_ = 0;
        local_48 = (void *)0x0;
        local_40 = 0;
        local_98.Data = (FScriptContainerElement *)0x0;
        if (local_1b0.Data.ArrayNum == 0) {
          local_8c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1b0.Data.ArrayNum,0,&local_98,local_1b0.Data.ArrayNum,&local_8c);
          memcpy(local_98.Data,FVar11.Data,(longlong)local_1b0.Data.ArrayNum * 2);
        }
        if ((local_8c == -1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        iVar5 = local_248.ArrayNum;
        uVar9 = (ulonglong)local_248.ArrayNum;
        pFVar14 = local_248.AllocatorInstance.Data + uVar9 * 0x10;
        FVar11.Data = local_248.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar9 != iVar5) {
            local_268[0] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_268);
          }
          if (FVar11.Data == pFVar14) break;
          local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1a0.Data.ArrayNum = 0;
          local_1a0.Data.ArrayMax = 0;
          ::FString::FString(&local_1d8.OfferNamespace,&local_1a0);
          ::FString::FString(&local_1d8.OfferId,(FString *)FVar11.Data);
          local_1d8.Quantity = 1;
          if (((local_a8.Data <= &local_1d8) &&
              (&local_1d8 < (FPurchaseOfferEntry *)(local_a8.Data + (longlong)local_a0._4_4_ * 0x28)
              )) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          iVar6 = (int)local_a0;
          if ((int)local_a0 == local_a0._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&local_a8,(int *)((longlong)&local_a0 + 4));
          }
          local_a0 = CONCAT44(local_a0._4_4_,iVar6 + 1);
          lVar10 = (longlong)iVar6;
          *(undefined8 *)&local_a8.Data[lVar10 * 0x28].field_0x0 = 0;
          *(FScriptContainerElement **)&local_a8.Data[lVar10 * 0x28].field_0x0 =
               local_1d8.OfferNamespace.Data.AllocatorInstance.Data;
          *(int *)(local_a8.Data + lVar10 * 0x28 + 8) = local_1d8.OfferNamespace.Data.ArrayNum;
          *(int *)(local_a8.Data + lVar10 * 0x28 + 0xc) = local_1d8.OfferNamespace.Data.ArrayMax;
          *(undefined8 *)(local_a8.Data + lVar10 * 0x28 + 0x10) = 0;
          *(FScriptContainerElement **)(local_a8.Data + lVar10 * 0x28 + 0x10) =
               local_1d8.OfferId.Data.AllocatorInstance.Data;
          *(int *)(local_a8.Data + lVar10 * 0x28 + 0x18) = local_1d8.OfferId.Data.ArrayNum;
          *(int *)(local_a8.Data + lVar10 * 0x28 + 0x1c) = local_1d8.OfferId.Data.ArrayMax;
          *(int *)(local_a8.Data + lVar10 * 0x28 + 0x20) = local_1d8.Quantity;
          local_1d8.OfferId.Data.ArrayNum = 0;
          local_1d8.OfferId.Data.ArrayMax = 0;
          local_1d8.OfferId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d8.OfferNamespace.Data.ArrayNum = 0;
          local_1d8.OfferNamespace.Data.ArrayMax = 0;
          local_1d8.OfferNamespace.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
          }
          uVar9 = local_248._8_8_ & 0xffffffff;
          FVar11.Data = FVar11.Data + 0x10;
        }
        plVar12 = local_1e8;
        if ((local_1e8 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar12 = local_1e8, bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        local_220.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_218.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_218.DelegateSize = 0;
        pcVar1 = *(code **)(*plVar12 + 0x18);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_220,(FWriteAccessScope *)&local_c8);
        local_b0 = &local_218;
        puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_218);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy,`FOnlineSubsystemImpl::HandlePurchaseExecCommands'::`101'::<lambda_1>_>
                     ::_vftable_;
        }
        if (local_c8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
        }
        if ((local_190 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        (*pcVar1)(plVar12,local_190,&local_a8,&local_220);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_220,(FWriteAccessScope *)&local_100);
        if ((local_218.DelegateSize != 0) &&
           (local_218.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_218.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_218,0,0,0x10);
          local_218.DelegateSize = 0;
        }
        if (local_100.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
        }
        if (local_218.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_218.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_220.AccessDetector);
        local_40 = 0;
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_88);
        if ((local_8c != -1) && (local_98.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_98.Data);
        }
        DestructItems<FPurchaseCheckoutRequest::FPurchaseOfferEntry,int>
                  ((FPurchaseOfferEntry *)local_a8.Data,(int)local_a0);
        if ((FPurchaseOfferEntry *)local_a8.Data != (FPurchaseOfferEntry *)0x0) {
          FMemory::Free(local_a8.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_188)
      ;
    }
    DestructItems<FString,int>((FString *)local_248.AllocatorInstance.Data,local_248.ArrayNum);
    if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.AllocatorInstance.Data);
    }
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
  }
LAB_14ec076d4:
  bVar2 = bVar13;
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
LAB_14ec076f6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e0);
  return bVar2;
}

// HandleSessionExecCommands @ 14ec07730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FOnlineSubsystemImpl::HandleSessionExecCommands
          (FOnlineSubsystemImpl *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  wchar_t *local_res18 [2];
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res18[0] = param_2;
  bVar2 = FParse::Command(local_res18,L"DUMP",true);
  if (!bVar2) {
    return false;
  }
  (**(code **)(*(longlong *)this + 0x20))(this,&local_18);
  if (local_18 != (longlong *)0x0) {
    if ((local_18 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (**(code **)(*local_18 + 0x450))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return true;
}

// HandleStoreExecCommands @ 14ec077d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FOnlineSubsystemImpl::HandleStoreExecCommands
          (FOnlineSubsystemImpl *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  wchar_t *local_res18;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  longlong *local_c0;
  TReferenceControllerBase<1> *local_b8;
  longlong *local_b0;
  TReferenceControllerBase<1> *local_a8;
  longlong local_a0;
  TReferenceControllerBase<1> *local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  bVar11 = false;
  bVar3 = false;
  local_res18 = param_2;
  (**(code **)(*(longlong *)this + 0x90))(this,&local_c0);
  (**(code **)(*(longlong *)this + 0x80))(this,&local_b0);
  if (((local_c0 != (longlong *)0x0) && (local_b0 != (longlong *)0x0)) &&
     (bVar2 = FParse::Command(&local_res18,L"LIST",true), bVar2)) {
    FParse::Token(&local_90,&local_res18,false);
    FParse::Token(&local_70,&local_res18,false);
    if ((local_90.Data.ArrayNum < 2) || (local_70.Data.ArrayNum < 2)) {
      bVar3 = bVar11;
      if (2 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl(&local_80,L"usage: STORE LIST <product> <userid>");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if ((local_b0 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (**(code **)(*local_b0 + 0x120))(local_b0,&local_a0,&local_70);
      if (local_a0 != 0) {
        local_e8.Data = (FScriptContainerElement *)0x0;
        local_e0 = 0;
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_e8,(int *)((longlong)&local_e0 + 4));
        _Src.Data = local_90.Data.AllocatorInstance.Data;
        pFVar9 = local_e8.Data + (longlong)iVar5 * 0x10;
        local_e0 = CONCAT44(local_e0._4_4_,iVar5 + 1);
        *(FScriptContainerElement **)pFVar9 = (FScriptContainerElement *)0x0;
        *(int *)(pFVar9 + 8) = local_90.Data.ArrayNum;
        if (local_90.Data.ArrayNum == 0) {
          *(int *)(pFVar9 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_90.Data.ArrayNum,0,(ForAnyElementType *)pFVar9,local_90.Data.ArrayNum
                     ,(int *)(pFVar9 + 0xc));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar9,_Src.Data,(longlong)local_90.Data.ArrayNum * 2);
        }
        plVar8 = local_c0;
        if ((local_c0 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar8 = local_c0, bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        pTVar10 = local_b8;
        pcVar1 = *(code **)(*plVar8 + 0x40);
        if (local_b8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_b8->SharedReferenceCount = (atomic<int>)((int)local_b8->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_d0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_d8,(FWriteAccessScope *)&local_48);
        local_30 = &local_d0;
        puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &
                    ___7__TCommonDelegateInstanceState___A6AX_NAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar7 = FDelegateHandle::GenerateNewID();
          puVar6[2] = uVar7;
          *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineSubsystemImpl::HandleStoreExecCommands'::`35'::<lambda_1>_>
                     ::_vftable_;
          puVar6[4] = pTVar10;
          puVar6[3] = plVar8;
          pTVar10 = (TReferenceControllerBase<1> *)0x0;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        if ((local_a0 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        (*pcVar1)(plVar8,local_a0,&local_e8,&local_d8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_d8,(FWriteAccessScope *)&local_60);
        if ((local_d0.DelegateSize != 0) &&
           (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_d0,0,0,0x10);
          local_d0.DelegateSize = 0;
        }
        if (local_60.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
        }
        if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_d0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        DestructItems<FString,int>((FString *)local_e8.Data,(int)local_e0);
        if (local_e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
      bVar3 = true;
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
  return bVar3;
}

// InitNamedInterfaces @ 14ec09840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FOnlineSubsystemImpl::InitNamedInterfaces(FOnlineSubsystemImpl *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNamedInterfaces *this_00;
  FUObjectItem *this_01;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  code *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  code *local_a8;
  longlong lStack_a0;
  undefined1 local_98 [128];
  FName local_18;
  
  local_18 = (FName)(__security_cookie.value ^ (ulonglong)auStack_d8);
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UNamedInterfaces::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  this_00 = (UNamedInterfaces *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  this->NamedInterfaces = this_00;
  if (this_00 != (UNamedInterfaces *)0x0) {
    UNamedInterfaces::Initialize(this_00);
    local_b8 = OnNamedInterfaceCleanup;
    uStack_b0 = 0;
    lStack_a0 = (ulonglong)uStack_ac << 0x20;
    local_a8 = OnNamedInterfaceCleanup;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddRaw<FOnlineSubsystemImpl>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->NamedInterfaces->CleanupDelegates,(FOnlineSubsystemImpl *)&local_b8,
               (pmf_a5e720a6 *)this);
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&this->NamedInterfaces->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_01,RootSet);
  }
  return;
}

// IsDedicated @ 14ec09f10

bool __thiscall FOnlineSubsystemImpl::IsDedicated(FOnlineSubsystemImpl *this)

{
  return this->bForceDedicated != false;
}

// IsEnabled @ 14ec09f30

bool __thiscall FOnlineSubsystemImpl::IsEnabled(FOnlineSubsystemImpl *this)

{
  bool bVar1;
  FName local_res8;
  FName local_res10 [3];
  
  local_res10[0] = this->InstanceName;
  if (local_res10[0] == DefaultInstanceName) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    bVar1 = IOnlineSubsystem::IsEnabled(&this->SubsystemName,&local_res8);
    return bVar1;
  }
  bVar1 = IOnlineSubsystem::IsEnabled(&this->SubsystemName,local_res10);
  return bVar1;
}

// IsLocalPlayer @ 14ec0a2e0

bool __thiscall
FOnlineSubsystemImpl::IsLocalPlayer(FOnlineSubsystemImpl *this,FUniqueNetId *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *local_28;
  TReferenceControllerBase<1> *local_20;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  cVar2 = (**(code **)(*(longlong *)this + 0x120))();
  if (cVar2 == '\0') {
    (**(code **)(*(longlong *)this + 0x80))(this,&local_28);
    if (local_28 != (longlong *)0x0) {
      iVar5 = 0;
      do {
        if ((local_28 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        (**(code **)(*local_28 + 0x110))(local_28,&local_18,iVar5);
        if (local_18 != 0) {
          if ((local_18 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
          cVar2 = (*(code *)**(undefined8 **)param_1)(param_1,local_18);
          if (cVar2 != '\0') {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_10);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_20);
            return true;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_10);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  return false;
}

// IsServer @ 14ec0bed0

bool __thiscall FOnlineSubsystemImpl::IsServer(FOnlineSubsystemImpl *this)

{
  bool bVar1;
  
  bVar1 = IsServerForOnlineSubsystems((FName)0x0);
  return bVar1;
}

// OnConfigSectionsChanged @ 14ec0d420

void __thiscall
FOnlineSubsystemImpl::OnConfigSectionsChanged
          (FOnlineSubsystemImpl *this,FString *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  bool bVar14;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == GEngineIni.Data.ArrayNum) {
    if (iVar4 < 2) goto LAB_14ec0d473;
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)GEngineIni.Data.AllocatorInstance.Data);
    bVar14 = iVar4 == 0;
  }
  else {
    bVar14 = iVar4 + GEngineIni.Data.ArrayNum == 1;
  }
  if (!bVar14) {
    return;
  }
LAB_14ec0d473:
  iVar4 = *(int *)&(param_2->Elements).field_0x28;
  iVar10 = 0;
  iVar12 = 0;
  uVar5 = 1;
  puVar1 = &(param_2->Elements).field_0x10;
  iVar6 = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar6 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ec0d51d;
      uVar9 = puVar13[lVar7 + 1];
    }
    uVar5 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar6 = iVar12 + -1 + local_res20;
    if (iVar4 < iVar6) {
      iVar6 = iVar4;
    }
  }
LAB_14ec0d51d:
  uVar9 = *(uint *)&(param_2->Elements).field_0x28;
  uVar8 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar10);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_2->Elements).field_0x8 -
                       *(int *)&(param_2->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar4 < (int)uVar9)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar9 != uVar5) {
    puVar11 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar10;
      uVar8 = uVar8 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ec0d630;
      uVar9 = *(uint *)(puVar11 + lVar7 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar9) {
      uVar9 = uVar5;
    }
  }
LAB_14ec0d630:
  while( true ) {
    if (*(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    bVar14 = ::FString::StartsWith
                       ((FString *)
                        (*(longlong *)&param_2->Elements +
                        (longlong)TStack_60.CurrentBitIndex * 0x18),L"OnlineSubsystem",0xf,
                        IgnoreCase);
    if (bVar14) {
      (**(code **)(*(longlong *)this + 0x1f0))(this,param_2);
      return;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// OnNamedInterfaceCleanup @ 14ec0d760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FOnlineSubsystemImpl::OnNamedInterfaceCleanup(FOnlineSubsystemImpl *this)

{
  FUObjectItem *this_00;
  FString local_18;
  
  if (this->NamedInterfaces != (UNamedInterfaces *)0x0) {
    if (3 < (byte)LogOnline._0_1_) {
      ::FString::PrintfImpl(&local_18,L"Removing %d named interfaces");
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&this->NamedInterfaces->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_00,RootSet);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->NamedInterfaces->CleanupDelegates,this);
    this->NamedInterfaces = (UNamedInterfaces *)0x0;
  }
  return;
}

// OnQueryReceiptsComplete @ 14ec0d930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlineSubsystemImpl::OnQueryReceiptsComplete
          (FOnlineSubsystemImpl *this,FOnlineError *param_1,
          TSharedPtr<FUniqueNetId_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  if (3 < (byte)LogOnline._0_1_) {
    FOnlineError::ToLogString(param_1,&local_18);
    ::FString::PrintfImpl(&local_28,L"OnQueryReceiptsComplete %s");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_2->Object == (FUniqueNetId *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DumpReceipts(this,param_2->Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// PreUnload @ 14ec0e1c0

void __thiscall FOnlineSubsystemImpl::PreUnload(FOnlineSubsystemImpl *this)

{
  return;
}

// ReloadConfigs @ 14ec0fb70

void __thiscall
FOnlineSubsystemImpl::ReloadConfigs
          (FOnlineSubsystemImpl *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  return;
}

// SetForceDedicated @ 14ec11c10

void __thiscall FOnlineSubsystemImpl::SetForceDedicated(FOnlineSubsystemImpl *this,bool param_1)

{
  this->bForceDedicated = param_1;
  return;
}

// SetNamedInterface @ 14ec12230

void __thiscall
FOnlineSubsystemImpl::SetNamedInterface(FOnlineSubsystemImpl *this,FName param_1,UObject *param_2)

{
  if (this->NamedInterfaces == (UNamedInterfaces *)0x0) {
    InitNamedInterfaces(this);
  }
  if (this->NamedInterfaces != (UNamedInterfaces *)0x0) {
    UNamedInterfaces::SetNamedInterface(this->NamedInterfaces,param_1,param_2);
  }
  return;
}

// SetUsingMultiplayerFeatures @ 14ec127e0

void __thiscall
FOnlineSubsystemImpl::SetUsingMultiplayerFeatures
          (FOnlineSubsystemImpl *this,FUniqueNetId *param_1,bool param_2)

{
  return;
}

// Shutdown @ 14ec12c60

bool __thiscall FOnlineSubsystemImpl::Shutdown(FOnlineSubsystemImpl *this)

{
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            FCoreDelegates::TSOnConfigSectionsChanged();
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
  OnNamedInterfaceCleanup(this);
  this->bTickerStarted = false;
  return true;
}

// StartTicker @ 14ec12f80

void __thiscall FOnlineSubsystemImpl::StartTicker(FOnlineSubsystemImpl *this)

{
  this->bTickerStarted = true;
  return;
}

// StopTicker @ 14ec13130

void __thiscall FOnlineSubsystemImpl::StopTicker(FOnlineSubsystemImpl *this)

{
  this->bTickerStarted = false;
  return;
}

// Tick @ 14ec13be0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOnlineSubsystemImpl::Tick(FOnlineSubsystemImpl *this,float param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar3;
  longlong lVar4;
  void *pvVar5;
  atomic<unsigned___int64> aVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  TArray<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar12;
  bool bVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FOnlineSubsystemImpl::Tick(float)_::_5_::FStat_STAT_FOnlineSubsystemImpl_Tick>
  FVar19;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FOnlineSubsystemImpl::Tick(float)_::_14_::FStat_STAT_FOnlineSubsystemImpl_Tick_ExecuteCallback>
  FVar20;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar21;
  FColor_u_0 FVar22;
  FName FVar23;
  undefined1 *puVar24;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_02;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20;
  uint uStackX_24;
  FName local_138;
  undefined1 local_130 [8];
  ForAnyElementType local_128;
  int local_120;
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  ulonglong local_108;
  FColor_u_0 local_100 [2];
  FColor_u_0 local_f8;
  uint local_f4;
  int *local_f0;
  TArray<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *local_e8;
  FName local_e0;
  FName local_d8;
  FName local_c8;
  LARGE_INTEGER local_b8;
  FStatMessage local_b0;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FReadAccessScope local_50;
  
  if (this->field_0x58 == '\0') {
    return true;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_FOnlineSubsystemImpl_Tick =
         (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FOnlineSubsystemImpl::Tick(float)_::_5_::FStat_STAT_FOnlineSubsystemImpl_Tick>
          )0x0;
    pFVar18 = ::FName::FName(&local_70,"STAT_FOnlineSubsystemImpl_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FOnlineSubsystemImpl_Tick,*pFVar18,
               L"STAT_FOnlineSubsystemImpl_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar19 = StatPtr_STAT_FOnlineSubsystemImpl_Tick;
  if (StatPtr_STAT_FOnlineSubsystemImpl_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FOnlineSubsystemImpl::Tick(float)_::_5_::FStat_STAT_FOnlineSubsystemImpl_Tick>
       )0x0) {
    pFVar18 = ::FName::FName(&local_68,"STAT_FOnlineSubsystemImpl_Tick");
    FVar19 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FOnlineSubsystemImpl::Tick(float)_::_5_::FStat_STAT_FOnlineSubsystemImpl_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FOnlineSubsystemImpl_Tick,
                          *pFVar18,L"STAT_FOnlineSubsystemImpl_Tick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar19;
  bVar11 = false;
  bVar10 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  bVar14 = false;
  bVar13 = false;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_14ec13e0d:
    bVar11 = bVar14;
    bVar10 = bVar13;
    bVar13 = false;
    local_e0 = local_d8;
    FVar23 = local_d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar11 = false;
      bVar10 = true;
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138 = FVar23;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystem\\Source\\Private\\OnlineSubsystemImpl.cpp"
                   ,0x7a);
        bVar11 = true;
        bVar10 = true;
        bVar14 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ec13e0d;
    local_e0 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar13 = true;
  }
  if (**(longlong **)&this->field_0x40 != 0) {
    local_130 = (undefined1  [8])0x0;
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120 = 0;
    local_e8 = (TArray<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                *)&this->field_0x48;
    puVar1 = &this->field_0x54;
    local_f0 = (int *)puVar1;
    while( true ) {
      puVar24 = &this->field_0x50;
      lVar4 = **(longlong **)&this->field_0x40;
      if (lVar4 == 0) break;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_130,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar4 + 8));
      pvVar5 = *(void **)&this->field_0x40;
      *(longlong *)&this->field_0x40 = lVar4;
      local_108 = 0;
      local_118 = (undefined1  [8])0x0;
      local_110.Data = (FScriptContainerElement *)0x0;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar4 + 8),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
                 (FWriteAccessScope *)&local_a0);
      if (((int)local_108 != 0) && (local_110.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_110.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_110,0,0,0x10);
        local_108 = local_108 & 0xffffffff00000000;
      }
      if (local_a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
      }
      if (local_110.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_118);
      if (pvVar5 != (void *)0x0) {
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)pvVar5 + 8));
        ::operator_delete(pvVar5,0x20);
      }
      local_f0 = (int *)puVar1;
      if (((*(undefined1 **)&this->field_0x48 <= local_130) &&
          (local_130 < *(undefined1 **)&this->field_0x48 + (longlong)*(int *)puVar1 * 0x18)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar7 = (code *)swi(3);
        uVar15 = (*pcVar7)();
        return (bool)uVar15;
      }
      iVar16 = *(int *)&this->field_0x50;
      if (iVar16 == *(int *)puVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)&this->field_0x48,(int *)puVar1);
      }
      *(int *)&this->field_0x50 = iVar16 + 1;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 (*(longlong *)&this->field_0x48 + (longlong)iVar16 * 0x18),
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_130);
    }
    iVar16 = *(int *)puVar24;
    this_02 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)&this->field_0x48;
    pTVar3 = this_02 + (longlong)iVar16 * 3;
    local_138 = (FName)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
LAB_14ec14008:
    do {
      if (*(int *)puVar24 != iVar16) {
        `TCheckedPointerIterator<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      pTVar12 = local_e8;
      if (this_02 == pTVar3) goto LAB_14ec1431a;
      if ((*(int *)(*(longlong *)local_138 + 0x9d4c) < ::_TSS2) &&
         (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        StatPtr_STAT_FOnlineSubsystemImpl_Tick_ExecuteCallback =
             (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FOnlineSubsystemImpl::Tick(float)_::_14_::FStat_STAT_FOnlineSubsystemImpl_Tick_ExecuteCallback>
              )0x0;
        pFVar18 = ::FName::FName(&local_60,"STAT_FOnlineSubsystemImpl_Tick_ExecuteCallback");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FOnlineSubsystemImpl_Tick_ExecuteCallback,*pFVar18,
                   L"STAT_FOnlineSubsystemImpl_Tick_ExecuteCallback","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS2);
      }
      FVar20 = StatPtr_STAT_FOnlineSubsystemImpl_Tick_ExecuteCallback;
      if (StatPtr_STAT_FOnlineSubsystemImpl_Tick_ExecuteCallback ==
          (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FOnlineSubsystemImpl::Tick(float)_::_14_::FStat_STAT_FOnlineSubsystemImpl_Tick_ExecuteCallback>
           )0x0) {
        pFVar18 = ::FName::FName(&local_58,"STAT_FOnlineSubsystemImpl_Tick_ExecuteCallback");
        FVar20 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FOnlineSubsystemImpl::Tick(float)_::_14_::FStat_STAT_FOnlineSubsystemImpl_Tick_ExecuteCallback>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_FOnlineSubsystemImpl_Tick_ExecuteCallback,*pFVar18,
                              L"STAT_FOnlineSubsystemImpl_Tick_ExecuteCallback","STATGROUP_Quick",
                              "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      FVar23 = *(FName *)FVar20;
      bVar8 = false;
      bVar14 = false;
      local_c8.ComparisonIndex.Value = 0;
      local_c8.Number = 0;
      FVar22.Bits = (uint)FVar23.ComparisonIndex.Value;
      uVar21 = FVar23.Number;
      if ((FVar22.Bits == 0) && (uVar21 == 0)) {
LAB_14ec14208:
        bVar9 = false;
        FVar23 = local_c8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_100[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_100[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
          bVar8 = false;
          bVar14 = true;
          if (-1 < CpuChannel->Enabled) {
            local_f8.Bits = FVar22.Bits;
            local_f4 = uVar21;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      ((FName *)&local_f8._s_0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystem\\Source\\Private\\OnlineSubsystemImpl.cpp"
                       ,0x87);
            bVar8 = true;
            bVar14 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14ec14208;
        local_res20.Bits = FVar22.Bits;
        uStackX_24 = uVar21;
        local_c8 = FVar23;
        FThreadStats::AddMessage(FVar23,CycleScopeStart);
        bVar8 = false;
        bVar9 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_02,&local_50);
      if ((*(int *)&this_02[2].AccessDetector.State != 0) &&
         (aVar6 = this_02[1].AccessDetector.State, aVar6 != (atomic<unsigned___int64>)0x0)) {
        (**(code **)(*(longlong *)aVar6 + 0x68))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_50);
      if (bVar14) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar9) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_b0.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
          local_b0.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_b8);
          local_b0.StatData.Pad[4] = '\0';
          local_b0.StatData.Pad[5] = '\0';
          local_b0.StatData.Pad[6] = '\0';
          local_b0.StatData.Pad[7] = '\0';
          local_b0.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
          local_b0.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
          local_b0.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
          local_b0.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_b0);
          piVar2 = &this_00->ScopeCount;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FThreadStats::Flush(this_00,false,false);
            this_02 = this_02 + 3;
            goto LAB_14ec14008;
          }
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      this_02 = this_02 + 3;
    } while( true );
  }
LAB_14ec143fa:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return true;
LAB_14ec1431a:
  iVar16 = *(int *)puVar24;
  if (iVar16 < 0) {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x18,8,-iVar16,&local_e8->AllocatorInstance,(int *)puVar24,local_f0);
    DefaultConstructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
              ((pTVar12->AllocatorInstance).Data + (longlong)iVar17 * 0x18,-iVar16);
  }
  else if (0 < iVar16) {
    TArray<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>::
    RemoveAtImpl(local_e8,0,iVar16);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
             (FWriteAccessScope *)&local_88);
  if ((local_120 != 0) && (local_128.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_128.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_128,0,0,0x10);
    local_120 = 0;
  }
  FVar23 = local_e0;
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_130);
  goto LAB_14ec143fa;
}

