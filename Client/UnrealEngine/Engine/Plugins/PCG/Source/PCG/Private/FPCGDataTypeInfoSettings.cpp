// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 149f1d2b0

UScriptStruct * __cdecl FPCGDataTypeInfoSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoSettings,(UObject *)pUVar1,
                         L"PCGDataTypeInfoSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSettings.OuterSingleton;
}

// GetAssociatedClass @ 149f1d2f0

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoSettings::GetAssociatedClass(FPCGDataTypeInfoSettings *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPCGSettings::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// GetAssociatedLegacyType @ 149f1d330

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
FPCGDataTypeInfoSettings::GetAssociatedLegacyType(FPCGDataTypeInfoSettings *this)

{
  return Settings;
}

// GetStaticAssociatedClass @ 149f4f220

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoSettings::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPCGSettings::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

