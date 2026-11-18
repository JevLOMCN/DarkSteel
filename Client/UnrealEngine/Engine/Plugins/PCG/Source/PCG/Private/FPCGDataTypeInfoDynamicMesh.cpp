// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 149859cc0

UScriptStruct * __cdecl FPCGDataTypeInfoDynamicMesh::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoDynamicMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoDynamicMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoDynamicMesh,(UObject *)pUVar1,
                         L"PCGDataTypeInfoDynamicMesh");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoDynamicMesh.OuterSingleton;
}

// GetAssociatedClass @ 149859d00

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoDynamicMesh::GetAssociatedClass(FPCGDataTypeInfoDynamicMesh *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPCGDynamicMeshData::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// GetAssociatedLegacyType @ 149859d40

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
FPCGDataTypeInfoDynamicMesh::GetAssociatedLegacyType(FPCGDataTypeInfoDynamicMesh *this)

{
  return DynamicMesh;
}

// GetStaticAssociatedClass @ 1498c6fa0

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoDynamicMesh::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPCGDynamicMeshData::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

