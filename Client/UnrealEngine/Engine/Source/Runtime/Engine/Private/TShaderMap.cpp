// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// CreatePointerTable @ 147f739d0

FShaderMapPointerTable * __thiscall
TShaderMap<FMaterialShaderMapContent,FShaderMapPointerTable>::CreatePointerTable
          (TShaderMap<FMaterialShaderMapContent,FShaderMapPointerTable> *this)

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

// GetContentTypeDesc @ 147f79600

FTypeLayoutDesc * __thiscall
TShaderMap<FMaterialShaderMapContent,FShaderMapPointerTable>::GetContentTypeDesc
          (TShaderMap<FMaterialShaderMapContent,FShaderMapPointerTable> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xa8;
    ::TypeBuffer[0x59] = '\x02';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialShader;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = FMaterialShaderMapContent::InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialShaderMapContent,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    FMaterialShaderMapContent::InternalLinkType<1>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer._8_8_ = FShaderMapContent::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
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

