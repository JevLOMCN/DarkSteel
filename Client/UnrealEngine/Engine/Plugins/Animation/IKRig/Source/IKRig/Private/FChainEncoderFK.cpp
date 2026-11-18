// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 3

// EncodePose @ 14df30840

void __thiscall
FChainEncoderFK::EncodePose
          (FChainEncoderFK *this,FRetargetSkeleton *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  TTransform<double> *pTVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong local_res8;
  
  if ((param_2->ArrayNum != (this->CurrentGlobalTransforms).ArrayNum) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourceBoneIndices.Num() == CurrentGlobalTransforms.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\FKChainsOp.cpp"
                          ,0x21,L""), bVar19)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar22 = param_2->ArrayNum;
  uVar25 = 0;
  if (0 < iVar22) {
    local_res8 = 0;
    uVar27 = uVar25;
    do {
      uVar26 = (uint)uVar25;
      uVar20 = 0;
      if ((int)uVar26 < iVar22) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar20 = *(uint *)((param_2->AllocatorInstance).Data + uVar27);
      uVar21 = 0;
      if ((int)uVar20 < param_3->ArrayNum) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_3->AllocatorInstance).Data;
      lVar23 = (longlong)(int)uVar20 * 0x60;
      uVar8 = *(undefined8 *)(pFVar2 + lVar23 + 0x10);
      uVar9 = *(undefined8 *)(pFVar2 + lVar23 + 0x10 + 8);
      uVar10 = *(undefined8 *)(pFVar2 + lVar23 + 0x20);
      uVar11 = *(undefined8 *)(pFVar2 + lVar23 + 0x20 + 8);
      pFVar1 = pFVar2 + lVar23;
      uVar4 = *(undefined4 *)pFVar1;
      uVar5 = *(undefined4 *)(pFVar1 + 4);
      uVar6 = *(undefined4 *)(pFVar1 + 8);
      uVar7 = *(undefined4 *)(pFVar1 + 0xc);
      uVar12 = *(undefined8 *)(pFVar2 + lVar23 + 0x30);
      uVar13 = *(undefined8 *)(pFVar2 + lVar23 + 0x30 + 8);
      uVar14 = *(undefined8 *)(pFVar2 + lVar23 + 0x50);
      uVar15 = *(undefined8 *)(pFVar2 + lVar23 + 0x50 + 8);
      uVar16 = *(undefined8 *)(pFVar2 + lVar23 + 0x40);
      uVar17 = *(undefined8 *)(pFVar2 + lVar23 + 0x40 + 8);
      uVar20 = 0;
      if ((int)uVar26 < (this->CurrentGlobalTransforms).ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar25 = (ulonglong)(uVar26 + 1);
      pFVar2 = (this->CurrentGlobalTransforms).AllocatorInstance.Data;
      uVar27 = uVar27 + 4;
      pFVar1 = pFVar2 + local_res8;
      *(undefined4 *)pFVar1 = uVar4;
      *(undefined4 *)(pFVar1 + 4) = uVar5;
      *(undefined4 *)(pFVar1 + 8) = uVar6;
      *(undefined4 *)(pFVar1 + 0xc) = uVar7;
      *(undefined8 *)(pFVar2 + local_res8 + 0x10) = uVar8;
      *(undefined8 *)(pFVar2 + local_res8 + 0x10 + 8) = uVar9;
      *(undefined8 *)(pFVar2 + local_res8 + 0x20) = uVar10;
      *(undefined8 *)(pFVar2 + local_res8 + 0x20 + 8) = uVar11;
      *(undefined8 *)(pFVar2 + local_res8 + 0x30) = uVar12;
      *(undefined8 *)(pFVar2 + local_res8 + 0x30 + 8) = uVar13;
      *(undefined8 *)(pFVar2 + local_res8 + 0x40) = uVar16;
      *(undefined8 *)(pFVar2 + local_res8 + 0x40 + 8) = uVar17;
      *(undefined8 *)(pFVar2 + local_res8 + 0x50) = uVar14;
      *(undefined8 *)(pFVar2 + local_res8 + 0x50 + 8) = uVar15;
      local_res8 = local_res8 + 0x60;
      iVar22 = param_2->ArrayNum;
    } while ((int)(uVar26 + 1) < iVar22);
  }
  FResolvedBoneChain::FillTransformsWithLocalSpaceOfChain
            (param_1,param_3,param_2,&this->BoneChain->CurrentLocalTransforms);
  uVar20 = this->BoneChain->ChainParentBoneIndex;
  if (uVar20 == 0xffffffff) {
    pTVar24 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    uVar26 = 0;
    if ((int)uVar20 < param_3->ArrayNum) {
      uVar26 = ~uVar20 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar24 = (TTransform<double> *)
              ((param_3->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x60);
  }
  dVar18 = (pTVar24->Rotation).XY.m128d_f64[1];
  (this->ChainParentCurrentGlobalTransform).Rotation.XY.m128d_f64[0] =
       (pTVar24->Rotation).XY.m128d_f64[0];
  (this->ChainParentCurrentGlobalTransform).Rotation.XY.m128d_f64[1] = dVar18;
  dVar18 = (pTVar24->Rotation).ZW.m128d_f64[1];
  (this->ChainParentCurrentGlobalTransform).Rotation.ZW.m128d_f64[0] =
       (pTVar24->Rotation).ZW.m128d_f64[0];
  (this->ChainParentCurrentGlobalTransform).Rotation.ZW.m128d_f64[1] = dVar18;
  dVar18 = (pTVar24->Translation).XY.m128d_f64[1];
  (this->ChainParentCurrentGlobalTransform).Translation.XY.m128d_f64[0] =
       (pTVar24->Translation).XY.m128d_f64[0];
  (this->ChainParentCurrentGlobalTransform).Translation.XY.m128d_f64[1] = dVar18;
  dVar18 = (pTVar24->Translation).ZW.m128d_f64[1];
  (this->ChainParentCurrentGlobalTransform).Translation.ZW.m128d_f64[0] =
       (pTVar24->Translation).ZW.m128d_f64[0];
  (this->ChainParentCurrentGlobalTransform).Translation.ZW.m128d_f64[1] = dVar18;
  dVar18 = (pTVar24->Scale3D).XY.m128d_f64[1];
  (this->ChainParentCurrentGlobalTransform).Scale3D.XY.m128d_f64[0] =
       (pTVar24->Scale3D).XY.m128d_f64[0];
  (this->ChainParentCurrentGlobalTransform).Scale3D.XY.m128d_f64[1] = dVar18;
  dVar18 = (pTVar24->Scale3D).ZW.m128d_f64[1];
  (this->ChainParentCurrentGlobalTransform).Scale3D.ZW.m128d_f64[0] =
       (pTVar24->Scale3D).ZW.m128d_f64[0];
  (this->ChainParentCurrentGlobalTransform).Scale3D.ZW.m128d_f64[1] = dVar18;
  return;
}

// Initialize @ 14df424d0

void __thiscall FChainEncoderFK::Initialize(FChainEncoderFK *this,FResolvedBoneChain *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FResolvedBoneChain *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBoneChain",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\FKChainsOp.cpp"
                       ,0x16,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->BoneChain = param_1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurrentGlobalTransforms,&param_1->RefPoseGlobalTransforms);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->CurrentLocalTransforms,&this->BoneChain->RefPoseLocalTransforms);
  return;
}

