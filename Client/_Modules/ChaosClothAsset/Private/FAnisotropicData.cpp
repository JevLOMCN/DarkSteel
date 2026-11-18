// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 4

// FAnisotropicData @ 14db3a900

FAnisotropicData * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::FAnisotropicData::FAnisotropicData
          (FAnisotropicData *this,float *param_1)

{
  this->Weft = *param_1;
  this->Warp = *param_1;
  this->Bias = *param_1;
  return this;
}

// FAnisotropicData @ 14db3a920

FAnisotropicData * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::FAnisotropicData::FAnisotropicData
          (FAnisotropicData *this,TVector<float> *param_1)

{
  this->Weft = (param_1->field0_0x0)._s_0.X;
  this->Warp = (param_1->field0_0x0)._s_0.Y;
  this->Bias = (param_1->field0_0x0)._s_0.Z;
  return this;
}

// FAnisotropicData @ 14db3a940

FAnisotropicData * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::FAnisotropicData::FAnisotropicData
          (FAnisotropicData *this,float param_1,float param_2,float param_3)

{
  this->Weft = param_1;
  this->Warp = param_2;
  this->Bias = param_3;
  return this;
}

// GetVectorDatas @ 14db61400

TVector<float> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::FAnisotropicData::GetVectorDatas
          (FAnisotropicData *this,TVector<float> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = this->Weft;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = this->Warp;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = this->Bias;
  return __return_storage_ptr__;
}

