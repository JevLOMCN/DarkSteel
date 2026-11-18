// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// FOptimusSkinnedMeshVertexAttributeDataProviderProxy @ 14e1568c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FOptimusSkinnedMeshVertexAttributeDataProviderProxy * __thiscall
FOptimusSkinnedMeshVertexAttributeDataProviderProxy::
FOptimusSkinnedMeshVertexAttributeDataProviderProxy
          (FOptimusSkinnedMeshVertexAttributeDataProviderProxy *this,USkinnedMeshComponent *param_1,
          FName param_2,float param_3)

{
  FSkeletalMeshObject *pFVar1;
  
  this->_padding_ = (longlong)&___7FOptimusSkinnedMeshVertexAttributeDataProviderProxy__6B_;
  pFVar1 = (FSkeletalMeshObject *)0x0;
  (this->AttributeName).ComparisonIndex = 0;
  (this->AttributeName).Number = 0;
  if (param_1 != (USkinnedMeshComponent *)0x0) {
    pFVar1 = param_1->MeshObject;
  }
  this->SkeletalMeshObject = pFVar1;
  this->DefaultValue = param_3;
  this->AttributeName = param_2;
  return this;
}

// GatherDispatchData @ 14e1b54f0

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
FOptimusSkinnedMeshVertexAttributeDataProviderProxy::GatherDispatchData
          (FOptimusSkinnedMeshVertexAttributeDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FSkeletalMeshRenderData *pFVar4;
  longlong lVar5;
  uchar *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FSkeletalMeshAttributeVertexBuffer *pFVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  FRHIShaderResourceView *pFVar14;
  
  uVar9 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  iVar13 = 0;
  pFVar4 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar11 = 0;
  if ((int)uVar9 < (pFVar4->LODRenderData).Array.ArrayNum) {
    uVar11 = ~uVar9 >> 0x1f;
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
  lVar5 = *(longlong *)
           ((pFVar4->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
  iVar1 = param_1->ParameterBufferOffset;
  puVar6 = param_1->ParameterBuffer;
  iVar2 = param_1->ParameterBufferStride;
  iVar3 = param_1->NumInvocations;
  if ((iVar3 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((iVar2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((((longlong)iVar2 & 0xfU) != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar14 = (GWhiteVertexBufferWithSRV->ShaderResourceViewRHI).Reference;
  pFVar10 = FSkeletalMeshVertexAttributeRenderData::GetAttributeBuffer
                      ((FSkeletalMeshVertexAttributeRenderData *)(lVar5 + 0x438),this->AttributeName
                      );
  if (pFVar10 != (FSkeletalMeshAttributeVertexBuffer *)0x0) {
    pFVar14 = (pFVar10->ValueBuffer).VertexBufferSRV.Reference;
  }
  if (0 < iVar3) {
    puVar12 = (uint *)(puVar6 + (longlong)iVar1 + 4);
    do {
      if ((iVar13 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar13 = iVar13 + 1;
      puVar12[-1] = *(uint *)(lVar5 + 300);
      *(FRHIShaderResourceView **)(puVar12 + 3) = pFVar14;
      *puVar12 = (uint)(pFVar10 != (FSkeletalMeshAttributeVertexBuffer *)0x0);
      puVar12[1] = (uint)this->DefaultValue;
      puVar12 = (uint *)((longlong)puVar12 + (longlong)iVar2);
    } while (iVar13 < iVar3);
  }
  return;
}

// IsValid @ 14e1f0c40

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
FOptimusSkinnedMeshVertexAttributeDataProviderProxy::IsValid
          (FOptimusSkinnedMeshVertexAttributeDataProviderProxy *this,FValidationData *param_1)

{
  if (param_1->ParameterStructSize == 0x20) {
    return this->SkeletalMeshObject != (FSkeletalMeshObject *)0x0;
  }
  return false;
}

