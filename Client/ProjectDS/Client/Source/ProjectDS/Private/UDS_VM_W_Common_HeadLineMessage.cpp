// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b72f0b0

UClass * __cdecl UDS_VM_W_Common_HeadLineMessage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_HeadLineMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_HeadLineMessage",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_HeadLineMessage.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_HeadLineMessage,0x218,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_HeadLineMessage>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_HeadLineMessage>,local_res8,
               UDS_VM_CommonMessage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_HeadLineMessage.InnerSingleton;
}

// UDS_VM_W_Common_HeadLineMessage @ 14b733e90

UDS_VM_W_Common_HeadLineMessage * __thiscall
UDS_VM_W_Common_HeadLineMessage::UDS_VM_W_Common_HeadLineMessage
          (UDS_VM_W_Common_HeadLineMessage *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_VM_CommonMessage::UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_HeadLineMessage__6B_;
  this->DestTransX = 0.0;
  (this->MsgTrans).Translation.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MsgTrans).Scale.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->MsgTrans).Angle = 0.0;
  (this->MsgTrans).Shear.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->PlayCloseAniEvent).AnimationName.ComparisonIndex = 0;
  (this->PlayCloseAniEvent).AnimationName.Number = 0;
  (this->PlayCloseAniEvent).AnimationPlayTime = 0.0;
  (this->PlayCloseAniEvent).AnimationEventType = None;
  (this->PlayCloseAniEvent).AnimationStateType = None;
  (this->PlayCloseAniEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->PlayCloseAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->PlayCloseAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->PlayCloseAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->PlayCloseAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->PlayCloseAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->PlayCloseAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  ::FName::FName(&this->AniName,"OpenAni");
  return this;
}

// UDS_VM_W_Common_HeadLineMessage @ 14b733f60

UDS_VM_W_Common_HeadLineMessage * __thiscall
UDS_VM_W_Common_HeadLineMessage::UDS_VM_W_Common_HeadLineMessage
          (UDS_VM_W_Common_HeadLineMessage *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UDS_VM_CommonMessage::UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_HeadLineMessage__6B_;
  this->DestTransX = 0.0;
  (this->MsgTrans).Translation.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MsgTrans).Scale.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->MsgTrans).Angle = 0.0;
  (this->MsgTrans).Shear.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->PlayCloseAniEvent).AnimationName.ComparisonIndex = 0;
  (this->PlayCloseAniEvent).AnimationName.Number = 0;
  (this->PlayCloseAniEvent).AnimationPlayTime = 0.0;
  (this->PlayCloseAniEvent).AnimationEventType = None;
  (this->PlayCloseAniEvent).AnimationStateType = None;
  (this->PlayCloseAniEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->PlayCloseAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->PlayCloseAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->PlayCloseAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->PlayCloseAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->PlayCloseAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->PlayCloseAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  ::FName::FName(&this->AniName,"OpenAni");
  return this;
}

// ~UDS_VM_W_Common_HeadLineMessage @ 14b735e40

void __thiscall
UDS_VM_W_Common_HeadLineMessage::~UDS_VM_W_Common_HeadLineMessage
          (UDS_VM_W_Common_HeadLineMessage *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_HeadLineMessage__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->PlayCloseAniEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->PlayCloseAniEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->PlayCloseAniEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->PlayCloseAniEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->PlayCloseAniEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->PlayCloseAniEvent).Delegate_AnimationFinish);
  UDS_VM_CommonMessage::~UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7390c0

IClassDescriptor * __thiscall
UDS_VM_W_Common_HeadLineMessage::GetFieldNotificationDescriptor
          (UDS_VM_W_Common_HeadLineMessage *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Common_HeadLineMessage::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b739c00

UClass * __cdecl UDS_VM_W_Common_HeadLineMessage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_HeadLineMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_HeadLineMessage",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_HeadLineMessage.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_HeadLineMessage,0x218,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_HeadLineMessage>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_HeadLineMessage>,local_res8,
               UDS_VM_CommonMessage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_HeadLineMessage.InnerSingleton;
}

