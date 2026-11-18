// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// SetFinishAniEvent_WrapperImpl @ 14b73e070

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_Hud_PhasingCompleteAlarm::SetFinishAniEvent_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  UDS_WindowManager *this;
  UDS_WindowManager *pUStackX_8;
  uint auStackX_10 [2];
  FWeakObjectPtr aFStackX_18 [2];
  FName FStack_18;
  int iStack_10;
  
  lVar1 = *(longlong *)param_2;
  if (lVar1 == *(longlong *)((longlong)param_1 + 0x1d8)) {
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x1e0);
  }
  else {
    if (lVar1 != *(longlong *)((longlong)param_1 + 0x1e8)) {
      if ((lVar1 == *(longlong *)((longlong)param_1 + 0x1e0)) ||
         (lVar1 == *(longlong *)((longlong)param_1 + 0x1f0))) {
        pUStackX_8 = UDS_WindowManager::GetInst();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUStackX_8 != (UDS_WindowManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUStackX_8);
        }
        aFStackX_18[0].ObjectIndex = 0;
        aFStackX_18[0].ObjectSerialNumber = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUStackX_8 != (UDS_WindowManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUStackX_8);
        }
        FWeakObjectPtr::operator=(aFStackX_18,(FObjectPtr)&pUStackX_8);
        bVar2 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)aFStackX_18,
                           (void *)0x0);
        if (!bVar2) {
          this = (UDS_WindowManager *)FWeakObjectPtr::Get(aFStackX_18);
          pUStackX_8 = (UDS_WindowManager *)((ulonglong)pUStackX_8 & 0xffffffff00000000);
          auStackX_10[0] = 0;
          UDS_WindowManager::CloseWindow(this,HUDPhasingComplete,auStackX_10,(float *)&pUStackX_8);
        }
      }
      return;
    }
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x1f0);
  }
  *(undefined8 *)((longlong)param_1 + 0x148) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x154) = 2;
  iStack_10 = FFieldNotificationClassDescriptor::StartAniEvent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::StartAniEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b73e080

UClass * __cdecl UDS_VM_W_Hud_PhasingCompleteAlarm::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Hud_PhasingCompleteAlarm.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Hud_PhasingCompleteAlarm",
               &Z_Registration_Info_UClass_UDS_VM_W_Hud_PhasingCompleteAlarm.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Hud_PhasingCompleteAlarm,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Hud_PhasingCompleteAlarm>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Hud_PhasingCompleteAlarm>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Hud_PhasingCompleteAlarm.InnerSingleton;
}

// UDS_VM_W_Hud_PhasingCompleteAlarm @ 14b740dd0

UDS_VM_W_Hud_PhasingCompleteAlarm * __thiscall
UDS_VM_W_Hud_PhasingCompleteAlarm::UDS_VM_W_Hud_PhasingCompleteAlarm
          (UDS_VM_W_Hud_PhasingCompleteAlarm *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->StartAniEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->FinishAniEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&___7UDS_VM_W_Hud_PhasingCompleteAlarm__6B_;
  this->WidgetSwitcherIndex = 0;
  this->IconID = 0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->ContentText).StringTableType = None;
  (this->ContentText).StringTableID = 0;
  (this->ContentText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ContentText).StringEnumTableNameID.Number = 0;
  (this->ContentText).DateTime.Ticks = 0;
  (this->ContentText).TimeSpan.Ticks = 0;
  (this->ContentText).TimeExpressionType = None;
  (this->ContentText).IsExpression = false;
  (this->ContentText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentText).UniqueString.Data.ArrayNum = 0;
  (this->ContentText).UniqueString.Data.ArrayMax = 0;
  (this->ContentText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentText).FormatArgs.ArrayNum = 0;
  (this->ContentText).FormatArgs.ArrayMax = 0;
  (this->StartAniEvent).AnimationName.ComparisonIndex = 0;
  (this->StartAniEvent).AnimationName.Number = 0;
  (this->StartAniEvent).AnimationPlayTime = 0.0;
  (this->StartAniEvent).AnimationEventType = None;
  (this->StartAniEvent).AnimationStateType = None;
  *(undefined8 *)&(this->StartAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->StartAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->StartAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->StartAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->StartAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->StartAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->FinishAniEvent).AnimationName.ComparisonIndex = 0;
  (this->FinishAniEvent).AnimationName.Number = 0;
  (this->FinishAniEvent).AnimationPlayTime = 0.0;
  (this->FinishAniEvent).AnimationEventType = None;
  (this->FinishAniEvent).AnimationStateType = None;
  *(undefined8 *)&(this->FinishAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->FinishAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->FinishAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->FinishAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->FinishAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->FinishAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  ::FName::FName(&this->AniName_Success_Open,"Open_Ani");
  ::FName::FName(&this->AniName_Success_Close,"Close_Ani");
  ::FName::FName(&this->AniName_Fail_Open,"Fail_Open_Ani");
  ::FName::FName(&this->AniName_Fail_Close,"Fail_Close_Ani");
  return this;
}

