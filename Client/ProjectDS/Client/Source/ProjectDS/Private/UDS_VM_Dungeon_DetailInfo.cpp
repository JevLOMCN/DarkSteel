// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b6371e0

UClass * __cdecl UDS_VM_Dungeon_DetailInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_DetailInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_DetailInfo",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_DetailInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_DetailInfo,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_DetailInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_DetailInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_DetailInfo.InnerSingleton;
}

// UDS_VM_Dungeon_DetailInfo @ 14b63a9b0

UDS_VM_Dungeon_DetailInfo * __thiscall
UDS_VM_Dungeon_DetailInfo::UDS_VM_Dungeon_DetailInfo
          (UDS_VM_Dungeon_DetailInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_DetailInfo__6B_;
  (this->DungeonInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_Info *)0x0;
  (this->DungeonFirstReward_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_Reward *)0x0;
  (this->DungeonExpectedReward_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_Reward *)0x0;
  (this->DungeonReady_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_Ready *)0x0;
  (this->DungeonRecord_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_Record *)0x0;
  (this->DungeonLevel_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_Level *)0x0;
  return this;
}

// UDS_VM_Dungeon_DetailInfo @ 14b63aa20

UDS_VM_Dungeon_DetailInfo * __thiscall
UDS_VM_Dungeon_DetailInfo::UDS_VM_Dungeon_DetailInfo
          (UDS_VM_Dungeon_DetailInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_DetailInfo__6B_;
  (this->DungeonInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_Info *)0x0;
  (this->DungeonFirstReward_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_Reward *)0x0;
  (this->DungeonExpectedReward_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_Reward *)0x0;
  (this->DungeonReady_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_Ready *)0x0;
  (this->DungeonRecord_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_Record *)0x0;
  (this->DungeonLevel_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_Level *)0x0;
  return this;
}

// ~UDS_VM_Dungeon_DetailInfo @ 14b63cb20

