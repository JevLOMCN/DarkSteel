// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetZoneID_WrapperImpl @ 14b756090

void __cdecl UDS_VM_W_ZoneMiddleInfo::SetZoneID_WrapperImpl(void *param_1,void *param_2)

{
  SetZoneID(param_1,*(int *)param_2);
  return;
}

// SetZoneName_WrapperImpl @ 14b7560a0

void __cdecl UDS_VM_W_ZoneMiddleInfo::SetZoneName_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  local_18.TextData.Reference = *(ITextData **)param_2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = *(uint *)((longlong)param_2 + 8);
  SetZoneName(param_1,&local_18);
  return;
}

// SetZoneNameColor_WrapperImpl @ 14b7560f0

void __cdecl UDS_VM_W_ZoneMiddleInfo::SetZoneNameColor_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetZoneNameColor(param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// SetAnimationFinishEvent_WrapperImpl @ 14b756120

void __cdecl
UDS_VM_W_ZoneMiddleInfo::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  FDS_WidgetAnimationEventField local_58;
  
  local_58.AnimationName = *(FName *)param_2;
  local_58.AnimationPlayTime = *(float *)((longlong)param_2 + 8);
  local_58.AnimationEventType = *(EDS_AnimationEventType *)((longlong)param_2 + 0xc);
  local_58.AnimationStateType = *(EDS_AnimationStateType *)((longlong)param_2 + 0xd);
  local_58.NumberOfLoops = *(int *)((longlong)param_2 + 0x10);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_58.Delegate_AnimationFinish,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)param_2 + 0x18))
  ;
  TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
            (&local_58.Delegate_ValidAnimation,
             (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)
             ((longlong)param_2 + 0x30));
  OnAnimationEvent(param_1,&local_58);
  return;
}

// SetVisibility_ZoneInfo_WrapperImpl @ 14b7561a0

void __cdecl
UDS_VM_W_ZoneMiddleInfo::SetVisibility_ZoneInfo_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibility_ZoneInfo(param_1,*(ESlateVisibility *)param_2);
  return;
}

// StaticClass @ 14b7561b0

UClass * __cdecl UDS_VM_W_ZoneMiddleInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ZoneMiddleInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ZoneMiddleInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_ZoneMiddleInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ZoneMiddleInfo,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_ZoneMiddleInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ZoneMiddleInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ZoneMiddleInfo.InnerSingleton;
}

// UDS_VM_W_ZoneMiddleInfo @ 14b75aad0

