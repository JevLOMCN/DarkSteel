// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetAnimationFinishedEvent_WrapperImpl @ 14b674c00

void __cdecl
UDS_VM_HUD_SmallTalk::SetAnimationFinishedEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName *pFVar1;
  FName aFStackX_10 [3];
  
  pFVar1 = ::FName::FName(aFStackX_10,"End_Ani");
  if (*pFVar1 == *(FName *)param_2) {
    CloseSmallTalk(param_1);
  }
  return;
}

// StaticClass @ 14b674c10

UClass * __cdecl UDS_VM_HUD_SmallTalk::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_SmallTalk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_SmallTalk",
               &Z_Registration_Info_UClass_UDS_VM_HUD_SmallTalk.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_SmallTalk,0x230,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_SmallTalk>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_SmallTalk>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_SmallTalk.InnerSingleton;
}

// UDS_VM_HUD_SmallTalk @ 14b67a9f0

UDS_VM_HUD_SmallTalk * __thiscall
UDS_VM_HUD_SmallTalk::UDS_VM_HUD_SmallTalk(UDS_VM_HUD_SmallTalk *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_SmallTalk__6B_;
  this->CharacterPortraitIconID = 0;
  (this->NpcNameText).StringTableType = None;
  (this->NpcNameText).StringTableID = 0;
  (this->NpcNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NpcNameText).StringEnumTableNameID.Number = 0;
  (this->NpcNameText).DateTime.Ticks = 0;
  (this->NpcNameText).TimeSpan.Ticks = 0;
  (this->NpcNameText).TimeExpressionType = None;
  (this->NpcNameText).IsExpression = false;
  (this->NpcNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcNameText).UniqueString.Data.ArrayNum = 0;
  (this->NpcNameText).UniqueString.Data.ArrayMax = 0;
  (this->NpcNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcNameText).FormatArgs.ArrayNum = 0;
  (this->NpcNameText).FormatArgs.ArrayMax = 0;
  (this->ContentsText).StringTableType = None;
  (this->ContentsText).StringTableID = 0;
  (this->ContentsText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ContentsText).StringEnumTableNameID.Number = 0;
  (this->ContentsText).DateTime.Ticks = 0;
  (this->ContentsText).TimeSpan.Ticks = 0;
  (this->ContentsText).TimeExpressionType = None;
  (this->ContentsText).IsExpression = false;
  (this->ContentsText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentsText).UniqueString.Data.ArrayNum = 0;
  (this->ContentsText).UniqueString.Data.ArrayMax = 0;
  (this->ContentsText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentsText).FormatArgs.ArrayNum = 0;
  (this->ContentsText).FormatArgs.ArrayMax = 0;
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
  (this->ArrayNpcTableID).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayNpcTableID).ArrayNum = 0;
  (this->ArrayNpcTableID).ArrayMax = 0;
  (this->ArrayStringDialogueTableID).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayStringDialogueTableID).ArrayNum = 0;
  (this->ArrayStringDialogueTableID).ArrayMax = 0;
  (this->ArrayPlayTimeTableID).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayPlayTimeTableID).ArrayNum = 0;
  (this->ArrayPlayTimeTableID).ArrayMax = 0;
  (this->ArrayResourceSoundTableID).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayResourceSoundTableID).ArrayNum = 0;
  (this->ArrayResourceSoundTableID).ArrayMax = 0;
  (this->TimerHandle_TalkNextStep).Handle = 0;
  this->CurSmallTalkPlayTime = 0.0;
  this->SmallTalkID = 0;
  this->CurIndex = 0;
  this->ArrayMaxCount = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishedEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_HUD_SmallTalk @ 14b67abb0

