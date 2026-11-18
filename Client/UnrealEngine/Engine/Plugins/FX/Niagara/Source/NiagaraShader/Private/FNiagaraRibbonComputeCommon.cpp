// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// ModifyCompilationEnvironment @ 148e0a810

void __cdecl
FNiagaraRibbonComputeCommon::ModifyCompilationEnvironment
          (FGlobalShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2,
          int param_3)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"GPU_SIMULATION",true);
  if (0 < param_3) {
    FShaderCompilerEnvironment::SetDefine(param_2,L"THREADGROUP_SIZE",param_3);
  }
  return;
}

