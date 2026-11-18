// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ShouldCompilePermutation @ 147f89a10

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

bool __thiscall
FMaterialShaderType::ShouldCompilePermutation
          (FMaterialShaderType *this,EShaderPlatform param_1,FMaterialShaderParameters *param_2,
          int param_3,EShaderPermutationFlags param_4)

{
  bool bVar1;
  FShaderPermutationParameters local_68;
  FMaterialShaderParameters local_58;
  
  local_68.Flags = param_4;
  local_68.Platform = param_1;
  local_68.PermutationId = param_3;
  FMaterialShaderParameters::FMaterialShaderParameters(&local_58,param_2);
  bVar1 = FShaderType::ShouldCompilePermutation((FShaderType *)this,&local_68);
  if (local_58.MaterialShaderTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.MaterialShaderTags.AllocatorInstance.Data);
  }
  return bVar1;
}

// ShouldCompilePipeline @ 147f89a70

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
FMaterialShaderType::ShouldCompilePipeline
          (FShaderPipelineType *param_1,EShaderPlatform param_2,FMaterialShaderParameters *param_3,
          EShaderPermutationFlags param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  FShaderPermutationParameters local_68;
  FMaterialShaderParameters local_58;
  
  local_68.PermutationId = 0;
  local_68.Platform = param_2;
  local_68.Flags = param_4;
  FMaterialShaderParameters::FMaterialShaderParameters(&local_58,param_3);
  pFVar4 = (param_1->Stages).AllocatorInstance.Data;
  iVar2 = (param_1->Stages).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Stages).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    bVar3 = FShaderType::ShouldCompilePermutation(*(FShaderType **)pFVar4,&local_68);
    if (!bVar3) {
      bVar3 = false;
LAB_147f89ae5:
      if (local_58.MaterialShaderTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.MaterialShaderTags.AllocatorInstance.Data);
      }
      return bVar3;
    }
    pFVar4 = pFVar4 + 8;
  }
  bVar3 = true;
  goto LAB_147f89ae5;
}

