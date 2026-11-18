// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FSimpleElementPS @ 1485a4a30

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

FSimpleElementPS * __thiscall
FSimpleElementPS::FSimpleElementPS
          (FSimpleElementPS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderResourceParameter *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->InTexture;
  this_00->BaseIndex = 0;
  this_00->NumResources = '\0';
  this_00->Type = LooseData;
  (this->InTextureSampler).BaseIndex = 0;
  *(undefined8 *)&(this->InTextureSampler).NumResources = 0;
  (this->TextureComponentReplicateAlpha).BufferIndex = 0;
  (this->TextureComponentReplicateAlpha).BaseIndex = 0;
  (this->TextureComponentReplicateAlpha).NumBytes = 0;
  (this->EditorCompositeDepthTestParameter).BufferIndex = 0;
  *(undefined8 *)&(this->EditorCompositeDepthTestParameter).BaseIndex = 0;
  (this->ScreenToPixel).NumBytes = 0;
  FShaderResourceParameter::Bind(this_00,param_1->ParameterMap,L"InTexture",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->InTextureSampler,param_1->ParameterMap,L"InTextureSampler",SPF_Optional);
  FShaderParameter::Bind
            (&this->TextureComponentReplicate,param_1->ParameterMap,L"TextureComponentReplicate",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->TextureComponentReplicateAlpha,param_1->ParameterMap,
             L"TextureComponentReplicateAlpha",SPF_Optional);
  return this;
}

// ConstructCompiledInstance @ 1485af5c0

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
FSimpleElementPS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FSimpleElementPS *pFVar1;
  
  pFVar1 = ::operator_new(0x100);
  if (pFVar1 != (FSimpleElementPS *)0x0) {
    pFVar1 = FSimpleElementPS(pFVar1,param_1);
    return (FShader *)pFVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1485af9e0

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

FShader * __cdecl FSimpleElementPS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 1485cb130

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

FGlobalShaderType * __cdecl FSimpleElementPS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FSimpleElementPS",
                 L"/Engine/Private/SimpleElementPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x100,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/SimpleElementPixelShader.usf");
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
      atexit(`FSimpleElementPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 1485cbc20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FSimpleElementPS::GetTypeLayout(FSimpleElementPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSimpleElementP;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSimpleElementPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ScreenToPixel";
    DAT_15524358a = Freeze::FindFieldNameLength(L"ScreenToPixel");
    _DAT_155243568 = FShaderParameter::StaticGetTypeLayout();
    DAT_155243570 = ::TypeBuffer[0x10];
    DAT_155243570_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243570_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243570_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243570_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243570_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243570_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243570_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243578 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243580 = 0xfa;
    _DAT_155243584 = 1;
    _DAT_155243588 = 0;
    `public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "EditorCompositeDepthTestParameter";
    DAT_15524355a = Freeze::FindFieldNameLength(L"EditorCompositeDepthTestParameter");
    _DAT_155243538 = FShaderParameter::StaticGetTypeLayout();
    DAT_155243540 = ::TypeBuffer[0x10];
    DAT_155243540_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243540_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243540_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243540_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243540_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243540_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243540_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243548 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243550 = 0xf4;
    _DAT_155243554 = 1;
    _DAT_155243558 = 0;
    `public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureComponentReplicateAlpha";
    DAT_15524352a = Freeze::FindFieldNameLength(L"TextureComponentReplicateAlpha");
    _DAT_155243508 = FShaderParameter::StaticGetTypeLayout();
    DAT_155243510 = ::TypeBuffer[0x10];
    DAT_155243510_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243510_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243510_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243510_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243510_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243510_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243510_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243518 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243520 = 0xee;
    _DAT_155243524 = 1;
    _DAT_155243528 = 0;
    `public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureComponentReplicate";
    DAT_1552434fa = Freeze::FindFieldNameLength(L"TextureComponentReplicate");
    _DAT_1552434d8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1552434e0 = ::TypeBuffer[0x10];
    DAT_1552434e0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552434e0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552434e0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552434e0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552434e0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552434e0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552434e0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552434e8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552434f0 = 0xe8;
    _DAT_1552434f4 = 1;
    _DAT_1552434f8 = 0;
    `public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InTextureSampler";
    DAT_1552434ca = Freeze::FindFieldNameLength(L"InTextureSampler");
    _DAT_1552434a8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1552434b0 = ::TypeBuffer[0x10];
    DAT_1552434b0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552434b0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552434b0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552434b0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552434b0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552434b0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552434b0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552434b8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552434c0 = 0xe4;
    _DAT_1552434c4 = 1;
    _DAT_1552434c8 = 0;
    `public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InTexture";
    DAT_15524349a = Freeze::FindFieldNameLength(L"InTexture");
    _DAT_155243478 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155243480 = ::TypeBuffer[0x10];
    DAT_155243480_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243480_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243480_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243480_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243480_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243480_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243480_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155243488 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243490 = 0xe0;
    _DAT_155243494 = 1;
    _DAT_155243498 = 0;
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

// InternalDestroy @ 1485cddb0

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
FSimpleElementPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x100);
  return;
}

