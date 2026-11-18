// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// ConstructCompiledInstance @ 14552f250

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
_anon_457E29A6::FSSDTemporalAccumulationCS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 14552f4b0

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

FShader * __cdecl _anon_457E29A6::FSSDTemporalAccumulationCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 145545430

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

FGlobalShaderType * __cdecl _anon_457E29A6::FSSDTemporalAccumulationCS::GetStaticType(void)

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
              0x9d4c) < `FSSDTemporalAccumulationCS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FSSDTemporalAccumulationCS::GetStaticType'::`2'::_TSS0);
    if (`FSSDTemporalAccumulationCS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      if ((`FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FSSDTemporalAcc
        ;
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ =
             Freeze::DefaultToString;
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FSSDTemporalAccumulationCS,0>::Do;
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer.
        _0_8_ = u_BASE;
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x2a] = '\x04';
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer.
        _8_8_ = FGlobalShader::StaticGetTypeLayout();
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer.
        _24_8_ = Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x10] = `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x11] = `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x12] = `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x13] = `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x14] = `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x15] = `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x16] = `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x17] = `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::
             FieldBuffer;
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x20] = '\0';
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x21] = '\0';
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x22] = '\0';
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x23] = '\0';
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x24] = '\x01';
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x25] = '\0';
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x26] = '\0';
        `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::FieldBuffer
        [0x27] = '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FSSDTemporalAccumulationCS,FGlobalShader>'::`2'::
            FieldBuffer._8_8_)->Interface != NonVirtual) {
          `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FSSDTemporalAccumulationCS::GetStaticType'::`2'::StaticType,Global
                 ,(FTypeLayoutDesc *)
                  `FSSDTemporalAccumulationCS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FSSDTemporalAccumulationCS",
                 L"/Engine/Private/ScreenSpaceDenoise/SSDTemporalAccumulation.usf",L"MainCS",5,0x20,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FSSDTemporalAccumulationCS::GetStaticType'::`2'::StaticType._0_8_ =
           FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ScreenSpaceDenoise/SSDTemporalAccumulation.usf"
                        );
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
      atexit(``anonymous_namespace'::FSSDTemporalAccumulationCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FSSDTemporalAccumulationCS::GetStaticType'::`2'::_TSS0);
      return &`FSSDTemporalAccumulationCS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FSSDTemporalAccumulationCS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 145546e30

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
_anon_457E29A6::FSSDTemporalAccumulationCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutation @ 145552320

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_457E29A6::FSSDTemporalAccumulationCS::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  ESignalProcessing EVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *(uint *)&param_1->field_0x4;
  uVar8 = (int)uVar1 >> 0x1f & 7;
  uVar5 = uVar1 + uVar8;
  EVar6 = (uVar5 & 7) - uVar8;
  uVar8 = (int)uVar5 >> 3;
  if (((7 < (int)EVar6) || ((int)EVar6 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar9 = uVar8 & 0x80000003;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
  }
  if (((3 < (int)uVar9) || ((int)uVar9 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (((int)(uVar8 + ((int)uVar5 >> 0x1f & 3U)) >> 2 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0xf6,L"Invalid shader permutation id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((3 < uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((0x1f < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (EVar6 < MAX) {
    if (EVar6 == ShadowVisibilityMask) {
      iVar7 = 4;
    }
    else {
      if ((6 < EVar6 - PolychromaticPenumbraHarmonic) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScreenSpaceDenoise.cpp"
                             ,0x13c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar7 = 1;
    }
    if ((int)(uVar9 + 1) <= iVar7) {
      bVar3 = ::`anonymous_namespace'::ShouldCompileSignalPipeline
                        (EVar6,*(EShaderPlatform *)param_1);
      return bVar3;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 1455528f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_457E29A6::FSSDTemporalAccumulationCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  ESignalProcessing EVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_1->PermutationId;
  uVar8 = (int)uVar1 >> 0x1f & 7;
  uVar5 = uVar1 + uVar8;
  EVar6 = (uVar5 & 7) - uVar8;
  uVar8 = (int)uVar5 >> 3;
  if (((7 < (int)EVar6) || ((int)EVar6 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar9 = uVar8 & 0x80000003;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
  }
  if (((3 < (int)uVar9) || ((int)uVar9 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (((int)(uVar8 + ((int)uVar5 >> 0x1f & 3U)) >> 2 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0xf6,L"Invalid shader permutation id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((3 < uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((0x1f < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (EVar6 < MAX) {
    if (EVar6 == ShadowVisibilityMask) {
      iVar7 = 4;
    }
    else {
      if ((6 < EVar6 - PolychromaticPenumbraHarmonic) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScreenSpaceDenoise.cpp"
                             ,0x13c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar7 = 1;
    }
    if ((int)(uVar9 + 1) <= iVar7) {
      bVar3 = ::`anonymous_namespace'::ShouldCompileSignalPipeline(EVar6,param_1->Platform);
      return bVar3;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 145552cb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_457E29A6::FSSDTemporalAccumulationCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

