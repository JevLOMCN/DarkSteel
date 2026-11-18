// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 5

// GetTypeLayout @ 145caecd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FRHIUniformBufferLayoutInitializer::GetTypeLayout(FRHIUniformBufferLayoutInitializer *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0x80;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FRHIUniformBuff;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRHIUniformBufferLayoutInitializer,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Name";
    DAT_155178732 = Freeze::FindFieldNameLength(L"Name");
    _DAT_155178710 = FMemoryImageString::StaticGetTypeLayout();
    _DAT_155178720 = Freeze::DefaultWriteMemoryImageField;
    DAT_155178718 = ::TypeBuffer[0x10];
    DAT_155178718_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155178718_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155178718_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155178718_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155178718_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155178718_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155178718_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155178728 = 0;
    _DAT_15517872c = 1;
    _DAT_155178730 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 145cb0430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FRHIUniformBufferLayoutInitializer::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  FRHIUniformBufferLayoutInitializer::InternalLinkType<10>::Initialize(param_1);
  `public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ConstantBufferSize";
  DAT_1551788b2 = Freeze::FindFieldNameLength(L"ConstantBufferSize");
  _DAT_155178890 = StaticGetTypeLayoutDesc<unsigned_int>();
  _DAT_1551788a8 = 0x74;
  _DAT_1551788a0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551788ac = 1;
  _DAT_1551788b0 = 0;
  _DAT_155178898 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "H";
  DAT_155178882 = Freeze::FindFieldNameLength(L"H");
  _DAT_155178860 = StaticGetTypeLayoutDesc<unsigned_int>();
  _DAT_155178870 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155178878 = 0x70;
  _DAT_15517887c = 1;
  _DAT_155178880 = 0;
  _DAT_155178868 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UniformBuffers";
  DAT_155178852 = Freeze::FindFieldNameLength(L"UniformBuffers");
  _DAT_155178830 =
       StaticGetTypeLayoutDesc<TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>_>
                 ();
  _DAT_155178840 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155178848 = 0x60;
  _DAT_15517884c = 1;
  _DAT_155178850 = 0;
  _DAT_155178838 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "GraphUniformBuffers";
  DAT_155178822 = Freeze::FindFieldNameLength(L"GraphUniformBuffers");
  _DAT_155178800 =
       StaticGetTypeLayoutDesc<TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>_>
                 ();
  _DAT_155178810 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155178818 = 0x50;
  _DAT_15517881c = 1;
  _DAT_155178820 = 0;
  _DAT_155178808 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "GraphBuffers";
  DAT_1551787f2 = Freeze::FindFieldNameLength(L"GraphBuffers");
  _DAT_1551787d0 =
       StaticGetTypeLayoutDesc<TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>_>
                 ();
  _DAT_1551787e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551787e8 = 0x40;
  _DAT_1551787ec = 1;
  _DAT_1551787f0 = 0;
  _DAT_1551787d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "GraphTextures";
  DAT_1551787c2 = Freeze::FindFieldNameLength(L"GraphTextures");
  _DAT_1551787a0 =
       StaticGetTypeLayoutDesc<TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>_>
                 ();
  _DAT_1551787b0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551787b8 = 0x30;
  _DAT_1551787bc = 1;
  _DAT_1551787c0 = 0;
  _DAT_1551787a8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "GraphResources";
  DAT_155178792 = Freeze::FindFieldNameLength(L"GraphResources");
  _DAT_155178770 =
       StaticGetTypeLayoutDesc<TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>_>
                 ();
  _DAT_155178780 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155178788 = 0x20;
  _DAT_15517878c = 1;
  _DAT_155178790 = 0;
  _DAT_155178778 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Resources";
  DAT_155178762 = Freeze::FindFieldNameLength(L"Resources");
  _DAT_155178740 =
       StaticGetTypeLayoutDesc<TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>_>
                 ();
  _DAT_155178750 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155178758 = 0x10;
  _DAT_15517875c = 1;
  _DAT_155178760 = 0;
  _DAT_155178748 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 145cb0760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FRHIUniformBufferLayoutInitializer::InternalLinkType<10>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Flags";
  DAT_155178972 = Freeze::FindFieldNameLength(L"Flags");
  if ((DAT_1551786a7 & 2) == 0) {
    DAT_1551786a7 = DAT_1551786a7 | 3;
    _DAT_155178698 = 1;
    _DAT_155178648 = L"ERHIUniformBufferFlags";
    _DAT_155178660 = TStaticGetTypeLayoutHelper<enum_ERHIUniformBufferFlags>::CallWriteMemoryImage;
    _DAT_155178668 = TStaticGetTypeLayoutHelper<enum_ERHIUniformBufferFlags>::CallUnfrozenCopy;
    _DAT_155178670 = TStaticGetTypeLayoutHelper<enum_ERHIUniformBufferFlags>::CallAppendHash;
    _DAT_155178678 = TStaticGetTypeLayoutHelper<enum_ERHIUniformBufferFlags>::CallGetTargetAlignment
    ;
    _DAT_155178680 = TStaticGetTypeLayoutHelper<enum_ERHIUniformBufferFlags>::CallToString;
    _DAT_155178658 = TStaticGetTypeLayoutHelper<enum_ERHIUniformBufferFlags>::CallDestroy;
    _DAT_1551786a0 = 1;
    DAT_1551786a4 = 0;
    _DAT_15517869c = 1;
  }
  _DAT_155178968 = 0x7c;
  _DAT_155178950 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<ERHIUniformBufferFlags>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15517896c = 1;
  _DAT_155178960 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155178970 = 0;
  _DAT_155178958 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "BindingFlags";
  DAT_155178942 = Freeze::FindFieldNameLength(L"BindingFlags");
  if ((DAT_15517863f & 2) == 0) {
    DAT_15517863f = DAT_15517863f | 3;
    _DAT_155178630 = 1;
    _DAT_1551785e0 = L"EUniformBufferBindingFlags";
    _DAT_1551785f8 =
         TStaticGetTypeLayoutHelper<enum_EUniformBufferBindingFlags>::CallWriteMemoryImage;
    _DAT_155178600 = TStaticGetTypeLayoutHelper<enum_EUniformBufferBindingFlags>::CallUnfrozenCopy;
    _DAT_155178608 = TStaticGetTypeLayoutHelper<enum_EUniformBufferBindingFlags>::CallAppendHash;
    _DAT_155178610 =
         TStaticGetTypeLayoutHelper<enum_EUniformBufferBindingFlags>::CallGetTargetAlignment;
    _DAT_155178618 = TStaticGetTypeLayoutHelper<enum_EUniformBufferBindingFlags>::CallToString;
    _DAT_1551785f0 = TStaticGetTypeLayoutHelper<enum_EUniformBufferBindingFlags>::CallDestroy;
    _DAT_155178638 = 1;
    DAT_15517863c = 0;
    _DAT_155178634 = 1;
  }
  _DAT_155178930 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155178920 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<EUniformBufferBindingFlags>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_155178938 = 0x7b;
  _DAT_15517893c = 1;
  _DAT_155178940 = 0;
  _DAT_155178928 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "StaticSlot";
  DAT_155178912 = Freeze::FindFieldNameLength(L"StaticSlot");
  if ((DAT_1551675ef & 2) == 0) {
    DAT_1551675ef = DAT_1551675ef | 3;
    _DAT_1551675e0 = 1;
    _DAT_155167590 = L"unsigned char";
    _DAT_1551675a8 = TStaticGetTypeLayoutHelper<unsigned_char>::CallWriteMemoryImage;
    _DAT_1551675b0 = TStaticGetTypeLayoutHelper<unsigned_char>::CallUnfrozenCopy;
    _DAT_1551675b8 = TStaticGetTypeLayoutHelper<unsigned_char>::CallAppendHash;
    _DAT_1551675c0 = TStaticGetTypeLayoutHelper<unsigned_char>::CallGetTargetAlignment;
    _DAT_1551675c8 = TStaticGetTypeLayoutHelper<unsigned_char>::CallToString;
    _DAT_1551675a0 = TStaticGetTypeLayoutHelper<unsigned_char>::CallDestroy;
    _DAT_1551675e8 = 1;
    DAT_1551675ec = 0;
    _DAT_1551675e4 = 1;
  }
  _DAT_155178900 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551788f0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<unsigned_char>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_155178908 = 0x7a;
  _DAT_15517890c = 1;
  _DAT_155178910 = 0;
  _DAT_1551788f8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "RenderTargetsOffset";
  DAT_1551788e2 = Freeze::FindFieldNameLength(L"RenderTargetsOffset");
  _DAT_1551788c0 = StaticGetTypeLayoutDesc<unsigned_short>();
  _DAT_1551788d0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551788d8 = 0x78;
  _DAT_1551788dc = 1;
  _DAT_1551788e0 = 0;
  _DAT_1551788c8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 145cb15d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FRHIUniformBufferLayoutInitializer::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x60));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x50));
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
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x60) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x70) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x78) = uVar2;
  return;
}

// StaticGetTypeLayout @ 145cc2280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FRHIUniformBufferLayoutInitializer::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0x80;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FRHIUniformBuff;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRHIUniformBufferLayoutInitializer,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Name";
    DAT_155178732 = Freeze::FindFieldNameLength(L"Name");
    _DAT_155178710 = FMemoryImageString::StaticGetTypeLayout();
    _DAT_155178720 = Freeze::DefaultWriteMemoryImageField;
    DAT_155178718 = ::TypeBuffer[0x10];
    DAT_155178718_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155178718_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155178718_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155178718_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155178718_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155178718_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155178718_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRHIUniformBufferLayoutInitializer::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155178728 = 0;
    _DAT_15517872c = 1;
    _DAT_155178730 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

