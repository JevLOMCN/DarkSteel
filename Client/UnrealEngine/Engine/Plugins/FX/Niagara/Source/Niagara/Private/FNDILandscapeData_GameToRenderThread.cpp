// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FNDILandscapeData_GameToRenderThread @ 149168f90

FNDILandscapeData_GameToRenderThread * __thiscall
FNDILandscapeData_GameToRenderThread::FNDILandscapeData_GameToRenderThread
          (FNDILandscapeData_GameToRenderThread *this)

{
  double dVar1;
  
  this->TextureResources = (FLandscapeTextureResource *)0x0;
  *(undefined8 *)&(this->CachedHeightTextureLWCTile).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->CachedHeightTextureLWCTile).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->CachedHeightTextureWorldToUvTransform).M[0][0] =
       UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->CachedHeightTextureWorldToUvTransform).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->CachedHeightTextureWorldToUvTransform).M[0][2] =
       UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->CachedHeightTextureWorldToUvTransform).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->CachedHeightTextureWorldToUvTransform).M[1][0] =
       UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->CachedHeightTextureWorldToUvTransform).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->CachedHeightTextureWorldToUvTransform).M[1][2] =
       UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->CachedHeightTextureWorldToUvTransform).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->CachedHeightTextureWorldToUvTransform).M[2][0] =
       UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->CachedHeightTextureWorldToUvTransform).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->CachedHeightTextureWorldToUvTransform).M[2][2] =
       UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->CachedHeightTextureWorldToUvTransform).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->CachedHeightTextureWorldToUvTransform).M[3][0] =
       UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->CachedHeightTextureWorldToUvTransform).M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->CachedHeightTextureWorldToUvTransform).M[3][2] =
       UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->CachedHeightTextureWorldToUvTransform).M[3][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->CachedHeightTextureUvToWorldTransform).M[0][0] =
       UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->CachedHeightTextureUvToWorldTransform).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->CachedHeightTextureUvToWorldTransform).M[0][2] =
       UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->CachedHeightTextureUvToWorldTransform).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->CachedHeightTextureUvToWorldTransform).M[1][0] =
       UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->CachedHeightTextureUvToWorldTransform).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->CachedHeightTextureUvToWorldTransform).M[1][2] =
       UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->CachedHeightTextureUvToWorldTransform).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->CachedHeightTextureUvToWorldTransform).M[2][0] =
       UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->CachedHeightTextureUvToWorldTransform).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->CachedHeightTextureUvToWorldTransform).M[2][2] =
       UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->CachedHeightTextureUvToWorldTransform).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->CachedHeightTextureUvToWorldTransform).M[3][0] =
       UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->CachedHeightTextureUvToWorldTransform).M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->CachedHeightTextureUvToWorldTransform).M[3][2] =
       UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->CachedHeightTextureUvToWorldTransform).M[3][3] = dVar1;
  (this->CachedHeightTextureWorldGridSize).field0_0x0._s_0.X = 1.0;
  (this->CachedHeightTextureWorldGridSize).field0_0x0._s_0.Y = 1.0;
  (this->CachedHeightTextureUvScaleBias).field0_0x0._s_0.X = 0.0;
  (this->CachedHeightTextureUvScaleBias).field0_0x0._s_0.Y = 0.0;
  (this->CachedHeightTextureUvScaleBias).field0_0x0._s_0.Z = 0.0;
  (this->CachedHeightTextureUvScaleBias).field0_0x0._s_0.W = 0.0;
  (this->RegionRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegionRequests).ArrayNum = 0;
  (this->RegionRequests).ArrayMax = 0;
  this->BaseColorVirtualTextureUnpackType = None;
  return this;
}

