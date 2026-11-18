// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// ConstructCompiledInstance @ 1452b93b0

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
_anon_9327CABB::FTSRRejectShadingCS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  int iVar1;
  FShaderParameterMap *pFVar2;
  FShader *this;
  FShaderParametersMetadata *pFVar3;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    pFVar2 = param_1->ParameterMap;
    iVar1 = param_1->PermutationId;
    pFVar3 = FParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              (&this->Bindings,this,iVar1,pFVar2,pFVar3,true);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1452b9e00

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

FShader * __cdecl _anon_9327CABB::FTSRRejectShadingCS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    memset(this,0,0xe0);
    FShader::FShader(this);
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 1452c8aa0

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

FGlobalShaderType * __cdecl _anon_9327CABB::FTSRRejectShadingCS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderParametersMetadata *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < `FTSRRejectShadingCS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FTSRRejectShadingCS::GetStaticType'::`2'::_TSS0);
    if (`FTSRRejectShadingCS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      if ((`FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FTSRRejectShadi;
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ = Freeze::DefaultToString
        ;
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FTSRRejectShadingCS,0>::Do;
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer._0_8_ =
             u_BASE;
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x2a] =
             '\x04';
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer._8_8_ =
             FGlobalShader::StaticGetTypeLayout();
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer._24_8_ =
             Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x10] =
             `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x11] =
             `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x12] =
             `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x13] =
             `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x14] =
             `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x15] =
             `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x16] =
             `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x17] =
             `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer;
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x20] =
             '\0';
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x21] =
             '\0';
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x22] =
             '\0';
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x23] =
             '\0';
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x24] =
             '\x01';
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x25] =
             '\0';
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x26] =
             '\0';
        `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer[0x27] =
             '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FTSRRejectShadingCS,FGlobalShader>'::`2'::FieldBuffer.
            _8_8_)->Interface != NonVirtual) {
          `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)`FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FTSRRejectShadingCS::GetStaticType'::`2'::StaticType,Global,
                 (FTypeLayoutDesc *)`FTSRRejectShadingCS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FTSRRejectShadingCS",
                 L"/Engine/Private/TemporalSuperResolution/TSRRejectShading.usf",L"MainCS",5,0x80,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FTSRRejectShadingCS::GetStaticType'::`2'::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/TemporalSuperResolution/TSRRejectShading.usf");
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(``anonymous_namespace'::FTSRRejectShadingCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FTSRRejectShadingCS::GetStaticType'::`2'::_TSS0);
      return &`FTSRRejectShadingCS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FTSRRejectShadingCS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 1452ce010

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
_anon_9327CABB::FTSRRejectShadingCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 1452d49e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_9327CABB::FTSRRejectShadingCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  int iVar1;
  code *pcVar2;
  TShaderPermutationDomain<_anonymous_namespace_::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
  TVar3;
  TShaderPermutationDomain<_anonymous_namespace_::FTSRRejectShadingCS::FFlickeringDetectionDim,A0x9327cabb::FTSRRejectShadingCS::FHistoryResurrectionDim,A0x9327cabb::FTSRRejectShadingCS::FThinGeometryDetectionDim>
  TVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  int local_28;
  char cStack_24;
  char cStack_23;
  undefined2 uStack_22;
  TShaderPermutationDomain<_anonymous_namespace_::FTSRRejectShadingCS::FFlickeringDetectionDim,A0x9327cabb::FTSRRejectShadingCS::FHistoryResurrectionDim,A0x9327cabb::FTSRRejectShadingCS::FThinGeometryDetectionDim>
  local_20 [4];
  TShaderPermutationDomain<_anonymous_namespace_::FTSRRejectShadingCS::FFlickeringDetectionDim,A0x9327cabb::FTSRRejectShadingCS::FHistoryResurrectionDim,A0x9327cabb::FTSRRejectShadingCS::FThinGeometryDetectionDim>
  local_10;
  
  iVar1 = param_1->PermutationId;
  TShaderPermutationDomain<`anonymous_namespace'::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
  ::FromDimensionValueId((int)&local_28);
  TShaderPermutationDomain<`anonymous_namespace'::FTSRRejectShadingCS::FFlickeringDetectionDim,A0x9327cabb::FTSRRejectShadingCS::FHistoryResurrectionDim,A0x9327cabb::FTSRRejectShadingCS::FThinGeometryDetectionDim>
  ::
  TShaderPermutationDomain<_anonymous_namespace_::FTSRRejectShadingCS::FFlickeringDetectionDim,A0x9327cabb::FTSRRejectShadingCS::FHistoryResurrectionDim,A0x9327cabb::FTSRRejectShadingCS::FThinGeometryDetectionDim>
            (local_20,(int)(iVar1 + (iVar1 >> 0x1f & 0xfU)) >> 4);
  if (((iVar1 < 0) || (0x7f < iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  TVar3.Tail.DimensionValue = (bool)cStack_24;
  TVar3.DimensionValue = local_28;
  TVar3.Tail.Tail.DimensionValue = (bool)cStack_23;
  TVar3._6_2_ = uStack_22;
  cVar7 = cStack_24;
  if (cStack_23 != '\0') {
    cVar7 = '\0';
  }
  local_10 = local_20[0];
  TVar4 = local_10;
  if (local_28 == 0) {
    cVar7 = '\0';
  }
  local_10.DimensionValue = local_20[0].DimensionValue;
  bVar5 = local_10.DimensionValue;
  cVar8 = local_20[0].Tail.DimensionValue;
  cVar9 = local_10.DimensionValue;
  local_10 = TVar4;
  if (cVar7 != '\0') {
    local_10.Tail = local_20[0].Tail;
    local_10.DimensionValue = true;
    cVar8 = '\x01';
    cVar9 = '\x01';
  }
  TVar4 = local_10;
  if (cVar9 != '\0') {
    cVar8 = '\x01';
  }
  local_10.Tail.DimensionValue = (bool)cVar8;
  if (((cStack_24 == cVar7) && (bVar5 == (bool)cVar9)) &&
     ((local_20[0].Tail.DimensionValue == (bool)cVar8 &&
      (local_20[0].Tail.Tail.DimensionValue == TVar4.Tail.Tail.DimensionValue)))) {
    bVar5 = FTSRConvolutionNetworkShader::ShouldCompilePermutation
                      ((FGlobalShaderPermutationParameters *)param_1,TVar3);
    return bVar5;
  }
  return false;
}

// ShouldPrecachePermutation @ 1452d5350

EShaderPermutationPrecacheRequest __cdecl
_anon_9327CABB::FTSRRejectShadingCS::ShouldPrecachePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  TShaderPermutationDomain<_anonymous_namespace_::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
  local_18;
  TShaderPermutationDomain<_anonymous_namespace_::FTSRRejectShadingCS::FFlickeringDetectionDim,A0x9327cabb::FTSRRejectShadingCS::FHistoryResurrectionDim,A0x9327cabb::FTSRRejectShadingCS::FThinGeometryDetectionDim>
  local_10 [2];
  
  iVar1 = *(int *)&param_1->field_0x4;
  TShaderPermutationDomain<`anonymous_namespace'::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
  ::FromDimensionValueId((int)&local_18);
  TShaderPermutationDomain<`anonymous_namespace'::FTSRRejectShadingCS::FFlickeringDetectionDim,A0x9327cabb::FTSRRejectShadingCS::FHistoryResurrectionDim,A0x9327cabb::FTSRRejectShadingCS::FThinGeometryDetectionDim>
  ::
  TShaderPermutationDomain<_anonymous_namespace_::FTSRRejectShadingCS::FFlickeringDetectionDim,A0x9327cabb::FTSRRejectShadingCS::FHistoryResurrectionDim,A0x9327cabb::FTSRRejectShadingCS::FThinGeometryDetectionDim>
            (local_10,(int)(iVar1 + (iVar1 >> 0x1f & 0xfU)) >> 4);
  if ((iVar1 < 0) || (0x7f < iVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  EVar4 = FTSRConvolutionNetworkShader::ShouldPrecachePermutation(param_1,local_18);
  return EVar4;
}

// ShouldPrecachePermutationImpl @ 1452d5520

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_9327CABB::FTSRRejectShadingCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  TShaderPermutationDomain<_anonymous_namespace_::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
  TStack_18;
  TShaderPermutationDomain<_anonymous_namespace_::FTSRRejectShadingCS::FFlickeringDetectionDim,A0x9327cabb::FTSRRejectShadingCS::FHistoryResurrectionDim,A0x9327cabb::FTSRRejectShadingCS::FThinGeometryDetectionDim>
  aTStack_10 [2];
  
  iVar1 = param_1->PermutationId;
  TShaderPermutationDomain<`anonymous_namespace'::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
  ::FromDimensionValueId((int)&TStack_18);
  TShaderPermutationDomain<`anonymous_namespace'::FTSRRejectShadingCS::FFlickeringDetectionDim,A0x9327cabb::FTSRRejectShadingCS::FHistoryResurrectionDim,A0x9327cabb::FTSRRejectShadingCS::FThinGeometryDetectionDim>
  ::
  TShaderPermutationDomain<_anonymous_namespace_::FTSRRejectShadingCS::FFlickeringDetectionDim,A0x9327cabb::FTSRRejectShadingCS::FHistoryResurrectionDim,A0x9327cabb::FTSRRejectShadingCS::FThinGeometryDetectionDim>
            (aTStack_10,(int)(iVar1 + (iVar1 >> 0x1f & 0xfU)) >> 4);
  if ((iVar1 < 0) || (0x7f < iVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  EVar4 = FTSRConvolutionNetworkShader::ShouldPrecachePermutation
                    ((FGlobalShaderPermutationParameters *)param_1,TStack_18);
  return EVar4;
}

