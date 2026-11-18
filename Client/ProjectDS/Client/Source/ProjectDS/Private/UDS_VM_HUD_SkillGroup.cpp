// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// SetAnimationFinishEvent_WrapperImpl @ 14b676960

void __cdecl UDS_VM_HUD_SkillGroup::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.FieldName;
  if (*(char *)((longlong)param_1 + 0x130) != *(char *)((longlong)param_1 + 0x1c0)) {
    *(char *)((longlong)param_1 + 0x130) = *(char *)((longlong)param_1 + 0x1c0);
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// StaticClass @ 14b676970

UClass * __cdecl UDS_VM_HUD_SkillGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_SkillGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_SkillGroup",
               &Z_Registration_Info_UClass_UDS_VM_HUD_SkillGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_SkillGroup,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_SkillGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_SkillGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_SkillGroup.InnerSingleton;
}

// UDS_VM_HUD_SkillGroup @ 14b67a650

UDS_VM_HUD_SkillGroup * __thiscall
UDS_VM_HUD_SkillGroup::UDS_VM_HUD_SkillGroup(UDS_VM_HUD_SkillGroup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->DesiredVisibilityState = Hidden;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_SkillGroup__6B_;
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
  (this->VM_W_DefaultSkill_1).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_DefaultSkill_2).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_DefaultSkill_3).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_DefaultSkill_4).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_AttackSkill).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_Avoid).field0_0x0.DebugPtr = (UDS_VM_W_Avoid *)0x0;
  (this->VM_W_TraitSkill).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_SpecialSkill).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_AirWalk).field0_0x0.DebugPtr = (UDS_VM_W_AirWalk *)0x0;
  (this->VM_SwimControl_Surface).field0_0x0.DebugPtr = (UDS_VM_SwimControl *)0x0;
  (this->VM_SwimControl_Submerge).field0_0x0.DebugPtr = (UDS_VM_SwimControl *)0x0;
  (this->VM_MountControl).field0_0x0.DebugPtr = (UDS_VM_MountControl *)0x0;
  (this->VM_SkillModeControl).field0_0x0.DebugPtr = (UDS_VM_SkillModeControl *)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->GroundSkillGroup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroundSkillGroup).ArrayNum = 0;
  (this->GroundSkillGroup).ArrayMax = 0;
  (this->PlayingAnimationName).ComparisonIndex = 0;
  (this->PlayingAnimationName).Number = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_HUD_SkillGroup @ 14b67a7a0

UDS_VM_HUD_SkillGroup * __thiscall
UDS_VM_HUD_SkillGroup::UDS_VM_HUD_SkillGroup
          (UDS_VM_HUD_SkillGroup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->DesiredVisibilityState = Hidden;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_SkillGroup__6B_;
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
  (this->VM_W_DefaultSkill_1).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_DefaultSkill_2).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_DefaultSkill_3).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_DefaultSkill_4).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_AttackSkill).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_Avoid).field0_0x0.DebugPtr = (UDS_VM_W_Avoid *)0x0;
  (this->VM_W_TraitSkill).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_SpecialSkill).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_AirWalk).field0_0x0.DebugPtr = (UDS_VM_W_AirWalk *)0x0;
  (this->VM_SwimControl_Surface).field0_0x0.DebugPtr = (UDS_VM_SwimControl *)0x0;
  (this->VM_SwimControl_Submerge).field0_0x0.DebugPtr = (UDS_VM_SwimControl *)0x0;
  (this->VM_MountControl).field0_0x0.DebugPtr = (UDS_VM_MountControl *)0x0;
  (this->VM_SkillModeControl).field0_0x0.DebugPtr = (UDS_VM_SkillModeControl *)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->GroundSkillGroup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroundSkillGroup).ArrayNum = 0;
  (this->GroundSkillGroup).ArrayMax = 0;
  (this->PlayingAnimationName).ComparisonIndex = 0;
  (this->PlayingAnimationName).Number = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_HUD_SkillGroup @ 14b67ba80

void __thiscall UDS_VM_HUD_SkillGroup::~UDS_VM_HUD_SkillGroup(UDS_VM_HUD_SkillGroup *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_SkillGroup__6B_;
  pFVar1 = (this->GroundSkillGroup).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_AnimationFinish)
  ;
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

// GetFieldNotificationDescriptor @ 14b67e0c0

IClassDescriptor * __thiscall
UDS_VM_HUD_SkillGroup::GetFieldNotificationDescriptor(UDS_VM_HUD_SkillGroup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_SkillGroup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67ecb0

UClass * __cdecl UDS_VM_HUD_SkillGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_SkillGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_SkillGroup",
               &Z_Registration_Info_UClass_UDS_VM_HUD_SkillGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_SkillGroup,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_SkillGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_SkillGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_SkillGroup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_SkillGroup @ 14b67f330

void __cdecl UDS_VM_HUD_SkillGroup::StaticRegisterNativesUDS_VM_HUD_SkillGroup(void)

{
  return;
}

// EnableGroundWalkSkillGroup @ 14bf4f1b0

void __thiscall UDS_VM_HUD_SkillGroup::EnableGroundWalkSkillGroup(UDS_VM_HUD_SkillGroup *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_VM_W_CommonSkillSlot *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->GroundSkillGroup).AllocatorInstance.Data;
  iVar2 = (this->GroundSkillGroup).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->GroundSkillGroup).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_VM_W_CommonSkillSlot>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this_00 = *(UDS_VM_W_CommonSkillSlot **)pFVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UDS_VM_W_CommonSkillSlot::SetIsButtonDisabled(this_00,false);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// GetGroundSkillGroupVisibility @ 14bf57640

ESlateVisibility __thiscall
UDS_VM_HUD_SkillGroup::GetGroundSkillGroupVisibility
          (UDS_VM_HUD_SkillGroup *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_CharStateData *pUVar2;
  ESlateVisibility EVar3;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *this_00;
  FWeakObjectPtr local_res10;
  EDS_CharState local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    this_00 = &this->CharStateData;
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_res18[0] = Mount|AirWalk|Swim;
    bVar1 = UDS_CharStateData::HasCharState(pUVar2,local_res18);
    if (!bVar1) {
      pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_res18[0]._0_4_ = AutoMove|Shield;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)local_res18);
      if (!bVar1) {
        pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_res18[0] = CONCAT44(local_res18[0]._4_4_,0x13);
        bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)local_res18);
        EVar3 = Collapsed;
        if (!bVar1) {
          EVar3 = SelfHitTestInvisible;
        }
        return EVar3;
      }
    }
  }
  return Collapsed;
}

// InitViewModel @ 14bf5a930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_HUD_SkillGroup::InitViewModel(UDS_VM_HUD_SkillGroup *this)

