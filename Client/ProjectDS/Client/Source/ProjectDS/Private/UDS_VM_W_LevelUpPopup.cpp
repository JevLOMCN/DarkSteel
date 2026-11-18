// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b73f320

UClass * __cdecl UDS_VM_W_LevelUpPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_LevelUpPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_LevelUpPopup",
               &Z_Registration_Info_UClass_UDS_VM_W_LevelUpPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_LevelUpPopup,0x290,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_LevelUpPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_LevelUpPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_LevelUpPopup.InnerSingleton;
}

// UDS_VM_W_LevelUpPopup @ 14b741d50

UDS_VM_W_LevelUpPopup * __thiscall
UDS_VM_W_LevelUpPopup::UDS_VM_W_LevelUpPopup(UDS_VM_W_LevelUpPopup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->bIsMaxLevel = true;
  this->bIsShowItemList = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_LevelUpPopup__6B_;
  (this->Text_Title).StringTableID = 0;
  (this->Text_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_Title).StringEnumTableNameID.Number = 0;
  (this->Text_Title).DateTime.Ticks = 0;
  (this->Text_Title).TimeSpan.Ticks = 0;
  (this->Text_Title).TimeExpressionType = None;
  (this->Text_Title).IsExpression = false;
  (this->Text_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Title).UniqueString.Data.ArrayNum = 0;
  (this->Text_Title).UniqueString.Data.ArrayMax = 0;
  (this->Text_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Title).FormatArgs.ArrayNum = 0;
  (this->Text_Title).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_Status).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Status).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Status).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Item).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Item).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Item).UserObjectList.ArrayMax = 0;
  (this->BtnEvent_SkipAndClose)._padding_ = '\0';
  (this->BtnEvent_SkipAndClose).bIsCustomSelected = false;
  (this->BtnEvent_SkipAndClose).bIsLacked = false;
  (this->BtnEvent_SkipAndClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_SkipAndClose).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_SkipAndClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_SkipAndClose).Delegate.field_0x10 = 0;
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
  (this->AnimationCancleEvent).bIsActivate = false;
  (this->FixedText_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Level).StringEnumTableNameID.Number = 0;
  (this->FixedText_Level).DateTime.Ticks = 0;
  (this->FixedText_Level).TimeSpan.Ticks = 0;
  (this->FixedText_Level).TimeExpressionType = None;
  (this->FixedText_Level).IsExpression = false;
  (this->FixedText_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Level).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Level).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Level).FormatArgs.ArrayNum = 0;
  (this->FixedText_Level).FormatArgs.ArrayMax = 0;
  (this->FixedText_MaxLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_MaxLevel).StringEnumTableNameID.Number = 0;
  (this->FixedText_MaxLevel).DateTime.Ticks = 0;
  (this->FixedText_MaxLevel).TimeSpan.Ticks = 0;
  (this->FixedText_MaxLevel).TimeExpressionType = None;
  (this->FixedText_MaxLevel).IsExpression = false;
  (this->FixedText_MaxLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayNum = 0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayMax = 0;
  (this->FixedText_Desc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Desc).StringEnumTableNameID.Number = 0;
  (this->FixedText_Desc).DateTime.Ticks = 0;
  (this->FixedText_Desc).TimeSpan.Ticks = 0;
  (this->FixedText_Desc).TimeExpressionType = None;
  (this->FixedText_Desc).IsExpression = false;
  (this->FixedText_Desc).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Desc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Desc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).FormatArgs.ArrayNum = 0;
  (this->FixedText_Desc).FormatArgs.ArrayMax = 0;
  this->LocalAnimState = None;
  (this->Text_Title).StringTableType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->FixedText_Level).StringTableType = StringUi;
  (this->FixedText_Level).StringTableID = 0x2981d;
  (this->FixedText_MaxLevel).StringTableType = StringUi;
  (this->FixedText_MaxLevel).StringTableID = 0x298de;
  (this->FixedText_Desc).StringTableType = StringUi;
  (this->FixedText_Desc).StringTableID = 0x298df;
  return this;
}

// UDS_VM_W_LevelUpPopup @ 14b741f60

