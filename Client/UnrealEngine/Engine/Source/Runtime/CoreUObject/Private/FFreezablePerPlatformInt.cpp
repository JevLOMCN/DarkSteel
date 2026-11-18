// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticStruct @ 142122480

UScriptStruct * __cdecl FFreezablePerPlatformInt::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFreezablePerPlatformInt.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FFreezablePerPlatformInt.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFreezablePerPlatformInt,(UObject *)pUVar1,
                         L"FreezablePerPlatformInt");
  }
  return Z_Registration_Info_UScriptStruct_FFreezablePerPlatformInt.OuterSingleton;
}

// GetTypeLayout @ 14213ee00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FFreezablePerPlatformInt::GetTypeLayout(FFreezablePerPlatformInt *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x04';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FFreezablePerPl;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FFreezablePerPlatformInt,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FFreezablePerPlatformInt::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Default";
    DAT_15501dc1a = Freeze::FindFieldNameLength(L"Default");
    if ((DAT_15501d59f & 2) == 0) {
      DAT_15501d59f = DAT_15501d59f | 3;
      _DAT_15501d590 = 4;
      _DAT_15501d540 = L"int";
      _DAT_15501d558 = TStaticGetTypeLayoutHelper<int>::CallWriteMemoryImage;
      _DAT_15501d560 = TStaticGetTypeLayoutHelper<int>::CallUnfrozenCopy;
      _DAT_15501d568 = TStaticGetTypeLayoutHelper<int>::CallAppendHash;
      _DAT_15501d570 = TStaticGetTypeLayoutHelper<int>::CallGetTargetAlignment;
      _DAT_15501d578 = TStaticGetTypeLayoutHelper<int>::CallToString;
      _DAT_15501d550 = TStaticGetTypeLayoutHelper<int>::CallDestroy;
      _DAT_15501d598 = 4;
      DAT_15501d59c = 0;
      _DAT_15501d594 = 4;
    }
    _DAT_15501dc10 = 0;
    _DAT_15501dbf8 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<int>::Do(void)'
          ::__l2::TypeBuffer;
    _DAT_15501dc14 = 1;
    _DAT_15501dc08 = Freeze::DefaultWriteMemoryImageField;
    DAT_15501dc00 = ::TypeBuffer[0x10];
    DAT_15501dc00_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15501dc00_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15501dc00_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15501dc00_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15501dc00_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15501dc00_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15501dc00_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FFreezablePerPlatformInt::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15501dc18 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 1421431e0

void __cdecl
FFreezablePerPlatformInt::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  return;
}

// StaticGetTypeLayout @ 1421528f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FFreezablePerPlatformInt::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x04';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FFreezablePerPl;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FFreezablePerPlatformInt,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FFreezablePerPlatformInt::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Default";
    DAT_15501dc1a = Freeze::FindFieldNameLength(L"Default");
    if ((DAT_15501d59f & 2) == 0) {
      DAT_15501d59f = DAT_15501d59f | 3;
      _DAT_15501d590 = 4;
      _DAT_15501d540 = L"int";
      _DAT_15501d558 = TStaticGetTypeLayoutHelper<int>::CallWriteMemoryImage;
      _DAT_15501d560 = TStaticGetTypeLayoutHelper<int>::CallUnfrozenCopy;
      _DAT_15501d568 = TStaticGetTypeLayoutHelper<int>::CallAppendHash;
      _DAT_15501d570 = TStaticGetTypeLayoutHelper<int>::CallGetTargetAlignment;
      _DAT_15501d578 = TStaticGetTypeLayoutHelper<int>::CallToString;
      _DAT_15501d550 = TStaticGetTypeLayoutHelper<int>::CallDestroy;
      _DAT_15501d598 = 4;
      DAT_15501d59c = 0;
      _DAT_15501d594 = 4;
    }
    _DAT_15501dc10 = 0;
    _DAT_15501dbf8 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<int>::Do(void)'
          ::__l2::TypeBuffer;
    _DAT_15501dc14 = 1;
    _DAT_15501dc08 = Freeze::DefaultWriteMemoryImageField;
    DAT_15501dc00 = ::TypeBuffer[0x10];
    DAT_15501dc00_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15501dc00_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15501dc00_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15501dc00_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15501dc00_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15501dc00_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15501dc00_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FFreezablePerPlatformInt::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15501dc18 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// ToString @ 142152cb0

FString * __thiscall
FFreezablePerPlatformInt::ToString(FFreezablePerPlatformInt *this,FString *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = this->Default;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::AppendInt(__return_storage_ptr__,iVar1);
  return __return_storage_ptr__;
}

