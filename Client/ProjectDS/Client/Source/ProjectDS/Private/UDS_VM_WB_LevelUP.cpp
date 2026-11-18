// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// SetAnimationFinishedEvent_WrapperImpl @ 14b6f9fd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_WB_LevelUP::SetAnimationFinishedEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,PlayerLevelUp,auStackX_20,afStackX_18);
  }
  return;
}

// StaticClass @ 14b6f9fe0

UClass * __cdecl UDS_VM_WB_LevelUP::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_LevelUP.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_LevelUP",
               &Z_Registration_Info_UClass_UDS_VM_WB_LevelUP.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_LevelUP,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WB_LevelUP>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_LevelUP>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_LevelUP.InnerSingleton;
}

// UDS_VM_WB_LevelUP @ 14b700280

UDS_VM_WB_LevelUP * __thiscall
UDS_VM_WB_LevelUP::UDS_VM_WB_LevelUP(UDS_VM_WB_LevelUP *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_LevelUP__6B_;
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
  (this->AnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishedEvent).AnimationName.Number = 0;
  (this->AnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishedEvent).AnimationEventType = None;
  (this->AnimationFinishedEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->FixedText_AscenderLevelUp).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_AscenderLevelUp).StringEnumTableNameID.Number = 0;
  (this->FixedText_AscenderLevelUp).DateTime.Ticks = 0;
  (this->FixedText_AscenderLevelUp).TimeSpan.Ticks = 0;
  (this->FixedText_AscenderLevelUp).TimeExpressionType = None;
  (this->FixedText_AscenderLevelUp).IsExpression = false;
  (this->FixedText_AscenderLevelUp).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscenderLevelUp).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_AscenderLevelUp).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_AscenderLevelUp).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscenderLevelUp).FormatArgs.ArrayNum = 0;
  (this->FixedText_AscenderLevelUp).FormatArgs.ArrayMax = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishedEvent).NumberOfLoops = 1;
  (this->FixedText_AscenderLevelUp).StringTableType = StringUi;
  (this->FixedText_AscenderLevelUp).StringTableID = 0x2b0e;
  return this;
}

// UDS_VM_WB_LevelUP @ 14b7003a0

UDS_VM_WB_LevelUP * __thiscall
UDS_VM_WB_LevelUP::UDS_VM_WB_LevelUP(UDS_VM_WB_LevelUP *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_LevelUP__6B_;
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
  (this->AnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishedEvent).AnimationName.Number = 0;
  (this->AnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishedEvent).AnimationEventType = None;
  (this->AnimationFinishedEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->FixedText_AscenderLevelUp).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_AscenderLevelUp).StringEnumTableNameID.Number = 0;
  (this->FixedText_AscenderLevelUp).DateTime.Ticks = 0;
  (this->FixedText_AscenderLevelUp).TimeSpan.Ticks = 0;
  (this->FixedText_AscenderLevelUp).TimeExpressionType = None;
  (this->FixedText_AscenderLevelUp).IsExpression = false;
  (this->FixedText_AscenderLevelUp).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscenderLevelUp).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_AscenderLevelUp).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_AscenderLevelUp).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscenderLevelUp).FormatArgs.ArrayNum = 0;
  (this->FixedText_AscenderLevelUp).FormatArgs.ArrayMax = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishedEvent).NumberOfLoops = 1;
  (this->FixedText_AscenderLevelUp).StringTableType = StringUi;
  (this->FixedText_AscenderLevelUp).StringTableID = 0x2b0e;
  return this;
}

// ~UDS_VM_WB_LevelUP @ 14b702c40

void __thiscall UDS_VM_WB_LevelUP::~UDS_VM_WB_LevelUP(UDS_VM_WB_LevelUP *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_LevelUP__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_AscenderLevelUp).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_AscenderLevelUp).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_AscenderLevelUp).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_AscenderLevelUp).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishedEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishedEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->AnimationFinishedEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b705dd0

IClassDescriptor * __thiscall
UDS_VM_WB_LevelUP::GetFieldNotificationDescriptor(UDS_VM_WB_LevelUP *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WB_LevelUP::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7067d0

UClass * __cdecl UDS_VM_WB_LevelUP::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_LevelUP.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_LevelUP",
               &Z_Registration_Info_UClass_UDS_VM_WB_LevelUP.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_LevelUP,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WB_LevelUP>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_LevelUP>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_LevelUP.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WB_LevelUP @ 14b707600

void __cdecl UDS_VM_WB_LevelUP::StaticRegisterNativesUDS_VM_WB_LevelUP(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_WB_LevelUP_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnAnimationStart @ 14b7088c0

void __cdecl UDS_VM_WB_LevelUP::execOnAnimationStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnAnimationStart((UDS_VM_WB_LevelUP *)param_1);
  return;
}

// OnAnimationFinished @ 14bfb44c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WB_LevelUP::OnAnimationFinished
          (UDS_VM_WB_LevelUP *this,FDS_WidgetAnimationEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PlayerLevelUp,local_res20,local_res18);
  }
  return;
}

// OnAnimationStart @ 14bfb4700

void __thiscall UDS_VM_WB_LevelUP::OnAnimationStart(UDS_VM_WB_LevelUP *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Open_Anim");
  (this->AnimationEvent).AnimationName = *pFVar1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bfc3000

void __thiscall
UDS_VM_WB_LevelUP::OnSetViewModel
          (UDS_VM_WB_LevelUP *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_18;
  int local_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = ::FName::FName(&local_res8,"Open_Anim");
  (this->AnimationEvent).AnimationName = *pFVar2;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

