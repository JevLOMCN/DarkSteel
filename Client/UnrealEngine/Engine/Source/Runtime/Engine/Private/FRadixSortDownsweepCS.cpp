// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// ConstructCompiledInstance @ 147ce6230

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
FRadixSortDownsweepCS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

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
              ((FShaderResourceParameter *)(this + 1),param_1->ParameterMap,
               L"RadixSortParameterBuffer",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4,
               param_1->ParameterMap,L"InKeys",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.Parameters.ArrayNum,
               param_1->ParameterMap,L"InValues",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.Parameters.ArrayMax,
               param_1->ParameterMap,L"InOffsets",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.ResourceParameters,
               param_1->ParameterMap,L"OutKeys",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)
               &this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x4,
               param_1->ParameterMap,L"OutValues",SPF_Optional);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 147ce6590

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

FShader * __cdecl FRadixSortDownsweepCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 147d0e4c0

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

FGlobalShaderType * __cdecl FRadixSortDownsweepCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FRadixSortDownsweepCS",
                 L"/Engine/Private/RadixSortShaders.usf",L"RadixSort_Downsweep",5,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xf8,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/RadixSortShaders.usf");
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
      atexit(`FRadixSortDownsweepCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 147d0fea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FRadixSortDownsweepCS::GetTypeLayout(FRadixSortDownsweepCS *this)

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
    ::TypeBuffer._8_8_ = u_FRadixSortDowns;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRadixSortDownsweepCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutValues";
    DAT_15520d82a = Freeze::FindFieldNameLength(L"OutValues");
    _DAT_15520d808 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d810 = ::TypeBuffer[0x10];
    DAT_15520d810_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d810_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d810_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d810_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d810_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d810_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d810_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520d818 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d820 = 0xf4;
    _DAT_15520d824 = 1;
    _DAT_15520d828 = 0;
    `public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutKeys";
    DAT_15520d7fa = Freeze::FindFieldNameLength(L"OutKeys");
    _DAT_15520d7d8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d7e0 = ::TypeBuffer[0x10];
    DAT_15520d7e0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d7e0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d7e0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d7e0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d7e0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d7e0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d7e0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520d7e8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d7f0 = 0xf0;
    _DAT_15520d7f4 = 1;
    _DAT_15520d7f8 = 0;
    `public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InOffsets";
    DAT_15520d7ca = Freeze::FindFieldNameLength(L"InOffsets");
    _DAT_15520d7a8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d7b0 = ::TypeBuffer[0x10];
    DAT_15520d7b0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d7b0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d7b0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d7b0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d7b0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d7b0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d7b0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520d7b8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d7c0 = 0xec;
    _DAT_15520d7c4 = 1;
    _DAT_15520d7c8 = 0;
    `public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InValues";
    DAT_15520d79a = Freeze::FindFieldNameLength(L"InValues");
    _DAT_15520d778 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d780 = ::TypeBuffer[0x10];
    DAT_15520d780_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d780_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d780_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d780_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d780_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d780_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d780_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520d788 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d790 = 0xe8;
    _DAT_15520d794 = 1;
    _DAT_15520d798 = 0;
    `public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InKeys";
    DAT_15520d76a = Freeze::FindFieldNameLength(L"InKeys");
    _DAT_15520d748 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d750 = ::TypeBuffer[0x10];
    DAT_15520d750_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d750_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d750_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d750_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d750_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d750_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d750_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520d758 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d760 = 0xe4;
    _DAT_15520d764 = 1;
    _DAT_15520d768 = 0;
    `public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "RadixSortParameterBuffer";
    DAT_15520d73a = Freeze::FindFieldNameLength(L"RadixSortParameterBuffer");
    _DAT_15520d718 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d720 = ::TypeBuffer[0x10];
    DAT_15520d720_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d720_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d720_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d720_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d720_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d720_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d720_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15520d728 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d730 = 0xe0;
    _DAT_15520d734 = 1;
    _DAT_15520d738 = 0;
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

// InternalDestroy @ 147d19ec0

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
FRadixSortDownsweepCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf8);
  return;
}

// ShouldCompilePermutationImpl @ 147d2d730

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FRadixSortDownsweepCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  return true;
}

