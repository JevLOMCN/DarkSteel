// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 7

// TOutputStorage<Metasound::FAudioBuffer> @ 14ad94d00

TOutputStorage<Metasound::FAudioBuffer> * __thiscall
Metasound::TOutputStorage<Metasound::FAudioBuffer>::TOutputStorage<Metasound::FAudioBuffer>
          (TOutputStorage<Metasound::FAudioBuffer> *this,FAudioBuffer *param_1)

{
  FAudioBuffer *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pFVar1 = &this->Data;
  this->_padding_ = (longlong)&___7__TOutputStorage_VFAudioBuffer_Metasound___Metasound__6B_;
  (pFVar1->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).Buffer.ArrayMax;
  iVar3 = (param_1->Buffer).ArrayNum;
  _Src = (param_1->Buffer).AllocatorInstance.Data;
  (this->Data).Buffer.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)pFVar1,iVar3,piVar2);
    memcpy((pFVar1->Buffer).AllocatorInstance.Data,_Src,(longlong)iVar3 << 2);
  }
  (this->Data).InitialNum = param_1->InitialNum;
  return this;
}

// Clone @ 14ada79b0

TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> __thiscall
Metasound::TOutputStorage<float>::Clone(TOutputStorage<float> *this)

{
  IOutputStorage IVar1;
  IOutputStorage *in_RDX;
  
  IVar1 = (IOutputStorage)::operator_new(0x10);
  if (IVar1 != (IOutputStorage)0x0) {
    *in_RDX = IVar1;
    *(undefined ***)IVar1 = &___7__TOutputStorage_M_Metasound__6B_;
    *(float *)((longlong)IVar1 + 8) = this->Data;
    return (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_>)in_RDX;
  }
  *in_RDX = (IOutputStorage)0x0;
  return (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_>)in_RDX;
}

// Clone @ 14ada7a10

TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> __thiscall
Metasound::TOutputStorage<Metasound::FAudioBuffer>::Clone
          (TOutputStorage<Metasound::FAudioBuffer> *this)

{
  TOutputStorage<Metasound::FAudioBuffer> *this_00;
  IOutputStorage IVar1;
  IOutputStorage *in_RDX;
  
  this_00 = ::operator_new(0x20);
  if (this_00 != (TOutputStorage<Metasound::FAudioBuffer> *)0x0) {
    IVar1 = (IOutputStorage)TOutputStorage<Metasound::FAudioBuffer>(this_00,&this->Data);
    *in_RDX = IVar1;
    return (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_>)in_RDX;
  }
  *in_RDX = (IOutputStorage)0x0;
  return (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_>)in_RDX;
}

// Clone @ 14ada7a70

TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> __thiscall
Metasound::TOutputStorage<Metasound::FTime>::Clone(TOutputStorage<Metasound::FTime> *this)

{
  IOutputStorage IVar1;
  IOutputStorage *in_RDX;
  
  IVar1 = (IOutputStorage)::operator_new(0x10);
  if (IVar1 != (IOutputStorage)0x0) {
    *in_RDX = IVar1;
    *(undefined ***)IVar1 = &___7__TOutputStorage_VFTime_Metasound___Metasound__6B_;
    *(double *)((longlong)IVar1 + 8) = (this->Data).Time;
    return (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_>)in_RDX;
  }
  *in_RDX = (IOutputStorage)0x0;
  return (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_>)in_RDX;
}

// GetDataTypeName @ 14adbdb80

FName __thiscall Metasound::TOutputStorage<float>::GetDataTypeName(TOutputStorage<float> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<float>::GetDataTypeName(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<float>::GetDataTypeName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<float>::GetDataTypeName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<float>();
      `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<float>::GetDataTypeName(void)const___ptr64'
      ::__l2::TypeName = *pFVar1;
      _Init_thread_footer(&`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<float>::GetDataTypeName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<float>::GetDataTypeName(void)const___ptr64'
       ::__l2::TypeName;
  return in_RDX;
}

// GetDataTypeName @ 14adbdc00

FName __thiscall
Metasound::TOutputStorage<Metasound::FAudioBuffer>::GetDataTypeName
          (TOutputStorage<Metasound::FAudioBuffer> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<Metasound::FAudioBuffer>::GetDataTypeName(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<Metasound::FAudioBuffer>::GetDataTypeName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<Metasound::FAudioBuffer>::GetDataTypeName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
      `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<Metasound::FAudioBuffer>::GetDataTypeName(void)const___ptr64'
      ::__l2::TypeName = *pFVar1;
      _Init_thread_footer(&`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<Metasound::FAudioBuffer>::GetDataTypeName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<Metasound::FAudioBuffer>::GetDataTypeName(void)const___ptr64'
       ::__l2::TypeName;
  return in_RDX;
}

// GetDataTypeName @ 14adbdc80

FName __thiscall
Metasound::TOutputStorage<Metasound::FTime>::GetDataTypeName(TOutputStorage<Metasound::FTime> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<Metasound::FTime>::GetDataTypeName(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<Metasound::FTime>::GetDataTypeName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<Metasound::FTime>::GetDataTypeName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::FTime>();
      `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<Metasound::FTime>::GetDataTypeName(void)const___ptr64'
      ::__l2::TypeName = *pFVar1;
      _Init_thread_footer(&`public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<Metasound::FTime>::GetDataTypeName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_virtual_class_FName___cdecl_Metasound::TOutputStorage<Metasound::FTime>::GetDataTypeName(void)const___ptr64'
       ::__l2::TypeName;
  return in_RDX;
}

