// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetMsgText_WrapperImpl @ 14b61c200

void __cdecl UDS_VM_CommonMessage::SetMsgText_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa0),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::MsgText.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MsgText.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetEndAniEvent_WrapperImpl @ 14b61c210

void __cdecl UDS_VM_CommonMessage::SetEndAniEvent_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x182) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014bdce18a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x348))();
  return;
}

// SetMessageVisibility_WrapperImpl @ 14b61c220

void __cdecl UDS_VM_CommonMessage::SetMessageVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x180) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::MessageVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MessageVisibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b61c230

UClass * __cdecl UDS_VM_CommonMessage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CommonMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CommonMessage",
               &Z_Registration_Info_UClass_UDS_VM_CommonMessage.InnerSingleton,
               StaticRegisterNativesUDS_VM_CommonMessage,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CommonMessage>,
               InternalVTableHelperCtorCaller<UDS_VM_CommonMessage>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CommonMessage.InnerSingleton;
}

// UDS_VM_CommonMessage @ 14b620ad0

UDS_VM_CommonMessage * __thiscall
UDS_VM_CommonMessage::UDS_VM_CommonMessage(UDS_VM_CommonMessage *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->MessageVisibility = Hidden;
  this->MsgType = None;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CommonMessage__6B_;
  (this->MsgText).StringTableID = 0;
  (this->MsgText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MsgText).StringEnumTableNameID.Number = 0;
  (this->MsgText).DateTime.Ticks = 0;
  (this->MsgText).TimeSpan.Ticks = 0;
  (this->MsgText).TimeExpressionType = None;
  (this->MsgText).IsExpression = false;
  (this->MsgText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MsgText).UniqueString.Data.ArrayNum = 0;
  (this->MsgText).UniqueString.Data.ArrayMax = 0;
  (this->MsgText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MsgText).FormatArgs.ArrayNum = 0;
  (this->MsgText).FormatArgs.ArrayMax = 0;
  (this->PlayOpenAniEvent).AnimationName.ComparisonIndex = 0;
  (this->PlayOpenAniEvent).AnimationName.Number = 0;
  (this->PlayOpenAniEvent).AnimationPlayTime = 0.0;
  (this->PlayOpenAniEvent).AnimationEventType = None;
  (this->PlayOpenAniEvent).AnimationStateType = None;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->PlayOpenAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->PlayOpenAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->EndAniEvent).AnimationName.ComparisonIndex = 0;
  (this->EndAniEvent).AnimationName.Number = 0;
  (this->EndAniEvent).AnimationPlayTime = 0.0;
  (this->EndAniEvent).AnimationEventType = None;
  (this->EndAniEvent).AnimationStateType = None;
  *(undefined8 *)&(this->EndAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->EndAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->EndAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->EndAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->EndAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->EndAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->bIsPlayingAni = false;
  (this->MsgText).StringTableType = None;
  (this->PlayOpenAniEvent).NumberOfLoops = 1;
  (this->EndAniEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_CommonMessage @ 14b620c00

UDS_VM_CommonMessage * __thiscall
UDS_VM_CommonMessage::UDS_VM_CommonMessage(UDS_VM_CommonMessage *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->MessageVisibility = Hidden;
  this->MsgType = None;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CommonMessage__6B_;
  (this->MsgText).StringTableID = 0;
  (this->MsgText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MsgText).StringEnumTableNameID.Number = 0;
  (this->MsgText).DateTime.Ticks = 0;
  (this->MsgText).TimeSpan.Ticks = 0;
  (this->MsgText).TimeExpressionType = None;
  (this->MsgText).IsExpression = false;
  (this->MsgText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MsgText).UniqueString.Data.ArrayNum = 0;
  (this->MsgText).UniqueString.Data.ArrayMax = 0;
  (this->MsgText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MsgText).FormatArgs.ArrayNum = 0;
  (this->MsgText).FormatArgs.ArrayMax = 0;
  (this->PlayOpenAniEvent).AnimationName.ComparisonIndex = 0;
  (this->PlayOpenAniEvent).AnimationName.Number = 0;
  (this->PlayOpenAniEvent).AnimationPlayTime = 0.0;
  (this->PlayOpenAniEvent).AnimationEventType = None;
  (this->PlayOpenAniEvent).AnimationStateType = None;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->PlayOpenAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->PlayOpenAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->EndAniEvent).AnimationName.ComparisonIndex = 0;
  (this->EndAniEvent).AnimationName.Number = 0;
  (this->EndAniEvent).AnimationPlayTime = 0.0;
  (this->EndAniEvent).AnimationEventType = None;
  (this->EndAniEvent).AnimationStateType = None;
  *(undefined8 *)&(this->EndAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->EndAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->EndAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->EndAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->EndAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->EndAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->bIsPlayingAni = false;
  (this->MsgText).StringTableType = None;
  (this->PlayOpenAniEvent).NumberOfLoops = 1;
  (this->EndAniEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_CommonMessage @ 14b621ad0

void __thiscall UDS_VM_CommonMessage::~UDS_VM_CommonMessage(UDS_VM_CommonMessage *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CommonMessage__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->EndAniEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->EndAniEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->EndAniEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->EndAniEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->EndAniEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->EndAniEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->PlayOpenAniEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->PlayOpenAniEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->PlayOpenAniEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->PlayOpenAniEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->PlayOpenAniEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->PlayOpenAniEvent).Delegate_AnimationFinish);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MsgText).FormatArgs.AllocatorInstance.Data,
             (this->MsgText).FormatArgs.ArrayNum);
  pFVar2 = (this->MsgText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MsgText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b623b20

IClassDescriptor * __thiscall
UDS_VM_CommonMessage::GetFieldNotificationDescriptor(UDS_VM_CommonMessage *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6244f0

UClass * __cdecl UDS_VM_CommonMessage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CommonMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CommonMessage",
               &Z_Registration_Info_UClass_UDS_VM_CommonMessage.InnerSingleton,
               StaticRegisterNativesUDS_VM_CommonMessage,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CommonMessage>,
               InternalVTableHelperCtorCaller<UDS_VM_CommonMessage>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CommonMessage.InnerSingleton;
}

// IsPlayableNextMessage @ 14b624a50

bool __thiscall UDS_VM_CommonMessage::IsPlayableNextMessage(UDS_VM_CommonMessage *this)

{
  return true;
}

// PlayAniName @ 14b624a80

FName __thiscall UDS_VM_CommonMessage::PlayAniName(UDS_VM_CommonMessage *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"OpenAni");
  return in_RDX;
}

// SetMsgArgs @ 14b624ab0

void __thiscall
UDS_VM_CommonMessage::SetMsgArgs
          (UDS_VM_CommonMessage *this,
          TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
          *param_1)

{
  return;
}

// StaticRegisterNativesUDS_VM_CommonMessage @ 14b624b80

void __cdecl UDS_VM_CommonMessage::StaticRegisterNativesUDS_VM_CommonMessage(void)

{
  return;
}

// CheckNextMessage @ 14bdb32e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CommonMessage::CheckNextMessage(UDS_VM_CommonMessage *this)

{
  char cVar1;
  bool bVar2;
  UDS_UIMessageManager *this_00;
  UDS_LogManager *pUVar3;
  FName *pFVar4;
  undefined1 auStackY_248 [32];
  FName local_218;
  int local_210;
  undefined1 local_208 [168];
  undefined4 local_160;
  undefined1 local_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  cVar1 = (**(code **)(this->_padding_ + 0x338))();
  if ((cVar1 != '\0') && (bVar2 = FDS_Text::IsEmpty(&this->MsgText), bVar2)) {
    this_00 = UDS_UIMessageManager::GetInst();
    if (this_00 == (UDS_UIMessageManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CommonMessage::CheckNextMessage",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x26,L"msgMng is nullptr.");
      local_208._48_8_ = local_138._padding_;
    }
    else {
      FDS_UIMessageInfo::FDS_UIMessageInfo((FDS_UIMessageInfo *)local_208,this->MsgType);
      bVar2 = UDS_UIMessageManager::DequeueMsg(this_00,(FDS_UIMessageInfo *)local_208);
      if (bVar2) {
        FDS_Text::operator=(&this->MsgText,(FDS_Text *)local_208);
        local_210 = FFieldNotificationClassDescriptor::MsgText.BitNumber;
        local_218 = FFieldNotificationClassDescriptor::MsgText.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_218);
        this->MessageVisibility = HitTestInvisible;
        local_210 = FFieldNotificationClassDescriptor::MessageVisibility.BitNumber;
        local_218 = FFieldNotificationClassDescriptor::MessageVisibility.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_218);
        (**(code **)(this->_padding_ + 0x350))(this,local_208 + 0x60);
        pFVar4 = (FName *)(**(code **)(this->_padding_ + 0x340))(this,&local_218);
        (this->PlayOpenAniEvent).AnimationName = *pFVar4;
        (this->PlayOpenAniEvent).AnimationEventType = PlayForward;
        this->bIsPlayingAni = true;
        local_210 = FFieldNotificationClassDescriptor::PlayOpenAniEvent.BitNumber;
        local_218 = FFieldNotificationClassDescriptor::PlayOpenAniEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_218);
      }
      else {
        UDS_UIMessageManager::EndMsgQueueing(this_00,this->MsgType,0,true);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_158);
      if ((void *)local_158._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_158._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_158);
      local_160 = 0;
      if ((void *)local_208._160_8_ != (void *)0x0) {
        FMemory::Free((void *)local_208._160_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_208 + 0x60);
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_208._64_8_,local_208._72_4_);
      if ((FDS_TextFormatArg *)local_208._64_8_ != (FDS_TextFormatArg *)0x0) {
        FMemory::Free((void *)local_208._64_8_);
      }
    }
    if ((FScriptContainerElement *)local_208._48_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_208._48_8_);
    }
  }
  return;
}

