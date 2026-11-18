// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// FChainDecoderCachedData @ 14df15b60

FChainDecoderCachedData * __thiscall
FChainDecoderCachedData::FChainDecoderCachedData
          (FChainDecoderCachedData *this,FChainDecoderCachedData *param_1)

{
  int *piVar1;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  piVar1 = &(this->SourceBoneIndices).ArrayMax;
  (this->SourceBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->SourceBoneIndices).ArrayNum;
  pFVar5 = (param_1->SourceBoneIndices).AllocatorInstance.Data;
  (this->SourceBoneIndices).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,(ForAnyElementType *)this,iVar4,piVar1);
    memcpy((this->SourceBoneIndices).AllocatorInstance.Data,pFVar5,(longlong)iVar4 << 2);
  }
  pTVar2 = &this->FromToGlobalRotationDeltas;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->FromToGlobalRotationDeltas).ArrayMax;
  iVar4 = (param_1->FromToGlobalRotationDeltas).ArrayNum;
  pFVar5 = (param_1->FromToGlobalRotationDeltas).AllocatorInstance.Data;
  (this->FromToGlobalRotationDeltas).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 5);
  }
  pTVar3 = &this->SourceRefPoseLengths;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SourceRefPoseLengths).ArrayMax;
  iVar4 = (param_1->SourceRefPoseLengths).ArrayNum;
  pFVar5 = (param_1->SourceRefPoseLengths).AllocatorInstance.Data;
  (this->SourceRefPoseLengths).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  pTVar3 = &this->TargetRefPoseLengths;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->TargetRefPoseLengths).ArrayMax;
  iVar4 = (param_1->TargetRefPoseLengths).ArrayNum;
  pFVar5 = (param_1->TargetRefPoseLengths).AllocatorInstance.Data;
  (this->TargetRefPoseLengths).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  return this;
}

// Initialize @ 14df41990

void __thiscall
FChainDecoderCachedData::Initialize
          (FChainDecoderCachedData *this,FResolvedBoneChain *param_1,FResolvedBoneChain *param_2,
          FRetargetSkeleton *param_3,FTargetSkeleton *param_4)