{
  int *piVar1;
  TArray<TObjectPtr<UDS_VM_W_CommonSkillSlot>,TSizedDefaultAllocator<32>_> *pTVar2;
  FDS_EventDelegate<int> *this_00;
  bool bVar3;
  int iVar4;
  UDS_VM_HUD_SkillSlot *pUVar5;
  UDS_VM_W_Avoid *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UDS_VM_W_AirWalk *pUVar9;
  UDS_VM_SwimControl *pUVar10;
  UDS_VM_MountControl *pUVar11;
  UDS_VM_SkillModeControl *pUVar12;
  UDS_InputEvent *pUVar13;
  UDS_EventManager *this_01;
  UDS_LogManager *pUVar14;
  UDS_MountEvent *pUVar15;
  UObject *pUVar16;
  longlong *plVar17;
  undefined1 auStackY_238 [32];
  undefined1 local_208 [24];
  undefined8 uStack_1f0;
  FWeakObjectPtr local_1e8 [2];
  code *local_1d8;
  ulonglong uStack_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pTVar2 = &this->GroundSkillGroup;
  piVar1 = &(this->GroundSkillGroup).ArrayMax;
  (this->GroundSkillGroup).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if ((this->VM_W_DefaultSkill_1).field0_0x0.DebugPtr == (UDS_VM_HUD_SkillSlot *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_SkillSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_W_DefaultSkill_1).field0_0x0.DebugPtr = pUVar5;
    iVar4 = (this->GroundSkillGroup).ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->GroundSkillGroup).ArrayNum = iVar4 + 1;
    pUVar5 = (this->VM_W_DefaultSkill_1).field0_0x0.DebugPtr;
    *(UDS_VM_HUD_SkillSlot **)((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 8) = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  if ((this->VM_W_DefaultSkill_2).field0_0x0.DebugPtr == (UDS_VM_HUD_SkillSlot *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_SkillSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_W_DefaultSkill_2).field0_0x0.DebugPtr = pUVar5;
    iVar4 = (this->GroundSkillGroup).ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->GroundSkillGroup).ArrayNum = iVar4 + 1;
    pUVar5 = (this->VM_W_DefaultSkill_2).field0_0x0.DebugPtr;
    *(UDS_VM_HUD_SkillSlot **)((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 8) = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  if ((this->VM_W_DefaultSkill_3).field0_0x0.DebugPtr == (UDS_VM_HUD_SkillSlot *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_SkillSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_W_DefaultSkill_3).field0_0x0.DebugPtr = pUVar5;
    iVar4 = (this->GroundSkillGroup).ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->GroundSkillGroup).ArrayNum = iVar4 + 1;
    pUVar5 = (this->VM_W_DefaultSkill_3).field0_0x0.DebugPtr;
    *(UDS_VM_HUD_SkillSlot **)((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 8) = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  if ((this->VM_W_DefaultSkill_4).field0_0x0.DebugPtr == (UDS_VM_HUD_SkillSlot *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_SkillSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_W_DefaultSkill_4).field0_0x0.DebugPtr = pUVar5;
    iVar4 = (this->GroundSkillGroup).ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->GroundSkillGroup).ArrayNum = iVar4 + 1;
    pUVar5 = (this->VM_W_DefaultSkill_4).field0_0x0.DebugPtr;
    *(UDS_VM_HUD_SkillSlot **)((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 8) = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  if ((this->VM_W_Avoid).field0_0x0.DebugPtr == (UDS_VM_W_Avoid *)0x0) {
    pUVar6 = UDS_ViewModelBase::CreateViewModel<UDS_VM_W_Avoid>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_VM_W_Avoid *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_W_Avoid).field0_0x0.DebugPtr = pUVar6;
    iVar4 = (this->GroundSkillGroup).ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->GroundSkillGroup).ArrayNum = iVar4 + 1;
    pUVar6 = (this->VM_W_Avoid).field0_0x0.DebugPtr;
    *(UDS_VM_W_Avoid **)((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 8) = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_VM_W_Avoid *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
  }
  if ((this->VM_W_TraitSkill).field0_0x0.DebugPtr == (UDS_VM_HUD_SkillSlot *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_SkillSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_W_TraitSkill).field0_0x0.DebugPtr = pUVar5;
    iVar4 = (this->GroundSkillGroup).ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->GroundSkillGroup).ArrayNum = iVar4 + 1;
    pUVar5 = (this->VM_W_TraitSkill).field0_0x0.DebugPtr;
    *(UDS_VM_HUD_SkillSlot **)((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 8) = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  if ((this->VM_W_SpecialSkill).field0_0x0.DebugPtr == (UDS_VM_HUD_SkillSlot *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_SkillSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_W_SpecialSkill).field0_0x0.DebugPtr = pUVar5;
    iVar4 = (this->GroundSkillGroup).ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->GroundSkillGroup).ArrayNum = iVar4 + 1;
    pUVar5 = (this->VM_W_SpecialSkill).field0_0x0.DebugPtr;
    *(UDS_VM_HUD_SkillSlot **)((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 8) = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  if ((this->VM_W_AttackSkill).field0_0x0.DebugPtr == (UDS_VM_HUD_SkillSlot *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_SkillSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_W_AttackSkill).field0_0x0.DebugPtr = pUVar5;
    iVar4 = (this->GroundSkillGroup).ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->GroundSkillGroup).ArrayNum = iVar4 + 1;
    pUVar5 = (this->VM_W_AttackSkill).field0_0x0.DebugPtr;
    *(UDS_VM_HUD_SkillSlot **)((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 8) = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  if ((this->VM_W_AirWalk).field0_0x0.DebugPtr == (UDS_VM_W_AirWalk *)0x0) {
    local_208._0_4_ = 0;
    local_208._4_4_ = 0;
    pUVar7 = Z_Construct_UClass_UDS_VM_W_AirWalk_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UDS_VM_W_AirWalk_NoRegister();
    CheckIsClassChildOf_Internal(pUVar8,pUVar7);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_1c8._56_8_ = (UPackage *)0x0;
    local_1c8._16_4_ = 0;
    local_1c8._20_4_ = 0;
    local_1c8._24_4_ = RF_Transient;
    local_1c8._40_8_ = (UObject *)0x0;
    local_1c8[0x20] = false;
    local_1c8._8_8_ = this;
    pUVar9 = (UDS_VM_W_AirWalk *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar17 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar17 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
    if (pUVar9 != (UDS_VM_W_AirWalk *)0x0) {
      *(undefined1 *)((longlong)&pUVar9->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_VM_W_AirWalk *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_W_AirWalk).field0_0x0.DebugPtr = pUVar9;
  }
  if ((this->VM_SwimControl_Surface).field0_0x0.DebugPtr == (UDS_VM_SwimControl *)0x0) {
    pUVar10 = UDS_ViewModelBase::CreateViewModel<UDS_VM_SwimControl>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UDS_VM_SwimControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->VM_SwimControl_Surface).field0_0x0.DebugPtr = pUVar10;
  }
  if ((this->VM_SwimControl_Submerge).field0_0x0.DebugPtr == (UDS_VM_SwimControl *)0x0) {
    pUVar10 = UDS_ViewModelBase::CreateViewModel<UDS_VM_SwimControl>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UDS_VM_SwimControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->VM_SwimControl_Submerge).field0_0x0.DebugPtr = pUVar10;
  }
  if ((this->VM_MountControl).field0_0x0.DebugPtr == (UDS_VM_MountControl *)0x0) {
    local_208._0_4_ = 0;
    local_208._4_4_ = 0;
    pUVar7 = Z_Construct_UClass_UDS_VM_MountControl_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UDS_VM_MountControl_NoRegister();
    CheckIsClassChildOf_Internal(pUVar8,pUVar7);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_1c8._56_8_ = (UPackage *)0x0;
    local_1c8._16_4_ = 0;
    local_1c8._20_4_ = 0;
    local_1c8._24_4_ = RF_Transient;
    local_1c8._40_8_ = (UObject *)0x0;
    local_1c8[0x20] = false;
    local_1c8._8_8_ = this;
    pUVar11 = (UDS_VM_MountControl *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar17 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar17 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
    if (pUVar11 != (UDS_VM_MountControl *)0x0) {
      *(undefined1 *)((longlong)&pUVar11->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar11 != (UDS_VM_MountControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    (this->VM_MountControl).field0_0x0.DebugPtr = pUVar11;
  }
  if ((this->VM_SkillModeControl).field0_0x0.DebugPtr == (UDS_VM_SkillModeControl *)0x0) {
    local_208._0_4_ = 0;
    local_208._4_4_ = 0;
    pUVar7 = Z_Construct_UClass_UDS_VM_SkillModeControl_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UDS_VM_SkillModeControl_NoRegister();
    CheckIsClassChildOf_Internal(pUVar8,pUVar7);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_1c8._56_8_ = (UPackage *)0x0;
    local_1c8._16_4_ = 0;
    local_1c8._20_4_ = 0;
    local_1c8._24_4_ = RF_Transient;
    local_1c8._40_8_ = (UObject *)0x0;
    local_1c8[0x20] = false;
    local_1c8._8_8_ = this;
    pUVar12 = (UDS_VM_SkillModeControl *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar17 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar17 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
    if (pUVar12 != (UDS_VM_SkillModeControl *)0x0) {
      *(undefined1 *)((longlong)&pUVar12->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 != (UDS_VM_SkillModeControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (this->VM_SkillModeControl).field0_0x0.DebugPtr = pUVar12;
  }
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  local_208._16_8_ = OnMainCharChanged;
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_HUD_SkillGroup>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (UDS_VM_HUD_SkillGroup *)local_208,(pmf_b5781b3d *)this);
  pUVar13 = UDS_InputEvent::GetEvent();
  if (pUVar13 != (UDS_InputEvent *)0x0) {
    uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
    local_208._16_8_ = OnChangedInputDeviceType;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar13->OnChangeInputDeviceType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputDeviceType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_HUD_SkillGroup>
              (&pUVar13->OnChangeInputDeviceType,(UDS_VM_HUD_SkillGroup *)local_208,
               (pmf_aa5ecd33 *)this);
  }
  this_01 = UDS_EventManager::GetInst();
  if (this_01 != (UDS_EventManager *)0x0) {
    if ((char)this_01->_padding_ == '\x01') {
      pUVar14 = UDS_LogManager::GetInst();
      if (pUVar14 != (UDS_LogManager *)0x0) {
        pUVar14 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar14,1,Warning,local_148.Ptr,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pUVar15 = UDS_EventManager::GetEventInternal<UDS_MountEvent>(this_01);
      if (pUVar15 != (UDS_MountEvent *)0x0) {
        this_00 = &pUVar15->OnChangedSelectedMount;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
        uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
        local_208._16_8_ = OnChangedMount;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
        TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_VM_HUD_SkillGroup>
                  ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
                   this_00,(UDS_VM_HUD_SkillGroup *)local_208,(pmf_06fab18f *)this);
      }
    }
  }
  UDS_PlayerData::GetData((ulong64)local_1e8,UDS_PlayerData::MainPlayerEntityID,false);
  bVar3 = FWeakObjectPtr::IsValid(local_1e8);
  if (bVar3) {
    FWeakObjectPtr::Get(local_1e8);
    UDS_CharInfoData::GetData((ulong64)local_208);
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_208);
    if (bVar3) {
      pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_208);
      uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
      local_208._16_8_ = OnChangedWeaponType;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar16[7].field_0x10,this);
      local_1d8 = (code *)local_208._16_8_;
      uStack_1d0 = uStack_1f0;
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_WeaponType),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_VM_HUD_SkillGroup>
                (&pUVar16[7].field_0x10,(UDS_VM_HUD_SkillGroup *)(local_208 + 0x10),
                 (pmf_91d15458 *)this);
    }
  }
  RefreshSkillList(this);
  return;
}

// OnAnimationFinished @ 14bf5ef20

void __thiscall
UDS_VM_HUD_SkillGroup::OnAnimationFinished
          (UDS_VM_HUD_SkillGroup *this,FDS_WidgetAnimationEventField *param_1)

{
  ESlateVisibility EVar1;
  FName local_18;
  int local_10;
  
  EVar1 = this->DesiredVisibilityState;
  (this->PlayingAnimationName).ComparisonIndex = 0;
  local_10 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.FieldName;
  (this->PlayingAnimationName).Number = 0;
  if (this->Vis_LandSkillGroup != EVar1) {
    this->Vis_LandSkillGroup = EVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnChangedCharState @ 14bf605f0

void __thiscall
UDS_VM_HUD_SkillGroup::OnChangedCharState
          (UDS_VM_HUD_SkillGroup *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    ShowAnimation(this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_res10[0]);
  }
  return;
}

// OnChangedInputDeviceType @ 14bf607e0

void __thiscall
UDS_VM_HUD_SkillGroup::OnChangedInputDeviceType
          (UDS_VM_HUD_SkillGroup *this,EDS_InputDeviceType *param_1)

{
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *this_00;
  UDS_VM_SwimControl *pUVar1;
  UDS_VM_MountControl *this_01;
  UDS_VM_SkillModeControl *this_02;
  UDS_VM_W_Avoid *this_03;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_04;
  UObject *pUVar7;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  FWeakObjectPtr FStackX_8;
  undefined1 auStackX_10 [24];
  TSharedPtr<FDS_ViewModelContext,1> TStack_e8;
  TSharedPtr<FDS_ViewModelContext,1> TStack_d8;
  FName FStack_c8;
  int iStack_c0;
  TSharedPtr<FDS_ViewModelContext_SwimControl,1> TStack_b8;
  TSharedPtr<FDS_ViewModelContext_SwimControl,1> TStack_a8;
  TSharedPtr<FDS_ViewModelContext,1> TStack_98;
  TSharedPtr<FDS_ViewModelContext,1> TStack_88;
  TSharedPtr<FDS_ViewModelContext,1> TStack_78;
  TSharedPtr<FDS_ViewModelContext,1> TStack_68;
  TSharedPtr<FDS_ViewModelContext,1> TStack_58;
  TSharedPtr<FDS_ViewModelContext,1> TStack_48;
  code *pcStack_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  SetSkillSlot(this,0,&this->VM_W_AttackSkill,0,true);
  SetSkillSlot(this,1,&this->VM_W_DefaultSkill_1,1,true);
  SetSkillSlot(this,2,&this->VM_W_DefaultSkill_2,2,true);
  SetSkillSlot(this,3,&this->VM_W_DefaultSkill_3,1,true);
  SetSkillSlot(this,4,&this->VM_W_DefaultSkill_4,2,true);
  SetSkillSlot(this,5,&this->VM_W_TraitSkill,0,true);
  SetSkillSlot(this,6,&this->VM_W_SpecialSkill,0,true);
  if ((this->VM_SwimControl_Surface).field0_0x0.DebugPtr != (UDS_VM_SwimControl *)0x0) {
    MakeContext<FDS_ViewModelContext_SwimControl>(&TStack_b8);
    if (TStack_b8.Object != (FDS_ViewModelContext_SwimControl *)0x0) {
      (TStack_b8.Object)->SwimControlType = Surface;
      pUVar1 = (this->VM_SwimControl_Surface).field0_0x0.DebugPtr;
      TStack_78.Object = (FDS_ViewModelContext *)TStack_b8.Object;
      TStack_78.SharedReferenceCount.ReferenceController =
           TStack_b8.SharedReferenceCount.ReferenceController;
      if (TStack_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&TStack_78);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_b8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_SwimControl_Submerge).field0_0x0.DebugPtr != (UDS_VM_SwimControl *)0x0) {
    MakeContext<FDS_ViewModelContext_SwimControl>(&TStack_a8);
    if (TStack_a8.Object != (FDS_ViewModelContext_SwimControl *)0x0) {
      (TStack_a8.Object)->SwimControlType = Submerge;
      pUVar1 = (this->VM_SwimControl_Submerge).field0_0x0.DebugPtr;
      TStack_68.Object = (FDS_ViewModelContext *)TStack_a8.Object;
      TStack_68.SharedReferenceCount.ReferenceController =
           TStack_a8.SharedReferenceCount.ReferenceController;
      if (TStack_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&TStack_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_a8.SharedReferenceCount.ReferenceController);
  }
  pFVar10 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_MountControl).field0_0x0.DebugPtr != (UDS_VM_MountControl *)0x0) {
    pFVar5 = ::operator_new(0x20);
    pFVar9 = pFVar10;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
      (pFVar5->ViewModelName).ComparisonIndex = 0;
      (pFVar5->ViewModelName).Number = 0;
      pFVar5->_padding_ = (longlong)&___7FDS_VMContext_MountControl__6B_;
      pFVar9 = pFVar5;
    }
    pFVar5 = ::operator_new(0x20);
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar5->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_VMContext_MountControl__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar9;
      pFVar10 = pFVar5;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar6 = FDS_VMContext_MountControl::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar6;
    this_04 = UDS_ViewModelContextManager::GetInst();
    if (this_04 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar10->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
        UNLOCK();
      }
      TStack_98.Object = pFVar9;
      TStack_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      UDS_ViewModelContextManager::RegisterContext(this_04,&TStack_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_98.SharedReferenceCount.ReferenceController);
    }
    this_01 = (this->VM_MountControl).field0_0x0.DebugPtr;
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    TStack_d8.Object = pFVar9;
    TStack_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&TStack_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
  }
  if ((this->VM_SkillModeControl).field0_0x0.DebugPtr != (UDS_VM_SkillModeControl *)0x0) {
    MakeContext<FDS_ViewModelContext>(&TStack_88);
    if (TStack_88.Object != (FDS_ViewModelContext *)0x0) {
      this_02 = (this->VM_SkillModeControl).field0_0x0.DebugPtr;
      TStack_58.Object = TStack_88.Object;
      TStack_58.SharedReferenceCount.ReferenceController =
           TStack_88.SharedReferenceCount.ReferenceController;
      if (TStack_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&TStack_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_88.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_W_Avoid).field0_0x0.DebugPtr != (UDS_VM_W_Avoid *)0x0) {
    MakeContext<FDS_ViewModelContext>(&TStack_e8);
    if (TStack_e8.Object != (FDS_ViewModelContext *)0x0) {
      if ((TStack_e8.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (TStack_e8.Object)->ViewModelTemplateKey = W_Avoid;
      this_03 = (this->VM_W_Avoid).field0_0x0.DebugPtr;
      TStack_48.Object = TStack_e8.Object;
      TStack_48.SharedReferenceCount.ReferenceController =
           TStack_e8.SharedReferenceCount.ReferenceController;
      if (TStack_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_03,&TStack_48);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_e8.SharedReferenceCount.ReferenceController);
  }
  this_00 = &this->CharStateData;
  bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar4) {
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[7].field_0x20,this);
  }
  FVar3 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.FieldName;
  if (this->Vis_LandSkillGroup != SelfHitTestInvisible) {
    iStack_c0 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.BitNumber;
    this->Vis_LandSkillGroup = SelfHitTestInvisible;
    FStack_c8 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_c8);
  }
  UDS_PlayerData::GetData((ulong64)&FStackX_8,UDS_PlayerData::MainPlayerEntityID,false);
  bVar4 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar4) {
    FWeakObjectPtr::Get(&FStackX_8);
    TVar8 = UDS_CharStateData::GetData((ulong64)auStackX_10);
                    /* WARNING: Load size is inaccurate */
    this_00->WeakPtr = *TVar8.WeakPtr;
    bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[7].field_0x20,this);
      TStack_d8.SharedReferenceCount.ReferenceController =
           TStack_d8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      TStack_d8.Object = (FDS_ViewModelContext *)OnChangedCharState;
      pcStack_38 = OnChangedCharState;
      pTStack_30 = TStack_d8.SharedReferenceCount.ReferenceController;
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_VM_HUD_SkillGroup>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                  *)&pUVar7[7].field_0x20,(UDS_VM_HUD_SkillGroup *)(auStackX_10 + 8),
                 (pmf_f4b6bbfa *)this);
    }
  }
  return;
}

// OnChangedMount @ 14bf608e0

void __thiscall UDS_VM_HUD_SkillGroup::OnChangedMount(UDS_VM_HUD_SkillGroup *this,int param_1)

{
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *this_00;
  UDS_VM_SwimControl *pUVar1;
  UDS_VM_MountControl *this_01;
  UDS_VM_SkillModeControl *this_02;
  UDS_VM_W_Avoid *this_03;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_04;
  UObject *pUVar7;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  FWeakObjectPtr FStackX_8;
  undefined1 auStackX_10 [24];
  TSharedPtr<FDS_ViewModelContext,1> TStack_e8;
  TSharedPtr<FDS_ViewModelContext,1> TStack_d8;
  FName FStack_c8;
  int iStack_c0;
  TSharedPtr<FDS_ViewModelContext_SwimControl,1> TStack_b8;
  TSharedPtr<FDS_ViewModelContext_SwimControl,1> TStack_a8;
  TSharedPtr<FDS_ViewModelContext,1> TStack_98;
  TSharedPtr<FDS_ViewModelContext,1> TStack_88;
  TSharedPtr<FDS_ViewModelContext,1> TStack_78;
  TSharedPtr<FDS_ViewModelContext,1> TStack_68;
  TSharedPtr<FDS_ViewModelContext,1> TStack_58;
  TSharedPtr<FDS_ViewModelContext,1> TStack_48;
  code *pcStack_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  if (param_1 == 0) {
    return;
  }
  SetSkillSlot(this,0,&this->VM_W_AttackSkill,0,true);
  SetSkillSlot(this,1,&this->VM_W_DefaultSkill_1,1,true);
  SetSkillSlot(this,2,&this->VM_W_DefaultSkill_2,2,true);
  SetSkillSlot(this,3,&this->VM_W_DefaultSkill_3,1,true);
  SetSkillSlot(this,4,&this->VM_W_DefaultSkill_4,2,true);
  SetSkillSlot(this,5,&this->VM_W_TraitSkill,0,true);
  SetSkillSlot(this,6,&this->VM_W_SpecialSkill,0,true);
  if ((this->VM_SwimControl_Surface).field0_0x0.DebugPtr != (UDS_VM_SwimControl *)0x0) {
    MakeContext<FDS_ViewModelContext_SwimControl>(&TStack_b8);
    if (TStack_b8.Object != (FDS_ViewModelContext_SwimControl *)0x0) {
      (TStack_b8.Object)->SwimControlType = Surface;
      pUVar1 = (this->VM_SwimControl_Surface).field0_0x0.DebugPtr;
      TStack_78.Object = (FDS_ViewModelContext *)TStack_b8.Object;
      TStack_78.SharedReferenceCount.ReferenceController =
           TStack_b8.SharedReferenceCount.ReferenceController;
      if (TStack_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&TStack_78);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_b8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_SwimControl_Submerge).field0_0x0.DebugPtr != (UDS_VM_SwimControl *)0x0) {
    MakeContext<FDS_ViewModelContext_SwimControl>(&TStack_a8);
    if (TStack_a8.Object != (FDS_ViewModelContext_SwimControl *)0x0) {
      (TStack_a8.Object)->SwimControlType = Submerge;
      pUVar1 = (this->VM_SwimControl_Submerge).field0_0x0.DebugPtr;
      TStack_68.Object = (FDS_ViewModelContext *)TStack_a8.Object;
      TStack_68.SharedReferenceCount.ReferenceController =
           TStack_a8.SharedReferenceCount.ReferenceController;
      if (TStack_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&TStack_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_a8.SharedReferenceCount.ReferenceController);
  }
  pFVar10 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_MountControl).field0_0x0.DebugPtr != (UDS_VM_MountControl *)0x0) {
    pFVar5 = ::operator_new(0x20);
    pFVar9 = pFVar10;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
      (pFVar5->ViewModelName).ComparisonIndex = 0;
      (pFVar5->ViewModelName).Number = 0;
      pFVar5->_padding_ = (longlong)&___7FDS_VMContext_MountControl__6B_;
      pFVar9 = pFVar5;
    }
    pFVar5 = ::operator_new(0x20);
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar5->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_VMContext_MountControl__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar9;
      pFVar10 = pFVar5;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar6 = FDS_VMContext_MountControl::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar6;
    this_04 = UDS_ViewModelContextManager::GetInst();
    if (this_04 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar10->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
        UNLOCK();
      }
      TStack_98.Object = pFVar9;
      TStack_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      UDS_ViewModelContextManager::RegisterContext(this_04,&TStack_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_98.SharedReferenceCount.ReferenceController);
    }
    this_01 = (this->VM_MountControl).field0_0x0.DebugPtr;
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    TStack_d8.Object = pFVar9;
    TStack_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&TStack_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
  }
  if ((this->VM_SkillModeControl).field0_0x0.DebugPtr != (UDS_VM_SkillModeControl *)0x0) {
    MakeContext<FDS_ViewModelContext>(&TStack_88);
    if (TStack_88.Object != (FDS_ViewModelContext *)0x0) {
      this_02 = (this->VM_SkillModeControl).field0_0x0.DebugPtr;
      TStack_58.Object = TStack_88.Object;
      TStack_58.SharedReferenceCount.ReferenceController =
           TStack_88.SharedReferenceCount.ReferenceController;
      if (TStack_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&TStack_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_88.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_W_Avoid).field0_0x0.DebugPtr != (UDS_VM_W_Avoid *)0x0) {
    MakeContext<FDS_ViewModelContext>(&TStack_e8);
    if (TStack_e8.Object != (FDS_ViewModelContext *)0x0) {
      if ((TStack_e8.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (TStack_e8.Object)->ViewModelTemplateKey = W_Avoid;
      this_03 = (this->VM_W_Avoid).field0_0x0.DebugPtr;
      TStack_48.Object = TStack_e8.Object;
      TStack_48.SharedReferenceCount.ReferenceController =
           TStack_e8.SharedReferenceCount.ReferenceController;
      if (TStack_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_03,&TStack_48);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_e8.SharedReferenceCount.ReferenceController);
  }
  this_00 = &this->CharStateData;
  bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar4) {
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[7].field_0x20,this);
  }
  FVar3 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.FieldName;
  if (this->Vis_LandSkillGroup != SelfHitTestInvisible) {
    iStack_c0 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.BitNumber;
    this->Vis_LandSkillGroup = SelfHitTestInvisible;
    FStack_c8 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_c8);
  }
  UDS_PlayerData::GetData((ulong64)&FStackX_8,UDS_PlayerData::MainPlayerEntityID,false);
  bVar4 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar4) {
    FWeakObjectPtr::Get(&FStackX_8);
    TVar8 = UDS_CharStateData::GetData((ulong64)auStackX_10);
                    /* WARNING: Load size is inaccurate */
    this_00->WeakPtr = *TVar8.WeakPtr;
    bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[7].field_0x20,this);
      TStack_d8.SharedReferenceCount.ReferenceController =
           TStack_d8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      TStack_d8.Object = (FDS_ViewModelContext *)OnChangedCharState;
      pcStack_38 = OnChangedCharState;
      pTStack_30 = TStack_d8.SharedReferenceCount.ReferenceController;
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_VM_HUD_SkillGroup>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                  *)&pUVar7[7].field_0x20,(UDS_VM_HUD_SkillGroup *)(auStackX_10 + 8),
                 (pmf_f4b6bbfa *)this);
    }
  }
  return;
}

