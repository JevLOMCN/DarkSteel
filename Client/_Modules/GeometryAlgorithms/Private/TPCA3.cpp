// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 2

// Compute @ 14950fa40

bool __thiscall
UE::Geometry::TPCA3<float>::Compute
          (TPCA3<float> *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          FComputePCA3Options *param_2)

{
  bool bVar1;
  TArrayView<UE::Math::TVector<float>_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = UE::Private::PCAHelper::ComputePCA3Helper<float>
                    (&local_18,&this->Mean,&this->Eigenvectors,&this->Eigenvalues,&this->ScaleFactor
                     ,param_2);
  return bVar1;
}

// Compute @ 14950fa80

bool __thiscall
UE::Geometry::TPCA3<double>::Compute
          (TPCA3<double> *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          FComputePCA3Options *param_2)

{
  bool bVar1;
  TArrayView<UE::Math::TVector<double>_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = UE::Private::PCAHelper::ComputePCA3Helper<double>
                    (&local_18,&this->Mean,&this->Eigenvectors,&this->Eigenvalues,&this->ScaleFactor
                     ,param_2);
  return bVar1;
}