// UDS_VM_W_Hud_PhasingCompleteAlarm @ 14b740f90

UDS_VM_W_Hud_PhasingCompleteAlarm * __thiscall
UDS_VM_W_Hud_PhasingCompleteAlarm::UDS_VM_W_Hud_PhasingCompleteAlarm
          (UDS_VM_W_Hud_PhasingCompleteAlarm *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->StartAniEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->FinishAniEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&___7UDS_VM_W_Hud_PhasingCompleteAlarm__6B_;
  this->WidgetSwitcherIndex = 0;
  this->IconID = 0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->ContentText).StringTableType = None;
  (this->ContentText).StringTableID = 0;
  (this->ContentText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ContentText).StringEnumTableNameID.Number = 0;
  (this->ContentText).DateTime.Ticks = 0;
  (this->ContentText).TimeSpan.Ticks = 0;
  (this->ContentText).TimeExpressionType = None;
  (this->ContentText).IsExpression = false;
  (this->ContentText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentText).UniqueString.Data.ArrayNum = 0;
  (this->ContentText).UniqueString.Data.ArrayMax = 0;
  (this->ContentText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentText).FormatArgs.ArrayNum = 0;
  (this->ContentText).FormatArgs.ArrayMax = 0;
  (this->StartAniEvent).AnimationName.ComparisonIndex = 0;
  (this->StartAniEvent).AnimationName.Number = 0;
  (this->StartAniEvent).AnimationPlayTime = 0.0;
  (this->StartAniEvent).AnimationEventType = None;
  (this->StartAniEvent).AnimationStateType = None;
  *(undefined8 *)&(this->StartAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->StartAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->StartAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->StartAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->StartAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->StartAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->FinishAniEvent).AnimationName.ComparisonIndex = 0;
  (this->FinishAniEvent).AnimationName.Number = 0;
  (this->FinishAniEvent).AnimationPlayTime = 0.0;
  (this->FinishAniEvent).AnimationEventType = None;
  (this->FinishAniEvent).AnimationStateType = None;
  *(undefined8 *)&(this->FinishAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->FinishAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->FinishAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->FinishAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->FinishAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->FinishAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  ::FName::FName(&this->AniName_Success_Open,"Open_Ani");
  ::FName::FName(&this->AniName_Success_Close,"Close_Ani");
  ::FName::FName(&this->AniName_Fail_Open,"Fail_Open_Ani");
  ::FName::FName(&this->AniName_Fail_Close,"Fail_Close_Ani");
  return this;
}

// ~UDS_VM_W_Hud_PhasingCompleteAlarm @ 14b742980

