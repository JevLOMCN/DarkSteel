// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 9

// ~TResourceArray<UE::Math::TVector2<float>,0> @ 14d6ab890

void __thiscall
TResourceArray<UE::Math::TVector2<float>,0>::~TResourceArray<UE::Math::TVector2<float>,0>
          (TResourceArray<UE::Math::TVector2<float>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// Discard @ 14d6c0670

void __thiscall
TResourceArray<UE::Math::TVector2<float>,0>::Discard
          (TResourceArray<UE::Math::TVector2<float>,0> *this)

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

// GetAllowCPUAccess @ 14d6d1d90

bool __thiscall
TResourceArray<UE::Math::TVector2<float>,0>::GetAllowCPUAccess
          (TResourceArray<UE::Math::TVector2<float>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetResourceData @ 14d6d8ae0

void * __thiscall
TResourceArray<UE::Math::TVector2<float>,0>::GetResourceData
          (TResourceArray<UE::Math::TVector2<float>,0> *this)

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

// GetResourceDataSize @ 14d6d8b40

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<UE::Math::TVector2<float>,0>::GetResourceDataSize
          (TResourceArray<UE::Math::TVector2<float>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x1fffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<UE::Math::TVector2<float>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 8;
}

// GetTypeLayout @ 14d6dc2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<UE::Math::TVector2<float>,0>::GetTypeLayout
          (TResourceArray<UE::Math::TVector2<float>,0> *this)

{
  if ((DAT_15536948f & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::Math::TVector2<float>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15536948f = DAT_15536948f | 2;
  _DAT_155369480 = 0x20;
  _DAT_155369488 = 8;
  _DAT_155369430 = L"TResourceArray";
  _DAT_155369448 = Freeze::DefaultWriteMemoryImage;
  _DAT_155369450 = Freeze::DefaultUnfrozenCopy;
  _DAT_155369458 = Freeze::DefaultAppendHash;
  _DAT_155369460 = Freeze::DefaultGetTargetAlignment;
  _DAT_155369468 = Freeze::DefaultToString;
  _DAT_155369440 = InternalDestroy;
  _DAT_155369470 = TGetDefaultObjectHelper<TResourceArray<UE::Math::TVector2<float>,0>,1>::Do;
  DAT_15536948c = 1;
  _DAT_155369484 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<UE::Math::TVector2<float>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15536985a = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
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
  _DAT_155369850 = 0x18;
  _DAT_155369838 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<bool>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_155369840 = DAT_155369438;
  _DAT_155369848 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155369854 = 1;
  _DAT_155369858 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_155369a57 & 2) == 0) {
    DAT_155369a57 = DAT_155369a57 | 3;
    _DAT_155369a48 = 0x10;
    _DAT_1553699f8 = L"(TArray<T, AllocatorType>)";
    _DAT_155369a10 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector2<float>,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_155369a18 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector2<float>,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_155369a20 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector2<float>,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_155369a28 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector2<float>,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_155369a30 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector2<float>,TMemoryImageAllocator<0>_>_>::
         CallToString;
    _DAT_155369a08 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector2<float>,TMemoryImageAllocator<0>_>_>::
         CallDestroy;
    DAT_155369a54 = '\0';
    _DAT_155369a50 = 8;
    _DAT_155369a4c = 0x10;
  }
  DAT_15536948d = DAT_15536948d + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector2<float>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<UE::Math::TVector2<float>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_155369438 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_155369a54 != '\0') {
    DAT_15536948e = DAT_15536948e + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15536948d = DAT_15536948d + '\x01';
  ::FieldBuffer._16_8_ = DAT_155369438;
  DAT_155369438 = ::FieldBuffer;
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
    DAT_15536948e = DAT_15536948e + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::Math::TVector2<float>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::Math::TVector2<float>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 14d6dfd20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<UE::Math::TVector2<float>,0>::InternalDestroy
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

// IsStatic @ 14d6e1e80

bool __thiscall
TResourceArray<UE::Math::TVector2<float>,0>::IsStatic
          (TResourceArray<UE::Math::TVector2<float>,0> *this)

{
  return false;
}

// SetAllowCPUAccess @ 14d6eb990

void __thiscall
TResourceArray<UE::Math::TVector2<float>,0>::SetAllowCPUAccess
          (TResourceArray<UE::Math::TVector2<float>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

