// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// AddMegaLightRayTracingDispatchIndirect @ 144ef6da0

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

void __cdecl
FHardwareRayTraceLightSamplesRGS::AddMegaLightRayTracingDispatchIndirect
          (FRDGBuilder *param_1,FRDGEventName *param_2,FViewInfo *param_3,
          TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
          *param_4,FParameters *param_5,FRDGBuffer *param_6,uint param_7,bool param_8,
          ERDGPassFlags param_9)

{
  TShaderRefBase<FHardwareRayTraceLightSamplesRGS,FShaderMapPointerTable> local_18;
  
  FGlobalShaderMap::GetShader<FHardwareRayTraceLightSamplesRGS>
            (param_3->ShaderMap,&local_18,param_4);
  AddStochasticLightingRayTraceDispatchIndirectPass<FHardwareRayTraceLightSamplesRGS>
            (param_1,param_2,&local_18,param_5,&(param_5->MegaLightsParameters).Scene,
             &param_5->NaniteRayTracing,param_6,param_7,param_3,param_8,param_9);
  return;
}

// ConstructCompiledInstance @ 144efdf20

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
FHardwareRayTraceLightSamplesRGS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    FLumenHardwareRayTracingShaderBase::FLumenHardwareRayTracingShaderBase
              ((FLumenHardwareRayTracingShaderBase *)this,param_1);
    FShaderParameterBindings::BindForRootShaderParameters
              (&this->Bindings,this,param_1->PermutationId,param_1->ParameterMap);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144efea10

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

FShader * __cdecl FHardwareRayTraceLightSamplesRGS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    memset(this,0,0xe0);
    FLumenHardwareRayTracingShaderBase::FLumenHardwareRayTracingShaderBase
              ((FLumenHardwareRayTracingShaderBase *)this);
    return this;
  }
  return (FShader *)0x0;
}

// GetShaderBindingLayout @ 144f13580

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderBindingLayout * __cdecl
FHardwareRayTraceLightSamplesRGS::GetShaderBindingLayout(FShaderPermutationParameters *param_1)

{
  FShaderBindingLayout *pFVar1;
  
  pFVar1 = RayTracing::GetShaderBindingLayout(param_1->Platform);
  return pFVar1;
}

// GetStaticType @ 144f15470

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

FGlobalShaderType * __cdecl FHardwareRayTraceLightSamplesRGS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderParametersMetadata *pFVar4;
  FTypeLayoutDesc *pFVar5;
  FString *pFVar6;
  FGlobalShaderType *pFVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = FHardwareRayTraceLightSamples::FParameters::FTypeInfo::GetStructMetadata();
      pFVar5 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar5,L"FHardwareRayTraceLightSamplesRGS",
                 L"/Engine/Private/MegaLights/MegaLightsHardwareRayTracing.usf",
                 L"HardwareRayTraceLightSamplesRGS",6,0x800,ConstructSerializedInstance,
                 ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,
                 FHardwareRayTraceLightSamples::GetRayTracingPayloadType,GetShaderBindingLayout,0xe0
                 ,pFVar4);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/MegaLights/MegaLightsHardwareRayTracing.usf");
      pFVar6 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar8,L"usf");
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
          pFVar7 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar7;
        }
      }
      atexit(`FHardwareRayTraceLightSamplesRGS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144f19e50

FTypeLayoutDesc * __thiscall
FHardwareRayTraceLightSamplesRGS::GetTypeLayout(FHardwareRayTraceLightSamplesRGS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FHardwareRayTra;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FHardwareRayTraceLightSamplesRGS,0>::Do;
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
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
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

// InternalDestroy @ 144f1c500

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
FHardwareRayTraceLightSamplesRGS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 144f2b370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FHardwareRayTraceLightSamplesRGS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  bool bVar1;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
  local_18;
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
            (&local_18,param_1->PermutationId);
  if (local_18.DimensionValue.DimensionValue != false) {
    return false;
  }
  bVar1 = FHardwareRayTraceLightSamples::ShouldCompilePermutation
                    ((FGlobalShaderPermutationParameters *)param_1,RayGen);
  return bVar1;
}

// ShouldPrecachePermutationImpl @ 144f2c360

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FHardwareRayTraceLightSamplesRGS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  TConsoleVariableData<bool> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
  TStack_18;
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
            (&TStack_18,param_1->PermutationId);
  pTVar1 = CVarMegaLightsHardwareRayTracingForceTwoSided.Ref;
  if (TStack_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
    return NotPrecached;
  }
  bVar3 = IsInParallelGameThread();
  lVar5 = 0;
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar4 = 1;
    if (!bVar3) goto LAB_144f2baf5;
  }
  lVar4 = lVar5;
LAB_144f2baf5:
  pTVar2 = CVarMegaLightsHardwareRayTracingFarField.Ref;
  if (TStack_18.Tail.Tail.Tail.Tail.Tail.DimensionValue == (pTVar1->ShadowedValue[lVar4] != false))
  {
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      lVar5 = 4;
    }
    if (TStack_18.Tail.Tail.Tail.Tail.DimensionValue ==
        (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) != 0)) {
      if (TStack_18.Tail.DimensionValue != false) {
        return Precached;
      }
      return TStack_18.Tail.Tail.Tail.DimensionValue != false;
    }
  }
  return NotPrecached;
}

// StaticGetTypeLayout @ 144f2d530

FTypeLayoutDesc * __cdecl FHardwareRayTraceLightSamplesRGS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FHardwareRayTra;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FHardwareRayTraceLightSamplesRGS,0>::Do;
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
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
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

