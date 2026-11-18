// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b792990

UClass * __cdecl UDS_ZoneManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ZoneManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ZoneManager",
               &Z_Registration_Info_UClass_UDS_ZoneManager.InnerSingleton,
               StaticRegisterNativesUDS_ZoneManager,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ZoneManager>,InternalVTableHelperCtorCaller<UDS_ZoneManager>,
               local_res8,UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ZoneManager.InnerSingleton;
}

// UDS_ZoneManager @ 14b79b780

UDS_ZoneManager * __thiscall
UDS_ZoneManager::UDS_ZoneManager(UDS_ZoneManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ZoneManager__6B_;
  this->ZoneID = 0;
  (this->ZoneChangeAbleTime).Ticks = 0;
  this->MiddleZoneID = 0;
  this->DistrictID = 0;
  this->IslandID = 0;
  this->ZoneGroupID = 0;
  this->ZoneVisibleType = 0;
  this->PrevDistrictID = 0;
  *(undefined8 *)&this->IslandIdChangeDelegate = 0;
  *(undefined8 *)&(this->IslandIdChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->IslandIdChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ZoneGroupIdChangeDelegate = 0;
  *(undefined8 *)&(this->ZoneGroupIdChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ZoneGroupIdChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ZoneIdChangeDelegate = 0;
  *(undefined8 *)&(this->ZoneIdChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ZoneIdChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->DistrictIdChangeDelegate = 0;
  *(undefined8 *)&(this->DistrictIdChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->DistrictIdChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ZoneDistrictChangedDelegate = 0;
  *(undefined8 *)&(this->ZoneDistrictChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ZoneDistrictChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ZoneDistrictChangedDelegate).field_0x18 = 2;
  return this;
}

// UDS_ZoneManager @ 14b79b830

UDS_ZoneManager * __thiscall
UDS_ZoneManager::UDS_ZoneManager(UDS_ZoneManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ZoneManager__6B_;
  this->ZoneID = 0;
  (this->ZoneChangeAbleTime).Ticks = 0;
  this->MiddleZoneID = 0;
  this->DistrictID = 0;
  this->IslandID = 0;
  this->ZoneGroupID = 0;
  this->ZoneVisibleType = 0;
  this->PrevDistrictID = 0;
  *(undefined8 *)&this->IslandIdChangeDelegate = 0;
  *(undefined8 *)&(this->IslandIdChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->IslandIdChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ZoneGroupIdChangeDelegate = 0;
  *(undefined8 *)&(this->ZoneGroupIdChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ZoneGroupIdChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ZoneIdChangeDelegate = 0;
  *(undefined8 *)&(this->ZoneIdChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ZoneIdChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->DistrictIdChangeDelegate = 0;
  *(undefined8 *)&(this->DistrictIdChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->DistrictIdChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ZoneDistrictChangedDelegate = 0;
  *(undefined8 *)&(this->ZoneDistrictChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ZoneDistrictChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ZoneDistrictChangedDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_ZoneManager @ 14b79b9e0

void __thiscall UDS_ZoneManager::~UDS_ZoneManager(UDS_ZoneManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ZoneManager__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ZoneDistrictChangedDelegate).field_0x8,
             *(int *)&(this->ZoneDistrictChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ZoneDistrictChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ZoneDistrictChangedDelegate);
  pvVar1 = *(void **)&(this->DistrictIdChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DistrictIdChangeDelegate);
  pvVar1 = *(void **)&(this->ZoneIdChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ZoneIdChangeDelegate);
  pvVar1 = *(void **)&(this->ZoneGroupIdChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ZoneGroupIdChangeDelegate);
  pvVar1 = *(void **)&(this->IslandIdChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->IslandIdChangeDelegate);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b7acd80

UClass * __cdecl UDS_ZoneManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ZoneManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ZoneManager",
               &Z_Registration_Info_UClass_UDS_ZoneManager.InnerSingleton,
               StaticRegisterNativesUDS_ZoneManager,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ZoneManager>,InternalVTableHelperCtorCaller<UDS_ZoneManager>,
               local_res8,UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ZoneManager.InnerSingleton;
}

// StaticRegisterNativesUDS_ZoneManager @ 14b7c5d30

void __cdecl UDS_ZoneManager::StaticRegisterNativesUDS_ZoneManager(void)

{
  return;
}

// Created @ 14bb5ce20

void __thiscall UDS_ZoneManager::Created(UDS_ZoneManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  this->ZoneID = 0;
  this->MiddleZoneID = 0;
  this->DistrictID = 0;
  this->IslandID = 0;
  return;
}

// Destroyed @ 14bb5da70

void __thiscall UDS_ZoneManager::Destroyed(UDS_ZoneManager *this)

{
  return;
}

// GetCurZoneBaseTableRow @ 14bb649f0

FDS_ZoneBaseTableRow * __thiscall UDS_ZoneManager::GetCurZoneBaseTableRow(UDS_ZoneManager *this)

{
  FDS_ZoneBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ZoneBaseTableRow::GetRef((ulonglong)this->ZoneID,true);
  return pFVar1;
}

// GetInst @ 14bb66640

UDS_ZoneManager * __cdecl UDS_ZoneManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_ZoneManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_ZoneManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_ZoneManager_NoRegister();
  pUVar3 = (UDS_ZoneManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_ZoneManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_ZoneManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_ZoneManager *)0x0;
}

// Init @ 14bb6ab90

void __thiscall UDS_ZoneManager::Init(UDS_ZoneManager *this)

{
  return;
}

// IsCooltimeCheck @ 14bb6eb40

bool __thiscall UDS_ZoneManager::IsCooltimeCheck(UDS_ZoneManager *this)

{
  longlong lVar1;
  FDateTime *pFVar2;
  float fVar3;
  double dVar4;
  undefined1 extraout_var [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  FDateTime local_res8;
  
  dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
  dVar4 = dVar4 * __real_416312d000000000;
  pFVar2 = FDateTime::FDateTime(&local_res8,0x7b2,1,1,0,0,0,0);
  if (pFVar2->Ticks + (longlong)dVar4 < (this->ZoneChangeAbleTime).Ticks) {
    return false;
  }
  dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
  dVar4 = dVar4 * __real_416312d000000000;
  pFVar2 = FDateTime::FDateTime(&local_res8,0x7b2,1,1,0,0,0,0);
  lVar1 = pFVar2->Ticks;
  fVar3 = DS_CommonDataHelper::ZoneEntranceUiCoolTime();
  auVar5._8_8_ = extraout_var._4_8_;
  auVar5._0_8_ = (double)(fVar3 * __real_4b189680 + __real_3f000000);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auVar5._0_8_;
  auVar6 = roundpd(auVar5,auVar6,1);
  (this->ZoneChangeAbleTime).Ticks = (longlong)auVar6._0_8_ + (longlong)dVar4 + lVar1;
  return true;
}

// JoinMapResponseProcess @ 14bb6fb80

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
UDS_ZoneManager::JoinMapResponseProcess(UDS_ZoneManager *this,JoinMapResponse *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  FDS_ZoneBaseTableRow *pFVar7;
  UDS_TableManager *this_00;
  FTimerManager *this_01;
  undefined8 *puVar8;
  ulong64 uVar9;
  float fVar10;
  UDS_ZoneManager *local_res10;
  FTimerHandle local_res18 [2];
  FDelegateAllocation local_58 [2];
  
  if ((param_1->_impl_).error_code_ == 1) {
    puVar1 = &this->ZoneID;
    this->ZoneVisibleType = 0;
    uVar2 = (param_1->_impl_).zone_id_;
    if (*puVar1 != uVar2) {
      *puVar1 = uVar2;
      FDS_ModelPropertyDelegate_uint32_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ZoneIdChangeDelegate
                 ,puVar1);
      pFVar7 = FDS_ZoneBaseTableRow::GetRef((ulonglong)*puVar1,true);
      puVar1 = &this->ZoneGroupID;
      uVar2 = *(uint *)((longlong)&pFVar7->_padding_ + 4);
      if (*puVar1 != uVar2) {
        *puVar1 = uVar2;
        FDS_ModelPropertyDelegate_uint32_DelegateWrapper
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   &this->ZoneGroupIdChangeDelegate,puVar1);
        this->ZoneVisibleType = this->ZoneVisibleType | 8;
      }
      this->ZoneVisibleType = this->ZoneVisibleType | 6;
    }
    uVar2 = (param_1->_impl_).district_id_;
    if (this->DistrictID != uVar2) {
      this->PrevDistrictID = this->DistrictID;
      this->DistrictID = uVar2;
      FDS_ModelPropertyDelegate_uint32_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->DistrictIdChangeDelegate,&this->DistrictID);
      this->ZoneVisibleType = this->ZoneVisibleType | 6;
    }
    uVar2 = (param_1->_impl_).island_id_;
    if (this->IslandID != uVar2) {
      this_00 = UDS_TableManager::GetInst();
      if (this_00 != (UDS_TableManager *)0x0) {
        UDS_TableManager::RefreshZoneTable(this_00,Island,uVar2);
      }
      this->IslandID = uVar2;
      FDS_ModelPropertyDelegate_uint32_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->IslandIdChangeDelegate,&this->IslandID);
      this->ZoneVisibleType = this->ZoneVisibleType | 7;
    }
    TMulticastDelegate<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>::
    Broadcast(&this->ZoneDistrictChangedDelegate,this->ZoneID,this->DistrictID);
    bVar6 = IsCooltimeCheck(this);
    if (bVar6) {
      uVar2 = this->ZoneID;
      uVar3 = this->DistrictID;
      uVar4 = this->IslandID;
      uVar5 = this->ZoneVisibleType;
      local_res18[0].Handle = 0;
      this_01 = FDS_TimerManager::Get((UObject *)0x0);
      fVar10 = DS_CommonDataHelper::MapNameDelay();
      local_58[0].DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_58[0].DelegateSize = 0;
      puVar8 = UE::Core::Private::DelegateAllocate(0x30,local_58);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFDS_ZoneInfoData____6B_
        ;
        *(uint *)(puVar8 + 1) = uVar2;
        *(uint *)((longlong)puVar8 + 0xc) = uVar3;
        *(uint *)(puVar8 + 2) = uVar4;
        *(uint *)((longlong)puVar8 + 0x14) = uVar5;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[3] = uVar9;
        *puVar8 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ZoneManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFDS_ZoneInfoData____6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar8[4] = 0;
        local_res10 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 4),(FObjectPtr)&local_res10);
        puVar8[5] = OpenZoneInfoHud;
      }
      FTimerManager::SetTimer
                (this_01,local_res18,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 local_58,fVar10,false,__real_bf800000);
      if (local_58[0].DelegateSize != 0) {
        if (local_58[0].DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          return;
        }
        (*(code *)**(undefined8 **)local_58[0].DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)local_58,0,0,0x10);
        local_58[0].DelegateSize = 0;
      }
      if (local_58[0].DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_58[0].DelegateAllocator);
      }
    }
  }
  return;
}

