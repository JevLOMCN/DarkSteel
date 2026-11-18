// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 7

// AddOrUpdateRetargetPose @ 14df233e0

FResolvedRetargetPose * __thiscall
FResolvedRetargetPoseSet::AddOrUpdateRetargetPose
          (FResolvedRetargetPoseSet *this,FRetargetSkeleton *param_1,FName param_2,
          FIKRetargetPose *param_3,FName param_4,FRetargetPoseScaleWithPivot *param_5)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  double *pdVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  FName *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined4 *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  bool bVar35;
  int iVar36;
  FResolvedRetargetPose *pFVar37;
  longlong lVar38;
  longlong lVar39;
  int iVar40;
  uint uVar41;
  int iVar42;
  FName *pFVar43;
  FScriptContainerElement *pFVar44;
  uint uVar45;
  longlong *plVar46;
  uint uVar47;
  int iVar48;
  undefined1 *puVar49;
  int iVar50;
  uint *puVar51;
  undefined4 uStack_f4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined4 local_8c;
  
  pFVar37 = FindOrAddRetargetPose(this,param_2);
  pFVar37->Version = param_3->Version;
  puVar32 = (undefined4 *)CONCAT71(param_5._1_7_,param_5._0_1_);
  uVar23 = puVar32[1];
  uVar24 = puVar32[2];
  uVar25 = puVar32[3];
  *(undefined4 *)&(pFVar37->PoseScale).Factor = *puVar32;
  *(undefined4 *)((longlong)&(pFVar37->PoseScale).Factor + 4) = uVar23;
  *(undefined4 *)&(pFVar37->PoseScale).Pivot.field0_0x0 = uVar24;
  *(undefined4 *)((longlong)&(pFVar37->PoseScale).Pivot.field0_0x0 + 4) = uVar25;
  uVar23 = puVar32[5];
  uVar24 = puVar32[6];
  uVar25 = puVar32[7];
  *(undefined4 *)((longlong)&(pFVar37->PoseScale).Pivot.field0_0x0 + 8) = puVar32[4];
  *(undefined4 *)((longlong)&(pFVar37->PoseScale).Pivot.field0_0x0 + 0xc) = uVar23;
  *(undefined4 *)((longlong)&(pFVar37->PoseScale).Pivot.field0_0x0 + 0x10) = uVar24;
  *(undefined4 *)((longlong)&(pFVar37->PoseScale).Pivot.field0_0x0 + 0x14) = uVar25;
  lVar38 = (**(code **)(param_1->SkeletalMesh->_padding_ + 0x318))();
  this_00 = &pFVar37->LocalPose;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (this_00,(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                     (lVar38 + 0x30));
  pTVar1 = &pFVar37->GlobalPose;
  if (pTVar1 != this_00) {
    iVar42 = (pFVar37->LocalPose).ArrayNum;
    piVar2 = &(pFVar37->GlobalPose).ArrayMax;
    pFVar6 = (this_00->AllocatorInstance).Data;
    (pFVar37->GlobalPose).ArrayNum = iVar42;
    if ((iVar42 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar42,*piVar2,&pTVar1->AllocatorInstance,iVar42,piVar2);
      if (iVar42 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar42 * 0x60);
      }
    }
  }
  FRetargetSkeleton::UpdateGlobalTransformsBelowBone(param_1,-1,this_00,pTVar1);
  iVar42 = (param_1->BoneNames).ArrayNum;
  uVar41 = 0;
  if (0 < iVar42) {
    lVar38 = 0;
    do {
      uVar47 = 0;
      if ((int)uVar41 < (pFVar37->LocalPose).ArrayNum) {
        uVar47 = ~uVar41 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar8 = (code *)swi(3);
        pFVar37 = (FResolvedRetargetPose *)(*pcVar8)();
        return pFVar37;
      }
      uVar34 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uVar33 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      pFVar44 = (this_00->AllocatorInstance).Data;
      pFVar6 = pFVar44 + lVar38 + 0x40;
      *(double *)pFVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      *(undefined8 *)(pFVar6 + 8) = uVar33;
      pFVar44 = pFVar44 + lVar38 + 0x50;
      *(undefined8 *)pFVar44 = uVar34;
      *(double *)(pFVar44 + 8) = 0.0;
      uVar47 = 0;
      if ((int)uVar41 < (pFVar37->GlobalPose).ArrayNum) {
        uVar47 = ~uVar41 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar8 = (code *)swi(3);
        pFVar37 = (FResolvedRetargetPose *)(*pcVar8)();
        return pFVar37;
      }
      uVar34 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uVar33 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      pFVar44 = (pTVar1->AllocatorInstance).Data;
      uVar41 = uVar41 + 1;
      pFVar6 = pFVar44 + lVar38 + 0x40;
      *(double *)pFVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      *(undefined8 *)(pFVar6 + 8) = uVar33;
      pFVar44 = pFVar44 + lVar38 + 0x50;
      *(undefined8 *)pFVar44 = uVar34;
      *(double *)(pFVar44 + 8) = 0.0;
      iVar42 = (param_1->BoneNames).ArrayNum;
      lVar38 = lVar38 + 0x60;
    } while ((int)uVar41 < iVar42);
  }
  pFVar7 = (FName *)(param_1->BoneNames).AllocatorInstance.Data;
  for (pFVar43 = pFVar7; pFVar43 != pFVar7 + iVar42; pFVar43 = pFVar43 + 1) {
    if (*pFVar43 == param_4) {
      uVar41 = (uint)((longlong)pFVar43 - (longlong)pFVar7 >> 3);
      if (uVar41 != 0xffffffff) {
        uVar47 = 0;
        if ((int)uVar41 < (pFVar37->GlobalPose).ArrayNum) {
          uVar47 = ~uVar41 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar8 = (code *)swi(3);
          pFVar37 = (FResolvedRetargetPose *)(*pcVar8)();
          return pFVar37;
        }
        local_c0 = (param_3->RootTranslationOffset).field0_0x0._s_0.X;
        dStack_b8 = (param_3->RootTranslationOffset).field0_0x0._s_0.Y;
        local_b0 = (param_3->RootTranslationOffset).field0_0x0._s_0.Z;
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        lVar38 = (longlong)(int)uVar41 * 0x60;
        dVar18 = dStack_b8 + *(double *)(pFVar6 + lVar38 + 0x20 + 8);
        dVar16 = *(double *)(pFVar6 + lVar38 + 0x30 + 8) + 0.0;
        auVar17._8_4_ = SUB84(dVar18,0);
        auVar17._0_8_ = local_c0 + *(double *)(pFVar6 + lVar38 + 0x20);
        auVar17._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        *(undefined1 (*) [16])(pFVar6 + lVar38 + 0x20) = auVar17;
        auVar15._8_4_ = SUB84(dVar16,0);
        auVar15._0_8_ = local_b0 + *(double *)(pFVar6 + lVar38 + 0x30);
        auVar15._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        *(undefined1 (*) [16])(pFVar6 + lVar38 + 0x30) = auVar15;
        FRetargetSkeleton::UpdateLocalTransformOfSingleBone(param_1,uVar41,this_00,pTVar1);
      }
      break;
    }
  }
  lVar38 = (**(code **)(param_1->SkeletalMesh->_padding_ + 0x318))();
  iVar42 = *(int *)&(param_3->BoneRotationOffsets).field_0x28;
  puVar3 = &(param_3->BoneRotationOffsets).field_0x10;
  iVar48 = 0;
  iVar50 = 0;
  uVar41 = 1;
  iVar40 = 0;
  iVar36 = 0;
  if (iVar42 != 0) {
    puVar51 = *(uint **)&(param_3->BoneRotationOffsets).field_0x20;
    if (puVar51 == (uint *)0x0) {
      puVar51 = (uint *)puVar3;
    }
    uVar47 = *puVar51;
    while (uVar47 == 0) {
      lVar39 = (longlong)iVar48;
      iVar50 = iVar50 + 0x20;
      iVar48 = iVar48 + 1;
      if ((int)(iVar42 + -1 + (iVar42 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar48) {
        iVar40 = *(int *)&(param_3->BoneRotationOffsets).field_0x28;
        iVar36 = iVar42;
        goto LAB_14df2374a;
      }
      uVar47 = puVar51[lVar39 + 1];
    }
    iVar40 = *(int *)&(param_3->BoneRotationOffsets).field_0x28;
    uVar41 = -uVar47 & uVar47;
    uVar5 = (ulonglong)uVar41 * 2 + 1;
    lVar39 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar39 == 0; lVar39 = lVar39 + -1) {
      }
    }
    iVar36 = (int)lVar39 + -1 + iVar50;
    if (iVar40 < iVar36) {
      iVar36 = iVar42;
    }
  }
