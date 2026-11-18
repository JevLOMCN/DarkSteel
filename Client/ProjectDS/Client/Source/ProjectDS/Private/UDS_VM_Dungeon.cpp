// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetRaidPartySwitcher_WrapperImpl @ 14b6360d0

void __cdecl UDS_VM_Dungeon::SetRaidPartySwitcher_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::RaidPartySwitcher.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::RaidPartySwitcher.FieldName;
  if (*(int *)((longlong)param_1 + 0xb8) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xb8) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b6360e0

UClass * __cdecl UDS_VM_Dungeon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Dungeon>,InternalVTableHelperCtorCaller<UDS_VM_Dungeon>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon.InnerSingleton;
}

// UDS_VM_Dungeon @ 14b63a870

UDS_VM_Dungeon * __thiscall
UDS_VM_Dungeon::UDS_VM_Dungeon(UDS_VM_Dungeon *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon__6B_;
  (this->DungeonList_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_DungeonList *)0x0;
  (this->DungeonDetailInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_DetailInfo *)0x0;
  (this->DungeonRaidParty_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_RaidParty *)0x0;
  return this;
}

// UDS_VM_Dungeon @ 14b63a8d0

UDS_VM_Dungeon * __thiscall
UDS_VM_Dungeon::UDS_VM_Dungeon(UDS_VM_Dungeon *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon__6B_;
  (this->DungeonList_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_DungeonList *)0x0;
  (this->DungeonDetailInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_DetailInfo *)0x0;
  (this->DungeonRaidParty_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_RaidParty *)0x0;
  return this;
}

// ~UDS_VM_Dungeon @ 14b63cac0

void __thiscall UDS_VM_Dungeon::~UDS_VM_Dungeon(UDS_VM_Dungeon *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f450

IClassDescriptor * __thiscall UDS_VM_Dungeon::GetFieldNotificationDescriptor(UDS_VM_Dungeon *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b63fe50

UClass * __cdecl UDS_VM_Dungeon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Dungeon>,InternalVTableHelperCtorCaller<UDS_VM_Dungeon>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon @ 14b640ac0

void __cdecl UDS_VM_Dungeon::StaticRegisterNativesUDS_VM_Dungeon(void)

{
  return;
}

// BindModel @ 14be74aa0

void __thiscall UDS_VM_Dungeon::BindModel(UDS_VM_Dungeon *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedDungeonID,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Dungeon>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedDungeonID,(UDS_VM_Dungeon *)&stack0x00000010,(pmf_0b6c0fd1 *)this)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Dungeon>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyInfo,(UDS_VM_Dungeon *)&stack0x00000010,
               (pmf_33419acf *)this);
  }
  return;
}

