// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// StaticClass @ 14b557c50

UClass * __cdecl UDS_PKDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PKDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PKDataSet",
               &Z_Registration_Info_UClass_UDS_PKDataSet.InnerSingleton,
               StaticRegisterNativesUDS_PKDataSet,0x208,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_PKDataSet>,InternalVTableHelperCtorCaller<UDS_PKDataSet>,
               local_res8,UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PKDataSet.InnerSingleton;
}

// UDS_PKDataSet @ 14b559fb0

UDS_PKDataSet * __thiscall UDS_PKDataSet::UDS_PKDataSet(UDS_PKDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PKDataSet__6B_;
  *(undefined8 *)&this->Delegate_PKMode = 0;
  *(undefined8 *)&(this->Delegate_PKMode).field_0x8 = 0;
  *(undefined8 *)&(this->Delegate_PKMode).field_0x10 = 0;
  *(undefined8 *)&this->Delegate_ForceAttack = 0;
  *(undefined8 *)&(this->Delegate_ForceAttack).field_0x8 = 0;
  *(undefined8 *)&(this->Delegate_ForceAttack).field_0x10 = 0;
  *(undefined8 *)&this->ForceAttackMap = 0;
  *(undefined8 *)&(this->ForceAttackMap).field_0x8 = 0;
  *(undefined8 *)&(this->ForceAttackMap).field_0x20 = 0;
  *(undefined8 *)&(this->Delegate_PKMode).field_0x18 = 2;
  *(undefined8 *)&(this->Delegate_ForceAttack).field_0x18 = 2;
  *(undefined4 *)&(this->ForceAttackMap).field_0x28 = 0;
  *(undefined4 *)&(this->ForceAttackMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ForceAttackMap).field_0x34 = 0;
  *(undefined4 *)&(this->ForceAttackMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ForceAttackMap).field_0x40 = 0;
  *(undefined4 *)&(this->ForceAttackMap).field_0x48 = 0;
  *(undefined8 *)&this->PCAttackMap = 0;
  *(undefined8 *)&(this->PCAttackMap).field_0x8 = 0;
  *(undefined8 *)&(this->PCAttackMap).field_0x20 = 0;
  *(undefined4 *)&(this->PCAttackMap).field_0x28 = 0;
  *(undefined4 *)&(this->PCAttackMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PCAttackMap).field_0x34 = 0;
  *(undefined4 *)&(this->PCAttackMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PCAttackMap).field_0x40 = 0;
  *(undefined4 *)&(this->PCAttackMap).field_0x48 = 0;
  *(undefined8 *)&this->PCDefMap = 0;
  *(undefined8 *)&(this->PCDefMap).field_0x8 = 0;
  *(undefined8 *)&(this->PCDefMap).field_0x20 = 0;
  *(undefined4 *)&(this->PCDefMap).field_0x28 = 0;
  *(undefined4 *)&(this->PCDefMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PCDefMap).field_0x34 = 0;
  *(undefined4 *)&(this->PCDefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PCDefMap).field_0x40 = 0;
  *(undefined4 *)&(this->PCDefMap).field_0x48 = 0;
  this->PKMode = None;
  this->CriminalPoint = 0;
  this->RecentFirstAttackCharUID = 0;
  this->RecentFirstAttackValidTime = 0.0;
  this->MyCharFirstAttackValidTime = 0.0;
  this->ForceAttackValidTime = 0x3c;
  return this;
}

// ~UDS_PKDataSet @ 14b55b420

void __thiscall UDS_PKDataSet::~UDS_PKDataSet(UDS_PKDataSet *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_PKDataSet__6B_;
  *(undefined4 *)&(this->PCDefMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PCDefMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PCDefMap);
  *(undefined4 *)&(this->PCAttackMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PCAttackMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PCAttackMap);
  *(undefined4 *)&(this->ForceAttackMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ForceAttackMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ForceAttackMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->Delegate_ForceAttack).field_0x8,
             *(int *)&(this->Delegate_ForceAttack).field_0x10);
  pvVar1 = *(void **)&(this->Delegate_ForceAttack).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Delegate_ForceAttack);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->Delegate_PKMode).field_0x8,*(int *)&(this->Delegate_PKMode).field_0x10);
  pvVar1 = *(void **)&(this->Delegate_PKMode).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Delegate_PKMode);
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b55cbf0

UClass * __cdecl UDS_PKDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PKDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PKDataSet",
               &Z_Registration_Info_UClass_UDS_PKDataSet.InnerSingleton,
               StaticRegisterNativesUDS_PKDataSet,0x208,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_PKDataSet>,InternalVTableHelperCtorCaller<UDS_PKDataSet>,
               local_res8,UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PKDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_PKDataSet @ 14b55d320

