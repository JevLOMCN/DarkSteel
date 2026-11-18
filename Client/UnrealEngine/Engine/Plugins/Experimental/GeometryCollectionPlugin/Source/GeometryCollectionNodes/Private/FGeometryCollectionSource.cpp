// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 2

// FGeometryCollectionSource @ 14e91e420

FGeometryCollectionSource * __thiscall
FGeometryCollectionSource::FGeometryCollectionSource
          (FGeometryCollectionSource *this,FGeometryCollectionSource *param_1)

{
  FUtf8String *pFVar1;
  int *piVar2;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FName FVar7;
  double dVar8;
  
  FVar7 = (param_1->SourceGeometryObject).AssetPath.AssetName;
  pFVar1 = &(this->SourceGeometryObject).SubPathString;
  piVar2 = &(this->SourceGeometryObject).SubPathString.Data.ArrayMax;
  (this->SourceGeometryObject).AssetPath.PackageName =
       (param_1->SourceGeometryObject).AssetPath.PackageName;
  (this->SourceGeometryObject).AssetPath.AssetName = FVar7;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->SourceGeometryObject).SubPathString.Data.ArrayNum;
  pFVar6 = (param_1->SourceGeometryObject).SubPathString.Data.AllocatorInstance.Data;
  (this->SourceGeometryObject).SubPathString.Data.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,(ForAnyElementType *)pFVar1,iVar5,piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,pFVar6,(longlong)iVar5);
  }
  dVar8 = (param_1->LocalTransform).Rotation.XY.m128d_f64[1];
  pTVar3 = &this->SourceMaterial;
  piVar2 = &(this->SourceMaterial).ArrayMax;
  (this->LocalTransform).Rotation.XY.m128d_f64[0] =
       (param_1->LocalTransform).Rotation.XY.m128d_f64[0];
  (this->LocalTransform).Rotation.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->LocalTransform).Rotation.ZW.m128d_f64[1];
  (this->LocalTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->LocalTransform).Rotation.ZW.m128d_f64[0];
  (this->LocalTransform).Rotation.ZW.m128d_f64[1] = dVar8;
  dVar8 = (param_1->LocalTransform).Translation.XY.m128d_f64[1];
  (this->LocalTransform).Translation.XY.m128d_f64[0] =
       (param_1->LocalTransform).Translation.XY.m128d_f64[0];
  (this->LocalTransform).Translation.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->LocalTransform).Translation.ZW.m128d_f64[1];
  (this->LocalTransform).Translation.ZW.m128d_f64[0] =
       (param_1->LocalTransform).Translation.ZW.m128d_f64[0];
  (this->LocalTransform).Translation.ZW.m128d_f64[1] = dVar8;
  dVar8 = (param_1->LocalTransform).Scale3D.XY.m128d_f64[1];
  (this->LocalTransform).Scale3D.XY.m128d_f64[0] = (param_1->LocalTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->LocalTransform).Scale3D.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[1];
  (this->LocalTransform).Scale3D.ZW.m128d_f64[0] = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->LocalTransform).Scale3D.ZW.m128d_f64[1] = dVar8;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->SourceMaterial).ArrayNum;
  pFVar6 = (param_1->SourceMaterial).AllocatorInstance.Data;
  (this->SourceMaterial).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar3->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar6,iVar5);
  }
  pTVar4 = &this->InstanceCustomData;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InstanceCustomData).ArrayMax;
  iVar5 = (param_1->InstanceCustomData).ArrayNum;
  pFVar6 = (param_1->InstanceCustomData).AllocatorInstance.Data;
  (this->InstanceCustomData).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  this->bAddInternalMaterials = param_1->bAddInternalMaterials;
  this->bSplitComponents = param_1->bSplitComponents;
  this->bSetInternalFromMaterialIndex = param_1->bSetInternalFromMaterialIndex;
  return this;
}

// ~FGeometryCollectionSource @ 14e9333b0

void __thiscall
FGeometryCollectionSource::~FGeometryCollectionSource(FGeometryCollectionSource *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->InstanceCustomData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceMaterial).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceGeometryObject).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

