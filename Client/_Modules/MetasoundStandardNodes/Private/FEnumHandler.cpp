// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 57

// GetNamespace @ 14afcc980

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l3::
FEnumHandler::GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EBandSplitterFilterOrder>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EBandSplitterFilterOrder>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EBandSplitterFilterOrder>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EBandSplitterFilterOrder>::GetNamespace(void)'
                      ::__l2::ThisName,L"EBandSplitterFilterOrder");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EBandSplitterFilterOrder>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EBandSplitterFilterOrder>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14afcca00

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l3::
FEnumHandler::GetDefaultValue(void *this)

{
  return 1;
}

// GetAllEntries @ 14afcca10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l3::
FEnumHandler::GetAllEntries(void *this)

{
  EBandSplitterFilterOrder *pEVar1;
  uint uVar2;
  int iVar3;
  TArrayView<Metasound::TEnumEntry<Metasound::EBandSplitterFilterOrder>_const_,int> *pTVar4;
  TEnumEntry<Metasound::EBandSplitterFilterOrder> *pTVar5;
  bool bVar6;
  TArrayView<Metasound::TEnumEntry<Metasound::EBandSplitterFilterOrder>_const_,int> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _IntEntries = 0;
    _DAT_1552e2530 = 0;
    pTVar4 = Metasound::TEnumStringHelper<enum_Metasound::EBandSplitterFilterOrder>::GetAllEntries
                       (&local_18);
    uVar2 = pTVar4->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (DAT_1552e2534 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                  ::__l2::IntEntries,DAT_1552e2530,&DAT_1552e2534);
    }
    Metasound::TEnumStringHelper<enum_Metasound::EBandSplitterFilterOrder>::GetAllEntries(&local_18)
    ;
    for (pTVar5 = local_18.DataPtr; pTVar5 != local_18.DataPtr + local_18.ArrayNum;
        pTVar5 = pTVar5 + 1) {
      DAT_1552e2534 = (int)((ulonglong)_DAT_1552e2530 >> 0x20);
      bVar6 = DAT_1552e2530 == DAT_1552e2534;
      iVar3 = DAT_1552e2530;
      if (bVar6) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)
                                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                                  ::__l2::IntEntries,&DAT_1552e2534);
      }
      _DAT_1552e2530 = CONCAT44(DAT_1552e2534,iVar3 + 1);
      pEVar1 = (EBandSplitterFilterOrder *)(_IntEntries + (longlong)iVar3 * 0xc);
      *pEVar1 = pTVar5->Value;
      *(FName *)(pEVar1 + 1) = pTVar5->Name;
    }
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'
           ::__l3::FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__)
    ;
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14afd31f0

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>'::__l3::FEnumHandler
::GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EBiquadFilter::Type>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EBiquadFilter::Type>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EBiquadFilter::Type>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EBiquadFilter::Type>::GetNamespace(void)'
                      ::__l2::ThisName,L"Audio::EBiquadFilter::Type");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EBiquadFilter::Type>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EBiquadFilter::Type>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14afd3270

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>'::__l3::FEnumHandler
::GetDefaultValue(void *this)

{
  return 0;
}

// GetAllEntries @ 14afd3290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>'::__l3::FEnumHandler
::GetAllEntries(void *this)

{
  Type *pTVar1;
  uint uVar2;
  int iVar3;
  TArrayView<Metasound::TEnumEntry<Audio::EBiquadFilter::Type>_const_,int> *pTVar4;
  TEnumEntry<Audio::EBiquadFilter::Type> *pTVar5;
  bool bVar6;
  TArrayView<Metasound::TEnumEntry<Audio::EBiquadFilter::Type>_const_,int> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _IntEntries = 0;
    _DAT_1552e36f0 = 0;
    pTVar4 = Metasound::TEnumStringHelper<enum_Audio::EBiquadFilter::Type>::GetAllEntries(&local_18)
    ;
    uVar2 = pTVar4->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (DAT_1552e36f4 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                  ::__l2::IntEntries,DAT_1552e36f0,&DAT_1552e36f4);
    }
    Metasound::TEnumStringHelper<enum_Audio::EBiquadFilter::Type>::GetAllEntries(&local_18);
    for (pTVar5 = local_18.DataPtr; pTVar5 != local_18.DataPtr + local_18.ArrayNum;
        pTVar5 = pTVar5 + 1) {
      DAT_1552e36f4 = (int)((ulonglong)_DAT_1552e36f0 >> 0x20);
      bVar6 = DAT_1552e36f0 == DAT_1552e36f4;
      iVar3 = DAT_1552e36f0;
      if (bVar6) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)
                                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                                  ::__l2::IntEntries,&DAT_1552e36f4);
      }
      _DAT_1552e36f0 = CONCAT44(DAT_1552e36f4,iVar3 + 1);
      pTVar1 = (Type *)(_IntEntries + (longlong)iVar3 * 0xc);
      *pTVar1 = pTVar5->Value;
      *(FName *)(pTVar1 + 1) = pTVar5->Name;
    }
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>'::__l3::
           FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b0390e0

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l3::FEnumHandler::
GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EDynamicFilterType>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EDynamicFilterType>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EDynamicFilterType>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EDynamicFilterType>::GetNamespace(void)'
                      ::__l2::ThisName,L"Audio::EDynamicFilterType");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EDynamicFilterType>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EDynamicFilterType>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b039160

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l3::FEnumHandler::
GetDefaultValue(void *this)

{
  return 0;
}

// GetAllEntries @ 14b039170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l3::FEnumHandler::
GetAllEntries(void *this)