{
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  TQuat<double> *pTVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FResolvedRetargetPoseSet *pFVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FResolvedRetargetPose *pFVar20;
  TTransform<double> *pTVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong local_res8;
  uint local_1d8 [2];
  double local_1d0;
  double local_1c8;
  FResolvedRetargetPoseSet *local_1c0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  FChainDecoderCachedData local_120;
  TQuat<double> local_d8;
  double local_b8;
  double local_b0;
  
  local_120.SourceBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.SourceBoneIndices.ArrayNum = 0;
  local_120.SourceBoneIndices.ArrayMax = 0;
  local_120.FromToGlobalRotationDeltas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.FromToGlobalRotationDeltas.ArrayNum = 0;
  local_120.FromToGlobalRotationDeltas.ArrayMax = 0;
  local_120.SourceRefPoseLengths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.SourceRefPoseLengths.ArrayNum = 0;
  local_120.SourceRefPoseLengths.ArrayMax = 0;
  local_120.TargetRefPoseLengths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.TargetRefPoseLengths.ArrayNum = 0;
  local_120.TargetRefPoseLengths.ArrayMax = 0;
  if (this != &local_120) {
    pFVar3 = (this->SourceBoneIndices).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->SourceBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SourceBoneIndices).ArrayNum = 0;
    (this->SourceBoneIndices).ArrayMax = 0;
  }
  pTVar1 = &this->FromToGlobalRotationDeltas;
  if (pTVar1 != &local_120.FromToGlobalRotationDeltas) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->FromToGlobalRotationDeltas).ArrayNum = 0;
    (this->FromToGlobalRotationDeltas).ArrayMax = 0;
  }
  pTVar2 = &this->SourceRefPoseLengths;
  if (pTVar2 != &local_120.SourceRefPoseLengths) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SourceRefPoseLengths).ArrayNum = 0;
    (this->SourceRefPoseLengths).ArrayMax = 0;
  }
  pTVar2 = &this->TargetRefPoseLengths;
  if (pTVar2 != &local_120.TargetRefPoseLengths) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TargetRefPoseLengths).ArrayNum = 0;
    (this->TargetRefPoseLengths).ArrayMax = 0;
  }
  dVar13 = __real_3f1a36e2e0000000;
  dVar12 = __real_3e45798ee0000000;
  dVar11 = __real_3ff0000000000000;
  uVar22 = 0;
  iVar16 = (param_2->BoneIndices).ArrayNum;
  if (0 < iVar16) {
    local_1c0 = &param_3->RetargetPoses;
    local_res8 = 0;
    do {
      pFVar14 = local_1c0;
      uVar19 = uVar22;
      if (iVar16 != (param_1->BoneIndices).ArrayNum) {
        uVar19 = 0;
        if ((int)uVar22 < (param_2->Params).ArrayNum) {
          uVar19 = ~uVar22 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_128 = (double)*(float *)((param_2->Params).AllocatorInstance.Data + local_res8);
        uVar19 = FResolvedBoneChain::GetBoneClosestToParam(param_1,&local_128);
      }
      uVar17 = 0;
      if ((int)uVar19 < (param_1->BoneIndices).ArrayNum) {
        uVar17 = ~uVar19 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_1d8[0] = *(uint *)((param_1->BoneIndices).AllocatorInstance.Data +
                              (longlong)(int)uVar19 * 4);
      pFVar3 = (this->SourceBoneIndices).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_1d8) &&
          ((FScriptContainerElement *)local_1d8 <
           pFVar3 + (longlong)(this->SourceBoneIndices).ArrayMax * 4)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar16 = (this->SourceBoneIndices).ArrayNum;
      if (iVar16 == (this->SourceBoneIndices).ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)this,&(this->SourceBoneIndices).ArrayMax);
      }
      (this->SourceBoneIndices).ArrayNum = iVar16 + 1;
      *(uint *)((this->SourceBoneIndices).AllocatorInstance.Data + (longlong)iVar16 * 4) =
           local_1d8[0];
      pFVar20 = FResolvedRetargetPoseSet::FindRetargetPoseByName
                          (pFVar14,pFVar14->CurrentRetargetPoseName);
      if (pFVar20 == (FResolvedRetargetPose *)0x0) {
        if (((param_3->RetargetPoses).RetargetPoses.ArrayNum < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar20 = (FResolvedRetargetPose *)
                  (param_3->RetargetPoses).RetargetPoses.AllocatorInstance.Data;
      }
      uVar19 = local_1d8[0];
      uVar17 = 0;
      if ((int)local_1d8[0] < (pFVar20->GlobalPose).ArrayNum) {
        uVar17 = ~local_1d8[0] >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar14 = local_1c0;
      pFVar3 = (pFVar20->GlobalPose).AllocatorInstance.Data;
      pFVar20 = FResolvedRetargetPoseSet::FindRetargetPoseByName
                          (local_1c0,local_1c0->CurrentRetargetPoseName);
      if (pFVar20 == (FResolvedRetargetPose *)0x0) {
        if (((pFVar14->RetargetPoses).ArrayNum < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar20 = (FResolvedRetargetPose *)(pFVar14->RetargetPoses).AllocatorInstance.Data;
      }
      uVar17 = FRetargetSkeleton::GetParentIndex(param_3,local_1d8[0]);
      if (uVar17 == 0xffffffff) {
        pTVar21 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        uVar18 = 0;
        if ((int)uVar17 < (pFVar20->GlobalPose).ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar21 = (TTransform<double> *)
                  ((pFVar20->GlobalPose).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x60);
      }
      local_170 = *(double *)(pFVar3 + (longlong)(int)uVar19 * 0x60 + 0x20);
      dStack_168 = *(double *)(pFVar3 + (longlong)(int)uVar19 * 0x60 + 0x28);
      local_158 = (pTVar21->Translation).XY.m128d_f64[0];
      dStack_150 = (pTVar21->Translation).XY.m128d_f64[1];
      local_160 = *(double *)(pFVar3 + (longlong)(int)uVar19 * 0x60 + 0x30);
      local_1a0._s_0.X = local_170 - local_158;
      local_148 = (pTVar21->Translation).ZW.m128d_f64[0];
      local_1a0._s_0.Y = dStack_168 - dStack_150;
      local_1a0._s_0.Z = local_160 - local_148;
      dVar8 = local_1a0._s_0.Y * local_1a0._s_0.Y + local_1a0._s_0.X * local_1a0._s_0.X +
              local_1a0._s_0.Z * local_1a0._s_0.Z;
      if (dVar8 != dVar11) {
        if (dVar12 <= dVar8) {
          local_b8 = dVar11 / SQRT(dVar8);
          local_1a0._s_0.X = local_1a0._s_0.X * local_b8;
          local_1a0._s_0.Y = local_1a0._s_0.Y * local_b8;
          local_1a0._s_0.Z = local_1a0._s_0.Z * local_b8;
        }
        else {
          local_1a0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_1a0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_1a0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      uVar19 = 0;
      if ((int)uVar22 < (param_2->BoneIndices).ArrayNum) {
        uVar19 = ~uVar22 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar19 = *(uint *)((param_2->BoneIndices).AllocatorInstance.Data + local_res8);
      pFVar20 = FResolvedRetargetPoseSet::FindRetargetPoseByName
                          ((FResolvedRetargetPoseSet *)&param_4->_padding_,(FName)param_4->_padding_
                          );
      if (pFVar20 == (FResolvedRetargetPose *)0x0) {
        if (((int)param_4->_padding_ < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar20 = (FResolvedRetargetPose *)param_4->_padding_;
      }
      uVar17 = 0;
      if ((int)uVar19 < (pFVar20->GlobalPose).ArrayNum) {
        uVar17 = ~uVar19 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (pFVar20->GlobalPose).AllocatorInstance.Data;
      pFVar3 = pFVar4 + (longlong)(int)uVar19 * 0x60 + 0x20;
      local_188 = *(double *)pFVar3;
      dStack_180 = *(double *)(pFVar3 + 8);
      local_178 = *(double *)(pFVar4 + (longlong)(int)uVar19 * 0x60 + 0x30);
      pFVar20 = FResolvedRetargetPoseSet::FindRetargetPoseByName
                          ((FResolvedRetargetPoseSet *)&param_4->_padding_,(FName)param_4->_padding_
                          );
      if (pFVar20 == (FResolvedRetargetPose *)0x0) {
        if (((int)param_4->_padding_ < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar20 = (FResolvedRetargetPose *)param_4->_padding_;
      }
      uVar19 = FRetargetSkeleton::GetParentIndex((FRetargetSkeleton *)param_4,uVar19);
      if (uVar19 == 0xffffffff) {
        pTVar21 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        uVar17 = 0;
        if ((int)uVar19 < (pFVar20->GlobalPose).ArrayNum) {
          uVar17 = ~uVar19 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar21 = (TTransform<double> *)
                  ((pFVar20->GlobalPose).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x60);
      }
      dVar9 = (pTVar21->Translation).XY.m128d_f64[0];
      dVar10 = (pTVar21->Translation).XY.m128d_f64[1];
      local_130 = (pTVar21->Translation).ZW.m128d_f64[0];
      local_1b8._s_0.X = local_188 - dVar9;
      local_1b8._s_0.Z = local_178 - local_130;
      local_1b8._s_0.Y = dStack_180 - dVar10;
      dVar8 = local_1b8._s_0.Y * local_1b8._s_0.Y + local_1b8._s_0.X * local_1b8._s_0.X +
              local_1b8._s_0.Z * local_1b8._s_0.Z;
      if (dVar8 != dVar11) {
        if (dVar12 <= dVar8) {
          local_b0 = dVar11 / SQRT(dVar8);
          local_1b8._s_0.X = local_1b8._s_0.X * local_b0;
          local_1b8._s_0.Y = local_1b8._s_0.Y * local_b0;
          local_1b8._s_0.Z = local_1b8._s_0.Z * local_b0;
        }
        else {
          local_1b8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_1b8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_1b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      local_140 = dVar9;
      dStack_138 = dVar10;
      UE::Math::TQuat<double>::FindBetweenNormals
                (&local_d8,(TVector<double> *)&local_1a0._s_0,(TVector<double> *)&local_1b8._s_0);
      pTVar5 = (TQuat<double> *)(pTVar1->AllocatorInstance).Data;
      if (((pTVar5 <= &local_d8) &&
          (&local_d8 < pTVar5 + (this->FromToGlobalRotationDeltas).ArrayMax)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar16 = (this->FromToGlobalRotationDeltas).ArrayNum;
      if (iVar16 == (this->FromToGlobalRotationDeltas).ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1020,&pTVar1->AllocatorInstance,
                            &(this->FromToGlobalRotationDeltas).ArrayMax);
      }
      (this->FromToGlobalRotationDeltas).ArrayNum = iVar16 + 1;
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      pFVar3 = pFVar4 + (longlong)iVar16 * 0x20;
      *(double *)pFVar3 = local_d8.X;
      *(double *)(pFVar3 + 8) = local_d8.Y;
      pFVar4 = pFVar4 + (longlong)iVar16 * 0x20 + 0x10;
      *(double *)pFVar4 = local_d8.Z;
      *(double *)(pFVar4 + 8) = local_d8.W;
      pFVar3 = (this->SourceRefPoseLengths).AllocatorInstance.Data;
      auVar23._0_8_ = (local_160 - local_148) * (local_160 - local_148);
      auVar23._8_8_ = 0;
      auVar24._8_8_ = 0;
      auVar24._0_8_ =
           (dStack_168 - dStack_150) * (dStack_168 - dStack_150) +
           (local_170 - local_158) * (local_170 - local_158) + auVar23._0_8_;
      auVar24 = sqrtpd(auVar23,auVar24);
      local_1d0 = auVar24._0_8_;
      if (auVar24._0_8_ <= dVar13) {
        local_1d0 = dVar13;
      }
      if (((pFVar3 <= (FScriptContainerElement *)&local_1d0) &&
          ((FScriptContainerElement *)&local_1d0 <
           pFVar3 + (longlong)(this->SourceRefPoseLengths).ArrayMax * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar16 = (this->SourceRefPoseLengths).ArrayNum;
      if (iVar16 == (this->SourceRefPoseLengths).ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->SourceRefPoseLengths).AllocatorInstance,
                            &(this->SourceRefPoseLengths).ArrayMax);
      }
      (this->SourceRefPoseLengths).ArrayNum = iVar16 + 1;
      *(double *)((this->SourceRefPoseLengths).AllocatorInstance.Data + (longlong)iVar16 * 8) =
           local_1d0;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      auVar25._0_8_ = (local_178 - local_130) * (local_178 - local_130);
      auVar25._8_8_ = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (dStack_180 - dVar10) * (dStack_180 - dVar10) +
                     (local_188 - dVar9) * (local_188 - dVar9) + auVar25._0_8_;
      auVar24 = sqrtpd(auVar25,auVar7);
      local_1c8 = auVar24._0_8_;
      if (auVar24._0_8_ <= dVar13) {
        local_1c8 = dVar13;
      }
      if (((pFVar3 <= (FScriptContainerElement *)&local_1c8) &&
          ((FScriptContainerElement *)&local_1c8 <
           pFVar3 + (longlong)(this->TargetRefPoseLengths).ArrayMax * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar16 = (this->TargetRefPoseLengths).ArrayNum;
      if (iVar16 == (this->TargetRefPoseLengths).ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,&(this->TargetRefPoseLengths).ArrayMax)
        ;
      }
      uVar22 = uVar22 + 1;
      local_res8 = local_res8 + 4;
      (this->TargetRefPoseLengths).ArrayNum = iVar16 + 1;
      *(double *)((pTVar2->AllocatorInstance).Data + (longlong)iVar16 * 8) = local_1c8;
      iVar16 = (param_2->BoneIndices).ArrayNum;
    } while ((int)uVar22 < iVar16);
  }
  return;
}