UDS_VM_W_LevelUpPopup * __thiscall
UDS_VM_W_LevelUpPopup::UDS_VM_W_LevelUpPopup
          (UDS_VM_W_LevelUpPopup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->bIsMaxLevel = true;
  this->bIsShowItemList = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_LevelUpPopup__6B_;
  (this->Text_Title).StringTableID = 0;
  (this->Text_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_Title).StringEnumTableNameID.Number = 0;
  (this->Text_Title).DateTime.Ticks = 0;
  (this->Text_Title).TimeSpan.Ticks = 0;
  (this->Text_Title).TimeExpressionType = None;
  (this->Text_Title).IsExpression = false;
  (this->Text_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Title).UniqueString.Data.ArrayNum = 0;
  (this->Text_Title).UniqueString.Data.ArrayMax = 0;
  (this->Text_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Title).FormatArgs.ArrayNum = 0;
  (this->Text_Title).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_Status).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Status).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Status).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Item).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Item).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Item).UserObjectList.ArrayMax = 0;
  (this->BtnEvent_SkipAndClose)._padding_ = '\0';
  (this->BtnEvent_SkipAndClose).bIsCustomSelected = false;
  (this->BtnEvent_SkipAndClose).bIsLacked = false;
  (this->BtnEvent_SkipAndClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_SkipAndClose).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_SkipAndClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_SkipAndClose).Delegate.field_0x10 = 0;
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
  (this->AnimationCancleEvent).bIsActivate = false;
  (this->FixedText_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Level).StringEnumTableNameID.Number = 0;
  (this->FixedText_Level).DateTime.Ticks = 0;
  (this->FixedText_Level).TimeSpan.Ticks = 0;
  (this->FixedText_Level).TimeExpressionType = None;
  (this->FixedText_Level).IsExpression = false;
  (this->FixedText_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Level).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Level).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Level).FormatArgs.ArrayNum = 0;
  (this->FixedText_Level).FormatArgs.ArrayMax = 0;
  (this->FixedText_MaxLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_MaxLevel).StringEnumTableNameID.Number = 0;
  (this->FixedText_MaxLevel).DateTime.Ticks = 0;
  (this->FixedText_MaxLevel).TimeSpan.Ticks = 0;
  (this->FixedText_MaxLevel).TimeExpressionType = None;
  (this->FixedText_MaxLevel).IsExpression = false;
  (this->FixedText_MaxLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayNum = 0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayMax = 0;
  (this->FixedText_Desc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Desc).StringEnumTableNameID.Number = 0;
  (this->FixedText_Desc).DateTime.Ticks = 0;
  (this->FixedText_Desc).TimeSpan.Ticks = 0;
  (this->FixedText_Desc).TimeExpressionType = None;
  (this->FixedText_Desc).IsExpression = false;
  (this->FixedText_Desc).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Desc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Desc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).FormatArgs.ArrayNum = 0;
  (this->FixedText_Desc).FormatArgs.ArrayMax = 0;
  this->LocalAnimState = None;
  (this->Text_Title).StringTableType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->FixedText_Level).StringTableType = StringUi;
  (this->FixedText_Level).StringTableID = 0x2981d;
  (this->FixedText_MaxLevel).StringTableType = StringUi;
  (this->FixedText_MaxLevel).StringTableID = 0x298de;
  (this->FixedText_Desc).StringTableType = StringUi;
  (this->FixedText_Desc).StringTableID = 0x298df;
  return this;
}

// ~UDS_VM_W_LevelUpPopup @ 14b743080

