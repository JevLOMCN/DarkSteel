// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ShouldCompilePermutation @ 1452d4260

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIFeatureSupport": Some values do not have unique names */

bool __cdecl
_anon_9327CABB::FTSRConvolutionNetworkShader::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1,
          TShaderPermutationDomain<_anonymous_namespace_::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
          param_2)

{
  bool bVar1;
  ERHIFeatureSupport EVar2;
  undefined1 uStackX_14;
  
  bVar1 = SupportsTSR((FStaticShaderPlatform)*(EShaderPlatform *)param_1);
  if (bVar1) {
    bVar1 = UE::ShaderPermutationUtils::ShouldCompileWithWaveSize
                      ((FShaderPermutationParameters *)param_1,param_2.DimensionValue);
    if (bVar1) {
      uStackX_14 = param_2.Tail.DimensionValue;
      if (uStackX_14 != false) {
        EVar2 = FTSRShader::Supports16BitVALU(*(EShaderPlatform *)param_1);
        return EVar2 != Unsupported;
      }
      return true;
    }
  }
  return false;
}

// ShouldPrecachePermutation @ 1452d51e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_9327CABB::FTSRConvolutionNetworkShader::ShouldPrecachePermutation
          (FGlobalShaderPermutationParameters *param_1,
          TShaderPermutationDomain<_anonymous_namespace_::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
          param_2)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  EShaderPermutationPrecacheRequest EVar7;
  longlong lVar8;
  bool bStackX_14;
  bool bStackX_15;
  undefined1 auStackY_88 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  ulonglong local_28;
  
  pTVar1 = CVarTSRAlphaChannel.Ref;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  bVar3 = IsInParallelGameThread();
  lVar8 = 0;
  if (bVar3) {
LAB_1452d522c:
    lVar6 = lVar8;
  }
  else {
    bVar3 = IsInGameThread();
    lVar6 = 4;
    if (bVar3) goto LAB_1452d522c;
  }
  pTVar2 = CVarTSRAlphaChannel.Ref;
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar6) < 0) {
    bVar3 = IsPostProcessingWithAlphaChannelSupported();
    goto LAB_1452d5266;
  }
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_1452d5252:
    lVar6 = lVar8;
  }
  else {
    bVar3 = IsInGameThread();
    lVar6 = 4;
    if (bVar3) goto LAB_1452d5252;
  }
  bVar3 = 0 < *(int *)((longlong)pTVar2->ShadowedValue + lVar6);
LAB_1452d5266:
  bVar4 = ::`anonymous_namespace'::Use16BitVALU(*(EShaderPlatform *)param_1);
  local_38 = 0x10;
  uStack_34 = 0x20;
  local_30 = 0x40;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_48.AllocatorInstance,3,&local_48.ArrayMax);
  *(ulonglong *)local_48.AllocatorInstance.Data = CONCAT44(uStack_34,local_38);
  *(undefined4 *)(local_48.AllocatorInstance.Data + 8) = local_30;
  iVar5 = ::`anonymous_namespace'::SelectWaveSize(*(EShaderPlatform *)param_1,&local_48);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if ((param_2.DimensionValue == iVar5) &&
     (bStackX_14 = param_2.Tail.DimensionValue, bStackX_14 == bVar4)) {
    bStackX_15 = param_2.Tail.Tail.DimensionValue;
    if (bStackX_15 != bVar3) {
      lVar8 = 2;
    }
    EVar7 = (EShaderPermutationPrecacheRequest)lVar8;
  }
  else {
    EVar7 = NotUsed;
  }
  return EVar7;
}