UDS_VM_HUD_SmallTalk * __thiscall
UDS_VM_HUD_SmallTalk::UDS_VM_HUD_SmallTalk(UDS_VM_HUD_SmallTalk *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_SmallTalk__6B_;
  this->CharacterPortraitIconID = 0;
  (this->NpcNameText).StringTableType = None;
  (this->NpcNameText).StringTableID = 0;
  (this->NpcNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NpcNameText).StringEnumTableNameID.Number = 0;
  (this->NpcNameText).DateTime.Ticks = 0;
  (this->NpcNameText).TimeSpan.Ticks = 0;
  (this->NpcNameText).TimeExpressionType = None;
  (this->NpcNameText).IsExpression = false;
  (this->NpcNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcNameText).UniqueString.Data.ArrayNum = 0;
  (this->NpcNameText).UniqueString.Data.ArrayMax = 0;
  (this->NpcNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcNameText).FormatArgs.ArrayNum = 0;
  (this->NpcNameText).FormatArgs.ArrayMax = 0;
  (this->ContentsText).StringTableType = None;
  (this->ContentsText).StringTableID = 0;
  (this->ContentsText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ContentsText).StringEnumTableNameID.Number = 0;
  (this->ContentsText).DateTime.Ticks = 0;
  (this->ContentsText).TimeSpan.Ticks = 0;
  (this->ContentsText).TimeExpressionType = None;
  (this->ContentsText).IsExpression = false;
  (this->ContentsText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentsText).UniqueString.Data.ArrayNum = 0;
  (this->ContentsText).UniqueString.Data.ArrayMax = 0;
  (this->ContentsText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentsText).FormatArgs.ArrayNum = 0;
  (this->ContentsText).FormatArgs.ArrayMax = 0;
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
  (this->ArrayNpcTableID).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayNpcTableID).ArrayNum = 0;
  (this->ArrayNpcTableID).ArrayMax = 0;
  (this->ArrayStringDialogueTableID).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayStringDialogueTableID).ArrayNum = 0;
  (this->ArrayStringDialogueTableID).ArrayMax = 0;
  (this->ArrayPlayTimeTableID).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayPlayTimeTableID).ArrayNum = 0;
  (this->ArrayPlayTimeTableID).ArrayMax = 0;
  (this->ArrayResourceSoundTableID).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayResourceSoundTableID).ArrayNum = 0;
  (this->ArrayResourceSoundTableID).ArrayMax = 0;
  (this->TimerHandle_TalkNextStep).Handle = 0;
  this->CurSmallTalkPlayTime = 0.0;
  this->SmallTalkID = 0;
  this->CurIndex = 0;
  this->ArrayMaxCount = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishedEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_HUD_SmallTalk @ 14b67bbb0

