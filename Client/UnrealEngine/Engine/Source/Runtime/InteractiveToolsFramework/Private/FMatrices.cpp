// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// FMatrices @ 149682bf0

FMatrices * __thiscall UGizmoViewContext::FMatrices::FMatrices(FMatrices *this)

{
  double dVar1;
  
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->ProjectionMatrix).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->ProjectionMatrix).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->ProjectionMatrix).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->ProjectionMatrix).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->ProjectionMatrix).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->ProjectionMatrix).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->ProjectionMatrix).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->ProjectionMatrix).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->ProjectionMatrix).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->ProjectionMatrix).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->ProjectionMatrix).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->ProjectionMatrix).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->ProjectionMatrix).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->ProjectionMatrix).M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->ProjectionMatrix).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->ProjectionMatrix).M[3][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->ViewMatrix).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->ViewMatrix).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->ViewMatrix).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->ViewMatrix).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->ViewMatrix).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->ViewMatrix).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->ViewMatrix).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->ViewMatrix).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->ViewMatrix).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->ViewMatrix).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->ViewMatrix).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->ViewMatrix).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->ViewMatrix).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->ViewMatrix).M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->ViewMatrix).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->ViewMatrix).M[3][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->InvViewMatrix).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->InvViewMatrix).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->InvViewMatrix).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->InvViewMatrix).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->InvViewMatrix).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->InvViewMatrix).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->InvViewMatrix).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->InvViewMatrix).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->InvViewMatrix).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->InvViewMatrix).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->InvViewMatrix).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->InvViewMatrix).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->InvViewMatrix).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->InvViewMatrix).M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->InvViewMatrix).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->InvViewMatrix).M[3][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->ViewProjectionMatrix).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->ViewProjectionMatrix).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->ViewProjectionMatrix).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->ViewProjectionMatrix).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->ViewProjectionMatrix).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->ViewProjectionMatrix).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->ViewProjectionMatrix).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->ViewProjectionMatrix).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->ViewProjectionMatrix).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->ViewProjectionMatrix).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->ViewProjectionMatrix).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->ViewProjectionMatrix).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->ViewProjectionMatrix).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->ViewProjectionMatrix).M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->ViewProjectionMatrix).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->ViewProjectionMatrix).M[3][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->InvViewProjectionMatrix).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->InvViewProjectionMatrix).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->InvViewProjectionMatrix).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->InvViewProjectionMatrix).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->InvViewProjectionMatrix).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->InvViewProjectionMatrix).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->InvViewProjectionMatrix).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->InvViewProjectionMatrix).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->InvViewProjectionMatrix).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->InvViewProjectionMatrix).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->InvViewProjectionMatrix).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->InvViewProjectionMatrix).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->InvViewProjectionMatrix).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->InvViewProjectionMatrix).M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->InvViewProjectionMatrix).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->InvViewProjectionMatrix).M[3][3] = dVar1;
  return this;
}

