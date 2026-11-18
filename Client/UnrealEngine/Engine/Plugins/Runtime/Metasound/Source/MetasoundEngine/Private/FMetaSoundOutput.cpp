// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 13

// StaticStruct @ 14b2fcda0

UScriptStruct * __cdecl FMetaSoundOutput::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetaSoundOutput.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundEngine();
    Z_Registration_Info_UScriptStruct_FMetaSoundOutput.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundOutput,(UObject *)pUVar1,
                         L"MetaSoundOutput");
  }
  return Z_Registration_Info_UScriptStruct_FMetaSoundOutput.OuterSingleton;
}

// IsType<int> @ 14b3232f0

bool __thiscall FMetaSoundOutput::IsType<int>(FMetaSoundOutput *this)

{
  IOutputStorage *pIVar1;
  FName *pFVar2;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_bool___cdecl_FMetaSoundOutput::IsType<int>(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_bool___cdecl_FMetaSoundOutput::IsType<int>(void)const___ptr64'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<int>(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      pFVar2 = Metasound::GetMetasoundDataTypeName<int>();
      `public:_bool___cdecl_FMetaSoundOutput::IsType<int>(void)const___ptr64'::__l2::TypeName =
           *pFVar2;
      _Init_thread_footer(&`public:_bool___cdecl_FMetaSoundOutput::IsType<int>(void)const___ptr64'::
                           __l2::_thread_safe_static_guard_0__);
    }
  }
  pIVar1 = (this->Data).Ptr;
  if (pIVar1 != (IOutputStorage *)0x0) {
    pFVar2 = (FName *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<int>(void)const___ptr64'::__l2::TypeName ==
        *pFVar2) {
      return true;
    }
  }
  return false;
}

// IsType<float> @ 14b323390

bool __thiscall FMetaSoundOutput::IsType<float>(FMetaSoundOutput *this)

