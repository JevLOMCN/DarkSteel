// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetContentOpenIconID_WrapperImpl @ 14b723c40

void __cdecl
UDS_VM_W_Common_ContentOpenMessage::SetContentOpenIconID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0x188) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::ContentOpenIconID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ContentOpenIconID.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetContentOpenName_WrapperImpl @ 14b723c80

void __cdecl
UDS_VM_W_Common_ContentOpenMessage::SetContentOpenName_WrapperImpl(void *param_1,void *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString *pFVar3;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  pFVar2 = ::FString::FString(&FStack_18,param_2);
  ::FString::FString(&FStack_38,"<Toast_Default>[{1}]</>");
  pFVar3 = DS_Util::GetFormatString<FString>(&FStack_28,&FStack_38,pFVar2);
  pFVar2 = (FString *)((longlong)param_1 + 400);
  if (pFVar2 != pFVar3) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_1 + 0x198) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)param_1 + 0x19c) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  FStack_38.Data.ArrayNum = FFieldNotificationClassDescriptor::ContentOpenName.BitNumber;
  FStack_38.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::ContentOpenName.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_38);
  return;
}

// SetContentOpenString_WrapperImpl @ 14b723c90

void __cdecl
UDS_VM_W_Common_ContentOpenMessage::SetContentOpenString_WrapperImpl(void *param_1,void *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString *pFVar3;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  pFVar2 = ::FString::FString(&FStack_18,param_2);
  ::FString::FString(&FStack_38,"<Toast_Default>{1}</>");
  pFVar3 = DS_Util::GetFormatString<FString>(&FStack_28,&FStack_38,pFVar2);
  pFVar2 = (FString *)((longlong)param_1 + 0x1a0);
  if (pFVar2 != pFVar3) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_1 + 0x1a8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)param_1 + 0x1ac) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  FStack_38.Data.ArrayNum = FFieldNotificationClassDescriptor::ContentOpenString.BitNumber;
  FStack_38.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::ContentOpenString.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_38);
  return;
}

// StaticClass @ 14b723ca0

UClass * __cdecl UDS_VM_W_Common_ContentOpenMessage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_ContentOpenMessage.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_ContentOpenMessage",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_ContentOpenMessage.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_ContentOpenMessage,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_ContentOpenMessage>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_ContentOpenMessage>,local_res8,
               UDS_VM_CommonMessage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_ContentOpenMessage.InnerSingleton;
}

// UDS_VM_W_Common_ContentOpenMessage @ 14b728c30

UDS_VM_W_Common_ContentOpenMessage * __thiscall
UDS_VM_W_Common_ContentOpenMessage::UDS_VM_W_Common_ContentOpenMessage
          (UDS_VM_W_Common_ContentOpenMessage *this,FVTableHelper *param_1)

{
  UDS_VM_CommonMessage::UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this,param_1);
  this->ContentOpenIconID = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_ContentOpenMessage__6B_;
  ::FString::FString(&this->ContentOpenName,"");
  ::FString::FString(&this->ContentOpenString,"");
  return this;
}

// UDS_VM_W_Common_ContentOpenMessage @ 14b728ca0

UDS_VM_W_Common_ContentOpenMessage * __thiscall
UDS_VM_W_Common_ContentOpenMessage::UDS_VM_W_Common_ContentOpenMessage
          (UDS_VM_W_Common_ContentOpenMessage *this,FObjectInitializer *param_1)

{
  UDS_VM_CommonMessage::UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this,param_1);
  this->ContentOpenIconID = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_ContentOpenMessage__6B_;
  ::FString::FString(&this->ContentOpenName,"");
  ::FString::FString(&this->ContentOpenString,"");
  return this;
}

// ~UDS_VM_W_Common_ContentOpenMessage @ 14b729830