{
  EDynamicFilterType *pEVar1;
  uint uVar2;
  int iVar3;
  TArrayView<Metasound::TEnumEntry<Audio::EDynamicFilterType>_const_,int> *pTVar4;
  TEnumEntry<Audio::EDynamicFilterType> *pTVar5;
  bool bVar6;
  TArrayView<Metasound::TEnumEntry<Audio::EDynamicFilterType>_const_,int> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _IntEntries = 0;
    _DAT_1552e6f30 = 0;
    pTVar4 = Metasound::TEnumStringHelper<enum_Audio::EDynamicFilterType>::GetAllEntries(&local_18);
    uVar2 = pTVar4->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (DAT_1552e6f34 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                  ::__l2::IntEntries,DAT_1552e6f30,&DAT_1552e6f34);
    }
    Metasound::TEnumStringHelper<enum_Audio::EDynamicFilterType>::GetAllEntries(&local_18);
    for (pTVar5 = local_18.DataPtr; pTVar5 != local_18.DataPtr + local_18.ArrayNum;
        pTVar5 = pTVar5 + 1) {
      DAT_1552e6f34 = (int)((ulonglong)_DAT_1552e6f30 >> 0x20);
      bVar6 = DAT_1552e6f30 == DAT_1552e6f34;
      iVar3 = DAT_1552e6f30;
      if (bVar6) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)
                                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                                  ::__l2::IntEntries,&DAT_1552e6f34);
      }
      _DAT_1552e6f30 = CONCAT44(DAT_1552e6f34,iVar3 + 1);
      pEVar1 = (EDynamicFilterType *)(_IntEntries + (longlong)iVar3 * 0xc);
      *pEVar1 = pTVar5->Value;
      *(FName *)(pEVar1 + 1) = pTVar5->Name;
    }
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l3::
           FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b07d370

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>'::__l3::FEnumHandler::
GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::Grain::EEnvelope>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::Grain::EEnvelope>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::Grain::EEnvelope>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::Grain::EEnvelope>::GetNamespace(void)'
                      ::__l2::ThisName,L"Audio::Grain::EEnvelope");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::Grain::EEnvelope>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::Grain::EEnvelope>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b07d3f0

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>'::__l3::FEnumHandler::
GetDefaultValue(void *this)

{
  return 0;
}

// GetAllEntries @ 14b07d460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>'::__l3::FEnumHandler::
GetAllEntries(void *this)

{
  EEnvelope *pEVar1;
  uint uVar2;
  int iVar3;
  TArrayView<Metasound::TEnumEntry<Audio::Grain::EEnvelope>_const_,int> *pTVar4;
  TEnumEntry<Audio::Grain::EEnvelope> *pTVar5;
  bool bVar6;
  TArrayView<Metasound::TEnumEntry<Audio::Grain::EEnvelope>_const_,int> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _IntEntries = 0;
    _DAT_1552e96f0 = 0;
    pTVar4 = Metasound::TEnumStringHelper<enum_Audio::Grain::EEnvelope>::GetAllEntries(&local_18);
    uVar2 = pTVar4->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (DAT_1552e96f4 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                  ::__l2::IntEntries,DAT_1552e96f0,&DAT_1552e96f4);
    }
    Metasound::TEnumStringHelper<enum_Audio::Grain::EEnvelope>::GetAllEntries(&local_18);
    for (pTVar5 = local_18.DataPtr; pTVar5 != local_18.DataPtr + local_18.ArrayNum;
        pTVar5 = pTVar5 + 1) {
      DAT_1552e96f4 = (int)((ulonglong)_DAT_1552e96f0 >> 0x20);
      bVar6 = DAT_1552e96f0 == DAT_1552e96f4;
      iVar3 = DAT_1552e96f0;
      if (bVar6) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)
                                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                                  ::__l2::IntEntries,&DAT_1552e96f4);
      }
      _DAT_1552e96f0 = CONCAT44(DAT_1552e96f4,iVar3 + 1);
      pEVar1 = (EEnvelope *)(_IntEntries + (longlong)iVar3 * 0xc);
      *pEVar1 = pTVar5->Value;
      *(FName *)(pEVar1 + 1) = pTVar5->Name;
    }
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>'::__l3::
           FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b088550

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>'::__l3::FEnumHandler::
GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EKneeMode>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EKneeMode>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EKneeMode>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EKneeMode>::GetNamespace(void)'
                      ::__l2::ThisName,L"EKneeMode");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EKneeMode>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EKneeMode>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b0885d0

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>'::__l3::FEnumHandler::
GetDefaultValue(void *this)

{
  return 0;
}

// GetAllEntries @ 14b0885e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>'::__l3::FEnumHandler::
GetAllEntries(void *this)

