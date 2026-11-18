// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// ConstructCompiledInstance @ 144f8a510

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

FShader * __cdecl
FMobileRadialLightFunctionPS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  int iVar1;
  FShaderParameterMap *pFVar2;
  FMaterialShader *this;
  FShaderParametersMetadata *pFVar3;
  
  this = ::operator_new(0xf8);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    pFVar2 = param_1->ParameterMap;
    iVar1 = param_1->PermutationId;
    pFVar3 = FParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              ((FShaderParameterBindings *)this,(FShader *)this,iVar1,pFVar2,pFVar3,false);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144f8ce60

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

FShader * __cdecl FMobileRadialLightFunctionPS::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0xf8);
  if (this != (FMaterialShader *)0x0) {
    memset(this,0,0xf8);
    FMaterialShader::FMaterialShader(this);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 144fbda70

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

FMaterialShaderType * __cdecl FMobileRadialLightFunctionPS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Material,pFVar4,L"FMobileRadialLightFunctionPS",
                 L"/Engine/Private/MobileDeferredShading.usf",L"MobileRadialLightPS",3,0x30,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xf8,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/MobileDeferredShading.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                           ,0x7e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FMobileRadialLightFunctionPS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144fc53c0

FTypeLayoutDesc * __thiscall
FMobileRadialLightFunctionPS::GetTypeLayout(FMobileRadialLightFunctionPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FMobileRadialLi;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMobileRadialLightFunctionPS,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMaterialShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 144fcb160

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

void __cdecl
FMobileRadialLightFunctionPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf8);
  return;
}

// SetParameters @ 144fe3be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileRadialLightFunctionPS::SetParameters
          (FMobileRadialLightFunctionPS *this,FRHIBatchedShaderParameters *param_1,
          FViewInfo *param_2,FMaterialRenderProxy *param_3,FMaterial *param_4)

{
  FShaderParametersMetadata *pFVar1;
  FHashedName FVar2;
  TShaderUniformBufferParameter<FPrimitiveUniformShaderParameters> *pTVar3;
  FHashedName local_res18;
  FHashedName local_18 [2];
  
  FMaterialShader::SetViewParameters
            ((FMaterialShader *)this,param_1,(FSceneView *)param_2,
             (TUniformBufferRef<FViewUniformShaderParameters> *)&param_2->_padding_);
  FMaterialShader::SetParameters
            ((FMaterialShader *)this,param_1,param_3,param_4,(FSceneView *)param_2);
  pFVar1 = FPrimitiveUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_res18,&pFVar1->ShaderVariableHashedName);
  FVar2.Hash = (ulong64)FHashedName::FHashedName(local_18,&local_res18);
  pTVar3 = (TShaderUniformBufferParameter<FPrimitiveUniformShaderParameters> *)
           FShader::GetUniformBufferParameter((FShader *)this,FVar2);
  SetUniformBufferParameter<FPrimitiveUniformShaderParameters>
            (param_1,pTVar3,
             (TUniformBuffer<FPrimitiveUniformShaderParameters> *)&GIdentityPrimitiveUniformBuffer);
  return;
}

// ShouldCompilePermutation @ 144fe6730

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FMobileRadialLightFunctionPS::ShouldCompilePermutation
          (FMaterialShaderPermutationParameters *param_1)

