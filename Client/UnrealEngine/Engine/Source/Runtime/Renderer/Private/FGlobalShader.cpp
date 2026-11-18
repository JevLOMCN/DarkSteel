// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// SetParameters<FViewUniformShaderParameters> @ 1448eaa10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGlobalShader::SetParameters<FViewUniformShaderParameters>
          (FGlobalShader *this,FRHIBatchedShaderParameters *param_1,FRHIUniformBuffer *param_2)

{
  FRHIBatchedShaderParametersAllocator *pFVar1;
  FRHIBatchedShaderParameters *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  FHashedName FVar6;
  FShaderUniformBufferParameter *pFVar7;
  ushort local_res20 [4];
  FHashedName local_28;
  FRHIUniformBuffer *local_20;
  FHashedName local_18 [2];
  
  pFVar5 = FViewUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_28,&pFVar5->ShaderVariableHashedName);
  FVar6.Hash = (ulong64)FHashedName::FHashedName(local_18,&local_28);
  pFVar7 = FShader::GetUniformBufferParameter((FShader *)this,FVar6);
  local_res20[0] = pFVar7->BaseIndex;
  if (local_res20[0] != 0xffff) {
    pFVar1 = param_1->Allocator;
    pFVar2 = pFVar1->AttachedParameters;
    local_20 = param_2;
    if (pFVar2 != param_1) {
      if (pFVar2 != (FRHIBatchedShaderParameters *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!AttachedParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                           ,0x82,
                           L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar1->AttachedParameters = param_1;
    }
    pFVar1 = param_1->Allocator;
    pFVar2 = pFVar1->AttachedParameters;
    if (pFVar2 != param_1) {
      if (pFVar2 != (FRHIBatchedShaderParameters *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!AttachedParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                           ,0x82,
                           L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar1->AttachedParameters = param_1;
    }
    FRHIBatchedShaderParametersAllocator::
    Emplace<FRHIShaderParameterResource,FRHIUniformBuffer_*_&,unsigned_short_&>
              (param_1->Allocator,&param_1->Allocator->ResourceParameters,
               &param_1->ResourceParameters,&local_20,local_res20);
  }
  return;
}

// SetParameters<FHairStrandsViewUniformParameters> @ 1455704a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGlobalShader::SetParameters<FHairStrandsViewUniformParameters>
          (FGlobalShader *this,FRHIBatchedShaderParameters *param_1,FRHIUniformBuffer *param_2)

{
  FShaderParametersMetadata *pFVar1;
  FHashedName FVar2;
  FShaderUniformBufferParameter *pFVar3;
  FHashedName local_res20;
  FHashedName local_18 [2];
  
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_res20,&pFVar1->ShaderVariableHashedName);
  FVar2.Hash = (ulong64)FHashedName::FHashedName(local_18,&local_res20);
  pFVar3 = FShader::GetUniformBufferParameter((FShader *)this,FVar2);
  SetUniformBufferParameter(param_1,pFVar3,param_2);
  return;
}

// SetParameters<FSubstrateGlobalUniformParameters> @ 145570510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGlobalShader::SetParameters<FSubstrateGlobalUniformParameters>
          (FGlobalShader *this,FRHIBatchedShaderParameters *param_1,FRHIUniformBuffer *param_2)

{
  FShaderParametersMetadata *pFVar1;
  FHashedName FVar2;
  FShaderUniformBufferParameter *pFVar3;
  FHashedName local_res20;
  FHashedName local_18 [2];
  
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_res20,&pFVar1->ShaderVariableHashedName);
  FVar2.Hash = (ulong64)FHashedName::FHashedName(local_18,&local_res20);
  pFVar3 = FShader::GetUniformBufferParameter((FShader *)this,FVar2);
  SetUniformBufferParameter(param_1,pFVar3,param_2);
  return;
}

