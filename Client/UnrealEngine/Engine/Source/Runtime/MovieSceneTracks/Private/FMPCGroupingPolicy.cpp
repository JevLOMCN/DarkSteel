// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// InitializeGroupKeys @ 14683dae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FMPCGroupingPolicy::InitializeGroupKeys
          (FMPCGroupingPolicy *this,
          TEntityGroupingHandlerBase<UE::MovieScene::FMPCGroupingPolicy> *param_1,
          FEntityGroupBuilder *param_2,FEntityAllocationProxy *param_3,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_4,
          TWrite<UE::MovieScene::FEntityGroupID> param_5,
          TRead<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> param_6)

{
  uint *puVar1;
  TComponentTypeID<FName> TVar2;
  TComponentTypeID<FMaterialParameterInfo> TVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  FWeakObjectPtr FVar7;
  bool bVar8;
  uint uVar9;
  FEntityAllocation *this_00;
  FComponentMask *pFVar10;
  FMovieSceneTracksComponentTypes *pFVar11;
  TComponentLock<UE::MovieScene::TReadOptional<FName>_> *pTVar12;
  uint **ppuVar13;
  TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_> *pTVar14;
  ulonglong *puVar15;
  UObject *pUVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  undefined1 *puVar21;
  TComponentTypeID<FMaterialParameterInfo> TVar22;
  uint uVar23;
  longlong lVar24;
  uint *puVar25;
  TComponentTypeID<FName> TVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int local_118;
  int local_114;
  FWeakObjectPtr local_110;
  undefined4 local_108 [2];
  UObject *local_100;
  FWeakObjectPtr local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  uint *local_e0;
  FEntityGroupID local_d8;
  int local_c8;
  uint uStack_c4;
  FMaterialParameterInfo local_c0;
  uint *local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  int *local_88;
  undefined4 *local_80;
  uint *local_78;
  int *local_70;
  TComponentLock<UE::MovieScene::TReadOptional<FName>_> local_68;
  TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_> local_50;
  
  local_114 = 0;
  this_00 = FEntityAllocationProxy::GetAllocation(param_3);
  pFVar10 = FEntityAllocationProxy::GetAllocationType(param_3);
  uVar27 = (ulonglong)this_00->Size;
  pFVar11 = FMovieSceneTracksComponentTypes::Get();
  TVar26 = (TComponentTypeID<FName>)0xffff;
  TVar2 = pFVar11->ScalarParameterName;
  if (((TVar2 == (TComponentTypeID<FName>)0xffff) ||
      ((pFVar10->Bits).NumBits <= (int)(uint)(ushort)TVar2)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[(ushort)TVar2 >> 5].Pad >>
       ((ushort)TVar2 & 0x1f) & 1) == 0)) {
    TVar2 = pFVar11->VectorParameterName;
    if (((TVar2 == (TComponentTypeID<FName>)0xffff) ||
        ((pFVar10->Bits).NumBits <= (int)(uint)(ushort)TVar2)) ||
       ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[(ushort)TVar2 >> 5].Pad >>
         ((ushort)TVar2 & 0x1f) & 1) == 0)) {
      TVar2 = pFVar11->ColorParameterName;
      if (((TVar2 != (TComponentTypeID<FName>)0xffff) &&
          ((int)(uint)(ushort)TVar2 < (pFVar10->Bits).NumBits)) &&
         ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[(ushort)TVar2 >> 5].Pad >>
           ((ushort)TVar2 & 0x1f) & 1) != 0)) {
        TVar26 = pFVar11->ColorParameterName;
      }
    }
    else {
      TVar26 = pFVar11->VectorParameterName;
    }
  }
  else {
    TVar26 = pFVar11->ScalarParameterName;
  }
  TVar3 = pFVar11->ScalarMaterialParameterInfo;
  TVar22 = (TComponentTypeID<FMaterialParameterInfo>)0xffff;
  if (((TVar3 == (TComponentTypeID<FMaterialParameterInfo>)0xffff) ||
      ((pFVar10->Bits).NumBits <= (int)(uint)(ushort)TVar3)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[(ushort)TVar3 >> 5].Pad >>
       ((ushort)TVar3 & 0x1f) & 1) == 0)) {
    TVar3 = pFVar11->VectorMaterialParameterInfo;
    if (((TVar3 == (TComponentTypeID<FMaterialParameterInfo>)0xffff) ||
        ((pFVar10->Bits).NumBits <= (int)(uint)(ushort)TVar3)) ||
       ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[(ushort)TVar3 >> 5].Pad >>
         ((ushort)TVar3 & 0x1f) & 1) == 0)) {
      TVar3 = pFVar11->ColorMaterialParameterInfo;
      if (((TVar3 != (TComponentTypeID<FMaterialParameterInfo>)0xffff) &&
          ((int)(uint)(ushort)TVar3 < (pFVar10->Bits).NumBits)) &&
         ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[(ushort)TVar3 >> 5].Pad >>
           ((ushort)TVar3 & 0x1f) & 1) != 0)) {
        TVar22 = pFVar11->ColorMaterialParameterInfo;
      }
    }
    else {
      TVar22 = pFVar11->VectorMaterialParameterInfo;
    }
  }
  else {
    TVar22 = pFVar11->ScalarMaterialParameterInfo;
  }
  if (TVar26 == (TComponentTypeID<FName>)0xffff) {
    ppuVar13 = &local_e0;
    lVar24 = 0;
  }
  else {
    pTVar12 = FEntityAllocation::TryReadComponents<FName>(this_00,&local_68,TVar26);
    lVar24 = *(longlong *)&pTVar12->field_0x10;
    *(undefined8 *)&pTVar12->field_0x10 = 0;
    ppuVar13 = &local_b0;
  }
  *ppuVar13 = (uint *)0x0;
  if ((TVar26 != (TComponentTypeID<FName>)0xffff) && (local_68._0_8_ != 0)) {
    LOCK();
    *(int *)(local_68._0_8_ + 0x30) = *(int *)(local_68._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_68._8_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_68._0_8_ + 0x20));
    }
  }
  if (TVar22 == (TComponentTypeID<FMaterialParameterInfo>)0xffff) {
    puVar15 = &local_f0;
    puVar25 = (uint *)0x0;
  }
  else {
    pTVar14 = FEntityAllocation::TryReadComponents<FMaterialParameterInfo>(this_00,&local_50,TVar22)
    ;
    puVar25 = *(uint **)&pTVar14->field_0x10;
    *(undefined8 *)&pTVar14->field_0x10 = 0;
    puVar15 = &local_e8;
  }
  *puVar15 = 0;
  if ((TVar22 != (TComponentTypeID<FMaterialParameterInfo>)0xffff) && (local_50._0_8_ != 0)) {
    LOCK();
    *(int *)(local_50._0_8_ + 0x30) = *(int *)(local_50._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_50._8_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_50._0_8_ + 0x20));
    }
  }
  if ((puVar25 == (uint *)0x0) && (lVar24 == 0)) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<805191597883916369>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneMaterialParameterCollectionSystem.cpp"
                       ,0x51,"ParameterInfos || ParameterNames");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    local_118 = 0;
    if (uVar27 != 0) {
      local_e8 = 0;
      local_e0 = puVar25;
      local_f0 = uVar27;
      do {
        if ((*(int *)param_5 == -1) || (*(int *)((longlong)param_5 + 4) == -1)) {
          if (puVar25 == (uint *)0x0) {
            uVar4 = *(undefined8 *)(lVar24 + local_e8 * 8);
            uStack_90 = CONCAT31(uStack_90._1_3_,2);
            uStack_8c = 0xffffffff;
            local_98._0_4_ = (uint)uVar4;
            local_98._4_4_ = (uint)((ulonglong)uVar4 >> 0x20);
            uVar9 = 0xffffffff;
            uVar28 = (uint)local_98;
            uVar29 = local_98._4_4_;
            uVar30 = uStack_90;
            local_98 = uVar4;
          }
          else {
            uVar9 = local_e0[3];
            uVar28 = *local_e0;
            uVar29 = local_e0[1];
            uVar30 = local_e0[2];
          }
          local_b0 = (uint *)(longlong)local_118;
          pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((longlong)param_6 + (longlong)local_b0 * 8));
          local_110.ObjectIndex = 0;
          local_110.ObjectSerialNumber = 0;
          iVar19 = 0;
          if (pUVar16 != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar16);
            }
            local_f8.ObjectIndex = 0;
            local_f8.ObjectSerialNumber = 0;
            local_100 = pUVar16;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar16);
            }
            FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_100);
            local_110 = local_f8;
            FVar7 = local_110;
            local_110.ObjectIndex = local_f8.ObjectIndex;
            iVar19 = local_110.ObjectIndex;
            local_110 = FVar7;
          }
          local_c8 = local_110.ObjectIndex;
          uStack_c4 = local_110.ObjectSerialNumber;
          local_108[0] = 0xffffffff;
          uVar20 = iVar19 - uStack_c4 ^ uStack_c4 >> 0xd;
          uVar17 = (-0x61c88647 - uVar20) - uStack_c4 ^ uVar20 << 8;
          uVar23 = (uStack_c4 - uVar17) - uVar20 ^ uVar17 >> 0xd;
          uVar20 = (uVar20 - uVar17) - uVar23 ^ uVar23 >> 0xc;
          uVar17 = (uVar17 - uVar20) - uVar23 ^ uVar20 << 0x10;
          uVar23 = (uVar23 - uVar17) - uVar20 ^ uVar17 >> 5;
          uVar20 = (uVar20 - uVar23) - uVar17 ^ uVar23 >> 3;
          uVar17 = (uVar17 - uVar20) - uVar23 ^ uVar20 << 10;
          uVar17 = (uVar23 - uVar17) - uVar20 ^ uVar17 >> 0xf;
          local_c0.Name.ComparisonIndex.Value = uVar28;
          local_c0.Name.Number = uVar29;
          local_c0._8_4_ = uVar30;
          local_c0.Index = uVar9;
          uVar9 = ::GetTypeHash(&local_c0);
          uVar17 = uVar17 * 0x40 + (uVar17 >> 2) + uVar9 + 0x9e3779b9 ^ uVar17;
          local_100 = (UObject *)CONCAT44(local_100._4_4_,uVar17);
          if (*(int *)&(param_1->GroupKeyToIndex).field_0x8 !=
              *(int *)&(param_1->GroupKeyToIndex).field_0x34) {
            puVar5 = *(undefined1 **)&(param_1->GroupKeyToIndex).field_0x40;
            puVar21 = &(param_1->GroupKeyToIndex).field_0x38;
            if (puVar5 != (undefined1 *)0x0) {
              puVar21 = puVar5;
            }
            iVar19 = *(int *)(puVar21 +
                             (ulonglong)
                             (*(int *)&(param_1->GroupKeyToIndex).field_0x48 - 1U & uVar17) * 4);
            while (iVar19 != -1) {
              lVar18 = *(longlong *)&param_1->GroupKeyToIndex + (longlong)iVar19 * 0x24;
              if (((((*(int *)(*(longlong *)&param_1->GroupKeyToIndex + (longlong)iVar19 * 0x24) ==
                      local_c8) && (*(uint *)(lVar18 + 4) == uStack_c4)) &&
                   (*(uint *)(lVar18 + 8) == local_c0.Name.ComparisonIndex.Value)) &&
                  ((*(uint *)(lVar18 + 0xc) == local_c0.Name.Number &&
                   (*(char *)(lVar18 + 0x10) == local_c0.Association.Value)))) &&
                 (*(uint *)(lVar18 + 0x14) == local_c0.Index)) {
                if ((iVar19 != -1) && (lVar18 != 0)) goto LAB_14683dfec;
                break;
              }
              iVar19 = *(int *)(lVar18 + 0x1c);
            }
          }
          local_88 = &local_c8;
          local_80 = local_108;
          TSet<TTuple<TTuple<FObjectKey,FMaterialParameterInfo>,int>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMaterialParameterInfo>,int,0>,FDefaultSetAllocator>
          ::
          EmplaceByHash<TPairInitializer<TTuple<FObjectKey,FMaterialParameterInfo>_const_&,int_&&>_>
                    ((TSet<TTuple<TTuple<FObjectKey,FMaterialParameterInfo>,int>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMaterialParameterInfo>,int,0>,FDefaultSetAllocator>
                      *)param_1,(uint)&local_114,
                     (TPairInitializer<TTuple<FObjectKey,FMaterialParameterInfo>_const_&,int_&&> *)
                     (ulonglong)uVar17,(bool *)&local_88);
          lVar18 = *(longlong *)&param_1->GroupKeyToIndex + (longlong)local_114 * 0x24;
