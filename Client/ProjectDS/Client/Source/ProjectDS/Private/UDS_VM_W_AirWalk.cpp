// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// SetAnimationFinishEvent_WrapperImpl @ 14b709250

void __cdecl UDS_VM_W_AirWalk::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// StaticClass @ 14b709260

UClass * __cdecl UDS_VM_W_AirWalk::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_AirWalk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_AirWalk",
               &Z_Registration_Info_UClass_UDS_VM_W_AirWalk.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_AirWalk,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_AirWalk>,
               InternalVTableHelperCtorCaller<UDS_VM_W_AirWalk>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_AirWalk.InnerSingleton;
}

// UDS_VM_W_AirWalk @ 14b710860

UDS_VM_W_AirWalk * __thiscall
UDS_VM_W_AirWalk::UDS_VM_W_AirWalk(UDS_VM_W_AirWalk *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->DesiredVisibilityState = Hidden;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_AirWalk__6B_;
  this->CurrentEntityID = 0;
  this->CurrentEntityTableID = 0;
  this->bAnimationStart = false;
  (this->AirWalkCloseTimerHandle).Handle = 0;
  (this->Slot_Jump).field0_0x0.DebugPtr = (UDS_VM_W_AirWalkSlot_Jump *)0x0;
  (this->Slot_Hovering).field0_0x0.DebugPtr = (UDS_VM_W_AirWalkSlot *)0x0;
  (this->Slot_Dash).field0_0x0.DebugPtr = (UDS_VM_W_AirWalkSlot *)0x0;
  (this->Slot_Attack).field0_0x0.DebugPtr = (UDS_VM_W_AirWalkSlot_Attack *)0x0;
  (this->Slot_DashAttack).field0_0x0.DebugPtr = (UDS_VM_W_AirWalkSlot *)0x0;
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
  (this->AirwalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PlayingAnimationName).ComparisonIndex = 0;
  (this->PlayingAnimationName).Number = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_W_AirWalk @ 14b710980

UDS_VM_W_AirWalk * __thiscall
UDS_VM_W_AirWalk::UDS_VM_W_AirWalk(UDS_VM_W_AirWalk *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->DesiredVisibilityState = Hidden;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_AirWalk__6B_;
  this->CurrentEntityID = 0;
  this->CurrentEntityTableID = 0;
  this->bAnimationStart = false;
  (this->AirWalkCloseTimerHandle).Handle = 0;
  (this->Slot_Jump).field0_0x0.DebugPtr = (UDS_VM_W_AirWalkSlot_Jump *)0x0;
  (this->Slot_Hovering).field0_0x0.DebugPtr = (UDS_VM_W_AirWalkSlot *)0x0;
  (this->Slot_Dash).field0_0x0.DebugPtr = (UDS_VM_W_AirWalkSlot *)0x0;
  (this->Slot_Attack).field0_0x0.DebugPtr = (UDS_VM_W_AirWalkSlot_Attack *)0x0;
  (this->Slot_DashAttack).field0_0x0.DebugPtr = (UDS_VM_W_AirWalkSlot *)0x0;
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
  (this->AirwalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PlayingAnimationName).ComparisonIndex = 0;
  (this->PlayingAnimationName).Number = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_W_AirWalk @ 14b712ff0

void __thiscall UDS_VM_W_AirWalk::~UDS_VM_W_AirWalk(UDS_VM_W_AirWalk *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_AirWalk__6B_;
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
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716980

IClassDescriptor * __thiscall
UDS_VM_W_AirWalk::GetFieldNotificationDescriptor(UDS_VM_W_AirWalk *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_AirWalk::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b717650

UClass * __cdecl UDS_VM_W_AirWalk::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_AirWalk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_AirWalk",
               &Z_Registration_Info_UClass_UDS_VM_W_AirWalk.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_AirWalk,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_AirWalk>,
               InternalVTableHelperCtorCaller<UDS_VM_W_AirWalk>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_AirWalk.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_AirWalk @ 14b718930

void __cdecl UDS_VM_W_AirWalk::StaticRegisterNativesUDS_VM_W_AirWalk(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_AirWalk_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedAirWalkData @ 14b719fa0

void __cdecl
UDS_VM_W_AirWalk::execOnChangedAirWalkData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedAirWalkData((UDS_VM_W_AirWalk *)param_1,local_res10);
  return;
}

// execOnRefreshAirWalkVisibility @ 14b71a1e0

void __cdecl
UDS_VM_W_AirWalk::execOnRefreshAirWalkVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRefreshAirWalkVisibility((UDS_VM_W_AirWalk *)param_1);
  return;
}

// BindCharacterEvent @ 14bf9b460

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_W_AirWalk::BindCharacterEvent(UDS_VM_W_AirWalk *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_DataBase *this_00;
  UObject *pUVar4;
  UDS_CharStateData *pUVar5;
  TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> TVar6;
  char *pcVar7;
  UObject *this_01;
  UFunction *pUVar8;
  char *pcVar9;
  ulong64 local_res10;
  <lambda_1> local_res18 [8];
  EDS_CharDetailState local_res20 [2];
  FWeakObjectPtr local_108;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  FWeakObjectPtr local_f8;
  FName local_f0;
  FName local_e8;
  EDS_CharState local_e0;
  FName local_d8;
  UDS_VM_W_AirWalk *local_d0;
  FName *local_c8 [2];
  code *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_a8;
  FDestructionSentinel local_98;
  undefined1 local_80 [48];
  FReadAccessScope local_50;
  
  local_res10 = param_1;
  UnBindCharacterEvent(this,this->CurrentEntityID);
  this->CurrentEntityID = param_1;
  UDS_CharStateData::GetData((ulong64)&local_108);
  bVar2 = FWeakObjectPtr::IsValid(&local_108);
  if (bVar2) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_108);
    iVar3 = UDS_DataBase::GetEntityTableID(this_00);
    this->CurrentEntityTableID = iVar3;
    uStack_b0 = 0;
    local_b8 = OnChangedCharState;
    local_80._16_8_ = (ulonglong)uStack_ac << 0x20;
    local_80._8_8_ = OnChangedCharState;
    pUVar4 = FWeakObjectPtr::Get(&local_108);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_AirWalk>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar4[7].field_0x20,(UDS_VM_W_AirWalk *)local_80,(pmf_29713837 *)this);
    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_108);
    local_e0 = AirWalk;
    bVar2 = UDS_CharStateData::HasCharState(pUVar5,&local_e0);
    if (bVar2) {
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_108);
      local_res20[0] = Mount_Flying;
      bVar2 = UDS_CharStateData::HasCharDetailState(pUVar5,local_res20);
      if (!bVar2) {
        UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
        this->DesiredVisibilityState = SelfHitTestInvisible;
        goto LAB_14bf9b56b;
      }
    }
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    this->DesiredVisibilityState = Collapsed;
  }