void __thiscall UDS_VM_HUD_SmallTalk::~UDS_VM_HUD_SmallTalk(UDS_VM_HUD_SmallTalk *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_SmallTalk__6B_;
  pFVar1 = (this->ArrayResourceSoundTableID).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ArrayPlayTimeTableID).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ArrayStringDialogueTableID).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ArrayNpcTableID).AllocatorInstance.Data;
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
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ContentsText).FormatArgs.AllocatorInstance.Data,
             (this->ContentsText).FormatArgs.ArrayNum);
  pFVar1 = (this->ContentsText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ContentsText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NpcNameText).FormatArgs.AllocatorInstance.Data,
             (this->NpcNameText).FormatArgs.ArrayNum);
  pFVar1 = (this->NpcNameText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NpcNameText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67e1a0

IClassDescriptor * __thiscall
UDS_VM_HUD_SmallTalk::GetFieldNotificationDescriptor(UDS_VM_HUD_SmallTalk *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_SmallTalk::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67ee30

UClass * __cdecl UDS_VM_HUD_SmallTalk::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_SmallTalk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_SmallTalk",
               &Z_Registration_Info_UClass_UDS_VM_HUD_SmallTalk.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_SmallTalk,0x230,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_SmallTalk>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_SmallTalk>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_SmallTalk.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_SmallTalk @ 14b67f380

void __cdecl UDS_VM_HUD_SmallTalk::StaticRegisterNativesUDS_VM_HUD_SmallTalk(void)

{
  return;
}

// __DefaultConstructor @ 14b67fcb0

void __cdecl UDS_VM_HUD_SmallTalk::__DefaultConstructor(FObjectInitializer *param_1)

{
  UDS_ViewModelBase *this;
  
  this = (UDS_ViewModelBase *)param_1->Obj;
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_HUD_SmallTalk__6B_;
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
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[2].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    *(undefined4 *)&this[2].TextPropertyIDList.AllocatorInstance.Data = 0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 1;
    *(undefined4 *)&this[2]._padding_ = 1;
  }
  return;
}

// __VTableCtorCaller @ 14b67fe70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_HUD_SmallTalk::__VTableCtorCaller(FVTableHelper *param_1)

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
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_HUD_SmallTalk__6B_;
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
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// ArrayDataCheck @ 14bf3fda0

bool __thiscall UDS_VM_HUD_SmallTalk::ArrayDataCheck(UDS_VM_HUD_SmallTalk *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = this->ArrayMaxCount;
  if ((((((iVar1 != 0) && (iVar2 = (this->ArrayNpcTableID).ArrayNum, iVar2 != 0)) &&
        (iVar3 = (this->ArrayStringDialogueTableID).ArrayNum, iVar3 != 0)) &&
       ((iVar4 = (this->ArrayPlayTimeTableID).ArrayNum, iVar4 != 0 &&
        (iVar5 = (this->ArrayResourceSoundTableID).ArrayNum, iVar5 != 0)))) &&
      ((iVar1 == iVar2 && ((iVar1 == iVar3 && (iVar1 == iVar4)))))) && (iVar1 == iVar5)) {
    return true;
  }
  return false;
}

// BindModel @ 14bf41050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_SmallTalk::BindModel(UDS_VM_HUD_SmallTalk *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168 [2];
  undefined1 local_158 [288];
  void *local_38;
  ForAnyElementType local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_158._0_8_ = UDS_SmallTalkManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UDS_SmallTalkManager *)local_158._0_8_ != (UDS_SmallTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_158._0_8_);
  }
  local_168[0].ObjectIndex = 0;
  local_168[0].ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UDS_SmallTalkManager *)local_158._0_8_ != (UDS_SmallTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_158._0_8_);
  }
  FWeakObjectPtr::operator=(local_168,(FObjectPtr)local_158);
  bVar1 = FWeakObjectPtr::IsValid(local_168);
  if (bVar1) {
    local_158._8_4_ = 0;
    local_158._0_8_ = OnPlayInitializeSmallTalk;
    local_158._24_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
    local_158._16_8_ = OnPlayInitializeSmallTalk;
    pUVar3 = FWeakObjectPtr::Get(local_168);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_SmallTalk>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar3[1].field_0x18,(UDS_VM_HUD_SmallTalk *)local_158,(pmf_7eef6420 *)this);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                 "UDS_VM_HUD_SmallTalk::BindModel",0x1f,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,(wchar_t *)local_30.Data,0x24,L"SmallTalkManager is not valid.");
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  return;
}

// CloseSmallTalk @ 14bf44580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_SmallTalk::CloseSmallTalk(UDS_VM_HUD_SmallTalk *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_SmallTalkManager *this_00;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UDS_SmallTalkManager *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  local_140 = UDS_SmallTalkManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_SmallTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_SmallTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar1 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar1) {
    this_00 = (UDS_SmallTalkManager *)FWeakObjectPtr::Get(&local_148);
    UDS_SmallTalkManager::OnFinishedSmallTalk(this_00);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_SmallTalk::CloseSmallTalk",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x76,L"SmallTalkManager is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// GetNpcBaseTableRow @ 14bf57850

FDS_NpcBaseTableRow * __thiscall
UDS_VM_HUD_SmallTalk::GetNpcBaseTableRow(UDS_VM_HUD_SmallTalk *this,int param_1)

