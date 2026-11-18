// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 3

// GetTypeLayout @ 1494d34d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FComputeKernelShaderMapContent::GetTypeLayout(FComputeKernelShaderMapContent *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xa0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FComputeKernelS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FComputeKernelShaderMapContent,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FComputeKernelShaderMapContent::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "CompilationOutput";
    DAT_15527fd42 = Freeze::FindFieldNameLength(L"CompilationOutput");
    _DAT_15527fd20 = FComputeKernelCompilationOutput::StaticGetTypeLayout();
    DAT_15527fd28 = ::TypeBuffer[0x10];
    DAT_15527fd28_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15527fd28_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15527fd28_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15527fd28_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15527fd28_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15527fd28_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15527fd28_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FComputeKernelShaderMapContent::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15527fd30 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15527fd38 = 0x98;
    _DAT_15527fd3c = 1;
    _DAT_15527fd40 = 0;
    `public:_static_void___cdecl_FComputeKernelShaderMapContent::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderMapId";
    DAT_15527fd12 = Freeze::FindFieldNameLength(L"ShaderMapId");
    _DAT_15527fcf0 = FComputeKernelShaderMapId::StaticGetTypeLayout();
    DAT_15527fcf8 = ::TypeBuffer[0x10];
    DAT_15527fcf8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15527fcf8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15527fcf8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15527fcf8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15527fcf8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15527fcf8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15527fcf8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FComputeKernelShaderMapContent::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15527fd00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15527fd08 = 0x70;
    _DAT_15527fd0c = 1;
    _DAT_15527fd10 = 0;
    `public:_static_void___cdecl_FComputeKernelShaderMapContent::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "FriendlyName";
    DAT_15527fce2 = Freeze::FindFieldNameLength(L"FriendlyName");
    _DAT_15527fcc0 = FMemoryImageString::StaticGetTypeLayout();
    DAT_15527fcc8 = ::TypeBuffer[0x10];
    DAT_15527fcc8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15527fcc8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15527fcc8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15527fcc8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15527fcc8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15527fcc8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15527fcc8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FComputeKernelShaderMapContent::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15527fcd0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15527fcd8 = 0x60;
    _DAT_15527fcdc = 1;
    _DAT_15527fce0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShaderMapContent::StaticGetTypeLayout();
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

// InternalDestroy @ 1494d4200

void __cdecl
FComputeKernelShaderMapContent::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x80));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x60));
    FShaderMapContent::~FShaderMapContent(param_1);
  }
  memset(param_1,0xfe,0xa0);
  return;
}

// StaticGetTypeLayout @ 1494d7aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FComputeKernelShaderMapContent::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xa0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FComputeKernelS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FComputeKernelShaderMapContent,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FComputeKernelShaderMapContent::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "CompilationOutput";
    DAT_15527fd42 = Freeze::FindFieldNameLength(L"CompilationOutput");
    _DAT_15527fd20 = FComputeKernelCompilationOutput::StaticGetTypeLayout();
    DAT_15527fd28 = ::TypeBuffer[0x10];
    DAT_15527fd28_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15527fd28_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15527fd28_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15527fd28_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15527fd28_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15527fd28_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15527fd28_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FComputeKernelShaderMapContent::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15527fd30 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15527fd38 = 0x98;
    _DAT_15527fd3c = 1;
    _DAT_15527fd40 = 0;
    `public:_static_void___cdecl_FComputeKernelShaderMapContent::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderMapId";
    DAT_15527fd12 = Freeze::FindFieldNameLength(L"ShaderMapId");
    _DAT_15527fcf0 = FComputeKernelShaderMapId::StaticGetTypeLayout();
    DAT_15527fcf8 = ::TypeBuffer[0x10];
    DAT_15527fcf8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15527fcf8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15527fcf8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15527fcf8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15527fcf8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15527fcf8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15527fcf8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FComputeKernelShaderMapContent::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15527fd00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15527fd08 = 0x70;
    _DAT_15527fd0c = 1;
    _DAT_15527fd10 = 0;
    `public:_static_void___cdecl_FComputeKernelShaderMapContent::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "FriendlyName";
    DAT_15527fce2 = Freeze::FindFieldNameLength(L"FriendlyName");
    _DAT_15527fcc0 = FMemoryImageString::StaticGetTypeLayout();
    DAT_15527fcc8 = ::TypeBuffer[0x10];
    DAT_15527fcc8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15527fcc8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15527fcc8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15527fcc8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15527fcc8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15527fcc8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15527fcc8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FComputeKernelShaderMapContent::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15527fcd0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15527fcd8 = 0x60;
    _DAT_15527fcdc = 1;
    _DAT_15527fce0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShaderMapContent::StaticGetTypeLayout();
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

