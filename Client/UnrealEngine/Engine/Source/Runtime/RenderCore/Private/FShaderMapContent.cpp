// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 25

// GetTypeLayout @ 145e156e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FShaderMapContent::GetTypeLayout(FShaderMapContent *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '`';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderMapConte;
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderMapContent,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<3>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FShaderMapContent::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderTypes";
    DAT_15518dc82 = Freeze::FindFieldNameLength(L"ShaderTypes");
    _DAT_15518dc60 = StaticGetTypeLayoutDesc<TArray<FHashedName,TMemoryImageAllocator<0>_>_>();
    DAT_15518dc68 = ::TypeBuffer[0x10];
    DAT_15518dc68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518dc68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518dc68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518dc68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518dc68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518dc68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518dc68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderMapContent::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518dc70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518dc78 = 0x18;
    _DAT_15518dc7c = 1;
    _DAT_15518dc80 = 0;
    `public:_static_void___cdecl_FShaderMapContent::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderHash";
    DAT_15518dc52 = Freeze::FindFieldNameLength(L"ShaderHash");
    if ((DAT_15519007f & 2) == 0) {
      DAT_15519007f = DAT_15519007f | 3;
      _DAT_155190070 = 0x18;
      _DAT_155190020 = L"THashTable<InAllocator>";
      _DAT_155190038 =
           TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage;
      _DAT_155190040 =
           TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy;
      _DAT_155190048 =
           TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallAppendHash;
      _DAT_155190050 =
           TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::
           CallGetTargetAlignment;
      _DAT_155190058 =
           TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallToString;
      _DAT_155190030 =
           TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallDestroy;
      _DAT_155190078 = 8;
      DAT_15519007c = 0;
      _DAT_155190074 = 0x18;
    }
    _DAT_15518dc30 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_15518dc38 = ::TypeBuffer[0x10];
    DAT_15518dc38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518dc38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518dc38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518dc38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518dc38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518dc38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518dc38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderMapContent::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518dc40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518dc48 = 0;
    _DAT_15518dc4c = 1;
    _DAT_15518dc50 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 145e173b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FShaderMapContent::InternalLinkType<3>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FShaderMapContent::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShaderPlatformName";
  DAT_15518dd42 = Freeze::FindFieldNameLength(L"ShaderPlatformName");
  if ((DAT_15518cecf & 2) == 0) {
    DAT_15518cecf = DAT_15518cecf | 3;
    _DAT_15518cec0 = 8;
    _DAT_15518ce70 = L"FMemoryImageName";
    _DAT_15518ce88 = TStaticGetTypeLayoutHelper<FMemoryImageName>::CallWriteMemoryImage;
    _DAT_15518ce90 = TStaticGetTypeLayoutHelper<FMemoryImageName>::CallUnfrozenCopy;
    _DAT_15518ce98 = TStaticGetTypeLayoutHelper<FMemoryImageName>::CallAppendHash;
    _DAT_15518cea0 = TStaticGetTypeLayoutHelper<FMemoryImageName>::CallGetTargetAlignment;
    _DAT_15518cea8 = TStaticGetTypeLayoutHelper<FMemoryImageName>::CallToString;
    _DAT_15518ce80 = TStaticGetTypeLayoutHelper<FMemoryImageName>::CallDestroy;
    _DAT_15518cec8 = 4;
    DAT_15518cecc = 0;
    _DAT_15518cec4 = 8;
  }
  _DAT_15518dd38 = 0x58;
  _DAT_15518dd20 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<FMemoryImageName>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15518dd3c = 1;
  _DAT_15518dd30 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518dd40 = 0;
  _DAT_15518dd28 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShaderMapContent::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShaderMapContent::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShaderPipelines";
  DAT_15518dd12 = Freeze::FindFieldNameLength(L"ShaderPipelines");
  if ((DAT_15518ff47 & 2) == 0) {
    DAT_15518ff47 = DAT_15518ff47 | 3;
    _DAT_15518fee8 = L"(TArray<T, AllocatorType>)";
    _DAT_15518ff00 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15518ff08 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15518ff10 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15518ff18 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15518ff20 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15518fef8 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_15518ff38 = 0x10;
    _DAT_15518ff40 = 8;
    DAT_15518ff44 = 0;
    _DAT_15518ff3c = 0x10;
  }
  _DAT_15518dd00 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518dcf0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15518dd08 = 0x48;
  _DAT_15518dd0c = 1;
  _DAT_15518dd10 = 0;
  _DAT_15518dcf8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShaderMapContent::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShaderMapContent::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Shaders";
  DAT_15518dce2 = Freeze::FindFieldNameLength(L"Shaders");
  if ((DAT_15518ffaf & 2) == 0) {
    DAT_15518ffaf = DAT_15518ffaf | 3;
    _DAT_15518ff50 = L"(TArray<T, AllocatorType>)";
    _DAT_15518ff68 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_15518ff70 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_15518ff78 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_15518ff80 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_15518ff88 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_>_>::
         CallToString;
    _DAT_15518ff60 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_>_>::
         CallDestroy;
    _DAT_15518ffa0 = 0x10;
    _DAT_15518ffa8 = 8;
    DAT_15518ffac = 0;
    _DAT_15518ffa4 = 0x10;
  }
  _DAT_15518dcd0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518dcc0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15518dcd8 = 0x38;
  _DAT_15518dcdc = 1;
  _DAT_15518dce0 = 0;
  _DAT_15518dcc8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShaderMapContent::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShaderMapContent::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShaderPermutations";
  DAT_15518dcb2 = Freeze::FindFieldNameLength(L"ShaderPermutations");
  if ((DAT_155190017 & 2) == 0) {
    DAT_155190017 = DAT_155190017 | 3;
    _DAT_15518ffb8 = L"(TArray<T, AllocatorType>)";
    _DAT_15518ffd0 =
         TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage;
    _DAT_15518ffd8 =
         TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy;
    _DAT_15518ffe0 =
         TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallAppendHash;
    _DAT_15518ffe8 =
         TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallGetTargetAlignment;
    _DAT_15518fff0 =
         TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallToString;
    _DAT_15518ffc8 = TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallDestroy
    ;
    _DAT_155190008 = 0x10;
    _DAT_155190010 = 8;
    DAT_155190014 = 0;
    _DAT_15519000c = 0x10;
  }
  _DAT_15518dc90 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15518dca0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518dca8 = 0x28;
  _DAT_15518dcac = 1;
  _DAT_15518dcb0 = 0;
  _DAT_15518dc98 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShaderMapContent::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 145e18790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FShaderMapContent::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (!param_4) {
    ~FShaderMapContent(param_1);
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
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar2;
  return;
}

// StaticGetTypeLayout @ 145e30be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FShaderMapContent::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '`';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderMapConte;
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderMapContent,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<3>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FShaderMapContent::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderTypes";
    DAT_15518dc82 = Freeze::FindFieldNameLength(L"ShaderTypes");
    _DAT_15518dc60 = StaticGetTypeLayoutDesc<TArray<FHashedName,TMemoryImageAllocator<0>_>_>();
    DAT_15518dc68 = ::TypeBuffer[0x10];
    DAT_15518dc68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518dc68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518dc68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518dc68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518dc68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518dc68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518dc68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderMapContent::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518dc70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518dc78 = 0x18;
    _DAT_15518dc7c = 1;
    _DAT_15518dc80 = 0;
    `public:_static_void___cdecl_FShaderMapContent::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderHash";
    DAT_15518dc52 = Freeze::FindFieldNameLength(L"ShaderHash");
    if ((DAT_15519007f & 2) == 0) {
      DAT_15519007f = DAT_15519007f | 3;
      _DAT_155190070 = 0x18;
      _DAT_155190020 = L"THashTable<InAllocator>";
      _DAT_155190038 =
           TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage;
      _DAT_155190040 =
           TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy;
      _DAT_155190048 =
           TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallAppendHash;
      _DAT_155190050 =
           TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::
           CallGetTargetAlignment;
      _DAT_155190058 =
           TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallToString;
      _DAT_155190030 =
           TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallDestroy;
      _DAT_155190078 = 8;
      DAT_15519007c = 0;
      _DAT_155190074 = 0x18;
    }
    _DAT_15518dc30 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_15518dc38 = ::TypeBuffer[0x10];
    DAT_15518dc38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518dc38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518dc38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518dc38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518dc38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518dc38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518dc38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderMapContent::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518dc40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518dc48 = 0;
    _DAT_15518dc4c = 1;
    _DAT_15518dc50 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// FShaderMapContent @ 145e81930

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderMapContent * __thiscall
FShaderMapContent::FShaderMapContent(FShaderMapContent *this,EShaderPlatform param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FShaderMapContent *pFVar4;
  
  THashTable<TMemoryImageAllocator<0>_>::THashTable<TMemoryImageAllocator<0>_>
            (&this->ShaderHash,0x80,0);
  (this->ShaderTypes).AllocatorInstance = (ForAnyElementType)0x0;
  (this->ShaderTypes).ArrayNum = 0;
  (this->ShaderTypes).ArrayMax = 0;
  (this->ShaderPermutations).AllocatorInstance = (ForAnyElementType)0x0;
  (this->ShaderPermutations).ArrayNum = 0;
  (this->ShaderPermutations).ArrayMax = 0;
  (this->Shaders).AllocatorInstance = (ForAnyElementType)0x0;
  (this->Shaders).ArrayNum = 0;
  (this->Shaders).ArrayMax = 0;
  (this->ShaderPipelines).AllocatorInstance = (ForAnyElementType)0x0;
  (this->ShaderPipelines).ArrayNum = 0;
  (this->ShaderPipelines).ArrayMax = 0;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x9d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FShaderMapContent *)(*pcVar2)();
      return pFVar4;
    }
  }
  FVar1 = FGenericDataDrivenShaderPlatformInfo::Infos[param_1].Name;
  (this->ShaderPlatformName).ComparisonIndex.Value = FVar1.ComparisonIndex.Value.Value;
  (this->ShaderPlatformName).Number = FVar1.Number;
  return this;
}

// ~FShaderMapContent @ 145e84b80

void __thiscall FShaderMapContent::~FShaderMapContent(FShaderMapContent *this)

{
  Empty(this);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->ShaderPipelines);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&this->Shaders)
  ;
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->ShaderPermutations);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->ShaderTypes);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->ShaderHash).NextIndex);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this);
  return;
}

// AddShader @ 145e8b710

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
FShaderMapContent::AddShader
          (FShaderMapContent *this,FHashedName *param_1,int param_2,FShader *param_3)

{
  TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_> *pTVar1;
  int *piVar2;
  TArray<FHashedName,TMemoryImageAllocator<0>_> *pTVar3;
  TArray<int,TMemoryImageAllocator<0>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  FShader *pFVar11;
  ForAnyElementType FVar12;
  int local_res18;
  FShader *local_28;
  
  local_res18 = param_2;
  if (((*(byte *)&(param_3->Type).field0_0x0 & 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Shader->IsFrozen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                         ,0x223,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar1 = &this->Shaders;
  uVar10 = ((longlong)local_res18 ^ param_1->Hash) * -0x622015f714c7d297;
  uVar10 = (uVar10 >> 0x2f ^ (longlong)local_res18 ^ uVar10) * -0x622015f714c7d297;
  local_28 = param_3;
  if ((((ulonglong)param_3 & 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Frozen.IsFrozen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x185,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar9 = pTVar1->AllocatorInstance;
  FVar12 = (ForAnyElementType)
           ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
  if (((ulonglong)FVar9 & 1) == 0) {
    FVar12 = FVar9;
  }
  if ((ulonglong)FVar12 <= &stack0xffffffffffffffd8) {
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = (ForAnyElementType)
              ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
    }
    if ((&stack0xffffffffffffffd8 <
         (undefined1 *)((longlong)FVar9 + (longlong)(this->Shaders).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar7 = (this->Shaders).ArrayNum;
  piVar2 = &(this->Shaders).ArrayMax;
  if (uVar7 == *piVar2) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Shaders).ArrayNum = uVar7 + 1;
  FVar9 = pTVar1->AllocatorInstance;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar9 = (ForAnyElementType)
            ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
  }
  pFVar11 = local_28;
  if (((ulonglong)local_28 & 1) != 0) {
    pFVar11 = (FShader *)((longlong)&stack0xffffffffffffffd8 + ((longlong)local_28 >> 0x18));
  }
  *(FShader **)((longlong)FVar9 + (longlong)(int)uVar7 * 8) = pFVar11;
  if ((((ulonglong)pFVar11 & 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Frozen.IsFrozen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x186,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar9 = (this->ShaderTypes).AllocatorInstance;
  pTVar3 = &this->ShaderTypes;
  FVar12 = (ForAnyElementType)
           ((longlong)&(pTVar3->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
  if (((ulonglong)FVar9 & 1) == 0) {
    FVar12 = FVar9;
  }
  if ((ulonglong)FVar12 <= param_1) {
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = (ForAnyElementType)
              ((longlong)&(pTVar3->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
    }
    if ((param_1 < (FHashedName *)((longlong)FVar9 + (longlong)(this->ShaderTypes).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->ShaderTypes).ArrayNum;
  piVar2 = &(this->ShaderTypes).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x808,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->ShaderTypes).ArrayNum = iVar8 + 1;
  FVar9 = pTVar3->AllocatorInstance;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar9 = (ForAnyElementType)
            ((longlong)&(pTVar3->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
  }
  FHashedName::FHashedName((FHashedName *)((longlong)FVar9 + (longlong)iVar8 * 8),param_1);
  FVar9 = (this->ShaderPermutations).AllocatorInstance;
  pTVar4 = &this->ShaderPermutations;
  FVar12 = (ForAnyElementType)
           ((longlong)&(pTVar4->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
  if (((ulonglong)FVar9 & 1) == 0) {
    FVar12 = FVar9;
  }
  if ((ulonglong)FVar12 <= &stack0x00000018) {
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = (ForAnyElementType)
              ((longlong)&(pTVar4->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
    }
    if ((&stack0x00000018 <
         (undefined1 *)((longlong)FVar9 + (longlong)(this->ShaderPermutations).ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->ShaderPermutations).ArrayNum;
  piVar2 = &(this->ShaderPermutations).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x404,&pTVar4->AllocatorInstance,piVar2);
  }
  (this->ShaderPermutations).ArrayNum = iVar8 + 1;
  FVar9 = pTVar4->AllocatorInstance;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar9 = (ForAnyElementType)
            ((longlong)&(pTVar4->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
  }
  *(int *)((longlong)FVar9 + (longlong)iVar8 * 4) = local_res18;
  if (((this->ShaderTypes).ArrayNum != (this->Shaders).ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderTypes.Num() == Shaders.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                         ,0x22a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->ShaderPermutations).ArrayNum != (this->Shaders).ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderPermutations.Num() == Shaders.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                         ,0x22b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  THashTable<TMemoryImageAllocator<0>_>::Add
            (&this->ShaderHash,((ushort)(uVar10 >> 0x2f) ^ (ushort)uVar10) * 0x2d69,uVar7);
  return;
}

// AddShaderPipeline @ 145e8be40

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
FShaderMapContent::AddShaderPipeline(FShaderMapContent *this,FShaderPipeline *param_1)

{
  TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_> *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  TMemoryImagePtr<FShaderPipeline>_u_0 local_res8;
  
  this_00 = &this->ShaderPipelines;
  FVar4 = this_00->AllocatorInstance;
  if (((ulonglong)FVar4 & 1) != 0) {
    FVar4 = (ForAnyElementType)
            ((longlong)&(this_00->AllocatorInstance).field_0x0 + ((longlong)FVar4 >> 0x18));
  }
  iVar3 = AlgoImpl::
          LowerBoundInternal<TMemoryImagePtr<FShaderPipeline>_const_,int,FHashedName,FShaderMapContent::FProjectShaderPipelineToKey,TLess<void>_>
                    ((TMemoryImagePtr<FShaderPipeline> *)FVar4,(this->ShaderPipelines).ArrayNum,
                     &param_1->TypeName,(FProjectShaderPipelineToKey)local_res8.Packed._0_1_,
                     (TLess<void>)local_res8._0_1_);
  local_res8.UnfrozenPtr = param_1;
  if (((ulonglong)param_1 & 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Frozen.IsFrozen()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                       ,0x185,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>::Insert
            (this_00,(TMemoryImagePtr<FShaderPipeline> *)&local_res8.Frozen,iVar3);
  return;
}

// DumpShaderList @ 145e950d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FShaderMapContent::DumpShaderList
          (FShaderMapContent *this,FShaderMapBase *param_1,
          TDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,unsigned_int,unsigned_int,wchar_t_const_*,void_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  undefined4 uVar1;
  FShaderMapPointerTable *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  FShaderMapContent *pFVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined8 *puVar8;
  FString *pFVar9;
  uchar *puVar10;
  ForAnyElementType FVar11;
  atomic<FRHIShader_*> aVar12;
  int iVar13;
  ulonglong *puVar14;
  uint uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  uint uVar23;
  ulonglong uVar24;
  FShaderMapResource *pFVar25;
  undefined4 *puVar26;
  wchar_t *pwVar27;
  undefined1 auStack_1d8 [32];
  wchar_t *local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  FScriptContainerElement *local_1a0;
  atomic<FRHIShader_*> local_198;
  FShaderMapBase *local_188;
  undefined1 local_180 [4];
  undefined4 local_17c;
  int local_178;
  int local_174;
  wchar_t *local_170;
  ForAnyElementType local_168;
  atomic<FRHIShader_*> local_160;
  TDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,unsigned_int,unsigned_int,wchar_t_const_*,void_*),FDefaultDelegateUserPolicy>
  *local_158;
  FScriptContainerElement *local_150;
  wchar_t *local_148;
  FString local_140;
  FString local_130;
  FShaderMapResource *local_120;
  undefined4 *local_118;
  FShaderMapContent *local_110;
  FScriptContainerElement *local_108;
  ulonglong *local_100;
  longlong local_f8;
  FName local_f0;
  ForAnyElementType local_e8;
  void *local_e0 [2];
  FString local_d0;
  FReadAccessScope local_c0;
  FReadAccessScope local_a8;
  undefined8 local_90 [2];
  FString local_80;
  undefined1 local_70 [20];
  undefined1 local_5c [20];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar25 = (param_1->Resource).Reference;
  uVar23 = 0;
  local_148 = (wchar_t *)0x0;
  local_174 = 0;
  local_150 = (FScriptContainerElement *)0x0;
  local_178 = 0;
  local_188 = param_1;
  local_158 = param_2;
  local_120 = pFVar25;
  local_110 = this;
  if (pFVar25 != (FShaderMapResource *)0x0) {
    puVar8 = (undefined8 *)(**(code **)(pFVar25->_padding_ + 0x28))(pFVar25,local_e0);
    if (local_90 != puVar8) {
      local_148 = (wchar_t *)*puVar8;
      *puVar8 = 0;
      local_174 = *(int *)(puVar8 + 1);
      puVar8[1] = 0;
    }
    if (local_e0[0] != (void *)0x0) {
      FMemory::Free(local_e0[0]);
    }
    local_f0 = (FName)pFVar25->_padding_;
    pFVar9 = ::FName::ToString(&local_f0,&local_d0);
    if (&local_80 != pFVar9) {
      local_150 = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178 = (pFVar9->Data).ArrayNum;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  iVar13 = (this->Shaders).ArrayNum;
  if (0 < iVar13) {
    local_170 = (wchar_t *)0x0;
    do {
      pwVar27 = local_170;
      FVar17.Data = (FScriptContainerElement *)0x0;
      uVar16 = 0;
      if ((int)uVar23 < iVar13) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_1b0 = (longlong)iVar13;
        local_1b8 = (wchar_t *)(longlong)(int)uVar23;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FVar11 = (this->Shaders).AllocatorInstance;
      if (((ulonglong)FVar11 & 1) != 0) {
        FVar11 = (ForAnyElementType)
                 ((longlong)&(this->Shaders).AllocatorInstance.field_0x0 +
                 ((longlong)FVar11 >> 0x18));
      }
      uVar24 = *(ulonglong *)((longlong)FVar11 + (longlong)pwVar27 * 8);
      if ((uVar24 & 1) != 0) {
        uVar24 = ((longlong)uVar24 >> 0x18) + (longlong)FVar11 + (longlong)pwVar27 * 8;
      }
      if ((uVar24 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                             ,0x197,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_17c = 0;
      local_160 = (atomic<FRHIShader_*>)0x0;
      if (pFVar25 == (FShaderMapResource *)0x0) {
LAB_145e9532f:
        local_168 = (ForAnyElementType)0x15060d16c;
      }
      else {
        if ((pFVar25->RHIShaders).Ptr[*(int *)(uVar24 + 0xd4)] != (atomic<FRHIShader_*>)0x0) {
          local_160 = (pFVar25->RHIShaders).Ptr[*(int *)(uVar24 + 0xd4)];
          pwVar27 = local_170;
          if (local_160 == (atomic<FRHIShader_*>)0x0) {
            local_160 = (atomic<FRHIShader_*>)
                        FShaderMapResource::CreateShaderOrCrash
                                  (pFVar25,*(int *)(uVar24 + 0xd4),true);
            pwVar27 = local_170;
          }
        }
        uVar1 = *(undefined4 *)(uVar24 + 0xd4);
        local_17c = (**(code **)(pFVar25->_padding_ + 0x30))(pFVar25,uVar1);
        puVar10 = (uchar *)(**(code **)(pFVar25->_padding_ + 0x60))(pFVar25,local_70,uVar1);
        local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_140.Data.ArrayNum = 0;
        local_140.Data.ArrayMax = 0;
        BytesToHex(puVar10,0x14,&local_140);
        FVar17.Data = local_140.Data.AllocatorInstance.Data;
        iVar13 = local_140.Data.ArrayNum;
        local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_140.Data.ArrayNum = 0;
        local_140.Data.ArrayMax = 0;
        if (iVar13 == 0) goto LAB_145e9532f;
        local_168 = (ForAnyElementType)FVar17.Data;
      }
      pFVar5 = local_110;
      iVar13 = (local_110->ShaderPermutations).ArrayNum;
      uVar16 = 0;
      if ((int)uVar23 < iVar13) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (local_1b8 = pwVar27, local_1b0 = (longlong)iVar13,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar11 = (pFVar5->ShaderPermutations).AllocatorInstance;
      if (((ulonglong)FVar11 & 1) != 0) {
        FVar11 = (ForAnyElementType)
                 ((longlong)&(pFVar5->ShaderPermutations).AllocatorInstance.field_0x0 +
                 ((longlong)FVar11 >> 0x18));
      }
      uVar1 = *(undefined4 *)((longlong)FVar11 + (longlong)pwVar27 * 4);
      if ((local_188->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar20 = (ulonglong *)(uVar24 + 0xc0);
      puVar14 = puVar20;
      if ((*(byte *)puVar20 & 1) != 0) {
        pFVar2 = local_188->PointerTable;
        uVar15 = (uint)(*puVar20 >> 1);
        iVar13 = *(int *)&(pFVar2->ShaderTypes).field_0x28;
        uVar16 = 0;
        if ((int)uVar15 < iVar13) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if (uVar16 == 0) {
          local_1b8 = (wchar_t *)(longlong)(int)uVar15;
          local_1b0 = (longlong)iVar13;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        puVar14 = (ulonglong *)
                  (*(longlong *)&(pFVar2->ShaderTypes).field_0x20 + (longlong)(int)uVar15 * 8);
      }
      if (*puVar14 == 0) {
        pwVar27 = L"";
      }
      else {
        if ((local_188->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(byte *)puVar20 & 1) != 0) {
          pFVar2 = local_188->PointerTable;
          uVar15 = (uint)(*puVar20 >> 1);
          iVar13 = *(int *)&(pFVar2->ShaderTypes).field_0x28;
          uVar16 = 0;
          if ((int)uVar15 < iVar13) {
            uVar16 = ~uVar15 >> 0x1f;
          }
          if (uVar16 == 0) {
            local_1b8 = (wchar_t *)(longlong)(int)uVar15;
            local_1b0 = (longlong)iVar13;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          puVar20 = (ulonglong *)
                    (*(longlong *)&(pFVar2->ShaderTypes).field_0x20 + (longlong)(int)uVar15 * 8);
        }
        pwVar27 = *(wchar_t **)(*puVar20 + 0x18);
      }
      if ((local_188->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar20 = (ulonglong *)(uVar24 + 200);
      puVar14 = puVar20;
      if ((*(byte *)puVar20 & 1) != 0) {
        pFVar2 = local_188->PointerTable;
        uVar15 = (uint)(*puVar20 >> 1);
        iVar13 = *(int *)&(pFVar2->VFTypes).field_0x28;
        uVar16 = 0;
        if ((int)uVar15 < iVar13) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if (uVar16 == 0) {
          local_1b8 = (wchar_t *)(longlong)(int)uVar15;
          local_1b0 = (longlong)iVar13;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        puVar14 = (ulonglong *)
                  (*(longlong *)&(pFVar2->VFTypes).field_0x20 + (longlong)(int)uVar15 * 8);
      }
      if (*puVar14 == 0) {
        pwVar21 = L"";
      }
      else {
        if ((local_188->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(byte *)puVar20 & 1) != 0) {
          pFVar2 = local_188->PointerTable;
          uVar15 = (uint)(*puVar20 >> 1);
          iVar13 = *(int *)&(pFVar2->VFTypes).field_0x28;
          uVar16 = 0;
          if ((int)uVar15 < iVar13) {
            uVar16 = ~uVar15 >> 0x1f;
          }
          if (uVar16 == 0) {
            local_1b8 = (wchar_t *)(longlong)(int)uVar15;
            local_1b0 = (longlong)iVar13;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          puVar20 = (ulonglong *)
                    (*(longlong *)&(pFVar2->VFTypes).field_0x20 + (longlong)(int)uVar15 * 8);
        }
        pwVar21 = *(wchar_t **)(*puVar20 + 8);
      }
      pFVar18 = (FScriptContainerElement *)L"";
      if (local_178 != 0) {
        pFVar18 = local_150;
      }
      pwVar22 = L"";
      if (local_174 != 0) {
        pwVar22 = local_148;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,&local_c0);
      if ((*(int *)&local_158->field_0x10 != 0) &&
         (plVar3 = *(longlong **)&local_158->field_0x8, plVar3 != (longlong *)0x0)) {
        local_198 = local_160;
        local_1a0 = (FScriptContainerElement *)local_168;
        local_1a8 = local_17c;
        local_1b0 = CONCAT44(local_1b0._4_4_,uVar1);
        local_1b8 = pwVar27;
        (**(code **)(*plVar3 + 0x68))(plVar3,pwVar22,pFVar18,pwVar21);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_c0);
      if (FVar17.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar17.Data);
      }
      local_170 = (wchar_t *)((longlong)local_170 + 1);
      uVar23 = uVar23 + 1;
      iVar13 = (local_110->Shaders).ArrayNum;
      param_1 = local_188;
      pFVar25 = local_120;
      this = local_110;
    } while ((int)uVar23 < iVar13);
  }
  FVar11 = (this->ShaderPipelines).AllocatorInstance;
  if (((ulonglong)FVar11 & 1) != 0) {
    FVar11 = (ForAnyElementType)
             ((longlong)&(this->ShaderPipelines).AllocatorInstance.field_0x0 +
             ((longlong)FVar11 >> 0x18));
  }
  iVar13 = (this->ShaderPipelines).ArrayNum;
  local_170 = (wchar_t *)CONCAT44(local_170._4_4_,iVar13);
  local_e8 = (ForAnyElementType)((longlong)FVar11 + (longlong)iVar13 * 8);
  do {
    FVar6 = local_e8;
    local_168 = FVar11;
    if ((this->ShaderPipelines).ArrayNum != iVar13) {
      local_180[0] = 0;
      `TCheckedPointerIterator<TMemoryImagePtr<FShaderPipeline>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_180);
    }
    if (FVar11 == FVar6) {
      if (local_150 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150);
      }
      if (local_148 != (wchar_t *)0x0) {
        FMemory::Free(local_148);
      }
      return;
    }
    uVar24 = *(ulonglong *)FVar11;
    if ((uVar24 & 1) != 0) {
      uVar24 = ((longlong)uVar24 >> 0x18) + (longlong)FVar11;
    }
    puVar26 = (undefined4 *)(uVar24 + 0x30);
    local_f8 = 5;
    local_100 = (ulonglong *)(uVar24 + 8);
    do {
      pFVar25 = local_120;
      uVar19 = *local_100;
      if ((uVar19 & 1) != 0) {
        uVar19 = ((longlong)uVar19 >> 0x18) + 8 + uVar24;
      }
      local_118 = puVar26;
      if (uVar19 != 0) {
        aVar12 = (atomic<FRHIShader_*>)0x0;
        local_17c = 0;
        FVar17.Data = (FScriptContainerElement *)0x0;
        if (local_120 == (FShaderMapResource *)0x0) {
LAB_145e95868:
          local_108 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          if ((local_120->RHIShaders).Ptr[*(int *)(uVar19 + 0xd4)] != (atomic<FRHIShader_*>)0x0) {
            aVar12 = (local_120->RHIShaders).Ptr[*(int *)(uVar19 + 0xd4)];
            if (aVar12 == (atomic<FRHIShader_*>)0x0) {
              aVar12 = (atomic<FRHIShader_*>)
                       FShaderMapResource::CreateShaderOrCrash
                                 (local_120,*(int *)(uVar19 + 0xd4),true);
            }
          }
          uVar1 = *(undefined4 *)(uVar19 + 0xd4);
          local_17c = (**(code **)(pFVar25->_padding_ + 0x30))(pFVar25,uVar1);
          puVar10 = (uchar *)(**(code **)(pFVar25->_padding_ + 0x60))(pFVar25,local_5c,uVar1);
          local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_130.Data.ArrayNum = 0;
          local_130.Data.ArrayMax = 0;
          BytesToHex(puVar10,0x14,&local_130);
          FVar17.Data = local_130.Data.AllocatorInstance.Data;
          iVar13 = local_130.Data.ArrayNum;
          local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_130.Data.ArrayNum = 0;
          local_130.Data.ArrayMax = 0;
          if (iVar13 == 0) goto LAB_145e95868;
          local_108 = FVar17.Data;
        }
        local_160._0_4_ = *puVar26;
        if ((param_1->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar20 = (ulonglong *)(uVar19 + 0xc0);
        puVar14 = puVar20;
        if ((*(byte *)puVar20 & 1) != 0) {
          uVar16 = (uint)(*puVar20 >> 1);
          pFVar2 = local_188->PointerTable;
          iVar13 = *(int *)&(pFVar2->ShaderTypes).field_0x28;
          uVar23 = 0;
          if ((int)uVar16 < iVar13) {
            uVar23 = ~uVar16 >> 0x1f;
          }
          if (uVar23 == 0) {
            local_1b8 = (wchar_t *)(longlong)(int)uVar16;
            local_1b0 = (longlong)iVar13;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          puVar14 = (ulonglong *)
                    (*(longlong *)&(pFVar2->ShaderTypes).field_0x20 + (longlong)(int)uVar16 * 8);
          param_1 = local_188;
        }
        if (*puVar14 == 0) {
          pwVar27 = L"";
        }
        else {
          if ((param_1->PointerTable == (FShaderMapPointerTable *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("PointerTable",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x9b4,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((*(byte *)puVar20 & 1) != 0) {
            pFVar2 = param_1->PointerTable;
            uVar16 = (uint)(*puVar20 >> 1);
            iVar13 = *(int *)&(pFVar2->ShaderTypes).field_0x28;
            uVar23 = 0;
            if ((int)uVar16 < iVar13) {
              uVar23 = ~uVar16 >> 0x1f;
            }
            if (uVar23 == 0) {
              local_1b8 = (wchar_t *)(longlong)(int)uVar16;
              local_1b0 = (longlong)iVar13;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            puVar20 = (ulonglong *)
                      (*(longlong *)&(pFVar2->ShaderTypes).field_0x20 + (longlong)(int)uVar16 * 8);
            param_1 = local_188;
          }
          pwVar27 = *(wchar_t **)(*puVar20 + 0x18);
        }
        if ((param_1->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar20 = (ulonglong *)(uVar19 + 200);
        puVar14 = puVar20;
        if ((*(byte *)puVar20 & 1) != 0) {
          pFVar2 = param_1->PointerTable;
          uVar16 = (uint)(*puVar20 >> 1);
          iVar13 = *(int *)&(pFVar2->VFTypes).field_0x28;
          uVar23 = 0;
          if ((int)uVar16 < iVar13) {
            uVar23 = ~uVar16 >> 0x1f;
          }
          if (uVar23 == 0) {
            local_1b8 = (wchar_t *)(longlong)(int)uVar16;
            local_1b0 = (longlong)iVar13;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          puVar14 = (ulonglong *)
                    (*(longlong *)&(pFVar2->VFTypes).field_0x20 + (longlong)(int)uVar16 * 8);
          param_1 = local_188;
        }
        if (*puVar14 == 0) {
          pwVar21 = L"";
        }
        else {
          if ((param_1->PointerTable == (FShaderMapPointerTable *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("PointerTable",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x9b4,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((*(byte *)puVar20 & 1) != 0) {
            pFVar2 = param_1->PointerTable;
            uVar16 = (uint)(*puVar20 >> 1);
            iVar13 = *(int *)&(pFVar2->VFTypes).field_0x28;
            uVar23 = 0;
            if ((int)uVar16 < iVar13) {
              uVar23 = ~uVar16 >> 0x1f;
            }
            if (uVar23 == 0) {
              local_1b8 = (wchar_t *)(longlong)(int)uVar16;
              local_1b0 = (longlong)iVar13;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            puVar20 = (ulonglong *)
                      (*(longlong *)&(pFVar2->VFTypes).field_0x20 + (longlong)(int)uVar16 * 8);
          }
          pwVar21 = *(wchar_t **)(*puVar20 + 8);
        }
        pFVar18 = (FScriptContainerElement *)L"";
        if (local_178 != 0) {
          pFVar18 = local_150;
        }
        pwVar22 = L"";
        if (local_174 != 0) {
          pwVar22 = local_148;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,&local_a8);
        if ((*(int *)&local_158->field_0x10 != 0) &&
           (plVar3 = *(longlong **)&local_158->field_0x8, plVar3 != (longlong *)0x0)) {
          local_1a0 = local_108;
          local_1a8 = local_17c;
          local_1b0 = CONCAT44(local_1b0._4_4_,local_160._0_4_);
          local_1b8 = pwVar27;
          local_198 = aVar12;
          (**(code **)(*plVar3 + 0x68))(plVar3,pwVar22,pFVar18,pwVar21);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_a8);
        if (FVar17.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar17.Data);
        }
      }
      puVar26 = local_118 + 1;
      local_100 = local_100 + 1;
      uVar24 = uVar24 + 8;
      local_f8 = local_f8 + -1;
      param_1 = local_188;
    } while (local_f8 != 0);
    FVar11 = (ForAnyElementType)((longlong)local_168 + 8);
    local_f8 = 0;
    this = local_110;
    iVar13 = (int)local_170;
    local_118 = puVar26;
  } while( true );
}

// Empty @ 145e95e70

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

void __thiscall FShaderMapContent::Empty(FShaderMapContent *this)

{
  int *piVar1;
  TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_> *pTVar2;
  ForAnyElementType FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FTypeLayoutDesc *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  byte bVar10;
  FShaderPipeline *this_00;
  FShader *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  int *local_res10;
  
  iVar9 = (this->ShaderPipelines).ArrayNum;
  FVar8 = (this->ShaderPipelines).AllocatorInstance;
  piVar1 = &(this->ShaderPipelines).ArrayNum;
  if (((ulonglong)FVar8 & 1) != 0) {
    FVar8 = (ForAnyElementType)
            ((longlong)&(this->ShaderPipelines).AllocatorInstance.field_0x0 +
            ((longlong)FVar8 >> 0x18));
  }
  FVar3 = (ForAnyElementType)((longlong)FVar8 + (longlong)iVar9 * 8);
  local_res10 = piVar1;
  while( true ) {
    if (*piVar1 != iVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TMemoryImagePtr<FShaderPipeline>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar8 == FVar3) break;
    this_00 = *(FShaderPipeline **)FVar8;
    bVar10 = (byte)this_00;
    if (((ulonglong)this_00 & 1) != 0) {
      this_00 = (FShaderPipeline *)(((longlong)this_00 >> 0x18) + (longlong)FVar8);
    }
    if (this_00 != (FShaderPipeline *)0x0) {
      pFVar7 = FShaderPipeline::GetTypeLayout(this_00);
      InternalDeleteObjectFromLayout(this_00,pFVar7,(FPointerTableBase *)0x0,(bool)(bVar10 & 1));
      *(ulonglong *)FVar8 = 0;
    }
    FVar8 = (ForAnyElementType)((longlong)FVar8 + 8);
  }
  iVar9 = (this->ShaderPipelines).ArrayMax;
  *local_res10 = 0;
  if (iVar9 != 0) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (8,8,0,&(this->ShaderPipelines).AllocatorInstance,0,&(this->ShaderPipelines).ArrayMax)
    ;
  }
  iVar9 = (this->Shaders).ArrayNum;
  pTVar2 = &this->Shaders;
  uVar13 = 0;
  uVar14 = uVar13;
  if (0 < iVar9) {
    do {
      uVar12 = (uint)uVar13;
      uVar6 = 0;
      if ((int)uVar12 < iVar9) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar8 = pTVar2->AllocatorInstance;
      if (((ulonglong)FVar8 & 1) != 0) {
        FVar8 = (ForAnyElementType)
                ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18));
      }
      pFVar11 = *(FShader **)((longlong)FVar8 + uVar14);
      bVar10 = (byte)pFVar11;
      if (((ulonglong)pFVar11 & 1) != 0) {
        pFVar11 = (FShader *)
                  ((undefined1 *)((longlong)FVar8 + ((longlong)pFVar11 >> 0x18)) +
                  (longlong)(int)uVar12 * 8);
      }
      if (pFVar11 != (FShader *)0x0) {
        pFVar7 = GetTypeLayoutDesc((FPointerTableBase *)0x0,pFVar11);
        InternalDeleteObjectFromLayout(pFVar11,pFVar7,(FPointerTableBase *)0x0,(bool)(bVar10 & 1));
        *(undefined8 *)((longlong)FVar8 + uVar14) = 0;
      }
      iVar9 = (this->Shaders).ArrayNum;
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar14 + 8;
    } while ((int)(uVar12 + 1) < iVar9);
  }
  piVar1 = &(this->Shaders).ArrayMax;
  (this->Shaders).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ShaderTypes).ArrayMax;
  (this->ShaderTypes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (8,8,0,&(this->ShaderTypes).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ShaderPermutations).ArrayMax;
  (this->ShaderPermutations).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,0,&(this->ShaderPermutations).AllocatorInstance,0,piVar1);
  }
  if ((this->ShaderHash).IndexSize == 0) {
    return;
  }
  FVar8 = (this->ShaderHash).Hash;
  if (((ulonglong)FVar8 & 1) != 0) {
    FVar8 = (ForAnyElementType)
            ((longlong)&(this->ShaderHash).Hash.field_0x0 + ((longlong)FVar8 >> 0x18));
  }
  memset((void *)FVar8,0xff,(ulonglong)((this->ShaderHash).HashMask * 4 + 4));
  return;
}

// EmptyShaderPipelines @ 145e96110

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

void __thiscall FShaderMapContent::EmptyShaderPipelines(FShaderMapContent *this)

{
  int *piVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  ForAnyElementType FVar5;
  byte bVar6;
  FShaderPipeline *this_00;
  undefined1 local_res8 [8];
  
  FVar5 = (this->ShaderPipelines).AllocatorInstance;
  iVar3 = (this->ShaderPipelines).ArrayNum;
  piVar1 = &(this->ShaderPipelines).ArrayNum;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)&(this->ShaderPipelines).AllocatorInstance.field_0x0 +
            ((longlong)FVar5 >> 0x18));
  }
  FVar2 = (ForAnyElementType)((longlong)FVar5 + (longlong)iVar3 * 8);
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<TMemoryImagePtr<FShaderPipeline>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar5 == FVar2) break;
    this_00 = *(FShaderPipeline **)FVar5;
    bVar6 = (byte)this_00;
    if (((ulonglong)this_00 & 1) != 0) {
      this_00 = (FShaderPipeline *)(((longlong)this_00 >> 0x18) + (longlong)FVar5);
    }
    if (this_00 != (FShaderPipeline *)0x0) {
      pFVar4 = FShaderPipeline::GetTypeLayout(this_00);
      InternalDeleteObjectFromLayout(this_00,pFVar4,(FPointerTableBase *)0x0,(bool)(bVar6 & 1));
      *(ulonglong *)FVar5 = 0;
    }
    FVar5 = (ForAnyElementType)((longlong)FVar5 + 8);
  }
  *piVar1 = 0;
  if ((this->ShaderPipelines).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (8,8,0,&(this->ShaderPipelines).AllocatorInstance,0,&(this->ShaderPipelines).ArrayMax)
    ;
  }
  return;
}

// Finalize @ 145e99d20

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

void __thiscall FShaderMapContent::Finalize(FShaderMapContent *this,FShaderMapResourceCode *param_1)

{
  int *piVar1;
  TArray<int,TMemoryImageAllocator<0>_> *pTVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  FShader *this_00;
  FShaderPipeline *this_01;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  ForAnyElementType FVar22;
  TArray<FHashedName,TMemoryImageAllocator<0>_> *pTVar23;
  longlong lVar24;
  TArray<FHashedName,TMemoryImageAllocator<0>_> *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_90;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_68;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_60;
  undefined8 local_58;
  
  if ((param_1 == (FShaderMapResourceCode *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Code",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                         ,0x3ca,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar21 = (this->Shaders).AllocatorInstance;
  iVar10 = (this->Shaders).ArrayNum;
  if (((ulonglong)FVar21 & 1) != 0) {
    FVar21 = (ForAnyElementType)
             ((longlong)&(this->Shaders).AllocatorInstance.field_0x0 + ((longlong)FVar21 >> 0x18));
  }
  FVar13 = (ForAnyElementType)((longlong)FVar21 + (longlong)iVar10 * 8);
  while( true ) {
    if ((this->Shaders).ArrayNum != iVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TMemoryImagePtr<FShader>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar21 == FVar13) break;
    this_00 = *(FShader **)FVar21;
    if (((ulonglong)this_00 & 1) != 0) {
      this_00 = (FShader *)(((longlong)this_00 >> 0x18) + (longlong)FVar21);
    }
    FShader::Finalize(this_00,param_1);
    FVar21 = (ForAnyElementType)((longlong)FVar21 + 8);
  }
  FVar21 = (this->ShaderPipelines).AllocatorInstance;
  if (((ulonglong)FVar21 & 1) != 0) {
    FVar21 = (ForAnyElementType)
             ((longlong)&(this->ShaderPipelines).AllocatorInstance.field_0x0 +
             ((longlong)FVar21 >> 0x18));
  }
  iVar10 = (this->ShaderPipelines).ArrayNum;
  FVar13 = (ForAnyElementType)((longlong)FVar21 + (longlong)iVar10 * 8);
  while( true ) {
    if ((this->ShaderPipelines).ArrayNum != iVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TMemoryImagePtr<FShaderPipeline>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (FVar21 == FVar13) break;
    this_01 = *(FShaderPipeline **)FVar21;
    if (((ulonglong)this_01 & 1) != 0) {
      this_01 = (FShaderPipeline *)(((longlong)this_01 >> 0x18) + (longlong)FVar21);
    }
    FShaderPipeline::Finalize(this_01,param_1);
    FVar21 = (ForAnyElementType)((longlong)FVar21 + 8);
  }
  uVar18 = 0;
  lVar24 = 0;
  uVar17 = (this->Shaders).ArrayNum;
  piVar1 = &(this->Shaders).ArrayNum;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_6c = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  local_70 = 0;
  if (uVar17 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar17,&local_78,0,&local_6c);
  }
  if (0 < *piVar1) {
    do {
      if (local_70 == local_6c) {
        local_70 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_78,&local_6c);
      }
      pFVar19 = local_78.Data + (longlong)local_70 * 0x10;
      local_70 = local_70 + 1;
      DefaultConstructItems<FSortedShaderEntry,int>(pFVar19,1);
      uVar17 = 0;
      if ((int)uVar18 < (this->ShaderTypes).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar21 = (this->ShaderTypes).AllocatorInstance;
      if (((ulonglong)FVar21 & 1) != 0) {
        FVar21 = (ForAnyElementType)
                 ((longlong)&(this->ShaderTypes).AllocatorInstance.field_0x0 +
                 ((longlong)FVar21 >> 0x18));
      }
      FHashedName::operator=
                ((FHashedName *)pFVar19,
                 (FHashedName *)((longlong)FVar21 + (longlong)(int)uVar18 * 8));
      uVar17 = 0;
      if ((int)uVar18 < (this->ShaderPermutations).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar21 = (this->ShaderPermutations).AllocatorInstance;
      if (((ulonglong)FVar21 & 1) != 0) {
        FVar21 = (ForAnyElementType)
                 ((longlong)&(this->ShaderPermutations).AllocatorInstance.field_0x0 +
                 ((longlong)FVar21 >> 0x18));
      }
      uVar5 = *(undefined4 *)((longlong)FVar21 + lVar24);
      lVar24 = lVar24 + 4;
      *(uint *)(pFVar19 + 0xc) = uVar18;
      uVar18 = uVar18 + 1;
      *(undefined4 *)(pFVar19 + 8) = uVar5;
    } while ((int)uVar18 < *piVar1);
  }
  uVar20 = 0;
  local_res8._0_1_ = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<FSortedShaderEntry,int,FIdentityFunctor,TDereferenceWrapper<FSortedShaderEntry,TLess<void>_>_>
            ((FSortedShaderEntry *)local_78.Data,local_70,local_res8._0_1_,
             (TLess<void> *)local_res20);
  iVar9 = (*piVar1 * 3) / 2;
  iVar10 = 1;
  if (1 < iVar9) {
    iVar10 = iVar9;
  }
  iVar9 = 1;
  if (iVar10 != 0) {
    iVar9 = iVar10;
  }
  uVar16 = (ulonglong)(iVar9 - 1) * 2 + 1;
  lVar24 = 0x3f;
  if (uVar16 != 0) {
    for (; uVar16 >> lVar24 == 0; lVar24 = lVar24 + -1) {
    }
  }
  THashTable<TMemoryImageAllocator<0>_>::THashTable<TMemoryImageAllocator<0>_>
            ((THashTable<TMemoryImageAllocator<0>_> *)&local_68.Frozen,1 << ((byte)lVar24 & 0x1f),
             *piVar1);
  uVar17 = *piVar1;
  local_88.Packed = 0;
  local_80 = (ulonglong)(uint)local_80;
  if (-1 < (int)uVar17) {
    local_80._0_4_ = 0;
    local_80._4_4_ = 0;
    if (uVar17 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,8,uVar17,(ForAnyElementType *)&local_88.Frozen,0,(int *)((longlong)&local_80 + 4)
                );
    }
    pTVar23 = &this->ShaderTypes;
    uVar17 = (this->Shaders).ArrayNum;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    piVar1 = &(this->ShaderTypes).ArrayMax;
    (this->ShaderTypes).ArrayNum = 0;
    if (*piVar1 != uVar17) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,8,uVar17,&pTVar23->AllocatorInstance,0,piVar1);
    }
    uVar17 = (this->Shaders).ArrayNum;
    pTVar2 = &this->ShaderPermutations;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    piVar1 = &(this->ShaderPermutations).ArrayMax;
    (this->ShaderPermutations).ArrayNum = 0;
    if (*piVar1 != uVar17) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,uVar17,&pTVar2->AllocatorInstance,0,piVar1);
    }
    local_res8 = &this->ShaderTypes;
    if (0 < local_70) {
      local_90 = 0;
      do {
        uVar18 = (uint)uVar20;
        uVar17 = 0;
        if ((int)uVar18 < local_70) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar21 = (ForAnyElementType)(local_78.Data + local_90);
        uVar17 = *(uint *)((longlong)FVar21 + 0xc);
        uVar16 = ((longlong)*(int *)((longlong)FVar21 + 8) ^ *(ulonglong *)FVar21) *
                 -0x622015f714c7d297;
        uVar16 = (uVar16 >> 0x2f ^ (longlong)*(int *)((longlong)FVar21 + 8) ^ uVar16) *
                 -0x622015f714c7d297;
        uVar14 = 0;
        if ((int)uVar17 < (this->Shaders).ArrayNum) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar13 = (this->Shaders).AllocatorInstance;
        if (((ulonglong)FVar13 & 1) != 0) {
          FVar13 = (ForAnyElementType)
                   ((longlong)&(this->Shaders).AllocatorInstance.field_0x0 +
                   ((longlong)FVar13 >> 0x18));
        }
        bVar8 = (byte)local_88.Packed;
        pFVar19 = (FScriptContainerElement *)((longlong)FVar13 + (longlong)(int)uVar17 * 8);
        TVar11 = local_88;
        if ((local_88.Packed & 1) != 0) {
          TVar11.UnfrozenPtr =
               (FScriptContainerElement *)
               ((longlong)&local_88 + ((longlong)local_88.Packed >> 0x18));
        }
        if (TVar11.Packed <= pFVar19) {
          TVar11 = local_88;
          if ((local_88.Packed & 1) != 0) {
            TVar11.UnfrozenPtr =
                 (FScriptContainerElement *)
                 ((longlong)&local_88 + ((longlong)local_88.Packed >> 0x18));
          }
          if (pFVar19 < TVar11.UnfrozenPtr + (longlong)local_80._4_4_ * 8) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            bVar8 = (byte)local_88.Packed;
          }
        }
        if ((uint)local_80 == local_80._4_4_) {
          local_80._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&local_88.Frozen,
                          (int *)((longlong)&local_80 + 4));
          bVar8 = (byte)local_88.Packed;
        }
        lVar24 = (longlong)(int)(uint)local_80;
        local_80._0_4_ = (uint)local_80 + 1;
        TVar11 = local_88;
        if ((bVar8 & 1) != 0) {
          TVar11.UnfrozenPtr =
               (FScriptContainerElement *)
               ((longlong)&local_88 + ((longlong)local_88.Packed >> 0x18));
        }
        pFVar12 = *(FScriptContainerElement **)pFVar19;
        if (((ulonglong)pFVar12 & 1) != 0) {
          pFVar12 = pFVar19 + ((longlong)pFVar12 >> 0x18);
        }
        *(FScriptContainerElement **)(TVar11.UnfrozenPtr + lVar24 * 8) = pFVar12;
        if ((((ulonglong)pFVar12 & 1) != 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Frozen.IsFrozen()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                               ,0x186,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar13 = local_res8->AllocatorInstance;
        FVar22 = (ForAnyElementType)
                 ((longlong)&(pTVar23->AllocatorInstance).field_0x0 + ((longlong)FVar13 >> 0x18));
        if (((ulonglong)FVar13 & 1) == 0) {
          FVar22 = FVar13;
        }
        if ((ulonglong)FVar22 <= (ulonglong)FVar21) {
          if (((ulonglong)FVar13 & 1) != 0) {
            FVar13 = (ForAnyElementType)
                     ((longlong)&(pTVar23->AllocatorInstance).field_0x0 + ((longlong)FVar13 >> 0x18)
                     );
          }
          if (((ulonglong)FVar21 <
               (ulonglong)((longlong)FVar13 + (longlong)(this->ShaderTypes).ArrayMax * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar10 = (this->ShaderTypes).ArrayNum;
        if (iVar10 == (this->ShaderTypes).ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                             (0x808,&pTVar23->AllocatorInstance,&(this->ShaderTypes).ArrayMax);
          (this->ShaderTypes).ArrayNum = iVar10;
        }
        (this->ShaderTypes).ArrayNum = iVar10 + 1;
        FVar13 = local_res8->AllocatorInstance;
        if (((ulonglong)FVar13 & 1) != 0) {
          FVar13 = (ForAnyElementType)
                   ((longlong)&(pTVar23->AllocatorInstance).field_0x0 + ((longlong)FVar13 >> 0x18));
        }
        FHashedName::FHashedName
                  ((FHashedName *)((longlong)FVar13 + (longlong)iVar10 * 8),(FHashedName *)FVar21);
        FVar13 = pTVar2->AllocatorInstance;
        FVar21 = (ForAnyElementType)((longlong)FVar21 + 8);
        FVar22 = (ForAnyElementType)
                 ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar13 >> 0x18));
        if (((ulonglong)FVar13 & 1) == 0) {
          FVar22 = FVar13;
        }
        piVar1 = &(this->ShaderPermutations).ArrayMax;
        if ((ulonglong)FVar22 <= (ulonglong)FVar21) {
          if (((ulonglong)FVar13 & 1) != 0) {
            FVar13 = (ForAnyElementType)
                     ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar13 >> 0x18))
            ;
          }
          if (((ulonglong)FVar21 < (ulonglong)((longlong)FVar13 + (longlong)*piVar1 * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar10 = (this->ShaderPermutations).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->ShaderPermutations).ArrayNum = iVar10 + 1;
        FVar13 = pTVar2->AllocatorInstance;
        if (((ulonglong)FVar13 & 1) != 0) {
          FVar13 = (ForAnyElementType)
                   ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar13 >> 0x18));
        }
        *(undefined4 *)((longlong)FVar13 + (longlong)iVar10 * 4) = *(undefined4 *)FVar21;
        if (local_58._4_4_ <= uVar18) {
          iVar10 = 1;
          if (uVar18 + 1 != 0) {
            iVar10 = uVar18 + 1;
          }
          uVar3 = (ulonglong)(iVar10 - 1) * 2 + 1;
          lVar24 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          uVar17 = 1 << ((byte)lVar24 & 0x1f);
          if (uVar17 < 0x20) {
            uVar17 = 0x20;
          }
          if (uVar17 != local_58._4_4_) {
            FMemoryImageAllocatorBase::ResizeAllocation
                      ((FMemoryImageAllocatorBase *)&local_60.Frozen,local_58._4_4_,uVar17,4,0);
            local_58 = CONCAT44(uVar17,(uint)local_58);
          }
        }
        if ((local_68.Packed._0_1_ & 1) == 0) {
          lVar24 = CONCAT71(local_68.Packed._1_7_,local_68.Packed._0_1_);
        }
        else {
          lVar24 = (longlong)&local_68 + ((longlong)(int7)local_68.Packed._1_7_ >> 0x10);
        }
        lVar4 = (ulonglong)((ushort)local_58 & ((ushort)(uVar16 >> 0x2f) ^ (ushort)uVar16) * 0x2d69)
                * 4;
        if ((local_60.Packed._0_1_ & 1) == 0) {
          lVar15 = CONCAT71(local_60.Packed._1_7_,local_60.Packed._0_1_);
        }
        else {
          lVar15 = (longlong)&local_60 + ((longlong)(int7)local_60.Packed._1_7_ >> 0x10);
        }
        *(undefined4 *)(lVar15 + uVar20 * 4) = *(undefined4 *)(lVar24 + lVar4);
        if ((local_68.Packed._0_1_ & 1) == 0) {
          lVar24 = CONCAT71(local_68.Packed._1_7_,local_68.Packed._0_1_);
        }
        else {
          lVar24 = (longlong)&local_68 + ((longlong)(int7)local_68.Packed._1_7_ >> 0x10);
        }
        *(uint *)(lVar24 + lVar4) = uVar18;
        local_90 = local_90 + 0x10;
        uVar20 = (ulonglong)(uVar18 + 1);
      } while ((int)(uVar18 + 1) < local_70);
    }
    if ((TMemoryImagePtr<FScriptContainerElement>_u_0 *)&this->Shaders != &local_88) {
      FMemoryImageAllocatorBase::MoveToEmpty
                ((FMemoryImageAllocatorBase *)&this->Shaders,
                 (FMemoryImageAllocatorBase *)&local_88.Frozen);
      (this->Shaders).ArrayNum = (uint)local_80;
      (this->Shaders).ArrayMax = local_80._4_4_;
      local_80._0_4_ = 0;
      local_80._4_4_ = 0;
    }
    FMemoryImageAllocatorBase::MoveToEmpty
              ((FMemoryImageAllocatorBase *)this,(FMemoryImageAllocatorBase *)&local_68.Frozen);
    FMemoryImageAllocatorBase::MoveToEmpty
              ((FMemoryImageAllocatorBase *)&(this->ShaderHash).NextIndex,
               (FMemoryImageAllocatorBase *)&local_60.Frozen);
    (this->ShaderHash).HashMask = (uint)local_58;
    (this->ShaderHash).IndexSize = local_58._4_4_;
    local_58 = 0;
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_88.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_60.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_68.Frozen);
    if ((FSortedShaderEntry *)local_78.Data != (FSortedShaderEntry *)0x0) {
      FMemory::Free(local_78.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
}

// FindOrAddShader @ 145e9afd0

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

FShader * __thiscall
FShaderMapContent::FindOrAddShader
          (FShaderMapContent *this,FHashedName *param_1,int param_2,FShader *param_3)

{
  TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_> *pTVar1;
  int *piVar2;
  TArray<FHashedName,TMemoryImageAllocator<0>_> *pTVar3;
  TArray<int,TMemoryImageAllocator<0>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FShader *pFVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  FTypeLayoutDesc *pFVar13;
  ForAnyElementType FVar14;
  ushort uVar15;
  int local_res18;
  FShader *local_38;
  
  local_res18 = param_2;
  if (((*(byte *)&(param_3->Type).field0_0x0 & 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Shader->IsFrozen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                         ,0x231,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FShader *)(*pcVar5)();
    return pFVar10;
  }
  FVar14 = (this->ShaderHash).Hash;
  uVar11 = ((longlong)local_res18 ^ param_1->Hash) * -0x622015f714c7d297;
  uVar11 = (uVar11 >> 0x2f ^ uVar11 ^ (longlong)local_res18) * -0x622015f714c7d297;
  uVar15 = ((ushort)(uVar11 >> 0x2f) ^ (ushort)uVar11) * 0x2d69;
  if (((ulonglong)FVar14 & 1) != 0) {
    FVar14 = (ForAnyElementType)
             ((longlong)&(this->ShaderHash).Hash.field_0x0 + ((longlong)FVar14 >> 0x18));
  }
  for (uVar8 = *(uint *)((longlong)FVar14 +
                        (ulonglong)((ushort)(this->ShaderHash).HashMask & uVar15) * 4);
      uVar8 != 0xffffffff; uVar8 = *(uint *)((longlong)FVar14 + (ulonglong)uVar8 * 4)) {
    uVar7 = 0;
    if ((int)uVar8 < (this->ShaderTypes).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FShader *)(*pcVar5)();
      return pFVar10;
    }
    FVar14 = (this->ShaderTypes).AllocatorInstance;
    if (((ulonglong)FVar14 & 1) != 0) {
      FVar14 = (ForAnyElementType)
               ((longlong)&(this->ShaderTypes).AllocatorInstance.field_0x0 +
               ((longlong)FVar14 >> 0x18));
    }
    if (*(ulong64 *)((longlong)FVar14 + (longlong)(int)uVar8 * 8) == param_1->Hash) {
      uVar7 = 0;
      if ((int)uVar8 < (this->ShaderPermutations).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FShader *)(*pcVar5)();
        return pFVar10;
      }
      FVar14 = (this->ShaderPermutations).AllocatorInstance;
      if (((ulonglong)FVar14 & 1) != 0) {
        FVar14 = (ForAnyElementType)
                 ((longlong)&(this->ShaderPermutations).AllocatorInstance.field_0x0 +
                 ((longlong)FVar14 >> 0x18));
      }
      if (*(int *)((longlong)FVar14 + (longlong)(int)uVar8 * 4) == local_res18) {
        pFVar13 = GetTypeLayoutDesc((FPointerTableBase *)0x0,param_3);
        InternalDeleteObjectFromLayout(param_3,pFVar13,(FPointerTableBase *)0x0,false);
        uVar7 = 0;
        if ((int)uVar8 < (this->Shaders).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FShader *)(*pcVar5)();
          return pFVar10;
        }
        FVar14 = (this->Shaders).AllocatorInstance;
        if (((ulonglong)FVar14 & 1) != 0) {
          FVar14 = (ForAnyElementType)
                   ((longlong)&(this->Shaders).AllocatorInstance.field_0x0 +
                   ((longlong)FVar14 >> 0x18));
        }
        pFVar10 = *(FShader **)((longlong)FVar14 + (longlong)(int)uVar8 * 8);
        if (((ulonglong)pFVar10 & 1) != 0) {
          pFVar10 = (FShader *)
                    (((longlong)pFVar10 >> 0x18) + (longlong)FVar14 + (longlong)(int)uVar8 * 8);
        }
        if (pFVar10 != (FShader *)0x0) {
          return pFVar10;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                           ,0x197,L"");
        if (!bVar6) {
          return (FShader *)0x0;
        }
        pcVar5 = (code *)swi(3);
        pFVar10 = (FShader *)(*pcVar5)();
        return pFVar10;
      }
    }
    FVar14 = (this->ShaderHash).NextIndex;
    if (((ulonglong)FVar14 & 1) != 0) {
      FVar14 = (ForAnyElementType)
               ((longlong)&(this->ShaderHash).NextIndex.field_0x0 + ((longlong)FVar14 >> 0x18));
    }
  }
  pTVar1 = &this->Shaders;
  local_38 = param_3;
  if ((((ulonglong)param_3 & 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Frozen.IsFrozen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x185,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FShader *)(*pcVar5)();
    return pFVar10;
  }
  FVar14 = pTVar1->AllocatorInstance;
  FVar12 = (ForAnyElementType)
           ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
  if (((ulonglong)FVar14 & 1) == 0) {
    FVar12 = FVar14;
  }
  if ((ulonglong)FVar12 <= &stack0xffffffffffffffc8) {
    FVar12 = (ForAnyElementType)
             ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
    if (((ulonglong)FVar14 & 1) == 0) {
      FVar12 = FVar14;
    }
    if ((&stack0xffffffffffffffc8 <
         (undefined1 *)((longlong)FVar12 + (longlong)(this->Shaders).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FShader *)(*pcVar5)();
      return pFVar10;
    }
  }
  uVar8 = (this->Shaders).ArrayNum;
  piVar2 = &(this->Shaders).ArrayMax;
  if (uVar8 == *piVar2) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Shaders).ArrayNum = uVar8 + 1;
  FVar14 = pTVar1->AllocatorInstance;
  if (((ulonglong)FVar14 & 1) != 0) {
    FVar14 = (ForAnyElementType)
             ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
  }
  pFVar10 = local_38;
  if (((ulonglong)local_38 & 1) != 0) {
    pFVar10 = (FShader *)((longlong)&stack0xffffffffffffffc8 + ((longlong)local_38 >> 0x18));
  }
  *(FShader **)((longlong)FVar14 + (longlong)(int)uVar8 * 8) = pFVar10;
  if ((((ulonglong)pFVar10 & 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Frozen.IsFrozen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x186,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FShader *)(*pcVar5)();
    return pFVar10;
  }
  THashTable<TMemoryImageAllocator<0>_>::Add(&this->ShaderHash,uVar15,uVar8);
  FVar14 = (this->ShaderTypes).AllocatorInstance;
  pTVar3 = &this->ShaderTypes;
  FVar12 = (ForAnyElementType)
           ((longlong)&(pTVar3->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
  if (((ulonglong)FVar14 & 1) == 0) {
    FVar12 = FVar14;
  }
  if ((ulonglong)FVar12 <= param_1) {
    if (((ulonglong)FVar14 & 1) != 0) {
      FVar14 = (ForAnyElementType)
               ((longlong)&(pTVar3->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
    }
    if ((param_1 < (FHashedName *)((longlong)FVar14 + (longlong)(this->ShaderTypes).ArrayMax * 8))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FShader *)(*pcVar5)();
      return pFVar10;
    }
  }
  iVar9 = (this->ShaderTypes).ArrayNum;
  piVar2 = &(this->ShaderTypes).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x808,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->ShaderTypes).ArrayNum = iVar9 + 1;
  FVar14 = pTVar3->AllocatorInstance;
  if (((ulonglong)FVar14 & 1) != 0) {
    FVar14 = (ForAnyElementType)
             ((longlong)&(pTVar3->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
  }
  FHashedName::FHashedName((FHashedName *)((longlong)FVar14 + (longlong)iVar9 * 8),param_1);
  FVar14 = (this->ShaderPermutations).AllocatorInstance;
  pTVar4 = &this->ShaderPermutations;
  FVar12 = (ForAnyElementType)
           ((longlong)&(pTVar4->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
  if (((ulonglong)FVar14 & 1) == 0) {
    FVar12 = FVar14;
  }
  if ((ulonglong)FVar12 <= &stack0x00000018) {
    if (((ulonglong)FVar14 & 1) != 0) {
      FVar14 = (ForAnyElementType)
               ((longlong)&(pTVar4->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
    }
    if ((&stack0x00000018 <
         (undefined1 *)((longlong)FVar14 + (longlong)(this->ShaderPermutations).ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FShader *)(*pcVar5)();
      return pFVar10;
    }
  }
  iVar9 = (this->ShaderPermutations).ArrayNum;
  piVar2 = &(this->ShaderPermutations).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x404,&pTVar4->AllocatorInstance,piVar2);
  }
  (this->ShaderPermutations).ArrayNum = iVar9 + 1;
  FVar14 = pTVar4->AllocatorInstance;
  if (((ulonglong)FVar14 & 1) != 0) {
    FVar14 = (ForAnyElementType)
             ((longlong)&(pTVar4->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
  }
  *(int *)((longlong)FVar14 + (longlong)iVar9 * 4) = local_res18;
  if (((this->ShaderTypes).ArrayNum != (this->Shaders).ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderTypes.Num() == Shaders.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                         ,0x241,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FShader *)(*pcVar5)();
    return pFVar10;
  }
  if (((this->ShaderPermutations).ArrayNum != (this->Shaders).ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderPermutations.Num() == Shaders.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                         ,0x242,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FShader *)(*pcVar5)();
    return pFVar10;
  }
  return param_3;
}

// FindOrAddShaderPipeline @ 145e9b5f0

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

FShaderPipeline * __thiscall
FShaderMapContent::FindOrAddShaderPipeline(FShaderMapContent *this,FShaderPipeline *param_1)

{
  TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_> *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderPipeline *pFVar4;
  ForAnyElementType FVar5;
  TMemoryImagePtr<FShaderPipeline>_u_0 local_res8;
  
  this_00 = &this->ShaderPipelines;
  FVar5 = this_00->AllocatorInstance;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)&(this_00->AllocatorInstance).field_0x0 + ((longlong)FVar5 >> 0x18));
  }
  iVar3 = AlgoImpl::
          LowerBoundInternal<TMemoryImagePtr<FShaderPipeline>_const_,int,FHashedName,FShaderMapContent::FProjectShaderPipelineToKey,TLess<void>_>
                    ((TMemoryImagePtr<FShaderPipeline> *)FVar5,(this->ShaderPipelines).ArrayNum,
                     &param_1->TypeName,(FProjectShaderPipelineToKey)local_res8.Packed._0_1_,
                     (TLess<void>)local_res8._0_1_);
  if (iVar3 < (this->ShaderPipelines).ArrayNum) {
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FShaderPipeline *)(*pcVar1)();
      return pFVar4;
    }
    FVar5 = this_00->AllocatorInstance;
    if (((ulonglong)FVar5 & 1) != 0) {
      FVar5 = (ForAnyElementType)
              ((longlong)&(this_00->AllocatorInstance).field_0x0 + ((longlong)FVar5 >> 0x18));
    }
    pFVar4 = *(FShaderPipeline **)((longlong)FVar5 + (longlong)iVar3 * 8);
    if (((ulonglong)pFVar4 & 1) != 0) {
      pFVar4 = (FShaderPipeline *)
               (((longlong)pFVar4 >> 0x18) + (longlong)FVar5 + (longlong)iVar3 * 8);
    }
    if ((pFVar4->TypeName).Hash == (param_1->TypeName).Hash) {
      FShaderPipeline::~FShaderPipeline(param_1);
      ::operator_delete(param_1,0x48);
      return pFVar4;
    }
  }
  local_res8.UnfrozenPtr = param_1;
  if ((((ulonglong)param_1 & 1) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Frozen.IsFrozen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x185,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FShaderPipeline *)(*pcVar1)();
    return pFVar4;
  }
  TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>::Insert
            (this_00,(TMemoryImagePtr<FShaderPipeline> *)&local_res8.Frozen,iVar3);
  return param_1;
}

// GetMaxNumInstructionsForShader @ 145e9dc10

/* WARNING: Removing unreachable block (ram,0x000145e9dd9f) */
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

uint __thiscall
FShaderMapContent::GetMaxNumInstructionsForShader
          (FShaderMapContent *this,FShaderMapBase *param_1,FShaderType *param_2)

{
  int *piVar1;
  ForAnyElementType FVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  
  GetShader(this,&param_2->HashedName,0);
  FVar9 = (this->ShaderPipelines).AllocatorInstance;
  piVar1 = &(this->ShaderPipelines).ArrayNum;
  iVar5 = *piVar1;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar9 = (ForAnyElementType)
            ((longlong)&(this->ShaderPipelines).AllocatorInstance.field_0x0 +
            ((longlong)FVar9 >> 0x18));
  }
  FVar2 = (ForAnyElementType)((longlong)FVar9 + (longlong)iVar5 * 8);
  while( true ) {
    if (*piVar1 != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TMemoryImagePtr<FShaderPipeline>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar9 == FVar2) {
      return 0;
    }
    uVar12 = *(ulonglong *)FVar9;
    if ((uVar12 & 1) != 0) {
      uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)FVar9;
    }
    bVar4 = (byte)param_2->Frequency;
    if ((4 < bVar4) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Frequency < SF_NumGraphicsFrequencies",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x8af,L""), bVar7)) break;
    lVar3 = (ulonglong)bVar4 * 8;
    uVar11 = *(ulonglong *)(lVar3 + 8 + uVar12);
    if ((uVar11 & 1) != 0) {
      uVar11 = ((longlong)uVar11 >> 0x18) + 8 + lVar3 + uVar12;
    }
    if (uVar11 != 0) {
      if ((param_1->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      if ((*(byte *)(uVar11 + 0xc0) & 1) != 0) {
        uVar10 = (uint)(*(ulonglong *)(uVar11 + 0xc0) >> 1);
        uVar8 = 0;
        if ((int)uVar10 < *(int *)&(param_1->PointerTable->ShaderTypes).field_0x28) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return uVar8;
        }
      }
    }
    FVar9 = (ForAnyElementType)((longlong)FVar9 + 8);
  }
  pcVar6 = (code *)swi(3);
  uVar8 = (*pcVar6)();
  return uVar8;
}

// GetNumShaders @ 145e9e040

uint __thiscall FShaderMapContent::GetNumShaders(FShaderMapContent *this)

{
  int *piVar1;
  ForAnyElementType FVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  
  FVar7 = (this->ShaderPipelines).AllocatorInstance;
  piVar1 = &(this->ShaderPipelines).ArrayNum;
  uVar8 = (this->Shaders).ArrayNum;
  iVar3 = *piVar1;
  if (((ulonglong)FVar7 & 1) != 0) {
    FVar7 = (ForAnyElementType)
            ((longlong)&(this->ShaderPipelines).AllocatorInstance.field_0x0 +
            ((longlong)FVar7 >> 0x18));
  }
  FVar2 = (ForAnyElementType)((longlong)FVar7 + (longlong)iVar3 * 8);
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<TMemoryImagePtr<FShaderPipeline>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar7 == FVar2) break;
    uVar5 = *(ulonglong *)FVar7;
    if ((uVar5 & 1) != 0) {
      uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)FVar7;
    }
    bVar9 = *(longlong *)(uVar5 + 8) != 0;
    uVar6 = bVar9 + 1;
    if (*(longlong *)(uVar5 + 0x10) == 0) {
      uVar6 = (uint)bVar9;
    }
    uVar4 = uVar6 + 1;
    if (*(longlong *)(uVar5 + 0x18) == 0) {
      uVar4 = uVar6;
    }
    uVar6 = uVar4 + 1;
    if (*(longlong *)(uVar5 + 0x20) == 0) {
      uVar6 = uVar4;
    }
    uVar4 = uVar6 + 1;
    if (*(longlong *)(uVar5 + 0x28) == 0) {
      uVar4 = uVar6;
    }
    uVar8 = uVar8 + uVar4;
    FVar7 = (ForAnyElementType)((longlong)FVar7 + 8);
  }
  return uVar8;
}

// GetShader @ 145e9f050

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

FShader * __thiscall
FShaderMapContent::GetShader(FShaderMapContent *this,FHashedName *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  FShader *pFVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  
  uVar6 = ((longlong)param_2 ^ param_1->Hash) * -0x622015f714c7d297;
  uVar6 = (uVar6 >> 0x2f ^ uVar6 ^ (longlong)param_2) * -0x622015f714c7d297;
  FVar8 = (this->ShaderTypes).AllocatorInstance;
  if (((ulonglong)FVar8 & 1) != 0) {
    FVar8 = (ForAnyElementType)
            ((longlong)&(this->ShaderTypes).AllocatorInstance.field_0x0 + ((longlong)FVar8 >> 0x18))
    ;
  }
  FVar9 = (this->ShaderPermutations).AllocatorInstance;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar9 = (ForAnyElementType)
            ((longlong)&(this->ShaderPermutations).AllocatorInstance.field_0x0 +
            ((longlong)FVar9 >> 0x18));
  }
  FVar11 = (this->ShaderHash).NextIndex;
  if (((ulonglong)FVar11 & 1) != 0) {
    FVar11 = (ForAnyElementType)
             ((longlong)&(this->ShaderHash).NextIndex.field_0x0 + ((longlong)FVar11 >> 0x18));
  }
  FVar10 = (this->ShaderHash).Hash;
  if (((ulonglong)FVar10 & 1) != 0) {
    FVar10 = (ForAnyElementType)
             ((longlong)&(this->ShaderHash).Hash.field_0x0 + ((longlong)FVar10 >> 0x18));
  }
  uVar2 = *(uint *)((longlong)FVar10 +
                   (ulonglong)
                   (ushort)((ushort)(this->ShaderHash).HashMask &
                           ((ushort)(uVar6 >> 0x2f) ^ (ushort)uVar6) * 0x2d69) * 4);
  while( true ) {
    if (uVar2 == 0xffffffff) {
      return (FShader *)0x0;
    }
    lVar1 = (ulonglong)uVar2 * 4;
    if ((*(ulonglong *)((longlong)FVar8 + (ulonglong)uVar2 * 8) == param_1->Hash) &&
       (*(int *)(lVar1 + (longlong)FVar9) == param_2)) break;
    uVar2 = *(uint *)(lVar1 + (longlong)FVar11);
  }
  uVar5 = 0;
  if ((int)uVar2 < (this->Shaders).ArrayNum) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FShader *)(*pcVar3)();
    return pFVar7;
  }
  FVar8 = (this->Shaders).AllocatorInstance;
  if (((ulonglong)FVar8 & 1) != 0) {
    FVar8 = (ForAnyElementType)
            ((longlong)&(this->Shaders).AllocatorInstance.field_0x0 + ((longlong)FVar8 >> 0x18));
  }
  pFVar7 = *(FShader **)((longlong)FVar8 + (longlong)(int)uVar2 * 8);
  if (((ulonglong)pFVar7 & 1) != 0) {
    pFVar7 = (FShader *)(((longlong)pFVar7 >> 0x18) + (longlong)FVar8 + (longlong)(int)uVar2 * 8);
  }
  if ((pFVar7 == (FShader *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x197,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FShader *)(*pcVar3)();
    return pFVar7;
  }
  return pFVar7;
}

// GetShaderList @ 145e9f3d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __thiscall
FShaderMapContent::GetShaderList
          (FShaderMapContent *this,FShaderMapBase *param_1,
          TMap<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,0>_>
          *param_2)

{
  FShader *this_00;
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  FShaderType *pFVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  undefined1 local_res20 [8];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  ulonglong local_a0;
  FShaderMapBase *pFStack_98;
  int local_90;
  undefined1 local_8c [12];
  ForAnyElementType local_80;
  ulonglong local_78;
  FShaderMapBase *local_70;
  longlong local_68;
  ulonglong *local_60;
  FHashedName *local_58;
  FScriptContainerElement *local_50;
  
  iVar5 = (this->Shaders).ArrayNum;
  uVar6 = 0;
  uVar11 = uVar6;
  if (0 < iVar5) {
    do {
      uVar13 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar13 < iVar5) {
        uVar4 = ~uVar13 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar7 = (this->Shaders).AllocatorInstance;
      if (((ulonglong)FVar7 & 1) != 0) {
        FVar7 = (ForAnyElementType)
                ((longlong)&(this->Shaders).AllocatorInstance.field_0x0 + ((longlong)FVar7 >> 0x18))
        ;
      }
      uVar6 = *(ulonglong *)((longlong)FVar7 + uVar11 * 8);
      if ((uVar6 & 1) != 0) {
        uVar6 = ((longlong)uVar6 >> 0x18) + uVar11 * 8 + (longlong)FVar7;
      }
      if (uVar6 == 0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3282037935418899708>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                           ,0x304,"Shader");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        uVar4 = 0;
        if ((int)uVar13 < (this->ShaderTypes).ArrayNum) {
          uVar4 = ~uVar13 >> 0x1f;
        }
        local_78 = uVar6;
        local_70 = param_1;
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FVar7 = (this->ShaderTypes).AllocatorInstance;
        if (((ulonglong)FVar7 & 1) != 0) {
          FVar7 = (ForAnyElementType)
                  ((longlong)&(this->ShaderTypes).AllocatorInstance.field_0x0 +
                  ((longlong)FVar7 >> 0x18));
        }
        local_68 = (longlong)FVar7 + uVar11 * 8;
        local_60 = &local_78;
        TSet<TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>,TDefaultMapHashableKeyFuncs<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FHashedName_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_&&>_>
                  ((TSet<TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>,TDefaultMapHashableKeyFuncs<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,0>,FDefaultSetAllocator>
                    *)param_2,
                   (TPairInitializer<FHashedName_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_&&>
                    *)local_8c,(bool *)&local_68);
      }
      iVar5 = (this->Shaders).ArrayNum;
      uVar6 = (ulonglong)(uVar13 + 1);
      uVar11 = uVar11 + 1;
    } while ((int)(uVar13 + 1) < iVar5);
  }
  FVar7 = (this->ShaderPipelines).AllocatorInstance;
  if (((ulonglong)FVar7 & 1) != 0) {
    FVar7 = (ForAnyElementType)
            ((longlong)&(this->ShaderPipelines).AllocatorInstance.field_0x0 +
            ((longlong)FVar7 >> 0x18));
  }
  local_90 = (this->ShaderPipelines).ArrayNum;
  local_80 = (ForAnyElementType)((longlong)FVar7 + (longlong)local_90 * 8);
  do {
    FVar2 = local_80;
    if ((this->ShaderPipelines).ArrayNum != local_90) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TMemoryImagePtr<FShaderPipeline>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (FVar7 == FVar2) {
      return;
    }
    uVar11 = *(ulonglong *)FVar7;
    if ((uVar11 & 1) != 0) {
      uVar11 = (longlong)FVar7 + ((longlong)uVar11 >> 0x18);
    }
    uVar6 = *(ulonglong *)(uVar11 + 8);
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 0;
    if (uVar6 != 0) {
      if ((((uVar6 & 1) != 0) && (uVar6 = ((longlong)uVar6 >> 0x18) + 8 + uVar11, uVar6 == 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                             ,0x197,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_a0 = uVar6;
      pFStack_98 = param_1;
      if (((local_b8.Data <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 < local_b8.Data + (longlong)local_b0._4_4_ * 0x10))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((int)local_b0 == local_b0._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
        local_b0 = CONCAT44(local_b0._4_4_,iVar5);
      }
      lVar9 = (longlong)(int)local_b0;
      local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
      *(ulonglong *)(local_b8.Data + lVar9 * 0x10) = local_a0;
      *(FShaderMapBase **)(local_b8.Data + lVar9 * 0x10 + 8) = pFStack_98;
    }
    uVar6 = *(ulonglong *)(uVar11 + 0x10);
    if (uVar6 != 0) {
      if ((((uVar6 & 1) != 0) && (uVar6 = ((longlong)uVar6 >> 0x18) + 0x10 + uVar11, uVar6 == 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                             ,0x197,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_a0 = uVar6;
      pFStack_98 = param_1;
      if (((local_b8.Data <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 < local_b8.Data + (longlong)local_b0._4_4_ * 0x10))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((int)local_b0 == local_b0._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
        local_b0 = CONCAT44(local_b0._4_4_,iVar5);
      }
      lVar9 = (longlong)(int)local_b0;
      local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
      *(ulonglong *)(local_b8.Data + lVar9 * 0x10) = local_a0;
      *(FShaderMapBase **)(local_b8.Data + lVar9 * 0x10 + 8) = pFStack_98;
    }
    uVar6 = *(ulonglong *)(uVar11 + 0x18);
    if (uVar6 != 0) {
      if ((((uVar6 & 1) != 0) && (uVar6 = ((longlong)uVar6 >> 0x18) + 0x18 + uVar11, uVar6 == 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                             ,0x197,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_a0 = uVar6;
      pFStack_98 = param_1;
      if (((local_b8.Data <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 < local_b8.Data + (longlong)local_b0._4_4_ * 0x10))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((int)local_b0 == local_b0._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
        local_b0 = CONCAT44(local_b0._4_4_,iVar5);
      }
      lVar9 = (longlong)(int)local_b0;
      local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
      *(ulonglong *)(local_b8.Data + lVar9 * 0x10) = local_a0;
      *(FShaderMapBase **)(local_b8.Data + lVar9 * 0x10 + 8) = pFStack_98;
    }
    uVar6 = *(ulonglong *)(uVar11 + 0x20);
    if (uVar6 != 0) {
      if ((((uVar6 & 1) != 0) && (uVar6 = ((longlong)uVar6 >> 0x18) + 0x20 + uVar11, uVar6 == 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                             ,0x197,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_a0 = uVar6;
      pFStack_98 = param_1;
      if (((local_b8.Data <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 < local_b8.Data + (longlong)local_b0._4_4_ * 0x10))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((int)local_b0 == local_b0._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
        local_b0 = CONCAT44(local_b0._4_4_,iVar5);
      }
      lVar9 = (longlong)(int)local_b0;
      local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
      *(ulonglong *)(local_b8.Data + lVar9 * 0x10) = local_a0;
      *(FShaderMapBase **)(local_b8.Data + lVar9 * 0x10 + 8) = pFStack_98;
    }
    uVar6 = *(ulonglong *)(uVar11 + 0x28);
    if (uVar6 != 0) {
      if ((((uVar6 & 1) != 0) && (uVar6 = ((longlong)uVar6 >> 0x18) + 0x28 + uVar11, uVar6 == 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                             ,0x197,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_a0 = uVar6;
      pFStack_98 = param_1;
      if (((local_b8.Data <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 < local_b8.Data + (longlong)local_b0._4_4_ * 0x10))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((int)local_b0 == local_b0._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
        local_b0 = CONCAT44(local_b0._4_4_,iVar5);
      }
      lVar9 = (longlong)(int)local_b0;
      local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
      *(ulonglong *)(local_b8.Data + lVar9 * 0x10) = local_a0;
      *(FShaderMapBase **)(local_b8.Data + lVar9 * 0x10 + 8) = pFStack_98;
    }
    iVar5 = (int)local_b0;
    pFVar12 = local_b8.Data + (longlong)(int)local_b0 * 0x10;
    FVar10.Data = local_b8.Data;
    while( true ) {
      if ((int)local_b0 != iVar5) {
        local_a8[0] = 0;
        `TCheckedPointerIterator<TShaderRefBase<FShader,FShaderMapPointerTable>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_a8);
      }
      if (FVar10.Data == pFVar12) break;
      uVar11 = *(ulonglong *)(FVar10.Data + 8);
      this_00 = *(FShader **)FVar10.Data;
      if ((*(longlong *)(uVar11 + 0x18) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar8 = FShader::GetType(this_00,*(FShaderMapPointerTable **)(uVar11 + 0x18));
      local_58 = &pFVar8->HashedName;
      local_50 = FVar10.Data;
      TSet<TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>,TDefaultMapHashableKeyFuncs<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FHashedName_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_const_&>_>
                ((TSet<TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>,TDefaultMapHashableKeyFuncs<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,0>,FDefaultSetAllocator>
                  *)param_2,
                 (TPairInitializer<FHashedName_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_const_&>
                  *)(local_8c + 4),(bool *)&local_58);
      FVar10.Data = FVar10.Data + 0x10;
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    FVar7 = (ForAnyElementType)((longlong)FVar7 + 8);
  } while( true );
}

// GetShaderList @ 145e9fb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __thiscall
FShaderMapContent::GetShaderList
          (FShaderMapContent *this,FShaderMapBase *param_1,FSHAHash *param_2,
          TMap<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,0>_>
          *param_3)

{
  undefined4 uVar1;
  FName FVar2;
  FShaderMapPointerTable *pFVar3;
  ulonglong uVar4;
  FName FVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  ForAnyElementType FVar9;
  ulonglong *puVar10;
  FHashedName *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  FHashedName *pFVar18;
  FHashedName *pFVar19;
  FShaderMapContent *pFVar20;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  undefined1 local_168 [2];
  EShaderPlatform local_166;
  int local_164;
  FShaderMapBase *local_160;
  undefined4 local_158;
  ForAnyElementType local_150;
  uint local_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  FHashedName *local_138;
  FSHAHash *local_130;
  TSet<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>,TDefaultMapHashableKeyFuncs<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,0>,FDefaultSetAllocator>
  *local_128;
  FShaderMapContent *local_120;
  longlong local_118;
  undefined1 local_110 [8];
  FHashedName local_108;
  ForAnyElementType local_100;
  ulonglong local_f8;
  FShaderMapBase *local_f0;
  ulonglong *local_e8;
  ulonglong *local_e0;
  ulonglong local_d8;
  FShaderMapBase *local_d0;
  ulonglong *local_c8;
  ulonglong *local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  FHashedName local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  ulonglong local_80;
  ulonglong local_78;
  FHashedName local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  uVar16 = 0;
  iVar15 = (this->Shaders).ArrayNum;
  local_160 = param_1;
  local_130 = param_2;
  local_128 = (TSet<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>,TDefaultMapHashableKeyFuncs<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,0>,FDefaultSetAllocator>
               *)param_3;
  local_120 = this;
  if (0 < iVar15) {
    lVar17 = 0;
    do {
      pFVar20 = local_120;
      uVar14 = 0;
      if ((int)uVar16 < iVar15) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_170 = (longlong)iVar15;
        local_178 = (longlong)(int)uVar16;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FVar9 = (pFVar20->Shaders).AllocatorInstance;
      if (((ulonglong)FVar9 & 1) != 0) {
        FVar9 = (ForAnyElementType)
                ((longlong)&(pFVar20->Shaders).AllocatorInstance.field_0x0 +
                ((longlong)FVar9 >> 0x18));
      }
      uVar12 = *(ulonglong *)(lVar17 * 8 + (longlong)FVar9);
      if ((uVar12 & 1) != 0) {
        uVar12 = ((longlong)uVar12 >> 0x18) + lVar17 * 8 + (longlong)FVar9;
      }
      if (uVar12 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                           ,0x197,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FVar2.ComparisonIndex.Value = (pFVar20->ShaderPlatformName).ComparisonIndex.Value;
      FVar2.Number = (pFVar20->ShaderPlatformName).Number;
      local_148 = FVar2.ComparisonIndex.Value;
      uStack_144 = FVar2.Number;
      local_166 = FGenericDataDrivenShaderPlatformInfo::GetShaderPlatformFromName(FVar2);
      iVar15 = (pFVar20->ShaderPermutations).ArrayNum;
      uVar14 = 0;
      if ((int)uVar16 < iVar15) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_178 = lVar17;
        local_170 = (longlong)iVar15;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FVar9 = (pFVar20->ShaderPermutations).AllocatorInstance;
      if (((ulonglong)FVar9 & 1) != 0) {
        FVar9 = (ForAnyElementType)
                ((longlong)&(pFVar20->ShaderPermutations).AllocatorInstance.field_0x0 +
                ((longlong)FVar9 >> 0x18));
      }
      uVar1 = *(undefined4 *)((longlong)FVar9 + lVar17 * 4);
      if (param_1->PointerTable == (FShaderMapPointerTable *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("PointerTable",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x9b4,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      puVar10 = (ulonglong *)(uVar12 + 200);
      if ((*(byte *)puVar10 & 1) != 0) {
        pFVar3 = param_1->PointerTable;
        uVar13 = (uint)(*puVar10 >> 1);
        iVar15 = *(int *)&(pFVar3->VFTypes).field_0x28;
        uVar14 = 0;
        if ((int)uVar13 < iVar15) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if (uVar14 == 0) {
          local_178 = (longlong)(int)uVar13;
          local_170 = (longlong)iVar15;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        puVar10 = (ulonglong *)
                  (*(longlong *)&(pFVar3->VFTypes).field_0x20 + (longlong)(int)uVar13 * 8);
        param_1 = local_160;
      }
      uVar4 = *puVar10;
      local_108.Hash = 0;
      if (param_1->PointerTable == (FShaderMapPointerTable *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("PointerTable",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x9b4,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      puVar10 = (ulonglong *)(uVar12 + 0xc0);
      if ((*(byte *)puVar10 & 1) != 0) {
        pFVar3 = param_1->PointerTable;
        uVar13 = (uint)(*puVar10 >> 1);
        iVar15 = *(int *)&(pFVar3->ShaderTypes).field_0x28;
        uVar14 = 0;
        if ((int)uVar13 < iVar15) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if (uVar14 == 0) {
          local_178 = (longlong)(int)uVar13;
          local_170 = (longlong)iVar15;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        puVar10 = (ulonglong *)
                  (*(longlong *)&(pFVar3->ShaderTypes).field_0x20 + (longlong)(int)uVar13 * 8);
        param_1 = local_160;
      }
      local_b8 = *puVar10;
      local_b0 = uVar4;
      FHashedName::FHashedName(&local_a8,&local_108);
      local_90 = *(undefined4 *)(local_130->Hash + 0x10);
      local_a0 = *(undefined8 *)local_130->Hash;
      uStack_98 = *(undefined8 *)(local_130->Hash + 8);
      local_88 = local_88 & 0xffff0000 | (uint)local_166;
      local_e8 = &local_b8;
      local_e0 = &local_f8;
      local_f8 = uVar12;
      local_f0 = param_1;
      local_8c = uVar1;
      TSet<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>,TDefaultMapHashableKeyFuncs<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FShaderId_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_&&>_>
                (local_128,
                 (TPairInitializer<FShaderId_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_&&>
                  *)local_110,(bool *)&local_e8);
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 1;
      iVar15 = (local_120->Shaders).ArrayNum;
    } while ((int)uVar16 < iVar15);
  }
  FVar9 = (local_120->ShaderPipelines).AllocatorInstance;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar9 = (ForAnyElementType)
            ((longlong)&(local_120->ShaderPipelines).AllocatorInstance.field_0x0 +
            ((longlong)FVar9 >> 0x18));
  }
  local_164 = (local_120->ShaderPipelines).ArrayNum;
  local_100 = (ForAnyElementType)((longlong)FVar9 + (longlong)local_164 * 8);
  pFVar20 = local_120;
  while( true ) {
    FVar7 = local_100;
    local_150 = FVar9;
    if ((pFVar20->ShaderPipelines).ArrayNum != local_164) {
      local_168[0] = 0;
      `TCheckedPointerIterator<TMemoryImagePtr<FShaderPipeline>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_168);
    }
    if (FVar9 == FVar7) break;
    pFVar11 = *(FHashedName **)FVar9;
    if (((ulonglong)pFVar11 & 1) != 0) {
      pFVar11 = (FHashedName *)(((longlong)pFVar11 >> 0x18) + (longlong)FVar9);
    }
    pFVar18 = pFVar11 + 6;
    local_118 = 5;
    pFVar19 = pFVar11;
    local_138 = pFVar11;
    do {
      pFVar19 = pFVar19 + 1;
      uVar12 = pFVar19->Hash;
      if ((uVar12 & 1) != 0) {
        uVar12 = (longlong)&pFVar11[1].Hash + ((longlong)uVar12 >> 0x18);
      }
      if (uVar12 != 0) {
        FVar5.ComparisonIndex.Value = (pFVar20->ShaderPlatformName).ComparisonIndex.Value;
        FVar5.Number = (pFVar20->ShaderPlatformName).Number;
        local_140 = FVar5.ComparisonIndex.Value;
        uStack_13c = FVar5.Number;
        local_166 = FGenericDataDrivenShaderPlatformInfo::GetShaderPlatformFromName(FVar5);
        local_158 = (undefined4)pFVar18->Hash;
        if (param_1->PointerTable == (FShaderMapPointerTable *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        puVar10 = (ulonglong *)(uVar12 + 200);
        if ((*(byte *)puVar10 & 1) != 0) {
          pFVar3 = param_1->PointerTable;
          uVar14 = (uint)(*puVar10 >> 1);
          iVar15 = *(int *)&(pFVar3->VFTypes).field_0x28;
          uVar16 = 0;
          if ((int)uVar14 < iVar15) {
            uVar16 = ~uVar14 >> 0x1f;
          }
          if (uVar16 == 0) {
            local_178 = (longlong)(int)uVar14;
            local_170 = (longlong)iVar15;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          puVar10 = (ulonglong *)
                    (*(longlong *)&(pFVar3->VFTypes).field_0x20 + (longlong)(int)uVar14 * 8);
          param_1 = local_160;
        }
        uVar4 = *puVar10;
        if (param_1->PointerTable == (FShaderMapPointerTable *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        puVar10 = (ulonglong *)(uVar12 + 0xc0);
        if ((*(byte *)puVar10 & 1) != 0) {
          pFVar3 = param_1->PointerTable;
          uVar14 = (uint)(*puVar10 >> 1);
          iVar15 = *(int *)&(pFVar3->ShaderTypes).field_0x28;
          uVar16 = 0;
          if ((int)uVar14 < iVar15) {
            uVar16 = ~uVar14 >> 0x1f;
          }
          if (uVar16 == 0) {
            local_178 = (longlong)(int)uVar14;
            local_170 = (longlong)iVar15;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          puVar10 = (ulonglong *)
                    (*(longlong *)&(pFVar3->ShaderTypes).field_0x20 + (longlong)(int)uVar14 * 8);
          param_1 = local_160;
        }
        local_80 = *puVar10;
        local_78 = uVar4;
        FHashedName::FHashedName(&local_70,local_138);
        local_68 = *(undefined8 *)local_130->Hash;
        uStack_60 = *(undefined8 *)(local_130->Hash + 8);
        local_58 = *(undefined4 *)(local_130->Hash + 0x10);
        local_54 = local_158;
        local_50 = local_50 & 0xffff0000 | (uint)local_166;
        local_c8 = &local_80;
        local_c0 = &local_d8;
        local_d8 = uVar12;
        local_d0 = param_1;
        TSet<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>,TDefaultMapHashableKeyFuncs<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FShaderId_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_&&>_>
                  (local_128,
                   (TPairInitializer<FShaderId_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_&&>
                    *)(local_110 + 4),(bool *)&local_c8);
        pFVar20 = local_120;
      }
      pFVar11 = pFVar11 + 1;
      pFVar18 = (FHashedName *)((longlong)&pFVar18->Hash + 4);
      local_118 = local_118 + -1;
    } while (local_118 != 0);
    FVar9 = (ForAnyElementType)((longlong)local_150 + 8);
    local_118 = 0;
  }
  return;
}

// GetShaderPipelineList @ 145ea0440

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __thiscall
FShaderMapContent::GetShaderPipelineList
          (FShaderMapContent *this,FShaderMapBase *param_1,
          TArray<FShaderPipelineRef,TSizedDefaultAllocator<32>_> *param_2,EFilter param_3)

{
  int *piVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  EShaderPlatform EVar8;
  int iVar9;
  FShaderPipelineType *this_00;
  ForAnyElementType FVar10;
  FHashedName *pFVar11;
  undefined1 local_res8 [8];
  FShaderMapBase *local_res10;
  FHashedName *local_48;
  FShaderMapBase *pFStack_40;
  
  FVar4.ComparisonIndex.Value = (this->ShaderPlatformName).ComparisonIndex.Value;
  FVar4.Number = (this->ShaderPlatformName).Number;
  local_res10 = param_1;
  EVar8 = FGenericDataDrivenShaderPlatformInfo::GetShaderPlatformFromName(FVar4);
  FVar10 = (this->ShaderPipelines).AllocatorInstance;
  piVar1 = &(this->ShaderPipelines).ArrayNum;
  iVar3 = *piVar1;
  if (((ulonglong)FVar10 & 1) != 0) {
    FVar10 = (ForAnyElementType)
             ((longlong)&(this->ShaderPipelines).AllocatorInstance.field_0x0 +
             ((longlong)FVar10 >> 0x18));
  }
  FVar2 = (ForAnyElementType)((longlong)FVar10 + (longlong)iVar3 * 8);
  while( true ) {
    if (*piVar1 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TMemoryImagePtr<FShaderPipeline>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar10 == FVar2) break;
    pFVar11 = *(FHashedName **)FVar10;
    if (((ulonglong)pFVar11 & 1) != 0) {
      pFVar11 = (FHashedName *)(((longlong)pFVar11 >> 0x18) + (longlong)FVar10);
    }
    this_00 = FShaderPipelineType::GetShaderPipelineTypeByName(pFVar11);
    bVar7 = FShaderPipelineType::ShouldOptimizeUnusedOutputs(this_00,EVar8);
    if ((!bVar7) || (param_3 != EOnlyShared)) {
      bVar7 = FShaderPipelineType::ShouldOptimizeUnusedOutputs(this_00,EVar8);
      if ((bVar7) || (param_3 != EOnlyUnique)) {
        pFVar5 = (param_2->AllocatorInstance).Data;
        pFStack_40 = local_res10;
        local_48 = pFVar11;
        if ((pFVar5 <= (FScriptContainerElement *)&local_48) &&
           ((FScriptContainerElement *)&local_48 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar9 = param_2->ArrayNum;
        if (iVar9 == param_2->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar9 + 1;
        pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(FHashedName **)pFVar5 = local_48;
        *(FShaderMapBase **)(pFVar5 + 8) = pFStack_40;
      }
    }
    FVar10 = (ForAnyElementType)((longlong)FVar10 + 8);
  }
  return;
}

// GetShaderPlatform @ 145ea0610

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPlatform __thiscall FShaderMapContent::GetShaderPlatform(FShaderMapContent *this)

{
  FName FVar1;
  EShaderPlatform EVar2;
  
  FVar1.ComparisonIndex.Value = (this->ShaderPlatformName).ComparisonIndex.Value;
  FVar1.Number = (this->ShaderPlatformName).Number;
  EVar2 = FGenericDataDrivenShaderPlatformInfo::GetShaderPlatformFromName(FVar1);
  return EVar2;
}

// RemoveShaderPipelineType @ 145eb0370

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
FShaderMapContent::RemoveShaderPipelineType(FShaderMapContent *this,FShaderPipelineType *param_1)

{
  TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_> *pTVar1;
  int *piVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  int iVar8;
  longlong lVar9;
  FShaderPipeline *this_00;
  uint uVar10;
  FProjectShaderPipelineToKey local_res8;
  
  pTVar1 = &this->ShaderPipelines;
  uVar5 = Algo::
          BinarySearchBy<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>,FHashedName,FShaderMapContent::FProjectShaderPipelineToKey,TLess<void>_>
                    (pTVar1,&param_1->HashedName,local_res8,(TLess<void>)local_res8);
  lVar9 = (longlong)(int)uVar5;
  if (uVar5 != 0xffffffff) {
    uVar10 = ~uVar5 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar5 < (this->ShaderPipelines).ArrayNum) {
      uVar6 = uVar10;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar7 = pTVar1->AllocatorInstance;
    if (((ulonglong)FVar7 & 1) != 0) {
      FVar7 = (ForAnyElementType)
              ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar7 >> 0x18));
    }
    this_00 = *(FShaderPipeline **)((longlong)FVar7 + lVar9 * 8);
    if (((ulonglong)this_00 & 1) != 0) {
      this_00 = (FShaderPipeline *)(((longlong)this_00 >> 0x18) + (longlong)FVar7 + lVar9 * 8);
    }
    if (this_00 != (FShaderPipeline *)0x0) {
      FShaderPipeline::~FShaderPipeline(this_00);
      ::operator_delete(this_00,0x48);
    }
    uVar6 = 0;
    if ((int)uVar5 < (this->ShaderPipelines).ArrayNum) {
      uVar6 = uVar10;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar7 = pTVar1->AllocatorInstance;
    if (((ulonglong)FVar7 & 1) != 0) {
      FVar7 = (ForAnyElementType)
              ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar7 >> 0x18));
    }
    _Dst = (void *)((longlong)FVar7 + lVar9 * 8);
    iVar8 = (this->ShaderPipelines).ArrayNum + ~uVar5;
    if (iVar8 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar8 << 3);
    }
    piVar2 = &(this->ShaderPipelines).ArrayNum;
    *piVar2 = *piVar2 + -1;
  }
  return;
}

// RemoveShaderTypePermutaion @ 145eb04e0

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
FShaderMapContent::RemoveShaderTypePermutaion
          (FShaderMapContent *this,FHashedName *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  FTypeLayoutDesc *pFVar11;
  ForAnyElementType FVar12;
  ushort uVar13;
  ulonglong uVar14;
  FShader *pFVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  
  uVar10 = ((longlong)param_2 ^ param_1->Hash) * -0x622015f714c7d297;
  uVar10 = (uVar10 >> 0x2f ^ uVar10 ^ (longlong)param_2) * -0x622015f714c7d297;
  uVar13 = ((ushort)(uVar10 >> 0x2f) ^ (ushort)uVar10) * 0x2d69;
  FVar12 = (this->ShaderHash).Hash;
  if (((ulonglong)FVar12 & 1) != 0) {
    FVar12 = (ForAnyElementType)
             ((longlong)&(this->ShaderHash).Hash.field_0x0 + ((longlong)FVar12 >> 0x18));
  }
  uVar3 = *(uint *)((longlong)FVar12 + (ulonglong)((ushort)(this->ShaderHash).HashMask & uVar13) * 4
                   );
  do {
    if (uVar3 == 0xffffffff) {
      return;
    }
    uVar17 = ~uVar3;
    uVar18 = uVar17 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar3 < (this->Shaders).ArrayNum) {
      uVar7 = uVar18;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar12 = (this->Shaders).AllocatorInstance;
    if (((ulonglong)FVar12 & 1) != 0) {
      FVar12 = (ForAnyElementType)
               ((longlong)&(this->Shaders).AllocatorInstance.field_0x0 + ((longlong)FVar12 >> 0x18))
      ;
    }
    lVar16 = (longlong)(int)uVar3;
    lVar2 = lVar16 * 8;
    pFVar15 = *(FShader **)(lVar2 + (longlong)FVar12);
    if (((ulonglong)pFVar15 & 1) != 0) {
      pFVar15 = (FShader *)(((longlong)pFVar15 >> 0x18) + lVar2 + (longlong)FVar12);
    }
    if ((pFVar15 == (FShader *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                           ,0x197,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = 0;
    if ((int)uVar3 < (this->ShaderTypes).ArrayNum) {
      uVar7 = uVar18;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar12 = (this->ShaderTypes).AllocatorInstance;
    if (((ulonglong)FVar12 & 1) != 0) {
      FVar12 = (ForAnyElementType)
               ((longlong)&(this->ShaderTypes).AllocatorInstance.field_0x0 +
               ((longlong)FVar12 >> 0x18));
    }
    if (*(ulong64 *)(lVar2 + (longlong)FVar12) == param_1->Hash) {
      uVar7 = 0;
      if ((int)uVar3 < (this->ShaderPermutations).ArrayNum) {
        uVar7 = uVar18;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar12 = (this->ShaderPermutations).AllocatorInstance;
      if (((ulonglong)FVar12 & 1) != 0) {
        FVar12 = (ForAnyElementType)
                 ((longlong)&(this->ShaderPermutations).AllocatorInstance.field_0x0 +
                 ((longlong)FVar12 >> 0x18));
      }
      if (*(int *)((longlong)FVar12 + lVar16 * 4) == param_2) {
        if ((pFVar15 == (FShader *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryLayout.h"
                               ,0x290,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar11 = GetTypeLayoutDesc((FPointerTableBase *)0x0,pFVar15);
        InternalDeleteObjectFromLayout(pFVar15,pFVar11,(FPointerTableBase *)0x0,false);
        iVar9 = uVar3 + 1;
        uVar7 = 0;
        if (iVar9 <= (this->Shaders).ArrayNum) {
          uVar7 = uVar18;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (this->Shaders).AllocatorInstance;
        if (((ulonglong)FVar12 & 1) != 0) {
          FVar12 = (ForAnyElementType)
                   ((longlong)&(this->Shaders).AllocatorInstance.field_0x0 +
                   ((longlong)FVar12 >> 0x18));
        }
        iVar4 = (this->Shaders).ArrayNum;
        iVar8 = uVar17 + iVar4;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove((void *)((longlong)FVar12 + lVar2),
                  (void *)((longlong)FVar12 + (longlong)(iVar4 - iVar8) * 8),(longlong)iVar8 << 3);
        }
        piVar1 = &(this->Shaders).ArrayNum;
        *piVar1 = *piVar1 + -1;
        uVar7 = 0;
        if (iVar9 <= (this->ShaderTypes).ArrayNum) {
          uVar7 = uVar18;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (this->ShaderTypes).AllocatorInstance;
        if (((ulonglong)FVar12 & 1) != 0) {
          FVar12 = (ForAnyElementType)
                   ((longlong)&(this->ShaderTypes).AllocatorInstance.field_0x0 +
                   ((longlong)FVar12 >> 0x18));
        }
        iVar4 = (this->ShaderTypes).ArrayNum;
        iVar8 = uVar17 + iVar4;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove((void *)((longlong)FVar12 + lVar2),
                  (void *)((longlong)FVar12 + (longlong)(iVar4 - iVar8) * 8),(longlong)iVar8 << 3);
        }
        piVar1 = &(this->ShaderTypes).ArrayNum;
        *piVar1 = *piVar1 + -1;
        uVar7 = 0;
        if (iVar9 <= (this->ShaderPermutations).ArrayNum) {
          uVar7 = uVar18;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (this->ShaderPermutations).AllocatorInstance;
        if (((ulonglong)FVar12 & 1) != 0) {
          FVar12 = (ForAnyElementType)
                   ((longlong)&(this->ShaderPermutations).AllocatorInstance.field_0x0 +
                   ((longlong)FVar12 >> 0x18));
        }
        iVar8 = (this->ShaderPermutations).ArrayNum;
        iVar9 = uVar17 + iVar8;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove((void *)((longlong)FVar12 + lVar16 * 4),
                  (void *)((longlong)FVar12 + (longlong)(iVar8 - iVar9) * 4),(longlong)iVar9 << 2);
        }
        piVar1 = &(this->ShaderPermutations).ArrayNum;
        *piVar1 = *piVar1 + -1;
        if (((this->ShaderTypes).ArrayNum != (this->Shaders).ArrayNum) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ShaderTypes.Num() == Shaders.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                               ,0x271,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((this->ShaderPermutations).ArrayNum != (this->Shaders).ArrayNum) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ShaderPermutations.Num() == Shaders.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                               ,0x272,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        THashTable<TMemoryImageAllocator<0>_>::Remove(&this->ShaderHash,uVar13,uVar3);
        uVar7 = (this->Shaders).ArrayNum;
        if (uVar3 == uVar7) {
          return;
        }
        uVar17 = 0;
        if ((int)uVar3 < (this->ShaderPermutations).ArrayNum) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (this->ShaderPermutations).AllocatorInstance;
        if (((ulonglong)FVar12 & 1) != 0) {
          FVar12 = (ForAnyElementType)
                   ((longlong)&(this->ShaderPermutations).AllocatorInstance.field_0x0 +
                   ((longlong)FVar12 >> 0x18));
        }
        uVar10 = (ulonglong)*(int *)((longlong)FVar12 + lVar16 * 4);
        uVar17 = 0;
        if ((int)uVar3 < (this->ShaderTypes).ArrayNum) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (this->ShaderTypes).AllocatorInstance;
        if (((ulonglong)FVar12 & 1) != 0) {
          FVar12 = (ForAnyElementType)
                   ((longlong)&(this->ShaderTypes).AllocatorInstance.field_0x0 +
                   ((longlong)FVar12 >> 0x18));
        }
        uVar14 = (uVar10 ^ *(ulonglong *)((longlong)FVar12 + lVar2)) * -0x622015f714c7d297;
        uVar10 = (uVar14 >> 0x2f ^ uVar10 ^ uVar14) * -0x622015f714c7d297;
        uVar13 = ((ushort)(uVar10 >> 0x2f) ^ (ushort)uVar10) * 0x2d69;
        THashTable<TMemoryImageAllocator<0>_>::Remove(&this->ShaderHash,uVar13,uVar7);
        THashTable<TMemoryImageAllocator<0>_>::Add(&this->ShaderHash,uVar13,uVar3);
        return;
      }
    }
    FVar12 = (this->ShaderHash).NextIndex;
    if (((ulonglong)FVar12 & 1) != 0) {
      FVar12 = (ForAnyElementType)
               ((longlong)&(this->ShaderHash).NextIndex.field_0x0 + ((longlong)FVar12 >> 0x18));
    }
    uVar3 = *(uint *)((longlong)FVar12 + (ulonglong)uVar3 * 4);
  } while( true );
}

// UpdateHash @ 145ebc270

void __thiscall FShaderMapContent::UpdateHash(FShaderMapContent *this,FSHA1 *param_1)

{
  ForAnyElementType FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 local_res8 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  
  uVar8 = 0;
  if (0 < (this->Shaders).ArrayNum) {
    lVar10 = 0;
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->ShaderTypes).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar6 = (this->ShaderTypes).AllocatorInstance;
      if (((ulonglong)FVar6 & 1) != 0) {
        FVar6 = (ForAnyElementType)
                ((longlong)&(this->ShaderTypes).AllocatorInstance.field_0x0 +
                ((longlong)FVar6 >> 0x18));
      }
      local_res18 = *(undefined8 *)(lVar9 + (longlong)FVar6);
      uVar5 = 0;
      if ((int)uVar8 < (this->ShaderPermutations).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar6 = (this->ShaderPermutations).AllocatorInstance;
      if (((ulonglong)FVar6 & 1) != 0) {
        FVar6 = (ForAnyElementType)
                ((longlong)&(this->ShaderPermutations).AllocatorInstance.field_0x0 +
                ((longlong)FVar6 >> 0x18));
      }
      local_res8[0] = *(undefined4 *)(lVar10 + (longlong)FVar6);
      FSHA1::Update(param_1,(uchar *)&local_res18,8);
      FSHA1::Update(param_1,(uchar *)local_res8,4);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
      lVar10 = lVar10 + 4;
    } while ((int)uVar8 < (this->Shaders).ArrayNum);
  }
  FVar6 = (this->ShaderPipelines).AllocatorInstance;
  if (((ulonglong)FVar6 & 1) != 0) {
    FVar6 = (ForAnyElementType)
            ((longlong)&(this->ShaderPipelines).AllocatorInstance.field_0x0 +
            ((longlong)FVar6 >> 0x18));
  }
  iVar2 = (this->ShaderPipelines).ArrayNum;
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar1 = (ForAnyElementType)((longlong)FVar6 + (longlong)iVar2 * 8);
  for (; FVar6 != FVar1; FVar6 = (ForAnyElementType)((longlong)FVar6 + 8)) {
    puVar7 = *(undefined8 **)FVar6;
    if (((ulonglong)puVar7 & 1) != 0) {
      puVar7 = (undefined8 *)(((longlong)puVar7 >> 0x18) + (longlong)FVar6);
    }
    local_res20 = *puVar7;
    FSHA1::Update(param_1,(uchar *)&local_res20,8);
  }
  return;
}

// Validate @ 145ebc780

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderMapContent::Validate(FShaderMapContent *this,FShaderMapBase *param_1)

{
  int *piVar1;
  ForAnyElementType FVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  
  FVar9 = (this->Shaders).AllocatorInstance;
  piVar1 = &(this->Shaders).ArrayNum;
  iVar3 = *piVar1;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar9 = (ForAnyElementType)
            ((longlong)&(this->Shaders).AllocatorInstance.field_0x0 + ((longlong)FVar9 >> 0x18));
  }
  FVar2 = (ForAnyElementType)((longlong)FVar9 + (longlong)iVar3 * 8);
  while( true ) {
    if (*piVar1 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TMemoryImagePtr<FShader>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (FVar9 == FVar2) break;
    uVar8 = *(ulonglong *)FVar9;
    if ((uVar8 & 1) != 0) {
      uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)FVar9;
    }
    if (*(int *)(uVar8 + 0xd4) == -1) {
      if ((param_1->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(byte *)(uVar8 + 0xc0) & 1) != 0) {
        uVar7 = (uint)(*(ulonglong *)(uVar8 + 0xc0) >> 1);
        uVar6 = 0;
        if ((int)uVar7 < *(int *)&(param_1->PointerTable->ShaderTypes).field_0x28) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader->GetResourceIndex() != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                         ,0x329,L"Missing resource for %s");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar9 = (ForAnyElementType)((longlong)FVar9 + 8);
  }
  return;
}

