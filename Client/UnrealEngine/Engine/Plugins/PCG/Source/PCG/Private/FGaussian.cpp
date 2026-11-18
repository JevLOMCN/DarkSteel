// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// FGaussian @ 149acf7b0

FGaussian * __thiscall
PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian::FGaussian
          (FGaussian *this,TVector<double> *param_1,TMatrix<double> *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Mean).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Mean).field0_0x0._s_0.Y = dVar1;
  (this->Mean).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar1 = param_2->M[0][1];
  (this->Covariance).M[0][0] = param_2->M[0][0];
  (this->Covariance).M[0][1] = dVar1;
  dVar1 = param_2->M[0][3];
  (this->Covariance).M[0][2] = param_2->M[0][2];
  (this->Covariance).M[0][3] = dVar1;
  dVar1 = param_2->M[1][1];
  (this->Covariance).M[1][0] = param_2->M[1][0];
  (this->Covariance).M[1][1] = dVar1;
  dVar1 = param_2->M[1][3];
  (this->Covariance).M[1][2] = param_2->M[1][2];
  (this->Covariance).M[1][3] = dVar1;
  dVar1 = param_2->M[2][1];
  (this->Covariance).M[2][0] = param_2->M[2][0];
  (this->Covariance).M[2][1] = dVar1;
  dVar1 = param_2->M[2][3];
  (this->Covariance).M[2][2] = param_2->M[2][2];
  (this->Covariance).M[2][3] = dVar1;
  dVar1 = param_2->M[3][1];
  (this->Covariance).M[3][0] = param_2->M[3][0];
  (this->Covariance).M[3][1] = dVar1;
  dVar1 = param_2->M[3][3];
  (this->Covariance).M[3][2] = param_2->M[3][2];
  (this->Covariance).M[3][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->InvCovariance).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->InvCovariance).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->InvCovariance).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->InvCovariance).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->InvCovariance).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->InvCovariance).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->InvCovariance).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->InvCovariance).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->InvCovariance).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->InvCovariance).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->InvCovariance).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->InvCovariance).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->InvCovariance).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->InvCovariance).M[3][1] = dVar1;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][3];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][2];
  this->NormalizationFactor = 1.0;
  (this->InvCovariance).M[3][2] = dVar1;
  (this->InvCovariance).M[3][3] = dVar2;
  this->bDead = false;
  this->Weight = param_3;
  return this;
}

