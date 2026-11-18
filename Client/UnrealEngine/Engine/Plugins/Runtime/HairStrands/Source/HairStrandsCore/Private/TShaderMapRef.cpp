// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// TShaderMapRef<FHairFollicleMaskPS> @ 14e07bf30

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

TShaderMapRef<FHairFollicleMaskPS> * __thiscall
TShaderMapRef<FHairFollicleMaskPS>::TShaderMapRef<FHairFollicleMaskPS>
          (TShaderMapRef<FHairFollicleMaskPS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FHairFollicleMaskPS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FHairFollicleMaskPS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FHairFollicleMaskPS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FHairFollicleMaskPS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FHairFollicleMaskPS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FHairFollicleMaskVS> @ 14e07c010

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

TShaderMapRef<FHairFollicleMaskVS> * __thiscall
TShaderMapRef<FHairFollicleMaskVS>::TShaderMapRef<FHairFollicleMaskVS>
          (TShaderMapRef<FHairFollicleMaskVS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FHairFollicleMaskVS::FUVType> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TShaderMapRef<FHairFollicleMaskVS> *pTVar4;
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
    pTVar4 = (TShaderMapRef<FHairFollicleMaskVS> *)(*pcVar2)();
    return pTVar4;
  }
  pFVar5 = (FShaderType *)FHairFollicleMaskVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar5,iVar1);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FHairFollicleMaskVS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FHairFollicleMaskVS> *)(*pcVar2)();
      return pTVar4;
    }
  }
  FHairFollicleMaskVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FHairInterpolationCS> @ 14e07c130

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

TShaderMapRef<FHairInterpolationCS> * __thiscall
TShaderMapRef<FHairInterpolationCS>::TShaderMapRef<FHairInterpolationCS>
          (TShaderMapRef<FHairInterpolationCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
          *param_2)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  TShaderMapRef<FHairInterpolationCS> *pTVar6;
  FShaderType *pFVar7;
  FName this_00;
  int iVar8;
  int iVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_68;
  FString local_58;
  TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
  local_48;
  
  iVar9 = param_2->DimensionValue;
  if (((3 < iVar9) || (iVar9 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TShaderMapRef<FHairInterpolationCS> *)(*pcVar3)();
    return pTVar6;
  }
  iVar2 = (param_2->Tail).Tail.Tail.DimensionValue;
  bVar4 = (param_2->Tail).DimensionValue;
  bVar1 = (param_2->Tail).Tail.DimensionValue;
  if (((2 < iVar2) || (iVar2 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TShaderMapRef<FHairInterpolationCS> *)(*pcVar3)();
    return pTVar6;
  }
  iVar8 = (param_2->Tail).Tail.Tail.Tail.DimensionValue;
  if (iVar8 == 4) {
    iVar8 = 3;
  }
  else if (iVar8 == 8) {
    iVar8 = 2;
  }
  else if (iVar8 == 0x10) {
    iVar8 = 1;
  }
  else {
    if ((iVar8 != 0x20) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TShaderMapRef<FHairInterpolationCS> *)(*pcVar3)();
      return pTVar6;
    }
    iVar8 = 0;
  }
  iVar9 = iVar9 + (-(uint)(bVar1 != false) & 8) +
          (iVar2 + ((-(uint)((param_2->Tail).Tail.Tail.Tail.Tail.DimensionValue != false) & 4) +
                   iVar8) * 3) * 0x10 + (-(uint)(bVar4 != false) & 4);
  pFVar7 = (FShaderType *)FHairInterpolationCS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_68,pFVar7,iVar9);
  if (local_68.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_58);
    FHairInterpolationCS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TShaderMapRef<FHairInterpolationCS> *)(*pcVar3)();
      return pTVar6;
    }
  }
  FHairInterpolationCS::GetStaticType();
  TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
  ::
  TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
            (&local_48,iVar9);
  if ((local_48.Tail.Tail.DimensionValue == false) && (0 < GStrandHairInterpolationForceSingleGuide)
     ) {
    `FGlobalShaderMap::GetShader<FHairInterpolationCS>'::__l2::<lambda_1>::operator()(local_res8);
  }
  *(FShader **)this = local_68.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_68.ShaderMap;
  return this;
}

// TShaderMapRef<FHairMeshesInterpolateCS> @ 14e07c350

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

TShaderMapRef<FHairMeshesInterpolateCS> * __thiscall
TShaderMapRef<FHairMeshesInterpolateCS>::TShaderMapRef<FHairMeshesInterpolateCS>
          (TShaderMapRef<FHairMeshesInterpolateCS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FHairMeshesInterpolateCS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FHairMeshesInterpolateCS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FHairMeshesInterpolateCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FHairMeshesInterpolateCS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FHairMeshesInterpolateCS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

