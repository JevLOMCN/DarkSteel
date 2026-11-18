// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b52c8e0

UClass * __cdecl UDS_NormalAttackAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NormalAttackAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NormalAttackAbilityData",
               &Z_Registration_Info_UClass_UDS_NormalAttackAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_NormalAttackAbilityData,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NormalAttackAbilityData>,
               InternalVTableHelperCtorCaller<UDS_NormalAttackAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NormalAttackAbilityData.InnerSingleton;
}

// UDS_NormalAttackAbilityData @ 14b52f9c0

UDS_NormalAttackAbilityData * __thiscall
UDS_NormalAttackAbilityData::UDS_NormalAttackAbilityData
          (UDS_NormalAttackAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NormalAttackAbilityData__6B_;
  this->CurrentSkillID = 0;
  this->AttackStep = 0;
  this->NormalAttackDistanceType = None;
  *(undefined8 *)&this->NormalAttackInfoMap = 0;
  *(undefined8 *)&(this->NormalAttackInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->NormalAttackInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NormalAttackInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->AttackMoveSkillInfoMap = 0;
  *(undefined8 *)&(this->AttackMoveSkillInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->AttackMoveSkillInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->AttackMoveSkillInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->AttackMoveSkillInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttackMoveSkillInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->AttackMoveSkillInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AttackMoveSkillInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->AttackMoveSkillInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->NormalAttackInfoMap_SkillMode = 0;
  *(undefined8 *)&(this->NormalAttackInfoMap_SkillMode).field_0x8 = 0;
  *(undefined8 *)&(this->NormalAttackInfoMap_SkillMode).field_0x20 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap_SkillMode).field_0x28 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap_SkillMode).field_0x2c = 0x80;
  *(undefined4 *)&(this->NormalAttackInfoMap_SkillMode).field_0x34 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap_SkillMode).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NormalAttackInfoMap_SkillMode).field_0x40 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap_SkillMode).field_0x48 = 0;
  return this;
}

// ~UDS_NormalAttackAbilityData @ 14b530a50

void __thiscall
UDS_NormalAttackAbilityData::~UDS_NormalAttackAbilityData(UDS_NormalAttackAbilityData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_NormalAttackAbilityData__6B_;
  *(undefined4 *)&(this->NormalAttackInfoMap_SkillMode).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NormalAttackInfoMap_SkillMode).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NormalAttackInfoMap_SkillMode);
  *(undefined4 *)&(this->AttackMoveSkillInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AttackMoveSkillInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AttackMoveSkillInfoMap);
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NormalAttackInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_NormalAttackInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_NormalAttackInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_NormalAttackInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NormalAttackInfoMap);
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b532e40

UClass * __cdecl UDS_NormalAttackAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NormalAttackAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NormalAttackAbilityData",
               &Z_Registration_Info_UClass_UDS_NormalAttackAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_NormalAttackAbilityData,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NormalAttackAbilityData>,
               InternalVTableHelperCtorCaller<UDS_NormalAttackAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NormalAttackAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_NormalAttackAbilityData @ 14b5331b0

void __cdecl UDS_NormalAttackAbilityData::StaticRegisterNativesUDS_NormalAttackAbilityData(void)

{
  return;
}

// UDS_NormalAttackAbilityData @ 14b9d8110

UDS_NormalAttackAbilityData * __thiscall
UDS_NormalAttackAbilityData::UDS_NormalAttackAbilityData
          (UDS_NormalAttackAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NormalAttackAbilityData__6B_;
  this->CurrentSkillID = 0;
  this->AttackStep = 0;
  this->NormalAttackDistanceType = None;
  *(undefined8 *)&this->NormalAttackInfoMap = 0;
  *(undefined8 *)&(this->NormalAttackInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->NormalAttackInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NormalAttackInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->AttackMoveSkillInfoMap = 0;
  *(undefined8 *)&(this->AttackMoveSkillInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->AttackMoveSkillInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->AttackMoveSkillInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->AttackMoveSkillInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttackMoveSkillInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->AttackMoveSkillInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AttackMoveSkillInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->AttackMoveSkillInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->NormalAttackInfoMap_SkillMode = 0;
  *(undefined8 *)&(this->NormalAttackInfoMap_SkillMode).field_0x8 = 0;
  *(undefined8 *)&(this->NormalAttackInfoMap_SkillMode).field_0x20 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap_SkillMode).field_0x28 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap_SkillMode).field_0x2c = 0x80;
  *(undefined4 *)&(this->NormalAttackInfoMap_SkillMode).field_0x34 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap_SkillMode).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NormalAttackInfoMap_SkillMode).field_0x40 = 0;
  *(undefined4 *)&(this->NormalAttackInfoMap_SkillMode).field_0x48 = 0;
  return this;
}

// CCSAI_GetSkillInfo @ 14b9e1df0

FDS_NormalAttackInfo * __thiscall
UDS_NormalAttackAbilityData::CCSAI_GetSkillInfo(UDS_NormalAttackAbilityData *this,int *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  FDS_NormalAttackInfo *pFVar4;
  undefined1 *puVar5;
  
  uVar1 = *param_1;
  if (*(int *)&(this->NormalAttackInfoMap).field_0x8 !=
      *(int *)&(this->NormalAttackInfoMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->NormalAttackInfoMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->NormalAttackInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->NormalAttackInfoMap).field_0x48 - 1U & uVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->NormalAttackInfoMap;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x18) == uVar1) {
          pFVar4 = TMapBase<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
                                  *)&this->NormalAttackInfoMap,uVar1);
          return pFVar4;
        }
        iVar3 = *(int *)(lVar2 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return &NormalAttackEmptyInfo;
}

// CCSAI_GetSkillInfoByDistance @ 14b9e1e60

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

FDS_NormalAttackInfo * __thiscall
UDS_NormalAttackAbilityData::CCSAI_GetSkillInfoByDistance
          (UDS_NormalAttackAbilityData *this,
          TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_1,int *param_2)

