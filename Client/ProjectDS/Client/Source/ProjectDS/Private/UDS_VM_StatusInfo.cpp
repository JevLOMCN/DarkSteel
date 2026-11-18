// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetDamageEffectAnimationFinishEvent_WrapperImpl @ 14b6df5a0

void __cdecl
UDS_VM_StatusInfo::SetDamageEffectAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::Visibility_DamageEffect.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::Visibility_DamageEffect.FieldName;
  if (*(char *)((longlong)param_1 + 0x128) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x128) = 1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// StaticClass @ 14b6df5f0

UClass * __cdecl UDS_VM_StatusInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_StatusInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_StatusInfo",
               &Z_Registration_Info_UClass_UDS_VM_StatusInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_StatusInfo,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_StatusInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_StatusInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_StatusInfo.InnerSingleton;
}

// UDS_VM_StatusInfo @ 14b6e6490

UDS_VM_StatusInfo * __thiscall
UDS_VM_StatusInfo::UDS_VM_StatusInfo(UDS_VM_StatusInfo *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StatusInfo__6B_;
  (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharStatusData).WeakPtr,(FObjectPtr)&local_res8);
  this->StatusID = None;
  this->FormattedValueFormat = Integer;
  this->StatusIconID = 0;
  (this->StatusName).StringTableType = None;
  (this->StatusName).StringTableID = 0;
  (this->StatusName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StatusName).StringEnumTableNameID.Number = 0;
  (this->StatusName).DateTime.Ticks = 0;
  (this->StatusName).TimeSpan.Ticks = 0;
  (this->StatusName).TimeExpressionType = None;
  (this->StatusName).IsExpression = false;
  (this->StatusName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusName).UniqueString.Data.ArrayNum = 0;
  (this->StatusName).UniqueString.Data.ArrayMax = 0;
  (this->StatusName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusName).FormatArgs.ArrayNum = 0;
  (this->StatusName).FormatArgs.ArrayMax = 0;
  this->CurrentValue = 0.0;
  this->MaxValue = 0.0;
  ::FString::FString(&this->FormattedValue,"");
  this->StatusRatio = 0.0;
  this->DamageStatusRatio = 0.0;
  this->Visibility_DamageEffect = Collapsed;
  this->bIsUse_VM_Progress = false;
  this->bIsUseDamageProgress = false;
  (this->VM_Progress).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->VM_DamageProgress).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->DamageEffectAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->DamageEffectAnimationEvent).AnimationName.Number = 0;
  (this->DamageEffectAnimationEvent).AnimationPlayTime = 0.0;
  (this->DamageEffectAnimationEvent).AnimationEventType = None;
  (this->DamageEffectAnimationEvent).AnimationStateType = None;
  (this->DamageEffectAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->DamageEffectAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->DamageEffectAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->DamageEffectAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->DamageEffectAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->DamageEffectAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->DamageEffectAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->DamageEffectAnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->DamageEffectAnimationFinishEvent).AnimationName.Number = 0;
  (this->DamageEffectAnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->DamageEffectAnimationFinishEvent).AnimationEventType = None;
  (this->DamageEffectAnimationFinishEvent).AnimationStateType = None;
  (this->DamageEffectAnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->DamageEffectAnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->DamageEffectAnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->DamageEffectAnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->DamageEffectAnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->DamageEffectAnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->DamageEffectAnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  return this;
}

// UDS_VM_StatusInfo @ 14b6e6620

