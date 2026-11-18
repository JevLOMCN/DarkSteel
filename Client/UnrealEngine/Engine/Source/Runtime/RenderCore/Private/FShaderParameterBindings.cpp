// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// GetTypeLayout @ 145e156f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FShaderParameterBindings::GetTypeLayout(FShaderParameterBindings *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'X';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderParamete;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderParameterBindings,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Parameters";
    DAT_15518d832 = Freeze::FindFieldNameLength(L"Parameters");
    if ((DAT_1551902ef & 2) == 0) {
      DAT_1551902ef = DAT_1551902ef | 3;
      _DAT_1551902e0 = 0x10;
      _DAT_155190290 = L"(TArray<T, AllocatorType>)";
      _DAT_1551902a8 =
           TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
           ::CallWriteMemoryImage;
      _DAT_1551902b0 =
           TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
           ::CallUnfrozenCopy;
      _DAT_1551902b8 =
           TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
           ::CallAppendHash;
      _DAT_1551902c0 =
           TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
           ::CallGetTargetAlignment;
      _DAT_1551902c8 =
           TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
           ::CallToString;
      _DAT_1551902a0 =
           TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
           ::CallDestroy;
      _DAT_1551902e8 = 8;
      DAT_1551902ec = 0;
      _DAT_1551902e4 = 0x10;
    }
    _DAT_15518d810 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    _DAT_15518d820 = Freeze::DefaultWriteMemoryImageField;
    DAT_15518d818 = ::TypeBuffer[0x10];
    DAT_15518d818_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d818_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d818_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d818_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d818_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d818_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d818_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d828 = 0;
    _DAT_15518d82c = 1;
    _DAT_15518d830 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 145e17000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FShaderParameterBindings::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "RootParameterBufferIndex";
  DAT_15518d952 = Freeze::FindFieldNameLength(L"RootParameterBufferIndex");
  _DAT_15518d930 = StaticGetTypeLayoutDesc<unsigned_short>();
  _DAT_15518d948 = 0x54;
  _DAT_15518d940 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518d94c = 1;
  _DAT_15518d950 = 0;
  _DAT_15518d938 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "StructureLayoutHash";
  DAT_15518d922 = Freeze::FindFieldNameLength(L"StructureLayoutHash");
  _DAT_15518d900 = StaticGetTypeLayoutDesc<unsigned_int>();
  _DAT_15518d910 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518d918 = 0x50;
  _DAT_15518d91c = 1;
  _DAT_15518d920 = 0;
  _DAT_15518d908 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ParameterReferences";
  DAT_15518d8f2 = Freeze::FindFieldNameLength(L"ParameterReferences");
  _DAT_15518d8d0 =
       StaticGetTypeLayoutDesc<TArray<FShaderParameterBindings::FParameterStructReference,TMemoryImageAllocator<0>_>_>
                 ();
  _DAT_15518d8e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518d8e8 = 0x40;
  _DAT_15518d8ec = 1;
  _DAT_15518d8f0 = 0;
  _DAT_15518d8d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "GraphUniformBuffers";
  DAT_15518d8c2 = Freeze::FindFieldNameLength(L"GraphUniformBuffers");
  _DAT_15518d8a0 =
       StaticGetTypeLayoutDesc<TArray<FShaderParameterBindings::FParameterStructReference,TMemoryImageAllocator<0>_>_>
                 ();
  _DAT_15518d8b0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518d8b8 = 0x30;
  _DAT_15518d8bc = 1;
  _DAT_15518d8c0 = 0;
  _DAT_15518d8a8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "BindlessResourceParameters";
  DAT_15518d892 = Freeze::FindFieldNameLength(L"BindlessResourceParameters");
  if ((DAT_15519021f & 2) == 0) {
    DAT_15519021f = DAT_15519021f | 3;
    _DAT_1551901c0 = L"(TArray<T, AllocatorType>)";
    _DAT_1551901d8 =
         TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FBindlessResourceParameter,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_1551901e0 =
         TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FBindlessResourceParameter,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_1551901e8 =
         TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FBindlessResourceParameter,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_1551901f0 =
         TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FBindlessResourceParameter,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_1551901f8 =
         TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FBindlessResourceParameter,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_1551901d0 =
         TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FBindlessResourceParameter,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_155190210 = 0x10;
    _DAT_155190218 = 8;
    DAT_15519021c = 0;
    _DAT_155190214 = 0x10;
  }
  _DAT_15518d880 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518d870 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FBindlessResourceParameter,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15518d888 = 0x20;
  _DAT_15518d88c = 1;
  _DAT_15518d890 = 0;
  _DAT_15518d878 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ResourceParameters";
  DAT_15518d862 = Freeze::FindFieldNameLength(L"ResourceParameters");
  if ((DAT_155190287 & 2) == 0) {
    DAT_155190287 = DAT_155190287 | 3;
    _DAT_155190228 = L"(TArray<T, AllocatorType>)";
    _DAT_155190240 =
         TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_155190248 =
         TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_155190250 =
         TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_155190258 =
         TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_155190260 =
         TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_155190238 =
         TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_155190278 = 0x10;
    _DAT_155190280 = 8;
    DAT_155190284 = 0;
    _DAT_15519027c = 0x10;
  }
  _DAT_15518d840 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15518d850 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518d858 = 0x10;
  _DAT_15518d85c = 1;
  _DAT_15518d860 = 0;
  _DAT_15518d848 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 145e187d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FShaderParameterBindings::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x40));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x30));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x20));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x10));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase(param_1);
  }
  uVar2 = _UNK_1506d61e8;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  return;
}