{
  TMap<EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,0>_>
  *this_00;
  bool bVar1;
  int iVar2;
  FDS_NormalAttackInfo *pFVar3;
  FDS_EntityBase *this_01;
  UDS_MovementCore *this_02;
  FDS_GetTargetLocationResult *pFVar4;
  UDS_FindTargetAbilityData *this_03;
  UObject *pUVar5;
  ulong64 uVar6;
  UDS_SkillData *pUVar7;
  undefined1 *puVar8;
  EDS_NormalAttackDistanceType EVar9;
  uint uVar10;
  FWeakObjectPtr local_res10 [2];
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> local_res20;
  FWeakObjectPtr local_a8;
  ulong64 local_a0;
  char local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  TVector<double>_u_0 TStack_90;
  undefined8 local_78;
  FWeakObjectPtr local_70;
  TVector<double> local_68;
  FDS_GetTargetLocationResult local_50;
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)local_res10,
                     (void *)0x0);
  if (bVar1) {
    uVar10 = *param_2;
    if (*(int *)&(this->NormalAttackInfoMap).field_0x8 !=
        *(int *)&(this->NormalAttackInfoMap).field_0x34) {
      puVar8 = *(undefined1 **)&(this->NormalAttackInfoMap).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->NormalAttackInfoMap).field_0x38;
      }
      iVar2 = *(int *)(puVar8 + (ulonglong)
                                (*(int *)&(this->NormalAttackInfoMap).field_0x48 - 1U & uVar10) * 4)
      ;
      if (iVar2 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->NormalAttackInfoMap + (longlong)iVar2 * 0x18) == uVar10)
          {
            pFVar3 = TMapBase<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
                     ::FindChecked((TMapBase<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
                                    *)&this->NormalAttackInfoMap,uVar10);
            return pFVar3;
          }
          iVar2 = *(int *)(*(longlong *)&this->NormalAttackInfoMap + 0x10 + (longlong)iVar2 * 0x18);
        } while (iVar2 != -1);
      }
    }
    return &NormalAttackEmptyInfo;
  }
  local_a0 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  if (local_a0 == 0) {
    pFVar3 = CCSAI_GetSkillInfo(this,param_2);
    return pFVar3;
  }
  this_01 = FDS_EntityBase::GetEntityBase(&local_a0);
  if (this_01 == (FDS_EntityBase *)0x0) {
LAB_14b9e1f73:
    pFVar3 = CCSAI_GetSkillInfo(this,param_2);
    return pFVar3;
  }
  UDS_MovementCore::GetMovementCore((ulong64)&local_70);
  bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_70,(void *)0x0);
  if (bVar1) goto LAB_14b9e1f73;
  this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_70);
  UDS_MovementCore::GetActorFootLocation(this_02,&local_68);
  pFVar4 = UDS_FindTargetAbility::GetTargetLocation
                     (&local_50,
                      (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res10[0],true)
  ;
  this_00 = &this->AttackMoveSkillInfoMap;
  local_98 = pFVar4->bIsValid;
  uStack_97 = pFVar4->field_0x1;
  uStack_96 = pFVar4->field_0x2;
  uStack_95 = pFVar4->field_0x3;
  uStack_94 = pFVar4->field_0x4;
  uStack_93 = pFVar4->field_0x5;
  uStack_92 = pFVar4->field_0x6;
  uStack_91 = pFVar4->field_0x7;
  TStack_90._0_1_ = *(undefined1 *)&(pFVar4->TargetLocation).field0_0x0;
  TStack_90._1_1_ = *(undefined1 *)((longlong)&(pFVar4->TargetLocation).field0_0x0 + 1);
  TStack_90._2_1_ = *(undefined1 *)((longlong)&(pFVar4->TargetLocation).field0_0x0 + 2);
  TStack_90._3_1_ = *(undefined1 *)((longlong)&(pFVar4->TargetLocation).field0_0x0 + 3);
  TStack_90._4_1_ = *(undefined1 *)((longlong)&(pFVar4->TargetLocation).field0_0x0 + 4);
  TStack_90._5_1_ = *(undefined1 *)((longlong)&(pFVar4->TargetLocation).field0_0x0 + 5);
  TStack_90._6_1_ = *(undefined1 *)((longlong)&(pFVar4->TargetLocation).field0_0x0 + 6);
  TStack_90._7_1_ = *(undefined1 *)((longlong)&(pFVar4->TargetLocation).field0_0x0 + 7);
  TStack_90._s_0.Y = (pFVar4->TargetLocation).field0_0x0._s_0.Y;
  TStack_90._s_0.Z = (pFVar4->TargetLocation).field0_0x0._s_0.Z;
  local_78 = *(undefined8 *)&pFVar4->TargetRadius;
  if ((bool)local_98 == false) {
    if (*(int *)&(this->AttackMoveSkillInfoMap).field_0x8 !=
        *(int *)&(this->AttackMoveSkillInfoMap).field_0x34) {
      puVar8 = *(undefined1 **)&(this->AttackMoveSkillInfoMap).field_0x40;
      uVar10 = *(int *)&(this->AttackMoveSkillInfoMap).field_0x48 - 1;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->AttackMoveSkillInfoMap).field_0x38;
      }
      iVar2 = *(int *)(puVar8 + (ulonglong)(uVar10 & 3) * 4);
      if (iVar2 != -1) {
        do {
          if (*(int *)(*(longlong *)this_00 + (longlong)iVar2 * 0x18) == 3) {
            EVar9 = Long;
            goto LAB_14b9e20d6;
          }
          iVar2 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar2 * 0x18);
        } while (iVar2 != -1);
      }
      iVar2 = *(int *)(puVar8 + (ulonglong)(uVar10 & 2) * 4);
      if (iVar2 != -1) {
        do {
          if (*(int *)(*(longlong *)this_00 + (longlong)iVar2 * 0x18) == 2) {
            if (iVar2 != -1) {
              EVar9 = Middle;
              goto LAB_14b9e20d6;
            }
            break;
          }
          iVar2 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar2 * 0x18);
        } while (iVar2 != -1);
      }
      puVar8 = *(undefined1 **)&(this->AttackMoveSkillInfoMap).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->AttackMoveSkillInfoMap).field_0x38;
      }
      iVar2 = *(int *)(puVar8 + (ulonglong)
                                (*(int *)&(this->AttackMoveSkillInfoMap).field_0x48 - 1U & 1) * 4);
      if (iVar2 != -1) {
LAB_14b9e2080:
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar2 * 0x18) != 1) goto code_r0x00014b9e208d;
        EVar9 = Short;
LAB_14b9e20d6:
        pFVar3 = GetAttackMoveSkillInfo(this,EVar9);
        iVar2 = pFVar3->SkillID;
        if (iVar2 == 0) goto LAB_14b9e2096;
        this_03 = (UDS_FindTargetAbilityData *)FWeakObjectPtr::Get(local_res10);
        bVar1 = UDS_FindTargetAbilityData::SetFindTargetDataBySkillID(this_03,&local_a0,iVar2);
        if ((!bVar1) ||
           (bVar1 = UDS_FindTargetAbility::FindTargetByDistance
                              (local_a0,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)
                                        local_res10), !bVar1)) goto LAB_14b9e2096;
        pFVar4 = UDS_FindTargetAbility::GetTargetLocation
                           (&local_50,
                            (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res10[0]
                            ,true);
        local_98 = pFVar4->bIsValid;
        uStack_97 = pFVar4->field_0x1;
        uStack_96 = pFVar4->field_0x2;
        uStack_95 = pFVar4->field_0x3;
        uStack_94 = pFVar4->field_0x4;
        uStack_93 = pFVar4->field_0x5;
        uStack_92 = pFVar4->field_0x6;
        uStack_91 = pFVar4->field_0x7;
        TStack_90._0_1_ = *(undefined1 *)&(pFVar4->TargetLocation).field0_0x0;
        TStack_90._1_1_ = *(undefined1 *)((longlong)&(pFVar4->TargetLocation).field0_0x0 + 1);
        TStack_90._2_1_ = *(undefined1 *)((longlong)&(pFVar4->TargetLocation).field0_0x0 + 2);
        TStack_90._3_1_ = *(undefined1 *)((longlong)&(pFVar4->TargetLocation).field0_0x0 + 3);
        TStack_90._4_1_ = *(undefined1 *)((longlong)&(pFVar4->TargetLocation).field0_0x0 + 4);
        TStack_90._5_1_ = *(undefined1 *)((longlong)&(pFVar4->TargetLocation).field0_0x0 + 5);
        TStack_90._6_1_ = *(undefined1 *)((longlong)&(pFVar4->TargetLocation).field0_0x0 + 6);
        TStack_90._7_1_ = *(undefined1 *)((longlong)&(pFVar4->TargetLocation).field0_0x0 + 7);
        TStack_90._s_0.Y = (pFVar4->TargetLocation).field0_0x0._s_0.Y;
        TStack_90._s_0.Z = (pFVar4->TargetLocation).field0_0x0._s_0.Z;
        local_78 = *(undefined8 *)&pFVar4->TargetRadius;
        if ((bool)local_98 == false) goto LAB_14b9e2096;
        goto LAB_14b9e2146;
      }
    }
    goto LAB_14b9e2096;
  }
LAB_14b9e2146:
  if (*(int *)&(this->AttackMoveSkillInfoMap).field_0x8 !=
      *(int *)&(this->AttackMoveSkillInfoMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->AttackMoveSkillInfoMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->AttackMoveSkillInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->AttackMoveSkillInfoMap).field_0x48 - 1U & 3) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar2 * 0x18) == 3) {
          puVar8 = *(undefined1 **)&(this->AttackMoveSkillInfoMap).field_0x40;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &(this->AttackMoveSkillInfoMap).field_0x38;
          }
          iVar2 = *(int *)(puVar8 + (ulonglong)
                                    (*(int *)&(this->AttackMoveSkillInfoMap).field_0x48 - 1U & 3) *
                                    4);
          goto LAB_14b9e2220;
        }
        iVar2 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  goto LAB_14b9e2186;
code_r0x00014b9e208d:
  iVar2 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar2 * 0x18);
  if (iVar2 == -1) goto LAB_14b9e2096;
  goto LAB_14b9e2080;
  while (iVar2 = *(int *)(*(longlong *)&this->AttackMoveSkillInfoMap + 0x10 + (longlong)iVar2 * 0x18
                         ), iVar2 != -1) {
LAB_14b9e2220:
    if (*(int *)(*(longlong *)&this->AttackMoveSkillInfoMap + (longlong)iVar2 * 0x18) == 3) {
      pFVar3 = TMapBase<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,0>_>
               ::FindChecked(this_00,Long);
      goto LAB_14b9e224f;
    }
  }
  pFVar3 = &NormalAttackEmptyInfo;
