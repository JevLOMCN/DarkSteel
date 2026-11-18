// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 14985a370

UScriptStruct * __cdecl FPCGDataTypeInfoStaticMeshResource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoStaticMeshResource.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoStaticMeshResource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoStaticMeshResource,
                         (UObject *)pUVar1,L"PCGDataTypeInfoStaticMeshResource");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoStaticMeshResource.OuterSingleton;
}

// GetAssociatedClass @ 14985a3b0

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoStaticMeshResource::GetAssociatedClass(FPCGDataTypeInfoStaticMeshResource *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPCGStaticMeshResourceData::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// GetAssociatedLegacyType @ 14985a3f0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
FPCGDataTypeInfoStaticMeshResource::GetAssociatedLegacyType
          (FPCGDataTypeInfoStaticMeshResource *this)

{
  return Resource;
}

// GetStaticAssociatedClass @ 1498c7240

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoStaticMeshResource::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPCGStaticMeshResourceData::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