LAB_14bf9b56b:
  TVar6 = UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
                    ((ulong64 *)&local_b8,(EDS_AbilityTagType *)&local_res10);
                    /* WARNING: Load size is inaccurate */
  (this->AirwalkAbilityData).WeakPtr = *TVar6.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&(this->AirwalkAbilityData).WeakPtr);
  if (!bVar2) {
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),(UObject *)this);
  pUVar4 = FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
  pcVar7 = strstr("&UDS_VM_W_AirWalk::OnChangedAirWalkData","::");
  if (pcVar7 == (char *)0x0) {
LAB_14bf9b62b:
    pcVar9 = &DAT_00000002;
LAB_14bf9b630:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar9 = pcVar7;
      pcVar7 = strstr(pcVar9 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if (pcVar9 == (char *)0x0) goto LAB_14bf9b62b;
    pcVar9 = pcVar9 + 2;
    if (*pcVar9 == '0') goto LAB_14bf9b630;
  }
  ::FName::FName(&local_d8,pcVar9);
  local_e8 = local_d8;
  local_100.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_f8.ObjectIndex = 0;
  local_f8.ObjectSerialNumber = 0;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  local_d0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_AirWalk *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_d0);
  local_f0 = local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_100,(FReadAccessScope *)(local_80 + 0x18));
  if ((local_f0 == (FName)0x0) ||
     (this_01 = FWeakObjectPtr::Get(&local_f8), this_01 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_80 + 0x18));
  }
  else {
    pUVar8 = UObject::FindFunction(this_01,local_f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_80 + 0x18));
    if (pUVar8 != (UFunction *)0x0) goto LAB_14bf9b729;
  }
  local_c8[0] = &local_e8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_W_AirWalk>'::__l2::<lambda_1>::operator()(local_c8);
