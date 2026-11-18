// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UEOpenExrRTTI
// Functions: 25

// `dynamic_initializer_for_'ModuleRegistrantUEOpenExrRTTI'' @ 1413fc570

void __cdecl _dynamic_initializer_for__ModuleRegistrantUEOpenExrRTTI__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "UEOpenExrRTTI";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"UEOpenExrRTTI",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FOpenExrRTTIModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14ddb7810

void * __thiscall
IOpenExrRTTIModule::_scalar_deleting_destructor_(IOpenExrRTTIModule *this,uint param_1)

{
  *this = (IOpenExrRTTIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ddb8560

void * __thiscall
FOpenExrRTTIModule::_scalar_deleting_destructor_(FOpenExrRTTIModule *this,uint param_1)

{
  *this = (FOpenExrRTTIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_UEOpenExrRTTI @ 14ddb8690

void __cdecl IMPLEMENT_MODULE_UEOpenExrRTTI(void)

{
  return;
}

// dtor$0 @ 150261680

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x38),0x10);
  return;
}

// dtor$1 @ 1502616b0

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x108),0x10);
  return;
}

// dtor$2 @ 1502616e0

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x110),0x28);
  return;
}

// dtor$3 @ 150261710

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>
              ((TStringConversion<TStringConvert<wchar_t,char>,128> *)(param_2 + 0x410));
  }
  return;
}

// dtor$4 @ 150261740

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x168))
    ;
  }
  return;
}

// dtor$5 @ 150261770

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_5(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x118),0x28);
  return;
}

// dtor$6 @ 1502617a0

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x188))
    ;
  }
  return;
}

// dtor$7 @ 1502617d0

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_7(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x120),0x28);
  return;
}

// dtor$8 @ 150261800

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>
              ((TStringConversion<TStringConvert<wchar_t,char>,128> *)(param_2 + 0x4b0));
  }
  return;
}

// dtor$9 @ 150261830

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x1a8))
    ;
  }
  return;
}

// dtor$10 @ 150261860

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_10(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x128),0x28);
  return;
}

// dtor$11 @ 150261890

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_11(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    TStringConversion<TStringConvert<unsigned_short,char>,128>::
    ~TStringConversion<TStringConvert<unsigned_short,char>,128>
              ((TStringConversion<TStringConvert<unsigned_short,char>,128> *)(param_2 + 0x2d0));
  }
  return;
}

// dtor$12 @ 1502618c0

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_12(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x1c8))
    ;
  }
  return;
}

// dtor$13 @ 1502618f0

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_13(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x130),0x28);
  return;
}

// dtor$14 @ 150261920

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_14(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;
    TStringConversion<TStringConvert<char8_t,char>,128>::
    ~TStringConversion<TStringConvert<char8_t,char>,128>
              ((TStringConversion<TStringConvert<char8_t,char>,128> *)(param_2 + 0x230));
  }
  return;
}

// dtor$15 @ 150261960

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_15(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x1e8))
    ;
  }
  return;
}

// dtor$16 @ 1502619a0

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_16(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  ~TStringConversion<TStringConvert<wchar_t,char>,128>
            ((TStringConversion<TStringConvert<wchar_t,char>,128> *)(param_2 + 0x370));
  return;
}

// dtor$17 @ 1502619c0

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_17(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x208));
  return;
}

// dtor$26 @ 1502619e0

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_26(undefined8 param_1,longlong param_2)

{
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::
  ~ForElementType<char>((ForElementType<char> *)(param_2 + 0x370));
  return;
}

// dtor$35 @ 150261a00

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_35(undefined8 param_1,longlong param_2)

{
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::
  ~ForElementType<char>((ForElementType<char> *)(param_2 + 0x2d0));
  return;
}

// dtor$44 @ 150261a20

void `FOpenExrRTTIModule::AddFileMetadata'::__l1::dtor_44(undefined8 param_1,longlong param_2)

{
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::
  ~ForElementType<char>((ForElementType<char> *)(param_2 + 0x230));
  return;
}

