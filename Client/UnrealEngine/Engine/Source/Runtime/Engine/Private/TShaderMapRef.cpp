// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// TShaderMapRef<TParticleSimulationPS<1>_> @ 1480f2690

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

TShaderMapRef<TParticleSimulationPS<1>_> * __thiscall
TShaderMapRef<TParticleSimulationPS<1>_>::TShaderMapRef<TParticleSimulationPS<1>_>
          (TShaderMapRef<TParticleSimulationPS<1>_> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<TParticleSimulationPS<1>_> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)TParticleSimulationPS<1>::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    TParticleSimulationPS<1>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<TParticleSimulationPS<1>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  TParticleSimulationPS<1>::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<TParticleSimulationPS<2>_> @ 1480f2770

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

TShaderMapRef<TParticleSimulationPS<2>_> * __thiscall
TShaderMapRef<TParticleSimulationPS<2>_>::TShaderMapRef<TParticleSimulationPS<2>_>
          (TShaderMapRef<TParticleSimulationPS<2>_> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<TParticleSimulationPS<2>_> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)TParticleSimulationPS<2>::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    TParticleSimulationPS<2>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<TParticleSimulationPS<2>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  TParticleSimulationPS<2>::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<TParticleSimulationPS<0>_> @ 1480f2850

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

TShaderMapRef<TParticleSimulationPS<0>_> * __thiscall
TShaderMapRef<TParticleSimulationPS<0>_>::TShaderMapRef<TParticleSimulationPS<0>_>
          (TShaderMapRef<TParticleSimulationPS<0>_> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<TParticleSimulationPS<0>_> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)TParticleSimulationPS<0>::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    TParticleSimulationPS<0>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<TParticleSimulationPS<0>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  TParticleSimulationPS<0>::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FParticleTileVS> @ 1480f2930

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

TShaderMapRef<FParticleTileVS> * __thiscall
TShaderMapRef<FParticleTileVS>::TShaderMapRef<FParticleTileVS>
          (TShaderMapRef<FParticleTileVS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FParticleTileVS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FParticleTileVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FParticleTileVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FParticleTileVS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FParticleTileVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FMoveWholeIndirectionTextureCS> @ 148348530

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

TShaderMapRef<FMoveWholeIndirectionTextureCS> * __thiscall
TShaderMapRef<FMoveWholeIndirectionTextureCS>::TShaderMapRef<FMoveWholeIndirectionTextureCS>
          (TShaderMapRef<FMoveWholeIndirectionTextureCS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FMoveWholeIndirectionTextureCS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FMoveWholeIndirectionTextureCS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FMoveWholeIndirectionTextureCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FMoveWholeIndirectionTextureCS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FMoveWholeIndirectionTextureCS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FPatchIndirectionTextureCS> @ 148348610

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

TShaderMapRef<FPatchIndirectionTextureCS> * __thiscall
TShaderMapRef<FPatchIndirectionTextureCS>::TShaderMapRef<FPatchIndirectionTextureCS>
          (TShaderMapRef<FPatchIndirectionTextureCS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FPatchIndirectionTextureCS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FPatchIndirectionTextureCS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FPatchIndirectionTextureCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FPatchIndirectionTextureCS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FPatchIndirectionTextureCS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FCopyCompressCS> @ 1489b2e90

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

TShaderMapRef<FCopyCompressCS> * __thiscall
TShaderMapRef<FCopyCompressCS>::TShaderMapRef<FCopyCompressCS>
          (TShaderMapRef<FCopyCompressCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FCopyCompressCS::FSourceTextureSelector,FCopyCompressCS::FDestSrgb,FCopyCompressCS::FCompressionFormatDim>
          *param_2)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  TShaderMapRef<FCopyCompressCS> *pTVar6;
  FShaderType *pFVar7;
  FName this_00;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_38;
  FString local_28;
  
  iVar2 = (param_2->Tail).Tail.DimensionValue;
  bVar5 = param_2->DimensionValue;
  bVar1 = (param_2->Tail).DimensionValue;
  if (((6 < iVar2) || (iVar2 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TShaderMapRef<FCopyCompressCS> *)(*pcVar3)();
    return pTVar6;
  }
  pFVar7 = (FShaderType *)FCopyCompressCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_38,pFVar7,
             (-(uint)(bVar1 != false) & 2) + (uint)(bVar5 != false) + iVar2 * 4);
  if (local_38.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_28);
    FCopyCompressCS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TShaderMapRef<FCopyCompressCS> *)(*pcVar3)();
      return pTVar6;
    }
  }
  FCopyCompressCS::GetStaticType();
  *(FShader **)this = local_38.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_38.ShaderMap;
  return this;
}

