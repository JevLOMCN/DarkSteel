// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// InitializeGroupKeys @ 14692b920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::
FMaterialGroupingPolicy::InitializeGroupKeys
          (FMaterialGroupingPolicy *this,
          TEntityGroupingHandlerBase<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy>
          *param_1,FEntityGroupBuilder *param_2,FEntityAllocationProxy *param_3,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_4,
          TWrite<UE::MovieScene::FEntityGroupID> param_5,TRead<UObject_*> param_6,
          TRead<FWidgetMaterialHandle> param_7)

{
  ulonglong *puVar1;
  uint *puVar2;
  TComponentTypeID<FName> TVar3;
  TComponentTypeID<FMaterialParameterInfo> TVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  bool bVar8;
  FComponentMask *pFVar9;
  FMovieSceneTracksComponentTypes *pFVar10;
  FEntityAllocation *pFVar11;
  ulonglong *puVar12;
  uint uVar13;
  uint uVar14;
  FComponentHeader *pFVar15;
  undefined1 *puVar16;
  TComponentTypeID<FMaterialParameterInfo> TVar17;
  FComponentHeader *pFVar18;
  uchar *puVar19;
  TComponentTypeID<FName> TVar20;
  EComponentHeaderLockMode EVar21;
  int iVar22;
  uchar *puVar23;
  int local_104;
  ushort *local_100;
  undefined4 local_f8 [2];
  FEntityGroupID local_f0;
  ulonglong local_e0;
  ulonglong local_d8;
  IComponentDebuggingTypedPtr *pIStack_d0;
  ushort *puStack_c8;
  uint uStack_c0;
  uint uStack_bc;
  atomic<int> aStack_b8;
  uint uStack_b4;
  undefined1 local_b0 [16];
  ushort *local_a0;
  undefined1 auStack_98 [12];
  int iStack_8c;
  undefined8 local_88;
  atomic<int> aStack_80;
  undefined4 uStack_7c;
  FComponentHeader *local_78;
  undefined4 *local_70;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  atomic<int> aStack_48;
  undefined4 uStack_44;
  
  bVar8 = false;
  local_100 = (ushort *)((ulonglong)local_100 & 0xffffffff00000000);
  pFVar9 = FEntityAllocationProxy::GetAllocationType(param_3);
  pFVar10 = FMovieSceneTracksComponentTypes::Get();
  TVar20 = (TComponentTypeID<FName>)0xffff;
  TVar3 = pFVar10->ScalarParameterName;
  if (((TVar3 == (TComponentTypeID<FName>)0xffff) ||
      ((pFVar9->Bits).NumBits <= (int)(uint)(ushort)TVar3)) ||
     ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[(ushort)TVar3 >> 5].Pad >>
       ((ushort)TVar3 & 0x1f) & 1) == 0)) {
    TVar3 = pFVar10->VectorParameterName;
    if (((TVar3 == (TComponentTypeID<FName>)0xffff) ||
        ((pFVar9->Bits).NumBits <= (int)(uint)(ushort)TVar3)) ||
       ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[(ushort)TVar3 >> 5].Pad >>
         ((ushort)TVar3 & 0x1f) & 1) == 0)) {
      TVar3 = pFVar10->ColorParameterName;
      if (((TVar3 != (TComponentTypeID<FName>)0xffff) &&
          ((int)(uint)(ushort)TVar3 < (pFVar9->Bits).NumBits)) &&
         ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[(ushort)TVar3 >> 5].Pad >>
           ((ushort)TVar3 & 0x1f) & 1) != 0)) {
        TVar20 = pFVar10->ColorParameterName;
      }
    }
    else {
      TVar20 = pFVar10->VectorParameterName;
    }
  }
  else {
    TVar20 = pFVar10->ScalarParameterName;
  }
  TVar4 = pFVar10->ScalarMaterialParameterInfo;
  TVar17 = (TComponentTypeID<FMaterialParameterInfo>)0xffff;
  if (((TVar4 == (TComponentTypeID<FMaterialParameterInfo>)0xffff) ||
      ((pFVar9->Bits).NumBits <= (int)(uint)(ushort)TVar4)) ||
     ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[(ushort)TVar4 >> 5].Pad >>
       ((ushort)TVar4 & 0x1f) & 1) == 0)) {
    TVar4 = pFVar10->VectorMaterialParameterInfo;
    if (((TVar4 == (TComponentTypeID<FMaterialParameterInfo>)0xffff) ||
        ((pFVar9->Bits).NumBits <= (int)(uint)(ushort)TVar4)) ||
       ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[(ushort)TVar4 >> 5].Pad >>
         ((ushort)TVar4 & 0x1f) & 1) == 0)) {
      TVar4 = pFVar10->ColorMaterialParameterInfo;
      if (((TVar4 != (TComponentTypeID<FMaterialParameterInfo>)0xffff) &&
          ((int)(uint)(ushort)TVar4 < (pFVar9->Bits).NumBits)) &&
         ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[(ushort)TVar4 >> 5].Pad >>
           ((ushort)TVar4 & 0x1f) & 1) != 0)) {
        TVar17 = pFVar10->ColorMaterialParameterInfo;
      }
    }
    else {
      TVar17 = pFVar10->VectorMaterialParameterInfo;
    }
  }
  else {
    TVar17 = pFVar10->ScalarMaterialParameterInfo;
  }
  pFVar11 = FEntityAllocationProxy::GetAllocation(param_3);
  uVar5 = pFVar11->Size;
  local_100 = &pFVar11->NumComponents;
  if (TVar20 == (TComponentTypeID<FName>)0xffff) {
    puVar23 = (uchar *)0x0;
    pFVar18 = local_78;
    EVar21 = (EComponentHeaderLockMode)local_70;
  }
  else {
    pFVar18 = pFVar11->ComponentHeaders;
    pFVar15 = pFVar18 + *local_100;
    for (; pFVar18 != pFVar15; pFVar18 = pFVar18 + 1) {
      if ((TComponentTypeID<FName>)(pFVar18->ComponentType).Value == TVar20) {
        EVar21 = pFVar11->LockMode;
        if (EVar21 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
        }
        LOCK();
        pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + 1);
        UNLOCK();
        puVar23 = pFVar18->Components;
        bVar8 = true;
        goto LAB_14692bb17;
      }
    }
    puVar23 = (uchar *)0x0;
    bVar8 = true;
    pFVar18 = (FComponentHeader *)0x0;
    EVar21 = LockFree;
  }
