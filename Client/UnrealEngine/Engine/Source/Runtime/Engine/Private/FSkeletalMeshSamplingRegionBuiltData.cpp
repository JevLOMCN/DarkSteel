// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1485e3000

UScriptStruct * __cdecl FSkeletalMeshSamplingRegionBuiltData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData,
                         (UObject *)pUVar1,L"SkeletalMeshSamplingRegionBuiltData");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData.OuterSingleton;
}

// FSkeletalMeshSamplingRegionBuiltData @ 1486220b0

FSkeletalMeshSamplingRegionBuiltData * __thiscall
FSkeletalMeshSamplingRegionBuiltData::FSkeletalMeshSamplingRegionBuiltData
          (FSkeletalMeshSamplingRegionBuiltData *this)

{
  (this->TriangleIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleIndices).ArrayNum = 0;
  (this->TriangleIndices).ArrayMax = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->BoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndices).ArrayNum = 0;
  (this->BoneIndices).ArrayMax = 0;
  FWeightedRandomSampler::FWeightedRandomSampler
            ((FWeightedRandomSampler *)&this->AreaWeightedSampler);
  (this->AreaWeightedSampler)._padding_ =
       (longlong)&___7FSkeletalMeshAreaWeightedTriangleSampler__6B_;
  (this->AreaWeightedSampler).Owner = (USkeletalMesh *)0x0;
  (this->AreaWeightedSampler).TriangleIndices = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  (this->AreaWeightedSampler).LODIndex = -1;
  return this;
}

// Serialize @ 148662fc0

bool __thiscall
FSkeletalMeshSamplingRegionBuiltData::Serialize
          (FSkeletalMeshSamplingRegionBuiltData *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraObjectVersion::GUID);
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&this->TriangleIndices);
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&this->BoneIndices);
  (**(code **)((this->AreaWeightedSampler)._padding_ + 0x18))(&this->AreaWeightedSampler,param_1);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraObjectVersion::GUID);
  if (0 < iVar1) {
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&this->Vertices);
  }
  return true;
}