// OnChangedWeaponType @ 14bf61000

void __thiscall
UDS_VM_HUD_SkillGroup::OnChangedWeaponType(UDS_VM_HUD_SkillGroup *this,EDS_WeaponType param_1)

{
  UDS_VM_W_Avoid *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  SetSkillSlot(this,0,&this->VM_W_AttackSkill,0,true);
  if ((this->VM_W_Avoid).field0_0x0.DebugPtr != (UDS_VM_W_Avoid *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_28);
    if (local_28.Object != (FDS_ViewModelContext *)0x0) {
      if ((local_28.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (local_28.Object)->ViewModelTemplateKey = W_Avoid;
      this_00 = (this->VM_W_Avoid).field0_0x0.DebugPtr;
      local_18.Object = local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnCloseInit @ 14bf633c0

void __thiscall UDS_VM_HUD_SkillGroup::OnCloseInit(UDS_VM_HUD_SkillGroup *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_InputEvent *pUVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
  }
  pUVar3 = UDS_InputEvent::GetEvent();
  if (pUVar3 != (UDS_InputEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangeInputDeviceType,this);
  }
  UDS_PlayerData::GetData((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    FWeakObjectPtr::Get(&local_res8);
    UDS_CharInfoData::GetData((ulong64)&local_res10);
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res10);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x10,this);
    }
  }
  return;
}

// OnMainCharChanged @ 14bf64c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_SkillGroup::OnMainCharChanged
          (UDS_VM_HUD_SkillGroup *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *this_00;
  UDS_VM_SwimControl *pUVar1;
  UDS_VM_MountControl *this_01;
  UDS_VM_SkillModeControl *this_02;
  UDS_VM_W_Avoid *this_03;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_04;
  UObject *pUVar7;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  FWeakObjectPtr FStackX_8;
  undefined1 auStackX_10 [24];
  TSharedPtr<FDS_ViewModelContext,1> TStack_e8;
  TSharedPtr<FDS_ViewModelContext,1> TStack_d8;
  FName FStack_c8;
  int iStack_c0;
  TSharedPtr<FDS_ViewModelContext_SwimControl,1> TStack_b8;
  TSharedPtr<FDS_ViewModelContext_SwimControl,1> TStack_a8;
  TSharedPtr<FDS_ViewModelContext,1> TStack_98;
  TSharedPtr<FDS_ViewModelContext,1> TStack_88;
  TSharedPtr<FDS_ViewModelContext,1> TStack_78;
  TSharedPtr<FDS_ViewModelContext,1> TStack_68;
  TSharedPtr<FDS_ViewModelContext,1> TStack_58;
  TSharedPtr<FDS_ViewModelContext,1> TStack_48;
  code *pcStack_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  SetSkillSlot(this,0,&this->VM_W_AttackSkill,0,true);
  SetSkillSlot(this,1,&this->VM_W_DefaultSkill_1,1,true);
  SetSkillSlot(this,2,&this->VM_W_DefaultSkill_2,2,true);
  SetSkillSlot(this,3,&this->VM_W_DefaultSkill_3,1,true);
  SetSkillSlot(this,4,&this->VM_W_DefaultSkill_4,2,true);
  SetSkillSlot(this,5,&this->VM_W_TraitSkill,0,true);
  SetSkillSlot(this,6,&this->VM_W_SpecialSkill,0,true);
  if ((this->VM_SwimControl_Surface).field0_0x0.DebugPtr != (UDS_VM_SwimControl *)0x0) {
    MakeContext<FDS_ViewModelContext_SwimControl>(&TStack_b8);
    if (TStack_b8.Object != (FDS_ViewModelContext_SwimControl *)0x0) {
      (TStack_b8.Object)->SwimControlType = Surface;
      pUVar1 = (this->VM_SwimControl_Surface).field0_0x0.DebugPtr;
      TStack_78.Object = (FDS_ViewModelContext *)TStack_b8.Object;
      TStack_78.SharedReferenceCount.ReferenceController =
           TStack_b8.SharedReferenceCount.ReferenceController;
      if (TStack_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&TStack_78);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_b8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_SwimControl_Submerge).field0_0x0.DebugPtr != (UDS_VM_SwimControl *)0x0) {
    MakeContext<FDS_ViewModelContext_SwimControl>(&TStack_a8);
    if (TStack_a8.Object != (FDS_ViewModelContext_SwimControl *)0x0) {
      (TStack_a8.Object)->SwimControlType = Submerge;
      pUVar1 = (this->VM_SwimControl_Submerge).field0_0x0.DebugPtr;
      TStack_68.Object = (FDS_ViewModelContext *)TStack_a8.Object;
      TStack_68.SharedReferenceCount.ReferenceController =
           TStack_a8.SharedReferenceCount.ReferenceController;
      if (TStack_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&TStack_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_a8.SharedReferenceCount.ReferenceController);
  }
  pFVar10 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_MountControl).field0_0x0.DebugPtr != (UDS_VM_MountControl *)0x0) {
    pFVar5 = ::operator_new(0x20);
    pFVar9 = pFVar10;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
      (pFVar5->ViewModelName).ComparisonIndex = 0;
      (pFVar5->ViewModelName).Number = 0;
      pFVar5->_padding_ = (longlong)&___7FDS_VMContext_MountControl__6B_;
      pFVar9 = pFVar5;
    }
    pFVar5 = ::operator_new(0x20);
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar5->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_VMContext_MountControl__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar9;
      pFVar10 = pFVar5;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar6 = FDS_VMContext_MountControl::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar6;
    this_04 = UDS_ViewModelContextManager::GetInst();
    if (this_04 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar10->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
        UNLOCK();
      }
      TStack_98.Object = pFVar9;
      TStack_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      UDS_ViewModelContextManager::RegisterContext(this_04,&TStack_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_98.SharedReferenceCount.ReferenceController);
    }
    this_01 = (this->VM_MountControl).field0_0x0.DebugPtr;
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    TStack_d8.Object = pFVar9;
    TStack_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&TStack_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
  }
  if ((this->VM_SkillModeControl).field0_0x0.DebugPtr != (UDS_VM_SkillModeControl *)0x0) {
    MakeContext<FDS_ViewModelContext>(&TStack_88);
    if (TStack_88.Object != (FDS_ViewModelContext *)0x0) {
      this_02 = (this->VM_SkillModeControl).field0_0x0.DebugPtr;
      TStack_58.Object = TStack_88.Object;
      TStack_58.SharedReferenceCount.ReferenceController =
           TStack_88.SharedReferenceCount.ReferenceController;
      if (TStack_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&TStack_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_88.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_W_Avoid).field0_0x0.DebugPtr != (UDS_VM_W_Avoid *)0x0) {
    MakeContext<FDS_ViewModelContext>(&TStack_e8);
    if (TStack_e8.Object != (FDS_ViewModelContext *)0x0) {
      if ((TStack_e8.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (TStack_e8.Object)->ViewModelTemplateKey = W_Avoid;
      this_03 = (this->VM_W_Avoid).field0_0x0.DebugPtr;
      TStack_48.Object = TStack_e8.Object;
      TStack_48.SharedReferenceCount.ReferenceController =
           TStack_e8.SharedReferenceCount.ReferenceController;
      if (TStack_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_03,&TStack_48);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_e8.SharedReferenceCount.ReferenceController);
  }
  this_00 = &this->CharStateData;
  bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar4) {
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[7].field_0x20,this);
  }
  FVar3 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.FieldName;
  if (this->Vis_LandSkillGroup != SelfHitTestInvisible) {
    iStack_c0 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.BitNumber;
    this->Vis_LandSkillGroup = SelfHitTestInvisible;
    FStack_c8 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_c8);
  }
  UDS_PlayerData::GetData((ulong64)&FStackX_8,UDS_PlayerData::MainPlayerEntityID,false);
  bVar4 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar4) {
    FWeakObjectPtr::Get(&FStackX_8);
    TVar8 = UDS_CharStateData::GetData((ulong64)auStackX_10);
                    /* WARNING: Load size is inaccurate */
    this_00->WeakPtr = *TVar8.WeakPtr;
    bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[7].field_0x20,this);
      TStack_d8.SharedReferenceCount.ReferenceController =
           TStack_d8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      TStack_d8.Object = (FDS_ViewModelContext *)OnChangedCharState;
      pcStack_38 = OnChangedCharState;
      pTStack_30 = TStack_d8.SharedReferenceCount.ReferenceController;
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_VM_HUD_SkillGroup>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                  *)&pUVar7[7].field_0x20,(UDS_VM_HUD_SkillGroup *)(auStackX_10 + 8),
                 (pmf_f4b6bbfa *)this);
    }
  }
  return;
}