// ClearMsgString @ 14bdb3570

void __thiscall UDS_VM_CommonMessage::ClearMsgString(UDS_VM_CommonMessage *this)

{
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->MsgText);
  local_10 = FFieldNotificationClassDescriptor::MsgText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MsgText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// IsEmptyMsgString @ 14bdc8720

bool __thiscall UDS_VM_CommonMessage::IsEmptyMsgString(UDS_VM_CommonMessage *this)

{
  bool bVar1;
  
  bVar1 = FDS_Text::IsEmpty(&this->MsgText);
  return bVar1;
}

// OnEndAni @ 14bdce0f0

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
UDS_VM_CommonMessage::OnEndAni(UDS_VM_CommonMessage *this,FDS_WidgetAnimationEventField *param_1)

{
  FTimerManager *this_00;
  FName local_18;
  undefined8 uStack_10;
  
  if (param_1->AnimationStateType == Finished) {
    FDS_Text::Reset(&this->MsgText);
    uStack_10._0_4_ = FFieldNotificationClassDescriptor::MsgText.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::MsgText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = (FName)_vcall__816__flat______;
    FTimerManager::SetTimerForNextTick<UDS_VM_CommonMessage>
              (this_00,(UDS_VM_CommonMessage *)&stack0x00000010,(pmf_79ee36ed *)this);
  }
  return;
}

