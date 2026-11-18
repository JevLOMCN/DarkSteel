// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 11

// FDeferredDecalPS @ 1447f3440

FDeferredDecalPS * __thiscall
FDeferredDecalPS::FDeferredDecalPS(FDeferredDecalPS *this,CompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParametersMetadata *pFVar1;
  
  FMaterialShader::FMaterialShader((FMaterialShader *)this,param_1);
  *(undefined8 *)&(this->DecalColorParam).NumBytes = 0xffffffffffff0000;
  this_00 = &this->DecalPositionHigh;
  (this->SvPositionToDecal).BufferIndex = 0;
  (this->SvPositionToDecal).BaseIndex = 0;
  (this->SvPositionToDecal).NumBytes = 0;
  (this->RightEyeSvPositionToDecal).BufferIndex = 0;
  (this->RightEyeSvPositionToDecal).BaseIndex = 0;
  (this->RightEyeSvPositionToDecal).NumBytes = 0;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->DecalPositionHigh).NumBytes = 0;
  (this->DecalToWorld).BufferIndex = 0;
  (this->DecalToWorld).BaseIndex = 0;
  (this->DecalToWorld).NumBytes = 0;
  (this->DecalToWorldInvScale).BufferIndex = 0;
  *(undefined8 *)&(this->DecalToWorldInvScale).BaseIndex = 0;
  *(undefined8 *)&(this->DecalOrientation).NumBytes = 0;
  (this->DecalColorParam).BufferIndex = 0;
  (this->DecalColorParam).BaseIndex = 0;
  FShaderParameter::Bind
            (this_00,(FShaderParameterMap *)param_1->_padding_,L"DecalPositionHigh",SPF_Optional);
  FShaderParameter::Bind
            (&this->SvPositionToDecal,(FShaderParameterMap *)param_1->_padding_,L"SvPositionToDecal"
             ,SPF_Optional);
  FShaderParameter::Bind
            (&this->RightEyeSvPositionToDecal,(FShaderParameterMap *)param_1->_padding_,
             L"RightEyeSvPositionToDecal",SPF_Optional);
  FShaderParameter::Bind
            (&this->DecalToWorld,(FShaderParameterMap *)param_1->_padding_,L"DecalToWorld",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->DecalToWorldInvScale,(FShaderParameterMap *)param_1->_padding_,
             L"DecalToWorldInvScale",SPF_Optional);
  FShaderParameter::Bind
            (&this->DecalOrientation,(FShaderParameterMap *)param_1->_padding_,L"DecalOrientation",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->DecalParams,(FShaderParameterMap *)param_1->_padding_,L"DecalParams",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->DecalColorParam,(FShaderParameterMap *)param_1->_padding_,L"DecalColorParam",
             SPF_Optional);
  pFVar1 = FMobileBasePassUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->MobileBasePassUniformBuffer,(FShaderParameterMap *)param_1->_padding_,
             pFVar1->ShaderVariableName,SPF_Optional);
  pFVar1 = FMobileDirectionalLightShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->MobileDirectionLightBufferParam,(FShaderParameterMap *)param_1->_padding_,
             pFVar1->ShaderVariableName,SPF_Optional);
  pFVar1 = FMobileReflectionCaptureShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->MobileReflectionCaptureParam,(FShaderParameterMap *)param_1->_padding_,
             pFVar1->ShaderVariableName,SPF_Optional);
  return this;
}

// ConstructCompiledInstance @ 144805da0

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
FDeferredDecalPS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FDeferredDecalPS *pFVar1;
  
  pFVar1 = ::operator_new(0x130);
  if (pFVar1 != (FDeferredDecalPS *)0x0) {
    pFVar1 = FDeferredDecalPS(pFVar1,(CompiledShaderInitializerType *)param_1);
    return (FShader *)pFVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1448064c0

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

FShader * __cdecl FDeferredDecalPS::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x130);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 144818e70

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

