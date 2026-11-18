// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ConstructCompiledInstance @ 1452b95b0

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
_anon_9327CABB::FTSRUpdateHistoryCS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 1452b9f40

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

FShader * __cdecl _anon_9327CABB::FTSRUpdateHistoryCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 1452c9760

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

FGlobalShaderType * __cdecl _anon_9327CABB::FTSRUpdateHistoryCS::GetStaticType(void)

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
              0x9d4c) < `FTSRUpdateHistoryCS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FTSRUpdateHistoryCS::GetStaticType'::`2'::_TSS0);
    if (`FTSRUpdateHistoryCS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      if ((`FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FTSRUpdateHisto;
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ = Freeze::DefaultToString
        ;
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FTSRUpdateHistoryCS,0>::Do;
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer._0_8_ =
             u_BASE;
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x2a] =
             '\x04';
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer._8_8_ =
             FGlobalShader::StaticGetTypeLayout();
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer._24_8_ =
             Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x10] =
             `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x11] =
             `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x12] =
             `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x13] =
             `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x14] =
             `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x15] =
             `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x16] =
             `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x17] =
             `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer;
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x20] =
             '\0';
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x21] =
             '\0';
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x22] =
             '\0';
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x23] =
             '\0';
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x24] =
             '\x01';
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x25] =
             '\0';
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x26] =
             '\0';
        `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x27] =
             '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FTSRUpdateHistoryCS,FGlobalShader>'::`2'::FieldBuffer.
            _8_8_)->Interface != NonVirtual) {
          `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)`FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FTSRUpdateHistoryCS::GetStaticType'::`2'::StaticType,Global,
                 (FTypeLayoutDesc *)`FTSRUpdateHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FTSRUpdateHistoryCS",
                 L"/Engine/Private/TemporalSuperResolution/TSRUpdateHistory.usf",L"MainCS",5,0x10,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FTSRUpdateHistoryCS::GetStaticType'::`2'::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/TemporalSuperResolution/TSRUpdateHistory.usf");
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
      atexit(``anonymous_namespace'::FTSRUpdateHistoryCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FTSRUpdateHistoryCS::GetStaticType'::`2'::_TSS0);
      return &`FTSRUpdateHistoryCS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FTSRUpdateHistoryCS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 1452ce110

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
_anon_9327CABB::FTSRUpdateHistoryCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 1452d4d70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIFeatureSupport": Some values do not have unique names */

bool __cdecl
_anon_9327CABB::FTSRUpdateHistoryCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ERHIFeatureSupport EVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TShaderPermutationDomain<_anonymous_namespace_::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
  local_resc;
  
  uVar1 = param_1->PermutationId;
  uVar8 = (int)uVar1 >> 0x1f & 3;
  uVar6 = uVar1 + uVar8;
  iVar7 = (uVar6 & 3) - uVar8;
  if (((3 < iVar7) || (iVar7 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  TShaderPermutationDomain<`anonymous_namespace'::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
  ::
  TShaderPermutationDomain<_anonymous_namespace_::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
            (&local_resc,(int)uVar6 >> 2);
  if ((0xf < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((local_resc.DimensionValue != false) &&
     (EVar5 = FTSRShader::Supports16BitVALU(param_1->Platform), EVar5 == Unsupported)) {
    return false;
  }
  bVar3 = SupportsTSR((FStaticShaderPlatform)param_1->Platform);
  return bVar3;
}

// ShouldPrecachePermutationImpl @ 1452d55b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_9327CABB::FTSRUpdateHistoryCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