LAB_14df2374a:
  uVar47 = *(uint *)&(param_3->BoneRotationOffsets).field_0x28;
  uVar45 = uVar47 & 0xffffffe0;
  TStack_e8._padding_ = CONCAT44(uVar41,iVar48);
  TStack_e8.CurrentBitIndex = iVar36;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar42 = (int)uVar47 >> 5;
  TStack_e8._28_4_ = local_8c;
  TStack_e8.BaseBitIndex = iVar50;
  uStack_c8 = CONCAT44(uStack_f4,
                       *(int *)&(param_3->BoneRotationOffsets).field_0x8 -
                       *(int *)&(param_3->BoneRotationOffsets).field_0x34);
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar47 < 0) || (iVar40 < (int)uVar47)) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar35)) {
    pcVar8 = (code *)swi(3);
    pFVar37 = (FResolvedRetargetPose *)(*pcVar8)();
    return pFVar37;
  }
  uVar41 = *(uint *)&(param_3->BoneRotationOffsets).field_0x28;
  if (uVar47 != uVar41) {
    puVar49 = *(undefined1 **)&(param_3->BoneRotationOffsets).field_0x20;
    if (puVar49 == (undefined1 *)0x0) {
      puVar49 = puVar3;
    }
    uVar47 = -1 << ((byte)uVar47 & 0x1f) & *(uint *)(puVar49 + (longlong)iVar42 * 4);
    while (uVar47 == 0) {
      lVar39 = (longlong)iVar42;
      uVar45 = uVar45 + 0x20;
      iVar42 = iVar42 + 1;
      uVar47 = uVar41;
      if ((int)((uVar41 - 1) + ((int)(uVar41 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar42)
      goto LAB_14df23890;
      uVar47 = *(uint *)(puVar49 + lVar39 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar47 & uVar47) * 2 + 1;
    lVar39 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar39 == 0; lVar39 = lVar39 + -1) {
      }
    }
    uVar47 = (int)lVar39 + -1 + uVar45;
    if ((int)uVar41 < (int)uVar47) {
      uVar47 = uVar41;
    }
  }
LAB_14df23890:
  do {
    if (*(int *)&(param_3->BoneRotationOffsets).field_0x8 -
        *(int *)&(param_3->BoneRotationOffsets).field_0x34 != (int)uStack_c8) {
      param_5._0_1_ = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&param_5);
    }
    if ((TStack_e8.CurrentBitIndex == uVar47) &&
       (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) {
      FRetargetSkeleton::UpdateGlobalTransformsBelowBone(param_1,-1,this_00,pTVar1);
      bVar35 = FRetargetPoseScaleWithPivot::ScalePose(&pFVar37->PoseScale,pTVar1);
      if (bVar35) {
        FRetargetSkeleton::UpdateLocalTransformsBelowBone(param_1,-1,this_00,pTVar1);
      }
      return pFVar37;
    }
    pFVar6 = (param_1->BoneNames).AllocatorInstance.Data;
    plVar46 = (longlong *)
              ((longlong)TStack_e8.CurrentBitIndex * 0x40 +
              *(longlong *)&param_3->BoneRotationOffsets);
    for (pFVar44 = pFVar6; pFVar44 != pFVar6 + (longlong)(param_1->BoneNames).ArrayNum * 8;
        pFVar44 = pFVar44 + 8) {
      if (*(longlong *)pFVar44 == *plVar46) {
        uVar41 = (uint)((longlong)pFVar44 - (longlong)pFVar6 >> 3);
        if (uVar41 != 0xffffffff) {
          uVar45 = 0;
          if ((int)uVar41 < *(int *)(lVar38 + 0x38)) {
            uVar45 = ~uVar41 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar8 = (code *)swi(3);
            pFVar37 = (FResolvedRetargetPose *)(*pcVar8)();
            return pFVar37;
          }
          dVar16 = (double)plVar46[4];
          dVar18 = (double)plVar46[5];
          dVar26 = (double)plVar46[2];
          dVar27 = (double)plVar46[3];
          lVar39 = (longlong)(int)uVar41 * 0x60;
          pdVar4 = (double *)(lVar39 + *(longlong *)(lVar38 + 0x30));
          dVar28 = *pdVar4;
          dVar29 = pdVar4[1];
          pdVar4 = (double *)(lVar39 + 0x10 + *(longlong *)(lVar38 + 0x30));
          dVar30 = *pdVar4;
          dVar31 = pdVar4[1];
          uVar45 = 0;
          if ((int)uVar41 < (pFVar37->LocalPose).ArrayNum) {
            uVar45 = ~uVar41 >> 0x1f;
          }
          dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
          dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
          dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
          dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar22 = dVar28 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                   + dVar31 * dVar27 +
                   dVar29 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                   + dVar30 * dVar26 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar20 = dVar28 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                   + dVar31 * dVar18 +
                   dVar29 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                   + dVar30 * dVar16 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          if ((uVar45 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar8 = (code *)swi(3);
            pFVar37 = (FResolvedRetargetPose *)(*pcVar8)();
            return pFVar37;
          }
          pFVar6 = (this_00->AllocatorInstance).Data;
          auVar21._8_4_ = SUB84(dVar22,0);
          auVar21._0_8_ =
               dVar28 * dVar18 * dVar9 + dVar31 * dVar26 + dVar29 * dVar16 * dVar11 +
               dVar30 * dVar27 * dVar13;
          auVar21._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
          *(undefined1 (*) [16])(pFVar6 + lVar39) = auVar21;
          auVar19._8_4_ = SUB84(dVar20,0);
          auVar19._0_8_ =
               dVar28 * dVar27 * dVar10 + dVar31 * dVar16 + dVar29 * dVar26 * dVar12 +
               dVar30 * dVar18 * dVar14;
          auVar19._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
          *(undefined1 (*) [16])(pFVar6 + lVar39 + 0x10) = auVar19;
        }
        break;
      }
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  } while( true );
}

// FindOrAddRetargetPose @ 14df33860

FResolvedRetargetPose * __thiscall
FResolvedRetargetPoseSet::FindOrAddRetargetPose(FResolvedRetargetPoseSet *this,FName param_1)

{
  TArray<FResolvedRetargetPose,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  FResolvedRetargetPose *pFVar9;
  uint uVar10;
  FResolvedRetargetPose *pFVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  
  iVar3 = (this->RetargetPoses).ArrayNum;
  pTVar1 = &this->RetargetPoses;
  pFVar9 = (FResolvedRetargetPose *)(pTVar1->AllocatorInstance).Data;
  pFVar11 = pFVar9 + iVar3;
  while( true ) {
    if ((this->RetargetPoses).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FResolvedRetargetPose,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar11) break;
    if (pFVar9->Name == param_1) {
      return pFVar9;
    }
    pFVar9 = pFVar9 + 1;
  }
  uVar8 = (this->RetargetPoses).ArrayNum;
  piVar2 = &(this->RetargetPoses).ArrayMax;
  if (uVar8 == *piVar2) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&pTVar1->AllocatorInstance,piVar2);
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  (this->RetargetPoses).ArrayNum = uVar8 + 1;
  lVar12 = (longlong)(int)uVar8 * 0x50;
  *(FName *)(pFVar4 + lVar12) = param_1;
  *(undefined8 *)(pFVar4 + lVar12 + 0x10) = 0x3ff0000000000000;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)(pFVar4 + lVar12 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)(pFVar4 + lVar12 + 0x18 + 8) = uVar6;
  *(double *)(pFVar4 + lVar12 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar4 + lVar12 + 0x30) = 0;
  *(undefined8 *)(pFVar4 + lVar12 + 0x38) = 0;
  *(undefined8 *)(pFVar4 + lVar12 + 0x40) = 0;
  *(undefined8 *)(pFVar4 + lVar12 + 0x48) = 0;
  uVar10 = 0;
  if ((int)uVar8 < (this->RetargetPoses).ArrayNum) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FResolvedRetargetPose *)(*pcVar5)();
    return pFVar9;
  }
  return (FResolvedRetargetPose *)((pTVar1->AllocatorInstance).Data + lVar12);
}

