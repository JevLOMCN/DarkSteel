// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 12

// TResourceArray<unsigned_int,0> @ 148e53e50

TResourceArray<unsigned_int,0> * __thiscall
TResourceArray<unsigned_int,0>::TResourceArray<unsigned_int,0>
          (TResourceArray<unsigned_int,0> *this,TResourceArray<unsigned_int,0> *param_1)

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
  this->_padding_ = (longlong)&___7__TResourceArray_I_0A___6B_;
  this->bNeedsCPUAccess = param_1->bNeedsCPUAccess;
  return this;
}

// operator= @ 148e56d70

TResourceArray<unsigned_int,0> * __thiscall
TResourceArray<unsigned_int,0>::operator=
          (TResourceArray<unsigned_int,0> *this,TResourceArray<unsigned_int,0> *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *_Dst;
  void *_Src;
  
  plVar1 = &this->_padding_;
  plVar2 = &param_1->_padding_;
  if (plVar1 != plVar2) {
    iVar4 = *(int *)((longlong)&this->_padding_ + 4);
    piVar3 = (int *)((longlong)&this->_padding_ + 4);
    _Src = (void *)*plVar2;
    iVar5 = (int)param_1->_padding_;
    if (((ulonglong)_Src & 1) != 0) {
      _Src = (void *)((longlong)plVar2 + ((longlong)_Src >> 0x18));
    }
    *(int *)&this->_padding_ = iVar5;
    if ((iVar5 == 0) && (iVar4 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,iVar5,iVar4,(ForAnyElementType *)plVar1,iVar5,piVar3);
      _Dst = (void *)*plVar1;
      if (((ulonglong)_Dst & 1) != 0) {
        _Dst = (void *)((longlong)plVar1 + ((longlong)_Dst >> 0x18));
      }
      if (iVar5 != 0) {
        memcpy(_Dst,_Src,(longlong)iVar5 << 2);
      }
    }
  }
  this->bNeedsCPUAccess = param_1->bNeedsCPUAccess;
  return this;
}

// TResourceArray<unsigned_char,0> @ 148ea2af0

TResourceArray<unsigned_char,0> * __thiscall
TResourceArray<unsigned_char,0>::TResourceArray<unsigned_char,0>
          (TResourceArray<unsigned_char,0> *this,TResourceArray<unsigned_char,0> *param_1)

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
  this->_padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
  this->bNeedsCPUAccess = param_1->bNeedsCPUAccess;
  return this;
}

// ~TResourceArray<UE::Math::TIntVector4<int>,0> @ 148f81840

