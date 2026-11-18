// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// FCubemapTexturePropertiesPS @ 147a24780

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

FCubemapTexturePropertiesPS * __thiscall
FCubemapTexturePropertiesPS::FCubemapTexturePropertiesPS
          (FCubemapTexturePropertiesPS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderResourceParameter *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->CubeTexture;
  this_00->BaseIndex = 0;
  this_00->NumResources = '\0';
  this_00->Type = LooseData;
  (this->CubeTextureSampler).BaseIndex = 0;
  *(undefined8 *)&(this->CubeTextureSampler).NumResources = 0;
  (this->ColorWeights).BufferIndex = 0;
  (this->ColorWeights).BaseIndex = 0;
  (this->ColorWeights).NumBytes = 0;
  (this->Gamma).BufferIndex = 0;
  *(undefined8 *)&(this->Gamma).BaseIndex = 0;
  *(undefined8 *)&(this->NumSlices).NumBytes = 0;
  (this->ViewMatrix).BufferIndex = 0;
  (this->ViewMatrix).BaseIndex = 0;
  (this->ViewMatrix).NumBytes = 0;
  FShaderResourceParameter::Bind(this_00,param_1->ParameterMap,L"CubeTexture",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->CubeTextureSampler,param_1->ParameterMap,L"CubeTextureSampler",SPF_Optional);
  FShaderParameter::Bind(&this->ColorWeights,param_1->ParameterMap,L"ColorWeights",SPF_Optional);
  FShaderParameter::Bind
            (&this->PackedProperties0,param_1->ParameterMap,L"PackedProperties0",SPF_Optional);
  FShaderParameter::Bind(&this->Gamma,param_1->ParameterMap,L"Gamma",SPF_Optional);
  FShaderParameter::Bind(&this->NumSlices,param_1->ParameterMap,L"NumSlices",SPF_Optional);
  FShaderParameter::Bind(&this->SliceIndex,param_1->ParameterMap,L"SliceIndex",SPF_Optional);
  FShaderParameter::Bind(&this->ViewMatrix,param_1->ParameterMap,L"ViewMatrix",SPF_Optional);
  return this;
}

// FCubemapTexturePropertiesPS @ 147a248e0

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

FCubemapTexturePropertiesPS * __thiscall
FCubemapTexturePropertiesPS::FCubemapTexturePropertiesPS(FCubemapTexturePropertiesPS *this)

{
  FShader::FShader((FShader *)this);
  (this->CubeTexture).BaseIndex = 0;
  *(undefined8 *)&(this->CubeTexture).NumResources = 0;
  *(undefined8 *)&(this->PackedProperties0).BaseIndex = 0;
  *(undefined8 *)&(this->ColorWeights).NumBytes = 0;
  (this->NumSlices).BufferIndex = 0;
  (this->NumSlices).BaseIndex = 0;
  (this->NumSlices).NumBytes = 0;
  (this->SliceIndex).BufferIndex = 0;
  *(undefined8 *)&(this->SliceIndex).BaseIndex = 0;
  (this->ViewMatrix).NumBytes = 0;
  return this;
}

// ConstructCompiledInstance @ 147a39e60

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
FCubemapTexturePropertiesPS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4 = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayMax + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x6 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    *(undefined4 *)&this[1].Bindings.BindlessResourceParameters.AllocatorInstance.field_0x6 = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.BindlessResourceParameters.ArrayNum + 2) = 0;
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)(this + 1),param_1->ParameterMap,L"CubeTexture",
               SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4,
               param_1->ParameterMap,L"CubeTextureSampler",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1].Bindings.Parameters.ArrayMax + 2),
               param_1->ParameterMap,L"ColorWeights",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.Parameters.ArrayNum,param_1->ParameterMap,
               L"PackedProperties0",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x4,
               param_1->ParameterMap,L"Gamma",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2),
               param_1->ParameterMap,L"NumSlices",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.BindlessResourceParameters,
               param_1->ParameterMap,L"SliceIndex",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)
               &this[1].Bindings.BindlessResourceParameters.AllocatorInstance.field_0x6,
               param_1->ParameterMap,L"ViewMatrix",SPF_Optional);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 147a3a140

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

FShader * __cdecl FCubemapTexturePropertiesPS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.BindlessResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.BindlessResourceParameters.ArrayNum + 2) = 0;
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 147a59840

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

