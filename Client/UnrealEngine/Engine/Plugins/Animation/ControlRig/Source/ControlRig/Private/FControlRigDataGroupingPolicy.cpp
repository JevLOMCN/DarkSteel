// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// InitializeGroupKeys @ 14a422b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FControlRigDataGroupingPolicy::InitializeGroupKeys
          (FControlRigDataGroupingPolicy *this,
          TEntityGroupingHandlerBase<UE::MovieScene::FControlRigDataGroupingPolicy> *param_1,
          FEntityGroupBuilder *param_2,FEntityAllocationProxy *param_3,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_4,
          TWrite<UE::MovieScene::FEntityGroupID> param_5,
          TRead<UE::MovieScene::FControlRigSourceData> param_6,TRead<FName> param_7)

{
  uint *puVar1;
  ushort uVar2;
  UObject *pUVar3;
  undefined1 *puVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  FMovieSceneTracksComponentTypes *pFVar8;
  FControlRigComponentTypes *pFVar9;
  FEntityAllocation *pFVar10;
  FComponentMask *pFVar11;
  int *piVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  int iVar18;
  uint uVar19;
  byte local_a8;
  int local_a4;
  FWeakObjectPtr local_a0;
  int local_98;
  uint uStack_94;
  longlong local_90;
  byte local_88;
  undefined8 local_80;
  int local_78 [2];
  FEntityGroupID local_70;
  ulonglong local_60;
  undefined1 local_58 [8];
  UObject *local_50;
  int *local_48;
  undefined8 *local_40;
  uint *local_38;
  int *local_30;
  
  pFVar8 = FMovieSceneTracksComponentTypes::Get();
  pFVar9 = FControlRigComponentTypes::Get();
  pFVar10 = FEntityAllocationProxy::GetAllocation(param_3);
  pFVar11 = FEntityAllocationProxy::GetAllocationType(param_3);
  uVar2 = (pFVar8->Parameters).Bool.PropertyTag.Value;
  local_60 = (ulonglong)pFVar10->Size;
  if (((uVar2 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar2)) ||
     ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1)
      == 0)) {
    uVar2 = (pFVar8->Parameters).Byte.PropertyTag.Value;
    if (((uVar2 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar2)) ||
       ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1
        ) == 0)) {
      uVar2 = (pFVar8->Parameters).Integer.PropertyTag.Value;
      if (((uVar2 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar2)) ||
         ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) &
          1) == 0)) {
        uVar2 = (pFVar8->Parameters).Scalar.PropertyTag.Value;
        if (((uVar2 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar2)) ||
           ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f)
            & 1) == 0)) {
          uVar2 = (pFVar8->Parameters).Vector3.PropertyTag.Value;
          if (((uVar2 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar2)) ||
             ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >>
               (uVar2 & 0x1f) & 1) == 0)) {
            uVar2 = (pFVar8->Parameters).Transform.PropertyTag.Value;
            if (((uVar2 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar2)) ||
               ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >>
                 (uVar2 & 0x1f) & 1) == 0)) {
              uVar2 = (pFVar9->Tags).Space.Value;
              if (((uVar2 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar2)) ||
                 ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >>
                   (uVar2 & 0x1f) & 1) == 0)) {
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("false",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                                   ,0x377,L"");
                if (bVar7) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              else {
                local_a8 = 0;
              }
            }
            else {
              local_a8 = 6;
            }
          }
          else {
            local_a8 = 5;
          }
        }
        else {
          local_a8 = 4;
        }
      }
      else {
        local_a8 = 3;
      }
    }
    else {
      local_a8 = 2;
    }
  }
  else {
    local_a8 = 1;
  }
  local_a4 = 0;
  if (local_60 != 0) {
    lVar16 = (longlong)param_6 - (longlong)param_7;
    do {
      if ((*(int *)param_5 == -1) || (*(int *)((longlong)param_5 + 4) == -1)) {
        pUVar3 = *(UObject **)((longlong)param_7 + lVar16);
        local_80 = *(longlong *)param_7;
        local_98 = 0;
        uStack_94 = 0;
        if (pUVar3 != (UObject *)0x0) {
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar3);
          }
          local_a0.ObjectIndex = 0;
          local_a0.ObjectSerialNumber = 0;
          local_50 = pUVar3;
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar3);
          }
          FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_50);
          local_98 = local_a0.ObjectIndex;
          uStack_94 = local_a0.ObjectSerialNumber;
        }
        lVar6 = local_80;
        local_88 = local_a8;
        uVar15 = local_98 - uStack_94 ^ uStack_94 >> 0xd;
        local_90 = local_80;
        iVar18 = local_80._4_4_;
        local_80 = CONCAT44(local_80._4_4_,0xffffffff);
        uVar13 = (-0x61c88647 - uVar15) - uStack_94 ^ uVar15 << 8;
        uVar19 = (uStack_94 - uVar13) - uVar15 ^ uVar13 >> 0xd;
        uVar15 = (uVar15 - uVar19) - uVar13 ^ uVar19 >> 0xc;
        uVar13 = (uVar13 - uVar15) - uVar19 ^ uVar15 << 0x10;
        uVar19 = (uVar19 - uVar13) - uVar15 ^ uVar13 >> 5;
        uVar15 = (uVar15 - uVar19) - uVar13 ^ uVar19 >> 3;
        uVar13 = (uVar13 - uVar15) - uVar19 ^ uVar15 << 10;
        uVar15 = (uVar19 - uVar13) - uVar15 ^ uVar13 >> 0xf;
        uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar6);
        uVar15 = uVar15 * 0x40 + iVar18 + (uVar15 >> 2) + uVar13 + 0x9e3779b9 ^ uVar15;
        uVar15 = local_88 + 0x9e3779b9 + uVar15 * 0x40 + (uVar15 >> 2) ^ uVar15;
        if (*(int *)&(param_1->GroupKeyToIndex).field_0x8 !=
            *(int *)&(param_1->GroupKeyToIndex).field_0x34) {
          puVar4 = *(undefined1 **)&(param_1->GroupKeyToIndex).field_0x40;
          puVar17 = &(param_1->GroupKeyToIndex).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar17 = puVar4;
          }
          iVar18 = *(int *)(puVar17 +
                           (ulonglong)(*(int *)&(param_1->GroupKeyToIndex).field_0x48 - 1U & uVar15)
                           * 4);
          if (iVar18 != -1) {
            do {
              piVar12 = (int *)((longlong)iVar18 * 0x20 + *(longlong *)&param_1->GroupKeyToIndex);
              if (((*piVar12 == local_98) && (piVar12[1] == uStack_94)) &&
                 ((*(longlong *)(piVar12 + 2) == local_90 && (*(byte *)(piVar12 + 4) == local_88))))
              {
                if ((iVar18 != -1) && (piVar12 != (int *)0x0)) goto LAB_14a422f8e;
                break;
              }
              iVar18 = piVar12[6];
            } while (iVar18 != -1);
          }
        }
        local_48 = &local_98;
        local_40 = &local_80;
        TSet<TTuple<TTuple<FObjectKey,FName,enum_UE::MovieScene::EControlRigControlType>,int>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName,enum_UE::MovieScene::EControlRigControlType>,int,0>,FDefaultSetAllocator>
        ::
        EmplaceByHash<TPairInitializer<TTuple<FObjectKey,FName,enum_UE::MovieScene::EControlRigControlType>_const_&,int_&&>_>
                  (param_1,(uint)local_78,
                   (TPairInitializer<TTuple<FObjectKey,FName,UE::MovieScene::EControlRigControlType>_const_&,int_&&>
                    *)(ulonglong)uVar15,(bool *)&local_48);
        piVar12 = (int *)((longlong)local_78[0] * 0x20 + *(longlong *)&param_1->GroupKeyToIndex);