{
  FName *pFVar1;
  EKneeMode *pEVar2;
  longlong lVar3;
  int *piVar4;
  TEnumEntry<Metasound::EKneeMode> *pTVar5;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar4 < `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    DAT_1552eb798 = 0;
    _IntEntries = 0;
    DAT_1552eb79c = 0;
    if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Entries[0].Value = Hard;
      ::FName::FName(&::Entries[0].Name,L"EKneeMode::Hard");
      ::Entries[1].Value = Soft;
      ::FName::FName(&::Entries[1].Name,L"EKneeMode::Soft");
      _Init_thread_footer(&::_TSS0);
    }
    if (DAT_1552eb79c < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,2,(ForAnyElementType *)
                         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                          ::__l2::IntEntries,DAT_1552eb798,&DAT_1552eb79c);
    }
    if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Entries[0].Value = Hard;
      ::FName::FName(&::Entries[0].Name,L"EKneeMode::Hard");
      ::Entries[1].Value = Soft;
      ::FName::FName(&::Entries[1].Name,L"EKneeMode::Soft");
      _Init_thread_footer(&::_TSS0);
    }
    pTVar5 = ::Entries;
    do {
      if (DAT_1552eb798 == DAT_1552eb79c) {
        DAT_1552eb798 =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,(ForAnyElementType *)
                              &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                               ::__l2::IntEntries,&DAT_1552eb79c);
      }
      lVar3 = (longlong)DAT_1552eb798;
      DAT_1552eb798 = DAT_1552eb798 + 1;
      pEVar2 = (EKneeMode *)(_IntEntries + lVar3 * 0xc);
      *pEVar2 = pTVar5->Value;
      pFVar1 = &pTVar5->Name;
      pTVar5 = pTVar5 + 1;
      *(FName *)(pEVar2 + 1) = *pFVar1;
    } while (pTVar5 != (TEnumEntry<Metasound::EKneeMode> *)&::_TSS0);
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>'::__l3::
           FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b08a5a0

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>'::__l3::
FEnumHandler::GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EEnvelopePeakMode>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EEnvelopePeakMode>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EEnvelopePeakMode>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EEnvelopePeakMode>::GetNamespace(void)'
                      ::__l2::ThisName,L"EEnvelopePeakMode");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EEnvelopePeakMode>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EEnvelopePeakMode>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b08a620

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>'::__l3::
FEnumHandler::GetDefaultValue(void *this)

{
  return 0;
}

// GetAllEntries @ 14b08a630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>'::__l3::
FEnumHandler::GetAllEntries(void *this)

{
  EEnvelopePeakMode *pEVar1;
  uint uVar2;
  int iVar3;
  TArrayView<Metasound::TEnumEntry<Metasound::EEnvelopePeakMode>_const_,int> *pTVar4;
  TEnumEntry<Metasound::EEnvelopePeakMode> *pTVar5;
  bool bVar6;
  TArrayView<Metasound::TEnumEntry<Metasound::EEnvelopePeakMode>_const_,int> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _IntEntries = 0;
    _DAT_1552ec8f0 = 0;
    pTVar4 = Metasound::TEnumStringHelper<enum_Metasound::EEnvelopePeakMode>::GetAllEntries
                       (&local_18);
    uVar2 = pTVar4->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (DAT_1552ec8f4 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                  ::__l2::IntEntries,DAT_1552ec8f0,&DAT_1552ec8f4);
    }
    Metasound::TEnumStringHelper<enum_Metasound::EEnvelopePeakMode>::GetAllEntries(&local_18);
    for (pTVar5 = local_18.DataPtr; pTVar5 != local_18.DataPtr + local_18.ArrayNum;
        pTVar5 = pTVar5 + 1) {
      DAT_1552ec8f4 = (int)((ulonglong)_DAT_1552ec8f0 >> 0x20);
      bVar6 = DAT_1552ec8f0 == DAT_1552ec8f4;
      iVar3 = DAT_1552ec8f0;
      if (bVar6) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)
                                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                                  ::__l2::IntEntries,&DAT_1552ec8f4);
      }
      _DAT_1552ec8f0 = CONCAT44(DAT_1552ec8f4,iVar3 + 1);
      pEVar1 = (EEnvelopePeakMode *)(_IntEntries + (longlong)iVar3 * 0xc);
      *pEVar1 = pTVar5->Value;
      *(FName *)(pEVar1 + 1) = pTVar5->Name;
    }
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>'::__l3::
           FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b094950

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>'::__l3::
FEnumHandler::GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ELowFrequencyNoiseInterpType>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ELowFrequencyNoiseInterpType>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ELowFrequencyNoiseInterpType>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ELowFrequencyNoiseInterpType>::GetNamespace(void)'
                      ::__l2::ThisName,L"ELowFrequencyNoiseInterpType");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ELowFrequencyNoiseInterpType>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ELowFrequencyNoiseInterpType>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b0949d0

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>'::__l3::
FEnumHandler::GetDefaultValue(void *this)

{
  return 2;
}

// GetAllEntries @ 14b0949e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>'::__l3::
FEnumHandler::GetAllEntries(void *this)

{
  ELowFrequencyNoiseInterpType *pEVar1;
  uint uVar2;
  int iVar3;
  TArrayView<Metasound::TEnumEntry<Metasound::ELowFrequencyNoiseInterpType>_const_,int> *pTVar4;
  TEnumEntry<Metasound::ELowFrequencyNoiseInterpType> *pTVar5;
  bool bVar6;
  TArrayView<Metasound::TEnumEntry<Metasound::ELowFrequencyNoiseInterpType>_const_,int> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _IntEntries = 0;
    _DAT_1552edf38 = 0;
    pTVar4 = Metasound::TEnumStringHelper<enum_Metasound::ELowFrequencyNoiseInterpType>::
             GetAllEntries(&local_18);
    uVar2 = pTVar4->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (DAT_1552edf3c < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                  ::__l2::IntEntries,DAT_1552edf38,&DAT_1552edf3c);
    }
    Metasound::TEnumStringHelper<enum_Metasound::ELowFrequencyNoiseInterpType>::GetAllEntries
              (&local_18);
    for (pTVar5 = local_18.DataPtr; pTVar5 != local_18.DataPtr + local_18.ArrayNum;
        pTVar5 = pTVar5 + 1) {
      DAT_1552edf3c = (int)((ulonglong)_DAT_1552edf38 >> 0x20);
      bVar6 = DAT_1552edf38 == DAT_1552edf3c;
      iVar3 = DAT_1552edf38;
      if (bVar6) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)
                                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                                  ::__l2::IntEntries,&DAT_1552edf3c);
      }
      _DAT_1552edf38 = CONCAT44(DAT_1552edf3c,iVar3 + 1);
      pEVar1 = (ELowFrequencyNoiseInterpType *)(_IntEntries + (longlong)iVar3 * 0xc);
      *pEVar1 = pTVar5->Value;
      *(FName *)(pEVar1 + 1) = pTVar5->Name;
    }
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>'
           ::__l3::FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__)
    ;
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b0eebf0

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>'::__l3::
FEnumHandler::GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESineGenerationType>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESineGenerationType>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESineGenerationType>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESineGenerationType>::GetNamespace(void)'
                      ::__l2::ThisName,L"ESineGenerationType");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESineGenerationType>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESineGenerationType>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b0eec70

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>'::__l3::
FEnumHandler::GetDefaultValue(void *this)

{
  return 3;
}

// GetAllEntries @ 14b0eec80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>'::__l3::
FEnumHandler::GetAllEntries(void *this)

{
  ESineGenerationType *pEVar1;
  uint uVar2;
  int iVar3;
  TArrayView<Metasound::TEnumEntry<Metasound::ESineGenerationType>_const_,int> *pTVar4;
  TEnumEntry<Metasound::ESineGenerationType> *pTVar5;
  bool bVar6;
  TArrayView<Metasound::TEnumEntry<Metasound::ESineGenerationType>_const_,int> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _IntEntries = 0;
    _DAT_1552f0350 = 0;
    pTVar4 = Metasound::TEnumStringHelper<enum_Metasound::ESineGenerationType>::GetAllEntries
                       (&local_18);
    uVar2 = pTVar4->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (DAT_1552f0354 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                  ::__l2::IntEntries,DAT_1552f0350,&DAT_1552f0354);
    }
    Metasound::TEnumStringHelper<enum_Metasound::ESineGenerationType>::GetAllEntries(&local_18);
    for (pTVar5 = local_18.DataPtr; pTVar5 != local_18.DataPtr + local_18.ArrayNum;
        pTVar5 = pTVar5 + 1) {
      DAT_1552f0354 = (int)((ulonglong)_DAT_1552f0350 >> 0x20);
      bVar6 = DAT_1552f0350 == DAT_1552f0354;
      iVar3 = DAT_1552f0350;
      if (bVar6) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)
                                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                                  ::__l2::IntEntries,&DAT_1552f0354);
      }
      _DAT_1552f0350 = CONCAT44(DAT_1552f0354,iVar3 + 1);
      pEVar1 = (ESineGenerationType *)(_IntEntries + (longlong)iVar3 * 0xc);
      *pEVar1 = pTVar5->Value;
      *(FName *)(pEVar1 + 1) = pTVar5->Name;
    }
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>'::__l3
           ::FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b0efc80

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>'::__l3::
FEnumHandler::GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ETriangleGenerationType>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ETriangleGenerationType>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ETriangleGenerationType>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ETriangleGenerationType>::GetNamespace(void)'
                      ::__l2::ThisName,L"ETriangleGenerationType");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ETriangleGenerationType>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ETriangleGenerationType>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b0efd00

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>'::__l3::
FEnumHandler::GetDefaultValue(void *this)

{
  return 0;
}

// GetAllEntries @ 14b0efd70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>'::__l3::
FEnumHandler::GetAllEntries(void *this)

{
  FName *pFVar1;
  ETriangleGenerationType *pEVar2;
  longlong lVar3;
  int *piVar4;
  TEnumEntry<Metasound::ETriangleGenerationType> *pTVar5;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar4 < `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    DAT_1552f0450 = 0;
    _IntEntries = 0;
    DAT_1552f0454 = 0;
    if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Entries[0].Value = PolySmooth;
      ::FName::FName(&::Entries[0].Name,L"ETriangleGenerationType::PolySmooth");
      ::Entries[1].Value = Trivial;
      ::FName::FName(&::Entries[1].Name,L"ETriangleGenerationType::Trivial");
      _Init_thread_footer(&::_TSS0);
    }
    if (DAT_1552f0454 < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,2,(ForAnyElementType *)
                         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                          ::__l2::IntEntries,DAT_1552f0450,&DAT_1552f0454);
    }
    if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Entries[0].Value = PolySmooth;
      ::FName::FName(&::Entries[0].Name,L"ETriangleGenerationType::PolySmooth");
      ::Entries[1].Value = Trivial;
      ::FName::FName(&::Entries[1].Name,L"ETriangleGenerationType::Trivial");
      _Init_thread_footer(&::_TSS0);
    }
    pTVar5 = ::Entries;
    do {
      if (DAT_1552f0450 == DAT_1552f0454) {
        DAT_1552f0450 =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,(ForAnyElementType *)
                              &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                               ::__l2::IntEntries,&DAT_1552f0454);
      }
      lVar3 = (longlong)DAT_1552f0450;
      DAT_1552f0450 = DAT_1552f0450 + 1;
      pEVar2 = (ETriangleGenerationType *)(_IntEntries + lVar3 * 0xc);
      *pEVar2 = pTVar5->Value;
      pFVar1 = &pTVar5->Name;
      pTVar5 = pTVar5 + 1;
      *(FName *)(pEVar2 + 1) = *pFVar1;
    } while (pTVar5 != (TEnumEntry<Metasound::ETriangleGenerationType> *)&::_TSS0);
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>'::
           __l3::FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b0f3210

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>'::__l3::FEnumHandler
::GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EMusicalScale::Scale>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EMusicalScale::Scale>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EMusicalScale::Scale>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EMusicalScale::Scale>::GetNamespace(void)'
                      ::__l2::ThisName,L"Audio::EMusicalScale::Scale");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EMusicalScale::Scale>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EMusicalScale::Scale>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b0f3290

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>'::__l3::FEnumHandler
::GetDefaultValue(void *this)

