// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ShouldCompilePermutation @ 147ff7800

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FMeshMaterialShaderType::ShouldCompilePermutation
          (FMeshMaterialShaderType *this,EShaderPlatform param_1,FMaterialShaderParameters *param_2,
          FVertexFactoryType *param_3,int param_4,EShaderPermutationFlags param_5)

{
  bool bVar1;
  FShaderPermutationParameters local_68;
  FMaterialShaderParameters local_58;
  FVertexFactoryType *local_10;
  
  local_68.PermutationId = param_4;
  local_68.Flags = param_5;
  local_68.Platform = param_1;
  FMaterialShaderParameters::FMaterialShaderParameters(&local_58,param_2);
  local_10 = param_3;
  bVar1 = FShaderType::ShouldCompilePermutation((FShaderType *)this,&local_68);
  if (local_58.MaterialShaderTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.MaterialShaderTags.AllocatorInstance.Data);
  }
  return bVar1;
}

// ShouldCompilePipeline @ 147ff79f0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FMeshMaterialShaderType::ShouldCompilePipeline
          (FShaderPipelineType *param_1,EShaderPlatform param_2,FMaterialShaderParameters *param_3,
          FVertexFactoryType *param_4,EShaderPermutationFlags param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  FShaderPermutationParameters local_68;
  FMaterialShaderParameters local_58;
  FVertexFactoryType *local_10;
  
  local_68.PermutationId = 0;
  local_68.Flags = param_5;
  local_68.Platform = param_2;
  FMaterialShaderParameters::FMaterialShaderParameters(&local_58,param_3);
  iVar2 = (param_1->Stages).ArrayNum;
  pFVar4 = (param_1->Stages).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  local_10 = param_4;
  while( true ) {
    if ((param_1->Stages).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    bVar3 = FShaderType::ShouldCompilePermutation(*(FShaderType **)pFVar4,&local_68);
    if (!bVar3) {
      bVar3 = false;
LAB_147ff7a77:
      if (local_58.MaterialShaderTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.MaterialShaderTags.AllocatorInstance.Data);
      }
      return bVar3;
    }
    pFVar4 = pFVar4 + 8;
  }
  bVar3 = true;
  goto LAB_147ff7a77;
}

// ShouldCompileVertexFactoryPermutation @ 147ff7ab0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __cdecl
FMeshMaterialShaderType::ShouldCompileVertexFactoryPermutation
          (EShaderPlatform param_1,FMaterialShaderParameters *param_2,FVertexFactoryType *param_3,
          FShaderType *param_4,EShaderPermutationFlags param_5)

{
  bool bVar1;
  FVertexFactoryShaderPermutationParameters local_68;
  
  local_68.ShaderType = param_4;
  local_68.VertexFactoryType = param_3;
  FMaterialShaderParameters::FMaterialShaderParameters(&local_68.MaterialParameters,param_2);
  local_68.Flags = param_5;
  local_68.Platform = param_1;
  bVar1 = (*param_3->ShouldCacheRef)(&local_68);
  if (local_68.MaterialParameters.MaterialShaderTags.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.MaterialParameters.MaterialShaderTags.AllocatorInstance.Data);
  }
  return bVar1;
}

// ShouldCompileVertexFactoryPipeline @ 147ff7b20

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FMeshMaterialShaderType::ShouldCompileVertexFactoryPipeline
          (FShaderPipelineType *param_1,EShaderPlatform param_2,FMaterialShaderParameters *param_3,
          FVertexFactoryType *param_4,EShaderPermutationFlags param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FVertexFactoryShaderPermutationParameters local_88;
  
  pFVar4 = (param_1->Stages).AllocatorInstance.Data;
  iVar2 = (param_1->Stages).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Stages).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) {
      return true;
    }
    local_88.ShaderType = *(FShaderType **)pFVar4;
    local_88.VertexFactoryType = param_4;
    FMaterialShaderParameters::FMaterialShaderParameters(&local_88.MaterialParameters,param_3);
    local_88.Flags = param_5;
    local_88.Platform = param_2;
    bVar3 = (*param_4->ShouldCacheRef)(&local_88);
    if (local_88.MaterialParameters.MaterialShaderTags.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.MaterialParameters.MaterialShaderTags.AllocatorInstance.Data);
    }
    if (!bVar3) break;
    pFVar4 = pFVar4 + 8;
  }
  return false;
}

