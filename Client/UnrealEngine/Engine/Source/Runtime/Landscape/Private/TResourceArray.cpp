// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 64

// ~TResourceArray<float,0> @ 145f42ef0

void __thiscall TResourceArray<float,0>::~TResourceArray<float,0>(TResourceArray<float,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0> @ 145f42f20

void __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>::
~TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0> @ 145f42f50

void __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>::
~TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<UE::Math::TVector4<float>,0> @ 145f42f80

void __thiscall
TResourceArray<UE::Math::TVector4<float>,0>::~TResourceArray<UE::Math::TVector4<float>,0>
          (TResourceArray<UE::Math::TVector4<float>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0> @ 145f42fb0

void __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>::
~TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>
          (TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// Discard @ 145f4fc70

void __thiscall TResourceArray<float,0>::Discard(TResourceArray<float,0> *this)

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

// Discard @ 145f4fcc0

void __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>::Discard
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x30,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 145f4fd10

void __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>::Discard
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0> *this)

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

// Discard @ 145f4fd60

void __thiscall
TResourceArray<UE::Math::TVector4<float>,0>::Discard
          (TResourceArray<UE::Math::TVector4<float>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x10,0x10,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 145f4fdb0

void __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>::Discard
          (TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,2,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// GetAllowCPUAccess @ 145f53440

bool __thiscall TResourceArray<float,0>::GetAllowCPUAccess(TResourceArray<float,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 145f53450

bool __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>::GetAllowCPUAccess
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 145f53460

bool __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>::GetAllowCPUAccess
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 145f53470

bool __thiscall
TResourceArray<UE::Math::TVector4<float>,0>::GetAllowCPUAccess
          (TResourceArray<UE::Math::TVector4<float>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 145f53480

bool __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>::GetAllowCPUAccess
          (TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetResourceData @ 145f54860

void * __thiscall TResourceArray<float,0>::GetResourceData(TResourceArray<float,0> *this)

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

// GetResourceData @ 145f548c0

void * __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>::GetResourceData
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0> *this)

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

// GetResourceData @ 145f54920

void * __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>::GetResourceData
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0> *this)

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

// GetResourceData @ 145f54980

void * __thiscall
TResourceArray<UE::Math::TVector4<float>,0>::GetResourceData
          (TResourceArray<UE::Math::TVector4<float>,0> *this)

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

// GetResourceData @ 145f549e0

void * __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>::GetResourceData
          (TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0> *this)

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

// GetResourceDataSize @ 145f54a40

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall TResourceArray<float,0>::GetResourceDataSize(TResourceArray<float,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x3fffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<float,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 4;
}

// GetResourceDataSize @ 145f54a80

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>::GetResourceDataSize
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x5555555 < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0x30;
}

// GetResourceDataSize @ 145f54ac0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>::GetResourceDataSize
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0xaaaaaaa < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 0x18;
}

// GetResourceDataSize @ 145f54b00

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<UE::Math::TVector4<float>,0>::GetResourceDataSize
          (TResourceArray<UE::Math::TVector4<float>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0xfffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<UE::Math::TVector4<float>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 << 4;
}

// GetResourceDataSize @ 145f54b40

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>::GetResourceDataSize
          (TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x1fffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 8;
}

// GetTypeLayout @ 145f56270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall TResourceArray<float,0>::GetTypeLayout(TResourceArray<float,0> *this)

{
  if ((DAT_155198ca7 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<float,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_155198ca7 = DAT_155198ca7 | 2;
  _DAT_155198c98 = 0x20;
  _DAT_155198ca0 = 8;
  _DAT_155198c48 = L"TResourceArray";
  _DAT_155198c60 = Freeze::DefaultWriteMemoryImage;
  _DAT_155198c68 = Freeze::DefaultUnfrozenCopy;
  _DAT_155198c70 = Freeze::DefaultAppendHash;
  _DAT_155198c78 = Freeze::DefaultGetTargetAlignment;
  _DAT_155198c80 = Freeze::DefaultToString;
  _DAT_155198c58 = InternalDestroy;
  _DAT_155198c88 = TGetDefaultObjectHelper<TResourceArray<float,0>,1>::Do;
  DAT_155198ca4 = 1;
  _DAT_155198c9c = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<float,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_155198e72 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_155198e50 = StaticGetTypeLayoutDesc<bool>();
  _DAT_155198e58 = DAT_155198c50;
  _DAT_155198e60 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155198e68 = 0x18;
  _DAT_155198e6c = 1;
  _DAT_155198e70 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_155198c3f & 2) == 0) {
    DAT_155198c3f = DAT_155198c3f | 3;
    _DAT_155198c30 = 0x10;
    _DAT_155198be0 = L"(TArray<T, AllocatorType>)";
    _DAT_155198bf8 =
         TStaticGetTypeLayoutHelper<TArray<float,TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage;
    _DAT_155198c00 =
         TStaticGetTypeLayoutHelper<TArray<float,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy;
    _DAT_155198c08 =
         TStaticGetTypeLayoutHelper<TArray<float,TMemoryImageAllocator<0>_>_>::CallAppendHash;
    _DAT_155198c10 =
         TStaticGetTypeLayoutHelper<TArray<float,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_155198c18 =
         TStaticGetTypeLayoutHelper<TArray<float,TMemoryImageAllocator<0>_>_>::CallToString;
    _DAT_155198bf0 =
         TStaticGetTypeLayoutHelper<TArray<float,TMemoryImageAllocator<0>_>_>::CallDestroy;
    DAT_155198c3c = '\0';
    _DAT_155198c38 = 8;
    _DAT_155198c34 = 0x10;
  }
  DAT_155198ca5 = DAT_155198ca5 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<float,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<float,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_155198c50 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_155198c3c != '\0') {
    DAT_155198ca6 = DAT_155198ca6 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_155198ca5 = DAT_155198ca5 + '\x01';
  ::FieldBuffer._16_8_ = DAT_155198c50;
  DAT_155198c50 = ::FieldBuffer;
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
    DAT_155198ca6 = DAT_155198ca6 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<float,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<float,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 145f56520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>::GetTypeLayout
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0> *this)

{
  if ((DAT_155198d0f & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_155198d0f = DAT_155198d0f | 2;
  _DAT_155198d00 = 0x20;
  _DAT_155198d08 = 8;
  _DAT_155198cb0 = L"TResourceArray";
  _DAT_155198cc8 = Freeze::DefaultWriteMemoryImage;
  _DAT_155198cd0 = Freeze::DefaultUnfrozenCopy;
  _DAT_155198cd8 = Freeze::DefaultAppendHash;
  _DAT_155198ce0 = Freeze::DefaultGetTargetAlignment;
  _DAT_155198ce8 = Freeze::DefaultToString;
  _DAT_155198cc0 = InternalDestroy;
  _DAT_155198cf0 =
       TGetDefaultObjectHelper<TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>,1>
       ::Do;
  DAT_155198d0c = 1;
  _DAT_155198d04 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_155198ea2 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_155198e80 = StaticGetTypeLayoutDesc<bool>();
  _DAT_155198e88 = DAT_155198cb8;
  _DAT_155198e90 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155198e98 = 0x18;
  _DAT_155198e9c = 1;
  _DAT_155198ea0 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15519937f & 2) == 0) {
    DAT_15519937f = DAT_15519937f | 3;
    _DAT_155199370 = 0x10;
    _DAT_155199320 = L"(TArray<T, AllocatorType>)";
    _DAT_155199338 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_155199340 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_155199348 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_155199350 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_155199358 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_155199330 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_15519937c = '\0';
    _DAT_155199378 = 8;
    _DAT_155199374 = 0x10;
  }
  DAT_155198d0d = DAT_155198d0d + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_155198cb8 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15519937c != '\0') {
    DAT_155198d0e = DAT_155198d0e + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_155198d0d = DAT_155198d0d + '\x01';
  ::FieldBuffer._16_8_ = DAT_155198cb8;
  DAT_155198cb8 = ::FieldBuffer;
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
    DAT_155198d0e = DAT_155198d0e + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 145f567d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>::GetTypeLayout
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0> *this)

{
  if ((DAT_155198d77 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_155198d77 = DAT_155198d77 | 2;
  _DAT_155198d68 = 0x20;
  _DAT_155198d70 = 8;
  _DAT_155198d18 = L"TResourceArray";
  _DAT_155198d30 = Freeze::DefaultWriteMemoryImage;
  _DAT_155198d38 = Freeze::DefaultUnfrozenCopy;
  _DAT_155198d40 = Freeze::DefaultAppendHash;
  _DAT_155198d48 = Freeze::DefaultGetTargetAlignment;
  _DAT_155198d50 = Freeze::DefaultToString;
  _DAT_155198d28 = InternalDestroy;
  _DAT_155198d58 =
       TGetDefaultObjectHelper<TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>,1>
       ::Do;
  DAT_155198d74 = 1;
  _DAT_155198d6c = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_155198ed2 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_155198eb0 = StaticGetTypeLayoutDesc<bool>();
  _DAT_155198eb8 = DAT_155198d20;
  _DAT_155198ec0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155198ec8 = 0x18;
  _DAT_155198ecc = 1;
  _DAT_155198ed0 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_155199317 & 2) == 0) {
    DAT_155199317 = DAT_155199317 | 3;
    _DAT_155199308 = 0x10;
    _DAT_1551992b8 = L"(TArray<T, AllocatorType>)";
    _DAT_1551992d0 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_1551992d8 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_1551992e0 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_1551992e8 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_1551992f0 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_1551992c8 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_155199314 = '\0';
    _DAT_155199310 = 8;
    _DAT_15519930c = 0x10;
  }
  DAT_155198d75 = DAT_155198d75 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_155198d20 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_155199314 != '\0') {
    DAT_155198d76 = DAT_155198d76 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_155198d75 = DAT_155198d75 + '\x01';
  ::FieldBuffer._16_8_ = DAT_155198d20;
  DAT_155198d20 = ::FieldBuffer;
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
    DAT_155198d76 = DAT_155198d76 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 145f56a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<UE::Math::TVector4<float>,0>::GetTypeLayout
          (TResourceArray<UE::Math::TVector4<float>,0> *this)

{
  if ((DAT_155198e47 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::Math::TVector4<float>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_155198e47 = DAT_155198e47 | 2;
  _DAT_155198e38 = 0x20;
  _DAT_155198e40 = 8;
  _DAT_155198de8 = L"TResourceArray";
  _DAT_155198e00 = Freeze::DefaultWriteMemoryImage;
  _DAT_155198e08 = Freeze::DefaultUnfrozenCopy;
  _DAT_155198e10 = Freeze::DefaultAppendHash;
  _DAT_155198e18 = Freeze::DefaultGetTargetAlignment;
  _DAT_155198e20 = Freeze::DefaultToString;
  _DAT_155198df8 = InternalDestroy;
  _DAT_155198e28 = TGetDefaultObjectHelper<TResourceArray<UE::Math::TVector4<float>,0>,1>::Do;
  DAT_155198e44 = 1;
  _DAT_155198e3c = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<UE::Math::TVector4<float>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_155198f32 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_155198f10 = StaticGetTypeLayoutDesc<bool>();
  _DAT_155198f18 = DAT_155198df0;
  _DAT_155198f20 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155198f28 = 0x18;
  _DAT_155198f2c = 1;
  _DAT_155198f30 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_155199247 & 2) == 0) {
    DAT_155199247 = DAT_155199247 | 3;
    _DAT_155199238 = 0x10;
    _DAT_1551991e8 = L"(TArray<T, AllocatorType>)";
    _DAT_155199200 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_155199208 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_155199210 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_155199218 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_155199220 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_>_>::
         CallToString;
    _DAT_1551991f8 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_>_>::
         CallDestroy;
    DAT_155199244 = '\0';
    _DAT_155199240 = 8;
    _DAT_15519923c = 0x10;
  }
  DAT_155198e45 = DAT_155198e45 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<UE::Math::TVector4<float>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_155198df0 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_155199244 != '\0') {
    DAT_155198e46 = DAT_155198e46 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_155198e45 = DAT_155198e45 + '\x01';
  ::FieldBuffer._16_8_ = DAT_155198df0;
  DAT_155198df0 = ::FieldBuffer;
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
    DAT_155198e46 = DAT_155198e46 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::Math::TVector4<float>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::Math::TVector4<float>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 145f56d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>::GetTypeLayout
          (TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0> *this)

{
  if ((DAT_155198ddf & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_155198ddf = DAT_155198ddf | 2;
  _DAT_155198dd0 = 0x20;
  _DAT_155198dd8 = 8;
  _DAT_155198d80 = L"TResourceArray";
  _DAT_155198d98 = Freeze::DefaultWriteMemoryImage;
  _DAT_155198da0 = Freeze::DefaultUnfrozenCopy;
  _DAT_155198da8 = Freeze::DefaultAppendHash;
  _DAT_155198db0 = Freeze::DefaultGetTargetAlignment;
  _DAT_155198db8 = Freeze::DefaultToString;
  _DAT_155198d90 = InternalDestroy;
  _DAT_155198dc0 =
       TGetDefaultObjectHelper<TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>,1>
       ::Do;
  DAT_155198ddc = 1;
  _DAT_155198dd4 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_155198f02 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_155198ee0 = StaticGetTypeLayoutDesc<bool>();
  _DAT_155198ee8 = DAT_155198d88;
  _DAT_155198ef0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155198ef8 = 0x18;
  _DAT_155198efc = 1;
  _DAT_155198f00 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_1551992af & 2) == 0) {
    DAT_1551992af = DAT_1551992af | 3;
    _DAT_1551992a0 = 0x10;
    _DAT_155199250 = L"(TArray<T, AllocatorType>)";
    _DAT_155199268 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_155199270 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_155199278 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_155199280 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_155199288 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_155199260 =
         TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    DAT_1551992ac = '\0';
    _DAT_1551992a8 = 8;
    _DAT_1551992a4 = 0x10;
  }
  DAT_155198ddd = DAT_155198ddd + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_155198d88 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_1551992ac != '\0') {
    DAT_155198dde = DAT_155198dde + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_155198ddd = DAT_155198ddd + '\x01';
  ::FieldBuffer._16_8_ = DAT_155198d88;
  DAT_155198d88 = ::FieldBuffer;
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
    DAT_155198dde = DAT_155198dde + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 145f58a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<float,0>::InternalDestroy
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

// InternalDestroy @ 145f58ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>::InternalDestroy
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

// InternalDestroy @ 145f58ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>::InternalDestroy
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

// InternalDestroy @ 145f58b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<UE::Math::TVector4<float>,0>::InternalDestroy
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

// InternalDestroy @ 145f58b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>::InternalDestroy
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

// IsStatic @ 145f58fb0

bool __thiscall TResourceArray<float,0>::IsStatic(TResourceArray<float,0> *this)

{
  return false;
}

// IsStatic @ 145f58fc0

bool __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>::IsStatic
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0> *this)

{
  return false;
}

// IsStatic @ 145f58fd0

bool __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>::IsStatic
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0> *this)

{
  return false;
}

// IsStatic @ 145f58fe0

bool __thiscall
TResourceArray<UE::Math::TVector4<float>,0>::IsStatic
          (TResourceArray<UE::Math::TVector4<float>,0> *this)

{
  return false;
}

// IsStatic @ 145f58ff0

bool __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>::IsStatic
          (TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0> *this)

{
  return false;
}

// SetAllowCPUAccess @ 145f5dc50

void __thiscall
TResourceArray<float,0>::SetAllowCPUAccess(TResourceArray<float,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 145f5dc60

void __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0>::SetAllowCPUAccess
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,0> *this,
          bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 145f5dc70

void __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0>::SetAllowCPUAccess
          (TResourceArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,0> *this,
          bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 145f5dc80

void __thiscall
TResourceArray<UE::Math::TVector4<float>,0>::SetAllowCPUAccess
          (TResourceArray<UE::Math::TVector4<float>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 145f5dc90

void __thiscall
TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0>::SetAllowCPUAccess
          (TResourceArray<FStaticMeshInstanceData::FInstanceLightMapVector,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// TResourceArray<float,0> @ 145f76950

TResourceArray<float,0> * __thiscall
TResourceArray<float,0>::TResourceArray<float,0>
          (TResourceArray<float,0> *this,TResourceArray<float,0> *param_1)

{
  this->_padding_ = (longlong)&___7FResourceArrayInterface__6B_;
  this->_padding_ = 0;
  FMemoryImageAllocatorBase::MoveToEmpty
            ((FMemoryImageAllocatorBase *)&this->_padding_,
             (FMemoryImageAllocatorBase *)&param_1->_padding_);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TResourceArray_M_0A___6B_;
  this->bNeedsCPUAccess = param_1->bNeedsCPUAccess;
  return this;
}

// ~TResourceArray<unsigned_char,0> @ 145f7bed0

void __thiscall
TResourceArray<unsigned_char,0>::~TResourceArray<unsigned_char,0>
          (TResourceArray<unsigned_char,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// ~TResourceArray<unsigned_short,0> @ 145f7bf00

void __thiscall
TResourceArray<unsigned_short,0>::~TResourceArray<unsigned_short,0>
          (TResourceArray<unsigned_short,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// Discard @ 145f8a9f0

void __thiscall TResourceArray<unsigned_char,0>::Discard(TResourceArray<unsigned_char,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// Discard @ 145f8aa40

void __thiscall TResourceArray<unsigned_short,0>::Discard(TResourceArray<unsigned_short,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (2,2,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// GetAllowCPUAccess @ 145f8e360

bool __thiscall
TResourceArray<unsigned_char,0>::GetAllowCPUAccess(TResourceArray<unsigned_char,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetAllowCPUAccess @ 145f8e370

bool __thiscall
TResourceArray<unsigned_short,0>::GetAllowCPUAccess(TResourceArray<unsigned_short,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetResourceData @ 145f93bb0

void * __thiscall
TResourceArray<unsigned_char,0>::GetResourceData(TResourceArray<unsigned_char,0> *this)

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

// GetResourceData @ 145f93c10

void * __thiscall
TResourceArray<unsigned_short,0>::GetResourceData(TResourceArray<unsigned_short,0> *this)

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

// GetResourceDataSize @ 145f93cb0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<unsigned_char,0>::GetResourceDataSize(TResourceArray<unsigned_char,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0xffffffff < (ulonglong)(longlong)(int)uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<unsigned_char,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1;
}

// GetResourceDataSize @ 145f93cf0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<unsigned_short,0>::GetResourceDataSize(TResourceArray<unsigned_short,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0x7fffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<unsigned_short,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 * 2;
}

// GetTypeLayout @ 145f95b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<unsigned_char,0>::GetTypeLayout(TResourceArray<unsigned_char,0> *this)

{
  if ((DAT_15519a317 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<unsigned_char,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15519a317 = DAT_15519a317 | 2;
  _DAT_15519a308 = 0x20;
  _DAT_15519a310 = 8;
  _DAT_15519a2b8 = L"TResourceArray";
  _DAT_15519a2d0 = Freeze::DefaultWriteMemoryImage;
  _DAT_15519a2d8 = Freeze::DefaultUnfrozenCopy;
  _DAT_15519a2e0 = Freeze::DefaultAppendHash;
  _DAT_15519a2e8 = Freeze::DefaultGetTargetAlignment;
  _DAT_15519a2f0 = Freeze::DefaultToString;
  _DAT_15519a2c8 = InternalDestroy;
  _DAT_15519a2f8 = TGetDefaultObjectHelper<TResourceArray<unsigned_char,0>,1>::Do;
  DAT_15519a314 = 1;
  _DAT_15519a30c = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<unsigned_char,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15519a342 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15519a320 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15519a328 = DAT_15519a2c0;
  _DAT_15519a330 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15519a338 = 0x18;
  _DAT_15519a33c = 1;
  _DAT_15519a340 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15519a2af & 2) == 0) {
    DAT_15519a2af = DAT_15519a2af | 3;
    _DAT_15519a2a0 = 0x10;
    _DAT_15519a250 = L"(TArray<T, AllocatorType>)";
    _DAT_15519a268 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_15519a270 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_15519a278 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_15519a280 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_15519a288 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<0>_>_>::CallToString;
    _DAT_15519a260 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<0>_>_>::CallDestroy;
    DAT_15519a2ac = '\0';
    _DAT_15519a2a8 = 8;
    _DAT_15519a2a4 = 0x10;
  }
  DAT_15519a315 = DAT_15519a315 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<unsigned_char,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15519a2c0 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15519a2ac != '\0') {
    DAT_15519a316 = DAT_15519a316 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15519a315 = DAT_15519a315 + '\x01';
  ::FieldBuffer._16_8_ = DAT_15519a2c0;
  DAT_15519a2c0 = ::FieldBuffer;
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
    DAT_15519a316 = DAT_15519a316 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<unsigned_char,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<unsigned_char,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// GetTypeLayout @ 145f95e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<unsigned_short,0>::GetTypeLayout(TResourceArray<unsigned_short,0> *this)

{
  if ((DAT_15519b347 & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<unsigned_short,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15519b347 = DAT_15519b347 | 2;
  _DAT_15519b338 = 0x20;
  _DAT_15519b340 = 8;
  _DAT_15519b2e8 = L"TResourceArray";
  _DAT_15519b300 = Freeze::DefaultWriteMemoryImage;
  _DAT_15519b308 = Freeze::DefaultUnfrozenCopy;
  _DAT_15519b310 = Freeze::DefaultAppendHash;
  _DAT_15519b318 = Freeze::DefaultGetTargetAlignment;
  _DAT_15519b320 = Freeze::DefaultToString;
  _DAT_15519b2f8 = InternalDestroy;
  _DAT_15519b328 = TGetDefaultObjectHelper<TResourceArray<unsigned_short,0>,1>::Do;
  DAT_15519b344 = 1;
  _DAT_15519b33c = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<unsigned_short,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15519b432 = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15519b410 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15519b418 = DAT_15519b2f0;
  _DAT_15519b420 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15519b428 = 0x18;
  _DAT_15519b42c = 1;
  _DAT_15519b430 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15519b597 & 2) == 0) {
    DAT_15519b597 = DAT_15519b597 | 3;
    _DAT_15519b588 = 0x10;
    _DAT_15519b538 = L"(TArray<T, AllocatorType>)";
    _DAT_15519b550 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_short,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_15519b558 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_short,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_15519b560 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_short,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_15519b568 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_short,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_15519b570 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_short,TMemoryImageAllocator<0>_>_>::CallToString
    ;
    _DAT_15519b548 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_short,TMemoryImageAllocator<0>_>_>::CallDestroy;
    DAT_15519b594 = '\0';
    _DAT_15519b590 = 8;
    _DAT_15519b58c = 0x10;
  }
  DAT_15519b345 = DAT_15519b345 + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<unsigned_short,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<unsigned_short,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15519b2f0 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15519b594 != '\0') {
    DAT_15519b346 = DAT_15519b346 + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15519b345 = DAT_15519b345 + '\x01';
  ::FieldBuffer._16_8_ = DAT_15519b2f0;
  DAT_15519b2f0 = ::FieldBuffer;
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
    DAT_15519b346 = DAT_15519b346 + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<unsigned_short,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<unsigned_short,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 145f97ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<unsigned_char,0>::InternalDestroy
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

// InternalDestroy @ 145f97bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<unsigned_short,0>::InternalDestroy
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

// IsStatic @ 145f98030

bool __thiscall TResourceArray<unsigned_char,0>::IsStatic(TResourceArray<unsigned_char,0> *this)

{
  return false;
}

// IsStatic @ 145f98040

bool __thiscall TResourceArray<unsigned_short,0>::IsStatic(TResourceArray<unsigned_short,0> *this)

{
  return false;
}

// SetAllowCPUAccess @ 145fa1d20

void __thiscall
TResourceArray<unsigned_char,0>::SetAllowCPUAccess
          (TResourceArray<unsigned_char,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

// SetAllowCPUAccess @ 145fa1d30

void __thiscall
TResourceArray<unsigned_short,0>::SetAllowCPUAccess
          (TResourceArray<unsigned_short,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

