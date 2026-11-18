// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// ConstructCompiledInstance @ 14513cd90

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
_anon_85C081EE::FDiaphragmDOFGatherCS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 14513dc80

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

FShader * __cdecl _anon_85C081EE::FDiaphragmDOFGatherCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 145150310

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

FGlobalShaderType * __cdecl _anon_85C081EE::FDiaphragmDOFGatherCS::GetStaticType(void)

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
              0x9d4c) < `FDiaphragmDOFGatherCS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FDiaphragmDOFGatherCS::GetStaticType'::`2'::_TSS0);
    if (`FDiaphragmDOFGatherCS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      if ((`FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FDiaphragmDOFGa;
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ =
             Freeze::DefaultToString;
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FDiaphragmDOFGatherCS,0>::Do;
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer._0_8_
             = u_BASE;
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x2a]
             = '\x04';
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer._8_8_
             = FGlobalShader::StaticGetTypeLayout();
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer._24_8_
             = Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x10]
             = `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x11]
             = `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x12]
             = `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x13]
             = `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x14]
             = `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x15]
             = `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x16]
             = `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x17]
             = `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer;
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x20]
             = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x21]
             = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x22]
             = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x23]
             = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x24]
             = '\x01';
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x25]
             = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x26]
             = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer[0x27]
             = '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FDiaphragmDOFGatherCS,FGlobalShader>'::`2'::FieldBuffer.
            _8_8_)->Interface != NonVirtual) {
          `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)`FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer)
        ;
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FDiaphragmDOFGatherCS::GetStaticType'::`2'::StaticType,Global,
                 (FTypeLayoutDesc *)`FDiaphragmDOFGatherCS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FDiaphragmDOFGatherCS",L"/Engine/Private/DiaphragmDOF/DOFGatherPass.usf",
                 L"GatherMainCS",5,0x2d0,ConstructSerializedInstance,ConstructCompiledInstance,
                 ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FDiaphragmDOFGatherCS::GetStaticType'::`2'::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/DiaphragmDOF/DOFGatherPass.usf");
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
      atexit(``anonymous_namespace'::FDiaphragmDOFGatherCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FDiaphragmDOFGatherCS::GetStaticType'::`2'::_TSS0);
      return &`FDiaphragmDOFGatherCS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FDiaphragmDOFGatherCS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 145159e60

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
_anon_85C081EE::FDiaphragmDOFGatherCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutation @ 145160430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_85C081EE::FDiaphragmDOFGatherCS::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  FStaticShaderPlatform FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  EDiaphragmDOFBokehSimulation EVar6;
  TShaderPermutationDomain<_anonymous_namespace_::FDiaphragmDOFShader::FAlphaChannelDim,A0x85c081ee::FDDOFLayerProcessingDim,A0x85c081ee::FDDOFGatherRingCountDim,A0x85c081ee::FDDOFBokehSimulationDim,A0x85c081ee::FDDOFGatherQualityDim,A0x85c081ee::FDDOFRGBColorBufferDim>
  local_68;
  TShaderPermutationDomain<_anonymous_namespace_::FDiaphragmDOFShader::FAlphaChannelDim,A0x85c081ee::FDDOFLayerProcessingDim,A0x85c081ee::FDDOFGatherRingCountDim,A0x85c081ee::FDDOFBokehSimulationDim,A0x85c081ee::FDDOFGatherQualityDim,A0x85c081ee::FDDOFRGBColorBufferDim>
  local_48;
  
  TShaderPermutationDomain<`anonymous_namespace'::FDiaphragmDOFShader::FAlphaChannelDim,A0x85c081ee::FDDOFLayerProcessingDim,A0x85c081ee::FDDOFGatherRingCountDim,A0x85c081ee::FDDOFBokehSimulationDim,A0x85c081ee::FDDOFGatherQualityDim,A0x85c081ee::FDDOFRGBColorBufferDim>
  ::
  TShaderPermutationDomain<_anonymous_namespace_::FDiaphragmDOFShader::FAlphaChannelDim,A0x85c081ee::FDDOFLayerProcessingDim,A0x85c081ee::FDDOFGatherRingCountDim,A0x85c081ee::FDDOFBokehSimulationDim,A0x85c081ee::FDDOFGatherQualityDim,A0x85c081ee::FDDOFRGBColorBufferDim>
            (&local_68,*(int *)&param_1->field_0x4);
  local_48.DimensionValue = local_68.DimensionValue;
  local_48._1_3_ = local_68._1_3_;
  local_48.Tail.DimensionValue = local_68.Tail.DimensionValue;
  local_48.Tail.Tail.DimensionValue = local_68.Tail.Tail.DimensionValue;
  local_48.Tail.Tail.Tail.DimensionValue = local_68.Tail.Tail.Tail.DimensionValue;
  EVar6 = local_68.Tail.Tail.Tail.DimensionValue;
  if (local_68.Tail.Tail.Tail.DimensionValue == SimmetricBokeh) {
    EVar6 = GenericBokeh;
  }
  if (EVar6 == local_68.Tail.Tail.Tail.DimensionValue) {
    uVar1 = *(ushort *)param_1;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xf4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((int)(FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bIsPC + 4) <
        local_68.Tail.Tail.DimensionValue) {
      return false;
    }
    if (local_68.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      FVar2.Platform = *(EShaderPlatform *)param_1;
      bVar4 = IsPostProcessingWithAlphaChannelSupported();
      if (bVar4) {
        return false;
      }
      bVar4 = FGenericDataDrivenShaderPlatformInfo::GetSupportsRGBColorBuffer(FVar2);
      if (!bVar4) {
        return false;
      }
    }
    uVar1 = *(ushort *)param_1;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x29e,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bSupportsDOFHybridScattering == 0) &&
       (local_68.Tail.Tail.Tail.Tail.DimensionValue == HighQualityWithHybridScatterOcclusion)) {
      return false;
    }
    uVar1 = *(ushort *)param_1;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xf4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bIsPC == 0) &&
       (local_68.Tail.Tail.Tail.DimensionValue != Disabled)) {
      return false;
    }
    if (local_68.Tail.DimensionValue == ForegroundOnly) {
      bVar4 = local_68.Tail.Tail.Tail.Tail.DimensionValue == HighQualityWithHybridScatterOcclusion;
    }
    else {
      if (local_68.Tail.DimensionValue == ForegroundHoleFilling) {
        if (((local_68.Tail.Tail.Tail.Tail.DimensionValue & ~Cinematic) == LowQualityAccumulator) &&
           (local_68.Tail.Tail.Tail.Tail.DimensionValue != HighQuality)) {
          return false;
        }
        if (local_68.Tail.Tail.Tail.DimensionValue != Disabled) {
          return false;
        }
        if (local_68.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
          return false;
        }
        goto LAB_1451606ec;
      }
      if (local_68.Tail.DimensionValue == SlightOutOfFocus) {
        if (((local_68.Tail.Tail.Tail.Tail.DimensionValue & ~Cinematic) == LowQualityAccumulator) &&
           (local_68.Tail.Tail.Tail.Tail.DimensionValue != HighQuality)) {
          return false;
        }
        if (local_68.Tail.Tail.DimensionValue != 3) {
          return false;
        }
        if (local_68.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
          return false;
        }
        bVar4 = FDiaphragmDOFShader::ShouldCompilePermutation(param_1);
        return bVar4;
      }
      if (local_68.Tail.DimensionValue != BackgroundOnly) {
        if (local_68.Tail.DimensionValue == ForegroundAndBackground) {
          return false;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\DiaphragmDOF.cpp"
                           ,0x48b,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        goto LAB_1451606ec;
      }
      bVar4 = local_68.Tail.Tail.Tail.Tail.DimensionValue == HighQuality;
    }
    if (!bVar4) {
      if (local_68.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) {
LAB_1451606ec:
        bVar4 = FDiaphragmDOFShader::ShouldCompilePermutation(param_1);
        return bVar4;
      }
      if (local_68.Tail.Tail.Tail.Tail.DimensionValue == LowQualityAccumulator) {
        bVar4 = FDiaphragmDOFShader::ShouldCompilePermutation(param_1);
        return bVar4;
      }
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 145160d30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_85C081EE::FDiaphragmDOFGatherCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  FStaticShaderPlatform FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  EDiaphragmDOFBokehSimulation EVar6;
  TShaderPermutationDomain<_anonymous_namespace_::FDiaphragmDOFShader::FAlphaChannelDim,A0x85c081ee::FDDOFLayerProcessingDim,A0x85c081ee::FDDOFGatherRingCountDim,A0x85c081ee::FDDOFBokehSimulationDim,A0x85c081ee::FDDOFGatherQualityDim,A0x85c081ee::FDDOFRGBColorBufferDim>
  TStack_68;
  TShaderPermutationDomain<_anonymous_namespace_::FDiaphragmDOFShader::FAlphaChannelDim,A0x85c081ee::FDDOFLayerProcessingDim,A0x85c081ee::FDDOFGatherRingCountDim,A0x85c081ee::FDDOFBokehSimulationDim,A0x85c081ee::FDDOFGatherQualityDim,A0x85c081ee::FDDOFRGBColorBufferDim>
  TStack_48;
  
  TShaderPermutationDomain<`anonymous_namespace'::FDiaphragmDOFShader::FAlphaChannelDim,A0x85c081ee::FDDOFLayerProcessingDim,A0x85c081ee::FDDOFGatherRingCountDim,A0x85c081ee::FDDOFBokehSimulationDim,A0x85c081ee::FDDOFGatherQualityDim,A0x85c081ee::FDDOFRGBColorBufferDim>
  ::
  TShaderPermutationDomain<_anonymous_namespace_::FDiaphragmDOFShader::FAlphaChannelDim,A0x85c081ee::FDDOFLayerProcessingDim,A0x85c081ee::FDDOFGatherRingCountDim,A0x85c081ee::FDDOFBokehSimulationDim,A0x85c081ee::FDDOFGatherQualityDim,A0x85c081ee::FDDOFRGBColorBufferDim>
            (&TStack_68,param_1->PermutationId);
  TStack_48.DimensionValue = TStack_68.DimensionValue;
  TStack_48._1_3_ = TStack_68._1_3_;
  TStack_48.Tail.DimensionValue = TStack_68.Tail.DimensionValue;
  TStack_48.Tail.Tail.DimensionValue = TStack_68.Tail.Tail.DimensionValue;
  TStack_48.Tail.Tail.Tail.DimensionValue = TStack_68.Tail.Tail.Tail.DimensionValue;
  EVar6 = TStack_68.Tail.Tail.Tail.DimensionValue;
  if (TStack_68.Tail.Tail.Tail.DimensionValue == SimmetricBokeh) {
    EVar6 = GenericBokeh;
  }
  if (EVar6 == TStack_68.Tail.Tail.Tail.DimensionValue) {
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xf4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((int)(FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bIsPC + 4) <
        TStack_68.Tail.Tail.DimensionValue) {
      return false;
    }
    if (TStack_68.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      FVar2.Platform = param_1->Platform;
      bVar4 = IsPostProcessingWithAlphaChannelSupported();
      if (bVar4) {
        return false;
      }
      bVar4 = FGenericDataDrivenShaderPlatformInfo::GetSupportsRGBColorBuffer(FVar2);
      if (!bVar4) {
        return false;
      }
    }
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x29e,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsDOFHybridScattering == 0) &&
       (TStack_68.Tail.Tail.Tail.Tail.DimensionValue == HighQualityWithHybridScatterOcclusion)) {
      return false;
    }
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xf4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bIsPC == 0) &&
       (TStack_68.Tail.Tail.Tail.DimensionValue != Disabled)) {
      return false;
    }
    if (TStack_68.Tail.DimensionValue == ForegroundOnly) {
      bVar4 = TStack_68.Tail.Tail.Tail.Tail.DimensionValue == HighQualityWithHybridScatterOcclusion;
    }
    else {
      if (TStack_68.Tail.DimensionValue == ForegroundHoleFilling) {
        if (((TStack_68.Tail.Tail.Tail.Tail.DimensionValue & ~Cinematic) == LowQualityAccumulator)
           && (TStack_68.Tail.Tail.Tail.Tail.DimensionValue != HighQuality)) {
          return false;
        }
        if (TStack_68.Tail.Tail.Tail.DimensionValue != Disabled) {
          return false;
        }
        if (TStack_68.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
          return false;
        }
        goto LAB_1451606ec;
      }
      if (TStack_68.Tail.DimensionValue == SlightOutOfFocus) {
        if (((TStack_68.Tail.Tail.Tail.Tail.DimensionValue & ~Cinematic) == LowQualityAccumulator)
           && (TStack_68.Tail.Tail.Tail.Tail.DimensionValue != HighQuality)) {
          return false;
        }
        if (TStack_68.Tail.Tail.DimensionValue != 3) {
          return false;
        }
        if (TStack_68.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
          return false;
        }
        bVar4 = FDiaphragmDOFShader::ShouldCompilePermutation
                          ((FGlobalShaderPermutationParameters *)param_1);
        return bVar4;
      }
      if (TStack_68.Tail.DimensionValue != BackgroundOnly) {
        if (TStack_68.Tail.DimensionValue == ForegroundAndBackground) {
          return false;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\DiaphragmDOF.cpp"
                           ,0x48b,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        goto LAB_1451606ec;
      }
      bVar4 = TStack_68.Tail.Tail.Tail.Tail.DimensionValue == HighQuality;
    }
    if (!bVar4) {
      if (TStack_68.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) {
LAB_1451606ec:
        bVar4 = FDiaphragmDOFShader::ShouldCompilePermutation
                          ((FGlobalShaderPermutationParameters *)param_1);
        return bVar4;
      }
      if (TStack_68.Tail.Tail.Tail.Tail.DimensionValue == LowQualityAccumulator) {
        bVar4 = FDiaphragmDOFShader::ShouldCompilePermutation
                          ((FGlobalShaderPermutationParameters *)param_1);
        return bVar4;
      }
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 145161c20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_85C081EE::FDiaphragmDOFGatherCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