{
  FStaticShaderPlatform FVar1;
  uint uVar2;
  code *pcVar3;
  TShaderPermutationDomain<FMobileRadialLightFunctionPS::FIESProfileDim,FMobileRadialLightFunctionPS::FSpotLightShadowDim,FMobileRadialLightFunctionPS::FSimpleLightDim>
  TVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iStack_24;
  bool local_20;
  bool bStack_1f;
  TShaderPermutationDomain<FMobileRadialLightFunctionPS::FIESProfileDim,FMobileRadialLightFunctionPS::FSpotLightShadowDim,FMobileRadialLightFunctionPS::FSimpleLightDim>
  local_10 [2];
  
  if (((((int)(param_1->MaterialParameters)._padding_ == 2) &&
       (bVar5 = IsMobilePlatform((FStaticShaderPlatform)(EShaderPlatform)param_1->_padding_), bVar5)
       ) && (FReadOnlyCVARCache::bMobileDeferredShadingValue != false)) &&
     (FReadOnlyCVARCache::bMobileHDR != false)) {
    uVar2 = *(uint *)((longlong)&param_1->_padding_ + 4);
    uVar11 = (int)uVar2 / 2;
    iVar9 = (int)uVar2 % 2;
    if (((iVar9 != 0) && (iVar9 != 1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PermutationId == 0 || PermutationId == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x4c,L"Invalid shader permutation dimension id %i."), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar10 = (int)uVar11 % 3;
    if (((2 < iVar10) || (iVar10 < 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PermutationId < PermutationCount && PermutationId >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x77,L"Invalid shader permutation dimension value id %i."), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    TShaderPermutationDomain<FMobileRadialLightFunctionPS::FIESProfileDim,FMobileRadialLightFunctionPS::FSpotLightShadowDim,FMobileRadialLightFunctionPS::FSimpleLightDim>
    ::
    TShaderPermutationDomain<FMobileRadialLightFunctionPS::FIESProfileDim,FMobileRadialLightFunctionPS::FSpotLightShadowDim,FMobileRadialLightFunctionPS::FSimpleLightDim>
              (local_10,(int)uVar11 / 3);
    if ((0x17 < uVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PermutationId >= 0 && PermutationId < PermutationCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x188,L"Invalid shader permutation id %i."), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((0x2f < uVar2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PermutationId >= 0 && PermutationId < PermutationCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x188,L"Invalid shader permutation id %i."), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    TVar4 = local_10[0];
    bVar5 = local_10[0].Tail.Tail.DimensionValue;
    if ((local_10[0].Tail.Tail.DimensionValue != true) ||
       (((param_1->MaterialParameters)._padding_ & 1) != 0)) {
      FVar1.Platform = (EShaderPlatform)param_1->_padding_;
      bVar7 = IsMobileMovableSpotlightShadowsEnabled(FVar1);
      bStack_1f = TVar4.Tail.DimensionValue;
      if (!bVar7) {
        bStack_1f = (bool)'\0';
      }
      local_20 = TVar4.DimensionValue;
      bVar7 = MobileUsesGBufferCustomData(FVar1);
      cVar8 = local_20;
      iStack_24 = iVar10 + 1;
      if (bVar5 == true) {
        iStack_24 = 1;
        bStack_1f = false;
        cVar8 = '\0';
      }
      if (((((bVar5 != true && (bVar7 && iVar9 == 1)) == (iVar9 == 1)) && (iStack_24 == iVar10 + 1))
          && ((bool)cVar8 == local_20)) && (bStack_1f == local_10[0].Tail.DimensionValue)) {
        return true;
      }
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 144fea2c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FMobileRadialLightFunctionPS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  FStaticShaderPlatform FVar1;
  uint uVar2;
  code *pcVar3;
  TShaderPermutationDomain<FMobileRadialLightFunctionPS::FIESProfileDim,FMobileRadialLightFunctionPS::FSpotLightShadowDim,FMobileRadialLightFunctionPS::FSimpleLightDim>
  TVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iStack_24;
  bool bStack_20;
  bool bStack_1f;
  TShaderPermutationDomain<FMobileRadialLightFunctionPS::FIESProfileDim,FMobileRadialLightFunctionPS::FSpotLightShadowDim,FMobileRadialLightFunctionPS::FSimpleLightDim>
  aTStack_10 [2];
  
  if ((((param_1[1].PermutationId == 2) &&
       (bVar5 = IsMobilePlatform((FStaticShaderPlatform)param_1->Platform), bVar5)) &&
      (FReadOnlyCVARCache::bMobileDeferredShadingValue != false)) &&
     (FReadOnlyCVARCache::bMobileHDR != false)) {
    uVar2 = param_1->PermutationId;
    uVar11 = (int)uVar2 / 2;
    iVar9 = (int)uVar2 % 2;
    if (((iVar9 != 0) && (iVar9 != 1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PermutationId == 0 || PermutationId == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x4c,L"Invalid shader permutation dimension id %i."), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar10 = (int)uVar11 % 3;
    if (((2 < iVar10) || (iVar10 < 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PermutationId < PermutationCount && PermutationId >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x77,L"Invalid shader permutation dimension value id %i."), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    TShaderPermutationDomain<FMobileRadialLightFunctionPS::FIESProfileDim,FMobileRadialLightFunctionPS::FSpotLightShadowDim,FMobileRadialLightFunctionPS::FSimpleLightDim>
    ::
    TShaderPermutationDomain<FMobileRadialLightFunctionPS::FIESProfileDim,FMobileRadialLightFunctionPS::FSpotLightShadowDim,FMobileRadialLightFunctionPS::FSimpleLightDim>
              (aTStack_10,(int)uVar11 / 3);
    if ((0x17 < uVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PermutationId >= 0 && PermutationId < PermutationCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x188,L"Invalid shader permutation id %i."), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((0x2f < uVar2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PermutationId >= 0 && PermutationId < PermutationCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x188,L"Invalid shader permutation id %i."), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    TVar4 = aTStack_10[0];
    bVar5 = aTStack_10[0].Tail.Tail.DimensionValue;
    if ((aTStack_10[0].Tail.Tail.DimensionValue != true) ||
       ((param_1[4].Flags & HasEditorOnlyData) != None)) {
      FVar1.Platform = param_1->Platform;
      bVar7 = IsMobileMovableSpotlightShadowsEnabled(FVar1);
      bStack_1f = TVar4.Tail.DimensionValue;
      if (!bVar7) {
        bStack_1f = (bool)'\0';
      }
      bStack_20 = TVar4.DimensionValue;
      bVar7 = MobileUsesGBufferCustomData(FVar1);
      cVar8 = bStack_20;
      iStack_24 = iVar10 + 1;
      if (bVar5 == true) {
        iStack_24 = 1;
        bStack_1f = false;
        cVar8 = '\0';
      }
      if (((((bVar5 != true && (bVar7 && iVar9 == 1)) == (iVar9 == 1)) && (iStack_24 == iVar10 + 1))
          && ((bool)cVar8 == bStack_20)) && (bStack_1f == aTStack_10[0].Tail.DimensionValue)) {
        return true;
      }
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 144feae90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FMobileRadialLightFunctionPS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 144ff4680

FTypeLayoutDesc * __cdecl FMobileRadialLightFunctionPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FMobileRadialLi;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMobileRadialLightFunctionPS,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMaterialShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