void __cdecl UDS_PKDataSet::StaticRegisterNativesUDS_PKDataSet(void)

{
  return;
}

// ClearFirstAttack @ 14ba39f80

void __thiscall UDS_PKDataSet::ClearFirstAttack(UDS_PKDataSet *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  *(undefined1 *)&this->_padding_ = 1;
  this->RecentFirstAttackCharUID = 0;
  this->RecentFirstAttackValidTime = 0.0;
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[3].field_0x20 = 1;
  }
  return;
}

// GetLoadedCriminalGradeTableRow @ 14ba4c9d0

FDS_PkCriminalGradeTableRow * __thiscall
UDS_PKDataSet::GetLoadedCriminalGradeTableRow(UDS_PKDataSet *this)

{
  FDS_PkCriminalGradeTableRow *pFVar1;
  
  pFVar1 = FDS_PkCriminalGradeTableRow::GetRowByPointNullable(this->CriminalPoint);
  return pFVar1;
}

// GetPKModeTableRow @ 14ba4dfa0

FDS_PkModeTableRow * __thiscall UDS_PKDataSet::GetPKModeTableRow(UDS_PKDataSet *this)

{
  UDS_TableManager *pUVar1;
  FDS_PkModeTableRow *pFVar2;
  
  if (this->PKMode != None) {
    pUVar1 = UDS_TableManager::GetInst();
    if (pUVar1 != (UDS_TableManager *)0x0) {
      pFVar2 = FDS_PkModeTableRow::Get((ulonglong)this->PKMode,true);
      return pFVar2;
    }
  }
  return (FDS_PkModeTableRow *)0x0;
}

// IsAttackMainPlayer @ 14ba5a180

bool __thiscall UDS_PKDataSet::IsAttackMainPlayer(UDS_PKDataSet *this)

{
  return 0.0 < this->MyCharFirstAttackValidTime;
}

// IsBattleEntity @ 14ba5a2e0

bool __thiscall UDS_PKDataSet::IsBattleEntity(UDS_PKDataSet *this,ulong64 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)(param_1 >> 0x20) * 0x17;
  if (*(int *)&(this->PCAttackMap).field_0x8 != *(int *)&(this->PCAttackMap).field_0x34) {
    puVar1 = *(undefined1 **)&(this->PCAttackMap).field_0x40;
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &(this->PCAttackMap).field_0x38;
    }
    iVar2 = *(int *)(puVar1 + (ulonglong)
                              ((int)param_1 + iVar3 & *(int *)&(this->PCAttackMap).field_0x48 - 1U)
                              * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulong64 *)(*(longlong *)&this->PCAttackMap + (longlong)iVar2 * 0x18) == param_1) {
          if (iVar2 != -1) {
            return true;
          }
          break;
        }
        iVar2 = *(int *)(*(longlong *)&this->PCAttackMap + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  if (*(int *)&(this->PCDefMap).field_0x8 != *(int *)&(this->PCDefMap).field_0x34) {
    puVar1 = *(undefined1 **)&(this->PCDefMap).field_0x40;
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &(this->PCDefMap).field_0x38;
    }
    iVar3 = *(int *)(puVar1 + (ulonglong)
                              (*(int *)&(this->PCDefMap).field_0x48 - 1U & (int)param_1 + iVar3) * 4
                    );
    if (iVar3 != -1) {
      do {
        if (*(ulong64 *)(*(longlong *)&this->PCDefMap + (longlong)iVar3 * 0x18) == param_1) {
          return true;
        }
        iVar3 = *(int *)(*(longlong *)&this->PCDefMap + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// IsFirstAttackPlayer @ 14ba5b300

bool __thiscall UDS_PKDataSet::IsFirstAttackPlayer(UDS_PKDataSet *this)

{
  if (this->MyCharFirstAttackValidTime != 0.0) {
    return true;
  }
  if (0 < this->RecentFirstAttackCharUID) {
    return 0.0 < this->RecentFirstAttackValidTime;
  }
  return false;
}

// IsForceAttackedEntityID @ 14ba5b330

bool __thiscall UDS_PKDataSet::IsForceAttackedEntityID(UDS_PKDataSet *this,long64 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->ForceAttackMap).field_0x8 != *(int *)&(this->ForceAttackMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->ForceAttackMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->ForceAttackMap).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->ForceAttackMap).field_0x48 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*(longlong *)&this->ForceAttackMap + (longlong)iVar1 * 0x18) == param_1)
        goto LAB_14ba5b3ac;
        iVar1 = *(int *)(*(longlong *)&this->ForceAttackMap + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14ba5b3ac:
  return iVar1 != -1;
}

// OnAdded @ 14ba5ee80

void __thiscall UDS_PKDataSet::OnAdded(UDS_PKDataSet *this)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_TimeCoolDownTableRow *pFVar3;
  
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (*(longlong *)(pUVar2 + 1) != 0) goto LAB_14ba5eeea;
  }
  TMulticastDelegateRegistration<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_PKDataSet>
            ((TMulticastDelegateRegistration<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
              *)&FDS_BattleService::OnGroupDamageEventDelegate,(UDS_PKDataSet *)&stack0x00000008,
             (pmf_0c612549 *)this);