void __thiscall
UDS_VM_W_Common_ContentOpenMessage::~UDS_VM_W_Common_ContentOpenMessage
          (UDS_VM_W_Common_ContentOpenMessage *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_ContentOpenMessage__6B_;
  pFVar1 = (this->ContentOpenString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ContentOpenName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_CommonMessage::~UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b72b1b0

IClassDescriptor * __thiscall
UDS_VM_W_Common_ContentOpenMessage::GetFieldNotificationDescriptor
          (UDS_VM_W_Common_ContentOpenMessage *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Common_ContentOpenMessage::FFieldNotificationClassDescriptor::GetDescriptor'
             ::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b72bca0

UClass * __cdecl UDS_VM_W_Common_ContentOpenMessage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_ContentOpenMessage.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_ContentOpenMessage",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_ContentOpenMessage.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_ContentOpenMessage,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_ContentOpenMessage>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_ContentOpenMessage>,local_res8,
               UDS_VM_CommonMessage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_ContentOpenMessage.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Common_ContentOpenMessage @ 14b72bf40

void __cdecl
UDS_VM_W_Common_ContentOpenMessage::StaticRegisterNativesUDS_VM_W_Common_ContentOpenMessage(void)

{
  return;
}

// CheckNextMessage @ 14bf9dda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Common_ContentOpenMessage::CheckNextMessage(UDS_VM_W_Common_ContentOpenMessage *this)

{
  char cVar1;
  bool bVar2;
  UDS_UIMessageManager *this_00;
  UDS_LogManager *pUVar3;
  longlong *plVar4;
  undefined1 auStackY_248 [32];
  FName FStack_218;
  int iStack_210;
  undefined1 auStack_208 [168];
  undefined4 uStack_160;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  cVar1 = (**(code **)(this->_padding_ + 0x338))();
  if ((cVar1 != '\0') && (bVar2 = FDS_Text::IsEmpty((FDS_Text *)&this->_padding_), bVar2)) {
    this_00 = UDS_UIMessageManager::GetInst();
    if (this_00 == (UDS_UIMessageManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_CommonMessage::CheckNextMessage",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0x26,L"msgMng is nullptr.");
      auStack_208._48_8_ = TStack_138._padding_;
    }
    else {
      FDS_UIMessageInfo::FDS_UIMessageInfo
                ((FDS_UIMessageInfo *)auStack_208,
                 *(EDS_MessageType *)((longlong)&this->_padding_ + 1));
      bVar2 = UDS_UIMessageManager::DequeueMsg(this_00,(FDS_UIMessageInfo *)auStack_208);
      if (bVar2) {
        FDS_Text::operator=((FDS_Text *)&this->_padding_,(FDS_Text *)auStack_208);
        iStack_210 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::MsgText.BitNumber;
        FStack_218 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::MsgText.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_218);
        *(undefined1 *)&this->_padding_ = 3;
        iStack_210 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::MessageVisibility.
                     BitNumber;
        FStack_218 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::MessageVisibility.
                     FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_218);
        (**(code **)(this->_padding_ + 0x350))(this,auStack_208 + 0x60);
        plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x340))(this,&FStack_218);
        this->_padding_ = *plVar4;
        *(undefined1 *)((longlong)&this->_padding_ + 4) = 2;
        *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
        iStack_210 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::PlayOpenAniEvent.
                     BitNumber;
        FStack_218 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::PlayOpenAniEvent.
                     FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_218);
      }
      else {
        UDS_UIMessageManager::EndMsgQueueing
                  (this_00,*(EDS_MessageType *)((longlong)&this->_padding_ + 1),0,true);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_158);
      if ((void *)auStack_158._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_158._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_158);
      uStack_160 = 0;
      if ((void *)auStack_208._160_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_208._160_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (auStack_208 + 0x60);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)auStack_208._64_8_,auStack_208._72_4_);
      if ((FDS_TextFormatArg *)auStack_208._64_8_ != (FDS_TextFormatArg *)0x0) {
        FMemory::Free((void *)auStack_208._64_8_);
      }
    }
    if ((FScriptContainerElement *)auStack_208._48_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_208._48_8_);
    }
  }
  return;
}

// IsPlayableNextMessage @ 14bfb3010

bool __thiscall
UDS_VM_W_Common_ContentOpenMessage::IsPlayableNextMessage(UDS_VM_W_Common_ContentOpenMessage *this)

{
  return *(char *)((longlong)&this->_padding_ + 2) == '\0';
}

// OnCloseInit @ 14bfbbf40

