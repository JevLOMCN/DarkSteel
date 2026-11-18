// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 6

// Clone @ 14b368910

TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> __thiscall
Metasound::TOutputStorage<int>::Clone(TOutputStorage<int> *this)

{
  IOutputStorage IVar1;
  IOutputStorage *in_RDX;
  
  IVar1 = (IOutputStorage)::operator_new(0x10);
  if (IVar1 != (IOutputStorage)0x0) {
    *in_RDX = IVar1;
    *(undefined ***)IVar1 = &___7__TOutputStorage_H_Metasound__6B_;
    *(int *)((longlong)IVar1 + 8) = this->Data;
    return (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_>)in_RDX;
  }
  *in_RDX = (IOutputStorage)0x0;
  return (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_>)in_RDX;
}

// Clone @ 14b368970

TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> __thiscall
Metasound::TOutputStorage<FString>::Clone(TOutputStorage<FString> *this)

{
  IOutputStorage IVar1;
  IOutputStorage *in_RDX;
  
  IVar1 = (IOutputStorage)::operator_new(0x18);
  if (IVar1 != (IOutputStorage)0x0) {
    *(undefined ***)IVar1 = &___7__TOutputStorage_VFString___Metasound__6B_;
    ::FString::FString((FString *)((longlong)IVar1 + 8),&this->Data);
    *in_RDX = IVar1;
    return (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_>)in_RDX;
  }
  *in_RDX = (IOutputStorage)0x0;
  return (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_>)in_RDX;
}

// Clone @ 14b3689f0

TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> __thiscall
Metasound::TOutputStorage<bool>::Clone(TOutputStorage<bool> *this)

{
  IOutputStorage IVar1;
  IOutputStorage *in_RDX;
  
  IVar1 = (IOutputStorage)::operator_new(0x10);
  if (IVar1 != (IOutputStorage)0x0) {
    *in_RDX = IVar1;
    *(undefined ***)IVar1 = &___7__TOutputStorage__N_Metasound__6B_;
    *(bool *)((longlong)IVar1 + 8) = this->Data;
    return (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_>)in_RDX;
  }
  *in_RDX = (IOutputStorage)0x0;
  return (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_>)in_RDX;
}

// GetDataTypeName @ 14b3aec60

FName __thiscall Metasound::TOutputStorage<int>::GetDataTypeName(TOutputStorage<int> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<int>::GetDataTypeName(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<int>::GetDataTypeName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<int>::GetDataTypeName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<int>::GetDataTypeName(void)const___ptr64'
      ::__l2::TypeName = *pFVar1;
      _Init_thread_footer(&`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<int>::GetDataTypeName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<int>::GetDataTypeName(void)const___ptr64'
       ::__l2::TypeName;
  return in_RDX;
}

// GetDataTypeName @ 14b3aece0

FName __thiscall Metasound::TOutputStorage<FString>::GetDataTypeName(TOutputStorage<FString> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<FString>::GetDataTypeName(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<FString>::GetDataTypeName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<FString>::GetDataTypeName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<FString>();
      `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<FString>::GetDataTypeName(void)const___ptr64'
      ::__l2::TypeName = *pFVar1;
      _Init_thread_footer(&`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<FString>::GetDataTypeName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<FString>::GetDataTypeName(void)const___ptr64'
       ::__l2::TypeName;
  return in_RDX;
}

// GetDataTypeName @ 14b3aed60

FName __thiscall Metasound::TOutputStorage<bool>::GetDataTypeName(TOutputStorage<bool> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<bool>::GetDataTypeName(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<bool>::GetDataTypeName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<bool>::GetDataTypeName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<bool>();
      `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<bool>::GetDataTypeName(void)const___ptr64'
      ::__l2::TypeName = *pFVar1;
      _Init_thread_footer(&`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<bool>::GetDataTypeName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<bool>::GetDataTypeName(void)const___ptr64'
       ::__l2::TypeName;
  return in_RDX;
}

