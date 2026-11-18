// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// AddUpdateMeshParticleInstancesPass @ 148df3a10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
FNiagaraGPUSceneUtils::AddUpdateMeshParticleInstancesPass
          (FRDGBuilder *param_1,FUpdateMeshParticleInstancesParams *param_2,Type param_3,
          bool param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FGlobalShaderMap *this;
  FShaderType *pFVar4;
  FName this_00;
  FRDGEventName *pFVar5;
  FShaderParametersMetadata *pFVar6;
  undefined1 local_res10 [24];
  TIntVector3<int>_u_0 local_88;
  TIntVector3<int>_u_0 local_78;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_68;
  FString local_58;
  TShaderRefBase<FNiagaraUpdateMeshGPUSceneInstancesCS,FShaderMapPointerTable> local_48;
  FRDGEventName local_38;
  
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  pFVar4 = (FShaderType *)FNiagaraUpdateMeshGPUSceneInstancesCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_68,pFVar4,(uint)param_4);
  if (local_68.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_58);
    FNiagaraUpdateMeshGPUSceneInstancesCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraUpdateMeshGPUSceneInstancesCS::GetStaticType();
  iVar3 = param_2->ParticleCount + 0x3f;
  local_48.ShaderContent = (FNiagaraUpdateMeshGPUSceneInstancesCS *)local_68.ShaderContent;
  local_48.ShaderMap = local_68.ShaderMap;
  FComputeShaderUtils::GetGroupCountWrapped
            ((TIntVector3<int> *)&local_88._s_0,(int)((iVar3 >> 0x1f & 0x3fU) + iVar3) >> 6);
  pFVar5 = FRDGEventName::FRDGEventName
                     (&local_38,L"Niagara.UpdateMeshParticleInstances (%u Instances)");
  pFVar6 = FUpdateMeshParticleInstancesParams::FTypeInfo::GetStructMetadata();
  local_78._s_0.Z = local_88._s_0.Z;
  local_78._0_8_ = local_88._0_8_;
  FComputeShaderUtils::AddPass<FNiagaraUpdateMeshGPUSceneInstancesCS>
            (param_1,pFVar5,Compute,&local_48,pFVar6,param_2,(TIntVector3<int> *)&local_78._s_0);
  if (local_38.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

