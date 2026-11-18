// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ConstructCompiledInstance @ 1452b9730

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
_anon_9327CABB::FTemporalAAPS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 1452ba030

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

FShader * __cdecl _anon_9327CABB::FTemporalAAPS::ConstructSerializedInstance(void)

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

// GetStaticType @ 1452ca0f0

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

FGlobalShaderType * __cdecl _anon_9327CABB::FTemporalAAPS::GetStaticType(void)

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
              0x9d4c) < `FTemporalAAPS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FTemporalAAPS::GetStaticType'::`2'::_TSS0);
    if (`FTemporalAAPS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      if ((`FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FTemporalAAPS;
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ = Freeze::DefaultToString;
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FTemporalAAPS,0>::Do;
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer._0_8_ = u_BASE
        ;
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x2a] = '\x04'
        ;
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer._8_8_ =
             FGlobalShader::StaticGetTypeLayout();
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer._24_8_ =
             Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x10] =
             `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x11] =
             `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x12] =
             `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x13] =
             `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x14] =
             `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x15] =
             `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x16] =
             `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x17] =
             `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer;
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x20] = '\0';
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x21] = '\0';
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x22] = '\0';
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x23] = '\0';
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x24] = '\x01'
        ;
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x25] = '\0';
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x26] = '\0';
        `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FTemporalAAPS,FGlobalShader>'::`2'::FieldBuffer._8_8_)->
            Interface != NonVirtual) {
          `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)`FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FTemporalAAPS::GetStaticType'::`2'::StaticType,Global,
                 (FTypeLayoutDesc *)`FTemporalAAPS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FTemporalAAPS",L"/Engine/Private/TemporalAA.usf",L"MainPS",3,0x100,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FTemporalAAPS::GetStaticType'::`2'::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/TemporalAA.usf");
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
      atexit(``anonymous_namespace'::FTemporalAAPS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FTemporalAAPS::GetStaticType'::`2'::_TSS0);
      return &`FTemporalAAPS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FTemporalAAPS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 1452ce1d0

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
_anon_9327CABB::FTemporalAAPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 1452d4e70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_9327CABB::FTemporalAAPS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  TShaderPermutationDomain<_anonymous_namespace_::FTemporalAA::FTAAPassConfigDim,A0x9327cabb::FTemporalAA::FTAAQualityDim,A0x9327cabb::FTemporalAA::FTAAScreenPercentageDim>
  TStack_24;
  
  uVar1 = param_1->PermutationId;
  iVar6 = (int)uVar1 % 2;
  if (((iVar6 != 0) && (iVar6 != 1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = iVar6 == 1;
  TShaderPermutationDomain<`anonymous_namespace'::FTemporalAA::FTAAPassConfigDim,A0x9327cabb::FTemporalAA::FTAAQualityDim,A0x9327cabb::FTemporalAA::FTAAScreenPercentageDim>
  ::
  TShaderPermutationDomain<_anonymous_namespace_::FTemporalAA::FTAAPassConfigDim,A0x9327cabb::FTemporalAA::FTAAQualityDim,A0x9327cabb::FTemporalAA::FTAAScreenPercentageDim>
            (&TStack_24,(int)uVar1 / 2);
  if ((0xff < uVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar5 = bVar3;
  if (MainSuperSampling < TStack_24.DimensionValue) {
    bVar5 = TStack_24.DimensionValue - DiaphragmDOF < 2 && bVar3;
  }
  if (((bVar3 == bVar5) &&
      (bVar3 = IsMobilePlatform((FStaticShaderPlatform)param_1->Platform), bVar3)) &&
     ((((TStack_24.DimensionValue - MainUpsampling & 0xfffffffa) == 0 &&
       (TStack_24.DimensionValue != DiaphragmDOF)) || (TStack_24.Tail.Tail.DimensionValue == 0)))) {
    if (TStack_24.DimensionValue == MainSuperSampling) {
      ::`anonymous_namespace'::DoesPlatformSupportTemporalHistoryUpscale(param_1->Platform);
    }
    else if ((TStack_24.Tail.Tail.DimensionValue != 3) &&
            (TStack_24.DimensionValue < MainSuperSampling)) {
      bVar3 = SupportsGen4TAA((FStaticShaderPlatform)param_1->Platform);
      return bVar3;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 1452d55e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_9327CABB::FTemporalAAPS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