// GetTickableTickType @ 14b73ae00

ETickableTickType __thiscall
UDS_VM_W_Common_HeadLineMessage::GetTickableTickType(UDS_VM_W_Common_HeadLineMessage *this)

{
  return Conditional;
}

// IsUpdate @ 14b73ae40

bool __thiscall UDS_VM_W_Common_HeadLineMessage::IsUpdate(UDS_VM_W_Common_HeadLineMessage *this)

{
  return true;
}

// PlayAniName @ 14b73ae80

FName __thiscall UDS_VM_W_Common_HeadLineMessage::PlayAniName(UDS_VM_W_Common_HeadLineMessage *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->AniName;
  return in_RDX;
}

// StaticRegisterNativesUDS_VM_W_Common_HeadLineMessage @ 14b73aeb0

void __cdecl
UDS_VM_W_Common_HeadLineMessage::StaticRegisterNativesUDS_VM_W_Common_HeadLineMessage(void)

{
  return;
}

// CheckNextMessage @ 14bf9ddc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Common_HeadLineMessage::CheckNextMessage(UDS_VM_W_Common_HeadLineMessage *this)

{
  bool bVar1;
  UDS_UIMessageManager *this_00;
  UDS_LogManager *pUVar2;
  FName *pFVar3;
  undefined1 auStackY_248 [32];
  FName local_218;
  int local_210;
  FDS_UIMessageInfo local_208;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar1 = UDS_VM_CommonMessage::IsEmptyMsgString((UDS_VM_CommonMessage *)this);
  if (bVar1) {
    this_00 = UDS_UIMessageManager::GetInst();
    if (this_00 == (UDS_UIMessageManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = (longlong)this_00;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_Common_HeadLineMessage::CheckNextMessage",0x31,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x59,L"msgMng is nullptr.");
        if ((UDS_UIMessageManager *)local_138._padding_ != (UDS_UIMessageManager *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      FDS_UIMessageInfo::FDS_UIMessageInfo
                (&local_208,*(EDS_MessageType *)((longlong)&this->_padding_ + 1));
      bVar1 = UDS_UIMessageManager::DequeueMsg(this_00,&local_208);
      if (bVar1) {
        UDS_VM_CommonMessage::SetMsgText((UDS_VM_CommonMessage *)this,&local_208.MsgText);
        (this->MsgTrans).Translation.field0_0x0._s_0.X = 0.0;
        local_210 = FFieldNotificationClassDescriptor::MsgTrans.BitNumber;
        local_218 = FFieldNotificationClassDescriptor::MsgTrans.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_218);
        this->DestTransX = 0.0;
      }
      else {
        pFVar3 = ::FName::FName(&local_218,"CloseAni");
        this->AniName = *pFVar3;
        UDS_VM_CommonMessage::PlayAni((UDS_VM_CommonMessage *)this);
      }
      FDS_UIMessageInfo::~FDS_UIMessageInfo(&local_208);
    }
  }
  return;
}

// OnCloseInit @ 14bfbbf60

void __thiscall UDS_VM_W_Common_HeadLineMessage::OnCloseInit(UDS_VM_W_Common_HeadLineMessage *this)

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

// OnEndAni @ 14bfbc530

void __thiscall
UDS_VM_W_Common_HeadLineMessage::OnEndAni
          (UDS_VM_W_Common_HeadLineMessage *this,FDS_WidgetAnimationEventField *param_1)

{
  FName *pFVar1;
  UDS_UIMessageManager *this_00;
  FName local_res10 [3];
  
  if (param_1->AnimationStateType == Finished) {
    pFVar1 = ::FName::FName(local_res10,"OpenAni");
    if (param_1->AnimationName == *pFVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014bfbc56f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x330))(this);
      return;
    }
    pFVar1 = ::FName::FName(local_res10,"CloseAni");
    if (param_1->AnimationName == *pFVar1) {
      this_00 = UDS_UIMessageManager::GetInst();
      if (this_00 != (UDS_UIMessageManager *)0x0) {
        UDS_UIMessageManager::EndMsgQueueing
                  (this_00,*(EDS_MessageType *)((longlong)&this->_padding_ + 1),0,true);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bfcad00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Common_HeadLineMessage::OnSetViewModel
          (UDS_VM_W_Common_HeadLineMessage *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  TVector2<double> TVar2;
  UDS_LogManager *pUVar3;
  FName *pFVar4;
  bool bVar5;
  undefined1 auStackY_1c8 [32];
  TSharedPtr<FDS_ViewModelContext_CommonMessage,1> local_198;
  FName local_188;
  int local_180;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  FName local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_178.Object = param_1->Object;
  local_178.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_CommonMessage::OnSetViewModel((UDS_VM_CommonMessage *)this,&local_178);
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
  SafeCast<FDS_ViewModelContext_CommonMessage>(&local_198,&local_168);
  bVar5 = local_198.Object == (FDS_ViewModelContext_CommonMessage *)0x0;
  if (local_198.Object == (FDS_ViewModelContext_CommonMessage *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_Common_HeadLineMessage::OnSetViewModel",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x12,L"context.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
      (this->MsgTrans).Translation.field0_0x0._s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      (this->MsgTrans).Scale.field0_0x0._s_0.X = 1.0;
      (this->MsgTrans).Scale.field0_0x0._s_0.Y = 1.0;
      TVar2 = UE::Math::TVector2<double>::ZeroVector;
      (this->MsgTrans).Angle = 0.0;
      (this->MsgTrans).Shear.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
      local_180 = FFieldNotificationClassDescriptor::MsgTrans.BitNumber;
      local_188 = FFieldNotificationClassDescriptor::MsgTrans.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
      UDS_VM_CommonMessage::ClearMsgString((UDS_VM_CommonMessage *)this);
      pFVar4 = ::FName::FName(local_158,"OpenAni");
      this->AniName = *pFVar4;
      UDS_VM_CommonMessage::PlayAni((UDS_VM_CommonMessage *)this);
    }
    if (bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(EDS_MessageType *)((longlong)&this->_padding_ + 1) = (local_198.Object)->MsgType;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bfd0ef0

void __thiscall
UDS_VM_W_Common_HeadLineMessage::OnUpdate(UDS_VM_W_Common_HeadLineMessage *this,float param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  FName local_28;
  int local_20;
  
  bVar1 = UDS_VM_CommonMessage::IsEmptyMsgString((UDS_VM_CommonMessage *)this);
  if ((!bVar1) && (this->DestTransX != 0.0)) {
    dVar3 = (this->MsgTrans).Translation.field0_0x0._s_0.X - (double)(param_1 * __real_43fa0000);
    dVar2 = (double)this->DestTransX;
    (this->MsgTrans).Translation.field0_0x0._s_0.X = dVar3;
    if (dVar3 < dVar2) {
      (this->MsgTrans).Translation.field0_0x0._s_0.X = dVar2;
      UDS_VM_CommonMessage::ClearMsgString((UDS_VM_CommonMessage *)this);
      (**(code **)(this->_padding_ + 0x330))(this);
    }
    local_20 = FFieldNotificationClassDescriptor::MsgTrans.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::MsgTrans.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// PlayCloseAni @ 14bfd3100

void __thiscall UDS_VM_W_Common_HeadLineMessage::PlayCloseAni(UDS_VM_W_Common_HeadLineMessage *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,"CloseAni");
  this->AniName = *pFVar1;
  UDS_VM_CommonMessage::PlayAni((UDS_VM_CommonMessage *)this);
  return;
}

// PlayOpenAni @ 14bfd31a0

void __thiscall UDS_VM_W_Common_HeadLineMessage::PlayOpenAni(UDS_VM_W_Common_HeadLineMessage *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,"OpenAni");
  this->AniName = *pFVar1;
  UDS_VM_CommonMessage::PlayAni((UDS_VM_CommonMessage *)this);
  return;
}

// UnbindModel @ 14bfdfef0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_W_Common_HeadLineMessage::UnbindModel(UDS_VM_W_Common_HeadLineMessage *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