// StaticGetTypeLayout @ 145e30e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FShaderParameterBindings::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'X';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderParamete;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderParameterBindings,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Parameters";
    DAT_15518d832 = Freeze::FindFieldNameLength(L"Parameters");
    if ((DAT_1551902ef & 2) == 0) {
      DAT_1551902ef = DAT_1551902ef | 3;
      _DAT_1551902e0 = 0x10;
      _DAT_155190290 = L"(TArray<T, AllocatorType>)";
      _DAT_1551902a8 =
           TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
           ::CallWriteMemoryImage;
      _DAT_1551902b0 =
           TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
           ::CallUnfrozenCopy;
      _DAT_1551902b8 =
           TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
           ::CallAppendHash;
      _DAT_1551902c0 =
           TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
           ::CallGetTargetAlignment;
      _DAT_1551902c8 =
           TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
           ::CallToString;
      _DAT_1551902a0 =
           TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
           ::CallDestroy;
      _DAT_1551902e8 = 8;
      DAT_1551902ec = 0;
      _DAT_1551902e4 = 0x10;
    }
    _DAT_15518d810 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    _DAT_15518d820 = Freeze::DefaultWriteMemoryImageField;
    DAT_15518d818 = ::TypeBuffer[0x10];
    DAT_15518d818_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d818_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d818_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d818_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d818_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d818_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d818_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderParameterBindings::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d828 = 0;
    _DAT_15518d82c = 1;
    _DAT_15518d830 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// BindForLegacyShaderParameters @ 145e90a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall
FShaderParameterBindings::BindForLegacyShaderParameters
          (FShaderParameterBindings *this,FShader *param_1,int param_2,FShaderParameterMap *param_3,
          FShaderParametersMetadata *param_4,bool param_5)

