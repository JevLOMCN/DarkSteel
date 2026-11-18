// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// FInterfaceRegistryTransaction @ 14ad99620

FInterfaceRegistryTransaction * __thiscall
Metasound::Frontend::FInterfaceRegistryTransaction::FInterfaceRegistryTransaction
          (FInterfaceRegistryTransaction *this,ETransactionType param_1,FString *param_2,
          FMetasoundFrontendVersion *param_3,ulong64 param_4)

{
  FName FVar1;
  FMetasoundFrontendVersionNumber FVar2;
  
  this->Type = param_1;
  ::FString::FString(&this->Key,param_2);
  FVar1 = param_3->Name;
  FVar2 = param_3->Number;
  this->Timestamp = param_4;
  (this->InterfaceVersion).Name = FVar1;
  (this->InterfaceVersion).Number = FVar2;
  return this;
}

// GetInterfaceRegistryKey @ 14adbf700

FString * __thiscall
Metasound::Frontend::FInterfaceRegistryTransaction::GetInterfaceRegistryKey
          (FInterfaceRegistryTransaction *this)

{
  return &this->Key;
}

// GetInterfaceVersion @ 14adbfaf0

FMetasoundFrontendVersion * __thiscall
Metasound::Frontend::FInterfaceRegistryTransaction::GetInterfaceVersion
          (FInterfaceRegistryTransaction *this)

{
  return &this->InterfaceVersion;
}

// GetTimestamp @ 14adc2f40

ulong64 __thiscall
Metasound::Frontend::FInterfaceRegistryTransaction::GetTimestamp
          (FInterfaceRegistryTransaction *this)

{
  return this->Timestamp;
}

// GetTransactionType @ 14adc2f50

ETransactionType __thiscall
Metasound::Frontend::FInterfaceRegistryTransaction::GetTransactionType
          (FInterfaceRegistryTransaction *this)

{
  return this->Type;
}

