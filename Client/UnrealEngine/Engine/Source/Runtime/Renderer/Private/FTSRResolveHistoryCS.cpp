// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// ConstructCompiledInstance @ 1452b9430

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
_anon_9327CABB::FTSRResolveHistoryCS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 1452b9e50

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

FShader * __cdecl _anon_9327CABB::FTSRResolveHistoryCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 1452c8dd0

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

FGlobalShaderType * __cdecl _anon_9327CABB::FTSRResolveHistoryCS::GetStaticType(void)

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
              0x9d4c) < `FTSRResolveHistoryCS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FTSRResolveHistoryCS::GetStaticType'::`2'::_TSS0);
    if (`FTSRResolveHistoryCS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      if ((`FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FTSRResolveHist;
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ =
             Freeze::DefaultToString;
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FTSRResolveHistoryCS,0>::Do;
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer._0_8_ =
             u_BASE;
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x2a] =
             '\x04';
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer._8_8_ =
             FGlobalShader::StaticGetTypeLayout();
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer._24_8_
             = Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x10] =
             `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x11] =
             `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x12] =
             `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x13] =
             `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x14] =
             `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x15] =
             `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x16] =
             `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x17] =
             `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer;
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x20] =
             '\0';
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x21] =
             '\0';
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x22] =
             '\0';
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x23] =
             '\0';
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x24] =
             '\x01';
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x25] =
             '\0';
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x26] =
             '\0';
        `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer[0x27] =
             '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FTSRResolveHistoryCS,FGlobalShader>'::`2'::FieldBuffer.
            _8_8_)->Interface != NonVirtual) {
          `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)`FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FTSRResolveHistoryCS::GetStaticType'::`2'::StaticType,Global,
                 (FTypeLayoutDesc *)`FTSRResolveHistoryCS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FTSRResolveHistoryCS",
                 L"/Engine/Private/TemporalSuperResolution/TSRResolveHistory.usf",L"MainCS",5,0xc,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FTSRResolveHistoryCS::GetStaticType'::`2'::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/TemporalSuperResolution/TSRResolveHistory.usf")
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
      atexit(``anonymous_namespace'::FTSRResolveHistoryCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FTSRResolveHistoryCS::GetStaticType'::`2'::_TSS0);
      return &`FTSRResolveHistoryCS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FTSRResolveHistoryCS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 1452ce050

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
_anon_9327CABB::FTSRResolveHistoryCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// RemapPermutation @ 1452cfdf0

TShaderPermutationDomain<_anonymous_namespace_::FTSRResolveHistoryCS::FNyquistDim,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
 __cdecl _anon_9327CABB::FTSRResolveHistoryCS::RemapPermutation
                   (TShaderPermutationDomain<_anonymous_namespace_::FTSRResolveHistoryCS::FNyquistDim,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
                    param_1)

{
  char cVar1;
  ulonglong in_RDX;
  undefined8 local_res10;
  
  local_res10._0_4_ = (int)in_RDX;
  cVar1 = (char)(in_RDX >> 0x20);
  if ((int)local_res10 != 0x10) {
    if ((int)local_res10 == 0) {
      cVar1 = '\0';
    }
    local_res10._5_3_ = (undefined3)(in_RDX >> 0x28);
    local_res10._0_5_ = CONCAT14(cVar1,(int)local_res10);
    *(ulonglong *)param_1 = local_res10;
    return param_1;
  }
  if (cVar1 == '\0') {
    local_res10 = in_RDX & 0xffffffff00000000;
    *(ulonglong *)param_1 = local_res10;
    return param_1;
  }
  *(ulonglong *)param_1 = in_RDX;
  return param_1;
}

// ShouldCompilePermutationImpl @ 1452d4b40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIFeatureSupport": Some values do not have unique names */

bool __cdecl
_anon_9327CABB::FTSRResolveHistoryCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  bool bVar1;
  ERHIFeatureSupport EVar2;
  undefined8 local_res8;
  TShaderPermutationDomain<_anonymous_namespace_::FTSRResolveHistoryCS::FNyquistDim,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
  local_res10 [3];
  
  TShaderPermutationDomain<`anonymous_namespace'::FTSRResolveHistoryCS::FNyquistDim,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
  ::
  TShaderPermutationDomain<_anonymous_namespace_::FTSRResolveHistoryCS::FNyquistDim,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
            (local_res10,param_1->PermutationId);
  local_res8._4_2_ =
       (undefined2)
       (CONCAT15(local_res10[0].Tail.Tail.DimensionValue,
                 CONCAT14(local_res10[0].Tail.DimensionValue,local_res10[0].DimensionValue)) >> 0x20
       );
  if (local_res10[0].DimensionValue == 0x10) {
    if (local_res10[0].Tail.DimensionValue != false) goto LAB_1452d4b91;
  }
  else {
    if (local_res10[0].DimensionValue != 0) goto LAB_1452d4b91;
    local_res8 = (ulonglong)local_res10[0].Tail.Tail.DimensionValue << 0x28;
  }
  if (local_res10[0].DimensionValue != 0) {
    return false;
  }
LAB_1452d4b91:
  if ((((local_res10[0].Tail.DimensionValue == (bool)(char)local_res8._4_2_) &&
       (local_res10[0].Tail.Tail.DimensionValue == (bool)(byte)((ushort)local_res8._4_2_ >> 8))) &&
      (bVar1 = UE::ShaderPermutationUtils::ShouldCompileWithWaveSize
                         (param_1,local_res10[0].DimensionValue), bVar1)) &&
     ((local_res10[0].Tail.DimensionValue == false ||
      (EVar2 = FTSRShader::Supports16BitVALU(param_1->Platform), EVar2 != Unsupported)))) {
    bVar1 = SupportsTSR((FStaticShaderPlatform)param_1->Platform);
    return bVar1;
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 1452d5530

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_9327CABB::FTSRResolveHistoryCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  TShaderPermutationDomain<_anonymous_namespace_::FTSRResolveHistoryCS::FNyquistDim,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
  local_res8 [4];
  
  TShaderPermutationDomain<`anonymous_namespace'::FTSRResolveHistoryCS::FNyquistDim,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
  ::
  TShaderPermutationDomain<_anonymous_namespace_::FTSRResolveHistoryCS::FNyquistDim,A0x9327cabb::FTSRShader::F16BitVALUDim,A0x9327cabb::FTSRShader::FAlphaChannelDim>
            (local_res8,param_1->PermutationId);
  if ((local_res8[0].DimensionValue != 0) &&
     ((local_res8[0].DimensionValue < GRHIGlobals.MinimumWaveSize ||
      (GRHIGlobals.MaximumWaveSize < local_res8[0].DimensionValue)))) {
    return NotUsed;
  }
  return Precached;
}

