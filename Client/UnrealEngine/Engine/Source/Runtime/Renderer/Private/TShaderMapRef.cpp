// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 40

// TShaderMapRef<FScreenPassVS> @ 14472d110

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

TShaderMapRef<FScreenPassVS> * __thiscall
TShaderMapRef<FScreenPassVS>::TShaderMapRef<FScreenPassVS>
          (TShaderMapRef<FScreenPassVS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FScreenPassVS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FScreenPassVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FScreenPassVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FScreenPassVS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FScreenPassVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FDeferredDecalVS> @ 1447f2580

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

TShaderMapRef<FDeferredDecalVS> * __thiscall
TShaderMapRef<FDeferredDecalVS>::TShaderMapRef<FDeferredDecalVS>
          (TShaderMapRef<FDeferredDecalVS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FDeferredDecalVS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FDeferredDecalVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FDeferredDecalVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FDeferredDecalVS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FDeferredDecalVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FPostProcessBenchmarkPS<5>_> @ 1448ec3e0

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

TShaderMapRef<FPostProcessBenchmarkPS<5>_> * __thiscall
TShaderMapRef<FPostProcessBenchmarkPS<5>_>::TShaderMapRef<FPostProcessBenchmarkPS<5>_>
          (TShaderMapRef<FPostProcessBenchmarkPS<5>_> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FPostProcessBenchmarkPS<5>_> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FPostProcessBenchmarkPS<5>::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FPostProcessBenchmarkPS<5>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FPostProcessBenchmarkPS<5>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FPostProcessBenchmarkPS<5>::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FPostProcessBenchmarkVS<0>_> @ 1448ec4c0

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

TShaderMapRef<FPostProcessBenchmarkVS<0>_> * __thiscall
TShaderMapRef<FPostProcessBenchmarkVS<0>_>::TShaderMapRef<FPostProcessBenchmarkVS<0>_>
          (TShaderMapRef<FPostProcessBenchmarkVS<0>_> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FPostProcessBenchmarkVS<0>_> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FPostProcessBenchmarkVS<0>::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FPostProcessBenchmarkVS<0>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FPostProcessBenchmarkVS<0>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FPostProcessBenchmarkVS<0>::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FHairStrandsTilePassVS> @ 1448ec5a0

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

TShaderMapRef<FHairStrandsTilePassVS> * __thiscall
TShaderMapRef<FHairStrandsTilePassVS>::TShaderMapRef<FHairStrandsTilePassVS>
          (TShaderMapRef<FHairStrandsTilePassVS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FHairStrandsTilePassVS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FHairStrandsTilePassVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FHairStrandsTilePassVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FHairStrandsTilePassVS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FHairStrandsTilePassVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FHairVisibilityGBufferWritePS> @ 1448ec680

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

TShaderMapRef<FHairVisibilityGBufferWritePS> * __thiscall
TShaderMapRef<FHairVisibilityGBufferWritePS>::TShaderMapRef<FHairVisibilityGBufferWritePS>
          (TShaderMapRef<FHairVisibilityGBufferWritePS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FHairVisibilityGBufferWritePS::FOutputType> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TShaderMapRef<FHairVisibilityGBufferWritePS> *pTVar4;
  FShaderType *pFVar5;
  FName this_00;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  iVar1 = param_2->DimensionValue;
  if (((1 < iVar1) || (iVar1 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TShaderMapRef<FHairVisibilityGBufferWritePS> *)(*pcVar2)();
    return pTVar4;
  }
  pFVar5 = (FShaderType *)FHairVisibilityGBufferWritePS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar5,iVar1);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FHairVisibilityGBufferWritePS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FHairVisibilityGBufferWritePS> *)(*pcVar2)();
      return pTVar4;
    }
  }
  FHairVisibilityGBufferWritePS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FHairStrandsVoxelTransmittanceMaskCS> @ 144993640

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

TShaderMapRef<FHairStrandsVoxelTransmittanceMaskCS> * __thiscall
TShaderMapRef<FHairStrandsVoxelTransmittanceMaskCS>::
TShaderMapRef<FHairStrandsVoxelTransmittanceMaskCS>
          (TShaderMapRef<FHairStrandsVoxelTransmittanceMaskCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FHairStrandsVoxelTransmittanceMaskCS::FTransmittanceGroupSize,FHairStrandsVoxelTransmittanceMaskCS::FSuperSampling,FHairStrandsVoxelTransmittanceMaskCS::FTraversal,FHairStrandsVoxelTransmittanceMaskCS::FOnePass>
          *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TShaderMapRef<FHairStrandsVoxelTransmittanceMaskCS> *pTVar5;
  FShaderType *pFVar6;
  FName this_00;
  int iVar7;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_38;
  FString local_28;
  
  if (param_2->DimensionValue == 0x20) {
    iVar7 = 1;
  }
  else {
    if ((param_2->DimensionValue != 0x40) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TShaderMapRef<FHairStrandsVoxelTransmittanceMaskCS> *)(*pcVar3)();
      return pTVar5;
    }
    iVar7 = 0;
  }
  iVar1 = (param_2->Tail).DimensionValue;
  if (((1 < iVar1) || (iVar1 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TShaderMapRef<FHairStrandsVoxelTransmittanceMaskCS> *)(*pcVar3)();
    return pTVar5;
  }
  iVar2 = (param_2->Tail).Tail.DimensionValue;
  if (((1 < iVar2) || (iVar2 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TShaderMapRef<FHairStrandsVoxelTransmittanceMaskCS> *)(*pcVar3)();
    return pTVar5;
  }
  bVar4 = (param_2->Tail).Tail.Tail.DimensionValue;
  pFVar6 = (FShaderType *)FHairStrandsVoxelTransmittanceMaskCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_38,pFVar6,
             iVar7 + (iVar1 + ((-(uint)(bVar4 != false) & 2) + iVar2) * 2) * 2);
  if (local_38.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_28);
    FHairStrandsVoxelTransmittanceMaskCS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TShaderMapRef<FHairStrandsVoxelTransmittanceMaskCS> *)(*pcVar3)();
      return pTVar5;
    }
  }
  FHairStrandsVoxelTransmittanceMaskCS::GetStaticType();
  *(FShader **)this = local_38.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_38.ShaderMap;
  return this;
}

// TShaderMapRef<FScreenVS> @ 144993800

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

