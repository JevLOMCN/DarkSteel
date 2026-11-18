// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b6fac40

UClass * __cdecl UDS_VM_WorldBoss::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_WorldBoss>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss.InnerSingleton;
}

// UDS_VM_WorldBoss @ 14b700540

UDS_VM_WorldBoss * __thiscall
UDS_VM_WorldBoss::UDS_VM_WorldBoss(UDS_VM_WorldBoss *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss__6B_;
  (this->WorldBossList_ViewModel).field0_0x0.DebugPtr = (UDS_VM_WorldBoss_WorldBossList *)0x0;
  (this->WorldBossInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_WorldBoss_Info *)0x0;
  return this;
}

// UDS_VM_WorldBoss @ 14b700590

UDS_VM_WorldBoss * __thiscall
UDS_VM_WorldBoss::UDS_VM_WorldBoss(UDS_VM_WorldBoss *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss__6B_;
  (this->WorldBossList_ViewModel).field0_0x0.DebugPtr = (UDS_VM_WorldBoss_WorldBossList *)0x0;
  (this->WorldBossInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_WorldBoss_Info *)0x0;
  return this;
}

// ~UDS_VM_WorldBoss @ 14b702d90

void __thiscall UDS_VM_WorldBoss::~UDS_VM_WorldBoss(UDS_VM_WorldBoss *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b705eb0

IClassDescriptor * __thiscall
UDS_VM_WorldBoss::GetFieldNotificationDescriptor(UDS_VM_WorldBoss *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldBoss::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b706950

UClass * __cdecl UDS_VM_WorldBoss::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_WorldBoss>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldBoss @ 14b707680

void __cdecl UDS_VM_WorldBoss::StaticRegisterNativesUDS_VM_WorldBoss(void)

{
  return;
}

// BindModel @ 14c003bc0

void __thiscall UDS_VM_WorldBoss::BindModel(UDS_VM_WorldBoss *this)

{
  UDS_WorldBossEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldBossEvent::GetEvent();
  if (pUVar1 != (UDS_WorldBossEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedWorldBoss,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldBoss>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedWorldBoss,(UDS_VM_WorldBoss *)&stack0x00000010,
               (pmf_0ceebdec *)this);
  }
  return;
}

// InitViewModel @ 14c01f340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_WorldBoss::InitViewModel(UDS_VM_WorldBoss *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_WorldBoss_WorldBossList *pUVar3;
  UDS_VM_WorldBoss_Info *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->WorldBossList_ViewModel).field0_0x0.DebugPtr == (UDS_VM_WorldBoss_WorldBossList *)0x0)
  {
    local_a8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_WorldBoss_WorldBossList_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_WorldBoss_WorldBossList_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar3 = (UDS_VM_WorldBoss_WorldBossList *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (pUVar3 != (UDS_VM_WorldBoss_WorldBossList *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_WorldBoss_WorldBossList *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->WorldBossList_ViewModel).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->WorldBossInfo_ViewModel).field0_0x0.DebugPtr == (UDS_VM_WorldBoss_Info *)0x0) {
    local_a8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_WorldBoss_Info_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_WorldBoss_Info_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar4 = (UDS_VM_WorldBoss_Info *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (pUVar4 != (UDS_VM_WorldBoss_Info *)0x0) {
      *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_WorldBoss_Info *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->WorldBossInfo_ViewModel).field0_0x0.DebugPtr = pUVar4;
  }
  return;
}

// OnCloseInit @ 14c028890

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_WorldBoss::OnCloseInit(UDS_VM_WorldBoss *this)

{
  UDS_ViewerManager *this_00;
  
  this_00 = UDS_ViewerManager::GetInst();
  if ((this_00 != (UDS_ViewerManager *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
    UDS_ViewerManager::CloseViewerScene(this_00);
    UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
    return;
  }
  return;
}

// OnSelectedWorldBoss @ 14c02f720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldBoss::OnSelectedWorldBoss(UDS_VM_WorldBoss *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_WorldBossManager *pUVar3;
  UDS_ViewerManager *this_00;
  UDS_LogManager *pUVar4;
  FDS_WorldBossTableRow *pFVar5;
  FDS_NpcBaseTableRow *pFVar6;
  void *pvVar7;
  undefined1 auStackY_4e8 [32];
  int local_4a8 [4];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_498;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  pUVar3 = UDS_WorldBossManager::GetInst();
  if ((pUVar3 == (UDS_WorldBossManager *)0x0) || (((uint)pUVar3->_padding_ >> 0x1e & 1) != 0)) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldBoss::OnSelectedWorldBoss",0x25,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x67,L"UDS_WorldBossManager is nullptr")
    ;
    pvVar7 = (void *)local_138._padding_;
  }
  else {
    this_00 = UDS_ViewerManager::GetInst();
    if (this_00 == (UDS_ViewerManager *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4167237210589888620>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\WorldBoss\\DS_VM_WorldBoss.cpp"
                         ,0x6c,"viewerManager");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_498._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_498,"UDS_VM_WorldBoss::OnSelectedWorldBoss",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_498.Ptr,0x6e,L"UDS_ViewerManager is nullptr");
      pvVar7 = (void *)local_498._padding_;
    }
    else {
      local_4a8[1] = 4;
      UDS_ViewerManager::OpenViewerScene(this_00,(EDS_ViewerSceneType *)(local_4a8 + 1));
      UDS_ViewerManager::RefreshViewerCamera(this_00);
      pFVar5 = FDS_WorldBossTableRow::Get((longlong)param_1,true);
      if (pFVar5 == (FDS_WorldBossTableRow *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar4 = UDS_LogManager::GetInst();
        local_378._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_378,"UDS_VM_WorldBoss::OnSelectedWorldBoss",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_378.Ptr,0x78,
                   L"worldBossTableRow is nullptr (worldBoss ID : %d)");
        pvVar7 = (void *)local_378._padding_;
      }
      else {
        local_4a8[0] = pFVar5->ID_NpcBase;
        pFVar6 = FDS_NpcBaseTableRow::Get((longlong)local_4a8[0],true);
        if (pFVar6 != (FDS_NpcBaseTableRow *)0x0) {
          UDS_ViewerManager::SetViewerNpc(this_00,local_4a8,0);
          return;
        }
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar4 = UDS_LogManager::GetInst();
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"UDS_VM_WorldBoss::OnSelectedWorldBoss",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_258.Ptr,0x80,L"npcBaseTableRow is nullptr (npcID : %d)");
        pvVar7 = (void *)local_258._padding_;
      }
    }
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  return;
}

