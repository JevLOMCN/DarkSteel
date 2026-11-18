// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusSkeletonDataProviderProxy @ 14e156770

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FOptimusSkeletonDataProviderProxy * __thiscall
FOptimusSkeletonDataProviderProxy::FOptimusSkeletonDataProviderProxy
          (FOptimusSkeletonDataProviderProxy *this,USkinnedMeshComponent *param_1)

{
  USkinnedMeshComponent *pUVar1;
  
  this->_padding_ = (longlong)&___7FOptimusSkeletonDataProviderProxy__6B_;
  this->BoneRevisionNumber = 0;
  if (param_1 != (USkinnedMeshComponent *)0x0) {
    this->SkeletalMeshObject = param_1->MeshObject;
    pUVar1 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&(param_1->LeaderPoseComponent).WeakPtr);
    if (pUVar1 != (USkinnedMeshComponent *)0x0) {
      param_1 = pUVar1;
    }
    this->BoneRevisionNumber = param_1->CurrentBoneTransformRevisionNumber;
    return this;
  }
  this->SkeletalMeshObject = (FSkeletalMeshObject *)0x0;
  this->BoneRevisionNumber = 0;
  return this;
}

// GatherDispatchData @ 14e1b4a00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FOptimusSkeletonDataProviderProxy::GatherDispatchData
          (FOptimusSkeletonDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FSkeletalMeshRenderData *pFVar4;
  longlong lVar5;
  FRHIShaderResourceView *pFVar6;
  uchar *puVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  GPUSkinBoneInfluenceType GVar11;
  FRHIShaderResourceView *pFVar12;
  FRHIShaderResourceView *pFVar13;
  FRHIShaderResourceView *pFVar14;
  FRHIShaderResourceView *pFVar15;
  uint uVar16;
  FSkinWeightVertexBuffer *this_00;
  int *piVar17;
  int iVar18;
  
  uVar10 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  pFVar4 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar16 = 0;
  if ((int)uVar10 < (pFVar4->LODRenderData).Array.ArrayNum) {
    uVar16 = ~uVar10 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar5 = *(longlong *)
           ((pFVar4->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  pFVar6 = (GWhiteVertexBufferWithSRV->ShaderResourceViewRHI).Reference;
  this_00 = *(FSkinWeightVertexBuffer **)(lVar5 + 0x330);
  if (*(FSkinWeightVertexBuffer **)(lVar5 + 0x330) == (FSkinWeightVertexBuffer *)0x0) {
    this_00 = (FSkinWeightVertexBuffer *)(lVar5 + 0x188);
  }
  if ((this_00 == (FSkinWeightVertexBuffer *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("WeightBuffer != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceSkeleton.cpp"
                         ,0xe2,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar13 = (this_00->DataVertexBuffer).SRVValue.Reference;
  GVar11 = FSkinWeightVertexBuffer::GetBoneInfluenceType(this_00);
  if (GVar11 == UnlimitedBoneInfluence) {
    pFVar14 = (this_00->LookupVertexBuffer).SRVValue.Reference;
  }
  else {
    pFVar14 = (FRHIShaderResourceView *)0x0;
  }
  iVar1 = param_1->ParameterBufferOffset;
  puVar7 = param_1->ParameterBuffer;
  iVar2 = param_1->NumInvocations;
  iVar3 = param_1->ParameterBufferStride;
  if ((iVar2 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((iVar3 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((((longlong)iVar3 & 0xfU) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar18 = 0;
  if (0 < iVar2) {
    piVar17 = (int *)(puVar7 + (longlong)iVar1 + 8);
    pFVar12 = pFVar6;
    if (pFVar13 != (FRHIShaderResourceView *)0x0) {
      pFVar12 = pFVar13;
    }
    pFVar13 = pFVar6;
    if (pFVar14 != (FRHIShaderResourceView *)0x0) {
      pFVar13 = pFVar14;
    }
    do {
      pFVar14 = FSkeletalMeshDeformerHelpers::GetBoneBufferForReading
                          (this->SkeletalMeshObject,uVar10,iVar18,false);
      if ((iVar18 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      piVar17[-2] = *(int *)(lVar5 + 300);
      piVar17[-1] = (this_00->DataVertexBuffer).MaxBoneInfluences;
      *piVar17 = ((uint)((this_00->DataVertexBuffer).bUse16BitBoneWeight != false) +
                 ((this_00->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) *
                 (this_00->DataVertexBuffer).MaxBoneInfluences;
      uVar16 = 0x100;
      if ((this_00->DataVertexBuffer).bUse16BitBoneWeight != false) {
        uVar16 = 0x200;
      }
      piVar17[1] = uVar16 | ((this_00->DataVertexBuffer).bUse16BitBoneIndex != false) + 1;
      pFVar15 = pFVar6;
      if (pFVar14 != (FRHIShaderResourceView *)0x0) {
        pFVar15 = pFVar14;
      }
      iVar18 = iVar18 + 1;
      *(FRHIShaderResourceView **)(piVar17 + 2) = pFVar15;
      *(FRHIShaderResourceView **)(piVar17 + 4) = pFVar12;
      *(FRHIShaderResourceView **)(piVar17 + 6) = pFVar13;
      piVar17 = (int *)((longlong)piVar17 + (longlong)iVar3);
    } while (iVar18 < iVar2);
  }
  return;
}

// GatherPermutations @ 14e1b64f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FOptimusSkeletonDataProviderProxy::GatherPermutations
          (FOptimusSkeletonDataProviderProxy *this,FPermutationData *param_1)

{
  bool bVar1;
  bool bVar2;
  FSkeletalMeshRenderData *pFVar3;
  longlong lVar4;
  FRHIShaderResourceView *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  GPUSkinBoneInfluenceType GVar12;
  FRHIShaderResourceView *pFVar13;
  FRHIShaderResourceView *pFVar14;
  FSkinWeightVertexBuffer *this_00;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong local_res18;
  FSkeletonDataInterfacePermutationIds local_58;
  
  uVar10 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  uVar15 = (ulonglong)(int)uVar10;
  pFVar3 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar17 = 0;
  if ((int)uVar10 < (pFVar3->LODRenderData).Array.ArrayNum) {
    uVar17 = ~uVar10 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar4 = *(longlong *)((pFVar3->LODRenderData).Array.AllocatorInstance.Data + uVar15 * 8);
  FSkeletonDataInterfacePermutationIds::FSkeletonDataInterfacePermutationIds
            (&local_58,param_1->PermutationVector);
  uVar17 = 0;
  if (0 < param_1->NumInvocations) {
    lVar18 = 0;
    local_res18 = 0;
    do {
      uVar16 = ~uVar17 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar17 < *(int *)(lVar4 + 0x18)) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar13 = FSkeletalMeshDeformerHelpers::GetBoneBufferForReading
                          (this->SkeletalMeshObject,(int)uVar15,uVar17,false);
      this_00 = *(FSkinWeightVertexBuffer **)(lVar4 + 0x330);
      if (*(FSkinWeightVertexBuffer **)(lVar4 + 0x330) == (FSkinWeightVertexBuffer *)0x0) {
        this_00 = (FSkinWeightVertexBuffer *)(lVar4 + 0x188);
      }
      if ((this_00 == (FSkinWeightVertexBuffer *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("WeightBuffer != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceSkeleton.cpp"
                             ,0xca,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this_00->DataVertexBuffer).SRVValue.Reference;
      GVar12 = FSkinWeightVertexBuffer::GetBoneInfluenceType(this_00);
      if (GVar12 == UnlimitedBoneInfluence) {
        pFVar14 = (this_00->LookupVertexBuffer).SRVValue.Reference;
      }
      else {
        pFVar14 = (FRHIShaderResourceView *)0x0;
      }
      if (((pFVar13 == (FRHIShaderResourceView *)0x0) || (pFVar5 == (FRHIShaderResourceView *)0x0))
         || ((GVar12 == UnlimitedBoneInfluence && (pFVar14 == (FRHIShaderResourceView *)0x0)))) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      bVar1 = (this_00->DataVertexBuffer).bUse16BitBoneIndex;
      bVar2 = (this_00->DataVertexBuffer).bUse16BitBoneWeight;
      uVar11 = 0;
      if ((int)uVar17 < (param_1->PermutationIds).ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_1->PermutationIds).AllocatorInstance.Data;
      uVar11 = 0;
      if (bVar8) {
        uVar11 = local_58.EnableDeformerBones;
      }
      *(uint *)(pFVar6 + lVar18 * 4) = uVar11 | *(uint *)(pFVar6 + local_res18);
      uVar11 = 0;
      if ((int)uVar17 < (param_1->PermutationIds).ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_1->PermutationIds).AllocatorInstance.Data + lVar18 * 4;
      uVar11 = 0;
      if (GVar12 == UnlimitedBoneInfluence) {
        uVar11 = local_58.UnlimitedBoneInfluence;
      }
      *(uint *)pFVar6 = *(uint *)pFVar6 | uVar11;
      uVar11 = 0;
      if ((int)uVar17 < (param_1->PermutationIds).ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_1->PermutationIds).AllocatorInstance.Data + lVar18 * 4;
      uVar11 = 0;
      if (bVar1 != false) {
        uVar11 = local_58.BoneIndexUint16;
      }
      *(uint *)pFVar6 = *(uint *)pFVar6 | uVar11;
      uVar11 = 0;
      if ((int)uVar17 < (param_1->PermutationIds).ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_1->PermutationIds).AllocatorInstance.Data + lVar18 * 4;
      uVar11 = 0;
      if (bVar2 != false) {
        uVar11 = local_58.BoneWeightsUint16;
      }
      uVar17 = uVar17 + 1;
      *(uint *)pFVar6 = *(uint *)pFVar6 | uVar11;
      local_res18 = local_res18 + 4;
      lVar18 = lVar18 + 1;
      uVar15 = (ulonglong)uVar10;
    } while ((int)uVar17 < param_1->NumInvocations);
  }
  return;
}

// IsValid @ 14e1f0940

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FOptimusSkeletonDataProviderProxy::IsValid
          (FOptimusSkeletonDataProviderProxy *this,FValidationData *param_1)

{
  FSkeletalMeshObject *pFVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_1->ParameterStructSize == 0x30) &&
     (pFVar1 = this->SkeletalMeshObject, pFVar1 != (FSkeletalMeshObject *)0x0)) {
    pFVar2 = pFVar1->SkeletalMeshRenderData;
    uVar6 = (**(code **)(pFVar1->_padding_ + 0xa0))();
    uVar7 = 0;
    if ((int)uVar6 < (pFVar2->LODRenderData).Array.ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    return *(int *)(*(longlong *)
                     ((pFVar2->LODRenderData).Array.AllocatorInstance.Data +
                     (longlong)(int)uVar6 * 8) + 0x18) == param_1->NumInvocations;
  }
  return false;
}

