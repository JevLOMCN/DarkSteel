// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// ConstructCompiledInstance @ 148921fb0

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
FCompositeAnimatedVectorFieldCS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0xf8);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4 = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayMax + 2) = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x6 = 0;
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)(this + 1),param_1->ParameterMap,L"AtlasTexture",
               SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4,
               param_1->ParameterMap,L"AtlasTextureSampler",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.Parameters.ArrayNum,
               param_1->ParameterMap,L"NoiseVolumeTexture",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.Parameters.ArrayMax,
               param_1->ParameterMap,L"NoiseVolumeTextureSampler",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.ResourceParameters,
               param_1->ParameterMap,L"OutVolumeTexture",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)
               &this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x4,
               param_1->ParameterMap,L"OutVolumeTextureSampler",SPF_Optional);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1489228c0

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

FShader * __cdecl FCompositeAnimatedVectorFieldCS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xf8);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined4 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x6 = 0;
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 14895dea0

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

FGlobalShaderType * __cdecl FCompositeAnimatedVectorFieldCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FCompositeAnimatedVectorFieldCS",
                 L"/Engine/Private/VectorFieldCompositeShaders.usf",L"CompositeAnimatedVectorField",
                 5,1,ConstructSerializedInstance,ConstructCompiledInstance,
                 ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0xf8,
                 (FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/VectorFieldCompositeShaders.usf");
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
      atexit(`FCompositeAnimatedVectorFieldCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 14895eec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FCompositeAnimatedVectorFieldCS::GetTypeLayout(FCompositeAnimatedVectorFieldCS *this)

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
    ::TypeBuffer._8_8_ = u_FCompositeAnima;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FCompositeAnimatedVectorFieldCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutVolumeTextureSampler";
    DAT_1552587b2 = Freeze::FindFieldNameLength(L"OutVolumeTextureSampler");
    _DAT_155258790 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155258798 = ::TypeBuffer[0x10];
    DAT_155258798_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155258798_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155258798_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155258798_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155258798_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155258798_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155258798_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552587a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552587a8 = 0xf4;
    _DAT_1552587ac = 1;
    _DAT_1552587b0 = 0;
    `public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutVolumeTexture";
    DAT_155258782 = Freeze::FindFieldNameLength(L"OutVolumeTexture");
    _DAT_155258760 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155258768 = ::TypeBuffer[0x10];
    DAT_155258768_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155258768_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155258768_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155258768_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155258768_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155258768_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155258768_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155258770 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155258778 = 0xf0;
    _DAT_15525877c = 1;
    _DAT_155258780 = 0;
    `public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NoiseVolumeTextureSampler";
    DAT_155258752 = Freeze::FindFieldNameLength(L"NoiseVolumeTextureSampler");
    _DAT_155258730 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155258738 = ::TypeBuffer[0x10];
    DAT_155258738_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155258738_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155258738_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155258738_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155258738_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155258738_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155258738_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155258740 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155258748 = 0xec;
    _DAT_15525874c = 1;
    _DAT_155258750 = 0;
    `public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NoiseVolumeTexture";
    DAT_155258722 = Freeze::FindFieldNameLength(L"NoiseVolumeTexture");
    _DAT_155258700 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155258708 = ::TypeBuffer[0x10];
    DAT_155258708_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155258708_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155258708_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155258708_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155258708_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155258708_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155258708_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155258710 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155258718 = 0xe8;
    _DAT_15525871c = 1;
    _DAT_155258720 = 0;
    `public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AtlasTextureSampler";
    DAT_1552586f2 = Freeze::FindFieldNameLength(L"AtlasTextureSampler");
    _DAT_1552586d0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1552586d8 = ::TypeBuffer[0x10];
    DAT_1552586d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552586d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552586d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552586d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552586d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552586d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552586d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552586e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552586e8 = 0xe4;
    _DAT_1552586ec = 1;
    _DAT_1552586f0 = 0;
    `public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AtlasTexture";
    DAT_1552586c2 = Freeze::FindFieldNameLength(L"AtlasTexture");
    _DAT_1552586a0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1552586a8 = ::TypeBuffer[0x10];
    DAT_1552586a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552586a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552586a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552586a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552586a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552586a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552586a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1552586b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552586b8 = 0xe0;
    _DAT_1552586bc = 1;
    _DAT_1552586c0 = 0;
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

// InternalDestroy @ 148965fc0

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
FCompositeAnimatedVectorFieldCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf8);
  return;
}

