// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 15

// FResolvedBoneChain @ 14df181c0

FResolvedBoneChain * __thiscall
FResolvedBoneChain::FResolvedBoneChain(FResolvedBoneChain *this,FResolvedBoneChain *param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  
  pTVar1 = &this->RefPoseGlobalTransforms;
  this->ChainName = param_1->ChainName;
  this->StartBone = param_1->StartBone;
  this->EndBone = param_1->EndBone;
  this->IKGoalName = param_1->IKGoalName;
  piVar2 = &(this->RefPoseGlobalTransforms).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->RefPoseGlobalTransforms).ArrayNum;
  pFVar6 = (param_1->RefPoseGlobalTransforms).AllocatorInstance.Data;
  (this->RefPoseGlobalTransforms).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x60);
  }
  pTVar1 = &this->RefPoseLocalTransforms;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RefPoseLocalTransforms).ArrayMax;
  iVar5 = (param_1->RefPoseLocalTransforms).ArrayNum;
  pFVar6 = (param_1->RefPoseLocalTransforms).AllocatorInstance.Data;
  (this->RefPoseLocalTransforms).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x60);
  }
  pTVar1 = &this->CurrentLocalTransforms;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CurrentLocalTransforms).ArrayMax;
  iVar5 = (param_1->CurrentLocalTransforms).ArrayNum;
  pFVar6 = (param_1->CurrentLocalTransforms).AllocatorInstance.Data;
  (this->CurrentLocalTransforms).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x60);
  }
  pTVar3 = &this->Params;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Params).ArrayMax;
  iVar5 = (param_1->Params).ArrayNum;
  pFVar6 = (param_1->Params).AllocatorInstance.Data;
  (this->Params).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar4 = &this->BoneIndices;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->BoneIndices).ArrayMax;
  iVar5 = (param_1->BoneIndices).ArrayNum;
  pFVar6 = (param_1->BoneIndices).AllocatorInstance.Data;
  (this->BoneIndices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  this->InitialChainLength = param_1->InitialChainLength;
  this->ChainParentBoneIndex = param_1->ChainParentBoneIndex;
  dVar7 = (param_1->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[1];
  (this->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0];
  (this->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[1];
  (this->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0];
  (this->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[1];
  (this->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0] =
       (param_1->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0];
  (this->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[1];
  (this->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0];
  (this->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[1];
  (this->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0];
  (this->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[1];
  (this->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0];
  (this->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[1] = dVar7;
  this->bFoundStartBone = param_1->bFoundStartBone;
  this->bFoundEndBone = param_1->bFoundEndBone;
  this->bEndIsStartOrChildOfStart = param_1->bEndIsStartOrChildOfStart;
  return this;
}

// FResolvedBoneChain @ 14df18460

FResolvedBoneChain * __thiscall
FResolvedBoneChain::FResolvedBoneChain
          (FResolvedBoneChain *this,FBoneChain *param_1,FRetargetSkeleton *param_2,
          FIKRigLogger *param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined4 uVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FName FVar14;
  FResolvedBoneChain *pFVar15;
  bool bVar16;
  FScriptContainerElement *pFVar17;
  FName *pFVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  FName *pFVar22;
  ulonglong uVar23;
  uint uVar24;
  uint local_38 [4];
  
  lVar21 = 0;
  pTVar1 = &this->BoneIndices;
  (this->ChainName).ComparisonIndex = 0;
  (this->ChainName).Number = 0;
  piVar2 = &(this->BoneIndices).ArrayMax;
  (this->StartBone).ComparisonIndex = 0;
  (this->StartBone).Number = 0;
  (this->EndBone).ComparisonIndex = 0;
  (this->EndBone).Number = 0;
  (this->IKGoalName).ComparisonIndex = 0;
  (this->IKGoalName).Number = 0;
  (this->RefPoseGlobalTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefPoseGlobalTransforms).ArrayNum = 0;
  (this->RefPoseGlobalTransforms).ArrayMax = 0;
  (this->RefPoseLocalTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefPoseLocalTransforms).ArrayNum = 0;
  (this->RefPoseLocalTransforms).ArrayMax = 0;
  (this->CurrentLocalTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentLocalTransforms).ArrayNum = 0;
  (this->CurrentLocalTransforms).ArrayMax = 0;
  (this->Params).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Params).ArrayNum = 0;
  (this->Params).ArrayMax = 0;
  *piVar2 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->BoneIndices).ArrayNum = 0;
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[1] = (double)fVar7;
  (this->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0] = (double)fVar8;
  (this->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[1] = (double)fVar9;
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[1] = (double)fVar7;
  (this->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0] = (double)fVar8;
  (this->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[1] = (double)fVar9;
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[1] = (double)fVar7;
  (this->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  (this->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar9;
  this->bFoundStartBone = false;
  this->bFoundEndBone = false;
  this->bEndIsStartOrChildOfStart = false;
  this->ChainName = param_1->ChainName;
  FVar14 = (param_1->StartBone).BoneName;
  this->StartBone = FVar14;
  this->EndBone = (param_1->EndBone).BoneName;
  this->IKGoalName = param_1->IKGoalName;
  pFVar4 = (FName *)(param_2->BoneNames).AllocatorInstance.Data;
  for (pFVar22 = pFVar4; pFVar18 = pFVar4, pFVar22 != pFVar4 + (param_2->BoneNames).ArrayNum;
      pFVar22 = pFVar22 + 1) {
    if (*pFVar22 == FVar14) {
      FVar14 = this->EndBone;
      uVar23 = (longlong)pFVar22 - (longlong)pFVar4 >> 3;
      goto LAB_14df18585;
    }
  }
  FVar14 = this->EndBone;
  uVar23 = 0xffffffff;
  for (; pFVar18 != pFVar4 + (param_2->BoneNames).ArrayNum; pFVar18 = pFVar18 + 1) {
LAB_14df18585:
    if (*pFVar18 == FVar14) {
      uVar19 = (longlong)pFVar18 - (longlong)pFVar4 >> 3;
      goto LAB_14df1859c;
    }
  }
  uVar19 = 0xffffffff;
LAB_14df1859c:
  iVar13 = (int)uVar23;
  iVar11 = (int)uVar19;
  bVar10 = (bool)((byte)(uVar23 >> 0x1f) & 1 ^ 1);
  bVar16 = (bool)((byte)(uVar19 >> 0x1f) & 1 ^ 1);
  this->bFoundStartBone = bVar10;
  this->bFoundEndBone = bVar16;
  if (((bVar10 != false) && (bVar16 != false)) && (iVar13 <= iVar11)) {
    (this->BoneIndices).ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,*piVar2,&pTVar1->AllocatorInstance,1,piVar2);
    *(int *)(pTVar1->AllocatorInstance).Data = iVar11;
    local_38[0] = FRetargetSkeleton::GetParentIndex(param_2,iVar11);
    if (-1 < (int)local_38[0]) {
      do {
        if ((int)local_38[0] < iVar13) break;
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)*piVar2 * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar15 = (FResolvedBoneChain *)(*pcVar6)();
          return pFVar15;
        }
        iVar11 = (this->BoneIndices).ArrayNum;
        if (iVar11 == *piVar2) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->BoneIndices).ArrayNum = iVar11 + 1;
        *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_38[0];
        lVar20 = (longlong)(int)local_38[0];
        if (((int)local_38[0] < 0) || ((param_2->ParentIndices).ArrayNum <= (int)local_38[0])) {
          local_38[0] = 0xffffffff;
          break;
        }
        if (((int)local_38[0] < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar15 = (FResolvedBoneChain *)(*pcVar6)();
          return pFVar15;
        }
        local_38[0] = *(uint *)((param_2->ParentIndices).AllocatorInstance.Data + lVar20 * 4);
      } while (local_38[0] < 0x80000000);
    }
    iVar11 = (this->BoneIndices).ArrayNum;
    uVar24 = iVar11 - 1;
    uVar12 = 0;
    if ((int)uVar24 < iVar11) {
      uVar12 = ~uVar24 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FResolvedBoneChain *)(*pcVar6)();
      return pFVar15;
    }
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    if (*(int *)(pFVar5 + (longlong)(this->BoneIndices).ArrayNum * 4 + -4) == iVar13) {
      this->bEndIsStartOrChildOfStart = true;
      iVar11 = (this->BoneIndices).ArrayNum;
      iVar13 = iVar11 / 2;
      if (0 < iVar13) {
        pFVar17 = pFVar5 + (longlong)(iVar11 + -1) * 4;
        do {
          uVar3 = *(undefined4 *)(pFVar5 + lVar21 * 4);
          *(undefined4 *)(pFVar5 + lVar21 * 4) = *(undefined4 *)pFVar17;
          lVar21 = lVar21 + 1;
          *(undefined4 *)pFVar17 = uVar3;
          pFVar17 = pFVar17 + -4;
        } while (lVar21 < iVar13);
      }
      UpdatePoseFromSkeleton(this,param_2);
      CalculateBoneParameters(this,param_3);
    }
    else {
      (this->BoneIndices).ArrayNum = 0;
      if (*piVar2 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
      }
      this->bEndIsStartOrChildOfStart = false;
    }
  }
  return this;
}

// CalculateBoneParameters @ 14df27d60

void __thiscall
FResolvedBoneChain::CalculateBoneParameters(FResolvedBoneChain *this,FIKRigLogger *param_1)

{
  int *piVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined4 local_88;
  float local_84;
  ForAnyElementType local_80;
  undefined8 local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double local_58;
  double dStack_50;
  double local_48;
  
  piVar1 = &(this->Params).ArrayMax;
  uVar10 = 0;
  (this->Params).ArrayNum = 0;
  if ((this->Params).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Params).AllocatorInstance,0,piVar1);
  }
  if ((this->RefPoseGlobalTransforms).ArrayNum == 1) {
    pFVar3 = (this->Params).AllocatorInstance.Data;
    local_88 = 0x3f800000;
    if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)*piVar1 * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (this->Params).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Params).AllocatorInstance,piVar1);
    }
    (this->Params).ArrayNum = iVar7 + 1;
    *(undefined4 *)((this->Params).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_88;
    return;
  }
  pfVar2 = &this->InitialChainLength;
  *pfVar2 = 0.0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,&local_80,(int *)((longlong)&local_78 + 4));
  uVar8 = 1;
  local_78 = CONCAT44(local_78._4_4_,iVar7 + 1);
  *(undefined4 *)(local_80.Data + (longlong)iVar7 * 4) = 0;
  iVar7 = (this->RefPoseGlobalTransforms).ArrayNum;
  if (1 < iVar7) {
    lVar11 = 0x60;
    do {
      uVar9 = 0;
      if ((int)uVar8 < (this->RefPoseGlobalTransforms).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->RefPoseGlobalTransforms).AllocatorInstance.Data;
      pFVar3 = pFVar4 + lVar11 + 0x20;
      local_70 = *(double *)pFVar3;
      dStack_68 = *(double *)(pFVar3 + 8);
      local_60 = *(double *)(pFVar4 + lVar11 + 0x30);
      uVar9 = 0;
      if ((int)(uVar8 - 1) < (this->RefPoseGlobalTransforms).ArrayNum) {
        uVar9 = -uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->RefPoseGlobalTransforms).AllocatorInstance.Data;
      pFVar3 = pFVar4 + lVar11 + -0x40;
      local_58 = *(double *)pFVar3;
      dStack_50 = *(double *)(pFVar3 + 8);
      local_48 = *(double *)(pFVar4 + lVar11 + -0x30);
      auVar13._0_8_ = (local_60 - local_48) * (local_60 - local_48);
      auVar13._8_8_ = 0;
      auVar14._8_8_ = 0;
      auVar14._0_8_ =
           (dStack_68 - dStack_50) * (dStack_68 - dStack_50) +
           (local_70 - local_58) * (local_70 - local_58) + auVar13._0_8_;
      auVar14 = sqrtpd(auVar13,auVar14);
      *pfVar2 = (float)auVar14._0_8_ + *pfVar2;
      if (((local_80.Data <= pfVar2) && (pfVar2 < local_80.Data + (longlong)local_78._4_4_ * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (int)local_78;
      if ((int)local_78 == local_78._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_80,(int *)((longlong)&local_78 + 4));
      }
      uVar8 = uVar8 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar7 + 1);
      lVar11 = lVar11 + 0x60;
      *(float *)(local_80.Data + (longlong)iVar7 * 4) = *pfVar2;
      iVar7 = (this->RefPoseGlobalTransforms).ArrayNum;
    } while ((int)uVar8 < iVar7);
  }
  fVar15 = *pfVar2;
  if (*pfVar2 <= __real_38d1b717) {
    fVar15 = __real_38d1b717;
  }
  if (0 < iVar7) {
    fVar15 = __real_3f800000 / fVar15;
    uVar12 = uVar10;
    do {
      uVar9 = (uint)uVar10;
      uVar8 = 0;
      if ((int)uVar9 < (int)local_78) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->Params).AllocatorInstance.Data;
      local_84 = fVar15 * *(float *)(local_80.Data + uVar12);
      if (((pFVar3 <= (FScriptContainerElement *)&local_84) &&
          ((FScriptContainerElement *)&local_84 < pFVar3 + (longlong)*piVar1 * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->Params).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->Params).AllocatorInstance,piVar1);
      }
      (this->Params).ArrayNum = iVar7 + 1;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar12 = uVar12 + 4;
      *(float *)((this->Params).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_84;
    } while ((int)(uVar9 + 1) < (this->RefPoseGlobalTransforms).ArrayNum);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  return;
}

