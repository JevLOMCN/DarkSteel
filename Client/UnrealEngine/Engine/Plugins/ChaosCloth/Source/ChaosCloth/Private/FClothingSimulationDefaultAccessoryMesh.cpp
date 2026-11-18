// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 13

// FClothingSimulationDefaultAccessoryMesh @ 14db8f9e0

FClothingSimulationDefaultAccessoryMesh * __thiscall
Chaos::FClothingSimulationDefaultAccessoryMesh::FClothingSimulationDefaultAccessoryMesh
          (FClothingSimulationDefaultAccessoryMesh *this,FClothingSimulationMesh *param_1,
          int param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FClothingSimulationAccessoryMesh_Chaos__6B_;
  this->_padding_ = (longlong)DefaultAccessoryMeshName;
  this->_padding_ = (longlong)&___7FClothingSimulationDefaultAccessoryMesh_Chaos__6B_;
  this->LODIndex = param_2;
  return this;
}

// ~FClothingSimulationDefaultAccessoryMesh @ 14db9f710

void __thiscall
Chaos::FClothingSimulationDefaultAccessoryMesh::~FClothingSimulationDefaultAccessoryMesh
          (FClothingSimulationDefaultAccessoryMesh *this)

{
  this->_padding_ = (longlong)&___7FClothingSimulationAccessoryMesh_Chaos__6B_;
  return;
}

// FindMorphTargetByName @ 14dbf3450

int __thiscall
Chaos::FClothingSimulationDefaultAccessoryMesh::FindMorphTargetByName
          (FClothingSimulationDefaultAccessoryMesh *this,FString *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014dbf3461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x100))
                    ((longlong *)this->_padding_,this->LODIndex,param_1);
  return iVar1;
}

// GetAllMorphTargetNames @ 14dbf6c90

TArrayView<FString_const_,int> * __thiscall
Chaos::FClothingSimulationDefaultAccessoryMesh::GetAllMorphTargetNames
          (FClothingSimulationDefaultAccessoryMesh *this,
          TArrayView<FString_const_,int> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x108))
            ((longlong *)this->_padding_,__return_storage_ptr__,this->LODIndex);
  return __return_storage_ptr__;
}

// GetBoneData @ 14dbf7cd0

TArrayView<FClothVertBoneData_const_,int> * __thiscall
Chaos::FClothingSimulationDefaultAccessoryMesh::GetBoneData
          (FClothingSimulationDefaultAccessoryMesh *this,
          TArrayView<FClothVertBoneData_const_,int> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->_padding_ + 0xd8))
            ((longlong *)this->_padding_,__return_storage_ptr__,this->LODIndex);
  return __return_storage_ptr__;
}

// GetMorphTargetIndices @ 14dbfc9b0

TArrayView<int_const_,int> * __thiscall
Chaos::FClothingSimulationDefaultAccessoryMesh::GetMorphTargetIndices
          (FClothingSimulationDefaultAccessoryMesh *this,
          TArrayView<int_const_,int> *__return_storage_ptr__,int param_1)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x120))
            ((longlong *)this->_padding_,__return_storage_ptr__,this->LODIndex,param_1);
  return __return_storage_ptr__;
}

// GetMorphTargetPositionDeltas @ 14dbfca20

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
Chaos::FClothingSimulationDefaultAccessoryMesh::GetMorphTargetPositionDeltas
          (FClothingSimulationDefaultAccessoryMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,int param_1)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x110))
            ((longlong *)this->_padding_,__return_storage_ptr__,this->LODIndex,param_1);
  return __return_storage_ptr__;
}

// GetMorphTargetTangentZDeltas @ 14dbfca90

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
Chaos::FClothingSimulationDefaultAccessoryMesh::GetMorphTargetTangentZDeltas
          (FClothingSimulationDefaultAccessoryMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,int param_1)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x118))
            ((longlong *)this->_padding_,__return_storage_ptr__,this->LODIndex,param_1);
  return __return_storage_ptr__;
}

// GetNormals @ 14dbfcae0

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
Chaos::FClothingSimulationDefaultAccessoryMesh::GetNormals
          (FClothingSimulationDefaultAccessoryMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x50))
            ((longlong *)this->_padding_,__return_storage_ptr__,this->LODIndex);
  return __return_storage_ptr__;
}

// GetNumPatternPoints @ 14dbfd090

int __thiscall
Chaos::FClothingSimulationDefaultAccessoryMesh::GetNumPatternPoints
          (FClothingSimulationDefaultAccessoryMesh *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014dbfd09a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x38))
                    ((longlong *)this->_padding_,this->LODIndex);
  return iVar1;
}

// GetNumPoints @ 14dbfd0c0

int __thiscall
Chaos::FClothingSimulationDefaultAccessoryMesh::GetNumPoints
          (FClothingSimulationDefaultAccessoryMesh *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014dbfd0ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x30))
                    ((longlong *)this->_padding_,this->LODIndex);
  return iVar1;
}

// GetPatternPositions @ 14dbfeb60

TArrayView<UE::Math::TVector2<float>_const_,int> * __thiscall
Chaos::FClothingSimulationDefaultAccessoryMesh::GetPatternPositions
          (FClothingSimulationDefaultAccessoryMesh *this,
          TArrayView<UE::Math::TVector2<float>_const_,int> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x48))
            ((longlong *)this->_padding_,__return_storage_ptr__,this->LODIndex);
  return __return_storage_ptr__;
}

// GetPositions @ 14dbfebd0

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
Chaos::FClothingSimulationDefaultAccessoryMesh::GetPositions
          (FClothingSimulationDefaultAccessoryMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x40))
            ((longlong *)this->_padding_,__return_storage_ptr__,this->LODIndex);
  return __return_storage_ptr__;
}

