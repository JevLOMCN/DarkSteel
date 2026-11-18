// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 18

// ~TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0> @ 14a83f840

void __thiscall
TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>::
~TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>
          (TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<FWN_Matrix3x4H,0> @ 14a83f870

void __thiscall
TResourceArray<FWN_Matrix3x4H,0>::~TResourceArray<FWN_Matrix3x4H,0>
          (TResourceArray<FWN_Matrix3x4H,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// Discard @ 14a847b30

void __thiscall
TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>::Discard
          (TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0> *this)

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

// Discard @ 14a847b80

void __thiscall TResourceArray<FWN_Matrix3x4H,0>::Discard(TResourceArray<FWN_Matrix3x4H,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// GetAllowCPUAccess @ 14a84a010

bool __thiscall
TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>::GetAllowCPUAccess
          (TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 14a84a020

bool __thiscall
TResourceArray<FWN_Matrix3x4H,0>::GetAllowCPUAccess(TResourceArray<FWN_Matrix3x4H,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetResourceData @ 14a84b520

void * __thiscall
TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>::GetResourceData
          (TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0> *this)

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

// GetResourceData @ 14a84b580

void * __thiscall
TResourceArray<FWN_Matrix3x4H,0>::GetResourceData(TResourceArray<FWN_Matrix3x4H,0> *this)

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

// GetResourceDataSize @ 14a84b5e0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>::GetResourceDataSize
          (TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x1fffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 8;
}

// GetResourceDataSize @ 14a84b620

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<FWN_Matrix3x4H,0>::GetResourceDataSize(TResourceArray<FWN_Matrix3x4H,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0xaaaaaaa < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<FWN_Matrix3x4H,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0x18;
}

// GetTypeLayout @ 14a84b9b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>::GetTypeLayout
          (TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0> *this)

{
  if ((DAT_1552c8ddf & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_1552c8ddf = DAT_1552c8ddf | 2;
  _DAT_1552c8dd0 = 0x20;
  _DAT_1552c8dd8 = 8;
  _DAT_1552c8d80 = L"TResourceArray";
  _DAT_1552c8d98 = Freeze::DefaultWriteMemoryImage;
  _DAT_1552c8da0 = Freeze::DefaultUnfrozenCopy;
  _DAT_1552c8da8 = Freeze::DefaultAppendHash;
  _DAT_1552c8db0 = Freeze::DefaultGetTargetAlignment;
  _DAT_1552c8db8 = Freeze::DefaultToString;
  _DAT_1552c8d90 = InternalDestroy;
  _DAT_1552c8dc0 =
       TGetDefaultObjectHelper<TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>,1>::Do;
  DAT_1552c8ddc = 1;
  _DAT_1552c8dd4 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_1552c8e6a = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_1552c8e48 = StaticGetTypeLayoutDesc<bool>();
  _DAT_1552c8e50 = DAT_1552c8d88;
  _DAT_1552c8e58 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552c8e60 = 0x18;
  _DAT_1552c8e64 = 1;
  _DAT_1552c8e68 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_1552c90a7 & 2) == 0) {
    DAT_1552c90a7 = DAT_1552c90a7 | 3;
    _DAT_1552c9098 = 0x10;
    _DAT_1552c9048 = L"(TArray<T, AllocatorType>)";
    _DAT_1552c9060 =
         TStaticGetTypeLayoutHelper<TArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_1552c9068 =
         TStaticGetTypeLayoutHelper<TArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_1552c9070 =
         TStaticGetTypeLayoutHelper<TArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_1552c9078 =
         TStaticGetTypeLayoutHelper<TArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_1552c9080 =
         TStaticGetTypeLayoutHelper<TArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_1552c9058 =
         TStaticGetTypeLayoutHelper<TArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_1552c90a4 = '\0';
    _DAT_1552c90a0 = 8;
    _DAT_1552c909c = 0x10;
  }
  DAT_1552c8ddd = DAT_1552c8ddd + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_1552c8d88 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_1552c90a4 != '\0') {
    DAT_1552c8dde = DAT_1552c8dde + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_1552c8ddd = DAT_1552c8ddd + '\x01';
  ::FieldBuffer._16_8_ = DAT_1552c8d88;
  DAT_1552c8d88 = ::FieldBuffer;
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
    DAT_1552c8dde = DAT_1552c8dde + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 14a84bc60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<FWN_Matrix3x4H,0>::GetTypeLayout(TResourceArray<FWN_Matrix3x4H,0> *this)

{
  if ((DAT_1552c8d77 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FWN_Matrix3x4H,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_1552c8d77 = DAT_1552c8d77 | 2;
  _DAT_1552c8d68 = 0x20;
  _DAT_1552c8d70 = 8;
  _DAT_1552c8d18 = L"TResourceArray";
  _DAT_1552c8d30 = Freeze::DefaultWriteMemoryImage;
  _DAT_1552c8d38 = Freeze::DefaultUnfrozenCopy;
  _DAT_1552c8d40 = Freeze::DefaultAppendHash;
  _DAT_1552c8d48 = Freeze::DefaultGetTargetAlignment;
  _DAT_1552c8d50 = Freeze::DefaultToString;
  _DAT_1552c8d28 = InternalDestroy;
  _DAT_1552c8d58 = TGetDefaultObjectHelper<TResourceArray<FWN_Matrix3x4H,0>,1>::Do;
  DAT_1552c8d74 = 1;
  _DAT_1552c8d6c = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<FWN_Matrix3x4H,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_1552c8e3a = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_1552c8e18 = StaticGetTypeLayoutDesc<bool>();
  _DAT_1552c8e20 = DAT_1552c8d20;
  _DAT_1552c8e28 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552c8e30 = 0x18;
  _DAT_1552c8e34 = 1;
  _DAT_1552c8e38 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_1552c910f & 2) == 0) {
    DAT_1552c910f = DAT_1552c910f | 3;
    _DAT_1552c9100 = 0x10;
    _DAT_1552c90b0 = L"(TArray<T, AllocatorType>)";
    _DAT_1552c90c8 =
         TStaticGetTypeLayoutHelper<TArray<FWN_Matrix3x4H,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_1552c90d0 =
         TStaticGetTypeLayoutHelper<TArray<FWN_Matrix3x4H,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_1552c90d8 =
         TStaticGetTypeLayoutHelper<TArray<FWN_Matrix3x4H,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_1552c90e0 =
         TStaticGetTypeLayoutHelper<TArray<FWN_Matrix3x4H,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_1552c90e8 =
         TStaticGetTypeLayoutHelper<TArray<FWN_Matrix3x4H,TMemoryImageAllocator<0>_>_>::CallToString
    ;
    _DAT_1552c90c0 =
         TStaticGetTypeLayoutHelper<TArray<FWN_Matrix3x4H,TMemoryImageAllocator<0>_>_>::CallDestroy;
    DAT_1552c910c = '\0';
    _DAT_1552c9108 = 8;
    _DAT_1552c9104 = 0x10;
  }
  DAT_1552c8d75 = DAT_1552c8d75 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FWN_Matrix3x4H,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<FWN_Matrix3x4H,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_1552c8d20 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_1552c910c != '\0') {
    DAT_1552c8d76 = DAT_1552c8d76 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_1552c8d75 = DAT_1552c8d75 + '\x01';
  ::FieldBuffer._16_8_ = DAT_1552c8d20;
  DAT_1552c8d20 = ::FieldBuffer;
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
    DAT_1552c8d76 = DAT_1552c8d76 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FWN_Matrix3x4H,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FWN_Matrix3x4H,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 14a850070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>::InternalDestroy
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

// InternalDestroy @ 14a8500a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<FWN_Matrix3x4H,0>::InternalDestroy
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

// IsStatic @ 14a8501a0

bool __thiscall
TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>::IsStatic
          (TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0> *this)

{
  return false;
}

// IsStatic @ 14a8501b0

bool __thiscall TResourceArray<FWN_Matrix3x4H,0>::IsStatic(TResourceArray<FWN_Matrix3x4H,0> *this)

{
  return false;
}

// SetAllowCPUAccess @ 14a853cc0

void __thiscall
TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0>::SetAllowCPUAccess
          (TResourceArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 14a853cd0

void __thiscall
TResourceArray<FWN_Matrix3x4H,0>::SetAllowCPUAccess
          (TResourceArray<FWN_Matrix3x4H,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