// OnValidAnimation @ 14bf72a90

void __thiscall
UDS_VM_HUD_SkillGroup::OnValidAnimation(UDS_VM_HUD_SkillGroup *this,FName param_1,bool param_2)

{
  FName *pFVar1;
  FName local_res20;
  FName local_18;
  int local_10;
  
  if (!param_2) {
    pFVar1 = ::FName::FName(&local_res20,"Close_Anim");
    local_10 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.FieldName;
    if (param_1 == *pFVar1) {
      if (this->Vis_LandSkillGroup == Collapsed) {
        return;
      }
      this->Vis_LandSkillGroup = Collapsed;
    }
    else {
      pFVar1 = ::FName::FName(&local_res20,"Open_Anim");
      local_10 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.FieldName;
      if (param_1 != *pFVar1) {
        return;
      }
      if (this->Vis_LandSkillGroup == SelfHitTestInvisible) {
        return;
      }
      this->Vis_LandSkillGroup = SelfHitTestInvisible;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// RefreshMountControl @ 14bf772f0

void __thiscall UDS_VM_HUD_SkillGroup::RefreshMountControl(UDS_VM_HUD_SkillGroup *this)

{
  UDS_VM_MountControl *this_00;
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_MountControl).field0_0x0.DebugPtr != (UDS_VM_MountControl *)0x0) {
    pFVar3 = ::operator_new(0x20);
    pFVar5 = (FDS_ViewModelContext *)0x0;
    pFVar6 = pFVar5;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_VMContext_MountControl__6B_;
      pFVar6 = pFVar3;
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_VMContext_MountControl__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar6;
      pFVar5 = pFVar3;
    }
    if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = FDS_VMContext_MountControl::StaticStruct();
    *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar4;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar5->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_28.Object = pFVar6;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    this_00 = (this->VM_MountControl).field0_0x0.DebugPtr;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar5->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_18.Object = pFVar6;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar5);
  }
  return;
}