LAB_14bf9b729:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_100,&local_50);
  local_a8.Object = local_f8;
  local_a8.FunctionName = local_f0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),
             (FWriteAccessScope *)&local_98);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar4[1].field_0x8,local_res18,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),&local_a8);
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_100.AccessDetector);
  return;
}

// ChangeJumpIconByAirwalkStep @ 14bf9d340

void __thiscall
UDS_VM_W_AirWalk::ChangeJumpIconByAirwalkStep(UDS_VM_W_AirWalk *this,EDS_AirWalkStep param_1)

{
  UDS_AirWalkAbilityData *pUVar1;
  FDS_AirWalkStepInfo *pFVar2;
  int iVar3;
  
  if ((this->Slot_Jump).field0_0x0.DebugPtr != (UDS_VM_W_AirWalkSlot_Jump *)0x0) {
    if ((byte)(param_1 - Hovering) < 2) {
      pUVar1 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
      pFVar2 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar1,param_1);
      iVar3 = pFVar2->StopIconID;
    }
    else {
      pUVar1 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
      pFVar2 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar1,Jump1);
      iVar3 = pFVar2->IconID;
    }
    UDS_VM_W_CommonSkillSlot::SetIcon
              ((UDS_VM_W_CommonSkillSlot *)(this->Slot_Jump).field0_0x0.DebugPtr,iVar3);
  }
  return;
}

// ClearTimer @ 14bf9e3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_W_AirWalk::ClearTimer(UDS_VM_W_AirWalk *this,FTimerHandle *param_1)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  if (param_1->Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar1 = FTimerManager::FindTimer(this_00,param_1);
    if (pFVar1 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)param_1->Handle);
    }
    param_1->Handle = 0;
  }
  return;
}

// InitViewModel @ 14bfaf5c0

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

void __thiscall UDS_VM_W_AirWalk::InitViewModel(UDS_VM_W_AirWalk *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_W_AirWalkSlot_Jump *pUVar3;
  UDS_VM_W_AirWalkSlot *pUVar4;
  UDS_VM_W_AirWalkSlot_Attack *pUVar5;
  ulong64 uVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [40];
  UDS_VM_W_AirWalk *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_88;
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((this->Slot_Jump).field0_0x0.DebugPtr == (UDS_VM_W_AirWalkSlot_Jump *)0x0) {
    local_c8._0_8_ = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_W_AirWalkSlot_Jump_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_W_AirWalkSlot_Jump_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)(local_c8 + 0x20),pUVar1);
    local_78 = 0;
    lStack_70 = 0;
    local_98 = 0;
    local_90 = 0x40;
    local_80 = 0;
    local_88 = 0;
    local_a0 = this;
    pUVar3 = (UDS_VM_W_AirWalkSlot_Jump *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_c8 + 0x20));
    if (local_68 != 0) {
      plVar7 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar7 = local_40;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    if (pUVar3 != (UDS_VM_W_AirWalkSlot_Jump *)0x0) {
      pUVar3->field_0x8c = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_W_AirWalkSlot_Jump *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Slot_Jump).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->Slot_Dash).field0_0x0.DebugPtr == (UDS_VM_W_AirWalkSlot *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_W_AirWalkSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_W_AirWalkSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->Slot_Dash).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->Slot_Hovering).field0_0x0.DebugPtr == (UDS_VM_W_AirWalkSlot *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_W_AirWalkSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_W_AirWalkSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->Slot_Hovering).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->Slot_Attack).field0_0x0.DebugPtr == (UDS_VM_W_AirWalkSlot_Attack *)0x0) {
    local_c8._0_8_ = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_W_AirWalkSlot_Attack_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_W_AirWalkSlot_Attack_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)(local_c8 + 0x20),pUVar1);
    local_78 = 0;
    lStack_70 = 0;
    local_98 = 0;
    local_90 = 0x40;
    local_80 = 0;
    local_88 = 0;
    local_a0 = this;
    pUVar5 = (UDS_VM_W_AirWalkSlot_Attack *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_c8 + 0x20));
    if (local_68 != 0) {
      plVar7 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar7 = local_40;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    if (pUVar5 != (UDS_VM_W_AirWalkSlot_Attack *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_W_AirWalkSlot_Attack *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->Slot_Attack).field0_0x0.DebugPtr = pUVar5;
  }
  if ((this->Slot_DashAttack).field0_0x0.DebugPtr == (UDS_VM_W_AirWalkSlot *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_W_AirWalkSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_W_AirWalkSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->Slot_DashAttack).field0_0x0.DebugPtr = pUVar4;
  }
  local_c8._8_4_ = 0;
  local_c8._0_8_ = OnMainCharChanged;
  local_c8._24_8_ = (ulonglong)(uint)local_c8._12_4_ << 0x20;
  local_c8._16_8_ = OnMainCharChanged;
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_W_AirWalk>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,(UDS_VM_W_AirWalk *)local_c8
             ,(pmf_ecd38714 *)this);
  uVar6 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  BindCharacterEvent(this,uVar6);
  RefreshSkillList(this);
  return;
}