// SetParameters @ 14897f620

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
FCompositeAnimatedVectorFieldCS::SetParameters
          (FCompositeAnimatedVectorFieldCS *this,FRHIBatchedShaderParameters *param_1,
          TUniformBufferRef<FCompositeAnimatedVectorFieldUniformParameters> *param_2,
          FRHIUnorderedAccessView *param_3,FRHITexture *param_4,FRHITexture *param_5)

{
  ushort uVar1;
  FRHIBatchedShaderParameters *pFVar2;
  code *pcVar3;
  TRefCountPtr<FRHISamplerState> TVar4;
  bool bVar5;
  FShaderParametersMetadata *pFVar6;
  FHashedName FVar7;
  FShaderUniformBufferParameter *pFVar8;
  ushort *puVar9;
  FRHIBatchedShaderParametersAllocator *pFVar10;
  FMemStackBase *pFVar11;
  TArrayView<FRHIShaderParameterResource,int> *pTVar12;
  FRHIUnorderedAccessView **ppFVar13;
  ushort local_res8 [4];
  ushort local_48;
  ushort local_46 [3];
  FHashedName local_40;
  TUniformBufferRef<FCompositeAnimatedVectorFieldUniformParameters> local_38;
  FRHIUnorderedAccessView *local_30;
  FRHIUnorderedAccessView *local_28;
  FHashedName local_20;
  
  pFVar6 = FCompositeAnimatedVectorFieldUniformParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_40,&pFVar6->ShaderVariableHashedName);
  FVar7.Hash = (ulong64)FHashedName::FHashedName(&local_20,&local_40);
  pFVar8 = FShader::GetUniformBufferParameter((FShader *)this,FVar7);
  uVar1 = pFVar8->BaseIndex;
  if (uVar1 != 0xffff) {
    local_38 = *param_2;
    pFVar10 = param_1->Allocator;
    pFVar2 = pFVar10->AttachedParameters;
    if (pFVar2 != param_1) {
      if ((pFVar2 != (FRHIBatchedShaderParameters *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!AttachedParameters",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                             ,0x82,
                             L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10->AttachedParameters = param_1;
    }
    pFVar10 = param_1->Allocator;
    pFVar2 = pFVar10->AttachedParameters;
    local_res8[0] = uVar1;
    if (pFVar2 != param_1) {
      if ((pFVar2 != (FRHIBatchedShaderParameters *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!AttachedParameters",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                             ,0x82,
                             L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10->AttachedParameters = param_1;
    }
    FRHIBatchedShaderParametersAllocator::
    Emplace<FRHIShaderParameterResource,FRHIUniformBuffer_*_&,unsigned_short_&>
              (param_1->Allocator,&param_1->Allocator->ResourceParameters,
               &param_1->ResourceParameters,(FRHIUniformBuffer **)&local_38,local_res8);
  }
  TVar4.Reference =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pTVar12 = &param_1->ResourceParameters;
  if ((this->OutVolumeTexture).NumResources != '\0') {
    pFVar10 = param_1->Allocator;
    uVar1 = (this->OutVolumeTexture).BaseIndex;
    pFVar2 = pFVar10->AttachedParameters;
    if ((this->OutVolumeTexture).Type == BindlessUAV) {
      local_48 = uVar1;
      local_30 = param_3;
      if (pFVar2 != param_1) {
        if ((pFVar2 != (FRHIBatchedShaderParameters *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!AttachedParameters",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                               ,0x82,
                               L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10->AttachedParameters = param_1;
      }
      pFVar10 = param_1->Allocator;
      pTVar12 = &param_1->BindlessParameters;
      puVar9 = &local_48;
      ppFVar13 = &local_30;
      pFVar11 = &pFVar10->BindlessParameters;
    }
    else {
      local_46[0] = uVar1;
      local_28 = param_3;
      if (pFVar2 != param_1) {
        if ((pFVar2 != (FRHIBatchedShaderParameters *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!AttachedParameters",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                               ,0x82,
                               L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10->AttachedParameters = param_1;
      }
      pFVar10 = param_1->Allocator;
      puVar9 = local_46;
      ppFVar13 = &local_28;
      pFVar11 = &pFVar10->ResourceParameters;
    }
    FRHIBatchedShaderParametersAllocator::
    Emplace<FRHIShaderParameterResource,FRHIUnorderedAccessView_*_&,unsigned_short_&>
              (pFVar10,pFVar11,pTVar12,ppFVar13,puVar9);
  }
  SetTextureParameter(param_1,&this->AtlasTexture,&this->AtlasTextureSampler,TVar4.Reference,param_4
                     );
  SetTextureParameter(param_1,&this->NoiseVolumeTexture,&this->NoiseVolumeTextureSampler,
                      TVar4.Reference,param_5);
  return;
}

// ShouldCompilePermutationImpl @ 1489806e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FCompositeAnimatedVectorFieldCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldPrecachePermutationImpl @ 1489807b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FCompositeAnimatedVectorFieldCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 148981da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FCompositeAnimatedVectorFieldCS::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = u_FCompositeAnima;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FCompositeAnimatedVectorFieldCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutVolumeTextureSampler";
    DAT_1552587b2 = Freeze::FindFieldNameLength(L"OutVolumeTextureSampler");
    _DAT_155258790 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155258798 = ::TypeBuffer[0x10];
    DAT_155258798_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155258798_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155258798_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155258798_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155258798_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155258798_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155258798_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552587a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552587a8 = 0xf4;
    _DAT_1552587ac = 1;
    _DAT_1552587b0 = 0;
    `public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutVolumeTexture";
    DAT_155258782 = Freeze::FindFieldNameLength(L"OutVolumeTexture");
    _DAT_155258760 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155258768 = ::TypeBuffer[0x10];
    DAT_155258768_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155258768_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155258768_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155258768_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155258768_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155258768_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155258768_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155258770 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155258778 = 0xf0;
    _DAT_15525877c = 1;
    _DAT_155258780 = 0;
    `public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NoiseVolumeTextureSampler";
    DAT_155258752 = Freeze::FindFieldNameLength(L"NoiseVolumeTextureSampler");
    _DAT_155258730 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155258738 = ::TypeBuffer[0x10];
    DAT_155258738_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155258738_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155258738_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155258738_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155258738_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155258738_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155258738_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155258740 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155258748 = 0xec;
    _DAT_15525874c = 1;
    _DAT_155258750 = 0;
    `public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NoiseVolumeTexture";
    DAT_155258722 = Freeze::FindFieldNameLength(L"NoiseVolumeTexture");
    _DAT_155258700 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155258708 = ::TypeBuffer[0x10];
    DAT_155258708_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155258708_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155258708_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155258708_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155258708_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155258708_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155258708_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155258710 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155258718 = 0xe8;
    _DAT_15525871c = 1;
    _DAT_155258720 = 0;
    `public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AtlasTextureSampler";
    DAT_1552586f2 = Freeze::FindFieldNameLength(L"AtlasTextureSampler");
    _DAT_1552586d0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1552586d8 = ::TypeBuffer[0x10];
    DAT_1552586d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552586d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552586d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552586d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552586d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552586d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552586d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552586e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552586e8 = 0xe4;
    _DAT_1552586ec = 1;
    _DAT_1552586f0 = 0;
    `public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AtlasTexture";
    DAT_1552586c2 = Freeze::FindFieldNameLength(L"AtlasTexture");
    _DAT_1552586a0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1552586a8 = ::TypeBuffer[0x10];
    DAT_1552586a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552586a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552586a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552586a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552586a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552586a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552586a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCompositeAnimatedVectorFieldCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1552586b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552586b8 = 0xe0;
    _DAT_1552586bc = 1;
    _DAT_1552586c0 = 0;
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

