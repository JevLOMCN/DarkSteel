// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// StaticStruct @ 149859890

UScriptStruct * __cdecl FPCGDataTypeInfoPolygon2D::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolygon2D.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolygon2D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoPolygon2D,(UObject *)pUVar1,
                         L"PCGDataTypeInfoPolygon2D");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolygon2D.OuterSingleton;
}

// GetAssociatedClass @ 1498598d0

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoPolygon2D::GetAssociatedClass(FPCGDataTypeInfoPolygon2D *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPCGPolygon2DData::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// GetAssociatedLegacyType @ 149859910

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
FPCGDataTypeInfoPolygon2D::GetAssociatedLegacyType(FPCGDataTypeInfoPolygon2D *this)

{
  return Polygon2D;
}

// SupportsConversionTo @ 149859920

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
FPCGDataTypeInfoPolygon2D::SupportsConversionTo
          (FPCGDataTypeInfoPolygon2D *this,FPCGDataTypeIdentifier *param_1,
          FPCGDataTypeIdentifier *param_2,TSubclassOf<UPCGSettings> *param_3,FText *param_4)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UClass *pUVar3;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  undefined1 local_38 [8];
  FPCGDataTypeIdentifier local_30;
  undefined8 uVar7;
  
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_30,Surface);
  bVar2 = FPCGDataTypeIdentifier::IsValid(param_2);
  iVar5 = local_30.Ids.ArrayNum;
  iVar6 = iVar5;
  if (bVar2) {
LAB_1498599a5:
    if ((param_2->Ids).ArrayNum == iVar6) {
      bVar2 = FPCGDataTypeIdentifier::SupportsType(param_2,&local_30);
      if (bVar2) goto LAB_1498599bc;
    }
    bVar2 = false;
  }
  else {
    if (iVar5 != 0) {
      pFVar1 = local_30.Ids.AllocatorInstance.Data + (longlong)iVar5 * 8;
      FVar4.Data = local_30.Ids.AllocatorInstance.Data;
      uVar7 = local_30.Ids._8_8_;
      while( true ) {
        if ((int)uVar7 != iVar5) {
          `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_38);
          uVar7 = local_30.Ids._8_8_;
        }
        iVar6 = (int)uVar7;
        if (FVar4.Data == pFVar1) goto LAB_1498599a5;
        if (*(longlong *)FVar4.Data == 0) break;
        FVar4.Data = FVar4.Data + 8;
      }
    }
LAB_1498599bc:
    bVar2 = true;
  }
  if (local_30.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Ids.AllocatorInstance.Data);
  }
  if (bVar2) {
    if (param_3 != (TSubclassOf<UPCGSettings> *)0x0) {
      pUVar3 = Z_Construct_UClass_UPCGCreateSurfaceFromPolygon2DSettings_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (param_3->Class).field0_0x0.DebugPtr = pUVar3;
    }
    bVar2 = true;
  }
  else {
    bVar2 = FPCGDataTypeInfoSpatial::SupportsConversionTo
                      ((FPCGDataTypeInfoSpatial *)this,param_1,param_2,param_3,param_4);
  }
  return bVar2;
}

// GetStaticAssociatedClass @ 1498c7080

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoPolygon2D::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPCGPolygon2DData::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