LAB_14683dfec:
          puVar1 = (uint *)(lVar18 + 0x18);
          if (*(int *)(lVar18 + 0x18) == -1) {
            uVar9 = FEntityGroupBuilder::AllocateGroupIndex(param_2);
            *puVar1 = uVar9;
            if (*(int *)&(param_1->IndexToGroupKey).field_0x8 !=
                *(int *)&(param_1->IndexToGroupKey).field_0x34) {
              puVar5 = *(undefined1 **)&(param_1->IndexToGroupKey).field_0x40;
              puVar21 = &(param_1->IndexToGroupKey).field_0x38;
              if (puVar5 != (undefined1 *)0x0) {
                puVar21 = puVar5;
              }
              iVar19 = *(int *)(puVar21 +
                               (ulonglong)
                               (*(int *)&(param_1->IndexToGroupKey).field_0x48 - 1U & uVar9) * 4);
              if (iVar19 != -1) {
                do {
                  lVar18 = *(longlong *)&param_1->IndexToGroupKey + (longlong)iVar19 * 0x24;
                  if (*(uint *)(*(longlong *)&param_1->IndexToGroupKey + (longlong)iVar19 * 0x24) ==
                      uVar9) {
                    if (lVar18 != 0) goto LAB_14683e09d;
                    break;
                  }
                  iVar19 = *(int *)(lVar18 + 0x1c);
                } while (iVar19 != -1);
              }
            }
            local_70 = &local_c8;
            local_78 = puVar1;
            TSet<TTuple<int,TTuple<FObjectKey,FMaterialParameterInfo>_>,TDefaultMapHashableKeyFuncs<int,TTuple<FObjectKey,FMaterialParameterInfo>,0>,FDefaultSetAllocator>
            ::
            EmplaceByHash<TPairInitializer<int_const_&,TTuple<FObjectKey,FMaterialParameterInfo>_const_&>_>
                      ((TSet<TTuple<int,TTuple<FObjectKey,FMaterialParameterInfo>_>,TDefaultMapHashableKeyFuncs<int,TTuple<FObjectKey,FMaterialParameterInfo>,0>,FDefaultSetAllocator>
                        *)&param_1->IndexToGroupKey,(uint)local_a8,
                       (TPairInitializer<int_const_&,TTuple<FObjectKey,FMaterialParameterInfo>_const_&>
                        *)(ulonglong)uVar9,(bool *)&local_78);
          }
          else {
            FEntityGroupBuilder::ReportUsedGroupIndex(param_2,*(int *)(lVar18 + 0x18));
          }
LAB_14683e09d:
          local_d8.GroupIndex = *puVar1;
          local_d8._8_4_ = local_d8._8_4_ & 0xffffff00;
          local_d8.PolicyKey.Index = (param_2->PolicyKey).Index;
          FEntityGroupBuilder::AddEntityToGroup
                    (param_2,(FMovieSceneEntityID *)((longlong)param_4 + (longlong)local_b0 * 2),
                     &local_d8);
          *(ulonglong *)param_5 = CONCAT44(local_d8.GroupIndex,local_d8.PolicyKey.Index);
          *(undefined4 *)((longlong)param_5 + 8) = local_d8._8_4_;
          uVar27 = local_f0;
        }
        local_118 = local_118 + 1;
        local_e8 = local_e8 + 1;
        local_e0 = local_e0 + 4;
        param_5 = (TWrite<UE::MovieScene::FEntityGroupID>)((longlong)param_5 + 0xc);
      } while ((longlong)local_e8 < (longlong)uVar27);
    }
  }
  return;
}

