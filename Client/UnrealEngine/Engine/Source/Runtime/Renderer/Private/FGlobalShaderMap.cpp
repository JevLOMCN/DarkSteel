// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 425

// GetShader<FCapsuleShadowingCS> @ 14471e080

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

TShaderRefBase<FCapsuleShadowingCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FCapsuleShadowingCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FCapsuleShadowingCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FCapsuleShadowingCS::FShapeShadow,FCapsuleShadowingCS::FIndirectPrimitiveType>
          *param_1)

{
  ECapsuleShadowingType EVar1;
  EIndirectShadowingPrimitiveTypes EVar2;
  code *pcVar3;
  bool bVar4;
  TShaderRefBase<FCapsuleShadowingCS,FShaderMapPointerTable> *pTVar5;
  FShaderType *pFVar6;
  FName this_00;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  EVar1 = param_1->DimensionValue;
  if (((4 < (int)EVar1) || ((int)EVar1 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TShaderRefBase<FCapsuleShadowingCS,FShaderMapPointerTable> *)(*pcVar3)();
    return pTVar5;
  }
  EVar2 = (param_1->Tail).DimensionValue;
  if (((2 < (int)EVar2) || ((int)EVar2 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TShaderRefBase<FCapsuleShadowingCS,FShaderMapPointerTable> *)(*pcVar3)();
    return pTVar5;
  }
  pFVar6 = (FShaderType *)FCapsuleShadowingCS::GetStaticType();
  GetShader(this,&local_28,pFVar6,EVar2 + EVar1 + EVar2 * 4);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FCapsuleShadowingCS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FCapsuleShadowingCS,FShaderMapPointerTable> *)(*pcVar3)();
      return pTVar5;
    }
  }
  FCapsuleShadowingCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FCapsuleShadowingCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FCapsuleShadowingUpsamplePS> @ 14471e1e0

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

TShaderRefBase<FCapsuleShadowingUpsamplePS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FCapsuleShadowingUpsamplePS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FCapsuleShadowingUpsamplePS,FShaderMapPointerTable> *__return_storage_ptr__
          ,TShaderPermutationDomain<FCapsuleShadowingUpsamplePS::FUpsampleRequired,FCapsuleShadowingUpsamplePS::FApplySSAO>
           *param_1)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FCapsuleShadowingUpsamplePS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar3 = (param_1->Tail).DimensionValue;
  bVar1 = param_1->DimensionValue;
  pFVar4 = (FShaderType *)FCapsuleShadowingUpsamplePS::GetStaticType();
  GetShader(this,&local_28,pFVar4,(-(uint)(bVar3 != false) & 2) + (uint)(bVar1 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FCapsuleShadowingUpsamplePS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FCapsuleShadowingUpsamplePS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FCapsuleShadowingUpsamplePS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FCapsuleShadowingUpsamplePS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FCapsuleShadowingUpsampleVS> @ 14471e2e0

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

TShaderRefBase<FCapsuleShadowingUpsampleVS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FCapsuleShadowingUpsampleVS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FCapsuleShadowingUpsampleVS,FShaderMapPointerTable> *__return_storage_ptr__
          )

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FCapsuleShadowingUpsampleVS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FCapsuleShadowingUpsampleVS::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FCapsuleShadowingUpsampleVS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)FCapsuleShadowingUpsampleVS::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FCapsuleShadowingUpsampleVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FCapsuleShadowingUpsampleVS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FCapsuleShadowingUpsampleVS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FCapsuleShadowingUpsampleVS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FDistanceFieldShadowingCS> @ 144856e20

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

TShaderRefBase<FDistanceFieldShadowingCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FDistanceFieldShadowingCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FDistanceFieldShadowingCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FDistanceFieldShadowingCS::FCullingType,FDistanceFieldShadowingCS::FShadowQuality,FDistanceFieldShadowingCS::FPrimitiveType,FDistanceFieldShadowingCS::FHasPreviousOutput,FDistanceFieldShadowingCS::FOffsetDataStructure,FDistanceFieldShadowingCS::FCompactCulledObjects,FDistanceFieldShadowingCS::FCullingSubSampleDepth,FDistanceFieldShadowingCS::FStereoRendering>
          *param_1)

{
  EShaderPlatform EVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  EShaderPermutationPrecacheRequest EVar9;
  TShaderRefBase<FDistanceFieldShadowingCS,FShaderMapPointerTable> *pTVar10;
  FShaderType *pFVar11;
  FName this_00;
  FGlobalShaderType *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_78;
  FString local_68;
  FGlobalShaderPermutationParameters local_58;
  
  iVar2 = param_1->DimensionValue;
  if (((2 < iVar2) || (iVar2 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TShaderRefBase<FDistanceFieldShadowingCS,FShaderMapPointerTable> *)(*pcVar6)();
    return pTVar10;
  }
  iVar3 = (param_1->Tail).DimensionValue;
  if (((2 < iVar3) || (iVar3 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TShaderRefBase<FDistanceFieldShadowingCS,FShaderMapPointerTable> *)(*pcVar6)();
    return pTVar10;
  }
  iVar4 = (param_1->Tail).Tail.DimensionValue;
  if (((1 < iVar4) || (iVar4 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TShaderRefBase<FDistanceFieldShadowingCS,FShaderMapPointerTable> *)(*pcVar6)();
    return pTVar10;
  }
  iVar5 = (param_1->Tail).Tail.Tail.Tail.DimensionValue;
  bVar7 = (param_1->Tail).Tail.Tail.DimensionValue;
  if (((2 < iVar5) || (iVar5 < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TShaderRefBase<FDistanceFieldShadowingCS,FShaderMapPointerTable> *)(*pcVar6)();
    return pTVar10;
  }
  iVar2 = iVar2 + (iVar3 + ((-(uint)(bVar7 != false) & 2) + iVar4 +
                           ((-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue !=
                                    false) & 6) +
                           (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue != false) & 3
                           ) + iVar5 +
                           (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue !=
                                   false) & 0xc)) * 4) * 3) * 3;
  pFVar11 = (FShaderType *)FDistanceFieldShadowingCS::GetStaticType();
  GetShader(this,&local_78,pFVar11,iVar2);
  if (local_78.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_68);
    FDistanceFieldShadowingCS::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TShaderRefBase<FDistanceFieldShadowingCS,FShaderMapPointerTable> *)(*pcVar6)();
      return pTVar10;
    }
  }
  EVar1 = this->Platform;
  pFVar12 = FDistanceFieldShadowingCS::GetStaticType();
  local_58._8_4_ = 1;
  local_58.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar12->field_0x20;
  local_58.GlobalShaderName.Number = *(uint *)&pFVar12->field_0x24;
  local_58._0_2_ = EVar1;
  local_58._4_4_ = iVar2;
  EVar9 = FDistanceFieldShadowingCS::ShouldPrecachePermutation(&local_58);
  if (EVar9 == NotUsed) {
    `FGlobalShaderMap::GetShader<FDistanceFieldShadowingCS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  __return_storage_ptr__->ShaderContent = (FDistanceFieldShadowingCS *)local_78.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_78.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FScreenPassVS> @ 144857080

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

TShaderRefBase<FScreenPassVS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FScreenPassVS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FScreenPassVS,FShaderMapPointerTable> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FScreenPassVS,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FScreenPassVS::GetStaticType();
  GetShader(this,&local_28,pFVar3,param_1);
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
      pTVar4 = (TShaderRefBase<FScreenPassVS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FScreenPassVS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FScreenPassVS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FClearIndirectArgBufferCS> @ 1448e4f50

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

TShaderRefBase<FClearIndirectArgBufferCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FClearIndirectArgBufferCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FClearIndirectArgBufferCS,FShaderMapPointerTable> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FClearIndirectArgBufferCS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FClearIndirectArgBufferCS::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FClearIndirectArgBufferCS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)FClearIndirectArgBufferCS::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FClearIndirectArgBufferCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FClearIndirectArgBufferCS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FClearIndirectArgBufferCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FClearIndirectArgBufferCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FCullObjectsToClipmapCS> @ 1448e5040

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

TShaderRefBase<FCullObjectsToClipmapCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FCullObjectsToClipmapCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FCullObjectsToClipmapCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FCullObjectsToClipmapCS::FReadbackHasPendingStreaming> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FCullObjectsToClipmapCS,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar2 = param_1->DimensionValue;
  pFVar3 = (FShaderType *)FCullObjectsToClipmapCS::GetStaticType();
  GetShader(this,&local_28,pFVar3,(uint)(bVar2 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FCullObjectsToClipmapCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FCullObjectsToClipmapCS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FCullObjectsToClipmapCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FCullObjectsToClipmapCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FRenderSingleScatteringWithPreshadingCS> @ 144af7d90

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

TShaderRefBase<FRenderSingleScatteringWithPreshadingCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FRenderSingleScatteringWithPreshadingCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FRenderSingleScatteringWithPreshadingCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FRenderSingleScatteringWithPreshadingCS::FApplyShadowTransmittanceDim,FRenderSingleScatteringWithPreshadingCS::FVoxelCullingDim,FRenderSingleScatteringWithPreshadingCS::FSparseVoxelTracingDim,FRenderSingleScatteringWithPreshadingCS::FFogInscatteringMode,FRenderSingleScatteringWithPreshadingCS::FUseInscatteringVolume,FRenderSingleScatteringWithPreshadingCS::FIndirectLightingMode,FRenderSingleScatteringWithPreshadingCS::FWriteVelocity,FRenderSingleScatteringWithPreshadingCS::FUseAdaptiveVolumetricShadowMap,FRenderSingleScatteringWithPreshadingCS::FDebugDim>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  TShaderRefBase<FRenderSingleScatteringWithPreshadingCS,FShaderMapPointerTable> *pTVar8;
  FShaderType *pFVar9;
  FName this_00;
  int iVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_78;
  FString local_68;
  TShaderPermutationDomain<FRenderSingleScatteringWithPreshadingCS::FApplyShadowTransmittanceDim,FRenderSingleScatteringWithPreshadingCS::FVoxelCullingDim,FRenderSingleScatteringWithPreshadingCS::FSparseVoxelTracingDim,FRenderSingleScatteringWithPreshadingCS::FFogInscatteringMode,FRenderSingleScatteringWithPreshadingCS::FUseInscatteringVolume,FRenderSingleScatteringWithPreshadingCS::FIndirectLightingMode,FRenderSingleScatteringWithPreshadingCS::FWriteVelocity,FRenderSingleScatteringWithPreshadingCS::FUseAdaptiveVolumetricShadowMap,FRenderSingleScatteringWithPreshadingCS::FDebugDim>
  local_58;
  
  bVar7 = (param_1->Tail).DimensionValue;
  bVar1 = param_1->DimensionValue;
  iVar10 = (param_1->Tail).Tail.Tail.DimensionValue;
  bVar2 = (param_1->Tail).Tail.DimensionValue;
  if (((2 < iVar10) || (iVar10 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TShaderRefBase<FRenderSingleScatteringWithPreshadingCS,FShaderMapPointerTable> *)
             (*pcVar4)();
    return pTVar8;
  }
  iVar3 = (param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  bVar5 = (param_1->Tail).Tail.Tail.Tail.DimensionValue;
  if (((2 < iVar3) || (iVar3 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TShaderRefBase<FRenderSingleScatteringWithPreshadingCS,FShaderMapPointerTable> *)
             (*pcVar4)();
    return pTVar8;
  }
  iVar10 = (-(uint)(bVar2 != false) & 4) + (uint)(bVar1 != false) +
           ((-(uint)(bVar5 != false) & 3) + iVar10 +
           ((-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue != false) & 3) +
           (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) & 6) +
           iVar3 + (-(uint)(((TShaderPermutationDomain<FRenderSingleScatteringWithPreshadingCS::FDebugDim>
                              *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 1))->
                            DimensionValue != false) & 0xc)) * 6) * 8 +
           (-(uint)(bVar7 != false) & 2);
  pFVar9 = (FShaderType *)FRenderSingleScatteringWithPreshadingCS::GetStaticType();
  GetShader(this,&local_78,pFVar9,iVar10);
  if (local_78.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res18);
    ::FName::ToString((FName *)this_00,&local_68);
    FRenderSingleScatteringWithPreshadingCS::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TShaderRefBase<FRenderSingleScatteringWithPreshadingCS,FShaderMapPointerTable> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  FRenderSingleScatteringWithPreshadingCS::GetStaticType();
  TShaderPermutationDomain<FRenderSingleScatteringWithPreshadingCS::FApplyShadowTransmittanceDim,FRenderSingleScatteringWithPreshadingCS::FVoxelCullingDim,FRenderSingleScatteringWithPreshadingCS::FSparseVoxelTracingDim,FRenderSingleScatteringWithPreshadingCS::FFogInscatteringMode,FRenderSingleScatteringWithPreshadingCS::FUseInscatteringVolume,FRenderSingleScatteringWithPreshadingCS::FIndirectLightingMode,FRenderSingleScatteringWithPreshadingCS::FWriteVelocity,FRenderSingleScatteringWithPreshadingCS::FUseAdaptiveVolumetricShadowMap,FRenderSingleScatteringWithPreshadingCS::FDebugDim>
  ::
  TShaderPermutationDomain<FRenderSingleScatteringWithPreshadingCS::FApplyShadowTransmittanceDim,FRenderSingleScatteringWithPreshadingCS::FVoxelCullingDim,FRenderSingleScatteringWithPreshadingCS::FSparseVoxelTracingDim,FRenderSingleScatteringWithPreshadingCS::FFogInscatteringMode,FRenderSingleScatteringWithPreshadingCS::FUseInscatteringVolume,FRenderSingleScatteringWithPreshadingCS::FIndirectLightingMode,FRenderSingleScatteringWithPreshadingCS::FWriteVelocity,FRenderSingleScatteringWithPreshadingCS::FUseAdaptiveVolumetricShadowMap,FRenderSingleScatteringWithPreshadingCS::FDebugDim>
            (&local_58,iVar10);
  if ((local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) &&
     (((bVar7 = HeterogeneousVolumes::UseSparseVoxelPerTileCulling(),
       local_58.Tail.DimensionValue != bVar7 ||
       (bVar7 = HeterogeneousVolumes::UseSparseVoxelPipeline(),
       local_58.Tail.Tail.DimensionValue != bVar7)) ||
      (bVar7 = HeterogeneousVolumes::UseLightingCacheForInscattering(),
      local_58.Tail.Tail.Tail.Tail.DimensionValue != bVar7)))) {
    `FGlobalShaderMap::GetShader<FRenderSingleScatteringWithPreshadingCS>'::__l2::<lambda_1>::
    operator()(local_res10);
  }
  __return_storage_ptr__->ShaderContent =
       (FRenderSingleScatteringWithPreshadingCS *)local_78.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_78.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FRenderVolumetricShadowMapForLightWithVoxelGridCS> @ 144af7fb0

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

