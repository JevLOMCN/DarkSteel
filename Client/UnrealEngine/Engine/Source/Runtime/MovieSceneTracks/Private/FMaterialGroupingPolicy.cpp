// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// InitializeGroupKeys @ 1467a4e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
::FMaterialGroupingPolicy::InitializeGroupKeys
          (FMaterialGroupingPolicy *this,
          TEntityGroupingHandlerBase<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy>
          *param_1,FEntityGroupBuilder *param_2,FEntityAllocationProxy *param_3,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_4,
          TWrite<UE::MovieScene::FEntityGroupID> param_5,TRead<UObject_*> param_6,
          TRead<FComponentMaterialInfo> param_7)

{
  uint *puVar1;
  TComponentTypeID<FName> TVar2;
  TComponentTypeID<FMaterialParameterInfo> TVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FComponentMask *pFVar7;
  FMovieSceneTracksComponentTypes *pFVar8;
  FEntityAllocation *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  FComponentHeader *pFVar13;
  TComponentTypeID<FMaterialParameterInfo> TVar14;
  FComponentHeader *pFVar15;
  uchar *puVar16;
  TComponentTypeID<FName> TVar17;
  EComponentHeaderLockMode EVar18;
  uchar *puVar19;
  undefined4 local_118;
  int local_114;
  ushort *local_110;
  uint local_108;
  FEntityGroupID local_100;
  ulonglong local_f0;
  ulonglong local_e8;
  IComponentDebuggingTypedPtr *pIStack_e0;
  ushort *puStack_d8;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 local_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  FComponentHeader *local_b0;
  undefined4 *local_a8;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 auStack_50 [24];
  
  bVar5 = false;
  local_110 = (ushort *)((ulonglong)local_110 & 0xffffffff00000000);
  pFVar7 = FEntityAllocationProxy::GetAllocationType(param_3);
  pFVar8 = FMovieSceneTracksComponentTypes::Get();
  TVar17 = (TComponentTypeID<FName>)0xffff;
  TVar2 = pFVar8->ScalarParameterName;
  if (((TVar2 == (TComponentTypeID<FName>)0xffff) ||
      ((pFVar7->Bits).NumBits <= (int)(uint)(ushort)TVar2)) ||
     ((*(uint *)(pFVar7->Bits).AllocatorInstance.InlineData[(ushort)TVar2 >> 5].Pad >>
       ((ushort)TVar2 & 0x1f) & 1) == 0)) {
    TVar2 = pFVar8->VectorParameterName;
    if (((TVar2 == (TComponentTypeID<FName>)0xffff) ||
        ((pFVar7->Bits).NumBits <= (int)(uint)(ushort)TVar2)) ||
       ((*(uint *)(pFVar7->Bits).AllocatorInstance.InlineData[(ushort)TVar2 >> 5].Pad >>
         ((ushort)TVar2 & 0x1f) & 1) == 0)) {
      TVar2 = pFVar8->ColorParameterName;
      if (((TVar2 != (TComponentTypeID<FName>)0xffff) &&
          ((int)(uint)(ushort)TVar2 < (pFVar7->Bits).NumBits)) &&
         ((*(uint *)(pFVar7->Bits).AllocatorInstance.InlineData[(ushort)TVar2 >> 5].Pad >>
           ((ushort)TVar2 & 0x1f) & 1) != 0)) {
        TVar17 = pFVar8->ColorParameterName;
      }
    }
    else {
      TVar17 = pFVar8->VectorParameterName;
    }
  }
  else {
    TVar17 = pFVar8->ScalarParameterName;
  }
  TVar3 = pFVar8->ScalarMaterialParameterInfo;
  TVar14 = (TComponentTypeID<FMaterialParameterInfo>)0xffff;
  if (((TVar3 == (TComponentTypeID<FMaterialParameterInfo>)0xffff) ||
      ((pFVar7->Bits).NumBits <= (int)(uint)(ushort)TVar3)) ||
     ((*(uint *)(pFVar7->Bits).AllocatorInstance.InlineData[(ushort)TVar3 >> 5].Pad >>
       ((ushort)TVar3 & 0x1f) & 1) == 0)) {
    TVar3 = pFVar8->VectorMaterialParameterInfo;
    if (((TVar3 == (TComponentTypeID<FMaterialParameterInfo>)0xffff) ||
        ((pFVar7->Bits).NumBits <= (int)(uint)(ushort)TVar3)) ||
       ((*(uint *)(pFVar7->Bits).AllocatorInstance.InlineData[(ushort)TVar3 >> 5].Pad >>
         ((ushort)TVar3 & 0x1f) & 1) == 0)) {
      TVar3 = pFVar8->ColorMaterialParameterInfo;
      if (((TVar3 != (TComponentTypeID<FMaterialParameterInfo>)0xffff) &&
          ((int)(uint)(ushort)TVar3 < (pFVar7->Bits).NumBits)) &&
         ((*(uint *)(pFVar7->Bits).AllocatorInstance.InlineData[(ushort)TVar3 >> 5].Pad >>
           ((ushort)TVar3 & 0x1f) & 1) != 0)) {
        TVar14 = pFVar8->ColorMaterialParameterInfo;
      }
    }
    else {
      TVar14 = pFVar8->VectorMaterialParameterInfo;
    }
  }
  else {
    TVar14 = pFVar8->ScalarMaterialParameterInfo;
  }
  pFVar9 = FEntityAllocationProxy::GetAllocation(param_3);
  local_118 = CONCAT22(local_118._2_2_,pFVar9->Size);
  local_110 = &pFVar9->NumComponents;
  if (TVar17 == (TComponentTypeID<FName>)0xffff) {
    puVar19 = (uchar *)0x0;
    pFVar15 = local_b0;
    EVar18 = (EComponentHeaderLockMode)local_a8;
  }
  else {
    pFVar15 = pFVar9->ComponentHeaders;
    pFVar13 = pFVar15 + *local_110;
    for (; pFVar15 != pFVar13; pFVar15 = pFVar15 + 1) {
      if ((TComponentTypeID<FName>)(pFVar15->ComponentType).Value == TVar17) {
        EVar18 = pFVar9->LockMode;
        if (EVar18 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
        }
        LOCK();
        pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + 1);
        UNLOCK();
        puVar19 = pFVar15->Components;
        bVar5 = true;
        goto LAB_1467a5017;
      }
    }
    puVar19 = (uchar *)0x0;
    bVar5 = true;
    pFVar15 = (FComponentHeader *)0x0;
    EVar18 = LockFree;
  }
