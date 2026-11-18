// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiserShaders
// Functions: 3

// CommonShouldCompilePermutation<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS> @ 14ead34c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::NNEDenoiserShaders::Internal::
CommonShouldCompilePermutation<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS>
          (FGlobalShaderPermutationParameters *param_1)

{
  bool bVar1;
  TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels>
  local_18;
  
  bVar1 = ShouldCompileRayTracingShadersForProject(*(EShaderPlatform *)param_1);
  if (bVar1) {
    TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels>
    ::
    TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels>
              (&local_18,*(int *)&param_1->field_0x4);
    if ((byte)(local_18.DimensionValue - Half) < 2) {
      if (local_18.Tail.DimensionValue != Half) {
        return local_18.Tail.DimensionValue == Float;
      }
      return true;
    }
  }
  return false;
}

// CommonShouldCompilePermutation<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS> @ 14ead3520

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::NNEDenoiserShaders::Internal::
CommonShouldCompilePermutation<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS>
          (FGlobalShaderPermutationParameters *param_1)

{
  bool bVar1;
  TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels>
  local_18;
  
  bVar1 = ShouldCompileRayTracingShadersForProject(*(EShaderPlatform *)param_1);
  if (bVar1) {
    TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels>
    ::
    TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels>
              (&local_18,*(int *)&param_1->field_0x4);
    if ((byte)(local_18.DimensionValue - Half) < 2) {
      if (local_18.Tail.DimensionValue != Half) {
        return local_18.Tail.DimensionValue == Float;
      }
      return true;
    }
  }
  return false;
}

// CommonModifyCompilationEnvironment @ 14ead3980

void __cdecl
UE::NNEDenoiserShaders::Internal::CommonModifyCompilationEnvironment
          (FGlobalShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"THREAD_GROUP_SIZE",0x10);
  FShaderCompilerEnvironment::SetDefine(param_2,L"MAX_NUM_MAPPED_CHANNELS",4);
  return;
}

