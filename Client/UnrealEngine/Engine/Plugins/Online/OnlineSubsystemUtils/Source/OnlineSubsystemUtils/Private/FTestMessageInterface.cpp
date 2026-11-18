// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 8

// FTestMessageInterface @ 14ecd84d0

/* WARNING: Enum "Type": Some values do not have unique names */

FTestMessageInterface * __thiscall
FTestMessageInterface::FTestMessageInterface(FTestMessageInterface *this,FString *param_1)

{
  FString local_18;
  
  this->bEnumerateMessages = true;
  this->bReadMessages = true;
  this->bSendMessages = true;
  this->bDeleteMessages = false;
  (this->SubsystemName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubsystemName).Data.ArrayNum = 0;
  (this->SubsystemName).Data.ArrayMax = 0;
  this->OnlineSub = (IOnlineSubsystem *)0x0;
  *(undefined8 *)&this->OnEnumerateMessagesCompleteDelegate = 0;
  *(undefined8 *)&(this->OnEnumerateMessagesCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnEnumerateMessagesCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnReadMessageCompleteDelegate = 0;
  *(undefined8 *)&(this->OnReadMessageCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnReadMessageCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnSendMessageCompleteDelegate = 0;
  *(undefined8 *)&(this->OnSendMessageCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnSendMessageCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDeleteMessageCompleteDelegate = 0;
  *(undefined8 *)&(this->OnDeleteMessageCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDeleteMessageCompleteDelegate).field_0x10 = 0;
  (this->OnEnumerateMessagesCompleteDelegateHandle).ID = 0;
  (this->OnReadMessageCompleteDelegateHandle).ID = 0;
  (this->OnSendMessageCompleteDelegateHandle).ID = 0;
  (this->OnDeleteMessageCompleteDelegateHandle).ID = 0;
  (this->MessagesToRead).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessagesToRead).ArrayNum = 0;
  (this->MessagesToRead).ArrayMax = 0;
  (this->Recipients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Recipients).ArrayNum = 0;
  (this->Recipients).ArrayMax = 0;
  (this->MessagesToDelete).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessagesToDelete).ArrayNum = 0;
  (this->MessagesToDelete).ArrayMax = 0;
  if (3 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl(&local_18,L"FTestMessageInterface::FTestMessageInterface");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  ::FString::operator=(&this->SubsystemName,param_1);
  return this;
}

// ~FTestMessageInterface @ 14ecdb180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestMessageInterface::~FTestMessageInterface(FTestMessageInterface *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FString local_18;
  
  if (3 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl(&local_18,L"FTestMessageInterface::~FTestMessageInterface");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
            ((TSharedRef<FUniqueNetId_const_,1> *)(this->MessagesToDelete).AllocatorInstance.Data,
             (this->MessagesToDelete).ArrayNum);
  pFVar1 = (this->MessagesToDelete).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
            ((TSharedRef<FUniqueNetId_const_,1> *)(this->Recipients).AllocatorInstance.Data,
             (this->Recipients).ArrayNum);
  pFVar1 = (this->Recipients).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
            ((TSharedRef<FUniqueNetId_const_,1> *)(this->MessagesToRead).AllocatorInstance.Data,
             (this->MessagesToRead).ArrayNum);
  pFVar1 = (this->MessagesToRead).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDeleteMessageCompleteDelegate);
  pvVar2 = *(void **)&(this->OnDeleteMessageCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDeleteMessageCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSendMessageCompleteDelegate);
  pvVar2 = *(void **)&(this->OnSendMessageCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSendMessageCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnReadMessageCompleteDelegate);
  pvVar2 = *(void **)&(this->OnReadMessageCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReadMessageCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEnumerateMessagesCompleteDelegate
            );
  pvVar2 = *(void **)&(this->OnEnumerateMessagesCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEnumerateMessagesCompleteDelegate);
  pFVar1 = (this->SubsystemName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// FinishTest @ 14ece6910

void __thiscall FTestMessageInterface::FinishTest(FTestMessageInterface *this)

{
  IOnlineSubsystem *pIVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  bVar4 = false;
  pIVar1 = this->OnlineSub;
  if (pIVar1 != (IOnlineSubsystem *)0x0) {
    plVar5 = (longlong *)(**(code **)(pIVar1->_padding_ + 0xc0))(pIVar1,local_58);
    bVar4 = true;
    if (*plVar5 != 0) {
      bVar3 = true;
      goto LAB_14ece6950;
    }
  }
  bVar3 = false;
LAB_14ece6950:
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  if (bVar3) {
    plVar5 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0xc0))(this->OnlineSub,local_48);
    if (*plVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(*(longlong *)*plVar5 + 0x18))
              ((longlong *)*plVar5,0,&this->OnEnumerateMessagesCompleteDelegateHandle);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    plVar5 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0xc0))(this->OnlineSub,local_38);
    if (*plVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(*(longlong *)*plVar5 + 0x50))
              ((longlong *)*plVar5,0,&this->OnReadMessageCompleteDelegateHandle);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    plVar5 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0xc0))(this->OnlineSub,local_28);
    if (*plVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(*(longlong *)*plVar5 + 0x90))
              ((longlong *)*plVar5,0,&this->OnSendMessageCompleteDelegateHandle);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    plVar5 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0xc0))(this->OnlineSub,local_18);
    if (*plVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(*(longlong *)*plVar5 + 0xb8))
              ((longlong *)*plVar5,0,&this->OnDeleteMessageCompleteDelegateHandle);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  ~FTestMessageInterface(this);
  ::operator_delete(this,0xd0);
  return;
}