// SetEditorCompositingParameters @ 1485d8580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSimpleElementPS::SetEditorCompositingParameters
          (FSimpleElementPS *this,FRHIBatchedShaderParameters *param_1,FSceneView *param_2)

{
  TUniformBufferRef<FViewUniformShaderParameters> TVar1;
  FShaderParametersMetadata *pFVar2;
  FHashedName FVar3;
  FShaderUniformBufferParameter *pFVar4;
  FHashedName local_res18;
  FHashedName local_res20;
  
  if (param_2 != (FSceneView *)0x0) {
    TVar1 = param_2->ViewUniformBuffer;
    pFVar2 = FViewUniformShaderParameters::GetStructMetadata();
    FHashedName::FHashedName(&local_res18,&pFVar2->ShaderVariableHashedName);
    FVar3.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res18);
    pFVar4 = FShader::GetUniformBufferParameter((FShader *)this,FVar3);
    SetUniformBufferParameter(param_1,pFVar4,(FRHIUniformBuffer *)TVar1);
    return;
  }
  pFVar2 = FViewUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_res18,&pFVar2->ShaderVariableHashedName);
  FVar3.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res18);
  pFVar4 = FShader::GetUniformBufferParameter((FShader *)this,FVar3);
  SetUniformBufferParameter(param_1,pFVar4,(FRHIUniformBuffer *)0x0);
  return;
}

// SetParameters @ 1485d97e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSimpleElementPS::SetParameters
          (FSimpleElementPS *this,FRHIBatchedShaderParameters *param_1,FSceneView *param_2,
          FTexture *param_3)

{
  TUniformBufferRef<FViewUniformShaderParameters> TVar1;
  FShaderParametersMetadata *pFVar2;
  FHashedName FVar3;
  FShaderUniformBufferParameter *pFVar4;
  FHashedName local_res18;
  FHashedName local_18 [2];
  
  if (param_2 == (FSceneView *)0x0) {
    pFVar2 = FViewUniformShaderParameters::GetStructMetadata();
    FHashedName::FHashedName(&local_res18,&pFVar2->ShaderVariableHashedName);
    FVar3.Hash = (ulong64)FHashedName::FHashedName(local_18,&local_res18);
    pFVar4 = FShader::GetUniformBufferParameter((FShader *)this,FVar3);
    SetUniformBufferParameter(param_1,pFVar4,(FRHIUniformBuffer *)0x0);
  }
  else {
    TVar1 = param_2->ViewUniformBuffer;
    pFVar2 = FViewUniformShaderParameters::GetStructMetadata();
    FHashedName::FHashedName(&local_res18,&pFVar2->ShaderVariableHashedName);
    FVar3.Hash = (ulong64)FHashedName::FHashedName(local_18,&local_res18);
    pFVar4 = FShader::GetUniformBufferParameter((FShader *)this,FVar3);
    SetUniformBufferParameter(param_1,pFVar4,(FRHIUniformBuffer *)TVar1);
  }
  SetParameters(this,param_1,param_3);
  return;
}