TShaderRefBase<FRenderVolumetricShadowMapForLightWithVoxelGridCS,FShaderMapPointerTable> *
__thiscall
FGlobalShaderMap::GetShader<FRenderVolumetricShadowMapForLightWithVoxelGridCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FRenderVolumetricShadowMapForLightWithVoxelGridCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FRenderVolumetricShadowMapForLightWithVoxelGridCS::FUseAVSMCompression,FRenderVolumetricShadowMapForLightWithVoxelGridCS::FIsOfflineRender>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  TShaderRefBase<FRenderVolumetricShadowMapForLightWithVoxelGridCS,FShaderMapPointerTable> *pTVar5;
  FShaderType *pFVar6;
  FName this_00;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  iVar1 = (param_1->Tail).DimensionValue;
  bVar4 = param_1->DimensionValue;
  if (((1 < iVar1) || (iVar1 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TShaderRefBase<FRenderVolumetricShadowMapForLightWithVoxelGridCS,FShaderMapPointerTable>
              *)(*pcVar2)();
    return pTVar5;
  }
  pFVar6 = (FShaderType *)FRenderVolumetricShadowMapForLightWithVoxelGridCS::GetStaticType();
  GetShader(this,&local_28,pFVar6,(uint)(bVar4 != false) + iVar1 * 2);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FRenderVolumetricShadowMapForLightWithVoxelGridCS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FRenderVolumetricShadowMapForLightWithVoxelGridCS,FShaderMapPointerTable>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  FRenderVolumetricShadowMapForLightWithVoxelGridCS::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FRenderVolumetricShadowMapForLightWithVoxelGridCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FSetRasterizeBottomLevelGridIndirectArgs> @ 144af80e0

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

TShaderRefBase<FSetRasterizeBottomLevelGridIndirectArgs,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FSetRasterizeBottomLevelGridIndirectArgs>
          (FGlobalShaderMap *this,
          TShaderRefBase<FSetRasterizeBottomLevelGridIndirectArgs,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FSetRasterizeBottomLevelGridIndirectArgs,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FSetRasterizeBottomLevelGridIndirectArgs::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FSetRasterizeBottomLevelGridIndirectArgs>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  pFVar4 = (FShaderType *)FSetRasterizeBottomLevelGridIndirectArgs::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FSetRasterizeBottomLevelGridIndirectArgs::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FSetRasterizeBottomLevelGridIndirectArgs,FShaderMapPointerTable> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  FSetRasterizeBottomLevelGridIndirectArgs::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FSetRasterizeBottomLevelGridIndirectArgs *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FCalculateCompactBlockInstanceOffsetsCs> @ 144b90370

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

TShaderRefBase<FCalculateCompactBlockInstanceOffsetsCs,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FCalculateCompactBlockInstanceOffsetsCs>
          (FGlobalShaderMap *this,
          TShaderRefBase<FCalculateCompactBlockInstanceOffsetsCs,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FCalculateCompactBlockInstanceOffsetsCs,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FCalculateCompactBlockInstanceOffsetsCs::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FCalculateCompactBlockInstanceOffsetsCs>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  pFVar4 = (FShaderType *)FCalculateCompactBlockInstanceOffsetsCs::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FCalculateCompactBlockInstanceOffsetsCs::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FCalculateCompactBlockInstanceOffsetsCs,FShaderMapPointerTable> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  FCalculateCompactBlockInstanceOffsetsCs::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FCalculateCompactBlockInstanceOffsetsCs *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FCompactVisibleInstancesCs> @ 144b90460

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

TShaderRefBase<FCompactVisibleInstancesCs,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FCompactVisibleInstancesCs>
          (FGlobalShaderMap *this,
          TShaderRefBase<FCompactVisibleInstancesCs,FShaderMapPointerTable> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FCompactVisibleInstancesCs,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FCompactVisibleInstancesCs::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FCompactVisibleInstancesCs>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)FCompactVisibleInstancesCs::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FCompactVisibleInstancesCs::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FCompactVisibleInstancesCs,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FCompactVisibleInstancesCs::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FCompactVisibleInstancesCs *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FAllocateProbeTracesCS> @ 144c1bf70

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

TShaderRefBase<FAllocateProbeTracesCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FAllocateProbeTracesCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FAllocateProbeTracesCS,FShaderMapPointerTable> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FAllocateProbeTracesCS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FAllocateProbeTracesCS::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FAllocateProbeTracesCS>'::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar4 = (FShaderType *)FAllocateProbeTracesCS::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FAllocateProbeTracesCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FAllocateProbeTracesCS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FAllocateProbeTracesCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FAllocateProbeTracesCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FAllocateUsedProbesCS> @ 144c1c060

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

TShaderRefBase<FAllocateUsedProbesCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FAllocateUsedProbesCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FAllocateUsedProbesCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FAllocateUsedProbesCS::FPersistentCache> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FAllocateUsedProbesCS,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar2 = param_1->DimensionValue;
  pFVar3 = (FShaderType *)FAllocateUsedProbesCS::GetStaticType();
  GetShader(this,&local_28,pFVar3,(uint)(bVar2 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FAllocateUsedProbesCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FAllocateUsedProbesCS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FAllocateUsedProbesCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FAllocateUsedProbesCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FClearProbeFreeList> @ 144c1c150

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

TShaderRefBase<FClearProbeFreeList,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FClearProbeFreeList>
          (FGlobalShaderMap *this,
          TShaderRefBase<FClearProbeFreeList,FShaderMapPointerTable> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FClearProbeFreeList,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FClearProbeFreeList::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FClearProbeFreeList>'::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar4 = (FShaderType *)FClearProbeFreeList::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FClearProbeFreeList::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FClearProbeFreeList,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FClearProbeFreeList::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FClearProbeFreeList *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FClearProbeIndirectionCS> @ 144c1c240

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

TShaderRefBase<FClearProbeIndirectionCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FClearProbeIndirectionCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FClearProbeIndirectionCS,FShaderMapPointerTable> *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FClearProbeIndirectionCS,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FClearProbeIndirectionCS::GetStaticType();
  GetShader(this,&local_28,pFVar3,param_1);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FClearProbeIndirectionCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FClearProbeIndirectionCS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FClearProbeIndirectionCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FClearProbeIndirectionCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FClearRadianceCacheUpdateResourcesCS> @ 144c1c320

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

TShaderRefBase<FClearRadianceCacheUpdateResourcesCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FClearRadianceCacheUpdateResourcesCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FClearRadianceCacheUpdateResourcesCS,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FClearRadianceCacheUpdateResourcesCS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FClearRadianceCacheUpdateResourcesCS::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FClearRadianceCacheUpdateResourcesCS>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  pFVar4 = (FShaderType *)FClearRadianceCacheUpdateResourcesCS::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FClearRadianceCacheUpdateResourcesCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FClearRadianceCacheUpdateResourcesCS,FShaderMapPointerTable> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  FClearRadianceCacheUpdateResourcesCS::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FClearRadianceCacheUpdateResourcesCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FComputeProbeWorldOffsetsCS> @ 144c1c410

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

TShaderRefBase<FComputeProbeWorldOffsetsCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FComputeProbeWorldOffsetsCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FComputeProbeWorldOffsetsCS,FShaderMapPointerTable> *__return_storage_ptr__
          )

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FComputeProbeWorldOffsetsCS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FComputeProbeWorldOffsetsCS::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FComputeProbeWorldOffsetsCS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)FComputeProbeWorldOffsetsCS::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FComputeProbeWorldOffsetsCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FComputeProbeWorldOffsetsCS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FComputeProbeWorldOffsetsCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FComputeProbeWorldOffsetsCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenHardwareRayTracingMaterialHitGroup> @ 144c1c500

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

TShaderRefBase<FLumenHardwareRayTracingMaterialHitGroup,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenHardwareRayTracingMaterialHitGroup>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenHardwareRayTracingMaterialHitGroup,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FLumenHardwareRayTracingMaterialHitGroup::FAvoidSelfIntersectionsMode,FLumenHardwareRayTracingMaterialHitGroup::FNaniteRayTracing>
          *param_1)

{
  EAvoidSelfIntersectionsMode EVar1;
  code *pcVar2;
  bool bVar3;
  TShaderRefBase<FLumenHardwareRayTracingMaterialHitGroup,FShaderMapPointerTable> *pTVar4;
  FShaderType *pFVar5;
  FName this_00;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  EVar1 = param_1->DimensionValue;
  if ((AHS < EVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TShaderRefBase<FLumenHardwareRayTracingMaterialHitGroup,FShaderMapPointerTable> *)
             (*pcVar2)();
    return pTVar4;
  }
  bVar3 = (param_1->Tail).DimensionValue;
  pFVar5 = (FShaderType *)FLumenHardwareRayTracingMaterialHitGroup::GetStaticType();
  GetShader(this,&local_28,pFVar5,(uint)EVar1 + (-(uint)(bVar3 != false) & 3));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FLumenHardwareRayTracingMaterialHitGroup::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FLumenHardwareRayTracingMaterialHitGroup,FShaderMapPointerTable> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  FLumenHardwareRayTracingMaterialHitGroup::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FLumenHardwareRayTracingMaterialHitGroup *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FSelectMaxPriorityBucketCS> @ 144c1c630

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

TShaderRefBase<FSelectMaxPriorityBucketCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FSelectMaxPriorityBucketCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FSelectMaxPriorityBucketCS,FShaderMapPointerTable> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FSelectMaxPriorityBucketCS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FSelectMaxPriorityBucketCS::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FSelectMaxPriorityBucketCS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)FSelectMaxPriorityBucketCS::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FSelectMaxPriorityBucketCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FSelectMaxPriorityBucketCS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FSelectMaxPriorityBucketCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FSelectMaxPriorityBucketCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FSetupProbeIndirectArgsCS> @ 144c1c720

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

TShaderRefBase<FSetupProbeIndirectArgsCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FSetupProbeIndirectArgsCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FSetupProbeIndirectArgsCS,FShaderMapPointerTable> *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FSetupProbeIndirectArgsCS,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FSetupProbeIndirectArgsCS::GetStaticType();
  GetShader(this,&local_28,pFVar3,param_1);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FSetupProbeIndirectArgsCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FSetupProbeIndirectArgsCS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FSetupProbeIndirectArgsCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FSetupProbeIndirectArgsCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FUpdateCacheForUsedProbesCS> @ 144c1c800

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

TShaderRefBase<FUpdateCacheForUsedProbesCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FUpdateCacheForUsedProbesCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FUpdateCacheForUsedProbesCS,FShaderMapPointerTable> *__return_storage_ptr__
          ,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FUpdateCacheForUsedProbesCS,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FUpdateCacheForUsedProbesCS::GetStaticType();
  GetShader(this,&local_28,pFVar3,param_1);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FUpdateCacheForUsedProbesCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FUpdateCacheForUsedProbesCS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FUpdateCacheForUsedProbesCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FUpdateCacheForUsedProbesCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenInitialSamplingRGS> @ 144ca87e0

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

TShaderRefBase<FLumenInitialSamplingRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenInitialSamplingRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenInitialSamplingRGS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenInitialSampling::FHitLighting>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  FShaderType *pFVar6;
  FName this_00;
  TShaderRefBase<FLumenInitialSamplingRGS,FShaderMapPointerTable> *pTVar7;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar5 = (param_1->DimensionValue).Tail.Tail.DimensionValue;
  bVar1 = (param_1->Tail).DimensionValue;
  bVar2 = (param_1->DimensionValue).Tail.DimensionValue;
  bVar3 = (param_1->DimensionValue).DimensionValue;
  pFVar6 = (FShaderType *)FLumenInitialSamplingRGS::GetStaticType();
  GetShader(this,&local_28,pFVar6,
            (-(uint)(bVar1 != false) & 8) + (-(uint)(bVar5 != false) & 4) +
            (-(uint)(bVar2 != false) & 2) + (uint)(bVar3 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FLumenInitialSamplingRGS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TShaderRefBase<FLumenInitialSamplingRGS,FShaderMapPointerTable> *)(*pcVar4)();
      return pTVar7;
    }
  }
  FLumenInitialSamplingRGS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FLumenInitialSamplingRGS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenRadianceCacheHardwareRayTracingRGS> @ 144ca8900

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

TShaderRefBase<FLumenRadianceCacheHardwareRayTracingRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenRadianceCacheHardwareRayTracingRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenRadianceCacheHardwareRayTracingRGS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenRadianceCacheHardwareRayTracing::FRayTracingPass,FLumenRadianceCacheHardwareRayTracing::FUseShaderExecutionReordering,FLumenRadianceCacheHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadianceCacheHardwareRayTracing::FFarFieldOcclusionOnly,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheBatchSize>
          *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  int iVar5;
  FShaderType *pFVar6;
  FName this_00;
  TShaderRefBase<FLumenRadianceCacheHardwareRayTracingRGS,FShaderMapPointerTable> *pTVar7;
  FGlobalShaderType *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_58;
  FString local_48;
  FGlobalShaderPermutationParameters local_38;
  
  iVar5 = TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenRadianceCacheHardwareRayTracing::FRayTracingPass,FLumenRadianceCacheHardwareRayTracing::FUseShaderExecutionReordering,FLumenRadianceCacheHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadianceCacheHardwareRayTracing::FFarFieldOcclusionOnly,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheBatchSize>
          ::ToDimensionValueId(param_1);
  pFVar6 = (FShaderType *)FLumenRadianceCacheHardwareRayTracingRGS::GetStaticType();
  GetShader(this,&local_58,pFVar6,iVar5);
  if (local_58.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_48);
    FLumenRadianceCacheHardwareRayTracingRGS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TShaderRefBase<FLumenRadianceCacheHardwareRayTracingRGS,FShaderMapPointerTable> *)
               (*pcVar2)();
      return pTVar7;
    }
  }
  EVar1 = this->Platform;
  pFVar8 = FLumenRadianceCacheHardwareRayTracingRGS::GetStaticType();
  local_38._8_4_ = 1;
  local_38.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x20;
  local_38.GlobalShaderName.Number = *(uint *)&pFVar8->field_0x24;
  local_38._0_2_ = EVar1;
  local_38._4_4_ = iVar5;
  EVar4 = FLumenRadianceCacheHardwareRayTracing::ShouldPrecachePermutation(&local_38);
  if (EVar4 == NotUsed) {
    `FGlobalShaderMap::GetShader<FLumenRadianceCacheHardwareRayTracingRGS>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  __return_storage_ptr__->ShaderContent =
       (FLumenRadianceCacheHardwareRayTracingRGS *)local_58.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_58.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenRadiosityHardwareRayTracingRGS> @ 144ca8a20

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

TShaderRefBase<FLumenRadiosityHardwareRayTracingRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenRadiosityHardwareRayTracingRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenRadiosityHardwareRayTracingRGS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenRadiosityHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenRadiosityHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadiosityHardwareRayTracing::FProbeOcclusion>
          *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  int iVar5;
  FShaderType *pFVar6;
  FName this_00;
  TShaderRefBase<FLumenRadiosityHardwareRayTracingRGS,FShaderMapPointerTable> *pTVar7;
  FGlobalShaderType *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_58;
  FString local_48;
  FGlobalShaderPermutationParameters local_38;
  
  iVar5 = TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenRadiosityHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenRadiosityHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadiosityHardwareRayTracing::FProbeOcclusion>
          ::ToDimensionValueId(param_1);
  pFVar6 = (FShaderType *)FLumenRadiosityHardwareRayTracingRGS::GetStaticType();
  GetShader(this,&local_58,pFVar6,iVar5);
  if (local_58.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_48);
    FLumenRadiosityHardwareRayTracingRGS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TShaderRefBase<FLumenRadiosityHardwareRayTracingRGS,FShaderMapPointerTable> *)
               (*pcVar2)();
      return pTVar7;
    }
  }
  EVar1 = this->Platform;
  pFVar8 = FLumenRadiosityHardwareRayTracingRGS::GetStaticType();
  local_38._8_4_ = 1;
  local_38.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x20;
  local_38.GlobalShaderName.Number = *(uint *)&pFVar8->field_0x24;
  local_38._0_2_ = EVar1;
  local_38._4_4_ = iVar5;
  EVar4 = FLumenRadiosityHardwareRayTracing::ShouldPrecachePermutation(&local_38);
  if (EVar4 == NotUsed) {
    `FGlobalShaderMap::GetShader<FLumenRadiosityHardwareRayTracingRGS>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  __return_storage_ptr__->ShaderContent =
       (FLumenRadiosityHardwareRayTracingRGS *)local_58.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_58.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenReflectionDenoiserClearCS> @ 144ca8b40

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

TShaderRefBase<FLumenReflectionDenoiserClearCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenReflectionDenoiserClearCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenReflectionDenoiserClearCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FLumenReflectionDenoiserClearCS::FClearFinalRadianceAndBackgroundVisibility>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FLumenReflectionDenoiserClearCS,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar2 = param_1->DimensionValue;
  pFVar3 = (FShaderType *)FLumenReflectionDenoiserClearCS::GetStaticType();
  GetShader(this,&local_28,pFVar3,(uint)(bVar2 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FLumenReflectionDenoiserClearCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FLumenReflectionDenoiserClearCS,FShaderMapPointerTable> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  }
  FLumenReflectionDenoiserClearCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FLumenReflectionDenoiserClearCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenReflectionDenoiserSpatialCS> @ 144ca8c30

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

TShaderRefBase<FLumenReflectionDenoiserSpatialCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenReflectionDenoiserSpatialCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenReflectionDenoiserSpatialCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FLumenReflectionDenoiserSpatialCS::FFrontLayerTranslucency,FLumenReflectionDenoiserSpatialCS::FRayTracedTranslucency,FLumenReflectionDenoiserSpatialCS::FSpatialFilter,FLumenReflectionDenoiserSpatialCS::FDebugMode>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FLumenReflectionDenoiserSpatialCS,FShaderMapPointerTable> *pTVar4;
  int iVar5;
  TShaderPermutationDomain<FLumenReflectionDenoiserSpatialCS::FFrontLayerTranslucency,FLumenReflectionDenoiserSpatialCS::FRayTracedTranslucency,FLumenReflectionDenoiserSpatialCS::FSpatialFilter,FLumenReflectionDenoiserSpatialCS::FDebugMode>
  local_res8;
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  iVar5 = (uint)(param_1->DimensionValue != false) +
          (-(uint)((param_1->Tail).Tail.Tail.DimensionValue != false) & 8) +
          (-(uint)((param_1->Tail).Tail.DimensionValue != false) & 4) +
          (-(uint)((param_1->Tail).DimensionValue != false) & 2);
  pFVar3 = (FShaderType *)FLumenReflectionDenoiserSpatialCS::GetStaticType();
  GetShader(this,&local_28,pFVar3,iVar5);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FLumenReflectionDenoiserSpatialCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FLumenReflectionDenoiserSpatialCS,FShaderMapPointerTable> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  FLumenReflectionDenoiserSpatialCS::GetStaticType();
  TShaderPermutationDomain<FLumenReflectionDenoiserSpatialCS::FFrontLayerTranslucency,FLumenReflectionDenoiserSpatialCS::FRayTracedTranslucency,FLumenReflectionDenoiserSpatialCS::FSpatialFilter,FLumenReflectionDenoiserSpatialCS::FDebugMode>
  ::
  TShaderPermutationDomain<FLumenReflectionDenoiserSpatialCS::FFrontLayerTranslucency,FLumenReflectionDenoiserSpatialCS::FRayTracedTranslucency,FLumenReflectionDenoiserSpatialCS::FSpatialFilter,FLumenReflectionDenoiserSpatialCS::FDebugMode>
            (&local_res8,iVar5);
  __return_storage_ptr__->ShaderContent =
       (FLumenReflectionDenoiserSpatialCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenReflectionDenoiserTemporalCS> @ 144ca8d50

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

TShaderRefBase<FLumenReflectionDenoiserTemporalCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenReflectionDenoiserTemporalCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenReflectionDenoiserTemporalCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FLumenReflectionDenoiserTemporalCS::FValidHistory,FLumenReflectionDenoiserTemporalCS::FFrontLayerTranslucency,FLumenReflectionDenoiserTemporalCS::FRayTracedTranslucencyLighting,FLumenReflectionDenoiserTemporalCS::FDebug>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FLumenReflectionDenoiserTemporalCS,FShaderMapPointerTable> *pTVar4;
  int iVar5;
  TShaderPermutationDomain<FLumenReflectionDenoiserTemporalCS::FValidHistory,FLumenReflectionDenoiserTemporalCS::FFrontLayerTranslucency,FLumenReflectionDenoiserTemporalCS::FRayTracedTranslucencyLighting,FLumenReflectionDenoiserTemporalCS::FDebug>
  local_res8;
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  iVar5 = (uint)(param_1->DimensionValue != false) +
          (-(uint)((param_1->Tail).Tail.Tail.DimensionValue != false) & 8) +
          (-(uint)((param_1->Tail).Tail.DimensionValue != false) & 4) +
          (-(uint)((param_1->Tail).DimensionValue != false) & 2);
  pFVar3 = (FShaderType *)FLumenReflectionDenoiserTemporalCS::GetStaticType();
  GetShader(this,&local_28,pFVar3,iVar5);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FLumenReflectionDenoiserTemporalCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FLumenReflectionDenoiserTemporalCS,FShaderMapPointerTable> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  FLumenReflectionDenoiserTemporalCS::GetStaticType();
  TShaderPermutationDomain<FLumenReflectionDenoiserTemporalCS::FValidHistory,FLumenReflectionDenoiserTemporalCS::FFrontLayerTranslucency,FLumenReflectionDenoiserTemporalCS::FRayTracedTranslucencyLighting,FLumenReflectionDenoiserTemporalCS::FDebug>
  ::
  TShaderPermutationDomain<FLumenReflectionDenoiserTemporalCS::FValidHistory,FLumenReflectionDenoiserTemporalCS::FFrontLayerTranslucency,FLumenReflectionDenoiserTemporalCS::FRayTracedTranslucencyLighting,FLumenReflectionDenoiserTemporalCS::FDebug>
            (&local_res8,iVar5);
  __return_storage_ptr__->ShaderContent =
       (FLumenReflectionDenoiserTemporalCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenReflectionHardwareRayTracingRGS> @ 144ca8e70

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

TShaderRefBase<FLumenReflectionHardwareRayTracingRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenReflectionHardwareRayTracingRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenReflectionHardwareRayTracingRGS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenReflectionHardwareRayTracing::FRayTracingPass,FLumenReflectionHardwareRayTracing::FUseShaderExecutionReordering,FLumenReflectionHardwareRayTracing::FWriteDataForHitLightingPass,FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
          *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  int iVar5;
  FShaderType *pFVar6;
  FName this_00;
  TShaderRefBase<FLumenReflectionHardwareRayTracingRGS,FShaderMapPointerTable> *pTVar7;
  FGlobalShaderType *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_58;
  FString local_48;
  FGlobalShaderPermutationParameters local_38;
  
  iVar5 = TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenReflectionHardwareRayTracing::FRayTracingPass,FLumenReflectionHardwareRayTracing::FUseShaderExecutionReordering,FLumenReflectionHardwareRayTracing::FWriteDataForHitLightingPass,FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
          ::ToDimensionValueId(param_1);
  pFVar6 = (FShaderType *)FLumenReflectionHardwareRayTracingRGS::GetStaticType();
  GetShader(this,&local_58,pFVar6,iVar5);
  if (local_58.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_48);
    FLumenReflectionHardwareRayTracingRGS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TShaderRefBase<FLumenReflectionHardwareRayTracingRGS,FShaderMapPointerTable> *)
               (*pcVar2)();
      return pTVar7;
    }
  }
  EVar1 = this->Platform;
  pFVar8 = FLumenReflectionHardwareRayTracingRGS::GetStaticType();
  local_38._8_4_ = 1;
  local_38.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x20;
  local_38.GlobalShaderName.Number = *(uint *)&pFVar8->field_0x24;
  local_38._0_2_ = EVar1;
  local_38._4_4_ = iVar5;
  EVar4 = FLumenReflectionHardwareRayTracing::ShouldPrecachePermutation(&local_38);
  if (EVar4 == NotUsed) {
    `FGlobalShaderMap::GetShader<FLumenReflectionHardwareRayTracingRGS>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  __return_storage_ptr__->ShaderContent =
       (FLumenReflectionHardwareRayTracingRGS *)local_58.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_58.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenReflectionResolveCS> @ 144ca8f90

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

TShaderRefBase<FLumenReflectionResolveCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenReflectionResolveCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenReflectionResolveCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FLumenReflectionResolveCS::FSpatialReconstruction,FLumenReflectionResolveCS::FFrontLayerTranslucency,FLumenReflectionResolveCS::FResolveBackgroundVisibility,FLumenReflectionResolveCS::FDownsampleFactorX,FLumenReflectionResolveCS::FDownsampleFactorY,FLumenReflectionResolveCS::FUseAnisotropy,FLumenReflectionResolveCS::FDebugMode>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  TShaderRefBase<FLumenReflectionResolveCS,FShaderMapPointerTable> *pTVar6;
  FShaderType *pFVar7;
  FName this_00;
  int iVar8;
  int iVar9;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_68;
  FString local_58;
  TShaderPermutationDomain<FLumenReflectionResolveCS::FSpatialReconstruction,FLumenReflectionResolveCS::FFrontLayerTranslucency,FLumenReflectionResolveCS::FResolveBackgroundVisibility,FLumenReflectionResolveCS::FDownsampleFactorX,FLumenReflectionResolveCS::FDownsampleFactorY,FLumenReflectionResolveCS::FUseAnisotropy,FLumenReflectionResolveCS::FDebugMode>
  local_48;
  
  bVar5 = param_1->DimensionValue;
  bVar1 = (param_1->Tail).DimensionValue;
  bVar2 = (param_1->Tail).Tail.DimensionValue;
  iVar9 = (param_1->Tail).Tail.Tail.DimensionValue + -1;
  if (((1 < iVar9) || (iVar9 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TShaderRefBase<FLumenReflectionResolveCS,FShaderMapPointerTable> *)(*pcVar3)();
    return pTVar6;
  }
  iVar8 = (param_1->Tail).Tail.Tail.Tail.DimensionValue + -1;
  if (((1 < iVar8) || (iVar8 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TShaderRefBase<FLumenReflectionResolveCS,FShaderMapPointerTable> *)(*pcVar3)();
    return pTVar6;
  }
  iVar9 = (-(uint)(bVar2 != false) & 4) + (uint)(bVar5 != false) +
          (iVar9 + ((-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue != false) & 2) +
                   iVar8 + (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue != false
                                   ) & 4)) * 2) * 8 + (-(uint)(bVar1 != false) & 2);
  pFVar7 = (FShaderType *)FLumenReflectionResolveCS::GetStaticType();
  GetShader(this,&local_68,pFVar7,iVar9);
  if (local_68.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_58);
    FLumenReflectionResolveCS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TShaderRefBase<FLumenReflectionResolveCS,FShaderMapPointerTable> *)(*pcVar3)();
      return pTVar6;
    }
  }
  FLumenReflectionResolveCS::GetStaticType();
  TShaderPermutationDomain<FLumenReflectionResolveCS::FSpatialReconstruction,FLumenReflectionResolveCS::FFrontLayerTranslucency,FLumenReflectionResolveCS::FResolveBackgroundVisibility,FLumenReflectionResolveCS::FDownsampleFactorX,FLumenReflectionResolveCS::FDownsampleFactorY,FLumenReflectionResolveCS::FUseAnisotropy,FLumenReflectionResolveCS::FDebugMode>
  ::
  TShaderPermutationDomain<FLumenReflectionResolveCS::FSpatialReconstruction,FLumenReflectionResolveCS::FFrontLayerTranslucency,FLumenReflectionResolveCS::FResolveBackgroundVisibility,FLumenReflectionResolveCS::FDownsampleFactorX,FLumenReflectionResolveCS::FDownsampleFactorY,FLumenReflectionResolveCS::FUseAnisotropy,FLumenReflectionResolveCS::FDebugMode>
            (&local_48,iVar9);
  __return_storage_ptr__->ShaderContent = (FLumenReflectionResolveCS *)local_68.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_68.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenValidateReservoirsRGS> @ 144ca9160

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

TShaderRefBase<FLumenValidateReservoirsRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenValidateReservoirsRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenValidateReservoirsRGS,FShaderMapPointerTable> *__return_storage_ptr__
          ,TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenValidateReservoirs::FHitLighting>
           *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  FShaderType *pFVar6;
  FName this_00;
  TShaderRefBase<FLumenValidateReservoirsRGS,FShaderMapPointerTable> *pTVar7;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar5 = (param_1->DimensionValue).Tail.Tail.DimensionValue;
  bVar1 = (param_1->Tail).DimensionValue;
  bVar2 = (param_1->DimensionValue).Tail.DimensionValue;
  bVar3 = (param_1->DimensionValue).DimensionValue;
  pFVar6 = (FShaderType *)FLumenValidateReservoirsRGS::GetStaticType();
  GetShader(this,&local_28,pFVar6,
            (-(uint)(bVar1 != false) & 8) + (-(uint)(bVar5 != false) & 4) +
            (-(uint)(bVar2 != false) & 2) + (uint)(bVar3 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FLumenValidateReservoirsRGS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TShaderRefBase<FLumenValidateReservoirsRGS,FShaderMapPointerTable> *)(*pcVar4)();
      return pTVar7;
    }
  }
  FLumenValidateReservoirsRGS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FLumenValidateReservoirsRGS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FRayTracedTranslucencyHardwareRayTracingRGS> @ 144ca9280

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

TShaderRefBase<FRayTracedTranslucencyHardwareRayTracingRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FRayTracedTranslucencyHardwareRayTracingRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FRayTracedTranslucencyHardwareRayTracingRGS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FRayTracedTranslucencyHardwareRayTracing::FUseRayTracedRefraction,FRayTracedTranslucencyHardwareRayTracing::FUseShaderExecutionReordering>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  FShaderType *pFVar7;
  FName this_00;
  TShaderRefBase<FRayTracedTranslucencyHardwareRayTracingRGS,FShaderMapPointerTable> *pTVar8;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar6 = (param_1->Tail).Tail.DimensionValue;
  bVar1 = (param_1->DimensionValue).Tail.Tail.DimensionValue;
  bVar2 = (param_1->DimensionValue).Tail.DimensionValue;
  bVar3 = (param_1->DimensionValue).DimensionValue;
  bVar4 = (param_1->Tail).DimensionValue;
  pFVar7 = (FShaderType *)FRayTracedTranslucencyHardwareRayTracingRGS::GetStaticType();
  GetShader(this,&local_28,pFVar7,
            (-(uint)(bVar1 != false) & 4) + (-(uint)(bVar6 != false) & 0x10) +
            (-(uint)(bVar2 != false) & 2) + (uint)(bVar3 != false) + (-(uint)(bVar4 != false) & 8));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FRayTracedTranslucencyHardwareRayTracingRGS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TShaderRefBase<FRayTracedTranslucencyHardwareRayTracingRGS,FShaderMapPointerTable> *
               )(*pcVar5)();
      return pTVar8;
    }
  }
  FRayTracedTranslucencyHardwareRayTracingRGS::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FRayTracedTranslucencyHardwareRayTracingRGS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FReflectionClearTracesCS> @ 144ca93b0

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

TShaderRefBase<FReflectionClearTracesCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FReflectionClearTracesCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FReflectionClearTracesCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FReflectionClearTracesCS::FCleatTraceMaterialId,FReflectionClearTracesCS::FClearBackgroundVisibility>
          *param_1)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FReflectionClearTracesCS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar3 = (param_1->Tail).DimensionValue;
  bVar1 = param_1->DimensionValue;
  pFVar4 = (FShaderType *)FReflectionClearTracesCS::GetStaticType();
  GetShader(this,&local_28,pFVar4,(-(uint)(bVar3 != false) & 2) + (uint)(bVar1 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FReflectionClearTracesCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FReflectionClearTracesCS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FReflectionClearTracesCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FReflectionClearTracesCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FReflectionClearUnusedTraceTileDataCS> @ 144ca94b0

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

TShaderRefBase<FReflectionClearUnusedTraceTileDataCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FReflectionClearUnusedTraceTileDataCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FReflectionClearUnusedTraceTileDataCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FReflectionClearUnusedTraceTileDataCS::FFrontLayerTranslucency>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FReflectionClearUnusedTraceTileDataCS,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar2 = param_1->DimensionValue;
  pFVar3 = (FShaderType *)FReflectionClearUnusedTraceTileDataCS::GetStaticType();
  GetShader(this,&local_28,pFVar3,(uint)(bVar2 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FReflectionClearUnusedTraceTileDataCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FReflectionClearUnusedTraceTileDataCS,FShaderMapPointerTable> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  FReflectionClearUnusedTraceTileDataCS::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FReflectionClearUnusedTraceTileDataCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FReflectionCompactTracesCS> @ 144ca95a0

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

TShaderRefBase<FReflectionCompactTracesCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FReflectionCompactTracesCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FReflectionCompactTracesCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FReflectionCompactTracesCS::FTraceCompactionMode,FReflectionCompactTracesCS::FWaveOps,FReflectionCompactTracesCS::FThreadGroupSize>
          *param_1)

{
  ETraceCompactionMode EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  TShaderRefBase<FReflectionCompactTracesCS,FShaderMapPointerTable> *pTVar5;
  FShaderType *pFVar6;
  FName this_00;
  int iVar7;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_38;
  FString local_28;
  
  EVar1 = param_1->DimensionValue;
  if (((2 < (int)EVar1) || ((int)EVar1 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TShaderRefBase<FReflectionCompactTracesCS,FShaderMapPointerTable> *)(*pcVar2)();
    return pTVar5;
  }
  iVar7 = (param_1->Tail).Tail.DimensionValue;
  bVar3 = (param_1->Tail).DimensionValue;
  if (iVar7 == 0x40) {
    iVar7 = 4;
  }
  else if (iVar7 == 0x80) {
    iVar7 = 3;
  }
  else if (iVar7 == 0x100) {
    iVar7 = 2;
  }
  else if (iVar7 == 0x200) {
    iVar7 = 1;
  }
  else {
    if ((iVar7 != 0x400) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FReflectionCompactTracesCS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar5;
    }
    iVar7 = 0;
  }
  pFVar6 = (FShaderType *)FReflectionCompactTracesCS::GetStaticType();
  GetShader(this,&local_38,pFVar6,(-(uint)(bVar3 != false) & 3) + EVar1 + iVar7 * 6);
  if (local_38.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_28);
    FReflectionCompactTracesCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FReflectionCompactTracesCS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FReflectionCompactTracesCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FReflectionCompactTracesCS *)local_38.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_38.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FReflectionGenerateRaysCS> @ 144ca9740

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

TShaderRefBase<FReflectionGenerateRaysCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FReflectionGenerateRaysCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FReflectionGenerateRaysCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FReflectionGenerateRaysCS::FRadianceCache,FReflectionGenerateRaysCS::FFrontLayerTranslucency>
          *param_1)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FReflectionGenerateRaysCS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar3 = (param_1->Tail).DimensionValue;
  bVar1 = param_1->DimensionValue;
  pFVar4 = (FShaderType *)FReflectionGenerateRaysCS::GetStaticType();
  GetShader(this,&local_28,pFVar4,(-(uint)(bVar3 != false) & 2) + (uint)(bVar1 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FReflectionGenerateRaysCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FReflectionGenerateRaysCS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FReflectionGenerateRaysCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FReflectionGenerateRaysCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FReflectionTileClassificationBuildListsCS> @ 144ca9840

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

TShaderRefBase<FReflectionTileClassificationBuildListsCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FReflectionTileClassificationBuildListsCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FReflectionTileClassificationBuildListsCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FReflectionTileClassificationBuildListsCS::FWaveOps,FReflectionTileClassificationBuildListsCS::FSupportDownsample,FReflectionTileClassificationBuildListsCS::FOverflow>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  FShaderType *pFVar5;
  FName this_00;
  TShaderRefBase<FReflectionTileClassificationBuildListsCS,FShaderMapPointerTable> *pTVar6;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar4 = (param_1->Tail).Tail.DimensionValue;
  bVar1 = (param_1->Tail).DimensionValue;
  bVar2 = param_1->DimensionValue;
  pFVar5 = (FShaderType *)FReflectionTileClassificationBuildListsCS::GetStaticType();
  GetShader(this,&local_28,pFVar5,
            (-(uint)(bVar1 != false) & 2) + (-(uint)(bVar4 != false) & 4) + (uint)(bVar2 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FReflectionTileClassificationBuildListsCS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TShaderRefBase<FReflectionTileClassificationBuildListsCS,FShaderMapPointerTable> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
  FReflectionTileClassificationBuildListsCS::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FReflectionTileClassificationBuildListsCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenDirectLightingHardwareRayTracingRGS> @ 144d39d50

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

TShaderRefBase<FLumenDirectLightingHardwareRayTracingRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenDirectLightingHardwareRayTracingRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenDirectLightingHardwareRayTracingRGS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenDirectLightingHardwareRayTracing::FForceTwoSided,FLumenDirectLightingHardwareRayTracing::FEnableFarFieldTracing,FLumenDirectLightingHardwareRayTracing::FEnableHeightfieldProjectionBias,FLumenDirectLightingHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenDirectLightingHardwareRayTracing::FStochastic>
          *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  FShaderType *pFVar5;
  FName this_00;
  TShaderRefBase<FLumenDirectLightingHardwareRayTracingRGS,FShaderMapPointerTable> *pTVar6;
  FGlobalShaderType *pFVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_58;
  FString local_48;
  FGlobalShaderPermutationParameters local_38;
  
  iVar8 = (-(uint)((param_1->DimensionValue).Tail.Tail.DimensionValue != false) & 4) +
          (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue != false) & 0x80) +
          (-(uint)((param_1->Tail).DimensionValue != false) & 8) +
          (uint)((param_1->DimensionValue).DimensionValue != false) +
          (-(uint)((param_1->Tail).Tail.Tail.Tail.DimensionValue != false) & 0x40) +
          (-(uint)((param_1->Tail).Tail.Tail.DimensionValue != false) & 0x20) +
          (-(uint)((param_1->Tail).Tail.DimensionValue != false) & 0x10) +
          (-(uint)((param_1->DimensionValue).Tail.DimensionValue != false) & 2);
  pFVar5 = (FShaderType *)FLumenDirectLightingHardwareRayTracingRGS::GetStaticType();
  GetShader(this,&local_58,pFVar5,iVar8);
  if (local_58.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_48);
    FLumenDirectLightingHardwareRayTracingRGS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TShaderRefBase<FLumenDirectLightingHardwareRayTracingRGS,FShaderMapPointerTable> *)
               (*pcVar2)();
      return pTVar6;
    }
  }
  EVar1 = this->Platform;
  pFVar7 = FLumenDirectLightingHardwareRayTracingRGS::GetStaticType();
  local_38._8_4_ = 1;
  local_38.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar7->field_0x20;
  local_38.GlobalShaderName.Number = *(uint *)&pFVar7->field_0x24;
  local_38._0_2_ = EVar1;
  local_38._4_4_ = iVar8;
  EVar4 = FLumenDirectLightingHardwareRayTracing::ShouldPrecachePermutation(&local_38);
  if (EVar4 == NotUsed) {
    `FGlobalShaderMap::GetShader<FLumenDirectLightingHardwareRayTracingRGS>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  __return_storage_ptr__->ShaderContent =
       (FLumenDirectLightingHardwareRayTracingRGS *)local_58.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_58.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenSceneDebugHardwareRayTracingRGS> @ 144d39ee0

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

TShaderRefBase<FLumenSceneDebugHardwareRayTracingRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenSceneDebugHardwareRayTracingRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenSceneDebugHardwareRayTracingRGS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>_>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  FShaderType *pFVar5;
  FName this_00;
  TShaderRefBase<FLumenSceneDebugHardwareRayTracingRGS,FShaderMapPointerTable> *pTVar6;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar4 = (param_1->DimensionValue).Tail.Tail.DimensionValue;
  bVar1 = (param_1->DimensionValue).Tail.DimensionValue;
  bVar2 = (param_1->DimensionValue).DimensionValue;
  pFVar5 = (FShaderType *)FLumenSceneDebugHardwareRayTracingRGS::GetStaticType();
  GetShader(this,&local_28,pFVar5,
            (-(uint)(bVar1 != false) & 2) + (-(uint)(bVar4 != false) & 4) + (uint)(bVar2 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FLumenSceneDebugHardwareRayTracingRGS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TShaderRefBase<FLumenSceneDebugHardwareRayTracingRGS,FShaderMapPointerTable> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
  FLumenSceneDebugHardwareRayTracingRGS::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FLumenSceneDebugHardwareRayTracingRGS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenSceneGenerateLightSamplesCS> @ 144d39ff0

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

TShaderRefBase<FLumenSceneGenerateLightSamplesCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenSceneGenerateLightSamplesCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenSceneGenerateLightSamplesCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FLumenSceneGenerateLightSamplesCS::FIESProfile,FLumenSceneGenerateLightSamplesCS::FRectLight,FLumenSceneGenerateLightSamplesCS::FLightFunctionAtlas,FLumenSceneGenerateLightSamplesCS::FNumSamplesPerPixel1d>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  EShaderPlatform EVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  EShaderPermutationPrecacheRequest EVar8;
  FShaderType *pFVar9;
  FName this_00;
  TShaderRefBase<FLumenSceneGenerateLightSamplesCS,FShaderMapPointerTable> *pTVar10;
  FGlobalShaderType *pFVar11;
  int iVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_68;
  FString local_58;
  FGlobalShaderPermutationParameters local_48;
  
  iVar4 = (param_1->Tail).Tail.Tail.DimensionValue;
  bVar7 = param_1->DimensionValue;
  bVar1 = (param_1->Tail).DimensionValue;
  bVar2 = (param_1->Tail).Tail.DimensionValue;
  if (iVar4 == 1) {
    iVar12 = 2;
  }
  else if (iVar4 == 2) {
    iVar12 = 1;
  }
  else {
    iVar12 = 0;
    if ((iVar4 != 4) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), iVar12 = 0,
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TShaderRefBase<FLumenSceneGenerateLightSamplesCS,FShaderMapPointerTable> *)
                (*pcVar5)();
      return pTVar10;
    }
  }
  iVar4 = (-(uint)(bVar2 != false) & 4) + (uint)(bVar7 != false) + (-(uint)(bVar1 != false) & 2) +
          iVar12 * 8;
  pFVar9 = (FShaderType *)FLumenSceneGenerateLightSamplesCS::GetStaticType();
  GetShader(this,&local_68,pFVar9,iVar4);
  if (local_68.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_58);
    FLumenSceneGenerateLightSamplesCS::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TShaderRefBase<FLumenSceneGenerateLightSamplesCS,FShaderMapPointerTable> *)
                (*pcVar5)();
      return pTVar10;
    }
  }
  EVar3 = this->Platform;
  pFVar11 = FLumenSceneGenerateLightSamplesCS::GetStaticType();
  local_48._8_4_ = 1;
  local_48.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar11->field_0x20;
  local_48.GlobalShaderName.Number = *(uint *)&pFVar11->field_0x24;
  local_48._0_2_ = EVar3;
  local_48._4_4_ = iVar4;
  EVar8 = FLumenSceneGenerateLightSamplesCS::ShouldPrecachePermutation(&local_48);
  if (EVar8 == NotUsed) {
    `FGlobalShaderMap::GetShader<FLumenSceneGenerateLightSamplesCS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  __return_storage_ptr__->ShaderContent =
       (FLumenSceneGenerateLightSamplesCS *)local_68.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_68.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenSceneShadeLightSamplesCS> @ 144d3a190

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

TShaderRefBase<FLumenSceneShadeLightSamplesCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenSceneShadeLightSamplesCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenSceneShadeLightSamplesCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FLumenSceneShadeLightSamplesCS::FUseLightSamples> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FLumenSceneShadeLightSamplesCS,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar2 = param_1->DimensionValue;
  pFVar3 = (FShaderType *)FLumenSceneShadeLightSamplesCS::GetStaticType();
  GetShader(this,&local_28,pFVar3,(uint)(bVar2 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FLumenSceneShadeLightSamplesCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FLumenSceneShadeLightSamplesCS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FLumenSceneShadeLightSamplesCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FLumenSceneShadeLightSamplesCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FClearCompressedAtlasCS> @ 144df1230

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

TShaderRefBase<FClearCompressedAtlasCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FClearCompressedAtlasCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FClearCompressedAtlasCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FClearCompressedAtlasCS::FSurfaceCacheLayer> *param_1)

{
  ELumenSurfaceCacheLayer EVar1;
  code *pcVar2;
  bool bVar3;
  TShaderRefBase<FClearCompressedAtlasCS,FShaderMapPointerTable> *pTVar4;
  FShaderType *pFVar5;
  FName this_00;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  EVar1 = param_1->DimensionValue;
  if ((Emissive < EVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TShaderRefBase<FClearCompressedAtlasCS,FShaderMapPointerTable> *)(*pcVar2)();
    return pTVar4;
  }
  pFVar5 = (FShaderType *)FClearCompressedAtlasCS::GetStaticType();
  GetShader(this,&local_28,pFVar5,(uint)EVar1);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FClearCompressedAtlasCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FClearCompressedAtlasCS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar4;
    }
  }
  FClearCompressedAtlasCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FClearCompressedAtlasCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenScreenProbeGatherHardwareRayTracingRGS> @ 144df1340

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

TShaderRefBase<FLumenScreenProbeGatherHardwareRayTracingRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenScreenProbeGatherHardwareRayTracingRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenScreenProbeGatherHardwareRayTracingRGS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenScreenProbeGatherHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenScreenProbeGatherHardwareRayTracing::FRayTracingPass,FLumenScreenProbeGatherHardwareRayTracing::FUseShaderExecutionReordering,FLumenScreenProbeGatherHardwareRayTracing::FRadianceCache,FLumenScreenProbeGatherHardwareRayTracing::FStructuredImportanceSamplingDim,FLumenScreenProbeGatherHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenScreenProbeGatherHardwareRayTracing::FFarFieldOcclusionOnly>
          *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  int iVar5;
  FShaderType *pFVar6;
  FName this_00;
  TShaderRefBase<FLumenScreenProbeGatherHardwareRayTracingRGS,FShaderMapPointerTable> *pTVar7;
  FGlobalShaderType *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_58;
  FString local_48;
  FGlobalShaderPermutationParameters local_38;
  
  iVar5 = TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenScreenProbeGatherHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenScreenProbeGatherHardwareRayTracing::FRayTracingPass,FLumenScreenProbeGatherHardwareRayTracing::FUseShaderExecutionReordering,FLumenScreenProbeGatherHardwareRayTracing::FRadianceCache,FLumenScreenProbeGatherHardwareRayTracing::FStructuredImportanceSamplingDim,FLumenScreenProbeGatherHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenScreenProbeGatherHardwareRayTracing::FFarFieldOcclusionOnly>
          ::ToDimensionValueId(param_1);
  pFVar6 = (FShaderType *)FLumenScreenProbeGatherHardwareRayTracingRGS::GetStaticType();
  GetShader(this,&local_58,pFVar6,iVar5);
  if (local_58.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_48);
    FLumenScreenProbeGatherHardwareRayTracingRGS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TShaderRefBase<FLumenScreenProbeGatherHardwareRayTracingRGS,FShaderMapPointerTable>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  EVar1 = this->Platform;
  pFVar8 = FLumenScreenProbeGatherHardwareRayTracingRGS::GetStaticType();
  local_38._8_4_ = 1;
  local_38.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x20;
  local_38.GlobalShaderName.Number = *(uint *)&pFVar8->field_0x24;
  local_38._0_2_ = EVar1;
  local_38._4_4_ = iVar5;
  EVar4 = FLumenScreenProbeGatherHardwareRayTracing::ShouldPrecachePermutation(&local_38);
  if (EVar4 == NotUsed) {
    `FGlobalShaderMap::GetShader<FLumenScreenProbeGatherHardwareRayTracingRGS>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  __return_storage_ptr__->ShaderContent =
       (FLumenScreenProbeGatherHardwareRayTracingRGS *)local_58.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_58.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenShortRangeAOHardwareRayTracing> @ 144df1460

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

TShaderRefBase<FLumenShortRangeAOHardwareRayTracing,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenShortRangeAOHardwareRayTracing>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenShortRangeAOHardwareRayTracing,FShaderMapPointerTable>
          *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FLumenShortRangeAOHardwareRayTracing,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FLumenShortRangeAOHardwareRayTracing::GetStaticType();
  GetShader(this,&local_28,pFVar3,param_1);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FLumenShortRangeAOHardwareRayTracing::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FLumenShortRangeAOHardwareRayTracing,FShaderMapPointerTable> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  FLumenShortRangeAOHardwareRayTracing::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FLumenShortRangeAOHardwareRayTracing *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FScreenProbeConvertToIrradianceCS> @ 144df1540

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

TShaderRefBase<FScreenProbeConvertToIrradianceCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FScreenProbeConvertToIrradianceCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FScreenProbeConvertToIrradianceCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FScreenProbeConvertToIrradianceCS::FThreadGroupSize,FScreenProbeConvertToIrradianceCS::FWaveOpWaveSize,FScreenProbeConvertToIrradianceCS::FProbeIrradianceFormat,FScreenProbeConvertToIrradianceCS::FScreenProbeExtraAO>
          *param_1)