// OnDeleteMessageComplete @ 14eceba90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FTestMessageInterface::OnDeleteMessageComplete
          (FTestMessageInterface *this,int param_1,bool param_2,FUniqueNetId *param_3,
          FString *param_4)

{
  FString local_18;
  
  if (4 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl(&local_18,L"DeleteMessage() for player (%d) was success=%d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAt
            (&this->MessagesToDelete,0,Default);
  if ((this->MessagesToDelete).ArrayNum == 0) {
    this->bDeleteMessages = false;
  }
  StartNextTest(this);
  return;
}

// OnReadMessageComplete @ 14ecf2870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FTestMessageInterface::OnReadMessageComplete
          (FTestMessageInterface *this,int param_1,bool param_2,FUniqueNetId *param_3,
          FString *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  TestAttribute *pTVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_128;
  longlong local_118;
  TReferenceControllerBase<1> *local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FVariantData local_78;
  FVariantData local_58;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  if (4 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl(&local_108,L"ReadMessage() for player (%d) was success=%d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  if (!param_2) goto LAB_14ecf2d9e;
  plVar4 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0xc0))(this->OnlineSub,local_38);
  if ((*plVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(*(longlong *)*plVar4 + 0x68))((longlong *)*plVar4,&local_118,param_1,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  uVar8 = 0;
  pTVar7 = TestAttributeList;
  uVar9 = uVar8;
  do {
    local_78.Type = Empty;
    local_78.Value.AsInt64 = 0;
    local_78.Value._8_8_ = 0;
    local_78.CachedEstimatedMaxEscapedStringSize = 0;
    if ((local_118 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar10 = (int)uVar9;
    bVar2 = FOnlineMessagePayload::GetAttribute
                      ((FOnlineMessagePayload *)(local_118 + 0x10),&TestAttributeList[iVar10].Name,
                       &local_78);
    if (bVar2) {
      bVar2 = FVariantData::operator!=(&local_78,&TestAttributeList[iVar10].Value);
      if (bVar2) {
        if (4 < (byte)LogOnline._0_1_) {
          ::FString::PrintfImpl
                    (&local_f8,L"Attribute %s is the wrong value in the received message payload");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          FVar5.Data = local_f8.Data.AllocatorInstance.Data;
LAB_14ecf2b0e:
          if (FVar5.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar5.Data);
          }
        }
      }
      else if (4 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl(&local_e8,L"Attribute %s MATCHED in the received message payload");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        FVar5.Data = local_e8.Data.AllocatorInstance.Data;
        goto LAB_14ecf2b0e;
      }
    }
    else if (4 < (byte)LogOnline._0_1_) {
      ::FString::PrintfImpl(&local_d8,L"Attribute %s is missing from the received message payload");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      FVar5.Data = local_d8.Data.AllocatorInstance.Data;
      goto LAB_14ecf2b0e;
    }
    FVariantData::Empty(&local_78);
    uVar9 = (ulonglong)(iVar10 + 1);
    pTVar7 = pTVar7 + 1;
  } while ((longlong)pTVar7 < 0x1553ae870);
  local_58.Value.AsInt64 = 0;
  local_58.Value._8_8_ = 0;
  local_58.Type = Empty;
  local_58.CachedEstimatedMaxEscapedStringSize = 0;
  if ((local_118 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_88,L"BLOBValue");
  bVar2 = FOnlineMessagePayload::GetAttribute
                    ((FOnlineMessagePayload *)(local_118 + 0x10),&local_88,&local_58);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 0;
    FVariantData::GetValue(&local_58,&local_128);
    if (local_128.ArrayNum == 8) {
      iVar10 = 8;
      uVar9 = uVar8;
      do {
        uVar6 = (uint)uVar8;
        uVar3 = 0;
        if ((int)uVar6 < iVar10) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if (uVar3 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar10 = local_128.ArrayNum;
        }
        local_98.Data.AllocatorInstance.Data = local_128.AllocatorInstance.Data;
        if (local_128.AllocatorInstance.Data[uVar9] !=
            *(FScriptContainerElement *)(BLOBTestValue + uVar9)) {
          if ((byte)LogOnline._0_1_ < 5) goto LAB_14ecf2d79;
          ::FString::PrintfImpl
                    (&local_a8,
                     L"Attribute BLOBValue contains the wrong data at position %d in the received message payload"
                    );
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u__s_s_15308a7b0,(FLogCategoryBase *)&LogOnline);
          local_c8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
          goto LAB_14ecf2d25;
        }
        uVar8 = (ulonglong)(uVar6 + 1);
        uVar9 = uVar9 + 1;
      } while (uVar6 + 1 < 8);
      if (4 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl
                  (&local_b8,L"Attribute BLOBValue MATCHED in the received message payload");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
        goto LAB_14ecf2d25;
      }
    }
    else {
      local_98.Data.AllocatorInstance.Data = local_128.AllocatorInstance.Data;
      if (4 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl
                  (&local_c8,
                   L"Attribute BLOBValue is the wrong size in the received message payload");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
LAB_14ecf2d25:
        local_98.Data.AllocatorInstance.Data = local_128.AllocatorInstance.Data;
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          local_98.Data.AllocatorInstance.Data = local_128.AllocatorInstance.Data;
        }
      }
    }
LAB_14ecf2d79:
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  else if (4 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl
              (&local_98,L"Attribute BLOBValue is missing from the received message payload");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    goto LAB_14ecf2d79;
  }
  FVariantData::Empty(&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_110);
LAB_14ecf2d9e:
  TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAt
            (&this->MessagesToRead,0,Default);
  if ((this->MessagesToRead).ArrayNum == 0) {
    this->bReadMessages = false;
  }
  StartNextTest(this);
  return;
}

// OnSendMessageComplete @ 14ecf3450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestMessageInterface::OnSendMessageComplete
          (FTestMessageInterface *this,int param_1,bool param_2,FString *param_3)

{
  FString local_18;
  
  if (4 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl(&local_18,L"SendMessage() for player (%d) was success=%d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->bSendMessages = false;
  this->bEnumerateMessages = true;
  StartNextTest(this);
  return;
}

// StartNextTest @ 14ecfa5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTestMessageInterface::StartNextTest(FTestMessageInterface *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  TSharedPtr<IOnlineMessage,1> *pTVar6;
  IOnlineMessage *pIVar7;
  TSharedPtr<IOnlineIdentity,1> *this_00;
  IOnlineIdentity *pIVar8;
  TestAttribute *pTVar9;
  longlong lVar10;
  undefined1 auStack_178 [32];
  TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_158;
  FScriptContainerElement *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_128;
  FString local_118;
  FString local_108;
  longlong local_f8;
  TReferenceControllerBase<1> *local_f0;
  FVariantData local_e8;
  undefined1 local_c8 [8];
  TReferenceControllerBase<1> *local_c0;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  undefined1 local_a8 [8];
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_78;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (this->bEnumerateMessages == false) {
    if ((this->bReadMessages == false) || ((this->MessagesToRead).ArrayNum < 1)) {
      if ((this->bSendMessages == false) || ((this->Recipients).ArrayNum < 1)) {
        if ((this->bDeleteMessages == false) || ((this->MessagesToDelete).ArrayNum < 1)) {
          FinishTest(this);
        }
        else {
          pTVar6 = (TSharedPtr<IOnlineMessage,1> *)
                   (**(code **)(this->OnlineSub->_padding_ + 0xc0))(this->OnlineSub,local_88);
          pIVar7 = TSharedPtr<IOnlineMessage,1>::operator->(pTVar6);
          iVar4 = (this->MessagesToDelete).ArrayNum;
          pcVar1 = *(code **)(pIVar7->_padding_ + 0xa8);
          if (iVar4 < 1) {
            local_158 = (TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)0x0;
            local_150 = (FScriptContainerElement *)(longlong)iVar4;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          (*pcVar1)(pIVar7,0,*(undefined8 *)(this->MessagesToDelete).AllocatorInstance.Data);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80);
        }
      }
      else {
        this_00 = (TSharedPtr<IOnlineIdentity,1> *)
                  (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_a8);
        pIVar8 = TSharedPtr<IOnlineIdentity,1>::operator->(this_00);
        (**(code **)(pIVar8->_padding_ + 0x110))(pIVar8,&local_f8,0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0);
        if (local_f8 == 0) {
          this->bSendMessages = false;
          StartNextTest(this);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f0);
        }
        else {
          local_78._44_4_ = 0x80;
          local_78._0_8_ = 0;
          pTVar9 = TestAttributeList;
          local_78._8_8_ = 0;
          lVar10 = 5;
          local_78._32_8_ = 0;
          local_78._40_4_ = 0;
          local_78._52_4_ = 0;
          local_38 = (void *)0x0;
          local_30 = 0;
          local_78._48_4_ = 0xffffffff;
          do {
            FOnlineMessagePayload::SetAttribute
                      ((FOnlineMessagePayload *)&local_78,&pTVar9->Name,&pTVar9->Value);
            pTVar9 = pTVar9 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.ArrayNum = 0;
          local_128.ArrayMax = 0;
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,&local_128.AllocatorInstance,&local_128.ArrayMax);
          iVar4 = iVar3 + 1;
          local_128.AllocatorInstance.Data[iVar3] = (FScriptContainerElement)BLOBTestValue[0];
          local_128.ArrayNum = iVar4;
          if ((local_128.AllocatorInstance.Data < (FScriptContainerElement *)(BLOBTestValue + 2)) &&
             ((FScriptContainerElement *)(BLOBTestValue + 1) <
              local_128.AllocatorInstance.Data + local_128.ArrayMax)) {
            local_140 = (longlong)iVar4;
            local_138 = 1;
            local_150 = local_128.AllocatorInstance.Data;
            local_158 = (TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)(BLOBTestValue + 1);
            local_148 = (longlong)local_128.ArrayMax;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (local_128.ArrayNum == local_128.ArrayMax) {
            local_128.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_128.AllocatorInstance,&local_128.ArrayMax);
          }
          iVar4 = local_128.ArrayNum + 1;
          local_128.AllocatorInstance.Data[local_128.ArrayNum] =
               (FScriptContainerElement)BLOBTestValue[1];
          local_128.ArrayNum = iVar4;
          if ((local_128.AllocatorInstance.Data < (FScriptContainerElement *)(BLOBTestValue + 3)) &&
             ((FScriptContainerElement *)(BLOBTestValue + 2) <
              local_128.AllocatorInstance.Data + local_128.ArrayMax)) {
            local_140 = (longlong)iVar4;
            local_138 = 1;
            local_150 = local_128.AllocatorInstance.Data;
            local_158 = (TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)(BLOBTestValue + 2);
            local_148 = (longlong)local_128.ArrayMax;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (local_128.ArrayNum == local_128.ArrayMax) {
            local_128.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_128.AllocatorInstance,&local_128.ArrayMax);
          }
          iVar4 = local_128.ArrayNum + 1;
          local_128.AllocatorInstance.Data[local_128.ArrayNum] =
               (FScriptContainerElement)BLOBTestValue[2];
          local_128.ArrayNum = iVar4;
          if ((local_128.AllocatorInstance.Data < (FScriptContainerElement *)(BLOBTestValue + 4)) &&
             ((FScriptContainerElement *)(BLOBTestValue + 3) <
              local_128.AllocatorInstance.Data + local_128.ArrayMax)) {
            local_140 = (longlong)iVar4;
            local_138 = 1;
            local_150 = local_128.AllocatorInstance.Data;
            local_158 = (TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)(BLOBTestValue + 3);
            local_148 = (longlong)local_128.ArrayMax;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (local_128.ArrayNum == local_128.ArrayMax) {
            local_128.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_128.AllocatorInstance,&local_128.ArrayMax);
          }
          iVar4 = local_128.ArrayNum + 1;
          local_128.AllocatorInstance.Data[local_128.ArrayNum] =
               (FScriptContainerElement)BLOBTestValue[3];
          local_128.ArrayNum = iVar4;
          if ((local_128.AllocatorInstance.Data < (FScriptContainerElement *)(BLOBTestValue + 5)) &&
             ((FScriptContainerElement *)(BLOBTestValue + 4) <
              local_128.AllocatorInstance.Data + local_128.ArrayMax)) {
            local_140 = (longlong)iVar4;
            local_138 = 1;
            local_150 = local_128.AllocatorInstance.Data;
            local_158 = (TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)(BLOBTestValue + 4);
            local_148 = (longlong)local_128.ArrayMax;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (local_128.ArrayNum == local_128.ArrayMax) {
            local_128.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_128.AllocatorInstance,&local_128.ArrayMax);
          }
          iVar4 = local_128.ArrayNum + 1;
          local_128.AllocatorInstance.Data[local_128.ArrayNum] =
               (FScriptContainerElement)BLOBTestValue[4];
          local_128.ArrayNum = iVar4;
          if ((local_128.AllocatorInstance.Data < (FScriptContainerElement *)(BLOBTestValue + 6)) &&
             ((FScriptContainerElement *)(BLOBTestValue + 5) <
              local_128.AllocatorInstance.Data + local_128.ArrayMax)) {
            local_140 = (longlong)iVar4;
            local_138 = 1;
            local_150 = local_128.AllocatorInstance.Data;
            local_158 = (TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)(BLOBTestValue + 5);
            local_148 = (longlong)local_128.ArrayMax;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (local_128.ArrayNum == local_128.ArrayMax) {
            local_128.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_128.AllocatorInstance,&local_128.ArrayMax);
          }
          iVar4 = local_128.ArrayNum + 1;
          local_128.AllocatorInstance.Data[local_128.ArrayNum] =
               (FScriptContainerElement)BLOBTestValue[5];
          local_128.ArrayNum = iVar4;
          if ((local_128.AllocatorInstance.Data < (FScriptContainerElement *)(BLOBTestValue + 7)) &&
             ((FScriptContainerElement *)(BLOBTestValue + 6) <
              local_128.AllocatorInstance.Data + local_128.ArrayMax)) {
            local_140 = (longlong)iVar4;
            local_138 = 1;
            local_150 = local_128.AllocatorInstance.Data;
            local_158 = (TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)(BLOBTestValue + 6);
            local_148 = (longlong)local_128.ArrayMax;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (local_128.ArrayNum == local_128.ArrayMax) {
            local_128.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_128.AllocatorInstance,&local_128.ArrayMax);
          }
          iVar4 = local_128.ArrayNum + 1;
          local_128.AllocatorInstance.Data[local_128.ArrayNum] =
               (FScriptContainerElement)BLOBTestValue[6];
          local_128.ArrayNum = iVar4;
          if ((local_128.AllocatorInstance.Data < &DefaultPatchBufferSizeCVar) &&
             ((FScriptContainerElement *)(BLOBTestValue + 7) <
              local_128.AllocatorInstance.Data + local_128.ArrayMax)) {
            local_140 = (longlong)iVar4;
            local_138 = 1;
            local_150 = local_128.AllocatorInstance.Data;
            local_158 = (TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)(BLOBTestValue + 7);
            local_148 = (longlong)local_128.ArrayMax;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          iVar4 = local_128.ArrayNum;
          if (local_128.ArrayNum == local_128.ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_128.AllocatorInstance,&local_128.ArrayMax);
          }
          local_e8.Type = Empty;
          local_128.ArrayNum = iVar4 + 1;
          local_e8.Value.AsInt64 = 0;
          local_e8.Value._8_8_ = 0;
          local_e8.CachedEstimatedMaxEscapedStringSize = 0;
          local_128.AllocatorInstance.Data[iVar4] = (FScriptContainerElement)BLOBTestValue[7];
          FVariantData::SetValue(&local_e8,&local_128);
          ::FString::FString(&local_118,L"BLOBValue");
          FOnlineMessagePayload::SetAttribute
                    ((FOnlineMessagePayload *)&local_78,&local_118,&local_e8);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          FVariantData::Empty(&local_e8);
          plVar5 = (longlong *)
                   (**(code **)(this->OnlineSub->_padding_ + 0xc0))(this->OnlineSub,local_98);
          if ((*plVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          plVar5 = (longlong *)*plVar5;
          pcVar1 = *(code **)(*plVar5 + 0x80);
          ::FString::FString(&local_108,L"TestType");
          local_158 = &local_78;
          (*pcVar1)(plVar5,0,&this->Recipients,&local_108);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_90);
          if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.AllocatorInstance.Data);
          }
          local_30 = 0;
          if (local_38 != (void *)0x0) {
            FMemory::Free(local_38);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_78);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f0);
        }
      }
    }
    else {
      pTVar6 = (TSharedPtr<IOnlineMessage,1> *)
               (**(code **)(this->OnlineSub->_padding_ + 0xc0))(this->OnlineSub,local_b8);
      pIVar7 = TSharedPtr<IOnlineMessage,1>::operator->(pTVar6);
      iVar4 = (this->MessagesToRead).ArrayNum;
      pcVar1 = *(code **)(pIVar7->_padding_ + 0x40);
      if (iVar4 < 1) {
        local_158 = (TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)0x0;
        local_150 = (FScriptContainerElement *)(longlong)iVar4;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (*pcVar1)(pIVar7,0,*(undefined8 *)(this->MessagesToRead).AllocatorInstance.Data);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    }
  }
  else {
    plVar5 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0xc0))(this->OnlineSub,local_c8);
    if ((*plVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*(longlong *)*plVar5 + 8))((longlong *)*plVar5,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
  }
  return;
}

// Test @ 14ecfc690

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
FTestMessageInterface::Test
          (FTestMessageInterface *this,UWorld *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FName *pFVar10;
  IOnlineSubsystem *pIVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  ulong64 *puVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  FName local_res8;
  FName local_res20;
  undefined1 local_248 [8];
  FDelegateAllocation local_240;
  undefined1 local_230 [8];
  FDelegateAllocation local_228;
  undefined1 local_218 [8];
  FDelegateAllocation local_210;
  undefined1 local_200 [8];
  FDelegateAllocation local_1f8;
  longlong local_1e8;
  TReferenceControllerBase<1> *pTStack_1e0;
  FString local_1d8;
  longlong local_1c8;
  TReferenceControllerBase<1> *pTStack_1c0;
  FString local_1b8;
  FDestructionSentinel local_1a8;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDestructionSentinel local_148;
  FDelegateAllocation *local_130;
  FDestructionSentinel local_128;
  FDelegateAllocation *local_110;
  FDestructionSentinel local_108;
  FDelegateAllocation *local_f0;
  FDestructionSentinel local_e8;
  FDelegateAllocation *local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  bVar4 = false;
  bVar6 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (3 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl(&local_1d8,L"FTestMessageInterface::Test");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = (this->SubsystemName).Data.ArrayNum;
  iVar7 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar7 = 0;
  }
  if (iVar7 == 0) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pFVar10 = &local_res8;
  }
  else if (iVar9 == 0) {
    pFVar10 = ::FName::FName(&local_res20,L"",FNAME_Find);
  }
  else {
    pFVar10 = ::FName::FName(&local_res20,
                             (wchar_t *)(this->SubsystemName).Data.AllocatorInstance.Data,FNAME_Find
                            );
  }
  pIVar11 = IOnlineSubsystem::Get(pFVar10);
  this->OnlineSub = pIVar11;
  if (pIVar11 != (IOnlineSubsystem *)0x0) {
    bVar4 = true;
    bVar6 = false;
    plVar12 = (longlong *)(**(code **)(pIVar11->_padding_ + 0x80))(pIVar11,local_98);
    if (*plVar12 != 0) {
      bVar4 = true;
      bVar6 = true;
      plVar12 = (longlong *)
                (**(code **)(this->OnlineSub->_padding_ + 0xc0))(this->OnlineSub,local_a8);
      if (*plVar12 != 0) {
        bVar5 = true;
        goto LAB_14ecfc7b0;
      }
    }
  }
  bVar5 = false;
LAB_14ecfc7b0:
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  }
  if (!bVar5) {
    if (2 < (byte)LogOnline._0_1_) {
      ::FString::PrintfImpl(&local_1b8,L"Failed to get message interface for %s");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
    }
    FinishTest(this);
    return;
  }
  local_248 = (undefined1  [8])0x0;
  local_240.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_240.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
             (FWriteAccessScope *)&local_148);
  local_130 = &local_240;
  puVar13 = UE::Core::Private::DelegateAllocate(0x28,&local_240);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &
               ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar13[2] = uVar14;
    puVar13[4] = OnEnumerateMessagesComplete;
    *puVar13 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestMessageInterface____A6AXH_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar13[3] = this;
  }
  if (local_148.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEnumerateMessagesCompleteDelegate
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_248);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
             (FWriteAccessScope *)&local_1a8);
  if ((local_240.DelegateSize != 0) &&
     (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_240.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_240,0,0,0x10);
    local_240.DelegateSize = 0;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  if (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_240.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_248);
  local_230 = (undefined1  [8])0x0;
  local_228.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_228.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_230,
             (FWriteAccessScope *)&local_128);
  local_110 = &local_228;
  puVar13 = UE::Core::Private::DelegateAllocate(0x28,&local_228);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &
               ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar13[2] = uVar14;
    puVar13[4] = OnReadMessageComplete;
    *puVar13 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestMessageInterface____A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar13[3] = this;
  }
  if (local_128.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnReadMessageCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_230);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_230,
             (FWriteAccessScope *)&local_190);
  if ((local_228.DelegateSize != 0) &&
     (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_228.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_228,0,0,0x10);
    local_228.DelegateSize = 0;
  }
  if (local_190.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
  }
  if (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_228.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_230);
  local_218 = (undefined1  [8])0x0;
  local_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_210.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
             (FWriteAccessScope *)&local_108);
  local_f0 = &local_210;
  puVar13 = UE::Core::Private::DelegateAllocate(0x28,&local_210);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &
               ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar13[2] = uVar14;
    puVar13[4] = OnSendMessageComplete;
    *puVar13 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestMessageInterface____A6AXH_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar13[3] = this;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSendMessageCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_218);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
             (FWriteAccessScope *)&local_178);
  if ((local_210.DelegateSize != 0) &&
     (local_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_210.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_210,0,0,0x10);
    local_210.DelegateSize = 0;
  }
  if (local_178.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
  }
  if (local_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_210.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_218);
  local_200 = (undefined1  [8])0x0;
  local_1f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1f8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_200,
             (FWriteAccessScope *)&local_e8);
  local_d0 = &local_1f8;
  puVar13 = UE::Core::Private::DelegateAllocate(0x28,&local_1f8);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &
               ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar13[2] = uVar14;
    *puVar13 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestMessageInterface____A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar13[4] = OnDeleteMessageComplete;
    puVar13[3] = this;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDeleteMessageCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_200);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_200,
             (FWriteAccessScope *)&local_160);
  if ((local_1f8.DelegateSize != 0) &&
     (local_1f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1f8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1f8,0,0,0x10);
    local_1f8.DelegateSize = 0;
  }
  if (local_160.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
  }
  if (local_1f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1f8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_200);
  plVar12 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0xc0))(this->OnlineSub,local_88);
  if ((*plVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar15 = (ulong64 *)
            (**(code **)(*(longlong *)*plVar12 + 0x10))
                      ((longlong *)*plVar12,local_c8,0,&this->OnEnumerateMessagesCompleteDelegate);
  (this->OnEnumerateMessagesCompleteDelegateHandle).ID = *puVar15;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  plVar12 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0xc0))(this->OnlineSub,local_78);
  if ((*plVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar15 = (ulong64 *)
            (**(code **)(*(longlong *)*plVar12 + 0x48))
                      ((longlong *)*plVar12,local_c0,0,&this->OnReadMessageCompleteDelegate);
  (this->OnReadMessageCompleteDelegateHandle).ID = *puVar15;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  plVar12 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0xc0))(this->OnlineSub,local_68);
  if ((*plVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar15 = (ulong64 *)
            (**(code **)(*(longlong *)*plVar12 + 0x88))
                      ((longlong *)*plVar12,local_b8,0,&this->OnSendMessageCompleteDelegate);
  (this->OnSendMessageCompleteDelegateHandle).ID = *puVar15;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  plVar12 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0xc0))(this->OnlineSub,local_58);
  if ((*plVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar15 = (ulong64 *)
            (**(code **)(*(longlong *)*plVar12 + 0xb0))
                      ((longlong *)*plVar12,local_b0,0,&this->OnDeleteMessageCompleteDelegate);
  (this->OnDeleteMessageCompleteDelegateHandle).ID = *puVar15;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  uVar17 = 0;
  if (0 < param_2->ArrayNum) {
    do {
      plVar12 = (longlong *)
                (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_48);
      if ((*plVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar12 = (longlong *)*plVar12;
      pcVar3 = *(code **)(*plVar12 + 0x120);
      uVar8 = 0;
      if ((int)uVar17 < param_2->ArrayNum) {
        uVar8 = ~uVar17 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*pcVar3)(plVar12,&local_1c8,(param_2->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x10)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      if (local_1c8 != 0) {
        pTVar2 = &this->Recipients;
        if ((local_1c8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_1e8 = local_1c8;
        pTStack_1e0 = pTStack_1c0;
        if (pTStack_1c0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_1c0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_1c0->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_1c8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar16 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar16 <= (FScriptContainerElement *)&local_1e8) &&
            ((FScriptContainerElement *)&local_1e8 <
             pFVar16 + (longlong)(this->Recipients).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = (this->Recipients).ArrayNum;
        piVar1 = &(this->Recipients).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->Recipients).ArrayNum = iVar9 + 1;
        pFVar16 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(longlong *)pFVar16 = local_1e8;
        *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTStack_1e0;
        if (pTStack_1e0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_1e0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_1e0->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_1e0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1c0);
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < param_2->ArrayNum);
  }
  StartNextTest(this);
  return;
}