// OnAnimationFinished @ 14bfb4500

void __thiscall
UDS_VM_W_AirWalk::OnAnimationFinished(UDS_VM_W_AirWalk *this,FDS_WidgetAnimationEventField *param_1)

{
  return;
}

// OnChangedAirWalkData @ 14bfb5ac0

void __thiscall UDS_VM_W_AirWalk::OnChangedAirWalkData(UDS_VM_W_AirWalk *this,UDS_DataBase *param_1)

{
  EDS_AirWalkStep EVar1;
  bool bVar2;
  UObject *pUVar3;
  FName *pFVar4;
  FName local_res8;
  FName local_18;
  int local_10;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->AirwalkAbilityData).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
    EVar1 = pUVar3[4].field_0x20;
    if (EVar1 == Jump2) {
      this->bAnimationStart = true;
      pFVar4 = ::FName::FName(&local_res8,"MenuOpen");
      (this->AnimationEvent).AnimationName = *pFVar4;
      (this->AnimationEvent).AnimationEventType = PlayForward;
      local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    else if ((EVar1 == Hovering) || (EVar1 == AirDash)) {
      ChangeJumpIconByAirwalkStep(this,EVar1);
    }
    if (((this->bAnimationStart == true) &&
        (pUVar3 = FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr),
        pUVar3[5].field_0x10 == '\0')) && (pUVar3[5].field_0x11 == '\0')) {
      this->bAnimationStart = false;
      pFVar4 = ::FName::FName(&local_res8,"MenuOpen");
      (this->AnimationEvent).AnimationName = *pFVar4;
      (this->AnimationEvent).AnimationEventType = PlayReverse;
      local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      ChangeJumpIconByAirwalkStep(this,EVar1);
    }
  }
  return;
}

// OnChangedCharState @ 14bfb63a0

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
UDS_VM_W_AirWalk::OnChangedCharState
          (UDS_VM_W_AirWalk *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  EDS_AnimationEventType *pEVar1;
  bool bVar2;
  FTimerManager *pFVar3;
  FTimerData *pFVar4;
  UDS_CharStateData *pUVar5;
  FName *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  ESlateVisibility EVar9;
  FWeakObjectPtr local_res10 [2];
  FName local_res20;
  FName local_58 [2];
  FDelegateAllocation local_48;
  code *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar2) {
    return;
  }
  if ((this->AirWalkCloseTimerHandle).Handle != 0) {
    pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar4 = FTimerManager::FindTimer(pFVar3,&this->AirWalkCloseTimerHandle);
    if (pFVar4 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar3,(FTimerHandle)(this->AirWalkCloseTimerHandle).Handle)
      ;
    }
    (this->AirWalkCloseTimerHandle).Handle = 0;
  }
  EVar9 = Hidden;
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res20.ComparisonIndex.Value = 0x800;
  local_res20.Number = 0;
  bVar2 = UDS_CharStateData::HasCharState(pUVar5,(EDS_CharState *)&local_res20);
  if (bVar2) {
    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_res20.ComparisonIndex.Value = 0x66;
    bVar2 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
    if (!bVar2) {
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
      local_res20.ComparisonIndex.Value = 0x6c;
      bVar2 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
      if (!bVar2) {
        EVar9 = Hidden;
        if (param_2->RemovedCharDetailState != Mount_Land) {
          EVar9 = SelfHitTestInvisible;
        }
      }
    }
  }
  if (EVar9 == this->DesiredVisibilityState) {
    return;
  }
  this->DesiredVisibilityState = EVar9;
  ::FName::FName(local_58,"Close_Anim");
  if (EVar9 == SelfHitTestInvisible) {
    if (param_2->AddedCharState == AirWalk) {
      RefreshSkillList(this);
    }
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
    pFVar6 = ::FName::FName(&local_res20,"Open_Anim");
    local_58[0] = *pFVar6;
  }
  else {
    uStack_30 = 0;
    local_38 = OnRefreshAirWalkVisibility;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_48.DelegateSize = 0;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_48);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_AirWalk____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_res20 = (FName)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res20);
      puVar7[4] = local_38;
      puVar7[5] = CONCAT44(uStack_2c,uStack_30);
    }
    pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
    FTimerManager::SetTimer
              (pFVar3,&this->AirWalkCloseTimerHandle,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_48
               ,__real_3f000000,false,__real_bf800000);
    if (local_48.DelegateSize != 0) {
      if (local_48.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
      goto LAB_14bfb65f0;
      (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_48,0,0,0x10);
      local_48.DelegateSize = 0;
    }
    if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_48.DelegateAllocator);
    }
  }
