// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 2

// StaticStruct @ 14c9fe8f0

UScriptStruct * __cdecl FTrackRenderData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTrackRenderData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCache();
    Z_Registration_Info_UScriptStruct_FTrackRenderData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTrackRenderData,(UObject *)pUVar1,
                         L"TrackRenderData");
  }
  return Z_Registration_Info_UScriptStruct_FTrackRenderData.OuterSingleton;
}

// FTrackRenderData @ 14ca071c0

FTrackRenderData * __thiscall FTrackRenderData::FTrackRenderData(FTrackRenderData *this)

{
  double dVar1;
  
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->Matrix).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->Matrix).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->Matrix).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->Matrix).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->Matrix).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->Matrix).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->Matrix).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->Matrix).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->Matrix).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->Matrix).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->Matrix).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->Matrix).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->Matrix).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->Matrix).M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->Matrix).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->Matrix).M[3][3] = dVar1;
  (this->BoundingBox).Min.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).IsValid = '\0';
  (this->BoundingBox).Pad[0] = '\0';
  (this->BoundingBox).Pad[1] = '\0';
  (this->BoundingBox).Pad[2] = '\0';
  (this->BoundingBox).Pad[3] = '\0';
  (this->BoundingBox).Pad[4] = '\0';
  (this->BoundingBox).Pad[5] = '\0';
  (this->BoundingBox).Pad[6] = '\0';
  this->MatrixSampleIndex = -1;
  this->BoundsSampleIndex = -1;
  return this;
}

