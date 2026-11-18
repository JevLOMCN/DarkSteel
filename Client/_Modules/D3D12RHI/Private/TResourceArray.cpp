// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 18

// ~TResourceArray<unsigned_char,64> @ 1459f63f0

void __thiscall
TResourceArray<unsigned_char,64>::~TResourceArray<unsigned_char,64>
          (TResourceArray<unsigned_char,64> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// Discard @ 145a11730

void __thiscall TResourceArray<unsigned_char,64>::Discard(TResourceArray<unsigned_char,64> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<64>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// GetAllowCPUAccess @ 145a17d60

bool __thiscall
TResourceArray<unsigned_char,64>::GetAllowCPUAccess(TResourceArray<unsigned_char,64> *this)

{
  return this->bNeedsCPUAccess;
}

// GetResourceData @ 145a1b3d0

void * __thiscall
TResourceArray<unsigned_char,64>::GetResourceData(TResourceArray<unsigned_char,64> *this)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((int)this->_padding_ < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pvVar3 = (void *)this->_padding_;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)&this->_padding_);
  }
  return pvVar3;
}

// GetResourceDataSize @ 145a1b430

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<unsigned_char,64>::GetResourceDataSize(TResourceArray<unsigned_char,64> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0xffffffff < (ulonglong)(longlong)(int)uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<unsigned_char,64>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1;
}

// GetTypeLayout @ 145a1b800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<unsigned_char,64>::GetTypeLayout(TResourceArray<unsigned_char,64> *this)

{
  if ((DAT_155167b9f & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<unsigned_char,64>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_155167b9f = DAT_155167b9f | 2;
  _DAT_155167b90 = 0x20;
  _DAT_155167b98 = 8;
  _DAT_155167b40 = L"TResourceArray";
  _DAT_155167b58 = Freeze::DefaultWriteMemoryImage;
  _DAT_155167b60 = Freeze::DefaultUnfrozenCopy;
  _DAT_155167b68 = Freeze::DefaultAppendHash;
  _DAT_155167b70 = Freeze::DefaultGetTargetAlignment;
  _DAT_155167b78 = Freeze::DefaultToString;
  _DAT_155167b50 = InternalDestroy;
  _DAT_155167b80 = TGetDefaultObjectHelper<TResourceArray<unsigned_char,64>,1>::Do;
  DAT_155167b9c = 1;
  _DAT_155167b94 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<unsigned_char,64>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_155167bd2 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  if ((DAT_155167657 & 2) == 0) {
    DAT_155167657 = DAT_155167657 | 3;
    _DAT_155167648 = 1;
    _DAT_1551675f8 = L"bool";
    _DAT_155167610 = TStaticGetTypeLayoutHelper<bool>::CallWriteMemoryImage;
    _DAT_155167618 = TStaticGetTypeLayoutHelper<bool>::CallUnfrozenCopy;
    _DAT_155167620 = TStaticGetTypeLayoutHelper<bool>::CallAppendHash;
    _DAT_155167628 = TStaticGetTypeLayoutHelper<bool>::CallGetTargetAlignment;
    _DAT_155167630 = TStaticGetTypeLayoutHelper<bool>::CallToString;
    _DAT_155167608 = TStaticGetTypeLayoutHelper<bool>::CallDestroy;
    _DAT_155167650 = 1;
    DAT_155167654 = 0;
    _DAT_15516764c = 1;
  }
  _DAT_155167bc8 = 0x18;
  _DAT_155167bb0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<bool>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_155167bb8 = DAT_155167b48;
  _DAT_155167bc0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155167bcc = 1;
  _DAT_155167bd0 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_155167cc7 & 2) == 0) {
    DAT_155167cc7 = DAT_155167cc7 | 3;
    _DAT_155167cb8 = 0x10;
    _DAT_155167c68 = L"(TArray<T, AllocatorType>)";
    _DAT_155167c80 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<64>_>_>::
         CallWriteMemoryImage;
    _DAT_155167c88 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<64>_>_>::
         CallUnfrozenCopy;
    _DAT_155167c90 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<64>_>_>::
         CallAppendHash;
    _DAT_155167c98 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<64>_>_>::
         CallGetTargetAlignment;
    _DAT_155167ca0 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<64>_>_>::CallToString
    ;
    _DAT_155167c78 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<64>_>_>::CallDestroy;
    DAT_155167cc4 = '\0';
    _DAT_155167cc0 = 8;
    _DAT_155167cbc = 0x10;
  }
  DAT_155167b9d = DAT_155167b9d + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<64>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<unsigned_char,64>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_155167b48 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_155167cc4 != '\0') {
    DAT_155167b9e = DAT_155167b9e + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_155167b9d = DAT_155167b9d + '\x01';
  ::FieldBuffer._16_8_ = DAT_155167b48;
  DAT_155167b48 = ::FieldBuffer;
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
    DAT_155167b9e = DAT_155167b9e + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<unsigned_char,64>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<unsigned_char,64>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 145a1f6e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<unsigned_char,64>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (!param_4) {
    (*(code *)**(undefined8 **)param_1)(param_1,0);
  }
  uVar2 = _UNK_1506d61e8;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  return;
}

// IsStatic @ 145a1fa60

