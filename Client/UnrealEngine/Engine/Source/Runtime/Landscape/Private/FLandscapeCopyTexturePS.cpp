// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 8

// ConstructCompiledInstance @ 145fcc180

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
FLandscapeCopyTexturePS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

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
              ((FShaderResourceParameter *)(this + 1),param_1->ParameterMap,L"ReadTexture1",
               SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4,
               param_1->ParameterMap,L"ReadTexture1Sampler",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.Parameters.ArrayNum,param_1->ParameterMap,
               L"SourceOffsetAndSizeUV",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1].Bindings.Parameters.ArrayMax + 2),
               param_1->ParameterMap,L"ChannelSwizzleMask",SPF_Optional);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145fcc5f0

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

FShader * __cdecl FLandscapeCopyTexturePS::ConstructSerializedInstance(void)

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

// GetStaticType @ 145fcce20

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

FGlobalShaderType * __cdecl FLandscapeCopyTexturePS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FLandscapeCopyTexturePS",
                 L"/Engine/Private/LandscapeLayersPS.usf",L"CopyTexturePS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xf8,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/LandscapeLayersPS.usf");
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
      atexit(`FLandscapeCopyTexturePS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 145fce5c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FLandscapeCopyTexturePS::GetTypeLayout(FLandscapeCopyTexturePS *this)

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
    ::TypeBuffer._8_8_ = u_FLandscapeCopyT;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLandscapeCopyTexturePS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ChannelSwizzleMaskParam";
    DAT_15519bd82 = Freeze::FindFieldNameLength(L"ChannelSwizzleMaskParam");
    _DAT_15519bd60 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519bd68 = ::TypeBuffer[0x10];
    DAT_15519bd68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519bd68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519bd68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519bd68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519bd68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519bd68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519bd68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519bd70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519bd78 = 0xee;
    _DAT_15519bd7c = 1;
    _DAT_15519bd80 = 0;
    `public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SourceOffsetAndSizeUVParam";
    DAT_15519bd52 = Freeze::FindFieldNameLength(L"SourceOffsetAndSizeUVParam");
    _DAT_15519bd30 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519bd38 = ::TypeBuffer[0x10];
    DAT_15519bd38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519bd38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519bd38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519bd38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519bd38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519bd38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519bd38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519bd40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519bd48 = 0xe8;
    _DAT_15519bd4c = 1;
    _DAT_15519bd50 = 0;
    `public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReadTexture1SamplerParam";
    DAT_15519bd22 = Freeze::FindFieldNameLength(L"ReadTexture1SamplerParam");
    _DAT_15519bd00 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15519bd08 = ::TypeBuffer[0x10];
    DAT_15519bd08_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519bd08_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519bd08_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519bd08_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519bd08_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519bd08_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519bd08_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519bd10 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519bd18 = 0xe4;
    _DAT_15519bd1c = 1;
    _DAT_15519bd20 = 0;
    `public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReadTexture1Param";
    DAT_15519bcf2 = Freeze::FindFieldNameLength(L"ReadTexture1Param");
    _DAT_15519bcd0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15519bcd8 = ::TypeBuffer[0x10];
    DAT_15519bcd8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519bcd8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519bcd8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519bcd8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519bcd8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519bcd8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519bcd8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15519bce0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519bce8 = 0xe0;
    _DAT_15519bcec = 1;
    _DAT_15519bcf0 = 0;
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

// InternalDestroy @ 145fce6b0

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
FLandscapeCopyTexturePS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf8);
  return;
}

// ShouldCompilePermutationImpl @ 145fce940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FLandscapeCopyTexturePS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Landscape::DoesPlatformSupportEditLayers(param_1->Platform);
  return bVar1;
}

// ShouldPrecachePermutationImpl @ 145fce9d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FLandscapeCopyTexturePS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 145fcece0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FLandscapeCopyTexturePS::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = u_FLandscapeCopyT;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLandscapeCopyTexturePS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ChannelSwizzleMaskParam";
    DAT_15519bd82 = Freeze::FindFieldNameLength(L"ChannelSwizzleMaskParam");
    _DAT_15519bd60 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519bd68 = ::TypeBuffer[0x10];
    DAT_15519bd68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519bd68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519bd68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519bd68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519bd68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519bd68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519bd68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519bd70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519bd78 = 0xee;
    _DAT_15519bd7c = 1;
    _DAT_15519bd80 = 0;
    `public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SourceOffsetAndSizeUVParam";
    DAT_15519bd52 = Freeze::FindFieldNameLength(L"SourceOffsetAndSizeUVParam");
    _DAT_15519bd30 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519bd38 = ::TypeBuffer[0x10];
    DAT_15519bd38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519bd38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519bd38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519bd38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519bd38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519bd38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519bd38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519bd40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519bd48 = 0xe8;
    _DAT_15519bd4c = 1;
    _DAT_15519bd50 = 0;
    `public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReadTexture1SamplerParam";
    DAT_15519bd22 = Freeze::FindFieldNameLength(L"ReadTexture1SamplerParam");
    _DAT_15519bd00 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15519bd08 = ::TypeBuffer[0x10];
    DAT_15519bd08_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519bd08_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519bd08_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519bd08_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519bd08_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519bd08_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519bd08_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519bd10 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519bd18 = 0xe4;
    _DAT_15519bd1c = 1;
    _DAT_15519bd20 = 0;
    `public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReadTexture1Param";
    DAT_15519bcf2 = Freeze::FindFieldNameLength(L"ReadTexture1Param");
    _DAT_15519bcd0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15519bcd8 = ::TypeBuffer[0x10];
    DAT_15519bcd8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519bcd8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519bcd8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519bcd8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519bcd8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519bcd8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519bcd8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLandscapeCopyTexturePS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15519bce0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519bce8 = 0xe0;
    _DAT_15519bcec = 1;
    _DAT_15519bcf0 = 0;
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