FMaterialShaderType * __cdecl FDeferredDecalPS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Material,pFVar4,L"FDeferredDecalPS",
                 L"/Engine/Private/DeferredDecal.usf",L"MainPS",3,1,ConstructSerializedInstance,
                 ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x130,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/DeferredDecal.usf");
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                           ,0x7e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FDeferredDecalPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 14481b5e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FDeferredDecalPS::GetTypeLayout(FDeferredDecalPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FDeferredDecalP;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FDeferredDecalPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<4>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DecalPositionHigh";
    DAT_15509af6a = Freeze::FindFieldNameLength(L"DecalPositionHigh");
    _DAT_15509af48 = FShaderParameter::StaticGetTypeLayout();
    DAT_15509af50 = ::TypeBuffer[0x10];
    DAT_15509af50_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15509af50_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15509af50_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15509af50_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15509af50_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15509af50_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15509af50_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15509af58 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15509af60 = 0x104;
    _DAT_15509af64 = 1;
    _DAT_15509af68 = 0;
    `public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "RightEyeSvPositionToDecal";
    DAT_15509af3a = Freeze::FindFieldNameLength(L"RightEyeSvPositionToDecal");
    _DAT_15509af18 = FShaderParameter::StaticGetTypeLayout();
    DAT_15509af20 = ::TypeBuffer[0x10];
    DAT_15509af20_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15509af20_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15509af20_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15509af20_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15509af20_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15509af20_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15509af20_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15509af28 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15509af30 = 0xfe;
    _DAT_15509af34 = 1;
    _DAT_15509af38 = 0;
    `public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SvPositionToDecal";
    DAT_15509af0a = Freeze::FindFieldNameLength(L"SvPositionToDecal");
    _DAT_15509aee8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15509aef0 = ::TypeBuffer[0x10];
    DAT_15509aef0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15509aef0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15509aef0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15509aef0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15509aef0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15509aef0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15509aef0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15509aef8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15509af00 = 0xf8;
    _DAT_15509af04 = 1;
    _DAT_15509af08 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMaterialShader::StaticGetTypeLayout();
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
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 14481bee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FDeferredDecalPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "MobileReflectionCaptureParam";
  DAT_15509b0ea = Freeze::FindFieldNameLength(L"MobileReflectionCaptureParam");
  _DAT_15509b0c8 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_15509b0e0 = 300;
  _DAT_15509b0d8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15509b0e4 = 1;
  _DAT_15509b0e8 = 0;
  _DAT_15509b0d0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "MobileDirectionLightBufferParam";
  DAT_15509b0ba = Freeze::FindFieldNameLength(L"MobileDirectionLightBufferParam");
  _DAT_15509b098 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_15509b0a8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15509b0b0 = 0x12a;
  _DAT_15509b0b4 = 1;
  _DAT_15509b0b8 = 0;
  _DAT_15509b0a0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "MobileBasePassUniformBuffer";
  DAT_15509b08a = Freeze::FindFieldNameLength(L"MobileBasePassUniformBuffer");
  _DAT_15509b068 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_15509b078 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15509b080 = 0x128;
  _DAT_15509b084 = 1;
  _DAT_15509b088 = 0;
  _DAT_15509b070 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "DecalColorParam";
  DAT_15509b05a = Freeze::FindFieldNameLength(L"DecalColorParam");
  _DAT_15509b038 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15509b048 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15509b050 = 0x122;
  _DAT_15509b054 = 1;
  _DAT_15509b058 = 0;
  _DAT_15509b040 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "DecalParams";
  DAT_15509b02a = Freeze::FindFieldNameLength(L"DecalParams");
  _DAT_15509b008 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15509b018 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15509b020 = 0x11c;
  _DAT_15509b024 = 1;
  _DAT_15509b028 = 0;
  _DAT_15509b010 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "DecalOrientation";
  DAT_15509affa = Freeze::FindFieldNameLength(L"DecalOrientation");
  _DAT_15509afd8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15509afe8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15509aff0 = 0x116;
  _DAT_15509aff4 = 1;
  _DAT_15509aff8 = 0;
  _DAT_15509afe0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "DecalToWorldInvScale";
  DAT_15509afca = Freeze::FindFieldNameLength(L"DecalToWorldInvScale");
  _DAT_15509afa8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15509afb8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15509afc0 = 0x110;
  _DAT_15509afc4 = 1;
  _DAT_15509afc8 = 0;
  _DAT_15509afb0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "DecalToWorld";
  DAT_15509af9a = Freeze::FindFieldNameLength(L"DecalToWorld");
  _DAT_15509af78 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15509af88 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15509af90 = 0x10a;
  _DAT_15509af94 = 1;
  _DAT_15509af98 = 0;
  _DAT_15509af80 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 14481cb40

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
FDeferredDecalPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x130);
  return;
}

