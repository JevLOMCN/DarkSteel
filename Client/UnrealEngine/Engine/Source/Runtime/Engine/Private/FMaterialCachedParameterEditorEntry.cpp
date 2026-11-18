// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147eeb3b0

UScriptStruct * __cdecl FMaterialCachedParameterEditorEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEditorEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEditorEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry,
                         (UObject *)pUVar1,L"MaterialCachedParameterEditorEntry");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEditorEntry.OuterSingleton;
}

// FMaterialCachedParameterEditorEntry @ 147ef0080

FMaterialCachedParameterEditorEntry * __thiscall
FMaterialCachedParameterEditorEntry::FMaterialCachedParameterEditorEntry
          (FMaterialCachedParameterEditorEntry *this)

{
  (this->EditorInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorInfo).ArrayNum = 0;
  (this->EditorInfo).ArrayMax = 0;
  return this;
}

// ~FMaterialCachedParameterEditorEntry @ 147ef2640

void __thiscall
FMaterialCachedParameterEditorEntry::~FMaterialCachedParameterEditorEntry
          (FMaterialCachedParameterEditorEntry *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMaterialCachedParameterEditorInfo,int>
            ((FMaterialCachedParameterEditorInfo *)(this->EditorInfo).AllocatorInstance.Data,
             (this->EditorInfo).ArrayNum);
  pFVar1 = (this->EditorInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

