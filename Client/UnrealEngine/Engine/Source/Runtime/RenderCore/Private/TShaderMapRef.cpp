// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// TShaderMapRef<TOneColorVS<1,0>_> @ 145d08d90

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

TShaderMapRef<TOneColorVS<1,0>_> * __thiscall
TShaderMapRef<TOneColorVS<1,0>_>::TShaderMapRef<TOneColorVS<1,0>_>
          (TShaderMapRef<TOneColorVS<1,0>_> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FGlobalShaderMapSection **ppFVar4;
  FShader *pFVar5;
  FName this_00;
  TShaderMapRef<TOneColorVS<1,0>_> *pTVar6;
  FGlobalShaderMapSection *pFVar7;
  undefined1 local_res8 [8];
  FString local_18;
  
  pFVar3 = TOneColorVS<1,0>::GetStaticType();
  ppFVar4 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
            ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                    *)param_1,(FHashedName *)&pFVar3->field_0x30);
  if (ppFVar4 == (FGlobalShaderMapSection **)0x0) {
    pFVar5 = (FShader *)0x0;
  }
  else {
    pFVar7 = *ppFVar4;
    pFVar5 = FShaderMapContent::GetShader
                       (*(FShaderMapContent **)&pFVar7->field_0x28,
                        (FHashedName *)&pFVar3->field_0x28,0);
    if (pFVar5 != (FShader *)0x0) goto LAB_145d08e69;
  }
  pFVar7 = (FGlobalShaderMapSection *)0x0;
  this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
  ::FName::ToString((FName *)this_00,&local_18);
  TOneColorVS<1,0>::GetStaticType();
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Shader.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                     ,0xc0,L"Failed to find shader type %s in Platform %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TShaderMapRef<TOneColorVS<1,0>_> *)(*pcVar1)();
    return pTVar6;
  }
LAB_145d08e69:
  TOneColorVS<1,0>::GetStaticType();
  *(FShader **)this = pFVar5;
  *(FGlobalShaderMapSection **)&this->field_0x8 = pFVar7;
  return this;
}

// TShaderMapRef<TOneColorPixelShaderMRT> @ 145d08ea0

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

TShaderMapRef<TOneColorPixelShaderMRT> * __thiscall
TShaderMapRef<TOneColorPixelShaderMRT>::TShaderMapRef<TOneColorPixelShaderMRT>
          (TShaderMapRef<TOneColorPixelShaderMRT> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  TShaderMapRef<TOneColorPixelShaderMRT> *pTVar5;
  FGlobalShaderType *pFVar6;
  FGlobalShaderMapSection **ppFVar7;
  FShader *pFVar8;
  FName this_00;
  FGlobalShaderMapSection *pFVar9;
  int iVar10;
  undefined1 local_res10 [8];
  FString local_38;
  
  iVar10 = param_2->DimensionValue + -1;
  if (((7 < iVar10) || (iVar10 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TShaderMapRef<TOneColorPixelShaderMRT> *)(*pcVar2)();
    return pTVar5;
  }
  bVar3 = (param_2->Tail).DimensionValue;
  iVar1 = (param_2->Tail).Tail.DimensionValue;
  if (((7 < iVar1) || (iVar1 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TShaderMapRef<TOneColorPixelShaderMRT> *)(*pcVar2)();
    return pTVar5;
  }
  pFVar6 = TOneColorPixelShaderMRT::GetStaticType();
  ppFVar7 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
            ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                    *)param_1,(FHashedName *)&pFVar6->field_0x30);
  if (ppFVar7 == (FGlobalShaderMapSection **)0x0) {
    pFVar8 = (FShader *)0x0;
  }
  else {
    pFVar9 = *ppFVar7;
    pFVar8 = FShaderMapContent::GetShader
                       (*(FShaderMapContent **)&pFVar9->field_0x28,
                        (FHashedName *)&pFVar6->field_0x28,
                        iVar10 + (-(uint)(bVar3 != false) & 8) + iVar1 * 0x10);
    if (pFVar8 != (FShader *)0x0) goto LAB_145d09000;
  }
  pFVar9 = (FGlobalShaderMapSection *)0x0;
  this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
  ::FName::ToString((FName *)this_00,&local_38);
  TOneColorPixelShaderMRT::GetStaticType();
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Shader.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                     ,0xc0,L"Failed to find shader type %s in Platform %s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TShaderMapRef<TOneColorPixelShaderMRT> *)(*pcVar2)();
    return pTVar5;
  }
LAB_145d09000:
  TOneColorPixelShaderMRT::GetStaticType();
  *(FGlobalShaderMapSection **)&this->field_0x8 = pFVar9;
  *(FShader **)this = pFVar8;
  return this;
}

