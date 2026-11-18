// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 14985a100

UScriptStruct * __cdecl FPCGDataTypeInfoLandscapeSpline::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscapeSpline.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscapeSpline.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscapeSpline,(UObject *)pUVar1
                         ,L"PCGDataTypeInfoLandscapeSpline");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscapeSpline.OuterSingleton;
}

// GetAssociatedClass @ 14985a140

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoLandscapeSpline::GetAssociatedClass(FPCGDataTypeInfoLandscapeSpline *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPCGLandscapeSplineData::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// GetAssociatedLegacyType @ 14985a180

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
FPCGDataTypeInfoLandscapeSpline::GetAssociatedLegacyType(FPCGDataTypeInfoLandscapeSpline *this)

{
  return LandscapeSpline;
}

// GetStaticAssociatedClass @ 1498c7020

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoLandscapeSpline::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPCGLandscapeSplineData::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

