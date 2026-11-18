// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// StaticStruct @ 14ad70840

UScriptStruct * __cdecl FMetasoundFrontendInterfaceUClassOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions,
                         (UObject *)pUVar1,L"MetasoundFrontendInterfaceUClassOptions");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendInterfaceUClassOptions.OuterSingleton;
}

// FMetasoundFrontendInterfaceUClassOptions @ 14ad9ae90

FMetasoundFrontendInterfaceUClassOptions * __thiscall
FMetasoundFrontendInterfaceUClassOptions::FMetasoundFrontendInterfaceUClassOptions
          (FMetasoundFrontendInterfaceUClassOptions *this,FClassOptions *param_1)

{
  FName FVar1;
  
  FVar1 = (param_1->ClassPath).AssetName;
  (this->ClassPath).PackageName = (param_1->ClassPath).PackageName;
  (this->ClassPath).AssetName = FVar1;
  this->bIsModifiable = param_1->bIsModifiable;
  this->bIsDefault = param_1->bIsDefault;
  return this;
}

// FMetasoundFrontendInterfaceUClassOptions @ 14ad9aeb0

FMetasoundFrontendInterfaceUClassOptions * __thiscall
FMetasoundFrontendInterfaceUClassOptions::FMetasoundFrontendInterfaceUClassOptions
          (FMetasoundFrontendInterfaceUClassOptions *this,FTopLevelAssetPath *param_1,bool param_2,
          bool param_3)

{
  FName FVar1;
  FName FVar2;
  
  FVar1 = param_1->PackageName;
  FVar2 = param_1->AssetName;
  this->bIsModifiable = param_2;
  this->bIsDefault = param_3;
  (this->ClassPath).PackageName = FVar1;
  (this->ClassPath).AssetName = FVar2;
  return this;
}

