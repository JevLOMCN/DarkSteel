// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ConstructCompiledInstance @ 1452b9230

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
_anon_9327CABB::FTSRDilateVelocityCS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 1452b9d10

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

FShader * __cdecl _anon_9327CABB::FTSRDilateVelocityCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 1452c8110

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

FGlobalShaderType * __cdecl _anon_9327CABB::FTSRDilateVelocityCS::GetStaticType(void)

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
              0x9d4c) < `FTSRDilateVelocityCS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FTSRDilateVelocityCS::GetStaticType'::`2'::_TSS0);
    if (`FTSRDilateVelocityCS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      if ((`FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FTSRDilateVeloc;
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ =
             Freeze::DefaultToString;
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FTSRDilateVelocityCS,0>::Do;
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer._0_8_ =
             u_BASE;
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x2a] =
             '\x04';
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer._8_8_ =
             FGlobalShader::StaticGetTypeLayout();
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer._24_8_
             = Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x10] =
             `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x11] =
             `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x12] =
             `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x13] =
             `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x14] =
             `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x15] =
             `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x16] =
             `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x17] =
             `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer;
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x20] =
             '\0';
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x21] =
             '\0';
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x22] =
             '\0';
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x23] =
             '\0';
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x24] =
             '\x01';
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x25] =
             '\0';
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x26] =
             '\0';
        `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer[0x27] =
             '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FTSRDilateVelocityCS,FGlobalShader>'::`2'::FieldBuffer.
            _8_8_)->Interface != NonVirtual) {
          `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)`FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FTSRDilateVelocityCS::GetStaticType'::`2'::StaticType,Global,
                 (FTypeLayoutDesc *)`FTSRDilateVelocityCS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FTSRDilateVelocityCS",
                 L"/Engine/Private/TemporalSuperResolution/TSRDilateVelocity.usf",L"MainCS",5,6,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FTSRDilateVelocityCS::GetStaticType'::`2'::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/TemporalSuperResolution/TSRDilateVelocity.usf")
      ;
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
      atexit(``anonymous_namespace'::FTSRDilateVelocityCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FTSRDilateVelocityCS::GetStaticType'::`2'::_TSS0);
      return &`FTSRDilateVelocityCS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FTSRDilateVelocityCS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 1452cdf50

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
_anon_9327CABB::FTSRDilateVelocityCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 1452d4840

/* WARNING: Removing unreachable block (ram,0x0001452d4988) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_9327CABB::FTSRDilateVelocityCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  
  uVar1 = param_1->PermutationId;
  uVar3 = (int)uVar1 / 3;
  if (((2 < (int)uVar1 % 3) || ((int)uVar1 % 3 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((((int)uVar3 % 2 != 0) && ((int)uVar3 % 2 != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (((int)uVar3 / 2 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0xf6,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((1 < uVar3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((5 < uVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  bVar4 = SupportsTSR((FStaticShaderPlatform)param_1->Platform);
  return bVar4;
}

// ShouldPrecachePermutationImpl @ 1452d54f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_9327CABB::FTSRDilateVelocityCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