// SetParameters @ 1485d98b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSimpleElementPS::SetParameters
          (FSimpleElementPS *this,FRHIBatchedShaderParameters *param_1,FTexture *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  SetTextureParameter(param_1,&this->InTexture,&this->InTextureSampler,param_2);
  if (param_2->bGreyScaleFormat == false) {
    puVar2 = &local_18;
    local_18 = 0;
    uStack_10 = 0;
  }
  else {
    local_28 = ___xmm_0000000000000000000000003f800000;
    uStack_20 = _UNK_1506894f8;
    puVar2 = &local_28;
  }
  uVar1 = (this->TextureComponentReplicate).NumBytes;
  uVar3 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar3 = 0x10;
  }
  if (uVar3 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->TextureComponentReplicate).BufferIndex,
               (uint)(this->TextureComponentReplicate).BaseIndex,uVar3,puVar2);
  }
  if (param_2->bGreyScaleFormat == false) {
    puVar2 = &local_28;
    local_28 = ___xmm_3f800000000000000000000000000000;
    uStack_20 = _UNK_150689648;
  }
  else {
    local_18 = ___xmm_0000000000000000000000003f800000;
    uStack_10 = _UNK_1506894f8;
    puVar2 = &local_18;
  }
  uVar1 = (this->TextureComponentReplicateAlpha).NumBytes;
  uVar3 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar3 = 0x10;
  }
  if (uVar3 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->TextureComponentReplicateAlpha).BufferIndex,
               (uint)(this->TextureComponentReplicateAlpha).BaseIndex,uVar3,puVar2);
  }
  return;
}

// ShouldCompilePermutationImpl @ 1485dbfa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FSimpleElementPS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  return true;
}

// ShouldPrecachePermutationImpl @ 1485dc070

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FSimpleElementPS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 1485dd790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FSimpleElementPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSimpleElementP;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSimpleElementPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ScreenToPixel";
    DAT_15524358a = Freeze::FindFieldNameLength(L"ScreenToPixel");
    _DAT_155243568 = FShaderParameter::StaticGetTypeLayout();
    DAT_155243570 = ::TypeBuffer[0x10];
    DAT_155243570_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243570_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243570_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243570_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243570_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243570_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243570_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243578 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243580 = 0xfa;
    _DAT_155243584 = 1;
    _DAT_155243588 = 0;
    `public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "EditorCompositeDepthTestParameter";
    DAT_15524355a = Freeze::FindFieldNameLength(L"EditorCompositeDepthTestParameter");
    _DAT_155243538 = FShaderParameter::StaticGetTypeLayout();
    DAT_155243540 = ::TypeBuffer[0x10];
    DAT_155243540_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243540_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243540_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243540_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243540_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243540_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243540_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243548 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243550 = 0xf4;
    _DAT_155243554 = 1;
    _DAT_155243558 = 0;
    `public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureComponentReplicateAlpha";
    DAT_15524352a = Freeze::FindFieldNameLength(L"TextureComponentReplicateAlpha");
    _DAT_155243508 = FShaderParameter::StaticGetTypeLayout();
    DAT_155243510 = ::TypeBuffer[0x10];
    DAT_155243510_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243510_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243510_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243510_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243510_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243510_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243510_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243518 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243520 = 0xee;
    _DAT_155243524 = 1;
    _DAT_155243528 = 0;
    `public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureComponentReplicate";
    DAT_1552434fa = Freeze::FindFieldNameLength(L"TextureComponentReplicate");
    _DAT_1552434d8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1552434e0 = ::TypeBuffer[0x10];
    DAT_1552434e0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552434e0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552434e0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552434e0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552434e0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552434e0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552434e0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552434e8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552434f0 = 0xe8;
    _DAT_1552434f4 = 1;
    _DAT_1552434f8 = 0;
    `public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InTextureSampler";
    DAT_1552434ca = Freeze::FindFieldNameLength(L"InTextureSampler");
    _DAT_1552434a8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1552434b0 = ::TypeBuffer[0x10];
    DAT_1552434b0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552434b0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552434b0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552434b0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552434b0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552434b0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552434b0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552434b8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552434c0 = 0xe4;
    _DAT_1552434c4 = 1;
    _DAT_1552434c8 = 0;
    `public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InTexture";
    DAT_15524349a = Freeze::FindFieldNameLength(L"InTexture");
    _DAT_155243478 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155243480 = ::TypeBuffer[0x10];
    DAT_155243480_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243480_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243480_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243480_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243480_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243480_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243480_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155243488 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243490 = 0xe0;
    _DAT_155243494 = 1;
    _DAT_155243498 = 0;
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

