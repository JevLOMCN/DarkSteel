// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 233

// Discard @ 14769fd10

void __thiscall
TResourceArray<FSimpleElementVertex,0>::Discard(TResourceArray<FSimpleElementVertex,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x40,0x10,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// GetAllowCPUAccess @ 1476ad8c0

bool __thiscall
TResourceArray<FSimpleElementVertex,0>::GetAllowCPUAccess
          (TResourceArray<FSimpleElementVertex,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetResourceData @ 1476b49d0

void * __thiscall
TResourceArray<FSimpleElementVertex,0>::GetResourceData
          (TResourceArray<FSimpleElementVertex,0> *this)

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

// GetResourceDataSize @ 1476b4a30

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<FSimpleElementVertex,0>::GetResourceDataSize
          (TResourceArray<FSimpleElementVertex,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x3ffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<FSimpleElementVertex,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 << 6;
}

// GetTypeLayout @ 1476b5cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<FSimpleElementVertex,0>::GetTypeLayout(TResourceArray<FSimpleElementVertex,0> *this)

{
  if ((DAT_1551f30e7 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FSimpleElementVertex,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_1551f30e7 = DAT_1551f30e7 | 2;
  _DAT_1551f30d8 = 0x20;
  _DAT_1551f30e0 = 8;
  _DAT_1551f3088 = L"TResourceArray";
  _DAT_1551f30a0 = Freeze::DefaultWriteMemoryImage;
  _DAT_1551f30a8 = Freeze::DefaultUnfrozenCopy;
  _DAT_1551f30b0 = Freeze::DefaultAppendHash;
  _DAT_1551f30b8 = Freeze::DefaultGetTargetAlignment;
  _DAT_1551f30c0 = Freeze::DefaultToString;
  _DAT_1551f3098 = InternalDestroy;
  _DAT_1551f30c8 = TGetDefaultObjectHelper<TResourceArray<FSimpleElementVertex,0>,1>::Do;
  DAT_1551f30e4 = 1;
  _DAT_1551f30dc = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<FSimpleElementVertex,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_1551f3112 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
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
  _DAT_1551f3108 = 0x18;
  _DAT_1551f30f0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<bool>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_1551f30f8 = DAT_1551f3090;
  _DAT_1551f3100 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551f310c = 1;
  _DAT_1551f3110 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_1551f3207 & 2) == 0) {
    DAT_1551f3207 = DAT_1551f3207 | 3;
    _DAT_1551f31f8 = 0x10;
    _DAT_1551f31a8 = L"(TArray<T, AllocatorType>)";
    _DAT_1551f31c0 =
         TStaticGetTypeLayoutHelper<TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_1551f31c8 =
         TStaticGetTypeLayoutHelper<TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_1551f31d0 =
         TStaticGetTypeLayoutHelper<TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_1551f31d8 =
         TStaticGetTypeLayoutHelper<TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_1551f31e0 =
         TStaticGetTypeLayoutHelper<TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_>_>::
         CallToString;
    _DAT_1551f31b8 =
         TStaticGetTypeLayoutHelper<TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_>_>::
         CallDestroy;
    DAT_1551f3204 = '\0';
    _DAT_1551f3200 = 8;
    _DAT_1551f31fc = 0x10;
  }
  DAT_1551f30e5 = DAT_1551f30e5 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<FSimpleElementVertex,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_1551f3090 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_1551f3204 != '\0') {
    DAT_1551f30e6 = DAT_1551f30e6 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_1551f30e5 = DAT_1551f30e5 + '\x01';
  ::FieldBuffer._16_8_ = DAT_1551f3090;
  DAT_1551f3090 = ::FieldBuffer;
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
    DAT_1551f30e6 = DAT_1551f30e6 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FSimpleElementVertex,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FSimpleElementVertex,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 1476ba770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<FSimpleElementVertex,0>::InternalDestroy
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

// IsStatic @ 1476bacd0

bool __thiscall
TResourceArray<FSimpleElementVertex,0>::IsStatic(TResourceArray<FSimpleElementVertex,0> *this)

{
  return false;
}

// SetAllowCPUAccess @ 1476c7340

void __thiscall
TResourceArray<FSimpleElementVertex,0>::SetAllowCPUAccess
          (TResourceArray<FSimpleElementVertex,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// ~TResourceArray<UE::Math::TVector<float>,0> @ 147c309b0

void __thiscall
TResourceArray<UE::Math::TVector<float>,0>::~TResourceArray<UE::Math::TVector<float>,0>
          (TResourceArray<UE::Math::TVector<float>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// Discard @ 147c43070

void __thiscall
TResourceArray<UE::Math::TVector<float>,0>::Discard
          (TResourceArray<UE::Math::TVector<float>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// GetAllowCPUAccess @ 147c54d80

bool __thiscall
TResourceArray<UE::Math::TVector<float>,0>::GetAllowCPUAccess
          (TResourceArray<UE::Math::TVector<float>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetResourceData @ 147c5a800

void * __thiscall
TResourceArray<UE::Math::TVector<float>,0>::GetResourceData
          (TResourceArray<UE::Math::TVector<float>,0> *this)

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

// GetResourceDataSize @ 147c5a860

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<UE::Math::TVector<float>,0>::GetResourceDataSize
          (TResourceArray<UE::Math::TVector<float>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x15555555 < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<UE::Math::TVector<float>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0xc;
}

// GetTypeLayout @ 147c5cb90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<UE::Math::TVector<float>,0>::GetTypeLayout
          (TResourceArray<UE::Math::TVector<float>,0> *this)

{
  if ((DAT_15520b717 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::Math::TVector<float>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15520b717 = DAT_15520b717 | 2;
  _DAT_15520b708 = 0x20;
  _DAT_15520b710 = 8;
  _DAT_15520b6b8 = L"TResourceArray";
  _DAT_15520b6d0 = Freeze::DefaultWriteMemoryImage;
  _DAT_15520b6d8 = Freeze::DefaultUnfrozenCopy;
  _DAT_15520b6e0 = Freeze::DefaultAppendHash;
  _DAT_15520b6e8 = Freeze::DefaultGetTargetAlignment;
  _DAT_15520b6f0 = Freeze::DefaultToString;
  _DAT_15520b6c8 = InternalDestroy;
  _DAT_15520b6f8 = TGetDefaultObjectHelper<TResourceArray<UE::Math::TVector<float>,0>,1>::Do;
  DAT_15520b714 = 1;
  _DAT_15520b70c = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<UE::Math::TVector<float>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15520b88a = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15520b868 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15520b870 = DAT_15520b6c0;
  _DAT_15520b878 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15520b880 = 0x18;
  _DAT_15520b884 = 1;
  _DAT_15520b888 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15520b9b7 & 2) == 0) {
    DAT_15520b9b7 = DAT_15520b9b7 | 3;
    _DAT_15520b9a8 = 0x10;
    _DAT_15520b958 = L"(TArray<T, AllocatorType>)";
    _DAT_15520b970 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_15520b978 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_15520b980 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_15520b988 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_15520b990 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>_>::
         CallToString;
    _DAT_15520b968 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>_>::
         CallDestroy;
    DAT_15520b9b4 = '\0';
    _DAT_15520b9b0 = 8;
    _DAT_15520b9ac = 0x10;
  }
  DAT_15520b715 = DAT_15520b715 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<UE::Math::TVector<float>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15520b6c0 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15520b9b4 != '\0') {
    DAT_15520b716 = DAT_15520b716 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15520b715 = DAT_15520b715 + '\x01';
  ::FieldBuffer._16_8_ = DAT_15520b6c0;
  DAT_15520b6c0 = ::FieldBuffer;
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
    DAT_15520b716 = DAT_15520b716 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::Math::TVector<float>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::Math::TVector<float>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 147c67fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<UE::Math::TVector<float>,0>::InternalDestroy
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

// IsStatic @ 147c6a1e0

bool __thiscall
TResourceArray<UE::Math::TVector<float>,0>::IsStatic
          (TResourceArray<UE::Math::TVector<float>,0> *this)

{
  return false;
}

// SetAllowCPUAccess @ 147c7fac0

void __thiscall
TResourceArray<UE::Math::TVector<float>,0>::SetAllowCPUAccess
          (TResourceArray<UE::Math::TVector<float>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// ~TResourceArray<FDepecatedModelVertex,0> @ 147fa7b70

void __thiscall
TResourceArray<FDepecatedModelVertex,0>::~TResourceArray<FDepecatedModelVertex,0>
          (TResourceArray<FDepecatedModelVertex,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// Discard @ 147fc26c0

void __thiscall
TResourceArray<FDepecatedModelVertex,0>::Discard(TResourceArray<FDepecatedModelVertex,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x24,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// GetAllowCPUAccess @ 147fd0e50

bool __thiscall
TResourceArray<FDepecatedModelVertex,0>::GetAllowCPUAccess
          (TResourceArray<FDepecatedModelVertex,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetResourceData @ 147fd68b0

void * __thiscall
TResourceArray<FDepecatedModelVertex,0>::GetResourceData
          (TResourceArray<FDepecatedModelVertex,0> *this)

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

// GetResourceDataSize @ 147fd6910

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<FDepecatedModelVertex,0>::GetResourceDataSize
          (TResourceArray<FDepecatedModelVertex,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x71c71c7 < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<FDepecatedModelVertex,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0x24;
}

// GetTypeLayout @ 147fda3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<FDepecatedModelVertex,0>::GetTypeLayout
          (TResourceArray<FDepecatedModelVertex,0> *this)

{
  if ((DAT_155227b3f & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FDepecatedModelVertex,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_155227b3f = DAT_155227b3f | 2;
  _DAT_155227b30 = 0x20;
  _DAT_155227b38 = 8;
  _DAT_155227ae0 = L"TResourceArray";
  _DAT_155227af8 = Freeze::DefaultWriteMemoryImage;
  _DAT_155227b00 = Freeze::DefaultUnfrozenCopy;
  _DAT_155227b08 = Freeze::DefaultAppendHash;
  _DAT_155227b10 = Freeze::DefaultGetTargetAlignment;
  _DAT_155227b18 = Freeze::DefaultToString;
  _DAT_155227af0 = InternalDestroy;
  _DAT_155227b20 = TGetDefaultObjectHelper<TResourceArray<FDepecatedModelVertex,0>,1>::Do;
  DAT_155227b3c = 1;
  _DAT_155227b34 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<FDepecatedModelVertex,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_155227cba = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_155227c98 = StaticGetTypeLayoutDesc<bool>();
  _DAT_155227ca0 = DAT_155227ae8;
  _DAT_155227ca8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155227cb0 = 0x18;
  _DAT_155227cb4 = 1;
  _DAT_155227cb8 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_155227f17 & 2) == 0) {
    DAT_155227f17 = DAT_155227f17 | 3;
    _DAT_155227f08 = 0x10;
    _DAT_155227eb8 = L"(TArray<T, AllocatorType>)";
    _DAT_155227ed0 =
         TStaticGetTypeLayoutHelper<TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_155227ed8 =
         TStaticGetTypeLayoutHelper<TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_155227ee0 =
         TStaticGetTypeLayoutHelper<TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_155227ee8 =
         TStaticGetTypeLayoutHelper<TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_155227ef0 =
         TStaticGetTypeLayoutHelper<TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_>_>::
         CallToString;
    _DAT_155227ec8 =
         TStaticGetTypeLayoutHelper<TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_>_>::
         CallDestroy;
    DAT_155227f14 = '\0';
    _DAT_155227f10 = 8;
    _DAT_155227f0c = 0x10;
  }
  DAT_155227b3d = DAT_155227b3d + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<FDepecatedModelVertex,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_155227ae8 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_155227f14 != '\0') {
    DAT_155227b3e = DAT_155227b3e + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_155227b3d = DAT_155227b3d + '\x01';
  ::FieldBuffer._16_8_ = DAT_155227ae8;
  DAT_155227ae8 = ::FieldBuffer;
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
    DAT_155227b3e = DAT_155227b3e + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FDepecatedModelVertex,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FDepecatedModelVertex,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 147fe1a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<FDepecatedModelVertex,0>::InternalDestroy
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

// IsStatic @ 147fe3320

bool __thiscall
TResourceArray<FDepecatedModelVertex,0>::IsStatic(TResourceArray<FDepecatedModelVertex,0> *this)

{
  return false;
}

// SetAllowCPUAccess @ 147ff3fd0

void __thiscall
TResourceArray<FDepecatedModelVertex,0>::SetAllowCPUAccess
          (TResourceArray<FDepecatedModelVertex,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// ~TResourceArray<UE::Math::TIntVector3<int>,0> @ 14834cc90

void __thiscall
TResourceArray<UE::Math::TIntVector3<int>,0>::~TResourceArray<UE::Math::TIntVector3<int>,0>
          (TResourceArray<UE::Math::TIntVector3<int>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<FColor,0> @ 14834ccc0

void __thiscall TResourceArray<FColor,0>::~TResourceArray<FColor,0>(TResourceArray<FColor,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<FPositionVertex,0> @ 14834ccf0

void __thiscall
TResourceArray<FPositionVertex,0>::~TResourceArray<FPositionVertex,0>
          (TResourceArray<FPositionVertex,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// Discard @ 14836b3b0

void __thiscall
TResourceArray<UE::Math::TIntVector3<int>,0>::Discard
          (TResourceArray<UE::Math::TIntVector3<int>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 14836b400

void __thiscall TResourceArray<FColor,0>::Discard(TResourceArray<FColor,0> *this)

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

// Discard @ 14836b450

void __thiscall TResourceArray<FPositionVertex,0>::Discard(TResourceArray<FPositionVertex,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// GetAllowCPUAccess @ 14837e5c0

bool __thiscall
TResourceArray<UE::Math::TIntVector3<int>,0>::GetAllowCPUAccess
          (TResourceArray<UE::Math::TIntVector3<int>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 14837e5d0

bool __thiscall TResourceArray<FColor,0>::GetAllowCPUAccess(TResourceArray<FColor,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 14837e5e0

bool __thiscall
TResourceArray<FPositionVertex,0>::GetAllowCPUAccess(TResourceArray<FPositionVertex,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetResourceData @ 148387700

void * __thiscall
TResourceArray<UE::Math::TIntVector3<int>,0>::GetResourceData
          (TResourceArray<UE::Math::TIntVector3<int>,0> *this)

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

// GetResourceData @ 148387760

void * __thiscall TResourceArray<FColor,0>::GetResourceData(TResourceArray<FColor,0> *this)

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

// GetResourceData @ 1483877c0

void * __thiscall
TResourceArray<FPositionVertex,0>::GetResourceData(TResourceArray<FPositionVertex,0> *this)

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

// GetResourceDataSize @ 148387820

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<UE::Math::TIntVector3<int>,0>::GetResourceDataSize
          (TResourceArray<UE::Math::TIntVector3<int>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x15555555 < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<UE::Math::TIntVector3<int>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0xc;
}

// GetResourceDataSize @ 148387860

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall TResourceArray<FColor,0>::GetResourceDataSize(TResourceArray<FColor,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x3fffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<FColor,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 4;
}

// GetResourceDataSize @ 1483878a0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<FPositionVertex,0>::GetResourceDataSize(TResourceArray<FPositionVertex,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x15555555 < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<FPositionVertex,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0xc;
}

// GetTypeLayout @ 14838a640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<UE::Math::TIntVector3<int>,0>::GetTypeLayout
          (TResourceArray<UE::Math::TIntVector3<int>,0> *this)

{
  if ((DAT_155235da7 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::Math::TIntVector3<int>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_155235da7 = DAT_155235da7 | 2;
  _DAT_155235d98 = 0x20;
  _DAT_155235da0 = 8;
  _DAT_155235d48 = L"TResourceArray";
  _DAT_155235d60 = Freeze::DefaultWriteMemoryImage;
  _DAT_155235d68 = Freeze::DefaultUnfrozenCopy;
  _DAT_155235d70 = Freeze::DefaultAppendHash;
  _DAT_155235d78 = Freeze::DefaultGetTargetAlignment;
  _DAT_155235d80 = Freeze::DefaultToString;
  _DAT_155235d58 = InternalDestroy;
  _DAT_155235d88 = TGetDefaultObjectHelper<TResourceArray<UE::Math::TIntVector3<int>,0>,1>::Do;
  DAT_155235da4 = 1;
  _DAT_155235d9c = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<UE::Math::TIntVector3<int>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_155236022 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_155236000 = StaticGetTypeLayoutDesc<bool>();
  _DAT_155236008 = DAT_155235d50;
  _DAT_155236010 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155236018 = 0x18;
  _DAT_15523601c = 1;
  _DAT_155236020 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_1552363ff & 2) == 0) {
    DAT_1552363ff = DAT_1552363ff | 3;
    _DAT_1552363f0 = 0x10;
    _DAT_1552363a0 = L"(TArray<T, AllocatorType>)";
    _DAT_1552363b8 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector3<int>,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_1552363c0 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector3<int>,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_1552363c8 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector3<int>,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_1552363d0 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector3<int>,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_1552363d8 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector3<int>,TMemoryImageAllocator<0>_>_>::
         CallToString;
    _DAT_1552363b0 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector3<int>,TMemoryImageAllocator<0>_>_>::
         CallDestroy;
    DAT_1552363fc = '\0';
    _DAT_1552363f8 = 8;
    _DAT_1552363f4 = 0x10;
  }
  DAT_155235da5 = DAT_155235da5 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector3<int>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<UE::Math::TIntVector3<int>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_155235d50 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_1552363fc != '\0') {
    DAT_155235da6 = DAT_155235da6 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_155235da5 = DAT_155235da5 + '\x01';
  ::FieldBuffer._16_8_ = DAT_155235d50;
  DAT_155235d50 = ::FieldBuffer;
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
    DAT_155235da6 = DAT_155235da6 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::Math::TIntVector3<int>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::Math::TIntVector3<int>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 14838a8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall TResourceArray<FColor,0>::GetTypeLayout(TResourceArray<FColor,0> *this)

{
  if ((DAT_155235d3f & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FColor,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_155235d3f = DAT_155235d3f | 2;
  _DAT_155235d30 = 0x20;
  _DAT_155235d38 = 8;
  _DAT_155235ce0 = L"TResourceArray";
  _DAT_155235cf8 = Freeze::DefaultWriteMemoryImage;
  _DAT_155235d00 = Freeze::DefaultUnfrozenCopy;
  _DAT_155235d08 = Freeze::DefaultAppendHash;
  _DAT_155235d10 = Freeze::DefaultGetTargetAlignment;
  _DAT_155235d18 = Freeze::DefaultToString;
  _DAT_155235cf0 = InternalDestroy;
  _DAT_155235d20 = TGetDefaultObjectHelper<TResourceArray<FColor,0>,1>::Do;
  DAT_155235d3c = 1;
  _DAT_155235d34 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<FColor,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_155235ff2 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_155235fd0 = StaticGetTypeLayoutDesc<bool>();
  _DAT_155235fd8 = DAT_155235ce8;
  _DAT_155235fe0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155235fe8 = 0x18;
  _DAT_155235fec = 1;
  _DAT_155235ff0 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_155236467 & 2) == 0) {
    DAT_155236467 = DAT_155236467 | 3;
    _DAT_155236458 = 0x10;
    _DAT_155236408 = L"(TArray<T, AllocatorType>)";
    _DAT_155236420 =
         TStaticGetTypeLayoutHelper<TArray<FColor,TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage
    ;
    _DAT_155236428 =
         TStaticGetTypeLayoutHelper<TArray<FColor,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy;
    _DAT_155236430 =
         TStaticGetTypeLayoutHelper<TArray<FColor,TMemoryImageAllocator<0>_>_>::CallAppendHash;
    _DAT_155236438 =
         TStaticGetTypeLayoutHelper<TArray<FColor,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_155236440 =
         TStaticGetTypeLayoutHelper<TArray<FColor,TMemoryImageAllocator<0>_>_>::CallToString;
    _DAT_155236418 =
         TStaticGetTypeLayoutHelper<TArray<FColor,TMemoryImageAllocator<0>_>_>::CallDestroy;
    DAT_155236464 = '\0';
    _DAT_155236460 = 8;
    _DAT_15523645c = 0x10;
  }
  DAT_155235d3d = DAT_155235d3d + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FColor,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<FColor,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_155235ce8 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_155236464 != '\0') {
    DAT_155235d3e = DAT_155235d3e + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_155235d3d = DAT_155235d3d + '\x01';
  ::FieldBuffer._16_8_ = DAT_155235ce8;
  DAT_155235ce8 = ::FieldBuffer;
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
    DAT_155235d3e = DAT_155235d3e + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FColor,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FColor,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 14838aba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<FPositionVertex,0>::GetTypeLayout(TResourceArray<FPositionVertex,0> *this)

{
  if ((DAT_155235e0f & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FPositionVertex,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_155235e0f = DAT_155235e0f | 2;
  _DAT_155235e00 = 0x20;
  _DAT_155235e08 = 8;
  _DAT_155235db0 = L"TResourceArray";
  _DAT_155235dc8 = Freeze::DefaultWriteMemoryImage;
  _DAT_155235dd0 = Freeze::DefaultUnfrozenCopy;
  _DAT_155235dd8 = Freeze::DefaultAppendHash;
  _DAT_155235de0 = Freeze::DefaultGetTargetAlignment;
  _DAT_155235de8 = Freeze::DefaultToString;
  _DAT_155235dc0 = InternalDestroy;
  _DAT_155235df0 = TGetDefaultObjectHelper<TResourceArray<FPositionVertex,0>,1>::Do;
  DAT_155235e0c = 1;
  _DAT_155235e04 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<FPositionVertex,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_155236082 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_155236060 = StaticGetTypeLayoutDesc<bool>();
  _DAT_155236068 = DAT_155235db8;
  _DAT_155236070 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155236078 = 0x18;
  _DAT_15523607c = 1;
  _DAT_155236080 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_155236397 & 2) == 0) {
    DAT_155236397 = DAT_155236397 | 3;
    _DAT_155236388 = 0x10;
    _DAT_155236338 = L"(TArray<T, AllocatorType>)";
    _DAT_155236350 =
         TStaticGetTypeLayoutHelper<TArray<FPositionVertex,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_155236358 =
         TStaticGetTypeLayoutHelper<TArray<FPositionVertex,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_155236360 =
         TStaticGetTypeLayoutHelper<TArray<FPositionVertex,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_155236368 =
         TStaticGetTypeLayoutHelper<TArray<FPositionVertex,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_155236370 =
         TStaticGetTypeLayoutHelper<TArray<FPositionVertex,TMemoryImageAllocator<0>_>_>::
         CallToString;
    _DAT_155236348 =
         TStaticGetTypeLayoutHelper<TArray<FPositionVertex,TMemoryImageAllocator<0>_>_>::CallDestroy
    ;
    DAT_155236394 = '\0';
    _DAT_155236390 = 8;
    _DAT_15523638c = 0x10;
  }
  DAT_155235e0d = DAT_155235e0d + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FPositionVertex,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<FPositionVertex,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_155235db8 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_155236394 != '\0') {
    DAT_155235e0e = DAT_155235e0e + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_155235e0d = DAT_155235e0d + '\x01';
  ::FieldBuffer._16_8_ = DAT_155235db8;
  DAT_155235db8 = ::FieldBuffer;
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
    DAT_155235e0e = DAT_155235e0e + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FPositionVertex,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FPositionVertex,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 148391450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<UE::Math::TIntVector3<int>,0>::InternalDestroy
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

// InternalDestroy @ 148391480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<FColor,0>::InternalDestroy
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

// InternalDestroy @ 1483914b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<FPositionVertex,0>::InternalDestroy
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

// IsStatic @ 148393590

bool __thiscall
TResourceArray<UE::Math::TIntVector3<int>,0>::IsStatic
          (TResourceArray<UE::Math::TIntVector3<int>,0> *this)

{
  return false;
}

// IsStatic @ 1483935a0

bool __thiscall TResourceArray<FColor,0>::IsStatic(TResourceArray<FColor,0> *this)

{
  return false;
}

// IsStatic @ 1483935b0

bool __thiscall TResourceArray<FPositionVertex,0>::IsStatic(TResourceArray<FPositionVertex,0> *this)

{
  return false;
}

// SetAllowCPUAccess @ 1483a78f0

void __thiscall
TResourceArray<UE::Math::TIntVector3<int>,0>::SetAllowCPUAccess
          (TResourceArray<UE::Math::TIntVector3<int>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 1483a7900

void __thiscall
TResourceArray<FColor,0>::SetAllowCPUAccess(TResourceArray<FColor,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 1483a7910

void __thiscall
TResourceArray<FPositionVertex,0>::SetAllowCPUAccess
          (TResourceArray<FPositionVertex,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// ~TResourceArray<int,0> @ 148444ba0

void __thiscall TResourceArray<int,0>::~TResourceArray<int,0>(TResourceArray<int,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0> @ 148444bd0

void __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::~TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>
          (TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0> @ 148444c00

void __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::~TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>
          (TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0> @ 148444c30

void __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::~TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>
          (TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0> @ 148444c60

void __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::~TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>
          (TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0> @ 148444c90

void __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::~TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>
          (TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0> @ 148444cc0

void __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::~TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>
          (TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0> @ 148444cf0

void __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::~TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>
          (TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0> @ 148444d20

void __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::~TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>
          (TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0> @ 148444d50

void __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::
~TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0> @ 148444d80

void __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::
~TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0> @ 148444db0

void __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::
~TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0> @ 148444de0

void __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::
~TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0> @ 148444e10

void __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::
~TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0> @ 148444e40

void __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::
~TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0> @ 148444e70

void __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::
~TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>
          (TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0> @ 148444ea0

void __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::
~TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>
          (TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<FMeshToMeshVertData,0> @ 148444ed0

void __thiscall
TResourceArray<FMeshToMeshVertData,0>::~TResourceArray<FMeshToMeshVertData,0>
          (TResourceArray<FMeshToMeshVertData,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// Discard @ 148462210

void __thiscall TResourceArray<int,0>::Discard(TResourceArray<int,0> *this)

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

// Discard @ 148462260

void __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::Discard
          (TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 1484622b0

void __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::Discard
          (TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x1c,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 148462300

void __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::Discard
          (TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x20,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 148462350

void __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::Discard
          (TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x24,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 1484623a0

void __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::Discard
          (TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x1c,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 1484623f0

void __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::Discard
          (TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x24,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 148462440

void __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::Discard
          (TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x2c,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 148462490

void __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::Discard
          (TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x34,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 1484624e0

void __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::Discard
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x10,1,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 148462530

void __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::Discard
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x18,2,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 148462580

void __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::Discard
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,1,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 1484625d0

void __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::Discard
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0xc,2,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 148462620

void __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::Discard
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 148462670

void __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::Discard
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x10,2,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 1484626c0

void __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::Discard
          (TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 148462710

void __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::Discard
          (TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,2,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 148462760

void __thiscall
TResourceArray<FMeshToMeshVertData,0>::Discard(TResourceArray<FMeshToMeshVertData,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x40,0x10,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// GetAllowCPUAccess @ 148469020

bool __thiscall TResourceArray<int,0>::GetAllowCPUAccess(TResourceArray<int,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 148469030

bool __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::GetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 148469040

bool __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::GetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 148469050

bool __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::GetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 148469060

bool __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::GetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 148469070

bool __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::GetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 148469080

bool __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::GetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 148469090

bool __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::GetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 1484690a0

bool __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::GetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 1484690b0

bool __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::GetAllowCPUAccess
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 1484690c0

bool __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::GetAllowCPUAccess
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 1484690d0

bool __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::GetAllowCPUAccess
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 1484690e0

bool __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::GetAllowCPUAccess
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 1484690f0

bool __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::GetAllowCPUAccess
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 148469100

bool __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::GetAllowCPUAccess
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 148469110

bool __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::GetAllowCPUAccess
          (TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 148469120

bool __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::GetAllowCPUAccess
          (TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 148469130

bool __thiscall
TResourceArray<FMeshToMeshVertData,0>::GetAllowCPUAccess
          (TResourceArray<FMeshToMeshVertData,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetResourceData @ 14846ded0

void * __thiscall TResourceArray<int,0>::GetResourceData(TResourceArray<int,0> *this)

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

// GetResourceData @ 14846df30

void * __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::GetResourceData
          (TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0> *this)

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

// GetResourceData @ 14846df90

void * __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::GetResourceData
          (TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0> *this)

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

// GetResourceData @ 14846dff0

void * __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::GetResourceData
          (TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0> *this)

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

// GetResourceData @ 14846e050

void * __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::GetResourceData
          (TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0> *this)

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

// GetResourceData @ 14846e0b0

void * __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::GetResourceData
          (TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0> *this)

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

// GetResourceData @ 14846e110

void * __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::GetResourceData
          (TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0> *this)

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

// GetResourceData @ 14846e170

void * __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::GetResourceData
          (TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0> *this)

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

// GetResourceData @ 14846e1d0

void * __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::GetResourceData
          (TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0> *this)

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

// GetResourceData @ 14846e230

void * __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::GetResourceData
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0> *this)

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

// GetResourceData @ 14846e290

void * __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::GetResourceData
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0> *this)

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

// GetResourceData @ 14846e2f0

void * __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::GetResourceData
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0> *this)

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

// GetResourceData @ 14846e350

void * __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::GetResourceData
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0> *this)

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

// GetResourceData @ 14846e3b0

void * __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::GetResourceData
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0> *this)

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

// GetResourceData @ 14846e410

void * __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::GetResourceData
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0> *this)

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

// GetResourceData @ 14846e470

void * __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::GetResourceData
          (TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0> *this)

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

// GetResourceData @ 14846e4d0

void * __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::GetResourceData
          (TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0> *this)

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

// GetResourceData @ 14846e530

void * __thiscall
TResourceArray<FMeshToMeshVertData,0>::GetResourceData(TResourceArray<FMeshToMeshVertData,0> *this)

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

// GetResourceDataSize @ 14846e590

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall TResourceArray<int,0>::GetResourceDataSize(TResourceArray<int,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x3fffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<int,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 4;
}

// GetResourceDataSize @ 14846e5d0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::GetResourceDataSize
          (TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0xaaaaaaa < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0x18;
}

// GetResourceDataSize @ 14846e610

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::GetResourceDataSize
          (TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x9249249 < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0x1c;
}

// GetResourceDataSize @ 14846e650

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::GetResourceDataSize
          (TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x7ffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 << 5;
}

// GetResourceDataSize @ 14846e690

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::GetResourceDataSize
          (TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x71c71c7 < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0x24;
}

// GetResourceDataSize @ 14846e6d0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::GetResourceDataSize
          (TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x9249249 < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0x1c;
}

// GetResourceDataSize @ 14846e710

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::GetResourceDataSize
          (TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x71c71c7 < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0x24;
}

// GetResourceDataSize @ 14846e750

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::GetResourceDataSize
          (TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x5d1745d < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0x2c;
}

// GetResourceDataSize @ 14846e790

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::GetResourceDataSize
          (TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x4ec4ec4 < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0x34;
}

// GetResourceDataSize @ 14846e7d0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::GetResourceDataSize
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0xfffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 << 4;
}

// GetResourceDataSize @ 14846e810

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::GetResourceDataSize
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0xaaaaaaa < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0x18;
}

// GetResourceDataSize @ 14846e850

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::GetResourceDataSize
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x1fffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 8;
}

// GetResourceDataSize @ 14846e890

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::GetResourceDataSize
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x15555555 < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0xc;
}

// GetResourceDataSize @ 14846e8d0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::GetResourceDataSize
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x1fffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 8;
}

// GetResourceDataSize @ 14846e910

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::GetResourceDataSize
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0xfffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 << 4;
}

// GetResourceDataSize @ 14846e950

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::GetResourceDataSize
          (TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x1fffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 8;
}

// GetResourceDataSize @ 14846e990

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::GetResourceDataSize
          (TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x3fffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 4;
}

// GetResourceDataSize @ 14846e9d0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<FMeshToMeshVertData,0>::GetResourceDataSize
          (TResourceArray<FMeshToMeshVertData,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x3ffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<FMeshToMeshVertData,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 << 6;
}

// GetTypeLayout @ 148470e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall TResourceArray<int,0>::GetTypeLayout(TResourceArray<int,0> *this)

{
  if ((DAT_15523c487 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<int,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523c487 = DAT_15523c487 | 2;
  _DAT_15523c478 = 0x20;
  _DAT_15523c480 = 8;
  _DAT_15523c428 = L"TResourceArray";
  _DAT_15523c440 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523c448 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523c450 = Freeze::DefaultAppendHash;
  _DAT_15523c458 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523c460 = Freeze::DefaultToString;
  _DAT_15523c438 = InternalDestroy;
  _DAT_15523c468 = TGetDefaultObjectHelper<TResourceArray<int,0>,1>::Do;
  DAT_15523c484 = 1;
  _DAT_15523c47c = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<int,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c992 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c970 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c978 = DAT_15523c430;
  _DAT_15523c980 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c988 = 0x18;
  _DAT_15523c98c = 1;
  _DAT_15523c990 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_155190017 & 2) == 0) {
    DAT_155190017 = DAT_155190017 | 3;
    _DAT_155190008 = 0x10;
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
    DAT_155190014 = '\0';
    _DAT_155190010 = 8;
    _DAT_15519000c = 0x10;
  }
  DAT_15523c485 = DAT_15523c485 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<int,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523c430 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_155190014 != '\0') {
    DAT_15523c486 = DAT_15523c486 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523c485 = DAT_15523c485 + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523c430;
  DAT_15523c430 = ::FieldBuffer;
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
    DAT_15523c486 = DAT_15523c486 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<int,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<int,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 1484710d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::GetTypeLayout
          (TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0> *this)

{
  if ((DAT_15523c41f & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523c41f = DAT_15523c41f | 2;
  _DAT_15523c410 = 0x20;
  _DAT_15523c418 = 8;
  _DAT_15523c3c0 = L"TResourceArray";
  _DAT_15523c3d8 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523c3e0 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523c3e8 = Freeze::DefaultAppendHash;
  _DAT_15523c3f0 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523c3f8 = Freeze::DefaultToString;
  _DAT_15523c3d0 = InternalDestroy;
  _DAT_15523c400 = TGetDefaultObjectHelper<TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>,1>::Do;
  DAT_15523c41c = 1;
  _DAT_15523c414 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c962 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c940 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c948 = DAT_15523c3c8;
  _DAT_15523c950 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c958 = 0x18;
  _DAT_15523c95c = 1;
  _DAT_15523c960 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523d4f7 & 2) == 0) {
    DAT_15523d4f7 = DAT_15523d4f7 | 3;
    _DAT_15523d4e8 = 0x10;
    _DAT_15523d498 = L"(TArray<T, AllocatorType>)";
    _DAT_15523d4b0 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523d4b8 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523d4c0 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523d4c8 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523d4d0 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523d4a8 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523d4f4 = '\0';
    _DAT_15523d4f0 = 8;
    _DAT_15523d4ec = 0x10;
  }
  DAT_15523c41d = DAT_15523c41d + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523c3c8 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523d4f4 != '\0') {
    DAT_15523c41e = DAT_15523c41e + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523c41d = DAT_15523c41d + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523c3c8;
  DAT_15523c3c8 = ::FieldBuffer;
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
    DAT_15523c41e = DAT_15523c41e + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 148471380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::GetTypeLayout
          (TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0> *this)

{
  if ((DAT_15523c3b7 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523c3b7 = DAT_15523c3b7 | 2;
  _DAT_15523c3a8 = 0x20;
  _DAT_15523c3b0 = 8;
  _DAT_15523c358 = L"TResourceArray";
  _DAT_15523c370 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523c378 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523c380 = Freeze::DefaultAppendHash;
  _DAT_15523c388 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523c390 = Freeze::DefaultToString;
  _DAT_15523c368 = InternalDestroy;
  _DAT_15523c398 = TGetDefaultObjectHelper<TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>,1>::Do;
  DAT_15523c3b4 = 1;
  _DAT_15523c3ac = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c932 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c910 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c918 = DAT_15523c360;
  _DAT_15523c920 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c928 = 0x18;
  _DAT_15523c92c = 1;
  _DAT_15523c930 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523d55f & 2) == 0) {
    DAT_15523d55f = DAT_15523d55f | 3;
    _DAT_15523d550 = 0x10;
    _DAT_15523d500 = L"(TArray<T, AllocatorType>)";
    _DAT_15523d518 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523d520 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523d528 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523d530 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523d538 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523d510 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523d55c = '\0';
    _DAT_15523d558 = 8;
    _DAT_15523d554 = 0x10;
  }
  DAT_15523c3b5 = DAT_15523c3b5 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523c360 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523d55c != '\0') {
    DAT_15523c3b6 = DAT_15523c3b6 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523c3b5 = DAT_15523c3b5 + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523c360;
  DAT_15523c360 = ::FieldBuffer;
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
    DAT_15523c3b6 = DAT_15523c3b6 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 148471630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::GetTypeLayout
          (TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0> *this)

{
  if ((DAT_15523c34f & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523c34f = DAT_15523c34f | 2;
  _DAT_15523c340 = 0x20;
  _DAT_15523c348 = 8;
  _DAT_15523c2f0 = L"TResourceArray";
  _DAT_15523c308 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523c310 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523c318 = Freeze::DefaultAppendHash;
  _DAT_15523c320 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523c328 = Freeze::DefaultToString;
  _DAT_15523c300 = InternalDestroy;
  _DAT_15523c330 = TGetDefaultObjectHelper<TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>,1>::Do;
  DAT_15523c34c = 1;
  _DAT_15523c344 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c902 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c8e0 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c8e8 = DAT_15523c2f8;
  _DAT_15523c8f0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c8f8 = 0x18;
  _DAT_15523c8fc = 1;
  _DAT_15523c900 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523d5c7 & 2) == 0) {
    DAT_15523d5c7 = DAT_15523d5c7 | 3;
    _DAT_15523d5b8 = 0x10;
    _DAT_15523d568 = L"(TArray<T, AllocatorType>)";
    _DAT_15523d580 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523d588 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523d590 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523d598 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523d5a0 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523d578 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523d5c4 = '\0';
    _DAT_15523d5c0 = 8;
    _DAT_15523d5bc = 0x10;
  }
  DAT_15523c34d = DAT_15523c34d + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523c2f8 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523d5c4 != '\0') {
    DAT_15523c34e = DAT_15523c34e + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523c34d = DAT_15523c34d + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523c2f8;
  DAT_15523c2f8 = ::FieldBuffer;
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
    DAT_15523c34e = DAT_15523c34e + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 1484718e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::GetTypeLayout
          (TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0> *this)

{
  if ((DAT_15523c2e7 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523c2e7 = DAT_15523c2e7 | 2;
  _DAT_15523c2d8 = 0x20;
  _DAT_15523c2e0 = 8;
  _DAT_15523c288 = L"TResourceArray";
  _DAT_15523c2a0 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523c2a8 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523c2b0 = Freeze::DefaultAppendHash;
  _DAT_15523c2b8 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523c2c0 = Freeze::DefaultToString;
  _DAT_15523c298 = InternalDestroy;
  _DAT_15523c2c8 = TGetDefaultObjectHelper<TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>,1>::Do;
  DAT_15523c2e4 = 1;
  _DAT_15523c2dc = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c8d2 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c8b0 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c8b8 = DAT_15523c290;
  _DAT_15523c8c0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c8c8 = 0x18;
  _DAT_15523c8cc = 1;
  _DAT_15523c8d0 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523d62f & 2) == 0) {
    DAT_15523d62f = DAT_15523d62f | 3;
    _DAT_15523d620 = 0x10;
    _DAT_15523d5d0 = L"(TArray<T, AllocatorType>)";
    _DAT_15523d5e8 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523d5f0 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523d5f8 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523d600 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523d608 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523d5e0 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523d62c = '\0';
    _DAT_15523d628 = 8;
    _DAT_15523d624 = 0x10;
  }
  DAT_15523c2e5 = DAT_15523c2e5 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523c290 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523d62c != '\0') {
    DAT_15523c2e6 = DAT_15523c2e6 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523c2e5 = DAT_15523c2e5 + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523c290;
  DAT_15523c290 = ::FieldBuffer;
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
    DAT_15523c2e6 = DAT_15523c2e6 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 148471b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::GetTypeLayout
          (TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0> *this)

{
  if ((DAT_15523c27f & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523c27f = DAT_15523c27f | 2;
  _DAT_15523c270 = 0x20;
  _DAT_15523c278 = 8;
  _DAT_15523c220 = L"TResourceArray";
  _DAT_15523c238 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523c240 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523c248 = Freeze::DefaultAppendHash;
  _DAT_15523c250 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523c258 = Freeze::DefaultToString;
  _DAT_15523c230 = InternalDestroy;
  _DAT_15523c260 = TGetDefaultObjectHelper<TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>,1>::Do;
  DAT_15523c27c = 1;
  _DAT_15523c274 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c8a2 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c880 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c888 = DAT_15523c228;
  _DAT_15523c890 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c898 = 0x18;
  _DAT_15523c89c = 1;
  _DAT_15523c8a0 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523d697 & 2) == 0) {
    DAT_15523d697 = DAT_15523d697 | 3;
    _DAT_15523d688 = 0x10;
    _DAT_15523d638 = L"(TArray<T, AllocatorType>)";
    _DAT_15523d650 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523d658 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523d660 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523d668 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523d670 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523d648 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523d694 = '\0';
    _DAT_15523d690 = 8;
    _DAT_15523d68c = 0x10;
  }
  DAT_15523c27d = DAT_15523c27d + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523c228 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523d694 != '\0') {
    DAT_15523c27e = DAT_15523c27e + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523c27d = DAT_15523c27d + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523c228;
  DAT_15523c228 = ::FieldBuffer;
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
    DAT_15523c27e = DAT_15523c27e + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 148471e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::GetTypeLayout
          (TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0> *this)

{
  if ((DAT_15523c217 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523c217 = DAT_15523c217 | 2;
  _DAT_15523c208 = 0x20;
  _DAT_15523c210 = 8;
  _DAT_15523c1b8 = L"TResourceArray";
  _DAT_15523c1d0 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523c1d8 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523c1e0 = Freeze::DefaultAppendHash;
  _DAT_15523c1e8 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523c1f0 = Freeze::DefaultToString;
  _DAT_15523c1c8 = InternalDestroy;
  _DAT_15523c1f8 = TGetDefaultObjectHelper<TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>,1>::Do;
  DAT_15523c214 = 1;
  _DAT_15523c20c = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c872 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c850 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c858 = DAT_15523c1c0;
  _DAT_15523c860 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c868 = 0x18;
  _DAT_15523c86c = 1;
  _DAT_15523c870 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523d6ff & 2) == 0) {
    DAT_15523d6ff = DAT_15523d6ff | 3;
    _DAT_15523d6f0 = 0x10;
    _DAT_15523d6a0 = L"(TArray<T, AllocatorType>)";
    _DAT_15523d6b8 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523d6c0 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523d6c8 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523d6d0 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523d6d8 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523d6b0 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523d6fc = '\0';
    _DAT_15523d6f8 = 8;
    _DAT_15523d6f4 = 0x10;
  }
  DAT_15523c215 = DAT_15523c215 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523c1c0 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523d6fc != '\0') {
    DAT_15523c216 = DAT_15523c216 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523c215 = DAT_15523c215 + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523c1c0;
  DAT_15523c1c0 = ::FieldBuffer;
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
    DAT_15523c216 = DAT_15523c216 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 1484720f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::GetTypeLayout
          (TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0> *this)

{
  if ((DAT_15523c1af & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523c1af = DAT_15523c1af | 2;
  _DAT_15523c1a0 = 0x20;
  _DAT_15523c1a8 = 8;
  _DAT_15523c150 = L"TResourceArray";
  _DAT_15523c168 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523c170 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523c178 = Freeze::DefaultAppendHash;
  _DAT_15523c180 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523c188 = Freeze::DefaultToString;
  _DAT_15523c160 = InternalDestroy;
  _DAT_15523c190 = TGetDefaultObjectHelper<TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>,1>::Do;
  DAT_15523c1ac = 1;
  _DAT_15523c1a4 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c842 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c820 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c828 = DAT_15523c158;
  _DAT_15523c830 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c838 = 0x18;
  _DAT_15523c83c = 1;
  _DAT_15523c840 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523d767 & 2) == 0) {
    DAT_15523d767 = DAT_15523d767 | 3;
    _DAT_15523d758 = 0x10;
    _DAT_15523d708 = L"(TArray<T, AllocatorType>)";
    _DAT_15523d720 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523d728 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523d730 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523d738 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523d740 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523d718 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523d764 = '\0';
    _DAT_15523d760 = 8;
    _DAT_15523d75c = 0x10;
  }
  DAT_15523c1ad = DAT_15523c1ad + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523c158 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523d764 != '\0') {
    DAT_15523c1ae = DAT_15523c1ae + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523c1ad = DAT_15523c1ad + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523c158;
  DAT_15523c158 = ::FieldBuffer;
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
    DAT_15523c1ae = DAT_15523c1ae + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 1484723a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::GetTypeLayout
          (TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0> *this)

{
  if ((DAT_15523c147 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523c147 = DAT_15523c147 | 2;
  _DAT_15523c138 = 0x20;
  _DAT_15523c140 = 8;
  _DAT_15523c0e8 = L"TResourceArray";
  _DAT_15523c100 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523c108 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523c110 = Freeze::DefaultAppendHash;
  _DAT_15523c118 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523c120 = Freeze::DefaultToString;
  _DAT_15523c0f8 = InternalDestroy;
  _DAT_15523c128 = TGetDefaultObjectHelper<TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>,1>::Do;
  DAT_15523c144 = 1;
  _DAT_15523c13c = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c812 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c7f0 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c7f8 = DAT_15523c0f0;
  _DAT_15523c800 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c808 = 0x18;
  _DAT_15523c80c = 1;
  _DAT_15523c810 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523d7cf & 2) == 0) {
    DAT_15523d7cf = DAT_15523d7cf | 3;
    _DAT_15523d7c0 = 0x10;
    _DAT_15523d770 = L"(TArray<T, AllocatorType>)";
    _DAT_15523d788 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523d790 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523d798 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523d7a0 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523d7a8 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523d780 =
         TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523d7cc = '\0';
    _DAT_15523d7c8 = 8;
    _DAT_15523d7c4 = 0x10;
  }
  DAT_15523c145 = DAT_15523c145 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523c0f0 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523d7cc != '\0') {
    DAT_15523c146 = DAT_15523c146 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523c145 = DAT_15523c145 + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523c0f0;
  DAT_15523c0f0 = ::FieldBuffer;
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
    DAT_15523c146 = DAT_15523c146 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 148472650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::GetTypeLayout
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0> *this)

{
  if ((DAT_15523c00f & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523c00f = DAT_15523c00f | 2;
  _DAT_15523c000 = 0x20;
  _DAT_15523c008 = 8;
  _DAT_15523bfb0 = L"TResourceArray";
  _DAT_15523bfc8 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523bfd0 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523bfd8 = Freeze::DefaultAppendHash;
  _DAT_15523bfe0 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523bfe8 = Freeze::DefaultToString;
  _DAT_15523bfc0 = InternalDestroy;
  _DAT_15523bff0 =
       TGetDefaultObjectHelper<TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>,1>::Do;
  DAT_15523c00c = 1;
  _DAT_15523c004 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c782 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c760 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c768 = DAT_15523bfb8;
  _DAT_15523c770 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c778 = 0x18;
  _DAT_15523c77c = 1;
  _DAT_15523c780 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523d907 & 2) == 0) {
    DAT_15523d907 = DAT_15523d907 | 3;
    _DAT_15523d8f8 = 0x10;
    _DAT_15523d8a8 = L"(TArray<T, AllocatorType>)";
    _DAT_15523d8c0 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523d8c8 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523d8d0 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523d8d8 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523d8e0 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523d8b8 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523d904 = '\0';
    _DAT_15523d900 = 8;
    _DAT_15523d8fc = 0x10;
  }
  DAT_15523c00d = DAT_15523c00d + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523bfb8 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523d904 != '\0') {
    DAT_15523c00e = DAT_15523c00e + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523c00d = DAT_15523c00d + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523bfb8;
  DAT_15523bfb8 = ::FieldBuffer;
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
    DAT_15523c00e = DAT_15523c00e + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 148472900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::GetTypeLayout
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0> *this)

{
  if ((DAT_15523c077 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523c077 = DAT_15523c077 | 2;
  _DAT_15523c068 = 0x20;
  _DAT_15523c070 = 8;
  _DAT_15523c018 = L"TResourceArray";
  _DAT_15523c030 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523c038 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523c040 = Freeze::DefaultAppendHash;
  _DAT_15523c048 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523c050 = Freeze::DefaultToString;
  _DAT_15523c028 = InternalDestroy;
  _DAT_15523c058 =
       TGetDefaultObjectHelper<TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>,1>::Do;
  DAT_15523c074 = 1;
  _DAT_15523c06c = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c7b2 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c790 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c798 = DAT_15523c020;
  _DAT_15523c7a0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c7a8 = 0x18;
  _DAT_15523c7ac = 1;
  _DAT_15523c7b0 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523d89f & 2) == 0) {
    DAT_15523d89f = DAT_15523d89f | 3;
    _DAT_15523d890 = 0x10;
    _DAT_15523d840 = L"(TArray<T, AllocatorType>)";
    _DAT_15523d858 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523d860 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523d868 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523d870 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523d878 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523d850 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523d89c = '\0';
    _DAT_15523d898 = 8;
    _DAT_15523d894 = 0x10;
  }
  DAT_15523c075 = DAT_15523c075 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523c020 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523d89c != '\0') {
    DAT_15523c076 = DAT_15523c076 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523c075 = DAT_15523c075 + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523c020;
  DAT_15523c020 = ::FieldBuffer;
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
    DAT_15523c076 = DAT_15523c076 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 148472bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::GetTypeLayout
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0> *this)

{
  if ((DAT_15523bf3f & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523bf3f = DAT_15523bf3f | 2;
  _DAT_15523bf30 = 0x20;
  _DAT_15523bf38 = 8;
  _DAT_15523bee0 = L"TResourceArray";
  _DAT_15523bef8 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523bf00 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523bf08 = Freeze::DefaultAppendHash;
  _DAT_15523bf10 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523bf18 = Freeze::DefaultToString;
  _DAT_15523bef0 = InternalDestroy;
  _DAT_15523bf20 =
       TGetDefaultObjectHelper<TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>,1>::Do;
  DAT_15523bf3c = 1;
  _DAT_15523bf34 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c722 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c700 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c708 = DAT_15523bee8;
  _DAT_15523c710 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c718 = 0x18;
  _DAT_15523c71c = 1;
  _DAT_15523c720 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523d9d7 & 2) == 0) {
    DAT_15523d9d7 = DAT_15523d9d7 | 3;
    _DAT_15523d9c8 = 0x10;
    _DAT_15523d978 = L"(TArray<T, AllocatorType>)";
    _DAT_15523d990 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523d998 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523d9a0 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523d9a8 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523d9b0 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523d988 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523d9d4 = '\0';
    _DAT_15523d9d0 = 8;
    _DAT_15523d9cc = 0x10;
  }
  DAT_15523bf3d = DAT_15523bf3d + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523bee8 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523d9d4 != '\0') {
    DAT_15523bf3e = DAT_15523bf3e + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523bf3d = DAT_15523bf3d + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523bee8;
  DAT_15523bee8 = ::FieldBuffer;
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
    DAT_15523bf3e = DAT_15523bf3e + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 148472e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::GetTypeLayout
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0> *this)

{
  if ((DAT_15523bfa7 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523bfa7 = DAT_15523bfa7 | 2;
  _DAT_15523bf98 = 0x20;
  _DAT_15523bfa0 = 8;
  _DAT_15523bf48 = L"TResourceArray";
  _DAT_15523bf60 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523bf68 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523bf70 = Freeze::DefaultAppendHash;
  _DAT_15523bf78 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523bf80 = Freeze::DefaultToString;
  _DAT_15523bf58 = InternalDestroy;
  _DAT_15523bf88 =
       TGetDefaultObjectHelper<TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>,1>::Do;
  DAT_15523bfa4 = 1;
  _DAT_15523bf9c = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c752 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c730 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c738 = DAT_15523bf50;
  _DAT_15523c740 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c748 = 0x18;
  _DAT_15523c74c = 1;
  _DAT_15523c750 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523d96f & 2) == 0) {
    DAT_15523d96f = DAT_15523d96f | 3;
    _DAT_15523d960 = 0x10;
    _DAT_15523d910 = L"(TArray<T, AllocatorType>)";
    _DAT_15523d928 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523d930 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523d938 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523d940 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523d948 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523d920 =
         TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523d96c = '\0';
    _DAT_15523d968 = 8;
    _DAT_15523d964 = 0x10;
  }
  DAT_15523bfa5 = DAT_15523bfa5 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523bf50 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523d96c != '\0') {
    DAT_15523bfa6 = DAT_15523bfa6 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523bfa5 = DAT_15523bfa5 + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523bf50;
  DAT_15523bf50 = ::FieldBuffer;
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
    DAT_15523bfa6 = DAT_15523bfa6 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 148473110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::GetTypeLayout
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0> *this)

{
  if ((DAT_15523be07 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523be07 = DAT_15523be07 | 2;
  _DAT_15523bdf8 = 0x20;
  _DAT_15523be00 = 8;
  _DAT_15523bda8 = L"TResourceArray";
  _DAT_15523bdc0 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523bdc8 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523bdd0 = Freeze::DefaultAppendHash;
  _DAT_15523bdd8 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523bde0 = Freeze::DefaultToString;
  _DAT_15523bdb8 = InternalDestroy;
  _DAT_15523bde8 =
       TGetDefaultObjectHelper<TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>,1>::Do
  ;
  DAT_15523be04 = 1;
  _DAT_15523bdfc = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c632 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c610 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c618 = DAT_15523bdb0;
  _DAT_15523c620 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c628 = 0x18;
  _DAT_15523c62c = 1;
  _DAT_15523c630 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523db0f & 2) == 0) {
    DAT_15523db0f = DAT_15523db0f | 3;
    _DAT_15523db00 = 0x10;
    _DAT_15523dab0 = L"(TArray<T, AllocatorType>)";
    _DAT_15523dac8 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523dad0 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523dad8 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523dae0 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523dae8 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523dac0 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523db0c = '\0';
    _DAT_15523db08 = 8;
    _DAT_15523db04 = 0x10;
  }
  DAT_15523be05 = DAT_15523be05 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523bdb0 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523db0c != '\0') {
    DAT_15523be06 = DAT_15523be06 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523be05 = DAT_15523be05 + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523bdb0;
  DAT_15523bdb0 = ::FieldBuffer;
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
    DAT_15523be06 = DAT_15523be06 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 1484733c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::GetTypeLayout
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0> *this)

{
  if ((DAT_15523be6f & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523be6f = DAT_15523be6f | 2;
  _DAT_15523be60 = 0x20;
  _DAT_15523be68 = 8;
  _DAT_15523be10 = L"TResourceArray";
  _DAT_15523be28 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523be30 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523be38 = Freeze::DefaultAppendHash;
  _DAT_15523be40 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523be48 = Freeze::DefaultToString;
  _DAT_15523be20 = InternalDestroy;
  _DAT_15523be50 =
       TGetDefaultObjectHelper<TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>,1>::
       Do;
  DAT_15523be6c = 1;
  _DAT_15523be64 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c662 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c640 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c648 = DAT_15523be18;
  _DAT_15523c650 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c658 = 0x18;
  _DAT_15523c65c = 1;
  _DAT_15523c660 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523daa7 & 2) == 0) {
    DAT_15523daa7 = DAT_15523daa7 | 3;
    _DAT_15523da98 = 0x10;
    _DAT_15523da48 = L"(TArray<T, AllocatorType>)";
    _DAT_15523da60 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523da68 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523da70 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523da78 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523da80 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523da58 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523daa4 = '\0';
    _DAT_15523daa0 = 8;
    _DAT_15523da9c = 0x10;
  }
  DAT_15523be6d = DAT_15523be6d + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523be18 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523daa4 != '\0') {
    DAT_15523be6e = DAT_15523be6e + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523be6d = DAT_15523be6d + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523be18;
  DAT_15523be18 = ::FieldBuffer;
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
    DAT_15523be6e = DAT_15523be6e + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 148473670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::GetTypeLayout
          (TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0> *this)

{
  if ((DAT_15523bed7 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523bed7 = DAT_15523bed7 | 2;
  _DAT_15523bec8 = 0x20;
  _DAT_15523bed0 = 8;
  _DAT_15523be78 = L"TResourceArray";
  _DAT_15523be90 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523be98 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523bea0 = Freeze::DefaultAppendHash;
  _DAT_15523bea8 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523beb0 = Freeze::DefaultToString;
  _DAT_15523be88 = InternalDestroy;
  _DAT_15523beb8 =
       TGetDefaultObjectHelper<TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>,1>
       ::Do;
  DAT_15523bed4 = 1;
  _DAT_15523becc = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c692 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c670 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c678 = DAT_15523be80;
  _DAT_15523c680 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c688 = 0x18;
  _DAT_15523c68c = 1;
  _DAT_15523c690 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523da3f & 2) == 0) {
    DAT_15523da3f = DAT_15523da3f | 3;
    _DAT_15523da30 = 0x10;
    _DAT_15523d9e0 = L"(TArray<T, AllocatorType>)";
    _DAT_15523d9f8 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523da00 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523da08 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523da10 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523da18 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523d9f0 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523da3c = '\0';
    _DAT_15523da38 = 8;
    _DAT_15523da34 = 0x10;
  }
  DAT_15523bed5 = DAT_15523bed5 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523be80 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523da3c != '\0') {
    DAT_15523bed6 = DAT_15523bed6 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523bed5 = DAT_15523bed5 + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523be80;
  DAT_15523be80 = ::FieldBuffer;
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
    DAT_15523bed6 = DAT_15523bed6 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 148473920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::GetTypeLayout
          (TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0> *this)

{
  if ((DAT_15523bd9f & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523bd9f = DAT_15523bd9f | 2;
  _DAT_15523bd90 = 0x20;
  _DAT_15523bd98 = 8;
  _DAT_15523bd40 = L"TResourceArray";
  _DAT_15523bd58 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523bd60 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523bd68 = Freeze::DefaultAppendHash;
  _DAT_15523bd70 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523bd78 = Freeze::DefaultToString;
  _DAT_15523bd50 = InternalDestroy;
  _DAT_15523bd80 =
       TGetDefaultObjectHelper<TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>,1>::Do;
  DAT_15523bd9c = 1;
  _DAT_15523bd94 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c602 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c5e0 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c5e8 = DAT_15523bd48;
  _DAT_15523c5f0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c5f8 = 0x18;
  _DAT_15523c5fc = 1;
  _DAT_15523c600 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523db77 & 2) == 0) {
    DAT_15523db77 = DAT_15523db77 | 3;
    _DAT_15523db68 = 0x10;
    _DAT_15523db18 = L"(TArray<T, AllocatorType>)";
    _DAT_15523db30 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15523db38 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15523db40 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15523db48 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15523db50 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15523db28 =
         TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15523db74 = '\0';
    _DAT_15523db70 = 8;
    _DAT_15523db6c = 0x10;
  }
  DAT_15523bd9d = DAT_15523bd9d + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523bd48 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523db74 != '\0') {
    DAT_15523bd9e = DAT_15523bd9e + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523bd9d = DAT_15523bd9d + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523bd48;
  DAT_15523bd48 = ::FieldBuffer;
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
    DAT_15523bd9e = DAT_15523bd9e + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 148473bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<FMeshToMeshVertData,0>::GetTypeLayout(TResourceArray<FMeshToMeshVertData,0> *this)

{
  if ((DAT_15523c0df & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FMeshToMeshVertData,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15523c0df = DAT_15523c0df | 2;
  _DAT_15523c0d0 = 0x20;
  _DAT_15523c0d8 = 8;
  _DAT_15523c080 = L"TResourceArray";
  _DAT_15523c098 = Freeze::DefaultWriteMemoryImage;
  _DAT_15523c0a0 = Freeze::DefaultUnfrozenCopy;
  _DAT_15523c0a8 = Freeze::DefaultAppendHash;
  _DAT_15523c0b0 = Freeze::DefaultGetTargetAlignment;
  _DAT_15523c0b8 = Freeze::DefaultToString;
  _DAT_15523c090 = InternalDestroy;
  _DAT_15523c0c0 = TGetDefaultObjectHelper<TResourceArray<FMeshToMeshVertData,0>,1>::Do;
  DAT_15523c0dc = 1;
  _DAT_15523c0d4 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<FMeshToMeshVertData,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15523c7e2 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15523c7c0 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15523c7c8 = DAT_15523c088;
  _DAT_15523c7d0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15523c7d8 = 0x18;
  _DAT_15523c7dc = 1;
  _DAT_15523c7e0 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15523d837 & 2) == 0) {
    DAT_15523d837 = DAT_15523d837 | 3;
    _DAT_15523d828 = 0x10;
    _DAT_15523d7d8 = L"(TArray<T, AllocatorType>)";
    _DAT_15523d7f0 =
         TStaticGetTypeLayoutHelper<TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_15523d7f8 =
         TStaticGetTypeLayoutHelper<TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_15523d800 =
         TStaticGetTypeLayoutHelper<TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_15523d808 =
         TStaticGetTypeLayoutHelper<TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_15523d810 =
         TStaticGetTypeLayoutHelper<TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_>_>::
         CallToString;
    _DAT_15523d7e8 =
         TStaticGetTypeLayoutHelper<TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_>_>::
         CallDestroy;
    DAT_15523d834 = '\0';
    _DAT_15523d830 = 8;
    _DAT_15523d82c = 0x10;
  }
  DAT_15523c0dd = DAT_15523c0dd + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<FMeshToMeshVertData,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15523c088 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15523d834 != '\0') {
    DAT_15523c0de = DAT_15523c0de + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15523c0dd = DAT_15523c0dd + '\x01';
  ::FieldBuffer._16_8_ = DAT_15523c088;
  DAT_15523c088 = ::FieldBuffer;
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
    DAT_15523c0de = DAT_15523c0de + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FMeshToMeshVertData,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FMeshToMeshVertData,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 148477c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<int,0>::InternalDestroy
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

// InternalDestroy @ 148477c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::InternalDestroy
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

// InternalDestroy @ 148477ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::InternalDestroy
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

// InternalDestroy @ 148477cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::InternalDestroy
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

// InternalDestroy @ 148477d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::InternalDestroy
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

// InternalDestroy @ 148477d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::InternalDestroy
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

// InternalDestroy @ 148477d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::InternalDestroy
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

// InternalDestroy @ 148477d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::InternalDestroy
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

// InternalDestroy @ 148477dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::InternalDestroy
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

// InternalDestroy @ 148477df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::InternalDestroy
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

// InternalDestroy @ 148477e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::InternalDestroy
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

// InternalDestroy @ 148477e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::InternalDestroy
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

// InternalDestroy @ 148477e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::InternalDestroy
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

// InternalDestroy @ 148477eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::InternalDestroy
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

// InternalDestroy @ 148477ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::InternalDestroy
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

// InternalDestroy @ 148477f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::InternalDestroy
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

// InternalDestroy @ 148477f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::InternalDestroy
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

// InternalDestroy @ 148477f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<FMeshToMeshVertData,0>::InternalDestroy
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

// IsStatic @ 148478870

bool __thiscall TResourceArray<int,0>::IsStatic(TResourceArray<int,0> *this)

{
  return false;
}

// IsStatic @ 148478880

bool __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::IsStatic
          (TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0> *this)

{
  return false;
}

// IsStatic @ 148478890

bool __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::IsStatic
          (TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0> *this)

{
  return false;
}

// IsStatic @ 1484788a0

bool __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::IsStatic
          (TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0> *this)

{
  return false;
}

// IsStatic @ 1484788b0

bool __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::IsStatic
          (TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0> *this)

{
  return false;
}

// IsStatic @ 1484788c0

bool __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::IsStatic
          (TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0> *this)

{
  return false;
}

// IsStatic @ 1484788d0

bool __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::IsStatic
          (TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0> *this)

{
  return false;
}

// IsStatic @ 1484788e0

bool __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::IsStatic
          (TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0> *this)

{
  return false;
}

// IsStatic @ 1484788f0

bool __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::IsStatic
          (TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0> *this)

{
  return false;
}

// IsStatic @ 148478900

bool __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::IsStatic
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0> *this)

{
  return false;
}

// IsStatic @ 148478910

bool __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::IsStatic
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0> *this)

{
  return false;
}

// IsStatic @ 148478920

bool __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::IsStatic
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0> *this)

{
  return false;
}

// IsStatic @ 148478930

bool __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::IsStatic
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0> *this)

{
  return false;
}

// IsStatic @ 148478940

bool __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::IsStatic
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0> *this)

{
  return false;
}

// IsStatic @ 148478950

bool __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::IsStatic
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0> *this)

{
  return false;
}

// IsStatic @ 148478960

bool __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::IsStatic
          (TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0> *this)

{
  return false;
}

// IsStatic @ 148478970

bool __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::IsStatic
          (TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0> *this)

{
  return false;
}

// IsStatic @ 148478980

bool __thiscall
TResourceArray<FMeshToMeshVertData,0>::IsStatic(TResourceArray<FMeshToMeshVertData,0> *this)

{
  return false;
}

// SetAllowCPUAccess @ 148492f60

void __thiscall TResourceArray<int,0>::SetAllowCPUAccess(TResourceArray<int,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148492f70

void __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::SetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148492f80

void __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::SetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148492f90

void __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::SetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148492fa0

void __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::SetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148492fb0

void __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::SetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148492fc0

void __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::SetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148492fd0

void __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::SetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148492fe0

void __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::SetAllowCPUAccess
          (TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148492ff0

void __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::SetAllowCPUAccess
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148493000

void __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::SetAllowCPUAccess
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148493010

void __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::SetAllowCPUAccess
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148493020

void __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::SetAllowCPUAccess
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148493030

void __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::SetAllowCPUAccess
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148493040

void __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::SetAllowCPUAccess
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148493050

void __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::SetAllowCPUAccess
          (TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0> *this,
          bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148493060

void __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::SetAllowCPUAccess
          (TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 148493070

void __thiscall
TResourceArray<FMeshToMeshVertData,0>::SetAllowCPUAccess
          (TResourceArray<FMeshToMeshVertData,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// ~TResourceArray<FIndexLengthPair,0> @ 148624ac0

void __thiscall
TResourceArray<FIndexLengthPair,0>::~TResourceArray<FIndexLengthPair,0>
          (TResourceArray<FIndexLengthPair,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// Discard @ 148637e40

void __thiscall
TResourceArray<FIndexLengthPair,0>::Discard(TResourceArray<FIndexLengthPair,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// GetAllowCPUAccess @ 1486451f0

bool __thiscall
TResourceArray<FIndexLengthPair,0>::GetAllowCPUAccess(TResourceArray<FIndexLengthPair,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetResourceData @ 14864d1d0

void * __thiscall
TResourceArray<FIndexLengthPair,0>::GetResourceData(TResourceArray<FIndexLengthPair,0> *this)

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

// GetResourceDataSize @ 14864d230

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<FIndexLengthPair,0>::GetResourceDataSize(TResourceArray<FIndexLengthPair,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x1fffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<FIndexLengthPair,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 8;
}

// GetTypeLayout @ 148650370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<FIndexLengthPair,0>::GetTypeLayout(TResourceArray<FIndexLengthPair,0> *this)

{
  if ((DAT_155245ac7 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FIndexLengthPair,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_155245ac7 = DAT_155245ac7 | 2;
  _DAT_155245ab8 = 0x20;
  _DAT_155245ac0 = 8;
  _DAT_155245a68 = L"TResourceArray";
  _DAT_155245a80 = Freeze::DefaultWriteMemoryImage;
  _DAT_155245a88 = Freeze::DefaultUnfrozenCopy;
  _DAT_155245a90 = Freeze::DefaultAppendHash;
  _DAT_155245a98 = Freeze::DefaultGetTargetAlignment;
  _DAT_155245aa0 = Freeze::DefaultToString;
  _DAT_155245a78 = InternalDestroy;
  _DAT_155245aa8 = TGetDefaultObjectHelper<TResourceArray<FIndexLengthPair,0>,1>::Do;
  DAT_155245ac4 = 1;
  _DAT_155245abc = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<FIndexLengthPair,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_155245c0a = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_155245be8 = StaticGetTypeLayoutDesc<bool>();
  _DAT_155245bf0 = DAT_155245a70;
  _DAT_155245bf8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155245c00 = 0x18;
  _DAT_155245c04 = 1;
  _DAT_155245c08 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15524616f & 2) == 0) {
    DAT_15524616f = DAT_15524616f | 3;
    _DAT_155246160 = 0x10;
    _DAT_155246110 = L"(TArray<T, AllocatorType>)";
    _DAT_155246128 =
         TStaticGetTypeLayoutHelper<TArray<FIndexLengthPair,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_155246130 =
         TStaticGetTypeLayoutHelper<TArray<FIndexLengthPair,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_155246138 =
         TStaticGetTypeLayoutHelper<TArray<FIndexLengthPair,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_155246140 =
         TStaticGetTypeLayoutHelper<TArray<FIndexLengthPair,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_155246148 =
         TStaticGetTypeLayoutHelper<TArray<FIndexLengthPair,TMemoryImageAllocator<0>_>_>::
         CallToString;
    _DAT_155246120 =
         TStaticGetTypeLayoutHelper<TArray<FIndexLengthPair,TMemoryImageAllocator<0>_>_>::
         CallDestroy;
    DAT_15524616c = '\0';
    _DAT_155246168 = 8;
    _DAT_155246164 = 0x10;
  }
  DAT_155245ac5 = DAT_155245ac5 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FIndexLengthPair,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<FIndexLengthPair,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_155245a70 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15524616c != '\0') {
    DAT_155245ac6 = DAT_155245ac6 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_155245ac5 = DAT_155245ac5 + '\x01';
  ::FieldBuffer._16_8_ = DAT_155245a70;
  DAT_155245a70 = ::FieldBuffer;
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
    DAT_155245ac6 = DAT_155245ac6 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FIndexLengthPair,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FIndexLengthPair,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 148659700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<FIndexLengthPair,0>::InternalDestroy
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

// IsStatic @ 148659f90

bool __thiscall
TResourceArray<FIndexLengthPair,0>::IsStatic(TResourceArray<FIndexLengthPair,0> *this)

{
  return false;
}

// SetAllowCPUAccess @ 1486651f0

void __thiscall
TResourceArray<FIndexLengthPair,0>::SetAllowCPUAccess
          (TResourceArray<FIndexLengthPair,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// ~TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0> @ 1489b87a0

void __thiscall
TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>::
~TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>
          (TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// Discard @ 1489d65c0

void __thiscall
TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>::Discard
          (TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// GetAllowCPUAccess @ 1489e60f0

bool __thiscall
TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>::GetAllowCPUAccess
          (TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetResourceData @ 1489ecdf0

void * __thiscall
TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>::GetResourceData
          (TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0> *this)

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

// GetResourceDataSize @ 1489ece50

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>::GetResourceDataSize
          (TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x1fffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 8;
}

// GetTypeLayout @ 1489ef120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>::GetTypeLayout
          (TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0> *this)

{
  if ((DAT_15525ba6f & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15525ba6f = DAT_15525ba6f | 2;
  _DAT_15525ba60 = 0x20;
  _DAT_15525ba68 = 8;
  _DAT_15525ba10 = L"TResourceArray";
  _DAT_15525ba28 = Freeze::DefaultWriteMemoryImage;
  _DAT_15525ba30 = Freeze::DefaultUnfrozenCopy;
  _DAT_15525ba38 = Freeze::DefaultAppendHash;
  _DAT_15525ba40 = Freeze::DefaultGetTargetAlignment;
  _DAT_15525ba48 = Freeze::DefaultToString;
  _DAT_15525ba20 = InternalDestroy;
  _DAT_15525ba50 =
       TGetDefaultObjectHelper<TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>,1>::Do;
  DAT_15525ba6c = 1;
  _DAT_15525ba64 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15525bcca = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
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
  _DAT_15525bcc0 = 0x18;
  _DAT_15525bca8 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<bool>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15525bcb0 = DAT_15525ba18;
  _DAT_15525bcb8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15525bcc4 = 1;
  _DAT_15525bcc8 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15525bdcf & 2) == 0) {
    DAT_15525bdcf = DAT_15525bdcf | 3;
    _DAT_15525bdc0 = 0x10;
    _DAT_15525bd70 = L"(TArray<T, AllocatorType>)";
    _DAT_15525bd88 =
         TStaticGetTypeLayoutHelper<TArray<UE::HLSL::FIndirectVirtualTextureEntry,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_15525bd90 =
         TStaticGetTypeLayoutHelper<TArray<UE::HLSL::FIndirectVirtualTextureEntry,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_15525bd98 =
         TStaticGetTypeLayoutHelper<TArray<UE::HLSL::FIndirectVirtualTextureEntry,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_15525bda0 =
         TStaticGetTypeLayoutHelper<TArray<UE::HLSL::FIndirectVirtualTextureEntry,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_15525bda8 =
         TStaticGetTypeLayoutHelper<TArray<UE::HLSL::FIndirectVirtualTextureEntry,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_15525bd80 =
         TStaticGetTypeLayoutHelper<TArray<UE::HLSL::FIndirectVirtualTextureEntry,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15525bdcc = '\0';
    _DAT_15525bdc8 = 8;
    _DAT_15525bdc4 = 0x10;
  }
  DAT_15525ba6d = DAT_15525ba6d + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<UE::HLSL::FIndirectVirtualTextureEntry,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15525ba18 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15525bdcc != '\0') {
    DAT_15525ba6e = DAT_15525ba6e + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15525ba6d = DAT_15525ba6d + '\x01';
  ::FieldBuffer._16_8_ = DAT_15525ba18;
  DAT_15525ba18 = ::FieldBuffer;
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
    DAT_15525ba6e = DAT_15525ba6e + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 1489f7e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>::InternalDestroy
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

// IsStatic @ 1489f9a60

bool __thiscall
TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>::IsStatic
          (TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0> *this)

{
  return false;
}

// SetAllowCPUAccess @ 148a14530

void __thiscall
TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0>::SetAllowCPUAccess
          (TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