// RefreshSkillList @ 14bf775a0

void __thiscall UDS_VM_HUD_SkillGroup::RefreshSkillList(UDS_VM_HUD_SkillGroup *this)

{
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *this_00;
  UDS_VM_SwimControl *pUVar1;
  UDS_VM_MountControl *this_01;
  UDS_VM_SkillModeControl *this_02;
  UDS_VM_W_Avoid *this_03;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_04;
  UObject *pUVar7;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [24];
  TSharedPtr<FDS_ViewModelContext,1> local_e8;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  FName local_c8;
  int local_c0;
  TSharedPtr<FDS_ViewModelContext_SwimControl,1> local_b8;
  TSharedPtr<FDS_ViewModelContext_SwimControl,1> local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  code *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  SetSkillSlot(this,0,&this->VM_W_AttackSkill,0,true);
  SetSkillSlot(this,1,&this->VM_W_DefaultSkill_1,1,true);
  SetSkillSlot(this,2,&this->VM_W_DefaultSkill_2,2,true);
  SetSkillSlot(this,3,&this->VM_W_DefaultSkill_3,1,true);
  SetSkillSlot(this,4,&this->VM_W_DefaultSkill_4,2,true);
  SetSkillSlot(this,5,&this->VM_W_TraitSkill,0,true);
  SetSkillSlot(this,6,&this->VM_W_SpecialSkill,0,true);
  if ((this->VM_SwimControl_Surface).field0_0x0.DebugPtr != (UDS_VM_SwimControl *)0x0) {
    MakeContext<FDS_ViewModelContext_SwimControl>(&local_b8);
    if (local_b8.Object != (FDS_ViewModelContext_SwimControl *)0x0) {
      (local_b8.Object)->SwimControlType = Surface;
      pUVar1 = (this->VM_SwimControl_Surface).field0_0x0.DebugPtr;
      local_78.Object = (FDS_ViewModelContext *)local_b8.Object;
      local_78.SharedReferenceCount.ReferenceController =
           local_b8.SharedReferenceCount.ReferenceController;
      if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_78);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_SwimControl_Submerge).field0_0x0.DebugPtr != (UDS_VM_SwimControl *)0x0) {
    MakeContext<FDS_ViewModelContext_SwimControl>(&local_a8);
    if (local_a8.Object != (FDS_ViewModelContext_SwimControl *)0x0) {
      (local_a8.Object)->SwimControlType = Submerge;
      pUVar1 = (this->VM_SwimControl_Submerge).field0_0x0.DebugPtr;
      local_68.Object = (FDS_ViewModelContext *)local_a8.Object;
      local_68.SharedReferenceCount.ReferenceController =
           local_a8.SharedReferenceCount.ReferenceController;
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  pFVar10 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_MountControl).field0_0x0.DebugPtr != (UDS_VM_MountControl *)0x0) {
    pFVar5 = ::operator_new(0x20);
    pFVar9 = pFVar10;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
      (pFVar5->ViewModelName).ComparisonIndex = 0;
      (pFVar5->ViewModelName).Number = 0;
      pFVar5->_padding_ = (longlong)&___7FDS_VMContext_MountControl__6B_;
      pFVar9 = pFVar5;
    }
    pFVar5 = ::operator_new(0x20);
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar5->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_VMContext_MountControl__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar9;
      pFVar10 = pFVar5;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar6 = FDS_VMContext_MountControl::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar6;
    this_04 = UDS_ViewModelContextManager::GetInst();
    if (this_04 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar10->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_98.Object = pFVar9;
      local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      UDS_ViewModelContextManager::RegisterContext(this_04,&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
    }
    this_01 = (this->VM_MountControl).field0_0x0.DebugPtr;
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_d8.Object = pFVar9;
    local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
  }
  if ((this->VM_SkillModeControl).field0_0x0.DebugPtr != (UDS_VM_SkillModeControl *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_88);
    if (local_88.Object != (FDS_ViewModelContext *)0x0) {
      this_02 = (this->VM_SkillModeControl).field0_0x0.DebugPtr;
      local_58.Object = local_88.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_88.SharedReferenceCount.ReferenceController;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&local_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_W_Avoid).field0_0x0.DebugPtr != (UDS_VM_W_Avoid *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_e8);
    if (local_e8.Object != (FDS_ViewModelContext *)0x0) {
      if ((local_e8.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (local_e8.Object)->ViewModelTemplateKey = W_Avoid;
      this_03 = (this->VM_W_Avoid).field0_0x0.DebugPtr;
      local_48.Object = local_e8.Object;
      local_48.SharedReferenceCount.ReferenceController =
           local_e8.SharedReferenceCount.ReferenceController;
      if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_03,&local_48);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
  }
  this_00 = &this->CharStateData;
  bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar4) {
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[7].field_0x20,this);
  }
  FVar3 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.FieldName;
  if (this->Vis_LandSkillGroup != SelfHitTestInvisible) {
    local_c0 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.BitNumber;
    this->Vis_LandSkillGroup = SelfHitTestInvisible;
    local_c8 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  }
  UDS_PlayerData::GetData((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,false);
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar4) {
    FWeakObjectPtr::Get(&local_res8);
    TVar8 = UDS_CharStateData::GetData((ulong64)local_res10);
                    /* WARNING: Load size is inaccurate */
    this_00->WeakPtr = *TVar8.WeakPtr;
    bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[7].field_0x20,this);
      local_d8.SharedReferenceCount.ReferenceController =
           local_d8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      local_d8.Object = (FDS_ViewModelContext *)OnChangedCharState;
      local_38 = OnChangedCharState;
      pTStack_30 = local_d8.SharedReferenceCount.ReferenceController;
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_VM_HUD_SkillGroup>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                  *)&pUVar7[7].field_0x20,(UDS_VM_HUD_SkillGroup *)(local_res10 + 8),
                 (pmf_f4b6bbfa *)this);
    }
  }
  return;
}

