// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FSimpleElementDistanceFieldGammaPS @ 1485a46d0

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

FSimpleElementDistanceFieldGammaPS * __thiscall
FSimpleElementDistanceFieldGammaPS::FSimpleElementDistanceFieldGammaPS
          (FSimpleElementDistanceFieldGammaPS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  
  FSimpleElementMaskedGammaBasePS::FSimpleElementMaskedGammaBasePS
            ((FSimpleElementMaskedGammaBasePS *)this,param_1);
  this_00 = &this->SmoothWidth;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->SmoothWidth).NumBytes = 0;
  (this->EnableShadow).BufferIndex = 0;
  (this->EnableShadow).BaseIndex = 0;
  (this->EnableShadow).NumBytes = 0;
  (this->ShadowDirection).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowDirection).BaseIndex = 0;
  *(undefined8 *)&(this->ShadowColor).NumBytes = 0;
  (this->EnableGlow).BufferIndex = 0;
  (this->EnableGlow).BaseIndex = 0;
  (this->EnableGlow).NumBytes = 0;
  (this->GlowColor).BufferIndex = 0;
  *(undefined8 *)&(this->GlowColor).BaseIndex = 0;
  *(undefined8 *)&(this->GlowOuterRadius).NumBytes = 0;
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"SmoothWidth",SPF_Optional);
  FShaderParameter::Bind(&this->EnableShadow,param_1->ParameterMap,L"EnableShadow",SPF_Optional);
  FShaderParameter::Bind
            (&this->ShadowDirection,param_1->ParameterMap,L"ShadowDirection",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowColor,param_1->ParameterMap,L"ShadowColor",SPF_Optional);
  FShaderParameter::Bind
            (&this->ShadowSmoothWidth,param_1->ParameterMap,L"ShadowSmoothWidth",SPF_Optional);
  FShaderParameter::Bind(&this->EnableGlow,param_1->ParameterMap,L"EnableGlow",SPF_Optional);
  FShaderParameter::Bind(&this->GlowColor,param_1->ParameterMap,L"GlowColor",SPF_Optional);
  FShaderParameter::Bind
            (&this->GlowOuterRadius,param_1->ParameterMap,L"GlowOuterRadius",SPF_Optional);
  FShaderParameter::Bind
            (&this->GlowInnerRadius,param_1->ParameterMap,L"GlowInnerRadius",SPF_Optional);
  return this;
}

// FSimpleElementDistanceFieldGammaPS @ 1485a4850

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

FSimpleElementDistanceFieldGammaPS * __thiscall
FSimpleElementDistanceFieldGammaPS::FSimpleElementDistanceFieldGammaPS
          (FSimpleElementDistanceFieldGammaPS *this)

{
  FShader::FShader((FShader *)this);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  (this->SmoothWidth).BufferIndex = 0;
  (this->SmoothWidth).BaseIndex = 0;
  (this->SmoothWidth).NumBytes = 0;
  (this->EnableShadow).BufferIndex = 0;
  *(undefined8 *)&(this->EnableShadow).BaseIndex = 0;
  *(undefined8 *)&(this->ShadowDirection).NumBytes = 0;
  (this->ShadowSmoothWidth).BufferIndex = 0;
  (this->ShadowSmoothWidth).BaseIndex = 0;
  (this->ShadowSmoothWidth).NumBytes = 0;
  (this->EnableGlow).BufferIndex = 0;
  *(undefined8 *)&(this->EnableGlow).BaseIndex = 0;
  *(undefined8 *)&(this->GlowColor).NumBytes = 0;
  (this->GlowInnerRadius).BufferIndex = 0;
  (this->GlowInnerRadius).BaseIndex = 0;
  (this->GlowInnerRadius).NumBytes = 0;
  return this;
}

