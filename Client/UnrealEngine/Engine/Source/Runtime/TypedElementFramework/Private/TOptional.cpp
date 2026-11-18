// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 2

// Emplace<UE::Editor::DataStorage::Queries::FConditions_const_&> @ 142c8d260

FConditions * __thiscall
TOptional<UE::Editor::DataStorage::Queries::FConditions>::
Emplace<UE::Editor::DataStorage::Queries::FConditions_const_&>
          (TOptional<UE::Editor::DataStorage::Queries::FConditions> *this,FConditions *param_1)

{
  ForElementType<FName> FVar1;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar2;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags> FVar3;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar4;
  FConditions *pFVar5;
  
  if (this->bIsSet != false) {
    FVar1 = (this->TypedValue).Identifiers.AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<FName>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    FVar2 = (this->TypedValue).Tokens.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar3 = (this->TypedValue).ColumnFlags.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    FVar4 = (this->TypedValue).Columns.AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      FMemory::Free((void *)FVar4);
    }
  }
  pFVar5 = UE::Editor::DataStorage::Queries::FConditions::FConditions(&this->TypedValue,param_1);
  this->bIsSet = true;
  return pFVar5;
}

// ~TOptional<UE::Editor::DataStorage::Queries::FConditions> @ 142c99160

void __thiscall
TOptional<UE::Editor::DataStorage::Queries::FConditions>::
~TOptional<UE::Editor::DataStorage::Queries::FConditions>
          (TOptional<UE::Editor::DataStorage::Queries::FConditions> *this)

{
  ForElementType<FName> FVar1;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar2;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags> FVar3;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar4;
  
  if (this->bIsSet != false) {
    FVar1 = (this->TypedValue).Identifiers.AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<FName>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    FVar2 = (this->TypedValue).Tokens.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar3 = (this->TypedValue).ColumnFlags.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    FVar4 = (this->TypedValue).Columns.AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      FMemory::Free((void *)FVar4);
      return;
    }
  }
  return;
}