// FindRetargetPoseByName @ 14df33ce0

FResolvedRetargetPose * __thiscall
FResolvedRetargetPoseSet::FindRetargetPoseByName(FResolvedRetargetPoseSet *this,FName param_1)

{
  int iVar1;
  FResolvedRetargetPose *pFVar2;
  FResolvedRetargetPose *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->RetargetPoses).ArrayNum;
  pFVar3 = (FResolvedRetargetPose *)(this->RetargetPoses).AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if ((this->RetargetPoses).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FResolvedRetargetPose_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3->Name == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FResolvedRetargetPose *)0x0;
}

// GetGlobalRetargetPose @ 14df38120

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FResolvedRetargetPoseSet::GetGlobalRetargetPose(FResolvedRetargetPoseSet *this)

{
  code *pcVar1;
  bool bVar2;
  FResolvedRetargetPose *pFVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  pFVar3 = FindRetargetPoseByName(this,this->CurrentRetargetPoseName);
  if (pFVar3 == (FResolvedRetargetPose *)0x0) {
    if ((this->RetargetPoses).ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pFVar3 = (FResolvedRetargetPose *)(this->RetargetPoses).AllocatorInstance.Data;
  }
  return &pFVar3->GlobalPose;
}

// GetGlobalRetargetPoseOfSingleBone @ 14df38190

TTransform<double> * __thiscall
FResolvedRetargetPoseSet::GetGlobalRetargetPoseOfSingleBone
          (FResolvedRetargetPoseSet *this,TTransform<double> *__return_storage_ptr__,
          FRetargetSkeleton *param_1,int param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar16;
  TTransform<double> *pTVar17;
  longlong lVar18;
  uint uVar19;
  
  lVar18 = (longlong)param_2;
  pTVar16 = GetLocalRetargetPose(this);
  uVar19 = (uint)~param_2 >> 0x1f;
  uVar14 = 0;
  if (param_2 < (param_1->ParentIndices).ArrayNum) {
    uVar14 = uVar19;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      pTVar17 = (TTransform<double> *)(*pcVar3)();
      return pTVar17;
    }
  }
  uVar14 = *(uint *)((param_1->ParentIndices).AllocatorInstance.Data + lVar18 * 4);
  if (uVar14 == 0xffffffff) {
    uVar14 = 0;
    if (param_2 < pTVar16->ArrayNum) {
      uVar14 = uVar19;
    }
    if (uVar14 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar3 = (code *)swi(3);
        pTVar17 = (TTransform<double> *)(*pcVar3)();
        return pTVar17;
      }
    }
    pFVar1 = (pTVar16->AllocatorInstance).Data;
    lVar18 = lVar18 * 0x60;
    dVar12 = *(double *)(pFVar1 + lVar18 + 8);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar18);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar12;
    dVar12 = *(double *)(pFVar1 + lVar18 + 0x10 + 8);
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar18 + 0x10);
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar12;
    dVar12 = *(double *)(pFVar1 + lVar18 + 0x20 + 8);
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar18 + 0x20);
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar12;
    dVar12 = *(double *)(pFVar1 + lVar18 + 0x30 + 8);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar18 + 0x30);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar12;
    dVar12 = *(double *)(pFVar1 + lVar18 + 0x40 + 8);
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar18 + 0x40);
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar12;
    dVar12 = *(double *)(pFVar1 + lVar18 + 0x50 + 8);
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar18 + 0x50);
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar12;
  }
  else {
    uVar15 = 0;
    if (param_2 < pTVar16->ArrayNum) {
      uVar15 = uVar19;
    }
    if (uVar15 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar3 = (code *)swi(3);
        pTVar17 = (TTransform<double> *)(*pcVar3)();
        return pTVar17;
      }
    }
    pFVar1 = (pTVar16->AllocatorInstance).Data;
    uVar19 = 0;
    if ((int)uVar14 < param_3->ArrayNum) {
      uVar19 = ~uVar14 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar3 = (code *)swi(3);
        pTVar17 = (TTransform<double> *)(*pcVar3)();
        return pTVar17;
      }
    }
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
    pFVar2 = (param_3->AllocatorInstance).Data;
    auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar6._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar6;
    auVar7._8_4_ = SUB84((double)fVar5,0);
    auVar7._0_8_ = (double)fVar4;
    auVar7._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar7;
    fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar8;
    auVar9._8_4_ = SUB84((double)fVar5,0);
    auVar9._0_8_ = (double)fVar4;
    auVar9._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar9;
    fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar10._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar10;
    auVar11._8_4_ = SUB84((double)fVar5,0);
    auVar11._0_8_ = (double)fVar4;
    auVar11._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar11;
    UE::Math::TTransform<double>::Multiply
              (__return_storage_ptr__,(TTransform<double> *)(pFVar1 + lVar18 * 0x60),
               (TTransform<double> *)(pFVar2 + (longlong)(int)uVar14 * 0x60));
  }
  return __return_storage_ptr__;
}

