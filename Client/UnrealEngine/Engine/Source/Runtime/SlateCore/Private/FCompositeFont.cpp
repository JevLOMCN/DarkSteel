// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// StaticStruct @ 14245a100

UScriptStruct * __cdecl FCompositeFont::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCompositeFont.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FCompositeFont.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCompositeFont,(UObject *)pUVar1,L"CompositeFont"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FCompositeFont.OuterSingleton;
}

// ~FCompositeFont @ 142478d20

void __thiscall FCompositeFont::~FCompositeFont(FCompositeFont *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FCompositeSubFont,int>
            ((FCompositeSubFont *)(this->SubTypefaces).AllocatorInstance.Data,
             (this->SubTypefaces).ArrayNum);
  pFVar1 = (this->SubTypefaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FTypefaceEntry,int>
            ((FTypefaceEntry *)(this->FallbackTypeface).Typeface.Fonts.AllocatorInstance.Data,
             (this->FallbackTypeface).Typeface.Fonts.ArrayNum);
  pFVar1 = (this->FallbackTypeface).Typeface.Fonts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FTypefaceEntry,int>
            ((FTypefaceEntry *)(this->DefaultTypeface).Fonts.AllocatorInstance.Data,
             (this->DefaultTypeface).Fonts.ArrayNum);
  pFVar1 = (this->DefaultTypeface).Fonts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

