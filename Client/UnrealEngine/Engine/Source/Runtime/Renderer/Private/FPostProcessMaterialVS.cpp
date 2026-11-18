// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ConstructCompiledInstance @ 1451c2340

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
_anon_4E9C524B::FPostProcessMaterialVS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  int iVar1;
  FShaderParameterMap *pFVar2;
  FMaterialShader *this;
  FShaderParametersMetadata *pFVar3;
  
  this = ::operator_new(0xf8);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    pFVar2 = param_1->ParameterMap;
    iVar1 = param_1->PermutationId;
    pFVar3 = FPostProcessMaterialParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              ((FShaderParameterBindings *)this,(FShader *)this,iVar1,pFVar2,pFVar3,false);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1451c2fe0

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

FShader * __cdecl _anon_4E9C524B::FPostProcessMaterialVS::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0xf8);
  if (this != (FMaterialShader *)0x0) {
    memset(this,0,0xf8);
    FMaterialShader::FMaterialShader(this);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 1451d9a60

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

FMaterialShaderType * __cdecl _anon_4E9C524B::FPostProcessMaterialVS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  FMaterialShaderType *pFVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < `FPostProcessMaterialVS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FPostProcessMaterialVS::GetStaticType'::`2'::_TSS0);
    if (`FPostProcessMaterialVS::GetStaticType'::`2'::_TSS0 == -1) {
      if ((`FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FPostProcessMat;
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ =
             Freeze::DefaultToString;
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FPostProcessMaterialVS,0>::Do;
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer.
        _0_8_ = u_BASE;
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xf8;
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x2a] = '\x04';
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer.
        _8_8_ = FMaterialShader::StaticGetTypeLayout();
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer.
        _24_8_ = Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x10] = `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x11] = `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x12] = `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x13] = `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x14] = `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x15] = `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x16] = `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x17] = `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::
             FieldBuffer;
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x20] = '\0';
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x21] = '\0';
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x22] = '\0';
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x23] = '\0';
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x24] = '\x01';
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x25] = '\0';
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x26] = '\0';
        `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
        [0x27] = '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FPostProcessMaterialVS,FMaterialShader>'::`2'::FieldBuffer
            ._8_8_)->Interface != NonVirtual) {
          `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)`FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer
                  );
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FPostProcessMaterialVS::GetStaticType'::`2'::StaticType,Material,
                 (FTypeLayoutDesc *)`FPostProcessMaterialVS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FPostProcessMaterialVS",L"/Engine/Private/PostProcessMaterialShaders.usf",
                 L"MainVS",0,1,ConstructSerializedInstance,ConstructCompiledInstance,
                 ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0xf8,
                 (FShaderParametersMetadata *)0x0);
      `FPostProcessMaterialVS::GetStaticType'::`2'::StaticType._0_8_ = &___7FMaterialShaderType__6B_
      ;
      ::FString::FString(&local_28,L"/Engine/Private/PostProcessMaterialShaders.usf");
      pFVar4 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar6,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                           ,0x7e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FMaterialShaderType *)(*pcVar1)();
          return pFVar5;
        }
      }
      atexit(``anonymous_namespace'::FPostProcessMaterialVS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FPostProcessMaterialVS::GetStaticType'::`2'::_TSS0);
      return &`FPostProcessMaterialVS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FPostProcessMaterialVS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 1451e2310

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
_anon_4E9C524B::FPostProcessMaterialVS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf8);
  return;
}

// ShouldCompilePermutationImpl @ 1451e4970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_4E9C524B::FPostProcessMaterialVS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  if (param_1[1].PermutationId == 4) {
    bVar1 = IsMobilePlatform((FStaticShaderPlatform)param_1->Platform);
    if ((!bVar1) || (FReadOnlyCVARCache::bMobileHDR != false)) {
      return true;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 1451e4cf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_4E9C524B::FPostProcessMaterialVS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