{
  IOutputStorage *pIVar1;
  FName *pFVar2;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_bool___cdecl_FMetaSoundOutput::IsType<float>(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_bool___cdecl_FMetaSoundOutput::IsType<float>(void)const___ptr64'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<float>(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      pFVar2 = Metasound::GetMetasoundDataTypeName<float>();
      `public:_bool___cdecl_FMetaSoundOutput::IsType<float>(void)const___ptr64'::__l2::TypeName =
           *pFVar2;
      _Init_thread_footer(&`public:_bool___cdecl_FMetaSoundOutput::IsType<float>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pIVar1 = (this->Data).Ptr;
  if (pIVar1 != (IOutputStorage *)0x0) {
    pFVar2 = (FName *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<float>(void)const___ptr64'::__l2::TypeName ==
        *pFVar2) {
      return true;
    }
  }
  return false;
}

// IsType<FString> @ 14b323430

bool __thiscall FMetaSoundOutput::IsType<FString>(FMetaSoundOutput *this)

{
  IOutputStorage *pIVar1;
  FName *pFVar2;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_bool___cdecl_FMetaSoundOutput::IsType<FString>(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_bool___cdecl_FMetaSoundOutput::IsType<FString>(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<FString>(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      pFVar2 = Metasound::GetMetasoundDataTypeName<FString>();
      `public:_bool___cdecl_FMetaSoundOutput::IsType<FString>(void)const___ptr64'::__l2::TypeName =
           *pFVar2;
      _Init_thread_footer(&`public:_bool___cdecl_FMetaSoundOutput::IsType<FString>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pIVar1 = (this->Data).Ptr;
  if (pIVar1 != (IOutputStorage *)0x0) {
    pFVar2 = (FName *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<FString>(void)const___ptr64'::__l2::TypeName
        == *pFVar2) {
      return true;
    }
  }
  return false;
}

// IsType<Metasound::FTime> @ 14b3234d0

bool __thiscall FMetaSoundOutput::IsType<Metasound::FTime>(FMetaSoundOutput *this)

{
  IOutputStorage *pIVar1;
  FName *pFVar2;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_bool___cdecl_FMetaSoundOutput::IsType<Metasound::FTime>(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_bool___cdecl_FMetaSoundOutput::IsType<Metasound::FTime>(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<Metasound::FTime>(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      pFVar2 = Metasound::GetMetasoundDataTypeName<Metasound::FTime>();
      `public:_bool___cdecl_FMetaSoundOutput::IsType<Metasound::FTime>(void)const___ptr64'::__l2::
      TypeName = *pFVar2;
      _Init_thread_footer(&`public:_bool___cdecl_FMetaSoundOutput::IsType<Metasound::FTime>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pIVar1 = (this->Data).Ptr;
  if (pIVar1 != (IOutputStorage *)0x0) {
    pFVar2 = (FName *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<Metasound::FTime>(void)const___ptr64'::__l2::
        TypeName == *pFVar2) {
      return true;
    }
  }
  return false;
}

// IsType<bool> @ 14b323570

bool __thiscall FMetaSoundOutput::IsType<bool>(FMetaSoundOutput *this)

{
  IOutputStorage *pIVar1;
  FName *pFVar2;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_bool___cdecl_FMetaSoundOutput::IsType<bool>(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_bool___cdecl_FMetaSoundOutput::IsType<bool>(void)const___ptr64'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<bool>(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      pFVar2 = Metasound::GetMetasoundDataTypeName<bool>();
      `public:_bool___cdecl_FMetaSoundOutput::IsType<bool>(void)const___ptr64'::__l2::TypeName =
           *pFVar2;
      _Init_thread_footer(&`public:_bool___cdecl_FMetaSoundOutput::IsType<bool>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pIVar1 = (this->Data).Ptr;
  if (pIVar1 != (IOutputStorage *)0x0) {
    pFVar2 = (FName *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<bool>(void)const___ptr64'::__l2::TypeName ==
        *pFVar2) {
      return true;
    }
  }
  return false;
}

// FMetaSoundOutput @ 14b34a0f0

FMetaSoundOutput * __thiscall
FMetaSoundOutput::FMetaSoundOutput(FMetaSoundOutput *this,FMetaSoundOutput *param_1)

{
  TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> *pTVar1;
  TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> *pTVar2;
  
  pTVar1 = &this->Data;
  this->_padding_ = 0;
  pTVar1->Ptr = (IOutputStorage *)0x0;
  pTVar2 = &param_1->Data;
  this->_padding_ = param_1->_padding_;
  if (pTVar1 != pTVar2) {
    pTVar1->Ptr = pTVar2->Ptr;
    pTVar2->Ptr = (IOutputStorage *)0x0;
  }
  return this;
}

// FMetaSoundOutput @ 14b34a120

FMetaSoundOutput * __thiscall
FMetaSoundOutput::FMetaSoundOutput(FMetaSoundOutput *this,FMetaSoundOutput *param_1)

{
  TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> *pTVar1;
  IOutputStorage *pIVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  
  pTVar1 = &this->Data;
  this->_padding_ = 0;
  pTVar1->Ptr = (IOutputStorage *)0x0;
  this->_padding_ = param_1->_padding_;
  pIVar2 = (param_1->Data).Ptr;
  if (pIVar2 != (IOutputStorage *)0x0) {
    puVar3 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,&local_res8);
    if (pTVar1 != (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_>
                   *)puVar3) {
      pIVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (IOutputStorage *)*puVar3;
      *puVar3 = 0;
      if (pIVar2 != (IOutputStorage *)0x0) {
        (**(code **)*pIVar2)(pIVar2,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return this;
}

// FMetaSoundOutput @ 14b34a1b0

FMetaSoundOutput * __thiscall
FMetaSoundOutput::FMetaSoundOutput
          (FMetaSoundOutput *this,FName param_1,TSharedPtr<Metasound::IOutputStorage,1> *param_2)

{
  TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> *pTVar1;
  IOutputStorage *pIVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  
  pTVar1 = &this->Data;
  pTVar1->Ptr = (IOutputStorage *)0x0;
  this->_padding_ = (longlong)param_1;
  pIVar2 = param_2->Object;
  if (pIVar2 != (IOutputStorage *)0x0) {
    puVar3 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,&local_res8);
    if (pTVar1 != (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_>
                   *)puVar3) {
      pIVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (IOutputStorage *)*puVar3;
      *puVar3 = 0;
      if (pIVar2 != (IOutputStorage *)0x0) {
        (**(code **)*pIVar2)(pIVar2,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return this;
}

// operator= @ 14b352f80

FMetaSoundOutput * __thiscall
FMetaSoundOutput::operator=(FMetaSoundOutput *this,FMetaSoundOutput *param_1)

{
  TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> *pTVar1;
  IOutputStorage *pIVar2;
  TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> *pTVar3;
  
  if (this != param_1) {
    pTVar1 = &this->Data;
    pTVar3 = &param_1->Data;
    this->_padding_ = param_1->_padding_;
    if (pTVar1 != pTVar3) {
      pIVar2 = pTVar1->Ptr;
      pTVar1->Ptr = pTVar3->Ptr;
      pTVar3->Ptr = (IOutputStorage *)0x0;
      if (pIVar2 != (IOutputStorage *)0x0) {
        (**(code **)*pIVar2)(pIVar2,1);
      }
    }
  }
  return this;
}

// operator= @ 14b352fd0

FMetaSoundOutput * __thiscall
FMetaSoundOutput::operator=(FMetaSoundOutput *this,FMetaSoundOutput *param_1)

{
  TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> *pTVar1;
  IOutputStorage *pIVar2;
  undefined8 *puVar3;
  undefined8 *local_res8 [4];
  
  if (this != param_1) {
    this->_padding_ = param_1->_padding_;
    pIVar2 = (param_1->Data).Ptr;
    if (pIVar2 != (IOutputStorage *)0x0) {
      puVar3 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,local_res8);
      pTVar1 = &this->Data;
      if (pTVar1 != (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_>
                     *)puVar3) {
        pIVar2 = pTVar1->Ptr;
        pTVar1->Ptr = (IOutputStorage *)*puVar3;
        *puVar3 = 0;
        if (pIVar2 != (IOutputStorage *)0x0) {
          (**(code **)*pIVar2)(pIVar2,1);
        }
      }
      if (local_res8[0] != (undefined8 *)0x0) {
        (**(code **)*local_res8[0])(local_res8[0],1);
      }
    }
  }
  return this;
}

// GetDataTypeName @ 14b3aede0

FName __thiscall FMetaSoundOutput::GetDataTypeName(FMetaSoundOutput *this)

{
  IOutputStorage *pIVar1;
  undefined8 *puVar2;
  FName in_RDX;
  undefined1 local_res8 [32];
  
  pIVar1 = (this->Data).Ptr;
  if (pIVar1 != (IOutputStorage *)0x0) {
    puVar2 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    *(undefined8 *)in_RDX = *puVar2;
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// IsValid @ 14b3c8f40

bool __thiscall FMetaSoundOutput::IsValid(FMetaSoundOutput *this)

{
  return (this->Data).Ptr != (IOutputStorage *)0x0;
}