{
  FDS_NpcBaseTableRow *pFVar1;
  
  pFVar1 = FDS_NpcBaseTableRow::Get((longlong)param_1,true);
  return pFVar1;
}

// GetStringDialogueRow @ 14bf57f50

FDS_StringDialogueTableRow * __thiscall
UDS_VM_HUD_SmallTalk::GetStringDialogueRow(UDS_VM_HUD_SmallTalk *this,int param_1)

{
  FDS_StringDialogueTableRow *pFVar1;
  
  pFVar1 = FDS_StringDialogueTableRow::Get((longlong)param_1,true);
  return pFVar1;
}

// InitData @ 14bf59c30

void __thiscall UDS_VM_HUD_SmallTalk::InitData(UDS_VM_HUD_SmallTalk *this)

{
  int *piVar1;
  
  this->CurIndex = 0;
  this->ArrayMaxCount = 0;
  piVar1 = &(this->ArrayNpcTableID).ArrayMax;
  (this->ArrayNpcTableID).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ArrayNpcTableID).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ArrayStringDialogueTableID).ArrayMax;
  (this->ArrayStringDialogueTableID).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ArrayStringDialogueTableID).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ArrayPlayTimeTableID).ArrayMax;
  (this->ArrayPlayTimeTableID).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ArrayPlayTimeTableID).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ArrayResourceSoundTableID).ArrayMax;
  (this->ArrayResourceSoundTableID).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ArrayResourceSoundTableID).AllocatorInstance,0,piVar1);
  }
  return;
}

// InitViewModel @ 14bf5b3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_SmallTalk::InitViewModel(UDS_VM_HUD_SmallTalk *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UDS_SmallTalkManager *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_140 = UDS_SmallTalkManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_SmallTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_SmallTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar1 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar1) {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    pUVar3 = FWeakObjectPtr::Get(&local_148);
    OnPlayInitializeSmallTalk(this,*(int *)&pUVar3[1].field_0x10);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_SmallTalk::InitViewModel",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x17,L"SmallTalkManager is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnAnimationFinished @ 14bf5ef80

void __thiscall
UDS_VM_HUD_SmallTalk::OnAnimationFinished
          (UDS_VM_HUD_SmallTalk *this,FDS_WidgetAnimationEventField *param_1)

{
  FName *pFVar1;
  FName local_res10 [3];
  
  pFVar1 = ::FName::FName(local_res10,"End_Ani");
  if (*pFVar1 == param_1->AnimationName) {
    CloseSmallTalk(this);
  }
  return;
}

