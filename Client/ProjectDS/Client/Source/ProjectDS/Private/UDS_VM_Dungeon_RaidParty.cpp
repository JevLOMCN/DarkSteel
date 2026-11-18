// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b635290

UClass * __cdecl UDS_VM_Dungeon_RaidParty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidParty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidParty",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidParty.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidParty,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_RaidParty>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidParty>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidParty.InnerSingleton;
}

// UDS_VM_Dungeon_RaidParty @ 14b63b290

UDS_VM_Dungeon_RaidParty * __thiscall
UDS_VM_Dungeon_RaidParty::UDS_VM_Dungeon_RaidParty
          (UDS_VM_Dungeon_RaidParty *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidParty__6B_;
  (this->RaidPartyList_ViewModel).field0_0x0.DebugPtr = (UDS_VM_RaidPartyList *)0x0;
  (this->RaidPartyVote_ViewModel).field0_0x0.DebugPtr = (UDS_VM_RaidPartyVote *)0x0;
  (this->RaidPartyInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_RaidPartyInfo *)0x0;
  return this;
}

// UDS_VM_Dungeon_RaidParty @ 14b63b2f0

UDS_VM_Dungeon_RaidParty * __thiscall
UDS_VM_Dungeon_RaidParty::UDS_VM_Dungeon_RaidParty
          (UDS_VM_Dungeon_RaidParty *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidParty__6B_;
  (this->RaidPartyList_ViewModel).field0_0x0.DebugPtr = (UDS_VM_RaidPartyList *)0x0;
  (this->RaidPartyVote_ViewModel).field0_0x0.DebugPtr = (UDS_VM_RaidPartyVote *)0x0;
  (this->RaidPartyInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_RaidPartyInfo *)0x0;
  return this;
}

// ~UDS_VM_Dungeon_RaidParty @ 14b63cea0

void __thiscall UDS_VM_Dungeon_RaidParty::~UDS_VM_Dungeon_RaidParty(UDS_VM_Dungeon_RaidParty *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidParty__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f840

IClassDescriptor * __thiscall
UDS_VM_Dungeon_RaidParty::GetFieldNotificationDescriptor(UDS_VM_Dungeon_RaidParty *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_RaidParty::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b640510

UClass * __cdecl UDS_VM_Dungeon_RaidParty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidParty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidParty",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidParty.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidParty,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_RaidParty>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidParty>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidParty.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_RaidParty @ 14b640bb0

void __cdecl UDS_VM_Dungeon_RaidParty::StaticRegisterNativesUDS_VM_Dungeon_RaidParty(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Dungeon_RaidParty_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedRaidPartyInfo @ 14b641c90

void __cdecl
UDS_VM_Dungeon_RaidParty::execOnChangedRaidPartyInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedRaidPartyInfo((UDS_VM_Dungeon_RaidParty *)param_1);
  return;
}

// BindModel @ 14be74ff0

void __thiscall UDS_VM_Dungeon_RaidParty::BindModel(UDS_VM_Dungeon_RaidParty *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Dungeon_RaidParty>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyInfo,(UDS_VM_Dungeon_RaidParty *)&stack0x00000010,
               (pmf_5adc43f2 *)this);
  }
  return;
}

// InitViewModel @ 14be8c880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_Dungeon_RaidParty::InitViewModel(UDS_VM_Dungeon_RaidParty *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_RaidPartyList *pUVar3;
  UDS_VM_RaidPartyVote *pUVar4;
  UDS_VM_RaidPartyInfo *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((this->RaidPartyList_ViewModel).field0_0x0.DebugPtr == (UDS_VM_RaidPartyList *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_RaidPartyList_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_RaidPartyList_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar3 = (UDS_VM_RaidPartyList *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar3 != (UDS_VM_RaidPartyList *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_RaidPartyList *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->RaidPartyList_ViewModel).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->RaidPartyVote_ViewModel).field0_0x0.DebugPtr == (UDS_VM_RaidPartyVote *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_RaidPartyVote_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_RaidPartyVote_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar4 = (UDS_VM_RaidPartyVote *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar4 != (UDS_VM_RaidPartyVote *)0x0) {
      *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_RaidPartyVote *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->RaidPartyVote_ViewModel).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->RaidPartyInfo_ViewModel).field0_0x0.DebugPtr == (UDS_VM_RaidPartyInfo *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_RaidPartyInfo_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_RaidPartyInfo_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar5 = (UDS_VM_RaidPartyInfo *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_RaidPartyInfo *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_RaidPartyInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->RaidPartyInfo_ViewModel).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnChangedRaidPartyInfo @ 14be91680

void __thiscall UDS_VM_Dungeon_RaidParty::OnChangedRaidPartyInfo(UDS_VM_Dungeon_RaidParty *this)

{
  return;
}

// OnSetViewModel @ 14be9e3a0

void __thiscall
UDS_VM_Dungeon_RaidParty::OnSetViewModel
          (UDS_VM_Dungeon_RaidParty *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  UDS_VM_RaidPartyList *this_00;
  UDS_VM_RaidPartyVote *this_01;
  UDS_VM_RaidPartyInfo *this_02;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = param_1->Object;
  if (pFVar2 != (FDS_ViewModelContext *)0x0) {
    this_00 = (this->RaidPartyList_ViewModel).field0_0x0.DebugPtr;
    if (this_00 != (UDS_VM_RaidPartyList *)0x0) {
      local_18.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18.Object = pFVar2;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
    }
    this_01 = (this->RaidPartyVote_ViewModel).field0_0x0.DebugPtr;
    if (this_01 != (UDS_VM_RaidPartyVote *)0x0) {
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
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_18);
    }
    this_02 = (this->RaidPartyInfo_ViewModel).field0_0x0.DebugPtr;
    if (this_02 != (UDS_VM_RaidPartyInfo *)0x0) {
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
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&local_18);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bebbcb0

void __thiscall UDS_VM_Dungeon_RaidParty::UnbindModel(UDS_VM_Dungeon_RaidParty *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
    return;
  }
  return;
}

// UpdateDungeonInfo @ 14bebdc30

void __thiscall UDS_VM_Dungeon_RaidParty::UpdateDungeonInfo(UDS_VM_Dungeon_RaidParty *this)

{
  return;
}

