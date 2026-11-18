// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetTypeLayout @ 147f7ccb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FMaterialCacheTagStack::GetTypeLayout(FMaterialCacheTagStack *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialCacheT;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialCacheTagStack,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialCacheTagStack::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TagGuid";
    DAT_155215ea2 = Freeze::FindFieldNameLength(L"TagGuid");
    _DAT_155215e80 = StaticGetTypeLayoutDesc<FGuid>();
    _DAT_155215e98 = 0;
    _DAT_155215e90 = Freeze::DefaultWriteMemoryImageField;
    DAT_155215e88 = ::TypeBuffer[0x10];
    DAT_155215e88_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215e88_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215e88_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215e88_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215e88_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215e88_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215e88_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialCacheTagStack::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215e9c = 1;
    _DAT_155215ea0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 147f7f670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FMaterialCacheTagStack::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_1506d61e8;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// StaticGetTypeLayout @ 147f89c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMaterialCacheTagStack::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialCacheT;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialCacheTagStack,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialCacheTagStack::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TagGuid";
    DAT_155215ea2 = Freeze::FindFieldNameLength(L"TagGuid");
    _DAT_155215e80 = StaticGetTypeLayoutDesc<FGuid>();
    _DAT_155215e98 = 0;
    _DAT_155215e90 = Freeze::DefaultWriteMemoryImageField;
    DAT_155215e88 = ::TypeBuffer[0x10];
    DAT_155215e88_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215e88_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215e88_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215e88_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215e88_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215e88_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215e88_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialCacheTagStack::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215e9c = 1;
    _DAT_155215ea0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

