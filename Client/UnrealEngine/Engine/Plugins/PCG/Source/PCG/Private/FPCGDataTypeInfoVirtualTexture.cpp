// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 1498594d0

UScriptStruct * __cdecl FPCGDataTypeInfoVirtualTexture::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVirtualTexture.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVirtualTexture.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoVirtualTexture,(UObject *)pUVar1,
                         L"PCGDataTypeInfoVirtualTexture");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVirtualTexture.OuterSingleton;
}

// GetAssociatedClass @ 149859510

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoVirtualTexture::GetAssociatedClass(FPCGDataTypeInfoVirtualTexture *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPCGVirtualTextureData::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// GetAssociatedLegacyType @ 149859550

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
FPCGDataTypeInfoVirtualTexture::GetAssociatedLegacyType(FPCGDataTypeInfoVirtualTexture *this)

{
  return VirtualTexture;
}

// GetStaticAssociatedClass @ 1498c7300

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoVirtualTexture::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPCGVirtualTextureData::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

