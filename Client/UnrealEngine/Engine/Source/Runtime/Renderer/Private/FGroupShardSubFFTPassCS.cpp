// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ConstructCompiledInstance @ 144906df0

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
_anon_4AC019A1::FGroupShardSubFFTPassCS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 1449080d0

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

FShader * __cdecl _anon_4AC019A1::FGroupShardSubFFTPassCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 144922a90

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

FGlobalShaderType * __cdecl _anon_4AC019A1::FGroupShardSubFFTPassCS::GetStaticType(void)

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
              0x9d4c) < `FGroupShardSubFFTPassCS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FGroupShardSubFFTPassCS::GetStaticType'::`2'::_TSS0);
    if (`FGroupShardSubFFTPassCS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      if ((`FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FGroupShardSubF;
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ =
             Freeze::DefaultToString;
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FGroupShardSubFFTPassCS,0>::Do;
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer.
        _0_8_ = u_BASE;
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x2a] = '\x04';
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer.
        _8_8_ = FGlobalShader::StaticGetTypeLayout();
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer.
        _24_8_ = Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x10] = `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x11] = `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x12] = `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x13] = `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x14] = `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x15] = `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x16] = `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x17] = `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        ;
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x20] = '\0';
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x21] = '\0';
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x22] = '\0';
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x23] = '\0';
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x24] = '\x01';
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x25] = '\0';
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x26] = '\0';
        `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer
        [0x27] = '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FGroupShardSubFFTPassCS,FGlobalShader>'::`2'::FieldBuffer.
            _8_8_)->Interface != NonVirtual) {
          `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   `FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FGroupShardSubFFTPassCS::GetStaticType'::`2'::StaticType,Global,
                 (FTypeLayoutDesc *)`FGroupShardSubFFTPassCS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FGroupShardSubFFTPassCS",L"/Engine/Private/GPUFastFourierTransform.usf",
                 L"GroupSharedSubComplexFFTCS",5,1,ConstructSerializedInstance,
                 ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FGroupShardSubFFTPassCS::GetStaticType'::`2'::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/GPUFastFourierTransform.usf");
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
      atexit(``anonymous_namespace'::FGroupShardSubFFTPassCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FGroupShardSubFFTPassCS::GetStaticType'::`2'::_TSS0);
      return &`FGroupShardSubFFTPassCS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FGroupShardSubFFTPassCS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 144929bf0

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
_anon_4AC019A1::FGroupShardSubFFTPassCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 144933210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_4AC019A1::FGroupShardSubFFTPassCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x2e0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsFFTBloom != 0) {
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xfa,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bIsConsole == 0) {
      return true;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 144933510

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_4AC019A1::FGroupShardSubFFTPassCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

