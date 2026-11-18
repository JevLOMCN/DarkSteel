// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 1498589e0

UScriptStruct * __cdecl FPCGDataTypeInfoOther::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoOther.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoOther.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoOther,(UObject *)pUVar1,
                         L"PCGDataTypeInfoOther");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoOther.OuterSingleton;
}

// GetAssociatedClass @ 149858a30

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoOther::GetAssociatedClass(FPCGDataTypeInfoOther *this)

{
  TObjectPtr<UClass> in_RDX;
  
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// GetAssociatedLegacyType @ 149858a50

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall FPCGDataTypeInfoOther::GetAssociatedLegacyType(FPCGDataTypeInfoOther *this)

{
  return Other;
}

// GetStaticAssociatedClass @ 1498c7060

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoOther::GetStaticAssociatedClass(void)

{
  TObjectPtr<UClass> in_RCX;
  
  *(undefined8 *)in_RCX.field0_0x0 = 0;
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