void __thiscall
UDS_VM_Dungeon_DetailInfo::~UDS_VM_Dungeon_DetailInfo(UDS_VM_Dungeon_DetailInfo *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_DetailInfo__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f530

IClassDescriptor * __thiscall
UDS_VM_Dungeon_DetailInfo::GetFieldNotificationDescriptor(UDS_VM_Dungeon_DetailInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_DetailInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b63ffd0

UClass * __cdecl UDS_VM_Dungeon_DetailInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_DetailInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_DetailInfo",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_DetailInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_DetailInfo,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_DetailInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_DetailInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_DetailInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_DetailInfo @ 14b640b10

void __cdecl UDS_VM_Dungeon_DetailInfo::StaticRegisterNativesUDS_VM_Dungeon_DetailInfo(void)

{
  return;
}

// BindModel @ 14be74dc0

void __thiscall UDS_VM_Dungeon_DetailInfo::BindModel(UDS_VM_Dungeon_DetailInfo *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedDungeonID,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Dungeon_DetailInfo>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedDungeonID,(UDS_VM_Dungeon_DetailInfo *)&stack0x00000010,
               (pmf_c24335e5 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedDungeonLevel
               ,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Dungeon_DetailInfo>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedDungeonLevel,(UDS_VM_Dungeon_DetailInfo *)&stack0x00000010,
               (pmf_c24335e5 *)this);
  }
  return;
}

// InitViewModel @ 14be8c410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_Dungeon_DetailInfo::InitViewModel(UDS_VM_Dungeon_DetailInfo *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_Dungeon_Info *pUVar3;
  UDS_VM_Dungeon_Reward *pUVar4;
  UDS_VM_Dungeon_Ready *pUVar5;
  UDS_VM_Dungeon_Record *pUVar6;
  UDS_VM_Dungeon_Level *pUVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((this->DungeonInfo_ViewModel).field0_0x0.DebugPtr == (UDS_VM_Dungeon_Info *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_Dungeon_Info_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_Dungeon_Info_NoRegister();
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
    pUVar3 = (UDS_VM_Dungeon_Info *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar3 != (UDS_VM_Dungeon_Info *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_Dungeon_Info *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->DungeonInfo_ViewModel).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->DungeonFirstReward_ViewModel).field0_0x0.DebugPtr == (UDS_VM_Dungeon_Reward *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Dungeon_Reward>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_Dungeon_Reward *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->DungeonFirstReward_ViewModel).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->DungeonExpectedReward_ViewModel).field0_0x0.DebugPtr == (UDS_VM_Dungeon_Reward *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Dungeon_Reward>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_Dungeon_Reward *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->DungeonExpectedReward_ViewModel).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->DungeonReady_ViewModel).field0_0x0.DebugPtr == (UDS_VM_Dungeon_Ready *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_Dungeon_Ready_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_Dungeon_Ready_NoRegister();
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
    pUVar5 = (UDS_VM_Dungeon_Ready *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_Dungeon_Ready *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_Dungeon_Ready *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->DungeonReady_ViewModel).field0_0x0.DebugPtr = pUVar5;
  }
  if ((this->DungeonRecord_ViewModel).field0_0x0.DebugPtr == (UDS_VM_Dungeon_Record *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_Dungeon_Record_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_Dungeon_Record_NoRegister();
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
    pUVar6 = (UDS_VM_Dungeon_Record *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar6 != (UDS_VM_Dungeon_Record *)0x0) {
      *(undefined1 *)((longlong)&pUVar6->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_Dungeon_Record *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->DungeonRecord_ViewModel).field0_0x0.DebugPtr = pUVar6;
  }
  if ((this->DungeonLevel_ViewModel).field0_0x0.DebugPtr == (UDS_VM_Dungeon_Level *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_Dungeon_Level_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_Dungeon_Level_NoRegister();
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
    pUVar7 = (UDS_VM_Dungeon_Level *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar7 != (UDS_VM_Dungeon_Level *)0x0) {
      *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDS_VM_Dungeon_Level *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->DungeonLevel_ViewModel).field0_0x0.DebugPtr = pUVar7;
  }
  return;
}

// OnSelectedDungeon @ 14be9ca00

void __thiscall
UDS_VM_Dungeon_DetailInfo::OnSelectedDungeon(UDS_VM_Dungeon_DetailInfo *this,int param_1)

{
  UpdateDungeonInfo(this,param_1,this->DungeonLevelGroup);
  return;
}

// OnSelectedDungeonLevel @ 14be9ca70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_DetailInfo::OnSelectedDungeonLevel(UDS_VM_Dungeon_DetailInfo *this,int param_1)

{
  UDS_DungeonManager *pUVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_DungeonManager::GetInst();
  if (pUVar1 == (UDS_DungeonManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Dungeon_DetailInfo::OnSelectedDungeonLevel",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x65,L"dungeonManager is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UpdateDungeonInfo(this,pUVar1->SelectedDungeonID,param_1);
  }
  return;
}

// OnSetViewModel @ 14be9d6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_DetailInfo::OnSetViewModel
          (UDS_VM_Dungeon_DetailInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_DungeonManager *pUVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pUVar2 = UDS_DungeonManager::GetInst();
  if (pUVar2 == (UDS_DungeonManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Dungeon_DetailInfo::OnSetViewModel",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x16,L"dungeonManager is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UpdateDungeonInfo(this,pUVar2->SelectedDungeonID,pUVar2->SelectedDungeonLevelGroup);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bebbbb0

void __thiscall UDS_VM_Dungeon_DetailInfo::UnbindModel(UDS_VM_Dungeon_DetailInfo *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedDungeonID,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedDungeonLevel
               ,this);
  }
  return;
}

// UpdateDungeonInfo @ 14bebd390

void __thiscall
UDS_VM_Dungeon_DetailInfo::UpdateDungeonInfo
          (UDS_VM_Dungeon_DetailInfo *this,int param_1,int param_2)

{
  UDS_VM_Dungeon_Info *this_00;
  UDS_VM_Dungeon_Reward *pUVar1;
  UDS_VM_Dungeon_Ready *this_01;
  UDS_VM_Dungeon_Record *this_02;
  UDS_VM_Dungeon_Level *pUVar2;
  code *pcVar3;
  FDS_ViewModelContext_Dungeon *pFVar4;
  FDS_ViewModelContext_DungeonReward *pFVar5;
  bool bVar6;
  longlong lVar7;
  TSharedPtr<FDS_ViewModelContext_Dungeon,1> local_c8;
  TSharedPtr<FDS_ViewModelContext_DungeonReward,1> local_b8;
  TSharedPtr<FDS_ViewModelContext_DungeonReward,1> local_a8;
  TSharedPtr<FDS_ViewModelContext_Dungeon,1> local_98;
  TSharedPtr<FDS_ViewModelContext_Dungeon,1> local_88;
  TSharedPtr<FDS_ViewModelContext_Dungeon,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  lVar7 = (longlong)param_1;
  if ((this->DungeonInfo_ViewModel).field0_0x0.DebugPtr != (UDS_VM_Dungeon_Info *)0x0) {
    MakeContext<FDS_ViewModelContext_Dungeon>(&local_c8);
    pFVar4 = local_c8.Object;
    if (local_c8.Object == (FDS_ViewModelContext_Dungeon *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)&pFVar4->_padding_ = 0xcc;
    pFVar4->DungeonId = lVar7;
    this_00 = (this->DungeonInfo_ViewModel).field0_0x0.DebugPtr;
    local_68.Object = (FDS_ViewModelContext *)local_c8.Object;
    local_68.SharedReferenceCount.ReferenceController =
         local_c8.SharedReferenceCount.ReferenceController;
    if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
  }
  if ((this->DungeonFirstReward_ViewModel).field0_0x0.DebugPtr != (UDS_VM_Dungeon_Reward *)0x0) {
    MakeContext<FDS_ViewModelContext_DungeonReward>(&local_b8);
    pFVar5 = local_b8.Object;
    if (local_b8.Object == (FDS_ViewModelContext_DungeonReward *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar5->bIsFirstReward = true;
    pFVar5->DungeonId = lVar7;
    pUVar1 = (this->DungeonFirstReward_ViewModel).field0_0x0.DebugPtr;
    local_58.Object = (FDS_ViewModelContext *)local_b8.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  if ((this->DungeonExpectedReward_ViewModel).field0_0x0.DebugPtr != (UDS_VM_Dungeon_Reward *)0x0) {
    MakeContext<FDS_ViewModelContext_DungeonReward>(&local_a8);
    pFVar5 = local_a8.Object;
    if (local_a8.Object == (FDS_ViewModelContext_DungeonReward *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar5->bIsFirstReward = false;
    pFVar5->DungeonId = lVar7;
    pUVar1 = (this->DungeonExpectedReward_ViewModel).field0_0x0.DebugPtr;
    local_48.Object = (FDS_ViewModelContext *)local_a8.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_a8.SharedReferenceCount.ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  if ((this->DungeonReady_ViewModel).field0_0x0.DebugPtr != (UDS_VM_Dungeon_Ready *)0x0) {
    MakeContext<FDS_ViewModelContext_Dungeon>(&local_98);
    pFVar4 = local_98.Object;
    if (local_98.Object == (FDS_ViewModelContext_Dungeon *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar4->DungeonId = lVar7;
    this_01 = (this->DungeonReady_ViewModel).field0_0x0.DebugPtr;
    local_38.Object = (FDS_ViewModelContext *)local_98.Object;
    local_38.SharedReferenceCount.ReferenceController =
         local_98.SharedReferenceCount.ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  if ((this->DungeonRecord_ViewModel).field0_0x0.DebugPtr != (UDS_VM_Dungeon_Record *)0x0) {
    MakeContext<FDS_ViewModelContext_Dungeon>(&local_88);
    pFVar4 = local_88.Object;
    if (local_88.Object == (FDS_ViewModelContext_Dungeon *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar4->DungeonId = lVar7;
    this_02 = (this->DungeonRecord_ViewModel).field0_0x0.DebugPtr;
    local_28.Object = (FDS_ViewModelContext *)local_88.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_88.SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  if ((this->DungeonLevelGroup != param_2) &&
     (pUVar2 = (this->DungeonLevel_ViewModel).field0_0x0.DebugPtr, this->DungeonLevelGroup = param_2
     , pUVar2 != (UDS_VM_Dungeon_Level *)0x0)) {
    MakeContext<FDS_ViewModelContext_Dungeon>(&local_78);
    pFVar4 = local_78.Object;
    if (local_78.Object == (FDS_ViewModelContext_Dungeon *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_18.Object = (FDS_ViewModelContext *)local_78.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_78.SharedReferenceCount.ReferenceController;
    pFVar4->DungeonId = lVar7;
    pUVar2 = (this->DungeonLevel_ViewModel).field0_0x0.DebugPtr;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  return;
}