// FillTransformsWithGlobalRetargetPoseOfChain @ 14df32810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FResolvedBoneChain::FillTransformsWithGlobalRetargetPoseOfChain
          (FRetargetSkeleton *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  TTransform<double> *pTVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  FResolvedRetargetPoseSet *this;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStackY_198 [32];
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_138;
  FRetargetSkeleton *local_130;
  FResolvedRetargetPoseSet *local_128;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar13 = param_3->ArrayNum;
  local_138 = param_2;
  local_130 = param_1;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar13,&param_4->AllocatorInstance,0,piVar1);
  }
  this = &param_1->RetargetPoses;
  local_128 = this;
  pTVar9 = FResolvedRetargetPoseSet::GetLocalRetargetPose(this);
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = pTVar9->ArrayNum;
  lVar14 = (longlong)local_140;
  pFVar11 = (pTVar9->AllocatorInstance).Data;
  if (local_140 == 0) {
    local_13c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_140,0,&local_148,local_140,&local_13c);
    memcpy(local_148.Data,pFVar11,lVar14 * 0x60);
  }
  iVar6 = param_3->ArrayNum;
  uVar13 = 0;
  if (0 < iVar6) {
    lVar14 = 0;
    do {
      if (uVar13 == 0) {
        if ((iVar6 < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar10 = FResolvedRetargetPoseSet::GetGlobalRetargetPoseOfSingleBone
                            (this,&local_b8,local_130,
                             *(int *)((param_3->AllocatorInstance).Data + lVar14),local_138);
        pTVar2 = (TTransform<double> *)(param_4->AllocatorInstance).Data;
        if (((pTVar2 <= pTVar10) && (pTVar10 < pTVar2 + *piVar1)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_4->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1060,&param_4->AllocatorInstance,piVar1);
        }
        param_4->ArrayNum = iVar6 + 1;
        dVar4 = (pTVar10->Rotation).XY.m128d_f64[1];
        pFVar11 = (param_4->AllocatorInstance).Data;
        lVar12 = (longlong)iVar6 * 0x60;
        *(double *)(pFVar11 + lVar12) = (pTVar10->Rotation).XY.m128d_f64[0];
        *(double *)(pFVar11 + lVar12 + 8) = dVar4;
        dVar4 = (pTVar10->Rotation).ZW.m128d_f64[1];
        *(double *)(pFVar11 + lVar12 + 0x10) = (pTVar10->Rotation).ZW.m128d_f64[0];
        *(double *)(pFVar11 + lVar12 + 0x10 + 8) = dVar4;
        dVar4 = (pTVar10->Translation).XY.m128d_f64[1];
        *(double *)(pFVar11 + lVar12 + 0x20) = (pTVar10->Translation).XY.m128d_f64[0];
        *(double *)(pFVar11 + lVar12 + 0x20 + 8) = dVar4;
        dVar4 = (pTVar10->Translation).ZW.m128d_f64[1];
        *(double *)(pFVar11 + lVar12 + 0x30) = (pTVar10->Translation).ZW.m128d_f64[0];
        *(double *)(pFVar11 + lVar12 + 0x30 + 8) = dVar4;
        dVar4 = (pTVar10->Scale3D).XY.m128d_f64[1];
        *(double *)(pFVar11 + lVar12 + 0x40) = (pTVar10->Scale3D).XY.m128d_f64[0];
        *(double *)(pFVar11 + lVar12 + 0x40 + 8) = dVar4;
        uVar15 = *(undefined4 *)(pTVar10->Scale3D).ZW.m128d_f64;
        uVar16 = *(undefined4 *)((longlong)(pTVar10->Scale3D).ZW.m128d_f64 + 4);
        uVar17 = *(undefined4 *)((pTVar10->Scale3D).ZW.m128d_f64 + 1);
        uVar18 = *(undefined4 *)((longlong)(pTVar10->Scale3D).ZW.m128d_f64 + 0xc);
      }
      else {
        uVar7 = 0;
        if ((int)uVar13 < iVar6) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = *(uint *)((param_3->AllocatorInstance).Data + lVar14);
        uVar8 = 0;
        if ((int)(uVar13 - 1) < param_4->ArrayNum) {
          uVar8 = -uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar11 = (param_4->AllocatorInstance).Data;
        uVar8 = 0;
        if ((int)uVar7 < local_140) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_118.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_118.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_118.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_118.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_118.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_118.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_118,(TTransform<double> *)(local_148.Data + (longlong)(int)uVar7 * 0x60),
                   (TTransform<double> *)(pFVar11 + (longlong)(int)(uVar13 - 1) * 0x60));
        pTVar2 = (TTransform<double> *)(param_4->AllocatorInstance).Data;
        if (((pTVar2 <= &local_118) && (&local_118 < pTVar2 + *piVar1)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_4->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1060,&param_4->AllocatorInstance,piVar1);
        }
        param_4->ArrayNum = iVar6 + 1;
        pFVar11 = (param_4->AllocatorInstance).Data;
        lVar12 = (longlong)iVar6 * 0x60;
        *(double *)(pFVar11 + lVar12) = local_118.Rotation.XY.m128d_f64[0];
        *(double *)(pFVar11 + lVar12 + 8) = local_118.Rotation.XY.m128d_f64[1];
        *(double *)(pFVar11 + lVar12 + 0x10) = local_118.Rotation.ZW.m128d_f64[0];
        *(double *)(pFVar11 + lVar12 + 0x10 + 8) = local_118.Rotation.ZW.m128d_f64[1];
        *(double *)(pFVar11 + lVar12 + 0x20) = local_118.Translation.XY.m128d_f64[0];
        *(double *)(pFVar11 + lVar12 + 0x20 + 8) = local_118.Translation.XY.m128d_f64[1];
        *(double *)(pFVar11 + lVar12 + 0x30) = local_118.Translation.ZW.m128d_f64[0];
        *(double *)(pFVar11 + lVar12 + 0x30 + 8) = local_118.Translation.ZW.m128d_f64[1];
        *(double *)(pFVar11 + lVar12 + 0x40) = local_118.Scale3D.XY.m128d_f64[0];
        *(double *)(pFVar11 + lVar12 + 0x40 + 8) = local_118.Scale3D.XY.m128d_f64[1];
        this = local_128;
        uVar15 = local_118.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar16 = local_118.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar17 = local_118.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar18 = local_118.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      pFVar11 = pFVar11 + lVar12 + 0x50;
      *(undefined4 *)pFVar11 = uVar15;
      *(undefined4 *)(pFVar11 + 4) = uVar16;
      *(undefined4 *)(pFVar11 + 8) = uVar17;
      *(undefined4 *)(pFVar11 + 0xc) = uVar18;
      uVar13 = uVar13 + 1;
      iVar6 = param_3->ArrayNum;
      lVar14 = lVar14 + 4;
    } while ((int)uVar13 < iVar6);
  }
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  return;
}

// FillTransformsWithLocalSpaceOfChain @ 14df32cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FResolvedBoneChain::FillTransformsWithLocalSpaceOfChain
          (FRetargetSkeleton *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  uint uVar6;
  TTransform<double> *pTVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_138;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  TArray<int,TSizedDefaultAllocator<32>_> *local_118;
  FRetargetSkeleton *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_138 = param_2;
  local_130 = param_4;
  local_118 = param_3;
  local_110 = param_1;
  if ((param_3->ArrayNum != param_4->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBoneIndices.Num() == OutLocalTransforms.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                         ,0x344,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = param_3->ArrayNum;
  uVar10 = 0;
  if (0 < iVar9) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar15 = ~uVar10 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar10 < iVar9) {
        uVar6 = uVar15;
      }
      if (uVar6 == 0) {
        local_140 = (longlong)iVar9;
        local_148 = (longlong)(int)uVar10;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar6 = *(uint *)((param_3->AllocatorInstance).Data + lVar13);
      lVar11 = (longlong)(int)uVar6;
      if (((int)uVar6 < 0) || (iVar9 = (param_1->ParentIndices).ArrayNum, iVar9 <= (int)uVar6)) {
        uVar14 = 0xffffffff;
      }
      else {
        if (((int)uVar6 < 0) &&
           (local_148 = lVar11, local_140 = (longlong)iVar9,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar14 = *(uint *)((param_1->ParentIndices).AllocatorInstance.Data + lVar11 * 4);
      }
      iVar9 = local_138->ArrayNum;
      if (uVar14 == 0xffffffff) {
        uVar14 = 0;
        if ((int)uVar6 < iVar9) {
          uVar14 = ~uVar6 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (local_148 = lVar11, local_140 = (longlong)iVar9,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar4 = local_130;
        lVar11 = lVar11 * 0x60;
        pFVar8 = (local_138->AllocatorInstance).Data;
        local_108 = *(double *)(pFVar8 + lVar11 + 0x10);
        uStack_100 = *(double *)(pFVar8 + lVar11 + 0x10 + 8);
        local_f8 = *(double *)(pFVar8 + lVar11 + 0x20);
        dStack_f0 = *(double *)(pFVar8 + lVar11 + 0x20 + 8);
        pFVar1 = pFVar8 + lVar11;
        local_128 = *(undefined4 *)pFVar1;
        uStack_124 = *(undefined4 *)(pFVar1 + 4);
        uStack_120 = *(undefined4 *)(pFVar1 + 8);
        uStack_11c = *(undefined4 *)(pFVar1 + 0xc);
        local_e8 = *(double *)(pFVar8 + lVar11 + 0x30);
        dStack_e0 = *(double *)(pFVar8 + lVar11 + 0x30 + 8);
        local_c8 = *(double *)(pFVar8 + lVar11 + 0x50);
        uStack_c0 = *(double *)(pFVar8 + lVar11 + 0x50 + 8);
        local_d8 = *(double *)(pFVar8 + lVar11 + 0x40);
        dStack_d0 = *(double *)(pFVar8 + lVar11 + 0x40 + 8);
        uVar6 = 0;
        if ((int)uVar10 < local_130->ArrayNum) {
          uVar6 = uVar15;
        }
        if (uVar6 == 0) {
          local_148 = (longlong)(int)uVar10;
          local_140 = (longlong)local_130->ArrayNum;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar8 = (pTVar4->AllocatorInstance).Data;
        pFVar1 = pFVar8 + lVar12;
        *(undefined4 *)pFVar1 = local_128;
        *(undefined4 *)(pFVar1 + 4) = uStack_124;
        *(undefined4 *)(pFVar1 + 8) = uStack_120;
        *(undefined4 *)(pFVar1 + 0xc) = uStack_11c;
        *(double *)(pFVar8 + lVar12 + 0x10) = local_108;
        *(double *)(pFVar8 + lVar12 + 0x10 + 8) = uStack_100;
        *(double *)(pFVar8 + lVar12 + 0x20) = local_f8;
        *(double *)(pFVar8 + lVar12 + 0x20 + 8) = dStack_f0;
        *(double *)(pFVar8 + lVar12 + 0x30) = local_e8;
        *(double *)(pFVar8 + lVar12 + 0x30 + 8) = dStack_e0;
        *(double *)(pFVar8 + lVar12 + 0x40) = local_d8;
        *(double *)(pFVar8 + lVar12 + 0x40 + 8) = dStack_d0;
        uVar16 = (undefined4)local_c8;
        uVar17 = local_c8._4_4_;
        uVar18 = (undefined4)uStack_c0;
        uVar19 = uStack_c0._4_4_;
      }
      else {
        uVar3 = 0;
        if ((int)uVar6 < iVar9) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (local_148 = lVar11, local_140 = (longlong)iVar9,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar4 = local_138;
        pFVar1 = (local_138->AllocatorInstance).Data;
        uVar6 = 0;
        if ((int)uVar14 < local_138->ArrayNum) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_148 = (longlong)(int)uVar14;
          local_140 = (longlong)local_138->ArrayNum;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pTVar7 = UE::Math::TTransform<double>::GetRelativeTransform
                           ((TTransform<double> *)(pFVar1 + lVar11 * 0x60),&local_b8,
                            (TTransform<double> *)
                            ((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x60));
        pTVar4 = local_130;
        local_c8 = (pTVar7->Rotation).ZW.m128d_f64[0];
        uStack_c0 = (pTVar7->Rotation).ZW.m128d_f64[1];
        local_d8 = (pTVar7->Translation).XY.m128d_f64[0];
        dStack_d0 = (pTVar7->Translation).XY.m128d_f64[1];
        local_128 = *(undefined4 *)(pTVar7->Rotation).XY.m128d_f64;
        uStack_124 = *(undefined4 *)((longlong)(pTVar7->Rotation).XY.m128d_f64 + 4);
        uStack_120 = *(undefined4 *)((pTVar7->Rotation).XY.m128d_f64 + 1);
        uStack_11c = *(undefined4 *)((longlong)(pTVar7->Rotation).XY.m128d_f64 + 0xc);
        local_e8 = (pTVar7->Translation).ZW.m128d_f64[0];
        dStack_e0 = (pTVar7->Translation).ZW.m128d_f64[1];
        local_108 = (pTVar7->Scale3D).ZW.m128d_f64[0];
        uStack_100 = (pTVar7->Scale3D).ZW.m128d_f64[1];
        local_f8 = (pTVar7->Scale3D).XY.m128d_f64[0];
        dStack_f0 = (pTVar7->Scale3D).XY.m128d_f64[1];
        uVar6 = 0;
        if ((int)uVar10 < local_130->ArrayNum) {
          uVar6 = uVar15;
        }
        if (uVar6 == 0) {
          local_148 = (longlong)(int)uVar10;
          local_140 = (longlong)local_130->ArrayNum;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar8 = (pTVar4->AllocatorInstance).Data;
        pFVar1 = pFVar8 + lVar12;
        *(undefined4 *)pFVar1 = local_128;
        *(undefined4 *)(pFVar1 + 4) = uStack_124;
        *(undefined4 *)(pFVar1 + 8) = uStack_120;
        *(undefined4 *)(pFVar1 + 0xc) = uStack_11c;
        *(double *)(pFVar8 + lVar12 + 0x10) = local_c8;
        *(double *)(pFVar8 + lVar12 + 0x10 + 8) = uStack_c0;
        *(double *)(pFVar8 + lVar12 + 0x20) = local_d8;
        *(double *)(pFVar8 + lVar12 + 0x20 + 8) = dStack_d0;
        *(double *)(pFVar8 + lVar12 + 0x30) = local_e8;
        *(double *)(pFVar8 + lVar12 + 0x30 + 8) = dStack_e0;
        *(double *)(pFVar8 + lVar12 + 0x40) = local_f8;
        *(double *)(pFVar8 + lVar12 + 0x40 + 8) = dStack_f0;
        uVar16 = (undefined4)local_108;
        uVar17 = local_108._4_4_;
        uVar18 = (undefined4)uStack_100;
        uVar19 = uStack_100._4_4_;
      }
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 4;
      pFVar8 = pFVar8 + lVar12 + 0x50;
      *(undefined4 *)pFVar8 = uVar16;
      *(undefined4 *)(pFVar8 + 4) = uVar17;
      *(undefined4 *)(pFVar8 + 8) = uVar18;
      *(undefined4 *)(pFVar8 + 0xc) = uVar19;
      lVar12 = lVar12 + 0x60;
      iVar9 = local_118->ArrayNum;
      param_3 = local_118;
      param_1 = local_110;
    } while ((int)uVar10 < iVar9);
  }
  return;
}

// GetBoneAtParam @ 14df34fc0

int __thiscall FResolvedBoneChain::GetBoneAtParam(FResolvedBoneChain *this,double *param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  dVar4 = __real_3fa999999999999a;
  uVar3 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar2 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar10 = *param_1;
  uVar11 = SUB84(dVar10,0);
  uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
  if ((__real_3ff0000000000000 < dVar10) ||
     ((double)CONCAT44((uint)((ulonglong)(dVar10 - __real_3ff0000000000000) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar10 - __real_3ff0000000000000,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee2308c3a)) {
    iVar7 = (this->Params).ArrayNum;
  }
  else {
    uVar8 = 0;
    iVar7 = (this->Params).ArrayNum;
    if (0 < iVar7) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this->Params).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          iVar7 = (*pcVar1)();
          return iVar7;
        }
        dVar10 = (double)*(float *)((this->Params).AllocatorInstance.Data + lVar9) -
                 (double)CONCAT44(uVar12,uVar11);
        if ((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar3,SUB84(dVar10,0) & uVar2) <=
            dVar4) {
          return uVar8;
        }
        uVar6 = 0;
        if ((int)uVar8 < (this->Params).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          iVar7 = (*pcVar1)();
          return iVar7;
        }
        dVar10 = *param_1;
        uVar11 = SUB84(dVar10,0);
        uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
        if (dVar10 < (double)*(float *)((this->Params).AllocatorInstance.Data + lVar9)) {
          return uVar8;
        }
        iVar7 = (this->Params).ArrayNum;
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 4;
      } while ((int)uVar8 < iVar7);
    }
  }
  return iVar7 + -1;
}

// GetBoneClosestToParam @ 14df35160

int __thiscall FResolvedBoneChain::GetBoneClosestToParam(FResolvedBoneChain *this,double *param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar3 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar2 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = 0;
  uVar9 = 0xffffffff;
  if (0 < (this->Params).ArrayNum) {
    lVar7 = 0;
    uVar12 = (uint)__real_7fefffffffffffff;
    uVar14 = (uint)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar8 = 0xffffffff;
    do {
      uVar9 = 0;
      if ((int)uVar6 < (this->Params).ArrayNum) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      dVar10 = (double)*(float *)((this->Params).AllocatorInstance.Data + lVar7) - *param_1;
      uVar9 = SUB84(dVar10,0) & uVar2;
      uVar11 = (uint)((ulonglong)dVar10 >> 0x20) & uVar3;
      dVar10 = (double)CONCAT44(uVar11,uVar9);
      uVar13 = uVar12;
      uVar15 = uVar14;
      if (dVar10 < (double)CONCAT44(uVar14,uVar12)) {
        uVar13 = uVar9;
        uVar15 = uVar11;
      }
      uVar9 = uVar6;
      if ((double)CONCAT44(uVar14,uVar12) < dVar10 || (double)CONCAT44(uVar14,uVar12) == dVar10) {
        uVar9 = uVar8;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 4;
      uVar12 = uVar13;
      uVar14 = uVar15;
      uVar8 = uVar9;
    } while ((int)uVar6 < (this->Params).ArrayNum);
  }
  return uVar9;
}

// GetChainLength @ 14df35e50

double __cdecl
FResolvedBoneChain::GetChainLength
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  
  iVar8 = param_1->ArrayNum;
  uVar9 = 1;
  dVar4 = 0.0;
  if (iVar8 < 2) {
    return 0.0;
  }
  lVar10 = 0x60;
  do {
    uVar7 = 0;
    if ((int)(uVar9 - 1) < iVar8) {
      uVar7 = -uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        dVar4 = (double)(*pcVar3)();
        return dVar4;
      }
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar2 + lVar10 + -0x40;
    dVar5 = *(double *)pFVar1;
    dVar12 = *(double *)(pFVar1 + 8);
    dVar11 = *(double *)(pFVar2 + lVar10 + -0x30);
    uVar7 = 0;
    if ((int)uVar9 < param_1->ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        dVar4 = (double)(*pcVar3)();
        return dVar4;
      }
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    uVar9 = uVar9 + 1;
    iVar8 = param_1->ArrayNum;
    pFVar1 = pFVar2 + lVar10 + 0x20;
    dVar11 = *(double *)(pFVar2 + lVar10 + 0x30) - dVar11;
    dVar5 = *(double *)pFVar1 - dVar5;
    lVar10 = lVar10 + 0x60;
    dVar12 = *(double *)(pFVar1 + 8) - dVar12;
    dVar4 = dVar4 + (double)(float)SQRT(dVar12 * dVar12 + dVar5 * dVar5 + dVar11 * dVar11);
  } while ((int)uVar9 < iVar8);
  return dVar4;
}

// GetChainTransformsFromPose @ 14df36520

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FResolvedBoneChain::GetChainTransformsFromPose
          (FResolvedBoneChain *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  uVar2 = (this->BoneIndices).ArrayNum;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_2c = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  local_30 = 0;
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar2,&local_38,0,&local_2c);
  }
  pFVar11 = (this->BoneIndices).AllocatorInstance.Data;
  iVar3 = (this->BoneIndices).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar3 * 4;
  while( true ) {
    if ((this->BoneIndices).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar1) break;
    uVar2 = *(uint *)pFVar11;
    uVar7 = 0;
    if ((int)uVar2 < param_1->ArrayNum) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    pFVar10 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar2 * 0x60;
    if ((local_38.Data <= pFVar10) && (pFVar10 < local_38.Data + (longlong)local_2c * 0x60)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    if (local_30 == local_2c) {
      local_30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&local_38,&local_2c);
    }
    lVar9 = (longlong)local_30;
    local_30 = local_30 + 1;
    uVar5 = *(undefined8 *)(pFVar10 + 8);
    lVar9 = lVar9 * 0x60;
    pFVar11 = pFVar11 + 4;
    *(undefined8 *)(local_38.Data + lVar9) = *(undefined8 *)pFVar10;
    *(undefined8 *)(local_38.Data + lVar9 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pFVar10 + 0x18);
    *(undefined8 *)(local_38.Data + lVar9 + 0x10) = *(undefined8 *)(pFVar10 + 0x10);
    *(undefined8 *)(local_38.Data + lVar9 + 0x10 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pFVar10 + 0x28);
    *(undefined8 *)(local_38.Data + lVar9 + 0x20) = *(undefined8 *)(pFVar10 + 0x20);
    *(undefined8 *)(local_38.Data + lVar9 + 0x20 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pFVar10 + 0x38);
    *(undefined8 *)(local_38.Data + lVar9 + 0x30) = *(undefined8 *)(pFVar10 + 0x30);
    *(undefined8 *)(local_38.Data + lVar9 + 0x30 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pFVar10 + 0x48);
    *(undefined8 *)(local_38.Data + lVar9 + 0x40) = *(undefined8 *)(pFVar10 + 0x40);
    *(undefined8 *)(local_38.Data + lVar9 + 0x40 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pFVar10 + 0x58);
    *(undefined8 *)(local_38.Data + lVar9 + 0x50) = *(undefined8 *)(pFVar10 + 0x50);
    *(undefined8 *)(local_38.Data + lVar9 + 0x50 + 8) = uVar5;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_38.Data;
  __return_storage_ptr__->ArrayNum = local_30;
  __return_storage_ptr__->ArrayMax = local_2c;
  return __return_storage_ptr__;
}

// GetEquivalentBoneInOtherChain @ 14df38070

int __thiscall
FResolvedBoneChain::GetEquivalentBoneInOtherChain
          (FResolvedBoneChain *this,int param_1,FResolvedBoneChain *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  double local_res8;
  
  if ((this->BoneIndices).ArrayNum == (param_2->BoneIndices).ArrayNum) {
    return param_1;
  }
  uVar3 = 0;
  if (param_1 < (this->Params).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  local_res8 = (double)*(float *)((this->Params).AllocatorInstance.Data + (longlong)param_1 * 4);
  iVar4 = GetBoneClosestToParam(param_2,&local_res8);
  return iVar4;
}

// GetStretchAtParam @ 14df40530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
FResolvedBoneChain::GetStretchAtParam
          (FResolvedBoneChain *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,double *param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar21 [16];
  int *local_res10;
  
  piVar1 = &(this->Params).ArrayNum;
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum != *piVar1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InitialTransforms.Num() == CurrentTransforms.Num() && InitialTransforms.Num() == Params.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                         ,0x2ce,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    dVar15 = (double)(*pcVar4)();
    return dVar15;
  }
  dVar15 = __real_3f1a36e2e0000000;
  piVar12 = &param_1->ArrayNum;
  dVar16 = __real_3ff0000000000000;
  if ((1 < *piVar1) && (__real_3f1a36e2e0000000 <= *param_3)) {
    if (*param_3 <= ___real_3fefff2e48e90000) {
      uVar14 = GetBoneClosestToParam(this,param_3);
      uVar8 = uVar14;
      if (uVar14 == 0) {
        uVar8 = 1;
      }
      local_res10 = &param_1->ArrayNum;
      uVar10 = 0;
      if (uVar14 != 0) {
        uVar10 = uVar14 - 1;
      }
      uVar14 = 0;
      if ((int)uVar10 < *piVar12) {
        uVar14 = ~uVar10 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        dVar15 = (double)(*pcVar4)();
        return dVar15;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      lVar13 = (longlong)(int)uVar10 * 0x60;
      pFVar9 = pFVar3 + lVar13 + 0x20;
      dVar18 = *(double *)pFVar9;
      dVar19 = *(double *)(pFVar9 + 8);
      dVar16 = *(double *)(pFVar3 + lVar13 + 0x30);
      uVar14 = 0;
      if ((int)uVar8 < *local_res10) {
        uVar14 = ~uVar8 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        dVar15 = (double)(*pcVar4)();
        return dVar15;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      lVar11 = (longlong)(int)uVar8 * 0x60;
      pFVar9 = pFVar3 + lVar11 + 0x20;
      dVar18 = dVar18 - *(double *)pFVar9;
      dVar19 = dVar19 - *(double *)(pFVar9 + 8);
      uVar14 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar14 = ~uVar10 >> 0x1f;
      }
      dVar16 = dVar16 - *(double *)(pFVar3 + lVar11 + 0x30);
      auVar21._8_8_ = 0;
      auVar21._0_8_ = dVar19 * dVar19 + dVar18 * dVar18 + dVar16 * dVar16;
      auVar21 = sqrtpd(unaff_XMM6,auVar21);
      dVar18 = auVar21._0_8_;
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        dVar15 = (double)(*pcVar4)();
        return dVar15;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar9 = pFVar3 + lVar13 + 0x20;
      dVar19 = *(double *)pFVar9;
      dVar20 = *(double *)(pFVar9 + 8);
      dVar16 = *(double *)(pFVar3 + lVar13 + 0x30);
      uVar14 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar14 = ~uVar8 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        dVar15 = (double)(*pcVar4)();
        return dVar15;
      }
      pFVar9 = (param_2->AllocatorInstance).Data;
      dVar19 = dVar19 - *(double *)(pFVar9 + lVar11 + 0x20);
      dVar20 = dVar20 - *(double *)(pFVar9 + lVar11 + 0x20 + 8);
    }
    else {
      iVar2 = *piVar12;
      uVar14 = iVar2 - 1;
      uVar8 = 0;
      if ((int)uVar14 < iVar2) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        dVar15 = (double)(*pcVar4)();
        return dVar15;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar10 = ~(iVar2 - 2U) >> 0x1f;
      iVar2 = iVar2 + -2;
      lVar13 = (longlong)(int)uVar14 * 0x60;
      pFVar9 = pFVar3 + lVar13 + 0x20;
      dVar18 = *(double *)pFVar9;
      dVar19 = *(double *)(pFVar9 + 8);
      dVar16 = *(double *)(pFVar3 + lVar13 + 0x30);
      uVar8 = 0;
      if (iVar2 < *piVar12) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        dVar15 = (double)(*pcVar4)();
        return dVar15;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      lVar11 = (longlong)iVar2 * 0x60;
      pFVar9 = pFVar3 + lVar11 + 0x20;
      dVar18 = dVar18 - *(double *)pFVar9;
      dVar19 = dVar19 - *(double *)(pFVar9 + 8);
      uVar8 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      dVar16 = dVar16 - *(double *)(pFVar3 + lVar11 + 0x30);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar19 * dVar19 + dVar18 * dVar18 + dVar16 * dVar16;
      auVar21 = sqrtpd(unaff_XMM6,auVar5);
      dVar18 = auVar21._0_8_;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        dVar15 = (double)(*pcVar4)();
        return dVar15;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar9 = pFVar3 + lVar13 + 0x20;
      dVar19 = *(double *)pFVar9;
      dVar20 = *(double *)(pFVar9 + 8);
      dVar16 = *(double *)(pFVar3 + lVar13 + 0x30);
      uVar8 = 0;
      if (iVar2 < param_2->ArrayNum) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        dVar15 = (double)(*pcVar4)();
        return dVar15;
      }
      pFVar9 = (param_2->AllocatorInstance).Data;
      dVar19 = dVar19 - *(double *)(pFVar9 + lVar11 + 0x20);
      dVar20 = dVar20 - *(double *)(pFVar9 + lVar11 + 0x20 + 8);
    }
    auVar17._0_8_ =
         (dVar16 - *(double *)(pFVar9 + lVar11 + 0x30)) *
         (dVar16 - *(double *)(pFVar9 + lVar11 + 0x30));
    auVar17._8_8_ = 0;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar20 * dVar20 + dVar19 * dVar19 + auVar17._0_8_;
    auVar21 = sqrtpd(auVar17,auVar6);
    dVar16 = __real_3ff0000000000000;
    if (dVar15 <= dVar18) {
      dVar16 = auVar21._0_8_ / dVar18;
    }
  }
  return dVar16;
}

// GetTransformAtChainParam @ 14df40af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
FResolvedBoneChain::GetTransformAtChainParam
          (FResolvedBoneChain *this,TTransform<double> *__return_storage_ptr__,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,double *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  __m128d _Var19;
  __m128d _Var20;
  bool bVar21;
  TTransform<double> *pTVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar38;
  undefined4 uVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  if ((param_1->ArrayNum != (this->Params).ArrayNum) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Transforms.Num() == Params.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                          ,0x2a1,L""), bVar21)) {
    pcVar2 = (code *)swi(3);
    pTVar22 = (TTransform<double> *)(*pcVar2)();
    return pTVar22;
  }
  iVar24 = (this->Params).ArrayNum;
  if ((iVar24 == 1) || (*param_2 < __real_3f1a36e2e0000000)) {
    if ((param_1->ArrayNum < 1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar2 = (code *)swi(3);
      pTVar22 = (TTransform<double> *)(*pcVar2)();
      return pTVar22;
    }
    pFVar27 = (param_1->AllocatorInstance).Data;
    dVar6 = *(double *)(pFVar27 + 8);
    dVar3 = *(double *)(pFVar27 + 0x10);
    dVar11 = *(double *)(pFVar27 + 0x18);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)pFVar27;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar6;
    dVar6 = *(double *)(pFVar27 + 0x20);
    dVar12 = *(double *)(pFVar27 + 0x28);
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar11;
    dVar3 = *(double *)(pFVar27 + 0x30);
    dVar11 = *(double *)(pFVar27 + 0x38);
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar6;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar12;
    dVar6 = *(double *)(pFVar27 + 0x40);
    dVar12 = *(double *)(pFVar27 + 0x48);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar11;
    dVar3 = *(double *)(pFVar27 + 0x50);
    dVar11 = *(double *)(pFVar27 + 0x58);
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar6;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar12;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar11;
  }
  else if (*param_2 <= ___real_3fefff2e48e90000) {
    uVar26 = 1;
    if (1 < iVar24) {
      lVar25 = 4;
      do {
        uVar23 = 0;
        if ((int)uVar26 < (this->Params).ArrayNum) {
          uVar23 = ~uVar26 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar2 = (code *)swi(3);
          pTVar22 = (TTransform<double> *)(*pcVar2)();
          return pTVar22;
        }
        dVar6 = (double)*(float *)((this->Params).AllocatorInstance.Data + lVar25);
        if (*param_2 <= dVar6 && dVar6 != *param_2) {
          uVar28 = ~(uVar26 - 1) >> 0x1f;
          uVar23 = 0;
          if ((int)(uVar26 - 1) < (this->Params).ArrayNum) {
            uVar23 = uVar28;
          }
          if ((uVar23 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar2 = (code *)swi(3);
            pTVar22 = (TTransform<double> *)(*pcVar2)();
            return pTVar22;
          }
          iVar24 = uVar26 - 1;
          dVar3 = (double)*(float *)((this->Params).AllocatorInstance.Data + (longlong)iVar24 * 4);
          uVar23 = 0;
          if (iVar24 < param_1->ArrayNum) {
            uVar23 = uVar28;
          }
          dVar6 = (*param_2 - dVar3) / (dVar6 - dVar3);
          if ((uVar23 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar2 = (code *)swi(3);
            pTVar22 = (TTransform<double> *)(*pcVar2)();
            return pTVar22;
          }
          pFVar27 = (param_1->AllocatorInstance).Data + (longlong)iVar24 * 0x60;
          uVar23 = 0;
          if ((int)uVar26 < param_1->ArrayNum) {
            uVar23 = ~uVar26 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar2 = (code *)swi(3);
            pTVar22 = (TTransform<double> *)(*pcVar2)();
            return pTVar22;
          }
          dVar3 = *(double *)(pFVar27 + 0x20);
          dVar11 = *(double *)(pFVar27 + 0x28);
          dVar12 = *(double *)(pFVar27 + 0x30);
          pFVar1 = (param_1->AllocatorInstance).Data;
          lVar25 = (longlong)(int)uVar26 * 0x60;
          auVar34 = *(undefined1 (*) [16])(pFVar1 + lVar25);
          dVar13 = *(double *)(pFVar1 + lVar25 + 0x20);
          dVar14 = *(double *)(pFVar1 + lVar25 + 0x20 + 8);
          dVar40 = auVar34._8_8_;
          auVar41 = *(undefined1 (*) [16])(pFVar1 + lVar25 + 0x10);
          dVar15 = *(double *)(pFVar1 + lVar25 + 0x30);
          auVar9._4_8_ = dVar40;
          auVar9._0_4_ = auVar41._4_4_;
          auVar32._0_8_ = auVar9._0_8_ << 0x20;
          auVar32._8_4_ = auVar41._8_4_;
          auVar32._12_4_ = auVar41._12_4_;
          if (dVar40 * *(double *)(pFVar27 + 8) + auVar34._0_8_ * *(double *)pFVar27 +
              auVar41._0_8_ * *(double *)(pFVar27 + 0x10) +
              auVar32._8_8_ * *(double *)(pFVar27 + 0x18) < 0.0) {
            uVar38 = (undefined4)__real_bff0000000000000;
            uVar39 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
            dVar31 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^
                                      __xmm_80000000000000008000000000000000._4_4_,
                                      SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000)
            ;
          }
          else {
            uVar38 = (undefined4)__real_3ff0000000000000;
            uVar39 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            dVar31 = dVar6;
          }
          dVar16 = *(double *)(pFVar1 + lVar25 + 0x50);
          dVar31 = (double)CONCAT44(uVar39,uVar38) - dVar31;
          dVar17 = *(double *)(pFVar1 + lVar25 + 0x40);
          dVar18 = *(double *)(pFVar1 + lVar25 + 0x40 + 8);
          dVar4 = dVar31 * *(double *)(pFVar27 + 0x10) + dVar6 * auVar41._0_8_;
          dVar5 = dVar31 * *(double *)(pFVar27 + 0x18) + dVar6 * auVar41._8_8_;
          dVar7 = dVar31 * *(double *)pFVar27 + dVar6 * auVar34._0_8_;
          dVar8 = dVar31 * *(double *)(pFVar27 + 8) + dVar6 * dVar40;
          auVar33._8_4_ = SUB84(dVar5,0);
          auVar33._0_8_ = dVar4;
          auVar33._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          dVar31 = dVar4 * dVar4 + dVar7 * dVar7;
          dVar37 = auVar33._8_8_ * dVar5 + dVar8 * dVar8;
          dVar40 = dVar37 + dVar31;
          dVar31 = dVar31 + dVar37;
          auVar41._8_4_ = SUB84(dVar31,0);
          auVar41._0_8_ = dVar40;
          auVar41._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
          auVar41 = sqrtpd(auVar34,auVar41);
          uVar29 = -(ulonglong)(__real_3e45798ee0000000 <= dVar40);
          uVar30 = -(ulonglong)(__real_3e45798ee0000000 <= dVar31);
          uVar26 = (uint)(uVar29 >> 0x20);
          uVar23 = (uint)(uVar30 >> 0x20);
          auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar41);
          auVar35._0_8_ = uVar29 & (ulonglong)(auVar34._0_8_ * dVar4);
          uVar10 = uVar30 & (ulonglong)(auVar34._8_8_ * dVar5);
          auVar35._8_4_ = (undefined4)uVar10;
          auVar35._12_4_ = (undefined4)(uVar10 >> 0x20);
          auVar42._0_4_ =
               ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar42._4_4_ =
               ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar42._8_4_ =
               ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar42._12_4_ =
               ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          dVar40 = *(double *)(pFVar27 + 0x40);
          dVar31 = *(double *)(pFVar27 + 0x48);
          dVar4 = *(double *)(pFVar27 + 0x50);
          auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar41);
          auVar36._0_8_ = (ulonglong)(auVar34._0_8_ * dVar7) & uVar29;
          uVar10 = (ulonglong)(auVar34._8_8_ * dVar8) & uVar30;
          auVar36._8_4_ = (undefined4)uVar10;
          auVar36._12_4_ = (undefined4)(uVar10 >> 0x20);
          auVar34._4_4_ =
               ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar34._0_4_ =
               ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar34._8_4_ =
               ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar34._12_4_ =
               ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar36 | auVar34;
          *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar42 | auVar35;
          (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (dVar13 - dVar3) * dVar6 + dVar3;
          (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (dVar14 - dVar11) * dVar6 + dVar11
          ;
          (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (dVar15 - dVar12) * dVar6 + dVar12
          ;
          (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
          (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (dVar17 - dVar40) * dVar6 + dVar40;
          (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (dVar18 - dVar31) * dVar6 + dVar31;
          (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (dVar16 - dVar4) * dVar6 + dVar4;
          (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
          return __return_storage_ptr__;
        }
        uVar26 = uVar26 + 1;
        lVar25 = lVar25 + 4;
      } while ((int)uVar26 < (this->Params).ArrayNum);
    }
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                        ,0x2c5,L"");
    _Var19 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
    if (bVar21) {
      pcVar2 = (code *)swi(3);
      pTVar22 = (TTransform<double> *)(*pcVar2)();
      return pTVar22;
    }
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    _Var20 = UE::Math::TTransform<double>::Identity.Translation.XY;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var19.m128d_f64;
    _Var19 = UE::Math::TTransform<double>::Identity.Translation.ZW;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var20.m128d_f64;
    _Var20 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var19.m128d_f64;
    _Var19 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var20.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var19.m128d_f64;
  }
  else {
    uVar23 = param_1->ArrayNum - 1;
    uVar26 = 0;
    if ((int)uVar23 < param_1->ArrayNum) {
      uVar26 = ~uVar23 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar2 = (code *)swi(3);
      pTVar22 = (TTransform<double> *)(*pcVar2)();
      return pTVar22;
    }
    pFVar27 = (param_1->AllocatorInstance).Data;
    lVar25 = (longlong)param_1->ArrayNum * 0x60;
    dVar6 = *(double *)(pFVar27 + lVar25 + -0x60 + 8);
    dVar3 = *(double *)(pFVar27 + lVar25 + -0x50);
    dVar11 = *(double *)(pFVar27 + lVar25 + -0x50 + 8);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(pFVar27 + lVar25 + -0x60);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar6;
    dVar6 = *(double *)(pFVar27 + lVar25 + -0x40);
    dVar12 = *(double *)(pFVar27 + lVar25 + -0x40 + 8);
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar11;
    dVar3 = *(double *)(pFVar27 + lVar25 + -0x30);
    dVar11 = *(double *)(pFVar27 + lVar25 + -0x30 + 8);
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar6;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar12;
    dVar6 = *(double *)(pFVar27 + lVar25 + -0x20);
    dVar12 = *(double *)(pFVar27 + lVar25 + -0x20 + 8);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar11;
    dVar3 = *(double *)(pFVar27 + lVar25 + -0x10);
    dVar11 = *(double *)(pFVar27 + lVar25 + -0x10 + 8);
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar6;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar12;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar11;
  }
  return __return_storage_ptr__;
}

// GetWarnings @ 14df411a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FResolvedBoneChain::GetWarnings
          (FResolvedBoneChain *this,FRetargetSkeleton *param_1,FIKRigLogger *param_2)

{
  FText *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  FName local_res8;
  FString local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  if (this->bFoundStartBone == false) {
    local_res8 = (FName)param_1->SkeletalMesh->_padding_;
    ::FName::ToString(&local_res8,&local_98);
    pFVar1 = FText::FromString(&local_68,&local_98);
    pFVar2 = FText::FromName(&local_58,&this->StartBone);
    pFVar3 = FText::FromName(&local_48,&this->ChainName);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"IKRetargetProcessor",L"MissingStartBone",
                        L"IK Retargeter bone chain, {0}, could not find start bone, {1} in mesh {2}"
                       );
    pFVar5 = FTextFormat::FTextFormat((FTextFormat *)&local_38,pFVar4,Default);
    pFVar1 = FText::Format<FText,FText,FText>(&local_88,pFVar5,pFVar3,pFVar2,pFVar1);
    FIKRigLogger::LogWarning(param_2,pFVar1);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if (this->bFoundEndBone == false) {
    local_res8 = (FName)param_1->SkeletalMesh->_padding_;
    ::FName::ToString(&local_res8,&local_98);
    pFVar1 = FText::FromString(&local_38,&local_98);
    pFVar2 = FText::FromName(&local_48,&this->EndBone);
    pFVar3 = FText::FromName(&local_58,&this->ChainName);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"IKRetargetProcessor",L"MissingEndBone",
                        L"IK Retargeter bone chain, {0}, could not find end bone, {1} in mesh {2}");
    pFVar5 = FTextFormat::FTextFormat((FTextFormat *)&local_68,pFVar4,Default);
    pFVar1 = FText::Format<FText,FText,FText>(&local_78,pFVar5,pFVar3,pFVar2,pFVar1);
    FIKRigLogger::LogWarning(param_2,pFVar1);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if ((this->bFoundEndBone != false) && (this->bEndIsStartOrChildOfStart == false)) {
    pFVar1 = FText::FromName(&local_38,&this->StartBone);
    pFVar2 = FText::FromName(&local_48,&this->EndBone);
    pFVar3 = FText::FromName(&local_58,&this->ChainName);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"IKRetargetProcessor",L"EndNotChildtOfStart",
                        L"IK Retargeter bone chain, {0}, end bone, \'{1}\' was not a child of the start bone \'{2}\'."
                       );
    pFVar5 = FTextFormat::FTextFormat((FTextFormat *)&local_68,pFVar4,Default);
    pFVar1 = FText::Format<FText,FText,FText>(&local_78,pFVar5,pFVar3,pFVar2,pFVar1);
    FIKRigLogger::LogWarning(param_2,pFVar1);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
  if (this->InitialChainLength <= __real_38d1b717) {
    pFVar1 = FText::FromName(&local_38,&this->ChainName);
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"IKRetargetProcessor",L"FailedParamOfChain",
                        L"IK Retargeter bone chain, {0}, was unable to be normalized. Chain too short."
                       );
    pFVar5 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar2,Default);
    pFVar1 = FText::Format<FText>(&local_78,pFVar5,pFVar1);
    FIKRigLogger::LogWarning(param_2,pFVar1);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
  return;
}

// IsValid @ 14df48aa0

bool __thiscall FResolvedBoneChain::IsValid(FResolvedBoneChain *this)

{
  int iVar1;
  
  if ((((this->bFoundStartBone != false) && (this->bFoundEndBone != false)) &&
      (this->bEndIsStartOrChildOfStart != false)) &&
     ((iVar1 = (this->BoneIndices).ArrayNum, iVar1 == (this->RefPoseGlobalTransforms).ArrayNum &&
      (iVar1 == (this->RefPoseLocalTransforms).ArrayNum)))) {
    return true;
  }
  return false;
}

// UpdatePoseFromSkeleton @ 14df5e5b0

void __thiscall
FResolvedBoneChain::UpdatePoseFromSkeleton(FResolvedBoneChain *this,FRetargetSkeleton *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  pTVar10 = FResolvedRetargetPoseSet::GetGlobalRetargetPose(&param_1->RetargetPoses);
  piVar1 = &(this->RefPoseGlobalTransforms).ArrayMax;
  uVar13 = 0;
  (this->RefPoseGlobalTransforms).ArrayNum = 0;
  if ((this->RefPoseGlobalTransforms).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->RefPoseGlobalTransforms).AllocatorInstance,0,piVar1);
  }
  uVar15 = uVar13;
  if (0 < (this->BoneIndices).ArrayNum) {
    do {
      uVar12 = (uint)uVar13;
      uVar7 = 0;
      if ((int)uVar12 < (this->BoneIndices).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = *(int *)((this->BoneIndices).AllocatorInstance.Data + uVar15);
      if ((iVar9 < 0) || (pTVar10->ArrayNum <= iVar9)) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4490890690292613732>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                           ,0x264,"GlobalRetargetPose.IsValidIndex(BoneIndex)");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = (this->RefPoseGlobalTransforms).ArrayNum;
        pFVar14 = (pTVar10->AllocatorInstance).Data + (longlong)iVar9 * 0x60;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1060,&(this->RefPoseGlobalTransforms).AllocatorInstance,piVar1);
        }
        (this->RefPoseGlobalTransforms).ArrayNum = iVar8 + 1;
        uVar4 = *(undefined8 *)(pFVar14 + 8);
        pFVar2 = (this->RefPoseGlobalTransforms).AllocatorInstance.Data;
        lVar11 = (longlong)iVar8 * 0x60;
        *(undefined8 *)(pFVar2 + lVar11) = *(undefined8 *)pFVar14;
        *(undefined8 *)(pFVar2 + lVar11 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar14 + 0x18);
        *(undefined8 *)(pFVar2 + lVar11 + 0x10) = *(undefined8 *)(pFVar14 + 0x10);
        *(undefined8 *)(pFVar2 + lVar11 + 0x10 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar14 + 0x28);
        *(undefined8 *)(pFVar2 + lVar11 + 0x20) = *(undefined8 *)(pFVar14 + 0x20);
        *(undefined8 *)(pFVar2 + lVar11 + 0x20 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar14 + 0x38);
        *(undefined8 *)(pFVar2 + lVar11 + 0x30) = *(undefined8 *)(pFVar14 + 0x30);
        *(undefined8 *)(pFVar2 + lVar11 + 0x30 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar14 + 0x48);
        *(undefined8 *)(pFVar2 + lVar11 + 0x40) = *(undefined8 *)(pFVar14 + 0x40);
        *(undefined8 *)(pFVar2 + lVar11 + 0x40 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar14 + 0x58);
        *(undefined8 *)(pFVar2 + lVar11 + 0x50) = *(undefined8 *)(pFVar14 + 0x50);
        *(undefined8 *)(pFVar2 + lVar11 + 0x50 + 8) = uVar4;
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar15 = uVar15 + 4;
    } while ((int)(uVar12 + 1) < (this->BoneIndices).ArrayNum);
  }
  iVar9 = (this->RefPoseLocalTransforms).ArrayNum;
  piVar1 = &(this->RefPoseLocalTransforms).ArrayNum;
  uVar7 = (this->RefPoseGlobalTransforms).ArrayNum;
  if (iVar9 < (int)uVar7) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,uVar7 - iVar9,&(this->RefPoseLocalTransforms).AllocatorInstance,
                       piVar1,&(this->RefPoseLocalTransforms).ArrayMax);
    DefaultConstructItems<UE::Math::TTransform<double>,int>
              ((this->RefPoseLocalTransforms).AllocatorInstance.Data + (longlong)iVar8 * 0x60,
               uVar7 - iVar9);
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar9) {
      uVar12 = iVar9 - uVar7;
      if (((int)(uVar12 | uVar7) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar12 != 0) {
        pFVar14 = (this->RefPoseLocalTransforms).AllocatorInstance.Data +
                  (longlong)(int)uVar7 * 0x60;
        iVar9 = (*piVar1 - uVar7) - uVar12;
        if (iVar9 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar12 * 0x60,(longlong)iVar9 * 0x60);
        }
        *piVar1 = *piVar1 - uVar12;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,&(this->RefPoseLocalTransforms).AllocatorInstance,*piVar1,
                   &(this->RefPoseLocalTransforms).ArrayMax);
      }
    }
  }
  FillTransformsWithLocalSpaceOfChain
            (param_1,pTVar10,&this->BoneIndices,&this->RefPoseLocalTransforms);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurrentLocalTransforms,&this->RefPoseLocalTransforms);
  if (((this->BoneIndices).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar9 = *(int *)(this->BoneIndices).AllocatorInstance.Data;
  if ((iVar9 < 0) || ((param_1->ParentIndices).ArrayNum <= iVar9)) {
    this->ChainParentBoneIndex = -1;
    *&(this->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(this->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(this->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(this->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(this->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    uVar16 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar17 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar18 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar19 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  else {
    if ((iVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar7 = *(uint *)((param_1->ParentIndices).AllocatorInstance.Data + (longlong)iVar9 * 4);
    this->ChainParentBoneIndex = uVar7;
    *&(this->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(this->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(this->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(this->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(this->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(this->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    if (uVar7 == 0xffffffff) {
      return;
    }
    uVar12 = 0;
    if ((int)uVar7 < pTVar10->ArrayNum) {
      uVar12 = ~uVar7 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar14 = (pTVar10->AllocatorInstance).Data;
    lVar11 = (longlong)(int)uVar7 * 0x60;
    dVar5 = *(double *)(pFVar14 + lVar11 + 8);
    (this->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0] =
         *(double *)(pFVar14 + lVar11);
    (this->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[1] = dVar5;
    dVar5 = *(double *)(pFVar14 + lVar11 + 0x10 + 8);
    (this->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0] =
         *(double *)(pFVar14 + lVar11 + 0x10);
    (this->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[1] = dVar5;
    dVar5 = *(double *)(pFVar14 + lVar11 + 0x20 + 8);
    (this->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0] =
         *(double *)(pFVar14 + lVar11 + 0x20);
    (this->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[1] = dVar5;
    dVar5 = *(double *)(pFVar14 + lVar11 + 0x30 + 8);
    (this->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0] =
         *(double *)(pFVar14 + lVar11 + 0x30);
    (this->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[1] = dVar5;
    dVar5 = *(double *)(pFVar14 + lVar11 + 0x40 + 8);
    (this->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0] =
         *(double *)(pFVar14 + lVar11 + 0x40);
    (this->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[1] = dVar5;
    pFVar14 = pFVar14 + lVar11 + 0x50;
    uVar16 = *(undefined4 *)pFVar14;
    uVar17 = *(undefined4 *)(pFVar14 + 4);
    uVar18 = *(undefined4 *)(pFVar14 + 8);
    uVar19 = *(undefined4 *)(pFVar14 + 0xc);
  }
  *(undefined4 *)(this->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64 = uVar16;
  *(undefined4 *)((longlong)(this->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64 + 4) =
       uVar17;
  *(undefined4 *)((this->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64 + 1) = uVar18;
  *(undefined4 *)((longlong)(this->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64 + 0xc) =
       uVar19;
  return;
}