{
  return 0;
}

// GetAllEntries @ 14b0f3310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>'::__l3::FEnumHandler
::GetAllEntries(void *this)

{
  Scale *pSVar1;
  uint uVar2;
  int iVar3;
  TArrayView<Metasound::TEnumEntry<Audio::EMusicalScale::Scale>_const_,int> *pTVar4;
  TEnumEntry<Audio::EMusicalScale::Scale> *pTVar5;
  bool bVar6;
  TArrayView<Metasound::TEnumEntry<Audio::EMusicalScale::Scale>_const_,int> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _IntEntries = 0;
    _DAT_1552f0b70 = 0;
    pTVar4 = Metasound::TEnumStringHelper<enum_Audio::EMusicalScale::Scale>::GetAllEntries
                       (&local_18);
    uVar2 = pTVar4->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (DAT_1552f0b74 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                  ::__l2::IntEntries,DAT_1552f0b70,&DAT_1552f0b74);
    }
    Metasound::TEnumStringHelper<enum_Audio::EMusicalScale::Scale>::GetAllEntries(&local_18);
    for (pTVar5 = local_18.DataPtr; pTVar5 != local_18.DataPtr + local_18.ArrayNum;
        pTVar5 = pTVar5 + 1) {
      DAT_1552f0b74 = (int)((ulonglong)_DAT_1552f0b70 >> 0x20);
      bVar6 = DAT_1552f0b70 == DAT_1552f0b74;
      iVar3 = DAT_1552f0b70;
      if (bVar6) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)
                                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                                  ::__l2::IntEntries,&DAT_1552f0b74);
      }
      _DAT_1552f0b70 = CONCAT44(DAT_1552f0b74,iVar3 + 1);
      pSVar1 = (Scale *)(_IntEntries + (longlong)iVar3 * 0xc);
      *pSVar1 = pTVar5->Value;
      *(FName *)(pSVar1 + 1) = pTVar5->Name;
    }
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>'::__l3::
           FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b0fd340

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>'::__l3::
FEnumHandler::GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESawGenerationType>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESawGenerationType>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESawGenerationType>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESawGenerationType>::GetNamespace(void)'
                      ::__l2::ThisName,L"ESawGenerationType");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESawGenerationType>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESawGenerationType>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b0fd3c0

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>'::__l3::
FEnumHandler::GetDefaultValue(void *this)

