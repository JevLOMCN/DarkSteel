// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// StaticStruct @ 1463d6ed0

UScriptStruct * __cdecl FAnimLegIKData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimLegIKData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimLegIKData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimLegIKData,(UObject *)pUVar1,L"AnimLegIKData"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FAnimLegIKData.OuterSingleton;
}

// FAnimLegIKData @ 146402c60

FAnimLegIKData * __thiscall FAnimLegIKData::FAnimLegIKData(FAnimLegIKData *this)

{
  undefined8 uVar1;
  
  *&(this->IKFootTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->IKFootTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->IKFootTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->IKFootTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->IKFootTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->IKFootTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->FKLegBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FKLegBoneIndices).ArrayNum = 0;
  (this->FKLegBoneIndices).ArrayMax = 0;
  (this->FKLegBoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FKLegBoneTransforms).ArrayNum = 0;
  (this->FKLegBoneTransforms).ArrayMax = 0;
  (this->IKChain).Links.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IKChain).Links.ArrayNum = 0;
  (this->IKChain).Links.ArrayMax = 0;
  this->LegDefPtr = (FAnimLegIKDefinition *)0x0;
  this->TwistOffsetDegrees = 0.0;
  this->IKFootBoneIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->NumBones = -1;
  (this->IKChain).MyAnimInstanceProxy = (FAnimInstanceProxy *)0x0;
  (this->IKChain).TotalChainLength = 0.0;
  (this->IKChain).NumLinks = -1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->IKChain).HingeRotationAxis.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->IKChain).HingeRotationAxis.field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->IKChain).bEnableRotationLimit = false;
  (this->IKChain).bInitialized = false;
  (this->IKChain).HingeRotationAxis.field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// InitializeTransforms @ 1464590d0

void __thiscall
FAnimLegIKData::InitializeTransforms
          (FAnimLegIKData *this,FAnimInstanceProxy *param_1,FCSPose<FCompactPose> *param_2)