FGlobalShaderType * __cdecl FCubemapTexturePropertiesPS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FCubemapTexturePropertiesPS",
                 L"/Engine/Private/SimpleElementPixelShader.usf",L"CubemapTextureProperties",3,4,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
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
      atexit(`FCubemapTexturePropertiesPS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 147a5b220

FTypeLayoutDesc * __thiscall
FCubemapTexturePropertiesPS::GetTypeLayout(FCubemapTexturePropertiesPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FCubemapTexture;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FCubemapTexturePropertiesPS,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<1>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
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

// Initialize @ 147a5d8e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FCubemapTexturePropertiesPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ViewMatrix";
  DAT_155201b7a = Freeze::FindFieldNameLength(L"ViewMatrix");
  _DAT_155201b58 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155201b70 = 0x106;
  _DAT_155201b68 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155201b74 = 1;
  _DAT_155201b78 = 0;
  _DAT_155201b60 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SliceIndex";
  DAT_155201b4a = Freeze::FindFieldNameLength(L"SliceIndex");
  _DAT_155201b28 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155201b38 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155201b40 = 0x100;
  _DAT_155201b44 = 1;
  _DAT_155201b48 = 0;
  _DAT_155201b30 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "NumSlices";
  DAT_155201b1a = Freeze::FindFieldNameLength(L"NumSlices");
  _DAT_155201af8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155201b08 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155201b10 = 0xfa;
  _DAT_155201b14 = 1;
  _DAT_155201b18 = 0;
  _DAT_155201b00 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Gamma";
  DAT_155201aea = Freeze::FindFieldNameLength(L"Gamma");
  _DAT_155201ac8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155201ad8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155201ae0 = 0xf4;
  _DAT_155201ae4 = 1;
  _DAT_155201ae8 = 0;
  _DAT_155201ad0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ColorWeights";
  DAT_155201aba = Freeze::FindFieldNameLength(L"ColorWeights");
  _DAT_155201a98 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155201aa8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155201ab0 = 0xee;
  _DAT_155201ab4 = 1;
  _DAT_155201ab8 = 0;
  _DAT_155201aa0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PackedProperties0";
  DAT_155201a8a = Freeze::FindFieldNameLength(L"PackedProperties0");
  _DAT_155201a68 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155201a78 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155201a80 = 0xe8;
  _DAT_155201a84 = 1;
  _DAT_155201a88 = 0;
  _DAT_155201a70 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "CubeTextureSampler";
  DAT_155201a5a = Freeze::FindFieldNameLength(L"CubeTextureSampler");
  _DAT_155201a38 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_155201a48 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155201a50 = 0xe4;
  _DAT_155201a54 = 1;
  _DAT_155201a58 = 0;
  _DAT_155201a40 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "CubeTexture";
  DAT_155201a2a = Freeze::FindFieldNameLength(L"CubeTexture");
  _DAT_155201a08 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_155201a18 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155201a20 = 0xe0;
  _DAT_155201a24 = 1;
  _DAT_155201a28 = 0;
  _DAT_155201a10 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FCubemapTexturePropertiesPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 147a620a0

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
FCubemapTexturePropertiesPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x110);
  return;
}

// SetParameters @ 147a91c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCubemapTexturePropertiesPS::SetParameters
          (FCubemapTexturePropertiesPS *this,FRHIBatchedShaderParameters *param_1,FTexture *param_2,
          TMatrix<double> *param_3,float param_4,float param_5,bool param_6,TMatrix<float> *param_7,
          bool param_8,float param_9,bool param_10)

{
  ushort uVar1;
  TMatrix<float> *pTVar2;
  int iVar3;
  int iVar4;
  TRefCountPtr<FRHISamplerState> TVar5;
  uint uVar6;
  undefined1 auStackY_c8 [32];
  float local_98 [4];
  float local_88;
  undefined4 local_84;
  undefined8 local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  ulonglong local_38;
  
  pTVar2 = param_7;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (param_2 != (FTexture *)0x0) {
    TVar5.Reference =
         TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    if (!param_10) {
      TVar5.Reference = (param_2->SamplerStateRHI).Reference;
    }
    SetTextureParameter(param_1,&this->CubeTexture,(param_2->TextureRHI).Reference);
    SetSamplerParameter(param_1,&this->CubeTextureSampler,TVar5.Reference);
  }
  local_84 = __real_bf800000;
  if (param_8 != false) {
    local_84 = __real_3f800000;
  }
  uVar1 = (this->PackedProperties0).NumBytes;
  uVar6 = (uint)uVar1;
  local_88 = param_4;
  if (0x10 < uVar1) {
    uVar6 = 0x10;
  }
  local_80 = 0;
  if (uVar6 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PackedProperties0).BufferIndex,
               (uint)(this->PackedProperties0).BaseIndex,uVar6,&local_88);
  }
  uVar1 = (this->ColorWeights).NumBytes;
  uVar6 = (uint)uVar1;
  fStack_70 = (float)param_3->M[0][2];
  fStack_6c = (float)param_3->M[0][3];
  local_78 = (float)param_3->M[0][0];
  fStack_74 = (float)param_3->M[0][1];
  local_68 = (float)param_3->M[1][0];
  fStack_64 = (float)param_3->M[1][1];
  fStack_60 = (float)param_3->M[1][2];
  fStack_5c = (float)param_3->M[1][3];
  fStack_50 = (float)param_3->M[2][2];
  fStack_4c = (float)param_3->M[2][3];
  local_58 = (float)param_3->M[2][0];
  fStack_54 = (float)param_3->M[2][1];
  local_48 = (float)param_3->M[3][0];
  fStack_44 = (float)param_3->M[3][1];
  if (0x40 < uVar1) {
    uVar6 = 0x40;
  }
  fStack_40 = (float)param_3->M[3][2];
  fStack_3c = (float)param_3->M[3][3];
  if (uVar6 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ColorWeights).BufferIndex,(uint)(this->ColorWeights).BaseIndex,
               uVar6,&local_78);
  }
  uVar1 = (this->Gamma).NumBytes;
  uVar6 = (uint)uVar1;
  if (4 < uVar1) {
    uVar6 = 4;
  }
  if (uVar6 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->Gamma).BufferIndex,(uint)(this->Gamma).BaseIndex,uVar6,&param_9)
    ;
  }
  uVar1 = (this->ViewMatrix).NumBytes;
  uVar6 = (uint)uVar1;
  if (0x40 < uVar1) {
    uVar6 = 0x40;
  }
  if (uVar6 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ViewMatrix).BufferIndex,(uint)(this->ViewMatrix).BaseIndex,uVar6
               ,pTVar2);
  }
  if (param_6 != false) {
    if (param_2 == (FTexture *)0x0) {
      iVar3 = 1;
    }
    else {
      iVar3 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
      iVar4 = iVar3 / 6 + (iVar3 >> 0x1f) +
              (int)(((longlong)iVar3 / 6 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f);
      iVar3 = 1;
      if (1 < iVar4) {
        iVar3 = iVar4;
      }
    }
    uVar1 = (this->NumSlices).NumBytes;
    uVar6 = (uint)uVar1;
    local_98[0] = (float)iVar3;
    if (4 < uVar1) {
      uVar6 = 4;
    }
    if (uVar6 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->NumSlices).BufferIndex,(uint)(this->NumSlices).BaseIndex,uVar6
                 ,local_98);
    }
    uVar1 = (this->SliceIndex).NumBytes;
    uVar6 = (uint)uVar1;
    if (4 < uVar1) {
      uVar6 = 4;
    }
    if (uVar6 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->SliceIndex).BufferIndex,(uint)(this->SliceIndex).BaseIndex,
                 uVar6,&param_5);
    }
  }
  return;
}

// ShouldCompilePermutation @ 147a93c00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FCubemapTexturePropertiesPS::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *(ushort *)param_1;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xf4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bIsPC == 0) {
    return false;
  }
  uVar2 = *(uint *)&param_1->field_0x4;
  uVar7 = (int)uVar2 / 2;
  if (((int)uVar2 % 2 != 0) && ((int)uVar2 % 2 != 1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId == 0 || PermutationId == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x4c,L"Invalid shader permutation dimension id %i.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar6 = uVar7 & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  if ((uVar6 != 0) && (uVar6 != 1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId == 0 || PermutationId == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x4c,L"Invalid shader permutation dimension id %i.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if ((int)uVar7 / 2 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0xf6,L"Invalid shader permutation id %i.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (1 < uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (3 < uVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (uVar6 == 1) {
    bVar4 = IsFeatureLevelSupported((FStaticShaderPlatform)*(EShaderPlatform *)param_1,SM5);
    return bVar4;
  }
  return true;
}

// ShouldCompilePermutationImpl @ 147a93ef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FCubemapTexturePropertiesPS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xf4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bIsPC == 0) {
    return false;
  }
  uVar2 = param_1->PermutationId;
  uVar7 = (int)uVar2 / 2;
  if (((int)uVar2 % 2 != 0) && ((int)uVar2 % 2 != 1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId == 0 || PermutationId == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x4c,L"Invalid shader permutation dimension id %i.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar6 = uVar7 & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  if ((uVar6 != 0) && (uVar6 != 1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId == 0 || PermutationId == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x4c,L"Invalid shader permutation dimension id %i.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if ((int)uVar7 / 2 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0xf6,L"Invalid shader permutation id %i.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (1 < uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (3 < uVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (uVar6 == 1) {
    bVar4 = IsFeatureLevelSupported((FStaticShaderPlatform)param_1->Platform,SM5);
    return bVar4;
  }
  return true;
}

// ShouldPrecachePermutationImpl @ 147a94020

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FCubemapTexturePropertiesPS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 147a96f20

FTypeLayoutDesc * __cdecl FCubemapTexturePropertiesPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FCubemapTexture;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FCubemapTexturePropertiesPS,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<1>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
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

