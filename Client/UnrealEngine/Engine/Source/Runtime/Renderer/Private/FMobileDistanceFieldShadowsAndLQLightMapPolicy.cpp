// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ModifyCompilationEnvironment @ 144bd5040

void __cdecl
FMobileDistanceFieldShadowsAndLQLightMapPolicy::ModifyCompilationEnvironment
          (FMaterialShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"STATICLIGHTING_TEXTUREMASK",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"STATICLIGHTING_SIGNEDDISTANCEFIELD",1);
  LightMapPolicyImpl::ModifyCompilationEnvironment(LQ_LIGHTMAP,param_1,param_2);
  return;
}

// ShouldCompilePermutation @ 144be3a60

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
FMobileDistanceFieldShadowsAndLQLightMapPolicy::ShouldCompilePermutation
          (FMeshMaterialShaderPermutationParameters *param_1)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  longlong *plVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  
  pTVar5 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar2 = IConsoleManager::Get();
    plVar3 = (longlong *)
             (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.Mobile.AllowDistanceFieldShadows",1)
    ;
    pTVar4 = pTVar5;
    if (plVar3 != (longlong *)0x0) {
      pTVar4 = (TConsoleVariableData<int> *)(**(code **)(*plVar3 + 0x68))(plVar3);
    }
    CVarMobileAllowDistanceFieldShadows = pTVar4;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar4 = CVarMobileAllowDistanceFieldShadows;
  bVar1 = IsInParallelGameThread();
  if ((!bVar1) && (bVar1 = IsInGameThread(), !bVar1)) {
    pTVar5 = (TConsoleVariableData<int> *)&DAT_00000004;
  }
  if ((*(int *)((longlong)pTVar4->ShadowedValue + (longlong)pTVar5->ShadowedValue) == 1) &&
     (((bVar1 = IsTranslucentBlendMode((FMaterialShaderParameters *)&param_1->_padding_), !bVar1 ||
       ((param_1->_padding_ & 0x2000000000000) != 0)) &&
      (bVar1 = LightMapPolicyImpl::ShouldCompilePermutation(LQ_LIGHTMAP,param_1), bVar1)))) {
    return true;
  }
  return false;
}