UDS_VM_W_ZoneMiddleInfo * __thiscall
UDS_VM_W_ZoneMiddleInfo::UDS_VM_W_ZoneMiddleInfo
          (UDS_VM_W_ZoneMiddleInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ZoneMiddleInfo__6B_;
  FText::FText(&this->ZoneName);
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_W_ZoneMiddleInfo @ 14b75abb0

UDS_VM_W_ZoneMiddleInfo * __thiscall
UDS_VM_W_ZoneMiddleInfo::UDS_VM_W_ZoneMiddleInfo
          (UDS_VM_W_ZoneMiddleInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ZoneMiddleInfo__6B_;
  FText::FText(&this->ZoneName);
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_W_ZoneMiddleInfo @ 14b75c050

void __thiscall UDS_VM_W_ZoneMiddleInfo::~UDS_VM_W_ZoneMiddleInfo(UDS_VM_W_ZoneMiddleInfo *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ZoneMiddleInfo__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_AnimationFinish)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  pIVar2 = (this->ZoneName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b75e000

IClassDescriptor * __thiscall
UDS_VM_W_ZoneMiddleInfo::GetFieldNotificationDescriptor(UDS_VM_W_ZoneMiddleInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_ZoneMiddleInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b75eaf0

UClass * __cdecl UDS_VM_W_ZoneMiddleInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ZoneMiddleInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ZoneMiddleInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_ZoneMiddleInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ZoneMiddleInfo,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_ZoneMiddleInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ZoneMiddleInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ZoneMiddleInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_ZoneMiddleInfo @ 14b75f030

void __cdecl UDS_VM_W_ZoneMiddleInfo::StaticRegisterNativesUDS_VM_W_ZoneMiddleInfo(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_ZoneMiddleInfo_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnAnimationEvent @ 14b760090

void __cdecl
UDS_VM_W_ZoneMiddleInfo::execOnAnimationEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_b8;
  float local_b0;
  undefined2 local_ac;
  int local_a8;
  undefined1 local_a0 [8];
  ForAnyElementType FStack_98;
  int local_90;
  undefined1 local_88 [8];
  ForAnyElementType FStack_80;
  int local_78;
  FDestructionSentinel local_70;
  FDS_WidgetAnimationEventField local_58;
  
  local_a8 = 1;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  local_b0 = 0.0;
  local_ac = 0;
  local_a0 = (undefined1  [8])0x0;
  FStack_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88 = (undefined1  [8])0x0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_58.AnimationPlayTime = local_b0;
  local_58.AnimationName = local_b8;
  local_58.AnimationEventType = (EDS_AnimationEventType)local_ac;
  local_58.AnimationStateType = local_ac._1_1_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58.NumberOfLoops = local_a8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_58.Delegate_AnimationFinish,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_a0);
  TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
            (&local_58.Delegate_ValidAnimation,
             (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)local_88);
  OnAnimationEvent((UDS_VM_W_ZoneMiddleInfo *)param_1,&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_70);
  if ((local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
             (FWriteAccessScope *)&local_70);
  if ((local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a0);
  return;
}

// InitViewModel @ 14c01f300

void __thiscall UDS_VM_W_ZoneMiddleInfo::InitViewModel(UDS_VM_W_ZoneMiddleInfo *this)

{
  FName local_18;
  int local_10;
  
  this->Visibility_ZoneInfo = Collapsed;
  local_10 = FFieldNotificationClassDescriptor::Visibility_ZoneInfo.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_ZoneInfo.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnAnimationEvent @ 14c024e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_ZoneMiddleInfo::OnAnimationEvent
          (UDS_VM_W_ZoneMiddleInfo *this,FDS_WidgetAnimationEventField *param_1)

{
  void *pvVar1;
  UDS_WindowManager *pUVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_1->AnimationStateType == Finished) {
    this->ZoneID = 0;
    FDS_WidgetAnimationEventField::operator=(&this->AnimationEvent,param_1);
    pUVar2 = UDS_WindowManager::GetInst();
    if (pUVar2 == (UDS_WindowManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_ZoneMiddleInfo::OnAnimationEvent",0x29,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x52,L"windowManager is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Delegate_ValidAnimation);
  pvVar1 = *(void **)&(param_1->Delegate_ValidAnimation).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Delegate_AnimationFinish);
  pvVar1 = *(void **)&(param_1->Delegate_AnimationFinish).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Delegate_AnimationFinish);
  return;
}

// OnSetViewModel @ 14c0369d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_ZoneMiddleInfo::OnSetViewModel
          (UDS_VM_W_ZoneMiddleInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_ZoneInfo,1> local_158;
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
  SafeCast<FDS_ViewModelContext_ZoneInfo>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_ZoneInfo *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_ZoneMiddleInfo::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x17,L"context is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_ZoneInfo *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SetZoneID(this,(local_158.Object)->ZoneId);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PlayAnimation @ 14c03d480

void __thiscall
UDS_VM_W_ZoneMiddleInfo::PlayAnimation(UDS_VM_W_ZoneMiddleInfo *this,FName *param_1,float param_2)

{
  FName local_18;
  int local_10;
  
  (this->AnimationEvent).AnimationName = *param_1;
  (this->AnimationEvent).AnimationPlayTime = param_2;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVisibility_ZoneInfo @ 14c045ff0

void __thiscall
UDS_VM_W_ZoneMiddleInfo::SetVisibility_ZoneInfo
          (UDS_VM_W_ZoneMiddleInfo *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  this->Visibility_ZoneInfo = param_1;
  local_10 = FFieldNotificationClassDescriptor::Visibility_ZoneInfo.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_ZoneInfo.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetZoneID @ 14c047580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_ZoneMiddleInfo::SetZoneID(UDS_VM_W_ZoneMiddleInfo *this,int param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FDS_StringWorldTableRow *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_1a8 [32];
  FName local_168;
  int local_160;
  FText local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this->ZoneID = param_1;
  pFVar3 = FDS_StringWorldTableRow::Get((longlong)param_1,true);
  if (pFVar3 != (FDS_StringWorldTableRow *)0x0) {
    this->Visibility_ZoneInfo = SelfHitTestInvisible;
    local_160 = FFieldNotificationClassDescriptor::Visibility_ZoneInfo.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::Visibility_ZoneInfo.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    pFVar4 = FText::FromString(&local_158,&pFVar3->Text);
    pIVar1 = (this->ZoneName).TextData.Reference;
    pIVar2 = (pFVar4->TextData).Reference;
    if (pIVar1 != pIVar2) {
      (this->ZoneName).TextData.Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_168);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    (this->ZoneName).Flags = pFVar4->Flags;
    local_160 = FFieldNotificationClassDescriptor::ZoneName.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::ZoneName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    pIVar1 = (pFVar4->TextData).Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    pFVar5 = ::FName::FName(&local_168,"Ani_Start");
    (this->AnimationEvent).AnimationName = *pFVar5;
    (this->AnimationEvent).AnimationEventType = PlayForward;
    (this->AnimationEvent).AnimationPlayTime = 0.0;
    local_158.Flags = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_158.TextData.Reference =
         (ITextData *)FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_ZoneMiddleInfo::SetZoneID",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Display,local_148.Ptr,0x33,
                 L"LevelTrigger Notify. AreaNameStringID: %d, AreaName: %s");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// SetZoneName @ 14c047860

void __thiscall UDS_VM_W_ZoneMiddleInfo::SetZoneName(UDS_VM_W_ZoneMiddleInfo *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  FName local_18;
  int local_10;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->ZoneName).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->ZoneName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->ZoneName).Flags = param_1->Flags;
  local_10 = FFieldNotificationClassDescriptor::ZoneName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ZoneName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// SetZoneNameColor @ 14c047900

void __thiscall
UDS_VM_W_ZoneMiddleInfo::SetZoneNameColor(UDS_VM_W_ZoneMiddleInfo *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  fVar1 = (param_1->field0_0x0)._s_0.G;
  fVar2 = (param_1->field0_0x0)._s_0.B;
  fVar3 = (param_1->field0_0x0)._s_0.A;
  (this->ZoneNameColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
  (this->ZoneNameColor).field0_0x0._s_0.G = fVar1;
  (this->ZoneNameColor).field0_0x0._s_0.B = fVar2;
  (this->ZoneNameColor).field0_0x0._s_0.A = fVar3;
  local_10 = FFieldNotificationClassDescriptor::ZoneNameColor.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ZoneNameColor.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

