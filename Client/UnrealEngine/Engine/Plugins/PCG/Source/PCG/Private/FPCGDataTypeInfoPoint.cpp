// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// StaticStruct @ 14978d230

UScriptStruct * __cdecl FPCGDataTypeInfoPoint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPoint.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPoint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoPoint,(UObject *)pUVar1,
                         L"PCGDataTypeInfoPoint");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPoint.OuterSingleton;
}

// GetAssociatedClass @ 14978d270

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoPoint::GetAssociatedClass(FPCGDataTypeInfoPoint *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPCGBasePointData::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// GetAssociatedLegacyType @ 14978d2b0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall FPCGDataTypeInfoPoint::GetAssociatedLegacyType(FPCGDataTypeInfoPoint *this)

{
  return Point;
}

// SupportsConversionTo @ 14978d300

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
FPCGDataTypeInfoPoint::SupportsConversionTo
          (FPCGDataTypeInfoPoint *this,FPCGDataTypeIdentifier *param_1,
          FPCGDataTypeIdentifier *param_2,TSubclassOf<UPCGSettings> *param_3,FText *param_4)

{
  bool bVar1;
  UClass *pUVar2;
  FPCGDataTypeIdentifier local_28;
  
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
  bVar1 = FPCGDataTypeIdentifier::IsSameType(param_2,&local_28);
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  if (bVar1) {
    if (param_3 != (TSubclassOf<UPCGSettings> *)0x0) {
      pUVar2 = Z_Construct_UClass_UPCGConvertToAttributeSetSettings_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (param_3->Class).field0_0x0.DebugPtr = pUVar2;
    }
    bVar1 = true;
  }
  else {
    bVar1 = FPCGDataTypeInfoSpatial::SupportsConversionTo
                      ((FPCGDataTypeInfoSpatial *)this,param_1,param_2,param_3,param_4);
  }
  return bVar1;
}

// GetStaticAssociatedClass @ 14981b860

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoPoint::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPCGBasePointData::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