{
  EScreenProbeIrradianceFormat EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TShaderRefBase<FScreenProbeConvertToIrradianceCS,FShaderMapPointerTable> *pTVar5;
  FShaderType *pFVar6;
  FName this_00;
  int iVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderPermutationDomain<FScreenProbeConvertToIrradianceCS::FThreadGroupSize,FScreenProbeConvertToIrradianceCS::FWaveOpWaveSize,FScreenProbeConvertToIrradianceCS::FProbeIrradianceFormat,FScreenProbeConvertToIrradianceCS::FScreenProbeExtraAO>
  local_58;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  iVar7 = 1;
  if (param_1->DimensionValue == 8) {
    iVar8 = 1;
  }
  else {
    if ((param_1->DimensionValue != 0x10) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FScreenProbeConvertToIrradianceCS,FShaderMapPointerTable> *)
               (*pcVar3)();
      return pTVar5;
    }
    iVar8 = 0;
  }
  iVar2 = (param_1->Tail).DimensionValue;
  if (iVar2 == 0) {
    iVar7 = 2;
  }
  else if (iVar2 != 0x20) {
    if ((iVar2 != 0x40) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FScreenProbeConvertToIrradianceCS,FShaderMapPointerTable> *)
               (*pcVar3)();
      return pTVar5;
    }
    iVar7 = 0;
  }
  EVar1 = (param_1->Tail).Tail.DimensionValue;
  if ((Octahedral < EVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TShaderRefBase<FScreenProbeConvertToIrradianceCS,FShaderMapPointerTable> *)(*pcVar3)()
    ;
    return pTVar5;
  }
  iVar8 = iVar8 + iVar7 * 2 +
                  ((-(uint)((param_1->Tail).Tail.Tail.DimensionValue != false) & 2) + (uint)EVar1) *
                  6;
  pFVar6 = (FShaderType *)FScreenProbeConvertToIrradianceCS::GetStaticType();
  GetShader(this,&local_48,pFVar6,iVar8);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_38);
    FScreenProbeConvertToIrradianceCS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FScreenProbeConvertToIrradianceCS,FShaderMapPointerTable> *)
               (*pcVar3)();
      return pTVar5;
    }
  }
  FScreenProbeConvertToIrradianceCS::GetStaticType();
  TShaderPermutationDomain<FScreenProbeConvertToIrradianceCS::FThreadGroupSize,FScreenProbeConvertToIrradianceCS::FWaveOpWaveSize,FScreenProbeConvertToIrradianceCS::FProbeIrradianceFormat,FScreenProbeConvertToIrradianceCS::FScreenProbeExtraAO>
  ::
  TShaderPermutationDomain<FScreenProbeConvertToIrradianceCS::FThreadGroupSize,FScreenProbeConvertToIrradianceCS::FWaveOpWaveSize,FScreenProbeConvertToIrradianceCS::FProbeIrradianceFormat,FScreenProbeConvertToIrradianceCS::FScreenProbeExtraAO>
            (&local_58,iVar8);
  if ((local_58.Tail.DimensionValue != 0) &&
     ((local_58.Tail.DimensionValue < GRHIGlobals.MinimumWaveSize ||
      (GRHIGlobals.MaximumWaveSize < local_58.Tail.DimensionValue)))) {
    `FGlobalShaderMap::GetShader<FScreenProbeConvertToIrradianceCS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  __return_storage_ptr__->ShaderContent =
       (FScreenProbeConvertToIrradianceCS *)local_48.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_48.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FScreenProbeIntegrateCS> @ 144df1730

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

TShaderRefBase<FScreenProbeIntegrateCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FScreenProbeIntegrateCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FScreenProbeIntegrateCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FScreenProbeIntegrateCS::FTileClassificationMode,FScreenProbeIntegrateCS::FShortRangeAO,FScreenProbeIntegrateCS::FShortRangeAOBentNormal,FScreenProbeIntegrateCS::FProbeIrradianceFormat,FScreenProbeIntegrateCS::FStochasticProbeInterpolation,FScreenProbeIntegrateCS::FOverflowTile,FScreenProbeIntegrateCS::FSupportBackfaceDiffuse,FScreenProbeIntegrateCS::FScreenProbeExtraAO,FScreenProbeIntegrateCS::FIntegrateDownsampleFactor>
          *param_1)

{
  EScreenProbeIrradianceFormat EVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  EShaderPlatform EVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  EShaderPermutationPrecacheRequest EVar11;
  TShaderRefBase<FScreenProbeIntegrateCS,FShaderMapPointerTable> *pTVar12;
  FShaderType *pFVar13;
  FName this_00;
  FGlobalShaderType *pFVar14;
  int iVar15;
  int iVar16;
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_80;
  FString local_70;
  FGlobalShaderPermutationParameters local_60;
  
  iVar16 = param_1->DimensionValue;
  if (((3 < iVar16) || (iVar16 < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TShaderRefBase<FScreenProbeIntegrateCS,FShaderMapPointerTable> *)(*pcVar7)();
    return pTVar12;
  }
  bVar8 = (param_1->Tail).DimensionValue;
  EVar1 = (param_1->Tail).Tail.Tail.DimensionValue;
  bVar2 = (param_1->Tail).Tail.DimensionValue;
  if ((Octahedral < EVar1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TShaderRefBase<FScreenProbeIntegrateCS,FShaderMapPointerTable> *)(*pcVar7)();
    return pTVar12;
  }
  bVar9 = (param_1->Tail).Tail.Tail.Tail.DimensionValue;
  bVar3 = (param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  bVar4 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar5 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  iVar15 = ((TShaderPermutationDomain<FScreenProbeIntegrateCS::FIntegrateDownsampleFactor> *)
           ((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 4))->DimensionValue + -1;
  if (((1 < iVar15) || (iVar15 < 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PermutationId < PermutationCount && PermutationId >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                          ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TShaderRefBase<FScreenProbeIntegrateCS,FShaderMapPointerTable> *)(*pcVar7)();
    return pTVar12;
  }
  iVar16 = iVar16 + (-(uint)(bVar2 != false) & 8) +
           (iVar15 * 0x20 +
           (-(uint)(bVar9 != false) & 2) + (uint)EVar1 +
           (-(uint)(bVar3 != false) & 4) + (-(uint)(bVar4 != false) & 8) +
           (-(uint)(bVar5 != false) & 0x10)) * 0x10 + (-(uint)(bVar8 != false) & 4);
  pFVar13 = (FShaderType *)FScreenProbeIntegrateCS::GetStaticType();
  GetShader(this,&local_80,pFVar13,iVar16);
  if (local_80.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
    ::FName::ToString((FName *)this_00,&local_70);
    FScreenProbeIntegrateCS::GetStaticType();
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TShaderRefBase<FScreenProbeIntegrateCS,FShaderMapPointerTable> *)(*pcVar7)();
      return pTVar12;
    }
  }
  EVar6 = this->Platform;
  pFVar14 = FScreenProbeIntegrateCS::GetStaticType();
  local_60._8_4_ = 1;
  local_60.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar14->field_0x20;
  local_60.GlobalShaderName.Number = *(uint *)&pFVar14->field_0x24;
  local_60._0_2_ = EVar6;
  local_60._4_4_ = iVar16;
  EVar11 = FScreenProbeIntegrateCS::ShouldPrecachePermutation(&local_60);
  if (EVar11 == NotUsed) {
    `FGlobalShaderMap::GetShader<FScreenProbeIntegrateCS>'::__l2::<lambda_1>::operator()
              (local_res20);
  }
  __return_storage_ptr__->ShaderContent = (FScreenProbeIntegrateCS *)local_80.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_80.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FScreenProbeTemporalReprojectionCS> @ 144df1980

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

TShaderRefBase<FScreenProbeTemporalReprojectionCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FScreenProbeTemporalReprojectionCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FScreenProbeTemporalReprojectionCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FScreenProbeTemporalReprojectionCS::FValidHistory,FScreenProbeTemporalReprojectionCS::FFastUpdateModeNeighborhoodClamp,FScreenProbeTemporalReprojectionCS::FOverflowTile,FScreenProbeTemporalReprojectionCS::FSupportBackfaceDiffuse,FScreenProbeTemporalReprojectionCS::FIntegrateDownsampleFactor,FScreenProbeTemporalReprojectionCS::FShortRangeAOMode,FScreenProbeTemporalReprojectionCS::FShortRangeAODownsampleFactor,FScreenProbeTemporalReprojectionCS::FShortRangeGI>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TShaderRefBase<FScreenProbeTemporalReprojectionCS,FShaderMapPointerTable> *pTVar8;
  FShaderType *pFVar9;
  FName this_00;
  int iVar10;
  int iVar11;
  undefined1 local_res18 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_58;
  FString local_48;
  
  bVar7 = (param_1->Tail).DimensionValue;
  bVar1 = param_1->DimensionValue;
  bVar2 = (param_1->Tail).Tail.DimensionValue;
  iVar11 = (param_1->Tail).Tail.Tail.Tail.DimensionValue + -1;
  bVar3 = (param_1->Tail).Tail.Tail.DimensionValue;
  if (((1 < iVar11) || (iVar11 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TShaderRefBase<FScreenProbeTemporalReprojectionCS,FShaderMapPointerTable> *)
             (*pcVar5)();
    return pTVar8;
  }
  iVar4 = (param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  if (((2 < iVar4) || (iVar4 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TShaderRefBase<FScreenProbeTemporalReprojectionCS,FShaderMapPointerTable> *)
             (*pcVar5)();
    return pTVar8;
  }
  iVar10 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue + -1;
  if (((1 < iVar10) || (iVar10 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TShaderRefBase<FScreenProbeTemporalReprojectionCS,FShaderMapPointerTable> *)
             (*pcVar5)();
    return pTVar8;
  }
  bVar6 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  pFVar9 = (FShaderType *)FScreenProbeTemporalReprojectionCS::GetStaticType();
  GetShader(this,&local_58,pFVar9,
            (uint)(bVar1 != false) + (-(uint)(bVar3 != false) & 8) +
            iVar11 * 0x10 + (iVar4 * 2 + ((-(uint)(bVar6 != false) & 2) + iVar10) * 6) * 0x10 +
            (-(uint)(bVar2 != false) & 4) + (-(uint)(bVar7 != false) & 2));
  if (local_58.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res18);
    ::FName::ToString((FName *)this_00,&local_48);
    FScreenProbeTemporalReprojectionCS::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TShaderRefBase<FScreenProbeTemporalReprojectionCS,FShaderMapPointerTable> *)
               (*pcVar5)();
      return pTVar8;
    }
  }
  FScreenProbeTemporalReprojectionCS::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FScreenProbeTemporalReprojectionCS *)local_58.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_58.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FScreenProbeTraceMeshSDFsCS> @ 144df1b90

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

TShaderRefBase<FScreenProbeTraceMeshSDFsCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FScreenProbeTraceMeshSDFsCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FScreenProbeTraceMeshSDFsCS,FShaderMapPointerTable> *__return_storage_ptr__
          ,TShaderPermutationDomain<FScreenProbeTraceMeshSDFsCS::FThreadGroupSize32,FScreenProbeTraceMeshSDFsCS::FStructuredImportanceSampling,FScreenProbeTraceMeshSDFsCS::FHairStrands,FScreenProbeTraceMeshSDFsCS::FTraceMeshSDFs,FScreenProbeTraceMeshSDFsCS::FTraceHeightfields,FScreenProbeTraceMeshSDFsCS::FOffsetDataStructure>
           *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  EShaderPlatform EVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  EShaderPermutationPrecacheRequest EVar9;
  TShaderRefBase<FScreenProbeTraceMeshSDFsCS,FShaderMapPointerTable> *pTVar10;
  FShaderType *pFVar11;
  FName this_00;
  FGlobalShaderType *pFVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_78;
  FString local_68;
  FGlobalShaderPermutationParameters local_58;
  
  iVar13 = (param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  bVar8 = param_1->DimensionValue;
  bVar1 = (param_1->Tail).DimensionValue;
  bVar2 = (param_1->Tail).Tail.DimensionValue;
  bVar3 = (param_1->Tail).Tail.Tail.DimensionValue;
  bVar4 = (param_1->Tail).Tail.Tail.Tail.DimensionValue;
  if (((2 < iVar13) || (iVar13 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TShaderRefBase<FScreenProbeTraceMeshSDFsCS,FShaderMapPointerTable> *)(*pcVar6)();
    return pTVar10;
  }
  iVar13 = (uint)(bVar8 != false) + (-(uint)(bVar4 != false) & 0x10) +
           (-(uint)(bVar2 != false) & 4) + (-(uint)(bVar3 != false) & 8) +
           (-(uint)(bVar1 != false) & 2) + iVar13 * 0x20;
  pFVar11 = (FShaderType *)FScreenProbeTraceMeshSDFsCS::GetStaticType();
  GetShader(this,&local_78,pFVar11,iVar13);
  if (local_78.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_68);
    FScreenProbeTraceMeshSDFsCS::GetStaticType();
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TShaderRefBase<FScreenProbeTraceMeshSDFsCS,FShaderMapPointerTable> *)(*pcVar6)();
      return pTVar10;
    }
  }
  EVar5 = this->Platform;
  pFVar12 = FScreenProbeTraceMeshSDFsCS::GetStaticType();
  local_58._8_4_ = 1;
  local_58.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar12->field_0x20;
  local_58.GlobalShaderName.Number = *(uint *)&pFVar12->field_0x24;
  local_58._0_2_ = EVar5;
  local_58._4_4_ = iVar13;
  EVar9 = FScreenProbeTraceMeshSDFsCS::ShouldPrecachePermutation(&local_58);
  if (EVar9 == NotUsed) {
    `FGlobalShaderMap::GetShader<FScreenProbeTraceMeshSDFsCS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  __return_storage_ptr__->ShaderContent = (FScreenProbeTraceMeshSDFsCS *)local_78.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_78.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenTranslucencyVolumeHardwareRayTracingRGS> @ 144e6dc60

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

TShaderRefBase<FLumenTranslucencyVolumeHardwareRayTracingRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenTranslucencyVolumeHardwareRayTracingRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenTranslucencyVolumeHardwareRayTracingRGS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenTranslucencyVolumeHardwareRayTracing::FProbeSourceMode,FLumenTranslucencyVolumeHardwareRayTracing::FSurfaceCacheAlphaMasking>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FLumenTranslucencyVolumeHardwareRayTracingRGS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenTranslucencyVolumeHardwareRayTracing::FProbeSourceMode,FLumenTranslucencyVolumeHardwareRayTracing::FSurfaceCacheAlphaMasking>
  local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  iVar3 = TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenTranslucencyVolumeHardwareRayTracing::FProbeSourceMode,FLumenTranslucencyVolumeHardwareRayTracing::FSurfaceCacheAlphaMasking>
          ::ToDimensionValueId(param_1);
  pFVar4 = (FShaderType *)FLumenTranslucencyVolumeHardwareRayTracingRGS::GetStaticType();
  GetShader(this,&local_28,pFVar4,iVar3);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FLumenTranslucencyVolumeHardwareRayTracingRGS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FLumenTranslucencyVolumeHardwareRayTracingRGS,FShaderMapPointerTable>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  FLumenTranslucencyVolumeHardwareRayTracingRGS::GetStaticType();
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenTranslucencyVolumeHardwareRayTracing::FProbeSourceMode,FLumenTranslucencyVolumeHardwareRayTracing::FSurfaceCacheAlphaMasking>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenTranslucencyVolumeHardwareRayTracing::FProbeSourceMode,FLumenTranslucencyVolumeHardwareRayTracing::FSurfaceCacheAlphaMasking>
            (&local_38,iVar3);
  LumenHardwareRayTracing::UseSurfaceCacheAlphaMasking();
  __return_storage_ptr__->ShaderContent =
       (FLumenTranslucencyVolumeHardwareRayTracingRGS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FLumenVisualizeHardwareRayTracingRGS> @ 144e6dd60

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

TShaderRefBase<FLumenVisualizeHardwareRayTracingRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FLumenVisualizeHardwareRayTracingRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FLumenVisualizeHardwareRayTracingRGS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenVisualizeHardwareRayTracing::FHitLightingDim,FLumenVisualizeHardwareRayTracing::FHairStrandsOcclusionDim,FLumenVisualizeHardwareRayTracing::FFarFieldDim,FLumenVisualizeHardwareRayTracing::FRecursiveRefractionTraces,FLumenVisualizeHardwareRayTracing::FSurfaceCacheAlphaMasking>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  bool bVar9;
  FShaderType *pFVar10;
  FName this_00;
  TShaderRefBase<FLumenVisualizeHardwareRayTracingRGS,FShaderMapPointerTable> *pTVar11;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar9 = (param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  bVar1 = (param_1->DimensionValue).Tail.Tail.DimensionValue;
  bVar2 = (param_1->Tail).Tail.DimensionValue;
  bVar3 = (param_1->Tail).Tail.Tail.DimensionValue;
  bVar4 = (param_1->DimensionValue).Tail.DimensionValue;
  bVar5 = (param_1->Tail).Tail.Tail.Tail.DimensionValue;
  bVar6 = (param_1->DimensionValue).DimensionValue;
  bVar7 = (param_1->Tail).DimensionValue;
  pFVar10 = (FShaderType *)FLumenVisualizeHardwareRayTracingRGS::GetStaticType();
  GetShader(this,&local_28,pFVar10,
            (-(uint)(bVar1 != false) & 4) + (-(uint)(bVar9 != false) & 0x80) +
            (-(uint)(bVar2 != false) & 0x10) + (-(uint)(bVar3 != false) & 0x20) +
            (-(uint)(bVar4 != false) & 2) + (-(uint)(bVar5 != false) & 0x40) +
            (uint)(bVar6 != false) + (-(uint)(bVar7 != false) & 8));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FLumenVisualizeHardwareRayTracingRGS::GetStaticType();
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TShaderRefBase<FLumenVisualizeHardwareRayTracingRGS,FShaderMapPointerTable> *)
                (*pcVar8)();
      return pTVar11;
    }
  }
  FLumenVisualizeHardwareRayTracingRGS::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FLumenVisualizeHardwareRayTracingRGS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FMegaLightsTileClassificationBuildListsCS> @ 144e6dec0

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

TShaderRefBase<FMegaLightsTileClassificationBuildListsCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FMegaLightsTileClassificationBuildListsCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FMegaLightsTileClassificationBuildListsCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FMegaLightsTileClassificationBuildListsCS::FDownsampleFactorX,FMegaLightsTileClassificationBuildListsCS::FDownsampleFactorY>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  TShaderRefBase<FMegaLightsTileClassificationBuildListsCS,FShaderMapPointerTable> *pTVar3;
  FShaderType *pFVar4;
  FName this_00;
  int iVar5;
  int iVar6;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  iVar6 = param_1->DimensionValue + -1;
  if (((1 < iVar6) || (iVar6 < 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderRefBase<FMegaLightsTileClassificationBuildListsCS,FShaderMapPointerTable> *)
             (*pcVar1)();
    return pTVar3;
  }
  iVar5 = (param_1->Tail).DimensionValue + -1;
  if (((1 < iVar5) || (iVar5 < 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderRefBase<FMegaLightsTileClassificationBuildListsCS,FShaderMapPointerTable> *)
             (*pcVar1)();
    return pTVar3;
  }
  pFVar4 = (FShaderType *)FMegaLightsTileClassificationBuildListsCS::GetStaticType();
  GetShader(this,&local_28,pFVar4,iVar6 + iVar5 * 2);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FMegaLightsTileClassificationBuildListsCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TShaderRefBase<FMegaLightsTileClassificationBuildListsCS,FShaderMapPointerTable> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  FMegaLightsTileClassificationBuildListsCS::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FMegaLightsTileClassificationBuildListsCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FGenerateLightSamplesCS> @ 144ee6630

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

TShaderRefBase<FGenerateLightSamplesCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FGenerateLightSamplesCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FGenerateLightSamplesCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FGenerateLightSamplesCS::FTileType,FGenerateLightSamplesCS::FNumSamplesPerPixel1d,FGenerateLightSamplesCS::FGuideByHistory,FGenerateLightSamplesCS::FInputType,FGenerateLightSamplesCS::FDebugMode,FGenerateLightSamplesCS::FReferenceMode,FGenerateLightSamplesCS::FHairComplexTransmittance>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  TShaderRefBase<FGenerateLightSamplesCS,FShaderMapPointerTable> *pTVar5;
  FShaderType *pFVar6;
  FName this_00;
  int iVar7;
  int iVar8;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res14;
  undefined1 local_res18 [16];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_78;
  FString local_68;
  TShaderPermutationDomain<FGenerateLightSamplesCS::FTileType,FGenerateLightSamplesCS::FNumSamplesPerPixel1d,FGenerateLightSamplesCS::FGuideByHistory,FGenerateLightSamplesCS::FInputType,FGenerateLightSamplesCS::FDebugMode,FGenerateLightSamplesCS::FReferenceMode,FGenerateLightSamplesCS::FHairComplexTransmittance>
  local_58;
  
  iVar7 = param_1->DimensionValue;
  if (((0xc < iVar7) || (iVar7 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TShaderRefBase<FGenerateLightSamplesCS,FShaderMapPointerTable> *)(*pcVar2)();
    return pTVar5;
  }
  iVar8 = (param_1->Tail).DimensionValue;
  if (iVar8 == 2) {
    iVar8 = 2;
  }
  else if (iVar8 == 4) {
    iVar8 = 1;
  }
  else {
    if ((iVar8 != 0x10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FGenerateLightSamplesCS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar5;
    }
    iVar8 = 0;
  }
  iVar1 = (param_1->Tail).Tail.Tail.DimensionValue;
  bVar3 = (param_1->Tail).Tail.DimensionValue;
  if (((1 < iVar1) || (iVar1 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TShaderRefBase<FGenerateLightSamplesCS,FShaderMapPointerTable> *)(*pcVar2)();
    return pTVar5;
  }
  iVar7 = ((-(uint)(bVar3 != false) & 3) + iVar8 +
          ((-(uint)((param_1->Tail).Tail.Tail.Tail.DimensionValue != false) & 2) +
          (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue != false) & 4) + iVar1 +
          (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue != false) & 8)) * 6) *
          0xd + iVar7;
  pFVar6 = (FShaderType *)FGenerateLightSamplesCS::GetStaticType();
  GetShader(this,&local_78,pFVar6,iVar7);
  if (local_78.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res18);
    ::FName::ToString((FName *)this_00,&local_68);
    FGenerateLightSamplesCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FGenerateLightSamplesCS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FGenerateLightSamplesCS::GetStaticType();
  TShaderPermutationDomain<FGenerateLightSamplesCS::FTileType,FGenerateLightSamplesCS::FNumSamplesPerPixel1d,FGenerateLightSamplesCS::FGuideByHistory,FGenerateLightSamplesCS::FInputType,FGenerateLightSamplesCS::FDebugMode,FGenerateLightSamplesCS::FReferenceMode,FGenerateLightSamplesCS::FHairComplexTransmittance>
  ::
  TShaderPermutationDomain<FGenerateLightSamplesCS::FTileType,FGenerateLightSamplesCS::FNumSamplesPerPixel1d,FGenerateLightSamplesCS::FGuideByHistory,FGenerateLightSamplesCS::FInputType,FGenerateLightSamplesCS::FDebugMode,FGenerateLightSamplesCS::FReferenceMode,FGenerateLightSamplesCS::FHairComplexTransmittance>
            (&local_58,iVar7);
  MegaLights::GetNumSamplesPerPixel2d((EMegaLightsInput)&local_res10);
  if (local_58.Tail.DimensionValue != local_res10 * local_res14) {
    `FGlobalShaderMap::GetShader<FGenerateLightSamplesCS>'::__l2::<lambda_1>::operator()(local_res8)
    ;
  }
  __return_storage_ptr__->ShaderContent = (FGenerateLightSamplesCS *)local_78.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_78.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FHardwareRayTraceLightSamplesRGS> @ 144ee6850

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

