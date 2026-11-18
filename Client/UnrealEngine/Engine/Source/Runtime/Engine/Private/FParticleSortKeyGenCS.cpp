// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// ConstructCompiledInstance @ 14816b5c0

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
FParticleSortKeyGenCS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0xf8);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4 = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.Parameters.ArrayMax + 2) = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)(this + 1),param_1->ParameterMap,L"InParticleIndices",
               SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4,
               param_1->ParameterMap,L"PositionTexture",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.Parameters.ArrayNum,
               param_1->ParameterMap,L"PositionTextureSampler",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.Parameters.ArrayMax,
               param_1->ParameterMap,L"OutKeys",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.ResourceParameters,
               param_1->ParameterMap,L"OutParticleIndices",SPF_Optional);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14816b6d0

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

FShader * __cdecl FParticleSortKeyGenCS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xf8);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 14817e960

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

FGlobalShaderType * __cdecl FParticleSortKeyGenCS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FParticleSortKeyGenCS",
                 L"/Engine/Private/ParticleSortKeyGen.usf",L"GenerateParticleSortKeys",5,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xf8,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ParticleSortKeyGen.usf");
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
      atexit(`FParticleSortKeyGenCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 14817f8b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FParticleSortKeyGenCS::GetTypeLayout(FParticleSortKeyGenCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FParticleSortKe;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FParticleSortKeyGenCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutParticleIndices";
    DAT_15522e832 = Freeze::FindFieldNameLength(L"OutParticleIndices");
    _DAT_15522e810 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15522e818 = ::TypeBuffer[0x10];
    DAT_15522e818_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522e818_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522e818_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522e818_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522e818_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522e818_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522e818_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15522e820 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522e828 = 0xf0;
    _DAT_15522e82c = 1;
    _DAT_15522e830 = 0;
    `public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutKeys";
    DAT_15522e802 = Freeze::FindFieldNameLength(L"OutKeys");
    _DAT_15522e7e0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15522e7e8 = ::TypeBuffer[0x10];
    DAT_15522e7e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522e7e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522e7e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522e7e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522e7e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522e7e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522e7e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15522e7f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522e7f8 = 0xec;
    _DAT_15522e7fc = 1;
    _DAT_15522e800 = 0;
    `public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PositionTextureSampler";
    DAT_15522e7d2 = Freeze::FindFieldNameLength(L"PositionTextureSampler");
    _DAT_15522e7b0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15522e7b8 = ::TypeBuffer[0x10];
    DAT_15522e7b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522e7b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522e7b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522e7b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522e7b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522e7b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522e7b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15522e7c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522e7c8 = 0xe8;
    _DAT_15522e7cc = 1;
    _DAT_15522e7d0 = 0;
    `public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PositionTexture";
    DAT_15522e7a2 = Freeze::FindFieldNameLength(L"PositionTexture");
    _DAT_15522e780 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15522e788 = ::TypeBuffer[0x10];
    DAT_15522e788_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522e788_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522e788_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522e788_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522e788_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522e788_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522e788_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15522e790 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522e798 = 0xe4;
    _DAT_15522e79c = 1;
    _DAT_15522e7a0 = 0;
    `public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InParticleIndices";
    DAT_15522e772 = Freeze::FindFieldNameLength(L"InParticleIndices");
    _DAT_15522e750 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15522e758 = ::TypeBuffer[0x10];
    DAT_15522e758_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522e758_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522e758_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522e758_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522e758_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522e758_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522e758_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15522e760 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522e768 = 0xe0;
    _DAT_15522e76c = 1;
    _DAT_15522e770 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 1481859c0

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
FParticleSortKeyGenCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf8);
  return;
}

// SetParameters @ 148196d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FParticleSortKeyGenCS::SetParameters
          (FParticleSortKeyGenCS *this,FRHIBatchedShaderParameters *param_1,
          FParticleKeyGenParameters *param_2,FRHIUnorderedAccessView *param_3,
          FRHIUnorderedAccessView *param_4,FRHITexture *param_5,FRHIShaderResourceView *param_6)

{
  ushort uVar1;
  FRHIBatchedShaderParameters *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  FHashedName FVar6;
  FShaderUniformBufferParameter *pFVar7;
  ushort *puVar8;
  FRHIBatchedShaderParametersAllocator *pFVar9;
  FMemStackBase *pFVar10;
  TArrayView<FRHIShaderParameterResource,int> *pTVar11;
  FRHIShaderResourceView **ppFVar12;
  ushort local_res8 [4];
  ushort local_68;
  ushort local_66;
  ushort local_64;
  ushort local_62;
  undefined1 local_60 [16];
  FRHIUniformBuffer *local_50;
  FRHITexture *local_48;
  FRHITexture *local_40;
  FRHIShaderResourceView *local_38;
  FRHIShaderResourceView *local_30;
  FHashedName local_28 [2];
  
  TUniformBufferRef<FParticleKeyGenParameters>::CreateUniformBufferImmediate
            ((FParticleKeyGenParameters *)local_60,(EUniformBufferUsage)param_2,None);
  pFVar5 = FParticleKeyGenParameters::GetStructMetadata();
  FHashedName::FHashedName((FHashedName *)(local_60 + 8),&pFVar5->ShaderVariableHashedName);
  FVar6.Hash = (ulong64)FHashedName::FHashedName(local_28,(FHashedName *)(local_60 + 8));
  pFVar7 = FShader::GetUniformBufferParameter((FShader *)this,FVar6);
  uVar1 = pFVar7->BaseIndex;
  if (uVar1 != 0xffff) {
    pFVar9 = param_1->Allocator;
    local_50 = (FRHIUniformBuffer *)local_60._0_8_;
    pFVar2 = pFVar9->AttachedParameters;
    if (pFVar2 != param_1) {
      if ((pFVar2 != (FRHIBatchedShaderParameters *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!AttachedParameters",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                             ,0x82,
                             L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9->AttachedParameters = param_1;
    }
    pFVar9 = param_1->Allocator;
    pFVar2 = pFVar9->AttachedParameters;
    local_res8[0] = uVar1;
    if (pFVar2 != param_1) {
      if ((pFVar2 != (FRHIBatchedShaderParameters *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!AttachedParameters",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                             ,0x82,
                             L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9->AttachedParameters = param_1;
    }
    FRHIBatchedShaderParametersAllocator::
    Emplace<FRHIShaderParameterResource,FRHIUniformBuffer_*_&,unsigned_short_&>
              (param_1->Allocator,&param_1->Allocator->ResourceParameters,
               &param_1->ResourceParameters,&local_50,local_res8);
  }
  SetUAVParameter(param_1,&this->OutKeys,param_3);
  SetUAVParameter(param_1,&this->OutParticleIndices,param_4);
  if ((this->PositionTexture).NumResources != '\0') {
    pFVar9 = param_1->Allocator;
    uVar1 = (this->PositionTexture).BaseIndex;
    pFVar2 = pFVar9->AttachedParameters;
    if ((this->PositionTexture).Type == BindlessSRV) {
      local_48 = param_5;
      local_68 = uVar1;
      if (pFVar2 != param_1) {
        if ((pFVar2 != (FRHIBatchedShaderParameters *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!AttachedParameters",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                               ,0x82,
                               L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9->AttachedParameters = param_1;
      }
      FRHIBatchedShaderParametersAllocator::
      Emplace<FRHIShaderParameterResource,FRHITexture_*_&,unsigned_short_&>
                (param_1->Allocator,&param_1->Allocator->BindlessParameters,
                 &param_1->BindlessParameters,&local_48,&local_68);
    }
    else {
      local_40 = param_5;
      local_66 = uVar1;
      if (pFVar2 != param_1) {
        if ((pFVar2 != (FRHIBatchedShaderParameters *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!AttachedParameters",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                               ,0x82,
                               L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9->AttachedParameters = param_1;
      }
      FRHIBatchedShaderParametersAllocator::
      Emplace<FRHIShaderParameterResource,FRHITexture_*_&,unsigned_short_&>
                (param_1->Allocator,&param_1->Allocator->ResourceParameters,
                 &param_1->ResourceParameters,&local_40,&local_66);
    }
  }
  if ((this->InParticleIndices).NumResources != '\0') {
    pFVar9 = param_1->Allocator;
    uVar1 = (this->InParticleIndices).BaseIndex;
    pFVar2 = pFVar9->AttachedParameters;
    if ((this->InParticleIndices).Type == BindlessSRV) {
      local_38 = param_6;
      local_64 = uVar1;
      if (pFVar2 != param_1) {
        if ((pFVar2 != (FRHIBatchedShaderParameters *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!AttachedParameters",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                               ,0x82,
                               L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9->AttachedParameters = param_1;
      }
      pFVar9 = param_1->Allocator;
      pTVar11 = &param_1->BindlessParameters;
      puVar8 = &local_64;
      ppFVar12 = &local_38;
      pFVar10 = &pFVar9->BindlessParameters;
    }
    else {
      local_30 = param_6;
      local_62 = uVar1;
      if (pFVar2 != param_1) {
        if ((pFVar2 != (FRHIBatchedShaderParameters *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!AttachedParameters",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                               ,0x82,
                               L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9->AttachedParameters = param_1;
      }
      pTVar11 = &param_1->ResourceParameters;
      pFVar9 = param_1->Allocator;
      puVar8 = &local_62;
      ppFVar12 = &local_30;
      pFVar10 = &pFVar9->ResourceParameters;
    }
    FRHIBatchedShaderParametersAllocator::
    Emplace<FRHIShaderParameterResource,FRHIShaderResourceView_*_&,unsigned_short_&>
              (pFVar9,pFVar10,pTVar11,ppFVar12,puVar8);
  }
  if ((FRHIResource *)local_60._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_60._0_8_);
  }
  return;
}

// ShouldCompilePermutationImpl @ 148199200

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FParticleSortKeyGenCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel != ES3_1;
}

// ShouldPrecachePermutationImpl @ 1481993d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FParticleSortKeyGenCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 1481a1800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FParticleSortKeyGenCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FParticleSortKe;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FParticleSortKeyGenCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutParticleIndices";
    DAT_15522e832 = Freeze::FindFieldNameLength(L"OutParticleIndices");
    _DAT_15522e810 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15522e818 = ::TypeBuffer[0x10];
    DAT_15522e818_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522e818_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522e818_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522e818_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522e818_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522e818_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522e818_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15522e820 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522e828 = 0xf0;
    _DAT_15522e82c = 1;
    _DAT_15522e830 = 0;
    `public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutKeys";
    DAT_15522e802 = Freeze::FindFieldNameLength(L"OutKeys");
    _DAT_15522e7e0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15522e7e8 = ::TypeBuffer[0x10];
    DAT_15522e7e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522e7e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522e7e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522e7e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522e7e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522e7e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522e7e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15522e7f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522e7f8 = 0xec;
    _DAT_15522e7fc = 1;
    _DAT_15522e800 = 0;
    `public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PositionTextureSampler";
    DAT_15522e7d2 = Freeze::FindFieldNameLength(L"PositionTextureSampler");
    _DAT_15522e7b0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15522e7b8 = ::TypeBuffer[0x10];
    DAT_15522e7b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522e7b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522e7b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522e7b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522e7b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522e7b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522e7b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15522e7c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522e7c8 = 0xe8;
    _DAT_15522e7cc = 1;
    _DAT_15522e7d0 = 0;
    `public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PositionTexture";
    DAT_15522e7a2 = Freeze::FindFieldNameLength(L"PositionTexture");
    _DAT_15522e780 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15522e788 = ::TypeBuffer[0x10];
    DAT_15522e788_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522e788_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522e788_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522e788_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522e788_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522e788_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522e788_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15522e790 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522e798 = 0xe4;
    _DAT_15522e79c = 1;
    _DAT_15522e7a0 = 0;
    `public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InParticleIndices";
    DAT_15522e772 = Freeze::FindFieldNameLength(L"InParticleIndices");
    _DAT_15522e750 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15522e758 = ::TypeBuffer[0x10];
    DAT_15522e758_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522e758_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522e758_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522e758_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522e758_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522e758_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522e758_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FParticleSortKeyGenCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15522e760 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522e768 = 0xe0;
    _DAT_15522e76c = 1;
    _DAT_15522e770 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