{
  return 0;
}

// GetAllEntries @ 14b0fd3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>'::__l3::
FEnumHandler::GetAllEntries(void *this)

{
  FName *pFVar1;
  ESawGenerationType *pEVar2;
  longlong lVar3;
  int *piVar4;
  TEnumEntry<Metasound::ESawGenerationType> *pTVar5;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar4 < `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    DAT_1552f1870 = 0;
    _IntEntries = 0;
    DAT_1552f1874 = 0;
    if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Entries[0].Value = PolySmooth;
      ::FName::FName(&::Entries[0].Name,L"ESawGenerationType::PolySmooth");
      ::Entries[1].Value = Trivial;
      ::FName::FName(&::Entries[1].Name,L"ESawGenerationType::Trivial");
      _Init_thread_footer(&::_TSS0);
    }
    if (DAT_1552f1874 < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,2,(ForAnyElementType *)
                         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                          ::__l2::IntEntries,DAT_1552f1870,&DAT_1552f1874);
    }
    if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Entries[0].Value = PolySmooth;
      ::FName::FName(&::Entries[0].Name,L"ESawGenerationType::PolySmooth");
      ::Entries[1].Value = Trivial;
      ::FName::FName(&::Entries[1].Name,L"ESawGenerationType::Trivial");
      _Init_thread_footer(&::_TSS0);
    }
    pTVar5 = ::Entries;
    do {
      if (DAT_1552f1870 == DAT_1552f1874) {
        DAT_1552f1870 =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,(ForAnyElementType *)
                              &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                               ::__l2::IntEntries,&DAT_1552f1874);
      }
      lVar3 = (longlong)DAT_1552f1870;
      DAT_1552f1870 = DAT_1552f1870 + 1;
      pEVar2 = (ESawGenerationType *)(_IntEntries + lVar3 * 0xc);
      *pEVar2 = pTVar5->Value;
      pFVar1 = &pTVar5->Name;
      pTVar5 = pTVar5 + 1;
      *(FName *)(pEVar2 + 1) = *pFVar1;
    } while (pTVar5 != (TEnumEntry<Metasound::ESawGenerationType> *)&::_TSS0);
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>'::__l3
           ::FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b0fe810

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l3::
FEnumHandler::GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ELfoWaveshapeType>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ELfoWaveshapeType>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ELfoWaveshapeType>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ELfoWaveshapeType>::GetNamespace(void)'
                      ::__l2::ThisName,L"ELfoWaveshapeType");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ELfoWaveshapeType>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ELfoWaveshapeType>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b0fe890

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l3::
FEnumHandler::GetDefaultValue(void *this)

{
  return 0;
}

// GetAllEntries @ 14b0fe8a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l3::
FEnumHandler::GetAllEntries(void *this)

{
  ELfoWaveshapeType *pEVar1;
  uint uVar2;
  int iVar3;
  TArrayView<Metasound::TEnumEntry<Metasound::ELfoWaveshapeType>_const_,int> *pTVar4;
  TEnumEntry<Metasound::ELfoWaveshapeType> *pTVar5;
  bool bVar6;
  TArrayView<Metasound::TEnumEntry<Metasound::ELfoWaveshapeType>_const_,int> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _IntEntries = 0;
    _DAT_1552f1888 = 0;
    pTVar4 = Metasound::TEnumStringHelper<enum_Metasound::ELfoWaveshapeType>::GetAllEntries
                       (&local_18);
    uVar2 = pTVar4->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (DAT_1552f188c < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                  ::__l2::IntEntries,DAT_1552f1888,&DAT_1552f188c);
    }
    Metasound::TEnumStringHelper<enum_Metasound::ELfoWaveshapeType>::GetAllEntries(&local_18);
    for (pTVar5 = local_18.DataPtr; pTVar5 != local_18.DataPtr + local_18.ArrayNum;
        pTVar5 = pTVar5 + 1) {
      DAT_1552f188c = (int)((ulonglong)_DAT_1552f1888 >> 0x20);
      bVar6 = DAT_1552f1888 == DAT_1552f188c;
      iVar3 = DAT_1552f1888;
      if (bVar6) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)
                                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                                  ::__l2::IntEntries,&DAT_1552f188c);
      }
      _DAT_1552f1888 = CONCAT44(DAT_1552f188c,iVar3 + 1);
      pEVar1 = (ELfoWaveshapeType *)(_IntEntries + (longlong)iVar3 * 0xc);
      *pEVar1 = pTVar5->Value;
      *(FName *)(pEVar1 + 1) = pTVar5->Name;
    }
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l3::
           FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b10bc10

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>'::__l3::FEnumHandler::
GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ENoiseType>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ENoiseType>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ENoiseType>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ENoiseType>::GetNamespace(void)'
                      ::__l2::ThisName,L"ENoiseType");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ENoiseType>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ENoiseType>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b10bc90

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>'::__l3::FEnumHandler::
GetDefaultValue(void *this)

{
  return 0;
}

// GetAllEntries @ 14b10bca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>'::__l3::FEnumHandler::
GetAllEntries(void *this)

{
  FName *pFVar1;
  ENoiseType *pEVar2;
  longlong lVar3;
  int *piVar4;
  TEnumEntry<Metasound::ENoiseType> *pTVar5;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar4 < `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    DAT_1552f37c8 = 0;
    _IntEntries = 0;
    DAT_1552f37cc = 0;
    if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Entries[0].Value = Pink;
      ::FName::FName(&::Entries[0].Name,L"ENoiseType::Pink");
      ::Entries[1].Value = White;
      ::FName::FName(&::Entries[1].Name,L"ENoiseType::White");
      _Init_thread_footer(&::_TSS0);
    }
    if (DAT_1552f37cc < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,2,(ForAnyElementType *)
                         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                          ::__l2::IntEntries,DAT_1552f37c8,&DAT_1552f37cc);
    }
    if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Entries[0].Value = Pink;
      ::FName::FName(&::Entries[0].Name,L"ENoiseType::Pink");
      ::Entries[1].Value = White;
      ::FName::FName(&::Entries[1].Name,L"ENoiseType::White");
      _Init_thread_footer(&::_TSS0);
    }
    pTVar5 = ::Entries;
    do {
      if (DAT_1552f37c8 == DAT_1552f37cc) {
        DAT_1552f37c8 =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,(ForAnyElementType *)
                              &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                               ::__l2::IntEntries,&DAT_1552f37cc);
      }
      lVar3 = (longlong)DAT_1552f37c8;
      DAT_1552f37c8 = DAT_1552f37c8 + 1;
      pEVar2 = (ENoiseType *)(_IntEntries + lVar3 * 0xc);
      *pEVar2 = pTVar5->Value;
      pFVar1 = &pTVar5->Name;
      pTVar5 = pTVar5 + 1;
      *(FName *)(pEVar2 + 1) = *pFVar1;
    } while (pTVar5 != (TEnumEntry<Metasound::ENoiseType> *)&::_TSS0);
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>'::__l3::
           FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b10de60

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>'::__l3::
FEnumHandler::GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESquareGenerationType>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESquareGenerationType>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESquareGenerationType>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESquareGenerationType>::GetNamespace(void)'
                      ::__l2::ThisName,L"ESquareGenerationType");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESquareGenerationType>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESquareGenerationType>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b10dee0

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>'::__l3::
FEnumHandler::GetDefaultValue(void *this)

