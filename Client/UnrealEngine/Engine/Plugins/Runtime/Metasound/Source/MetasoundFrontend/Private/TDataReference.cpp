// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 161

// GetDataTypeName @ 14ad6ce00

FName * __thiscall
Metasound::TDataReference<FString>::GetDataTypeName(TDataReference<FString> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FString>(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FString>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FString>(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FString>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<FString>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FString>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FString>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FString>(void)'::
          __l2::TypeName;
}

// GetDataTypeId @ 14ad6ce50

void * __thiscall Metasound::TDataReference<FString>::GetDataTypeId(TDataReference<FString> *this)

{
  return &TDataReferenceTypeInfo<FString>::TypePtr;
}

// GetRaw @ 14ad6ce60

void * __thiscall Metasound::TDataReference<FString>::GetRaw(TDataReference<FString> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14ad716b0

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::GetDataTypeName(TDataReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                  *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14ad716c0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::GetDataTypeId(TDataReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
          ::TypePtr;
}

// GetRaw @ 14ad71720

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::GetRaw(TDataReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
         *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14ad71c10

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14ad71c20

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
          ::TypePtr;
}

// GetRaw @ 14ad71c30

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14ad73970

FName * __thiscall
Metasound::TDataReference<Metasound::Frontend::FAnalyzerAddress>::GetDataTypeName
          (TDataReference<Metasound::Frontend::FAnalyzerAddress> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::Frontend::FAnalyzerAddress>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14ad73980

void * __thiscall
Metasound::TDataReference<Metasound::Frontend::FAnalyzerAddress>::GetDataTypeId
          (TDataReference<Metasound::Frontend::FAnalyzerAddress> *this)

{
  return &TDataReferenceTypeInfo<Metasound::Frontend::FAnalyzerAddress>::TypePtr;
}

// GetRaw @ 14ad73990

void * __thiscall
Metasound::TDataReference<Metasound::Frontend::FAnalyzerAddress>::GetRaw
          (TDataReference<Metasound::Frontend::FAnalyzerAddress> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14ad75090

FName * __thiscall Metasound::TDataReference<int>::GetDataTypeName(TDataReference<int> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<int>(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<int>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<int>(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<int>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<int>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<int>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<int>(void)'::
              __l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<int>(void)'::__l2
          ::TypeName;
}

// GetDataTypeId @ 14ad750a0

void * __thiscall Metasound::TDataReference<int>::GetDataTypeId(TDataReference<int> *this)

{
  return &TDataReferenceTypeInfo<int>::TypePtr;
}

// GetRaw @ 14ad750b0

void * __thiscall Metasound::TDataReference<int>::GetRaw(TDataReference<int> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14ad75950

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>::
GetDataTypeName(TDataReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14ad75960

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>::
GetDataTypeId(TDataReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>::
          TypePtr;
}

// GetRaw @ 14ad75970

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>::GetRaw
          (TDataReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14ad76840

FName * __thiscall
Metasound::
TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
GetDataTypeName(TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14ad76850

void * __thiscall
Metasound::
TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
GetDataTypeId(TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              *this)

{
  return &TDataReferenceTypeInfo<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          ::TypePtr;
}

// GetRaw @ 14ad76930

void * __thiscall
Metasound::
TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetRaw
          (TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14ad79940

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14ad79950

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
          TypePtr;
}

// GetRaw @ 14ad79960

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14ad7dad0

FName * __thiscall
Metasound::TDataReference<Metasound::FSendAddress>::GetDataTypeName
          (TDataReference<Metasound::FSendAddress> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FSendAddress>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FSendAddress>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FSendAddress>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FSendAddress>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<Metasound::FSendAddress>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FSendAddress>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FSendAddress>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FSendAddress>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14ad7dae0

void * __thiscall
Metasound::TDataReference<Metasound::FSendAddress>::GetDataTypeId
          (TDataReference<Metasound::FSendAddress> *this)

{
  return &TDataReferenceTypeInfo<Metasound::FSendAddress>::TypePtr;
}

// GetRaw @ 14ad7daf0

void * __thiscall
Metasound::TDataReference<Metasound::FSendAddress>::GetRaw
          (TDataReference<Metasound::FSendAddress> *this)

{
  return (this->ObjectReference).Object;
}

// TDataReference<int><> @ 14ad7f850

TDataReference<int> * __thiscall
Metasound::TDataReference<int>::TDataReference<int><>
          (TDataReference<int> *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<int> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_H_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (int *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined8 *)&pTVar3->WeakReferenceCount = 1;
    (this->ObjectReference).Object = (int *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<int> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><> @ 14ad7f8f0

TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::
TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><>
          (TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *pTVar4
  ;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDataReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object =
         (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object =
         (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><> @ 14ad7f9a0

TDataReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESharedStateBehaviorType,1>::
    TEnum<enum_Metasound::ESharedStateBehaviorType,1>(puVar3 + 2,SameNodeInComposition);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::Frontend::FAnalyzerAddress><> @ 14ad7fa60

TDataReference<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::TDataReference<Metasound::Frontend::FAnalyzerAddress>::
TDataReference<Metasound::Frontend::FAnalyzerAddress><>
          (TDataReference<Metasound::Frontend::FAnalyzerAddress> *this,
          EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::Frontend::FAnalyzerAddress> *pTVar4;
  
  this->_padding_ =
       (longlong)&___7__TDataReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x68);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FAnalyzerAddress *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAnalyzerAddress_Frontend_Metasound___0A__SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pTVar3[6]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&pTVar3[6]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&pTVar3[6]._padding_ + 7) = 0;
    pTVar3[1]._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = 0;
    pTVar3[2].WeakReferenceCount = 0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = 0;
    pTVar3[3].WeakReferenceCount = 0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = 0;
    pTVar3[4].WeakReferenceCount = 0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = 0;
    pTVar3[5].WeakReferenceCount = 0;
    pTVar3[1].SharedReferenceCount = -1;
    pTVar3[1].WeakReferenceCount = -1;
    *(undefined1 *)&pTVar3[6]._padding_ = 1;
    (this->ObjectReference).Object = (FAnalyzerAddress *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((FAnalyzerAddress *)(pTVar3 + 1) == (FAnalyzerAddress *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><int_const_&> @ 14ad80400

TDataReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESharedStateBehaviorType,1>::
    TEnum<enum_Metasound::ESharedStateBehaviorType,1>(puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><float_const_&> @ 14ad804d0

TDataReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESharedStateBehaviorType,1>::
    TEnum<enum_Metasound::ESharedStateBehaviorType,1>(puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><FString_const_&> @ 14ad805a0

TDataReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Metasound::ESharedStateBehaviorType,1>::
    TEnum<enum_Metasound::ESharedStateBehaviorType,1>(puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
                 (*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::Frontend::FAnalyzerAddress><FString_const_&> @ 14ad80690

TDataReference<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::TDataReference<Metasound::Frontend::FAnalyzerAddress>::
TDataReference<Metasound::Frontend::FAnalyzerAddress><FString_const_&>
          (TDataReference<Metasound::Frontend::FAnalyzerAddress> *this,
          EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::Frontend::FAnalyzerAddress> *pTVar4;
  
  this->_padding_ =
       (longlong)&___7__TDataReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x68);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FAnalyzerAddress *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAnalyzerAddress_Frontend_Metasound___0A__SharedPointerInternals__6B_
    ;
    Frontend::FAnalyzerAddress::FAnalyzerAddress((FAnalyzerAddress *)(pTVar3 + 1),param_2);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FAnalyzerAddress *)(pTVar3 + 1);
    if ((FAnalyzerAddress *)(pTVar3 + 1) == (FAnalyzerAddress *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><bool_const_&> @ 14ad80760

TDataReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESharedStateBehaviorType,1>::
    TEnum<enum_Metasound::ESharedStateBehaviorType,1>(puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad808b0

TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::
TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,EDataRefShouldConstruct param_1,
          TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *pTVar4
  ;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDataReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object =
         (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)(param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3[1].SharedReferenceCount = param_2->ArrayNum;
    pTVar3[1].WeakReferenceCount = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    (this->ObjectReference).Object =
         (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// GetDataTypeId @ 14adbd9d0

void * __thiscall Metasound::TDataReference<float>::GetDataTypeId(TDataReference<float> *this)

{
  return &TDataReferenceTypeInfo<float>::TypePtr;
}

// GetDataTypeId @ 14adbd9e0

void * __thiscall
Metasound::TDataReference<Metasound::FTime>::GetDataTypeId(TDataReference<Metasound::FTime> *this)

{
  return &TDataReferenceTypeInfo<Metasound::FTime>::TypePtr;
}

// GetDataTypeId @ 14adbd9f0

void * __thiscall
Metasound::TDataReference<Metasound::FTrigger>::GetDataTypeId
          (TDataReference<Metasound::FTrigger> *this)

{
  return &TDataReferenceTypeInfo<Metasound::FTrigger>::TypePtr;
}

// GetDataTypeName @ 14adbdb50

FName * __thiscall Metasound::TDataReference<float>::GetDataTypeName(TDataReference<float> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<float>(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<float>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<float>(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<float>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<float>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<float>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<float>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<float>(void)'::
          __l2::TypeName;
}

// GetDataTypeName @ 14adbdb60

FName * __thiscall
Metasound::TDataReference<Metasound::FTime>::GetDataTypeName(TDataReference<Metasound::FTime> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTime>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTime>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTime>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTime>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<Metasound::FTime>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTime>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTime>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTime>(void)'
          ::__l2::TypeName;
}

// GetDataTypeName @ 14adbdb70

FName * __thiscall
Metasound::TDataReference<Metasound::FTrigger>::GetDataTypeName
          (TDataReference<Metasound::FTrigger> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<Metasound::FTrigger>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>(void)'
          ::__l2::TypeName;
}

// GetRaw @ 14adc2910

void * __thiscall Metasound::TDataReference<float>::GetRaw(TDataReference<float> *this)

{
  return (this->ObjectReference).Object;
}

// GetRaw @ 14adc2920

void * __thiscall
Metasound::TDataReference<Metasound::FTime>::GetRaw(TDataReference<Metasound::FTime> *this)

{
  return (this->ObjectReference).Object;
}

// GetRaw @ 14adc2930

void * __thiscall
Metasound::TDataReference<Metasound::FTrigger>::GetRaw(TDataReference<Metasound::FTrigger> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14ae92be0

FName * __thiscall
Metasound::TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::GetDataTypeName
          (TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<TArray<float,TSizedDefaultAllocator<32>_>_>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14ae92bf0

void * __thiscall
Metasound::TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::GetDataTypeId
          (TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  return &TDataReferenceTypeInfo<TArray<float,TSizedDefaultAllocator<32>_>_>::TypePtr;
}

// GetRaw @ 14ae92c00

void * __thiscall
Metasound::TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::GetRaw
          (TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14ae96a40

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FAudioBuffer>_>::GetDataTypeName
          (TDataReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBuffer>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBuffer>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBuffer>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBuffer>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FAudioBuffer>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBuffer>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBuffer>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBuffer>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14ae96ab0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FAudioBuffer>_>::GetDataTypeId
          (TDataReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FAudioBuffer>_>::TypePtr;
}

// GetRaw @ 14ae96ac0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FAudioBuffer>_>::GetRaw
          (TDataReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14ae97380

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetDataTypeName(TDataReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14ae97390

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetDataTypeId(TDataReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
              *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          ::TypePtr;
}

// GetRaw @ 14ae973b0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>::GetRaw
          (TDataReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aea44e0

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<int>_>::GetDataTypeName
          (TDataReference<Metasound::TVariable<int>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<int>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<int>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<int>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<int>_>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<Metasound::TVariable<int>_>::TypeName)
      ;
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<int>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<int>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<int>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aea44f0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<int>_>::GetDataTypeId
          (TDataReference<Metasound::TVariable<int>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<int>_>::TypePtr;
}

// GetRaw @ 14aea4500

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<int>_>::GetRaw
          (TDataReference<Metasound::TVariable<int>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aea4510

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetDataTypeName(TDataReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aea4550

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetDataTypeId(TDataReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *this
             )

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
          TypePtr;
}

// GetRaw @ 14aea4560

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::GetRaw
          (TDataReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aea4f80

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FTrigger>_>::GetDataTypeName
          (TDataReference<Metasound::TVariable<Metasound::FTrigger>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTrigger>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTrigger>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTrigger>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTrigger>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FTrigger>_>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTrigger>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTrigger>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTrigger>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aea4f90

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FTrigger>_>::GetDataTypeId
          (TDataReference<Metasound::TVariable<Metasound::FTrigger>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FTrigger>_>::TypePtr;
}

// GetRaw @ 14aea4fa0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FTrigger>_>::GetRaw
          (TDataReference<Metasound::TVariable<Metasound::FTrigger>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aea5b90

FName * __thiscall
Metasound::TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::GetDataTypeName
          (TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<TArray<int,TSizedDefaultAllocator<32>_>_>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aea5ba0

void * __thiscall
Metasound::TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::GetDataTypeId
          (TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  return &TDataReferenceTypeInfo<TArray<int,TSizedDefaultAllocator<32>_>_>::TypePtr;
}

// GetRaw @ 14aea5bb0

void * __thiscall
Metasound::TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::GetRaw
          (TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aeac5c0

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FSendAddress>_>::GetDataTypeName
          (TDataReference<Metasound::TVariable<Metasound::FSendAddress>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FSendAddress>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FSendAddress>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FSendAddress>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FSendAddress>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FSendAddress>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FSendAddress>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FSendAddress>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FSendAddress>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aeac5d0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FSendAddress>_>::GetDataTypeId
          (TDataReference<Metasound::TVariable<Metasound::FSendAddress>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FSendAddress>_>::TypePtr;
}

// GetRaw @ 14aeac700

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FSendAddress>_>::GetRaw
          (TDataReference<Metasound::TVariable<Metasound::FSendAddress>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aead050

FName * __thiscall Metasound::TDataReference<bool>::GetDataTypeName(TDataReference<bool> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<bool>(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<bool>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<bool>(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<bool>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<bool>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<bool>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<bool>(void)'::
              __l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<bool>(void)'::__l2
          ::TypeName;
}

// GetDataTypeId @ 14aead060

void * __thiscall Metasound::TDataReference<bool>::GetDataTypeId(TDataReference<bool> *this)

{
  return &TDataReferenceTypeInfo<bool>::TypePtr;
}

// GetRaw @ 14aead070

void * __thiscall Metasound::TDataReference<bool>::GetRaw(TDataReference<bool> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aeb15d0

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetDataTypeName(TDataReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                  *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aeb15e0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetDataTypeId(TDataReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          ::TypePtr;
}

// GetRaw @ 14aeb1680

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetRaw(TDataReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
         *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aeb39a0

FName * __thiscall
Metasound::TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
GetDataTypeName(TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aeb3af0

void * __thiscall
Metasound::TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
GetDataTypeId(TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

{
  return &TDataReferenceTypeInfo<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
          TypePtr;
}

// GetRaw @ 14aeb3b00

void * __thiscall
Metasound::TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetRaw
          (TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aeba560

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
GetDataTypeName(TDataReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aeba590

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
GetDataTypeId(TDataReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
              *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          ::TypePtr;
}

// GetRaw @ 14aeba5d0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
GetRaw(TDataReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aebe8c0

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<bool>_>::GetDataTypeName
          (TDataReference<Metasound::TVariable<bool>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<bool>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<bool>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<bool>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<bool>_>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<Metasound::TVariable<bool>_>::TypeName
                    );
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<bool>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<bool>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<bool>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aebe8d0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<bool>_>::GetDataTypeId
          (TDataReference<Metasound::TVariable<bool>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<bool>_>::TypePtr;
}

// GetRaw @ 14aebe970

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<bool>_>::GetRaw
          (TDataReference<Metasound::TVariable<bool>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aec0de0

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FTime>_>::GetDataTypeName
          (TDataReference<Metasound::TVariable<Metasound::FTime>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTime>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTime>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTime>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTime>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FTime>_>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTime>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTime>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTime>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aec0df0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FTime>_>::GetDataTypeId
          (TDataReference<Metasound::TVariable<Metasound::FTime>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FTime>_>::TypePtr;
}

// GetRaw @ 14aec0e00

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FTime>_>::GetRaw
          (TDataReference<Metasound::TVariable<Metasound::FTime>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aec1c80

FName * __thiscall
Metasound::TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetDataTypeName
          (TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<TArray<bool,TSizedDefaultAllocator<32>_>_>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aec1c90

void * __thiscall
Metasound::TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetDataTypeId
          (TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  return &TDataReferenceTypeInfo<TArray<bool,TSizedDefaultAllocator<32>_>_>::TypePtr;
}

// GetRaw @ 14aec1ca0

void * __thiscall
Metasound::TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetRaw
          (TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aec2bd0

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<FString>_>::GetDataTypeName
          (TDataReference<Metasound::TVariable<FString>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<FString>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<FString>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<FString>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<FString>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<FString>_>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<FString>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<FString>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<FString>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aec2be0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<FString>_>::GetDataTypeId
          (TDataReference<Metasound::TVariable<FString>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<FString>_>::TypePtr;
}

// GetRaw @ 14aec2bf0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<FString>_>::GetRaw
          (TDataReference<Metasound::TVariable<FString>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aec43e0

FName * __thiscall
Metasound::TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetDataTypeName
          (TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<TArray<FString,TSizedDefaultAllocator<32>_>_>::TypeName)
      ;
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aec43f0

void * __thiscall
Metasound::TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetDataTypeId
          (TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  return &TDataReferenceTypeInfo<TArray<FString,TSizedDefaultAllocator<32>_>_>::TypePtr;
}

// GetRaw @ 14aec4460

void * __thiscall
Metasound::TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetRaw
          (TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aecc390

FName * __thiscall
Metasound::TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetDataTypeName
          (TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aecc3a0

void * __thiscall
Metasound::TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetDataTypeId
          (TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  return &TDataReferenceTypeInfo<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::TypePtr;
}

// GetDataTypeName @ 14aecc3b0

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetDataTypeName(TDataReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>(void)'
          ::__l2::TypeName;
}

// GetRaw @ 14aecc3c0

void * __thiscall
Metasound::TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetRaw
          (TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeId @ 14aecc440

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetDataTypeId(TDataReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
          TypePtr;
}

// GetRaw @ 14aecc450

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>::GetRaw
          (TDataReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aececf0

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>::GetDataTypeName
          (TDataReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aeced00

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>::GetDataTypeId
          (TDataReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>::TypePtr;
}

// GetRaw @ 14aeced50

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>::GetRaw
          (TDataReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aed9850

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::GetDataTypeName(TDataReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                  *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aed9860

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::GetDataTypeId(TDataReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
          ::TypePtr;
}

// GetRaw @ 14aed98d0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::GetRaw(TDataReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
         *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aeddb60

FName * __thiscall
Metasound::TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
GetDataTypeName(TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aeddcf0

void * __thiscall
Metasound::TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
GetDataTypeId(TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              *this)

{
  return &TDataReferenceTypeInfo<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          ::TypePtr;
}

// GetRaw @ 14aeddd00

void * __thiscall
Metasound::TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
GetRaw(TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aee1fe0

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<float>_>::GetDataTypeName
          (TDataReference<Metasound::TVariable<float>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<float>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<float>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<float>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<float>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<float>_>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<float>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<float>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<float>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aee1ff0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<float>_>::GetDataTypeId
          (TDataReference<Metasound::TVariable<float>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<float>_>::TypePtr;
}

// GetRaw @ 14aee20b0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<float>_>::GetRaw
          (TDataReference<Metasound::TVariable<float>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aee53c0

FName * __thiscall
Metasound::TDataReference<FMetasoundParameterStorageWrapper>::GetDataTypeName
          (TDataReference<FMetasoundParameterStorageWrapper> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<FMetasoundParameterStorageWrapper>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aee53d0

void * __thiscall
Metasound::TDataReference<FMetasoundParameterStorageWrapper>::GetDataTypeId
          (TDataReference<FMetasoundParameterStorageWrapper> *this)

{
  return &TDataReferenceTypeInfo<FMetasoundParameterStorageWrapper>::TypePtr;
}

// GetRaw @ 14aee53e0

void * __thiscall
Metasound::TDataReference<FMetasoundParameterStorageWrapper>::GetRaw
          (TDataReference<FMetasoundParameterStorageWrapper> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14aee77f0

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>::
GetDataTypeName(TDataReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14aee7800

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>::
GetDataTypeId(TDataReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
              *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          ::TypePtr;
}

// GetRaw @ 14aee7840

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>::GetRaw
          (TDataReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (this->ObjectReference).Object;
}

// TDataReference<float><> @ 14aee9e90

TDataReference<float> * __thiscall
Metasound::TDataReference<float>::TDataReference<float><>
          (TDataReference<float> *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<float> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_M_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (float *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    *(undefined8 *)&pTVar3->WeakReferenceCount = 1;
    (this->ObjectReference).Object = (float *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><> @ 14aee9f30

TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><>
          (TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)&___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_HV__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object = (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><> @ 14aee9fe0

TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><>
          (TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)&___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (TArray<float,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_MV__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object = (TArray<float,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<float,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><> @ 14aeea090

TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><>
          (TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDataReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object =
         (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object =
         (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><> @ 14aeea140

TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><>
          (TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object =
         (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object =
         (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_><> @ 14aeea1f0

TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_><>
          (TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object = (TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><> @ 14aeea2a0

TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><>
          (TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object =
         (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><> @ 14aeea350

TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><>
          (TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (TArray<bool,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray__NV__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object = (TArray<bool,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<bool,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<FMetasoundParameterStorageWrapper><> @ 14aeea400

TDataReference<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::TDataReference<FMetasoundParameterStorageWrapper>::
TDataReference<FMetasoundParameterStorageWrapper><>
          (TDataReference<FMetasoundParameterStorageWrapper> *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<FMetasoundParameterStorageWrapper> *pTVar4;
  
  this->_padding_ =
       (longlong)&___7__TDataReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FMetasoundParameterStorageWrapper *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMetasoundParameterStorageWrapper___0A__SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = 1;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object = (FMetasoundParameterStorageWrapper *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FSendAddress><> @ 14aeea4b0

TDataReference<Metasound::FSendAddress> * __thiscall
Metasound::TDataReference<Metasound::FSendAddress>::TDataReference<Metasound::FSendAddress><>
          (TDataReference<Metasound::FSendAddress> *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FSendAddress> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FSendAddress *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSendAddress_Metasound___0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = -1;
    pTVar3[2].WeakReferenceCount = -1;
    (this->ObjectReference).Object = (FSendAddress *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((FSendAddress *)(pTVar3 + 1) == (FSendAddress *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FSendAddress> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<FString><> @ 14aeea570

TDataReference<FString> * __thiscall
Metasound::TDataReference<FString>::TDataReference<FString><>
          (TDataReference<FString> *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<FString> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFString___Metasound__6B_;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FString *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VFString___0A__SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].WeakReferenceCount = 0;
    (this->ObjectReference).Object = (FString *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FTime><> @ 14aeea620

TDataReference<Metasound::FTime> * __thiscall
Metasound::TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><>
          (TDataReference<Metasound::FTime> *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FTime> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FTime *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTime_Metasound___0A__SharedPointerInternals__6B_;
    pTVar3->WeakReferenceCount = 1;
    pTVar3[1]._padding_ = 0;
    (this->ObjectReference).Object = (FTime *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FTime> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<bool><> @ 14aeea6d0

TDataReference<bool> * __thiscall
Metasound::TDataReference<bool>::TDataReference<bool><>
          (TDataReference<bool> *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<bool> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference__N_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (bool *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController__N_0A__SharedPointerInternals__6B_;
    pTVar3->WeakReferenceCount = 1;
    *(undefined1 *)&pTVar3[1]._padding_ = 0;
    (this->ObjectReference).Object = (bool *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<bool> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<int><int_const_&> @ 14aeec980

TDataReference<int> * __thiscall
Metasound::TDataReference<int>::TDataReference<int><int_const_&>
          (TDataReference<int> *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<int> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_H_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (int *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    pTVar3->WeakReferenceCount = 1;
    *(int *)&pTVar3[1]._padding_ = *param_2;
    (this->ObjectReference).Object = (int *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<int> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<float><int_const_&> @ 14aeeca30

TDataReference<float> * __thiscall
Metasound::TDataReference<float>::TDataReference<float><int_const_&>
          (TDataReference<float> *this,EDataRefShouldConstruct param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TDataReference<float> *pTVar5;
  
  this->_padding_ = (longlong)&___7__TDataReference_M_Metasound__6B_;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (float *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    pTVar4->WeakReferenceCount = 1;
    iVar1 = *param_2;
    (this->ObjectReference).Object = (float *)(pTVar4 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar4;
    *(float *)&pTVar4[1]._padding_ = (float)iVar1;
    if (pTVar4 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TDataReference<float> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FAudioBuffer><int_const_&> @ 14aeecaf0

TDataReference<Metasound::FAudioBuffer> * __thiscall
Metasound::TDataReference<Metasound::FAudioBuffer>::
TDataReference<Metasound::FAudioBuffer><int_const_&>
          (TDataReference<Metasound::FAudioBuffer> *this,EDataRefShouldConstruct param_1,
          int *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FAudioBuffer> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FAudioBuffer *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioBuffer_Metasound___0A__SharedPointerInternals__6B_
    ;
    FAudioBuffer::FAudioBuffer((FAudioBuffer *)(pTVar3 + 1),*param_2);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FAudioBuffer *)(pTVar3 + 1);
    if ((FAudioBuffer *)(pTVar3 + 1) == (FAudioBuffer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FAudioBuffer> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<bool><int_const_&> @ 14aeecbc0

TDataReference<bool> * __thiscall
Metasound::TDataReference<bool>::TDataReference<bool><int_const_&>
          (TDataReference<bool> *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<bool> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference__N_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (bool *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController__N_0A__SharedPointerInternals__6B_;
    pTVar3->WeakReferenceCount = 1;
    *(bool *)&pTVar3[1]._padding_ = *param_2 != 0;
    (this->ObjectReference).Object = (bool *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<bool> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<int><float_const_&> @ 14aeecc80

TDataReference<int> * __thiscall
Metasound::TDataReference<int>::TDataReference<int><float_const_&>
          (TDataReference<int> *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<int> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_H_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (int *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    pTVar3->WeakReferenceCount = 1;
    *(int *)&pTVar3[1]._padding_ = (int)*param_2;
    (this->ObjectReference).Object = (int *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<int> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<float><float_const_&> @ 14aeecd40

TDataReference<float> * __thiscall
Metasound::TDataReference<float>::TDataReference<float><float_const_&>
          (TDataReference<float> *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<float> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_M_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (float *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    pTVar3->WeakReferenceCount = 1;
    *(float *)&pTVar3[1]._padding_ = *param_2;
    (this->ObjectReference).Object = (float *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FAudioBuffer><float_const_&> @ 14aeecdf0

TDataReference<Metasound::FAudioBuffer> * __thiscall
Metasound::TDataReference<Metasound::FAudioBuffer>::
TDataReference<Metasound::FAudioBuffer><float_const_&>
          (TDataReference<Metasound::FAudioBuffer> *this,EDataRefShouldConstruct param_1,
          float *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FAudioBuffer> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FAudioBuffer *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioBuffer_Metasound___0A__SharedPointerInternals__6B_
    ;
    FAudioBuffer::FAudioBuffer((FAudioBuffer *)(pTVar3 + 1),(int)*param_2);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FAudioBuffer *)(pTVar3 + 1);
    if ((FAudioBuffer *)(pTVar3 + 1) == (FAudioBuffer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FAudioBuffer> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FTime><float_const_&> @ 14aeecec0

TDataReference<Metasound::FTime> * __thiscall
Metasound::TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><float_const_&>
          (TDataReference<Metasound::FTime> *this,EDataRefShouldConstruct param_1,float *param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TDataReference<Metasound::FTime> *pTVar5;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FTime *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTime_Metasound___0A__SharedPointerInternals__6B_;
    pTVar4->WeakReferenceCount = 1;
    fVar1 = *param_2;
    (this->ObjectReference).Object = (FTime *)(pTVar4 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar4;
    pTVar4[1]._padding_ = (longlong)(double)fVar1;
    if (pTVar4 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::FTime> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<bool><float_const_&> @ 14aeecf80

TDataReference<bool> * __thiscall
Metasound::TDataReference<bool>::TDataReference<bool><float_const_&>
          (TDataReference<bool> *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<bool> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference__N_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (bool *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController__N_0A__SharedPointerInternals__6B_;
    *(bool *)&pTVar3[1]._padding_ = *param_2 != 0.0;
    (this->ObjectReference).Object = (bool *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this;
}

// TDataReference<FMetasoundParameterStorageWrapper><TSharedPtr<Audio::IProxyData,1>_const_&> @ 14aeed040

TDataReference<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::TDataReference<FMetasoundParameterStorageWrapper>::
TDataReference<FMetasoundParameterStorageWrapper><TSharedPtr<Audio::IProxyData,1>_const_&>
          (TDataReference<FMetasoundParameterStorageWrapper> *this,EDataRefShouldConstruct param_1,
          TSharedPtr<Audio::IProxyData,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<FMetasoundParameterStorageWrapper> *pTVar4;
  
  this->_padding_ =
       (longlong)&___7__TDataReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FMetasoundParameterStorageWrapper *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMetasoundParameterStorageWrapper___0A__SharedPointerInternals__6B_
    ;
    FMetasoundParameterStorageWrapper::FMetasoundParameterStorageWrapper
              ((FMetasoundParameterStorageWrapper *)(pTVar3 + 1),param_2);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FMetasoundParameterStorageWrapper *)(pTVar3 + 1);
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<bool><TSharedPtr<Audio::IProxyData,1>_const_&> @ 14aeed110

TDataReference<bool> * __thiscall
Metasound::TDataReference<bool>::TDataReference<bool><TSharedPtr<Audio::IProxyData,1>_const_&>
          (TDataReference<bool> *this,EDataRefShouldConstruct param_1,
          TSharedPtr<Audio::IProxyData,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<bool> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference__N_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (bool *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController__N_0A__SharedPointerInternals__6B_;
    pTVar3->WeakReferenceCount = 1;
    *(bool *)&pTVar3[1]._padding_ = param_2->Object != (IProxyData *)0x0;
    (this->ObjectReference).Object = (bool *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<bool> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&> @ 14aeed1d0

TDataReference<Metasound::FTrigger> * __thiscall
Metasound::TDataReference<Metasound::FTrigger>::
TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
          (TDataReference<Metasound::FTrigger> *this,EDataRefShouldConstruct param_1,
          FOperatorSettings *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TDataReference<Metasound::FTrigger> *pTVar5;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  pTVar4 = ::operator_new(0x30);
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FTrigger *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTrigger_Metasound___0A__SharedPointerInternals__6B_;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = 0;
    pTVar4[1].WeakReferenceCount = 0;
    *(undefined2 *)&pTVar4[2]._padding_ = 0;
    *(undefined1 *)((longlong)&pTVar4[2]._padding_ + 2) = 0;
    *(int *)((longlong)&pTVar4[2]._padding_ + 4) = param_2->NumFramesPerBlock;
    iVar1 = param_2->SampleRate;
    pTVar4[2].WeakReferenceCount = 0;
    pTVar4[2].SharedReferenceCount = (int)(float)iVar1;
    (this->ObjectReference).Object = (FTrigger *)(pTVar4 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar4;
    if ((FTrigger *)(pTVar4 + 1) == (FTrigger *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::FTrigger> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&,int_const_&> @ 14aeed2b0

TDataReference<Metasound::FTrigger> * __thiscall
Metasound::TDataReference<Metasound::FTrigger>::
TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&,int_const_&>
          (TDataReference<Metasound::FTrigger> *this,EDataRefShouldConstruct param_1,
          FOperatorSettings *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<0> *pTVar5;
  TDataReference<Metasound::FTrigger> *pTVar6;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  pTVar5 = ::operator_new(0x30);
  if (pTVar5 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FTrigger *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = 1;
    pTVar5->WeakReferenceCount = 1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTrigger_Metasound___0A__SharedPointerInternals__6B_;
    iVar1 = *param_3;
    (((FTrigger *)(pTVar5 + 1))->TriggeredFrames).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    pTVar5[1].SharedReferenceCount = 0;
    pTVar5[1].WeakReferenceCount = 0;
    *(undefined2 *)&pTVar5[2]._padding_ = 0;
    *(undefined1 *)((longlong)&pTVar5[2]._padding_ + 2) = 0;
    *(int *)((longlong)&pTVar5[2]._padding_ + 4) = param_2->NumFramesPerBlock;
    iVar2 = param_2->SampleRate;
    pTVar5[2].WeakReferenceCount = 0;
    pTVar5[2].SharedReferenceCount = (int)(float)iVar2;
    FTrigger::TriggerFrame((FTrigger *)(pTVar5 + 1),iVar1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar5;
    (this->ObjectReference).Object = (FTrigger *)(pTVar5 + 1);
    if ((FTrigger *)(pTVar5 + 1) == (FTrigger *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TDataReference<Metasound::FTrigger> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&,bool_const_&> @ 14aeed3b0

TDataReference<Metasound::FTrigger> * __thiscall
Metasound::TDataReference<Metasound::FTrigger>::
TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&,bool_const_&>
          (TDataReference<Metasound::FTrigger> *this,EDataRefShouldConstruct param_1,
          FOperatorSettings *param_2,bool *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TDataReference<Metasound::FTrigger> *pTVar5;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  pTVar4 = ::operator_new(0x30);
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FTrigger *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTrigger_Metasound___0A__SharedPointerInternals__6B_;
    bVar3 = *param_3;
    (((FTrigger *)(pTVar4 + 1))->TriggeredFrames).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    pTVar4[1].SharedReferenceCount = 0;
    pTVar4[1].WeakReferenceCount = 0;
    *(undefined2 *)&pTVar4[2]._padding_ = 0;
    *(undefined1 *)((longlong)&pTVar4[2]._padding_ + 2) = 0;
    *(int *)((longlong)&pTVar4[2]._padding_ + 4) = param_2->NumFramesPerBlock;
    iVar1 = param_2->SampleRate;
    pTVar4[2].WeakReferenceCount = 0;
    pTVar4[2].SharedReferenceCount = (int)(float)iVar1;
    if (bVar3 != false) {
      FTrigger::TriggerFrame((FTrigger *)(pTVar4 + 1),0);
    }
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar4;
    (this->ObjectReference).Object = (FTrigger *)(pTVar4 + 1);
    if ((FTrigger *)(pTVar4 + 1) == (FTrigger *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::FTrigger> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FSendAddress><FString_const_&> @ 14aeed4b0

TDataReference<Metasound::FSendAddress> * __thiscall
Metasound::TDataReference<Metasound::FSendAddress>::
TDataReference<Metasound::FSendAddress><FString_const_&>
          (TDataReference<Metasound::FSendAddress> *this,EDataRefShouldConstruct param_1,
          FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FSendAddress> *pTVar4;
  wchar_t *pwVar5;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FSendAddress *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSendAddress_Metasound___0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    ::FName::FName((FName *)&pTVar3[1].SharedReferenceCount,pwVar5);
    pTVar3[2].SharedReferenceCount = -1;
    pTVar3[2].WeakReferenceCount = -1;
    pTVar3[2]._padding_ = 0;
    (this->ObjectReference).Object = (FSendAddress *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((FSendAddress *)(pTVar3 + 1) == (FSendAddress *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FSendAddress> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<FString><FString_const_&> @ 14aeed5b0

TDataReference<FString> * __thiscall
Metasound::TDataReference<FString>::TDataReference<FString><FString_const_&>
          (TDataReference<FString> *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<FString> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFString___Metasound__6B_;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FString *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VFString___0A__SharedPointerInternals__6B_;
    ::FString::FString((FString *)(pTVar3 + 1),param_2);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FString *)(pTVar3 + 1);
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<int><bool_const_&> @ 14aeed680

TDataReference<int> * __thiscall
Metasound::TDataReference<int>::TDataReference<int><bool_const_&>
          (TDataReference<int> *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<int> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_H_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (int *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    pTVar3->WeakReferenceCount = 1;
    *(uint *)&pTVar3[1]._padding_ = (uint)*param_2;
    (this->ObjectReference).Object = (int *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<int> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<float><bool_const_&> @ 14aeed730

TDataReference<float> * __thiscall
Metasound::TDataReference<float>::TDataReference<float><bool_const_&>
          (TDataReference<float> *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<float> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_M_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (float *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    pTVar3->WeakReferenceCount = 1;
    bVar2 = *param_2;
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (float *)(pTVar3 + 1);
    *(float *)&pTVar3[1]._padding_ = (float)bVar2;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FAudioBuffer><bool_const_&> @ 14aeed7f0

TDataReference<Metasound::FAudioBuffer> * __thiscall
Metasound::TDataReference<Metasound::FAudioBuffer>::
TDataReference<Metasound::FAudioBuffer><bool_const_&>
          (TDataReference<Metasound::FAudioBuffer> *this,EDataRefShouldConstruct param_1,
          bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FAudioBuffer> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FAudioBuffer *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioBuffer_Metasound___0A__SharedPointerInternals__6B_
    ;
    FAudioBuffer::FAudioBuffer((FAudioBuffer *)(pTVar3 + 1),(uint)*param_2);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FAudioBuffer *)(pTVar3 + 1);
    if ((FAudioBuffer *)(pTVar3 + 1) == (FAudioBuffer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FAudioBuffer> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<bool><bool_const_&> @ 14aeed8c0

TDataReference<bool> * __thiscall
Metasound::TDataReference<bool>::TDataReference<bool><bool_const_&>
          (TDataReference<bool> *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<bool> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference__N_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (bool *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController__N_0A__SharedPointerInternals__6B_;
    pTVar3->WeakReferenceCount = 1;
    *(bool *)&pTVar3[1]._padding_ = *param_2;
    (this->ObjectReference).Object = (bool *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<bool> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><TArray<int,TSizedDefaultAllocator<32>_>_> @ 14aeedd10

TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><TArray<int,TSizedDefaultAllocator<32>_>_>
          (TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)&___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_HV__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)(param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3[1].SharedReferenceCount = param_2->ArrayNum;
    pTVar3[1].WeakReferenceCount = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    (this->ObjectReference).Object = (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><TArray<float,TSizedDefaultAllocator<32>_>_> @ 14aeedfa0

TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><TArray<float,TSizedDefaultAllocator<32>_>_>
          (TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)&___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (TArray<float,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_MV__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)(param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3[1].SharedReferenceCount = param_2->ArrayNum;
    pTVar3[1].WeakReferenceCount = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    (this->ObjectReference).Object = (TArray<float,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<float,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14aeee230

TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,EDataRefShouldConstruct param_1,
          TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDataReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object =
         (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)(param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3[1].SharedReferenceCount = param_2->ArrayNum;
    pTVar3[1].WeakReferenceCount = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    (this->ObjectReference).Object =
         (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14aeee4c0

TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1,
          TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object =
         (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)(param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3[1].SharedReferenceCount = param_2->ArrayNum;
    pTVar3[1].WeakReferenceCount = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    (this->ObjectReference).Object =
         (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_><TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14aeee750

TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_><TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)(param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3[1].SharedReferenceCount = param_2->ArrayNum;
    pTVar3[1].WeakReferenceCount = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    (this->ObjectReference).Object = (TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14aeee9e0

TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1,
          TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)(param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3[1].SharedReferenceCount = param_2->ArrayNum;
    pTVar3[1].WeakReferenceCount = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    (this->ObjectReference).Object =
         (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14aeeec70

TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          EDataRefShouldConstruct param_1,TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (TArray<bool,TSizedDefaultAllocator<32>_> *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray__NV__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)(param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3[1].SharedReferenceCount = param_2->ArrayNum;
    pTVar3[1].WeakReferenceCount = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    (this->ObjectReference).Object = (TArray<bool,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TArray<bool,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

