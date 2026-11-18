// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 2

// StaticStruct @ 14446d890

UScriptStruct * __cdecl FPropertyPathTestBaseStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyPathTestBaseStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PropertyPath();
    Z_Registration_Info_UScriptStruct_FPropertyPathTestBaseStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestBaseStruct,(UObject *)pUVar1,
                         L"PropertyPathTestBaseStruct");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyPathTestBaseStruct.OuterSingleton;
}

// ~FPropertyPathTestBaseStruct @ 14448a860

void __thiscall
FPropertyPathTestBaseStruct::~FPropertyPathTestBaseStruct(FPropertyPathTestBaseStruct *this)

{
  *this = (FPropertyPathTestBaseStruct)&___7FPropertyPathTestBaseStruct__6B_;
  return;
}

