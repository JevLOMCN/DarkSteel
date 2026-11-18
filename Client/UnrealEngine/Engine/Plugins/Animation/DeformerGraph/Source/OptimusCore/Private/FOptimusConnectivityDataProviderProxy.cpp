// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusConnectivityDataProviderProxy @ 14e150f00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FOptimusConnectivityDataProviderProxy * __thiscall
FOptimusConnectivityDataProviderProxy::FOptimusConnectivityDataProviderProxy
          (FOptimusConnectivityDataProviderProxy *this,USkinnedMeshComponent *param_1,
          TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  this->_padding_ = (longlong)&___7FOptimusConnectivityDataProviderProxy__6B_;
  if (param_1 != (USkinnedMeshComponent *)0x0) {
    this->SkeletalMeshObject = param_1->MeshObject;
    this->AdjacencyBufferPerLod = param_2;
    this->ConnectivityBuffer = (FRDGBuffer *)0x0;
    this->ConnectivityBufferSRV = (FRDGBufferSRV *)0x0;
    return this;
  }
  this->AdjacencyBufferPerLod = param_2;
  this->SkeletalMeshObject = (FSkeletalMeshObject *)0x0;
  this->ConnectivityBuffer = (FRDGBuffer *)0x0;
  this->ConnectivityBufferSRV = (FRDGBufferSRV *)0x0;
  return this;
}

// AllocateResources @ 14e17bda0

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

void __thiscall
FOptimusConnectivityDataProviderProxy::AllocateResources
          (FOptimusConnectivityDataProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2
          )

{
  TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FRDGBufferSRV *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FRDGBufferSRVDesc local_48;
  FRDGBufferDesc local_28;
  
  uVar5 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  pTVar1 = this->AdjacencyBufferPerLod;
  uVar7 = 0;
  if ((int)uVar5 < pTVar1->ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10;
  local_48._padding_._0_4_ = 0x10109;
  local_48._padding_._0_4_ = 4;
  local_48._padding_ = 0;
  local_48._padding_._4_4_ = *(uint *)(pFVar8 + 8);
  local_28.NumElements = local_48._padding_._4_4_;
  local_28.BytesPerElement = 4;
  local_28._12_4_ = local_48._padding_._4_4_;
  local_28.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_28.Metadata = (FShaderParametersMetadata *)0x0;
  local_48.Buffer = FRDGBuilder::CreateBuffer(param_1,&local_28,L"Optimus.Connectivity",None);
  this->ConnectivityBuffer = local_48.Buffer;
  local_48._padding_._4_4_ = 0;
  local_48._padding_._0_4_ = 0xffffffff;
  local_48._padding_ = 0;
  uVar4 = 0;
  if ((((local_48.Buffer)->Desc).Usage & DrawIndirect) != None) {
    uVar4 = 0x1c;
  }
  local_48._padding_._0_4_ = CONCAT31((int3)((uint)(undefined4)local_48._padding_ >> 8),uVar4);
  pFVar6 = FRDGBuilder::CreateSRV(param_1,&local_48);
  this->ConnectivityBufferSRV = pFVar6;
  FRDGBuilder::QueueBufferUpload
            (param_1,this->ConnectivityBuffer,*(void **)pFVar8,(longlong)*(int *)(pFVar8 + 8) << 2,
             None);
  return;
}

// GatherDispatchData @ 14e1b3650

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
FOptimusConnectivityDataProviderProxy::GatherDispatchData
          (FOptimusConnectivityDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FSkeletalMeshRenderData *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uchar *puVar10;
  int iVar11;
  
  uVar8 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  iVar11 = 0;
  pFVar4 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar9 = 0;
  if ((int)uVar8 < (pFVar4->LODRenderData).Array.ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
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
  puVar10 = param_1->ParameterBuffer;
  lVar5 = *(longlong *)
           ((pFVar4->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
  iVar2 = param_1->ParameterBufferStride;
  iVar3 = param_1->NumInvocations;
  if ((iVar3 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((iVar2 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((((longlong)iVar2 & 0xfU) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (0 < iVar3) {
    puVar10 = puVar10 + (longlong)iVar1 + 8;
    do {
      if ((iVar11 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = iVar11 + 1;
      *(undefined4 *)(puVar10 + -8) = *(undefined4 *)(lVar5 + 300);
      puVar10[-4] = '\f';
      puVar10[-3] = '\0';
      puVar10[-2] = '\0';
      puVar10[-1] = '\0';
      *(FRDGBufferSRV **)puVar10 = this->ConnectivityBufferSRV;
      puVar10 = puVar10 + iVar2;
    } while (iVar11 < iVar3);
  }
  return;
}

// IsValid @ 14e1f0590

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
FOptimusConnectivityDataProviderProxy::IsValid
          (FOptimusConnectivityDataProviderProxy *this,FValidationData *param_1)

{
  if ((param_1->ParameterStructSize == 0x10) &&
     (this->SkeletalMeshObject != (FSkeletalMeshObject *)0x0)) {
    return this->AdjacencyBufferPerLod->ArrayNum != 0;
  }
  return false;
}