TShaderRefBase<FHardwareRayTraceLightSamplesRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FHardwareRayTraceLightSamplesRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FHardwareRayTraceLightSamplesRGS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
          *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  FShaderType *pFVar5;
  FName this_00;
  TShaderRefBase<FHardwareRayTraceLightSamplesRGS,FShaderMapPointerTable> *pTVar6;
  FGlobalShaderType *pFVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_58;
  FString local_48;
  FGlobalShaderPermutationParameters local_38;
  
  iVar8 = (uint)((param_1->DimensionValue).DimensionValue != false) +
          ((-(uint)(((TShaderPermutationDomain<FHardwareRayTraceLightSamples::FDebugMode> *)
                    ((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 1))->DimensionValue
                   != false) & 0x200) +
           (-(uint)((param_1->DimensionValue).Tail.Tail.DimensionValue != false) & 2) +
           (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) & 0x100)
           + (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue != false) & 0x80) +
           (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue != false) & 0x40) +
           (-(uint)((param_1->Tail).Tail.Tail.Tail.DimensionValue != false) & 0x20) +
           (-(uint)((param_1->Tail).Tail.Tail.DimensionValue != false) & 0x10) +
           (-(uint)((param_1->Tail).Tail.DimensionValue != false) & 8) +
           (-(uint)((param_1->Tail).DimensionValue != false) & 4) +
          (uint)((param_1->DimensionValue).Tail.DimensionValue != false)) * 2;
  pFVar5 = (FShaderType *)FHardwareRayTraceLightSamplesRGS::GetStaticType();
  GetShader(this,&local_58,pFVar5,iVar8);
  if (local_58.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_48);
    FHardwareRayTraceLightSamplesRGS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TShaderRefBase<FHardwareRayTraceLightSamplesRGS,FShaderMapPointerTable> *)
               (*pcVar2)();
      return pTVar6;
    }
  }
  EVar1 = this->Platform;
  pFVar7 = FHardwareRayTraceLightSamplesRGS::GetStaticType();
  local_38._8_4_ = 1;
  local_38.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar7->field_0x20;
  local_38.GlobalShaderName.Number = *(uint *)&pFVar7->field_0x24;
  local_38._0_2_ = EVar1;
  local_38._4_4_ = iVar8;
  EVar4 = FHardwareRayTraceLightSamples::ShouldPrecachePermutation(&local_38);
  if (EVar4 == NotUsed) {
    `FGlobalShaderMap::GetShader<FHardwareRayTraceLightSamplesRGS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  __return_storage_ptr__->ShaderContent = (FHardwareRayTraceLightSamplesRGS *)local_58.ShaderContent
  ;
  __return_storage_ptr__->ShaderMap = local_58.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FInitCompactedTraceTexelIndirectArgsCS> @ 144ee6a10

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

TShaderRefBase<FInitCompactedTraceTexelIndirectArgsCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FInitCompactedTraceTexelIndirectArgsCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FInitCompactedTraceTexelIndirectArgsCS,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FInitCompactedTraceTexelIndirectArgsCS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FInitCompactedTraceTexelIndirectArgsCS::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FInitCompactedTraceTexelIndirectArgsCS>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  pFVar4 = (FShaderType *)FInitCompactedTraceTexelIndirectArgsCS::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FInitCompactedTraceTexelIndirectArgsCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FInitCompactedTraceTexelIndirectArgsCS,FShaderMapPointerTable> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  FInitCompactedTraceTexelIndirectArgsCS::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FInitCompactedTraceTexelIndirectArgsCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FVolumeFilterVisibleLightHashCS> @ 144ee6b00

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

TShaderRefBase<FVolumeFilterVisibleLightHashCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FVolumeFilterVisibleLightHashCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FVolumeFilterVisibleLightHashCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FVolumeFilterVisibleLightHashCS::FDebugMode> *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  FShaderType *pFVar5;
  FName this_00;
  TShaderRefBase<FVolumeFilterVisibleLightHashCS,FShaderMapPointerTable> *pTVar6;
  FGlobalShaderType *pFVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_58;
  FString local_48;
  FGlobalShaderPermutationParameters local_38;
  
  bVar3 = param_1->DimensionValue;
  pFVar5 = (FShaderType *)FVolumeFilterVisibleLightHashCS::GetStaticType();
  uVar8 = (uint)(bVar3 != false);
  GetShader(this,&local_58,pFVar5,uVar8);
  if (local_58.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_48);
    FVolumeFilterVisibleLightHashCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TShaderRefBase<FVolumeFilterVisibleLightHashCS,FShaderMapPointerTable> *)(*pcVar2)()
      ;
      return pTVar6;
    }
  }
  EVar1 = this->Platform;
  pFVar7 = FVolumeFilterVisibleLightHashCS::GetStaticType();
  local_38._8_4_ = 1;
  local_38.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar7->field_0x20;
  local_38.GlobalShaderName.Number = *(uint *)&pFVar7->field_0x24;
  local_38._0_2_ = EVar1;
  local_38._4_4_ = uVar8;
  EVar4 = FVolumeFilterVisibleLightHashCS::ShouldPrecachePermutation(&local_38);
  if (EVar4 == NotUsed) {
    `FGlobalShaderMap::GetShader<FVolumeFilterVisibleLightHashCS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  __return_storage_ptr__->ShaderContent = (FVolumeFilterVisibleLightHashCS *)local_58.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_58.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FVolumeGenerateLightSamplesCS> @ 144ee6c20

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

TShaderRefBase<FVolumeGenerateLightSamplesCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FVolumeGenerateLightSamplesCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FVolumeGenerateLightSamplesCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FVolumeGenerateLightSamplesCS::FTranslucencyLightingVolume,FVolumeGenerateLightSamplesCS::FNumSamplesPerVoxel1d,FVolumeGenerateLightSamplesCS::FLightSoftFading,FVolumeGenerateLightSamplesCS::FUseLightFunctionAtlas,FVolumeGenerateLightSamplesCS::FGuideByHistory,FVolumeGenerateLightSamplesCS::FDebugMode,FVolumeGenerateLightSamplesCS::FReferenceMode>
          *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  EShaderPermutationPrecacheRequest EVar5;
  FShaderType *pFVar6;
  FName this_00;
  TShaderRefBase<FVolumeGenerateLightSamplesCS,FShaderMapPointerTable> *pTVar7;
  FGlobalShaderType *pFVar8;
  int iVar9;
  int iVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_58;
  FString local_48;
  FGlobalShaderPermutationParameters local_38;
  
  iVar10 = (param_1->Tail).DimensionValue;
  iVar9 = 0;
  bVar4 = param_1->DimensionValue;
  if (iVar10 == 2) {
    iVar9 = 2;
  }
  else if ((iVar10 != 4) &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                              ,0x90,L"Unknown shader permutation dimension value %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TShaderRefBase<FVolumeGenerateLightSamplesCS,FShaderMapPointerTable> *)(*pcVar2)();
    return pTVar7;
  }
  iVar10 = iVar9 + (-(uint)((param_1->Tail).Tail.Tail.DimensionValue != false) & 8) +
           (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue != false) & 0x40) +
           (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue != false) & 0x20) +
           (-(uint)((param_1->Tail).Tail.Tail.Tail.DimensionValue != false) & 0x10) +
           (-(uint)((param_1->Tail).Tail.DimensionValue != false) & 4) + (uint)(bVar4 != false);
  pFVar6 = (FShaderType *)FVolumeGenerateLightSamplesCS::GetStaticType();
  GetShader(this,&local_58,pFVar6,iVar10);
  if (local_58.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_48);
    FVolumeGenerateLightSamplesCS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TShaderRefBase<FVolumeGenerateLightSamplesCS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar7;
    }
  }
  EVar1 = this->Platform;
  pFVar8 = FVolumeGenerateLightSamplesCS::GetStaticType();
  local_38._8_4_ = 1;
  local_38.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x20;
  local_38.GlobalShaderName.Number = *(uint *)&pFVar8->field_0x24;
  local_38._0_2_ = EVar1;
  local_38._4_4_ = iVar10;
  EVar5 = FVolumeGenerateLightSamplesCS::ShouldPrecachePermutation(&local_38);
  if (EVar5 == NotUsed) {
    `FGlobalShaderMap::GetShader<FVolumeGenerateLightSamplesCS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  __return_storage_ptr__->ShaderContent = (FVolumeGenerateLightSamplesCS *)local_58.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_58.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FVolumeHardwareRayTraceLightSamplesRGS> @ 144ee6de0

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

TShaderRefBase<FVolumeHardwareRayTraceLightSamplesRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FVolumeHardwareRayTraceLightSamplesRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FVolumeHardwareRayTraceLightSamplesRGS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FVolumeHardwareRayTraceLightSamples::FTranslucencyLightingVolume,FVolumeHardwareRayTraceLightSamples::FLightingChannels,FVolumeHardwareRayTraceLightSamples::FEnableFarFieldTracing,FVolumeHardwareRayTraceLightSamples::FDebugMode>
          *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  FShaderType *pFVar5;
  FName this_00;
  TShaderRefBase<FVolumeHardwareRayTraceLightSamplesRGS,FShaderMapPointerTable> *pTVar6;
  FGlobalShaderType *pFVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_58;
  FString local_48;
  FGlobalShaderPermutationParameters local_38;
  
  iVar8 = (-(uint)((param_1->DimensionValue).Tail.Tail.DimensionValue != false) & 4) +
          (-(uint)((param_1->Tail).Tail.Tail.Tail.DimensionValue != false) & 0x40) +
          (-(uint)((param_1->Tail).Tail.Tail.DimensionValue != false) & 0x20) +
          (-(uint)((param_1->Tail).Tail.DimensionValue != false) & 0x10) +
          (-(uint)((param_1->Tail).DimensionValue != false) & 8) +
          (uint)((param_1->DimensionValue).DimensionValue != false) +
          (-(uint)((param_1->DimensionValue).Tail.DimensionValue != false) & 2);
  pFVar5 = (FShaderType *)FVolumeHardwareRayTraceLightSamplesRGS::GetStaticType();
  GetShader(this,&local_58,pFVar5,iVar8);
  if (local_58.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_48);
    FVolumeHardwareRayTraceLightSamplesRGS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TShaderRefBase<FVolumeHardwareRayTraceLightSamplesRGS,FShaderMapPointerTable> *)
               (*pcVar2)();
      return pTVar6;
    }
  }
  EVar1 = this->Platform;
  pFVar7 = FVolumeHardwareRayTraceLightSamplesRGS::GetStaticType();
  local_38._8_4_ = 1;
  local_38.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar7->field_0x20;
  local_38.GlobalShaderName.Number = *(uint *)&pFVar7->field_0x24;
  local_38._0_2_ = EVar1;
  local_38._4_4_ = iVar8;
  EVar4 = FVolumeHardwareRayTraceLightSamples::ShouldPrecachePermutation(&local_38);
  if (EVar4 == NotUsed) {
    `FGlobalShaderMap::GetShader<FVolumeHardwareRayTraceLightSamplesRGS>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  __return_storage_ptr__->ShaderContent =
       (FVolumeHardwareRayTraceLightSamplesRGS *)local_58.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_58.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FVolumeShadeLightSamplesCS> @ 144ee6f60

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

TShaderRefBase<FVolumeShadeLightSamplesCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FVolumeShadeLightSamplesCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FVolumeShadeLightSamplesCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FVolumeShadeLightSamplesCS::FTranslucencyLightingVolume,FVolumeShadeLightSamplesCS::FResampleVolume,FVolumeShadeLightSamplesCS::FDownsampleFactor,FVolumeShadeLightSamplesCS::FNumSamplesPerVoxel1d,FVolumeShadeLightSamplesCS::FLightSoftFading,FVolumeShadeLightSamplesCS::FUseLightFunctionAtlas,FVolumeShadeLightSamplesCS::FDebugMode,FVolumeShadeLightSamplesCS::FReferenceMode>
          *param_1)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  TShaderRefBase<FVolumeShadeLightSamplesCS,FShaderMapPointerTable> *pTVar6;
  FShaderType *pFVar7;
  FName this_00;
  int iVar8;
  int iVar9;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_68;
  FString local_58;
  TShaderPermutationDomain<FVolumeShadeLightSamplesCS::FTranslucencyLightingVolume,FVolumeShadeLightSamplesCS::FResampleVolume,FVolumeShadeLightSamplesCS::FDownsampleFactor,FVolumeShadeLightSamplesCS::FNumSamplesPerVoxel1d,FVolumeShadeLightSamplesCS::FLightSoftFading,FVolumeShadeLightSamplesCS::FUseLightFunctionAtlas,FVolumeShadeLightSamplesCS::FDebugMode,FVolumeShadeLightSamplesCS::FReferenceMode>
  local_48;
  
  iVar8 = 0;
  bVar5 = param_1->DimensionValue;
  bVar1 = (param_1->Tail).DimensionValue;
  iVar9 = (param_1->Tail).Tail.DimensionValue + -1;
  if (((1 < iVar9) || (iVar9 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TShaderRefBase<FVolumeShadeLightSamplesCS,FShaderMapPointerTable> *)(*pcVar3)();
    return pTVar6;
  }
  iVar2 = (param_1->Tail).Tail.Tail.DimensionValue;
  if (iVar2 == 2) {
    iVar8 = 2;
  }
  else if ((iVar2 != 4) &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                              ,0x90,L"Unknown shader permutation dimension value %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TShaderRefBase<FVolumeShadeLightSamplesCS,FShaderMapPointerTable> *)(*pcVar3)();
    return pTVar6;
  }
  iVar8 = (-(uint)(bVar1 != false) & 2) + (uint)(bVar5 != false) +
          ((-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue != false) & 8) +
           (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue != false) & 0x10) +
           iVar8 + (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) &
                   0x20) + (-(uint)((param_1->Tail).Tail.Tail.Tail.DimensionValue != false) & 4) +
          iVar9) * 4;
  pFVar7 = (FShaderType *)FVolumeShadeLightSamplesCS::GetStaticType();
  GetShader(this,&local_68,pFVar7,iVar8);
  if (local_68.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_58);
    FVolumeShadeLightSamplesCS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TShaderRefBase<FVolumeShadeLightSamplesCS,FShaderMapPointerTable> *)(*pcVar3)();
      return pTVar6;
    }
  }
  FVolumeShadeLightSamplesCS::GetStaticType();
  TShaderPermutationDomain<FVolumeShadeLightSamplesCS::FTranslucencyLightingVolume,FVolumeShadeLightSamplesCS::FResampleVolume,FVolumeShadeLightSamplesCS::FDownsampleFactor,FVolumeShadeLightSamplesCS::FNumSamplesPerVoxel1d,FVolumeShadeLightSamplesCS::FLightSoftFading,FVolumeShadeLightSamplesCS::FUseLightFunctionAtlas,FVolumeShadeLightSamplesCS::FDebugMode,FVolumeShadeLightSamplesCS::FReferenceMode>
  ::
  TShaderPermutationDomain<FVolumeShadeLightSamplesCS::FTranslucencyLightingVolume,FVolumeShadeLightSamplesCS::FResampleVolume,FVolumeShadeLightSamplesCS::FDownsampleFactor,FVolumeShadeLightSamplesCS::FNumSamplesPerVoxel1d,FVolumeShadeLightSamplesCS::FLightSoftFading,FVolumeShadeLightSamplesCS::FUseLightFunctionAtlas,FVolumeShadeLightSamplesCS::FDebugMode,FVolumeShadeLightSamplesCS::FReferenceMode>
            (&local_48,iVar8);
  __return_storage_ptr__->ShaderContent = (FVolumeShadeLightSamplesCS *)local_68.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_68.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FVolumeVisibleLightHashCS> @ 144ee7130

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

TShaderRefBase<FVolumeVisibleLightHashCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FVolumeVisibleLightHashCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FVolumeVisibleLightHashCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FVolumeVisibleLightHashCS::FNumSamplesPerVoxel1d,FVolumeVisibleLightHashCS::FDebugMode>
          *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  FShaderType *pFVar5;
  FName this_00;
  TShaderRefBase<FVolumeVisibleLightHashCS,FShaderMapPointerTable> *pTVar6;
  FGlobalShaderType *pFVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_58;
  FString local_48;
  FGlobalShaderPermutationParameters local_38;
  
  if (param_1->DimensionValue == 2) {
    iVar8 = 1;
  }
  else {
    if ((param_1->DimensionValue != 4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TShaderRefBase<FVolumeVisibleLightHashCS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar6;
    }
    iVar8 = 0;
  }
  iVar8 = (-(uint)((param_1->Tail).DimensionValue != false) & 2) + iVar8;
  pFVar5 = (FShaderType *)FVolumeVisibleLightHashCS::GetStaticType();
  GetShader(this,&local_58,pFVar5,iVar8);
  if (local_58.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_48);
    FVolumeVisibleLightHashCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TShaderRefBase<FVolumeVisibleLightHashCS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar6;
    }
  }
  EVar1 = this->Platform;
  pFVar7 = FVolumeVisibleLightHashCS::GetStaticType();
  local_38._8_4_ = 1;
  local_38.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar7->field_0x20;
  local_38.GlobalShaderName.Number = *(uint *)&pFVar7->field_0x24;
  local_38._0_2_ = EVar1;
  local_38._4_4_ = iVar8;
  EVar4 = FVolumeVisibleLightHashCS::ShouldPrecachePermutation(&local_38);
  if (EVar4 == NotUsed) {
    `FGlobalShaderMap::GetShader<FVolumeVisibleLightHashCS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  __return_storage_ptr__->ShaderContent = (FVolumeVisibleLightHashCS *)local_58.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_58.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FDepthExportCS> @ 144f61f50

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

TShaderRefBase<FDepthExportCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FDepthExportCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FDepthExportCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FDepthExportCS::FVelocityExportDim,FDepthExportCS::FShadingMaskExportDim,FDepthExportCS::FSkinningDim>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  FShaderType *pFVar5;
  FName this_00;
  TShaderRefBase<FDepthExportCS,FShaderMapPointerTable> *pTVar6;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar4 = (param_1->Tail).Tail.DimensionValue;
  bVar1 = (param_1->Tail).DimensionValue;
  bVar2 = param_1->DimensionValue;
  pFVar5 = (FShaderType *)FDepthExportCS::GetStaticType();
  GetShader(this,&local_28,pFVar5,
            (-(uint)(bVar1 != false) & 2) + (-(uint)(bVar4 != false) & 4) + (uint)(bVar2 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FDepthExportCS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TShaderRefBase<FDepthExportCS,FShaderMapPointerTable> *)(*pcVar3)();
      return pTVar6;
    }
  }
  FDepthExportCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FDepthExportCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FEmitSceneDepthPS> @ 144f62060

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

TShaderRefBase<FEmitSceneDepthPS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FEmitSceneDepthPS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FEmitSceneDepthPS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FEmitSceneDepthPS::FVelocityExportDim,FEmitSceneDepthPS::FShadingMaskExportDim,FEmitSceneDepthPS::FSkinningDim>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  FShaderType *pFVar5;
  FName this_00;
  TShaderRefBase<FEmitSceneDepthPS,FShaderMapPointerTable> *pTVar6;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar4 = (param_1->Tail).Tail.DimensionValue;
  bVar1 = (param_1->Tail).DimensionValue;
  bVar2 = param_1->DimensionValue;
  pFVar5 = (FShaderType *)FEmitSceneDepthPS::GetStaticType();
  GetShader(this,&local_28,pFVar5,
            (-(uint)(bVar1 != false) & 2) + (-(uint)(bVar4 != false) & 4) + (uint)(bVar2 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FEmitSceneDepthPS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TShaderRefBase<FEmitSceneDepthPS,FShaderMapPointerTable> *)(*pcVar3)();
      return pTVar6;
    }
  }
  FEmitSceneDepthPS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FEmitSceneDepthPS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FInstanceCull_CS> @ 144f62390

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

TShaderRefBase<FInstanceCull_CS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FInstanceCull_CS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FInstanceCull_CS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FInstanceCull_CS::FCullingPassDim,FInstanceCull_CS::FMultiViewDim,FInstanceCull_CS::FPrimitiveFilterDim,FInstanceCull_CS::FDebugFlagsDim,FInstanceCull_CS::FDepthOnlyDim,FInstanceCull_CS::FVirtualTextureTargetDim,FInstanceCull_CS::FMaterialCacheDim,FInstanceCull_CS::FStaticGeoDim,FInstanceCull_CS::FUseGroupWorkBufferDim>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FInstanceCull_CS,FShaderMapPointerTable> *pTVar4;
  int iVar5;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_38;
  FString local_28;
  TShaderPermutationDomain<FInstanceCull_CS::FCullingPassDim,FInstanceCull_CS::FMultiViewDim,FInstanceCull_CS::FPrimitiveFilterDim,FInstanceCull_CS::FDebugFlagsDim,FInstanceCull_CS::FDepthOnlyDim,FInstanceCull_CS::FVirtualTextureTargetDim,FInstanceCull_CS::FMaterialCacheDim,FInstanceCull_CS::FStaticGeoDim,FInstanceCull_CS::FUseGroupWorkBufferDim>
  local_18;
  
  iVar5 = param_1->DimensionValue;
  if (iVar5 == 0) {
    iVar5 = 3;
  }
  else if (iVar5 == 1) {
    iVar5 = 2;
  }
  else if (iVar5 == 2) {
    iVar5 = 1;
  }
  else {
    if ((iVar5 != 3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FInstanceCull_CS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
    iVar5 = 0;
  }
  iVar5 = iVar5 + (-(uint)((param_1->Tail).Tail.DimensionValue != false) & 8) +
          (-(uint)(((TShaderPermutationDomain<FInstanceCull_CS::FUseGroupWorkBufferDim> *)
                   ((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 1))->DimensionValue
                  != false) & 0x200) +
          (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) & 0x100) +
          (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue != false) & 0x80) +
          (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue != false) & 0x40) +
          (-(uint)((param_1->Tail).Tail.Tail.Tail.DimensionValue != false) & 0x20) +
          (-(uint)((param_1->Tail).Tail.Tail.DimensionValue != false) & 0x10) +
          (-(uint)((param_1->Tail).DimensionValue != false) & 4);
  pFVar3 = (FShaderType *)FInstanceCull_CS::GetStaticType();
  GetShader(this,&local_38,pFVar3,iVar5);
  if (local_38.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_28);
    FInstanceCull_CS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FInstanceCull_CS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FInstanceCull_CS::GetStaticType();
  TShaderPermutationDomain<FInstanceCull_CS::FCullingPassDim,FInstanceCull_CS::FMultiViewDim,FInstanceCull_CS::FPrimitiveFilterDim,FInstanceCull_CS::FDebugFlagsDim,FInstanceCull_CS::FDepthOnlyDim,FInstanceCull_CS::FVirtualTextureTargetDim,FInstanceCull_CS::FMaterialCacheDim,FInstanceCull_CS::FStaticGeoDim,FInstanceCull_CS::FUseGroupWorkBufferDim>
  ::
  TShaderPermutationDomain<FInstanceCull_CS::FCullingPassDim,FInstanceCull_CS::FMultiViewDim,FInstanceCull_CS::FPrimitiveFilterDim,FInstanceCull_CS::FDebugFlagsDim,FInstanceCull_CS::FDepthOnlyDim,FInstanceCull_CS::FVirtualTextureTargetDim,FInstanceCull_CS::FMaterialCacheDim,FInstanceCull_CS::FStaticGeoDim,FInstanceCull_CS::FUseGroupWorkBufferDim>
            (&local_18,iVar5);
  __return_storage_ptr__->ShaderContent = (FInstanceCull_CS *)local_38.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_38.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FInstanceHierarchyChunkCull_CS> @ 144f62560

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

TShaderRefBase<FInstanceHierarchyChunkCull_CS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FInstanceHierarchyChunkCull_CS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FInstanceHierarchyChunkCull_CS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FInstanceHierarchyCullShader::FDebugFlagsDim,FInstanceHierarchyCullShader::FCullingPassDim,FInstanceHierarchyCullShader::FVirtualTextureTargetDim>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FInstanceHierarchyChunkCull_CS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  iVar3 = TShaderPermutationDomain<FInstanceHierarchyCullShader::FDebugFlagsDim,FInstanceHierarchyCullShader::FCullingPassDim,FInstanceHierarchyCullShader::FVirtualTextureTargetDim>
          ::ToDimensionValueId(param_1);
  pFVar4 = (FShaderType *)FInstanceHierarchyChunkCull_CS::GetStaticType();
  GetShader(this,&local_28,pFVar4,iVar3);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FInstanceHierarchyChunkCull_CS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FInstanceHierarchyChunkCull_CS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FInstanceHierarchyChunkCull_CS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FInstanceHierarchyChunkCull_CS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FNodeAndClusterCull_CS> @ 144f62650

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

TShaderRefBase<FNodeAndClusterCull_CS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FNodeAndClusterCull_CS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FNodeAndClusterCull_CS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FNodeAndClusterCull_CS::FCullingPassDim,FNodeAndClusterCull_CS::FCullingTypeDim,FNodeAndClusterCull_CS::FMultiViewDim,FNodeAndClusterCull_CS::FVirtualTextureTargetDim,FNodeAndClusterCull_CS::FMaterialCacheDim,FNodeAndClusterCull_CS::FDebugFlagsDim,FNodeAndClusterCull_CS::FSplineDeformDim>
          *param_1)

{
  EShaderPlatform EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  EShaderPermutationPrecacheRequest EVar5;
  FShaderType *pFVar6;
  FName this_00;
  TShaderRefBase<FNodeAndClusterCull_CS,FShaderMapPointerTable> *pTVar7;
  FGlobalShaderType *pFVar8;
  int iVar9;
  int iVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_58;
  FString local_48;
  FGlobalShaderPermutationParameters local_38;
  
  iVar10 = param_1->DimensionValue;
  iVar9 = 2;
  if (iVar10 == 0) {
    iVar10 = 2;
  }
  else if (iVar10 == 1) {
    iVar10 = 1;
  }
  else {
    if ((iVar10 != 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TShaderRefBase<FNodeAndClusterCull_CS,FShaderMapPointerTable> *)(*pcVar3)();
      return pTVar7;
    }
    iVar10 = 0;
  }
  iVar2 = (param_1->Tail).DimensionValue;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      iVar9 = 1;
    }
    else {
      if ((iVar2 != 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                             ,0x90,L"Unknown shader permutation dimension value %i."), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TShaderRefBase<FNodeAndClusterCull_CS,FShaderMapPointerTable> *)(*pcVar3)();
        return pTVar7;
      }
      iVar9 = 0;
    }
  }
  iVar10 = iVar10 + ((-(uint)((param_1->Tail).Tail.Tail.DimensionValue != false) & 6) +
                    (-(uint)((param_1->Tail).Tail.Tail.Tail.DimensionValue != false) & 0xc) + iVar9
                    + (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue != false) &
                      0x30) + (-(uint)((param_1->Tail).Tail.DimensionValue != false) & 3) +
                      (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue != false) & 0x18))
                    * 3;
  pFVar6 = (FShaderType *)FNodeAndClusterCull_CS::GetStaticType();
  GetShader(this,&local_58,pFVar6,iVar10);
  if (local_58.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_48);
    FNodeAndClusterCull_CS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TShaderRefBase<FNodeAndClusterCull_CS,FShaderMapPointerTable> *)(*pcVar3)();
      return pTVar7;
    }
  }
  EVar1 = this->Platform;
  pFVar8 = FNodeAndClusterCull_CS::GetStaticType();
  local_38._8_4_ = 1;
  local_38.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x20;
  local_38.GlobalShaderName.Number = *(uint *)&pFVar8->field_0x24;
  local_38._0_2_ = EVar1;
  local_38._4_4_ = iVar10;
  EVar5 = FNodeAndClusterCull_CS::ShouldPrecachePermutation(&local_38);
  if (EVar5 == NotUsed) {
    `FGlobalShaderMap::GetShader<FNodeAndClusterCull_CS>'::__l2::<lambda_1>::operator()(local_res8);
  }
  __return_storage_ptr__->ShaderContent = (FNodeAndClusterCull_CS *)local_58.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_58.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FRasterBinBuild_CS> @ 144f62850

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

TShaderRefBase<FRasterBinBuild_CS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FRasterBinBuild_CS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FRasterBinBuild_CS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FRasterBinBuild_CS::FIsPostPass,FRasterBinBuild_CS::FPatches,FRasterBinBuild_CS::FVirtualTextureTargetDim,FRasterBinBuild_CS::FMaterialCacheDim,FRasterBinBuild_CS::FBuildPassDim,FRasterBinBuild_CS::FDepthBucketingDim,FRasterBinBuild_CS::FMultiViewDim>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FShaderType *pFVar9;
  FName this_00;
  TShaderRefBase<FRasterBinBuild_CS,FShaderMapPointerTable> *pTVar10;
  int iVar11;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  iVar5 = (param_1->Tail).Tail.Tail.Tail.DimensionValue;
  bVar8 = param_1->DimensionValue;
  bVar1 = (param_1->Tail).DimensionValue;
  bVar2 = (param_1->Tail).Tail.DimensionValue;
  bVar3 = (param_1->Tail).Tail.Tail.DimensionValue;
  if (iVar5 == 1) {
    iVar11 = 0x10;
  }
  else {
    iVar11 = 0;
    if ((iVar5 != 3) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), iVar11 = 0,
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TShaderRefBase<FRasterBinBuild_CS,FShaderMapPointerTable> *)(*pcVar6)();
      return pTVar10;
    }
  }
  bVar7 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar4 = (param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  pFVar9 = (FShaderType *)FRasterBinBuild_CS::GetStaticType();
  GetShader(this,&local_48,pFVar9,
            iVar11 + (-(uint)(bVar3 != false) & 8) +
            (-(uint)(bVar7 != false) & 0x40) + (-(uint)(bVar4 != false) & 0x20) +
            (-(uint)(bVar2 != false) & 4) + (-(uint)(bVar1 != false) & 2) + (uint)(bVar8 != false));
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_38);
    FRasterBinBuild_CS::GetStaticType();
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TShaderRefBase<FRasterBinBuild_CS,FShaderMapPointerTable> *)(*pcVar6)();
      return pTVar10;
    }
  }
  FRasterBinBuild_CS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FRasterBinBuild_CS *)local_48.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_48.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<Nanite::FNaniteStreamOutTraversalCS> @ 145031860

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

