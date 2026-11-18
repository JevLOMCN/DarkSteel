// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// Emplace<FName_const_&,FTargetChainSettings_const_&> @ 14df0b520

FTargetChainSettings * __thiscall
TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
::Emplace<FName_const_&,FTargetChainSettings_const_&>
          (TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
           *this,FName *param_1,FTargetChainSettings *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (200,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar6 * 200 + 4 + lVar8);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 200 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<200,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<200,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,FTargetChainSettings>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    uVar3 = *(undefined8 *)&(param_2->FK).TranslationMode;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = *(undefined8 *)&param_2->FK;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = uVar3;
    uVar3 = *(undefined8 *)&(param_2->FK).PoleVectorOffset;
    *(undefined8 *)((longlong)local_28.Pointer + 0x18) =
         *(undefined8 *)&(param_2->FK).PoleVectorMatching;
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = uVar3;
    uVar3 = *(undefined8 *)&(param_2->IK).BlendToSourceTranslation;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = *(undefined8 *)&param_2->IK;
    *(undefined8 *)((longlong)local_28.Pointer + 0x30) = uVar3;
    dVar4 = (param_2->IK).BlendToSourceWeights.field0_0x0._s_0.Y;
    *(double *)((longlong)local_28.Pointer + 0x38) =
         (param_2->IK).BlendToSourceWeights.field0_0x0._s_0.X;
    *(double *)((longlong)local_28.Pointer + 0x40) = dVar4;
    dVar4 = (param_2->IK).StaticOffset.field0_0x0._s_0.X;
    *(double *)((longlong)local_28.Pointer + 0x48) =
         (param_2->IK).BlendToSourceWeights.field0_0x0._s_0.Z;
    *(double *)((longlong)local_28.Pointer + 0x50) = dVar4;
    dVar4 = (param_2->IK).StaticOffset.field0_0x0._s_0.Z;
    *(double *)((longlong)local_28.Pointer + 0x58) = (param_2->IK).StaticOffset.field0_0x0._s_0.Y;
    *(double *)((longlong)local_28.Pointer + 0x60) = dVar4;
    dVar4 = (param_2->IK).StaticLocalOffset.field0_0x0._s_0.Y;
    *(double *)((longlong)local_28.Pointer + 0x68) =
         (param_2->IK).StaticLocalOffset.field0_0x0._s_0.X;
    *(double *)((longlong)local_28.Pointer + 0x70) = dVar4;
    dVar4 = (param_2->IK).StaticRotationOffset.Pitch;
    *(double *)((longlong)local_28.Pointer + 0x78) =
         (param_2->IK).StaticLocalOffset.field0_0x0._s_0.Z;
    *(double *)((longlong)local_28.Pointer + 0x80) = dVar4;
    dVar4 = (param_2->IK).StaticRotationOffset.Roll;
    *(double *)((longlong)local_28.Pointer + 0x88) = (param_2->IK).StaticRotationOffset.Yaw;
    *(double *)((longlong)local_28.Pointer + 0x90) = dVar4;
    uVar3 = *(undefined8 *)&(param_2->IK).bAffectedByIKWarping;
    *(undefined8 *)((longlong)local_28.Pointer + 0x98) = *(undefined8 *)&(param_2->IK).ScaleVertical
    ;
    *(undefined8 *)((longlong)local_28.Pointer + 0xa0) = uVar3;
    uVar3 = *(undefined8 *)&(param_2->SpeedPlanting).SpeedCurveName.Number;
    *(undefined8 *)((longlong)local_28.Pointer + 0xa8) = *(undefined8 *)&param_2->SpeedPlanting;
    *(undefined8 *)((longlong)local_28.Pointer + 0xb0) = uVar3;
    *(undefined8 *)((longlong)local_28.Pointer + 0xb8) =
         *(undefined8 *)&(param_2->SpeedPlanting).UnplantStiffness;
    *(undefined4 *)((longlong)local_28.Pointer + 0xc0) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar7 = uVar7 + (int)((ulonglong)uVar3 >> 0x20);
  bVar5 = TSet<TTuple<FName,FTargetChainSettings>,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar7,local_28.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FName,FTargetChainSettings>,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_res8[0]);
  }
  return (FTargetChainSettings *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 200 + 8);
}

// EmplaceByHash<FName_const_&> @ 14df0c290

FTargetChainSettings * __thiscall
TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FName_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (200,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 200 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 200 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<200,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<200,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FTargetChainSettings>_> *)0x0) {
    TKeyInitializer<FName_const_&>::
    operator<FName,FTargetChainSettings>_TTuple<FName,FTargetChainSettings>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0xc0) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FName,FTargetChainSettings>,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FName,FTargetChainSettings>,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FTargetChainSettings *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 200 + 8);
}

// Find @ 14df331f0

TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
       *this,UIKRigDefinition *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UIKRigDefinition *)*plVar2 == param_1) {
          pTVar4 = (TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 14df33290

TQuat<double> * __thiscall
TMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>
::Find(TMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TQuat<double> *pTVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TQuat<double> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TQuat<double> *)(pFVar2 + 2);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[6].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TQuat<double> *)0x0;
}

// Find @ 14df33330

FRetargetProfile * __thiscall
TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
::Find(TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FRetargetProfile *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x138 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FRetargetProfile *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FRetargetProfile *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x26].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FRetargetProfile *)0x0;
}

// Find @ 14df333d0

FTargetChainSettings * __thiscall
TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
::Find(TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FTargetChainSettings *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 200 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FTargetChainSettings *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FTargetChainSettings *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x18].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FTargetChainSettings *)0x0;
}

