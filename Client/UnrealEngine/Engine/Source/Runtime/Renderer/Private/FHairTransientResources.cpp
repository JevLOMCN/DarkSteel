// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// operator= @ 14499f980

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FHairTransientResources * __thiscall
FHairTransientResources::operator=(FHairTransientResources *this,FHairTransientResources *param_1)

{
  TArray<UE::Math::TIntVector2<unsigned_int>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TIntVector2<unsigned_int>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FCachedGeometry,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FCachedGeometry,TSizedDefaultAllocator<32>_> *pTVar4;
  ForElementType<unsigned_int> FVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  
  if (this != param_1) {
    if ((param_1->bIsGroupAABBValid).AllocatorInstance.SecondaryData ==
        (ForElementType<unsigned_int>)0x0) {
      memmove(this,param_1,0x10);
    }
    FVar5 = (this->bIsGroupAABBValid).AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    (this->bIsGroupAABBValid).AllocatorInstance.SecondaryData =
         (param_1->bIsGroupAABBValid).AllocatorInstance.SecondaryData;
    (param_1->bIsGroupAABBValid).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
    ;
    (this->bIsGroupAABBValid).NumBits = (param_1->bIsGroupAABBValid).NumBits;
    (this->bIsGroupAABBValid).MaxBits = (param_1->bIsGroupAABBValid).MaxBits;
    (param_1->bIsGroupAABBValid).NumBits = 0;
    (param_1->bIsGroupAABBValid).MaxBits = 0;
  }
  pTVar1 = &param_1->ClusterAABBOffetAndCounts;
  this->GroupAABBBuffer = param_1->GroupAABBBuffer;
  pTVar2 = &this->ClusterAABBOffetAndCounts;
  this->GroupAABBSRV = param_1->GroupAABBSRV;
  dVar7 = (param_1->TranslatedWorldOffsetView0).field0_0x0._s_0.Y;
  (this->TranslatedWorldOffsetView0).field0_0x0._s_0.X =
       (param_1->TranslatedWorldOffsetView0).field0_0x0._s_0.X;
  (this->TranslatedWorldOffsetView0).field0_0x0._s_0.Y = dVar7;
  (this->TranslatedWorldOffsetView0).field0_0x0._s_0.Z =
       (param_1->TranslatedWorldOffsetView0).field0_0x0._s_0.Z;
  if (pTVar2 != pTVar1) {
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ClusterAABBOffetAndCounts).ArrayNum = (param_1->ClusterAABBOffetAndCounts).ArrayNum;
    (this->ClusterAABBOffetAndCounts).ArrayMax = (param_1->ClusterAABBOffetAndCounts).ArrayMax;
    (param_1->ClusterAABBOffetAndCounts).ArrayNum = 0;
    (param_1->ClusterAABBOffetAndCounts).ArrayMax = 0;
  }
  pTVar3 = &param_1->SimMeshDatas;
  this->ClusterAABBBuffer = param_1->ClusterAABBBuffer;
  pTVar4 = &this->SimMeshDatas;
  this->ClusterAABBSRV = param_1->ClusterAABBSRV;
  this->IndirectDispatchArgsBuffer = param_1->IndirectDispatchArgsBuffer;
  this->IndirectDispatchArgsSRV = param_1->IndirectDispatchArgsSRV;
  if (pTVar4 != pTVar3) {
    DestructItems<FCachedGeometry,int>
              ((FCachedGeometry *)(pTVar4->AllocatorInstance).Data,(this->SimMeshDatas).ArrayNum);
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SimMeshDatas).ArrayNum = (param_1->SimMeshDatas).ArrayNum;
    (this->SimMeshDatas).ArrayMax = (param_1->SimMeshDatas).ArrayMax;
    (param_1->SimMeshDatas).ArrayNum = 0;
    (param_1->SimMeshDatas).ArrayMax = 0;
  }
  pTVar3 = &param_1->RenMeshDatas;
  pTVar4 = &this->RenMeshDatas;
  if (pTVar4 != pTVar3) {
    DestructItems<FCachedGeometry,int>
              ((FCachedGeometry *)(pTVar4->AllocatorInstance).Data,(this->RenMeshDatas).ArrayNum);
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RenMeshDatas).ArrayNum = (param_1->RenMeshDatas).ArrayNum;
    (this->RenMeshDatas).ArrayMax = (param_1->RenMeshDatas).ArrayMax;
    (param_1->RenMeshDatas).ArrayNum = 0;
    (param_1->RenMeshDatas).ArrayMax = 0;
  }
  return this;
}

// GetTranslatedWorldOffsetCorrection @ 1449f2050

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TVector<float> * __thiscall
FHairTransientResources::GetTranslatedWorldOffsetCorrection
          (FHairTransientResources *this,TVector<float> *__return_storage_ptr__,FViewInfo *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (double)param_1->_padding_;
  dVar2 = (double)param_1->_padding_;
  dVar3 = (this->TranslatedWorldOffsetView0).field0_0x0._s_0.Y;
  dVar4 = (this->TranslatedWorldOffsetView0).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (float)((double)param_1->_padding_ - (this->TranslatedWorldOffsetView0).field0_0x0._s_0.X);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)(dVar1 - dVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(dVar2 - dVar4);
  return __return_storage_ptr__;
}

// GetClusterCount @ 144a7f340

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

uint __thiscall FHairTransientResources::GetClusterCount(FHairTransientResources *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((-1 < (int)param_1) && ((int)param_1 < (this->ClusterAABBOffetAndCounts).ArrayNum)) {
    uVar3 = 0;
    if ((int)param_1 < (this->ClusterAABBOffetAndCounts).ArrayNum) {
      uVar3 = ~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    return *(uint *)((this->ClusterAABBOffetAndCounts).AllocatorInstance.Data +
                    (longlong)(int)param_1 * 8 + 4);
  }
  return 0;
}

