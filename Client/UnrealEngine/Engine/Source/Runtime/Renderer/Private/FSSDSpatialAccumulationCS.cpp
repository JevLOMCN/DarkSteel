// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ConstructCompiledInstance @ 14552f1d0

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
_anon_457E29A6::FSSDSpatialAccumulationCS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 14552f460

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

FShader * __cdecl _anon_457E29A6::FSSDSpatialAccumulationCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 145545100

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

FGlobalShaderType * __cdecl _anon_457E29A6::FSSDSpatialAccumulationCS::GetStaticType(void)

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
              0x9d4c) < `FSSDSpatialAccumulationCS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FSSDSpatialAccumulationCS::GetStaticType'::`2'::_TSS0);
    if (`FSSDSpatialAccumulationCS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      if ((`FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FSSDSpatialAccu;
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ =
             Freeze::DefaultToString;
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FSSDSpatialAccumulationCS,0>::Do;
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer.
        _0_8_ = u_BASE;
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x2a] = '\x04';
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer.
        _8_8_ = FGlobalShader::StaticGetTypeLayout();
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer.
        _24_8_ = Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x10] = `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x11] = `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x12] = `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x13] = `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x14] = `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x15] = `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x16] = `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x17] = `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::
             FieldBuffer;
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x20] = '\0';
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x21] = '\0';
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x22] = '\0';
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x23] = '\0';
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x24] = '\x01';
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x25] = '\0';
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x26] = '\0';
        `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x27] = '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FSSDSpatialAccumulationCS,FGlobalShader>'::`2'::
            FieldBuffer._8_8_)->Interface != NonVirtual) {
          `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FSSDSpatialAccumulationCS::GetStaticType'::`2'::StaticType,Global,
                 (FTypeLayoutDesc *)
                 `FSSDSpatialAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FSSDSpatialAccumulationCS",
                 L"/Engine/Private/ScreenSpaceDenoise/SSDSpatialAccumulation.usf",L"MainCS",5,0x280,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FSSDSpatialAccumulationCS::GetStaticType'::`2'::StaticType._0_8_ = FGlobalShaderType::vftable
      ;
      ::FString::FString(&local_28,L"/Engine/Private/ScreenSpaceDenoise/SSDSpatialAccumulation.usf")
      ;
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
      atexit(``anonymous_namespace'::FSSDSpatialAccumulationCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FSSDSpatialAccumulationCS::GetStaticType'::`2'::_TSS0);
      return &`FSSDSpatialAccumulationCS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FSSDSpatialAccumulationCS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 145546df0

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
_anon_457E29A6::FSSDSpatialAccumulationCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 145552760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_457E29A6::FSSDSpatialAccumulationCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  code *pcVar1;
  ESignalProcessing EVar2;
  EStage EVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  TShaderPermutationDomain<_anonymous_namespace_::FSignalProcessingDim,A0x457e29a6::FSSDSpatialAccumulationCS::FStageDim,A0x457e29a6::FSSDSpatialAccumulationCS::FUpscaleDim,A0x457e29a6::FSignalBatchSizeDim,A0x457e29a6::FMultiSPPDim>
  local_48 [3];
  
  TShaderPermutationDomain<`anonymous_namespace'::FSignalProcessingDim,A0x457e29a6::FSSDSpatialAccumulationCS::FStageDim,A0x457e29a6::FSSDSpatialAccumulationCS::FUpscaleDim,A0x457e29a6::FSignalBatchSizeDim,A0x457e29a6::FMultiSPPDim>
  ::
  TShaderPermutationDomain<_anonymous_namespace_::FSignalProcessingDim,A0x457e29a6::FSSDSpatialAccumulationCS::FStageDim,A0x457e29a6::FSSDSpatialAccumulationCS::FUpscaleDim,A0x457e29a6::FSignalBatchSizeDim,A0x457e29a6::FMultiSPPDim>
            (local_48,param_1->PermutationId);
  EVar3 = local_48[0].Tail.DimensionValue;
  EVar2 = local_48[0].DimensionValue;
  if (local_48[0].DimensionValue == ShadowVisibilityMask) {
LAB_14555279e:
    iVar6 = 4;
  }
  else {
    if ((4 < local_48[0].DimensionValue - PolychromaticPenumbraHarmonic) &&
       (1 < local_48[0].DimensionValue - ScreenSpaceDiffuseIndirect)) {
      return false;
    }
    if (local_48[0].DimensionValue == ShadowVisibilityMask) goto LAB_14555279e;
    if ((6 < local_48[0].DimensionValue - PolychromaticPenumbraHarmonic) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScreenSpaceDenoise.cpp"
                           ,0x13c,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    iVar6 = 1;
  }
  if (iVar6 < local_48[0].Tail.Tail.Tail.DimensionValue) {
    return false;
  }
  if (local_48[0].Tail.Tail.DimensionValue == false) {
    if ((EVar2 != ShadowVisibilityMask) && (EVar2 != Reflections)) {
      if (EVar2 == AmbientOcclusion) goto LAB_145552849;
      if ((EVar2 != DiffuseAndAmbientOcclusion) &&
         (local_48[0].Tail.DimensionValue == PreConvolution)) {
        return false;
      }
    }
LAB_145552833:
    if (local_48[0].Tail.DimensionValue == RejectionPreConvolution) {
      return false;
    }
    if (EVar2 == ShadowVisibilityMask) goto LAB_14555284e;
    if ((1 < EVar2 - AmbientOcclusion) && (local_48[0].Tail.DimensionValue == PostFiltering)) {
      return false;
    }
  }
  else {
    if (local_48[0].Tail.DimensionValue != ReConstruction) {
      return false;
    }
    if (EVar2 == Reflections) goto LAB_145552833;
    if (EVar2 != AmbientOcclusion) {
      if (EVar2 != DiffuseAndAmbientOcclusion) {
        return false;
      }
      goto LAB_145552833;
    }
  }
LAB_145552849:
  if (local_48[0].Tail.DimensionValue == FinalOutput) {
    return false;
  }
LAB_14555284e:
  bVar5 = SUB41(local_48[0].Tail.Tail.Tail._4_4_,0);
  if (((local_48[0].Tail.DimensionValue != ReConstruction) || (bVar5 == false)) || (EVar2 < MAX)) {
    local_48[2].Tail.Tail.DimensionValue = local_48[0].Tail.Tail.Tail.Tail.DimensionValue;
    local_48[2].Tail.Tail._1_1_ = local_48[0].Tail.Tail.Tail.Tail.Tail;
    local_48[2].Tail.Tail._2_2_ = local_48[0].Tail.Tail.Tail._6_2_;
    if ((EVar3 != ReConstruction) || (cVar7 = bVar5, EVar2 != DiffuseAndAmbientOcclusion)) {
      cVar7 = '\x01';
    }
    if (((local_48[0].DimensionValue == EVar2) && (EVar3 == local_48[0].Tail.DimensionValue)) &&
       ((bool)cVar7 == bVar5)) {
      bVar5 = ::`anonymous_namespace'::ShouldCompileSignalPipeline(EVar2,param_1->Platform);
      return bVar5;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 145552ca0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_457E29A6::FSSDSpatialAccumulationCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

