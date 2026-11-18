// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// ConstructCompiledInstance @ 14878e5b0

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
FStereoLayerVS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

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
    FShaderParameter::Bind
              ((FShaderParameter *)(this + 1),param_1->ParameterMap,L"InQuadAdjust",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6,
               param_1->ParameterMap,L"InUVAdjust",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.Parameters.ArrayMax,param_1->ParameterMap,
               L"InViewProjection",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2,
               param_1->ParameterMap,L"InWorld",SPF_Optional);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14878e750

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

FShader * __cdecl FStereoLayerVS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xf8);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    this[1].Bindings.Parameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.Parameters.ArrayNum = 0;
    this[1].Bindings.Parameters.ArrayMax = 0;
    this[1].Bindings.ResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 1487a57d0

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

FGlobalShaderType * __cdecl FStereoLayerVS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FStereoLayerVS",
                 L"/Engine/Private/StereoLayerShader.usf",L"MainVS",0,1,ConstructSerializedInstance,
                 ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xf8,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/StereoLayerShader.usf");
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
      atexit(`FStereoLayerVS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 1487a6740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FStereoLayerVS::GetTypeLayout(FStereoLayerVS *this)

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
    ::TypeBuffer._8_8_ = u_FStereoLayerVS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FStereoLayerVS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InWorld";
    DAT_155249d5a = Freeze::FindFieldNameLength(L"InWorld");
    _DAT_155249d38 = FShaderParameter::StaticGetTypeLayout();
    DAT_155249d40 = ::TypeBuffer[0x10];
    DAT_155249d40_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155249d40_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155249d40_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155249d40_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155249d40_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155249d40_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155249d40_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155249d48 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155249d50 = 0xf2;
    _DAT_155249d54 = 1;
    _DAT_155249d58 = 0;
    `public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InViewProjection";
    DAT_155249d2a = Freeze::FindFieldNameLength(L"InViewProjection");
    _DAT_155249d08 = FShaderParameter::StaticGetTypeLayout();
    DAT_155249d10 = ::TypeBuffer[0x10];
    DAT_155249d10_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155249d10_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155249d10_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155249d10_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155249d10_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155249d10_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155249d10_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155249d18 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155249d20 = 0xec;
    _DAT_155249d24 = 1;
    _DAT_155249d28 = 0;
    `public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InUVAdjust";
    DAT_155249cfa = Freeze::FindFieldNameLength(L"InUVAdjust");
    _DAT_155249cd8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155249ce0 = ::TypeBuffer[0x10];
    DAT_155249ce0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155249ce0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155249ce0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155249ce0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155249ce0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155249ce0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155249ce0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155249ce8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155249cf0 = 0xe6;
    _DAT_155249cf4 = 1;
    _DAT_155249cf8 = 0;
    `public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InQuadAdjust";
    DAT_155249cca = Freeze::FindFieldNameLength(L"InQuadAdjust");
    _DAT_155249ca8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155249cb0 = ::TypeBuffer[0x10];
    DAT_155249cb0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155249cb0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155249cb0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155249cb0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155249cb0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155249cb0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155249cb0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155249cb8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155249cc0 = 0xe0;
    _DAT_155249cc4 = 1;
    _DAT_155249cc8 = 0;
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

// InternalDestroy @ 1487ae6c0

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
FStereoLayerVS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf8);
  return;
}

// ShouldCompilePermutationImpl @ 1487c39c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FStereoLayerVS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  return true;
}

// ShouldPrecachePermutationImpl @ 1487c3d70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FStereoLayerVS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 1487c5460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FStereoLayerVS::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = u_FStereoLayerVS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FStereoLayerVS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InWorld";
    DAT_155249d5a = Freeze::FindFieldNameLength(L"InWorld");
    _DAT_155249d38 = FShaderParameter::StaticGetTypeLayout();
    DAT_155249d40 = ::TypeBuffer[0x10];
    DAT_155249d40_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155249d40_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155249d40_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155249d40_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155249d40_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155249d40_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155249d40_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155249d48 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155249d50 = 0xf2;
    _DAT_155249d54 = 1;
    _DAT_155249d58 = 0;
    `public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InViewProjection";
    DAT_155249d2a = Freeze::FindFieldNameLength(L"InViewProjection");
    _DAT_155249d08 = FShaderParameter::StaticGetTypeLayout();
    DAT_155249d10 = ::TypeBuffer[0x10];
    DAT_155249d10_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155249d10_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155249d10_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155249d10_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155249d10_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155249d10_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155249d10_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155249d18 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155249d20 = 0xec;
    _DAT_155249d24 = 1;
    _DAT_155249d28 = 0;
    `public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InUVAdjust";
    DAT_155249cfa = Freeze::FindFieldNameLength(L"InUVAdjust");
    _DAT_155249cd8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155249ce0 = ::TypeBuffer[0x10];
    DAT_155249ce0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155249ce0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155249ce0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155249ce0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155249ce0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155249ce0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155249ce0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155249ce8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155249cf0 = 0xe6;
    _DAT_155249cf4 = 1;
    _DAT_155249cf8 = 0;
    `public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InQuadAdjust";
    DAT_155249cca = Freeze::FindFieldNameLength(L"InQuadAdjust");
    _DAT_155249ca8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155249cb0 = ::TypeBuffer[0x10];
    DAT_155249cb0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155249cb0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155249cb0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155249cb0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155249cb0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155249cb0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155249cb0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStereoLayerVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155249cb8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155249cc0 = 0xe0;
    _DAT_155249cc4 = 1;
    _DAT_155249cc8 = 0;
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