{
  int *piVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FCompactPoseBoneIndex *pFVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TConsoleVariableData<int> *pTVar15;
  FAnimInstanceProxy *this_00;
  bool bVar16;
  int iVar17;
  TTransform<double> *pTVar18;
  TTransform<double> *pTVar19;
  longlong lVar20;
  FCompactPoseBoneIndex *pFVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 local_res8 [8];
  FAnimInstanceProxy *local_res10;
  TVector<double>_u_0 local_b8 [5];
  
  local_res10 = param_1;
  pTVar18 = FCSPose<FCompactPose>::GetComponentSpaceTransform(param_2,this->IKFootBoneIndex);
  uVar4 = this->NumBones;
  pTVar2 = &this->FKLegBoneTransforms;
  dVar9 = (pTVar18->Rotation).XY.m128d_f64[1];
  (this->IKFootTransform).Rotation.XY.m128d_f64[0] = (pTVar18->Rotation).XY.m128d_f64[0];
  (this->IKFootTransform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (pTVar18->Rotation).ZW.m128d_f64[1];
  (this->IKFootTransform).Rotation.ZW.m128d_f64[0] = (pTVar18->Rotation).ZW.m128d_f64[0];
  (this->IKFootTransform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (pTVar18->Translation).XY.m128d_f64[1];
  (this->IKFootTransform).Translation.XY.m128d_f64[0] = (pTVar18->Translation).XY.m128d_f64[0];
  (this->IKFootTransform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (pTVar18->Translation).ZW.m128d_f64[1];
  (this->IKFootTransform).Translation.ZW.m128d_f64[0] = (pTVar18->Translation).ZW.m128d_f64[0];
  (this->IKFootTransform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (pTVar18->Scale3D).XY.m128d_f64[1];
  (this->IKFootTransform).Scale3D.XY.m128d_f64[0] = (pTVar18->Scale3D).XY.m128d_f64[0];
  (this->IKFootTransform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (pTVar18->Scale3D).ZW.m128d_f64[1];
  (this->IKFootTransform).Scale3D.ZW.m128d_f64[0] = (pTVar18->Scale3D).ZW.m128d_f64[0];
  (this->IKFootTransform).Scale3D.ZW.m128d_f64[1] = dVar9;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &(this->FKLegBoneTransforms).ArrayMax;
  (this->FKLegBoneTransforms).ArrayNum = 0;
  if ((this->FKLegBoneTransforms).ArrayMax < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar4,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pFVar21 = (FCompactPoseBoneIndex *)(this->FKLegBoneIndices).AllocatorInstance.Data;
  iVar5 = (this->FKLegBoneIndices).ArrayNum;
  pFVar3 = pFVar21 + iVar5;
  while( true ) {
    if ((this->FKLegBoneIndices).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCompactPoseBoneIndex,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    pTVar15 = CVarAnimNodeLegIKDebug.Ref;
    if (pFVar21 == pFVar3) break;
    pTVar19 = FCSPose<FCompactPose>::GetComponentSpaceTransform(param_2,*pFVar21);
    pTVar18 = (TTransform<double> *)(pTVar2->AllocatorInstance).Data;
    if ((pTVar18 <= pTVar19) && (pTVar19 < pTVar18 + *piVar1)) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar16) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar17 = (this->FKLegBoneTransforms).ArrayNum;
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1060,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->FKLegBoneTransforms).ArrayNum = iVar17 + 1;
    dVar9 = (pTVar19->Rotation).XY.m128d_f64[1];
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    lVar20 = (longlong)iVar17 * 0x60;
    pFVar21 = pFVar21 + 1;
    *(double *)(pFVar6 + lVar20) = (pTVar19->Rotation).XY.m128d_f64[0];
    *(double *)(pFVar6 + lVar20 + 8) = dVar9;
    dVar9 = (pTVar19->Rotation).ZW.m128d_f64[1];
    *(double *)(pFVar6 + lVar20 + 0x10) = (pTVar19->Rotation).ZW.m128d_f64[0];
    *(double *)(pFVar6 + lVar20 + 0x10 + 8) = dVar9;
    dVar9 = (pTVar19->Translation).XY.m128d_f64[1];
    *(double *)(pFVar6 + lVar20 + 0x20) = (pTVar19->Translation).XY.m128d_f64[0];
    *(double *)(pFVar6 + lVar20 + 0x20 + 8) = dVar9;
    dVar9 = (pTVar19->Translation).ZW.m128d_f64[1];
    *(double *)(pFVar6 + lVar20 + 0x30) = (pTVar19->Translation).ZW.m128d_f64[0];
    *(double *)(pFVar6 + lVar20 + 0x30 + 8) = dVar9;
    dVar9 = (pTVar19->Scale3D).XY.m128d_f64[1];
    *(double *)(pFVar6 + lVar20 + 0x40) = (pTVar19->Scale3D).XY.m128d_f64[0];
    *(double *)(pFVar6 + lVar20 + 0x40 + 8) = dVar9;
    dVar9 = (pTVar19->Scale3D).ZW.m128d_f64[1];
    *(double *)(pFVar6 + lVar20 + 0x50) = (pTVar19->Scale3D).ZW.m128d_f64[0];
    *(double *)(pFVar6 + lVar20 + 0x50 + 8) = dVar9;
  }
  bVar16 = IsInParallelGameThread();
  if (!bVar16) {
    bVar16 = IsInGameThread();
    if (!bVar16) {
      lVar20 = 4;
      goto LAB_1464592d7;
    }
  }
  lVar20 = 0;
LAB_1464592d7:
  this_00 = local_res10;
  if (*(int *)((longlong)pTVar15->ShadowedValue + lVar20) == 1) {
    DrawDebugLeg(this,local_res10,&FColor::Red);
    auVar29 = *(undefined1 (*) [16])(this_00->ComponentTransform).Rotation.ZW.m128d_f64;
    auVar22 = *(undefined1 (*) [16])(this_00->ComponentTransform).Rotation.XY.m128d_f64;
    dVar10 = (this_00->ComponentTransform).Scale3D.XY.m128d_f64[0] *
             (this->IKFootTransform).Translation.XY.m128d_f64[0];
    dVar11 = (this_00->ComponentTransform).Scale3D.XY.m128d_f64[1] *
             (this->IKFootTransform).Translation.XY.m128d_f64[1];
    uVar30 = (undefined4)((ulonglong)dVar11 >> 0x20);
    dVar12 = (this->IKFootTransform).Translation.ZW.m128d_f64[0] *
             (this_00->ComponentTransform).Scale3D.ZW.m128d_f64[0];
    dVar13 = (this_00->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar14 = (this_00->ComponentTransform).Rotation.ZW.m128d_f64[1];
    auVar31._8_4_ = SUB84(dVar11,0);
    auVar31._0_8_ = dVar10;
    auVar31._12_4_ = uVar30;
    dVar9 = auVar29._0_8_;
    auVar23 = blendpd(auVar22,auVar29,2);
    auVar32._0_8_ = auVar31._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar10;
    auVar32._8_8_ = dVar12 * auVar22._8_8_ - dVar9 * dVar11;
    auVar33._8_4_ = SUB84(dVar11,0);
    auVar33._0_8_ = dVar10;
    auVar33._12_4_ = uVar30;
    auVar22._8_4_ = SUB84(dVar13,0);
    auVar22._0_8_ = dVar12;
    auVar22._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar22 = blendpd(auVar33,auVar22,2);
    auVar25._0_8_ = auVar22._0_8_ * dVar9 - auVar23._0_8_ * dVar12;
    auVar25._8_8_ = auVar22._8_8_ * auVar29._8_8_ - auVar23._8_8_ * dVar13;
    auVar22 = *(undefined1 (*) [16])(this_00->ComponentTransform).Rotation.XY.m128d_f64;
    auVar33 = blendpd(auVar32,auVar25,2);
    dVar13 = auVar32._8_8_ + auVar32._8_8_;
    dVar8 = auVar25._0_8_ + auVar25._0_8_;
    uVar30 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar34._0_8_ = auVar33._0_8_ + auVar33._0_8_;
    auVar34._8_8_ = auVar33._8_8_ + auVar33._8_8_;
    auVar27._8_4_ = SUB84(dVar8,0);
    auVar27._0_8_ = dVar13;
    auVar27._12_4_ = uVar30;
    auVar24._8_4_ = SUB84(dVar8,0);
    auVar24._0_8_ = dVar13;
    auVar24._12_4_ = uVar30;
    auVar25 = blendpd(auVar24,auVar34,2);
    auVar33 = blendpd(auVar22,auVar29,2);
    auVar28._0_8_ = auVar27._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar13;
    auVar28._8_8_ = auVar34._0_8_ * auVar22._8_8_ - dVar9 * dVar8;
    auVar23._8_4_ = SUB84(auVar28._8_8_,0);
    auVar23._0_8_ = auVar28._0_8_;
    auVar23._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
    auVar26._0_8_ = auVar25._0_8_ * dVar9 - auVar33._0_8_ * auVar34._0_8_;
    auVar26._8_8_ = auVar25._8_8_ * auVar29._8_8_ - auVar33._8_8_ * auVar34._8_8_;
    dVar9 = dVar8 * dVar14 + dVar11 + auVar26._0_8_ +
            (this_00->ComponentTransform).Translation.XY.m128d_f64[1];
    auVar29 = blendpd(auVar28,auVar26,2);
    local_b8[0]._8_4_ = SUB84(dVar9,0);
    local_b8[0]._0_8_ =
         dVar13 * dVar14 + dVar10 + auVar23._8_8_ +
         (this_00->ComponentTransform).Translation.XY.m128d_f64[0];
    local_b8[0]._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_b8[0]._16_8_ =
         auVar34._0_8_ * dVar14 + dVar12 + auVar29._0_8_ +
         (this_00->ComponentTransform).Translation.ZW.m128d_f64[0];
    FAnimInstanceProxy::AnimDrawDebugSphere
              (this_00,(TVector<double> *)&local_b8[0]._s_0,__real_40800000,4,&FColor::Red,false,
               __real_bf800000,__real_40000000,SDPG_World);
  }
  return;
}

