// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// ShouldCompilePipeline @ 145d4ffa0

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
FGlobalShaderType::ShouldCompilePipeline
          (FShaderPipelineType *param_1,EShaderPlatform param_2,EShaderPermutationFlags param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FShaderPermutationParameters local_48;
  FName local_3c;
  
  pFVar4 = (param_1->Stages).AllocatorInstance.Data;
  iVar2 = (param_1->Stages).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Stages).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    local_48.PermutationId = 0;
    local_3c = (*(FShaderType **)pFVar4)->TypeName;
    local_48.Platform = param_2;
    local_48.Flags = param_3;
    bVar3 = FShaderType::ShouldCompilePermutation(*(FShaderType **)pFVar4,&local_48);
    if (!bVar3) {
      return false;
    }
    pFVar4 = pFVar4 + 8;
  }
  return true;
}