// ShouldPrecachePermutationImpl @ 147d2d990

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FRadixSortDownsweepCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 147d31ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FRadixSortDownsweepCS::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = u_FRadixSortDowns;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRadixSortDownsweepCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutValues";
    DAT_15520d82a = Freeze::FindFieldNameLength(L"OutValues");
    _DAT_15520d808 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d810 = ::TypeBuffer[0x10];
    DAT_15520d810_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d810_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d810_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d810_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d810_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d810_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d810_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520d818 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d820 = 0xf4;
    _DAT_15520d824 = 1;
    _DAT_15520d828 = 0;
    `public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutKeys";
    DAT_15520d7fa = Freeze::FindFieldNameLength(L"OutKeys");
    _DAT_15520d7d8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d7e0 = ::TypeBuffer[0x10];
    DAT_15520d7e0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d7e0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d7e0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d7e0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d7e0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d7e0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d7e0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520d7e8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d7f0 = 0xf0;
    _DAT_15520d7f4 = 1;
    _DAT_15520d7f8 = 0;
    `public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InOffsets";
    DAT_15520d7ca = Freeze::FindFieldNameLength(L"InOffsets");
    _DAT_15520d7a8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d7b0 = ::TypeBuffer[0x10];
    DAT_15520d7b0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d7b0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d7b0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d7b0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d7b0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d7b0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d7b0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520d7b8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d7c0 = 0xec;
    _DAT_15520d7c4 = 1;
    _DAT_15520d7c8 = 0;
    `public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InValues";
    DAT_15520d79a = Freeze::FindFieldNameLength(L"InValues");
    _DAT_15520d778 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d780 = ::TypeBuffer[0x10];
    DAT_15520d780_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d780_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d780_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d780_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d780_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d780_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d780_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520d788 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d790 = 0xe8;
    _DAT_15520d794 = 1;
    _DAT_15520d798 = 0;
    `public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InKeys";
    DAT_15520d76a = Freeze::FindFieldNameLength(L"InKeys");
    _DAT_15520d748 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d750 = ::TypeBuffer[0x10];
    DAT_15520d750_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d750_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d750_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d750_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d750_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d750_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d750_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520d758 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d760 = 0xe4;
    _DAT_15520d764 = 1;
    _DAT_15520d768 = 0;
    `public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "RadixSortParameterBuffer";
    DAT_15520d73a = Freeze::FindFieldNameLength(L"RadixSortParameterBuffer");
    _DAT_15520d718 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d720 = ::TypeBuffer[0x10];
    DAT_15520d720_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d720_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d720_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d720_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d720_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d720_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d720_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRadixSortDownsweepCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15520d728 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d730 = 0xe0;
    _DAT_15520d734 = 1;
    _DAT_15520d738 = 0;
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

// UnsetParameters @ 147d34860

void __thiscall
FRadixSortDownsweepCS::UnsetParameters
          (FRadixSortDownsweepCS *this,FRHIBatchedShaderUnbinds *param_1)

{
  int *piVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  if (((this->RadixSortParameterBuffer).NumResources != '\0') &&
     ((this->RadixSortParameterBuffer).Type != BindlessSRV)) {
    iVar4 = (param_1->Unbinds).ArrayNum;
    piVar1 = &(param_1->Unbinds).ArrayMax;
    uVar2 = (this->RadixSortParameterBuffer).BaseIndex;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x204,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->Unbinds).ArrayNum = iVar4 + 1;
    pFVar3 = (param_1->Unbinds).AllocatorInstance.Data;
    *(ushort *)(pFVar3 + (longlong)iVar4 * 4) = uVar2;
    pFVar3[(longlong)iVar4 * 4 + 2] = (FScriptContainerElement)0x0;
  }
  if (((this->InKeys).NumResources != '\0') && ((this->InKeys).Type != BindlessSRV)) {
    iVar4 = (param_1->Unbinds).ArrayNum;
    piVar1 = &(param_1->Unbinds).ArrayMax;
    uVar2 = (this->InKeys).BaseIndex;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x204,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->Unbinds).ArrayNum = iVar4 + 1;
    pFVar3 = (param_1->Unbinds).AllocatorInstance.Data;
    *(ushort *)(pFVar3 + (longlong)iVar4 * 4) = uVar2;
    pFVar3[(longlong)iVar4 * 4 + 2] = (FScriptContainerElement)0x0;
  }
  if (((this->InValues).NumResources != '\0') && ((this->InValues).Type != BindlessSRV)) {
    iVar4 = (param_1->Unbinds).ArrayNum;
    piVar1 = &(param_1->Unbinds).ArrayMax;
    uVar2 = (this->InValues).BaseIndex;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x204,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->Unbinds).ArrayNum = iVar4 + 1;
    pFVar3 = (param_1->Unbinds).AllocatorInstance.Data;
    *(ushort *)(pFVar3 + (longlong)iVar4 * 4) = uVar2;
    pFVar3[(longlong)iVar4 * 4 + 2] = (FScriptContainerElement)0x0;
  }
  if (((this->InOffsets).NumResources != '\0') && ((this->InOffsets).Type != BindlessSRV)) {
    iVar4 = (param_1->Unbinds).ArrayNum;
    piVar1 = &(param_1->Unbinds).ArrayMax;
    uVar2 = (this->InOffsets).BaseIndex;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x204,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->Unbinds).ArrayNum = iVar4 + 1;
    pFVar3 = (param_1->Unbinds).AllocatorInstance.Data;
    *(ushort *)(pFVar3 + (longlong)iVar4 * 4) = uVar2;
    pFVar3[(longlong)iVar4 * 4 + 2] = (FScriptContainerElement)0x0;
  }
  if (((this->OutKeys).NumResources != '\0') && ((this->OutKeys).Type != BindlessSRV)) {
    iVar4 = (param_1->Unbinds).ArrayNum;
    piVar1 = &(param_1->Unbinds).ArrayMax;
    uVar2 = (this->OutKeys).BaseIndex;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x204,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->Unbinds).ArrayNum = iVar4 + 1;
    pFVar3 = (param_1->Unbinds).AllocatorInstance.Data;
    *(ushort *)(pFVar3 + (longlong)iVar4 * 4) = uVar2;
    pFVar3[(longlong)iVar4 * 4 + 2] = (FScriptContainerElement)0x1;
  }
  if (((this->OutValues).NumResources != '\0') && ((this->OutValues).Type != BindlessSRV)) {
    iVar4 = (param_1->Unbinds).ArrayNum;
    piVar1 = &(param_1->Unbinds).ArrayMax;
    uVar2 = (this->OutValues).BaseIndex;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x204,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->Unbinds).ArrayNum = iVar4 + 1;
    pFVar3 = (param_1->Unbinds).AllocatorInstance.Data;
    *(ushort *)(pFVar3 + (longlong)iVar4 * 4) = uVar2;
    pFVar3[(longlong)iVar4 * 4 + 2] = (FScriptContainerElement)0x1;
  }
  return;
}