{
  return 0;
}

// GetAllEntries @ 14b10def0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>'::__l3::
FEnumHandler::GetAllEntries(void *this)

{
  FName *pFVar1;
  ESquareGenerationType *pEVar2;
  longlong lVar3;
  int *piVar4;
  TEnumEntry<Metasound::ESquareGenerationType> *pTVar5;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar4 < `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    DAT_1552f43c8 = 0;
    _IntEntries = 0;
    DAT_1552f43cc = 0;
    if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Entries[0].Value = PolySmooth;
      ::FName::FName(&::Entries[0].Name,L"ESquareGenerationType::PolySmooth");
      ::Entries[1].Value = Trivial;
      ::FName::FName(&::Entries[1].Name,L"ESquareGenerationType::Trivial");
      _Init_thread_footer(&::_TSS0);
    }
    if (DAT_1552f43cc < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,2,(ForAnyElementType *)
                         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                          ::__l2::IntEntries,DAT_1552f43c8,&DAT_1552f43cc);
    }
    if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Entries[0].Value = PolySmooth;
      ::FName::FName(&::Entries[0].Name,L"ESquareGenerationType::PolySmooth");
      ::Entries[1].Value = Trivial;
      ::FName::FName(&::Entries[1].Name,L"ESquareGenerationType::Trivial");
      _Init_thread_footer(&::_TSS0);
    }
    pTVar5 = ::Entries;
    do {
      if (DAT_1552f43c8 == DAT_1552f43cc) {
        DAT_1552f43c8 =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,(ForAnyElementType *)
                              &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                               ::__l2::IntEntries,&DAT_1552f43cc);
      }
      lVar3 = (longlong)DAT_1552f43c8;
      DAT_1552f43c8 = DAT_1552f43c8 + 1;
      pEVar2 = (ESquareGenerationType *)(_IntEntries + lVar3 * 0xc);
      *pEVar2 = pTVar5->Value;
      pFVar1 = &pTVar5->Name;
      pTVar5 = pTVar5 + 1;
      *(FName *)(pEVar2 + 1) = *pFVar1;
    } while (pTVar5 != (TEnumEntry<Metasound::ESquareGenerationType> *)&::_TSS0);
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>'::
           __l3::FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b1b0a80

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l3::FEnumHandler
::GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EStereoDelayMode>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EStereoDelayMode>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EStereoDelayMode>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EStereoDelayMode>::GetNamespace(void)'
                      ::__l2::ThisName,L"EStereoDelayMode");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EStereoDelayMode>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EStereoDelayMode>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b1b0b00

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l3::FEnumHandler
::GetDefaultValue(void *this)

{
  return 0;
}

// GetAllEntries @ 14b1b0b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l3::FEnumHandler
::GetAllEntries(void *this)

{
  EStereoDelayMode *pEVar1;
  uint uVar2;
  int iVar3;
  TArrayView<Metasound::TEnumEntry<Metasound::EStereoDelayMode>_const_,int> *pTVar4;
  TEnumEntry<Metasound::EStereoDelayMode> *pTVar5;
  bool bVar6;
  TArrayView<Metasound::TEnumEntry<Metasound::EStereoDelayMode>_const_,int> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _IntEntries = 0;
    _DAT_1552f7470 = 0;
    pTVar4 = Metasound::TEnumStringHelper<enum_Metasound::EStereoDelayMode>::GetAllEntries
                       (&local_18);
    uVar2 = pTVar4->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (DAT_1552f7474 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                  ::__l2::IntEntries,DAT_1552f7470,&DAT_1552f7474);
    }
    Metasound::TEnumStringHelper<enum_Metasound::EStereoDelayMode>::GetAllEntries(&local_18);
    for (pTVar5 = local_18.DataPtr; pTVar5 != local_18.DataPtr + local_18.ArrayNum;
        pTVar5 = pTVar5 + 1) {
      DAT_1552f7474 = (int)((ulonglong)_DAT_1552f7470 >> 0x20);
      bVar6 = DAT_1552f7470 == DAT_1552f7474;
      iVar3 = DAT_1552f7470;
      if (bVar6) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)
                                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                                  ::__l2::IntEntries,&DAT_1552f7474);
      }
      _DAT_1552f7470 = CONCAT44(DAT_1552f7474,iVar3 + 1);
      pEVar1 = (EStereoDelayMode *)(_IntEntries + (longlong)iVar3 * 0xc);
      *pEVar1 = pTVar5->Value;
      *(FName *)(pEVar1 + 1) = pTVar5->Name;
    }
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l3::
           FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b1b56e0

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l3::FEnumHandler::
GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EPanningLaw>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EPanningLaw>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EPanningLaw>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EPanningLaw>::GetNamespace(void)'
                      ::__l2::ThisName,L"EPanningLaw");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EPanningLaw>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EPanningLaw>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b1b5760

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l3::FEnumHandler::
GetDefaultValue(void *this)

{
  return 0;
}

// GetAllEntries @ 14b1b5770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l3::FEnumHandler::
GetAllEntries(void *this)

{
  FName *pFVar1;
  EPanningLaw *pEVar2;
  longlong lVar3;
  int *piVar4;
  TEnumEntry<Metasound::EPanningLaw> *pTVar5;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar4 < `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    DAT_1552f8370 = 0;
    _IntEntries = 0;
    DAT_1552f8374 = 0;
    if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Entries[0].Value = EqualPower;
      ::FName::FName(&::Entries[0].Name,L"EPanningLaw::EqualPower");
      ::Entries[1].Value = Linear;
      ::FName::FName(&::Entries[1].Name,L"EPanningLaw::Linear");
      _Init_thread_footer(&::_TSS0);
    }
    if (DAT_1552f8374 < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,2,(ForAnyElementType *)
                         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                          ::__l2::IntEntries,DAT_1552f8370,&DAT_1552f8374);
    }
    if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Entries[0].Value = EqualPower;
      ::FName::FName(&::Entries[0].Name,L"EPanningLaw::EqualPower");
      ::Entries[1].Value = Linear;
      ::FName::FName(&::Entries[1].Name,L"EPanningLaw::Linear");
      _Init_thread_footer(&::_TSS0);
    }
    pTVar5 = ::Entries;
    do {
      if (DAT_1552f8370 == DAT_1552f8374) {
        DAT_1552f8370 =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,(ForAnyElementType *)
                              &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                               ::__l2::IntEntries,&DAT_1552f8374);
      }
      lVar3 = (longlong)DAT_1552f8370;
      DAT_1552f8370 = DAT_1552f8370 + 1;
      pEVar2 = (EPanningLaw *)(_IntEntries + lVar3 * 0xc);
      *pEVar2 = pTVar5->Value;
      pFVar1 = &pTVar5->Name;
      pTVar5 = pTVar5 + 1;
      *(FName *)(pEVar2 + 1) = *pFVar1;
    } while (pTVar5 != (TEnumEntry<Metasound::EPanningLaw> *)&::_TSS0);
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l3::
           FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b1fd810

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>'::__l3::
FEnumHandler::GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EBufferTriggerType>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EBufferTriggerType>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EBufferTriggerType>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EBufferTriggerType>::GetNamespace(void)'
                      ::__l2::ThisName,L"EBufferTriggerType");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EBufferTriggerType>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::EBufferTriggerType>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b1fd910

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>'::__l3::
FEnumHandler::GetDefaultValue(void *this)

