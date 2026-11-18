// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// ConstructCompiledInstance @ 1452b91b0

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
_anon_9327CABB::FTSRDetectThinGeometryCS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 1452b9cc0

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

FShader * __cdecl _anon_9327CABB::FTSRDetectThinGeometryCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 1452c7de0

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

FGlobalShaderType * __cdecl _anon_9327CABB::FTSRDetectThinGeometryCS::GetStaticType(void)

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
              0x9d4c) < `FTSRDetectThinGeometryCS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FTSRDetectThinGeometryCS::GetStaticType'::`2'::_TSS0);
    if (`FTSRDetectThinGeometryCS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      if ((`FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FTSRDetectThinG;
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ =
             Freeze::DefaultToString;
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FTSRDetectThinGeometryCS,0>::Do;
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer.
        _0_8_ = u_BASE;
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x2a] = '\x04';
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer.
        _8_8_ = FGlobalShader::StaticGetTypeLayout();
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer.
        _24_8_ = Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x10] = `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x11] = `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x12] = `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x13] = `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x14] = `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x15] = `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x16] = `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x17] = `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::
             FieldBuffer;
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x20] = '\0';
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x21] = '\0';
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x22] = '\0';
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x23] = '\0';
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x24] = '\x01';
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x25] = '\0';
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x26] = '\0';
        `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
        [0x27] = '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FTSRDetectThinGeometryCS,FGlobalShader>'::`2'::FieldBuffer
            ._8_8_)->Interface != NonVirtual) {
          `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   `FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FTSRDetectThinGeometryCS::GetStaticType'::`2'::StaticType,Global,
                 (FTypeLayoutDesc *)`FTSRDetectThinGeometryCS::StaticGetTypeLayout'::`2'::TypeBuffer
                 ,L"FTSRDetectThinGeometryCS",
                 L"/Engine/Private/TemporalSuperResolution/TSRDetectThinGeometry.usf",L"MainCS",5,
                 0x40,ConstructSerializedInstance,ConstructCompiledInstance,
                 ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FTSRDetectThinGeometryCS::GetStaticType'::`2'::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,
                         L"/Engine/Private/TemporalSuperResolution/TSRDetectThinGeometry.usf");
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
      atexit(``anonymous_namespace'::FTSRDetectThinGeometryCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FTSRDetectThinGeometryCS::GetStaticType'::`2'::_TSS0);
      return &`FTSRDetectThinGeometryCS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FTSRDetectThinGeometryCS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 1452cdf10

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
_anon_9327CABB::FTSRDetectThinGeometryCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// RemapPermutation @ 1452cfda0

TShaderPermutationDomain<TShaderPermutationDomain<_anonymous_namespace_::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>,_anonymous_namespace_::FTSRDetectThinGeometryCS::FThinGeometryEdgeReprojectionDim,A0x9327cabb::FTSRDetectThinGeometryCS::FSkyRelaxationDim>
* __cdecl _anon_9327CABB::FTSRDetectThinGeometryCS::RemapPermutation
                    (TShaderPermutationDomain<TShaderPermutationDomain<_anonymous_namespace_::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>,_anonymous_namespace_::FTSRDetectThinGeometryCS::FThinGeometryEdgeReprojectionDim,A0x9327cabb::FTSRDetectThinGeometryCS::FSkyRelaxationDim>
                     *__return_storage_ptr__,
                    TShaderPermutationDomain<TShaderPermutationDomain<_anonymous_namespace_::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>,_anonymous_namespace_::FTSRDetectThinGeometryCS::FThinGeometryEdgeReprojectionDim,A0x9327cabb::FTSRDetectThinGeometryCS::FSkyRelaxationDim>
                    *param_1)

{
  TShaderPermutationDomain<_anonymous_namespace_::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
  TVar1;
  TShaderPermutationDomain<_anonymous_namespace_::FTSRDetectThinGeometryCS::FThinGeometryEdgeReprojectionDim,A0x9327cabb::FTSRDetectThinGeometryCS::FSkyRelaxationDim>
  TVar2;
  undefined1 uVar3;
  TShaderPermutationDomain<_anonymous_namespace_::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
  local_res8;
  
  TVar1 = param_1->DimensionValue;
  local_res8.Tail.DimensionValue = TVar1.Tail.DimensionValue;
  if (TVar1.Tail.Tail.DimensionValue != false) {
    local_res8.Tail.DimensionValue = false;
  }
  local_res8.DimensionValue = TVar1.DimensionValue;
  if (local_res8.DimensionValue == 0) {
    local_res8.Tail.DimensionValue = false;
  }
  local_res8._5_3_ = TVar1._5_3_;
  param_1->DimensionValue = local_res8;
  TVar2 = param_1->Tail;
  uVar3 = param_1->field_0xb;
  __return_storage_ptr__->DimensionValue = param_1->DimensionValue;
  __return_storage_ptr__->Tail = TVar2;
  __return_storage_ptr__->field_0xb = uVar3;
  return __return_storage_ptr__;
}

// ShouldCompilePermutationImpl @ 1452d47a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_9327CABB::FTSRDetectThinGeometryCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  TShaderPermutationDomain<_anonymous_namespace_::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
  TVar1;
  bool bVar2;
  char cVar3;
  TShaderPermutationDomain<TShaderPermutationDomain<_anonymous_namespace_::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>,_anonymous_namespace_::FTSRDetectThinGeometryCS::FThinGeometryEdgeReprojectionDim,A0x9327cabb::FTSRDetectThinGeometryCS::FSkyRelaxationDim>
  local_28 [2];
  
  TShaderPermutationDomain<TShaderPermutationDomain<`anonymous_namespace'::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>,`anonymous_namespace'::FTSRDetectThinGeometryCS::FThinGeometryEdgeReprojectionDim,A0x9327cabb::FTSRDetectThinGeometryCS::FSkyRelaxationDim>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<_anonymous_namespace_::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>,_anonymous_namespace_::FTSRDetectThinGeometryCS::FThinGeometryEdgeReprojectionDim,A0x9327cabb::FTSRDetectThinGeometryCS::FSkyRelaxationDim>
            (local_28,param_1->PermutationId);
  TVar1.Tail.DimensionValue = local_28[0].DimensionValue.Tail.DimensionValue;
  TVar1.DimensionValue = local_28[0].DimensionValue.DimensionValue;
  TVar1.Tail.Tail.DimensionValue = local_28[0].DimensionValue.Tail.Tail.DimensionValue;
  TVar1.Tail.Tail.Tail = local_28[0].DimensionValue.Tail.Tail.Tail;
  TVar1._7_1_ = local_28[0].DimensionValue._7_1_;
  cVar3 = local_28[0].DimensionValue.Tail.DimensionValue;
  if (local_28[0].DimensionValue.Tail.Tail.DimensionValue != false) {
    cVar3 = '\0';
  }
  if (local_28[0].DimensionValue.DimensionValue == 0) {
    cVar3 = '\0';
  }
  if (local_28[0].DimensionValue.Tail.DimensionValue != (bool)cVar3) {
    return false;
  }
  bVar2 = FTSRConvolutionNetworkShader::ShouldCompilePermutation
                    ((FGlobalShaderPermutationParameters *)param_1,TVar1);
  return bVar2;
}