LAB_14692bb17:
  if ((bVar8) && (pFVar18 != (FComponentHeader *)0x0)) {
    LOCK();
    pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar21 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
    }
  }
  bVar8 = false;
  if (TVar17 == (TComponentTypeID<FMaterialParameterInfo>)0xffff) {
    pFVar18 = local_78;
    EVar21 = (EComponentHeaderLockMode)local_70;
  }
  else {
    pFVar18 = pFVar11->ComponentHeaders;
    bVar8 = true;
    pFVar15 = pFVar18 + *local_100;
    for (; pFVar18 != pFVar15; pFVar18 = pFVar18 + 1) {
      if ((TComponentTypeID<FMaterialParameterInfo>)(pFVar18->ComponentType).Value == TVar17) {
        EVar21 = pFVar11->LockMode;
        if (EVar21 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
        }
        LOCK();
        pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + 1);
        UNLOCK();
        puVar19 = pFVar18->Components;
        goto LAB_14692bba7;
      }
    }
    pFVar18 = (FComponentHeader *)0x0;
    EVar21 = LockFree;
  }
  puVar19 = (uchar *)0x0;
LAB_14692bba7:
  if ((bVar8) && (pFVar18 != (FComponentHeader *)0x0)) {
    LOCK();
    pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar21 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
    }
  }
  local_e0 = (ulonglong)uVar5;
  local_104 = 0;
  if (local_e0 != 0) {
    local_60 = (longlong)puVar19 - (longlong)param_7;
    local_58 = (longlong)puVar23 - (longlong)param_6;
    do {
      if (puVar19 == (uchar *)0x0) {
        if (puVar23 == (uchar *)0x0) {
          local_88 = 0;
          aStack_80._0_1_ = 2;
          uStack_7c._0_1_ = 0xff;
          uStack_7c._1_1_ = 0xff;
          uStack_7c._2_2_ = 0xffff;
          local_88._0_4_ = 0;
          local_88._4_4_ = 0;
          uStack_b4 = 0xffffffff;
          uStack_c0 = (uint)local_88;
          uStack_bc = local_88._4_4_;
          aStack_b8 = aStack_80;
        }
        else {
          uVar6 = *(undefined8 *)((longlong)param_6 + local_58);
          aStack_48._0_1_ = 2;
          uStack_44 = 0xffffffff;
          local_50._0_4_ = (uint)uVar6;
          local_50._4_4_ = (uint)((ulonglong)uVar6 >> 0x20);
          uStack_b4 = 0xffffffff;
          uStack_c0 = (uint)local_50;
          uStack_bc = local_50._4_4_;
          aStack_b8 = aStack_48;
          local_50 = uVar6;
        }
      }
      else {
        puVar2 = (uint *)(local_60 + (longlong)param_7);
        uStack_b4 = puVar2[3];
        uStack_c0 = *puVar2;
        uStack_bc = puVar2[1];
        aStack_b8 = *(atomic<int> *)(puVar2 + 2);
      }
      local_d8 = *(ulonglong *)param_6;
      pIStack_d0 = *(IComponentDebuggingTypedPtr **)param_7;
      puStack_c8 = *(ushort **)((longlong)param_7 + 8);
      local_f8[0] = 0xffffffff;
      iStack_8c = uStack_b4;
      auStack_98._8_4_ = aStack_b8;
      uVar13 = ((uint)(local_d8 >> 0x14) & 0xffff ^ (uint)(local_d8 >> 4)) * -0x7a143595;
      uVar14 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      uVar14 = uVar14 >> 0x10 ^ uVar14;
      local_b0._0_8_ = local_d8;
      local_b0._8_8_ = pIStack_d0;
      local_a0 = puStack_c8;
      auStack_98._0_4_ = uStack_c0;
      auStack_98._4_4_ = uStack_bc;
      uVar13 = ::GetTypeHash((FWidgetMaterialHandle *)(local_b0 + 8));
      uVar14 = uVar14 * 0x40 + (uVar14 >> 2) + uVar13 + 0x9e3779b9 ^ uVar14;
      uVar13 = ::GetTypeHash((FMaterialParameterInfo *)auStack_98);
      uVar14 = uVar13 + 0x9e3779b9 + uVar14 * 0x40 + (uVar14 >> 2) ^ uVar14;
      if (*(int *)&(param_1->GroupKeyToIndex).field_0x8 !=
          *(int *)&(param_1->GroupKeyToIndex).field_0x34) {
        puVar7 = *(undefined1 **)&(param_1->GroupKeyToIndex).field_0x40;
        puVar16 = &(param_1->GroupKeyToIndex).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar16 = puVar7;
        }
        iVar22 = *(int *)(puVar16 +
                         (ulonglong)(*(int *)&(param_1->GroupKeyToIndex).field_0x48 - 1U & uVar14) *
                         4);
        if (iVar22 != -1) {
          do {
            puVar12 = (ulonglong *)
                      (*(longlong *)&param_1->GroupKeyToIndex + (longlong)iVar22 * 0x38);
            if (((((*puVar12 == local_b0._0_8_) &&
                  ((IComponentDebuggingTypedPtr *)puVar12[1] ==
                   (IComponentDebuggingTypedPtr *)local_b0._8_8_)) &&
                 ((ushort *)puVar12[2] == local_a0)) &&
                (((uint)puVar12[3] == auStack_98._0_4_ &&
                 (*(uint *)((longlong)puVar12 + 0x1c) == auStack_98._4_4_)))) &&
               (((uchar)puVar12[4] == auStack_98[8] &&
                (*(int *)((longlong)puVar12 + 0x24) == iStack_8c)))) {
              if ((iVar22 != -1) && (puVar12 != (ulonglong *)0x0)) goto LAB_14692bdcd;
              break;
            }
            iVar22 = (int)puVar12[6];
          } while (iVar22 != -1);
        }
      }
      local_78 = (FComponentHeader *)local_b0;
      local_70 = local_f8;
      TSet<TTuple<TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,int>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,int,0>,FDefaultSetAllocator>
      ::
      EmplaceByHash<TPairInitializer<TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>_const_&,int_&&>_>
                ((TSet<TTuple<TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,int>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,int,0>,FDefaultSetAllocator>
                  *)param_1,(uint)&local_100,
                 (TPairInitializer<TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>_const_&,int_&&>
                  *)(ulonglong)uVar14,(bool *)&local_78);
      puVar12 = (ulonglong *)
                ((longlong)(int)local_100 * 0x38 + *(longlong *)&param_1->GroupKeyToIndex);
LAB_14692bdcd:
      puVar1 = puVar12 + 5;
      if ((int)puVar12[5] == -1) {
        uVar13 = FEntityGroupBuilder::AllocateGroupIndex(param_2);
        *(uint *)puVar1 = uVar13;
        TMapBase<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,0>_>
        ::
        FindOrAddImpl<int_const_&,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>_const_&>
                  ((TMapBase<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,0>_>
                    *)&param_1->IndexToGroupKey,uVar13,(int *)puVar1,
                   (TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo> *)local_b0);
      }
      else {
        FEntityGroupBuilder::ReportUsedGroupIndex(param_2,(int)puVar12[5]);
      }
      local_f0.GroupIndex = (int)*puVar1;
      local_f0._8_4_ = local_f0._8_4_ & 0xffffff00;
      local_f0.PolicyKey.Index = (param_2->PolicyKey).Index;
      FEntityGroupBuilder::AddEntityToGroup
                (param_2,(FMovieSceneEntityID *)((longlong)param_4 + (longlong)local_104 * 2),
                 &local_f0);
      local_104 = local_104 + 1;
      param_7 = (TRead<FWidgetMaterialHandle>)((longlong)param_7 + 0x10);
      param_6 = (TRead<UObject_*>)((longlong)param_6 + 8);
      *(ulonglong *)param_5 = CONCAT44(local_f0.GroupIndex,local_f0.PolicyKey.Index);
      *(undefined4 *)((longlong)param_5 + 8) = local_f0._8_4_;
      param_5 = (TWrite<UE::MovieScene::FEntityGroupID>)((longlong)param_5 + 0xc);
      local_e0 = local_e0 - 1;
    } while (local_e0 != 0);
  }
  return;
}