// SetParameters @ 14482f4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDeferredDecalPS::SetParameters
          (FDeferredDecalPS *this,FRHIBatchedShaderParameters *param_1,FViewInfo *param_2,
          FVisibleDecal *param_3,FMaterialRenderProxy *param_4,FMaterial *param_5,float param_6,
          FScene *param_7)

{
  ushort uVar1;
  FTexture *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FShaderParametersMetadata *pFVar7;
  FHashedName FVar8;
  FShaderUniformBufferParameter *pFVar9;
  TMatrix<double> *this_00;
  FDFMatrix *pFVar10;
  FSceneView *pFVar11;
  int iVar12;
  TUniformBufferRef<FMobileReflectionCaptureShaderParameters> TVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  undefined4 uVar33;
  float fVar34;
  double dVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStackY_698 [32];
  float local_668;
  float local_664;
  float local_660;
  float local_65c;
  float local_658;
  float local_650;
  float local_64c;
  float local_648;
  FHashedName local_640;
  FMaterial *local_638;
  TVector<float>_u_0 local_628;
  undefined8 local_618;
  float local_610;
  undefined8 local_608;
  float local_600;
  undefined8 local_5fc;
  float local_5f4;
  FHashedName local_5f0;
  undefined1 local_5e8 [16];
  undefined8 local_5d8;
  double local_5d0;
  double dStack_5c8;
  double local_5c0;
  TMatrix<double> local_5b8;
  undefined1 local_538 [96];
  double local_4d8;
  double local_4d0;
  double local_4c8;
  double dStack_4c0;
  undefined1 local_4b8 [8];
  float fStack_4b0;
  float fStack_4ac;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  undefined8 local_488;
  undefined8 uStack_480;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  undefined8 local_468;
  undefined8 uStack_460;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  TMatrix<double> local_3f8;
  TMatrix<double> local_378;
  TMatrix<double> local_2f8;
  TMatrix<double> local_278;
  TMatrix<double> local_1f8;
  FDFMatrix local_178;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_698;
  local_638 = param_5;
  pFVar7 = FPrimitiveUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_640,&pFVar7->ShaderVariableHashedName);
  FVar8.Hash = (ulong64)FHashedName::FHashedName(&local_5f0,&local_640);
  pFVar9 = FShader::GetUniformBufferParameter((FShader *)this,FVar8);
  if (pFVar9->BaseIndex != 0xffff) {
    if (GIdentityPrimitiveUniformBuffer._40_8_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformBufferRHI.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                         ,0x65,
                         L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((GIdentityPrimitiveUniformBuffer._40_8_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("UniformBufferRHI.GetReference()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                             ,0x66,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SetUniformBufferParameter
              (param_1,pFVar9,(FRHIUniformBuffer *)GIdentityPrimitiveUniformBuffer._40_8_);
  }
  FMaterialShader::SetParameters
            ((FMaterialShader *)this,param_1,param_4,local_638,(FSceneView *)param_2);
  UE::Math::TTransform<double>::ToMatrixWithScale(&param_3->ComponentTrans,&local_5b8);
  this_00 = UE::Math::TTransform<double>::ToMatrixWithScale(&param_3->ComponentTrans,&local_128);
  UE::Math::TMatrix<double>::Inverse(this_00,&local_2f8);
  local_628._s_0.Z = (float)local_5b8.M[3][2];
  local_628._0_8_ = CONCAT44((float)local_5b8.M[3][1],(float)local_5b8.M[3][0]);
  local_5f4 = (float)(local_5b8.M[3][2] - (double)local_628._s_0.Z);
  local_5fc = CONCAT44((float)(local_5b8.M[3][1] - (double)(float)local_5b8.M[3][1]),
                       (float)(local_5b8.M[3][0] - (double)(float)local_5b8.M[3][0]));
  local_618 = local_628._0_8_;
  local_610 = local_628._s_0.Z;
  local_608 = local_628._0_8_;
  local_600 = local_628._s_0.Z;
  pFVar10 = FDFMatrix::MakeToRelativeWorldMatrix
                      (&local_178,(TVector<float> *)&local_628._s_0,&local_5b8);
  auVar18 = ___xmm_00000000000000003ff0000000000000;
  dVar16 = (param_3->ComponentTrans).Rotation.ZW.m128d_f64[1];
  local_5d8 = 0;
  local_438 = *(undefined8 *)(pFVar10->M).M[0];
  uStack_430 = *(undefined8 *)((pFVar10->M).M[0] + 2);
  local_428 = *(undefined8 *)(pFVar10->M).M[1];
  uStack_420 = *(undefined8 *)((pFVar10->M).M[1] + 2);
  local_418 = *(undefined8 *)(pFVar10->M).M[2];
  uStack_410 = *(undefined8 *)((pFVar10->M).M[2] + 2);
  dVar37 = __xmm_00000000000000003ff0000000000000._8_8_;
  _local_4b8 = *(undefined1 (*) [16])(param_3->ComponentTrans).Rotation.XY.m128d_f64;
  local_408 = *(undefined8 *)(pFVar10->M).M[3];
  uStack_400 = *(undefined8 *)((pFVar10->M).M[3] + 2);
  local_5e8 = ___xmm_00000000000000003ff0000000000000;
  auVar28 = *(undefined1 (*) [16])(param_3->ComponentTrans).Rotation.ZW.m128d_f64;
  dVar4 = auVar28._0_8_;
  auVar17 = blendpd(_local_4b8,auVar28,2);
  auVar35._0_8_ =
       dVar37 * local_4b8 - local_4b8._8_8_ * (double)__xmm_00000000000000003ff0000000000000;
  auVar35._8_8_ = local_4b8._8_8_ * 0.0 - dVar4 * dVar37;
  auVar31._8_4_ = SUB84(auVar35._8_8_,0);
  auVar31._0_8_ = auVar35._0_8_;
  auVar31._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
  auVar15 = blendpd(___xmm_00000000000000003ff0000000000000,ZEXT816(0),2);
  auVar23._0_8_ = auVar15._0_8_ * dVar4 - auVar17._0_8_ * 0.0;
  auVar23._8_8_ = auVar15._8_8_ * auVar28._8_8_ - auVar17._8_8_ * 0.0;
  auVar15 = blendpd(auVar35,auVar23,2);
  dVar30 = auVar31._8_8_ + auVar31._8_8_;
  dVar32 = auVar23._0_8_ + auVar23._0_8_;
  auVar36._0_8_ = auVar15._0_8_ + auVar15._0_8_;
  auVar36._8_8_ = auVar15._8_8_ + auVar15._8_8_;
  auVar15 = *(undefined1 (*) [16])(param_3->ComponentTrans).Rotation.XY.m128d_f64;
  auVar26._8_4_ = SUB84(dVar32,0);
  auVar26._0_8_ = dVar30;
  uVar33 = (undefined4)((ulonglong)dVar32 >> 0x20);
  auVar26._12_4_ = uVar33;
  uVar1 = (this->DecalPositionHigh).NumBytes;
  auVar22._8_4_ = SUB84(dVar32,0);
  auVar22._0_8_ = dVar30;
  auVar22._12_4_ = uVar33;
  auVar23 = blendpd(auVar22,auVar36,2);
  auVar27._0_8_ = auVar26._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar30;
  auVar27._8_8_ = auVar36._0_8_ * auVar15._8_8_ - dVar4 * dVar32;
  auVar17._8_4_ = SUB84(auVar27._8_8_,0);
  auVar17._0_8_ = auVar27._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
  auVar15 = blendpd(auVar15,auVar28,2);
  auVar24._0_8_ = auVar23._0_8_ * dVar4 - auVar15._0_8_ * auVar36._0_8_;
  auVar24._8_8_ = auVar23._8_8_ * auVar28._8_8_ - auVar15._8_8_ * auVar36._8_8_;
  local_5d0 = dVar30 * dVar16 + (double)__xmm_00000000000000003ff0000000000000 + auVar17._8_8_;
  auVar15._8_8_ = dVar32 * dVar16 + dVar37 + auVar24._0_8_;
  local_650 = (float)local_5d0;
  auVar15._0_8_ = auVar15._8_8_;
  local_64c = (float)auVar15._8_8_;
  auVar28 = blendpd(auVar27,auVar24,2);
  local_5c0 = auVar36._0_8_ * dVar16 + auVar28._0_8_;
  local_648 = (float)local_5c0;
  dStack_5c8 = auVar15._8_8_;
  if (uVar1 != 0) {
    uVar14 = (uint)uVar1;
    if (0xc < uVar1) {
      uVar14 = 0xc;
    }
    if (uVar14 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->DecalPositionHigh).BufferIndex,
                 (uint)(this->DecalPositionHigh).BaseIndex,uVar14,&local_618);
    }
  }
  fVar34 = __real_3f800000;
  dVar4 = __real_3ff0000000000000;
  if ((this->SvPositionToDecal).NumBytes != 0) {
    iVar12 = *(int *)&(param_2->ViewRect).field0_0x0;
    iVar6 = *(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 4);
    local_538._48_8_ = 0.0;
    local_538._56_8_ = 0.0;
    fVar21 = (float)iVar12;
    auVar28._0_8_ =
         (double)(__real_3f800000 /
                 (float)(*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 8) - iVar12));
    auVar28._8_8_ = 0;
    local_538._8_8_ = 0.0;
    local_538._32_8_ = 0.0;
    local_538._80_16_ = auVar18;
    dVar16 = (double)(__real_3f800000 /
                     (float)(*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 0xc) - iVar6));
    fVar29 = (float)iVar6;
    local_538._0_8_ = (undefined8)(float)(auVar28._0_8_ + auVar28._0_8_);
    local_4c8 = ___xmm_3ff00000000000000000000000000000;
    dStack_4c0 = _UNK_15061cbc8;
    local_538._16_8_ = 0.0;
    local_538._24_8_ = 0.0;
    fVar29 = fVar29 + fVar29;
    auVar15 = ZEXT416((uint)fVar29);
    local_538._40_8_ = (undefined8)(float)(dVar16 * __real_c000000000000000);
    local_538._64_8_ = 0.0;
    local_538._72_8_ = 0.0;
    local_4d8 = (double)(float)(__real_bff0000000000000 - (double)(fVar21 + fVar21) * auVar28._0_8_)
    ;
    local_4d0 = (double)(float)((double)fVar29 * dVar16 + __real_3ff0000000000000);
    VectorMatrixMultiply
              (&local_278,(TMatrix<double> *)local_538,(TMatrix<double> *)&param_2->_padding_);
    VectorMatrixMultiply(&local_3f8,&local_278,&local_2f8);
    uVar1 = (this->SvPositionToDecal).NumBytes;
    uVar14 = (uint)uVar1;
    local_4a8 = CONCAT44((float)local_3f8.M[1][1],(float)local_3f8.M[1][0]);
    uStack_4a0 = CONCAT44((float)local_3f8.M[1][3],(float)local_3f8.M[1][2]);
    local_4b8._4_4_ = (float)local_3f8.M[0][1];
    local_4b8._0_4_ = (float)local_3f8.M[0][0];
    fStack_4b0 = (float)local_3f8.M[0][2];
    fStack_4ac = (float)local_3f8.M[0][3];
    local_498 = (float)local_3f8.M[2][0];
    fStack_494 = (float)local_3f8.M[2][1];
    fStack_490 = (float)local_3f8.M[2][2];
    fStack_48c = (float)local_3f8.M[2][3];
    local_488 = CONCAT44((float)local_3f8.M[3][1],(float)local_3f8.M[3][0]);
    uStack_480 = CONCAT44((float)local_3f8.M[3][3],(float)local_3f8.M[3][2]);
    if (0x40 < uVar1) {
      uVar14 = 0x40;
    }
    if (uVar14 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->SvPositionToDecal).BufferIndex,
                 (uint)(this->SvPositionToDecal).BaseIndex,uVar14,local_4b8);
    }
    if (((this->RightEyeSvPositionToDecal).NumBytes != 0) &&
       (pFVar11 = FSceneView::GetInstancedSceneView((FSceneView *)param_2),
       pFVar11 != (FSceneView *)0x0)) {
      VectorMatrixMultiply
                (&local_1f8,(TMatrix<double> *)local_538,
                 &(pFVar11->ViewMatrices).InvViewProjectionMatrix);
      VectorMatrixMultiply(&local_378,&local_1f8,&local_2f8);
      local_478 = (float)local_378.M[0][0];
      fStack_474 = (float)local_378.M[0][1];
      uVar1 = (this->RightEyeSvPositionToDecal).NumBytes;
      uVar14 = (uint)uVar1;
      if (0x40 < uVar1) {
        uVar14 = 0x40;
      }
      local_468 = CONCAT44((float)local_378.M[1][1],(float)local_378.M[1][0]);
      fStack_470 = (float)local_378.M[0][2];
      fStack_46c = (float)local_378.M[0][3];
      uStack_460 = CONCAT44((float)local_378.M[1][3],(float)local_378.M[1][2]);
      local_458 = (float)local_378.M[2][0];
      fStack_454 = (float)local_378.M[2][1];
      fStack_450 = (float)local_378.M[2][2];
      fStack_44c = (float)local_378.M[2][3];
      local_448 = CONCAT44((float)local_378.M[3][1],(float)local_378.M[3][0]);
      uStack_440 = CONCAT44((float)local_378.M[3][3],(float)local_378.M[3][2]);
      if (uVar14 != 0) {
        FRHIBatchedShaderParameters::SetShaderParameter
                  (param_1,(uint)(this->RightEyeSvPositionToDecal).BufferIndex,
                   (uint)(this->RightEyeSvPositionToDecal).BaseIndex,uVar14,&local_478);
      }
    }
  }
  uVar1 = (this->DecalToWorld).NumBytes;
  if (uVar1 != 0) {
    uVar14 = (uint)uVar1;
    if (0x40 < uVar1) {
      uVar14 = 0x40;
    }
    if (uVar14 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->DecalToWorld).BufferIndex,(uint)(this->DecalToWorld).BaseIndex
                 ,uVar14,&local_438);
    }
  }
  if ((this->DecalToWorldInvScale).NumBytes != 0) {
    auVar25._8_8_ = 0;
    auVar25._0_8_ = __real_3e45798ee0000000;
    auVar18._0_8_ =
         local_5b8.M[0][0] * local_5b8.M[0][0] + local_5b8.M[0][1] * local_5b8.M[0][1] +
         local_5b8.M[0][2] * local_5b8.M[0][2];
    auVar18._8_8_ = 0;
    if (auVar18._0_8_ <= __real_3e45798ee0000000) {
      dVar16 = 0.0;
    }
    else {
      auVar28 = sqrtpd(auVar28,auVar18);
      dVar16 = auVar28._0_8_;
    }
    auVar19._0_8_ =
         local_5b8.M[1][0] * local_5b8.M[1][0] + local_5b8.M[1][1] * local_5b8.M[1][1] +
         local_5b8.M[1][2] * local_5b8.M[1][2];
    auVar19._8_8_ = 0;
    if (auVar19._0_8_ <= __real_3e45798ee0000000) {
      dVar30 = 0.0;
    }
    else {
      auVar28 = sqrtpd(auVar15,auVar19);
      dVar30 = auVar28._0_8_;
    }
    auVar20._0_8_ =
         local_5b8.M[2][0] * local_5b8.M[2][0] + local_5b8.M[2][1] * local_5b8.M[2][1] +
         local_5b8.M[2][2] * local_5b8.M[2][2];
    auVar20._8_8_ = 0;
    if (auVar20._0_8_ <= __real_3e45798ee0000000) {
      dVar32 = 0.0;
    }
    else {
      auVar28 = sqrtpd(auVar25,auVar20);
      dVar32 = auVar28._0_8_;
    }
    dVar37 = __real_47eff933c0000000;
    if (dVar16 != 0.0) {
      dVar37 = dVar4 / dVar16;
    }
    dVar16 = __real_47eff933c0000000;
    if (dVar30 != 0.0) {
      dVar16 = dVar4 / dVar30;
    }
    dVar30 = __real_47eff933c0000000;
    if (dVar32 != 0.0) {
      dVar30 = dVar4 / dVar32;
    }
    uVar1 = (this->DecalToWorldInvScale).NumBytes;
    uVar14 = (uint)uVar1;
    local_660 = (float)dVar37;
    if (0xc < uVar1) {
      uVar14 = 0xc;
    }
    local_65c = (float)dVar16;
    local_658 = (float)dVar30;
    if (uVar14 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->DecalToWorldInvScale).BufferIndex,
                 (uint)(this->DecalToWorldInvScale).BaseIndex,uVar14,&local_660);
    }
  }
  uVar1 = (this->DecalOrientation).NumBytes;
  if (uVar1 != 0) {
    uVar14 = (uint)uVar1;
    if (0xc < uVar1) {
      uVar14 = 0xc;
    }
    if (uVar14 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->DecalOrientation).BufferIndex,
                 (uint)(this->DecalOrientation).BaseIndex,uVar14,&local_650);
    }
  }
  dVar16 = *(double *)(param_2->_padding_ + 0x90);
  if (dVar16 != 0.0) {
    dVar30 = (double)param_3->InvFadeInDuration * dVar16 +
             (double)param_3->FadeInStartDelayNormalized;
    dVar16 = (double)param_3->FadeStartDelayNormalized - (double)param_3->InvFadeDuration * dVar16;
    if (dVar16 <= dVar30) {
      dVar30 = dVar16;
    }
    if (dVar4 <= dVar30) {
      dVar30 = dVar4;
    }
    if (dVar30 <= 0.0) {
      dVar30 = 0.0;
    }
    fVar34 = (float)dVar30;
  }
  uVar1 = (this->DecalParams).NumBytes;
  uVar14 = (uint)uVar1;
  local_668 = param_6;
  if (8 < uVar1) {
    uVar14 = 8;
  }
  local_664 = fVar34;
  if (uVar14 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->DecalParams).BufferIndex,(uint)(this->DecalParams).BaseIndex,
               uVar14,&local_668);
  }
  uVar1 = (this->DecalColorParam).NumBytes;
  uVar14 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar14 = 0x10;
  }
  if (uVar14 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->DecalColorParam).BufferIndex,
               (uint)(this->DecalColorParam).BaseIndex,uVar14,&param_3->DecalColor);
  }
  if (((this->MobileDirectionLightBufferParam).BaseIndex != 0xffff) && (param_7 != (FScene *)0x0)) {
    iVar12 = 3;
    if (FReadOnlyCVARCache::MobileForwardDecalLightingValue < 3) {
      iVar12 = FReadOnlyCVARCache::MobileForwardDecalLightingValue;
    }
    iVar6 = 1;
    if (1 < iVar12) {
      iVar6 = iVar12;
    }
    SetUniformBufferParameter
              (param_1,&this->MobileDirectionLightBufferParam,
               (FRHIUniformBuffer *)
               (param_7->UniformBuffers).MobileDirectionalLightUniformBuffers[iVar6]);
  }
  if ((this->MobileReflectionCaptureParam).BaseIndex != 0xffff) {
    if ((param_7 == (FScene *)0x0) ||
       ((((param_7->SkyLight == (FSkyLightSceneProxy *)0x0 ||
          (pFVar2 = param_7->SkyLight->ProcessedTexture, pFVar2 == (FTexture *)0x0)) ||
         ((pFVar2->TextureRHI).Reference == (FRHITexture *)0x0)) &&
        (bVar5 = FScene::CanSampleSkyLightRealTimeCaptureData(param_7), !bVar5)))) {
      TVar13 = (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)
               GDefaultMobileReflectionCaptureUniformBuffer._40_8_;
      if (GDefaultMobileReflectionCaptureUniformBuffer._40_8_ == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x65,
                           L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TVar13 = (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)
                 GDefaultMobileReflectionCaptureUniformBuffer._40_8_;
        if ((GDefaultMobileReflectionCaptureUniformBuffer._40_8_ == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("UniformBufferRHI.GetReference()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                               ,0x66,L""),
           TVar13 = (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)
                    GDefaultMobileReflectionCaptureUniformBuffer._40_8_, bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    else {
      TVar13 = (param_7->UniformBuffers).MobileSkyReflectionUniformBuffer;
    }
    SetUniformBufferParameter
              (param_1,&this->MobileReflectionCaptureParam,(FRHIUniformBuffer *)TVar13);
  }
  return;
}

// ShouldCompilePermutationImpl @ 144832fe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FDeferredDecalPS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  FDecalBlendDesc FVar1;
  uint uVar2;
  
  if (param_1[1].PermutationId == 1) {
    FVar1 = DecalRendering::ComputeDecalBlendDesc
                      (param_1->Platform,(FMaterialShaderParameters *)&param_1[1].PermutationId);
    uVar2 = FVar1.Packed >> 8;
    if (((((uVar2 & 2) != 0) || ((uVar2 & 4) != 0)) || ((uVar2 & 8) != 0)) || ((uVar2 & 0x10) != 0))
    {
      return true;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 1448333b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FDeferredDecalPS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 144835300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FDeferredDecalPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FDeferredDecalP;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FDeferredDecalPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<4>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DecalPositionHigh";
    DAT_15509af6a = Freeze::FindFieldNameLength(L"DecalPositionHigh");
    _DAT_15509af48 = FShaderParameter::StaticGetTypeLayout();
    DAT_15509af50 = ::TypeBuffer[0x10];
    DAT_15509af50_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15509af50_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15509af50_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15509af50_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15509af50_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15509af50_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15509af50_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15509af58 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15509af60 = 0x104;
    _DAT_15509af64 = 1;
    _DAT_15509af68 = 0;
    `public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "RightEyeSvPositionToDecal";
    DAT_15509af3a = Freeze::FindFieldNameLength(L"RightEyeSvPositionToDecal");
    _DAT_15509af18 = FShaderParameter::StaticGetTypeLayout();
    DAT_15509af20 = ::TypeBuffer[0x10];
    DAT_15509af20_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15509af20_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15509af20_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15509af20_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15509af20_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15509af20_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15509af20_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15509af28 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15509af30 = 0xfe;
    _DAT_15509af34 = 1;
    _DAT_15509af38 = 0;
    `public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SvPositionToDecal";
    DAT_15509af0a = Freeze::FindFieldNameLength(L"SvPositionToDecal");
    _DAT_15509aee8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15509aef0 = ::TypeBuffer[0x10];
    DAT_15509aef0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15509aef0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15509aef0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15509aef0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15509aef0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15509aef0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15509aef0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDeferredDecalPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15509aef8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15509af00 = 0xf8;
    _DAT_15509af04 = 1;
    _DAT_15509af08 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMaterialShader::StaticGetTypeLayout();
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
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