// OnOpenMiddleZoneInfoWindow @ 14bb749c0

void __thiscall
UDS_ZoneManager::OnOpenMiddleZoneInfoWindow
          (UDS_ZoneManager *this,UDS_UserWidget *param_1,int param_2)

{
  code *pcVar1;
  FDS_ViewModelContext_ZoneInfo *pFVar2;
  bool bVar3;
  FWeakObjectPtr local_res10 [2];
  UDS_UserWidget *local_res20;
  TSharedPtr<FDS_ViewModelContext_ZoneInfo,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    MakeContext<FDS_ViewModelContext_ZoneInfo>(&local_38);
    pFVar2 = local_38.Object;
    if (local_38.Object == (FDS_ViewModelContext_ZoneInfo *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2->ZoneVisibleType = 2;
    pFVar2->TableType = 0x121;
    *(undefined4 *)&pFVar2->_padding_ = 0x26;
    pFVar2->ZoneId = this->MiddleZoneID;
    local_28.Object = (FDS_ViewModelContext *)local_38.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    pFVar2->ZoneDeathPenaltyID = param_2;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10[0].ObjectIndex = 0;
    local_res10[0].ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10[0],&local_28,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnOpenZoneInfoWindow @ 14bb76410

void __thiscall
UDS_ZoneManager::OnOpenZoneInfoWindow
          (UDS_ZoneManager *this,UDS_UserWidget *param_1,FDS_ZoneInfoData *param_2)

{
  uint uVar1;
  code *pcVar2;
  FDS_ViewModelContext_ZoneInfo *pFVar3;
  bool bVar4;
  FDS_ZoneBaseTableRow *this_00;
  FWeakObjectPtr local_res10 [2];
  UDS_UserWidget *local_res20;
  TSharedPtr<FDS_ViewModelContext_ZoneInfo,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    MakeContext<FDS_ViewModelContext_ZoneInfo>(&local_38);
    pFVar3 = local_38.Object;
    if (local_38.Object == (FDS_ViewModelContext_ZoneInfo *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar1 = param_2->IslandID;
    *(undefined4 *)&pFVar3->_padding_ = 0x26;
    pFVar3->TableType = 0x149;
    pFVar3->IslandId = uVar1;
    pFVar3->ZoneId = param_2->ZoneID;
    pFVar3->DistrictId = param_2->DistrictID;
    pFVar3->ZoneVisibleType = param_2->ZoneVisibleType;
    this_00 = FDS_ZoneBaseTableRow::GetRef((ulonglong)this->ZoneID,true);
    bVar4 = FDS_ZoneBaseTableRow::IsValid(this_00);
    if (bVar4) {
      pFVar3->ZoneDeathPenaltyID = this_00->ID_DeathPenalty;
    }
    local_28.Object = (FDS_ViewModelContext *)local_38.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10[0].ObjectIndex = 0;
    local_res10[0].ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10[0],&local_28,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OpenZoneInfoHud @ 14bb7c140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ZoneManager::OpenZoneInfoHud(UDS_ZoneManager *this,FDS_ZoneInfoData *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UDS_WindowManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  UDS_ZoneManager *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14bb7c336;
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
LAB_14bb7c336:
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ZoneManager::OpenZoneInfoHud",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x111,L"windowManager is nullptr.");
      if ((void *)local_148._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_148._padding_);
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_188 = (undefined1  [8])0x0;
  local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_180.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
             (FWriteAccessScope *)&local_170);
  local_158 = &local_180;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_180);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)param_1;
    uVar2 = *(undefined8 *)&param_1->IslandID;
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__UFDS_ZoneInfoData____6B_
    ;
    puVar3[1] = uVar1;
    puVar3[2] = uVar2;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[3] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ZoneManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__UFDS_ZoneInfoData____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ZoneManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[4] = 0;
    local_150 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ZoneManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 4),(FObjectPtr)&local_150);
    puVar3[5] = OnOpenZoneInfoWindow;
  }
  if (local_170.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
  }
  pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                     ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                      &local_170,
                      (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                      local_188);
  UDS_WindowManager::OpenWindow(this_00,HUDZoneInfo,pTVar5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
             (FWriteAccessScope *)&local_170);
  if ((local_180.DelegateSize != 0) &&
     (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_180,0,0,0x10);
    local_180.DelegateSize = 0;
  }
  if (local_170.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
  }
  if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_180.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_188);
  return;
}