LAB_14bfb65f0:
  pEVar1 = &(this->AnimationEvent).AnimationEventType;
  if (this->PlayingAnimationName != (FName)0x0) {
    (this->AnimationEvent).AnimationName = this->PlayingAnimationName;
    *pEVar1 = StopAnimation;
    local_48.DelegateSize = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_48.DelegateAllocator =
         (ForElementType<TAlignedBytes<16,16>_>)
         FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  }
  this->PlayingAnimationName = local_58[0];
  (this->AnimationEvent).AnimationName = local_58[0];
  *pEVar1 = PlayForward;
  local_48.DelegateSize = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_48.DelegateAllocator =
       (ForElementType<TAlignedBytes<16,16>_>)
       FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  return;
}

// OnCloseInit @ 14bfbbce0

void __thiscall UDS_VM_W_AirWalk::OnCloseInit(UDS_VM_W_AirWalk *this)

{
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  UnBindCharacterEvent(this,this->CurrentEntityID);
  return;
}

// OnMainCharChanged @ 14bfbf1e0

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
UDS_VM_W_AirWalk::OnMainCharChanged
          (UDS_VM_W_AirWalk *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  if (param_2 != (FDS_EntityBase *)0x0) {
    BindCharacterEvent(this,param_2->EntityID);
    RefreshSkillList(this);
  }
  return;
}

// OnRefreshAirWalkVisibility @ 14bfc0910

void __thiscall UDS_VM_W_AirWalk::OnRefreshAirWalkVisibility(UDS_VM_W_AirWalk *this)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  ESlateVisibility EVar2;
  EDS_CharState local_res8;
  FWeakObjectPtr local_res10 [3];
  FName local_18;
  int local_10;
  
  UDS_CharStateData::GetData((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    if (this->PlayingAnimationName != (FName)0x0) {
      (this->AnimationEvent).AnimationName = this->PlayingAnimationName;
      (this->AnimationEvent).AnimationEventType = StopAnimation;
      local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    local_res8 = None;
    (this->PlayingAnimationName).ComparisonIndex = 0;
    (this->PlayingAnimationName).Number = 0;
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_res8 = AirWalk;
    bVar1 = UDS_CharStateData::HasCharState(this_00,&local_res8);
    EVar2 = SelfHitTestInvisible;
    if (!bVar1) {
      EVar2 = Collapsed;
    }
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar2);
  }
  return;
}

// RefreshSkillList @ 14bfd48f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_AirWalk::RefreshSkillList(UDS_VM_W_AirWalk *this)