// TransformCurrentChainTransforms @ 14df5ad20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChainEncoderFK::TransformCurrentChainTransforms(FChainEncoderFK *this,TTransform<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FResolvedBoneChain *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  TTransform<double> *local_178;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  uVar9 = 0;
  uVar11 = uVar9;
  local_178 = param_1;
  if (0 < (this->CurrentGlobalTransforms).ArrayNum) {
    do {
      pFVar3 = this->BoneChain;
      uVar8 = (uint)uVar9;
      iVar2 = (pFVar3->CurrentLocalTransforms).ArrayNum;
      if (uVar8 == 0) {
        if (iVar2 < 1) {
          local_188 = 0;
          local_180 = (longlong)iVar2;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_168.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_168.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_168.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_168.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_168.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_168.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_168,
                   (TTransform<double> *)(pFVar3->CurrentLocalTransforms).AllocatorInstance.Data,
                   param_1);
        iVar2 = (this->CurrentGlobalTransforms).ArrayNum;
        uVar12 = local_168.Rotation.XY.m128d_f64[0]._0_4_;
        uVar13 = local_168.Rotation.XY.m128d_f64[0]._4_4_;
        uVar14 = local_168.Rotation.XY.m128d_f64[1]._0_4_;
        uVar15 = local_168.Rotation.XY.m128d_f64[1]._4_4_;
        uVar16 = local_168.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar17 = local_168.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar18 = local_168.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar19 = local_168.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar20 = local_168.Translation.XY.m128d_f64[0]._0_4_;
        uVar21 = local_168.Translation.XY.m128d_f64[0]._4_4_;
        uVar22 = local_168.Translation.XY.m128d_f64[1]._0_4_;
        uVar23 = local_168.Translation.XY.m128d_f64[1]._4_4_;
        uVar24 = local_168.Translation.ZW.m128d_f64[0]._0_4_;
        uVar25 = local_168.Translation.ZW.m128d_f64[0]._4_4_;
        uVar26 = local_168.Translation.ZW.m128d_f64[1]._0_4_;
        uVar27 = local_168.Translation.ZW.m128d_f64[1]._4_4_;
        uVar28 = local_168.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar29 = local_168.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar30 = local_168.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar31 = local_168.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar32 = local_168.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar33 = local_168.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar34 = local_168.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar35 = local_168.Scale3D.ZW.m128d_f64[1]._4_4_;
        if (iVar2 < 1) {
          local_188 = 0;
          local_180 = (longlong)iVar2;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      else {
        uVar7 = 0;
        if ((int)uVar8 < iVar2) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if (uVar7 == 0) {
          local_188 = (longlong)(int)uVar8;
          local_180 = (longlong)iVar2;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar1 = (pFVar3->CurrentLocalTransforms).AllocatorInstance.Data;
        iVar2 = (this->CurrentGlobalTransforms).ArrayNum;
        iVar10 = uVar8 - 1;
        uVar7 = 0;
        if (iVar10 < iVar2) {
          uVar7 = -uVar8 >> 0x1f;
        }
        if (uVar7 == 0) {
          local_188 = (longlong)iVar10;
          local_180 = (longlong)iVar2;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_108.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_108.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_108.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_108.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_108.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_108.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_108,(TTransform<double> *)(pFVar1 + (longlong)(int)uVar8 * 0x60),
                   (TTransform<double> *)
                   ((this->CurrentGlobalTransforms).AllocatorInstance.Data + (longlong)iVar10 * 0x60
                   ));
        iVar2 = (this->CurrentGlobalTransforms).ArrayNum;
        uVar12 = local_108.Rotation.XY.m128d_f64[0]._0_4_;
        uVar13 = local_108.Rotation.XY.m128d_f64[0]._4_4_;
        uVar14 = local_108.Rotation.XY.m128d_f64[1]._0_4_;
        uVar15 = local_108.Rotation.XY.m128d_f64[1]._4_4_;
        uVar16 = local_108.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar17 = local_108.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar18 = local_108.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar19 = local_108.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar20 = local_108.Translation.XY.m128d_f64[0]._0_4_;
        uVar21 = local_108.Translation.XY.m128d_f64[0]._4_4_;
        uVar22 = local_108.Translation.XY.m128d_f64[1]._0_4_;
        uVar23 = local_108.Translation.XY.m128d_f64[1]._4_4_;
        uVar7 = 0;
        if ((int)uVar8 < iVar2) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        uVar24 = local_108.Translation.ZW.m128d_f64[0]._0_4_;
        uVar25 = local_108.Translation.ZW.m128d_f64[0]._4_4_;
        uVar26 = local_108.Translation.ZW.m128d_f64[1]._0_4_;
        uVar27 = local_108.Translation.ZW.m128d_f64[1]._4_4_;
        uVar28 = local_108.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar29 = local_108.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar30 = local_108.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar31 = local_108.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar32 = local_108.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar33 = local_108.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar34 = local_108.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar35 = local_108.Scale3D.ZW.m128d_f64[1]._4_4_;
        param_1 = local_178;
        if ((uVar7 == 0) &&
           (local_188 = (longlong)(int)uVar8, local_180 = (longlong)iVar2,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           param_1 = local_178, bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar4 = (this->CurrentGlobalTransforms).AllocatorInstance.Data;
      uVar9 = (ulonglong)(uVar8 + 1);
      pFVar1 = pFVar4 + uVar11;
      *(undefined4 *)pFVar1 = uVar12;
      *(undefined4 *)(pFVar1 + 4) = uVar13;
      *(undefined4 *)(pFVar1 + 8) = uVar14;
      *(undefined4 *)(pFVar1 + 0xc) = uVar15;
      pFVar1 = pFVar4 + uVar11 + 0x10;
      *(undefined4 *)pFVar1 = uVar16;
      *(undefined4 *)(pFVar1 + 4) = uVar17;
      *(undefined4 *)(pFVar1 + 8) = uVar18;
      *(undefined4 *)(pFVar1 + 0xc) = uVar19;
      pFVar1 = pFVar4 + uVar11 + 0x20;
      *(undefined4 *)pFVar1 = uVar20;
      *(undefined4 *)(pFVar1 + 4) = uVar21;
      *(undefined4 *)(pFVar1 + 8) = uVar22;
      *(undefined4 *)(pFVar1 + 0xc) = uVar23;
      pFVar1 = pFVar4 + uVar11 + 0x30;
      *(undefined4 *)pFVar1 = uVar24;
      *(undefined4 *)(pFVar1 + 4) = uVar25;
      *(undefined4 *)(pFVar1 + 8) = uVar26;
      *(undefined4 *)(pFVar1 + 0xc) = uVar27;
      pFVar1 = pFVar4 + uVar11 + 0x40;
      *(undefined4 *)pFVar1 = uVar28;
      *(undefined4 *)(pFVar1 + 4) = uVar29;
      *(undefined4 *)(pFVar1 + 8) = uVar30;
      *(undefined4 *)(pFVar1 + 0xc) = uVar31;
      pFVar4 = pFVar4 + uVar11 + 0x50;
      *(undefined4 *)pFVar4 = uVar32;
      *(undefined4 *)(pFVar4 + 4) = uVar33;
      *(undefined4 *)(pFVar4 + 8) = uVar34;
      *(undefined4 *)(pFVar4 + 0xc) = uVar35;
      uVar11 = uVar11 + 0x60;
    } while ((int)(uVar8 + 1) < (this->CurrentGlobalTransforms).ArrayNum);
  }
  return;
}