// ConstructCompiledInstance @ 1485af470

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
FSimpleElementDistanceFieldGammaPS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FSimpleElementDistanceFieldGammaPS *pFVar1;
  
  pFVar1 = ::operator_new(0x148);
  if (pFVar1 != (FSimpleElementDistanceFieldGammaPS *)0x0) {
    pFVar1 = FSimpleElementDistanceFieldGammaPS(pFVar1,param_1);
    return (FShader *)pFVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1485af900

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

FShader * __cdecl FSimpleElementDistanceFieldGammaPS::ConstructSerializedInstance(void)

{
  FSimpleElementDistanceFieldGammaPS *pFVar1;
  
  pFVar1 = ::operator_new(0x148);
  if (pFVar1 != (FSimpleElementDistanceFieldGammaPS *)0x0) {
    pFVar1 = FSimpleElementDistanceFieldGammaPS(pFVar1);
    return (FShader *)pFVar1;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 1485cab30

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

FGlobalShaderType * __cdecl FSimpleElementDistanceFieldGammaPS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FSimpleElementDistanceFieldGammaPS",
                 L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaDistanceFieldMain",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`FSimpleElementDistanceFieldGammaPS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 1485cbbd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FSimpleElementDistanceFieldGammaPS::GetTypeLayout(FSimpleElementDistanceFieldGammaPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FSimpleElementD;
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSimpleElementDistanceFieldGammaPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SmoothWidth";
    DAT_15524361a = Freeze::FindFieldNameLength(L"SmoothWidth");
    _DAT_1552435f8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155243600 = ::TypeBuffer[0x10];
    DAT_155243600_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243600_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243600_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243600_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243600_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243600_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243600_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155243608 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243610 = 0x110;
    _DAT_155243614 = 1;
    _DAT_155243618 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FSimpleElementMaskedGammaBasePS::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// Initialize @ 1485cd5c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FSimpleElementDistanceFieldGammaPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "GlowInnerRadius";
  DAT_15524379a = Freeze::FindFieldNameLength(L"GlowInnerRadius");
  _DAT_155243778 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155243790 = 0x140;
  _DAT_155243788 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155243794 = 1;
  _DAT_155243798 = 0;
  _DAT_155243780 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "GlowOuterRadius";
  DAT_15524376a = Freeze::FindFieldNameLength(L"GlowOuterRadius");
  _DAT_155243748 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155243758 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155243760 = 0x13a;
  _DAT_155243764 = 1;
  _DAT_155243768 = 0;
  _DAT_155243750 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "GlowColor";
  DAT_15524373a = Freeze::FindFieldNameLength(L"GlowColor");
  _DAT_155243718 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155243728 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155243730 = 0x134;
  _DAT_155243734 = 1;
  _DAT_155243738 = 0;
  _DAT_155243720 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "EnableGlow";
  DAT_15524370a = Freeze::FindFieldNameLength(L"EnableGlow");
  _DAT_1552436e8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1552436f8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155243700 = 0x12e;
  _DAT_155243704 = 1;
  _DAT_155243708 = 0;
  _DAT_1552436f0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSmoothWidth";
  DAT_1552436da = Freeze::FindFieldNameLength(L"ShadowSmoothWidth");
  _DAT_1552436b8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1552436c8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552436d0 = 0x128;
  _DAT_1552436d4 = 1;
  _DAT_1552436d8 = 0;
  _DAT_1552436c0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowColor";
  DAT_1552436aa = Freeze::FindFieldNameLength(L"ShadowColor");
  _DAT_155243688 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155243698 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552436a0 = 0x122;
  _DAT_1552436a4 = 1;
  _DAT_1552436a8 = 0;
  _DAT_155243690 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDirection";
  DAT_15524367a = Freeze::FindFieldNameLength(L"ShadowDirection");
  _DAT_155243658 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155243668 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155243670 = 0x11c;
  _DAT_155243674 = 1;
  _DAT_155243678 = 0;
  _DAT_155243660 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "EnableShadow";
  DAT_15524364a = Freeze::FindFieldNameLength(L"EnableShadow");
  _DAT_155243628 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155243638 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155243640 = 0x116;
  _DAT_155243644 = 1;
  _DAT_155243648 = 0;
  _DAT_155243630 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 1485cdc70

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
FSimpleElementDistanceFieldGammaPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// SetParameters @ 1485d9130

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
FSimpleElementDistanceFieldGammaPS::SetParameters
          (FSimpleElementDistanceFieldGammaPS *this,FRHIBatchedShaderParameters *param_1,
          FTexture *param_2,float param_3,float param_4,float param_5,bool param_6,
          TVector2<double> *param_7,FLinearColor *param_8,float param_9,
          FDepthFieldGlowInfo *param_10,ESimpleElementBlendMode param_11)

{
  ushort uVar1;
  FDepthFieldGlowInfo *pFVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  FHashedName FVar5;
  FShaderUniformBufferParameter *pFVar6;
  uint uVar7;
  float local_res8;
  float local_resc;
  undefined3 in_stack_00000039;
  FHashedName local_38 [4];
  
  pFVar4 = FViewUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName((FHashedName *)&local_res8,&pFVar4->ShaderVariableHashedName);
  FVar5.Hash = (ulong64)FHashedName::FHashedName(local_38,(FHashedName *)&local_res8);
  pFVar6 = FShader::GetUniformBufferParameter((FShader *)this,FVar5);
  SetUniformBufferParameter(param_1,pFVar6,(FRHIUniformBuffer *)0x0);
  FSimpleElementMaskedGammaBasePS::SetParameters
            ((FSimpleElementMaskedGammaBasePS *)this,param_1,param_2,param_3,param_4,param_11);
  uVar1 = (this->SmoothWidth).NumBytes;
  uVar7 = (uint)uVar1;
  if (4 < uVar1) {
    uVar7 = 4;
  }
  if (uVar7 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->SmoothWidth).BufferIndex,(uint)(this->SmoothWidth).BaseIndex,
               uVar7,&param_5);
  }
  uVar1 = (this->EnableShadow).NumBytes;
  uVar7 = (uint)uVar1;
  bVar3 = param_6;
  _param_6 = _param_6 & 0xff;
  if (4 < uVar1) {
    uVar7 = 4;
  }
  if (uVar7 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->EnableShadow).BufferIndex,(uint)(this->EnableShadow).BaseIndex,
               uVar7,&param_6);
  }
  pFVar2 = param_10;
  if (bVar3 != false) {
    uVar1 = (this->ShadowDirection).NumBytes;
    uVar7 = (uint)uVar1;
    if (8 < uVar1) {
      uVar7 = 8;
    }
    local_res8 = (float)(param_7->field0_0x0)._s_0.X;
    local_resc = (float)(param_7->field0_0x0)._s_0.Y;
    if (uVar7 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ShadowDirection).BufferIndex,
                 (uint)(this->ShadowDirection).BaseIndex,uVar7,&local_res8);
    }
    uVar1 = (this->ShadowColor).NumBytes;
    uVar7 = (uint)uVar1;
    if (0x10 < uVar1) {
      uVar7 = 0x10;
    }
    if (uVar7 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ShadowColor).BufferIndex,(uint)(this->ShadowColor).BaseIndex,
                 uVar7,param_8);
    }
    uVar1 = (this->ShadowSmoothWidth).NumBytes;
    uVar7 = (uint)uVar1;
    if (4 < uVar1) {
      uVar7 = 4;
    }
    pFVar2 = param_10;
    if (uVar7 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ShadowSmoothWidth).BufferIndex,
                 (uint)(this->ShadowSmoothWidth).BaseIndex,uVar7,&param_9);
      pFVar2 = param_10;
    }
  }
  uVar1 = (this->EnableGlow).NumBytes;
  uVar7 = (uint)uVar1;
  _param_6 = pFVar2->bEnableGlow;
  if (4 < uVar1) {
    uVar7 = 4;
  }
  param_10 = pFVar2;
  if (uVar7 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->EnableGlow).BufferIndex,(uint)(this->EnableGlow).BaseIndex,uVar7
               ,&param_6);
  }
  if (pFVar2->bEnableGlow != 0) {
    uVar1 = (this->GlowColor).NumBytes;
    uVar7 = (uint)uVar1;
    if (0x10 < uVar1) {
      uVar7 = 0x10;
    }
    if (uVar7 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->GlowColor).BufferIndex,(uint)(this->GlowColor).BaseIndex,uVar7
                 ,&pFVar2->GlowColor);
    }
    uVar1 = (this->GlowOuterRadius).NumBytes;
    uVar7 = (uint)uVar1;
    param_10._0_4_ = (float)(pFVar2->GlowOuterRadius).field0_0x0._s_0.X;
    if (8 < uVar1) {
      uVar7 = 8;
    }
    param_10._4_4_ = (float)(pFVar2->GlowOuterRadius).field0_0x0._s_0.Y;
    if (uVar7 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->GlowOuterRadius).BufferIndex,
                 (uint)(this->GlowOuterRadius).BaseIndex,uVar7,&param_10);
    }
    uVar1 = (this->GlowInnerRadius).NumBytes;
    uVar7 = (uint)uVar1;
    param_10._0_4_ = (float)(pFVar2->GlowInnerRadius).field0_0x0._s_0.X;
    if (8 < uVar1) {
      uVar7 = 8;
    }
    param_10._4_4_ = (float)(pFVar2->GlowInnerRadius).field0_0x0._s_0.Y;
    if (uVar7 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->GlowInnerRadius).BufferIndex,
                 (uint)(this->GlowInnerRadius).BaseIndex,uVar7,&param_10);
    }
  }
  return;
}

// ShouldCompilePermutationImpl @ 1485dbf20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FSimpleElementDistanceFieldGammaPS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return true;
}

// ShouldPrecachePermutationImpl @ 1485dc040

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FSimpleElementDistanceFieldGammaPS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 1485dced0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FSimpleElementDistanceFieldGammaPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FSimpleElementD;
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSimpleElementDistanceFieldGammaPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SmoothWidth";
    DAT_15524361a = Freeze::FindFieldNameLength(L"SmoothWidth");
    _DAT_1552435f8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155243600 = ::TypeBuffer[0x10];
    DAT_155243600_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243600_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243600_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243600_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243600_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243600_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243600_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementDistanceFieldGammaPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155243608 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243610 = 0x110;
    _DAT_155243614 = 1;
    _DAT_155243618 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FSimpleElementMaskedGammaBasePS::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