{
  int *piVar1;
  FShaderType *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined1 auStack_1d8 [32];
  undefined2 *local_1b8;
  ForAnyElementType local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined1 local_188 [8];
  undefined2 local_180;
  undefined2 uStack_17e;
  undefined2 uStack_17c;
  undefined2 uStack_17a;
  TArray<FString,TSizedDefaultAllocator<32>_> local_178;
  FString local_168;
  TPairInitializer<FString_&&,FString_&&> local_158;
  FString local_148;
  FString local_138;
  wchar_t *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  FString *local_118;
  FString *local_110;
  FString local_108;
  FString local_f8;
  TStringView<wchar_t> local_e8;
  undefined1 local_d8 [24];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_c0;
  ForAnyElementType local_70;
  undefined8 local_68;
  int local_60;
  bool local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  if (((*(byte *)&(param_1->Type).field0_0x0 & 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsFrozen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x46c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_1->Type).field0_0x0.Ptr;
  if ((0xffff < param_4->Size) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMetaData.GetSize() < (1 << (sizeof(uint16) * 8))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0xfd,L"Shader parameter structure can only have a size < 65536 bytes."),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((FShader *)this != param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("this == &Shader->Bindings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  switch((char)pFVar2->Frequency) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\v':
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                       ,0x10d,L"Invalid shader frequency for this shader binding technique.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar13 = 0;
  local_c0.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_c0.Elements._48_8_ = _UNK_150631d98;
  local_128 = L"_RootShaderParameters";
  uStack_120 = 0x15;
  local_e8._12_4_ = uStack_11c;
  local_e8.Size = 0x15;
  local_e8.DataPtr = L"_RootShaderParameters";
  local_c0.Elements._0_8_ = 0;
  local_c0.Elements._8_8_ = 0;
  local_c0.Elements._32_8_ = 0;
  local_c0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c0.HashSize = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_d8._0_8_ = param_1;
  local_d8._8_8_ = this;
  local_d8._16_8_ = param_3;
  local_60 = param_2;
  local_5c = FShaderParameterMap::ContainsParameterAllocation(param_3,&local_e8);
  if (local_5c) {
    ::FString::FString(&local_168,L"_RootShaderParameters");
    if (local_168.Data.ArrayNum == 0) {
      pwVar12 = L"";
      iVar6 = 0;
    }
    else {
      pwVar12 = (wchar_t *)local_168.Data.AllocatorInstance.Data;
      iVar6 = local_168.Data.ArrayNum + -1;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar12);
    iVar6 = TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
                        *)param_3,uVar5,&local_168);
    if (((iVar6 == -1) ||
        (lVar13 = (longlong)iVar6 * 0x20 + *(longlong *)&param_3->ParameterMap, lVar13 == 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if ((*(short *)(lVar13 + 0x10) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("int32(Allocation.BufferIndex) == FShaderParametersMetadata::kRootCBufferBindingIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                           ,0x120,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_4->Size < (uint)*(ushort *)(lVar13 + 0x14) + (uint)*(ushort *)(lVar13 + 0x12)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("uint32(Allocation.BaseIndex + Allocation.Size) <= StructMetaData.GetSize()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                           ,0x121,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(char *)(lVar13 + 0x16) != '\0') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Allocation.Type == EShaderParameterType::LooseData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                           ,0x122,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_180 = *(undefined2 *)(lVar13 + 0x10);
    FVar11 = (this->Parameters).AllocatorInstance;
    uStack_17e = *(undefined2 *)(lVar13 + 0x12);
    uStack_17c = *(undefined2 *)(lVar13 + 0x12);
    FVar10 = (ForAnyElementType)
             ((longlong)&(this->Parameters).AllocatorInstance.field_0x0 + ((longlong)FVar11 >> 0x18)
             );
    uStack_17a = *(undefined2 *)(lVar13 + 0x14);
    FVar8 = FVar11;
    if (((ulonglong)FVar11 & 1) != 0) {
      FVar8 = FVar10;
    }
    if ((ulonglong)FVar8 <= &local_180) {
      lVar16 = (longlong)(this->Parameters).ArrayMax;
      FVar8 = FVar11;
      if (((ulonglong)FVar11 & 1) != 0) {
        FVar8 = FVar10;
      }
      if (&local_180 < (undefined2 *)((longlong)FVar8 + lVar16 * 8)) {
        local_1a0 = (longlong)(this->Parameters).ArrayNum;
        local_198 = 8;
        local_1b0 = FVar11;
        if (((ulonglong)FVar11 & 1) != 0) {
          local_1b0 = FVar10;
        }
        local_1b8 = &local_180;
        local_1a8 = lVar16;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    iVar6 = (this->Parameters).ArrayNum;
    piVar1 = &(this->Parameters).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                        (0x208,(ForAnyElementType *)this,piVar1);
    }
    (this->Parameters).ArrayNum = iVar6 + 1;
    FVar11 = (this->Parameters).AllocatorInstance;
    if (((ulonglong)FVar11 & 1) != 0) {
      FVar11 = (ForAnyElementType)
               ((longlong)&(this->Parameters).AllocatorInstance.field_0x0 +
               ((longlong)FVar11 >> 0x18));
    }
    *(ulonglong *)((longlong)FVar11 + (longlong)iVar6 * 8) =
         CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,local_180)));
    ::FString::FString(&local_f8,param_4->StructTypeName);
    ::FString::FString(&local_108,L"_RootShaderParameters");
    local_118 = &local_108;
    local_110 = &local_f8;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)(local_d8 + 0x18),&local_158,(bool *)&local_118);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)(lVar13 + 0x17) = 1;
  }
  FShaderParameterStructBindingContext::Bind
            ((FShaderParameterStructBindingContext *)local_d8,param_4,L"",0);
  uVar5 = FShaderParametersMetadata::GetLayoutHash(param_4);
  this->StructureLayoutHash = uVar5;
  this->RootParameterBufferIndex = 0xffff;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  TMapBase<FString,FParameterAllocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,FParameterAllocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>_>
              *)param_3,&local_178);
  if (param_5) {
    if (local_c0.Elements._8_4_ - local_c0.Elements._52_4_ != local_178.ArrayNum) {
      ::FString::PrintfImpl
                (&local_138,
                 L"Shader %s, permutation %d has unbound parameters not represented in the parameter struct:"
                );
      iVar6 = local_178.ArrayNum;
      uVar9 = (ulonglong)local_178.ArrayNum;
      pFVar15 = local_178.AllocatorInstance.Data + uVar9 * 0x10;
      FVar14.Data = local_178.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar9 != iVar6) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_188);
        }
        if (FVar14.Data == pFVar15) break;
        if (*(int *)(FVar14.Data + 8) == 0) {
          pwVar12 = L"";
          iVar7 = 0;
        }
        else {
          pwVar12 = *(wchar_t **)FVar14.Data;
          iVar7 = *(int *)(FVar14.Data + 8) + -1;
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar12);
        iVar7 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)(local_d8 + 0x18),uVar5,(FString *)FVar14.Data);
        if (iVar7 == -1) {
          ::FString::PrintfImpl(&local_148,L"\n  %s");
          iVar7 = local_148.Data.ArrayNum + -1;
          if (local_148.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          ::FString::AppendChars(&local_138,(wchar_t *)local_148.Data.AllocatorInstance.Data,iVar7);
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
        }
        uVar9 = local_178._8_8_ & 0xffffffff;
        FVar14.Data = FVar14.Data + 0x10;
      }
      local_158.Value = &local_138;
      `FShaderParameterBindings::BindForLegacyShaderParameters'::__l57::<lambda_1>::operator()
                (&local_158.Value);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
  }
  DestructItems<FString,int>((FString *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  local_c0.HashSize = 0;
  if (local_c0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c0.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_d8 + 0x18));
  return;
}

// BindForRootShaderParameters @ 145e90ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall
FShaderParameterBindings::BindForRootShaderParameters
          (FShaderParameterBindings *this,FShader *param_1,int param_2,FShaderParameterMap *param_3)

{
  char cVar1;
  FShaderType *pFVar2;
  FShaderParametersMetadata *this_00;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_170;
  TOptional<FParameterAllocation> local_160;
  FString local_150;
  undefined1 local_140 [24];
  wchar_t *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  FString *local_118;
  FString *local_110;
  FString local_108;
  FString local_f8;
  TStringView<wchar_t> local_e8;
  undefined1 local_d8 [24];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_c0;
  ForAnyElementType local_70;
  undefined8 local_68;
  int local_60;
  bool local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (((*(byte *)&(param_1->Type).field0_0x0 & 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsFrozen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x46c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_1->Type).field0_0x0.Ptr;
  if (((FShader *)this != param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("this == &Shader->Bindings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x14f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar2->RootParametersMetadata == (FShaderParametersMetadata *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type->GetRootParametersMetadata()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x150,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = pFVar2->RootParametersMetadata;
  if ((0xffff < this_00->Size) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMetaData.GetSize() < (1 << (sizeof(uint16) * 8))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x153,L"Shader parameter structure can only have a size < 65536 bytes."),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar1 = (char)pFVar2->Frequency;
  if ((((cVar1 != '\x06') && (cVar1 != '\a')) && (cVar1 != '\b')) &&
     ((cVar1 != '\t' &&
      (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                          ,0x15d,L"Invalid shader frequency for this shader binding technic."),
      bVar5)))) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_c0.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_c0.Elements._48_8_ = _UNK_150631d98;
  local_c0.Elements._0_8_ = 0;
  local_c0.Elements._8_8_ = 0;
  local_c0.Elements._32_8_ = 0;
  local_c0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c0.HashSize = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_5c = true;
  local_d8._0_8_ = param_1;
  local_d8._8_8_ = this;
  local_d8._16_8_ = param_3;
  local_60 = param_2;
  FShaderParameterStructBindingContext::Bind
            ((FShaderParameterStructBindingContext *)local_d8,this_00,L"",0);
  uVar6 = FShaderParametersMetadata::GetLayoutHash(this_00);
  uStack_120 = 0x15;
  local_128 = L"_RootShaderParameters";
  local_e8._12_4_ = uStack_11c;
  local_e8.Size = 0x15;
  local_e8.DataPtr = L"_RootShaderParameters";
  this->StructureLayoutHash = uVar6;
  FShaderParameterMap::FindParameterAllocation(param_3,&local_160,&local_e8);
  if (local_160.bIsSet == false) {
    if ((this->RootParameterBufferIndex != 0xffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                           ,0x178,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ::FString::FString(&local_f8,L"_RootShaderParameters");
    ::FString::FString(&local_108,L"_RootShaderParameters");
    local_118 = &local_108;
    local_110 = &local_f8;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)(local_d8 + 0x18),(TPairInitializer<FString_&&,FString_&&> *)local_140,
               (bool *)&local_118);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if ((local_160.bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this->RootParameterBufferIndex = local_160.TypedValue.BufferIndex;
  }
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  TMapBase<FString,FParameterAllocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,FParameterAllocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>_>
              *)param_3,&local_170);
  if (local_c0.Elements._8_4_ - local_c0.Elements._52_4_ != local_170.ArrayNum) {
    ::FString::PrintfImpl
              (&local_150,
               L"Shader %s, permutation %d has unbound parameters not represented in the parameter struct:"
              );
    iVar4 = local_170.ArrayNum;
    uVar8 = (ulonglong)local_170.ArrayNum;
    pFVar11 = local_170.AllocatorInstance.Data + uVar8 * 0x10;
    FVar10.Data = local_170.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar4) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_178);
      }
      if (FVar10.Data == pFVar11) break;
      if (*(int *)(FVar10.Data + 8) == 0) {
        pwVar9 = L"";
        iVar7 = 0;
      }
      else {
        pwVar9 = *(wchar_t **)FVar10.Data;
        iVar7 = *(int *)(FVar10.Data + 8) + -1;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar9);
      iVar7 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                          *)(local_d8 + 0x18),uVar6,(FString *)FVar10.Data);
      if (iVar7 == -1) {
        ::FString::PrintfImpl((FString *)(local_140 + 8),L"\n  %s");
        iVar7 = (int)local_140._16_8_ + -1;
        if ((int)local_140._16_8_ == 0) {
          iVar7 = 0;
        }
        ::FString::AppendChars(&local_150,(wchar_t *)local_140._8_8_,iVar7);
        if ((FString *)local_140._8_8_ != (FString *)0x0) {
          FMemory::Free((void *)local_140._8_8_);
        }
      }
      uVar8 = local_170._8_8_ & 0xffffffff;
      FVar10.Data = FVar10.Data + 0x10;
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FString,int>((FString *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  local_c0.HashSize = 0;
  if (local_c0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c0.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_d8 + 0x18));
  return;
}

// operator() @ 1504de100

bool __thiscall
`FShaderParameterBindings::BindForLegacyShaderParameters'::__l57::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7151892632635965112>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_7151892632635965112>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