LAB_1467a5017:
  if ((bVar5) && (pFVar15 != (FComponentHeader *)0x0)) {
    LOCK();
    pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar18 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
    }
  }
  bVar5 = false;
  if (TVar14 == (TComponentTypeID<FMaterialParameterInfo>)0xffff) {
    pFVar15 = local_b0;
    EVar18 = (EComponentHeaderLockMode)local_a8;
  }
  else {
    pFVar15 = pFVar9->ComponentHeaders;
    bVar5 = true;
    pFVar13 = pFVar15 + *local_110;
    for (; pFVar15 != pFVar13; pFVar15 = pFVar15 + 1) {
      if ((TComponentTypeID<FMaterialParameterInfo>)(pFVar15->ComponentType).Value == TVar14) {
        EVar18 = pFVar9->LockMode;
        if (EVar18 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
        }
        LOCK();
        pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + 1);
        UNLOCK();
        puVar16 = pFVar15->Components;
        goto LAB_1467a50a7;
      }
    }
    pFVar15 = (FComponentHeader *)0x0;
    EVar18 = LockFree;
  }
  puVar16 = (uchar *)0x0;
LAB_1467a50a7:
  if ((bVar5) && (pFVar15 != (FComponentHeader *)0x0)) {
    LOCK();
    pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar18 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
    }
  }
  local_f0 = (ulonglong)(ushort)local_118;
  local_114 = 0;
  if (local_f0 != 0) {
    local_98 = (longlong)puVar16 - (longlong)param_7;
    local_90 = (longlong)puVar19 - (longlong)param_6;
    do {
      if (puVar16 == (uchar *)0x0) {
        if (puVar19 == (uchar *)0x0) {
          local_c0 = 0;
          uStack_b8 = CONCAT31(uStack_b8._1_3_,2);
          uStack_b4 = 0xffffffff;
          local_c0._0_4_ = 0;
          local_c0._4_4_ = 0;
          uStack_c4 = 0xffffffff;
          uStack_d0 = (uint)local_c0;
          uStack_cc = local_c0._4_4_;
          uStack_c8 = uStack_b8;
        }
        else {
          uVar4 = *(undefined8 *)(local_90 + (longlong)param_6);
          uStack_80 = CONCAT31(uStack_80._1_3_,2);
          uStack_7c = 0xffffffff;
          local_88._0_4_ = (uint)uVar4;
          local_88._4_4_ = (uint)((ulonglong)uVar4 >> 0x20);
          uStack_c4 = 0xffffffff;
          uStack_d0 = (uint)local_88;
          uStack_cc = local_88._4_4_;
          uStack_c8 = uStack_80;
          local_88 = uVar4;
        }
      }
      else {
        puVar1 = (uint *)((longlong)param_7 + local_98);
        uStack_c4 = puVar1[3];
        uStack_d0 = *puVar1;
        uStack_cc = puVar1[1];
        uStack_c8 = puVar1[2];
      }
      pIStack_e0 = *(IComponentDebuggingTypedPtr **)param_7;
      puStack_d8 = *(ushort **)((longlong)param_7 + 8);
      local_e8 = *(ulonglong *)param_6;
      local_118 = 0xffffffff;
      auStack_50._4_4_ = uStack_cc;
      auStack_50._0_4_ = uStack_d0;
      auStack_50._12_4_ = uStack_c4;
      auStack_50._8_4_ = uStack_c8;
      uVar11 = ((uint)(local_e8 >> 0x14) & 0xffff ^ (uint)(local_e8 >> 4)) * -0x7a143595;
      uVar12 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      uVar12 = uVar12 >> 0x10 ^ uVar12;
      local_78 = local_e8;
      uStack_70 = pIStack_e0;
      local_68._0_8_ = local_e8;
      local_68._8_8_ = pIStack_e0;
      local_58 = puStack_d8;
      uVar11 = ::GetTypeHash((FNameEntryId)(uint)pIStack_e0);
      uVar12 = (uVar12 >> 2) + 0x9e3779b9 +
               (local_58._4_1_ ^ (uint)local_58 ^ uVar11 + uStack_70._4_4_) + uVar12 * 0x40 ^ uVar12
      ;
      uVar11 = ::GetTypeHash((FMaterialParameterInfo *)auStack_50);
      local_108 = uVar11 + uVar12 * 0x40 + (uVar12 >> 2) + 0x9e3779b9 ^ uVar12;
      iVar6 = TSet<TTuple<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_>
                        ((TSet<TTuple<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int,0>,FDefaultSetAllocator>
                          *)param_1,local_108,
                         (TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo> *)local_68
                        );
      if ((iVar6 == -1) ||
         (lVar10 = (longlong)iVar6 * 0x38 + *(longlong *)&param_1->GroupKeyToIndex, lVar10 == 0)) {
        local_b0 = (FComponentHeader *)local_68;
        local_a8 = &local_118;
        TSet<TTuple<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int,0>,FDefaultSetAllocator>
        ::
        EmplaceByHash<TPairInitializer<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_const_&,int_&&>_>
                  ((TSet<TTuple<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int,0>,FDefaultSetAllocator>
                    *)param_1,(uint)&local_110,
                   (TPairInitializer<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_const_&,int_&&>
                    *)(ulonglong)local_108,(bool *)&local_b0);
        lVar10 = (longlong)(int)local_110 * 0x38 + *(longlong *)&param_1->GroupKeyToIndex;
      }
      puVar1 = (uint *)(lVar10 + 0x28);
      if (*(int *)(lVar10 + 0x28) == -1) {
        uVar11 = FEntityGroupBuilder::AllocateGroupIndex(param_2);
        *puVar1 = uVar11;
        TMapBase<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,0>_>
        ::
        FindOrAddImpl<int_const_&,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_const_&>
                  ((TMapBase<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,0>_>
                    *)&param_1->IndexToGroupKey,uVar11,(int *)puVar1,
                   (TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo> *)local_68);
      }
      else {
        FEntityGroupBuilder::ReportUsedGroupIndex(param_2,*(int *)(lVar10 + 0x28));
      }
      iVar6 = local_114;
      local_100.GroupIndex = *puVar1;
      local_100.PolicyKey.Index = (param_2->PolicyKey).Index;
      local_100._8_4_ = local_100._8_4_ & 0xffffff00;
      FEntityGroupBuilder::AddEntityToGroup
                (param_2,(FMovieSceneEntityID *)((longlong)param_4 + (longlong)local_114 * 2),
                 &local_100);
      local_114 = iVar6 + 1;
      param_7 = (TRead<FComponentMaterialInfo>)((longlong)param_7 + 0x10);
      param_6 = (TRead<UObject_*>)((longlong)param_6 + 8);
      *(ulonglong *)param_5 = CONCAT44(local_100.GroupIndex,local_100.PolicyKey.Index);
      *(undefined4 *)((longlong)param_5 + 8) = local_100._8_4_;
      param_5 = (TWrite<UE::MovieScene::FEntityGroupID>)((longlong)param_5 + 0xc);
      local_f0 = local_f0 - 1;
    } while (local_f0 != 0);
  }
  return;
}