LAB_14b9e224f:
  local_res20.WeakPtr.ObjectIndex = (int)((float)pFVar3->NormalAttackDistance + (float)local_78);
  bVar1 = DS_Util::IsCloseDist(&local_68,(TVector<double> *)&TStack_90._s_0,(float *)&local_res20);
  if (!bVar1) {
    iVar2 = pFVar3->SkillID;
    uVar6 = UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
    UDS_SkillData::GetData((ulong64)&local_a8,uVar6,SUB41(iVar2,0));
    bVar1 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_a8,(void *)0x0);
    if (!bVar1) {
      pUVar7 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_a8);
      bVar1 = UDS_SkillData::CheckCoolTime(pUVar7);
      if (!bVar1) {
        pUVar5 = FWeakObjectPtr::Get(&local_a8);
        local_res20.WeakPtr.ObjectIndex = (int)((float)local_78 + *(float *)&pUVar5[8].field_0x20);
        bVar1 = DS_Util::IsCloseDist
                          (&local_68,(TVector<double> *)&TStack_90._s_0,(float *)&local_res20);
        if (bVar1) {
          return pFVar3;
        }
        FDS_EntityBase::GetCharStateData(this_01);
        bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                          (&local_res20,(void *)0x0);
        if ((bVar1) || (bVar1 = FDS_EntityBase::IsActiveInput(this_01), !bVar1)) {
          pUVar7 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_a8);
          bVar1 = UDS_SkillData::IsTargetTrace(pUVar7);
          if (bVar1) {
            return pFVar3;
          }
        }
        goto LAB_14b9e2096;
      }
    }
  }
LAB_14b9e2186:
  if (*(int *)&(this->AttackMoveSkillInfoMap).field_0x8 !=
      *(int *)&(this->AttackMoveSkillInfoMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->AttackMoveSkillInfoMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->AttackMoveSkillInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->AttackMoveSkillInfoMap).field_0x48 - 1U & 2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->AttackMoveSkillInfoMap + (longlong)iVar2 * 0x18) == 2) {
          pFVar3 = GetAttackMoveSkillInfo(this,Middle);
          iVar2 = pFVar3->SkillID;
          uVar6 = UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
          UDS_SkillData::GetData((ulong64)&local_a8,uVar6,SUB41(iVar2,0));
          bVar1 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_a8,(void *)0x0);
          if (!bVar1) {
            pUVar7 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_a8);
            bVar1 = UDS_SkillData::CheckCoolTime(pUVar7);
            if (!bVar1) {
              local_res20.WeakPtr.ObjectIndex =
                   (int)((float)pFVar3->NormalAttackDistance + (float)local_78);
              bVar1 = DS_Util::IsCloseDist
                                (&local_68,(TVector<double> *)&TStack_90._s_0,(float *)&local_res20)
              ;
              if (!bVar1) {
                pUVar5 = FWeakObjectPtr::Get(&local_a8);
                local_res20.WeakPtr.ObjectIndex =
                     (int)((float)local_78 + *(float *)&pUVar5[8].field_0x20);
                bVar1 = DS_Util::IsCloseDist
                                  (&local_68,(TVector<double> *)&TStack_90._s_0,
                                   (float *)&local_res20);
                if (bVar1) {
                  return pFVar3;
                }
              }
            }
          }
          break;
        }
        iVar2 = *(int *)(*(longlong *)&this->AttackMoveSkillInfoMap + 0x10 + (longlong)iVar2 * 0x18)
        ;
      } while (iVar2 != -1);
    }
  }
  if (*(int *)&(this->AttackMoveSkillInfoMap).field_0x8 !=
      *(int *)&(this->AttackMoveSkillInfoMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->AttackMoveSkillInfoMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->AttackMoveSkillInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->AttackMoveSkillInfoMap).field_0x48 - 1U & 1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->AttackMoveSkillInfoMap + (longlong)iVar2 * 0x18) == 1) {
          pFVar3 = GetAttackMoveSkillInfo(this,Short);
          iVar2 = pFVar3->SkillID;
          uVar6 = UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
          UDS_SkillData::GetData((ulong64)&local_a8,uVar6,SUB41(iVar2,0));
          bVar1 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_a8,(void *)0x0);
          if (!bVar1) {
            pUVar7 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_a8);
            bVar1 = UDS_SkillData::CheckCoolTime(pUVar7);
            if (!bVar1) {
              local_res20.WeakPtr.ObjectIndex =
                   (int)((float)pFVar3->NormalAttackDistance + (float)local_78);
              bVar1 = DS_Util::IsCloseDist
                                (&local_68,(TVector<double> *)&TStack_90._s_0,(float *)&local_res20)
              ;
              if (bVar1) {
                return pFVar3;
              }
            }
          }
          break;
        }
        iVar2 = *(int *)(*(longlong *)&this->AttackMoveSkillInfoMap + 0x10 + (longlong)iVar2 * 0x18)
        ;
      } while (iVar2 != -1);
    }
  }
LAB_14b9e2096:
  pFVar3 = CCSAI_GetSkillInfo(this,param_2);
  return pFVar3;
}