TShaderMapRef<FScreenVS> * __thiscall
TShaderMapRef<FScreenVS>::TShaderMapRef<FScreenVS>
          (TShaderMapRef<FScreenVS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FScreenVS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FScreenVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FScreenVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FScreenVS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FScreenVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FVisiblityRasterClassificationCS> @ 1449938e0

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

TShaderMapRef<FVisiblityRasterClassificationCS> * __thiscall
TShaderMapRef<FVisiblityRasterClassificationCS>::TShaderMapRef<FVisiblityRasterClassificationCS>
          (TShaderMapRef<FVisiblityRasterClassificationCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FVisiblityRasterClassificationCS::FCulling> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FVisiblityRasterClassificationCS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar2 = param_2->DimensionValue;
  pFVar3 = (FShaderType *)FVisiblityRasterClassificationCS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,(uint)(bVar2 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FVisiblityRasterClassificationCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FVisiblityRasterClassificationCS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVisiblityRasterClassificationCS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FVisiblityRasterComputeBinningCS> @ 1449939d0

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

TShaderMapRef<FVisiblityRasterComputeBinningCS> * __thiscall
TShaderMapRef<FVisiblityRasterComputeBinningCS>::TShaderMapRef<FVisiblityRasterComputeBinningCS>
          (TShaderMapRef<FVisiblityRasterComputeBinningCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FVisiblityRasterComputeBinningCS::FCulling,FVisiblityRasterComputeBinningCS::FIndirectPrimIDs>
          *param_2)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderMapRef<FVisiblityRasterComputeBinningCS> *pTVar5;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar3 = (param_2->Tail).DimensionValue;
  bVar1 = param_2->DimensionValue;
  pFVar4 = (FShaderType *)FVisiblityRasterComputeBinningCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_28,pFVar4,(-(uint)(bVar3 != false) & 2) + (uint)(bVar1 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FVisiblityRasterComputeBinningCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderMapRef<FVisiblityRasterComputeBinningCS> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FVisiblityRasterComputeBinningCS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FVisiblityRasterComputeNaiveCS> @ 144993ad0

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

TShaderMapRef<FVisiblityRasterComputeNaiveCS> * __thiscall
TShaderMapRef<FVisiblityRasterComputeNaiveCS>::TShaderMapRef<FVisiblityRasterComputeNaiveCS>
          (TShaderMapRef<FVisiblityRasterComputeNaiveCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FVisiblityRasterComputeNaiveCS::FIndirectPrimIDs,FVisiblityRasterComputeNaiveCS::FCulling>
          *param_2)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderMapRef<FVisiblityRasterComputeNaiveCS> *pTVar5;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar3 = (param_2->Tail).DimensionValue;
  bVar1 = param_2->DimensionValue;
  pFVar4 = (FShaderType *)FVisiblityRasterComputeNaiveCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_28,pFVar4,(-(uint)(bVar3 != false) & 2) + (uint)(bVar1 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FVisiblityRasterComputeNaiveCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderMapRef<FVisiblityRasterComputeNaiveCS> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FVisiblityRasterComputeNaiveCS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FVisiblityRasterHWVS> @ 144993bd0

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

TShaderMapRef<FVisiblityRasterHWVS> * __thiscall
TShaderMapRef<FVisiblityRasterHWVS>::TShaderMapRef<FVisiblityRasterHWVS>
          (TShaderMapRef<FVisiblityRasterHWVS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FVisiblityRasterHWVS::FDrawIndirect,FVisiblityRasterHWVS::FCulling>
          *param_2)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderMapRef<FVisiblityRasterHWVS> *pTVar5;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar3 = (param_2->Tail).DimensionValue;
  bVar1 = param_2->DimensionValue;
  pFVar4 = (FShaderType *)FVisiblityRasterHWVS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_28,pFVar4,(-(uint)(bVar3 != false) & 2) + (uint)(bVar1 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FVisiblityRasterHWVS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderMapRef<FVisiblityRasterHWVS> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FVisiblityRasterHWVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FDiffuseIndirectCompositePS> @ 144afa6c0

/* WARNING: Type propagation algorithm not settling */
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

TShaderMapRef<FDiffuseIndirectCompositePS> * __thiscall
TShaderMapRef<FDiffuseIndirectCompositePS>::TShaderMapRef<FDiffuseIndirectCompositePS>
          (TShaderMapRef<FDiffuseIndirectCompositePS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FDiffuseIndirectCompositePS::FApplyDiffuseIndirectDim,FDiffuseIndirectCompositePS::FUpscaleDiffuseIndirectDim,FDiffuseIndirectCompositePS::FScreenBentNormalMode,FDiffuseIndirectCompositePS::FShortRangeGI,Substrate::FSubstrateTileType,FDiffuseIndirectCompositePS::FEnableDualSrcBlending,FDiffuseIndirectCompositePS::FScreenSpaceReflectionTiledComposition,FDiffuseIndirectCompositePS::FHairComplexTransmittance>
          *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  TShaderMapRef<FDiffuseIndirectCompositePS> *pTVar10;
  FShaderType *pFVar11;
  FName this_00;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  iVar3 = param_2->DimensionValue;
  if (((2 < iVar3) || (iVar3 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TShaderMapRef<FDiffuseIndirectCompositePS> *)(*pcVar6)();
    return pTVar10;
  }
  iVar4 = (param_2->Tail).Tail.DimensionValue;
  bVar7 = (param_2->Tail).DimensionValue;
  if (((2 < iVar4) || (iVar4 < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TShaderMapRef<FDiffuseIndirectCompositePS> *)(*pcVar6)();
    return pTVar10;
  }
  iVar5 = (param_2->Tail).Tail.Tail.Tail.DimensionValue;
  bVar8 = (param_2->Tail).Tail.Tail.DimensionValue;
  if (((3 < iVar5) || (iVar5 < 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TShaderMapRef<FDiffuseIndirectCompositePS> *)(*pcVar6)();
    return pTVar10;
  }
  bVar9 = (param_2->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar1 = (param_2->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar2 = (param_2->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  pFVar11 = (FShaderType *)FDiffuseIndirectCompositePS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_48,pFVar11,
             (-(uint)(bVar7 != false) & 3) + iVar3 +
             ((-(uint)(bVar8 != false) & 3) + iVar4 +
             ((-(uint)(bVar2 != false) & 4) +
             (-(uint)(bVar1 != false) & 8) + iVar5 + (-(uint)(bVar9 != false) & 0x10)) * 6) * 6);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_38);
    FDiffuseIndirectCompositePS::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TShaderMapRef<FDiffuseIndirectCompositePS> *)(*pcVar6)();
      return pTVar10;
    }
  }
  FDiffuseIndirectCompositePS::GetStaticType();
  *(FShader **)this = local_48.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_48.ShaderMap;
  return this;
}

// TShaderMapRef<FReflectionEnvironmentSkyLightingPS> @ 144afa8c0

/* WARNING: Type propagation algorithm not settling */
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

TShaderMapRef<FReflectionEnvironmentSkyLightingPS> * __thiscall
TShaderMapRef<FReflectionEnvironmentSkyLightingPS>::
TShaderMapRef<FReflectionEnvironmentSkyLightingPS>
          (TShaderMapRef<FReflectionEnvironmentSkyLightingPS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FReflectionEnvironmentSkyLightingPS::FHasBoxCaptures,FReflectionEnvironmentSkyLightingPS::FHasSphereCaptures,FReflectionEnvironmentSkyLightingPS::FDFAOIndirectOcclusion,FReflectionEnvironmentSkyLightingPS::FSkyLight,FReflectionEnvironmentSkyLightingPS::FDynamicSkyLight,FReflectionEnvironmentSkyLightingPS::FSkyShadowing,FReflectionEnvironmentSkyLightingPS::FReflectionSourceType,Substrate::FSubstrateTileType,FReflectionEnvironmentSkyLightingPS::FHairComplexTransmittance>
          *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  EReflectionSourceType EVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  TShaderMapRef<FReflectionEnvironmentSkyLightingPS> *pTVar11;
  FShaderType *pFVar12;
  FName this_00;
  undefined1 local_res20 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_68;
  FString local_58;
  
  bVar10 = (param_2->Tail).DimensionValue;
  bVar1 = param_2->DimensionValue;
  EVar6 = (param_2->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar2 = (param_2->Tail).Tail.DimensionValue;
  bVar3 = (param_2->Tail).Tail.Tail.DimensionValue;
  bVar4 = (param_2->Tail).Tail.Tail.Tail.DimensionValue;
  bVar5 = (param_2->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  if (((2 < (int)EVar6) || ((int)EVar6 < 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TShaderMapRef<FReflectionEnvironmentSkyLightingPS> *)(*pcVar8)();
    return pTVar11;
  }
  iVar7 = (param_2->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  if (((3 < iVar7) || (iVar7 < 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TShaderMapRef<FReflectionEnvironmentSkyLightingPS> *)(*pcVar8)();
    return pTVar11;
  }
  bVar9 = ((TShaderPermutationDomain<FReflectionEnvironmentSkyLightingPS::FHairComplexTransmittance>
            *)((longlong)&(param_2->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 4))->DimensionValue;
  pFVar12 = (FShaderType *)FReflectionEnvironmentSkyLightingPS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_68,pFVar12,
             (uint)(bVar1 != false) + (-(uint)(bVar5 != false) & 0x20) +
             (EVar6 + ((-(uint)(bVar9 != false) & 4) + iVar7) * 3) * 0x40 +
             (-(uint)(bVar2 != false) & 4) + (-(uint)(bVar3 != false) & 8) +
             (-(uint)(bVar4 != false) & 0x10) + (-(uint)(bVar10 != false) & 2));
  if (local_68.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
    ::FName::ToString((FName *)this_00,&local_58);
    FReflectionEnvironmentSkyLightingPS::GetStaticType();
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TShaderMapRef<FReflectionEnvironmentSkyLightingPS> *)(*pcVar8)();
      return pTVar11;
    }
  }
  FReflectionEnvironmentSkyLightingPS::GetStaticType();
  *(FShader **)this = local_68.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_68.ShaderMap;
  return this;
}

// TShaderMapRef<Substrate::FSubstrateTilePassVS> @ 144afaab0

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

TShaderMapRef<Substrate::FSubstrateTilePassVS> * __thiscall
TShaderMapRef<Substrate::FSubstrateTilePassVS>::TShaderMapRef<Substrate::FSubstrateTilePassVS>
          (TShaderMapRef<Substrate::FSubstrateTilePassVS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<Substrate::FSubstrateTilePassVS::FEnableDebug,Substrate::FSubstrateTilePassVS::FEnableTexCoordScreenVector>
          *param_2)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderMapRef<Substrate::FSubstrateTilePassVS> *pTVar5;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar3 = (param_2->Tail).DimensionValue;
  bVar1 = param_2->DimensionValue;
  pFVar4 = (FShaderType *)Substrate::FSubstrateTilePassVS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_28,pFVar4,(-(uint)(bVar3 != false) & 2) + (uint)(bVar1 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    Substrate::FSubstrateTilePassVS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderMapRef<Substrate::FSubstrateTilePassVS> *)(*pcVar2)();
      return pTVar5;
    }
  }
  Substrate::FSubstrateTilePassVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FDeferredLightHairVS> @ 144b965d0

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

TShaderMapRef<FDeferredLightHairVS> * __thiscall
TShaderMapRef<FDeferredLightHairVS>::TShaderMapRef<FDeferredLightHairVS>
          (TShaderMapRef<FDeferredLightHairVS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FDeferredLightHairVS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FDeferredLightHairVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FDeferredLightHairVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FDeferredLightHairVS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FDeferredLightHairVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FDeferredLightPS> @ 144b966b0

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

TShaderMapRef<FDeferredLightPS> * __thiscall
TShaderMapRef<FDeferredLightPS>::TShaderMapRef<FDeferredLightPS>
          (TShaderMapRef<FDeferredLightPS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
          *param_2)

{
  ELightSourceShape EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TShaderMapRef<FDeferredLightPS> *pTVar5;
  FShaderType *pFVar6;
  FName this_00;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_68;
  FString local_58;
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
  local_48;
  
  EVar1 = param_2->DimensionValue;
  if (((2 < (int)EVar1) || ((int)EVar1 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TShaderMapRef<FDeferredLightPS> *)(*pcVar2)();
    return pTVar5;
  }
  iVar4 = TShaderPermutationDomain<FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
          ::ToDimensionValueId(&param_2->Tail);
  iVar4 = EVar1 + iVar4 * 3;
  pFVar6 = (FShaderType *)FDeferredLightPS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_68,pFVar6,iVar4);
  if (local_68.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_58);
    FDeferredLightPS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderMapRef<FDeferredLightPS> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FDeferredLightPS::GetStaticType();
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
  ::
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
            (&local_48,iVar4);
  *(FShader **)this = local_68.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_68.ShaderMap;
  return this;
}

// TShaderMapRef<FDeferredLightVS> @ 144b96800

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

TShaderMapRef<FDeferredLightVS> * __thiscall
TShaderMapRef<FDeferredLightVS>::TShaderMapRef<FDeferredLightVS>
          (TShaderMapRef<FDeferredLightVS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FDeferredLightVS::FRadialLight> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FDeferredLightVS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar2 = param_2->DimensionValue;
  pFVar3 = (FShaderType *)FDeferredLightVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,(uint)(bVar2 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FDeferredLightVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FDeferredLightVS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FDeferredLightVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FMobileFogPS> @ 144f66f30

/* WARNING: Type propagation algorithm not settling */
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

TShaderMapRef<FMobileFogPS> * __thiscall
TShaderMapRef<FMobileFogPS>::TShaderMapRef<FMobileFogPS>
          (TShaderMapRef<FMobileFogPS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FMobileFogPS::FSupportHeightFog,FMobileFogPS::FSupportFogStartDistance,FMobileFogPS::FSupportFogInScatteringTexture,FMobileFogPS::FSupportFogSecondTerm,FMobileFogPS::FSupportFogDirectionalLightInScattering,FMobileFogPS::FSupportAerialPerspective,FMobileFogPS::FSupportVolumetricFog,FMobileFogPS::FSupportLocalFogVolume>
          *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  TShaderMapRef<FMobileFogPS> *pTVar11;
  FShaderType *pFVar12;
  FName this_00;
  undefined1 local_res18 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_58;
  FString local_48;
  
  bVar10 = (param_2->Tail).DimensionValue;
  bVar1 = param_2->DimensionValue;
  iVar7 = (param_2->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar2 = (param_2->Tail).Tail.DimensionValue;
  bVar3 = (param_2->Tail).Tail.Tail.DimensionValue;
  bVar4 = (param_2->Tail).Tail.Tail.Tail.DimensionValue;
  bVar5 = (param_2->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  bVar6 = (param_2->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue;
  if (((2 < iVar7) || (iVar7 < 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TShaderMapRef<FMobileFogPS> *)(*pcVar8)();
    return pTVar11;
  }
  pFVar12 = (FShaderType *)FMobileFogPS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_58,pFVar12,
             iVar7 * 0x80 +
             (-(uint)(bVar10 != false) & 2) + (uint)(bVar1 != false) +
             (-(uint)(bVar2 != false) & 4) + (-(uint)(bVar3 != false) & 8) +
             (-(uint)(bVar4 != false) & 0x10) + (-(uint)(bVar5 != false) & 0x20) +
             (-(uint)(bVar6 != false) & 0x40));
  if (local_58.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res18);
    ::FName::ToString((FName *)this_00,&local_48);
    FMobileFogPS::GetStaticType();
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TShaderMapRef<FMobileFogPS> *)(*pcVar8)();
      return pTVar11;
    }
  }
  FMobileFogPS::GetStaticType();
  *(FShader **)this = local_58.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_58.ShaderMap;
  return this;
}

// TShaderMapRef<FPathTracingBuildAtmosphereOpticalDepthLUTCS> @ 1450aeee0

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

TShaderMapRef<FPathTracingBuildAtmosphereOpticalDepthLUTCS> * __thiscall
TShaderMapRef<FPathTracingBuildAtmosphereOpticalDepthLUTCS>::
TShaderMapRef<FPathTracingBuildAtmosphereOpticalDepthLUTCS>
          (TShaderMapRef<FPathTracingBuildAtmosphereOpticalDepthLUTCS> *this,
          FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FPathTracingBuildAtmosphereOpticalDepthLUTCS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FPathTracingBuildAtmosphereOpticalDepthLUTCS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FPathTracingBuildAtmosphereOpticalDepthLUTCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FPathTracingBuildAtmosphereOpticalDepthLUTCS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FPathTracingBuildAtmosphereOpticalDepthLUTCS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<AlphaInvert::FAlphaInvertPS> @ 145125900

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

TShaderMapRef<AlphaInvert::FAlphaInvertPS> * __thiscall
TShaderMapRef<AlphaInvert::FAlphaInvertPS>::TShaderMapRef<AlphaInvert::FAlphaInvertPS>
          (TShaderMapRef<AlphaInvert::FAlphaInvertPS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<AlphaInvert::FAlphaInvertPS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)AlphaInvert::FAlphaInvertPS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    AlphaInvert::FAlphaInvertPS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<AlphaInvert::FAlphaInvertPS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  AlphaInvert::FAlphaInvertPS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FSubsurfaceIndirectDispatchCS> @ 14520f830

/* WARNING: Type propagation algorithm not settling */
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

TShaderMapRef<FSubsurfaceIndirectDispatchCS> * __thiscall
TShaderMapRef<FSubsurfaceIndirectDispatchCS>::TShaderMapRef<FSubsurfaceIndirectDispatchCS>
          (TShaderMapRef<FSubsurfaceIndirectDispatchCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FSubsurfaceIndirectDispatchCS::FSubsurfacePassFunction,FSubsurfaceIndirectDispatchCS::FDimensionQuality,FSubsurfaceIndirectDispatchCS::FBilateralFilterKernelFunctionType,FSubsurfaceIndirectDispatchCS::FSubsurfaceType,FSubsurfaceIndirectDispatchCS::FDimensionHalfRes,FSubsurfaceIndirectDispatchCS::FRunningInSeparable,FSubsurfaceIndirectDispatchCS::FDimensionEnableProfileIDCache>
          *param_2)

{
  int iVar1;
  EShaderPlatform EVar2;
  ESubsurfacePass EVar3;
  EQuality EVar4;
  EBilateralFilterKernelFunctionType EVar5;
  ESubsurfaceType EVar6;
  code *pcVar7;
  bool bVar8;
  EShaderPermutationPrecacheRequest EVar9;
  TShaderMapRef<FSubsurfaceIndirectDispatchCS> *pTVar10;
  FShaderType *pFVar11;
  FName this_00;
  FGlobalShaderType *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_68;
  FString local_58;
  FGlobalShaderPermutationParameters local_48;
  
  EVar3 = param_2->DimensionValue;
  if (((1 < (int)EVar3) || ((int)EVar3 < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar10 = (TShaderMapRef<FSubsurfaceIndirectDispatchCS> *)(*pcVar7)();
    return pTVar10;
  }
  EVar4 = (param_2->Tail).DimensionValue;
  if (((2 < (int)EVar4) || ((int)EVar4 < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar10 = (TShaderMapRef<FSubsurfaceIndirectDispatchCS> *)(*pcVar7)();
    return pTVar10;
  }
  EVar5 = (param_2->Tail).Tail.DimensionValue;
  if (((1 < (int)EVar5) || ((int)EVar5 < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar10 = (TShaderMapRef<FSubsurfaceIndirectDispatchCS> *)(*pcVar7)();
    return pTVar10;
  }
  EVar6 = (param_2->Tail).Tail.Tail.DimensionValue;
  if (((1 < (int)EVar6) || ((int)EVar6 < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar10 = (TShaderMapRef<FSubsurfaceIndirectDispatchCS> *)(*pcVar7)();
    return pTVar10;
  }
  iVar1 = EVar3 + EVar4 * 2 +
                  (EVar5 + ((-(uint)((param_2->Tail).Tail.Tail.Tail.Tail.DimensionValue != false) &
                            4) + (-(uint)((param_2->Tail).Tail.Tail.Tail.DimensionValue != false) &
                                 2) + EVar6 +
                                 (-(uint)((param_2->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue !=
                                         false) & 8)) * 2) * 6;
  pFVar11 = (FShaderType *)FSubsurfaceIndirectDispatchCS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_68,pFVar11,iVar1);
  if (local_68.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_58);
    FSubsurfaceIndirectDispatchCS::GetStaticType();
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TShaderMapRef<FSubsurfaceIndirectDispatchCS> *)(*pcVar7)();
      return pTVar10;
    }
  }
  EVar2 = param_1->Platform;
  pFVar12 = FSubsurfaceIndirectDispatchCS::GetStaticType();
  local_48._8_4_ = 1;
  local_48.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar12->field_0x20;
  local_48.GlobalShaderName.Number = *(uint *)&pFVar12->field_0x24;
  local_48._0_2_ = EVar2;
  local_48._4_4_ = iVar1;
  EVar9 = FSubsurfaceIndirectDispatchCS::ShouldPrecachePermutation(&local_48);
  if (EVar9 == NotUsed) {
    `FGlobalShaderMap::GetShader<FSubsurfaceIndirectDispatchCS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  *(FShader **)this = local_68.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_68.ShaderMap;
  return this;
}

// TShaderMapRef<FSubsurfaceIndirectDispatchSetupCS> @ 14520fa80

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

TShaderMapRef<FSubsurfaceIndirectDispatchSetupCS> * __thiscall
TShaderMapRef<FSubsurfaceIndirectDispatchSetupCS>::TShaderMapRef<FSubsurfaceIndirectDispatchSetupCS>
          (TShaderMapRef<FSubsurfaceIndirectDispatchSetupCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FSubsurfaceIndirectDispatchSetupCS::FDimensionHalfRes,FSubsurfaceIndirectDispatchSetupCS::FDimensionCheckerboard,FSubsurfaceIndirectDispatchSetupCS::FRunningInSeparable,FSubsurfaceIndirectDispatchSetupCS::FDimensionEnableProfileIDCache,FSubsurfaceIndirectDispatchSetupCS::FDimensionQuality,FSubsurfaceIndirectDispatchSetupCS::FDimensionSetupPass>
          *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  EQuality EVar4;
  ESubsurfaceSetupPass EVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  TShaderMapRef<FSubsurfaceIndirectDispatchSetupCS> *pTVar9;
  FShaderType *pFVar10;
  FName this_00;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  EVar4 = (param_2->Tail).Tail.Tail.Tail.DimensionValue;
  bVar8 = param_2->DimensionValue;
  bVar1 = (param_2->Tail).DimensionValue;
  bVar2 = (param_2->Tail).Tail.DimensionValue;
  bVar3 = (param_2->Tail).Tail.Tail.DimensionValue;
  if (((1 < (int)EVar4) || ((int)EVar4 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TShaderMapRef<FSubsurfaceIndirectDispatchSetupCS> *)(*pcVar6)();
    return pTVar9;
  }
  EVar5 = (param_2->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  if (((1 < (int)EVar5) || ((int)EVar5 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TShaderMapRef<FSubsurfaceIndirectDispatchSetupCS> *)(*pcVar6)();
    return pTVar9;
  }
  pFVar10 = (FShaderType *)FSubsurfaceIndirectDispatchSetupCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_48,pFVar10,
             (-(uint)(bVar1 != false) & 2) +
             (-(uint)(bVar3 != false) & 8) + (uint)(bVar8 != false) +
             (EVar4 + EVar5 * 2) * 0x10 + (-(uint)(bVar2 != false) & 4));
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_38);
    FSubsurfaceIndirectDispatchSetupCS::GetStaticType();
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TShaderMapRef<FSubsurfaceIndirectDispatchSetupCS> *)(*pcVar6)();
      return pTVar9;
    }
  }
  FSubsurfaceIndirectDispatchSetupCS::GetStaticType();
  *(FShader **)this = local_48.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_48.ShaderMap;
  return this;
}

// TShaderMapRef<FSubsurfaceTileFallbackScreenPassVS> @ 14520fc30

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

TShaderMapRef<FSubsurfaceTileFallbackScreenPassVS> * __thiscall
TShaderMapRef<FSubsurfaceTileFallbackScreenPassVS>::
TShaderMapRef<FSubsurfaceTileFallbackScreenPassVS>
          (TShaderMapRef<FSubsurfaceTileFallbackScreenPassVS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FSubsurfaceTileFallbackScreenPassVS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FSubsurfaceTileFallbackScreenPassVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FSubsurfaceTileFallbackScreenPassVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FSubsurfaceTileFallbackScreenPassVS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FSubsurfaceTileFallbackScreenPassVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FSubsurfaceTilePassVS> @ 14520fd10

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

TShaderMapRef<FSubsurfaceTilePassVS> * __thiscall
TShaderMapRef<FSubsurfaceTilePassVS>::TShaderMapRef<FSubsurfaceTilePassVS>
          (TShaderMapRef<FSubsurfaceTilePassVS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FSubsurfaceTilePassVS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FSubsurfaceTilePassVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FSubsurfaceTilePassVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FSubsurfaceTilePassVS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FSubsurfaceTilePassVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FUpscaleCS> @ 14520fdf0

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

TShaderMapRef<FUpscaleCS> * __thiscall
TShaderMapRef<FUpscaleCS>::TShaderMapRef<FUpscaleCS>
          (TShaderMapRef<FUpscaleCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FUpscaleCS::FMethodDim,FUpscaleCS::FMethodSetDim,FUpscaleCS::FAlphaChannelDim,FUpscaleCS::FLensDistortionDim,FUpscaleCS::FSharpeningQualityDim>
          *param_2)

{
  EUpscaleMethod EVar1;
  EMethodSet EVar2;
  bool bVar3;
  ESharpeningQuality EVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TShaderMapRef<FUpscaleCS> *pTVar8;
  FShaderType *pFVar9;
  FName this_00;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  EVar1 = param_2->DimensionValue;
  if ((Area < EVar1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TShaderMapRef<FUpscaleCS> *)(*pcVar5)();
    return pTVar8;
  }
  EVar2 = (param_2->Tail).DimensionValue;
  if ((Complex < EVar2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TShaderMapRef<FUpscaleCS> *)(*pcVar5)();
    return pTVar8;
  }
  bVar6 = (param_2->Tail).Tail.DimensionValue;
  bVar3 = (param_2->Tail).Tail.Tail.DimensionValue;
  EVar4 = (param_2->Tail).Tail.Tail.Tail.DimensionValue;
  if ((High < EVar4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TShaderMapRef<FUpscaleCS> *)(*pcVar5)();
    return pTVar8;
  }
  pFVar9 = (FShaderType *)FUpscaleCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_48,pFVar9,
             (uint)EVar1 +
             ((-(uint)(bVar6 != false) & 3) + (uint)EVar2 + (-(uint)(bVar3 != false) & 6) +
             ((uint)EVar4 + (uint)EVar4 * 2) * 4) * 9);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_38);
    FUpscaleCS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TShaderMapRef<FUpscaleCS> *)(*pcVar5)();
      return pTVar8;
    }
  }
  FUpscaleCS::GetStaticType();
  *(FShader **)this = local_48.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_48.ShaderMap;
  return this;
}

// TShaderMapRef<FRayTracingAmbientOcclusionRGS> @ 1452fd800

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

TShaderMapRef<FRayTracingAmbientOcclusionRGS> * __thiscall
TShaderMapRef<FRayTracingAmbientOcclusionRGS>::TShaderMapRef<FRayTracingAmbientOcclusionRGS>
          (TShaderMapRef<FRayTracingAmbientOcclusionRGS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FRayTracingAmbientOcclusionRGS::FEnableTwoSidedGeometryDim,FRayTracingAmbientOcclusionRGS::FEnableMaterialsDim>
          *param_2)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderMapRef<FRayTracingAmbientOcclusionRGS> *pTVar5;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar3 = (param_2->Tail).DimensionValue;
  bVar1 = param_2->DimensionValue;
  pFVar4 = (FShaderType *)FRayTracingAmbientOcclusionRGS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_28,pFVar4,(-(uint)(bVar3 != false) & 2) + (uint)(bVar1 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FRayTracingAmbientOcclusionRGS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderMapRef<FRayTracingAmbientOcclusionRGS> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FRayTracingAmbientOcclusionRGS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FCubeFilterPS> @ 145362750

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

TShaderMapRef<FCubeFilterPS> * __thiscall
TShaderMapRef<FCubeFilterPS>::TShaderMapRef<FCubeFilterPS>
          (TShaderMapRef<FCubeFilterPS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FCubeFilterPS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FCubeFilterPS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FCubeFilterPS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FCubeFilterPS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FCubeFilterPS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FOcclusionRGS> @ 145362830

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

TShaderMapRef<FOcclusionRGS> * __thiscall
TShaderMapRef<FOcclusionRGS>::TShaderMapRef<FOcclusionRGS>
          (TShaderMapRef<FOcclusionRGS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FOcclusionRGS::FLightTypeDim,FOcclusionRGS::FAvoidSelfIntersectionTraceDim,FOcclusionRGS::FDenoiserOutputDim,FOcclusionRGS::FHairLighting,FOcclusionRGS::FEnableMultipleSamplesPerPixel,FOcclusionRGS::FEnableTransmissionDim>
          *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TShaderMapRef<FOcclusionRGS> *pTVar9;
  FShaderType *pFVar10;
  FName this_00;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  iVar1 = param_2->DimensionValue;
  if (((3 < iVar1) || (iVar1 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TShaderMapRef<FOcclusionRGS> *)(*pcVar5)();
    return pTVar9;
  }
  iVar2 = (param_2->Tail).Tail.DimensionValue;
  bVar6 = (param_2->Tail).DimensionValue;
  if (((2 < iVar2) || (iVar2 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TShaderMapRef<FOcclusionRGS> *)(*pcVar5)();
    return pTVar9;
  }
  iVar3 = (param_2->Tail).Tail.Tail.DimensionValue;
  if (((1 < iVar3) || (iVar3 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TShaderMapRef<FOcclusionRGS> *)(*pcVar5)();
    return pTVar9;
  }
  bVar7 = (param_2->Tail).Tail.Tail.Tail.DimensionValue;
  iVar4 = (param_2->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  if (((1 < iVar4) || (iVar4 < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TShaderMapRef<FOcclusionRGS> *)(*pcVar5)();
    return pTVar9;
  }
  pFVar10 = (FShaderType *)FOcclusionRGS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_48,pFVar10,
             (-(uint)(bVar6 != false) & 4) + iVar1 +
             iVar2 * 8 + ((-(uint)(bVar7 != false) & 2) + iVar3 + iVar4 * 4) * 0x18);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_38);
    FOcclusionRGS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TShaderMapRef<FOcclusionRGS> *)(*pcVar5)();
      return pTVar9;
    }
  }
  FOcclusionRGS::GetStaticType();
  *(FShader **)this = local_48.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_48.ShaderMap;
  return this;
}

// TShaderMapRef<FRenderRealTimeReflectionHeightFogVS> @ 1453f9220

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

TShaderMapRef<FRenderRealTimeReflectionHeightFogVS> * __thiscall
TShaderMapRef<FRenderRealTimeReflectionHeightFogVS>::
TShaderMapRef<FRenderRealTimeReflectionHeightFogVS>
          (TShaderMapRef<FRenderRealTimeReflectionHeightFogVS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FRenderRealTimeReflectionHeightFogVS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FRenderRealTimeReflectionHeightFogVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FRenderRealTimeReflectionHeightFogVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FRenderRealTimeReflectionHeightFogVS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FRenderRealTimeReflectionHeightFogVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FCopyRectPS> @ 14551d270

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

TShaderMapRef<FCopyRectPS> * __thiscall
TShaderMapRef<FCopyRectPS>::TShaderMapRef<FCopyRectPS>
          (TShaderMapRef<FCopyRectPS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FCopyRectPS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FCopyRectPS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FCopyRectPS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FCopyRectPS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FCopyRectPS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FBuildShadingEnergyConservationTableCS> @ 145572980

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

TShaderMapRef<FBuildShadingEnergyConservationTableCS> * __thiscall
TShaderMapRef<FBuildShadingEnergyConservationTableCS>::
TShaderMapRef<FBuildShadingEnergyConservationTableCS>
          (TShaderMapRef<FBuildShadingEnergyConservationTableCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FBuildShadingEnergyConservationTableCS::FEnergyTableDim> *param_2
          )

{
  EEnergyTableType EVar1;
  code *pcVar2;
  bool bVar3;
  TShaderMapRef<FBuildShadingEnergyConservationTableCS> *pTVar4;
  FShaderType *pFVar5;
  FName this_00;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  EVar1 = param_2->DimensionValue;
  if (((3 < (int)EVar1) || ((int)EVar1 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TShaderMapRef<FBuildShadingEnergyConservationTableCS> *)(*pcVar2)();
    return pTVar4;
  }
  pFVar5 = (FShaderType *)FBuildShadingEnergyConservationTableCS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar5,EVar1);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FBuildShadingEnergyConservationTableCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FBuildShadingEnergyConservationTableCS> *)(*pcVar2)();
      return pTVar4;
    }
  }
  FBuildShadingEnergyConservationTableCS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FRenderCameraAerialPerspectiveVolumeCS> @ 145664930

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

TShaderMapRef<FRenderCameraAerialPerspectiveVolumeCS> * __thiscall
TShaderMapRef<FRenderCameraAerialPerspectiveVolumeCS>::
TShaderMapRef<FRenderCameraAerialPerspectiveVolumeCS>
          (TShaderMapRef<FRenderCameraAerialPerspectiveVolumeCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<_anonymous_namespace_::FSampleCloudSkyAO,A0xfe0c12aa::FSecondAtmosphereLight,A0xfe0c12aa::FSampleOpaqueShadow,A0xfe0c12aa::FSampleCloudShadow,A0xfe0c12aa::FSeparateMieAndRayleighScattering,A0xfe0c12aa::FRealTimeReflectionLUT>
          *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  FShaderType *pFVar8;
  FName this_00;
  TShaderMapRef<FRenderCameraAerialPerspectiveVolumeCS> *pTVar9;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar7 = (param_2->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  bVar1 = (param_2->Tail).Tail.Tail.DimensionValue;
  bVar2 = (param_2->Tail).Tail.Tail.Tail.DimensionValue;
  bVar3 = (param_2->Tail).DimensionValue;
  bVar4 = param_2->DimensionValue;
  bVar5 = (param_2->Tail).Tail.DimensionValue;
  pFVar8 = (FShaderType *)FRenderCameraAerialPerspectiveVolumeCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_28,pFVar8,
             (-(uint)(bVar1 != false) & 8) + (-(uint)(bVar7 != false) & 0x20) +
             (-(uint)(bVar2 != false) & 0x10) + (-(uint)(bVar3 != false) & 2) +
             (uint)(bVar4 != false) + (-(uint)(bVar5 != false) & 4));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FRenderCameraAerialPerspectiveVolumeCS::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TShaderMapRef<FRenderCameraAerialPerspectiveVolumeCS> *)(*pcVar6)();
      return pTVar9;
    }
  }
  FRenderCameraAerialPerspectiveVolumeCS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FRenderSkyViewLutCS> @ 145664a60

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

TShaderMapRef<FRenderSkyViewLutCS> * __thiscall
TShaderMapRef<FRenderSkyViewLutCS>::TShaderMapRef<FRenderSkyViewLutCS>
          (TShaderMapRef<FRenderSkyViewLutCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<_anonymous_namespace_::FSampleCloudSkyAO,A0xfe0c12aa::FSecondAtmosphereLight,A0xfe0c12aa::FSampleOpaqueShadow,A0xfe0c12aa::FSampleCloudShadow,A0xfe0c12aa::FRealTimeReflectionLUT>
          *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  FShaderType *pFVar7;
  FName this_00;
  TShaderMapRef<FRenderSkyViewLutCS> *pTVar8;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar6 = (param_2->Tail).Tail.Tail.Tail.DimensionValue;
  bVar1 = (param_2->Tail).Tail.DimensionValue;
  bVar2 = (param_2->Tail).DimensionValue;
  bVar3 = (param_2->Tail).Tail.Tail.DimensionValue;
  bVar4 = param_2->DimensionValue;
  pFVar7 = (FShaderType *)FRenderSkyViewLutCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_28,pFVar7,
             (-(uint)(bVar1 != false) & 4) + (-(uint)(bVar6 != false) & 0x10) +
             (-(uint)(bVar2 != false) & 2) + (-(uint)(bVar3 != false) & 8) + (uint)(bVar4 != false))
  ;
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FRenderSkyViewLutCS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TShaderMapRef<FRenderSkyViewLutCS> *)(*pcVar5)();
      return pTVar8;
    }
  }
  FRenderSkyViewLutCS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FWaterTileClassificationBuildListsCS> @ 145664b90

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

TShaderMapRef<FWaterTileClassificationBuildListsCS> * __thiscall
TShaderMapRef<FWaterTileClassificationBuildListsCS>::
TShaderMapRef<FWaterTileClassificationBuildListsCS>
          (TShaderMapRef<FWaterTileClassificationBuildListsCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FWaterTileClassificationBuildListsCS::FWaveOps,FWaterTileClassificationBuildListsCS::FDownsampleFactorX,FWaterTileClassificationBuildListsCS::FDownsampleFactorY,FWaterTileClassificationBuildListsCS::FOutputClearTiles>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  TShaderMapRef<FWaterTileClassificationBuildListsCS> *pTVar4;
  FShaderType *pFVar5;
  FName this_00;
  int iVar6;
  int iVar7;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_38;
  FString local_28;
  
  bVar3 = param_2->DimensionValue;
  iVar7 = (param_2->Tail).DimensionValue + -1;
  if (((1 < iVar7) || (iVar7 < 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TShaderMapRef<FWaterTileClassificationBuildListsCS> *)(*pcVar1)();
    return pTVar4;
  }
  iVar6 = (param_2->Tail).Tail.DimensionValue + -1;
  if (((1 < iVar6) || (iVar6 < 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TShaderMapRef<FWaterTileClassificationBuildListsCS> *)(*pcVar1)();
    return pTVar4;
  }
  bVar2 = (param_2->Tail).Tail.Tail.DimensionValue;
  pFVar5 = (FShaderType *)FWaterTileClassificationBuildListsCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_38,pFVar5,
             (uint)(bVar3 != false) + (iVar7 + ((-(uint)(bVar2 != false) & 2) + iVar6) * 2) * 2);
  if (local_38.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_28);
    FWaterTileClassificationBuildListsCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FWaterTileClassificationBuildListsCS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FWaterTileClassificationBuildListsCS::GetStaticType();
  *(FShader **)this = local_38.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_38.ShaderMap;
  return this;
}

// TShaderMapRef<FWriteToSliceVS> @ 14574e390

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

TShaderMapRef<FWriteToSliceVS> * __thiscall
TShaderMapRef<FWriteToSliceVS>::TShaderMapRef<FWriteToSliceVS>
          (TShaderMapRef<FWriteToSliceVS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FWriteToSliceVS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FWriteToSliceVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FWriteToSliceVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FWriteToSliceVS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FWriteToSliceVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FComposeVolumetricRTOverScenePS> @ 145856aa0

/* WARNING: Type propagation algorithm not settling */
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

TShaderMapRef<FComposeVolumetricRTOverScenePS> * __thiscall
TShaderMapRef<FComposeVolumetricRTOverScenePS>::TShaderMapRef<FComposeVolumetricRTOverScenePS>
          (TShaderMapRef<FComposeVolumetricRTOverScenePS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FComposeVolumetricRTOverScenePS::FUpsamplingMode,FComposeVolumetricRTOverScenePS::FRenderUnderWaterBuffer,FComposeVolumetricRTOverScenePS::FRenderCameraComposeWithWater,FComposeVolumetricRTOverScenePS::FMSAASampleCount,FComposeVolumetricRTOverScenePS::FApplyFog,FComposeVolumetricRTOverScenePS::FApplyLocalFogVolume,FComposeVolumetricRTOverScenePS::FMinMaxDepthAvailable>
          *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TShaderMapRef<FComposeVolumetricRTOverScenePS> *pTVar8;
  FShaderType *pFVar9;
  FName this_00;
  int iVar10;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_38;
  FString local_28;
  
  iVar4 = param_2->DimensionValue;
  if (((4 < iVar4) || (iVar4 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TShaderMapRef<FComposeVolumetricRTOverScenePS> *)(*pcVar5)();
    return pTVar8;
  }
  iVar10 = (param_2->Tail).Tail.Tail.DimensionValue;
  bVar6 = (param_2->Tail).DimensionValue;
  bVar1 = (param_2->Tail).Tail.DimensionValue;
  if (iVar10 == 1) {
    iVar10 = 3;
  }
  else if (iVar10 == 2) {
    iVar10 = 2;
  }
  else if (iVar10 == 4) {
    iVar10 = 1;
  }
  else {
    if ((iVar10 != 8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TShaderMapRef<FComposeVolumetricRTOverScenePS> *)(*pcVar5)();
      return pTVar8;
    }
    iVar10 = 0;
  }
  bVar7 = (param_2->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar2 = (param_2->Tail).Tail.Tail.Tail.DimensionValue;
  bVar3 = (param_2->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  pFVar9 = (FShaderType *)FComposeVolumetricRTOverScenePS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_38,pFVar9,
             (-(uint)(bVar1 != false) & 10) + iVar4 +
             ((-(uint)(bVar3 != false) & 8) +
             (-(uint)(bVar2 != false) & 4) + iVar10 + (-(uint)(bVar7 != false) & 0x10)) * 0x14 +
             (-(uint)(bVar6 != false) & 5));
  if (local_38.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_28);
    FComposeVolumetricRTOverScenePS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TShaderMapRef<FComposeVolumetricRTOverScenePS> *)(*pcVar5)();
      return pTVar8;
    }
  }
  FComposeVolumetricRTOverScenePS::GetStaticType();
  *(FShader **)this = local_38.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_38.ShaderMap;
  return this;
}

// TShaderMapRef<RuntimeVirtualTexture::FShader_VirtualTextureCopy_PS<0>_> @ 1458cabc0

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

TShaderMapRef<RuntimeVirtualTexture::FShader_VirtualTextureCopy_PS<0>_> * __thiscall
TShaderMapRef<RuntimeVirtualTexture::FShader_VirtualTextureCopy_PS<0>_>::
TShaderMapRef<RuntimeVirtualTexture::FShader_VirtualTextureCopy_PS<0>_>
          (TShaderMapRef<RuntimeVirtualTexture::FShader_VirtualTextureCopy_PS<0>_> *this,
          FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<RuntimeVirtualTexture::FShader_VirtualTextureCopy_PS<0>_> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)RuntimeVirtualTexture::FShader_VirtualTextureCopy_PS<0>::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    RuntimeVirtualTexture::FShader_VirtualTextureCopy_PS<0>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<RuntimeVirtualTexture::FShader_VirtualTextureCopy_PS<0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  RuntimeVirtualTexture::FShader_VirtualTextureCopy_PS<0>::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<RuntimeVirtualTexture::FShader_VirtualTextureCopy_VS> @ 1458caca0

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

TShaderMapRef<RuntimeVirtualTexture::FShader_VirtualTextureCopy_VS> * __thiscall
TShaderMapRef<RuntimeVirtualTexture::FShader_VirtualTextureCopy_VS>::
TShaderMapRef<RuntimeVirtualTexture::FShader_VirtualTextureCopy_VS>
          (TShaderMapRef<RuntimeVirtualTexture::FShader_VirtualTextureCopy_VS> *this,
          FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<RuntimeVirtualTexture::FShader_VirtualTextureCopy_VS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)RuntimeVirtualTexture::FShader_VirtualTextureCopy_VS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    RuntimeVirtualTexture::FShader_VirtualTextureCopy_VS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<RuntimeVirtualTexture::FShader_VirtualTextureCopy_VS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  RuntimeVirtualTexture::FShader_VirtualTextureCopy_VS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FWideCustomResolveVS> @ 145933d90

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

TShaderMapRef<FWideCustomResolveVS> * __thiscall
TShaderMapRef<FWideCustomResolveVS>::TShaderMapRef<FWideCustomResolveVS>
          (TShaderMapRef<FWideCustomResolveVS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FWideCustomResolveVS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FWideCustomResolveVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FWideCustomResolveVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FWideCustomResolveVS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FWideCustomResolveVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