LAB_14a422f8e:
        puVar1 = (uint *)(piVar12 + 5);
        if (piVar12[5] == -1) {
          uVar13 = FEntityGroupBuilder::AllocateGroupIndex(param_2);
          *puVar1 = uVar13;
          if (*(int *)&(param_1->IndexToGroupKey).field_0x8 !=
              *(int *)&(param_1->IndexToGroupKey).field_0x34) {
            puVar4 = *(undefined1 **)&(param_1->IndexToGroupKey).field_0x40;
            puVar17 = &(param_1->IndexToGroupKey).field_0x38;
            if (puVar4 != (undefined1 *)0x0) {
              puVar17 = puVar4;
            }
            uVar15 = *(uint *)(puVar17 +
                              (ulonglong)
                              (*(int *)&(param_1->IndexToGroupKey).field_0x48 - 1U & uVar13) * 4);
            if (uVar15 != 0xffffffff) {
              do {
                puVar14 = (uint *)((longlong)(int)uVar15 * 0x20 +
                                  *(longlong *)&param_1->IndexToGroupKey);
                if (*puVar14 == uVar13) {
                  if (puVar14 != (uint *)0x0) goto LAB_14a42303b;
                  break;
                }
                uVar15 = puVar14[6];
              } while (uVar15 != 0xffffffff);
            }
          }
          local_30 = &local_98;
          local_38 = puVar1;
          TSet<TTuple<int,TTuple<FObjectKey,FName,enum_UE::MovieScene::EControlRigControlType>_>,TDefaultMapHashableKeyFuncs<int,TTuple<FObjectKey,FName,enum_UE::MovieScene::EControlRigControlType>,0>,FDefaultSetAllocator>
          ::
          EmplaceByHash<TPairInitializer<int_const_&,TTuple<FObjectKey,FName,enum_UE::MovieScene::EControlRigControlType>_const_&>_>
                    (&param_1->IndexToGroupKey,(uint)local_58,
                     (TPairInitializer<int_const_&,TTuple<FObjectKey,FName,UE::MovieScene::EControlRigControlType>_const_&>
                      *)(ulonglong)uVar13,(bool *)&local_38);
        }
        else {
          FEntityGroupBuilder::ReportUsedGroupIndex(param_2,piVar12[5]);
        }
LAB_14a42303b:
        local_70.GroupIndex = *puVar1;
        local_70.PolicyKey.Index = (param_2->PolicyKey).Index;
        local_70._8_4_ = local_70._8_4_ & 0xffffff00;
        FEntityGroupBuilder::AddEntityToGroup
                  (param_2,(FMovieSceneEntityID *)((longlong)param_4 + (longlong)local_a4 * 2),
                   &local_70);
        *(ulonglong *)param_5 = CONCAT44(local_70.GroupIndex,local_70.PolicyKey.Index);
        *(undefined4 *)((longlong)param_5 + 8) = local_70._8_4_;
      }
      local_a4 = local_a4 + 1;
      param_7 = (TRead<FName>)((longlong)param_7 + 8);
      param_5 = (TWrite<UE::MovieScene::FEntityGroupID>)((longlong)param_5 + 0xc);
      local_60 = local_60 - 1;
    } while (local_60 != 0);
  }
  return;
}