// SetDistrictID @ 14bb8a470

void __thiscall UDS_ZoneManager::SetDistrictID(UDS_ZoneManager *this,uint *param_1)

{
  if (this->DistrictID != *param_1) {
    this->PrevDistrictID = this->DistrictID;
    this->DistrictID = *param_1;
    FDS_ModelPropertyDelegate_uint32_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->DistrictIdChangeDelegate,&this->DistrictID);
    this->ZoneVisibleType = this->ZoneVisibleType | 6;
  }
  return;
}

// SetIslandID @ 14bb8af90

void __thiscall UDS_ZoneManager::SetIslandID(UDS_ZoneManager *this,uint *param_1)

{
  UDS_TableManager *this_00;
  
  if (this->IslandID != *param_1) {
    this_00 = UDS_TableManager::GetInst();
    if (this_00 != (UDS_TableManager *)0x0) {
      UDS_TableManager::RefreshZoneTable(this_00,Island,*param_1);
    }
    this->IslandID = *param_1;
    FDS_ModelPropertyDelegate_uint32_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->IslandIdChangeDelegate
               ,&this->IslandID);
    this->ZoneVisibleType = this->ZoneVisibleType | 7;
  }
  return;
}

// SetMiddleZoneID @ 14bb8b090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ZoneManager::SetMiddleZoneID(UDS_ZoneManager *this,int param_1,int param_2)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  UDS_ZoneManager *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (this->MiddleZoneID == param_1) {
    return;
  }
  this->MiddleZoneID = param_1;
  bVar1 = IsCooltimeCheck(this);
  if (!bVar1) {
    return;
  }
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 != (UDS_WindowManager *)0x0) goto LAB_14bb8b10a;
  }
  else if (this_00 != (UDS_WindowManager *)0x0) {
    UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14bb8b10a:
    local_188 = (undefined1  [8])0x0;
    local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_180.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_170);
    local_158 = &local_180;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_180);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      *(int *)(puVar2 + 1) = param_2;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ZoneManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_150 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_150);
      puVar2[4] = OnOpenMiddleZoneInfoWindow;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_170,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_188);
    UDS_WindowManager::OpenWindow(this_00,HUDZoneInfo,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_170);
    if ((local_180.DelegateSize != 0) &&
       (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_180,0,0,0x10);
      local_180.DelegateSize = 0;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_180.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_188);
    return;
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ZoneManager::SetMiddleZoneID",0x20,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0xb7,L"windowManager is nullptr.");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return;
}

