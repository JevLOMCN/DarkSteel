// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149721770

UScriptStruct * __cdecl FPCGDataTableRowToParamDataTestStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTableRowToParamDataTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTableRowToParamDataTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct,
                         (UObject *)pUVar1,L"PCGDataTableRowToParamDataTestStruct");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTableRowToParamDataTestStruct.OuterSingleton;
}

// FPCGDataTableRowToParamDataTestStruct @ 1497253b0

FPCGDataTableRowToParamDataTestStruct * __thiscall
FPCGDataTableRowToParamDataTestStruct::FPCGDataTableRowToParamDataTestStruct
          (FPCGDataTableRowToParamDataTestStruct *this)

{
  undefined8 uVar1;
  
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  ::FString::FString(&this->String,"");
  this->I32 = 0;
  this->I64 = 0;
  this->F32 = 0.0;
  this->F64 = 0.0;
  (this->V2).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->V3).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->V3).field0_0x0._s_0.Y = (double)uVar1;
  (this->V3).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->V4).field0_0x0._s_0.X = 0.0;
  (this->V4).field0_0x0._s_0.Y = 0.0;
  (this->V4).field0_0x0._s_0.Z = 0.0;
  (this->V4).field0_0x0._s_0.W = 0.0;
  (this->SoftPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->SoftPath).AssetPath.PackageName.Number = 0;
  (this->SoftPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->SoftPath).AssetPath.AssetName.Number = 0;
  (this->SoftPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftPath).SubPathString.Data.ArrayNum = 0;
  (this->SoftPath).SubPathString.Data.ArrayMax = 0;
  return this;
}