// Created @ 14b9e6a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NormalAttackAbilityData::Created(UDS_NormalAttackAbilityData *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  EDS_SkillType EVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  UObject *pUVar9;
  FDS_WeaponTypeBaseTableRow *pFVar10;
  ulong64 uVar11;
  UDS_SkillData *pUVar12;
  FDS_SkillConditionTableRow *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_808 [32];
  undefined1 auStack_7c8 [4];
  int iStack_7c4;
  FWeakObjectPtr FStack_7c0;
  FWeakObjectPtr FStack_7b8;
  int aiStack_7b0 [4];
  int aiStack_7a0 [4];
  int aiStack_790 [4];
  undefined4 uStack_780;
  undefined8 uStack_77c;
  undefined1 auStack_770 [8];
  undefined1 auStack_768 [8];
  FString FStack_760;
  FString FStack_750;
  int *piStack_740;
  undefined4 *puStack_738;
  int *piStack_730;
  int *piStack_728;
  int *piStack_720;
  int *piStack_718;
  int *piStack_710;
  int *piStack_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_6f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_808;
  bVar6 = 1 < *(int *)&(this->NormalAttackInfoMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<int,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
                      *)&this->NormalAttackInfoMap);
  }
  puVar1 = &(this->NormalAttackInfoMap).field_0xc;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)&this->NormalAttackInfoMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x34 = 0;
  iVar7 = *(int *)&(this->NormalAttackInfoMap).field_0x2c;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->NormalAttackInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NormalAttackInfoMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->NormalAttackInfoMap).field_0x48 = 1;
    TSet<TTuple<int,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
              *)&this->NormalAttackInfoMap);
  }
  UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  UDS_CharInfoData::GetData((ulong64)&FStack_7c0);
  bVar6 = FWeakObjectPtr::IsValid(&FStack_7c0);
  if (bVar6) {
    pUVar9 = FWeakObjectPtr::Get(&FStack_7c0);
    pFVar10 = FDS_WeaponTypeBaseTableRow::Get((ulonglong)(byte)pUVar9[0x17].field_0x10,true);
    if (pFVar10 == (FDS_WeaponTypeBaseTableRow *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&FStack_7c0);
        TStack_5d8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_5d8,"UDS_NormalAttackAbilityData::InitNormalAttackData",0x31,Yes);
        UDS_LogManager::PrintLog
                  (pUVar8,1,Warning,TStack_5d8.Ptr,0x3e,
                   L"weaponTypeBaseTableRow is nullptr. WeaponType : %d");
        if ((void *)TStack_5d8._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_5d8._padding_);
        }
      }
    }
    else {
      iVar7 = (pFVar10->ID_NormalAttack).ArrayNum;
      if (iVar7 == 0) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          TStack_4b8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_4b8,"UDS_NormalAttackAbilityData::InitNormalAttackData",0x31,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,TStack_4b8.Ptr,0x44,
                     L"weaponTypeBaseTableRow.ID_NormalAttack is empty.");
          if ((void *)TStack_4b8._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_4b8._padding_);
          }
        }
      }
      else {
        if ((iVar7 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar4 = *(undefined4 *)(pFVar10->ID_NormalAttack).AllocatorInstance.Data;
        uVar11 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
        UDS_SkillData::GetData((ulong64)&FStack_7b8,uVar11,SUB41(uVar4,0));
        bVar6 = FWeakObjectPtr::IsValid(&FStack_7b8);
        if (bVar6) {
          pUVar12 = (UDS_SkillData *)FWeakObjectPtr::Get(&FStack_7b8);
          iVar7 = UDS_SkillData::GetMainSkillID(pUVar12);
          pFVar13 = FDS_SkillConditionTableRow::Get((longlong)iVar7,true);
          if (pFVar13 == (FDS_SkillConditionTableRow *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            if (pUVar8 != (UDS_LogManager *)0x0) {
              pUVar8 = UDS_LogManager::GetInst();
              pUVar12 = (UDS_SkillData *)FWeakObjectPtr::Get(&FStack_7b8);
              UDS_SkillData::GetMainSkillID(pUVar12);
              TStack_278._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&TStack_278,"UDS_NormalAttackAbilityData::InitNormalAttackData",0x31,Yes);
              UDS_LogManager::PrintLog
                        (pUVar8,1,Warning,TStack_278.Ptr,0x52,
                         L"skillConditionRow is nullptr. MainSkillID : %d");
              if ((void *)TStack_278._padding_ != (void *)0x0) {
                FMemory::Free((void *)TStack_278._padding_);
              }
            }
          }
          else {
            EVar3 = pFVar13->SkillType;
            if (EVar3 == NormalAttack) {
              iStack_7c4 = 0;
              pFVar14 = (pFVar13->ID_NormalAttack).AllocatorInstance.Data;
              iVar7 = (pFVar13->ID_NormalAttack).ArrayNum;
              pFVar2 = pFVar14 + (longlong)iVar7 * 4;
              while( true ) {
                if ((pFVar13->ID_NormalAttack).ArrayNum != iVar7) {
                  `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(auStack_7c8);
                }
                if (pFVar14 == pFVar2) break;
                uStack_780 = *(undefined4 *)pFVar14;
                piStack_740 = &iStack_7c4;
                uStack_77c = 0;
                puStack_738 = &uStack_780;
                TSet<TTuple<int,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<int_const_&,FDS_NormalAttackInfo_const_&>_>
                          ((TSet<TTuple<int,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
                            *)&this->NormalAttackInfoMap,
                           (TPairInitializer<int_const_&,FDS_NormalAttackInfo_const_&> *)auStack_770
                           ,(bool *)&piStack_740);
                iStack_7c4 = iStack_7c4 + 1;
                pFVar14 = pFVar14 + 4;
              }
              if (0 < pFVar13->ID_AttackMoveSkill03) {
                aiStack_7b0[2] = (int)pFVar13->AttackMoveCheck03;
                aiStack_7b0[1] = 1;
                piStack_730 = aiStack_7b0 + 1;
                piStack_728 = aiStack_7b0;
                aiStack_7b0[0] = pFVar13->ID_AttackMoveSkill03;
                TSet<TTuple<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<enum_EDS_NormalAttackDistanceType_&,FDS_NormalAttackInfo_&>_>
                          (&this->AttackMoveSkillInfoMap,
                           (TPairInitializer<EDS_NormalAttackDistanceType_&,FDS_NormalAttackInfo_&>
                            *)(auStack_770 + 4),(bool *)&piStack_730);
              }
              if (0 < pFVar13->ID_AttackMoveSkill02) {
                aiStack_7a0[2] = (int)pFVar13->AttackMoveCheck02;
                aiStack_7a0[1] = 2;
                piStack_720 = aiStack_7a0 + 1;
                piStack_718 = aiStack_7a0;
                aiStack_7a0[0] = pFVar13->ID_AttackMoveSkill02;
                TSet<TTuple<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<enum_EDS_NormalAttackDistanceType_&,FDS_NormalAttackInfo_&>_>
                          (&this->AttackMoveSkillInfoMap,
                           (TPairInitializer<EDS_NormalAttackDistanceType_&,FDS_NormalAttackInfo_&>
                            *)auStack_768,(bool *)&piStack_720);
              }
              if (0 < pFVar13->ID_AttackMoveSkill01) {
                aiStack_790[2] = (int)pFVar13->AttackMoveCheck01;
                aiStack_790[1] = 3;
                piStack_710 = aiStack_790 + 1;
                piStack_708 = aiStack_790;
                aiStack_790[0] = pFVar13->ID_AttackMoveSkill01;
                TSet<TTuple<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<enum_EDS_NormalAttackDistanceType_&,FDS_NormalAttackInfo_&>_>
                          (&this->AttackMoveSkillInfoMap,
                           (TPairInitializer<EDS_NormalAttackDistanceType_&,FDS_NormalAttackInfo_&>
                            *)(auStack_768 + 4),(bool *)&piStack_710);
              }
              InitSkillModeNormalAttackData(this);
            }
            else {
              ::FString::FString(&FStack_750,"EDS_SkillType");
              DS_Util::GetEnumToString(&FStack_760,&FStack_750,(ulonglong)EVar3);
              if (FStack_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_750.Data.AllocatorInstance.Data);
              }
              pUVar8 = UDS_LogManager::GetInst();
              if (pUVar8 != (UDS_LogManager *)0x0) {
                pUVar8 = UDS_LogManager::GetInst();
                TStack_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&TStack_158,"UDS_NormalAttackAbilityData::InitNormalAttackData",0x31,Yes)
                ;
                UDS_LogManager::PrintLog
                          (pUVar8,1,Warning,TStack_158.Ptr,0x59,
                           L"SkillType is not EDS_SkillType::NormalAttack.. skillType : %s");
                if ((void *)TStack_158._padding_ != (void *)0x0) {
                  FMemory::Free((void *)TStack_158._padding_);
                }
              }
              if (FStack_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_760.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        else {
          pUVar8 = UDS_LogManager::GetInst();
          if (pUVar8 != (UDS_LogManager *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            if (((pFVar10->ID_NormalAttack).ArrayNum < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            TStack_398._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_398,"UDS_NormalAttackAbilityData::InitNormalAttackData",0x31,Yes);
            UDS_LogManager::PrintLog
                      (pUVar8,1,Warning,TStack_398.Ptr,0x4b,
                       L"normalAttackSkillData is nullptr. normalAttackID : %d");
            if ((void *)TStack_398._padding_ != (void *)0x0) {
              FMemory::Free((void *)TStack_398._padding_);
            }
          }
        }
      }
    }
  }
  else {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      UDS_DataBase::GetEntityID((UDS_DataBase *)this);
      TStack_6f8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_6f8,"UDS_NormalAttackAbilityData::InitNormalAttackData",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,TStack_6f8.Ptr,0x37,L"charInfoData is nullptr. EntityID : %llu");
      if ((void *)TStack_6f8._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_6f8._padding_);
      }
    }
  }
  return;
}

// DoAttack @ 14b9e8270

bool __thiscall
UDS_NormalAttackAbilityData::DoAttack
          (UDS_NormalAttackAbilityData *this,
          TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  FDS_NormalAttackInfo *pFVar4;
  ulong64 uVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)&local_res10,
                     (void *)0x0);
  if (!bVar2) {
    pFVar4 = GetSkillInfoByDistance
                       (this,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res10);
    iVar1 = pFVar4->SkillID;
    if (iVar1 != 0) {
      uVar5 = UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
      UDS_SkillData::GetData((ulong64)&local_res18,uVar5,SUB41(iVar1,0));
      bVar2 = FWeakObjectPtr::IsValid(&local_res18);
      if (bVar2) {
        pUVar6 = FWeakObjectPtr::Get(&local_res18);
        cVar3 = (**(code **)(*(longlong *)pUVar6 + 0x2f8))(pUVar6);
        if (cVar3 != '\0') {
          this->CurrentSkillID = pFVar4->SkillID;
          if (pFVar4->NormalAttackDistanceType == None) {
            this->AttackStep = this->AttackStep + 1;
          }
          return true;
        }
      }
    }
  }
  return false;
}

// GetAttackMoveSkillInfo @ 14b9ecb80

FDS_NormalAttackInfo * __thiscall
UDS_NormalAttackAbilityData::GetAttackMoveSkillInfo
          (UDS_NormalAttackAbilityData *this,EDS_NormalAttackDistanceType param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_NormalAttackInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->AttackMoveSkillInfoMap).field_0x8 !=
      *(int *)&(this->AttackMoveSkillInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->AttackMoveSkillInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->AttackMoveSkillInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->AttackMoveSkillInfoMap).field_0x48 - Short & param_1)
                              * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->AttackMoveSkillInfoMap;
      do {
        if (*(EDS_NormalAttackDistanceType *)(lVar1 + (longlong)iVar2 * 0x18) == param_1) {
          pFVar3 = TMapBase<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,0>_>
                   ::FindChecked(&this->AttackMoveSkillInfoMap,param_1);
          return pFVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return &NormalAttackEmptyInfo;
}

// GetAttackSkillID @ 14b9ecbf0

int __thiscall UDS_NormalAttackAbilityData::GetAttackSkillID(UDS_NormalAttackAbilityData *this)

{
  return this->CurrentSkillID;
}

// GetAttackStep @ 14b9ecc00

int __thiscall UDS_NormalAttackAbilityData::GetAttackStep(UDS_NormalAttackAbilityData *this)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
  *pTVar4;
  undefined1 *puVar5;
  int iVar6;
  
  iVar6 = *(int *)&(this->NormalAttackInfoMap).field_0x8 -
          *(int *)&(this->NormalAttackInfoMap).field_0x34;
  uVar2 = GetCurrentSkillModeID(this);
  if ((uVar2 != 0) &&
     (*(int *)&(this->NormalAttackInfoMap_SkillMode).field_0x8 !=
      *(int *)&(this->NormalAttackInfoMap_SkillMode).field_0x34)) {
    puVar5 = *(undefined1 **)&(this->NormalAttackInfoMap_SkillMode).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->NormalAttackInfoMap_SkillMode).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->NormalAttackInfoMap_SkillMode).field_0x48 - 1U &
                              uVar2) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->NormalAttackInfoMap_SkillMode;
      do {
        if (*(uint *)((longlong)iVar3 * 0x60 + lVar1) == uVar2) {
          pTVar4 = TMapBase<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,0>_>
                   ::FindChecked((TMapBase<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,0>_>
                                  *)&this->NormalAttackInfoMap_SkillMode,uVar2);
          iVar6 = *(int *)&pTVar4->field_0x8 - *(int *)&pTVar4->field_0x34;
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x60 + 0x58 + lVar1);
      } while (iVar3 != -1);
    }
  }
  if (iVar6 < 1) {
    return 0;
  }
  return this->AttackStep % iVar6;
}

// GetCurrentSkillModeID @ 14b9eeb60

int __thiscall UDS_NormalAttackAbilityData::GetCurrentSkillModeID(UDS_NormalAttackAbilityData *this)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  UObject *pUVar2;
  EDS_CharState local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  ulong64 local_18 [2];
  
  UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  UDS_CharStateData::GetData((ulong64)&local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
    local_res10 = SkillMode;
    bVar1 = UDS_CharStateData::HasCharState(this_00,&local_res10);
    if (bVar1) {
      local_res10 = CONCAT71(local_res10._1_7_,0x18);
      local_18[0] = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
      UDS_AbilityDataSet::GetAbilityData<UDS_SkillModeAbilityData>
                ((ulong64 *)&local_res20,(EDS_AbilityTagType *)local_18);
      bVar1 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar1) {
        pUVar2 = FWeakObjectPtr::Get(&local_res20);
        return *(int *)&pUVar2[2].field_0x8;
      }
    }
  }
  return 0;
}

// GetSkillInfo @ 14b9f1370

FDS_NormalAttackInfo * __thiscall
UDS_NormalAttackAbilityData::GetSkillInfo(UDS_NormalAttackAbilityData *this)

{
  TMap<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,0>_>
  *this_00;
  longlong lVar1;
  uint uVar2;
  int iVar3;
  TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
  *pTVar4;
  FDS_NormalAttackInfo *pFVar5;
  undefined1 *puVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = *(int *)&(this->NormalAttackInfoMap).field_0x8 -
          *(int *)&(this->NormalAttackInfoMap).field_0x34;
  uVar2 = GetCurrentSkillModeID(this);
  if ((uVar2 != 0) &&
     (*(int *)&(this->NormalAttackInfoMap_SkillMode).field_0x8 !=
      *(int *)&(this->NormalAttackInfoMap_SkillMode).field_0x34)) {
    puVar6 = *(undefined1 **)&(this->NormalAttackInfoMap_SkillMode).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->NormalAttackInfoMap_SkillMode).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->NormalAttackInfoMap_SkillMode).field_0x48 - 1U &
                              uVar2) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->NormalAttackInfoMap_SkillMode;
      do {
        if (*(uint *)((longlong)iVar3 * 0x60 + lVar1) == uVar2) {
          pTVar4 = TMapBase<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,0>_>
                   ::FindChecked((TMapBase<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,0>_>
                                  *)&this->NormalAttackInfoMap_SkillMode,uVar2);
          iVar7 = *(int *)&pTVar4->field_0x8 - *(int *)&pTVar4->field_0x34;
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x60 + 0x58 + lVar1);
      } while (iVar3 != -1);
    }
  }
  if (iVar7 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = (longlong)this->AttackStep % (longlong)iVar7 & 0xffffffff;
  }
  uVar2 = GetCurrentSkillModeID(this);
  iVar7 = (int)uVar8;
  if ((uVar2 != 0) &&
     (this_00 = &this->NormalAttackInfoMap_SkillMode,
     *(int *)&(this->NormalAttackInfoMap_SkillMode).field_0x8 !=
     *(int *)&(this->NormalAttackInfoMap_SkillMode).field_0x34)) {
    puVar6 = *(undefined1 **)&(this->NormalAttackInfoMap_SkillMode).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->NormalAttackInfoMap_SkillMode).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->NormalAttackInfoMap_SkillMode).field_0x48 - 1U &
                              uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)((longlong)iVar3 * 0x60 + *(longlong *)this_00) == uVar2) {
          pTVar4 = TMapBase<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,0>_>
                   ::FindChecked((TMapBase<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,0>_>
                                  *)this_00,uVar2);
          if (*(int *)&pTVar4->field_0x8 != *(int *)&pTVar4->field_0x34) {
            puVar6 = *(undefined1 **)&pTVar4->field_0x40;
            if (*(undefined1 **)&pTVar4->field_0x40 == (undefined1 *)0x0) {
              puVar6 = &pTVar4->field_0x38;
            }
            iVar3 = *(int *)(puVar6 + (*(int *)&pTVar4->field_0x48 - 1 & uVar8) * 4);
            if (iVar3 != -1) {
              do {
                if (*(int *)(*(longlong *)pTVar4 + (longlong)iVar3 * 0x18) == iVar7) {
                  pTVar4 = TMapBase<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,0>_>
                           ::FindChecked((TMapBase<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,0>_>
                                          *)this_00,uVar2);
                  pFVar5 = TMapBase<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
                           ::FindChecked((TMapBase<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
                                          *)pTVar4,iVar7);
                  return pFVar5;
                }
                iVar3 = *(int *)(*(longlong *)pTVar4 + 0x10 + (longlong)iVar3 * 0x18);
              } while (iVar3 != -1);
            }
          }
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x60 + 0x58 + *(longlong *)this_00);
      } while (iVar3 != -1);
    }
  }
  if (*(int *)&(this->NormalAttackInfoMap).field_0x8 !=
      *(int *)&(this->NormalAttackInfoMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->NormalAttackInfoMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->NormalAttackInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (*(int *)&(this->NormalAttackInfoMap).field_0x48 - 1 & uVar8) * 4);
    if (iVar3 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->NormalAttackInfoMap + (longlong)iVar3 * 0x18) == iVar7) {
          pFVar5 = TMapBase<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
                                  *)&this->NormalAttackInfoMap,iVar7);
          return pFVar5;
        }
        iVar3 = *(int *)(*(longlong *)&this->NormalAttackInfoMap + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return &NormalAttackEmptyInfo;
}

// GetSkillInfoByDistance @ 14b9f1580

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

FDS_NormalAttackInfo * __thiscall
UDS_NormalAttackAbilityData::GetSkillInfoByDistance
          (UDS_NormalAttackAbilityData *this,
          TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_1)

{
  TMap<EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,0>_>
  *this_00;
  bool bVar1;
  FDS_NormalAttackInfo *pFVar2;
  FDS_EntityBase *this_01;
  UDS_MovementCore *this_02;
  FDS_GetTargetLocationResult *pFVar3;
  UDS_FindTargetAbilityData *this_03;
  UObject *pUVar4;
  ulong64 uVar5;
  UDS_SkillData *pUVar6;
  int iVar7;
  undefined1 *puVar8;
  EDS_NormalAttackDistanceType EVar9;
  uint uVar10;
  FWeakObjectPtr local_res10;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> local_res18;
  ulong64 local_res20;
  FWeakObjectPtr local_a8;
  char local_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  TVector<double>_u_0 TStack_98;
  undefined8 local_80;
  FWeakObjectPtr local_78;
  TVector<double> local_70;
  FDS_GetTargetLocationResult local_58;
  
  local_res10 = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)&local_res10,
                     (void *)0x0);
  if (bVar1) {
LAB_14b9f15b9:
    pFVar2 = GetSkillInfo(this);
    return pFVar2;
  }
  local_res20 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  if (local_res20 == 0) {
    local_res20 = 0;
    goto LAB_14b9f15b9;
  }
  this_01 = FDS_EntityBase::GetEntityBase(&local_res20);
  if (this_01 == (FDS_EntityBase *)0x0) {
LAB_14b9f15fd:
    pFVar2 = GetSkillInfo(this);
    return pFVar2;
  }
  UDS_MovementCore::GetMovementCore((ulong64)&local_78);
  bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_78,(void *)0x0);
  if (bVar1) goto LAB_14b9f15fd;
  this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_78);
  UDS_MovementCore::GetActorFootLocation(this_02,&local_70);
  pFVar3 = UDS_FindTargetAbility::GetTargetLocation
                     (&local_58,
                      (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res10,true);
  this_00 = &this->AttackMoveSkillInfoMap;
  local_a0 = pFVar3->bIsValid;
  uStack_9f = pFVar3->field_0x1;
  uStack_9e = pFVar3->field_0x2;
  uStack_9d = pFVar3->field_0x3;
  uStack_9c = pFVar3->field_0x4;
  uStack_9b = pFVar3->field_0x5;
  uStack_9a = pFVar3->field_0x6;
  uStack_99 = pFVar3->field_0x7;
  TStack_98._0_1_ = *(undefined1 *)&(pFVar3->TargetLocation).field0_0x0;
  TStack_98._1_1_ = *(undefined1 *)((longlong)&(pFVar3->TargetLocation).field0_0x0 + 1);
  TStack_98._2_1_ = *(undefined1 *)((longlong)&(pFVar3->TargetLocation).field0_0x0 + 2);
  TStack_98._3_1_ = *(undefined1 *)((longlong)&(pFVar3->TargetLocation).field0_0x0 + 3);
  TStack_98._4_1_ = *(undefined1 *)((longlong)&(pFVar3->TargetLocation).field0_0x0 + 4);
  TStack_98._5_1_ = *(undefined1 *)((longlong)&(pFVar3->TargetLocation).field0_0x0 + 5);
  TStack_98._6_1_ = *(undefined1 *)((longlong)&(pFVar3->TargetLocation).field0_0x0 + 6);
  TStack_98._7_1_ = *(undefined1 *)((longlong)&(pFVar3->TargetLocation).field0_0x0 + 7);
  TStack_98._s_0.Y = (pFVar3->TargetLocation).field0_0x0._s_0.Y;
  TStack_98._s_0.Z = (pFVar3->TargetLocation).field0_0x0._s_0.Z;
  local_80 = *(undefined8 *)&pFVar3->TargetRadius;
  if ((bool)local_a0 == false) {
    if (*(int *)&(this->AttackMoveSkillInfoMap).field_0x8 !=
        *(int *)&(this->AttackMoveSkillInfoMap).field_0x34) {
      puVar8 = *(undefined1 **)&(this->AttackMoveSkillInfoMap).field_0x40;
      uVar10 = *(int *)&(this->AttackMoveSkillInfoMap).field_0x48 - 1;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->AttackMoveSkillInfoMap).field_0x38;
      }
      iVar7 = *(int *)(puVar8 + (ulonglong)(uVar10 & 3) * 4);
      if (iVar7 != -1) {
        do {
          if (*(int *)(*(longlong *)this_00 + (longlong)iVar7 * 0x18) == 3) {
            EVar9 = Long;
            goto LAB_14b9f1778;
          }
          iVar7 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar7 * 0x18);
        } while (iVar7 != -1);
      }
      iVar7 = *(int *)(puVar8 + (ulonglong)(uVar10 & 2) * 4);
      if (iVar7 != -1) {
        do {
          if (*(int *)(*(longlong *)this_00 + (longlong)iVar7 * 0x18) == 2) {
            if (iVar7 != -1) {
              EVar9 = Middle;
              goto LAB_14b9f1778;
            }
            break;
          }
          iVar7 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar7 * 0x18);
        } while (iVar7 != -1);
      }
      puVar8 = *(undefined1 **)&(this->AttackMoveSkillInfoMap).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->AttackMoveSkillInfoMap).field_0x38;
      }
      iVar7 = *(int *)(puVar8 + (ulonglong)
                                (*(int *)&(this->AttackMoveSkillInfoMap).field_0x48 - 1U & 1) * 4);
      if (iVar7 != -1) {
LAB_14b9f1720:
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar7 * 0x18) != 1) goto code_r0x00014b9f172d;
        EVar9 = Short;
LAB_14b9f1778:
        pFVar2 = GetAttackMoveSkillInfo(this,EVar9);
        iVar7 = pFVar2->SkillID;
        if (iVar7 == 0) goto LAB_14b9f1736;
        this_03 = (UDS_FindTargetAbilityData *)FWeakObjectPtr::Get(&local_res10);
        bVar1 = UDS_FindTargetAbilityData::SetFindTargetDataBySkillID(this_03,&local_res20,iVar7);
        if ((!bVar1) ||
           (bVar1 = UDS_FindTargetAbility::FindTargetByDistance
                              (local_res20,
                               (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)
                               &local_res10), !bVar1)) goto LAB_14b9f1736;
        pFVar3 = UDS_FindTargetAbility::GetTargetLocation
                           (&local_58,
                            (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res10,
                            true);
        local_a0 = pFVar3->bIsValid;
        uStack_9f = pFVar3->field_0x1;
        uStack_9e = pFVar3->field_0x2;
        uStack_9d = pFVar3->field_0x3;
        uStack_9c = pFVar3->field_0x4;
        uStack_9b = pFVar3->field_0x5;
        uStack_9a = pFVar3->field_0x6;
        uStack_99 = pFVar3->field_0x7;
        TStack_98._0_1_ = *(undefined1 *)&(pFVar3->TargetLocation).field0_0x0;
        TStack_98._1_1_ = *(undefined1 *)((longlong)&(pFVar3->TargetLocation).field0_0x0 + 1);
        TStack_98._2_1_ = *(undefined1 *)((longlong)&(pFVar3->TargetLocation).field0_0x0 + 2);
        TStack_98._3_1_ = *(undefined1 *)((longlong)&(pFVar3->TargetLocation).field0_0x0 + 3);
        TStack_98._4_1_ = *(undefined1 *)((longlong)&(pFVar3->TargetLocation).field0_0x0 + 4);
        TStack_98._5_1_ = *(undefined1 *)((longlong)&(pFVar3->TargetLocation).field0_0x0 + 5);
        TStack_98._6_1_ = *(undefined1 *)((longlong)&(pFVar3->TargetLocation).field0_0x0 + 6);
        TStack_98._7_1_ = *(undefined1 *)((longlong)&(pFVar3->TargetLocation).field0_0x0 + 7);
        TStack_98._s_0.Y = (pFVar3->TargetLocation).field0_0x0._s_0.Y;
        TStack_98._s_0.Z = (pFVar3->TargetLocation).field0_0x0._s_0.Z;
        local_80 = *(undefined8 *)&pFVar3->TargetRadius;
        if ((bool)local_a0 == false) goto LAB_14b9f1736;
        goto LAB_14b9f17e8;
      }
    }
    goto LAB_14b9f1736;
  }
LAB_14b9f17e8:
  if (*(int *)&(this->AttackMoveSkillInfoMap).field_0x8 !=
      *(int *)&(this->AttackMoveSkillInfoMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->AttackMoveSkillInfoMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->AttackMoveSkillInfoMap).field_0x38;
    }
    iVar7 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->AttackMoveSkillInfoMap).field_0x48 - 1U & 3) * 4);
    if (iVar7 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar7 * 0x18) == 3) {
          puVar8 = *(undefined1 **)&(this->AttackMoveSkillInfoMap).field_0x40;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &(this->AttackMoveSkillInfoMap).field_0x38;
          }
          iVar7 = *(int *)(puVar8 + (ulonglong)
                                    (*(int *)&(this->AttackMoveSkillInfoMap).field_0x48 - 1U & 3) *
                                    4);
          goto LAB_14b9f18c0;
        }
        iVar7 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  goto LAB_14b9f1828;
code_r0x00014b9f172d:
  iVar7 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar7 * 0x18);
  if (iVar7 == -1) goto LAB_14b9f1736;
  goto LAB_14b9f1720;
  while (iVar7 = *(int *)(*(longlong *)&this->AttackMoveSkillInfoMap + 0x10 + (longlong)iVar7 * 0x18
                         ), iVar7 != -1) {
LAB_14b9f18c0:
    if (*(int *)(*(longlong *)&this->AttackMoveSkillInfoMap + (longlong)iVar7 * 0x18) == 3) {
      pFVar2 = TMapBase<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,0>_>
               ::FindChecked(this_00,Long);
      goto LAB_14b9f18ef;
    }
  }
  pFVar2 = &NormalAttackEmptyInfo;
LAB_14b9f18ef:
  local_res18.WeakPtr.ObjectIndex = (int)((float)pFVar2->NormalAttackDistance + (float)local_80);
  bVar1 = DS_Util::IsCloseDist(&local_70,(TVector<double> *)&TStack_98._s_0,(float *)&local_res18);
  if (!bVar1) {
    iVar7 = pFVar2->SkillID;
    uVar5 = UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
    UDS_SkillData::GetData((ulong64)&local_a8,uVar5,SUB41(iVar7,0));
    bVar1 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_a8,(void *)0x0);
    if (!bVar1) {
      pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_a8);
      bVar1 = UDS_SkillData::CheckCoolTime(pUVar6);
      if (!bVar1) {
        pUVar4 = FWeakObjectPtr::Get(&local_a8);
        local_res18.WeakPtr.ObjectIndex = (int)((float)local_80 + *(float *)&pUVar4[8].field_0x20);
        bVar1 = DS_Util::IsCloseDist
                          (&local_70,(TVector<double> *)&TStack_98._s_0,(float *)&local_res18);
        if (bVar1) {
          return pFVar2;
        }
        FDS_EntityBase::GetCharStateData(this_01);
        bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                          (&local_res18,(void *)0x0);
        if ((bVar1) || (bVar1 = FDS_EntityBase::IsActiveInput(this_01), !bVar1)) {
          pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_a8);
          bVar1 = UDS_SkillData::IsTargetTrace(pUVar6);
          if (bVar1) {
            return pFVar2;
          }
        }
        goto LAB_14b9f1736;
      }
    }
  }
LAB_14b9f1828:
  if (*(int *)&(this->AttackMoveSkillInfoMap).field_0x8 !=
      *(int *)&(this->AttackMoveSkillInfoMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->AttackMoveSkillInfoMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->AttackMoveSkillInfoMap).field_0x38;
    }
    iVar7 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->AttackMoveSkillInfoMap).field_0x48 - 1U & 2) * 4);
    if (iVar7 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->AttackMoveSkillInfoMap + (longlong)iVar7 * 0x18) == 2) {
          pFVar2 = GetAttackMoveSkillInfo(this,Middle);
          iVar7 = pFVar2->SkillID;
          uVar5 = UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
          UDS_SkillData::GetData((ulong64)&local_a8,uVar5,SUB41(iVar7,0));
          bVar1 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_a8,(void *)0x0);
          if (!bVar1) {
            pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_a8);
            bVar1 = UDS_SkillData::CheckCoolTime(pUVar6);
            if (!bVar1) {
              local_res18.WeakPtr.ObjectIndex =
                   (int)((float)pFVar2->NormalAttackDistance + (float)local_80);
              bVar1 = DS_Util::IsCloseDist
                                (&local_70,(TVector<double> *)&TStack_98._s_0,(float *)&local_res18)
              ;
              if (!bVar1) {
                pUVar4 = FWeakObjectPtr::Get(&local_a8);
                local_res18.WeakPtr.ObjectIndex =
                     (int)((float)local_80 + *(float *)&pUVar4[8].field_0x20);
                bVar1 = DS_Util::IsCloseDist
                                  (&local_70,(TVector<double> *)&TStack_98._s_0,
                                   (float *)&local_res18);
                if (bVar1) {
                  return pFVar2;
                }
              }
            }
          }
          break;
        }
        iVar7 = *(int *)(*(longlong *)&this->AttackMoveSkillInfoMap + 0x10 + (longlong)iVar7 * 0x18)
        ;
      } while (iVar7 != -1);
    }
  }
  if (*(int *)&(this->AttackMoveSkillInfoMap).field_0x8 !=
      *(int *)&(this->AttackMoveSkillInfoMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->AttackMoveSkillInfoMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->AttackMoveSkillInfoMap).field_0x38;
    }
    iVar7 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->AttackMoveSkillInfoMap).field_0x48 - 1U & 1) * 4);
    if (iVar7 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->AttackMoveSkillInfoMap + (longlong)iVar7 * 0x18) == 1) {
          pFVar2 = GetAttackMoveSkillInfo(this,Short);
          iVar7 = pFVar2->SkillID;
          uVar5 = UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
          UDS_SkillData::GetData((ulong64)&local_a8,uVar5,SUB41(iVar7,0));
          bVar1 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_a8,(void *)0x0);
          if (!bVar1) {
            pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_a8);
            bVar1 = UDS_SkillData::CheckCoolTime(pUVar6);
            if (!bVar1) {
              local_res18.WeakPtr.ObjectIndex =
                   (int)((float)pFVar2->NormalAttackDistance + (float)local_80);
              bVar1 = DS_Util::IsCloseDist
                                (&local_70,(TVector<double> *)&TStack_98._s_0,(float *)&local_res18)
              ;
              if (bVar1) {
                return pFVar2;
              }
            }
          }
          break;
        }
        iVar7 = *(int *)(*(longlong *)&this->AttackMoveSkillInfoMap + 0x10 + (longlong)iVar7 * 0x18)
        ;
      } while (iVar7 != -1);
    }
  }
LAB_14b9f1736:
  pFVar2 = GetSkillInfo(this);
  return pFVar2;
}

// InitNormalAttackData @ 14b9f8300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NormalAttackAbilityData::InitNormalAttackData(UDS_NormalAttackAbilityData *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  EDS_SkillType EVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  UObject *pUVar9;
  FDS_WeaponTypeBaseTableRow *pFVar10;
  ulong64 uVar11;
  UDS_SkillData *pUVar12;
  FDS_SkillConditionTableRow *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_808 [32];
  undefined1 local_7c8 [4];
  int local_7c4;
  FWeakObjectPtr local_7c0;
  FWeakObjectPtr local_7b8;
  int local_7b0 [4];
  int local_7a0 [4];
  int local_790 [4];
  undefined4 local_780;
  undefined8 local_77c;
  undefined1 local_770 [8];
  undefined1 local_768 [8];
  FString local_760;
  FString local_750;
  int *local_740;
  undefined4 *local_738;
  int *local_730;
  int *local_728;
  int *local_720;
  int *local_718;
  int *local_710;
  int *local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_808;
  bVar6 = 1 < *(int *)&(this->NormalAttackInfoMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<int,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
                      *)&this->NormalAttackInfoMap);
  }
  puVar1 = &(this->NormalAttackInfoMap).field_0xc;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)&this->NormalAttackInfoMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x34 = 0;
  iVar7 = *(int *)&(this->NormalAttackInfoMap).field_0x2c;
  *(undefined4 *)&(this->NormalAttackInfoMap).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->NormalAttackInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NormalAttackInfoMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->NormalAttackInfoMap).field_0x48 = 1;
    TSet<TTuple<int,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
              *)&this->NormalAttackInfoMap);
  }
  UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  UDS_CharInfoData::GetData((ulong64)&local_7c0);
  bVar6 = FWeakObjectPtr::IsValid(&local_7c0);
  if (bVar6) {
    pUVar9 = FWeakObjectPtr::Get(&local_7c0);
    pFVar10 = FDS_WeaponTypeBaseTableRow::Get((ulonglong)(byte)pUVar9[0x17].field_0x10,true);
    if (pFVar10 == (FDS_WeaponTypeBaseTableRow *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&local_7c0);
        local_5d8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_5d8,"UDS_NormalAttackAbilityData::InitNormalAttackData",0x31,Yes);
        UDS_LogManager::PrintLog
                  (pUVar8,1,Warning,local_5d8.Ptr,0x3e,
                   L"weaponTypeBaseTableRow is nullptr. WeaponType : %d");
        if ((void *)local_5d8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_5d8._padding_);
        }
      }
    }
    else {
      iVar7 = (pFVar10->ID_NormalAttack).ArrayNum;
      if (iVar7 == 0) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_4b8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_4b8,"UDS_NormalAttackAbilityData::InitNormalAttackData",0x31,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_4b8.Ptr,0x44,
                     L"weaponTypeBaseTableRow.ID_NormalAttack is empty.");
          if ((void *)local_4b8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_4b8._padding_);
          }
        }
      }
      else {
        if ((iVar7 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar4 = *(undefined4 *)(pFVar10->ID_NormalAttack).AllocatorInstance.Data;
        uVar11 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
        UDS_SkillData::GetData((ulong64)&local_7b8,uVar11,SUB41(uVar4,0));
        bVar6 = FWeakObjectPtr::IsValid(&local_7b8);
        if (bVar6) {
          pUVar12 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_7b8);
          iVar7 = UDS_SkillData::GetMainSkillID(pUVar12);
          pFVar13 = FDS_SkillConditionTableRow::Get((longlong)iVar7,true);
          if (pFVar13 == (FDS_SkillConditionTableRow *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            if (pUVar8 != (UDS_LogManager *)0x0) {
              pUVar8 = UDS_LogManager::GetInst();
              pUVar12 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_7b8);
              UDS_SkillData::GetMainSkillID(pUVar12);
              local_278._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_278,"UDS_NormalAttackAbilityData::InitNormalAttackData",0x31,Yes);
              UDS_LogManager::PrintLog
                        (pUVar8,1,Warning,local_278.Ptr,0x52,
                         L"skillConditionRow is nullptr. MainSkillID : %d");
              if ((void *)local_278._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_278._padding_);
              }
            }
          }
          else {
            EVar3 = pFVar13->SkillType;
            if (EVar3 == NormalAttack) {
              local_7c4 = 0;
              pFVar14 = (pFVar13->ID_NormalAttack).AllocatorInstance.Data;
              iVar7 = (pFVar13->ID_NormalAttack).ArrayNum;
              pFVar2 = pFVar14 + (longlong)iVar7 * 4;
              while( true ) {
                if ((pFVar13->ID_NormalAttack).ArrayNum != iVar7) {
                  `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_7c8);
                }
                if (pFVar14 == pFVar2) break;
                local_780 = *(undefined4 *)pFVar14;
                local_740 = &local_7c4;
                local_77c = 0;
                local_738 = &local_780;
                TSet<TTuple<int,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<int_const_&,FDS_NormalAttackInfo_const_&>_>
                          ((TSet<TTuple<int,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
                            *)&this->NormalAttackInfoMap,
                           (TPairInitializer<int_const_&,FDS_NormalAttackInfo_const_&> *)local_770,
                           (bool *)&local_740);
                local_7c4 = local_7c4 + 1;
                pFVar14 = pFVar14 + 4;
              }
              if (0 < pFVar13->ID_AttackMoveSkill03) {
                local_7b0[2] = (int)pFVar13->AttackMoveCheck03;
                local_7b0[1] = 1;
                local_730 = local_7b0 + 1;
                local_728 = local_7b0;
                local_7b0[0] = pFVar13->ID_AttackMoveSkill03;
                TSet<TTuple<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<enum_EDS_NormalAttackDistanceType_&,FDS_NormalAttackInfo_&>_>
                          (&this->AttackMoveSkillInfoMap,
                           (TPairInitializer<EDS_NormalAttackDistanceType_&,FDS_NormalAttackInfo_&>
                            *)(local_770 + 4),(bool *)&local_730);
              }
              if (0 < pFVar13->ID_AttackMoveSkill02) {
                local_7a0[2] = (int)pFVar13->AttackMoveCheck02;
                local_7a0[1] = 2;
                local_720 = local_7a0 + 1;
                local_718 = local_7a0;
                local_7a0[0] = pFVar13->ID_AttackMoveSkill02;
                TSet<TTuple<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<enum_EDS_NormalAttackDistanceType_&,FDS_NormalAttackInfo_&>_>
                          (&this->AttackMoveSkillInfoMap,
                           (TPairInitializer<EDS_NormalAttackDistanceType_&,FDS_NormalAttackInfo_&>
                            *)local_768,(bool *)&local_720);
              }
              if (0 < pFVar13->ID_AttackMoveSkill01) {
                local_790[2] = (int)pFVar13->AttackMoveCheck01;
                local_790[1] = 3;
                local_710 = local_790 + 1;
                local_708 = local_790;
                local_790[0] = pFVar13->ID_AttackMoveSkill01;
                TSet<TTuple<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<enum_EDS_NormalAttackDistanceType_&,FDS_NormalAttackInfo_&>_>
                          (&this->AttackMoveSkillInfoMap,
                           (TPairInitializer<EDS_NormalAttackDistanceType_&,FDS_NormalAttackInfo_&>
                            *)(local_768 + 4),(bool *)&local_710);
              }
              InitSkillModeNormalAttackData(this);
            }
            else {
              ::FString::FString(&local_750,"EDS_SkillType");
              DS_Util::GetEnumToString(&local_760,&local_750,(ulonglong)EVar3);
              if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_750.Data.AllocatorInstance.Data);
              }
              pUVar8 = UDS_LogManager::GetInst();
              if (pUVar8 != (UDS_LogManager *)0x0) {
                pUVar8 = UDS_LogManager::GetInst();
                local_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,"UDS_NormalAttackAbilityData::InitNormalAttackData",0x31,Yes);
                UDS_LogManager::PrintLog
                          (pUVar8,1,Warning,local_158.Ptr,0x59,
                           L"SkillType is not EDS_SkillType::NormalAttack.. skillType : %s");
                if ((void *)local_158._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_158._padding_);
                }
              }
              if (local_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_760.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        else {
          pUVar8 = UDS_LogManager::GetInst();
          if (pUVar8 != (UDS_LogManager *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            if (((pFVar10->ID_NormalAttack).ArrayNum < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_398._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_398,"UDS_NormalAttackAbilityData::InitNormalAttackData",0x31,Yes);
            UDS_LogManager::PrintLog
                      (pUVar8,1,Warning,local_398.Ptr,0x4b,
                       L"normalAttackSkillData is nullptr. normalAttackID : %d");
            if ((void *)local_398._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_398._padding_);
            }
          }
        }
      }
    }
  }
  else {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      UDS_DataBase::GetEntityID((UDS_DataBase *)this);
      local_6f8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_6f8,"UDS_NormalAttackAbilityData::InitNormalAttackData",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_6f8.Ptr,0x37,L"charInfoData is nullptr. EntityID : %llu");
      if ((void *)local_6f8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_6f8._padding_);
      }
    }
  }
  return;
}

// ResetAttackStep @ 14ba18480

void __thiscall UDS_NormalAttackAbilityData::ResetAttackStep(UDS_NormalAttackAbilityData *this)

{
  this->AttackStep = 0;
  return;
}

// ResetData @ 14ba18bb0

void __thiscall UDS_NormalAttackAbilityData::ResetData(UDS_NormalAttackAbilityData *this)

{
  return;
}