UDS_VM_StatusInfo * __thiscall
UDS_VM_StatusInfo::UDS_VM_StatusInfo(UDS_VM_StatusInfo *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StatusInfo__6B_;
  (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharStatusData).WeakPtr,(FObjectPtr)&local_res8);
  this->StatusID = None;
  this->FormattedValueFormat = Integer;
  this->StatusIconID = 0;
  (this->StatusName).StringTableType = None;
  (this->StatusName).StringTableID = 0;
  (this->StatusName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StatusName).StringEnumTableNameID.Number = 0;
  (this->StatusName).DateTime.Ticks = 0;
  (this->StatusName).TimeSpan.Ticks = 0;
  (this->StatusName).TimeExpressionType = None;
  (this->StatusName).IsExpression = false;
  (this->StatusName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusName).UniqueString.Data.ArrayNum = 0;
  (this->StatusName).UniqueString.Data.ArrayMax = 0;
  (this->StatusName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusName).FormatArgs.ArrayNum = 0;
  (this->StatusName).FormatArgs.ArrayMax = 0;
  this->CurrentValue = 0.0;
  this->MaxValue = 0.0;
  ::FString::FString(&this->FormattedValue,"");
  this->StatusRatio = 0.0;
  this->DamageStatusRatio = 0.0;
  this->Visibility_DamageEffect = Collapsed;
  this->bIsUse_VM_Progress = false;
  this->bIsUseDamageProgress = false;
  (this->VM_Progress).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->VM_DamageProgress).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->DamageEffectAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->DamageEffectAnimationEvent).AnimationName.Number = 0;
  (this->DamageEffectAnimationEvent).AnimationPlayTime = 0.0;
  (this->DamageEffectAnimationEvent).AnimationEventType = None;
  (this->DamageEffectAnimationEvent).AnimationStateType = None;
  (this->DamageEffectAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->DamageEffectAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->DamageEffectAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->DamageEffectAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->DamageEffectAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->DamageEffectAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->DamageEffectAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->DamageEffectAnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->DamageEffectAnimationFinishEvent).AnimationName.Number = 0;
  (this->DamageEffectAnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->DamageEffectAnimationFinishEvent).AnimationEventType = None;
  (this->DamageEffectAnimationFinishEvent).AnimationStateType = None;
  (this->DamageEffectAnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->DamageEffectAnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->DamageEffectAnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->DamageEffectAnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->DamageEffectAnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->DamageEffectAnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->DamageEffectAnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  return this;
}

// ~UDS_VM_StatusInfo @ 14b6e75a0

void __thiscall UDS_VM_StatusInfo::~UDS_VM_StatusInfo(UDS_VM_StatusInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StatusInfo__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->DamageEffectAnimationFinishEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->DamageEffectAnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->DamageEffectAnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->DamageEffectAnimationFinishEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->DamageEffectAnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->DamageEffectAnimationFinishEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->DamageEffectAnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->DamageEffectAnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->DamageEffectAnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->DamageEffectAnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->DamageEffectAnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->DamageEffectAnimationEvent).Delegate_AnimationFinish);
  pFVar2 = (this->FormattedValue).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->StatusName).FormatArgs.AllocatorInstance.Data,
             (this->StatusName).FormatArgs.ArrayNum);
  pFVar2 = (this->StatusName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->StatusName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e9b40

IClassDescriptor * __thiscall
UDS_VM_StatusInfo::GetFieldNotificationDescriptor(UDS_VM_StatusInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_StatusInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ea840

UClass * __cdecl UDS_VM_StatusInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_StatusInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_StatusInfo",
               &Z_Registration_Info_UClass_UDS_VM_StatusInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_StatusInfo,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_StatusInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_StatusInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_StatusInfo.InnerSingleton;
}

// GetTickableTickType @ 14b6eab40

ETickableTickType __thiscall UDS_VM_StatusInfo::GetTickableTickType(UDS_VM_StatusInfo *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_StatusInfo @ 14b6eace0

void __cdecl UDS_VM_StatusInfo::StaticRegisterNativesUDS_VM_StatusInfo(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_StatusInfo_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b6ebce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_StatusInfo::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    local_res10 = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_StatusInfo__6B_;
    this[1]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this + 1),(FObjectPtr)&local_res10);
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    ::FString::FString((FString *)&this[1].ViewModelContext,"");
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined2 *)&this[1].VMName.Number = 1;
    *(undefined1 *)((longlong)&this[1].VMName.Number + 2) = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined4 *)&this[2]._padding_ = 1;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined4 *)&this[2]._padding_ = 1;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2].ViewModelContext.Object = 0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    this[2].VMName.Number = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execOnChanged_Status @ 14b6ec300

void __cdecl UDS_VM_StatusInfo::execOnChanged_Status(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [4];
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChanged_Status((UDS_VM_StatusInfo *)param_1,local_res20[0],local_res10[0]);
  return;
}