// OnCloseInit @ 14bf634b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_SmallTalk::OnCloseInit(UDS_VM_HUD_SmallTalk *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_SmallTalkManager *this_00;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr FStack_148;
  UDS_SmallTalkManager *pUStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  pUStack_140 = UDS_SmallTalkManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_140 != (UDS_SmallTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_140);
  }
  FStack_148.ObjectIndex = 0;
  FStack_148.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_140 != (UDS_SmallTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_140);
  }
  FWeakObjectPtr::operator=(&FStack_148,(FObjectPtr)&pUStack_140);
  bVar1 = FWeakObjectPtr::IsValid(&FStack_148);
  if (bVar1) {
    this_00 = (UDS_SmallTalkManager *)FWeakObjectPtr::Get(&FStack_148);
    UDS_SmallTalkManager::OnFinishedSmallTalk(this_00);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_HUD_SmallTalk::CloseSmallTalk",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,TStack_138.Ptr,0x76,L"SmallTalkManager is not valid.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// OnPlayInitializeSmallTalk @ 14bf66470

void __thiscall
UDS_VM_HUD_SmallTalk::OnPlayInitializeSmallTalk(UDS_VM_HUD_SmallTalk *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  int *piVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FName FVar10;
  FName *pFVar11;
  FName local_res18;
  FScriptContainerElement *local_res20;
  FName local_48;
  int local_40;
  
  if (param_1 != 0) {
    pTVar4 = &this->ArrayNpcTableID;
    this->CurIndex = 0;
    this->ArrayMaxCount = 0;
    piVar1 = &(this->ArrayNpcTableID).ArrayMax;
    (this->ArrayNpcTableID).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar4->AllocatorInstance,0,piVar1);
    }
    pTVar5 = &this->ArrayStringDialogueTableID;
    piVar2 = &(this->ArrayStringDialogueTableID).ArrayMax;
    (this->ArrayStringDialogueTableID).ArrayNum = 0;
    if ((this->ArrayStringDialogueTableID).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar5->AllocatorInstance,0,piVar2);
    }
    pTVar6 = &this->ArrayPlayTimeTableID;
    piVar3 = &(this->ArrayPlayTimeTableID).ArrayMax;
    (this->ArrayPlayTimeTableID).ArrayNum = 0;
    if ((this->ArrayPlayTimeTableID).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar6->AllocatorInstance,0,piVar3);
    }
    piVar7 = &(this->ArrayResourceSoundTableID).ArrayMax;
    (this->ArrayResourceSoundTableID).ArrayNum = 0;
    if (*piVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->ArrayResourceSoundTableID).AllocatorInstance,0,piVar7);
    }
    this->SmallTalkID = param_1;
    local_res18 = (FName)FDS_SmallTalkBaseTableRow::Get((longlong)param_1,true);
    if (local_res18 != (FName)0x0) {
      this->ArrayMaxCount = *(int *)((longlong)local_res18 + 0x28);
      if (pTVar4 != (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)local_res18 + 0x20)) {
        iVar8 = *(int *)((longlong)local_res18 + 0x28);
        local_res20 = (((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)local_res18 + 0x20))->
                      AllocatorInstance).Data;
        (this->ArrayNpcTableID).ArrayNum = iVar8;
        if ((iVar8 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar8,*piVar1,&pTVar4->AllocatorInstance,iVar8,piVar1);
          if (iVar8 != 0) {
            memcpy((pTVar4->AllocatorInstance).Data,local_res20,(longlong)iVar8 << 2);
          }
        }
      }
      FVar10 = local_res18;
      if (pTVar5 != (TArray<__int64,TSizedDefaultAllocator<32>_> *)((longlong)local_res18 + 0x30)) {
        iVar8 = *(int *)((longlong)local_res18 + 0x38);
        pFVar9 = (((TArray<__int64,TSizedDefaultAllocator<32>_> *)((longlong)local_res18 + 0x30))->
                 AllocatorInstance).Data;
        (this->ArrayStringDialogueTableID).ArrayNum = iVar8;
        if ((iVar8 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar8,*piVar2,&pTVar5->AllocatorInstance,iVar8,piVar2);
          if (iVar8 != 0) {
            memcpy((pTVar5->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 3);
          }
        }
      }
      if (pTVar6 != (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)FVar10 + 0x40)) {
        iVar8 = *(int *)((longlong)FVar10 + 0x48);
        pFVar9 = (((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)FVar10 + 0x40))->
                 AllocatorInstance).Data;
        (this->ArrayPlayTimeTableID).ArrayNum = iVar8;
        if ((iVar8 == 0) && (*piVar3 == 0)) {
          *piVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar8,*piVar3,&pTVar6->AllocatorInstance,iVar8,piVar3);
          if (iVar8 != 0) {
            memcpy((pTVar6->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 2);
          }
        }
      }
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (&this->ArrayResourceSoundTableID,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)FVar10 + 0x50));
      pFVar11 = ::FName::FName(&local_res18,"Open_Ani");
      (this->AnimationEvent).AnimationName = *pFVar11;
      (this->AnimationEvent).AnimationEventType = PlayForward;
      local_40 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_48 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
      PlaySmallTalk(this);
    }
    return;
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  return;
}