LAB_14ba5eeea:
  pFVar3 = FDS_TimeCoolDownTableRow::Get(0x2776,true);
  if (pFVar3 != (FDS_TimeCoolDownTableRow *)0x0) {
    this->ForceAttackValidTime = (int)pFVar3->CoolTime;
  }
  return;
}

// OnGroupDamageEvent @ 14ba60e10

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
UDS_PKDataSet::OnGroupDamageEvent(UDS_PKDataSet *this,GroupDamageEventResponse *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  RepeatedPtrField<server_msg::DamageEvent> *pRVar5;
  int iVar6;
  UDS_EntityManager *this_00;
  ulong64 uVar7;
  FDS_EntityBase *pFVar8;
  double *pdVar9;
  Impl_ *pIVar10;
  undefined1 *puVar11;
  bool bVar12;
  ulong64 local_res18;
  
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 != (UDS_EntityManager *)0x0) {
    uVar7 = UDS_EntityManager::GetCurrentMainCharEntityID(this_00,true);
    pIVar10 = &param_1->_impl_;
    uVar2 = *(ulonglong *)&(param_1->_impl_).damage_events_;
    if ((uVar2 & 1) != 0) {
      pIVar10 = (Impl_ *)(uVar2 + 7);
    }
    iVar1 = *(int *)&(param_1->_impl_).damage_events_.field_0x8;
    pRVar5 = &pIVar10->damage_events_;
    for (; pIVar10 != (Impl_ *)(&pRVar5->field_0x0 + (longlong)iVar1 * 8);
        pIVar10 = (Impl_ *)&(pIVar10->damage_events_).field_0x8) {
      lVar3 = *(longlong *)&pIVar10->damage_events_;
      local_res18 = *(ulong64 *)(lVar3 + 0x30);
      if ((((uVar7 == *(ulong64 *)(lVar3 + 0x28)) ||
           (bVar12 = uVar7 == local_res18, local_res18 = *(ulong64 *)(lVar3 + 0x28), bVar12)) &&
          (pFVar8 = FDS_EntityBase::GetEntityBase(&local_res18), pFVar8 != (FDS_EntityBase *)0x0))
         && (pFVar8->EntityType == NetCharacter)) {
        UpdatePCAttackMap(this,pFVar8->EntityID,true);
      }
      if (*(ulong64 *)(lVar3 + 0x28) == uVar7) {
        uVar2 = *(ulonglong *)(lVar3 + 0x30);
        if (*(int *)&(this->ForceAttackMap).field_0x8 != *(int *)&(this->ForceAttackMap).field_0x34)
        {
          puVar4 = *(undefined1 **)&(this->ForceAttackMap).field_0x40;
          puVar11 = &(this->ForceAttackMap).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar11 = puVar4;
          }
          iVar6 = *(int *)(puVar11 +
                          ((uVar2 >> 0x20) * 0x17 + uVar2 &
                          (ulonglong)(*(int *)&(this->ForceAttackMap).field_0x48 - 1)) * 4);
          if (iVar6 != -1) {
            do {
              lVar3 = *(longlong *)&this->ForceAttackMap + (longlong)iVar6 * 0x18;
              if (*(ulonglong *)(*(longlong *)&this->ForceAttackMap + (longlong)iVar6 * 0x18) ==
                  uVar2) {
                pdVar9 = (double *)(lVar3 + 8);
                if (lVar3 == 0) {
                  pdVar9 = (double *)0x0;
                }
                if (pdVar9 != (double *)0x0) {
                  *pdVar9 = (double)this->ForceAttackValidTime;
                }
                break;
              }
              iVar6 = *(int *)(lVar3 + 0x10);
            } while (iVar6 != -1);
          }
        }
      }
    }
  }
  return;
}

// RefreshForceAttackTimeIfExist @ 14ba61850

void __thiscall UDS_PKDataSet::RefreshForceAttackTimeIfExist(UDS_PKDataSet *this,long64 param_1)