bool __thiscall TResourceArray<unsigned_char,64>::IsStatic(TResourceArray<unsigned_char,64> *this)

{
  return false;
}

// SetAllowCPUAccess @ 145a2f790

void __thiscall
TResourceArray<unsigned_char,64>::SetAllowCPUAccess
          (TResourceArray<unsigned_char,64> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// ~TResourceArray<unsigned_int,0> @ 145a94020

void __thiscall
TResourceArray<unsigned_int,0>::~TResourceArray<unsigned_int,0>
          (TResourceArray<unsigned_int,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// Discard @ 145aa0ea0

void __thiscall TResourceArray<unsigned_int,0>::Discard(TResourceArray<unsigned_int,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// GetAllowCPUAccess @ 145aa8f00

bool __thiscall
TResourceArray<unsigned_int,0>::GetAllowCPUAccess(TResourceArray<unsigned_int,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetResourceData @ 145aaa360

void * __thiscall
TResourceArray<unsigned_int,0>::GetResourceData(TResourceArray<unsigned_int,0> *this)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((int)this->_padding_ < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pvVar3 = (void *)this->_padding_;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)&this->_padding_);
  }
  return pvVar3;
}

// GetResourceDataSize @ 145aaa3c0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<unsigned_int,0>::GetResourceDataSize(TResourceArray<unsigned_int,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x3fffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<unsigned_int,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 4;
}

// GetTypeLayout @ 145aaba10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<unsigned_int,0>::GetTypeLayout(TResourceArray<unsigned_int,0> *this)

{
  if ((DAT_155168ad7 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<unsigned_int,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_155168ad7 = DAT_155168ad7 | 2;
  _DAT_155168ac8 = 0x20;
  _DAT_155168ad0 = 8;
  _DAT_155168a78 = L"TResourceArray";
  _DAT_155168a90 = Freeze::DefaultWriteMemoryImage;
  _DAT_155168a98 = Freeze::DefaultUnfrozenCopy;
  _DAT_155168aa0 = Freeze::DefaultAppendHash;
  _DAT_155168aa8 = Freeze::DefaultGetTargetAlignment;
  _DAT_155168ab0 = Freeze::DefaultToString;
  _DAT_155168a88 = InternalDestroy;
  _DAT_155168ab8 = TGetDefaultObjectHelper<TResourceArray<unsigned_int,0>,1>::Do;
  DAT_155168ad4 = 1;
  _DAT_155168acc = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<unsigned_int,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_155168b0a = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  if ((DAT_155167657 & 2) == 0) {
    DAT_155167657 = DAT_155167657 | 3;
    _DAT_155167648 = 1;
    _DAT_1551675f8 = L"bool";
    _DAT_155167610 = TStaticGetTypeLayoutHelper<bool>::CallWriteMemoryImage;
    _DAT_155167618 = TStaticGetTypeLayoutHelper<bool>::CallUnfrozenCopy;
    _DAT_155167620 = TStaticGetTypeLayoutHelper<bool>::CallAppendHash;
    _DAT_155167628 = TStaticGetTypeLayoutHelper<bool>::CallGetTargetAlignment;
    _DAT_155167630 = TStaticGetTypeLayoutHelper<bool>::CallToString;
    _DAT_155167608 = TStaticGetTypeLayoutHelper<bool>::CallDestroy;
    _DAT_155167650 = 1;
    DAT_155167654 = 0;
    _DAT_15516764c = 1;
  }
  _DAT_155168b00 = 0x18;
  _DAT_155168ae8 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<bool>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_155168af0 = DAT_155168a80;
  _DAT_155168af8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155168b04 = 1;
  _DAT_155168b08 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_155168bff & 2) == 0) {
    DAT_155168bff = DAT_155168bff | 3;
    _DAT_155168bf0 = 0x10;
    _DAT_155168ba0 = L"(TArray<T, AllocatorType>)";
    _DAT_155168bb8 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_155168bc0 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_155168bc8 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::CallAppendHash
    ;
    _DAT_155168bd0 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_155168bd8 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::CallToString;
    _DAT_155168bb0 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::CallDestroy;
    DAT_155168bfc = '\0';
    _DAT_155168bf8 = 8;
    _DAT_155168bf4 = 0x10;
  }
  DAT_155168ad5 = DAT_155168ad5 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<unsigned_int,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_155168a80 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_155168bfc != '\0') {
    DAT_155168ad6 = DAT_155168ad6 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_155168ad5 = DAT_155168ad5 + '\x01';
  ::FieldBuffer._16_8_ = DAT_155168a80;
  DAT_155168a80 = ::FieldBuffer;
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
    DAT_155168ad6 = DAT_155168ad6 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<unsigned_int,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<unsigned_int,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 145aaeaf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<unsigned_int,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (!param_4) {
    (*(code *)**(undefined8 **)param_1)(param_1,0);
  }
  uVar2 = _UNK_1506d61e8;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  return;
}

// IsStatic @ 145aaec00

bool __thiscall TResourceArray<unsigned_int,0>::IsStatic(TResourceArray<unsigned_int,0> *this)

{
  return false;
}

// SetAllowCPUAccess @ 145ab85b0

void __thiscall
TResourceArray<unsigned_int,0>::SetAllowCPUAccess(TResourceArray<unsigned_int,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

