// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 149789890

UScriptStruct * __cdecl FPCGDataTypeInfoProxyForGPU::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoProxyForGPU.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoProxyForGPU.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoProxyForGPU,(UObject *)pUVar1,
                         L"PCGDataTypeInfoProxyForGPU");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoProxyForGPU.OuterSingleton;
}

// GetAssociatedClass @ 1497898d0

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoProxyForGPU::GetAssociatedClass(FPCGDataTypeInfoProxyForGPU *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPCGProxyForGPUData::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// GetAssociatedLegacyType @ 149789910

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
FPCGDataTypeInfoProxyForGPU::GetAssociatedLegacyType(FPCGDataTypeInfoProxyForGPU *this)

{
  return ProxyForGPU;
}

// GetStaticAssociatedClass @ 14981b8a0

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoProxyForGPU::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPCGProxyForGPUData::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

