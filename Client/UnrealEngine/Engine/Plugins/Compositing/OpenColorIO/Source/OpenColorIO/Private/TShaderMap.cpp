// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 2

// CreatePointerTable @ 14d76efe0

FShaderMapPointerTable * __thiscall
TShaderMap<FOpenColorIOShaderMapContent,FShaderMapPointerTable>::CreatePointerTable
          (TShaderMap<FOpenColorIOShaderMapContent,FShaderMapPointerTable> *this)

{
  FShaderMapPointerTable *pFVar1;
  
  pFVar1 = ::operator_new(0x68);
  if (pFVar1 != (FShaderMapPointerTable *)0x0) {
    pFVar1->_padding_ = (longlong)&___7FShaderMapPointerTable__6B_;
    *(undefined8 *)&pFVar1->ShaderTypes = 0;
    *(undefined8 *)&(pFVar1->ShaderTypes).field_0x8 = 0;
    *(undefined8 *)&(pFVar1->ShaderTypes).field_0x10 = 0;
    *(undefined8 *)&(pFVar1->ShaderTypes).field_0x18 = 0;
    *(undefined8 *)&(pFVar1->ShaderTypes).field_0x20 = 0;
    *(undefined8 *)&(pFVar1->ShaderTypes).field_0x28 = 0;
    *(undefined8 *)&pFVar1->VFTypes = 0;
    *(undefined8 *)&(pFVar1->VFTypes).field_0x8 = 0;
    *(undefined8 *)&(pFVar1->VFTypes).field_0x10 = 0;
    *(undefined8 *)&(pFVar1->VFTypes).field_0x18 = 0;
    *(undefined8 *)&(pFVar1->VFTypes).field_0x20 = 0;
    *(undefined8 *)&(pFVar1->VFTypes).field_0x28 = 0;
    return pFVar1;
  }
  return (FShaderMapPointerTable *)0x0;
}

// GetContentTypeDesc @ 14d770a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShaderMap<FOpenColorIOShaderMapContent,FShaderMapPointerTable>::GetContentTypeDesc
          (TShaderMap<FOpenColorIOShaderMapContent,FShaderMapPointerTable> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xa8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FOpenColorIOSha;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = FOpenColorIOShaderMapContent::InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FOpenColorIOShaderMapContent,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FOpenColorIOShaderMapContent::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OpenColorIOCompilationOutput";
    DAT_15536a6a2 = Freeze::FindFieldNameLength(L"OpenColorIOCompilationOutput");
    _DAT_15536a680 = FOpenColorIOCompilationOutput::StaticGetTypeLayout();
    DAT_15536a688 = ::TypeBuffer[0x10];
    DAT_15536a688_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15536a688_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15536a688_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15536a688_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15536a688_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15536a688_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15536a688_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOpenColorIOShaderMapContent::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15536a690 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15536a698 = 0xa0;
    _DAT_15536a69c = 1;
    _DAT_15536a6a0 = 0;
    `public:_static_void___cdecl_FOpenColorIOShaderMapContent::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderMapId";
    DAT_15536a672 = Freeze::FindFieldNameLength(L"ShaderMapId");
    _DAT_15536a650 = FOpenColorIOShaderMapId::StaticGetTypeLayout();
    DAT_15536a658 = ::TypeBuffer[0x10];
    DAT_15536a658_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15536a658_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15536a658_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15536a658_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15536a658_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15536a658_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15536a658_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOpenColorIOShaderMapContent::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15536a660 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15536a668 = 0x70;
    _DAT_15536a66c = 1;
    _DAT_15536a670 = 0;
    `public:_static_void___cdecl_FOpenColorIOShaderMapContent::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "FriendlyName";
    DAT_15536a642 = Freeze::FindFieldNameLength(L"FriendlyName");
    _DAT_15536a620 = FMemoryImageString::StaticGetTypeLayout();
    DAT_15536a628 = ::TypeBuffer[0x10];
    DAT_15536a628_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15536a628_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15536a628_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15536a628_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15536a628_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15536a628_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15536a628_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOpenColorIOShaderMapContent::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15536a630 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15536a638 = 0x60;
    _DAT_15536a63c = 1;
    _DAT_15536a640 = 0;
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

