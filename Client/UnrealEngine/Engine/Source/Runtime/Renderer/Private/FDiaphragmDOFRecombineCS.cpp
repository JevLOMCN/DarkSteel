// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ConstructCompiledInstance @ 14513cf90

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
_anon_85C081EE::FDiaphragmDOFRecombineCS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 14513ddc0

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

FShader * __cdecl _anon_85C081EE::FDiaphragmDOFRecombineCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 145150fd0

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

FGlobalShaderType * __cdecl _anon_85C081EE::FDiaphragmDOFRecombineCS::GetStaticType(void)

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
              0x9d4c) < `FDiaphragmDOFRecombineCS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FDiaphragmDOFRecombineCS::GetStaticType'::`2'::_TSS0);
    if (`FDiaphragmDOFRecombineCS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      if ((`FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FDiaphragmDOFRe;
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ =
             Freeze::DefaultToString;
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FDiaphragmDOFRecombineCS,0>::Do;
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer.
        _0_8_ = u_BASE;
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x2a] = '\x04';
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer.
        _8_8_ = FGlobalShader::StaticGetTypeLayout();
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer.
        _24_8_ = Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x10] = `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x11] = `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x12] = `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x13] = `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x14] = `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x15] = `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x16] = `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x17] = `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::
             FieldBuffer;
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x20] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x21] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x22] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x23] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x24] = '\x01';
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x25] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x26] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
        [0x27] = '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FDiaphragmDOFRecombineCS,FGlobalShader>'::`2'::FieldBuffer
            ._8_8_)->Interface != NonVirtual) {
          `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   `FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FDiaphragmDOFRecombineCS::GetStaticType'::`2'::StaticType,Global,
                 (FTypeLayoutDesc *)`FDiaphragmDOFRecombineCS::StaticGetTypeLayout'::`2'::TypeBuffer
                 ,L"FDiaphragmDOFRecombineCS",L"/Engine/Private/DiaphragmDOF/DOFRecombine.usf",
                 L"RecombineMainCS",5,0x5a,ConstructSerializedInstance,ConstructCompiledInstance,
                 ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FDiaphragmDOFRecombineCS::GetStaticType'::`2'::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/DiaphragmDOF/DOFRecombine.usf");
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
      atexit(``anonymous_namespace'::FDiaphragmDOFRecombineCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FDiaphragmDOFRecombineCS::GetStaticType'::`2'::_TSS0);
      return &`FDiaphragmDOFRecombineCS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FDiaphragmDOFRecombineCS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 145159f60

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
_anon_85C081EE::FDiaphragmDOFRecombineCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 1451610d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_85C081EE::FDiaphragmDOFRecombineCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TShaderPermutationDomain<_anonymous_namespace_::FDDOFLayerProcessingDim,A0x85c081ee::FDDOFBokehSimulationDim,A0x85c081ee::FDiaphragmDOFRecombineCS::FQualityDim>
  local_24;
  
  uVar2 = param_1->PermutationId;
  if ((((int)uVar2 % 2 != 0) && ((int)uVar2 % 2 != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  TShaderPermutationDomain<`anonymous_namespace'::FDDOFLayerProcessingDim,A0x85c081ee::FDDOFBokehSimulationDim,A0x85c081ee::FDiaphragmDOFRecombineCS::FQualityDim>
  ::
  TShaderPermutationDomain<_anonymous_namespace_::FDDOFLayerProcessingDim,A0x85c081ee::FDDOFBokehSimulationDim,A0x85c081ee::FDiaphragmDOFRecombineCS::FQualityDim>
            (&local_24,(int)uVar2 / 2);
  if ((0x59 < uVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (((local_24.DimensionValue & ~ForegroundAndBackground) == ForegroundOnly) &&
     (local_24.DimensionValue != ForegroundHoleFilling)) {
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
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bIsPC != 0) ||
       (local_24.Tail.DimensionValue == Disabled)) {
      EVar1 = param_1->Platform;
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid(Platform)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                             ,0x11e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      return FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsDiaphragmDOF;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 145161c60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_85C081EE::FDiaphragmDOFRecombineCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

