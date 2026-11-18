// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 2

// StaticStruct @ 14a873ef0

UScriptStruct * __cdecl FEnumColumnBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnumColumnBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FEnumColumnBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnumColumnBase,(UObject *)pUVar1,
                         L"EnumColumnBase");
  }
  return Z_Registration_Info_UScriptStruct_FEnumColumnBase.OuterSingleton;
}

// EnumChanged @ 14a885b70

void __thiscall FEnumColumnBase::EnumChanged(FEnumColumnBase *this,UEnum *param_1)

{
  return;
}

