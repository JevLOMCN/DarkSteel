// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ConstructCompiledInstance @ 1451c1fc0

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
_anon_4E9C524B::FLensFlareBlurPS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 1451c2db0

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

FShader * __cdecl _anon_4E9C524B::FLensFlareBlurPS::ConstructSerializedInstance(void)

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

// GetStaticType @ 1451d8660

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

FGlobalShaderType * __cdecl _anon_4E9C524B::FLensFlareBlurPS::GetStaticType(void)

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
              0x9d4c) < `FLensFlareBlurPS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FLensFlareBlurPS::GetStaticType'::`2'::_TSS0);
    if (`FLensFlareBlurPS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      if ((`FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FLensFlareBlurP;
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ = Freeze::DefaultToString;
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FLensFlareBlurPS,0>::Do;
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer._0_8_ =
             u_BASE;
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x2a] =
             '\x04';
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer._8_8_ =
             FGlobalShader::StaticGetTypeLayout();
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer._24_8_ =
             Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x10] =
             `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x11] =
             `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x12] =
             `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x13] =
             `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x14] =
             `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x15] =
             `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x16] =
             `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x17] =
             `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer;
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x20] =
             '\0';
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x21] =
             '\0';
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x22] =
             '\0';
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x23] =
             '\0';
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x24] =
             '\x01';
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x25] =
             '\0';
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x26] =
             '\0';
        `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer[0x27] =
             '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FLensFlareBlurPS,FGlobalShader>'::`2'::FieldBuffer._8_8_)
            ->Interface != NonVirtual) {
          `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)`FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FLensFlareBlurPS::GetStaticType'::`2'::StaticType,Global,
                 (FTypeLayoutDesc *)`FLensFlareBlurPS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FLensFlareBlurPS",L"/Engine/Private/PostProcessLensFlares.usf",L"LensFlareBlurPS"
                 ,3,1,ConstructSerializedInstance,ConstructCompiledInstance,
                 ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FLensFlareBlurPS::GetStaticType'::`2'::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/PostProcessLensFlares.usf");
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
      atexit(``anonymous_namespace'::FLensFlareBlurPS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FLensFlareBlurPS::GetStaticType'::`2'::_TSS0);
      return &`FLensFlareBlurPS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FLensFlareBlurPS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 1451e2150

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
_anon_4E9C524B::FLensFlareBlurPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 1451e4890

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_4E9C524B::FLensFlareBlurPS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return true;
}

// ShouldPrecachePermutationImpl @ 1451e4c80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_4E9C524B::FLensFlareBlurPS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

