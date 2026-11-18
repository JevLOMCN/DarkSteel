// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// GetTypeLayout @ 1491809f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FNiagaraDataInterfaceParametersCS_Grid3DCollection::GetTypeLayout
          (FNiagaraDataInterfaceParametersCS_Grid3DCollection *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FNiagaraDataInt;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FNiagaraDataInterfaceParametersCS_Grid3DCollection,0>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid3DCollection::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AttributeChannelCount";
    DAT_155274372 = Freeze::FindFieldNameLength(L"AttributeChannelCount");
    _DAT_155274350 = StaticGetTypeLayoutDesc<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>();
    DAT_155274358 = ::TypeBuffer[0x10];
    DAT_155274358_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155274358_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155274358_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155274358_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155274358_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155274358_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155274358_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid3DCollection::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155274360 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155274368 = 0x10;
    _DAT_15527436c = 1;
    _DAT_155274370 = 0;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid3DCollection::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AttributeNames";
    DAT_155274342 = Freeze::FindFieldNameLength(L"AttributeNames");
    _DAT_155274320 = StaticGetTypeLayoutDesc<TArray<FMemoryImageName,TMemoryImageAllocator<0>_>_>();
    DAT_155274328 = ::TypeBuffer[0x10];
    DAT_155274328_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155274328_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155274328_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155274328_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155274328_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155274328_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155274328_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid3DCollection::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155274330 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155274338 = 0;
    _DAT_15527433c = 1;
    _DAT_155274340 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FNiagaraDataInterfaceParametersCS::StaticGetTypeLayout();
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

// InternalDestroy @ 149186590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FNiagaraDataInterfaceParametersCS_Grid3DCollection::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (!param_4) {
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
  return;
}

// StaticGetTypeLayout @ 14918ec40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
FNiagaraDataInterfaceParametersCS_Grid3DCollection::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FNiagaraDataInt;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FNiagaraDataInterfaceParametersCS_Grid3DCollection,0>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid3DCollection::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AttributeChannelCount";
    DAT_155274372 = Freeze::FindFieldNameLength(L"AttributeChannelCount");
    _DAT_155274350 = StaticGetTypeLayoutDesc<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>();
    DAT_155274358 = ::TypeBuffer[0x10];
    DAT_155274358_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155274358_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155274358_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155274358_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155274358_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155274358_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155274358_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid3DCollection::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155274360 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155274368 = 0x10;
    _DAT_15527436c = 1;
    _DAT_155274370 = 0;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid3DCollection::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AttributeNames";
    DAT_155274342 = Freeze::FindFieldNameLength(L"AttributeNames");
    _DAT_155274320 = StaticGetTypeLayoutDesc<TArray<FMemoryImageName,TMemoryImageAllocator<0>_>_>();
    DAT_155274328 = ::TypeBuffer[0x10];
    DAT_155274328_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155274328_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155274328_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155274328_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155274328_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155274328_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155274328_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid3DCollection::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155274330 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155274338 = 0;
    _DAT_15527433c = 1;
    _DAT_155274340 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FNiagaraDataInterfaceParametersCS::StaticGetTypeLayout();
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