void __thiscall
UDS_VM_W_Hud_PhasingCompleteAlarm::~UDS_VM_W_Hud_PhasingCompleteAlarm
          (UDS_VM_W_Hud_PhasingCompleteAlarm *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Hud_PhasingCompleteAlarm__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->FinishAniEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->FinishAniEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FinishAniEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->FinishAniEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->FinishAniEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FinishAniEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->StartAniEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->StartAniEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->StartAniEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->StartAniEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->StartAniEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->StartAniEvent).Delegate_AnimationFinish);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ContentText).FormatArgs.AllocatorInstance.Data,
             (this->ContentText).FormatArgs.ArrayNum);
  pFVar2 = (this->ContentText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ContentText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar2 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b744c00

IClassDescriptor * __thiscall
UDS_VM_W_Hud_PhasingCompleteAlarm::GetFieldNotificationDescriptor
          (UDS_VM_W_Hud_PhasingCompleteAlarm *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Hud_PhasingCompleteAlarm::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7452c0

UClass * __cdecl UDS_VM_W_Hud_PhasingCompleteAlarm::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Hud_PhasingCompleteAlarm.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Hud_PhasingCompleteAlarm",
               &Z_Registration_Info_UClass_UDS_VM_W_Hud_PhasingCompleteAlarm.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Hud_PhasingCompleteAlarm,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Hud_PhasingCompleteAlarm>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Hud_PhasingCompleteAlarm>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Hud_PhasingCompleteAlarm.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Hud_PhasingCompleteAlarm @ 14b745c20

void __cdecl
UDS_VM_W_Hud_PhasingCompleteAlarm::StaticRegisterNativesUDS_VM_W_Hud_PhasingCompleteAlarm(void)

{
  return;
}

// __VTableCtorCaller @ 14b7468b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_W_Hud_PhasingCompleteAlarm::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UDS_VM_W_Hud_PhasingCompleteAlarm__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined4 *)&this[1].Visibility = 0;
    *(undefined1 *)&this[1].VMName.ComparisonIndex.Value = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
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
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[2].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    *(undefined4 *)&this[2].TextPropertyIDList.AllocatorInstance.Data = 0;
    ::FName::FName((FName *)&this[2].TextPropertyIDList.ArrayNum,"Open_Ani");
    ::FName::FName((FName *)(this + 3),"Close_Ani");
    ::FName::FName((FName *)&this[3]._padding_,"Fail_Open_Ani");
    ::FName::FName((FName *)&this[3]._padding_,"Fail_Close_Ani");
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// OnFinishAniEvent @ 14bfbd4a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Hud_PhasingCompleteAlarm::OnFinishAniEvent
          (UDS_VM_W_Hud_PhasingCompleteAlarm *this,FDS_WidgetAnimationEventField *param_1)

{
  bool bVar1;
  FName FVar2;
  UDS_WindowManager *this_00;
  UDS_WindowManager *local_res8;
  uint local_res10 [2];
  FWeakObjectPtr local_res18 [2];
  FName local_18;
  int local_10;
  
  FVar2 = param_1->AnimationName;
  if (FVar2 == this->AniName_Success_Open) {
    FVar2 = this->AniName_Success_Close;
  }
  else {
    if (FVar2 != this->AniName_Fail_Open) {
      if ((FVar2 == this->AniName_Success_Close) || (FVar2 == this->AniName_Fail_Close)) {
        local_res8 = UDS_WindowManager::GetInst();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res8 != (UDS_WindowManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res8);
        }
        local_res18[0].ObjectIndex = 0;
        local_res18[0].ObjectSerialNumber = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res8 != (UDS_WindowManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res8);
        }
        FWeakObjectPtr::operator=(local_res18,(FObjectPtr)&local_res8);
        bVar1 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)local_res18,
                           (void *)0x0);
        if (!bVar1) {
          this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get(local_res18);
          local_res8 = (UDS_WindowManager *)((ulonglong)local_res8 & 0xffffffff00000000);
          local_res10[0] = 0;
          UDS_WindowManager::CloseWindow
                    (this_00,HUDPhasingComplete,local_res10,(float *)&local_res8);
        }
      }
      return;
    }
    FVar2 = this->AniName_Fail_Close;
  }
  (this->StartAniEvent).AnimationName = FVar2;
  (this->StartAniEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::StartAniEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StartAniEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bfce790

void __thiscall
UDS_VM_W_Hud_PhasingCompleteAlarm::OnSetViewModel
          (UDS_VM_W_Hud_PhasingCompleteAlarm *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_PhasingCompleteAlarm,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_PhasingCompleteAlarm>(&local_28,&local_18);
  if (local_28.Object == (FDS_ViewModelContext_PhasingCompleteAlarm *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    lVar5 = 0x1d8;
    if ((local_28.Object)->bIsPhasingSuccess != true) {
      lVar5 = 0x1e8;
    }
    FVar2 = *(FName *)((longlong)&this->_padding_ + lVar5);
    this->WidgetSwitcherIndex = (uint)((local_28.Object)->bIsPhasingSuccess != true);
    (this->StartAniEvent).AnimationName = FVar2;
    if (local_28.Object == (FDS_ViewModelContext_PhasingCompleteAlarm *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this->IconID = (local_28.Object)->IconID;
    FDS_Text::SetTextFromStringTable(&this->TitleText,StringUi,(local_28.Object)->TitleStringID);
    FDS_Text::SetTextFromStringTable(&this->ContentText,StringUi,(local_28.Object)->ContentStringID)
    ;
    if (0 < ((local_28.Object)->ContentStringArgs).ArrayNum) {
      FDS_Text::SetTextFormatFromStringTable
                (&this->ContentText,StringUi,(local_28.Object)->ContentStringID,
                 &(local_28.Object)->ContentStringArgs);
    }
    local_70 = FFieldNotificationClassDescriptor::WidgetSwitcherIndex.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::WidgetSwitcherIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    local_60 = FFieldNotificationClassDescriptor::IconID.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::IconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    local_50 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::TitleText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    local_40 = FFieldNotificationClassDescriptor::ContentText.BitNumber;
    local_48 = FFieldNotificationClassDescriptor::ContentText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    (this->StartAniEvent).AnimationEventType = PlayForward;
    local_30 = FFieldNotificationClassDescriptor::StartAniEvent.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::StartAniEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

