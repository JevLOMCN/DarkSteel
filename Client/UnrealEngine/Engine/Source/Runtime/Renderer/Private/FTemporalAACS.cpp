// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// ConstructCompiledInstance @ 1452b96b0

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
_anon_9327CABB::FTemporalAACS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 1452b9fe0

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

FShader * __cdecl _anon_9327CABB::FTemporalAACS::ConstructSerializedInstance(void)

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

// GetStaticType @ 1452c9dc0

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

FGlobalShaderType * __cdecl _anon_9327CABB::FTemporalAACS::GetStaticType(void)

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
              0x9d4c) < `FTemporalAACS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FTemporalAACS::GetStaticType'::`2'::_TSS0);
    if (`FTemporalAACS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      if ((`FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FTemporalAACS;
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ = Freeze::DefaultToString;
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FTemporalAACS,0>::Do;
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer._0_8_ = u_BASE
        ;
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x2a] = '\x04'
        ;
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer._8_8_ =
             FGlobalShader::StaticGetTypeLayout();
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer._24_8_ =
             Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x10] =
             `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x11] =
             `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x12] =
             `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x13] =
             `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x14] =
             `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x15] =
             `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x16] =
             `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x17] =
             `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer;
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x20] = '\0';
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x21] = '\0';
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x22] = '\0';
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x23] = '\0';
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x24] = '\x01'
        ;
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x25] = '\0';
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x26] = '\0';
        `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FTemporalAACS,FGlobalShader>'::`2'::FieldBuffer._8_8_)->
            Interface != NonVirtual) {
          `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)`FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FTemporalAACS::GetStaticType'::`2'::StaticType,Global,
                 (FTypeLayoutDesc *)`FTemporalAACS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FTemporalAACS",L"/Engine/Private/TemporalAA.usf",L"MainCS",5,0x200,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FTemporalAACS::GetStaticType'::`2'::StaticType._0_8_ = FGlobalShaderType::vftable;
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
      atexit(``anonymous_namespace'::FTemporalAACS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FTemporalAACS::GetStaticType'::`2'::_TSS0);
      return &`FTemporalAACS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FTemporalAACS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 1452ce190

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
_anon_9327CABB::FTemporalAACS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutation @ 1452d42d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_9327CABB::FTemporalAACS::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  ETAAQuality EStack_40;
  TShaderPermutationDomain<_anonymous_namespace_::FTemporalAA::FTAAQualityDim,A0x9327cabb::FTemporalAA::FTAAScreenPercentageDim,A0x9327cabb::FTemporalAACS::FTAADownsampleDim>
  aTStack_20 [2];
  
  uVar1 = *(uint *)&param_1->field_0x4;
  uVar6 = uVar1 & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  if (((uVar6 != 0) && (uVar6 != 1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = uVar6 == 1;
  uVar6 = (int)uVar1 / 2;
  uVar7 = uVar6 & 0x80000007;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
  }
  if (((7 < (int)uVar7) || ((int)uVar7 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  TShaderPermutationDomain<`anonymous_namespace'::FTemporalAA::FTAAQualityDim,A0x9327cabb::FTemporalAA::FTAAScreenPercentageDim,A0x9327cabb::FTemporalAACS::FTAADownsampleDim>
  ::
  TShaderPermutationDomain<_anonymous_namespace_::FTemporalAA::FTAAQualityDim,A0x9327cabb::FTemporalAA::FTAAScreenPercentageDim,A0x9327cabb::FTemporalAACS::FTAADownsampleDim>
            (aTStack_20,(int)(((int)uVar6 >> 0x1f & 7U) + uVar6) >> 3);
  if ((0xff < uVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((0x1ff < uVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  EStack_40 = aTStack_20[0].DimensionValue;
  bVar5 = bVar3;
  if (uVar7 < 2) {
    cVar8 = aTStack_20[0].Tail.Tail.DimensionValue;
    if (aTStack_20[0].DimensionValue == High) {
      cVar8 = '\0';
    }
    if (uVar7 < 2) goto LAB_1452d448c;
  }
  else if (uVar7 - 5 < 2) {
    EStack_40 = Medium;
    if (Medium < aTStack_20[0].DimensionValue) {
      EStack_40 = aTStack_20[0].DimensionValue;
    }
    cVar8 = '\0';
  }
  else {
    EStack_40 = High;
    cVar8 = '\0';
  }
  if (uVar7 != 2) {
    bVar5 = uVar7 - 5 < 2 && bVar3;
  }
LAB_1452d448c:
  if ((((bVar3 == bVar5) && (aTStack_20[0].DimensionValue == EStack_40)) &&
      (aTStack_20[0].Tail.Tail.DimensionValue == (bool)cVar8)) &&
     ((((uVar7 - 1 & 0xfffffffa) == 0 && (uVar7 != 5)) || (aTStack_20[0].Tail.DimensionValue == 0)))
     ) {
    if (uVar7 == 2) {
      bVar3 = ::`anonymous_namespace'::DoesPlatformSupportTemporalHistoryUpscale
                        (*(EShaderPlatform *)param_1);
      bVar3 = !bVar3;
    }
    else {
      bVar3 = aTStack_20[0].Tail.DimensionValue == 3;
    }
    if ((!bVar3) &&
       ((bVar3 = IsMobilePlatform((FStaticShaderPlatform)*(EShaderPlatform *)param_1), !bVar3 ||
        ((uVar7 < 2 && (aTStack_20[0].Tail.Tail.DimensionValue == false)))))) {
      bVar3 = SupportsGen4TAA((FStaticShaderPlatform)*(EShaderPlatform *)param_1);
      return bVar3;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 1452d4e60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_9327CABB::FTemporalAACS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  ETAAQuality EStack_40;
  TShaderPermutationDomain<_anonymous_namespace_::FTemporalAA::FTAAQualityDim,A0x9327cabb::FTemporalAA::FTAAScreenPercentageDim,A0x9327cabb::FTemporalAACS::FTAADownsampleDim>
  aTStack_20 [2];
  
  uVar1 = param_1->PermutationId;
  uVar6 = uVar1 & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  if (((uVar6 != 0) && (uVar6 != 1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = uVar6 == 1;
  uVar6 = (int)uVar1 / 2;
  uVar7 = uVar6 & 0x80000007;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
  }
  if (((7 < (int)uVar7) || ((int)uVar7 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  TShaderPermutationDomain<`anonymous_namespace'::FTemporalAA::FTAAQualityDim,A0x9327cabb::FTemporalAA::FTAAScreenPercentageDim,A0x9327cabb::FTemporalAACS::FTAADownsampleDim>
  ::
  TShaderPermutationDomain<_anonymous_namespace_::FTemporalAA::FTAAQualityDim,A0x9327cabb::FTemporalAA::FTAAScreenPercentageDim,A0x9327cabb::FTemporalAACS::FTAADownsampleDim>
            (aTStack_20,(int)(((int)uVar6 >> 0x1f & 7U) + uVar6) >> 3);
  if ((0xff < uVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((0x1ff < uVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  EStack_40 = aTStack_20[0].DimensionValue;
  bVar5 = bVar3;
  if (uVar7 < 2) {
    cVar8 = aTStack_20[0].Tail.Tail.DimensionValue;
    if (aTStack_20[0].DimensionValue == High) {
      cVar8 = '\0';
    }
    if (uVar7 < 2) goto LAB_1452d448c;
  }
  else if (uVar7 - 5 < 2) {
    EStack_40 = Medium;
    if (Medium < aTStack_20[0].DimensionValue) {
      EStack_40 = aTStack_20[0].DimensionValue;
    }
    cVar8 = '\0';
  }
  else {
    EStack_40 = High;
    cVar8 = '\0';
  }
  if (uVar7 != 2) {
    bVar5 = uVar7 - 5 < 2 && bVar3;
  }
LAB_1452d448c:
  if ((((bVar3 == bVar5) && (aTStack_20[0].DimensionValue == EStack_40)) &&
      (aTStack_20[0].Tail.Tail.DimensionValue == (bool)cVar8)) &&
     ((((uVar7 - 1 & 0xfffffffa) == 0 && (uVar7 != 5)) || (aTStack_20[0].Tail.DimensionValue == 0)))
     ) {
    if (uVar7 == 2) {
      bVar3 = ::`anonymous_namespace'::DoesPlatformSupportTemporalHistoryUpscale(param_1->Platform);
      bVar3 = !bVar3;
    }
    else {
      bVar3 = aTStack_20[0].Tail.DimensionValue == 3;
    }
    if ((!bVar3) &&
       ((bVar3 = IsMobilePlatform((FStaticShaderPlatform)param_1->Platform), !bVar3 ||
        ((uVar7 < 2 && (aTStack_20[0].Tail.Tail.DimensionValue == false)))))) {
      bVar3 = SupportsGen4TAA((FStaticShaderPlatform)param_1->Platform);
      return bVar3;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 1452d55d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_9327CABB::FTemporalAACS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