// ShouldPrecachePermutationImpl @ 1452d54c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_9327CABB::FTSRDetectThinGeometryCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPermutationPrecacheRequest EVar1;
  TShaderPermutationDomain<TShaderPermutationDomain<_anonymous_namespace_::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>,_anonymous_namespace_::FTSRDetectThinGeometryCS::FThinGeometryEdgeReprojectionDim,A0x9327cabb::FTSRDetectThinGeometryCS::FSkyRelaxationDim>
  local_18;
  
  TShaderPermutationDomain<TShaderPermutationDomain<`anonymous_namespace'::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>,`anonymous_namespace'::FTSRDetectThinGeometryCS::FThinGeometryEdgeReprojectionDim,A0x9327cabb::FTSRDetectThinGeometryCS::FSkyRelaxationDim>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<_anonymous_namespace_::FTSRConvolutionNetworkShader::FWaveSizeOps,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>,_anonymous_namespace_::FTSRDetectThinGeometryCS::FThinGeometryEdgeReprojectionDim,A0x9327cabb::FTSRDetectThinGeometryCS::FSkyRelaxationDim>
            (&local_18,param_1->PermutationId);
  EVar1 = FTSRConvolutionNetworkShader::ShouldPrecachePermutation
                    ((FGlobalShaderPermutationParameters *)param_1,local_18.DimensionValue);
  return EVar1;
}

