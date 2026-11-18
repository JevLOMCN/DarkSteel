// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// FNodeClassRegistryTransaction @ 14ae5a690

FNodeClassRegistryTransaction * __thiscall
Metasound::Frontend::FNodeClassRegistryTransaction::FNodeClassRegistryTransaction
          (FNodeClassRegistryTransaction *this,ETransactionType param_1,FNodeClassInfo *param_2,
          ulong64 param_3)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this->Type = param_1;
  FVar1 = (param_2->ClassName).Name;
  (this->NodeClassInfo).ClassName.Namespace = (param_2->ClassName).Namespace;
  (this->NodeClassInfo).ClassName.Name = FVar1;
  (this->NodeClassInfo).ClassName.Variant = (param_2->ClassName).Variant;
  (this->NodeClassInfo).Type = param_2->Type;
  uVar2 = (param_2->AssetClassID).B;
  uVar3 = (param_2->AssetClassID).C;
  uVar4 = (param_2->AssetClassID).D;
  (this->NodeClassInfo).AssetClassID.A = (param_2->AssetClassID).A;
  (this->NodeClassInfo).AssetClassID.B = uVar2;
  (this->NodeClassInfo).AssetClassID.C = uVar3;
  (this->NodeClassInfo).AssetClassID.D = uVar4;
  FVar1 = (param_2->AssetPath).AssetName;
  (this->NodeClassInfo).AssetPath.PackageName = (param_2->AssetPath).PackageName;
  (this->NodeClassInfo).AssetPath.AssetName = FVar1;
  (this->NodeClassInfo).Version = param_2->Version;
  this->Timestamp = param_3;
  return this;
}

// GetNodeClassInfo @ 14ae77470

FNodeClassInfo * __thiscall
Metasound::Frontend::FNodeClassRegistryTransaction::GetNodeClassInfo
          (FNodeClassRegistryTransaction *this)

{
  return &this->NodeClassInfo;
}

// GetNodeRegistryKey @ 14ae775e0

FNodeClassRegistryKey * __thiscall
Metasound::Frontend::FNodeClassRegistryTransaction::GetNodeRegistryKey
          (FNodeClassRegistryTransaction *this,FNodeClassRegistryKey *__return_storage_ptr__)

{
  FName FVar1;
  EMetasoundFrontendClassType EVar2;
  FMetasoundFrontendVersionNumber FVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  FNodeClassRegistryKey *pFVar7;
  
  EVar2 = (this->NodeClassInfo).Type;
  FVar1 = (this->NodeClassInfo).ClassName.Variant;
  FVar3 = (this->NodeClassInfo).Version;
  __return_storage_ptr__->Type = EVar2;
  __return_storage_ptr__->Version = FVar3;
  FVar5 = (this->NodeClassInfo).ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace = (this->NodeClassInfo).ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  (__return_storage_ptr__->ClassName).Variant = FVar1;
  if (EVar2 == Graph) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InClassInfo.Type != EMetasoundFrontendClassType::Graph",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                       ,0xb8,
                       L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FNodeClassRegistryKey *)(*pcVar4)();
      return pFVar7;
    }
  }
  return __return_storage_ptr__;
}

// GetTimestamp @ 14ae787c0

ulong64 __thiscall
Metasound::Frontend::FNodeClassRegistryTransaction::GetTimestamp
          (FNodeClassRegistryTransaction *this)

{
  return this->Timestamp;
}

// GetTransactionType @ 14ae78970

ETransactionType __thiscall
Metasound::Frontend::FNodeClassRegistryTransaction::GetTransactionType
          (FNodeClassRegistryTransaction *this)

{
  return this->Type;
}

// LexToString @ 14ae7ba90

FString * __cdecl
Metasound::Frontend::FNodeClassRegistryTransaction::LexToString
          (FString *__return_storage_ptr__,ETransactionType param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (param_1 == NodeRegistration) {
    ::FString::FString(__return_storage_ptr__,L"Node Registration");
    return __return_storage_ptr__;
  }
  if (param_1 == NodeUnregistration) {
    ::FString::FString(__return_storage_ptr__,L"Node Unregistration");
    return __return_storage_ptr__;
  }
  if (param_1 == NodeMigrationRegistration) {
    ::FString::FString(__return_storage_ptr__,L"Node Migration Registration");
    return __return_storage_ptr__;
  }
  if (param_1 != NodeMigrationUnregistration) {
    if (param_1 == Invalid) {
      ::FString::FString(__return_storage_ptr__,L"Invalid");
      return __return_storage_ptr__;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundFrontendNodeClassRegistry.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    ::FString::FString(__return_storage_ptr__,L"");
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Node Migration Unregistration");
  return __return_storage_ptr__;
}

