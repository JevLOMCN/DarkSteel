// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 149855db0

UScriptStruct * __cdecl FPCGDataTypeInfoRenderTarget2D::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRenderTarget2D.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRenderTarget2D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoRenderTarget2D,(UObject *)pUVar1,
                         L"PCGDataTypeInfoRenderTarget2D");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRenderTarget2D.OuterSingleton;
}

// GetAssociatedClass @ 149855e20

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoRenderTarget2D::GetAssociatedClass(FPCGDataTypeInfoRenderTarget2D *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPCGRenderTargetData::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// GetAssociatedLegacyType @ 149855e60

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
FPCGDataTypeInfoRenderTarget2D::GetAssociatedLegacyType(FPCGDataTypeInfoRenderTarget2D *this)

{
  return RenderTarget;
}

// GetStaticAssociatedClass @ 1498c7140

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoRenderTarget2D::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPCGRenderTargetData::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

