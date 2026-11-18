// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ConstructCompiledInstance @ 14513ce10

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
_anon_85C081EE::FDiaphragmDOFHybridScatterPS::ConstructCompiledInstance
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
    pFVar3 = FDOFHybridScatterParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              (&this->Bindings,this,iVar1,pFVar2,pFVar3,true);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14513dcd0

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

FShader * __cdecl _anon_85C081EE::FDiaphragmDOFHybridScatterPS::ConstructSerializedInstance(void)

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

// GetStaticType @ 145150640

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

FGlobalShaderType * __cdecl _anon_85C081EE::FDiaphragmDOFHybridScatterPS::GetStaticType(void)

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
              0x9d4c) < `FDiaphragmDOFHybridScatterPS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FDiaphragmDOFHybridScatterPS::GetStaticType'::`2'::_TSS0);
    if (`FDiaphragmDOFHybridScatterPS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FDOFHybridScatterParameters::FTypeInfo::GetStructMetadata();
      if ((`FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ =
             u_FDiaphragmDOFHy;
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ =
             Freeze::DefaultToString;
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ =
             InternalDestroy;
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FDiaphragmDOFHybridScatterPS,0>::Do;
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        ._0_8_ = u_BASE;
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x2a] = '\x04';
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        ._8_8_ = FGlobalShader::StaticGetTypeLayout();
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        ._24_8_ = Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x10] = `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x11] = `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x12] = `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x13] = `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x14] = `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x15] = `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x16] = `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x17] = `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::
             FieldBuffer;
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x20] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x21] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x22] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x23] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x24] = '\x01';
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x25] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x26] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::FieldBuffer
        [0x27] = '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FDiaphragmDOFHybridScatterPS,FGlobalShader>'::`2'::
            FieldBuffer._8_8_)->Interface != NonVirtual) {
          `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FDiaphragmDOFHybridScatterPS::GetStaticType'::`2'::StaticType,
                 Global,(FTypeLayoutDesc *)
                        `FDiaphragmDOFHybridScatterPS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FDiaphragmDOFHybridScatterPS",
                 L"/Engine/Private/DiaphragmDOF/DOFHybridScatterPixelShader.usf",L"ScatterMainPS",3,
                 0x28,ConstructSerializedInstance,ConstructCompiledInstance,
                 ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FDiaphragmDOFHybridScatterPS::GetStaticType'::`2'::StaticType._0_8_ =
           FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/DiaphragmDOF/DOFHybridScatterPixelShader.usf");
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
      atexit(``anonymous_namespace'::FDiaphragmDOFHybridScatterPS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FDiaphragmDOFHybridScatterPS::GetStaticType'::`2'::_TSS0);
      return &`FDiaphragmDOFHybridScatterPS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FDiaphragmDOFHybridScatterPS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 145159ea0

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
_anon_85C081EE::FDiaphragmDOFHybridScatterPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 145160d40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_85C081EE::FDiaphragmDOFHybridScatterPS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  TShaderPermutationDomain<_anonymous_namespace_::FDiaphragmDOFHybridScatterPS::FBokehSimulationDim,A0x85c081ee::FDDOFScatterOcclusionDim,A0x85c081ee::FDDOFScatterQualityDim>
  TStack_24;
  
  EVar1 = param_1->Platform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x29e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsDOFHybridScattering != 0) {
    uVar5 = param_1->PermutationId;
    uVar6 = (int)uVar5 % 5;
    if (((4 < (int)uVar6) || ((int)uVar6 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PermutationId < PermutationCount && PermutationId >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x77,L"Invalid shader permutation dimension value id %i."), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    TShaderPermutationDomain<`anonymous_namespace'::FDiaphragmDOFHybridScatterPS::FBokehSimulationDim,A0x85c081ee::FDDOFScatterOcclusionDim,A0x85c081ee::FDDOFScatterQualityDim>
    ::
    TShaderPermutationDomain<_anonymous_namespace_::FDiaphragmDOFHybridScatterPS::FBokehSimulationDim,A0x85c081ee::FDDOFScatterOcclusionDim,A0x85c081ee::FDDOFScatterQualityDim>
              (&TStack_24,(int)uVar5 / 5);
    if ((0x27 < uVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PermutationId >= 0 && PermutationId < PermutationCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x188,L"Invalid shader permutation id %i."), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar5 = uVar6;
    if ((uVar6 == 2) && (TStack_24.DimensionValue == false)) {
      uVar5 = 0;
    }
    if (((uVar5 == uVar6) && ((uVar6 & 0xfffffffd) == 0)) &&
       (TStack_24.Tail.Tail.DimensionValue < MAX)) {
      bVar3 = FDiaphragmDOFShader::ShouldCompilePermutation
                        ((FGlobalShaderPermutationParameters *)param_1);
      return bVar3;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 145161c30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_85C081EE::FDiaphragmDOFHybridScatterPS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