{
  return 0;
}

// GetAllEntries @ 14b1fd9c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>'::__l3::
FEnumHandler::GetAllEntries(void *this)

{
  EBufferTriggerType *pEVar1;
  uint uVar2;
  int iVar3;
  TArrayView<Metasound::TEnumEntry<Metasound::EBufferTriggerType>_const_,int> *pTVar4;
  TEnumEntry<Metasound::EBufferTriggerType> *pTVar5;
  bool bVar6;
  TArrayView<Metasound::TEnumEntry<Metasound::EBufferTriggerType>_const_,int> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _IntEntries = 0;
    _DAT_1552fe490 = 0;
    pTVar4 = Metasound::TEnumStringHelper<enum_Metasound::EBufferTriggerType>::GetAllEntries
                       (&local_18);
    uVar2 = pTVar4->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (DAT_1552fe494 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                  ::__l2::IntEntries,DAT_1552fe490,&DAT_1552fe494);
    }
    Metasound::TEnumStringHelper<enum_Metasound::EBufferTriggerType>::GetAllEntries(&local_18);
    for (pTVar5 = local_18.DataPtr; pTVar5 != local_18.DataPtr + local_18.ArrayNum;
        pTVar5 = pTVar5 + 1) {
      DAT_1552fe494 = (int)((ulonglong)_DAT_1552fe490 >> 0x20);
      bVar6 = DAT_1552fe490 == DAT_1552fe494;
      iVar3 = DAT_1552fe490;
      if (bVar6) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)
                                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                                  ::__l2::IntEntries,&DAT_1552fe494);
      }
      _DAT_1552fe490 = CONCAT44(DAT_1552fe494,iVar3 + 1);
      pEVar1 = (EBufferTriggerType *)(_IntEntries + (longlong)iVar3 * 0xc);
      *pEVar1 = pTVar5->Value;
      *(FName *)(pEVar1 + 1) = pTVar5->Name;
    }
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>'::__l3
           ::FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b214a70

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>'::__l3::
FEnumHandler::GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ETriggerComparisonType>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ETriggerComparisonType>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ETriggerComparisonType>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ETriggerComparisonType>::GetNamespace(void)'
                      ::__l2::ThisName,L"ETriggerComparisonType");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ETriggerComparisonType>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ETriggerComparisonType>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b214af0

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>'::__l3::
FEnumHandler::GetDefaultValue(void *this)

