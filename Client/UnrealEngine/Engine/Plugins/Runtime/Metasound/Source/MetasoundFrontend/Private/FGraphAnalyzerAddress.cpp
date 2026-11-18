// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 7

// ~FGraphAnalyzerAddress @ 14ad9e190

void __thiscall
Metasound::Frontend::FGraphAnalyzerAddress::~FGraphAnalyzerAddress(FGraphAnalyzerAddress *this)

{
  return;
}

// Clone @ 14ada7b70

TUniquePtr<Metasound::FTransmissionAddress,TDefaultDelete<Metasound::FTransmissionAddress>_>
__thiscall Metasound::Frontend::FGraphAnalyzerAddress::Clone(FGraphAnalyzerAddress *this)

{
  FTransmissionAddress FVar1;
  FTransmissionAddress *in_RDX;
  
  FVar1 = (FTransmissionAddress)::operator_new(0x10);
  if (FVar1 != (FTransmissionAddress)0x0) {
    *in_RDX = FVar1;
    *(undefined ***)FVar1 = &___7FGraphAnalyzerAddress_Frontend_Metasound__6B_;
    *(ulong64 *)((longlong)FVar1 + 8) = this->InstanceID;
    return (TUniquePtr<Metasound::FTransmissionAddress,TDefaultDelete<Metasound::FTransmissionAddress>_>
            )in_RDX;
  }
  *in_RDX = (FTransmissionAddress)0x0;
  return (TUniquePtr<Metasound::FTransmissionAddress,TDefaultDelete<Metasound::FTransmissionAddress>_>
          )in_RDX;
}

// GetAddressType @ 14adbc070

FName __thiscall
Metasound::Frontend::FGraphAnalyzerAddress::GetAddressType(FGraphAnalyzerAddress *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GraphAnalyzer");
  return in_RDX;
}

// GetDataType @ 14adbd930

FName __thiscall
Metasound::Frontend::FGraphAnalyzerAddress::GetDataType(FGraphAnalyzerAddress *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                     ();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// GetHash @ 14adbf100

uint __thiscall Metasound::Frontend::FGraphAnalyzerAddress::GetHash(FGraphAnalyzerAddress *this)

{
  return (uint)this->InstanceID;
}

// IsEqual @ 14adc6d20

bool __thiscall
Metasound::Frontend::FGraphAnalyzerAddress::IsEqual
          (FGraphAnalyzerAddress *this,FTransmissionAddress *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 8))(this,local_res8);
  plVar2 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1,local_res10);
  if (*plVar2 != *plVar1) {
    return false;
  }
  return param_1[1] == (FTransmissionAddress)this->InstanceID;
}

// ToString @ 14add1a80

FString * __thiscall
Metasound::Frontend::FGraphAnalyzerAddress::ToString
          (FGraphAnalyzerAddress *this,FString *__return_storage_ptr__)

{
  FName *this_00;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = (FName *)(**(code **)(this->_padding_ + 8))(this,local_res8);
  ::FName::ToString(this_00,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s%lld");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

