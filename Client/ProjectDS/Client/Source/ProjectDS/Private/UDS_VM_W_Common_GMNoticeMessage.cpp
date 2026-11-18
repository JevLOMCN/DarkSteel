// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b72ece0

UClass * __cdecl UDS_VM_W_Common_GMNoticeMessage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_GMNoticeMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_GMNoticeMessage",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_GMNoticeMessage.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_GMNoticeMessage,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_GMNoticeMessage>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_GMNoticeMessage>,local_res8,
               UDS_VM_CommonMessage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_GMNoticeMessage.InnerSingleton;
}

// UDS_VM_W_Common_GMNoticeMessage @ 14b733e10

UDS_VM_W_Common_GMNoticeMessage * __thiscall
UDS_VM_W_Common_GMNoticeMessage::UDS_VM_W_Common_GMNoticeMessage
          (UDS_VM_W_Common_GMNoticeMessage *this,FVTableHelper *param_1)

{
  UDS_VM_CommonMessage::UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_W_Common_GMNoticeMessage__6B_;
  return this;
}

// UDS_VM_W_Common_GMNoticeMessage @ 14b733e50

UDS_VM_W_Common_GMNoticeMessage * __thiscall
UDS_VM_W_Common_GMNoticeMessage::UDS_VM_W_Common_GMNoticeMessage
          (UDS_VM_W_Common_GMNoticeMessage *this,FObjectInitializer *param_1)

{
  UDS_VM_CommonMessage::UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_W_Common_GMNoticeMessage__6B_;
  return this;
}

// ~UDS_VM_W_Common_GMNoticeMessage @ 14b735e10

void __thiscall
UDS_VM_W_Common_GMNoticeMessage::~UDS_VM_W_Common_GMNoticeMessage
          (UDS_VM_W_Common_GMNoticeMessage *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_W_Common_GMNoticeMessage__6B_;
  UDS_VM_CommonMessage::~UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this);
  return;
}

// GetPrivateStaticClass @ 14b739b40

UClass * __cdecl UDS_VM_W_Common_GMNoticeMessage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_GMNoticeMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_GMNoticeMessage",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_GMNoticeMessage.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_GMNoticeMessage,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_GMNoticeMessage>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_GMNoticeMessage>,local_res8,
               UDS_VM_CommonMessage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_GMNoticeMessage.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Common_GMNoticeMessage @ 14b73aea0

void __cdecl
UDS_VM_W_Common_GMNoticeMessage::StaticRegisterNativesUDS_VM_W_Common_GMNoticeMessage(void)

{
  return;
}

// CheckNextMessage @ 14bf9ddb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Common_GMNoticeMessage::CheckNextMessage(UDS_VM_W_Common_GMNoticeMessage *this)

{
  char cVar1;
  bool bVar2;
  UDS_UIMessageManager *this_00;
  UDS_LogManager *pUVar3;
  undefined8 *puVar4;
  undefined1 auStackY_248 [32];
  FName FStack_218;
  int iStack_210;
  undefined1 auStack_208 [168];
  undefined4 uStack_160;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  cVar1 = (**(code **)(*(longlong *)this + 0x338))();
  if ((cVar1 != '\0') && (bVar2 = FDS_Text::IsEmpty((FDS_Text *)&this->field_0xa0), bVar2)) {
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
      FDS_UIMessageInfo::FDS_UIMessageInfo((FDS_UIMessageInfo *)auStack_208,this->field_0x181);
      bVar2 = UDS_UIMessageManager::DequeueMsg(this_00,(FDS_UIMessageInfo *)auStack_208);
      if (bVar2) {
        FDS_Text::operator=((FDS_Text *)&this->field_0xa0,(FDS_Text *)auStack_208);
        iStack_210 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::MsgText.BitNumber;
        FStack_218 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::MsgText.FieldName;
        (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&FStack_218);
        this->field_0x180 = 3;
        iStack_210 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::MessageVisibility.
                     BitNumber;
        FStack_218 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::MessageVisibility.
                     FieldName;
        (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&FStack_218);
        (**(code **)(*(longlong *)this + 0x350))(this,auStack_208 + 0x60);
        puVar4 = (undefined8 *)(**(code **)(*(longlong *)this + 0x340))(this,&FStack_218);
        *(undefined8 *)&this->field_0xf0 = *puVar4;
        this->field_0xfc = 2;
        this->field_0x182 = 1;
        iStack_210 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::PlayOpenAniEvent.
                     BitNumber;
        FStack_218 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::PlayOpenAniEvent.
                     FieldName;
        (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&FStack_218);
      }
      else {
        UDS_UIMessageManager::EndMsgQueueing(this_00,this->field_0x181,0,true);
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

// OnCloseInit @ 14bfbbf50

void __thiscall UDS_VM_W_Common_GMNoticeMessage::OnCloseInit(UDS_VM_W_Common_GMNoticeMessage *this)

{
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (this->field_0x8c != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((undefined8 *)&this->field_0x70 != &uStack_18) {
      *(undefined8 *)&this->field_0x70 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->field_0x78,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    this->field_0x8c = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x2f8))(this);
    return;
  }
  return;
}

// OnSetViewModel @ 14bfcab20

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
UDS_VM_W_Common_GMNoticeMessage::OnSetViewModel
          (UDS_VM_W_Common_GMNoticeMessage *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

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
                 "UDS_VM_W_Common_GMNoticeMessage::OnSetViewModel",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_30,0x11,L"context.IsValid() == false");
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
    this->field_0x181 = (local_190.Object)->MsgType;
    local_198[0] = Hidden;
    UDS_VM_CommonMessage::SetMessageVisibility((UDS_VM_CommonMessage *)this,local_198);
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_170 = (ulonglong)uStack_170._4_4_ << 0x20;
    local_178 = _vcall__816__flat______;
    FTimerManager::SetTimerForNextTick<UDS_VM_W_Common_GMNoticeMessage>
              (this_00,(UDS_VM_W_Common_GMNoticeMessage *)local_148,(pmf_463cb936 *)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bfdfec0

void __thiscall UDS_VM_W_Common_GMNoticeMessage::UnbindModel(UDS_VM_W_Common_GMNoticeMessage *this)

{
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  this->field_0x181 = 0;
  UDS_VM_CommonMessage::ClearMsgString((UDS_VM_CommonMessage *)this);
  return;
}