void __thiscall
UDS_VM_W_Common_ContentOpenMessage::OnCloseInit(UDS_VM_W_Common_ContentOpenMessage *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnSetViewModel @ 14bfca940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDS_VM_W_Common_ContentOpenMessage::OnSetViewModel
          (UDS_VM_W_Common_ContentOpenMessage *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FTimerManager *this_00;
  undefined1 auStackY_1c8 [32];
  ESlateVisibility local_198 [8];
  TSharedPtr<FDS_ViewModelContext_CommonMessage,1> local_190;
  code *local_178;
  undefined8 uStack_170;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  undefined1 local_148 [272];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_168.Object = param_1->Object;
  local_168.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_CommonMessage::OnSetViewModel((UDS_VM_CommonMessage *)this,&local_168);
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CommonMessage>(&local_190,&local_158);
  if (local_190.Object == (FDS_ViewModelContext_CommonMessage *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
                 "UDS_VM_W_Common_ContentOpenMessage::OnSetViewModel",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_30,0x13,L"context.IsValid() == false");
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  else {
    if (local_190.Object == (FDS_ViewModelContext_CommonMessage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(EDS_MessageType *)((longlong)&this->_padding_ + 1) = (local_190.Object)->MsgType;
    local_198[0] = Hidden;
    UDS_VM_CommonMessage::SetMessageVisibility((UDS_VM_CommonMessage *)this,local_198);
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_170 = (ulonglong)uStack_170._4_4_ << 0x20;
    local_178 = _vcall__816__flat______;
    FTimerManager::SetTimerForNextTick<UDS_VM_W_Common_ContentOpenMessage>
              (this_00,(UDS_VM_W_Common_ContentOpenMessage *)local_148,(pmf_2614efd9 *)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetContentOpenIconID @ 14bfd71f0

void __thiscall
UDS_VM_W_Common_ContentOpenMessage::SetContentOpenIconID
          (UDS_VM_W_Common_ContentOpenMessage *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->ContentOpenIconID = *param_1;
  local_10 = FFieldNotificationClassDescriptor::ContentOpenIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ContentOpenIconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetContentOpenName @ 14bfd7230

void __thiscall
UDS_VM_W_Common_ContentOpenMessage::SetContentOpenName
          (UDS_VM_W_Common_ContentOpenMessage *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString *pFVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,param_1);
  ::FString::FString(&local_38,"<Toast_Default>[{1}]</>");
  pFVar3 = DS_Util::GetFormatString<FString>(&local_28,&local_38,pFVar2);
  pFVar2 = &this->ContentOpenName;
  if (pFVar2 != pFVar3) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ContentOpenName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->ContentOpenName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_38.Data.ArrayNum = FFieldNotificationClassDescriptor::ContentOpenName.BitNumber;
  local_38.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::ContentOpenName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  return;
}

// SetContentOpenString @ 14bfd7310

void __thiscall
UDS_VM_W_Common_ContentOpenMessage::SetContentOpenString
          (UDS_VM_W_Common_ContentOpenMessage *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString *pFVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,param_1);
  ::FString::FString(&local_38,"<Toast_Default>{1}</>");
  pFVar3 = DS_Util::GetFormatString<FString>(&local_28,&local_38,pFVar2);
  pFVar2 = &this->ContentOpenString;
  if (pFVar2 != pFVar3) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ContentOpenString).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->ContentOpenString).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_38.Data.ArrayNum = FFieldNotificationClassDescriptor::ContentOpenString.BitNumber;
  local_38.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::ContentOpenString.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  return;
}

// SetMsgArgs @ 14bfdbea0

void __thiscall
UDS_VM_W_Common_ContentOpenMessage::SetMsgArgs
          (UDS_VM_W_Common_ContentOpenMessage *this,
          TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  long64 *plVar3;
  FDS_ContentsBaseTableRow *pFVar4;
  FString *pFVar5;
  FString *pFVar6;
  undefined1 *puVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar7 = *(undefined1 **)&param_1->field_0x40;
    if (*(undefined1 **)&param_1->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &param_1->field_0x38;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & 2) * 4);
    if (iVar2 != -1) {
      while (*(int *)(*(longlong *)param_1 + (longlong)iVar2 * 0x18) != 2) {
        iVar2 = *(int *)(*(longlong *)param_1 + 0x10 + (longlong)iVar2 * 0x18);
        if (iVar2 == -1) {
          return;
        }
      }
      plVar3 = TMapBase<enum_EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>_>
               ::FindChecked(param_1,ContentID);
      pFVar4 = FDS_ContentsBaseTableRow::GetRef(*plVar3,true);
      this->ContentOpenIconID = pFVar4->ID_OpenIcon;
      local_48.Data.ArrayNum = FFieldNotificationClassDescriptor::ContentOpenIconID.BitNumber;
      local_48.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)FFieldNotificationClassDescriptor::ContentOpenIconID.FieldName
      ;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
      pFVar5 = (FString *)(**(code **)((pFVar4->ID_Name)._padding_ + 8))(&pFVar4->ID_Name);
      pFVar5 = ::FString::FString(&local_28,pFVar5);
      ::FString::FString(&local_48,"<Toast_Default>[{1}]</>");
      pFVar6 = DS_Util::GetFormatString<FString>(&local_38,&local_48,pFVar5);
      pFVar5 = &this->ContentOpenName;
      if (pFVar5 != pFVar6) {
        pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar5->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->ContentOpenName).Data.ArrayNum = (pFVar6->Data).ArrayNum;
        (this->ContentOpenName).Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_48.Data.ArrayNum = FFieldNotificationClassDescriptor::ContentOpenName.BitNumber;
      local_48.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)FFieldNotificationClassDescriptor::ContentOpenName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
      pFVar5 = (FString *)
               (**(code **)((pFVar4->ID_OpenString)._padding_ + 8))(&pFVar4->ID_OpenString);
      pFVar5 = ::FString::FString(&local_28,pFVar5);
      ::FString::FString(&local_48,"<Toast_Default>{1}</>");
      pFVar6 = DS_Util::GetFormatString<FString>(&local_38,&local_48,pFVar5);
      pFVar5 = &this->ContentOpenString;
      if (pFVar5 != pFVar6) {
        pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar5->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->ContentOpenString).Data.ArrayNum = (pFVar6->Data).ArrayNum;
        (this->ContentOpenString).Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_48.Data.ArrayNum = FFieldNotificationClassDescriptor::ContentOpenString.BitNumber;
      local_48.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)FFieldNotificationClassDescriptor::ContentOpenString.FieldName
      ;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
  }
  return;
}

// UnbindModel @ 14bfdfe90

void __thiscall
UDS_VM_W_Common_ContentOpenMessage::UnbindModel(UDS_VM_W_Common_ContentOpenMessage *this)

{
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  UDS_VM_CommonMessage::ClearMsgString((UDS_VM_CommonMessage *)this);
  return;
}

