// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 18

// Clone @ 14b368660

TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
 __thiscall
Metasound::TMetasoundEnvironmentVariable<int>::Clone(TMetasoundEnvironmentVariable<int> *this)

{
  IMetasoundEnvironmentVariable IVar1;
  IMetasoundEnvironmentVariable *in_RDX;
  
  IVar1 = (IMetasoundEnvironmentVariable)::operator_new(0x18);
  if (IVar1 != (IMetasoundEnvironmentVariable)0x0) {
    *in_RDX = IVar1;
    *(undefined ***)IVar1 = &___7__TMetasoundEnvironmentVariable_H_Metasound__6B_;
    *(FName *)((longlong)IVar1 + 8) = this->Name;
    *(int *)((longlong)IVar1 + 0x10) = this->Value;
    return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
            )in_RDX;
  }
  *in_RDX = (IMetasoundEnvironmentVariable)0x0;
  return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          )in_RDX;
}

// Clone @ 14b3686d0

TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
 __thiscall
Metasound::TMetasoundEnvironmentVariable<unsigned_int>::Clone
          (TMetasoundEnvironmentVariable<unsigned_int> *this)

{
  IMetasoundEnvironmentVariable IVar1;
  IMetasoundEnvironmentVariable *in_RDX;
  
  IVar1 = (IMetasoundEnvironmentVariable)::operator_new(0x18);
  if (IVar1 != (IMetasoundEnvironmentVariable)0x0) {
    *in_RDX = IVar1;
    *(undefined ***)IVar1 = &___7__TMetasoundEnvironmentVariable_I_Metasound__6B_;
    *(FName *)((longlong)IVar1 + 8) = this->Name;
    *(uint *)((longlong)IVar1 + 0x10) = this->Value;
    return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
            )in_RDX;
  }
  *in_RDX = (IMetasoundEnvironmentVariable)0x0;
  return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          )in_RDX;
}

// Clone @ 14b368740

TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
 __thiscall
Metasound::TMetasoundEnvironmentVariable<float>::Clone(TMetasoundEnvironmentVariable<float> *this)

{
  IMetasoundEnvironmentVariable IVar1;
  IMetasoundEnvironmentVariable *in_RDX;
  
  IVar1 = (IMetasoundEnvironmentVariable)::operator_new(0x18);
  if (IVar1 != (IMetasoundEnvironmentVariable)0x0) {
    *in_RDX = IVar1;
    *(undefined ***)IVar1 = &___7__TMetasoundEnvironmentVariable_M_Metasound__6B_;
    *(FName *)((longlong)IVar1 + 8) = this->Name;
    *(float *)((longlong)IVar1 + 0x10) = this->Value;
    return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
            )in_RDX;
  }
  *in_RDX = (IMetasoundEnvironmentVariable)0x0;
  return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          )in_RDX;
}

// Clone @ 14b3687b0

TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
 __thiscall
Metasound::TMetasoundEnvironmentVariable<FString>::Clone
          (TMetasoundEnvironmentVariable<FString> *this)

{
  IMetasoundEnvironmentVariable IVar1;
  IMetasoundEnvironmentVariable *in_RDX;
  
  IVar1 = (IMetasoundEnvironmentVariable)::operator_new(0x20);
  if (IVar1 != (IMetasoundEnvironmentVariable)0x0) {
    *(undefined ***)IVar1 = &___7__TMetasoundEnvironmentVariable_VFString___Metasound__6B_;
    *(FName *)((longlong)IVar1 + 8) = this->Name;
    ::FString::FString((FString *)((longlong)IVar1 + 0x10),&this->Value);
    *in_RDX = IVar1;
    return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
            )in_RDX;
  }
  *in_RDX = (IMetasoundEnvironmentVariable)0x0;
  return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          )in_RDX;
}

// Clone @ 14b368830

TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
 __thiscall
Metasound::TMetasoundEnvironmentVariable<unsigned___int64>::Clone
          (TMetasoundEnvironmentVariable<unsigned___int64> *this)

{
  IMetasoundEnvironmentVariable IVar1;
  IMetasoundEnvironmentVariable *in_RDX;
  
  IVar1 = (IMetasoundEnvironmentVariable)::operator_new(0x18);
  if (IVar1 != (IMetasoundEnvironmentVariable)0x0) {
    *in_RDX = IVar1;
    *(undefined ***)IVar1 = &___7__TMetasoundEnvironmentVariable__K_Metasound__6B_;
    *(FName *)((longlong)IVar1 + 8) = this->Name;
    *(ulong64 *)((longlong)IVar1 + 0x10) = this->Value;
    return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
            )in_RDX;
  }
  *in_RDX = (IMetasoundEnvironmentVariable)0x0;
  return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          )in_RDX;
}