// IsUpdate @ 14be27d50

bool __thiscall UDS_VM_StatusInfo::IsUpdate(UDS_VM_StatusInfo *this)

{
  if ((this->bIsUse_VM_Progress == true) &&
     ((this->VM_Progress).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0)) {
    return true;
  }
  if ((this->bIsUseDamageProgress == true) &&
     ((this->VM_Progress).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0)) {
    return (this->VM_DamageProgress).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0;
  }
  return false;
}

// OnChanged_Status @ 14be2bb00

void __thiscall
UDS_VM_StatusInfo::OnChanged_Status(UDS_VM_StatusInfo *this,float param_1,float param_2)

{
  UDS_VM_Progress *pUVar1;
  FName FVar2;
  bool bVar3;
  FName *pFVar4;
  FName local_res8;
  FName local_38;
  int local_30;
  
  FVar2 = FFieldNotificationClassDescriptor::Visibility_DamageEffect.FieldName;
  if (param_1 < this->CurrentValue) {
    if (this->Visibility_DamageEffect != SelfHitTestInvisible) {
      local_30 = FFieldNotificationClassDescriptor::Visibility_DamageEffect.BitNumber;
      this->Visibility_DamageEffect = SelfHitTestInvisible;
      local_38 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    pFVar4 = ::FName::FName(&local_res8,L"Ani_Repeat");
    (this->DamageEffectAnimationEvent).AnimationName = *pFVar4;
    (this->DamageEffectAnimationEvent).AnimationEventType = PlayForward;
    (this->DamageEffectAnimationEvent).AnimationPlayTime = 0.0;
    (this->DamageEffectAnimationEvent).NumberOfLoops = 1;
    local_30 = FFieldNotificationClassDescriptor::DamageEffectAnimationEvent.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::DamageEffectAnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  if ((this->bIsUse_VM_Progress == true) &&
     (pUVar1 = (this->VM_Progress).field0_0x0.DebugPtr, pUVar1 != (UDS_VM_Progress *)0x0)) {
    UDS_VM_Progress::SetMaxValue(pUVar1,param_2);
    UDS_VM_Progress::SetTargetValue((this->VM_Progress).field0_0x0.DebugPtr,param_1);
  }
  else if ((this->bIsUseDamageProgress == true) &&
          ((pUVar1 = (this->VM_Progress).field0_0x0.DebugPtr, pUVar1 != (UDS_VM_Progress *)0x0 &&
           ((this->VM_DamageProgress).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0)))) {
    UDS_VM_Progress::SetMaxValue(pUVar1,param_2);
    UDS_VM_Progress::SetCurrentValue((this->VM_Progress).field0_0x0.DebugPtr,param_1);
    UDS_VM_Progress::SetTargetValue((this->VM_Progress).field0_0x0.DebugPtr,param_1);
    UDS_VM_Progress::SetMaxValue((this->VM_DamageProgress).field0_0x0.DebugPtr,param_2);
    UDS_VM_Progress::SetTargetValue((this->VM_DamageProgress).field0_0x0.DebugPtr,param_1);
    bVar3 = UDS_VM_Progress::IsValueDecrease((this->VM_DamageProgress).field0_0x0.DebugPtr);
    pUVar1 = (this->VM_DamageProgress).field0_0x0.DebugPtr;
    if (bVar3) {
      UDS_VM_Progress::OnChangedTargetValue(pUVar1);
    }
    else {
      UDS_VM_Progress::SetCurrentValue(pUVar1,param_1);
    }
    this->CurrentValue = param_1;
    this->MaxValue = param_2;
    this->StatusRatio = param_1 / param_2;
    local_30 = FFieldNotificationClassDescriptor::CurrentValue.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::CurrentValue.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    local_30 = FFieldNotificationClassDescriptor::MaxValue.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::MaxValue.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    local_30 = FFieldNotificationClassDescriptor::StatusRatio.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::StatusRatio.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  else {
    this->CurrentValue = param_1;
    this->MaxValue = param_2;
    local_30 = FFieldNotificationClassDescriptor::CurrentValue.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::CurrentValue.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    local_30 = FFieldNotificationClassDescriptor::MaxValue.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::MaxValue.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    if (0.0 < this->MaxValue) {
      this->StatusRatio = this->CurrentValue / this->MaxValue;
      local_30 = FFieldNotificationClassDescriptor::StatusRatio.BitNumber;
      local_38 = FFieldNotificationClassDescriptor::StatusRatio.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    UpdateFormattedValue(this);
  }
  return;
}

// OnCloseInit @ 14be2d400

void __thiscall UDS_VM_StatusInfo::OnCloseInit(UDS_VM_StatusInfo *this)

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

// OnDamageEffectAnimationFinished @ 14be2d520

void __thiscall
UDS_VM_StatusInfo::OnDamageEffectAnimationFinished
          (UDS_VM_StatusInfo *this,FDS_WidgetAnimationEventField *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility_DamageEffect.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_DamageEffect.FieldName;
  if (this->Visibility_DamageEffect != Collapsed) {
    this->Visibility_DamageEffect = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14be40d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_StatusInfo::OnSetViewModel
          (UDS_VM_StatusInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar5;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar6;
  UDS_VM_Progress *pUVar7;
  FDS_StatusTableRow *pFVar8;
  undefined1 auStackY_488 [32];
  TSharedPtr<FDS_ViewModelContext_StatusInfo,1> local_448;
  code *local_438;
  ulonglong uStack_430;
  FName local_428;
  int local_420;
  FName local_418;
  int local_410;
  FDS_Text local_408;
  TSharedPtr<FDS_ViewModelContext,1> local_3b8;
  undefined1 local_3a8 [8];
  undefined1 local_3a0 [264];
  void *local_298;
  ForAnyElementType local_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_488;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_3b8.Object = param_1->Object;
  local_3b8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_3b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_StatusInfo>(&local_448,&local_3b8);
  if (local_448.Object == (FDS_ViewModelContext_StatusInfo *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_298 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_3a0 + 8),
                 "UDS_VM_StatusInfo::OnSetViewModel",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,(wchar_t *)local_290.Data,0x19,L"context is Invalid.");
      if (local_298 != (void *)0x0) {
        FMemory::Free(local_298);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_448.SharedReferenceCount.ReferenceController);
  }
  else {
    if (local_448.Object == (FDS_ViewModelContext_StatusInfo *)0x0) {
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
    TVar5 = UDS_CharStatusData::GetData((ulong64)local_3a8);
                    /* WARNING: Load size is inaccurate */
    (this->CharStatusData).WeakPtr = *TVar5.WeakPtr;
    bVar3 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      (&this->CharStatusData,(void *)0x0);
    if (bVar3) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_VM_StatusInfo::OnSetViewModel",0x21,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_278.Ptr,0x20,L"CharStatusData is nullptr.");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_448.SharedReferenceCount.ReferenceController);
    }
    else {
      this->StatusID = (local_448.Object)->StatusID;
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&(this->CharStatusData).WeakPtr);
      pFVar6 = UDS_CharStatusData::GetStatusInfo(this_00,this->StatusID);
      if (pFVar6 == (FDS_StatusInfo *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_VM_StatusInfo::OnSetViewModel",0x21,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_158.Ptr,0x28,L"statusInfo is nullptr. (%d)");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      else {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar6->ChangeStatusDelegate,this);
        uStack_430 = uStack_430 & 0xffffffff00000000;
        local_438 = OnChanged_Status;
        TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_VM_StatusInfo>
                  ((TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>
                    *)&pFVar6->ChangeStatusDelegate,(UDS_VM_StatusInfo *)local_3a0,
                   (pmf_82da2cff *)this);
        bVar3 = (local_448.Object)->bIsUse_VM_Progress;
        this->bIsUse_VM_Progress = bVar3;
        if (bVar3 == true) {
          pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar7 != (UDS_VM_Progress *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          (this->VM_Progress).field0_0x0.DebugPtr = pUVar7;
        }
        bVar3 = (local_448.Object)->bIsUseDamageProgress;
        this->bIsUseDamageProgress = bVar3;
        if (bVar3 == true) {
          if ((this->VM_Progress).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
            pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar7 != (UDS_VM_Progress *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            (this->VM_Progress).field0_0x0.DebugPtr = pUVar7;
          }
          pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar7 != (UDS_VM_Progress *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          (this->VM_DamageProgress).field0_0x0.DebugPtr = pUVar7;
          UDS_VM_Progress::SetIncreaseType(pUVar7,Linear_Constant);
          UDS_VM_Progress::SetPlayTime
                    ((this->VM_DamageProgress).field0_0x0.DebugPtr,__real_3fc00000);
        }
        OnChanged_Status(this,(float)pFVar6->CurrentValue,pFVar6->MaxValue);
        pFVar8 = FDS_StatusTableRow::Get((longlong)(int)this->StatusID,true);
        if (pFVar8 != (FDS_StatusTableRow *)0x0) {
          this->StatusIconID = pFVar8->ID_StatusIcon;
          this->FormattedValueFormat = pFVar8->InfoViewValueFormat;
          local_420 = FFieldNotificationClassDescriptor::StatusIconID.BitNumber;
          local_428 = FFieldNotificationClassDescriptor::StatusIconID.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_428);
          local_408.StringTableType = None;
          local_408.StringTableID = 0;
          local_408.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_408.StringEnumTableNameID.Number = 0;
          local_408.DateTime.Ticks = 0;
          local_408.TimeSpan.Ticks = 0;
          local_408.TimeExpressionType = None;
          local_408.IsExpression = false;
          local_408.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_408.UniqueString.Data.ArrayNum = 0;
          local_408.UniqueString.Data.ArrayMax = 0;
          local_408.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_408.FormatArgs.ArrayNum = 0;
          local_408.FormatArgs.ArrayMax = 0;
          FDS_Text::SetTextFromStringID(&local_408,&pFVar8->ID_StatusName);
          FDS_Text::operator=(&this->StatusName,&local_408);
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)local_408.FormatArgs.AllocatorInstance.Data,
                     local_408.FormatArgs.ArrayNum);
          if ((FDS_TextFormatArg *)local_408.FormatArgs.AllocatorInstance.Data !=
              (FDS_TextFormatArg *)0x0) {
            FMemory::Free(local_408.FormatArgs.AllocatorInstance.Data);
          }
          if (local_408.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_408.UniqueString.Data.AllocatorInstance.Data);
          }
          local_410 = FFieldNotificationClassDescriptor::StatusName.BitNumber;
          local_418 = FFieldNotificationClassDescriptor::StatusName.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_418);
        }
        UpdateFormattedValue(this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_448.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14be445f0

void __thiscall UDS_VM_StatusInfo::OnUpdate(UDS_VM_StatusInfo *this,float param_1)

{
  UDS_VM_Progress *pUVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  float fVar5;
  undefined4 in_XMM1_Db;
  FName local_18;
  int local_10;
  
  cVar2 = (**(code **)(this->_padding_ + 0x318))(this,CONCAT44(in_XMM1_Db,param_1));
  if (cVar2 != '\0') {
    if (this->bIsUse_VM_Progress == true) {
      fVar5 = UDS_VM_Progress::GetCurrentValue((this->VM_Progress).field0_0x0.DebugPtr);
      pUVar1 = (this->VM_Progress).field0_0x0.DebugPtr;
      this->CurrentValue = fVar5;
      fVar5 = UDS_VM_Progress::GetMaxValue(pUVar1);
      pUVar1 = (this->VM_Progress).field0_0x0.DebugPtr;
      this->MaxValue = fVar5;
      fVar5 = UDS_VM_Progress::GetTargetPercent(pUVar1);
      this->StatusRatio = fVar5;
      plVar4 = &this->_padding_;
      local_10 = FFieldNotificationClassDescriptor::CurrentValue.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::CurrentValue.FieldName;
      (**(code **)(*plVar4 + 0x38))(plVar4,&local_18);
      local_10 = FFieldNotificationClassDescriptor::MaxValue.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::MaxValue.FieldName;
      (**(code **)(*plVar4 + 0x38))(plVar4,&local_18);
      local_10 = FFieldNotificationClassDescriptor::StatusRatio.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::StatusRatio.FieldName;
      (**(code **)(*plVar4 + 0x38))(plVar4,&local_18);
    }
    plVar4 = &this->_padding_;
    if (this->bIsUseDamageProgress == true) {
      bVar3 = UDS_VM_Progress::IsValueDecrease((this->VM_DamageProgress).field0_0x0.DebugPtr);
      pUVar1 = (this->VM_DamageProgress).field0_0x0.DebugPtr;
      if (bVar3) {
        fVar5 = UDS_VM_Progress::GetCurrentPercent(pUVar1);
        this->DamageStatusRatio = fVar5;
      }
      else {
        fVar5 = UDS_VM_Progress::GetTargetPercent(pUVar1);
        this->DamageStatusRatio = fVar5;
        local_18 = FFieldNotificationClassDescriptor::Visibility_DamageEffect.FieldName;
        if (this->Visibility_DamageEffect != Collapsed) {
          local_10 = FFieldNotificationClassDescriptor::Visibility_DamageEffect.BitNumber;
          this->Visibility_DamageEffect = Collapsed;
          (**(code **)(*plVar4 + 0x38))(plVar4,&local_18);
        }
      }
      local_10 = FFieldNotificationClassDescriptor::DamageStatusRatio.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::DamageStatusRatio.FieldName;
      (**(code **)(*plVar4 + 0x38))(plVar4,&local_18);
    }
    UpdateFormattedValue(this);
  }
  return;
}

// PlayDamageEffectAnimation @ 14be46050

void __thiscall UDS_VM_StatusInfo::PlayDamageEffectAnimation(UDS_VM_StatusInfo *this,int param_1)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_18;
  int local_10;
  
  FVar1 = FFieldNotificationClassDescriptor::Visibility_DamageEffect.FieldName;
  if (this->Visibility_DamageEffect != SelfHitTestInvisible) {
    local_10 = FFieldNotificationClassDescriptor::Visibility_DamageEffect.BitNumber;
    this->Visibility_DamageEffect = SelfHitTestInvisible;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  pFVar2 = ::FName::FName(&local_res8,L"Ani_Repeat");
  (this->DamageEffectAnimationEvent).AnimationName = *pFVar2;
  (this->DamageEffectAnimationEvent).AnimationEventType = PlayForward;
  (this->DamageEffectAnimationEvent).AnimationPlayTime = 0.0;
  (this->DamageEffectAnimationEvent).NumberOfLoops = param_1;
  local_10 = FFieldNotificationClassDescriptor::DamageEffectAnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DamageEffectAnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVisble_DamageEffect @ 14be52e10

void __thiscall
UDS_VM_StatusInfo::SetVisble_DamageEffect(UDS_VM_StatusInfo *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility_DamageEffect.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_DamageEffect.FieldName;
  if (this->Visibility_DamageEffect != param_1) {
    this->Visibility_DamageEffect = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14be55cc0

void __thiscall UDS_VM_StatusInfo::UnbindModel(UDS_VM_StatusInfo *this)

{
  bool bVar1;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  bVar1 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                    (&this->CharStatusData,(void *)0x0);
  if ((!bVar1) && (this->StatusID != None)) {
    this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&(this->CharStatusData).WeakPtr);
    pFVar2 = UDS_CharStatusData::GetStatusInfo(this_00,this->StatusID);
    if (pFVar2 != (FDS_StatusInfo *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar2->ChangeStatusDelegate
                 ,this);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this->StatusID = None;
  (this->CharStatusData).WeakPtr = local_res8;
  return;
}

// UpdateFormattedValue @ 14be57610

void __thiscall UDS_VM_StatusInfo::UpdateFormattedValue(UDS_VM_StatusInfo *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = DS_Util::GetInfoViewValueFormattedString
                     (&local_18,this->FormattedValueFormat,this->MaxValue);
  pFVar1 = &this->FormattedValue;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->FormattedValue).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->FormattedValue).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.ArrayNum = FFieldNotificationClassDescriptor::FormattedValue.BitNumber;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::FormattedValue.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

