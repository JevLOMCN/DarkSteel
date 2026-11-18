// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 149854fb0

UScriptStruct * __cdecl FPCGDataTypeInfoSurface::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSurface.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSurface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoSurface,(UObject *)pUVar1,
                         L"PCGDataTypeInfoSurface");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSurface.OuterSingleton;
}

// GetAssociatedClass @ 149854ff0

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoSurface::GetAssociatedClass(FPCGDataTypeInfoSurface *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPCGSurfaceData::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// GetAssociatedLegacyType @ 149855030

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
FPCGDataTypeInfoSurface::GetAssociatedLegacyType(FPCGDataTypeInfoSurface *this)

{
  return Surface;
}

// GetStaticAssociatedClass @ 1498c7280

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoSurface::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPCGSurfaceData::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

