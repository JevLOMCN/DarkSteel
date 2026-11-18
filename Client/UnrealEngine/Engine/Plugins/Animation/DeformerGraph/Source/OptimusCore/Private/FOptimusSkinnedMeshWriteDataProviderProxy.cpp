// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// AllocateResources @ 14e17dd40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FOptimusSkinnedMeshWriteDataProviderProxy::AllocateResources
          (FOptimusSkinnedMeshWriteDataProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  code *pcVar1;
  int iVar2;
  FRDGBufferUAV *pFVar3;
  FRDGBufferUAVDesc *pFVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  FRDGBufferUAVDesc local_88;
  FRDGBufferUAVDesc local_78;
  FRDGBufferUAVDesc local_68;
  FRDGBufferUAVDesc local_58;
  FRDGBufferUAVDesc local_48;
  FRDGBufferUAVDesc local_38;
  
  iVar2 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  bVar7 = iVar2 != *this->LastLodIndexPtr;
  if (bVar7) {
    *this->LastLodIndexPtr = iVar2;
  }
  bVar8 = (this->OutputMask & 1) == 0;
  if (bVar8) {
    local_78._padding_._0_2_ = 0xd;
    local_78._padding_._2_1_ = 0;
    local_78.Buffer =
         FRDGBuilder::RegisterExternalBuffer(param_1,&GWhiteVertexBufferWithRDG->Buffer,None);
    pFVar4 = &local_78;
  }
  else {
    local_88.Buffer =
         FSkeletalMeshDeformerHelpers::AllocateVertexFactoryPositionBuffer
                   (param_1,param_2->ExternalAccessQueue,this->SkeletalMeshObject,iVar2,
                    L"OptimusSkinnedMeshPosition");
    this->PositionBuffer = local_88.Buffer;
    pFVar4 = &local_88;
    local_88._padding_._0_2_ = 0xd;
    local_88._padding_._2_1_ = 0;
  }
  pFVar3 = FRDGBuilder::CreateUAV(param_1,pFVar4,!bVar8);
  this->PositionBufferUAV = pFVar3;
  uVar5 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].bContainsValidPlatformInfo == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xc1,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar6 = 0x3f;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].Language == LANGUAGE_OpenGL) {
    uVar6 = 0x23;
  }
  bVar8 = (this->OutputMask & 6) != 0;
  if (bVar8) {
    local_58.Buffer =
         FSkeletalMeshDeformerHelpers::AllocateVertexFactoryTangentBuffer
                   (param_1,param_2->ExternalAccessQueue,this->SkeletalMeshObject,iVar2,
                    L"OptimusSkinnedMeshTangent");
    this->TangentBuffer = local_58.Buffer;
    pFVar4 = &local_58;
    local_58._padding_._1_2_ = 0;
    local_58._padding_._0_1_ = uVar6;
  }
  else {
    local_68._padding_._1_2_ = 0;
    local_68._padding_._0_1_ = uVar6;
    local_68.Buffer =
         FRDGBuilder::RegisterExternalBuffer(param_1,&GWhiteVertexBufferWithRDG->Buffer,None);
    pFVar4 = &local_68;
  }
  pFVar3 = FRDGBuilder::CreateUAV(param_1,pFVar4,bVar8);
  this->TangentBufferUAV = pFVar3;
  bVar8 = (this->OutputMask & 8) == 0;
  if (bVar8) {
    local_38._padding_._0_2_ = 1;
    local_38._padding_._2_1_ = 0;
    local_38.Buffer =
         FRDGBuilder::RegisterExternalBuffer(param_1,&GWhiteVertexBufferWithRDG->Buffer,None);
    pFVar4 = &local_38;
  }
  else {
    local_48.Buffer =
         FSkeletalMeshDeformerHelpers::AllocateVertexFactoryColorBuffer
                   (param_1,param_2->ExternalAccessQueue,this->SkeletalMeshObject,iVar2,
                    L"OptimusSkinnedMeshColor");
    this->ColorBuffer = local_48.Buffer;
    pFVar4 = &local_48;
    local_48._padding_._0_2_ = 0x25;
    local_48._padding_._2_1_ = 0;
  }
  pFVar3 = FRDGBuilder::CreateUAV(param_1,pFVar4,!bVar8);
  this->ColorBufferUAV = pFVar3;
  FSkeletalMeshDeformerHelpers::UpdateVertexFactoryBufferOverrides
            (param_1,this->SkeletalMeshObject,iVar2,bVar7);
  return;
}

// GatherDispatchData @ 14e1b56e0

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
FOptimusSkinnedMeshWriteDataProviderProxy::GatherDispatchData
          (FOptimusSkinnedMeshWriteDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FSkeletalMeshRenderData *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uchar *puVar9;
  uint uVar10;
  
  uVar8 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  pFVar4 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar10 = 0;
  if ((int)uVar8 < (pFVar4->LODRenderData).Array.ArrayNum) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar1 = param_1->ParameterBufferOffset;
  puVar9 = param_1->ParameterBuffer;
  iVar2 = param_1->NumInvocations;
  lVar5 = *(longlong *)
           ((pFVar4->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
  iVar3 = param_1->ParameterBufferStride;
  if ((iVar2 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((iVar3 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((((longlong)iVar3 & 0xfU) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = 0;
  if (0 < iVar2) {
    puVar9 = puVar9 + (longlong)iVar1 + 0x10;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)(lVar5 + 0x18)) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar10 = uVar10 + 1;
      *(undefined4 *)(puVar9 + -0x10) = *(undefined4 *)(lVar5 + 300);
      *(FRDGBufferUAV **)(puVar9 + -8) = this->PositionBufferUAV;
      *(FRDGBufferUAV **)puVar9 = this->TangentBufferUAV;
      *(FRDGBufferUAV **)(puVar9 + 8) = this->ColorBufferUAV;
      puVar9 = puVar9 + iVar3;
    } while ((int)uVar10 < iVar2);
  }
  return;
}

// GetReadbackData @ 14e1db720

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
FOptimusSkinnedMeshWriteDataProviderProxy::GetReadbackData
          (FOptimusSkinnedMeshWriteDataProviderProxy *this,
          TArray<FComputeDataProviderRenderProxy::FReadbackData,TSizedDefaultAllocator<32>_>
          *param_1)

{
  return;
}

// IsValid @ 14e1f0c60

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
FOptimusSkinnedMeshWriteDataProviderProxy::IsValid
          (FOptimusSkinnedMeshWriteDataProviderProxy *this,FValidationData *param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_1->ParameterStructSize == 0x20) &&
     (this->SkeletalMeshObject != (FSkeletalMeshObject *)0x0)) {
    cVar3 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0x40))();
    if (cVar3 == '\0') {
      iVar6 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
      iVar6 = FSkeletalMeshDeformerHelpers::GetIndexOfFirstAvailableSection
                        (this->SkeletalMeshObject,iVar6);
      if (iVar6 != -1) {
        uVar7 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
        pFVar1 = this->SkeletalMeshObject->SkeletalMeshRenderData;
        uVar8 = 0;
        if ((int)uVar7 < (pFVar1->LODRenderData).Array.ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
        }
        return *(int *)(*(longlong *)
                         ((pFVar1->LODRenderData).Array.AllocatorInstance.Data +
                         (longlong)(int)uVar7 * 8) + 0x18) == param_1->NumInvocations;
      }
    }
  }
  return false;
}

