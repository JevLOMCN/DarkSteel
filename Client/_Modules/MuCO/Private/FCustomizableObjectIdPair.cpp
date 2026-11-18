// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// StaticStruct @ 14aba89c0

UScriptStruct * __cdecl FCustomizableObjectIdPair::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomizableObjectIdPair.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FCustomizableObjectIdPair.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectIdPair,(UObject *)pUVar1,
                         L"CustomizableObjectIdPair");
  }
  return Z_Registration_Info_UScriptStruct_FCustomizableObjectIdPair.OuterSingleton;
}

// FCustomizableObjectIdPair @ 14abbc3f0

FCustomizableObjectIdPair * __thiscall
FCustomizableObjectIdPair::FCustomizableObjectIdPair
          (FCustomizableObjectIdPair *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  
  ::FString::FString(&this->CustomizableObjectGroupName,param_1);
  ::FString::FString(&this->CustomizableObjectName,param_2);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