// SetZoneID @ 14bb8e600

void __thiscall UDS_ZoneManager::SetZoneID(UDS_ZoneManager *this,uint param_1)

{
  uint *puVar1;
  uint uVar2;
  FDS_ZoneBaseTableRow *pFVar3;
  
  if (this->ZoneID != param_1) {
    this->ZoneID = param_1;
    FDS_ModelPropertyDelegate_uint32_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ZoneIdChangeDelegate,
               &this->ZoneID);
    pFVar3 = FDS_ZoneBaseTableRow::GetRef((ulonglong)this->ZoneID,true);
    puVar1 = &this->ZoneGroupID;
    uVar2 = *(uint *)((longlong)&pFVar3->_padding_ + 4);
    if (*puVar1 != uVar2) {
      *puVar1 = uVar2;
      FDS_ModelPropertyDelegate_uint32_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->ZoneGroupIdChangeDelegate,puVar1);
      this->ZoneVisibleType = this->ZoneVisibleType | 8;
    }
    this->ZoneVisibleType = this->ZoneVisibleType | 6;
  }
  return;
}

// ZoneIdChangeResponse @ 14bb99c30

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
UDS_ZoneManager::ZoneIdChangeResponse(UDS_ZoneManager *this,ZoneIdChangeResponse *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FDS_ZoneBaseTableRow *pFVar6;
  UDS_TableManager *this_00;
  FDS_ZoneDistrictTableRow *pFVar7;
  FTimerManager *this_01;
  undefined8 *puVar8;
  ulong64 uVar9;
  bool bVar10;
  float fVar11;
  UDS_ZoneManager *local_res8;
  FTimerHandle local_res10;
  FDelegateAllocation local_58 [2];
  
  this->ZoneVisibleType = 0;
  puVar1 = &this->ZoneID;
  uVar2 = (param_1->_impl_).zone_id_;
  if (*puVar1 != uVar2) {
    *puVar1 = uVar2;
    FDS_ModelPropertyDelegate_uint32_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ZoneIdChangeDelegate,
               puVar1);
    pFVar6 = FDS_ZoneBaseTableRow::GetRef((ulonglong)*puVar1,true);
    puVar1 = &this->ZoneGroupID;
    uVar2 = *(uint *)((longlong)&pFVar6->_padding_ + 4);
    if (*puVar1 != uVar2) {
      *puVar1 = uVar2;
      FDS_ModelPropertyDelegate_uint32_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->ZoneGroupIdChangeDelegate,puVar1);
      this->ZoneVisibleType = this->ZoneVisibleType | 8;
    }
    this->ZoneVisibleType = this->ZoneVisibleType | 6;
  }
  uVar2 = (param_1->_impl_).district_id_;
  if (this->DistrictID != uVar2) {
    this->PrevDistrictID = this->DistrictID;
    this->DistrictID = uVar2;
    FDS_ModelPropertyDelegate_uint32_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->DistrictIdChangeDelegate,&this->DistrictID);
    this->ZoneVisibleType = this->ZoneVisibleType | 6;
  }
  uVar2 = (param_1->_impl_).island_id_;
  if (this->IslandID != uVar2) {
    this_00 = UDS_TableManager::GetInst();
    if (this_00 != (UDS_TableManager *)0x0) {
      UDS_TableManager::RefreshZoneTable(this_00,Island,uVar2);
    }
    this->IslandID = uVar2;
    FDS_ModelPropertyDelegate_uint32_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->IslandIdChangeDelegate
               ,&this->IslandID);
    this->ZoneVisibleType = this->ZoneVisibleType | 7;
  }
  TMulticastDelegate<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>::Broadcast
            (&this->ZoneDistrictChangedDelegate,this->ZoneID,this->DistrictID);
  if ((this->ZoneVisibleType != 0) && (this->ZoneID != 0)) {
    uVar2 = this->DistrictID;
    if ((uVar2 != 0) && (this->PrevDistrictID != uVar2)) {
      if (uVar2 == (uVar2 / 1000) * 1000) {
        bVar10 = this->PrevDistrictID / 1000 == this->ZoneID;
      }
      else {
        pFVar7 = FDS_ZoneDistrictTableRow::GetRef((ulonglong)uVar2,true);
        bVar10 = pFVar7->IsDistrictName == false;
      }
      if (bVar10) {
        return;
      }
    }
    bVar10 = IsCooltimeCheck(this);
    if (bVar10) {
      uVar2 = this->IslandID;
      uVar3 = this->ZoneID;
      uVar4 = this->DistrictID;
      uVar5 = this->ZoneVisibleType;
      local_res10.Handle = 0;
      this_01 = FDS_TimerManager::Get((UObject *)0x0);
      fVar11 = DS_CommonDataHelper::MapNameDelay();
      local_58[0].DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_58[0].DelegateSize = 0;
      puVar8 = UE::Core::Private::DelegateAllocate(0x30,local_58);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFDS_ZoneInfoData____6B_
        ;
        *(uint *)(puVar8 + 1) = uVar3;
        *(uint *)((longlong)puVar8 + 0xc) = uVar4;
        *(uint *)(puVar8 + 2) = uVar2;
        *(uint *)((longlong)puVar8 + 0x14) = uVar5;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[3] = uVar9;
        *puVar8 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ZoneManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFDS_ZoneInfoData____6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar8[4] = 0;
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 4),(FObjectPtr)&local_res8);
        puVar8[5] = OpenZoneInfoHud;
      }
      FTimerManager::SetTimer
                (this_01,&local_res10,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 local_58,fVar11,false,__real_bf800000);
      if (local_58[0].DelegateSize != 0) {
        if (local_58[0].DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          return;
        }
        (*(code *)**(undefined8 **)local_58[0].DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)local_58,0,0,0x10);
        local_58[0].DelegateSize = 0;
      }
      if (local_58[0].DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_58[0].DelegateAllocator);
      }
    }
  }
  return;
}

