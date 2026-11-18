// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FUObjectToken @ 141ed3d30

FUObjectToken * __thiscall
FUObjectToken::FUObjectToken(FUObjectToken *this,UObject *param_1,FText *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  bool bVar5;
  char cVar6;
  FString *pFVar7;
  FText *pFVar8;
  longlong *plVar9;
  FName local_res8;
  FText local_58;
  FReadAccessScope local_48;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IMessageToken__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  FText::FText((FText *)&this->_padding_);
  this->_padding_ = (longlong)&___7FUObjectToken__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  (this->ObjectBeingReferenced).ObjectIndex = 0;
  (this->ObjectBeingReferenced).ObjectSerialNumber = 0;
  local_res8 = (FName)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&this->ObjectBeingReferenced,(FObjectPtr)&local_res8);
  (this->OriginalObjectPathName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &this->OriginalObjectPathName;
  (this->OriginalObjectPathName).Data.ArrayNum = 0;
  (this->OriginalObjectPathName).Data.ArrayMax = 0;
  if (param_1 != (UObject *)0x0) {
    pFVar7 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)param_1,(FString *)&local_58,(UObject *)0x0);
    if (pFVar1 != pFVar7) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->OriginalObjectPathName).Data.ArrayNum = (pFVar7->Data).ArrayNum;
      (this->OriginalObjectPathName).Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_58.TextData.Reference);
    }
  }
  bVar5 = FText::IsEmpty(param_2);
  if (bVar5) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &DefaultGetObjectDisplayName,&local_48);
    if (((DefaultGetObjectDisplayName._16_4_ == 0) || (DefaultGetObjectDisplayName._8_8_ == 0)) ||
       (cVar6 = (**(code **)(*(longlong *)DefaultGetObjectDisplayName._8_8_ + 0x38))(),
       cVar6 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &DefaultGetObjectDisplayName,&local_48);
      plVar9 = (longlong *)0x0;
      if (DefaultGetObjectDisplayName._16_4_ != 0) {
        plVar9 = (longlong *)DefaultGetObjectDisplayName._8_8_;
      }
      (**(code **)(*plVar9 + 0x60))(plVar9,&local_58,param_1,0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      FText::operator=((FText *)&this->_padding_,&local_58);
    }
    else {
      if (param_1 != (UObject *)0x0) {
        local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_res8.Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(&local_res8,(FString *)&local_58);
        pFVar8 = FText::FromString((FText *)&local_48,(FString *)&local_58);
        FText::operator=((FText *)&this->_padding_,pFVar8);
        if ((ITextData *)local_48.DestructionSentinel._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_48.DestructionSentinel._0_8_ + 0x10))();
        }
        if (local_58.TextData.Reference == (ITextData *)0x0) {
          return this;
        }
        FMemory::Free(local_58.TextData.Reference);
        return this;
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_48,L"MessageLog",L"NoneObjectToken",L"<None>");
      FText::operator=((FText *)&this->_padding_,pFVar8);
      local_58.TextData.Reference = (ITextData *)local_48.DestructionSentinel._0_8_;
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    return this;
  }
  pIVar3 = (param_2->TextData).Reference;
  pIVar4 = (ITextData *)this->_padding_;
  if (pIVar4 != pIVar3) {
    this->_padding_ = (longlong)pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  *(uint *)&this->_padding_ = param_2->Flags;
  return this;
}

// Create @ 141ee4bf0

TSharedRef<FUObjectToken,1> * __cdecl
FUObjectToken::Create
          (TSharedRef<FUObjectToken,1> *__return_storage_ptr__,UObject *param_1,FText *param_2)

{
  code *pcVar1;
  bool bVar2;
  FUObjectToken *this;
  TSharedRef<FUObjectToken,1> *pTVar3;
  TRawPtrProxy<FUObjectToken> local_res8;
  
  this = ::operator_new(0x58);
  if (this == (FUObjectToken *)0x0) {
    local_res8.Object = (FUObjectToken *)0x0;
  }
  else {
    local_res8.Object = FUObjectToken(this,param_1,param_2);
    if ((((local_res8.Object != (FUObjectToken *)0x0) && ((local_res8.Object)->_padding_ != 0)) &&
        ((local_res8.Object)->_padding_ != 0)) && (0 < *(int *)((local_res8.Object)->_padding_ + 8))
       ) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FUObjectToken,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedRef<FUObjectToken,1>::TSharedRef<FUObjectToken,1><FUObjectToken>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// GetObject @ 141efa030

FWeakObjectPtr * __thiscall FUObjectToken::GetObject(FUObjectToken *this)

{
  return &this->ObjectBeingReferenced;
}

// GetOnMessageTokenActivated @ 141efa050

TDelegate<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy> * __thiscall
FUObjectToken::GetOnMessageTokenActivated(FUObjectToken *this)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) && ((longlong *)this->_padding_ != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (TDelegate<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
              *)&this->_padding_;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &DefaultMessageTokenActivated;
}

// GetType @ 141efa9f0

Type __thiscall FUObjectToken::GetType(FUObjectToken *this)

{
  return Object;
}