// Clone @ 14b3688a0

TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
 __thiscall
Metasound::TMetasoundEnvironmentVariable<bool>::Clone(TMetasoundEnvironmentVariable<bool> *this)

{
  IMetasoundEnvironmentVariable IVar1;
  IMetasoundEnvironmentVariable *in_RDX;
  
  IVar1 = (IMetasoundEnvironmentVariable)::operator_new(0x18);
  if (IVar1 != (IMetasoundEnvironmentVariable)0x0) {
    *in_RDX = IVar1;
    *(undefined ***)IVar1 = &___7__TMetasoundEnvironmentVariable__N_Metasound__6B_;
    *(FName *)((longlong)IVar1 + 8) = this->Name;
    *(bool *)((longlong)IVar1 + 0x10) = this->Value;
    return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
            )in_RDX;
  }
  *in_RDX = (IMetasoundEnvironmentVariable)0x0;
  return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          )in_RDX;
}

// GetName @ 14b3b6d20

FName * __thiscall
Metasound::TMetasoundEnvironmentVariable<int>::GetName(TMetasoundEnvironmentVariable<int> *this)

{
  return &this->Name;
}

// GetName @ 14b3b6d30

FName * __thiscall
Metasound::TMetasoundEnvironmentVariable<unsigned_int>::GetName
          (TMetasoundEnvironmentVariable<unsigned_int> *this)

{
  return &this->Name;
}

// GetName @ 14b3b6d40

FName * __thiscall
Metasound::TMetasoundEnvironmentVariable<float>::GetName(TMetasoundEnvironmentVariable<float> *this)

{
  return &this->Name;
}

// GetName @ 14b3b6d50

FName * __thiscall
Metasound::TMetasoundEnvironmentVariable<FString>::GetName
          (TMetasoundEnvironmentVariable<FString> *this)

{
  return &this->Name;
}

// GetName @ 14b3b6d60

FName * __thiscall
Metasound::TMetasoundEnvironmentVariable<unsigned___int64>::GetName
          (TMetasoundEnvironmentVariable<unsigned___int64> *this)

{
  return &this->Name;
}

// GetName @ 14b3b6d70

FName * __thiscall
Metasound::TMetasoundEnvironmentVariable<bool>::GetName(TMetasoundEnvironmentVariable<bool> *this)

{
  return &this->Name;
}

// GetTypeId @ 14b3c1f50

void * __thiscall
Metasound::TMetasoundEnvironmentVariable<int>::GetTypeId(TMetasoundEnvironmentVariable<int> *this)

{
  return &TEnvironmentVariableTypeInfo<int>::TypePtr;
}

// GetTypeId @ 14b3c1f60

void * __thiscall
Metasound::TMetasoundEnvironmentVariable<unsigned_int>::GetTypeId
          (TMetasoundEnvironmentVariable<unsigned_int> *this)

{
  return &TEnvironmentVariableTypeInfo<unsigned_int>::TypePtr;
}

// GetTypeId @ 14b3c1f70

void * __thiscall
Metasound::TMetasoundEnvironmentVariable<float>::GetTypeId
          (TMetasoundEnvironmentVariable<float> *this)

{
  return &TEnvironmentVariableTypeInfo<float>::TypePtr;
}

// GetTypeId @ 14b3c1f80

void * __thiscall
Metasound::TMetasoundEnvironmentVariable<FString>::GetTypeId
          (TMetasoundEnvironmentVariable<FString> *this)

{
  return &TEnvironmentVariableTypeInfo<FString>::TypePtr;
}

// GetTypeId @ 14b3c1f90

void * __thiscall
Metasound::TMetasoundEnvironmentVariable<unsigned___int64>::GetTypeId
          (TMetasoundEnvironmentVariable<unsigned___int64> *this)

{
  return &TEnvironmentVariableTypeInfo<unsigned___int64>::TypePtr;
}

// GetTypeId @ 14b3c1fa0

void * __thiscall
Metasound::TMetasoundEnvironmentVariable<bool>::GetTypeId(TMetasoundEnvironmentVariable<bool> *this)

{
  return &TEnvironmentVariableTypeInfo<bool>::TypePtr;
}