{
  return 0;
}

// GetAllEntries @ 14b214b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>'::__l3::
FEnumHandler::GetAllEntries(void *this)

{
  ETriggerComparisonType *pEVar1;
  uint uVar2;
  int iVar3;
  TArrayView<Metasound::TEnumEntry<Metasound::ETriggerComparisonType>_const_,int> *pTVar4;
  TEnumEntry<Metasound::ETriggerComparisonType> *pTVar5;
  bool bVar6;
  TArrayView<Metasound::TEnumEntry<Metasound::ETriggerComparisonType>_const_,int> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _IntEntries = 0;
    _DAT_155301560 = 0;
    pTVar4 = Metasound::TEnumStringHelper<enum_Metasound::ETriggerComparisonType>::GetAllEntries
                       (&local_18);
    uVar2 = pTVar4->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (DAT_155301564 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                  ::__l2::IntEntries,DAT_155301560,&DAT_155301564);
    }
    Metasound::TEnumStringHelper<enum_Metasound::ETriggerComparisonType>::GetAllEntries(&local_18);
    for (pTVar5 = local_18.DataPtr; pTVar5 != local_18.DataPtr + local_18.ArrayNum;
        pTVar5 = pTVar5 + 1) {
      DAT_155301564 = (int)((ulonglong)_DAT_155301560 >> 0x20);
      bVar6 = DAT_155301560 == DAT_155301564;
      iVar3 = DAT_155301560;
      if (bVar6) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)
                                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                                  ::__l2::IntEntries,&DAT_155301564);
      }
      _DAT_155301560 = CONCAT44(DAT_155301564,iVar3 + 1);
      pEVar1 = (ETriggerComparisonType *)(_IntEntries + (longlong)iVar3 * 0xc);
      *pEVar1 = pTVar5->Value;
      *(FName *)(pEVar1 + 1) = pTVar5->Name;
    }
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>'::
           __l3::FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

// GetNamespace @ 14b214ec0

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>'::__l3::FEnumHandler::
GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EWaveShaperType>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EWaveShaperType>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EWaveShaperType>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EWaveShaperType>::GetNamespace(void)'
                      ::__l2::ThisName,L"Audio::EWaveShaperType");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EWaveShaperType>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Audio::EWaveShaperType>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14b214f40

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>'::__l3::FEnumHandler::
GetDefaultValue(void *this)

{
  return 1;
}

// GetAllEntries @ 14b214f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>'::__l3::FEnumHandler::
GetAllEntries(void *this)

{
  EWaveShaperType *pEVar1;
  uint uVar2;
  int iVar3;
  TArrayView<Metasound::TEnumEntry<Audio::EWaveShaperType>_const_,int> *pTVar4;
  TEnumEntry<Audio::EWaveShaperType> *pTVar5;
  bool bVar6;
  TArrayView<Metasound::TEnumEntry<Audio::EWaveShaperType>_const_,int> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _IntEntries = 0;
    _DAT_1553015d0 = 0;
    pTVar4 = Metasound::TEnumStringHelper<enum_Audio::EWaveShaperType>::GetAllEntries(&local_18);
    uVar2 = pTVar4->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (DAT_1553015d4 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                  ::__l2::IntEntries,DAT_1553015d0,&DAT_1553015d4);
    }
    Metasound::TEnumStringHelper<enum_Audio::EWaveShaperType>::GetAllEntries(&local_18);
    for (pTVar5 = local_18.DataPtr; pTVar5 != local_18.DataPtr + local_18.ArrayNum;
        pTVar5 = pTVar5 + 1) {
      DAT_1553015d4 = (int)((ulonglong)_DAT_1553015d0 >> 0x20);
      bVar6 = DAT_1553015d0 == DAT_1553015d4;
      iVar3 = DAT_1553015d0;
      if (bVar6) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)
                                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                                  ::__l2::IntEntries,&DAT_1553015d4);
      }
      _DAT_1553015d0 = CONCAT44(DAT_1553015d4,iVar3 + 1);
      pEVar1 = (EWaveShaperType *)(_IntEntries + (longlong)iVar3 * 0xc);
      *pEVar1 = pTVar5->Value;
      *(FName *)(pEVar1 + 1) = pTVar5->Name;
    }
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>'::__l3::
           FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__);
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