{
  longlong lVar1;
  int iVar2;
  double *pdVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->ForceAttackMap).field_0x8 != *(int *)&(this->ForceAttackMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ForceAttackMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ForceAttackMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ForceAttackMap).field_0x48 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar2 != -1) {
      while (lVar1 = *(longlong *)&this->ForceAttackMap + (longlong)iVar2 * 0x18,
            *(longlong *)(*(longlong *)&this->ForceAttackMap + (longlong)iVar2 * 0x18) != param_1) {
        iVar2 = *(int *)(lVar1 + 0x10);
        if (iVar2 == -1) {
          return;
        }
      }
      pdVar3 = (double *)(lVar1 + 8);
      if (lVar1 == 0) {
        pdVar3 = (double *)0x0;
      }
      if (pdVar3 != (double *)0x0) {
        *pdVar3 = (double)this->ForceAttackValidTime;
      }
    }
  }
  return;
}

// SetCriminalPoint @ 14ba6bd00

void __thiscall UDS_PKDataSet::SetCriminalPoint(UDS_PKDataSet *this,int param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->CriminalPoint = param_1;
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[3].field_0x20 = 1;
  }
  return;
}

// SetPKMode @ 14ba73ab0

void __thiscall UDS_PKDataSet::SetPKMode(UDS_PKDataSet *this,int param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  this->PKMode = (EDS_PkModeType)param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Delegate_PKMode,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->Delegate_PKMode).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->Delegate_PKMode).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->Delegate_PKMode).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->Delegate_PKMode).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->Delegate_PKMode).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->Delegate_PKMode,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// SetRecentAttackCharUID @ 14ba73f30

void __thiscall
UDS_PKDataSet::SetRecentAttackCharUID(UDS_PKDataSet *this,long64 param_1,double param_2)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->RecentFirstAttackCharUID = param_1;
  this->RecentFirstAttackValidTime = param_2;
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[3].field_0x20 = 1;
  }
  return;
}

// SetSqlPvpTable @ 14ba74dd0

void __thiscall UDS_PKDataSet::SetSqlPvpTable(UDS_PKDataSet *this,SqlPvpTable *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  SetPKMode(this,(param_1->_impl_).pk_mode_);
  this->CriminalPoint = (param_1->_impl_).criminal_point_;
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[3].field_0x20 = 1;
  }
  return;
}

// TickForceAttack @ 14ba76510

void __thiscall UDS_PKDataSet::TickForceAttack(UDS_PKDataSet *this,float param_1)