void __thiscall UDS_VM_W_LevelUpPopup::~UDS_VM_W_LevelUpPopup(UDS_VM_W_LevelUpPopup *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_LevelUpPopup__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Desc).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Desc).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Desc).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Desc).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_MaxLevel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_MaxLevel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Level).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Level).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Level).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Level).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnEvent_SkipAndClose).Delegate);
  pvVar2 = *(void **)&(this->BtnEvent_SkipAndClose).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnEvent_SkipAndClose).Delegate);
  pFVar1 = (this->EntryBindingEventField_Item).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_Status).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_Title).FormatArgs.AllocatorInstance.Data,
             (this->Text_Title).FormatArgs.ArrayNum);
  pFVar1 = (this->Text_Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Text_Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b744ff0

IClassDescriptor * __thiscall
UDS_VM_W_LevelUpPopup::GetFieldNotificationDescriptor(UDS_VM_W_LevelUpPopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_LevelUpPopup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b745980

UClass * __cdecl UDS_VM_W_LevelUpPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_LevelUpPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_LevelUpPopup",
               &Z_Registration_Info_UClass_UDS_VM_W_LevelUpPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_LevelUpPopup,0x290,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_LevelUpPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_LevelUpPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_LevelUpPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_LevelUpPopup @ 14b745dd0

void __cdecl UDS_VM_W_LevelUpPopup::StaticRegisterNativesUDS_VM_W_LevelUpPopup(void)

{
  return;
}

// InitViewModel @ 14bf5bec0

void __thiscall UDS_VM_W_LevelUpPopup::InitViewModel(UDS_VM_W_LevelUpPopup *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_VM_W_LevelUpPopup *local_res8;
  uint uStack_2c;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish,(FWriteAccessScope *)&local_28);
  local_10 = &(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_LevelUpPopup____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_W_LevelUpPopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_W_LevelUpPopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
    puVar1[4] = OnAnimationFinish;
    puVar1[5] = (ulonglong)uStack_2c << 0x20;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->BtnEvent_SkipAndClose).Delegate,(FWriteAccessScope *)&local_28);
  local_10 = &(this->BtnEvent_SkipAndClose).Delegate.field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_LevelUpPopup____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_W_LevelUpPopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_W_LevelUpPopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
    puVar1[4] = OnSkipAndCloseButtonClick;
    puVar1[5] = (ulonglong)uStack_2c << 0x20;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// OnAnimFinishDelayFinish @ 14bf5e940

void __thiscall UDS_VM_W_LevelUpPopup::OnAnimFinishDelayFinish(UDS_VM_W_LevelUpPopup *this)

{
  this->LocalAnimState = Complete;
  return;
}

// OnAnimationFinish @ 14bf5ebb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_W_LevelUpPopup::OnAnimationFinish(UDS_VM_W_LevelUpPopup *this)

{
  FTimerManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_VM_W_LevelUpPopup *local_res10;
  FTimerHandle local_res18;
  FDelegateAllocation local_38;
  code *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_res18.Handle = 0;
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  local_28 = OnAnimFinishDelayFinish;
  uStack_20 = 0;
  local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_38.DelegateSize = 0;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_LevelUpPopup____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_W_LevelUpPopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_W_LevelUpPopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
    puVar1[4] = local_28;
    puVar1[5] = CONCAT44(uStack_1c,uStack_20);
  }
  FTimerManager::SetTimer
            (this_00,&local_res18,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_38,
             __real_3f800000,false,__real_bf800000);
  if ((local_38.DelegateSize != 0) &&
     (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_38.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_38,0,0,0x10);
    local_38.DelegateSize = 0;
  }
  if (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_38.DelegateAllocator);
  }
  return;
}

// OnCloseInit @ 14bf635a0

void __thiscall UDS_VM_W_LevelUpPopup::OnCloseInit(UDS_VM_W_LevelUpPopup *this)

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

// OnSetViewModel @ 14bf6f870

void __thiscall
UDS_VM_W_LevelUpPopup::OnSetViewModel
          (UDS_VM_W_LevelUpPopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

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
  pFVar2 = ::FName::FName(&local_res8,"Ani_In");
  (this->AnimationEvent).AnimationName = *pFVar2;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->LocalAnimState = Playing;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSkipAndCloseButtonClick @ 14bf71470

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_LevelUpPopup::OnSkipAndCloseButtonClick(UDS_VM_W_LevelUpPopup *this,UObject *param_1)

{
  UDS_WindowManager *this_00;
  FName *pFVar1;
  FName local_res8 [2];
  uint local_res18 [4];
  FName local_18;
  int local_10;
  
  if (this->LocalAnimState != Finishing) {
    if (this->LocalAnimState == Complete) {
      this_00 = UDS_WindowManager::GetInst();
      if (this_00 != (UDS_WindowManager *)0x0) {
        local_res8[0].ComparisonIndex.Value = 0;
        local_res18[0] = 0;
        UDS_WindowManager::CloseWindow
                  (this_00,CommonLevelUpResultPopup,local_res18,(float *)local_res8);
        return;
      }
    }
    else {
      pFVar1 = ::FName::FName(local_res8,"Ani_In");
      (this->AnimationEvent).AnimationName = *pFVar1;
      (this->AnimationEvent).AnimationEventType = PlayForwardSkip;
      local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

