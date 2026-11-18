// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ConstructCompiledInstance @ 1451c22c0

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
_anon_4E9C524B::FPostProcessMaterialPS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 1451c2f90

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

FShader * __cdecl _anon_4E9C524B::FPostProcessMaterialPS::ConstructSerializedInstance(void)

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

// GetStaticType @ 1451d9740

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

FMaterialShaderType * __cdecl _anon_4E9C524B::FPostProcessMaterialPS::GetStaticType(void)

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
              0x9d4c) < `FPostProcessMaterialPS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FPostProcessMaterialPS::GetStaticType'::`2'::_TSS0);
    if (`FPostProcessMaterialPS::GetStaticType'::`2'::_TSS0 == -1) {
      if ((`FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FPostProcessMat;
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ =
             Freeze::DefaultToString;
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FPostProcessMaterialPS,0>::Do;
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer.
        _0_8_ = u_BASE;
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xf8;
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x2a] = '\x04';
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer.
        _8_8_ = FMaterialShader::StaticGetTypeLayout();
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer.
        _24_8_ = Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x10] = `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x11] = `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x12] = `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x13] = `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x14] = `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x15] = `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x16] = `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x17] = `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::
             FieldBuffer;
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x20] = '\0';
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x21] = '\0';
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x22] = '\0';
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x23] = '\0';
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x24] = '\x01';
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x25] = '\0';
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x26] = '\0';
        `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
        [0x27] = '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FPostProcessMaterialPS,FMaterialShader>'::`2'::FieldBuffer
            ._8_8_)->Interface != NonVirtual) {
          `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)`FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer
                  );
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FPostProcessMaterialPS::GetStaticType'::`2'::StaticType,Material,
                 (FTypeLayoutDesc *)`FPostProcessMaterialPS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FPostProcessMaterialPS",L"/Engine/Private/PostProcessMaterialShaders.usf",
                 L"MainPS",3,8,ConstructSerializedInstance,ConstructCompiledInstance,
                 ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0xf8,
                 (FShaderParametersMetadata *)0x0);
      `FPostProcessMaterialPS::GetStaticType'::`2'::StaticType._0_8_ = &___7FMaterialShaderType__6B_
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
      atexit(``anonymous_namespace'::FPostProcessMaterialPS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FPostProcessMaterialPS::GetStaticType'::`2'::_TSS0);
      return &`FPostProcessMaterialPS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FPostProcessMaterialPS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 1451e22d0

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
_anon_4E9C524B::FPostProcessMaterialPS::InternalDestroy
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

// ShouldCompilePermutationImpl @ 1451e48f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_4E9C524B::FPostProcessMaterialPS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  bool bVar1;
  TShaderPermutationDomain<_anonymous_namespace_::FPostProcessMaterialPS::FManualStencilTestDim,A0x4e9c524b::FPostProcessMaterialPS::FNeuralPostProcessPrePass,A0x4e9c524b::FPostProcessMaterialPS::FPathTracingDim>
  local_res8 [8];
  
  if ((param_1[1].PermutationId != 4) ||
     ((bVar1 = IsMobilePlatform((FStaticShaderPlatform)param_1->Platform), bVar1 &&
      (FReadOnlyCVARCache::bMobileHDR == false)))) {
    return false;
  }
  TShaderPermutationDomain<`anonymous_namespace'::FPostProcessMaterialPS::FManualStencilTestDim,A0x4e9c524b::FPostProcessMaterialPS::FNeuralPostProcessPrePass,A0x4e9c524b::FPostProcessMaterialPS::FPathTracingDim>
  ::
  TShaderPermutationDomain<_anonymous_namespace_::FPostProcessMaterialPS::FManualStencilTestDim,A0x4e9c524b::FPostProcessMaterialPS::FNeuralPostProcessPrePass,A0x4e9c524b::FPostProcessMaterialPS::FPathTracingDim>
            (local_res8,param_1->PermutationId);
  if (local_res8[0].DimensionValue != false) {
    if ((*(ulonglong *)&param_1[4].Flags & 0x40000000000000) == 0) {
      return false;
    }
    bVar1 = DoesPlatformSupportNanite(param_1->Platform,true);
    if (!bVar1) {
      return false;
    }
  }
  if ((local_res8[0].Tail.Tail.DimensionValue != false) &&
     (bVar1 = PathTracing::ShouldCompilePathTracingShadersForProject(param_1->Platform), !bVar1)) {
    return false;
  }
  return true;
}

// ShouldPrecachePermutationImpl @ 1451e4ce0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_4E9C524B::FPostProcessMaterialPS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