{
  undefined1 *puVar1;
  TMap<unsigned___int64,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  TMap<unsigned___int64,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  TMap<unsigned___int64,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<unsigned___int64,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  
  iStack_b0 = 0;
  puVar1 = &(this->ForceAttackMap).field_0x10;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  pTVar2 = &this->ForceAttackMap;
  iVar11 = *(int *)&(this->ForceAttackMap).field_0x28;
  uStack_ac = 1;
  local_98 = 0;
  iStack_9c = local_98;
  if (iVar11 != 0) {
    puVar18 = *(uint **)&(this->ForceAttackMap).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    local_98 = 0;
    while (uVar16 == 0) {
      lVar12 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14ba765cd;
      uVar16 = puVar18[lVar12 + 1];
    }
    uStack_ac = -uVar16 & uVar16;
    uVar4 = (ulonglong)uStack_ac * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iStack_9c = local_98 + -1 + local_res20;
    if (iVar11 < iStack_9c) {
      iStack_9c = iVar11;
    }
  }
LAB_14ba765cd:
  uVar16 = *(uint *)&(this->ForceAttackMap).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  iStack_90 = *(int *)&(this->ForceAttackMap).field_0x8 - *(int *)&(this->ForceAttackMap).field_0x34
  ;
  uStack_a0 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
  TStack_80.CurrentBitIndex = iStack_9c;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_80._28_4_ = iStack_9c;
  TStack_80.BaseBitIndex = local_98;
  uStack_60 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = pTVar2;
  local_a8 = puVar1;
  iStack_94 = iStack_9c;
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar11 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->ForceAttackMap).field_0x28;
  if (uVar16 != uVar5) {
    puVar17 = *(undefined1 **)&(this->ForceAttackMap).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ba766d0;
      uVar16 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (int)lVar12 + -1 + uVar15;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14ba766d0:
  while( true ) {
    pTVar9 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar12 = (longlong)TStack_80.CurrentBitIndex;
    iVar11 = (int)local_c0;
    if (((TStack_80.CurrentBitIndex == uVar16) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    lVar6 = *(longlong *)pTVar9;
    dVar8 = *(double *)(lVar6 + 8 + lVar12 * 0x18) - (double)param_1;
    *(double *)(lVar6 + 8 + lVar12 * 0x18) = dVar8;
    if (dVar8 <= 0.0) {
      if ((int)local_c0 == local_c0._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_c8,(int *)((longlong)&local_c0 + 4));
      }
      local_c0 = CONCAT44(local_c0._4_4_,iVar11 + 1);
      *(undefined8 *)(local_c8.Data + (longlong)iVar11 * 8) = *(undefined8 *)(lVar6 + lVar12 * 0x18)
      ;
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  pFVar3 = local_c8.Data + (longlong)(int)local_c0 * 8;
  FVar14.Data = local_c8.Data;
  while( true ) {
    if ((int)local_c0 != iVar11) {
      `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar14.Data == pFVar3) break;
    UpdateForceAttackMap(this,*(ulong64 *)FVar14.Data,false,true);
    FVar14.Data = FVar14.Data + 8;
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return;
}

// TickPCAttack @ 14ba767e0

void __thiscall UDS_PKDataSet::TickPCAttack(UDS_PKDataSet *this,float param_1)

{
  TMap<unsigned___int64,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>_>
  *this_00;
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  TMap<unsigned___int64,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  UObject *pUVar11;
  longlong lVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  ulong64 local_d8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  TMap<unsigned___int64,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<unsigned___int64,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  
  this_00 = &this->PCAttackMap;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_b0 = &(this->PCAttackMap).field_0x10;
  local_c8 = 0;
  iVar10 = *(int *)&(this->PCAttackMap).field_0x28;
  uStack_b4 = 1;
  iStack_b8 = 0;
  local_a0 = 0;
  iStack_a4 = iStack_b8;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->PCAttackMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)local_b0;
    }
    uVar15 = *puVar17;
    local_a0 = 0;
    iStack_b8 = 0;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14ba7689f;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_b4 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_b4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iStack_a4 = local_a0 + -1 + local_res20;
    if (iVar10 < iStack_a4) {
      iStack_a4 = iVar10;
    }
  }
LAB_14ba7689f:
  uVar15 = *(uint *)&(this->PCAttackMap).field_0x28;
  puVar1 = &(this->PCAttackMap).field_0x10;
  uVar18 = uVar15 & 0xffffffe0;
  iStack_98 = *(int *)&(this->PCAttackMap).field_0x8 - *(int *)&(this->PCAttackMap).field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_88.CurrentBitIndex = iStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
  iVar13 = (int)uVar15 >> 5;
  TStack_88._28_4_ = iStack_a4;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  local_c0 = this_00;
  iStack_9c = iStack_a4;
  local_90 = this_00;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b0;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->PCAttackMap).field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&(this->PCAttackMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ba769b0;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar18;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_14ba769b0:
  while( true ) {
    pTVar8 = local_90;
    if (*(int *)(&local_90->field_0x0 + 8) - *(int *)(&local_90->field_0x0 + 0x34) != (int)uStack_68
       ) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar12 = (longlong)TStack_88.CurrentBitIndex;
    iVar10 = (int)local_c8;
    if (((TStack_88.CurrentBitIndex == uVar15) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == this_00))
    break;
    lVar5 = *(longlong *)&pTVar8->field_0x0;
    dVar7 = *(double *)(lVar5 + 8 + lVar12 * 0x18) - (double)param_1;
    *(double *)(lVar5 + 8 + lVar12 * 0x18) = dVar7;
    if (dVar7 <= 0.0) {
      if ((int)local_c8 == local_c8._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_d0,(int *)((longlong)&local_c8 + 4));
      }
      local_c8 = CONCAT44(local_c8._4_4_,iVar10 + 1);
      *(undefined8 *)(local_d0.Data + (longlong)iVar10 * 8) = *(undefined8 *)(lVar5 + lVar12 * 0x18)
      ;
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  pFVar2 = local_d0.Data + (longlong)(int)local_c8 * 8;
  FVar14.Data = local_d0.Data;
  while( true ) {
    if ((int)local_c8 != iVar10) {
      `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar14.Data == pFVar2) break;
    local_d8 = *(ulong64 *)FVar14.Data;
    if (*(int *)&(this->PCAttackMap).field_0x8 != *(int *)&(this->PCAttackMap).field_0x34) {
      TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
                  *)this_00,(int)(local_d8 >> 0x20) * 0x17 + (int)local_d8,&local_d8);
    }
    *(undefined1 *)&this->_padding_ = 1;
    bVar9 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar9) {
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar11[3].field_0x20 = 1;
    }
    FVar14.Data = FVar14.Data + 8;
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  return;
}

// TickPCDef @ 14ba76b00

void __thiscall UDS_PKDataSet::TickPCDef(UDS_PKDataSet *this,float param_1)

{
  TMap<unsigned___int64,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>_>
  *this_00;
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  TMap<unsigned___int64,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  UObject *pUVar11;
  longlong lVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  ulong64 local_d8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  TMap<unsigned___int64,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<unsigned___int64,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  
  this_00 = &this->PCDefMap;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_b0 = &(this->PCDefMap).field_0x10;
  local_c8 = 0;
  iVar10 = *(int *)&(this->PCDefMap).field_0x28;
  uStack_b4 = 1;
  iStack_b8 = 0;
  local_a0 = 0;
  iStack_a4 = iStack_b8;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->PCDefMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)local_b0;
    }
    uVar15 = *puVar17;
    local_a0 = 0;
    iStack_b8 = 0;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14ba76bbf;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_b4 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_b4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iStack_a4 = local_a0 + -1 + local_res20;
    if (iVar10 < iStack_a4) {
      iStack_a4 = iVar10;
    }
  }