{
  UDS_VM_W_AirWalkSlot_Jump *this_00;
  UDS_VM_W_AirWalkSlot *pUVar1;
  UDS_VM_W_AirWalkSlot_Attack *this_01;
  code *pcVar2;
  FDS_ViewModelContext_AirWalkSlot *pFVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UDS_SkillDataSet *this_02;
  UDS_DataBase *this_03;
  ulong64 uVar7;
  undefined1 auStackY_238 [32];
  EDS_AirWalkStep local_1f8 [8];
  FWeakObjectPtr local_1f0;
  TSharedPtr<FDS_ViewModelContext_AirWalkSlot,1> local_1e8;
  TSharedPtr<FDS_ViewModelContext_AirWalkSlot,1> local_1d8;
  TSharedPtr<FDS_ViewModelContext_AirWalkSlot,1> local_1c8;
  TSharedPtr<FDS_ViewModelContext_AirWalkSlot,1> local_1b8;
  TSharedPtr<FDS_ViewModelContext_AirWalkSlot,1> local_1a8;
  FWeakObjectPtr local_198 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if ((this->Slot_Jump).field0_0x0.DebugPtr != (UDS_VM_W_AirWalkSlot_Jump *)0x0) {
    MakeContext<FDS_ViewModelContext_AirWalkSlot>(&local_1e8);
    pFVar3 = local_1e8.Object;
    if (local_1e8.Object != (FDS_ViewModelContext_AirWalkSlot *)0x0) {
      if ((local_1e8.Object == (FDS_ViewModelContext_AirWalkSlot *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x1c;
      (pFVar3->AirwalkAbilityData).WeakPtr = (this->AirwalkAbilityData).WeakPtr;
      pFVar3->bShowInputKey = true;
      pFVar3->KeyActionType = IA_AirWalk_Jump;
      this_00 = (this->Slot_Jump).field0_0x0.DebugPtr;
      local_188.Object = (FDS_ViewModelContext *)local_1e8.Object;
      local_188.SharedReferenceCount.ReferenceController =
           local_1e8.SharedReferenceCount.ReferenceController;
      if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_188);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e8.SharedReferenceCount.ReferenceController);
  }
  if ((this->Slot_Dash).field0_0x0.DebugPtr != (UDS_VM_W_AirWalkSlot *)0x0) {
    MakeContext<FDS_ViewModelContext_AirWalkSlot>(&local_1d8);
    pFVar3 = local_1d8.Object;
    if (local_1d8.Object != (FDS_ViewModelContext_AirWalkSlot *)0x0) {
      if ((local_1d8.Object == (FDS_ViewModelContext_AirWalkSlot *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x1b;
      local_1f8[0] = AirDash;
      TArray<enum_EDS_AirWalkStep,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<enum_EDS_AirWalkStep,int>
                (&pFVar3->AirWalkStepList,local_1f8,((int)local_1f8 + 1) - (int)local_1f8,
                 (pFVar3->AirWalkStepList).ArrayMax);
      (pFVar3->AirwalkAbilityData).WeakPtr = (this->AirwalkAbilityData).WeakPtr;
      pFVar3->bShowInputKey = true;
      pFVar3->KeyActionType = IA_AIrWalk_Dash;
      pUVar1 = (this->Slot_Dash).field0_0x0.DebugPtr;
      local_178.Object = (FDS_ViewModelContext *)local_1d8.Object;
      local_178.SharedReferenceCount.ReferenceController =
           local_1d8.SharedReferenceCount.ReferenceController;
      if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_178);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.SharedReferenceCount.ReferenceController);
  }
  if ((this->Slot_Hovering).field0_0x0.DebugPtr != (UDS_VM_W_AirWalkSlot *)0x0) {
    MakeContext<FDS_ViewModelContext_AirWalkSlot>(&local_1c8);
    pFVar3 = local_1c8.Object;
    if (local_1c8.Object != (FDS_ViewModelContext_AirWalkSlot *)0x0) {
      if ((local_1c8.Object == (FDS_ViewModelContext_AirWalkSlot *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x1b;
      local_1f8[1] = 3;
      TArray<enum_EDS_AirWalkStep,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<enum_EDS_AirWalkStep,int>
                (&pFVar3->AirWalkStepList,local_1f8 + 1,((int)local_1f8 + 2) - ((int)local_1f8 + 1),
                 (pFVar3->AirWalkStepList).ArrayMax);
      (pFVar3->AirwalkAbilityData).WeakPtr = (this->AirwalkAbilityData).WeakPtr;
      pFVar3->bShowInputKey = true;
      pFVar3->KeyActionType = IA_AIrWalk_Hovering;
      pUVar1 = (this->Slot_Hovering).field0_0x0.DebugPtr;
      local_168.Object = (FDS_ViewModelContext *)local_1c8.Object;
      local_168.SharedReferenceCount.ReferenceController =
           local_1c8.SharedReferenceCount.ReferenceController;
      if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_168);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.SharedReferenceCount.ReferenceController);
  }
  if ((this->Slot_Attack).field0_0x0.DebugPtr != (UDS_VM_W_AirWalkSlot_Attack *)0x0) {
    UDS_PlayerData::GetMainPlayerCurrentEntityID();
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_1f0);
    bVar4 = FWeakObjectPtr::IsValid(&local_1f0);
    if (!bVar4) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      UDS_PlayerData::GetMainPlayerCurrentEntityID();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_AirWalk::RefreshSkillList",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_138.Ptr,0x10f,L"skillDataSet is nullptr. EntityID : %llu");
      if ((void *)local_138._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_138._padding_);
      return;
    }
    this_02 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_1f0);
    iVar5 = UDS_SkillDataSet::GetJumpSkillID(this_02);
    this_03 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
    uVar7 = UDS_DataBase::GetDataContainerKey(this_03);
    UDS_SkillData::GetData((ulong64)local_198,uVar7,SUB41(iVar5,0));
    MakeContext<FDS_ViewModelContext_AirWalkSlot>(&local_1b8);
    pFVar3 = local_1b8.Object;
    if (local_1b8.Object != (FDS_ViewModelContext_AirWalkSlot *)0x0) {
      if ((local_1b8.Object == (FDS_ViewModelContext_AirWalkSlot *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x1d;
      (pFVar3->JumpSkillData).WeakPtr = local_198[0];
      (pFVar3->AirwalkAbilityData).WeakPtr = (this->AirwalkAbilityData).WeakPtr;
      pFVar3->bShowInputKey = true;
      pFVar3->KeyActionType = IA_NormalAttack;
      this_01 = (this->Slot_Attack).field0_0x0.DebugPtr;
      local_158.Object = (FDS_ViewModelContext *)local_1b8.Object;
      local_158.SharedReferenceCount.ReferenceController =
           local_1b8.SharedReferenceCount.ReferenceController;
      if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_158);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
  }
  if ((this->Slot_DashAttack).field0_0x0.DebugPtr != (UDS_VM_W_AirWalkSlot *)0x0) {
    MakeContext<FDS_ViewModelContext_AirWalkSlot>(&local_1a8);
    pFVar3 = local_1a8.Object;
    if (local_1a8.Object != (FDS_ViewModelContext_AirWalkSlot *)0x0) {
      if ((local_1a8.Object == (FDS_ViewModelContext_AirWalkSlot *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x1b;
      local_1f8[2] = 8;
      TArray<enum_EDS_AirWalkStep,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<enum_EDS_AirWalkStep,int>
                (&pFVar3->AirWalkStepList,local_1f8 + 2,((int)local_1f8 + 3) - ((int)local_1f8 + 2),
                 (pFVar3->AirWalkStepList).ArrayMax);
      (pFVar3->AirwalkAbilityData).WeakPtr = (this->AirwalkAbilityData).WeakPtr;
      pFVar3->bShowInputKey = true;
      pFVar3->KeyActionType = IA_AirDashAttack;
      pUVar1 = (this->Slot_DashAttack).field0_0x0.DebugPtr;
      local_148.Object = (FDS_ViewModelContext *)local_1a8.Object;
      local_148.SharedReferenceCount.ReferenceController =
           local_1a8.SharedReferenceCount.ReferenceController;
      if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_148);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetTimer @ 14bfddde0

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
UDS_VM_W_AirWalk::SetTimer
          (UDS_VM_W_AirWalk *this,FTimerHandle *param_1,
          TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_2,
          float param_3)

{
  FTimerManager *this_00;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  FTimerManager::SetTimer(this_00,param_1,param_2,param_3,false,__real_bf800000);
  if ((*(int *)&param_2->field_0x8 != 0) && (*(undefined8 **)param_2 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)param_2)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)param_2,0,0,0x10);
    *(undefined4 *)&param_2->field_0x8 = 0;
  }
  if (*(void **)param_2 != (void *)0x0) {
    FMemory::Free(*(void **)param_2);
  }
  return;
}

// StopAnimation @ 14bfdea80

void __thiscall UDS_VM_W_AirWalk::StopAnimation(UDS_VM_W_AirWalk *this,FName *param_1)

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

// UnBindCharacterEvent @ 14bfdf180

void __thiscall UDS_VM_W_AirWalk::UnBindCharacterEvent(UDS_VM_W_AirWalk *this,ulong64 param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  
  this->CurrentEntityID = 0;
  this->CurrentEntityTableID = 0;
  if (param_1 != 0) {
    UDS_CharStateData::GetData((ulong64)&local_res8);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    }
    bVar1 = FWeakObjectPtr::IsValid(&(this->AirwalkAbilityData).WeakPtr);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),
                 (UObject *)this);
      (this->AirwalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
    }
  }
  return;
}