// PlaySmallTalk @ 14bf73a90

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

void __thiscall UDS_VM_HUD_SmallTalk::PlaySmallTalk(UDS_VM_HUD_SmallTalk *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  FDS_NpcBaseTableRow *pFVar9;
  FDS_StringDialogueTableRow *pFVar10;
  FTimerManager *pFVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  UDS_LogManager *pUVar14;
  uint uVar15;
  undefined1 auStackY_268 [32];
  FDelegateAllocation local_238;
  FName local_228;
  int iStack_220;
  undefined4 uStack_21c;
  UDS_VM_HUD_SmallTalk *local_218 [2];
  FName local_208;
  int local_200;
  FName local_1f8;
  int local_1f0;
  FDS_Text local_1e8;
  FDS_Text local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_268;
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  iVar1 = this->ArrayMaxCount;
  if ((((((iVar1 == 0) || (iVar2 = (this->ArrayNpcTableID).ArrayNum, iVar2 == 0)) ||
        (iVar3 = (this->ArrayStringDialogueTableID).ArrayNum, iVar3 == 0)) ||
       ((iVar4 = (this->ArrayPlayTimeTableID).ArrayNum, iVar4 == 0 ||
        (iVar5 = (this->ArrayResourceSoundTableID).ArrayNum, iVar5 == 0)))) ||
      ((iVar1 != iVar2 || ((iVar1 != iVar3 || (iVar1 != iVar4)))))) || (iVar1 != iVar5)) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 != (UDS_LogManager *)0x0) {
      pUVar14 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_HUD_SmallTalk::PlaySmallTalk",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar14,1,Warning,local_148.Ptr,0x4d,L"SmallTalk BaseTable Data is Wrong");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
    uVar6 = this->CurIndex;
    uVar15 = 0;
    if ((int)uVar6 < (this->ArrayNpcTableID).ArrayNum) {
      uVar15 = ~uVar6 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar9 = FDS_NpcBaseTableRow::Get
                       ((longlong)
                        *(int *)((this->ArrayNpcTableID).AllocatorInstance.Data +
                                (longlong)(int)uVar6 * 4),true);
    uVar6 = this->CurIndex;
    uVar15 = 0;
    if ((int)uVar6 < (this->ArrayStringDialogueTableID).ArrayNum) {
      uVar15 = ~uVar6 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar10 = FDS_StringDialogueTableRow::Get
                        ((longlong)
                         *(int *)((this->ArrayStringDialogueTableID).AllocatorInstance.Data +
                                 (longlong)(int)uVar6 * 8),true);
    if ((pFVar9 != (FDS_NpcBaseTableRow *)0x0) && (pFVar10 != (FDS_StringDialogueTableRow *)0x0)) {
      local_1e8.StringTableType = None;
      local_1e8.StringTableID = 0;
      local_1e8.DateTime.Ticks = 0;
      local_1e8.TimeSpan.Ticks = 0;
      local_1e8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1e8.StringEnumTableNameID.Number = 0;
      local_1e8.TimeExpressionType = None;
      local_1e8.IsExpression = false;
      local_1e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.UniqueString.Data.ArrayNum = 0;
      local_1e8.UniqueString.Data.ArrayMax = 0;
      local_1e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.FormatArgs.ArrayNum = 0;
      local_1e8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_1e8,&pFVar9->ID_NameSid);
      FDS_Text::operator=(&this->NpcNameText,&local_1e8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_1e8.FormatArgs.AllocatorInstance.Data,
                 local_1e8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_1e8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_1e8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_1e8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.UniqueString.Data.AllocatorInstance.Data);
      }
      local_198.StringTableType = None;
      local_198.StringTableID = 0;
      local_198.DateTime.Ticks = 0;
      local_198.TimeSpan.Ticks = 0;
      local_198.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_198.StringEnumTableNameID.Number = 0;
      local_198.TimeExpressionType = None;
      local_198.IsExpression = false;
      local_198.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.UniqueString.Data.ArrayNum = 0;
      local_198.UniqueString.Data.ArrayMax = 0;
      local_198.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.FormatArgs.ArrayNum = 0;
      local_198.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_198,StringDialogue,pFVar10->ID);
      FDS_Text::operator=(&this->ContentsText,&local_198);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_198.FormatArgs.AllocatorInstance.Data,
                 local_198.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_198.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_198.FormatArgs.AllocatorInstance.Data);
      }
      if (local_198.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.UniqueString.Data.AllocatorInstance.Data);
      }
      uVar6 = this->CurIndex;
      this->CharacterPortraitIconID = pFVar9->ID_Portrait;
      uVar15 = 0;
      if ((int)uVar6 < (this->ArrayPlayTimeTableID).ArrayNum) {
        uVar15 = ~uVar6 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this->CurSmallTalkPlayTime =
           *(float *)((this->ArrayPlayTimeTableID).AllocatorInstance.Data + (longlong)(int)uVar6 * 4
                     );
      local_200 = FFieldNotificationClassDescriptor::NpcNameText.BitNumber;
      local_208 = FFieldNotificationClassDescriptor::NpcNameText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_208);
      local_1f0 = FFieldNotificationClassDescriptor::CharacterPortraitIconID.BitNumber;
      local_1f8 = FFieldNotificationClassDescriptor::CharacterPortraitIconID.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
      iStack_220 = FFieldNotificationClassDescriptor::ContentsText.BitNumber;
      local_228 = FFieldNotificationClassDescriptor::ContentsText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_228);
      if ((this->TimerHandle_TalkNextStep).Handle != 0) {
        pFVar11 = FDS_TimerManager::Get((UObject *)0x0);
        FTimerManager::ClearTimer(pFVar11,&this->TimerHandle_TalkNextStep);
      }
      iStack_220 = 0;
      local_228 = (FName)TalkNextStep;
      uStack_21c = local_238._12_4_;
      local_238.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_238.DelegateSize = 0;
      puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_238);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &
                   ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar13 = FDelegateHandle::GenerateNewID();
        puVar12[2] = uVar13;
        *puVar12 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_HUD_SmallTalk____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar12[3] = 0;
        local_218[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)local_218);
        *(FName *)(puVar12 + 4) = local_228;
        puVar12[5] = CONCAT44(uStack_21c,iStack_220);
      }
      pFVar11 = FDS_TimerManager::Get((UObject *)0x0);
      FTimerManager::SetTimer
                (pFVar11,&this->TimerHandle_TalkNextStep,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &local_238,this->CurSmallTalkPlayTime,false,__real_bf800000);
      if (local_238.DelegateSize != 0) {
        if (local_238.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          return;
        }
        (*(code *)**(undefined8 **)local_238.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_238,0,0,0x10);
        local_238.DelegateSize = 0;
      }
      if (local_238.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_238.DelegateAllocator);
      }
    }
  }
  return;
}

// TalkNextStep @ 14bf839c0

void __thiscall UDS_VM_HUD_SmallTalk::TalkNextStep(UDS_VM_HUD_SmallTalk *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  this->CurIndex = this->CurIndex + 1;
  if (this->CurIndex == this->ArrayMaxCount) {
    pFVar1 = ::FName::FName(local_res8,"End_Ani");
    (this->AnimationEvent).AnimationName = *pFVar1;
    (this->AnimationEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    return;
  }
  PlaySmallTalk(this);
  return;
}

// UnbindModel @ 14bf84ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_SmallTalk::UnbindModel(UDS_VM_HUD_SmallTalk *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UDS_SmallTalkManager *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_140 = UDS_SmallTalkManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_SmallTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_SmallTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar1 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&local_148);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[1].field_0x18,this);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_SmallTalk::UnbindModel",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x31,L"SmallTalkManager is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