LAB_14ba76bbf:
  uVar15 = *(uint *)&(this->PCDefMap).field_0x28;
  puVar1 = &(this->PCDefMap).field_0x10;
  uVar18 = uVar15 & 0xffffffe0;
  iStack_98 = *(int *)&(this->PCDefMap).field_0x8 - *(int *)&(this->PCDefMap).field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_88.CurrentBitIndex = iStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
  iVar13 = (int)uVar15 >> 5;
  TStack_88._28_4_ = iStack_a4;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  local_c0 = this_00;
  iStack_9c = iStack_a4;
  local_90 = this_00;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b0;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->PCDefMap).field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&(this->PCDefMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ba76cd0;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar18;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_14ba76cd0:
  while( true ) {
    pTVar8 = local_90;
    if (*(int *)(&local_90->field_0x0 + 8) - *(int *)(&local_90->field_0x0 + 0x34) != (int)uStack_68
       ) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar12 = (longlong)TStack_88.CurrentBitIndex;
    iVar10 = (int)local_c8;
    if (((TStack_88.CurrentBitIndex == uVar15) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == this_00))
    break;
    lVar5 = *(longlong *)&pTVar8->field_0x0;
    dVar7 = *(double *)(lVar5 + 8 + lVar12 * 0x18) - (double)param_1;
    *(double *)(lVar5 + 8 + lVar12 * 0x18) = dVar7;
    if (dVar7 <= 0.0) {
      if ((int)local_c8 == local_c8._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_d0,(int *)((longlong)&local_c8 + 4));
      }
      local_c8 = CONCAT44(local_c8._4_4_,iVar10 + 1);
      *(undefined8 *)(local_d0.Data + (longlong)iVar10 * 8) = *(undefined8 *)(lVar5 + lVar12 * 0x18)
      ;
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  pFVar2 = local_d0.Data + (longlong)(int)local_c8 * 8;
  FVar14.Data = local_d0.Data;
  while( true ) {
    if ((int)local_c8 != iVar10) {
      `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar14.Data == pFVar2) break;
    local_d8 = *(ulong64 *)FVar14.Data;
    if (*(int *)&(this->PCDefMap).field_0x8 != *(int *)&(this->PCDefMap).field_0x34) {
      TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
                  *)this_00,(int)(local_d8 >> 0x20) * 0x17 + (int)local_d8,&local_d8);
    }
    *(undefined1 *)&this->_padding_ = 1;
    bVar9 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar9) {
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar11[3].field_0x20 = 1;
    }
    FVar14.Data = FVar14.Data + 8;
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  return;
}

// Update @ 14ba7b560

void __thiscall UDS_PKDataSet::Update(UDS_PKDataSet *this,float *param_1)

{
  double dVar1;
  bool bVar2;
  UObject *pUVar3;
  double dVar4;
  
  TickForceAttack(this,*param_1);
  TickPCAttack(this,*param_1);
  TickPCDef(this,*param_1);
  if (0 < this->RecentFirstAttackCharUID) {
    UDS_TimeUtilManager::GetInst();
    dVar1 = this->RecentFirstAttackValidTime;
    dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
    if (dVar1 <= dVar4) {
      this->RecentFirstAttackCharUID = 0;
      this->RecentFirstAttackValidTime = 0.0;
      *(undefined1 *)&this->_padding_ = 1;
      bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                         (void *)0x0);
      if (!bVar2) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pUVar3[3].field_0x20 = 1;
      }
    }
  }
  if (0.0 < this->MyCharFirstAttackValidTime) {
    UDS_TimeUtilManager::GetInst();
    dVar1 = this->MyCharFirstAttackValidTime;
    dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
    if (dVar1 <= dVar4) {
      this->MyCharFirstAttackValidTime = 0.0;
      *(undefined1 *)&this->_padding_ = 1;
      bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                         (void *)0x0);
      if (!bVar2) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pUVar3[3].field_0x20 = 1;
      }
    }
  }
  return;
}

// UpdateForceAttackMap @ 14ba7d3f0

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
UDS_PKDataSet::UpdateForceAttackMap(UDS_PKDataSet *this,ulong64 param_1,bool param_2,bool param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FDS_EntityBase *this_00;
  UObject *pUVar10;
  FString *pFVar11;
  uint uVar12;
  longlong lVar13;
  int *local_res10;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_e8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_d8;
  FWeakObjectPtr local_c8;
  TPairInitializer<unsigned___int64_&,int_&> local_c0;
  int **local_b0;
  int *local_a8;
  FDestructionSentinel local_a0;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  FString local_48;
  FString local_38;
  
  local_res10 = (int *)param_1;
  this_00 = FDS_EntityBase::GetEntityBase((ulong64 *)&local_res10);
  if (this_00 != (FDS_EntityBase *)0x0) {
    FDS_EntityBase::GetCharInfoData(this_00);
    bVar6 = FWeakObjectPtr::IsValid(&local_c8);
    if (bVar6) {
      if (param_2) {
        local_b0 = &local_res10;
        local_a8 = &this->ForceAttackValidTime;
        TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned___int64_&,int_&>_>
                  ((TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
                    *)&this->ForceAttackMap,&local_c0,(bool *)&local_b0);
      }
      else {
        local_c0.Value = local_res10;
        if (*(int *)&(this->ForceAttackMap).field_0x8 != *(int *)&(this->ForceAttackMap).field_0x34)
        {
          TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned___int64>
                    ((TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
                      *)&this->ForceAttackMap,
                     (int)((ulonglong)local_res10 >> 0x20) * 0x17 + (int)local_res10,
                     (ulong64 *)&local_c0.Value);
        }
      }
      if (param_3) {
        pUVar10 = FWeakObjectPtr::Get(&local_c8);
        if (param_2) {
          pFVar11 = ::FString::FString(&local_48,(FString *)&pUVar10[8].field_0x18);
          FStringFormatArg::FStringFormatArg(&local_88,pFVar11);
          local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e8.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_e8.AllocatorInstance,1,&local_e8.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_e8.AllocatorInstance.Data,&local_88,1);
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x16f3e,Alert_System_01,&local_e8,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
          local_68.StringValue.Data.AllocatorInstance.Data =
               local_88.StringValue.Data.AllocatorInstance.Data;
          if ((FStringFormatArg *)local_e8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_e8.AllocatorInstance.Data);
            local_68.StringValue.Data.AllocatorInstance.Data =
                 local_88.StringValue.Data.AllocatorInstance.Data;
          }
        }
        else {
          pFVar11 = ::FString::FString(&local_38,(FString *)&pUVar10[8].field_0x18);
          FStringFormatArg::FStringFormatArg(&local_68,pFVar11);
          local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_d8.AllocatorInstance,1,&local_d8.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_d8.AllocatorInstance.Data,&local_68,1);
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x16f40,Alert_System_01,&local_d8,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
          if ((FStringFormatArg *)local_d8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_d8.AllocatorInstance.Data);
          }
        }
        if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
        }
      }
      piVar5 = local_res10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->Delegate_ForceAttack,(FWriteAccessScope *)&local_a0);
      puVar1 = &(this->Delegate_ForceAttack).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar6 = false;
      uVar12 = *(int *)&(this->Delegate_ForceAttack).field_0x10 - 1;
      if (-1 < (int)uVar12) {
        lVar13 = (longlong)(int)uVar12 << 4;
        bVar6 = false;
        do {
          uVar9 = 0;
          if ((int)uVar12 < *(int *)&(this->Delegate_ForceAttack).field_0x10) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(this->Delegate_ForceAttack).field_0x8;
          if (((*(int *)(lVar13 + 8 + lVar2) == 0) ||
              (plVar3 = *(longlong **)(lVar13 + lVar2), plVar3 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar3 + 0x68))(plVar3,piVar5,param_2), cVar8 == '\0')) {
            bVar6 = true;
          }
          lVar13 = lVar13 + -0x10;
          uVar12 = uVar12 - 1;
        } while (-1 < (int)uVar12);
      }
      puVar1 = &(this->Delegate_ForceAttack).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->Delegate_ForceAttack
                   ,false);
      }
      if (local_a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
      }
    }
  }
  return;
}

// UpdatePCAttackMap @ 14ba7fbb0

void __thiscall UDS_PKDataSet::UpdatePCAttackMap(UDS_PKDataSet *this,ulong64 param_1,bool param_2)

{
  TMap<unsigned___int64,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>_>
  *this_00;
  int iVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  undefined1 *puVar5;
  ulong64 local_res10;
  TPairInitializer<unsigned___int64_&,int_&> local_res18;
  ulong64 *local_18;
  int *local_10;
  
  this_00 = &this->PCAttackMap;
  iVar3 = *(int *)&(this->PCAttackMap).field_0x8;
  iVar1 = *(int *)&(this->PCAttackMap).field_0x34;
  local_res10 = param_1;
  if (param_2) {
    if (iVar3 != iVar1) {
      puVar5 = *(undefined1 **)&(this->PCAttackMap).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->PCAttackMap).field_0x38;
      }
      iVar3 = *(int *)(puVar5 + ((param_1 >> 0x20) * 0x17 + param_1 &
                                (ulonglong)(*(int *)&(this->PCAttackMap).field_0x48 - 1)) * 4);
      if (iVar3 != -1) {
        do {
          if (*(ulong64 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18) == param_1) {
            return;
          }
          iVar3 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar3 * 0x18);
        } while (iVar3 != -1);
      }
    }
    local_18 = &local_res10;
    local_10 = &this->ForceAttackValidTime;
    TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_&,int_&>_>
              ((TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
                *)this_00,&local_res18,(bool *)&local_18);
  }
  else {
    local_res18.Value = (int *)param_1;
    if (iVar3 != iVar1) {
      TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
                  *)this_00,(int)(param_1 >> 0x20) * 0x17 + (int)param_1,
                 (ulong64 *)&local_res18.Value);
    }
  }
  *(undefined1 *)&this->_padding_ = 1;
  bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar4[3].field_0x20 = 1;
  }
  return;
}

// UpdatePCDefMap @ 14ba7fcc0

void __thiscall UDS_PKDataSet::UpdatePCDefMap(UDS_PKDataSet *this,ulong64 param_1,bool param_2)

{
  TMap<unsigned___int64,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>_>
  *this_00;
  int iVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  undefined1 *puVar5;
  ulong64 local_res10;
  TPairInitializer<unsigned___int64_&,int_&> local_res18;
  ulong64 *local_18;
  int *local_10;
  
  this_00 = &this->PCDefMap;
  iVar3 = *(int *)&(this->PCDefMap).field_0x8;
  iVar1 = *(int *)&(this->PCDefMap).field_0x34;
  local_res10 = param_1;
  if (param_2) {
    if (iVar3 != iVar1) {
      puVar5 = *(undefined1 **)&(this->PCDefMap).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->PCDefMap).field_0x38;
      }
      iVar3 = *(int *)(puVar5 + ((param_1 >> 0x20) * 0x17 + param_1 &
                                (ulonglong)(*(int *)&(this->PCDefMap).field_0x48 - 1)) * 4);
      if (iVar3 != -1) {
        do {
          if (*(ulong64 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18) == param_1) {
            return;
          }
          iVar3 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar3 * 0x18);
        } while (iVar3 != -1);
      }
    }
    local_18 = &local_res10;
    local_10 = &this->ForceAttackValidTime;
    TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_&,int_&>_>
              ((TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
                *)this_00,&local_res18,(bool *)&local_18);
  }
  else {
    local_res18.Value = (int *)param_1;
    if (iVar3 != iVar1) {
      TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,double>,TDefaultMapHashableKeyFuncs<unsigned___int64,double,0>,FDefaultSetAllocator>
                  *)this_00,(int)(param_1 >> 0x20) * 0x17 + (int)param_1,
                 (ulong64 *)&local_res18.Value);
    }
  }
  *(undefined1 *)&this->_padding_ = 1;
  bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar4[3].field_0x20 = 1;
  }
  return;
}

// UpdateSpawnCharacterResponse @ 14ba812d0

void __thiscall
UDS_PKDataSet::UpdateSpawnCharacterResponse(UDS_PKDataSet *this,SpawnCharacterResponse *param_1)

{
  PkSpawnInfo *pPVar1;
  long64 lVar2;
  bool bVar3;
  UObject *pUVar4;
  PkSpawnInfo *pPVar5;
  
  if (((param_1->_impl_)._has_bits_.has_bits_[0] & 0x800) != 0) {
    pPVar1 = (param_1->_impl_).pk_spawn_info_;
    pPVar5 = &messages::_PkSpawnInfo_default_instance_._instance;
    if (pPVar1 != (PkSpawnInfo *)0x0) {
      pPVar5 = pPVar1;
    }
    SetPKMode(this,(pPVar5->_impl_).pk_mode_type_);
    this->CriminalPoint = (pPVar5->_impl_).criminal_point_;
    *(undefined1 *)&this->_padding_ = 1;
    bVar3 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar3) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar4[3].field_0x20 = 1;
    }
    lVar2 = (pPVar5->_impl_).recent_first_attack_player_uid_;
    this->RecentFirstAttackValidTime = (pPVar5->_impl_).recent_first_attack_valid_real_ticks_;
    this->RecentFirstAttackCharUID = lVar2;
    *(undefined1 *)&this->_padding_ = 1;
    bVar3 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar3) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar4[3].field_0x20 = 1;
    }
    this->MyCharFirstAttackValidTime = (pPVar5->_impl_).my_player_uid_first_attack_valid_real_ticks_
    ;
  }
  return;
}