void __thiscall
TResourceArray<UE::Math::TIntVector4<int>,0>::~TResourceArray<UE::Math::TIntVector4<int>,0>
          (TResourceArray<UE::Math::TIntVector4<int>,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// Discard @ 148fa8d60

void __thiscall
TResourceArray<UE::Math::TIntVector4<int>,0>::Discard
          (TResourceArray<UE::Math::TIntVector4<int>,0> *this)

{
  int *piVar1;
  
  if ((this->bNeedsCPUAccess == false) && (!PRIVATE_GIsRunningCommandlet)) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// GetAllowCPUAccess @ 148fb1260

bool __thiscall
TResourceArray<UE::Math::TIntVector4<int>,0>::GetAllowCPUAccess
          (TResourceArray<UE::Math::TIntVector4<int>,0> *this)

{
  return this->bNeedsCPUAccess;
}

// GetResourceData @ 148fb6f00

void * __thiscall
TResourceArray<UE::Math::TIntVector4<int>,0>::GetResourceData
          (TResourceArray<UE::Math::TIntVector4<int>,0> *this)

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

// GetResourceDataSize @ 148fb6f60

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TResourceArray<UE::Math::TIntVector4<int>,0>::GetResourceDataSize
          (TResourceArray<UE::Math::TIntVector4<int>,0> *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->_padding_;
  if (0xfffffff < uVar1) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual_unsigned_int___cdecl_TResourceArray<UE::Math::TIntVector4<int>,0>::GetResourceDataSize(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    return 0;
  }
  return uVar1 << 4;
}

// GetTypeLayout @ 148fba600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TResourceArray<UE::Math::TIntVector4<int>,0>::GetTypeLayout
          (TResourceArray<UE::Math::TIntVector4<int>,0> *this)

{
  if ((DAT_15526fabf & 2) != 0) {
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::Math::TIntVector4<int>,0>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  DAT_15526fabf = DAT_15526fabf | 2;
  _DAT_15526fab0 = 0x20;
  _DAT_15526fab8 = 8;
  _DAT_15526fa60 = L"TResourceArray";
  _DAT_15526fa78 = Freeze::DefaultWriteMemoryImage;
  _DAT_15526fa80 = Freeze::DefaultUnfrozenCopy;
  _DAT_15526fa88 = Freeze::DefaultAppendHash;
  _DAT_15526fa90 = Freeze::DefaultGetTargetAlignment;
  _DAT_15526fa98 = Freeze::DefaultToString;
  _DAT_15526fa70 = InternalDestroy;
  _DAT_15526faa0 = TGetDefaultObjectHelper<TResourceArray<UE::Math::TIntVector4<int>,0>,1>::Do;
  DAT_15526fabc = 1;
  _DAT_15526fab4 = 0xffffffff;
  `public:_static_void___cdecl_TResourceArray<UE::Math::TIntVector4<int>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsCPUAccess";
  DAT_15526fc3a = Freeze::FindFieldNameLength(L"bNeedsCPUAccess");
  _DAT_15526fc18 = StaticGetTypeLayoutDesc<bool>();
  _DAT_15526fc20 = DAT_15526fa68;
  _DAT_15526fc28 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15526fc30 = 0x18;
  _DAT_15526fc34 = 1;
  _DAT_15526fc38 = 0;
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  if ((DAT_15526fdbf & 2) == 0) {
    DAT_15526fdbf = DAT_15526fdbf | 3;
    _DAT_15526fdb0 = 0x10;
    _DAT_15526fd60 = L"(TArray<T, AllocatorType>)";
    _DAT_15526fd78 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector4<int>,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_15526fd80 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector4<int>,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_15526fd88 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector4<int>,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_15526fd90 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector4<int>,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_15526fd98 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector4<int>,TMemoryImageAllocator<0>_>_>::
         CallToString;
    _DAT_15526fd70 =
         TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector4<int>,TMemoryImageAllocator<0>_>_>::
         CallDestroy;
    DAT_15526fdbc = '\0';
    _DAT_15526fdb8 = 8;
    _DAT_15526fdb4 = 0x10;
  }
  DAT_15526fabd = DAT_15526fabd + '\x01';
  ::FieldBuffer._8_8_ =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector4<int>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  ::FieldBuffer._16_8_ =
       &`public:_static_void___cdecl_TResourceArray<UE::Math::TIntVector4<int>,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  DAT_15526fa68 = ::FieldBuffer;
  ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
  ::FieldBuffer[0x20] = '\b';
  ::FieldBuffer[0x21] = '\0';
  ::FieldBuffer[0x22] = '\0';
  ::FieldBuffer[0x23] = '\0';
  ::FieldBuffer[0x24] = '\x01';
  ::FieldBuffer[0x25] = '\0';
  ::FieldBuffer[0x26] = '\0';
  ::FieldBuffer[0x27] = '\0';
  if (DAT_15526fdbc != '\0') {
    DAT_15526fabe = DAT_15526fabe + '\x01';
  }
  ::FieldBuffer._0_8_ = u_BASE;
  ::FieldBuffer[0x2a] = '\x04';
  ::FieldBuffer._8_8_ = FResourceArrayInterface::StaticGetTypeLayout();
  DAT_15526fabd = DAT_15526fabd + '\x01';
  ::FieldBuffer._16_8_ = DAT_15526fa68;
  DAT_15526fa68 = ::FieldBuffer;
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
    DAT_15526fabe = DAT_15526fabe + '\x01';
  }
  FTypeLayoutDesc::Initialize
            ((FTypeLayoutDesc *)
             &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::Math::TIntVector4<int>,0>::StaticGetTypeLayout(void)'
              ::__l2::TypeBuffer);
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TResourceArray<UE::Math::TIntVector4<int>,0>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 148fc4f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TResourceArray<UE::Math::TIntVector4<int>,0>::InternalDestroy
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

// IsStatic @ 148fc5e00

bool __thiscall
TResourceArray<UE::Math::TIntVector4<int>,0>::IsStatic
          (TResourceArray<UE::Math::TIntVector4<int>,0> *this)

{
  return false;
}

// SetAllowCPUAccess @ 148fcba20

void __thiscall
TResourceArray<UE::Math::TIntVector4<int>,0>::SetAllowCPUAccess
          (TResourceArray<UE::Math::TIntVector4<int>,0> *this,bool param_1)

{
  this->bNeedsCPUAccess = param_1;
  return;
}

