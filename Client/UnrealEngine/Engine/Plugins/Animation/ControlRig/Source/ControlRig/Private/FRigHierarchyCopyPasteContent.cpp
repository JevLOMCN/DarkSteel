// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2c6fa0

UScriptStruct * __cdecl FRigHierarchyCopyPasteContent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyCopyPasteContent.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigHierarchyCopyPasteContent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent,(UObject *)pUVar1,
                         L"RigHierarchyCopyPasteContent");
  }
  return Z_Registration_Info_UScriptStruct_FRigHierarchyCopyPasteContent.OuterSingleton;
}

// ~FRigHierarchyCopyPasteContent @ 14a2dec30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigHierarchyCopyPasteContent::~FRigHierarchyCopyPasteContent(FRigHierarchyCopyPasteContent *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GlobalTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LocalTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Contents).AllocatorInstance.Data,(this->Contents).ArrayNum);
  pFVar1 = (this->Contents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Types).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigHierarchyCopyPasteContentPerElement,int>
            ((FRigHierarchyCopyPasteContentPerElement *)(this->Elements).AllocatorInstance.Data,
             (this->Elements).ArrayNum);
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