TShaderRefBase<Nanite::FNaniteStreamOutTraversalCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<Nanite::FNaniteStreamOutTraversalCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<Nanite::FNaniteStreamOutTraversalCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<Nanite::FNaniteStreamOutTraversalCS::FCountVerticesAndTrianglesDim,Nanite::FNaniteStreamOutTraversalCS::FCacheClustersDim,Nanite::FNaniteStreamOutTraversalCS::FCullingTypeDim>
          *param_1)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FShaderType *pFVar6;
  FName this_00;
  TShaderRefBase<Nanite::FNaniteStreamOutTraversalCS,FShaderMapPointerTable> *pTVar7;
  int iVar8;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_38;
  FString local_28;
  
  iVar2 = (param_1->Tail).Tail.DimensionValue;
  bVar5 = param_1->DimensionValue;
  bVar1 = (param_1->Tail).DimensionValue;
  if (iVar2 == 0) {
    iVar8 = 4;
  }
  else {
    iVar8 = 0;
    if ((iVar2 != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), iVar8 = 0,
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TShaderRefBase<Nanite::FNaniteStreamOutTraversalCS,FShaderMapPointerTable> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  pFVar6 = (FShaderType *)Nanite::FNaniteStreamOutTraversalCS::GetStaticType();
  GetShader(this,&local_38,pFVar6,(-(uint)(bVar1 != false) & 2) + iVar8 + (uint)(bVar5 != false));
  if (local_38.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_28);
    Nanite::FNaniteStreamOutTraversalCS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TShaderRefBase<Nanite::FNaniteStreamOutTraversalCS,FShaderMapPointerTable> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  Nanite::FNaniteStreamOutTraversalCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FNaniteStreamOutTraversalCS *)local_38.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_38.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FShadingBinBuildCS> @ 1450319a0

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

TShaderRefBase<FShadingBinBuildCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FShadingBinBuildCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FShadingBinBuildCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FShadingBinBuildCS::FBuildPassDim,FShadingBinBuildCS::FTechniqueDim,FShadingBinBuildCS::FGatherStatsDim,FShadingBinBuildCS::FVariableRateDim,FShadingBinBuildCS::FOptimizeWriteMaskDim,FShadingBinBuildCS::FNumExports>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  TShaderRefBase<FShadingBinBuildCS,FShaderMapPointerTable> *pTVar7;
  FShaderType *pFVar8;
  FName this_00;
  int iVar9;
  int iVar10;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  if (param_1->DimensionValue == 0) {
    iVar10 = 1;
  }
  else {
    if ((param_1->DimensionValue != 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TShaderRefBase<FShadingBinBuildCS,FShaderMapPointerTable> *)(*pcVar4)();
      return pTVar7;
    }
    iVar10 = 0;
  }
  iVar3 = (param_1->Tail).DimensionValue;
  if (((1 < iVar3) || (iVar3 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TShaderRefBase<FShadingBinBuildCS,FShaderMapPointerTable> *)(*pcVar4)();
    return pTVar7;
  }
  bVar5 = (param_1->Tail).Tail.DimensionValue;
  bVar1 = (param_1->Tail).Tail.Tail.DimensionValue;
  bVar2 = (param_1->Tail).Tail.Tail.Tail.DimensionValue;
  iVar9 = (param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue + -1;
  if (((7 < iVar9) || (iVar9 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TShaderRefBase<FShadingBinBuildCS,FShaderMapPointerTable> *)(*pcVar4)();
    return pTVar7;
  }
  pFVar8 = (FShaderType *)FShadingBinBuildCS::GetStaticType();
  GetShader(this,&local_48,pFVar8,
            iVar10 + (iVar9 * 0x10 +
                     (-(uint)(bVar5 != false) & 2) + iVar3 +
                     (-(uint)(bVar1 != false) & 4) + (-(uint)(bVar2 != false) & 8)) * 2);
  if ((FShadingBinBuildCS *)local_48.ShaderContent == (FShadingBinBuildCS *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_38);
    FShadingBinBuildCS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TShaderRefBase<FShadingBinBuildCS,FShaderMapPointerTable> *)(*pcVar4)();
      return pTVar7;
    }
  }
  FShadingBinBuildCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FShadingBinBuildCS *)local_48.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_48.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FPathTracingDebugRG> @ 1450ad050

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

TShaderRefBase<FPathTracingDebugRG,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FPathTracingDebugRG>
          (FGlobalShaderMap *this,
          TShaderRefBase<FPathTracingDebugRG,FShaderMapPointerTable> *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FPathTracingDebugRG,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FPathTracingDebugRG::GetStaticType();
  GetShader(this,&local_28,pFVar3,param_1);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FPathTracingDebugRG::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FPathTracingDebugRG,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FPathTracingDebugRG::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FPathTracingDebugRG *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FPathTracingInitExtinctionCoefficientRG> @ 1450ad130

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

TShaderRefBase<FPathTracingInitExtinctionCoefficientRG,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FPathTracingInitExtinctionCoefficientRG>
          (FGlobalShaderMap *this,
          TShaderRefBase<FPathTracingInitExtinctionCoefficientRG,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FPathTracingInitExtinctionCoefficientRG::FNeedTMinWorkaround>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FPathTracingInitExtinctionCoefficientRG,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar2 = param_1->DimensionValue;
  pFVar3 = (FShaderType *)FPathTracingInitExtinctionCoefficientRG::GetStaticType();
  GetShader(this,&local_28,pFVar3,(uint)(bVar2 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FPathTracingInitExtinctionCoefficientRG::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FPathTracingInitExtinctionCoefficientRG,FShaderMapPointerTable> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  FPathTracingInitExtinctionCoefficientRG::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FPathTracingInitExtinctionCoefficientRG *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FPathTracingRG> @ 1450ad220

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

TShaderRefBase<FPathTracingRG,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FPathTracingRG>
          (FGlobalShaderMap *this,
          TShaderRefBase<FPathTracingRG,FShaderMapPointerTable> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FPathTracingRG,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FPathTracingRG::GetStaticType();
  GetShader(this,&local_28,pFVar3,param_1);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FPathTracingRG::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FPathTracingRG,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FPathTracingRG::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FPathTracingRG *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FDefaultPayloadMS> @ 1452f9900

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

TShaderRefBase<FDefaultPayloadMS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FDefaultPayloadMS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FDefaultPayloadMS,FShaderMapPointerTable> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FDefaultPayloadMS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FDefaultPayloadMS::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FDefaultPayloadMS>'::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar4 = (FShaderType *)FDefaultPayloadMS::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FDefaultPayloadMS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FDefaultPayloadMS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FDefaultPayloadMS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FDefaultPayloadMS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FRayTracingDebugCHS> @ 1452f99f0

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

TShaderRefBase<FRayTracingDebugCHS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FRayTracingDebugCHS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FRayTracingDebugCHS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FRayTracingDebugCHS::FNaniteRayTracing> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FRayTracingDebugCHS,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar2 = param_1->DimensionValue;
  pFVar3 = (FShaderType *)FRayTracingDebugCHS::GetStaticType();
  GetShader(this,&local_28,pFVar3,(uint)(bVar2 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FRayTracingDebugCHS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FRayTracingDebugCHS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FRayTracingDebugCHS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FRayTracingDebugCHS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FRayTracingDebugHitStatsCHS> @ 1452f9ae0

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

TShaderRefBase<FRayTracingDebugHitStatsCHS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FRayTracingDebugHitStatsCHS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FRayTracingDebugHitStatsCHS,FShaderMapPointerTable> *__return_storage_ptr__
          ,TShaderPermutationDomain<> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FRayTracingDebugHitStatsCHS,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FRayTracingDebugHitStatsCHS::GetStaticType();
  GetShader(this,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FRayTracingDebugHitStatsCHS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FRayTracingDebugHitStatsCHS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FRayTracingDebugHitStatsCHS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FRayTracingDebugHitStatsCHS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FRayTracingDebugMS> @ 1452f9bc0

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

TShaderRefBase<FRayTracingDebugMS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FRayTracingDebugMS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FRayTracingDebugMS,FShaderMapPointerTable> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FRayTracingDebugMS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FRayTracingDebugMS::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FRayTracingDebugMS>'::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar4 = (FShaderType *)FRayTracingDebugMS::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FRayTracingDebugMS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FRayTracingDebugMS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FRayTracingDebugMS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FRayTracingDebugMS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FRayTracingDebugRGS> @ 1452f9cb0

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

TShaderRefBase<FRayTracingDebugRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FRayTracingDebugRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FRayTracingDebugRGS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FRayTracingDebugRGS::FUseDebugCHSType,FRayTracingDebugRGS::FUseNvAPITimestamp>
          *param_1)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FRayTracingDebugRGS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar3 = (param_1->Tail).DimensionValue;
  bVar1 = param_1->DimensionValue;
  pFVar4 = (FShaderType *)FRayTracingDebugRGS::GetStaticType();
  GetShader(this,&local_28,pFVar4,(-(uint)(bVar3 != false) & 2) + (uint)(bVar1 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FRayTracingDebugRGS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FRayTracingDebugRGS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FRayTracingDebugRGS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FRayTracingDebugRGS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FRayTracingLightingMS> @ 1452f9db0

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

TShaderRefBase<FRayTracingLightingMS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FRayTracingLightingMS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FRayTracingLightingMS,FShaderMapPointerTable> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FRayTracingLightingMS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FRayTracingLightingMS::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FRayTracingLightingMS>'::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar4 = (FShaderType *)FRayTracingLightingMS::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FRayTracingLightingMS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FRayTracingLightingMS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FRayTracingLightingMS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FRayTracingLightingMS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FDefaultCallableShader> @ 145360dd0

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

TShaderRefBase<FDefaultCallableShader,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FDefaultCallableShader>
          (FGlobalShaderMap *this,
          TShaderRefBase<FDefaultCallableShader,FShaderMapPointerTable> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FDefaultCallableShader,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FDefaultCallableShader::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FDefaultCallableShader>'::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar4 = (FShaderType *)FDefaultCallableShader::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FDefaultCallableShader::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FDefaultCallableShader,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FDefaultCallableShader::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FDefaultCallableShader *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FOcclusionCS> @ 145360ec0

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

TShaderRefBase<FOcclusionCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FOcclusionCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FOcclusionCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FOcclusionCS::FLightTypeDim,FOcclusionCS::FDenoiserOutputDim,FOcclusionCS::FHairLighting,FOcclusionCS::FEnableMultipleSamplesPerPixel,FOcclusionCS::FEnableTransmissionDim>
          *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TShaderRefBase<FOcclusionCS,FShaderMapPointerTable> *pTVar8;
  FShaderType *pFVar9;
  FName this_00;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  iVar1 = param_1->DimensionValue;
  if (((3 < iVar1) || (iVar1 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TShaderRefBase<FOcclusionCS,FShaderMapPointerTable> *)(*pcVar5)();
    return pTVar8;
  }
  iVar2 = (param_1->Tail).DimensionValue;
  if (((2 < iVar2) || (iVar2 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TShaderRefBase<FOcclusionCS,FShaderMapPointerTable> *)(*pcVar5)();
    return pTVar8;
  }
  iVar3 = (param_1->Tail).Tail.DimensionValue;
  if (((1 < iVar3) || (iVar3 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TShaderRefBase<FOcclusionCS,FShaderMapPointerTable> *)(*pcVar5)();
    return pTVar8;
  }
  bVar6 = (param_1->Tail).Tail.Tail.DimensionValue;
  iVar4 = (param_1->Tail).Tail.Tail.Tail.DimensionValue;
  if (((1 < iVar4) || (iVar4 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TShaderRefBase<FOcclusionCS,FShaderMapPointerTable> *)(*pcVar5)();
    return pTVar8;
  }
  pFVar9 = (FShaderType *)FOcclusionCS::GetStaticType();
  GetShader(this,&local_48,pFVar9,
            iVar1 + iVar2 * 4 + ((-(uint)(bVar6 != false) & 2) + iVar3 + iVar4 * 4) * 0xc);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_38);
    FOcclusionCS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TShaderRefBase<FOcclusionCS,FShaderMapPointerTable> *)(*pcVar5)();
      return pTVar8;
    }
  }
  FOcclusionCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FOcclusionCS *)local_48.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_48.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FRayTracingPrimaryRaysRGS> @ 1453610b0

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

TShaderRefBase<FRayTracingPrimaryRaysRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FRayTracingPrimaryRaysRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FRayTracingPrimaryRaysRGS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FRayTracingPrimaryRaysRGS::FEnableTwoSidedGeometryForShadowDim>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FRayTracingPrimaryRaysRGS,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar2 = param_1->DimensionValue;
  pFVar3 = (FShaderType *)FRayTracingPrimaryRaysRGS::GetStaticType();
  GetShader(this,&local_28,pFVar3,(uint)(bVar2 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FRayTracingPrimaryRaysRGS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FRayTracingPrimaryRaysRGS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FRayTracingPrimaryRaysRGS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FRayTracingPrimaryRaysRGS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<TShadowProjectionPS<1,0,0,1,0>_> @ 14556ec50

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

TShaderRefBase<TShadowProjectionPS<1,0,0,1,0>,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<TShadowProjectionPS<1,0,0,1,0>_>
          (FGlobalShaderMap *this,
          TShaderRefBase<TShadowProjectionPS<1,0,0,1,0>,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<TShadowProjectionPS<1,0,0,1,0>,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = TShadowProjectionPS<1,0,0,1,0>::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<TShadowProjectionPS<1,0,0,1,0>_>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)TShadowProjectionPS<1,0,0,1,0>::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((TShadowProjectionPS<1,0,0,1,0> *)local_28.ShaderContent ==
      (TShadowProjectionPS<1,0,0,1,0> *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    TShadowProjectionPS<1,0,0,1,0>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<TShadowProjectionPS<1,0,0,1,0>,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TShadowProjectionPS<1,0,0,1,0>::GetStaticType();
  __return_storage_ptr__->ShaderContent = (TShadowProjectionPS<1,0,0,1,0> *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<TShadowProjectionPS<1,0,0,0,1>_> @ 14556ed40

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

TShaderRefBase<TShadowProjectionPS<1,0,0,0,1>,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<TShadowProjectionPS<1,0,0,0,1>_>
          (FGlobalShaderMap *this,
          TShaderRefBase<TShadowProjectionPS<1,0,0,0,1>,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<TShadowProjectionPS<1,0,0,0,1>,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = TShadowProjectionPS<1,0,0,0,1>::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<TShadowProjectionPS<1,0,0,0,1>_>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)TShadowProjectionPS<1,0,0,0,1>::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((TShadowProjectionPS<1,0,0,0,1> *)local_28.ShaderContent ==
      (TShadowProjectionPS<1,0,0,0,1> *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    TShadowProjectionPS<1,0,0,0,1>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<TShadowProjectionPS<1,0,0,0,1>,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TShadowProjectionPS<1,0,0,0,1>::GetStaticType();
  __return_storage_ptr__->ShaderContent = (TShadowProjectionPS<1,0,0,0,1> *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<TShadowProjectionPS<1,0,0,0,0>_> @ 14556ee30

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

TShaderRefBase<TShadowProjectionPS<1,0,0,0,0>,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<TShadowProjectionPS<1,0,0,0,0>_>
          (FGlobalShaderMap *this,
          TShaderRefBase<TShadowProjectionPS<1,0,0,0,0>,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<TShadowProjectionPS<1,0,0,0,0>,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = TShadowProjectionPS<1,0,0,0,0>::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<TShadowProjectionPS<1,0,0,0,0>_>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)TShadowProjectionPS<1,0,0,0,0>::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((TShadowProjectionPS<1,0,0,0,0> *)local_28.ShaderContent ==
      (TShadowProjectionPS<1,0,0,0,0> *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    TShadowProjectionPS<1,0,0,0,0>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<TShadowProjectionPS<1,0,0,0,0>,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TShadowProjectionPS<1,0,0,0,0>::GetStaticType();
  __return_storage_ptr__->ShaderContent = (TShadowProjectionPS<1,0,0,0,0> *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<TShadowProjectionPS<2,0,0,1,0>_> @ 14556ef20

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

TShaderRefBase<TShadowProjectionPS<2,0,0,1,0>,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<TShadowProjectionPS<2,0,0,1,0>_>
          (FGlobalShaderMap *this,
          TShaderRefBase<TShadowProjectionPS<2,0,0,1,0>,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<TShadowProjectionPS<2,0,0,1,0>,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = TShadowProjectionPS<2,0,0,1,0>::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<TShadowProjectionPS<2,0,0,1,0>_>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)TShadowProjectionPS<2,0,0,1,0>::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((TShadowProjectionPS<2,0,0,1,0> *)local_28.ShaderContent ==
      (TShadowProjectionPS<2,0,0,1,0> *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    TShadowProjectionPS<2,0,0,1,0>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<TShadowProjectionPS<2,0,0,1,0>,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TShadowProjectionPS<2,0,0,1,0>::GetStaticType();
  __return_storage_ptr__->ShaderContent = (TShadowProjectionPS<2,0,0,1,0> *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<TShadowProjectionPS<2,0,0,0,1>_> @ 14556f010

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

TShaderRefBase<TShadowProjectionPS<2,0,0,0,1>,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<TShadowProjectionPS<2,0,0,0,1>_>
          (FGlobalShaderMap *this,
          TShaderRefBase<TShadowProjectionPS<2,0,0,0,1>,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<TShadowProjectionPS<2,0,0,0,1>,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = TShadowProjectionPS<2,0,0,0,1>::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<TShadowProjectionPS<2,0,0,0,1>_>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)TShadowProjectionPS<2,0,0,0,1>::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((TShadowProjectionPS<2,0,0,0,1> *)local_28.ShaderContent ==
      (TShadowProjectionPS<2,0,0,0,1> *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    TShadowProjectionPS<2,0,0,0,1>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<TShadowProjectionPS<2,0,0,0,1>,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TShadowProjectionPS<2,0,0,0,1>::GetStaticType();
  __return_storage_ptr__->ShaderContent = (TShadowProjectionPS<2,0,0,0,1> *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<TShadowProjectionPS<2,0,0,0,0>_> @ 14556f100

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

TShaderRefBase<TShadowProjectionPS<2,0,0,0,0>,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<TShadowProjectionPS<2,0,0,0,0>_>
          (FGlobalShaderMap *this,
          TShaderRefBase<TShadowProjectionPS<2,0,0,0,0>,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<TShadowProjectionPS<2,0,0,0,0>,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = TShadowProjectionPS<2,0,0,0,0>::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<TShadowProjectionPS<2,0,0,0,0>_>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)TShadowProjectionPS<2,0,0,0,0>::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((TShadowProjectionPS<2,0,0,0,0> *)local_28.ShaderContent ==
      (TShadowProjectionPS<2,0,0,0,0> *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    TShadowProjectionPS<2,0,0,0,0>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<TShadowProjectionPS<2,0,0,0,0>,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TShadowProjectionPS<2,0,0,0,0>::GetStaticType();
  __return_storage_ptr__->ShaderContent = (TShadowProjectionPS<2,0,0,0,0> *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<TShadowProjectionPS<3,0,0,1,0>_> @ 14556f1f0

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

TShaderRefBase<TShadowProjectionPS<3,0,0,1,0>,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<TShadowProjectionPS<3,0,0,1,0>_>
          (FGlobalShaderMap *this,
          TShaderRefBase<TShadowProjectionPS<3,0,0,1,0>,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<TShadowProjectionPS<3,0,0,1,0>,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = TShadowProjectionPS<3,0,0,1,0>::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<TShadowProjectionPS<3,0,0,1,0>_>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)TShadowProjectionPS<3,0,0,1,0>::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((TShadowProjectionPS<3,0,0,1,0> *)local_28.ShaderContent ==
      (TShadowProjectionPS<3,0,0,1,0> *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    TShadowProjectionPS<3,0,0,1,0>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<TShadowProjectionPS<3,0,0,1,0>,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TShadowProjectionPS<3,0,0,1,0>::GetStaticType();
  __return_storage_ptr__->ShaderContent = (TShadowProjectionPS<3,0,0,1,0> *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<TShadowProjectionPS<3,0,0,0,1>_> @ 14556f2e0

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

TShaderRefBase<TShadowProjectionPS<3,0,0,0,1>,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<TShadowProjectionPS<3,0,0,0,1>_>
          (FGlobalShaderMap *this,
          TShaderRefBase<TShadowProjectionPS<3,0,0,0,1>,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<TShadowProjectionPS<3,0,0,0,1>,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = TShadowProjectionPS<3,0,0,0,1>::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<TShadowProjectionPS<3,0,0,0,1>_>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)TShadowProjectionPS<3,0,0,0,1>::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((TShadowProjectionPS<3,0,0,0,1> *)local_28.ShaderContent ==
      (TShadowProjectionPS<3,0,0,0,1> *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    TShadowProjectionPS<3,0,0,0,1>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<TShadowProjectionPS<3,0,0,0,1>,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TShadowProjectionPS<3,0,0,0,1>::GetStaticType();
  __return_storage_ptr__->ShaderContent = (TShadowProjectionPS<3,0,0,0,1> *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<TShadowProjectionPS<3,0,0,0,0>_> @ 14556f3d0

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

TShaderRefBase<TShadowProjectionPS<3,0,0,0,0>,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<TShadowProjectionPS<3,0,0,0,0>_>
          (FGlobalShaderMap *this,
          TShaderRefBase<TShadowProjectionPS<3,0,0,0,0>,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<TShadowProjectionPS<3,0,0,0,0>,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = TShadowProjectionPS<3,0,0,0,0>::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<TShadowProjectionPS<3,0,0,0,0>_>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)TShadowProjectionPS<3,0,0,0,0>::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((TShadowProjectionPS<3,0,0,0,0> *)local_28.ShaderContent ==
      (TShadowProjectionPS<3,0,0,0,0> *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    TShadowProjectionPS<3,0,0,0,0>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<TShadowProjectionPS<3,0,0,0,0>,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TShadowProjectionPS<3,0,0,0,0>::GetStaticType();
  __return_storage_ptr__->ShaderContent = (TShadowProjectionPS<3,0,0,0,0> *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<TShadowProjectionPS<4,0,0,1,0>_> @ 14556f4c0

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

TShaderRefBase<TShadowProjectionPS<4,0,0,1,0>,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<TShadowProjectionPS<4,0,0,1,0>_>
          (FGlobalShaderMap *this,
          TShaderRefBase<TShadowProjectionPS<4,0,0,1,0>,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<TShadowProjectionPS<4,0,0,1,0>,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = TShadowProjectionPS<4,0,0,1,0>::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<TShadowProjectionPS<4,0,0,1,0>_>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)TShadowProjectionPS<4,0,0,1,0>::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((TShadowProjectionPS<4,0,0,1,0> *)local_28.ShaderContent ==
      (TShadowProjectionPS<4,0,0,1,0> *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    TShadowProjectionPS<4,0,0,1,0>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<TShadowProjectionPS<4,0,0,1,0>,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TShadowProjectionPS<4,0,0,1,0>::GetStaticType();
  __return_storage_ptr__->ShaderContent = (TShadowProjectionPS<4,0,0,1,0> *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<TShadowProjectionPS<4,0,0,0,1>_> @ 14556f5b0

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

TShaderRefBase<TShadowProjectionPS<4,0,0,0,1>,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<TShadowProjectionPS<4,0,0,0,1>_>
          (FGlobalShaderMap *this,
          TShaderRefBase<TShadowProjectionPS<4,0,0,0,1>,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<TShadowProjectionPS<4,0,0,0,1>,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = TShadowProjectionPS<4,0,0,0,1>::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<TShadowProjectionPS<4,0,0,0,1>_>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)TShadowProjectionPS<4,0,0,0,1>::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((TShadowProjectionPS<4,0,0,0,1> *)local_28.ShaderContent ==
      (TShadowProjectionPS<4,0,0,0,1> *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    TShadowProjectionPS<4,0,0,0,1>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<TShadowProjectionPS<4,0,0,0,1>,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TShadowProjectionPS<4,0,0,0,1>::GetStaticType();
  __return_storage_ptr__->ShaderContent = (TShadowProjectionPS<4,0,0,0,1> *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<TShadowProjectionPS<4,0,0,0,0>_> @ 14556f6a0

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

TShaderRefBase<TShadowProjectionPS<4,0,0,0,0>,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<TShadowProjectionPS<4,0,0,0,0>_>
          (FGlobalShaderMap *this,
          TShaderRefBase<TShadowProjectionPS<4,0,0,0,0>,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<TShadowProjectionPS<4,0,0,0,0>,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = TShadowProjectionPS<4,0,0,0,0>::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<TShadowProjectionPS<4,0,0,0,0>_>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)TShadowProjectionPS<4,0,0,0,0>::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((TShadowProjectionPS<4,0,0,0,0> *)local_28.ShaderContent ==
      (TShadowProjectionPS<4,0,0,0,0> *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    TShadowProjectionPS<4,0,0,0,0>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<TShadowProjectionPS<4,0,0,0,0>,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TShadowProjectionPS<4,0,0,0,0>::GetStaticType();
  __return_storage_ptr__->ShaderContent = (TShadowProjectionPS<4,0,0,0,0> *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<TShadowProjectionPS<5,0,0,1,0>_> @ 14556f790

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

TShaderRefBase<TShadowProjectionPS<5,0,0,1,0>,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<TShadowProjectionPS<5,0,0,1,0>_>
          (FGlobalShaderMap *this,
          TShaderRefBase<TShadowProjectionPS<5,0,0,1,0>,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<TShadowProjectionPS<5,0,0,1,0>,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = TShadowProjectionPS<5,0,0,1,0>::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<TShadowProjectionPS<5,0,0,1,0>_>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)TShadowProjectionPS<5,0,0,1,0>::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((TShadowProjectionPS<5,0,0,1,0> *)local_28.ShaderContent ==
      (TShadowProjectionPS<5,0,0,1,0> *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    TShadowProjectionPS<5,0,0,1,0>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<TShadowProjectionPS<5,0,0,1,0>,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TShadowProjectionPS<5,0,0,1,0>::GetStaticType();
  __return_storage_ptr__->ShaderContent = (TShadowProjectionPS<5,0,0,1,0> *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<TShadowProjectionPS<5,0,0,0,1>_> @ 14556f880

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

TShaderRefBase<TShadowProjectionPS<5,0,0,0,1>,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<TShadowProjectionPS<5,0,0,0,1>_>
          (FGlobalShaderMap *this,
          TShaderRefBase<TShadowProjectionPS<5,0,0,0,1>,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<TShadowProjectionPS<5,0,0,0,1>,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = TShadowProjectionPS<5,0,0,0,1>::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<TShadowProjectionPS<5,0,0,0,1>_>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)TShadowProjectionPS<5,0,0,0,1>::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((TShadowProjectionPS<5,0,0,0,1> *)local_28.ShaderContent ==
      (TShadowProjectionPS<5,0,0,0,1> *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    TShadowProjectionPS<5,0,0,0,1>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<TShadowProjectionPS<5,0,0,0,1>,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TShadowProjectionPS<5,0,0,0,1>::GetStaticType();
  __return_storage_ptr__->ShaderContent = (TShadowProjectionPS<5,0,0,0,1> *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<TShadowProjectionPS<5,0,0,0,0>_> @ 14556f970

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

TShaderRefBase<TShadowProjectionPS<5,0,0,0,0>,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<TShadowProjectionPS<5,0,0,0,0>_>
          (FGlobalShaderMap *this,
          TShaderRefBase<TShadowProjectionPS<5,0,0,0,0>,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<TShadowProjectionPS<5,0,0,0,0>,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = TShadowProjectionPS<5,0,0,0,0>::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<TShadowProjectionPS<5,0,0,0,0>_>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)TShadowProjectionPS<5,0,0,0,0>::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((TShadowProjectionPS<5,0,0,0,0> *)local_28.ShaderContent ==
      (TShadowProjectionPS<5,0,0,0,0> *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    TShadowProjectionPS<5,0,0,0,0>::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<TShadowProjectionPS<5,0,0,0,0>,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TShadowProjectionPS<5,0,0,0,0>::GetStaticType();
  __return_storage_ptr__->ShaderContent = (TShadowProjectionPS<5,0,0,0,0> *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FShadowProjectionNoTransformVS> @ 14556fa60

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

TShaderRefBase<FShadowProjectionNoTransformVS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FShadowProjectionNoTransformVS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FShadowProjectionNoTransformVS,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FShadowProjectionNoTransformVS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FShadowProjectionNoTransformVS::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FShadowProjectionNoTransformVS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)FShadowProjectionNoTransformVS::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FShadowProjectionNoTransformVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FShadowProjectionNoTransformVS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FShadowProjectionNoTransformVS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FShadowProjectionNoTransformVS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FShadowVolumeBoundProjectionVS> @ 14556fb50

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

TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>
          *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FShadowVolumeBoundProjectionVS::GetStaticType();
  GetShader(this,&local_28,pFVar3,param_1);
  if ((FShadowVolumeBoundProjectionVS *)local_28.ShaderContent ==
      (FShadowVolumeBoundProjectionVS *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FShadowVolumeBoundProjectionVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FShadowVolumeBoundProjectionVS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FShadowVolumeBoundProjectionVS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FWaterTileVS> @ 145662f20

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

TShaderRefBase<FWaterTileVS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FWaterTileVS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FWaterTileVS,FShaderMapPointerTable> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FWaterTileVS,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FWaterTileVS::GetStaticType();
  GetShader(this,&local_28,pFVar3,param_1);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FWaterTileVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FWaterTileVS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FWaterTileVS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FWaterTileVS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FStochasticLightingTileClassificationMarkCS> @ 1456d65c0

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

TShaderRefBase<FStochasticLightingTileClassificationMarkCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FStochasticLightingTileClassificationMarkCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FStochasticLightingTileClassificationMarkCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FStochasticLightingTileClassificationMarkCS::FCopyDepthAndNormal,FStochasticLightingTileClassificationMarkCS::FStochasticSampleOffset,FStochasticLightingTileClassificationMarkCS::FTileClassifyLumen,FStochasticLightingTileClassificationMarkCS::FTileClassifyMegaLights,FStochasticLightingTileClassificationMarkCS::FTileClassifySubstrate,FStochasticLightingTileClassificationMarkCS::FReprojectLumen,FStochasticLightingTileClassificationMarkCS::FReprojectMegaLights,FStochasticLightingTileClassificationMarkCS::FHistoryRejectBasedOnNormal,FStochasticLightingTileClassificationMarkCS::FMaterialSource,FStochasticLightingTileClassificationMarkCS::FOverflowTile>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  EStochasticSampleOffset EVar6;
  EMaterialSource EVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  TShaderRefBase<FStochasticLightingTileClassificationMarkCS,FShaderMapPointerTable> *pTVar12;
  FShaderType *pFVar13;
  FName this_00;
  undefined1 local_78 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_70;
  FString local_60 [2];
  
  EVar6 = (param_1->Tail).DimensionValue;
  bVar11 = param_1->DimensionValue;
  if (((3 < (int)EVar6) || ((int)EVar6 < 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar12 = (TShaderRefBase<FStochasticLightingTileClassificationMarkCS,FShaderMapPointerTable> *)
              (*pcVar8)();
    return pTVar12;
  }
  bVar9 = (param_1->Tail).Tail.DimensionValue;
  EVar7 = ((TShaderPermutationDomain<FStochasticLightingTileClassificationMarkCS::FMaterialSource,FStochasticLightingTileClassificationMarkCS::FOverflowTile>
            *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 4))->DimensionValue;
  bVar1 = (param_1->Tail).Tail.Tail.DimensionValue;
  bVar2 = (param_1->Tail).Tail.Tail.Tail.DimensionValue;
  bVar3 = (param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  bVar4 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar5 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  if (((2 < (int)EVar7) || ((int)EVar7 < 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PermutationId < PermutationCount && PermutationId >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                          ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar10)) {
    pcVar8 = (code *)swi(3);
    pTVar12 = (TShaderRefBase<FStochasticLightingTileClassificationMarkCS,FShaderMapPointerTable> *)
              (*pcVar8)();
    return pTVar12;
  }
  bVar10 = ((TShaderPermutationDomain<FStochasticLightingTileClassificationMarkCS::FOverflowTile> *)
           ((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 8))->DimensionValue;
  pFVar13 = (FShaderType *)FStochasticLightingTileClassificationMarkCS::GetStaticType();
  GetShader(this,&local_70,pFVar13,
            (uint)(bVar11 != false) +
            ((-(uint)(bVar9 != false) & 4) +
            (-(uint)(bVar5 != false) & 0x80) + EVar6 +
            ((-(uint)(bVar10 != false) & 3) + EVar7) * 0x100 + (-(uint)(bVar1 != false) & 8) +
            (-(uint)(bVar2 != false) & 0x10) + (-(uint)(bVar3 != false) & 0x20) +
            (-(uint)(bVar4 != false) & 0x40)) * 2);
  if (local_70.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_78);
    ::FName::ToString((FName *)this_00,local_60);
    FStochasticLightingTileClassificationMarkCS::GetStaticType();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TShaderRefBase<FStochasticLightingTileClassificationMarkCS,FShaderMapPointerTable>
                 *)(*pcVar8)();
      return pTVar12;
    }
  }
  FStochasticLightingTileClassificationMarkCS::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FStochasticLightingTileClassificationMarkCS *)local_70.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_70.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FFilterTranslucentVolumeCS> @ 14574cee0

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

TShaderRefBase<FFilterTranslucentVolumeCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FFilterTranslucentVolumeCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FFilterTranslucentVolumeCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FFilterTranslucentVolumeCS::FUseTemporalReprojection,FFilterTranslucentVolumeCS::FCheckHistoryMark>
          *param_1)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FFilterTranslucentVolumeCS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar3 = (param_1->Tail).DimensionValue;
  bVar1 = param_1->DimensionValue;
  pFVar4 = (FShaderType *)FFilterTranslucentVolumeCS::GetStaticType();
  GetShader(this,&local_28,pFVar4,(-(uint)(bVar3 != false) & 2) + (uint)(bVar1 != false));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FFilterTranslucentVolumeCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FFilterTranslucentVolumeCS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FFilterTranslucentVolumeCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FFilterTranslucentVolumeCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FAllocateCommandInstanceOutputSpaceCs> @ 1457bf8b0

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

TShaderRefBase<FAllocateCommandInstanceOutputSpaceCs,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FAllocateCommandInstanceOutputSpaceCs>
          (FGlobalShaderMap *this,
          TShaderRefBase<FAllocateCommandInstanceOutputSpaceCs,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FAllocateCommandInstanceOutputSpaceCs,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FAllocateCommandInstanceOutputSpaceCs::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FAllocateCommandInstanceOutputSpaceCs>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  pFVar4 = (FShaderType *)FAllocateCommandInstanceOutputSpaceCs::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FAllocateCommandInstanceOutputSpaceCs::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FAllocateCommandInstanceOutputSpaceCs,FShaderMapPointerTable> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  FAllocateCommandInstanceOutputSpaceCs::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FAllocateCommandInstanceOutputSpaceCs *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FCullPerPageDrawCommandsCs> @ 1457bf9a0

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

TShaderRefBase<FCullPerPageDrawCommandsCs,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FCullPerPageDrawCommandsCs>
          (FGlobalShaderMap *this,
          TShaderRefBase<FCullPerPageDrawCommandsCs,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FCullPerPageDrawCommandsCs::FUseHzbDim,FCullPerPageDrawCommandsCs::FBatchedDim,FCullPerPageDrawCommandsCs::FGenerateStatsDim,FCullPerPageDrawCommandsCs::FWithShaderPrintDim>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  FShaderType *pFVar6;
  FName this_00;
  TShaderRefBase<FCullPerPageDrawCommandsCs,FShaderMapPointerTable> *pTVar7;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar5 = (param_1->Tail).Tail.Tail.DimensionValue;
  bVar1 = (param_1->Tail).DimensionValue;
  bVar2 = param_1->DimensionValue;
  bVar3 = (param_1->Tail).Tail.DimensionValue;
  pFVar6 = (FShaderType *)FCullPerPageDrawCommandsCs::GetStaticType();
  GetShader(this,&local_28,pFVar6,
            (-(uint)(bVar1 != false) & 2) + (-(uint)(bVar5 != false) & 8) + (uint)(bVar2 != false) +
            (-(uint)(bVar3 != false) & 4));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FCullPerPageDrawCommandsCs::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TShaderRefBase<FCullPerPageDrawCommandsCs,FShaderMapPointerTable> *)(*pcVar4)();
      return pTVar7;
    }
  }
  FCullPerPageDrawCommandsCs::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FCullPerPageDrawCommandsCs *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FGeneratePageFlagsFromPixelsCS> @ 1457bfac0

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

TShaderRefBase<FGeneratePageFlagsFromPixelsCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FGeneratePageFlagsFromPixelsCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FGeneratePageFlagsFromPixelsCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FGeneratePageFlagsFromPixelsCS::FInputType,FGeneratePageFlagsFromPixelsCS::FWaterDepth,FGeneratePageFlagsFromPixelsCS::FTranslucencyDepth,FGeneratePageFlagsFromPixelsCS::FThrottling>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TShaderRefBase<FGeneratePageFlagsFromPixelsCS,FShaderMapPointerTable> *pTVar6;
  FShaderType *pFVar7;
  FName this_00;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  iVar3 = param_1->DimensionValue;
  if (((1 < iVar3) || (iVar3 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TShaderRefBase<FGeneratePageFlagsFromPixelsCS,FShaderMapPointerTable> *)(*pcVar4)();
    return pTVar6;
  }
  bVar5 = (param_1->Tail).Tail.Tail.DimensionValue;
  bVar1 = (param_1->Tail).Tail.DimensionValue;
  bVar2 = (param_1->Tail).DimensionValue;
  pFVar7 = (FShaderType *)FGeneratePageFlagsFromPixelsCS::GetStaticType();
  GetShader(this,&local_28,pFVar7,
            iVar3 + (-(uint)(bVar1 != false) & 4) + (-(uint)(bVar5 != false) & 8) +
            (-(uint)(bVar2 != false) & 2));
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FGeneratePageFlagsFromPixelsCS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TShaderRefBase<FGeneratePageFlagsFromPixelsCS,FShaderMapPointerTable> *)(*pcVar4)();
      return pTVar6;
    }
  }
  FGeneratePageFlagsFromPixelsCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FGeneratePageFlagsFromPixelsCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FOutputCommandInstanceListsCs> @ 1457bfc10

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

TShaderRefBase<FOutputCommandInstanceListsCs,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FOutputCommandInstanceListsCs>
          (FGlobalShaderMap *this,
          TShaderRefBase<FOutputCommandInstanceListsCs,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FOutputCommandInstanceListsCs,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FOutputCommandInstanceListsCs::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FOutputCommandInstanceListsCs>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)FOutputCommandInstanceListsCs::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FOutputCommandInstanceListsCs::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FOutputCommandInstanceListsCs,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FOutputCommandInstanceListsCs::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FOutputCommandInstanceListsCs *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FVirtualShadowMapProjectionCS> @ 1457bfd00

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

TShaderRefBase<FVirtualShadowMapProjectionCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FVirtualShadowMapProjectionCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FVirtualShadowMapProjectionCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FVirtualShadowMapProjectionCS::FDirectionalLightDim,FVirtualShadowMapProjectionCS::FOnePassProjectionDim,FVirtualShadowMapProjectionCS::FHairStrandsDim,FVirtualShadowMapProjectionCS::FVisualizeOutputDim,FVirtualShadowMapProjectionCS::FExtrapolateSlopeDim,FVirtualShadowMapProjectionCS::FUseTileList,FVirtualShadowMapProjectionCS::FFirstPersonShadow,FVirtualShadowMapProjectionCS::FSMRTStaticSampleCount>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  FShaderType *pFVar10;
  FName this_00;
  TShaderRefBase<FVirtualShadowMapProjectionCS,FShaderMapPointerTable> *pTVar11;
  int iVar12;
  int iVar13;
  undefined1 local_res18 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_88;
  FString local_78;
  TShaderPermutationDomain<FVirtualShadowMapProjectionCS::FDirectionalLightDim,FVirtualShadowMapProjectionCS::FOnePassProjectionDim,FVirtualShadowMapProjectionCS::FHairStrandsDim,FVirtualShadowMapProjectionCS::FVisualizeOutputDim,FVirtualShadowMapProjectionCS::FExtrapolateSlopeDim,FVirtualShadowMapProjectionCS::FUseTileList,FVirtualShadowMapProjectionCS::FFirstPersonShadow,FVirtualShadowMapProjectionCS::FSMRTStaticSampleCount>
  local_68;
  
  bVar9 = (param_1->Tail).DimensionValue;
  bVar1 = param_1->DimensionValue;
  iVar13 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar2 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar3 = (param_1->Tail).Tail.DimensionValue;
  bVar4 = (param_1->Tail).Tail.Tail.DimensionValue;
  bVar5 = (param_1->Tail).Tail.Tail.Tail.DimensionValue;
  bVar6 = (param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  if (iVar13 == -1) {
    iVar12 = 2;
  }
  else if (iVar13 == 2) {
    iVar12 = 1;
  }
  else {
    iVar12 = 0;
    if ((iVar13 != 4) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), iVar12 = 0,
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TShaderRefBase<FVirtualShadowMapProjectionCS,FShaderMapPointerTable> *)(*pcVar7)();
      return pTVar11;
    }
  }
  iVar13 = (uint)(bVar1 != false) + (-(uint)(bVar9 != false) & 2) +
           (-(uint)(bVar3 != false) & 4) + (-(uint)(bVar4 != false) & 8) +
           (-(uint)(bVar5 != false) & 0x10) + (-(uint)(bVar6 != false) & 0x20) +
           (-(uint)(bVar2 != false) & 0x40) + iVar12 * 0x80;
  pFVar10 = (FShaderType *)FVirtualShadowMapProjectionCS::GetStaticType();
  GetShader(this,&local_88,pFVar10,iVar13);
  if (local_88.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res18);
    ::FName::ToString((FName *)this_00,&local_78);
    FVirtualShadowMapProjectionCS::GetStaticType();
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TShaderRefBase<FVirtualShadowMapProjectionCS,FShaderMapPointerTable> *)(*pcVar7)();
      return pTVar11;
    }
  }
  FVirtualShadowMapProjectionCS::GetStaticType();
  TShaderPermutationDomain<FVirtualShadowMapProjectionCS::FDirectionalLightDim,FVirtualShadowMapProjectionCS::FOnePassProjectionDim,FVirtualShadowMapProjectionCS::FHairStrandsDim,FVirtualShadowMapProjectionCS::FVisualizeOutputDim,FVirtualShadowMapProjectionCS::FExtrapolateSlopeDim,FVirtualShadowMapProjectionCS::FUseTileList,FVirtualShadowMapProjectionCS::FFirstPersonShadow,FVirtualShadowMapProjectionCS::FSMRTStaticSampleCount>
  ::
  TShaderPermutationDomain<FVirtualShadowMapProjectionCS::FDirectionalLightDim,FVirtualShadowMapProjectionCS::FOnePassProjectionDim,FVirtualShadowMapProjectionCS::FHairStrandsDim,FVirtualShadowMapProjectionCS::FVisualizeOutputDim,FVirtualShadowMapProjectionCS::FExtrapolateSlopeDim,FVirtualShadowMapProjectionCS::FUseTileList,FVirtualShadowMapProjectionCS::FFirstPersonShadow,FVirtualShadowMapProjectionCS::FSMRTStaticSampleCount>
            (&local_68,iVar13);
  __return_storage_ptr__->ShaderContent = (FVirtualShadowMapProjectionCS *)local_88.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_88.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FRayTraceDirectionalLightVolumeShadowMapRGS> @ 145853f30

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

TShaderRefBase<FRayTraceDirectionalLightVolumeShadowMapRGS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FRayTraceDirectionalLightVolumeShadowMapRGS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FRayTraceDirectionalLightVolumeShadowMapRGS,FShaderMapPointerTable>
          *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderRefBase<FRayTraceDirectionalLightVolumeShadowMapRGS,FShaderMapPointerTable> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FRayTraceDirectionalLightVolumeShadowMapRGS::GetStaticType();
  GetShader(this,&local_28,pFVar3,param_1);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FRayTraceDirectionalLightVolumeShadowMapRGS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderRefBase<FRayTraceDirectionalLightVolumeShadowMapRGS,FShaderMapPointerTable> *
               )(*pcVar1)();
      return pTVar4;
    }
  }
  FRayTraceDirectionalLightVolumeShadowMapRGS::GetStaticType();
  __return_storage_ptr__->ShaderContent =
       (FRayTraceDirectionalLightVolumeShadowMapRGS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FVolumetricFogLightScatteringCS> @ 145854010

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

TShaderRefBase<FVolumetricFogLightScatteringCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FVolumetricFogLightScatteringCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FVolumetricFogLightScatteringCS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<FVolumetricFogLightScatteringCS::FSuperSampleCount,FVolumetricFogLightScatteringCS::FTemporalReprojection,FVolumetricFogLightScatteringCS::FDistanceFieldSkyOcclusion,FVolumetricFogLightScatteringCS::FLumenGI,FVolumetricFogLightScatteringCS::FVirtualShadowMap,FVolumetricFogLightScatteringCS::FRaytracedShadowsVolume,FVolumetricFogLightScatteringCS::FSampleLightFunctionAtlas,FVolumetricFogLightScatteringCS::FMegaLights,FVolumetricFogLightScatteringCS::FLightSoftFading>
          *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  FShaderType *pFVar5;
  FName this_00;
  TShaderRefBase<FVolumetricFogLightScatteringCS,FShaderMapPointerTable> *pTVar6;
  FGlobalShaderType *pFVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_58;
  FString local_48;
  FShaderPermutationParameters local_38;
  undefined8 local_2c;
  
  iVar8 = param_1->DimensionValue;
  if (iVar8 == 1) {
    iVar8 = 3;
  }
  else if (iVar8 == 4) {
    iVar8 = 2;
  }
  else if (iVar8 == 8) {
    iVar8 = 1;
  }
  else {
    if ((iVar8 != 0x10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TShaderRefBase<FVolumetricFogLightScatteringCS,FShaderMapPointerTable> *)(*pcVar2)()
      ;
      return pTVar6;
    }
    iVar8 = 0;
  }
  iVar8 = iVar8 + (-(uint)((param_1->Tail).Tail.Tail.DimensionValue != false) & 0x10) +
          (-(uint)(((TShaderPermutationDomain<FVolumetricFogLightScatteringCS::FLightSoftFading> *)
                   ((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 1))->DimensionValue
                  != false) & 0x200) + (-(uint)((param_1->Tail).DimensionValue != false) & 4) +
          (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) & 0x100) +
          (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue != false) & 0x80) +
          (-(uint)((param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue != false) & 0x40) +
          (-(uint)((param_1->Tail).Tail.Tail.Tail.DimensionValue != false) & 0x20) +
          (-(uint)((param_1->Tail).Tail.DimensionValue != false) & 8);
  pFVar5 = (FShaderType *)FVolumetricFogLightScatteringCS::GetStaticType();
  GetShader(this,&local_58,pFVar5,iVar8);
  if (local_58.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_48);
    FVolumetricFogLightScatteringCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TShaderRefBase<FVolumetricFogLightScatteringCS,FShaderMapPointerTable> *)(*pcVar2)()
      ;
      return pTVar6;
    }
  }
  EVar1 = this->Platform;
  pFVar7 = FVolumetricFogLightScatteringCS::GetStaticType();
  local_38.Flags = HasEditorOnlyData;
  local_2c = *(undefined8 *)&pFVar7->field_0x20;
  local_38.Platform = EVar1;
  local_38.PermutationId = iVar8;
  EVar4 = FVolumetricFogLightScatteringCS::ShouldPrecachePermutation(&local_38);
  if (EVar4 == NotUsed) {
    `FGlobalShaderMap::GetShader<FVolumetricFogLightScatteringCS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  __return_storage_ptr__->ShaderContent = (FVolumetricFogLightScatteringCS *)local_58.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_58.ShaderMap;
  return __return_storage_ptr__;
}

// GetShader<FWriteToBoundingSphereVS> @ 145854200

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

TShaderRefBase<FWriteToBoundingSphereVS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FWriteToBoundingSphereVS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FWriteToBoundingSphereVS,FShaderMapPointerTable> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FWriteToBoundingSphereVS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FWriteToBoundingSphereVS::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FWriteToBoundingSphereVS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)FWriteToBoundingSphereVS::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FWriteToBoundingSphereVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FWriteToBoundingSphereVS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FWriteToBoundingSphereVS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FWriteToBoundingSphereVS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// operator() @ 1504c2810

bool __thiscall
`FGlobalShaderMap::GetShader<FCapsuleShadowingUpsampleVS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCapsuleShadowingUpsampleVS::GetStaticType();
    FCapsuleShadowingUpsampleVS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCapsuleShadowingUpsampleVS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCapsuleShadowingUpsampleVS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3630

bool __thiscall
`FGlobalShaderMap::GetShader<FBuildTileConesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FBuildTileConesCS::GetStaticType();
    FBuildTileConesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FBuildTileConesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FBuildTileConesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3690

bool __thiscall
`FGlobalShaderMap::GetShader<FCombineConeVisibilityCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCombineConeVisibilityCS::GetStaticType();
    FCombineConeVisibilityCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCombineConeVisibilityCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCombineConeVisibilityCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c36f0

bool __thiscall
`FGlobalShaderMap::GetShader<FComputeCulledObjectStartOffsetCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FComputeCulledObjectStartOffsetCS::GetStaticType();
    FComputeCulledObjectStartOffsetCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FComputeCulledObjectStartOffsetCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FComputeCulledObjectStartOffsetCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3750

bool __thiscall
`FGlobalShaderMap::GetShader<FComputeCulledTilesStartOffsetCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FComputeCulledTilesStartOffsetCS::GetStaticType();
    FComputeCulledTilesStartOffsetCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FComputeCulledTilesStartOffsetCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FComputeCulledTilesStartOffsetCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c37b0

bool __thiscall
`FGlobalShaderMap::GetShader<FComputeDistanceFieldAssetWantedMipsCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FComputeDistanceFieldAssetWantedMipsCS::GetStaticType();
    FComputeDistanceFieldAssetWantedMipsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FComputeDistanceFieldAssetWantedMipsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FComputeDistanceFieldAssetWantedMipsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3810

bool __thiscall
`FGlobalShaderMap::GetShader<FCopyDistanceFieldAtlasCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCopyDistanceFieldAtlasCS::GetStaticType();
    FCopyDistanceFieldAtlasCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCopyDistanceFieldAtlasCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCopyDistanceFieldAtlasCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3870

bool __thiscall
`FGlobalShaderMap::GetShader<FCullObjectsForViewCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCullObjectsForViewCS::GetStaticType();
    FCullObjectsForViewCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCullObjectsForViewCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCullObjectsForViewCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c38d0

bool __thiscall
`FGlobalShaderMap::GetShader<FDistanceFieldShadowingCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FDistanceFieldShadowingCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FDistanceFieldShadowingCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FDistanceFieldShadowingCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3920

bool __thiscall
`FGlobalShaderMap::GetShader<FGenerateDistanceFieldAssetStreamingRequestsCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FGenerateDistanceFieldAssetStreamingRequestsCS::GetStaticType();
    FGenerateDistanceFieldAssetStreamingRequestsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FGenerateDistanceFieldAssetStreamingRequestsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FGenerateDistanceFieldAssetStreamingRequestsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3980

bool __thiscall
`FGlobalShaderMap::GetShader<FGeometryAwareUpsamplePS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FGeometryAwareUpsamplePS::GetStaticType();
    FGeometryAwareUpsamplePS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FGeometryAwareUpsamplePS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FGeometryAwareUpsamplePS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c39e0

bool __thiscall
`FGlobalShaderMap::GetShader<FObjectCullVS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FObjectCullVS::GetStaticType();
    FObjectCullVS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FObjectCullVS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FObjectCullVS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3a40

bool __thiscall
`FGlobalShaderMap::GetShader<FScatterUploadDistanceFieldAtlasCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FScatterUploadDistanceFieldAtlasCS::GetStaticType();
    FScatterUploadDistanceFieldAtlasCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FScatterUploadDistanceFieldAtlasCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FScatterUploadDistanceFieldAtlasCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3aa0

bool __thiscall
`FGlobalShaderMap::GetShader<FScreenPassVS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FScreenPassVS::GetStaticType();
    FScreenPassVS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FScreenPassVS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FScreenPassVS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3b00

bool __thiscall
`FGlobalShaderMap::GetShader<FVisualizeDistanceFieldUpsamplePS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVisualizeDistanceFieldUpsamplePS::GetStaticType();
    FVisualizeDistanceFieldUpsamplePS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVisualizeDistanceFieldUpsamplePS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVisualizeDistanceFieldUpsamplePS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3f90

bool __thiscall
`FGlobalShaderMap::GetShader<FBuildGridTilesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FBuildGridTilesCS::GetStaticType();
    FBuildGridTilesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FBuildGridTilesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FBuildGridTilesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3ff0

bool __thiscall
`FGlobalShaderMap::GetShader<FBuildHeightfieldComposeTilesCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FBuildHeightfieldComposeTilesCS::GetStaticType();
    FBuildHeightfieldComposeTilesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FBuildHeightfieldComposeTilesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FBuildHeightfieldComposeTilesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c4050

bool __thiscall
`FGlobalShaderMap::GetShader<FBuildHeightfieldComposeTilesIndirectArgBufferCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FBuildHeightfieldComposeTilesIndirectArgBufferCS::GetStaticType();
    FBuildHeightfieldComposeTilesIndirectArgBufferCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FBuildHeightfieldComposeTilesIndirectArgBufferCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FBuildHeightfieldComposeTilesIndirectArgBufferCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c40b0

bool __thiscall
`FGlobalShaderMap::GetShader<FClearIndirectArgBufferCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FClearIndirectArgBufferCS::GetStaticType();
    FClearIndirectArgBufferCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FClearIndirectArgBufferCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FClearIndirectArgBufferCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c4110

bool __thiscall
`FGlobalShaderMap::GetShader<FCompositeHeightfieldsIntoObjectGridPagesCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCompositeHeightfieldsIntoObjectGridPagesCS::GetStaticType();
    FCompositeHeightfieldsIntoObjectGridPagesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCompositeHeightfieldsIntoObjectGridPagesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCompositeHeightfieldsIntoObjectGridPagesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c4170

bool __thiscall
`FGlobalShaderMap::GetShader<FCullObjectsToGridCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCullObjectsToGridCS::GetStaticType();
    FCullObjectsToGridCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCullObjectsToGridCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCullObjectsToGridCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c41d0

bool __thiscall
`FGlobalShaderMap::GetShader<FGPUSceneDebugRenderCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FGPUSceneDebugRenderCS::GetStaticType();
    FGPUSceneDebugRenderCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FGPUSceneDebugRenderCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FGPUSceneDebugRenderCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c4230

bool __thiscall
`FGlobalShaderMap::GetShader<FGPUSceneSetInstancePrimitiveIdCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FGPUSceneSetInstancePrimitiveIdCS::GetStaticType();
    FGPUSceneSetInstancePrimitiveIdCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FGPUSceneSetInstancePrimitiveIdCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FGPUSceneSetInstancePrimitiveIdCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c4290

bool __thiscall
`FGlobalShaderMap::GetShader<FGlobalDistanceFieldAccumulateUpdatedPagesCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FGlobalDistanceFieldAccumulateUpdatedPagesCS::GetStaticType();
    FGlobalDistanceFieldAccumulateUpdatedPagesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FGlobalDistanceFieldAccumulateUpdatedPagesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FGlobalDistanceFieldAccumulateUpdatedPagesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c42f0

bool __thiscall
`FGlobalShaderMap::GetShader<FGlobalDistanceFieldDebugCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FGlobalDistanceFieldDebugCS::GetStaticType();
    FGlobalDistanceFieldDebugCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FGlobalDistanceFieldDebugCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FGlobalDistanceFieldDebugCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c4350

bool __thiscall
`FGlobalShaderMap::GetShader<FGlobalDistanceFieldPageStatsCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FGlobalDistanceFieldPageStatsCS::GetStaticType();
    FGlobalDistanceFieldPageStatsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FGlobalDistanceFieldPageStatsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FGlobalDistanceFieldPageStatsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c43b0

bool __thiscall
`FGlobalShaderMap::GetShader<FInitPageFreeListCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FInitPageFreeListCS::GetStaticType();
    FInitPageFreeListCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FInitPageFreeListCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FInitPageFreeListCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c4410

bool __thiscall
`FGlobalShaderMap::GetShader<FMarkHeightfieldPagesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FMarkHeightfieldPagesCS::GetStaticType();
    FMarkHeightfieldPagesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FMarkHeightfieldPagesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FMarkHeightfieldPagesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c4470

bool __thiscall
`FGlobalShaderMap::GetShader<FPageFreeListReturnCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FPageFreeListReturnCS::GetStaticType();
    FPageFreeListReturnCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FPageFreeListReturnCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FPageFreeListReturnCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c44d0

bool __thiscall
`FGlobalShaderMap::GetShader<FPageFreeListReturnIndirectArgBufferCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FPageFreeListReturnIndirectArgBufferCS::GetStaticType();
    FPageFreeListReturnIndirectArgBufferCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FPageFreeListReturnIndirectArgBufferCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FPageFreeListReturnIndirectArgBufferCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c4a90

bool __thiscall
`FGlobalShaderMap::GetShader<FHairStrandsForwardRasterBinningCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FHairStrandsForwardRasterBinningCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FHairStrandsForwardRasterBinningCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FHairStrandsForwardRasterBinningCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c4ae0

bool __thiscall
`FGlobalShaderMap::GetShader<FHairStrandsForwardRasterCompactionCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FHairStrandsForwardRasterCompactionCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FHairStrandsForwardRasterCompactionCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FHairStrandsForwardRasterCompactionCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c4b30

bool __thiscall
`FGlobalShaderMap::GetShader<FHairStrandsForwardRasterRasterizeCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FHairStrandsForwardRasterRasterizeCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FHairStrandsForwardRasterRasterizeCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FHairStrandsForwardRasterRasterizeCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5360

bool __thiscall
`FGlobalShaderMap::GetShader<FCreateSparseVoxelBLAS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCreateSparseVoxelBLAS::GetStaticType();
    FCreateSparseVoxelBLAS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCreateSparseVoxelBLAS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCreateSparseVoxelBLAS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c53c0

bool __thiscall
`FGlobalShaderMap::GetShader<FDilateExistenceMaskCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FDilateExistenceMaskCS::GetStaticType();
    FDilateExistenceMaskCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FDilateExistenceMaskCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FDilateExistenceMaskCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5420

bool __thiscall
`FGlobalShaderMap::GetShader<FHeterogeneousVolumesCompositeCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FHeterogeneousVolumesCompositeCS::GetStaticType();
    FHeterogeneousVolumesCompositeCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FHeterogeneousVolumesCompositeCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FHeterogeneousVolumesCompositeCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5480

bool __thiscall
`FGlobalShaderMap::GetShader<FHeterogeneousVolumesSparseVoxelMS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FHeterogeneousVolumesSparseVoxelMS::GetStaticType();
    FHeterogeneousVolumesSparseVoxelMS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FHeterogeneousVolumesSparseVoxelMS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FHeterogeneousVolumesSparseVoxelMS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c54e0

bool __thiscall
`FGlobalShaderMap::GetShader<FHeterogeneousVolumesSparseVoxelsHitGroup>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FHeterogeneousVolumesSparseVoxelsHitGroup::GetStaticType();
    FHeterogeneousVolumesSparseVoxelsHitGroup::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FHeterogeneousVolumesSparseVoxelsHitGroup,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FHeterogeneousVolumesSparseVoxelsHitGroup>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c57c0

bool __thiscall
`FGlobalShaderMap::GetShader<FAllocateSparseVoxels>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FAllocateSparseVoxels::GetStaticType();
    FAllocateSparseVoxels::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FAllocateSparseVoxels,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FAllocateSparseVoxels>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5820

bool __thiscall
`FGlobalShaderMap::GetShader<FAllocateSparseVoxelsToRefine>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FAllocateSparseVoxelsToRefine::GetStaticType();
    FAllocateSparseVoxelsToRefine::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FAllocateSparseVoxelsToRefine,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FAllocateSparseVoxelsToRefine>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5880

bool __thiscall
`FGlobalShaderMap::GetShader<FClearAllocator>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FClearAllocator::GetStaticType();
    FClearAllocator::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FClearAllocator,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FClearAllocator>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c58e0

bool __thiscall
`FGlobalShaderMap::GetShader<FCopyMaxIntoMajorantVoxelGridCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCopyMaxIntoMajorantVoxelGridCS::GetStaticType();
    FCopyMaxIntoMajorantVoxelGridCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCopyMaxIntoMajorantVoxelGridCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCopyMaxIntoMajorantVoxelGridCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5940

bool __thiscall
`FGlobalShaderMap::GetShader<FCopyTexture3D>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCopyTexture3D::GetStaticType();
    FCopyTexture3D::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCopyTexture3D,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCopyTexture3D>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c59a0

bool __thiscall
`FGlobalShaderMap::GetShader<FDownsampleMajorantVoxelGridCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FDownsampleMajorantVoxelGridCS::GetStaticType();
    FDownsampleMajorantVoxelGridCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FDownsampleMajorantVoxelGridCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FDownsampleMajorantVoxelGridCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5a00

bool __thiscall
`FGlobalShaderMap::GetShader<FGenerateMin3D>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FGenerateMin3D::GetStaticType();
    FGenerateMin3D::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FGenerateMin3D,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FGenerateMin3D>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5a60

bool __thiscall
`FGlobalShaderMap::GetShader<FGenerateMips3D>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FGenerateMips3D::GetStaticType();
    FGenerateMips3D::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FGenerateMips3D,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FGenerateMips3D>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5ac0

bool __thiscall
`FGlobalShaderMap::GetShader<FRefineSparseVoxels>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRefineSparseVoxels::GetStaticType();
    FRefineSparseVoxels::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRefineSparseVoxels,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRefineSparseVoxels>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5b20

bool __thiscall
`FGlobalShaderMap::GetShader<FRenderSingleScatteringWithPreshadingCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FRenderSingleScatteringWithPreshadingCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRenderSingleScatteringWithPreshadingCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRenderSingleScatteringWithPreshadingCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5b70

bool __thiscall
`FGlobalShaderMap::GetShader<FSetRasterizeBottomLevelGridIndirectArgs>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FSetRasterizeBottomLevelGridIndirectArgs::GetStaticType();
    FSetRasterizeBottomLevelGridIndirectArgs::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FSetRasterizeBottomLevelGridIndirectArgs,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FSetRasterizeBottomLevelGridIndirectArgs>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5bd0

bool __thiscall
`FGlobalShaderMap::GetShader<FTopLevelCreateBitmaskCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FTopLevelCreateBitmaskCS::GetStaticType();
    FTopLevelCreateBitmaskCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FTopLevelCreateBitmaskCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FTopLevelCreateBitmaskCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5c30

bool __thiscall
`FGlobalShaderMap::GetShader<FVisualizeCascadesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVisualizeCascadesCS::GetStaticType();
    FVisualizeCascadesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVisualizeCascadesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVisualizeCascadesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5f50

bool __thiscall
`FGlobalShaderMap::GetShader<FCalculateCompactBlockInstanceOffsetsCs>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCalculateCompactBlockInstanceOffsetsCs::GetStaticType();
    FCalculateCompactBlockInstanceOffsetsCs::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCalculateCompactBlockInstanceOffsetsCs,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCalculateCompactBlockInstanceOffsetsCs>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5fb0

bool __thiscall
`FGlobalShaderMap::GetShader<FClearIndirectArgInstanceCountCs>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FClearIndirectArgInstanceCountCs::GetStaticType();
    FClearIndirectArgInstanceCountCs::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FClearIndirectArgInstanceCountCs,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FClearIndirectArgInstanceCountCs>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6010

bool __thiscall
`FGlobalShaderMap::GetShader<FCompactVisibleInstancesCs>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCompactVisibleInstancesCs::GetStaticType();
    FCompactVisibleInstancesCs::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCompactVisibleInstancesCs,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCompactVisibleInstancesCs>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6070

bool __thiscall
`FGlobalShaderMap::GetShader<FLightGridFeedbackStatusCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLightGridFeedbackStatusCS::GetStaticType();
    FLightGridFeedbackStatusCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLightGridFeedbackStatusCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLightGridFeedbackStatusCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6840

bool __thiscall
`FGlobalShaderMap::GetShader<FAllocateProbeTracesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FAllocateProbeTracesCS::GetStaticType();
    FAllocateProbeTracesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FAllocateProbeTracesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FAllocateProbeTracesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c68a0

bool __thiscall
`FGlobalShaderMap::GetShader<FCalculateProbeIrradianceCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCalculateProbeIrradianceCS::GetStaticType();
    FCalculateProbeIrradianceCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCalculateProbeIrradianceCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCalculateProbeIrradianceCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6900

bool __thiscall
`FGlobalShaderMap::GetShader<FClearProbeFreeList>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FClearProbeFreeList::GetStaticType();
    FClearProbeFreeList::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FClearProbeFreeList,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FClearProbeFreeList>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6960

bool __thiscall
`FGlobalShaderMap::GetShader<FClearRadianceCacheUpdateResourcesCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FClearRadianceCacheUpdateResourcesCS::GetStaticType();
    FClearRadianceCacheUpdateResourcesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FClearRadianceCacheUpdateResourcesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FClearRadianceCacheUpdateResourcesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c69c0

bool __thiscall
`FGlobalShaderMap::GetShader<FCombineObjectIndexBuffersCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCombineObjectIndexBuffersCS::GetStaticType();
    FCombineObjectIndexBuffersCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCombineObjectIndexBuffersCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCombineObjectIndexBuffersCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6a20

bool __thiscall
`FGlobalShaderMap::GetShader<FComputeCulledObjectsStartOffsetCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FComputeCulledObjectsStartOffsetCS::GetStaticType();
    FComputeCulledObjectsStartOffsetCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FComputeCulledObjectsStartOffsetCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FComputeCulledObjectsStartOffsetCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6a80

bool __thiscall
`FGlobalShaderMap::GetShader<FComputeProbeWorldOffsetsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FComputeProbeWorldOffsetsCS::GetStaticType();
    FComputeProbeWorldOffsetsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FComputeProbeWorldOffsetsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FComputeProbeWorldOffsetsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6ae0

bool __thiscall
`FGlobalShaderMap::GetShader<FCullHeightfieldObjectsForViewCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCullHeightfieldObjectsForViewCS::GetStaticType();
    FCullHeightfieldObjectsForViewCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCullHeightfieldObjectsForViewCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCullHeightfieldObjectsForViewCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6b40

bool __thiscall
`FGlobalShaderMap::GetShader<FCullMeshSDFObjectsForViewCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCullMeshSDFObjectsForViewCS::GetStaticType();
    FCullMeshSDFObjectsForViewCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCullMeshSDFObjectsForViewCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCullMeshSDFObjectsForViewCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6ba0

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenHardwareRayTracingMaterialMS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenHardwareRayTracingMaterialMS::GetStaticType();
    FLumenHardwareRayTracingMaterialMS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenHardwareRayTracingMaterialMS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenHardwareRayTracingMaterialMS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6c00

bool __thiscall
`FGlobalShaderMap::GetShader<FPrepareProbeOcclusionCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FPrepareProbeOcclusionCS::GetStaticType();
    FPrepareProbeOcclusionCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FPrepareProbeOcclusionCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FPrepareProbeOcclusionCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6c60

bool __thiscall
`FGlobalShaderMap::GetShader<FRadianceCacheUpdateStatsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRadianceCacheUpdateStatsCS::GetStaticType();
    FRadianceCacheUpdateStatsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRadianceCacheUpdateStatsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRadianceCacheUpdateStatsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6cc0

bool __thiscall
`FGlobalShaderMap::GetShader<FSelectMaxPriorityBucketCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FSelectMaxPriorityBucketCS::GetStaticType();
    FSelectMaxPriorityBucketCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FSelectMaxPriorityBucketCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FSelectMaxPriorityBucketCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6d20

bool __thiscall
`FGlobalShaderMap::GetShader<FSortProbeTraceTilesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FSortProbeTraceTilesCS::GetStaticType();
    FSortProbeTraceTilesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FSortProbeTraceTilesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FSortProbeTraceTilesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6f80

bool __thiscall
`FGlobalShaderMap::GetShader<FBuildRadiosityTilesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FBuildRadiosityTilesCS::GetStaticType();
    FBuildRadiosityTilesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FBuildRadiosityTilesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FBuildRadiosityTilesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c6fe0

bool __thiscall
`FGlobalShaderMap::GetShader<FBuildVisualizeProbesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FBuildVisualizeProbesCS::GetStaticType();
    FBuildVisualizeProbesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FBuildVisualizeProbesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FBuildVisualizeProbesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7040

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenRadianceCacheHardwareRayTracingCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FLumenRadianceCacheHardwareRayTracingCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenRadianceCacheHardwareRayTracingCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenRadianceCacheHardwareRayTracingCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7090

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenRadianceCacheHardwareRayTracingRGS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FLumenRadianceCacheHardwareRayTracingRGS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenRadianceCacheHardwareRayTracingRGS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenRadianceCacheHardwareRayTracingRGS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c70e0

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenRadiosityConvertToSH>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenRadiosityConvertToSH::GetStaticType();
    FLumenRadiosityConvertToSH::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenRadiosityConvertToSH,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenRadiosityConvertToSH>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7140

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenRadiosityHardwareRayTracingCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FLumenRadiosityHardwareRayTracingCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenRadiosityHardwareRayTracingCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenRadiosityHardwareRayTracingCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7190

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenRadiosityHardwareRayTracingRGS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FLumenRadiosityHardwareRayTracingRGS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenRadiosityHardwareRayTracingRGS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenRadiosityHardwareRayTracingRGS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c71e0

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenRadiosityIndirectArgsCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenRadiosityIndirectArgsCS::GetStaticType();
    FLumenRadiosityIndirectArgsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenRadiosityIndirectArgsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenRadiosityIndirectArgsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7240

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenReflectionHardwareRayTracingCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FLumenReflectionHardwareRayTracingCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenReflectionHardwareRayTracingCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenReflectionHardwareRayTracingCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7290

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenReflectionHardwareRayTracingIndirectArgsCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenReflectionHardwareRayTracingIndirectArgsCS::GetStaticType();
    FLumenReflectionHardwareRayTracingIndirectArgsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenReflectionHardwareRayTracingIndirectArgsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenReflectionHardwareRayTracingIndirectArgsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c72f0

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenReflectionHardwareRayTracingRGS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FLumenReflectionHardwareRayTracingRGS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenReflectionHardwareRayTracingRGS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenReflectionHardwareRayTracingRGS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7340

bool __thiscall
`FGlobalShaderMap::GetShader<FReflectionTraceVoxelsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FReflectionTraceVoxelsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FReflectionTraceVoxelsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FReflectionTraceVoxelsCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7390

bool __thiscall
`FGlobalShaderMap::GetShader<FVisualizeReflectionTracesCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVisualizeReflectionTracesCS::GetStaticType();
    FVisualizeReflectionTracesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVisualizeReflectionTracesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVisualizeReflectionTracesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7430

bool __thiscall
`FGlobalShaderMap::GetShader<FCalculateCardTileDepthRangesCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCalculateCardTileDepthRangesCS::GetStaticType();
    FCalculateCardTileDepthRangesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCalculateCardTileDepthRangesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCalculateCardTileDepthRangesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7490

bool __thiscall
`FGlobalShaderMap::GetShader<FClearCardUpdateContextCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FClearCardUpdateContextCS::GetStaticType();
    FClearCardUpdateContextCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FClearCardUpdateContextCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FClearCardUpdateContextCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c74f0

bool __thiscall
`FGlobalShaderMap::GetShader<FClearLumenCardCapturePS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FClearLumenCardCapturePS::GetStaticType();
    FClearLumenCardCapturePS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FClearLumenCardCapturePS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FClearLumenCardCapturePS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7550

bool __thiscall
`FGlobalShaderMap::GetShader<FCompactLightTilesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCompactLightTilesCS::GetStaticType();
    FCompactLightTilesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCompactLightTilesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCompactLightTilesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c75b0

bool __thiscall
`FGlobalShaderMap::GetShader<FInitShadowTraceIndirectArgsCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FInitShadowTraceIndirectArgsCS::GetStaticType();
    FInitShadowTraceIndirectArgsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FInitShadowTraceIndirectArgsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FInitShadowTraceIndirectArgsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7610

bool __thiscall
`FGlobalShaderMap::GetShader<FInitializeCardTileIndirectArgsCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FInitializeCardTileIndirectArgsCS::GetStaticType();
    FInitializeCardTileIndirectArgsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FInitializeCardTileIndirectArgsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FInitializeCardTileIndirectArgsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7670

bool __thiscall
`FGlobalShaderMap::GetShader<FInitializeLightTileIndirectArgsCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FInitializeLightTileIndirectArgsCS::GetStaticType();
    FInitializeLightTileIndirectArgsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FInitializeLightTileIndirectArgsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FInitializeLightTileIndirectArgsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c76d0

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenCardBatchDirectLightingCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FLumenCardBatchDirectLightingCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenCardBatchDirectLightingCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenCardBatchDirectLightingCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7720

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenCardCombineLightingCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenCardCombineLightingCS::GetStaticType();
    FLumenCardCombineLightingCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenCardCombineLightingCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenCardCombineLightingCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7780

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenCardResamplePS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenCardResamplePS::GetStaticType();
    FLumenCardResamplePS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenCardResamplePS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenCardResamplePS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c77e0

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenDirectLightingHardwareRayTracingCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FLumenDirectLightingHardwareRayTracingCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenDirectLightingHardwareRayTracingCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenDirectLightingHardwareRayTracingCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7830

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenDirectLightingHardwareRayTracingIndirectArgsCS>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenDirectLightingHardwareRayTracingIndirectArgsCS::GetStaticType();
    FLumenDirectLightingHardwareRayTracingIndirectArgsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenDirectLightingHardwareRayTracingIndirectArgsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenDirectLightingHardwareRayTracingIndirectArgsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7890

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenDirectLightingHardwareRayTracingRGS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FLumenDirectLightingHardwareRayTracingRGS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenDirectLightingHardwareRayTracingRGS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenDirectLightingHardwareRayTracingRGS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c78e0

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenSceneGenerateLightSamplesCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FLumenSceneGenerateLightSamplesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenSceneGenerateLightSamplesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenSceneGenerateLightSamplesCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7930

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenSceneLightingStatsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenSceneLightingStatsCS::GetStaticType();
    FLumenSceneLightingStatsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenSceneLightingStatsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenSceneLightingStatsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7990

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenSceneStatsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenSceneStatsCS::GetStaticType();
    FLumenSceneStatsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenSceneStatsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenSceneStatsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c79f0

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenSceneUpdateCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenSceneUpdateCS::GetStaticType();
    FLumenSceneUpdateCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenSceneUpdateCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenSceneUpdateCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7a50

bool __thiscall
`FGlobalShaderMap::GetShader<FRasterizeToCardsVS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRasterizeToCardsVS::GetStaticType();
    FRasterizeToCardsVS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRasterizeToCardsVS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRasterizeToCardsVS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7ab0

bool __thiscall
`FGlobalShaderMap::GetShader<FResampleLightingHistoryToCardCaptureAtlasCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FResampleLightingHistoryToCardCaptureAtlasCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FResampleLightingHistoryToCardCaptureAtlasCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FResampleLightingHistoryToCardCaptureAtlasCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7b00

bool __thiscall
`FGlobalShaderMap::GetShader<FSelectMaxUpdateBucketCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FSelectMaxUpdateBucketCS::GetStaticType();
    FSelectMaxUpdateBucketCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FSelectMaxUpdateBucketCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FSelectMaxUpdateBucketCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7b60

bool __thiscall
`FGlobalShaderMap::GetShader<FSetCardPageIndexIndirectArgsCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FSetCardPageIndexIndirectArgsCS::GetStaticType();
    FSetCardPageIndexIndirectArgsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FSetCardPageIndexIndirectArgsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FSetCardPageIndexIndirectArgsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7bc0

bool __thiscall
`FGlobalShaderMap::GetShader<FSpliceCardPagesIntoTilesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FSpliceCardPagesIntoTilesCS::GetStaticType();
    FSpliceCardPagesIntoTilesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FSpliceCardPagesIntoTilesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FSpliceCardPagesIntoTilesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c7c20

bool __thiscall
`FGlobalShaderMap::GetShader<FVisualizePrimitiveGroupsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVisualizePrimitiveGroupsCS::GetStaticType();
    FVisualizePrimitiveGroupsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVisualizePrimitiveGroupsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVisualizePrimitiveGroupsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8380

bool __thiscall
`FGlobalShaderMap::GetShader<FGenerateDilationTileDataCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FGenerateDilationTileDataCS::GetStaticType();
    FGenerateDilationTileDataCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FGenerateDilationTileDataCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FGenerateDilationTileDataCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c83e0

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenScreenProbeGatherHardwareRayTracingCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FLumenScreenProbeGatherHardwareRayTracingCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenScreenProbeGatherHardwareRayTracingCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenScreenProbeGatherHardwareRayTracingCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8430

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenScreenProbeGatherHardwareRayTracingIndirectArgsCS>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenScreenProbeGatherHardwareRayTracingIndirectArgsCS::GetStaticType();
    FLumenScreenProbeGatherHardwareRayTracingIndirectArgsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenScreenProbeGatherHardwareRayTracingIndirectArgsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenScreenProbeGatherHardwareRayTracingIndirectArgsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8490

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenScreenProbeGatherHardwareRayTracingRGS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FLumenScreenProbeGatherHardwareRayTracingRGS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenScreenProbeGatherHardwareRayTracingRGS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenScreenProbeGatherHardwareRayTracingRGS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c84e0

bool __thiscall
`FGlobalShaderMap::GetShader<FMarkRadianceProbesUsedByHairStrandsCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FMarkRadianceProbesUsedByHairStrandsCS::GetStaticType();
    FMarkRadianceProbesUsedByHairStrandsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FMarkRadianceProbesUsedByHairStrandsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FMarkRadianceProbesUsedByHairStrandsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8540

bool __thiscall
`FGlobalShaderMap::GetShader<FScreenProbeConvertToIrradianceCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FScreenProbeConvertToIrradianceCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FScreenProbeConvertToIrradianceCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FScreenProbeConvertToIrradianceCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8590

bool __thiscall
`FGlobalShaderMap::GetShader<FScreenProbeGatherDebugCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FScreenProbeGatherDebugCS::GetStaticType();
    FScreenProbeGatherDebugCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FScreenProbeGatherDebugCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FScreenProbeGatherDebugCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c85f0

bool __thiscall
`FGlobalShaderMap::GetShader<FScreenProbeGenerateMipLevelCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FScreenProbeGenerateMipLevelCS::GetStaticType();
    FScreenProbeGenerateMipLevelCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FScreenProbeGenerateMipLevelCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FScreenProbeGenerateMipLevelCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8650

bool __thiscall
`FGlobalShaderMap::GetShader<FScreenProbeIntegrateCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FScreenProbeIntegrateCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FScreenProbeIntegrateCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FScreenProbeIntegrateCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c86a0

bool __thiscall
`FGlobalShaderMap::GetShader<FScreenProbeTraceMeshSDFsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FScreenProbeTraceMeshSDFsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FScreenProbeTraceMeshSDFsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FScreenProbeTraceMeshSDFsCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c86f0

bool __thiscall
`FGlobalShaderMap::GetShader<FScreenProbeTraceScreenTexturesCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FScreenProbeTraceScreenTexturesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FScreenProbeTraceScreenTexturesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FScreenProbeTraceScreenTexturesCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8740

bool __thiscall
`FGlobalShaderMap::GetShader<FScreenProbeTraceVoxelsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FScreenProbeTraceVoxelsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FScreenProbeTraceVoxelsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FScreenProbeTraceVoxelsCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8790

bool __thiscall
`FGlobalShaderMap::GetShader<FScreenSpaceShortRangeAOCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FScreenSpaceShortRangeAOCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FScreenSpaceShortRangeAOCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FScreenSpaceShortRangeAOCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c89c0

bool __thiscall
`FGlobalShaderMap::GetShader<FInitTileIndirectArgsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FInitTileIndirectArgsCS::GetStaticType();
    FInitTileIndirectArgsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FInitTileIndirectArgsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FInitTileIndirectArgsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8a20

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenVisualizeBucketRaysByMaterialIdCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenVisualizeBucketRaysByMaterialIdCS::GetStaticType();
    FLumenVisualizeBucketRaysByMaterialIdCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenVisualizeBucketRaysByMaterialIdCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenVisualizeBucketRaysByMaterialIdCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8a80

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenVisualizeBucketRaysByMaterialIdIndirectArgsCS>'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenVisualizeBucketRaysByMaterialIdIndirectArgsCS::GetStaticType();
    FLumenVisualizeBucketRaysByMaterialIdIndirectArgsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenVisualizeBucketRaysByMaterialIdIndirectArgsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenVisualizeBucketRaysByMaterialIdIndirectArgsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8ae0

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenVisualizeCompactRaysIndirectArgsCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenVisualizeCompactRaysIndirectArgsCS::GetStaticType();
    FLumenVisualizeCompactRaysIndirectArgsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenVisualizeCompactRaysIndirectArgsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenVisualizeCompactRaysIndirectArgsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8b40

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenVisualizeCreateRaysCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenVisualizeCreateRaysCS::GetStaticType();
    FLumenVisualizeCreateRaysCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenVisualizeCreateRaysCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenVisualizeCreateRaysCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8ba0

bool __thiscall
`FGlobalShaderMap::GetShader<FLumenVisualizeCreateTilesCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLumenVisualizeCreateTilesCS::GetStaticType();
    FLumenVisualizeCreateTilesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLumenVisualizeCreateTilesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLumenVisualizeCreateTilesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8c00

bool __thiscall
`FGlobalShaderMap::GetShader<FMarkRadianceProbesUsedByTranslucencyVolumeCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FMarkRadianceProbesUsedByTranslucencyVolumeCS::GetStaticType();
    FMarkRadianceProbesUsedByTranslucencyVolumeCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FMarkRadianceProbesUsedByTranslucencyVolumeCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FMarkRadianceProbesUsedByTranslucencyVolumeCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8c60

bool __thiscall
`FGlobalShaderMap::GetShader<FMegaLightsDebugCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FMegaLightsDebugCS::GetStaticType();
    FMegaLightsDebugCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FMegaLightsDebugCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FMegaLightsDebugCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8cc0

bool __thiscall
`FGlobalShaderMap::GetShader<FVisualizeBitFieldFloatTexturePS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVisualizeBitFieldFloatTexturePS::GetStaticType();
    FVisualizeBitFieldFloatTexturePS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVisualizeBitFieldFloatTexturePS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVisualizeBitFieldFloatTexturePS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8d20

bool __thiscall
`FGlobalShaderMap::GetShader<FVisualizeTracesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVisualizeTracesCS::GetStaticType();
    FVisualizeTracesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVisualizeTracesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVisualizeTracesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8d80

bool __thiscall
`FGlobalShaderMap::GetShader<FVisualizeTracesPS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVisualizeTracesPS::GetStaticType();
    FVisualizeTracesPS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVisualizeTracesPS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVisualizeTracesPS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c8de0

bool __thiscall
`FGlobalShaderMap::GetShader<FVisualizeTracesVS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVisualizeTracesVS::GetStaticType();
    FVisualizeTracesVS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVisualizeTracesVS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVisualizeTracesVS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c93c0

bool __thiscall
`FGlobalShaderMap::GetShader<FClearLightSamplesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FClearLightSamplesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FClearLightSamplesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FClearLightSamplesCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c9410

bool __thiscall
`FGlobalShaderMap::GetShader<FClearResolvedLightingCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FClearResolvedLightingCS::GetStaticType();
    FClearResolvedLightingCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FClearResolvedLightingCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FClearResolvedLightingCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c9470

bool __thiscall
`FGlobalShaderMap::GetShader<FFilterVisibleLightHashCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FFilterVisibleLightHashCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FFilterVisibleLightHashCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FFilterVisibleLightHashCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c94c0

bool __thiscall
`FGlobalShaderMap::GetShader<FGenerateLightSamplesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FGenerateLightSamplesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FGenerateLightSamplesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FGenerateLightSamplesCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c9510

bool __thiscall
`FGlobalShaderMap::GetShader<FHardwareRayTraceLightSamplesCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FHardwareRayTraceLightSamplesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FHardwareRayTraceLightSamplesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FHardwareRayTraceLightSamplesCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c9560

bool __thiscall
`FGlobalShaderMap::GetShader<FHardwareRayTraceLightSamplesRGS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FHardwareRayTraceLightSamplesRGS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FHardwareRayTraceLightSamplesRGS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FHardwareRayTraceLightSamplesRGS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c95b0

bool __thiscall
`FGlobalShaderMap::GetShader<FInitCompactedTraceTexelIndirectArgsCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FInitCompactedTraceTexelIndirectArgsCS::GetStaticType();
    FInitCompactedTraceTexelIndirectArgsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FInitCompactedTraceTexelIndirectArgsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FInitCompactedTraceTexelIndirectArgsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c9610

bool __thiscall
`FGlobalShaderMap::GetShader<FPrintTraceStatsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FPrintTraceStatsCS::GetStaticType();
    FPrintTraceStatsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FPrintTraceStatsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FPrintTraceStatsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c9670

bool __thiscall
`FGlobalShaderMap::GetShader<FScreenSpaceRayTraceLightSamplesCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FScreenSpaceRayTraceLightSamplesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FScreenSpaceRayTraceLightSamplesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FScreenSpaceRayTraceLightSamplesCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c96c0

bool __thiscall
`FGlobalShaderMap::GetShader<FShadeLightSamplesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FShadeLightSamplesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FShadeLightSamplesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FShadeLightSamplesCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c9710

bool __thiscall
`FGlobalShaderMap::GetShader<FVirtualShadowMapTraceLightSamplesCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FVirtualShadowMapTraceLightSamplesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVirtualShadowMapTraceLightSamplesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVirtualShadowMapTraceLightSamplesCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c9760

bool __thiscall
`FGlobalShaderMap::GetShader<FVisibleLightHashCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FVisibleLightHashCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVisibleLightHashCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVisibleLightHashCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c97b0

bool __thiscall
`FGlobalShaderMap::GetShader<FVolumeFilterVisibleLightHashCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FVolumeFilterVisibleLightHashCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVolumeFilterVisibleLightHashCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVolumeFilterVisibleLightHashCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c9800

bool __thiscall
`FGlobalShaderMap::GetShader<FVolumeGenerateLightSamplesCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FVolumeGenerateLightSamplesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVolumeGenerateLightSamplesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVolumeGenerateLightSamplesCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c9850

bool __thiscall
`FGlobalShaderMap::GetShader<FVolumeHardwareRayTraceLightSamplesCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FVolumeHardwareRayTraceLightSamplesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVolumeHardwareRayTraceLightSamplesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVolumeHardwareRayTraceLightSamplesCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c98a0

bool __thiscall
`FGlobalShaderMap::GetShader<FVolumeHardwareRayTraceLightSamplesRGS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FVolumeHardwareRayTraceLightSamplesRGS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVolumeHardwareRayTraceLightSamplesRGS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVolumeHardwareRayTraceLightSamplesRGS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c98f0

bool __thiscall
`FGlobalShaderMap::GetShader<FVolumeSoftwareRayTraceLightSamplesCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FVolumeSoftwareRayTraceLightSamplesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVolumeSoftwareRayTraceLightSamplesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVolumeSoftwareRayTraceLightSamplesCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c9940

bool __thiscall
`FGlobalShaderMap::GetShader<FVolumeVisibleLightHashCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FVolumeVisibleLightHashCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVolumeVisibleLightHashCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVolumeVisibleLightHashCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c9ed0

bool __thiscall
`FGlobalShaderMap::GetShader<FCalculateShadingStatsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCalculateShadingStatsCS::GetStaticType();
    FCalculateShadingStatsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCalculateShadingStatsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCalculateShadingStatsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c9f30

bool __thiscall
`FGlobalShaderMap::GetShader<FEmitSceneStencilPS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FEmitSceneStencilPS::GetStaticType();
    FEmitSceneStencilPS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FEmitSceneStencilPS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FEmitSceneStencilPS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c9f90

bool __thiscall
`FGlobalShaderMap::GetShader<FInitClusterCullArgs_CS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FInitClusterCullArgs_CS::GetStaticType();
    FInitClusterCullArgs_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FInitClusterCullArgs_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FInitClusterCullArgs_CS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c9ff0

bool __thiscall
`FGlobalShaderMap::GetShader<FInitNodeCullArgs_CS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FInitNodeCullArgs_CS::GetStaticType();
    FInitNodeCullArgs_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FInitNodeCullArgs_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FInitNodeCullArgs_CS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca050

bool __thiscall
`FGlobalShaderMap::GetShader<FInitPatchSplitArgs_CS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FInitPatchSplitArgs_CS::GetStaticType();
    FInitPatchSplitArgs_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FInitPatchSplitArgs_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FInitPatchSplitArgs_CS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca0b0

bool __thiscall
`FGlobalShaderMap::GetShader<FInitVisiblePatchesArgsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FInitVisiblePatchesArgsCS::GetStaticType();
    FInitVisiblePatchesArgsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FInitVisiblePatchesArgsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FInitVisiblePatchesArgsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca110

bool __thiscall
`FGlobalShaderMap::GetShader<FLocalLightBufferCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLocalLightBufferCS::GetStaticType();
    FLocalLightBufferCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLocalLightBufferCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLocalLightBufferCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca170

bool __thiscall
`FGlobalShaderMap::GetShader<FLocalLightBufferVS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLocalLightBufferVS::GetStaticType();
    FLocalLightBufferVS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLocalLightBufferVS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLocalLightBufferVS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca1d0

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FNaniteFeedbackStatusCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FNaniteFeedbackStatusCS::GetStaticType();
    Nanite::FNaniteFeedbackStatusCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FNaniteFeedbackStatusCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FNaniteFeedbackStatusCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca230

bool __thiscall
`FGlobalShaderMap::GetShader<FNaniteMarkStencilPS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FNaniteMarkStencilPS::GetStaticType();
    FNaniteMarkStencilPS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FNaniteMarkStencilPS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FNaniteMarkStencilPS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca290

bool __thiscall
`FGlobalShaderMap::GetShader<FNodeAndClusterCull_CS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FNodeAndClusterCull_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FNodeAndClusterCull_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FNodeAndClusterCull_CS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca2e0

bool __thiscall
`FGlobalShaderMap::GetShader<FRasterBinDepthBlock_CS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRasterBinDepthBlock_CS::GetStaticType();
    FRasterBinDepthBlock_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRasterBinDepthBlock_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRasterBinDepthBlock_CS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca340

bool __thiscall
`FGlobalShaderMap::GetShader<FRasterBinFinalize_CS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRasterBinFinalize_CS::GetStaticType();
    FRasterBinFinalize_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRasterBinFinalize_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRasterBinFinalize_CS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca3a0

bool __thiscall
`FGlobalShaderMap::GetShader<FRasterBinInit_CS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRasterBinInit_CS::GetStaticType();
    FRasterBinInit_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRasterBinInit_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRasterBinInit_CS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca400

bool __thiscall
`FGlobalShaderMap::GetShader<FRasterBinReserve_CS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRasterBinReserve_CS::GetStaticType();
    FRasterBinReserve_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRasterBinReserve_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRasterBinReserve_CS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca620

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FNaniteStreamOutCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FNaniteStreamOutCS::GetStaticType();
    Nanite::FNaniteStreamOutCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FNaniteStreamOutCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FNaniteStreamOutCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca680

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FAllocBlocksCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FAllocBlocksCS::GetStaticType();
    Nanite::FAllocBlocksCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FAllocBlocksCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FAllocBlocksCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca6e0

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FAllocateRangesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FAllocateRangesCS::GetStaticType();
    Nanite::FAllocateRangesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FAllocateRangesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FAllocateRangesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca740

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FBinBricksInTilesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FBinBricksInTilesCS::GetStaticType();
    Nanite::FBinBricksInTilesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FBinBricksInTilesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FBinBricksInTilesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca7a0

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FBuildTileArraysCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FBuildTileArraysCS::GetStaticType();
    Nanite::FBuildTileArraysCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FBuildTileArraysCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FBuildTileArraysCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca800

bool __thiscall
`FGlobalShaderMap::GetShader<FDepthDecodeCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FDepthDecodeCS::GetStaticType();
    FDepthDecodeCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FDepthDecodeCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FDepthDecodeCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca860

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FDrawBricksPS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FDrawBricksPS::GetStaticType();
    Nanite::FDrawBricksPS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FDrawBricksPS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FDrawBricksPS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca8c0

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FDrawBricksVS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FDrawBricksVS::GetStaticType();
    Nanite::FDrawBricksVS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FDrawBricksVS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FDrawBricksVS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca920

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FFillArgsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FFillArgsCS::GetStaticType();
    Nanite::FFillArgsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FFillArgsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FFillArgsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca980

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FFillBlocksCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FFillBlocksCS::GetStaticType();
    Nanite::FFillBlocksCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FFillBlocksCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FFillBlocksCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ca9e0

bool __thiscall
`FGlobalShaderMap::GetShader<FNanitePickingCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FNanitePickingCS::GetStaticType();
    FNanitePickingCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FNanitePickingCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FNanitePickingCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504caa40

bool __thiscall
`FGlobalShaderMap::GetShader<FNaniteVisualizeCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FNaniteVisualizeCS::GetStaticType();
    FNaniteVisualizeCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FNaniteVisualizeCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FNaniteVisualizeCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504caaa0

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FRayCastTilesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FRayCastTilesCS::GetStaticType();
    Nanite::FRayCastTilesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FRayCastTilesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FRayCastTilesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cab00

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FScatterResolveCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FScatterResolveCS::GetStaticType();
    Nanite::FScatterResolveCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FScatterResolveCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FScatterResolveCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cab60

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FScatterVoxelsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FScatterVoxelsCS::GetStaticType();
    Nanite::FScatterVoxelsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FScatterVoxelsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FScatterVoxelsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cabc0

bool __thiscall
`FGlobalShaderMap::GetShader<FShadingBinValidateCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FShadingBinValidateCS::GetStaticType();
    FShadingBinValidateCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FShadingBinValidateCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FShadingBinValidateCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cac20

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FVisibleBricksHashCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FVisibleBricksHashCS::GetStaticType();
    Nanite::FVisibleBricksHashCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FVisibleBricksHashCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FVisibleBricksHashCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cac80

bool __thiscall
`FGlobalShaderMap::GetShader<FVisualizeClearTilesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVisualizeClearTilesCS::GetStaticType();
    FVisualizeClearTilesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVisualizeClearTilesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVisualizeClearTilesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cb3a0

bool __thiscall
`FGlobalShaderMap::GetShader<TPathTracingDefaultHitGroup<1,1>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TPathTracingDefaultHitGroup<1,1>::GetStaticType();
    TPathTracingDefaultHitGroup<1,1>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TPathTracingDefaultHitGroup<1,1>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TPathTracingDefaultHitGroup<1,1>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cb400

bool __thiscall
`FGlobalShaderMap::GetShader<TPathTracingDefaultHitGroup<1,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TPathTracingDefaultHitGroup<1,0>::GetStaticType();
    TPathTracingDefaultHitGroup<1,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TPathTracingDefaultHitGroup<1,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TPathTracingDefaultHitGroup<1,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cb460

bool __thiscall
`FGlobalShaderMap::GetShader<TPathTracingDefaultHitGroup<0,1>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TPathTracingDefaultHitGroup<0,1>::GetStaticType();
    TPathTracingDefaultHitGroup<0,1>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TPathTracingDefaultHitGroup<0,1>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TPathTracingDefaultHitGroup<0,1>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cb4c0

bool __thiscall
`FGlobalShaderMap::GetShader<TPathTracingDefaultHitGroup<0,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TPathTracingDefaultHitGroup<0,0>::GetStaticType();
    TPathTracingDefaultHitGroup<0,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TPathTracingDefaultHitGroup<0,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TPathTracingDefaultHitGroup<0,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cb520

bool __thiscall
`FGlobalShaderMap::GetShader<TPathTracingDefaultMS<1>_>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TPathTracingDefaultMS<1>::GetStaticType();
    TPathTracingDefaultMS<1>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TPathTracingDefaultMS<1>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TPathTracingDefaultMS<1>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cb580

bool __thiscall
`FGlobalShaderMap::GetShader<TPathTracingDefaultMS<0>_>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TPathTracingDefaultMS<0>::GetStaticType();
    TPathTracingDefaultMS<0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TPathTracingDefaultMS<0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TPathTracingDefaultMS<0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cb5e0

bool __thiscall
`FGlobalShaderMap::GetShader<FPathTracingVolumetricCloudMaterialVisualize>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FPathTracingVolumetricCloudMaterialVisualize::GetStaticType();
    FPathTracingVolumetricCloudMaterialVisualize::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FPathTracingVolumetricCloudMaterialVisualize,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FPathTracingVolumetricCloudMaterialVisualize>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cb990

bool __thiscall
`FGlobalShaderMap::GetShader<`anonymous_namespace'::FApplyLocalExposureCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    _anon_4E9C524B::FApplyLocalExposureCS::GetStaticType();
    _anon_4E9C524B::FApplyLocalExposureCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &``FGlobalShaderMap::GetShader<FApplyLocalExposureCS>'::`2'::<lambda_1>::
                        operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cb9f0

bool __thiscall
`FGlobalShaderMap::GetShader<FCalculateExposureIlluminanceCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCalculateExposureIlluminanceCS::GetStaticType();
    FCalculateExposureIlluminanceCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCalculateExposureIlluminanceCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCalculateExposureIlluminanceCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cba50

bool __thiscall
`FGlobalShaderMap::GetShader<FCopyEyeAdaptationToTextureCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCopyEyeAdaptationToTextureCS::GetStaticType();
    FCopyEyeAdaptationToTextureCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCopyEyeAdaptationToTextureCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCopyEyeAdaptationToTextureCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cbab0

bool __thiscall
`FGlobalShaderMap::GetShader<`anonymous_namespace'::FFusionSetupCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    _anon_4E9C524B::FFusionSetupCS::GetStaticType();
    _anon_4E9C524B::FFusionSetupCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &``FGlobalShaderMap::GetShader<FFusionSetupCS>'::`2'::<lambda_1>::operator()'
                        ::`2'::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cbb10

bool __thiscall
`FGlobalShaderMap::GetShader<`anonymous_namespace'::FLensFlareCopyBloomPS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    _anon_4E9C524B::FLensFlareCopyBloomPS::GetStaticType();
    _anon_4E9C524B::FLensFlareCopyBloomPS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &``FGlobalShaderMap::GetShader<FLensFlareCopyBloomPS>'::`2'::<lambda_1>::
                        operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cbb70

bool __thiscall
`FGlobalShaderMap::GetShader<FSetupExposureIlluminanceCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FSetupExposureIlluminanceCS::GetStaticType();
    FSetupExposureIlluminanceCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FSetupExposureIlluminanceCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FSetupExposureIlluminanceCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cbbd0

bool __thiscall
`FGlobalShaderMap::GetShader<`anonymous_namespace'::FSetupLogLuminanceCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    _anon_4E9C524B::FSetupLogLuminanceCS::GetStaticType();
    _anon_4E9C524B::FSetupLogLuminanceCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &``FGlobalShaderMap::GetShader<FSetupLogLuminanceCS>'::`2'::<lambda_1>::
                        operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cbf70

bool __thiscall
`FGlobalShaderMap::GetShader<FSubsurfaceIndirectDispatchCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FSubsurfaceIndirectDispatchCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FSubsurfaceIndirectDispatchCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FSubsurfaceIndirectDispatchCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cc100

bool __thiscall
`FGlobalShaderMap::GetShader<`anonymous_namespace'::FTSRDetectThinGeometryCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    _anon_9327CABB::FTSRDetectThinGeometryCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &``FGlobalShaderMap::GetShader<FTSRDetectThinGeometryCS>'::`2'::<lambda_1>::
                        operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cc150

bool __thiscall
`FGlobalShaderMap::GetShader<`anonymous_namespace'::FTSRRejectShadingCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    _anon_9327CABB::FTSRRejectShadingCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &``FGlobalShaderMap::GetShader<FTSRRejectShadingCS>'::`2'::<lambda_1>::
                        operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cc1a0

bool __thiscall
`FGlobalShaderMap::GetShader<`anonymous_namespace'::FTSRResolveHistoryCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    _anon_9327CABB::FTSRResolveHistoryCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &``FGlobalShaderMap::GetShader<FTSRResolveHistoryCS>'::`2'::<lambda_1>::
                        operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cc1f0

bool __thiscall
`FGlobalShaderMap::GetShader<`anonymous_namespace'::FTSRTSRWeightRelaxationCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    _anon_9327CABB::FTSRTSRWeightRelaxationCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &``FGlobalShaderMap::GetShader<FTSRTSRWeightRelaxationCS>'::`2'::<lambda_1>::
                        operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cc600

bool __thiscall
`FGlobalShaderMap::GetShader<FBasicIntersectionMainCHS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FBasicIntersectionMainCHS::GetStaticType();
    FBasicIntersectionMainCHS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FBasicIntersectionMainCHS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FBasicIntersectionMainCHS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cc660

bool __thiscall
`FGlobalShaderMap::GetShader<FBasicIntersectionMainRGS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FBasicIntersectionMainRGS::GetStaticType();
    FBasicIntersectionMainRGS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FBasicIntersectionMainRGS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FBasicIntersectionMainRGS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cc6c0

bool __thiscall
`FGlobalShaderMap::GetShader<FBasicOcclusionMainRGS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FBasicOcclusionMainRGS::GetStaticType();
    FBasicOcclusionMainRGS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FBasicOcclusionMainRGS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FBasicOcclusionMainRGS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cc720

bool __thiscall
`FGlobalShaderMap::GetShader<FDefaultHiddenMeshDecalHitGroup>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FDefaultHiddenMeshDecalHitGroup::GetStaticType();
    FDefaultHiddenMeshDecalHitGroup::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FDefaultHiddenMeshDecalHitGroup,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FDefaultHiddenMeshDecalHitGroup>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cc780

bool __thiscall
`FGlobalShaderMap::GetShader<FDefaultOpaqueMeshDecalHitGroup>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FDefaultOpaqueMeshDecalHitGroup::GetStaticType();
    FDefaultOpaqueMeshDecalHitGroup::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FDefaultOpaqueMeshDecalHitGroup,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FDefaultOpaqueMeshDecalHitGroup>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cc7e0

bool __thiscall
`FGlobalShaderMap::GetShader<FDefaultPayloadMS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FDefaultPayloadMS::GetStaticType();
    FDefaultPayloadMS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FDefaultPayloadMS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FDefaultPayloadMS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cc840

bool __thiscall
`FGlobalShaderMap::GetShader<FRayTracingBarycentricsCHS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRayTracingBarycentricsCHS::GetStaticType();
    FRayTracingBarycentricsCHS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRayTracingBarycentricsCHS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRayTracingBarycentricsCHS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cc8a0

bool __thiscall
`FGlobalShaderMap::GetShader<FRayTracingDebugCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRayTracingDebugCS::GetStaticType();
    FRayTracingDebugCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRayTracingDebugCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRayTracingDebugCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cc900

bool __thiscall
`FGlobalShaderMap::GetShader<FRayTracingDebugHitStatsRGS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRayTracingDebugHitStatsRGS::GetStaticType();
    FRayTracingDebugHitStatsRGS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRayTracingDebugHitStatsRGS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRayTracingDebugHitStatsRGS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cc960

bool __thiscall
`FGlobalShaderMap::GetShader<FRayTracingDebugMS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRayTracingDebugMS::GetStaticType();
    FRayTracingDebugMS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRayTracingDebugMS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRayTracingDebugMS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cc9c0

bool __thiscall
`FGlobalShaderMap::GetShader<FRayTracingLightingMS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRayTracingLightingMS::GetStaticType();
    FRayTracingLightingMS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRayTracingLightingMS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRayTracingLightingMS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cca20

bool __thiscall
`FGlobalShaderMap::GetShader<FRayTracingPickingCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRayTracingPickingCS::GetStaticType();
    FRayTracingPickingCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRayTracingPickingCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRayTracingPickingCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cca80

bool __thiscall
`FGlobalShaderMap::GetShader<FRayTracingPickingRGS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRayTracingPickingRGS::GetStaticType();
    FRayTracingPickingRGS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRayTracingPickingRGS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRayTracingPickingRGS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ccae0

bool __thiscall
`FGlobalShaderMap::GetShader<FRayTracingSceneHitStatsDebugRenderCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRayTracingSceneHitStatsDebugRenderCS::GetStaticType();
    FRayTracingSceneHitStatsDebugRenderCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRayTracingSceneHitStatsDebugRenderCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRayTracingSceneHitStatsDebugRenderCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cd620

bool __thiscall
`FGlobalShaderMap::GetShader<FRayTracingProcessFeedbackCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRayTracingProcessFeedbackCS::GetStaticType();
    FRayTracingProcessFeedbackCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRayTracingProcessFeedbackCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRayTracingProcessFeedbackCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cd680

bool __thiscall
`FGlobalShaderMap::GetShader<FRayTracingUpdateGeometryHitCountCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRayTracingUpdateGeometryHitCountCS::GetStaticType();
    FRayTracingUpdateGeometryHitCountCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRayTracingUpdateGeometryHitCountCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRayTracingUpdateGeometryHitCountCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cd6e0

bool __thiscall
`FGlobalShaderMap::GetShader<FDefaultCallableShader>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FDefaultCallableShader::GetStaticType();
    FDefaultCallableShader::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FDefaultCallableShader,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FDefaultCallableShader>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cd740

bool __thiscall
`FGlobalShaderMap::GetShader<FGenerateSkyLightVisibilityRaysCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FGenerateSkyLightVisibilityRaysCS::GetStaticType();
    FGenerateSkyLightVisibilityRaysCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FGenerateSkyLightVisibilityRaysCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FGenerateSkyLightVisibilityRaysCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cd7a0

bool __thiscall
`FGlobalShaderMap::GetShader<FHiddenMaterialHitGroup>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FHiddenMaterialHitGroup::GetStaticType();
    FHiddenMaterialHitGroup::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FHiddenMaterialHitGroup,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FHiddenMaterialHitGroup>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cd800

bool __thiscall
`FGlobalShaderMap::GetShader<FOpaqueShadowHitGroup>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FOpaqueShadowHitGroup::GetStaticType();
    FOpaqueShadowHitGroup::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FOpaqueShadowHitGroup,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FOpaqueShadowHitGroup>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cd860

bool __thiscall
`FGlobalShaderMap::GetShader<FPackedMaterialClosestHitPayloadMS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FPackedMaterialClosestHitPayloadMS::GetStaticType();
    FPackedMaterialClosestHitPayloadMS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FPackedMaterialClosestHitPayloadMS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FPackedMaterialClosestHitPayloadMS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cd8c0

bool __thiscall
`FGlobalShaderMap::GetShader<FTraceRayInlinePrintStatisticsCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FTraceRayInlinePrintStatisticsCS::GetStaticType();
    FTraceRayInlinePrintStatisticsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FTraceRayInlinePrintStatisticsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FTraceRayInlinePrintStatisticsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cde80

bool __thiscall
`FGlobalShaderMap::GetShader<FClearIndirectDispatchArgsCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FClearIndirectDispatchArgsCS::GetStaticType();
    FClearIndirectDispatchArgsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FClearIndirectDispatchArgsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FClearIndirectDispatchArgsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cefa0

bool __thiscall
`FGlobalShaderMap::GetShader<FComputeExplicitChunkBounds_CS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FComputeExplicitChunkBounds_CS::GetStaticType();
    FComputeExplicitChunkBounds_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FComputeExplicitChunkBounds_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FComputeExplicitChunkBounds_CS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cf000

bool __thiscall
`FGlobalShaderMap::GetShader<FSceneCullingDebugRender_CS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FSceneCullingDebugRender_CS::GetStaticType();
    FSceneCullingDebugRender_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FSceneCullingDebugRender_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FSceneCullingDebugRender_CS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cffb0

bool __thiscall
`FGlobalShaderMap::GetShader<TDirectionalPercentageCloserShadowProjectionPS<5,1>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TDirectionalPercentageCloserShadowProjectionPS<5,1>::GetStaticType();
    TDirectionalPercentageCloserShadowProjectionPS<5,1>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TDirectionalPercentageCloserShadowProjectionPS<5,1>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TDirectionalPercentageCloserShadowProjectionPS<5,1>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0010

bool __thiscall
`FGlobalShaderMap::GetShader<TDirectionalPercentageCloserShadowProjectionPS<5,0>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TDirectionalPercentageCloserShadowProjectionPS<5,0>::GetStaticType();
    TDirectionalPercentageCloserShadowProjectionPS<5,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TDirectionalPercentageCloserShadowProjectionPS<5,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TDirectionalPercentageCloserShadowProjectionPS<5,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0070

bool __thiscall
`FGlobalShaderMap::GetShader<TModulatedShadowProjection<1>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TModulatedShadowProjection<1>::GetStaticType();
    TModulatedShadowProjection<1>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TModulatedShadowProjection<1>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TModulatedShadowProjection<1>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d00d0

bool __thiscall
`FGlobalShaderMap::GetShader<TModulatedShadowProjection<2>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TModulatedShadowProjection<2>::GetStaticType();
    TModulatedShadowProjection<2>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TModulatedShadowProjection<2>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TModulatedShadowProjection<2>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0130

bool __thiscall
`FGlobalShaderMap::GetShader<TModulatedShadowProjection<3>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TModulatedShadowProjection<3>::GetStaticType();
    TModulatedShadowProjection<3>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TModulatedShadowProjection<3>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TModulatedShadowProjection<3>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0190

bool __thiscall
`FGlobalShaderMap::GetShader<TModulatedShadowProjection<4>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TModulatedShadowProjection<4>::GetStaticType();
    TModulatedShadowProjection<4>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TModulatedShadowProjection<4>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TModulatedShadowProjection<4>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d01f0

bool __thiscall
`FGlobalShaderMap::GetShader<TModulatedShadowProjection<5>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TModulatedShadowProjection<5>::GetStaticType();
    TModulatedShadowProjection<5>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TModulatedShadowProjection<5>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TModulatedShadowProjection<5>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0250

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionFromTranslucencyPS<1>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionFromTranslucencyPS<1>::GetStaticType();
    TShadowProjectionFromTranslucencyPS<1>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionFromTranslucencyPS<1>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionFromTranslucencyPS<1>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d02b0

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionFromTranslucencyPS<2>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionFromTranslucencyPS<2>::GetStaticType();
    TShadowProjectionFromTranslucencyPS<2>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionFromTranslucencyPS<2>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionFromTranslucencyPS<2>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0310

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionFromTranslucencyPS<3>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionFromTranslucencyPS<3>::GetStaticType();
    TShadowProjectionFromTranslucencyPS<3>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionFromTranslucencyPS<3>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionFromTranslucencyPS<3>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0370

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionFromTranslucencyPS<4>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionFromTranslucencyPS<4>::GetStaticType();
    TShadowProjectionFromTranslucencyPS<4>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionFromTranslucencyPS<4>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionFromTranslucencyPS<4>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d03d0

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionFromTranslucencyPS<5>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionFromTranslucencyPS<5>::GetStaticType();
    TShadowProjectionFromTranslucencyPS<5>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionFromTranslucencyPS<5>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionFromTranslucencyPS<5>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0430

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<1,1,0,1,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<1,1,0,1,0>::GetStaticType();
    TShadowProjectionPS<1,1,0,1,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<1,1,0,1,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<1,1,0,1,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0490

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<1,1,0,0,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<1,1,0,0,0>::GetStaticType();
    TShadowProjectionPS<1,1,0,0,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<1,1,0,0,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<1,1,0,0,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d04f0

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<1,0,0,1,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<1,0,0,1,0>::GetStaticType();
    TShadowProjectionPS<1,0,0,1,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<1,0,0,1,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<1,0,0,1,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0550

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<1,0,0,0,1>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<1,0,0,0,1>::GetStaticType();
    TShadowProjectionPS<1,0,0,0,1>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<1,0,0,0,1>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<1,0,0,0,1>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d05b0

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<1,0,0,0,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<1,0,0,0,0>::GetStaticType();
    TShadowProjectionPS<1,0,0,0,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<1,0,0,0,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<1,0,0,0,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0610

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<2,1,0,1,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<2,1,0,1,0>::GetStaticType();
    TShadowProjectionPS<2,1,0,1,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<2,1,0,1,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<2,1,0,1,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0670

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<2,1,0,0,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<2,1,0,0,0>::GetStaticType();
    TShadowProjectionPS<2,1,0,0,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<2,1,0,0,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<2,1,0,0,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d06d0

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<2,0,0,1,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<2,0,0,1,0>::GetStaticType();
    TShadowProjectionPS<2,0,0,1,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<2,0,0,1,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<2,0,0,1,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0730

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<2,0,0,0,1>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<2,0,0,0,1>::GetStaticType();
    TShadowProjectionPS<2,0,0,0,1>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<2,0,0,0,1>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<2,0,0,0,1>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0790

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<2,0,0,0,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<2,0,0,0,0>::GetStaticType();
    TShadowProjectionPS<2,0,0,0,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<2,0,0,0,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<2,0,0,0,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d07f0

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<3,1,0,1,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<3,1,0,1,0>::GetStaticType();
    TShadowProjectionPS<3,1,0,1,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<3,1,0,1,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<3,1,0,1,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0850

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<3,1,0,0,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<3,1,0,0,0>::GetStaticType();
    TShadowProjectionPS<3,1,0,0,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<3,1,0,0,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<3,1,0,0,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d08b0

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<3,0,0,1,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<3,0,0,1,0>::GetStaticType();
    TShadowProjectionPS<3,0,0,1,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<3,0,0,1,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<3,0,0,1,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0910

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<3,0,0,0,1>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<3,0,0,0,1>::GetStaticType();
    TShadowProjectionPS<3,0,0,0,1>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<3,0,0,0,1>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<3,0,0,0,1>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0970

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<3,0,0,0,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<3,0,0,0,0>::GetStaticType();
    TShadowProjectionPS<3,0,0,0,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<3,0,0,0,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<3,0,0,0,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d09d0

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<4,1,0,1,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<4,1,0,1,0>::GetStaticType();
    TShadowProjectionPS<4,1,0,1,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<4,1,0,1,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<4,1,0,1,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0a30

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<4,1,0,0,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<4,1,0,0,0>::GetStaticType();
    TShadowProjectionPS<4,1,0,0,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<4,1,0,0,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<4,1,0,0,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0a90

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<4,0,0,1,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<4,0,0,1,0>::GetStaticType();
    TShadowProjectionPS<4,0,0,1,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<4,0,0,1,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<4,0,0,1,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0af0

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<4,0,0,0,1>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<4,0,0,0,1>::GetStaticType();
    TShadowProjectionPS<4,0,0,0,1>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<4,0,0,0,1>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<4,0,0,0,1>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0b50

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<4,0,0,0,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<4,0,0,0,0>::GetStaticType();
    TShadowProjectionPS<4,0,0,0,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<4,0,0,0,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<4,0,0,0,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0bb0

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<5,1,0,1,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<5,1,0,1,0>::GetStaticType();
    TShadowProjectionPS<5,1,0,1,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<5,1,0,1,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<5,1,0,1,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0c10

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<5,1,0,0,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<5,1,0,0,0>::GetStaticType();
    TShadowProjectionPS<5,1,0,0,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<5,1,0,0,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<5,1,0,0,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0c70

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<5,0,0,1,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<5,0,0,1,0>::GetStaticType();
    TShadowProjectionPS<5,0,0,1,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<5,0,0,1,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<5,0,0,1,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0cd0

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<5,0,0,0,1>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<5,0,0,0,1>::GetStaticType();
    TShadowProjectionPS<5,0,0,0,1>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<5,0,0,0,1>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<5,0,0,0,1>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0d30

bool __thiscall
`FGlobalShaderMap::GetShader<TShadowProjectionPS<5,0,0,0,0>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TShadowProjectionPS<5,0,0,0,0>::GetStaticType();
    TShadowProjectionPS<5,0,0,0,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TShadowProjectionPS<5,0,0,0,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TShadowProjectionPS<5,0,0,0,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0d90

bool __thiscall
`FGlobalShaderMap::GetShader<TSpotPercentageCloserShadowProjectionPS<5,0>_>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TSpotPercentageCloserShadowProjectionPS<5,0>::GetStaticType();
    TSpotPercentageCloserShadowProjectionPS<5,0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TSpotPercentageCloserShadowProjectionPS<5,0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TSpotPercentageCloserShadowProjectionPS<5,0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0df0

bool __thiscall
`FGlobalShaderMap::GetShader<FLateZDummyPS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FLateZDummyPS::GetStaticType();
    FLateZDummyPS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FLateZDummyPS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FLateZDummyPS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0e50

bool __thiscall
`FGlobalShaderMap::GetShader<FShadowProjectionNoTransformVS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FShadowProjectionNoTransformVS::GetStaticType();
    FShadowProjectionNoTransformVS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FShadowProjectionNoTransformVS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FShadowProjectionNoTransformVS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d0eb0

bool __thiscall
`FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FShadowVolumeBoundProjectionVS::GetStaticType();
    FShadowVolumeBoundProjectionVS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d1230

bool __thiscall
`FGlobalShaderMap::GetShader<FScreenSpaceShadowsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FScreenSpaceShadowsCS::GetStaticType();
    FScreenSpaceShadowsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FScreenSpaceShadowsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FScreenSpaceShadowsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d1a70

bool __thiscall
`FGlobalShaderMap::GetShader<FAnimBankEvaluateCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FAnimBankEvaluateCS::GetStaticType();
    FAnimBankEvaluateCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FAnimBankEvaluateCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FAnimBankEvaluateCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d1ad0

bool __thiscall
`FGlobalShaderMap::GetShader<FAnimBankScatterCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FAnimBankScatterCS::GetStaticType();
    FAnimBankScatterCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FAnimBankScatterCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FAnimBankScatterCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d1b30

bool __thiscall
`FGlobalShaderMap::GetShader<FNaniteSkinningUpdateChunkCullCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FNaniteSkinningUpdateChunkCullCS::GetStaticType();
    FNaniteSkinningUpdateChunkCullCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FNaniteSkinningUpdateChunkCullCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FNaniteSkinningUpdateChunkCullCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d1b90

bool __thiscall
`FGlobalShaderMap::GetShader<FNaniteSkinningUpdateViewDataCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FNaniteSkinningUpdateViewDataCS::GetStaticType();
    FNaniteSkinningUpdateViewDataCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FNaniteSkinningUpdateViewDataCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FNaniteSkinningUpdateViewDataCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d1bf0

bool __thiscall
`FGlobalShaderMap::GetShader<FRefPoseTransformProviderCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRefPoseTransformProviderCS::GetStaticType();
    FRefPoseTransformProviderCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRefPoseTransformProviderCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRefPoseTransformProviderCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d1f10

bool __thiscall
`FGlobalShaderMap::GetShader<FSplineMeshTextureFillCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FSplineMeshTextureFillCS::GetStaticType();
    FSplineMeshTextureFillCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FSplineMeshTextureFillCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FSplineMeshTextureFillCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d1f70

bool __thiscall
`FGlobalShaderMap::GetShader<Substrate::FSubstrateClosureTilePassCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    Substrate::FSubstrateClosureTilePassCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Substrate::FSubstrateClosureTilePassCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Substrate::FSubstrateClosureTilePassCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d1fc0

bool __thiscall
`FGlobalShaderMap::GetShader<Substrate::FSubstrateMaterialTileClassificationPassCS>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    Substrate::FSubstrateMaterialTileClassificationPassCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Substrate::FSubstrateMaterialTileClassificationPassCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Substrate::FSubstrateMaterialTileClassificationPassCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2410

bool __thiscall
`FGlobalShaderMap::GetShader<FVisualizeTranslucencyVolumePS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVisualizeTranslucencyVolumePS::GetStaticType();
    FVisualizeTranslucencyVolumePS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVisualizeTranslucencyVolumePS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVisualizeTranslucencyVolumePS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2470

bool __thiscall
`FGlobalShaderMap::GetShader<FVisualizeTranslucencyVolumeVS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVisualizeTranslucencyVolumeVS::GetStaticType();
    FVisualizeTranslucencyVolumeVS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVisualizeTranslucencyVolumeVS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVisualizeTranslucencyVolumeVS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d28f0

bool __thiscall
`FGlobalShaderMap::GetShader<FAllocateCommandInstanceOutputSpaceCs>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FAllocateCommandInstanceOutputSpaceCs::GetStaticType();
    FAllocateCommandInstanceOutputSpaceCs::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FAllocateCommandInstanceOutputSpaceCs,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FAllocateCommandInstanceOutputSpaceCs>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2950

bool __thiscall
`FGlobalShaderMap::GetShader<FAppendPhysicalPageListsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FAppendPhysicalPageListsCS::GetStaticType();
    FAppendPhysicalPageListsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FAppendPhysicalPageListsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FAppendPhysicalPageListsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d29b0

bool __thiscall
`FGlobalShaderMap::GetShader<FCompactViewsVSM_CS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FCompactViewsVSM_CS::GetStaticType();
    FCompactViewsVSM_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FCompactViewsVSM_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FCompactViewsVSM_CS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2a10

bool __thiscall
`FGlobalShaderMap::GetShader<FComputeExplicitChunkDrawsViewMask_CS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FComputeExplicitChunkDrawsViewMask_CS::GetStaticType();
    FComputeExplicitChunkDrawsViewMask_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FComputeExplicitChunkDrawsViewMask_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FComputeExplicitChunkDrawsViewMask_CS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2a70

bool __thiscall
`FGlobalShaderMap::GetShader<FDebugVisualizeVirtualSmCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FDebugVisualizeVirtualSmCS::GetStaticType();
    FDebugVisualizeVirtualSmCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FDebugVisualizeVirtualSmCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FDebugVisualizeVirtualSmCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2ad0

bool __thiscall
`FGlobalShaderMap::GetShader<FGenerateHierarchicalPageFlagsCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FGenerateHierarchicalPageFlagsCS::GetStaticType();
    FGenerateHierarchicalPageFlagsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FGenerateHierarchicalPageFlagsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FGenerateHierarchicalPageFlagsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2b30

bool __thiscall
`FGlobalShaderMap::GetShader<FGeneratePageFlagsFromFroxelsCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FGeneratePageFlagsFromFroxelsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FGeneratePageFlagsFromFroxelsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FGeneratePageFlagsFromFroxelsCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2b80

bool __thiscall
`FGlobalShaderMap::GetShader<FInitPageRectBoundsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FInitPageRectBoundsCS::GetStaticType();
    FInitPageRectBoundsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FInitPageRectBoundsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FInitPageRectBoundsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2be0

bool __thiscall
`FGlobalShaderMap::GetShader<FInitializePhysicalPagesIndirectCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FInitializePhysicalPagesIndirectCS::GetStaticType();
    FInitializePhysicalPagesIndirectCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FInitializePhysicalPagesIndirectCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FInitializePhysicalPagesIndirectCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2c40

bool __thiscall
`FGlobalShaderMap::GetShader<FMarkCoarsePagesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FMarkCoarsePagesCS::GetStaticType();
    FMarkCoarsePagesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FMarkCoarsePagesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FMarkCoarsePagesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2ca0

bool __thiscall
`FGlobalShaderMap::GetShader<FMergeStaticPhysicalPagesIndirectCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FMergeStaticPhysicalPagesIndirectCS::GetStaticType();
    FMergeStaticPhysicalPagesIndirectCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FMergeStaticPhysicalPagesIndirectCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FMergeStaticPhysicalPagesIndirectCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2d00

bool __thiscall
`FGlobalShaderMap::GetShader<FOutputCommandInstanceListsCs>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FOutputCommandInstanceListsCs::GetStaticType();
    FOutputCommandInstanceListsCs::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FOutputCommandInstanceListsCs,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FOutputCommandInstanceListsCs>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2d60

bool __thiscall
`FGlobalShaderMap::GetShader<FPackAvailablePagesCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FPackAvailablePagesCS::GetStaticType();
    FPackAvailablePagesCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FPackAvailablePagesCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FPackAvailablePagesCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2dc0

bool __thiscall
`FGlobalShaderMap::GetShader<FProcessPrevFramePerfDataCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FProcessPrevFramePerfDataCS::GetStaticType();
    FProcessPrevFramePerfDataCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FProcessPrevFramePerfDataCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FProcessPrevFramePerfDataCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2e20

bool __thiscall
`FGlobalShaderMap::GetShader<FPropagateMappedMipsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FPropagateMappedMipsCS::GetStaticType();
    FPropagateMappedMipsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FPropagateMappedMipsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FPropagateMappedMipsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2e80

bool __thiscall
`FGlobalShaderMap::GetShader<FPruneLightGridCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FPruneLightGridCS::GetStaticType();
    FPruneLightGridCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FPruneLightGridCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FPruneLightGridCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2ee0

bool __thiscall
`FGlobalShaderMap::GetShader<FUpdateAndClearDirtyFlagsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FUpdateAndClearDirtyFlagsCS::GetStaticType();
    FUpdateAndClearDirtyFlagsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FUpdateAndClearDirtyFlagsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FUpdateAndClearDirtyFlagsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2f40

bool __thiscall
`FGlobalShaderMap::GetShader<FUpdateThrottleParametersCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FUpdateThrottleParametersCS::GetStaticType();
    FUpdateThrottleParametersCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FUpdateThrottleParametersCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FUpdateThrottleParametersCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d2fa0

bool __thiscall
`FGlobalShaderMap::GetShader<FVSMResetInstanceStateCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVSMResetInstanceStateCS::GetStaticType();
    FVSMResetInstanceStateCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVSMResetInstanceStateCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVSMResetInstanceStateCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3000

bool __thiscall
`FGlobalShaderMap::GetShader<FVSMUpdateViewInstanceStateCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVSMUpdateViewInstanceStateCS::GetStaticType();
    FVSMUpdateViewInstanceStateCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVSMUpdateViewInstanceStateCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVSMUpdateViewInstanceStateCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3060

bool __thiscall
`FGlobalShaderMap::GetShader<FVirtualShadowMapProjectionCompositeFromMaskBitsPS>'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVirtualShadowMapProjectionCompositeFromMaskBitsPS::GetStaticType();
    FVirtualShadowMapProjectionCompositeFromMaskBitsPS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVirtualShadowMapProjectionCompositeFromMaskBitsPS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVirtualShadowMapProjectionCompositeFromMaskBitsPS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d30c0

bool __thiscall
`FGlobalShaderMap::GetShader<FVirtualShadowMapProjectionCompositePS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVirtualShadowMapProjectionCompositePS::GetStaticType();
    FVirtualShadowMapProjectionCompositePS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVirtualShadowMapProjectionCompositePS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVirtualShadowMapProjectionCompositePS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3120

bool __thiscall
`FGlobalShaderMap::GetShader<FVirtualShadowMapProjectionCompositeTileVS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVirtualShadowMapProjectionCompositeTileVS::GetStaticType();
    FVirtualShadowMapProjectionCompositeTileVS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVirtualShadowMapProjectionCompositeTileVS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVirtualShadowMapProjectionCompositeTileVS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3180

bool __thiscall
`FGlobalShaderMap::GetShader<FVirtualSmBBuildHZBPerPageTopCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVirtualSmBBuildHZBPerPageTopCS::GetStaticType();
    FVirtualSmBBuildHZBPerPageTopCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVirtualSmBBuildHZBPerPageTopCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVirtualSmBBuildHZBPerPageTopCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d31e0

bool __thiscall
`FGlobalShaderMap::GetShader<FVirtualSmBuildHZBPerPageCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVirtualSmBuildHZBPerPageCS::GetStaticType();
    FVirtualSmBuildHZBPerPageCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVirtualSmBuildHZBPerPageCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVirtualSmBuildHZBPerPageCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3240

bool __thiscall
`FGlobalShaderMap::GetShader<FVirtualSmCopyStatsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVirtualSmCopyStatsCS::GetStaticType();
    FVirtualSmCopyStatsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVirtualSmCopyStatsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVirtualSmCopyStatsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d32a0

bool __thiscall
`FGlobalShaderMap::GetShader<FVirtualSmFeedbackStatusCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVirtualSmFeedbackStatusCS::GetStaticType();
    FVirtualSmFeedbackStatusCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVirtualSmFeedbackStatusCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVirtualSmFeedbackStatusCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3300

bool __thiscall
`FGlobalShaderMap::GetShader<FVirtualSmPrintClipmapStatsCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVirtualSmPrintClipmapStatsCS::GetStaticType();
    FVirtualSmPrintClipmapStatsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVirtualSmPrintClipmapStatsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVirtualSmPrintClipmapStatsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3660

bool __thiscall
`FGlobalShaderMap::GetShader<FInjectShadowedLocalLightPS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FInjectShadowedLocalLightPS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FInjectShadowedLocalLightPS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FInjectShadowedLocalLightPS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d36b0

bool __thiscall
`FGlobalShaderMap::GetShader<FRayTraceDirectionalLightVolumeShadowMapRGS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FRayTraceDirectionalLightVolumeShadowMapRGS::GetStaticType();
    FRayTraceDirectionalLightVolumeShadowMapRGS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FRayTraceDirectionalLightVolumeShadowMapRGS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FRayTraceDirectionalLightVolumeShadowMapRGS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3710

bool __thiscall
`FGlobalShaderMap::GetShader<FVolumetricFogFinalIntegrationCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FVolumetricFogFinalIntegrationCS::GetStaticType();
    FVolumetricFogFinalIntegrationCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVolumetricFogFinalIntegrationCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVolumetricFogFinalIntegrationCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3770

bool __thiscall
`FGlobalShaderMap::GetShader<FVolumetricFogLightScatteringCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FVolumetricFogLightScatteringCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FVolumetricFogLightScatteringCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FVolumetricFogLightScatteringCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d37c0

bool __thiscall
`FGlobalShaderMap::GetShader<FWriteToBoundingSphereVS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FWriteToBoundingSphereVS::GetStaticType();
    FWriteToBoundingSphereVS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FWriteToBoundingSphereVS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FWriteToBoundingSphereVS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3ca0

bool __thiscall
`FGlobalShaderMap::GetShader<TPageTableUpdatePS<28>_>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TPageTableUpdatePS<28>::GetStaticType();
    TPageTableUpdatePS<28>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TPageTableUpdatePS<28>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TPageTableUpdatePS<28>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3d00

bool __thiscall
`FGlobalShaderMap::GetShader<TPageTableUpdatePS<32>_>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TPageTableUpdatePS<32>::GetStaticType();
    TPageTableUpdatePS<32>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TPageTableUpdatePS<32>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TPageTableUpdatePS<32>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3d60

bool __thiscall
`FGlobalShaderMap::GetShader<TPageTableUpdatePS<34>_>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TPageTableUpdatePS<34>::GetStaticType();
    TPageTableUpdatePS<34>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TPageTableUpdatePS<34>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TPageTableUpdatePS<34>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3dc0

bool __thiscall
`FGlobalShaderMap::GetShader<TPageTableUpdatePS<48>_>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TPageTableUpdatePS<48>::GetStaticType();
    TPageTableUpdatePS<48>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TPageTableUpdatePS<48>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TPageTableUpdatePS<48>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3e20

bool __thiscall
`FGlobalShaderMap::GetShader<TPageTableUpdatePS<49>_>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TPageTableUpdatePS<49>::GetStaticType();
    TPageTableUpdatePS<49>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TPageTableUpdatePS<49>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TPageTableUpdatePS<49>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3e80

bool __thiscall
`FGlobalShaderMap::GetShader<TPageTableUpdatePS<68>_>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TPageTableUpdatePS<68>::GetStaticType();
    TPageTableUpdatePS<68>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TPageTableUpdatePS<68>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TPageTableUpdatePS<68>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3ee0

bool __thiscall
`FGlobalShaderMap::GetShader<TPageTableUpdateVS<1>_>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TPageTableUpdateVS<1>::GetStaticType();
    TPageTableUpdateVS<1>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TPageTableUpdateVS<1>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TPageTableUpdateVS<1>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d3f40

bool __thiscall
`FGlobalShaderMap::GetShader<TPageTableUpdateVS<0>_>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    TPageTableUpdateVS<0>::GetStaticType();
    TPageTableUpdateVS<0>::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<TPageTableUpdateVS<0>,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<TPageTableUpdateVS<0>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

