// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 149854e10

UScriptStruct * __cdecl FPCGDataTypeInfoBaseTexture2D::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoBaseTexture2D.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoBaseTexture2D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoBaseTexture2D,(UObject *)pUVar1,
                         L"PCGDataTypeInfoBaseTexture2D");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoBaseTexture2D.OuterSingleton;
}

// GetAssociatedClass @ 149854e50

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoBaseTexture2D::GetAssociatedClass(FPCGDataTypeInfoBaseTexture2D *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPCGBaseTextureData::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// GetAssociatedLegacyType @ 149854e90

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
FPCGDataTypeInfoBaseTexture2D::GetAssociatedLegacyType(FPCGDataTypeInfoBaseTexture2D *this)

{
  return BaseTexture;
}

// GetStaticAssociatedClass @ 1498c6f20

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoBaseTexture2D::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPCGBaseTextureData::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