// GetLocalRetargetPose @ 14df39090

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FResolvedRetargetPoseSet::GetLocalRetargetPose(FResolvedRetargetPoseSet *this)

{
  code *pcVar1;
  bool bVar2;
  FResolvedRetargetPose *pFVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  pFVar3 = FindRetargetPoseByName(this,this->CurrentRetargetPoseName);
  if (pFVar3 == (FResolvedRetargetPose *)0x0) {
    if ((this->RetargetPoses).ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pFVar3 = (FResolvedRetargetPose *)(this->RetargetPoses).AllocatorInstance.Data;
  }
  return &pFVar3->LocalPose;
}

// Reset @ 14df4edf0

void __thiscall FResolvedRetargetPoseSet::Reset(FResolvedRetargetPoseSet *this)

{
  int *piVar1;
  int iVar2;
  FResolvedRetargetPose *pFVar3;
  
  iVar2 = (this->RetargetPoses).ArrayNum;
  piVar1 = &(this->RetargetPoses).ArrayMax;
  pFVar3 = (FResolvedRetargetPose *)(this->RetargetPoses).AllocatorInstance.Data;
  if (-1 < (this->RetargetPoses).ArrayMax) {
    DestructItems<FResolvedRetargetPose,int>(pFVar3,iVar2);
    (this->RetargetPoses).ArrayNum = 0;
    return;
  }
  DestructItems<FResolvedRetargetPose,int>(pFVar3,iVar2);
  (this->RetargetPoses).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->RetargetPoses).AllocatorInstance,0,piVar1);
  }
  return;
}

