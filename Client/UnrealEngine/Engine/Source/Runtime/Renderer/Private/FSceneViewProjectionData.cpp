// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FSceneViewProjectionData @ 145478610

FSceneViewProjectionData * __thiscall
FSceneViewProjectionData::FSceneViewProjectionData(FSceneViewProjectionData *this)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ViewOrigin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ViewOrigin).field0_0x0._s_0.Y = (double)uVar1;
  (this->ViewOrigin).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->ViewRotationMatrix).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->ViewRotationMatrix).M[0][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->ViewRotationMatrix).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->ViewRotationMatrix).M[0][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->ViewRotationMatrix).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->ViewRotationMatrix).M[1][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->ViewRotationMatrix).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->ViewRotationMatrix).M[1][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->ViewRotationMatrix).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->ViewRotationMatrix).M[2][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->ViewRotationMatrix).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->ViewRotationMatrix).M[2][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->ViewRotationMatrix).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->ViewRotationMatrix).M[3][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->ViewRotationMatrix).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->ViewRotationMatrix).M[3][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->ProjectionMatrix).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->ProjectionMatrix).M[0][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->ProjectionMatrix).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->ProjectionMatrix).M[0][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->ProjectionMatrix).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->ProjectionMatrix).M[1][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->ProjectionMatrix).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->ProjectionMatrix).M[1][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->ProjectionMatrix).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->ProjectionMatrix).M[2][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->ProjectionMatrix).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->ProjectionMatrix).M[2][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->ProjectionMatrix).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->ProjectionMatrix).M[3][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->ProjectionMatrix).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->ProjectionMatrix).M[3][3] = dVar2;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CameraToViewTarget).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CameraToViewTarget).field0_0x0._s_0.Y = (double)uVar1;
  (this->CameraToViewTarget).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ConstrainedViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ConstrainedViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  return this;
}