// RefreshSkillModeControl @ 14bf77e30

void __thiscall UDS_VM_HUD_SkillGroup::RefreshSkillModeControl(UDS_VM_HUD_SkillGroup *this)

{
  UDS_VM_SkillModeControl *this_00;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_SkillModeControl).field0_0x0.DebugPtr != (UDS_VM_SkillModeControl *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_28);
    if (local_28.Object != (FDS_ViewModelContext *)0x0) {
      this_00 = (this->VM_SkillModeControl).field0_0x0.DebugPtr;
      local_18.Object = local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RefreshSwimControl @ 14bf78bd0

void __thiscall UDS_VM_HUD_SkillGroup::RefreshSwimControl(UDS_VM_HUD_SkillGroup *this)

{
  UDS_VM_SwimControl *pUVar1;
  FSharedReferencer<1> FVar2;
  TSharedPtr<FDS_ViewModelContext_SwimControl,1> local_18;
  
  if ((this->VM_SwimControl_Surface).field0_0x0.DebugPtr != (UDS_VM_SwimControl *)0x0) {
    MakeContext<FDS_ViewModelContext_SwimControl>(&local_18);
    FVar2.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
    if (local_18.Object != (FDS_ViewModelContext_SwimControl *)0x0) {
      (local_18.Object)->SwimControlType = Surface;
      pUVar1 = (this->VM_SwimControl_Surface).field0_0x0.DebugPtr;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext
                ((UDS_ViewModelBase *)pUVar1,(TSharedPtr<FDS_ViewModelContext,1> *)&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
  }
  if ((this->VM_SwimControl_Submerge).field0_0x0.DebugPtr != (UDS_VM_SwimControl *)0x0) {
    MakeContext<FDS_ViewModelContext_SwimControl>(&local_18);
    if (local_18.Object != (FDS_ViewModelContext_SwimControl *)0x0) {
      (local_18.Object)->SwimControlType = Submerge;
      pUVar1 = (this->VM_SwimControl_Submerge).field0_0x0.DebugPtr;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext
                ((UDS_ViewModelBase *)pUVar1,(TSharedPtr<FDS_ViewModelContext,1> *)&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetSkillSlot @ 14bf7d6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_SkillGroup::SetSkillSlot
          (UDS_VM_HUD_SkillGroup *this,int param_1,TObjectPtr<UDS_VM_HUD_SkillSlot> *param_2,
          int param_3,bool param_4)

{
  longlong lVar1;
  int iVar2;
  UDS_VM_HUD_SkillSlot *this_00;
  code *pcVar3;
  FDS_ViewModelContext_SkillSlot *pFVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UDS_SkillDataSet *this_01;
  FWeakObjectPtr FVar7;
  undefined1 *puVar8;
  undefined1 auStackY_208 [32];
  FWeakObjectPtr local_1d8;
  FWeakObjectPtr local_1d0;
  undefined8 local_1c8;
  TSharedPtr<FDS_ViewModelContext_SkillSlot,1> local_1b8;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  undefined1 local_198 [72];
  int local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_2->field0_0x0).DebugPtr != (UDS_VM_HUD_SkillSlot *)0x0) {
    UDS_PlayerData::GetData((ulong64)&local_1d8,UDS_PlayerData::MainPlayerEntityID,false);
    bVar5 = FWeakObjectPtr::IsValid(&local_1d8);
    if (bVar5) {
      FWeakObjectPtr::Get(&local_1d8);
      TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_1d0);
      bVar5 = FWeakObjectPtr::IsValid(&local_1d0);
      if (bVar5) {
        this_01 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_1d0);
        UDS_SkillDataSet::GetSkillSlotDataMap
                  (this_01,(TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                            *)local_198);
        MakeContext<FDS_ViewModelContext_SkillSlot>(&local_1b8);
        pFVar4 = local_1b8.Object;
        if (local_1b8.Object != (FDS_ViewModelContext_SkillSlot *)0x0) {
          if ((local_1b8.Object == (FDS_ViewModelContext_SkillSlot *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined4 *)&pFVar4->_padding_ = 0x49;
          if (local_198._8_4_ != local_198._52_4_) {
            puVar8 = local_198 + 0x38;
            if ((undefined1 *)local_198._64_8_ != (undefined1 *)0x0) {
              puVar8 = (undefined1 *)local_198._64_8_;
            }
            iVar2 = *(int *)(puVar8 + (ulonglong)(local_150 - 1U & param_1) * 4);
            while (iVar2 != -1) {
              lVar1 = local_198._0_8_ + (longlong)iVar2 * 0x14;
              if (*(int *)(local_198._0_8_ + (longlong)iVar2 * 0x14) == param_1) {
                if (lVar1 != 0) {
                  FVar7 = *(FWeakObjectPtr *)(lVar1 + 4);
                  goto LAB_14bf7d895;
                }
                break;
              }
              iVar2 = *(int *)(lVar1 + 0xc);
            }
          }
          local_1c8 = 0;
          FVar7.ObjectIndex = 0;
          FVar7.ObjectSerialNumber = 0;
LAB_14bf7d895:
          (pFVar4->SkillData).WeakPtr = FVar7;
          pFVar4->StackCountPosition = param_3;
          pFVar4->bShowInputKey = param_4;
          pFVar4->SlotIndex = param_1;
          this_00 = (param_2->field0_0x0).DebugPtr;
          local_1a8.Object = (FDS_ViewModelContext *)local_1b8.Object;
          local_1a8.SharedReferenceCount.ReferenceController =
               local_1b8.SharedReferenceCount.ReferenceController;
          if (local_1b8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_1a8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b8.SharedReferenceCount.ReferenceController);
        local_150 = 0;
        if ((undefined1 *)local_198._64_8_ != (undefined1 *)0x0) {
          FMemory::Free((void *)local_198._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_198);
      }
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_HUD_SkillGroup::SetSkillSlot",0x23,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0xa5,L"Failed to get PlayerData");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
  }
  return;
}

// SetVis_GroundSkillGroup @ 14bf81cc0

void __thiscall
UDS_VM_HUD_SkillGroup::SetVis_GroundSkillGroup(UDS_VM_HUD_SkillGroup *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.FieldName;
  if (this->Vis_LandSkillGroup != param_1) {
    this->Vis_LandSkillGroup = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// ShowAnimation @ 14bf82bc0

void __thiscall
UDS_VM_HUD_SkillGroup::ShowAnimation
          (UDS_VM_HUD_SkillGroup *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  EDS_AnimationEventType *pEVar2;
  FName FVar3;
  bool bVar4;
  UDS_CharStateData *pUVar5;
  FName *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  ESlateVisibility EVar9;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  local_res10 = (FName)param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_res10);
  if (!bVar4) {
    return;
  }
  local_48 = local_res10;
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_48);
  if (bVar4) {
    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    local_res18.ComparisonIndex.Value = 0x10000801;
    local_res18.Number = 0;
    bVar4 = UDS_CharStateData::HasCharState(pUVar5,(EDS_CharState *)&local_res18);
    if (!bVar4) {
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
      local_res18.ComparisonIndex.Value = 6;
      bVar4 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res18);
      if (!bVar4) {
        pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
        local_res18.ComparisonIndex.Value = 0x13;
        bVar4 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res18);
        EVar9 = SelfHitTestInvisible;
        if (!bVar4) goto LAB_14bf82c6c;
      }
    }
  }
  EVar9 = Collapsed;
LAB_14bf82c6c:
  if (EVar9 != this->DesiredVisibilityState) {
    this->DesiredVisibilityState = EVar9;
    ::FName::FName(&local_res20,"Close_Anim");
    FVar3 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.FieldName;
    plVar1 = &this->_padding_;
    if (EVar9 == SelfHitTestInvisible) {
      if (this->Vis_LandSkillGroup != SelfHitTestInvisible) {
        iStack_40 = FFieldNotificationClassDescriptor::Vis_LandSkillGroup.BitNumber;
        this->Vis_LandSkillGroup = SelfHitTestInvisible;
        local_48 = FVar3;
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_48);
      }
      pFVar6 = ::FName::FName(&local_res18,"Open_Anim");
      local_res20 = *pFVar6;
    }
    pEVar2 = &(this->AnimationEvent).AnimationEventType;
    if (this->PlayingAnimationName != (FName)0x0) {
      (this->AnimationEvent).AnimationName = this->PlayingAnimationName;
      *pEVar2 = StopAnimation;
      iStack_40 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_48 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_48);
    }
    this->PlayingAnimationName = local_res20;
    (this->AnimationEvent).AnimationName = local_res20;
    *pEVar2 = PlayForward;
    bVar4 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &(this->AnimationEvent).Delegate_ValidAnimation);
    if (!bVar4) {
      iStack_40 = 0;
      local_48 = (FName)OnValidAnimation;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(this->AnimationEvent).Delegate_ValidAnimation,(FWriteAccessScope *)&local_38);
      local_20 = &(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_HUD_SkillGroup____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[3] = 0;
        local_res18 = (FName)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res18);
        *(FName *)(puVar7 + 4) = local_48;
        puVar7[5] = CONCAT44(uStack_3c,iStack_40);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
    iStack_40 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_48 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  }
  return;
}

// StopAnimation @ 14bf83450

void __thiscall UDS_VM_HUD_SkillGroup::StopAnimation(UDS_VM_HUD_SkillGroup *this,FName *param_1)

{
  FName local_18;
  int local_10;
  
  if (*param_1 != (FName)0x0) {
    (this->AnimationEvent).AnimationName = *param_1;
    (this->AnimationEvent).AnimationEventType = StopAnimation;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

