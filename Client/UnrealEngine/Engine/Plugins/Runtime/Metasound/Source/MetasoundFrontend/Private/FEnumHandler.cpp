// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// GetNamespace @ 14ad70bb0

FName __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l3::
FEnumHandler::GetNamespace(void *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESharedStateBehaviorType>::GetNamespace(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESharedStateBehaviorType>::GetNamespace(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESharedStateBehaviorType>::GetNamespace(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESharedStateBehaviorType>::GetNamespace(void)'
                      ::__l2::ThisName,L"ESharedStateBehaviorType");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESharedStateBehaviorType>::GetNamespace(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_Metasound::TEnumStringHelper<Metasound::ESharedStateBehaviorType>::GetNamespace(void)'
       ::__l2::ThisName;
  return in_RDX;
}

// GetDefaultValue @ 14ad70c30

int __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l3::
FEnumHandler::GetDefaultValue(void *this)

{
  return 1;
}

// GetAllEntries @ 14ad70c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l3::
FEnumHandler::GetAllEntries(void *this)

{
  ESharedStateBehaviorType *pEVar1;
  uint uVar2;
  int iVar3;
  TArrayView<Metasound::TEnumEntry<Metasound::ESharedStateBehaviorType>_const_,int> *pTVar4;
  TEnumEntry<Metasound::ESharedStateBehaviorType> *pTVar5;
  bool bVar6;
  TArrayView<Metasound::TEnumEntry<Metasound::ESharedStateBehaviorType>_const_,int> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _IntEntries = 0;
    _DAT_1552d3050 = 0;
    pTVar4 = Metasound::TEnumStringHelper<enum_Metasound::ESharedStateBehaviorType>::GetAllEntries
                       (&local_18);
    uVar2 = pTVar4->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (DAT_1552d3054 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                  ::__l2::IntEntries,DAT_1552d3050,&DAT_1552d3054);
    }
    Metasound::TEnumStringHelper<enum_Metasound::ESharedStateBehaviorType>::GetAllEntries(&local_18)
    ;
    for (pTVar5 = local_18.DataPtr; pTVar5 != local_18.DataPtr + local_18.ArrayNum;
        pTVar5 = pTVar5 + 1) {
      DAT_1552d3054 = (int)((ulonglong)_DAT_1552d3050 >> 0x20);
      bVar6 = DAT_1552d3050 == DAT_1552d3054;
      iVar3 = DAT_1552d3050;
      if (bVar6) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)
                                 &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                                  ::__l2::IntEntries,&DAT_1552d3054);
      }
      _DAT_1552d3050 = CONCAT44(DAT_1552d3054,iVar3 + 1);
      pEVar1 = (ESharedStateBehaviorType *)(_IntEntries + (longlong)iVar3 * 0xc);
      *pEVar1 = pTVar5->Value;
      *(FName *)(pEVar1 + 1) = pTVar5->Name;
    }
    atexit(``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
           GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'
           ::__l3::FEnumHandler::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__)
    ;
    _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
           &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
            ::__l2::IntEntries;
  }
  return (TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_`class_TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1>___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'::`3'::FEnumHandler::GetAllEntries(void)const___ptr64'
          ::__l2::IntEntries;
}