// OnSetViewModel @ 14c036b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldBoss::OnSetViewModel(UDS_VM_WorldBoss *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_WorldBoss_WorldBossList *this_00;
  UDS_VM_WorldBoss_Info *this_01;
  UDS_LogManager *pUVar2;
  UDS_WorldBossManager *pUVar3;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_148,&local_158);
  if (local_148.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14c036d0f;
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldBoss::OnSetViewModel",0x20,Yes);
    pwVar5 = L"contentsOpenContext is nullptr";
    uVar4 = 0x1a;
  }
  else {
    this_00 = (this->WorldBossList_ViewModel).field0_0x0.DebugPtr;
    if (this_00 != (UDS_VM_WorldBoss_WorldBossList *)0x0) {
      local_158.Object = param_1->Object;
      local_158.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_158);
    }
    this_01 = (this->WorldBossInfo_ViewModel).field0_0x0.DebugPtr;
    if (this_01 != (UDS_VM_WorldBoss_Info *)0x0) {
      local_158.Object = param_1->Object;
      local_158.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_158);
    }
    pUVar3 = UDS_WorldBossManager::GetInst();
    if ((pUVar3 != (UDS_WorldBossManager *)0x0) && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) {
      OnSelectedWorldBoss(this,pUVar3->SelectedWorldBossID);
      goto LAB_14c036d0f;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14c036d0f;
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldBoss::OnSetViewModel",0x20,Yes);
    pwVar5 = L"UDS_WorldBossManager is nullptr";
    uVar4 = 0x2b;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14c036d0f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14c049050

void __thiscall UDS_VM_WorldBoss::UnbindModel(UDS_VM_WorldBoss *this)

{
  UDS_WorldBossEvent *pUVar1;
  
  pUVar1 = UDS_WorldBossEvent::GetEvent();
  if (pUVar1 != (UDS_WorldBossEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedWorldBoss,
               this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