// OnEndAniEvent @ 14bdce180

void __thiscall
UDS_VM_CommonMessage::OnEndAniEvent
          (UDS_VM_CommonMessage *this,FDS_WidgetAnimationEventField *param_1)

{
  this->bIsPlayingAni = false;
                    /* WARNING: Could not recover jumptable at 0x00014bdce18a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x348))();
  return;
}

// OnSetViewModel @ 14bdd71f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CommonMessage::OnSetViewModel
          (UDS_VM_CommonMessage *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_CommonMessage,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CommonMessage>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_CommonMessage *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CommonMessage::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x13,L"context.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PlayAni @ 14bde1f30

void __thiscall UDS_VM_CommonMessage::PlayAni(UDS_VM_CommonMessage *this)

{
  FName *pFVar1;
  undefined1 local_res8 [32];
  FName local_18;
  int local_10;
  
  pFVar1 = (FName *)(**(code **)(this->_padding_ + 0x340))(this,local_res8);
  (this->PlayOpenAniEvent).AnimationName = *pFVar1;
  (this->PlayOpenAniEvent).AnimationEventType = PlayForward;
  this->bIsPlayingAni = true;
  local_10 = FFieldNotificationClassDescriptor::PlayOpenAniEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayOpenAniEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMessageVisibility @ 14bde7520

void __thiscall
UDS_VM_CommonMessage::SetMessageVisibility(UDS_VM_CommonMessage *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->MessageVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::MessageVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MessageVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMsgText @ 14bde7eb0

void __thiscall UDS_VM_CommonMessage::SetMsgText(UDS_VM_CommonMessage *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->MsgText,param_1);
  local_10 = FFieldNotificationClassDescriptor::MsgText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MsgText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

