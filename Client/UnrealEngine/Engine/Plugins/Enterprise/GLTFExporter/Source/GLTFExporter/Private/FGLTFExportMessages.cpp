// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// StaticStruct @ 14e5b5500

UScriptStruct * __cdecl FGLTFExportMessages::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGLTFExportMessages.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GLTFExporter();
    Z_Registration_Info_UScriptStruct_FGLTFExportMessages.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGLTFExportMessages,(UObject *)pUVar1,
                         L"GLTFExportMessages");
  }
  return Z_Registration_Info_UScriptStruct_FGLTFExportMessages.OuterSingleton;
}

// ~FGLTFExportMessages @ 14e5d79a0

void __thiscall FGLTFExportMessages::~FGLTFExportMessages(FGLTFExportMessages *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->Errors).AllocatorInstance.Data,(this->Errors).ArrayNum);
  pFVar1 = (this->Errors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Warnings).AllocatorInstance.Data,(this->Warnings).ArrayNum);
  pFVar1 = (this->Warnings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Suggestions).AllocatorInstance.Data,(this->Suggestions).ArrayNum);
  pFVar1 = (this->Suggestions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