// InitViewModel @ 14be8c180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_Dungeon::InitViewModel(UDS_VM_Dungeon *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_Dungeon_DungeonList *pUVar3;
  UDS_VM_Dungeon_DetailInfo *pUVar4;
  UDS_VM_Dungeon_RaidParty *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((this->DungeonList_ViewModel).field0_0x0.DebugPtr == (UDS_VM_Dungeon_DungeonList *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_Dungeon_DungeonList_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_Dungeon_DungeonList_NoRegister();
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
    pUVar3 = (UDS_VM_Dungeon_DungeonList *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar3 != (UDS_VM_Dungeon_DungeonList *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_Dungeon_DungeonList *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->DungeonList_ViewModel).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->DungeonDetailInfo_ViewModel).field0_0x0.DebugPtr == (UDS_VM_Dungeon_DetailInfo *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_Dungeon_DetailInfo_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_Dungeon_DetailInfo_NoRegister();
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
    pUVar4 = (UDS_VM_Dungeon_DetailInfo *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar4 != (UDS_VM_Dungeon_DetailInfo *)0x0) {
      *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_Dungeon_DetailInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->DungeonDetailInfo_ViewModel).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->DungeonRaidParty_ViewModel).field0_0x0.DebugPtr == (UDS_VM_Dungeon_RaidParty *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_Dungeon_RaidParty_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_Dungeon_RaidParty_NoRegister();
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
    pUVar5 = (UDS_VM_Dungeon_RaidParty *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_Dungeon_RaidParty *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_Dungeon_RaidParty *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->DungeonRaidParty_ViewModel).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnChangedRaidPartyInfo @ 14be915b0

void __thiscall UDS_VM_Dungeon::OnChangedRaidPartyInfo(UDS_VM_Dungeon *this)

{
  bool bVar1;
  UDS_DungeonManager *pUVar2;
  FDS_RaidPartyRepo *pFVar3;
  FDS_DungeonBaseTableRow *pFVar4;
  FDS_DungeonBaseTableRow *pFVar5;
  FName local_18;
  int local_10;
  
  pUVar2 = UDS_DungeonManager::GetInst();
  if (pUVar2 == (UDS_DungeonManager *)0x0) {
    return;
  }
  pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar3);
  if (bVar1) {
    pFVar4 = FDS_DungeonBaseTableRow::GetRef((longlong)pUVar2->SelectedDungeonID,true);
    pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar5 = FDS_DungeonBaseTableRow::GetRef((longlong)(pFVar3->RaidPartyInfo).DungeonId,true);
    local_10 = FFieldNotificationClassDescriptor::RaidPartySwitcher.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::RaidPartySwitcher.FieldName;
    if (pFVar4->DungeonType == pFVar5->DungeonType) {
      if (this->RaidPartySwitcher == 1) {
        return;
      }
      this->RaidPartySwitcher = 1;
      goto LAB_14be9164b;
    }
  }
  local_10 = FFieldNotificationClassDescriptor::RaidPartySwitcher.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RaidPartySwitcher.FieldName;
  if (this->RaidPartySwitcher == 0) {
    return;
  }
  this->RaidPartySwitcher = 0;
LAB_14be9164b:
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCloseInit @ 14be97610

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_Dungeon::OnCloseInit(UDS_VM_Dungeon *this)

{
  UDS_ViewerManager *this_00;
  
  this_00 = UDS_ViewerManager::GetInst();
  if (this_00 != (UDS_ViewerManager *)0x0) {
    UDS_ViewerManager::CloseViewerScene(this_00);
  }
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  return;
}

// OnSelectedDungeon @ 14be9c770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Dungeon::OnSelectedDungeon(UDS_VM_Dungeon *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_ViewerManager *this_00;
  UDS_LogManager *pUVar3;
  FDS_DungeonBaseTableRow *pFVar4;
  FDS_NpcBaseTableRow *pFVar5;
  undefined1 auStackY_3c8 [32];
  int local_388 [4];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  this_00 = UDS_ViewerManager::GetInst();
  if (this_00 == (UDS_ViewerManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1488099704414666868>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Dungeon\\DS_VM_Dungeon.cpp"
                       ,0x74,"viewerManager");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"UDS_VM_Dungeon::OnSelectedDungeon",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_378.Ptr,0x76,L"viewerManager is nullptr");
      if ((void *)local_378._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
  }
  else {
    local_388[1] = 4;
    UDS_ViewerManager::OpenViewerScene(this_00,(EDS_ViewerSceneType *)(local_388 + 1));
    UDS_ViewerManager::RefreshViewerCamera(this_00);
    pFVar4 = FDS_DungeonBaseTableRow::Get((longlong)param_1,true);
    if (pFVar4 == (FDS_DungeonBaseTableRow *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"UDS_VM_Dungeon::OnSelectedDungeon",0x21,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_258.Ptr,0x80,
                   L"dungeonBaseTableRow is nullptr (DungeonID : %d)");
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
      }
    }
    else {
      local_388[0] = pFVar4->ID_BackGroundNpc;
      pFVar5 = FDS_NpcBaseTableRow::Get((longlong)local_388[0],true);
      if (pFVar5 == (FDS_NpcBaseTableRow *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_VM_Dungeon::OnSelectedDungeon",0x21,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_138.Ptr,0x88,L"npcBaseTableRow is nullptr (npcID : %d)")
          ;
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        UDS_ViewerManager::SetViewerNpc(this_00,local_388,0);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14be9d3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon::OnSetViewModel(UDS_VM_Dungeon *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_Dungeon_DungeonList *this_00;
  UDS_VM_Dungeon_DetailInfo *this_01;
  UDS_VM_Dungeon_RaidParty *this_02;
  UDS_LogManager *pUVar2;
  UDS_DungeonManager *pUVar3;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_168.Object = param_1->Object;
  local_168.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_158,&local_168);
  if (local_158.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Dungeon::OnSetViewModel",0x1e,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x1b,L"contentsOpenContext is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this_00 = (this->DungeonList_ViewModel).field0_0x0.DebugPtr;
    if (this_00 != (UDS_VM_Dungeon_DungeonList *)0x0) {
      local_168.Object = (FDS_ViewModelContext *)local_158.Object;
      local_168.SharedReferenceCount.ReferenceController =
           local_158.SharedReferenceCount.ReferenceController;
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_168);
    }
    this_01 = (this->DungeonDetailInfo_ViewModel).field0_0x0.DebugPtr;
    if (this_01 != (UDS_VM_Dungeon_DetailInfo *)0x0) {
      local_168.Object = (FDS_ViewModelContext *)local_158.Object;
      local_168.SharedReferenceCount.ReferenceController =
           local_158.SharedReferenceCount.ReferenceController;
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_168);
    }
    this_02 = (this->DungeonRaidParty_ViewModel).field0_0x0.DebugPtr;
    if (this_02 != (UDS_VM_Dungeon_RaidParty *)0x0) {
      local_168.Object = (FDS_ViewModelContext *)local_158.Object;
      local_168.SharedReferenceCount.ReferenceController =
           local_158.SharedReferenceCount.ReferenceController;
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&local_168);
    }
    OnChangedRaidPartyInfo(this);
    pUVar3 = UDS_DungeonManager::GetInst();
    if (pUVar3 != (UDS_DungeonManager *)0x0) {
      OnSelectedDungeon(this,pUVar3->SelectedDungeonID);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetRaidPartySwitcher @ 14beb3e00

void __thiscall UDS_VM_Dungeon::SetRaidPartySwitcher(UDS_VM_Dungeon *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::RaidPartySwitcher.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RaidPartySwitcher.FieldName;
  if (this->RaidPartySwitcher != *param_1) {
    this->RaidPartySwitcher = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bebbb00

void __thiscall UDS_VM_Dungeon::UnbindModel(UDS_VM_Dungeon *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedDungeonID,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
  }
  return;
}

