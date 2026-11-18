// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 67

// FConstClothCollection<FManagedArrayCollection_const_> @ 14db232a0

FConstClothCollection * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::FConstClothCollection<FManagedArrayCollection_const_>
          (FConstClothCollection *this,TSharedRef<FManagedArrayCollection_const_,1> *param_1,
          TProtectedInit param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FManagedArrayCollection *pFVar2;
  TManagedArray<FSoftObjectPath> *pTVar3;
  TManagedArray<FName> *pTVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  FValueType *pFVar6;
  TManagedArray<UE::Math::TIntVector2<int>_> *pTVar7;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar8;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar9;
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar10;
  TManagedArray<FLinearColor> *pTVar11;
  TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *pTVar12;
  TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *pTVar13;
  FValueType *pFVar14;
  FValueType *pFVar15;
  FName local_18;
  FName local_10;
  
  (this->ManagedArrayCollection).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ManagedArrayCollection).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = FManagedArrayCollection::FindAttribute<FSoftObjectPath>
                     ((this->ManagedArrayCollection).Object,
                      ClothCollectionAttribute::PhysicsAssetSoftObjectPathName,
                      ClothCollectionGroup::Lods);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->PhysicsAssetSoftObjectPathName = pTVar3;
  pTVar3 = FManagedArrayCollection::FindAttribute<FSoftObjectPath>
                     (pFVar2,ClothCollectionAttribute::SkeletalMeshSoftObjectPathName,
                      ClothCollectionGroup::Lods);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SkeletalMeshSoftObjectPathName = pTVar3;
  pTVar4 = FManagedArrayCollection::FindAttribute<FName>
                     (pFVar2,ClothCollectionAttribute::ReferenceBoneName,ClothCollectionGroup::Lods)
  ;
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->ReferenceBoneName = pTVar4;
  local_18 = ClothCollectionAttribute::SolverGravity;
  local_10 = ClothCollectionGroup::Solvers;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar14 = (FValueType *)0x0;
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SolverGravity = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SolverAirDamping;
  local_10 = ClothCollectionGroup::Solvers;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SolverAirDamping = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::SolverSubSteps;
  local_10 = ClothCollectionGroup::Solvers;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SolverSubSteps = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SolverTimeStep;
  local_10 = ClothCollectionGroup::Solvers;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SolverTimeStep = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::SeamStitchStart;
  local_10 = ClothCollectionGroup::Seams;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SeamStitchStart = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SeamStitchEnd;
  local_10 = ClothCollectionGroup::Seams;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SeamStitchEnd = (TManagedArray<int> *)pFVar6;
  pTVar7 = FManagedArrayCollection::FindAttribute<UE::Math::TIntVector2<int>_>
                     (pFVar2,ClothCollectionAttribute::SeamStitch2DEndIndices,
                      ClothCollectionGroup::SeamStitches);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SeamStitch2DEndIndices = pTVar7;
  local_18 = ClothCollectionAttribute::SeamStitch3DIndex;
  local_10 = ClothCollectionGroup::SeamStitches;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SeamStitch3DIndex = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimVertices2DStart;
  local_10 = ClothCollectionGroup::SimPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimVertices2DStart = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimVertices2DEnd;
  local_10 = ClothCollectionGroup::SimPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimVertices2DEnd = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimFacesStart;
  local_10 = ClothCollectionGroup::SimPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimFacesStart = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimFacesEnd;
  local_10 = ClothCollectionGroup::SimPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimFacesEnd = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimPatternFabric;
  local_10 = ClothCollectionGroup::SimPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimPatternFabric = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderVerticesStart;
  local_10 = ClothCollectionGroup::RenderPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderVerticesStart = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderVerticesEnd;
  local_10 = ClothCollectionGroup::RenderPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderVerticesEnd = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderFacesStart;
  local_10 = ClothCollectionGroup::RenderPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderFacesStart = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderFacesEnd;
  local_10 = ClothCollectionGroup::RenderPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderFacesEnd = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderDeformerNumInfluences;
  local_10 = ClothCollectionGroup::RenderPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderDeformerNumInfluences = (TManagedArray<int> *)pFVar6;
  pTVar3 = FManagedArrayCollection::FindAttribute<FSoftObjectPath>
                     (pFVar2,ClothCollectionAttribute::RenderMaterialSoftObjectPathName,
                      ClothCollectionGroup::RenderPatterns);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderMaterialSoftObjectPathName = pTVar3;
  local_18 = ClothCollectionAttribute::FabricBendingStiffness;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricBendingStiffness = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricBucklingStiffness;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricBucklingStiffness = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricStretchStiffness;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricStretchStiffness = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricBucklingRatio;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricBucklingRatio = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricDensity;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricDensity = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricFriction;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricFriction = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricDamping;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricDamping = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricPressure;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricPressure = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricLayer;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricLayer = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricCollisionThickness;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricCollisionThickness = (TManagedArray<float> *)pFVar6;
  pTVar8 = FManagedArrayCollection::FindAttribute<UE::Math::TIntVector3<int>_>
                     (pFVar2,ClothCollectionAttribute::SimIndices2D,ClothCollectionGroup::SimFaces);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimIndices2D = pTVar8;
  pTVar8 = FManagedArrayCollection::FindAttribute<UE::Math::TIntVector3<int>_>
                     (pFVar2,ClothCollectionAttribute::SimIndices3D,ClothCollectionGroup::SimFaces);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimIndices3D = pTVar8;
  local_18 = ClothCollectionAttribute::SimPosition2D;
  local_10 = ClothCollectionGroup::SimVertices2D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector2<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimPosition2D = (TManagedArray<UE::Math::TVector2<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimVertex3DLookup;
  local_10 = ClothCollectionGroup::SimVertices2D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimVertex3DLookup = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimImportVertexID;
  local_10 = ClothCollectionGroup::SimVertices2D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimImportVertexID = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimPosition3D;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimPosition3D = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::PreResizedSimPosition3D;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->PreResizedSimPosition3D = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimNormal;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimNormal = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimBoneIndices;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::
             GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimBoneIndices = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  pTVar9 = FManagedArrayCollection::FindAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (pFVar2,ClothCollectionAttribute::SimBoneWeights,
                      ClothCollectionGroup::SimVertices3D);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimBoneWeights = pTVar9;
  local_18 = ClothCollectionAttribute::TetherKinematicIndex;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::
             GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->TetherKinematicIndex = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  pTVar9 = FManagedArrayCollection::FindAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (pFVar2,ClothCollectionAttribute::TetherReferenceLength,
                      ClothCollectionGroup::SimVertices3D);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->TetherReferenceLength = pTVar9;
  local_18 = ClothCollectionAttribute::SimVertex2DLookup;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::
             GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimVertex2DLookup = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SeamStitchLookup;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::
             GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SeamStitchLookup = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimCustomResizingBlend;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimCustomResizingBlend = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimMorphTargetName;
  local_10 = ClothCollectionGroup::SimMorphTargets;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<FString>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimMorphTargetName = (TManagedArray<FString> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimMorphTargetVerticesStart;
  local_10 = ClothCollectionGroup::SimMorphTargets;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimMorphTargetVerticesStart = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimMorphTargetVerticesEnd;
  local_10 = ClothCollectionGroup::SimMorphTargets;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimMorphTargetVerticesEnd = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimMorphTargetPositionDelta;
  local_10 = ClothCollectionGroup::SimMorphTargetVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimMorphTargetPositionDelta = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimMorphTargetTangentZDelta;
  local_10 = ClothCollectionGroup::SimMorphTargetVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimMorphTargetTangentZDelta = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimMorphTargetSimVertex3DIndex;
  local_10 = ClothCollectionGroup::SimMorphTargetVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimMorphTargetSimVertex3DIndex = (TManagedArray<int> *)pFVar6;
  pTVar8 = FManagedArrayCollection::FindAttribute<UE::Math::TIntVector3<int>_>
                     (pFVar2,ClothCollectionAttribute::RenderIndices,
                      ClothCollectionGroup::RenderFaces);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderIndices = pTVar8;
  local_18 = ClothCollectionAttribute::RenderPosition;
  local_10 = ClothCollectionGroup::RenderVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderPosition = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderNormal;
  local_10 = ClothCollectionGroup::RenderVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderNormal = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderTangentU;
  local_10 = ClothCollectionGroup::RenderVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderTangentU = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderTangentV;
  local_10 = ClothCollectionGroup::RenderVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderTangentV = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  pTVar10 = FManagedArrayCollection::
            FindAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                      (pFVar2,ClothCollectionAttribute::RenderUVs,
                       ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderUVs = pTVar10;
  pTVar11 = FManagedArrayCollection::FindAttribute<FLinearColor>
                      (pFVar2,ClothCollectionAttribute::RenderColor,
                       ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderColor = pTVar11;
  local_18 = ClothCollectionAttribute::RenderBoneIndices;
  local_10 = ClothCollectionGroup::RenderVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::
             GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderBoneIndices = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  pTVar9 = FManagedArrayCollection::FindAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (pFVar2,ClothCollectionAttribute::RenderBoneWeights,
                      ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderBoneWeights = pTVar9;
  pTVar12 = FManagedArrayCollection::
            FindAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                      (pFVar2,ClothCollectionAttribute::RenderDeformerPositionBaryCoordsAndDist,
                       ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderDeformerPositionBaryCoordsAndDist = pTVar12;
  pTVar12 = FManagedArrayCollection::
            FindAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                      (pFVar2,ClothCollectionAttribute::RenderDeformerNormalBaryCoordsAndDist,
                       ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderDeformerNormalBaryCoordsAndDist = pTVar12;
  pTVar12 = FManagedArrayCollection::
            FindAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                      (pFVar2,ClothCollectionAttribute::RenderDeformerTangentBaryCoordsAndDist,
                       ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderDeformerTangentBaryCoordsAndDist = pTVar12;
  pTVar13 = FManagedArrayCollection::
            FindAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                      (pFVar2,ClothCollectionAttribute::RenderDeformerSimIndices3D,
                       ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderDeformerSimIndices3D = pTVar13;
  pTVar9 = FManagedArrayCollection::FindAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (pFVar2,ClothCollectionAttribute::RenderDeformerWeight,
                      ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderDeformerWeight = pTVar9;
  local_18 = ClothCollectionAttribute::RenderDeformerSkinningBlend;
  local_10 = ClothCollectionGroup::RenderVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderDeformerSkinningBlend = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderCustomResizingBlend;
  local_10 = ClothCollectionGroup::RenderVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderCustomResizingBlend = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::CustomResizingRegionSet;
  local_10 = ClothCollectionGroup::CustomResizingRegions;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<FString>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->CustomResizingRegionSet = (TManagedArray<FString> *)pFVar6;
  local_18 = ClothCollectionAttribute::CustomResizingRegionType;
  local_10 = ClothCollectionGroup::CustomResizingRegions;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  if (pFVar15 != (FValueType *)0x0) {
    pFVar14 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->CustomResizingRegionType = (TManagedArray<int> *)pFVar14;
  pTVar4 = FManagedArrayCollection::FindAttribute<FName>
                     (pFVar2,ClothCollectionAttribute::SimAccessoryMeshName,
                      ClothCollectionGroup::SimAccessoryMeshes);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimAccessoryMeshName = pTVar4;
  pTVar4 = FManagedArrayCollection::FindAttribute<FName>
                     (pFVar2,ClothCollectionAttribute::SimAccessoryMeshPosition3DAttribute,
                      ClothCollectionGroup::SimAccessoryMeshes);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimAccessoryMeshPosition3DAttribute = pTVar4;
  pTVar4 = FManagedArrayCollection::FindAttribute<FName>
                     (pFVar2,ClothCollectionAttribute::SimAccessoryMeshNormalAttribute,
                      ClothCollectionGroup::SimAccessoryMeshes);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimAccessoryMeshNormalAttribute = pTVar4;
  pTVar4 = FManagedArrayCollection::FindAttribute<FName>
                     (pFVar2,ClothCollectionAttribute::SimAccessoryMeshBoneIndicesAttribute,
                      ClothCollectionGroup::SimAccessoryMeshes);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimAccessoryMeshBoneIndicesAttribute = pTVar4;
  pTVar4 = FManagedArrayCollection::FindAttribute<FName>
                     (pFVar2,ClothCollectionAttribute::SimAccessoryMeshBoneWeightsAttribute,
                      ClothCollectionGroup::SimAccessoryMeshes);
  this->SimAccessoryMeshBoneWeightsAttribute = pTVar4;
  return this;
}

// FConstClothCollection<FManagedArrayCollection> @ 14db24780

FConstClothCollection * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::FConstClothCollection<FManagedArrayCollection>
          (FConstClothCollection *this,TSharedRef<FManagedArrayCollection,1> *param_1,
          TProtectedInit param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FManagedArrayCollection *pFVar2;
  TManagedArray<FSoftObjectPath> *pTVar3;
  TManagedArray<FName> *pTVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  FValueType *pFVar6;
  TManagedArray<UE::Math::TIntVector2<int>_> *pTVar7;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar8;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar9;
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar10;
  TManagedArray<FLinearColor> *pTVar11;
  TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *pTVar12;
  TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *pTVar13;
  FValueType *pFVar14;
  FValueType *pFVar15;
  FName local_18;
  FName local_10;
  
  (this->ManagedArrayCollection).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ManagedArrayCollection).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = FManagedArrayCollection::FindAttribute<FSoftObjectPath>
                     ((this->ManagedArrayCollection).Object,
                      ClothCollectionAttribute::PhysicsAssetSoftObjectPathName,
                      ClothCollectionGroup::Lods);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->PhysicsAssetSoftObjectPathName = pTVar3;
  pTVar3 = FManagedArrayCollection::FindAttribute<FSoftObjectPath>
                     (pFVar2,ClothCollectionAttribute::SkeletalMeshSoftObjectPathName,
                      ClothCollectionGroup::Lods);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SkeletalMeshSoftObjectPathName = pTVar3;
  pTVar4 = FManagedArrayCollection::FindAttribute<FName>
                     (pFVar2,ClothCollectionAttribute::ReferenceBoneName,ClothCollectionGroup::Lods)
  ;
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->ReferenceBoneName = pTVar4;
  local_18 = ClothCollectionAttribute::SolverGravity;
  local_10 = ClothCollectionGroup::Solvers;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar14 = (FValueType *)0x0;
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SolverGravity = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SolverAirDamping;
  local_10 = ClothCollectionGroup::Solvers;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SolverAirDamping = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::SolverSubSteps;
  local_10 = ClothCollectionGroup::Solvers;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SolverSubSteps = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SolverTimeStep;
  local_10 = ClothCollectionGroup::Solvers;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SolverTimeStep = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::SeamStitchStart;
  local_10 = ClothCollectionGroup::Seams;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SeamStitchStart = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SeamStitchEnd;
  local_10 = ClothCollectionGroup::Seams;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SeamStitchEnd = (TManagedArray<int> *)pFVar6;
  pTVar7 = FManagedArrayCollection::FindAttribute<UE::Math::TIntVector2<int>_>
                     (pFVar2,ClothCollectionAttribute::SeamStitch2DEndIndices,
                      ClothCollectionGroup::SeamStitches);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SeamStitch2DEndIndices = pTVar7;
  local_18 = ClothCollectionAttribute::SeamStitch3DIndex;
  local_10 = ClothCollectionGroup::SeamStitches;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SeamStitch3DIndex = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimVertices2DStart;
  local_10 = ClothCollectionGroup::SimPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimVertices2DStart = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimVertices2DEnd;
  local_10 = ClothCollectionGroup::SimPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimVertices2DEnd = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimFacesStart;
  local_10 = ClothCollectionGroup::SimPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimFacesStart = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimFacesEnd;
  local_10 = ClothCollectionGroup::SimPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimFacesEnd = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimPatternFabric;
  local_10 = ClothCollectionGroup::SimPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimPatternFabric = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderVerticesStart;
  local_10 = ClothCollectionGroup::RenderPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderVerticesStart = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderVerticesEnd;
  local_10 = ClothCollectionGroup::RenderPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderVerticesEnd = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderFacesStart;
  local_10 = ClothCollectionGroup::RenderPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderFacesStart = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderFacesEnd;
  local_10 = ClothCollectionGroup::RenderPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderFacesEnd = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderDeformerNumInfluences;
  local_10 = ClothCollectionGroup::RenderPatterns;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderDeformerNumInfluences = (TManagedArray<int> *)pFVar6;
  pTVar3 = FManagedArrayCollection::FindAttribute<FSoftObjectPath>
                     (pFVar2,ClothCollectionAttribute::RenderMaterialSoftObjectPathName,
                      ClothCollectionGroup::RenderPatterns);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderMaterialSoftObjectPathName = pTVar3;
  local_18 = ClothCollectionAttribute::FabricBendingStiffness;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricBendingStiffness = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricBucklingStiffness;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricBucklingStiffness = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricStretchStiffness;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricStretchStiffness = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricBucklingRatio;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricBucklingRatio = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricDensity;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricDensity = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricFriction;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricFriction = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricDamping;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricDamping = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricPressure;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricPressure = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricLayer;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricLayer = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::FabricCollisionThickness;
  local_10 = ClothCollectionGroup::Fabrics;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->FabricCollisionThickness = (TManagedArray<float> *)pFVar6;
  pTVar8 = FManagedArrayCollection::FindAttribute<UE::Math::TIntVector3<int>_>
                     (pFVar2,ClothCollectionAttribute::SimIndices2D,ClothCollectionGroup::SimFaces);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimIndices2D = pTVar8;
  pTVar8 = FManagedArrayCollection::FindAttribute<UE::Math::TIntVector3<int>_>
                     (pFVar2,ClothCollectionAttribute::SimIndices3D,ClothCollectionGroup::SimFaces);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimIndices3D = pTVar8;
  local_18 = ClothCollectionAttribute::SimPosition2D;
  local_10 = ClothCollectionGroup::SimVertices2D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector2<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimPosition2D = (TManagedArray<UE::Math::TVector2<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimVertex3DLookup;
  local_10 = ClothCollectionGroup::SimVertices2D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimVertex3DLookup = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimImportVertexID;
  local_10 = ClothCollectionGroup::SimVertices2D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimImportVertexID = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimPosition3D;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimPosition3D = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::PreResizedSimPosition3D;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->PreResizedSimPosition3D = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimNormal;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimNormal = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimBoneIndices;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::
             GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimBoneIndices = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  pTVar9 = FManagedArrayCollection::FindAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (pFVar2,ClothCollectionAttribute::SimBoneWeights,
                      ClothCollectionGroup::SimVertices3D);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimBoneWeights = pTVar9;
  local_18 = ClothCollectionAttribute::TetherKinematicIndex;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::
             GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->TetherKinematicIndex = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  pTVar9 = FManagedArrayCollection::FindAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (pFVar2,ClothCollectionAttribute::TetherReferenceLength,
                      ClothCollectionGroup::SimVertices3D);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->TetherReferenceLength = pTVar9;
  local_18 = ClothCollectionAttribute::SimVertex2DLookup;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::
             GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimVertex2DLookup = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SeamStitchLookup;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::
             GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SeamStitchLookup = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimCustomResizingBlend;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimCustomResizingBlend = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimMorphTargetName;
  local_10 = ClothCollectionGroup::SimMorphTargets;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<FString>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimMorphTargetName = (TManagedArray<FString> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimMorphTargetVerticesStart;
  local_10 = ClothCollectionGroup::SimMorphTargets;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimMorphTargetVerticesStart = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimMorphTargetVerticesEnd;
  local_10 = ClothCollectionGroup::SimMorphTargets;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimMorphTargetVerticesEnd = (TManagedArray<int> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimMorphTargetPositionDelta;
  local_10 = ClothCollectionGroup::SimMorphTargetVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimMorphTargetPositionDelta = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimMorphTargetTangentZDelta;
  local_10 = ClothCollectionGroup::SimMorphTargetVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimMorphTargetTangentZDelta = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::SimMorphTargetSimVertex3DIndex;
  local_10 = ClothCollectionGroup::SimMorphTargetVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimMorphTargetSimVertex3DIndex = (TManagedArray<int> *)pFVar6;
  pTVar8 = FManagedArrayCollection::FindAttribute<UE::Math::TIntVector3<int>_>
                     (pFVar2,ClothCollectionAttribute::RenderIndices,
                      ClothCollectionGroup::RenderFaces);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderIndices = pTVar8;
  local_18 = ClothCollectionAttribute::RenderPosition;
  local_10 = ClothCollectionGroup::RenderVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderPosition = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderNormal;
  local_10 = ClothCollectionGroup::RenderVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderNormal = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderTangentU;
  local_10 = ClothCollectionGroup::RenderVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderTangentU = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderTangentV;
  local_10 = ClothCollectionGroup::RenderVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderTangentV = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  pTVar10 = FManagedArrayCollection::
            FindAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                      (pFVar2,ClothCollectionAttribute::RenderUVs,
                       ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderUVs = pTVar10;
  pTVar11 = FManagedArrayCollection::FindAttribute<FLinearColor>
                      (pFVar2,ClothCollectionAttribute::RenderColor,
                       ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderColor = pTVar11;
  local_18 = ClothCollectionAttribute::RenderBoneIndices;
  local_10 = ClothCollectionGroup::RenderVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)
             FManagedArrayCollection::FValueType::
             GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderBoneIndices = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  pTVar9 = FManagedArrayCollection::FindAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (pFVar2,ClothCollectionAttribute::RenderBoneWeights,
                      ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderBoneWeights = pTVar9;
  pTVar12 = FManagedArrayCollection::
            FindAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                      (pFVar2,ClothCollectionAttribute::RenderDeformerPositionBaryCoordsAndDist,
                       ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderDeformerPositionBaryCoordsAndDist = pTVar12;
  pTVar12 = FManagedArrayCollection::
            FindAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                      (pFVar2,ClothCollectionAttribute::RenderDeformerNormalBaryCoordsAndDist,
                       ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderDeformerNormalBaryCoordsAndDist = pTVar12;
  pTVar12 = FManagedArrayCollection::
            FindAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                      (pFVar2,ClothCollectionAttribute::RenderDeformerTangentBaryCoordsAndDist,
                       ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderDeformerTangentBaryCoordsAndDist = pTVar12;
  pTVar13 = FManagedArrayCollection::
            FindAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                      (pFVar2,ClothCollectionAttribute::RenderDeformerSimIndices3D,
                       ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderDeformerSimIndices3D = pTVar13;
  pTVar9 = FManagedArrayCollection::FindAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (pFVar2,ClothCollectionAttribute::RenderDeformerWeight,
                      ClothCollectionGroup::RenderVertices);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderDeformerWeight = pTVar9;
  local_18 = ClothCollectionAttribute::RenderDeformerSkinningBlend;
  local_10 = ClothCollectionGroup::RenderVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderDeformerSkinningBlend = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::RenderCustomResizingBlend;
  local_10 = ClothCollectionGroup::RenderVertices;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<float>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->RenderCustomResizingBlend = (TManagedArray<float> *)pFVar6;
  local_18 = ClothCollectionAttribute::CustomResizingRegionSet;
  local_10 = ClothCollectionGroup::CustomResizingRegions;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  pFVar6 = pFVar14;
  if (pFVar15 != (FValueType *)0x0) {
    pFVar6 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<FString>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->CustomResizingRegionSet = (TManagedArray<FString> *)pFVar6;
  local_18 = ClothCollectionAttribute::CustomResizingRegionType;
  local_10 = ClothCollectionGroup::CustomResizingRegions;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  pFVar15 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar14;
  }
  if (pFVar15 != (FValueType *)0x0) {
    pFVar14 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar15);
  }
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->CustomResizingRegionType = (TManagedArray<int> *)pFVar14;
  pTVar4 = FManagedArrayCollection::FindAttribute<FName>
                     (pFVar2,ClothCollectionAttribute::SimAccessoryMeshName,
                      ClothCollectionGroup::SimAccessoryMeshes);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimAccessoryMeshName = pTVar4;
  pTVar4 = FManagedArrayCollection::FindAttribute<FName>
                     (pFVar2,ClothCollectionAttribute::SimAccessoryMeshPosition3DAttribute,
                      ClothCollectionGroup::SimAccessoryMeshes);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimAccessoryMeshPosition3DAttribute = pTVar4;
  pTVar4 = FManagedArrayCollection::FindAttribute<FName>
                     (pFVar2,ClothCollectionAttribute::SimAccessoryMeshNormalAttribute,
                      ClothCollectionGroup::SimAccessoryMeshes);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimAccessoryMeshNormalAttribute = pTVar4;
  pTVar4 = FManagedArrayCollection::FindAttribute<FName>
                     (pFVar2,ClothCollectionAttribute::SimAccessoryMeshBoneIndicesAttribute,
                      ClothCollectionGroup::SimAccessoryMeshes);
  pFVar2 = (this->ManagedArrayCollection).Object;
  this->SimAccessoryMeshBoneIndicesAttribute = pTVar4;
  pTVar4 = FManagedArrayCollection::FindAttribute<FName>
                     (pFVar2,ClothCollectionAttribute::SimAccessoryMeshBoneWeightsAttribute,
                      ClothCollectionGroup::SimAccessoryMeshes);
  this->SimAccessoryMeshBoneWeightsAttribute = pTVar4;
  return this;
}

// CopyArrayViewData<int> @ 14db27450

void __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::CopyArrayViewData<int>
          (TArrayView<int,int> *param_1,TArrayView<int_const_,int> *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("To.Num() == From.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                         ,0x297,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = 0;
  if (0 < param_1->ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(undefined4 *)(lVar6 + (longlong)param_2->DataPtr);
      uVar4 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar6 + (longlong)param_1->DataPtr) = uVar1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < param_1->ArrayNum);
  }
  return;
}

// CopyArrayViewData<float> @ 14db27580

void __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::CopyArrayViewData<float>
          (TArrayView<float,int> *param_1,TArrayView<float_const_,int> *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("To.Num() == From.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                         ,0x297,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = 0;
  if (0 < param_1->ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(undefined4 *)(lVar6 + (longlong)param_2->DataPtr);
      uVar4 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar6 + (longlong)param_1->DataPtr) = uVar1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < param_1->ArrayNum);
  }
  return;
}

// CopyArrayViewData<UE::Math::TVector<float>_> @ 14db276c0

void __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>
          (TArrayView<UE::Math::TVector<float>,int> *param_1,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  TVector<float> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("To.Num() == From.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                         ,0x297,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar1 = *(undefined8 *)((longlong)&param_2->DataPtr->field0_0x0 + lVar8);
      uVar2 = *(undefined4 *)((longlong)&param_2->DataPtr->field0_0x0 + lVar8 + 8);
      uVar6 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar3 = param_1->DataPtr;
      uVar7 = uVar7 + 1;
      *(undefined8 *)((longlong)&pTVar3->field0_0x0 + lVar8) = uVar1;
      *(undefined4 *)((longlong)&pTVar3->field0_0x0 + lVar8 + 8) = uVar2;
      lVar8 = lVar8 + 0xc;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return;
}

// CopyArrayViewData<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db27810

void __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::
CopyArrayViewData<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *param_1,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ForAnyElementType *pFVar8;
  longlong lVar9;
  ForAnyElementType *pFVar10;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("To.Num() == From.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                         ,0x297,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = (ForAnyElementType *)((longlong)&(param_2->DataPtr->AllocatorInstance).Data + lVar9)
      ;
      uVar6 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = (ForAnyElementType *)((longlong)&(param_1->DataPtr->AllocatorInstance).Data + lVar9);
      if (pFVar8 != pFVar10) {
        iVar2 = *(int *)&pFVar10[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        _Src = pFVar10->Data;
        iVar3 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar2;
        if ((iVar2 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar2,iVar3,pFVar8,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar8->Data,_Src,(longlong)iVar2 << 2);
          }
        }
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return;
}

// CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14db279b0

void __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::
CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *param_1,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ForAnyElementType *pFVar8;
  longlong lVar9;
  ForAnyElementType *pFVar10;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("To.Num() == From.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                         ,0x297,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = (ForAnyElementType *)((longlong)&(param_2->DataPtr->AllocatorInstance).Data + lVar9)
      ;
      uVar6 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = (ForAnyElementType *)((longlong)&(param_1->DataPtr->AllocatorInstance).Data + lVar9);
      if (pFVar8 != pFVar10) {
        iVar2 = *(int *)&pFVar10[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        _Src = pFVar10->Data;
        iVar3 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar2;
        if ((iVar2 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar2,iVar3,pFVar8,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar8->Data,_Src,(longlong)iVar2 << 2);
          }
        }
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return;
}

// CopyArrayViewData<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 14db27b50

void __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::
CopyArrayViewData<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> *param_1,
          TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int>
          *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ForAnyElementType *pFVar8;
  longlong lVar9;
  ForAnyElementType *pFVar10;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("To.Num() == From.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                         ,0x297,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = (ForAnyElementType *)((longlong)&(param_2->DataPtr->AllocatorInstance).Data + lVar9)
      ;
      uVar6 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = (ForAnyElementType *)((longlong)&(param_1->DataPtr->AllocatorInstance).Data + lVar9);
      if (pFVar8 != pFVar10) {
        iVar2 = *(int *)&pFVar10[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        _Src = pFVar10->Data;
        iVar3 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar2;
        if ((iVar2 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar2,iVar3,pFVar8,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar8->Data,_Src,(longlong)iVar2 << 3);
          }
        }
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return;
}

// CopyArrayViewData<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 14db27cf0

void __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::
CopyArrayViewData<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *param_1,
          TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
          *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ForAnyElementType *pFVar8;
  longlong lVar9;
  ForAnyElementType *pFVar10;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("To.Num() == From.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                         ,0x297,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = (ForAnyElementType *)((longlong)&(param_2->DataPtr->AllocatorInstance).Data + lVar9)
      ;
      uVar6 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = (ForAnyElementType *)((longlong)&(param_1->DataPtr->AllocatorInstance).Data + lVar9);
      if (pFVar8 != pFVar10) {
        iVar2 = *(int *)&pFVar10[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        _Src = pFVar10->Data;
        iVar3 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar2;
        if ((iVar2 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,0x10,iVar2,iVar3,pFVar8,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar8->Data,_Src,(longlong)iVar2 << 4);
          }
        }
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return;
}

// CopyArrayViewData<FString> @ 14db27e90

void __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::CopyArrayViewData<FString>
          (TArrayView<FString,int> *param_1,TArrayView<FString_const_,int> *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ForAnyElementType *pFVar8;
  longlong lVar9;
  ForAnyElementType *pFVar10;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("To.Num() == From.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                         ,0x297,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = (ForAnyElementType *)
                ((longlong)&(param_2->DataPtr->Data).AllocatorInstance.Data + lVar9);
      uVar6 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = (ForAnyElementType *)
               ((longlong)&(param_1->DataPtr->Data).AllocatorInstance.Data + lVar9);
      if (pFVar8 != pFVar10) {
        iVar2 = *(int *)&pFVar10[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        _Src = pFVar10->Data;
        iVar3 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar2;
        if ((iVar2 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar2,iVar3,pFVar8,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar8->Data,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return;
}

// CopyArrayViewDataAndApplyOffset<int> @ 14db28030

void __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::CopyArrayViewDataAndApplyOffset<int>
          (TArrayView<int,int> *param_1,TArrayView<int_const_,int> *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("To.Num() == From.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                         ,0x2a1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = 0;
  if (0 < param_1->ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = *(int *)(lVar6 + (longlong)param_2->DataPtr);
      uVar4 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 1;
      *(int *)(lVar6 + (longlong)param_1->DataPtr) = iVar1 + param_3;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < param_1->ArrayNum);
  }
  return;
}

// CopyArrayViewDataAndApplyOffset<int> @ 14db28170

void __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::CopyArrayViewDataAndApplyOffset<int>
          (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *param_1,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForAnyElementType *pFVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar11;
  ForAnyElementType *pFVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *local_res10;
  int local_res18;
  longlong local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("To.Num() == From.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                         ,0x2ab,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar13 = 0;
  if (0 < param_1->ArrayNum) {
    lVar11 = 0;
    local_res20 = 0;
    do {
      uVar10 = ~uVar13 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = (ForAnyElementType *)
                ((longlong)&(param_2->DataPtr->AllocatorInstance).Data + lVar11);
      uVar7 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar8 = (ForAnyElementType *)((longlong)&(param_1->DataPtr->AllocatorInstance).Data + lVar11)
      ;
      if (pFVar8 != pFVar12) {
        iVar2 = *(int *)&pFVar12[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        _Src = pFVar12->Data;
        iVar3 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar2;
        if ((iVar2 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar2,iVar3,pFVar8,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar8->Data,_Src,(longlong)iVar2 << 2);
          }
        }
      }
      uVar7 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar4 = param_1->DataPtr;
      piVar9 = *(int **)((longlong)&(pTVar4->AllocatorInstance).Data + lVar11);
      iVar2 = *(int *)((longlong)&pTVar4->ArrayNum + lVar11);
      piVar1 = piVar9 + iVar2;
      while( true ) {
        if (*(int *)((longlong)&pTVar4->ArrayNum + lVar11) != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (piVar9 == piVar1) break;
        *piVar9 = *piVar9 + local_res18;
        piVar9 = piVar9 + 1;
      }
      uVar13 = uVar13 + 1;
      local_res20 = local_res20 + 1;
      lVar11 = lVar11 + 0x10;
      param_2 = local_res10;
    } while ((int)uVar13 < param_1->ArrayNum);
  }
  return;
}

// CopyArrayViewDataAndApplyOffset<UE::Math::TIntVector3<int>_> @ 14db283d0

void __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::
CopyArrayViewDataAndApplyOffset<UE::Math::TIntVector3<int>_>
          (TArrayView<UE::Math::TIntVector3<int>,int> *param_1,
          TArrayView<UE::Math::TIntVector3<int>_const_,int> *param_2,TIntVector3<int> *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  TIntVector3<int> *pTVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int local_38;
  int iStack_34;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("To.Num() == From.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                         ,0x2a1,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = 0;
  if (0 < param_1->ArrayNum) {
    lVar11 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar2 = (param_3->field0_0x0)._s_0.X;
      uVar1 = *(undefined8 *)((longlong)&param_2->DataPtr->field0_0x0 + lVar11);
      local_38 = (int)uVar1;
      iStack_34 = (int)((ulonglong)uVar1 >> 0x20);
      iVar3 = (param_3->field0_0x0)._s_0.Y;
      iVar4 = (param_3->field0_0x0)._s_0.Z;
      iVar5 = *(int *)((longlong)&param_2->DataPtr->field0_0x0 + lVar11 + 8);
      uVar9 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar6 = param_1->DataPtr;
      uVar10 = uVar10 + 1;
      *(int *)((longlong)&pTVar6->field0_0x0 + lVar11) = iVar2 + local_38;
      *(int *)((longlong)&pTVar6->field0_0x0 + lVar11 + 4) = iStack_34 + iVar3;
      *(int *)((longlong)&pTVar6->field0_0x0 + lVar11 + 8) = iVar4 + iVar5;
      lVar11 = lVar11 + 0xc;
    } while ((int)uVar10 < param_1->ArrayNum);
  }
  return;
}

// CopyArrayViewDataAndApplyOffset<UE::Math::TIntVector3<int>_> @ 14db28560

void __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::
CopyArrayViewDataAndApplyOffset<UE::Math::TIntVector3<int>_>
          (TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> *param_1,
          TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int>
          *param_2,TIntVector3<int> *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForAnyElementType *pFVar7;
  int *piVar8;
  uint uVar9;
  undefined8 *puVar10;
  ForAnyElementType *pFVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int> *local_res10
  ;
  longlong local_48;
  
  local_res10 = param_2;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("To.Num() == From.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                         ,0x2ab,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = 0;
  if (0 < param_1->ArrayNum) {
    local_48 = 0;
    do {
      uVar9 = ~uVar12 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = (ForAnyElementType *)
                ((longlong)&(param_2->DataPtr->AllocatorInstance).Data + local_48);
      uVar6 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = (ForAnyElementType *)
               ((longlong)&(param_1->DataPtr->AllocatorInstance).Data + local_48);
      if (pFVar7 != pFVar11) {
        iVar2 = *(int *)&pFVar11[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        _Src = pFVar11->Data;
        iVar3 = *piVar1;
        *(int *)&pFVar7[1].Data = iVar2;
        if ((iVar2 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,iVar2,iVar3,pFVar7,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar7->Data,_Src,(longlong)iVar2 * 0xc);
          }
        }
      }
      uVar6 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar10 = (undefined8 *)((longlong)&(param_1->DataPtr->AllocatorInstance).Data + local_48);
      iVar2 = *(int *)(puVar10 + 1);
      piVar8 = (int *)*puVar10;
      piVar1 = piVar8 + (longlong)iVar2 * 3;
      while( true ) {
        if (*(int *)(puVar10 + 1) != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::Math::TIntVector3<int>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (piVar8 == piVar1) break;
        *piVar8 = *piVar8 + (param_3->field0_0x0)._s_0.X;
        piVar8[1] = piVar8[1] + (param_3->field0_0x0)._s_0.Y;
        piVar8[2] = piVar8[2] + (param_3->field0_0x0)._s_0.Z;
        piVar8 = piVar8 + 3;
      }
      uVar12 = uVar12 + 1;
      local_48 = local_48 + 0x10;
      param_2 = local_res10;
    } while ((int)uVar12 < param_1->ArrayNum);
  }
  return;
}

// GetElements<int> @ 14db2b520

TArrayView<int_const_,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElements<int>
          (TArrayView<int_const_,int> *__return_storage_ptr__,TManagedArray<int> *param_1,
          TManagedArray<int> *param_2,TManagedArray<int> *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<int_const_,int> *pTVar6;
  
  if (((param_2 != (TManagedArray<int> *)0x0) && (param_3 != (TManagedArray<int> *)0x0)) &&
     (param_1 != (TManagedArray<int> *)0x0)) {
    uVar5 = 0;
    if (param_4 < *(int *)&param_2->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar1 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)param_4 * 4);
    uVar5 = 0;
    if (param_4 < *(int *)&param_3->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar2 = *(int *)(*(longlong *)&param_3->field_0x10 + (longlong)param_4 * 4);
    if (iVar1 == -1) {
      if (iVar2 == -1) goto LAB_14db2b66f;
    }
    else if (iVar2 != -1) {
      TArrayView<int_const_,int>::TArrayView<int_const_,int><int_const_>
                (__return_storage_ptr__,
                 (int *)(*(longlong *)&param_1->field_0x10 + (longlong)iVar1 * 4),
                 (iVar2 - iVar1) + 1);
      return __return_storage_ptr__;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x23d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<int_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
LAB_14db2b66f:
  __return_storage_ptr__->DataPtr = (int *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetElements<int> @ 14db2b6a0

TArrayView<int,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElements<int>
          (TArrayView<int,int> *__return_storage_ptr__,TManagedArray<int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<int,int> *pTVar4;
  
  if (param_1 == (TManagedArray<int> *)0x0) {
    __return_storage_ptr__->DataPtr = (int *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar3 = (**(code **)(*(longlong *)param_1 + 0x60))(param_1);
    __return_storage_ptr__->DataPtr = *(int **)&param_1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar3;
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArrayView<int,int> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetElements<int> @ 14db2b720

TArrayView<int,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElements<int>
          (TArrayView<int,int> *__return_storage_ptr__,TManagedArray<int> *param_1,
          TManagedArray<int> *param_2,TManagedArray<int> *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<int,int> *pTVar6;
  
  if (((param_2 != (TManagedArray<int> *)0x0) && (param_3 != (TManagedArray<int> *)0x0)) &&
     (param_1 != (TManagedArray<int> *)0x0)) {
    uVar5 = 0;
    if (param_4 < *(int *)&param_2->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<int,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar1 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)param_4 * 4);
    uVar5 = 0;
    if (param_4 < *(int *)&param_3->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<int,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar2 = *(int *)(*(longlong *)&param_3->field_0x10 + (longlong)param_4 * 4);
    if (iVar1 == -1) {
      if (iVar2 == -1) goto LAB_14db2b86f;
    }
    else if (iVar2 != -1) {
      TArrayView<int,int>::TArrayView<int,int><int>
                (__return_storage_ptr__,
                 (int *)(*(longlong *)&param_1->field_0x10 + (longlong)iVar1 * 4),
                 (iVar2 - iVar1) + 1);
      return __return_storage_ptr__;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x24d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<int,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
LAB_14db2b86f:
  __return_storage_ptr__->DataPtr = (int *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetElements<float> @ 14db2b8a0

TArrayView<float_const_,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElements<float>
          (TArrayView<float_const_,int> *__return_storage_ptr__,TManagedArray<float> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<float_const_,int> *pTVar4;
  
  if (param_1 == (TManagedArray<float> *)0x0) {
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar3 = (**(code **)(*(longlong *)param_1 + 0x60))(param_1);
    __return_storage_ptr__->DataPtr = *(float **)&param_1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar3;
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArrayView<float_const_,int> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetElements<float> @ 14db2b920

TArrayView<float_const_,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElements<float>
          (TArrayView<float_const_,int> *__return_storage_ptr__,TManagedArray<float> *param_1,
          TManagedArray<int> *param_2,TManagedArray<int> *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<float_const_,int> *pTVar6;
  
  if (((param_2 != (TManagedArray<int> *)0x0) && (param_3 != (TManagedArray<int> *)0x0)) &&
     (param_1 != (TManagedArray<float> *)0x0)) {
    uVar5 = 0;
    if (param_4 < *(int *)&param_2->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<float_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar1 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)param_4 * 4);
    uVar5 = 0;
    if (param_4 < *(int *)&param_3->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<float_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar2 = *(int *)(*(longlong *)&param_3->field_0x10 + (longlong)param_4 * 4);
    if (iVar1 == -1) {
      if (iVar2 == -1) goto LAB_14db2ba6f;
    }
    else if (iVar2 != -1) {
      TArrayView<float_const_,int>::TArrayView<float_const_,int><float_const_>
                (__return_storage_ptr__,
                 (float *)(*(longlong *)&param_1->field_0x10 + (longlong)iVar1 * 4),
                 (iVar2 - iVar1) + 1);
      return __return_storage_ptr__;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x23d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
LAB_14db2ba6f:
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetElements<float> @ 14db2baa0

TArrayView<float,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElements<float>
          (TArrayView<float,int> *__return_storage_ptr__,TManagedArray<float> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<float,int> *pTVar4;
  
  if (param_1 == (TManagedArray<float> *)0x0) {
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar3 = (**(code **)(*(longlong *)param_1 + 0x60))(param_1);
    __return_storage_ptr__->DataPtr = *(float **)&param_1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar3;
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArrayView<float,int> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetElements<float> @ 14db2bb20

TArrayView<float,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElements<float>
          (TArrayView<float,int> *__return_storage_ptr__,TManagedArray<float> *param_1,
          TManagedArray<int> *param_2,TManagedArray<int> *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<float,int> *pTVar6;
  
  if (((param_2 != (TManagedArray<int> *)0x0) && (param_3 != (TManagedArray<int> *)0x0)) &&
     (param_1 != (TManagedArray<float> *)0x0)) {
    uVar5 = 0;
    if (param_4 < *(int *)&param_2->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<float,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar1 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)param_4 * 4);
    uVar5 = 0;
    if (param_4 < *(int *)&param_3->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<float,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar2 = *(int *)(*(longlong *)&param_3->field_0x10 + (longlong)param_4 * 4);
    if (iVar1 == -1) {
      if (iVar2 == -1) goto LAB_14db2bc6f;
    }
    else if (iVar2 != -1) {
      TArrayView<float,int>::TArrayView<float,int><float>
                (__return_storage_ptr__,
                 (float *)(*(longlong *)&param_1->field_0x10 + (longlong)iVar1 * 4),
                 (iVar2 - iVar1) + 1);
      return __return_storage_ptr__;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x24d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
LAB_14db2bc6f:
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetElements<UE::Math::TIntVector3<int>_> @ 14db2bca0

TArrayView<UE::Math::TIntVector3<int>_const_,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
          (TArrayView<UE::Math::TIntVector3<int>_const_,int> *__return_storage_ptr__,
          TManagedArray<UE::Math::TIntVector3<int>_> *param_1,TManagedArray<int> *param_2,
          TManagedArray<int> *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> *pTVar6;
  
  if (((param_2 != (TManagedArray<int> *)0x0) && (param_3 != (TManagedArray<int> *)0x0)) &&
     (param_1 != (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0)) {
    uVar5 = 0;
    if (param_4 < *(int *)&param_2->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<UE::Math::TIntVector3<int>_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar1 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)param_4 * 4);
    uVar5 = 0;
    if (param_4 < *(int *)&param_3->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<UE::Math::TIntVector3<int>_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar2 = *(int *)(*(longlong *)&param_3->field_0x10 + (longlong)param_4 * 4);
    if (iVar1 == -1) {
      if (iVar2 == -1) goto LAB_14db2bdf3;
    }
    else if (iVar2 != -1) {
      TArrayView<UE::Math::TIntVector3<int>_const_,int>::
      TArrayView<UE::Math::TIntVector3<int>_const_,int><UE::Math::TIntVector3<int>_const_>
                (__return_storage_ptr__,
                 (TIntVector3<int> *)(*(longlong *)&param_1->field_0x10 + (longlong)iVar1 * 0xc),
                 (iVar2 - iVar1) + 1);
      return __return_storage_ptr__;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x23d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<UE::Math::TIntVector3<int>_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
LAB_14db2bdf3:
  __return_storage_ptr__->DataPtr = (TIntVector3<int> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetElements<UE::Math::TIntVector3<int>_> @ 14db2be20

TArrayView<UE::Math::TIntVector3<int>,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
          (TArrayView<UE::Math::TIntVector3<int>,int> *__return_storage_ptr__,
          TManagedArray<UE::Math::TIntVector3<int>_> *param_1,TManagedArray<int> *param_2,
          TManagedArray<int> *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<UE::Math::TIntVector3<int>,int> *pTVar6;
  
  if (((param_2 != (TManagedArray<int> *)0x0) && (param_3 != (TManagedArray<int> *)0x0)) &&
     (param_1 != (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0)) {
    uVar5 = 0;
    if (param_4 < *(int *)&param_2->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<UE::Math::TIntVector3<int>,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar1 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)param_4 * 4);
    uVar5 = 0;
    if (param_4 < *(int *)&param_3->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<UE::Math::TIntVector3<int>,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar2 = *(int *)(*(longlong *)&param_3->field_0x10 + (longlong)param_4 * 4);
    if (iVar1 == -1) {
      if (iVar2 == -1) goto LAB_14db2bf73;
    }
    else if (iVar2 != -1) {
      TArrayView<UE::Math::TIntVector3<int>,int>::
      TArrayView<UE::Math::TIntVector3<int>,int><UE::Math::TIntVector3<int>_>
                (__return_storage_ptr__,
                 (TIntVector3<int> *)(*(longlong *)&param_1->field_0x10 + (longlong)iVar1 * 0xc),
                 (iVar2 - iVar1) + 1);
      return __return_storage_ptr__;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x24d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<UE::Math::TIntVector3<int>,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
LAB_14db2bf73:
  __return_storage_ptr__->DataPtr = (TIntVector3<int> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetElements<UE::Math::TVector<float>_> @ 14db2bfa0

TArrayView<UE::Math::TVector<float>_const_,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElements<UE::Math::TVector<float>_>
          (TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,
          TManagedArray<UE::Math::TVector<float>_> *param_1,TManagedArray<int> *param_2,
          TManagedArray<int> *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar6;
  
  if (((param_2 != (TManagedArray<int> *)0x0) && (param_3 != (TManagedArray<int> *)0x0)) &&
     (param_1 != (TManagedArray<UE::Math::TVector<float>_> *)0x0)) {
    uVar5 = 0;
    if (param_4 < *(int *)&param_2->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar1 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)param_4 * 4);
    uVar5 = 0;
    if (param_4 < *(int *)&param_3->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar2 = *(int *)(*(longlong *)&param_3->field_0x10 + (longlong)param_4 * 4);
    if (iVar1 == -1) {
      if (iVar2 == -1) goto LAB_14db2c0f3;
    }
    else if (iVar2 != -1) {
      TArrayView<UE::Math::TVector<float>_const_,int>::
      TArrayView<UE::Math::TVector<float>_const_,int><UE::Math::TVector<float>_const_>
                (__return_storage_ptr__,
                 (TVector<float> *)(*(longlong *)&param_1->field_0x10 + (longlong)iVar1 * 0xc),
                 (iVar2 - iVar1) + 1);
      return __return_storage_ptr__;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x23d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
LAB_14db2c0f3:
  __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetElements<UE::Math::TVector<float>_> @ 14db2c120

TArrayView<UE::Math::TVector<float>,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElements<UE::Math::TVector<float>_>
          (TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__,
          TManagedArray<UE::Math::TVector<float>_> *param_1,TManagedArray<int> *param_2,
          TManagedArray<int> *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<UE::Math::TVector<float>,int> *pTVar6;
  
  if (((param_2 != (TManagedArray<int> *)0x0) && (param_3 != (TManagedArray<int> *)0x0)) &&
     (param_1 != (TManagedArray<UE::Math::TVector<float>_> *)0x0)) {
    uVar5 = 0;
    if (param_4 < *(int *)&param_2->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar1 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)param_4 * 4);
    uVar5 = 0;
    if (param_4 < *(int *)&param_3->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar2 = *(int *)(*(longlong *)&param_3->field_0x10 + (longlong)param_4 * 4);
    if (iVar1 == -1) {
      if (iVar2 == -1) goto LAB_14db2c273;
    }
    else if (iVar2 != -1) {
      TArrayView<UE::Math::TVector<float>,int>::
      TArrayView<UE::Math::TVector<float>,int><UE::Math::TVector<float>_>
                (__return_storage_ptr__,
                 (TVector<float> *)(*(longlong *)&param_1->field_0x10 + (longlong)iVar1 * 0xc),
                 (iVar2 - iVar1) + 1);
      return __return_storage_ptr__;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x24d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
LAB_14db2c273:
  __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetElements<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db2c2a0

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElements<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__,
          TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar4;
  
  if (param_1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar3 = (**(code **)(*(longlong *)param_1 + 0x60))(param_1);
    __return_storage_ptr__->DataPtr =
         *(TArray<int,TSizedDefaultAllocator<32>_> **)&param_1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar3;
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetElements<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db2c320

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElements<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__,
          TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar4;
  
  if (param_1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar3 = (**(code **)(*(longlong *)param_1 + 0x60))(param_1);
    __return_storage_ptr__->DataPtr =
         *(TArray<int,TSizedDefaultAllocator<32>_> **)&param_1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar3;
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetElements<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14db2c3a0

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::
GetElements<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__,
          TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar4;
  
  if (param_1 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar3 = (**(code **)(*(longlong *)param_1 + 0x60))(param_1);
    __return_storage_ptr__->DataPtr =
         *(TArray<float,TSizedDefaultAllocator<32>_> **)&param_1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar3;
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetElements<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14db2c420

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::
GetElements<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__,
          TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *param_1,
          TManagedArray<int> *param_2,TManagedArray<int> *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar6;
  
  if (((param_2 != (TManagedArray<int> *)0x0) && (param_3 != (TManagedArray<int> *)0x0)) &&
     (param_1 != (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)) {
    uVar5 = 0;
    if (param_4 < *(int *)&param_2->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar1 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)param_4 * 4);
    uVar5 = 0;
    if (param_4 < *(int *)&param_3->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar2 = *(int *)(*(longlong *)&param_3->field_0x10 + (longlong)param_4 * 4);
    if (iVar1 == -1) {
      if (iVar2 == -1) goto LAB_14db2c570;
    }
    else if (iVar2 != -1) {
      TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int>::
      TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_const_>
                (__return_storage_ptr__,
                 (TArray<float,TSizedDefaultAllocator<32>_> *)
                 ((longlong)iVar1 * 0x10 + *(longlong *)&param_1->field_0x10),(iVar2 - iVar1) + 1);
      return __return_storage_ptr__;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x23d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
LAB_14db2c570:
  __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetElements<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14db2c5a0

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::
GetElements<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__,
          TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *param_1,
          TManagedArray<int> *param_2,TManagedArray<int> *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar6;
  
  if (((param_2 != (TManagedArray<int> *)0x0) && (param_3 != (TManagedArray<int> *)0x0)) &&
     (param_1 != (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)) {
    uVar5 = 0;
    if (param_4 < *(int *)&param_2->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar1 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)param_4 * 4);
    uVar5 = 0;
    if (param_4 < *(int *)&param_3->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar2 = *(int *)(*(longlong *)&param_3->field_0x10 + (longlong)param_4 * 4);
    if (iVar1 == -1) {
      if (iVar2 == -1) goto LAB_14db2c6f0;
    }
    else if (iVar2 != -1) {
      TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int>::
      TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int><TArray<float,TSizedDefaultAllocator<32>_>_>
                (__return_storage_ptr__,
                 (TArray<float,TSizedDefaultAllocator<32>_> *)
                 ((longlong)iVar1 * 0x10 + *(longlong *)&param_1->field_0x10),(iVar2 - iVar1) + 1);
      return __return_storage_ptr__;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x24d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
LAB_14db2c6f0:
  __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetElements<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 14db2c720

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::
GetElements<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
           *__return_storage_ptr__,
          TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *param_1,
          TManagedArray<int> *param_2,TManagedArray<int> *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> *pTVar6;
  
  if (((param_2 != (TManagedArray<int> *)0x0) && (param_3 != (TManagedArray<int> *)0x0)) &&
     (param_1 !=
      (TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *)0x0)) {
    uVar5 = 0;
    if (param_4 < *(int *)&param_2->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
                  *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar1 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)param_4 * 4);
    uVar5 = 0;
    if (param_4 < *(int *)&param_3->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
                  *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar2 = *(int *)(*(longlong *)&param_3->field_0x10 + (longlong)param_4 * 4);
    if (iVar1 == -1) {
      if (iVar2 == -1) goto LAB_14db2c870;
    }
    else if (iVar2 != -1) {
      TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>::
      TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int><TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_>
                (__return_storage_ptr__,
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)iVar1 * 0x10 + *(longlong *)&param_1->field_0x10),(iVar2 - iVar1) + 1);
      return __return_storage_ptr__;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x23d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
LAB_14db2c870:
  __return_storage_ptr__->DataPtr =
       (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetElements<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 14db2c8a0

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::
GetElements<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int>
           *__return_storage_ptr__,
          TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *param_1,
          TManagedArray<int> *param_2,TManagedArray<int> *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *pTVar6;
  
  if (((param_2 != (TManagedArray<int> *)0x0) && (param_3 != (TManagedArray<int> *)0x0)) &&
     (param_1 !=
      (TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *)0x0)) {
    uVar5 = 0;
    if (param_4 < *(int *)&param_2->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *)
                 (*pcVar3)();
        return pTVar6;
      }
    }
    iVar1 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)param_4 * 4);
    uVar5 = 0;
    if (param_4 < *(int *)&param_3->field_0x18) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *)
                 (*pcVar3)();
        return pTVar6;
      }
    }
    iVar2 = *(int *)(*(longlong *)&param_3->field_0x10 + (longlong)param_4 * 4);
    if (iVar1 == -1) {
      if (iVar2 == -1) goto LAB_14db2c9f0;
    }
    else if (iVar2 != -1) {
      TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int>::
      TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int><TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                (__return_storage_ptr__,
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)iVar1 * 0x10 + *(longlong *)&param_1->field_0x10),(iVar2 - iVar1) + 1);
      return __return_storage_ptr__;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x24d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
LAB_14db2c9f0:
  __return_storage_ptr__->DataPtr =
       (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetElements<FString> @ 14db2ca20

TArrayView<FString_const_,int> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElements<FString>
          (TArrayView<FString_const_,int> *__return_storage_ptr__,TManagedArray<FString> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<FString_const_,int> *pTVar4;
  
  if (param_1 == (TManagedArray<FString> *)0x0) {
    __return_storage_ptr__->DataPtr = (FString *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar3 = (**(code **)(*(longlong *)param_1 + 0x60))(param_1);
    __return_storage_ptr__->DataPtr = *(FString **)&param_1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar3;
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArrayView<FString_const_,int> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetElementsTypeHash<UE::Math::TIntVector3<int>_> @ 14db2caa0

uint __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElementsTypeHash<UE::Math::TIntVector3<int>_>
          (TManagedArray<UE::Math::TIntVector3<int>_> *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  
  if (param_1 != (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
    uVar2 = 0;
    pvVar4 = *(void **)&param_1->field_0x10;
    for (lVar3 = (longlong)*(int *)&param_1->field_0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
      uVar1 = FCrc::MemCrc_DEPRECATED(pvVar4,0xc,0);
      pvVar4 = (void *)((longlong)pvVar4 + 0xc);
      uVar2 = uVar2 ^ (uVar2 >> 2) + 0x9e3779b9 + uVar2 * 0x40 + uVar1;
    }
    return uVar2;
  }
  return 0;
}

// GetElementsTypeHash<UE::Math::TVector<float>_> @ 14db2cb30

uint __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElementsTypeHash<UE::Math::TVector<float>_>
          (TManagedArray<UE::Math::TVector<float>_> *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  
  if (param_1 != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    uVar2 = 0;
    pvVar4 = *(void **)&param_1->field_0x10;
    for (lVar3 = (longlong)*(int *)&param_1->field_0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
      uVar1 = FCrc::MemCrc_DEPRECATED(pvVar4,0xc,0);
      pvVar4 = (void *)((longlong)pvVar4 + 0xc);
      uVar2 = uVar2 ^ (uVar2 >> 2) + 0x9e3779b9 + uVar2 * 0x40 + uVar1;
    }
    return uVar2;
  }
  return 0;
}

// GetSubElementsStartEnd<1,1> @ 14db2d130

TTuple<int,int> __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetSubElementsStartEnd<1,1>
          (TManagedArray<int> *param_1,TManagedArray<int> *param_2,TManagedArray<int> *param_3,
          TManagedArray<int> *param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  TTuple<int,int> TVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined4 in_stack_0000002c;
  uint in_stack_00000030;
  int iVar12;
  
  iVar15 = -1;
  iVar11 = -1;
  iVar12 = -1;
  iVar13 = iVar11;
  if ((((param_2 != (TManagedArray<int> *)0x0) && (-1 < (int)in_stack_00000030)) &&
      (iVar13 = iVar12, (int)in_stack_00000030 < *(int *)&param_2->field_0x18)) &&
     ((param_3 != (TManagedArray<int> *)0x0 &&
      ((int)in_stack_00000030 < *(int *)&param_3->field_0x18)))) {
    uVar5 = 0;
    if ((int)in_stack_00000030 < *(int *)&param_2->field_0x18) {
      uVar5 = ~in_stack_00000030 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      TVar6 = (TTuple<int,int>)(*pcVar2)();
      return TVar6;
    }
    iVar12 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)in_stack_00000030 * 4);
    uVar8 = (ulonglong)iVar12;
    uVar5 = 0;
    if ((int)in_stack_00000030 < *(int *)&param_3->field_0x18) {
      uVar5 = ~in_stack_00000030 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      TVar6 = (TTuple<int,int>)(*pcVar2)();
      return TVar6;
    }
    iVar1 = *(int *)(*(longlong *)&param_3->field_0x10 + (longlong)(int)in_stack_00000030 * 4);
    if (iVar12 == -1) {
      if (iVar1 == -1) goto LAB_14db2d4aa;
    }
    else if (iVar1 != -1) {
      iVar13 = iVar11;
      if ((longlong)uVar8 <= (longlong)iVar1) {
        lVar3 = CONCAT44(in_stack_0000002c,param_5);
        lVar14 = uVar8 * 4;
        uVar9 = uVar8;
        do {
          uVar7 = (uint)uVar8;
          uVar10 = ~uVar7 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar7 < *(int *)&param_4->field_0x18) {
            uVar5 = uVar10;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            TVar6 = (TTuple<int,int>)(*pcVar2)();
            return TVar6;
          }
          iVar11 = iVar15;
          if (*(int *)(lVar14 + *(longlong *)&param_4->field_0x10) != -1) {
            if (iVar15 == -1) {
              uVar5 = 0;
              if ((int)uVar7 < *(int *)&param_4->field_0x18) {
                uVar5 = uVar10;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                TVar6 = (TTuple<int,int>)(*pcVar2)();
                return TVar6;
              }
              iVar11 = *(int *)(*(longlong *)&param_4->field_0x10 + uVar9 * 4);
            }
            else {
              uVar5 = 0;
              if ((int)uVar7 < *(int *)&param_4->field_0x18) {
                uVar5 = uVar10;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                TVar6 = (TTuple<int,int>)(*pcVar2)();
                return TVar6;
              }
              iVar11 = *(int *)(*(longlong *)&param_4->field_0x10 + uVar9 * 4);
              if (iVar15 < iVar11) {
                iVar11 = iVar15;
              }
            }
          }
          iVar15 = iVar11;
          uVar5 = 0;
          if ((int)uVar7 < *(int *)(lVar3 + 0x18)) {
            uVar5 = uVar10;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            TVar6 = (TTuple<int,int>)(*pcVar2)();
            return TVar6;
          }
          iVar11 = iVar13;
          if (*(int *)(*(longlong *)(lVar3 + 0x10) + uVar9 * 4) != -1) {
            if (iVar13 == -1) {
              uVar5 = 0;
              if ((int)uVar7 < *(int *)(lVar3 + 0x18)) {
                uVar5 = uVar10;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                TVar6 = (TTuple<int,int>)(*pcVar2)();
                return TVar6;
              }
              iVar11 = *(int *)(*(longlong *)(lVar3 + 0x10) + uVar9 * 4);
            }
            else {
              uVar5 = 0;
              if ((int)uVar7 < *(int *)(lVar3 + 0x18)) {
                uVar5 = uVar10;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                TVar6 = (TTuple<int,int>)(*pcVar2)();
                return TVar6;
              }
              iVar11 = *(int *)(*(longlong *)(lVar3 + 0x10) + uVar9 * 4);
              if (iVar11 < iVar13) {
                iVar11 = iVar13;
              }
            }
          }
          iVar13 = iVar11;
          uVar8 = (ulonglong)(uVar7 + 1);
          uVar9 = uVar9 + 1;
          lVar14 = lVar14 + 4;
        } while ((longlong)uVar9 <= (longlong)iVar1);
      }
      goto LAB_14db2d4aa;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubStart == SubEnd",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x3cf,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      TVar6 = (TTuple<int,int>)(*pcVar2)();
      return TVar6;
    }
  }
LAB_14db2d4aa:
  *(int *)param_1 = iVar15;
  *(int *)&param_1->field_0x4 = iVar13;
  return (TTuple<int,int>)param_1;
}

// GetSubElementsStartEnd<1,0> @ 14db2d4d0

TTuple<int,int> __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetSubElementsStartEnd<1,0>
          (TManagedArray<int> *param_1,TManagedArray<int> *param_2,TManagedArray<int> *param_3,
          TManagedArray<int> *param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  uint uVar5;
  TTuple<int,int> TVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint in_stack_00000030;
  
  iVar10 = -1;
  if ((((param_2 != (TManagedArray<int> *)0x0) && (-1 < (int)in_stack_00000030)) &&
      ((int)in_stack_00000030 < *(int *)&param_2->field_0x18)) &&
     ((param_3 != (TManagedArray<int> *)0x0 &&
      ((int)in_stack_00000030 < *(int *)&param_3->field_0x18)))) {
    uVar5 = 0;
    if ((int)in_stack_00000030 < *(int *)&param_2->field_0x18) {
      uVar5 = ~in_stack_00000030 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      TVar6 = (TTuple<int,int>)(*pcVar2)();
      return TVar6;
    }
    iVar9 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)in_stack_00000030 * 4);
    uVar8 = (ulonglong)iVar9;
    uVar5 = 0;
    if ((int)in_stack_00000030 < *(int *)&param_3->field_0x18) {
      uVar5 = ~in_stack_00000030 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      TVar6 = (TTuple<int,int>)(*pcVar2)();
      return TVar6;
    }
    iVar1 = *(int *)(*(longlong *)&param_3->field_0x10 + (longlong)(int)in_stack_00000030 * 4);
    if (iVar9 == -1) {
      if (iVar1 == -1) goto LAB_14db2d72e;
    }
    else {
      uVar3 = uVar8;
      if (iVar1 != -1) {
        for (; (longlong)uVar8 <= (longlong)iVar1; uVar8 = uVar8 + 1) {
          uVar7 = (uint)uVar3;
          uVar11 = ~uVar7 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar7 < *(int *)&param_4->field_0x18) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            TVar6 = (TTuple<int,int>)(*pcVar2)();
            return TVar6;
          }
          iVar9 = iVar10;
          if (*(int *)(*(longlong *)&param_4->field_0x10 + uVar8 * 4) != -1) {
            if (iVar10 == -1) {
              uVar5 = 0;
              if ((int)uVar7 < *(int *)&param_4->field_0x18) {
                uVar5 = uVar11;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                TVar6 = (TTuple<int,int>)(*pcVar2)();
                return TVar6;
              }
              iVar9 = *(int *)(*(longlong *)&param_4->field_0x10 + uVar8 * 4);
            }
            else {
              uVar5 = 0;
              if ((int)uVar7 < *(int *)&param_4->field_0x18) {
                uVar5 = uVar11;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                TVar6 = (TTuple<int,int>)(*pcVar2)();
                return TVar6;
              }
              iVar9 = *(int *)(*(longlong *)&param_4->field_0x10 + uVar8 * 4);
              if (iVar10 < iVar9) {
                iVar9 = iVar10;
              }
            }
          }
          uVar3 = (ulonglong)(uVar7 + 1);
          iVar10 = iVar9;
        }
        goto LAB_14db2d72e;
      }
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubStart == SubEnd",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x3cf,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      TVar6 = (TTuple<int,int>)(*pcVar2)();
      return TVar6;
    }
  }
LAB_14db2d72e:
  *(int *)param_1 = iVar10;
  *(undefined4 *)&param_1->field_0x4 = 0xffffffff;
  return (TTuple<int,int>)param_1;
}

// GetSubElementsStartEnd<0,1> @ 14db2d750

TTuple<int,int> __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetSubElementsStartEnd<0,1>
          (TManagedArray<int> *param_1,TManagedArray<int> *param_2,TManagedArray<int> *param_3,
          TManagedArray<int> *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  TTuple<int,int> TVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 in_stack_0000002c;
  uint in_stack_00000030;
  
  iVar10 = -1;
  if ((((param_2 != (TManagedArray<int> *)0x0) && (-1 < (int)in_stack_00000030)) &&
      ((int)in_stack_00000030 < *(int *)&param_2->field_0x18)) &&
     ((param_3 != (TManagedArray<int> *)0x0 &&
      ((int)in_stack_00000030 < *(int *)&param_3->field_0x18)))) {
    uVar6 = 0;
    if ((int)in_stack_00000030 < *(int *)&param_2->field_0x18) {
      uVar6 = ~in_stack_00000030 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7 = (TTuple<int,int>)(*pcVar3)();
      return TVar7;
    }
    iVar1 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)in_stack_00000030 * 4);
    uVar9 = (ulonglong)iVar1;
    uVar6 = 0;
    if ((int)in_stack_00000030 < *(int *)&param_3->field_0x18) {
      uVar6 = ~in_stack_00000030 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7 = (TTuple<int,int>)(*pcVar3)();
      return TVar7;
    }
    iVar2 = *(int *)(*(longlong *)&param_3->field_0x10 + (longlong)(int)in_stack_00000030 * 4);
    if (iVar1 == -1) {
      if (iVar2 == -1) goto LAB_14db2d9b6;
    }
    else if (iVar2 != -1) {
      if ((longlong)uVar9 <= (longlong)iVar2) {
        lVar4 = CONCAT44(in_stack_0000002c,param_5);
        uVar12 = uVar9;
        do {
          uVar8 = (uint)uVar9;
          uVar11 = ~uVar8 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar8 < *(int *)(lVar4 + 0x18)) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            TVar7 = (TTuple<int,int>)(*pcVar3)();
            return TVar7;
          }
          iVar1 = iVar10;
          if (*(int *)(*(longlong *)(lVar4 + 0x10) + uVar12 * 4) != -1) {
            if (iVar10 == -1) {
              uVar6 = 0;
              if ((int)uVar8 < *(int *)(lVar4 + 0x18)) {
                uVar6 = uVar11;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                TVar7 = (TTuple<int,int>)(*pcVar3)();
                return TVar7;
              }
              iVar1 = *(int *)(*(longlong *)(lVar4 + 0x10) + uVar12 * 4);
            }
            else {
              uVar6 = 0;
              if ((int)uVar8 < *(int *)(lVar4 + 0x18)) {
                uVar6 = uVar11;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                TVar7 = (TTuple<int,int>)(*pcVar3)();
                return TVar7;
              }
              iVar1 = *(int *)(*(longlong *)(lVar4 + 0x10) + uVar12 * 4);
              if (iVar1 < iVar10) {
                iVar1 = iVar10;
              }
            }
          }
          iVar10 = iVar1;
          uVar9 = (ulonglong)(uVar8 + 1);
          uVar12 = uVar12 + 1;
        } while ((longlong)uVar12 <= (longlong)iVar2);
      }
      goto LAB_14db2d9b6;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubStart == SubEnd",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x3cf,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      TVar7 = (TTuple<int,int>)(*pcVar3)();
      return TVar7;
    }
  }
LAB_14db2d9b6:
  *(undefined4 *)param_1 = 0xffffffff;
  *(int *)&param_1->field_0x4 = iVar10;
  return (TTuple<int,int>)param_1;
}

// GetUserDefinedAttribute<int> @ 14db2dfa0

TManagedArray<int> * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::GetUserDefinedAttribute<int>
          (FConstClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  TManagedArray<int> *pTVar4;
  FName *pFVar5;
  FName FVar6;
  longlong lVar7;
  FName *pFVar8;
  
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar8 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar7 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar6) {
                return (TManagedArray<int> *)0x0;
              }
              FVar6 = (FName)((longlong)FVar6 + 8);
            } while (FVar6 != FVar1);
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar7 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 == FVar1) goto LAB_14db2e1b2;
          while (*(FName *)FVar6 != *param_1) {
            FVar6 = (FName)((longlong)FVar6 + 8);
            if (FVar6 == FVar1) {
LAB_14db2e1b2:
              pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                                 ((this->ManagedArrayCollection).Object,*param_1,*param_2);
              return pTVar4;
            }
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar7 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 == (FName *)0x0) {
          return (TManagedArray<int> *)0x0;
        }
        FVar6 = *pFVar3;
        FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
        if (FVar6 == FVar1) {
          return (TManagedArray<int> *)0x0;
        }
        do {
          if (*(FName *)FVar6 == *param_1) {
            pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                               ((this->ManagedArrayCollection).Object,*param_1,*param_2);
            return pTVar4;
          }
          FVar6 = (FName)((longlong)FVar6 + 8);
        } while (FVar6 != FVar1);
        return (TManagedArray<int> *)0x0;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  return (TManagedArray<int> *)0x0;
}

// GetUserDefinedAttribute<float> @ 14db2e640

TManagedArray<float> * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::GetUserDefinedAttribute<float>
          (FConstClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  TManagedArray<float> *pTVar4;
  FName *pFVar5;
  FName FVar6;
  longlong lVar7;
  FName *pFVar8;
  
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar8 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar7 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar6) {
                return (TManagedArray<float> *)0x0;
              }
              FVar6 = (FName)((longlong)FVar6 + 8);
            } while (FVar6 != FVar1);
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar7 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 == FVar1) goto LAB_14db2e852;
          while (*(FName *)FVar6 != *param_1) {
            FVar6 = (FName)((longlong)FVar6 + 8);
            if (FVar6 == FVar1) {
LAB_14db2e852:
              pTVar4 = FManagedArrayCollection::FindAttributeTyped<float>
                                 ((this->ManagedArrayCollection).Object,*param_1,*param_2);
              return pTVar4;
            }
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar7 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 == (FName *)0x0) {
          return (TManagedArray<float> *)0x0;
        }
        FVar6 = *pFVar3;
        FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
        if (FVar6 == FVar1) {
          return (TManagedArray<float> *)0x0;
        }
        do {
          if (*(FName *)FVar6 == *param_1) {
            pTVar4 = FManagedArrayCollection::FindAttributeTyped<float>
                               ((this->ManagedArrayCollection).Object,*param_1,*param_2);
            return pTVar4;
          }
          FVar6 = (FName)((longlong)FVar6 + 8);
        } while (FVar6 != FVar1);
        return (TManagedArray<float> *)0x0;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  return (TManagedArray<float> *)0x0;
}

// GetUserDefinedAttribute<UE::Math::TVector<float>_> @ 14db2ece0

TManagedArray<UE::Math::TVector<float>_> * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::GetUserDefinedAttribute<UE::Math::TVector<float>_>
          (FConstClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  TManagedArray<UE::Math::TVector<float>_> *pTVar4;
  FName *pFVar5;
  FName FVar6;
  longlong lVar7;
  FName *pFVar8;
  
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar8 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar7 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar6) {
                return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
              }
              FVar6 = (FName)((longlong)FVar6 + 8);
            } while (FVar6 != FVar1);
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar7 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 == FVar1) goto LAB_14db2eef2;
          while (*(FName *)FVar6 != *param_1) {
            FVar6 = (FName)((longlong)FVar6 + 8);
            if (FVar6 == FVar1) {
LAB_14db2eef2:
              pTVar4 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                                 ((this->ManagedArrayCollection).Object,*param_1,*param_2);
              return pTVar4;
            }
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar7 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 == (FName *)0x0) {
          return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
        }
        FVar6 = *pFVar3;
        FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
        if (FVar6 == FVar1) {
          return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
        }
        do {
          if (*(FName *)FVar6 == *param_1) {
            pTVar4 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                               ((this->ManagedArrayCollection).Object,*param_1,*param_2);
            return pTVar4;
          }
          FVar6 = (FName)((longlong)FVar6 + 8);
        } while (FVar6 != FVar1);
        return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
}

// GetUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db2f380

TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::
GetUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FConstClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FName *pFVar5;
  FName FVar6;
  longlong lVar7;
  FName *pFVar8;
  
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar8 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar7 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar6) {
                return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
              }
              FVar6 = (FName)((longlong)FVar6 + 8);
            } while (FVar6 != FVar1);
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar7 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 == FVar1) goto LAB_14db2f592;
          while (*(FName *)FVar6 != *param_1) {
            FVar6 = (FName)((longlong)FVar6 + 8);
            if (FVar6 == FVar1) {
LAB_14db2f592:
              pTVar4 = FManagedArrayCollection::
                       FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                                 ((this->ManagedArrayCollection).Object,*param_1,*param_2);
              return pTVar4;
            }
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar7 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 == (FName *)0x0) {
          return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
        }
        FVar6 = *pFVar3;
        FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
        if (FVar6 == FVar1) {
          return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
        }
        do {
          if (*(FName *)FVar6 == *param_1) {
            pTVar4 = FManagedArrayCollection::
                     FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                               ((this->ManagedArrayCollection).Object,*param_1,*param_2);
            return pTVar4;
          }
          FVar6 = (FName)((longlong)FVar6 + 8);
        } while (FVar6 != FVar1);
        return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
}

// GetUserDefinedAttribute<bool> @ 14db2f890

TManagedArray<bool> * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::GetUserDefinedAttribute<bool>
          (FConstClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  TManagedArray<bool> *pTVar4;
  FName *pFVar5;
  FName FVar6;
  longlong lVar7;
  FName *pFVar8;
  
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar8 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar7 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar6) {
                return (TManagedArray<bool> *)0x0;
              }
              FVar6 = (FName)((longlong)FVar6 + 8);
            } while (FVar6 != FVar1);
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar7 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 == FVar1) goto LAB_14db2faa2;
          while (*(FName *)FVar6 != *param_1) {
            FVar6 = (FName)((longlong)FVar6 + 8);
            if (FVar6 == FVar1) {
LAB_14db2faa2:
              pTVar4 = FManagedArrayCollection::FindAttributeTyped<bool>
                                 ((this->ManagedArrayCollection).Object,*param_1,*param_2);
              return pTVar4;
            }
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar7 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 == (FName *)0x0) {
          return (TManagedArray<bool> *)0x0;
        }
        FVar6 = *pFVar3;
        FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
        if (FVar6 == FVar1) {
          return (TManagedArray<bool> *)0x0;
        }
        do {
          if (*(FName *)FVar6 == *param_1) {
            pTVar4 = FManagedArrayCollection::FindAttributeTyped<bool>
                               ((this->ManagedArrayCollection).Object,*param_1,*param_2);
            return pTVar4;
          }
          FVar6 = (FName)((longlong)FVar6 + 8);
        } while (FVar6 != FVar1);
        return (TManagedArray<bool> *)0x0;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  return (TManagedArray<bool> *)0x0;
}

// GetUserDefinedAttributeNames<int> @ 14db2fb40

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::GetUserDefinedAttributeNames<int>
          (FConstClothCollection *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  FName *pFVar11;
  FName FVar12;
  char *pcVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  FName *pFVar16;
  FName *pFVar17;
  FName *pFVar18;
  undefined1 local_res10 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  undefined1 local_48 [16];
  
  pFVar17 = (FName *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FVar2 = *param_1;
  uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar14 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar14 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar7 = *(uint *)(lVar14 + (ulonglong)
                               (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar7) * 4);
    if (uVar7 != 0xffffffff) {
      while (pFVar11 = (FName *)((longlong)(int)uVar7 * 0x20 +
                                ClothAsset::Private::FixedAttributeNamesMap._0_8_),
            *pFVar11 != FVar2) {
        uVar7 = pFVar11[3].ComparisonIndex.Value;
        if (uVar7 == 0xffffffff) {
          return __return_storage_ptr__;
        }
      }
      pFVar18 = pFVar11 + 1;
      if (pFVar11 == (FName *)0x0) {
        pFVar18 = pFVar17;
      }
      if (pFVar18 != (FName *)0x0) {
        FVar2 = *param_1;
        uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
        pFVar11 = pFVar17;
        if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
            ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
          lVar14 = 0x155376368;
          if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
            lVar14 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
          }
          uVar7 = *(uint *)(lVar14 + (ulonglong)
                                     (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                                     FVar2.Number + uVar7) * 4);
          while ((pFVar11 = pFVar17, uVar7 != 0xffffffff &&
                 (pFVar11 = (FName *)((longlong)(int)uVar7 * 0x20 +
                                     ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_),
                 *pFVar11 != FVar2))) {
            uVar7 = pFVar11[3].ComparisonIndex.Value;
          }
        }
        pFVar16 = pFVar11 + 1;
        if (pFVar11 == (FName *)0x0) {
          pFVar16 = pFVar17;
        }
        FManagedArrayCollection::AttributeNames
                  ((this->ManagedArrayCollection).Object,&local_58,*param_1);
        iVar5 = local_58.ArrayNum;
        pFVar1 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
        FVar15.Data = local_58.AllocatorInstance.Data;
        while( true ) {
          if (local_58.ArrayNum != iVar5) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (FVar15.Data == pFVar1) break;
          FVar12 = *pFVar18;
          FVar2 = (FName)((longlong)FVar12 + (longlong)(int)pFVar18[1].ComparisonIndex.Value * 8);
          if (FVar12 != FVar2) {
            do {
              if (*(longlong *)FVar12 == *(longlong *)FVar15.Data) goto LAB_14db2fe29;
              FVar12 = (FName)((longlong)FVar12 + 8);
            } while (FVar12 != FVar2);
          }
          local_48._0_8_ = *(undefined8 *)FVar15.Data;
          local_48._8_8_ = *param_1;
          pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                           *)&((this->ManagedArrayCollection).Object)->Map,
                          (TTuple<FName,FName> *)local_48);
          pcVar13 = &pTVar9->field_0x10;
          if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pcVar13 = (char *)0x0;
          }
          if ((pcVar13 != (char *)0x0) && (*pcVar13 == '\x05')) {
            if (*(longlong *)(pcVar13 + 0x20) == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypedManagedArray != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                 ,0x306,L"");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar10;
              }
            }
            else {
              if (pFVar16 != (FName *)0x0) {
                FVar12 = *pFVar16;
                FVar2 = (FName)((longlong)FVar12 +
                               (longlong)(int)pFVar16[1].ComparisonIndex.Value * 8);
                if (FVar12 != FVar2) {
                  do {
                    if (*(int *)FVar15.Data == *(int *)FVar12) goto LAB_14db2fe29;
                    FVar12 = (FName)((longlong)FVar12 + 8);
                  } while (FVar12 != FVar2);
                }
              }
              pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar3 <= FVar15.Data) &&
                  (FVar15.Data < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar10;
              }
              iVar8 = __return_storage_ptr__->ArrayNum;
              if (iVar8 == __return_storage_ptr__->ArrayMax) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              __return_storage_ptr__->ArrayNum = iVar8 + 1;
              *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8)
                   = *(longlong *)FVar15.Data;
            }
          }
LAB_14db2fe29:
          FVar15.Data = FVar15.Data + 8;
        }
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetUserDefinedAttributeNames<float> @ 14db2fea0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::GetUserDefinedAttributeNames<float>
          (FConstClothCollection *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  FName *pFVar11;
  FName FVar12;
  char *pcVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  FName *pFVar16;
  FName *pFVar17;
  FName *pFVar18;
  undefined1 local_res10 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  undefined1 local_48 [16];
  
  pFVar17 = (FName *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FVar2 = *param_1;
  uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar14 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar14 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar7 = *(uint *)(lVar14 + (ulonglong)
                               (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar7) * 4);
    if (uVar7 != 0xffffffff) {
      while (pFVar11 = (FName *)((longlong)(int)uVar7 * 0x20 +
                                ClothAsset::Private::FixedAttributeNamesMap._0_8_),
            *pFVar11 != FVar2) {
        uVar7 = pFVar11[3].ComparisonIndex.Value;
        if (uVar7 == 0xffffffff) {
          return __return_storage_ptr__;
        }
      }
      pFVar18 = pFVar11 + 1;
      if (pFVar11 == (FName *)0x0) {
        pFVar18 = pFVar17;
      }
      if (pFVar18 != (FName *)0x0) {
        FVar2 = *param_1;
        uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
        pFVar11 = pFVar17;
        if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
            ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
          lVar14 = 0x155376368;
          if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
            lVar14 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
          }
          uVar7 = *(uint *)(lVar14 + (ulonglong)
                                     (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                                     FVar2.Number + uVar7) * 4);
          while ((pFVar11 = pFVar17, uVar7 != 0xffffffff &&
                 (pFVar11 = (FName *)((longlong)(int)uVar7 * 0x20 +
                                     ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_),
                 *pFVar11 != FVar2))) {
            uVar7 = pFVar11[3].ComparisonIndex.Value;
          }
        }
        pFVar16 = pFVar11 + 1;
        if (pFVar11 == (FName *)0x0) {
          pFVar16 = pFVar17;
        }
        FManagedArrayCollection::AttributeNames
                  ((this->ManagedArrayCollection).Object,&local_58,*param_1);
        iVar5 = local_58.ArrayNum;
        pFVar1 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
        FVar15.Data = local_58.AllocatorInstance.Data;
        while( true ) {
          if (local_58.ArrayNum != iVar5) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (FVar15.Data == pFVar1) break;
          FVar12 = *pFVar18;
          FVar2 = (FName)((longlong)FVar12 + (longlong)(int)pFVar18[1].ComparisonIndex.Value * 8);
          if (FVar12 != FVar2) {
            do {
              if (*(longlong *)FVar12 == *(longlong *)FVar15.Data) goto LAB_14db30189;
              FVar12 = (FName)((longlong)FVar12 + 8);
            } while (FVar12 != FVar2);
          }
          local_48._0_8_ = *(undefined8 *)FVar15.Data;
          local_48._8_8_ = *param_1;
          pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                           *)&((this->ManagedArrayCollection).Object)->Map,
                          (TTuple<FName,FName> *)local_48);
          pcVar13 = &pTVar9->field_0x10;
          if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pcVar13 = (char *)0x0;
          }
          if ((pcVar13 != (char *)0x0) && (*pcVar13 == '\t')) {
            if (*(longlong *)(pcVar13 + 0x20) == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypedManagedArray != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                 ,0x306,L"");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar10;
              }
            }
            else {
              if (pFVar16 != (FName *)0x0) {
                FVar12 = *pFVar16;
                FVar2 = (FName)((longlong)FVar12 +
                               (longlong)(int)pFVar16[1].ComparisonIndex.Value * 8);
                if (FVar12 != FVar2) {
                  do {
                    if (*(int *)FVar15.Data == *(int *)FVar12) goto LAB_14db30189;
                    FVar12 = (FName)((longlong)FVar12 + 8);
                  } while (FVar12 != FVar2);
                }
              }
              pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar3 <= FVar15.Data) &&
                  (FVar15.Data < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar10;
              }
              iVar8 = __return_storage_ptr__->ArrayNum;
              if (iVar8 == __return_storage_ptr__->ArrayMax) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              __return_storage_ptr__->ArrayNum = iVar8 + 1;
              *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8)
                   = *(longlong *)FVar15.Data;
            }
          }
LAB_14db30189:
          FVar15.Data = FVar15.Data + 8;
        }
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetUserDefinedAttributeNames<UE::Math::TVector<float>_> @ 14db30200

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::
GetUserDefinedAttributeNames<UE::Math::TVector<float>_>
          (FConstClothCollection *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  FName *pFVar11;
  FName FVar12;
  char *pcVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  FName *pFVar16;
  FName *pFVar17;
  FName *pFVar18;
  undefined1 local_res10 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  undefined1 local_48 [16];
  
  pFVar17 = (FName *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FVar2 = *param_1;
  uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar14 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar14 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar7 = *(uint *)(lVar14 + (ulonglong)
                               (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar7) * 4);
    if (uVar7 != 0xffffffff) {
      while (pFVar11 = (FName *)((longlong)(int)uVar7 * 0x20 +
                                ClothAsset::Private::FixedAttributeNamesMap._0_8_),
            *pFVar11 != FVar2) {
        uVar7 = pFVar11[3].ComparisonIndex.Value;
        if (uVar7 == 0xffffffff) {
          return __return_storage_ptr__;
        }
      }
      pFVar18 = pFVar11 + 1;
      if (pFVar11 == (FName *)0x0) {
        pFVar18 = pFVar17;
      }
      if (pFVar18 != (FName *)0x0) {
        FVar2 = *param_1;
        uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
        pFVar11 = pFVar17;
        if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
            ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
          lVar14 = 0x155376368;
          if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
            lVar14 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
          }
          uVar7 = *(uint *)(lVar14 + (ulonglong)
                                     (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                                     FVar2.Number + uVar7) * 4);
          while ((pFVar11 = pFVar17, uVar7 != 0xffffffff &&
                 (pFVar11 = (FName *)((longlong)(int)uVar7 * 0x20 +
                                     ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_),
                 *pFVar11 != FVar2))) {
            uVar7 = pFVar11[3].ComparisonIndex.Value;
          }
        }
        pFVar16 = pFVar11 + 1;
        if (pFVar11 == (FName *)0x0) {
          pFVar16 = pFVar17;
        }
        FManagedArrayCollection::AttributeNames
                  ((this->ManagedArrayCollection).Object,&local_58,*param_1);
        iVar5 = local_58.ArrayNum;
        pFVar1 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
        FVar15.Data = local_58.AllocatorInstance.Data;
        while( true ) {
          if (local_58.ArrayNum != iVar5) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (FVar15.Data == pFVar1) break;
          FVar12 = *pFVar18;
          FVar2 = (FName)((longlong)FVar12 + (longlong)(int)pFVar18[1].ComparisonIndex.Value * 8);
          if (FVar12 != FVar2) {
            do {
              if (*(longlong *)FVar12 == *(longlong *)FVar15.Data) goto LAB_14db304e9;
              FVar12 = (FName)((longlong)FVar12 + 8);
            } while (FVar12 != FVar2);
          }
          local_48._0_8_ = *(undefined8 *)FVar15.Data;
          local_48._8_8_ = *param_1;
          pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                           *)&((this->ManagedArrayCollection).Object)->Map,
                          (TTuple<FName,FName> *)local_48);
          pcVar13 = &pTVar9->field_0x10;
          if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pcVar13 = (char *)0x0;
          }
          if ((pcVar13 != (char *)0x0) && (*pcVar13 == '\x01')) {
            if (*(longlong *)(pcVar13 + 0x20) == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypedManagedArray != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                 ,0x306,L"");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar10;
              }
            }
            else {
              if (pFVar16 != (FName *)0x0) {
                FVar12 = *pFVar16;
                FVar2 = (FName)((longlong)FVar12 +
                               (longlong)(int)pFVar16[1].ComparisonIndex.Value * 8);
                if (FVar12 != FVar2) {
                  do {
                    if (*(int *)FVar15.Data == *(int *)FVar12) goto LAB_14db304e9;
                    FVar12 = (FName)((longlong)FVar12 + 8);
                  } while (FVar12 != FVar2);
                }
              }
              pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar3 <= FVar15.Data) &&
                  (FVar15.Data < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar10;
              }
              iVar8 = __return_storage_ptr__->ArrayNum;
              if (iVar8 == __return_storage_ptr__->ArrayMax) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              __return_storage_ptr__->ArrayNum = iVar8 + 1;
              *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8)
                   = *(longlong *)FVar15.Data;
            }
          }
LAB_14db304e9:
          FVar15.Data = FVar15.Data + 8;
        }
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetUserDefinedAttributeNames<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db30560

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::
GetUserDefinedAttributeNames<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FConstClothCollection *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  FName *pFVar11;
  FName FVar12;
  char *pcVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  FName *pFVar16;
  FName *pFVar17;
  FName *pFVar18;
  undefined1 local_res10 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  undefined1 local_48 [16];
  
  pFVar17 = (FName *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FVar2 = *param_1;
  uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar14 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar14 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar7 = *(uint *)(lVar14 + (ulonglong)
                               (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar7) * 4);
    if (uVar7 != 0xffffffff) {
      while (pFVar11 = (FName *)((longlong)(int)uVar7 * 0x20 +
                                ClothAsset::Private::FixedAttributeNamesMap._0_8_),
            *pFVar11 != FVar2) {
        uVar7 = pFVar11[3].ComparisonIndex.Value;
        if (uVar7 == 0xffffffff) {
          return __return_storage_ptr__;
        }
      }
      pFVar18 = pFVar11 + 1;
      if (pFVar11 == (FName *)0x0) {
        pFVar18 = pFVar17;
      }
      if (pFVar18 != (FName *)0x0) {
        FVar2 = *param_1;
        uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
        pFVar11 = pFVar17;
        if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
            ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
          lVar14 = 0x155376368;
          if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
            lVar14 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
          }
          uVar7 = *(uint *)(lVar14 + (ulonglong)
                                     (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                                     FVar2.Number + uVar7) * 4);
          while ((pFVar11 = pFVar17, uVar7 != 0xffffffff &&
                 (pFVar11 = (FName *)((longlong)(int)uVar7 * 0x20 +
                                     ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_),
                 *pFVar11 != FVar2))) {
            uVar7 = pFVar11[3].ComparisonIndex.Value;
          }
        }
        pFVar16 = pFVar11 + 1;
        if (pFVar11 == (FName *)0x0) {
          pFVar16 = pFVar17;
        }
        FManagedArrayCollection::AttributeNames
                  ((this->ManagedArrayCollection).Object,&local_58,*param_1);
        iVar5 = local_58.ArrayNum;
        pFVar1 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
        FVar15.Data = local_58.AllocatorInstance.Data;
        while( true ) {
          if (local_58.ArrayNum != iVar5) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (FVar15.Data == pFVar1) break;
          FVar12 = *pFVar18;
          FVar2 = (FName)((longlong)FVar12 + (longlong)(int)pFVar18[1].ComparisonIndex.Value * 8);
          if (FVar12 != FVar2) {
            do {
              if (*(longlong *)FVar12 == *(longlong *)FVar15.Data) goto LAB_14db30849;
              FVar12 = (FName)((longlong)FVar12 + 8);
            } while (FVar12 != FVar2);
          }
          local_48._0_8_ = *(undefined8 *)FVar15.Data;
          local_48._8_8_ = *param_1;
          pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                           *)&((this->ManagedArrayCollection).Object)->Map,
                          (TTuple<FName,FName> *)local_48);
          pcVar13 = &pTVar9->field_0x10;
          if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pcVar13 = (char *)0x0;
          }
          if ((pcVar13 != (char *)0x0) && (*pcVar13 == '%')) {
            if (*(longlong *)(pcVar13 + 0x20) == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypedManagedArray != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                 ,0x306,L"");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar10;
              }
            }
            else {
              if (pFVar16 != (FName *)0x0) {
                FVar12 = *pFVar16;
                FVar2 = (FName)((longlong)FVar12 +
                               (longlong)(int)pFVar16[1].ComparisonIndex.Value * 8);
                if (FVar12 != FVar2) {
                  do {
                    if (*(int *)FVar15.Data == *(int *)FVar12) goto LAB_14db30849;
                    FVar12 = (FName)((longlong)FVar12 + 8);
                  } while (FVar12 != FVar2);
                }
              }
              pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar3 <= FVar15.Data) &&
                  (FVar15.Data < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar10;
              }
              iVar8 = __return_storage_ptr__->ArrayNum;
              if (iVar8 == __return_storage_ptr__->ArrayMax) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              __return_storage_ptr__->ArrayNum = iVar8 + 1;
              *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8)
                   = *(longlong *)FVar15.Data;
            }
          }
LAB_14db30849:
          FVar15.Data = FVar15.Data + 8;
        }
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetUserDefinedAttributeNames<bool> @ 14db30890

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::GetUserDefinedAttributeNames<bool>
          (FConstClothCollection *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  FName *pFVar11;
  FName FVar12;
  char *pcVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  FName *pFVar16;
  FName *pFVar17;
  FName *pFVar18;
  undefined1 local_res10 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  undefined1 local_48 [16];
  
  pFVar17 = (FName *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FVar2 = *param_1;
  uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar14 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar14 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar7 = *(uint *)(lVar14 + (ulonglong)
                               (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar7) * 4);
    if (uVar7 != 0xffffffff) {
      while (pFVar11 = (FName *)((longlong)(int)uVar7 * 0x20 +
                                ClothAsset::Private::FixedAttributeNamesMap._0_8_),
            *pFVar11 != FVar2) {
        uVar7 = pFVar11[3].ComparisonIndex.Value;
        if (uVar7 == 0xffffffff) {
          return __return_storage_ptr__;
        }
      }
      pFVar18 = pFVar11 + 1;
      if (pFVar11 == (FName *)0x0) {
        pFVar18 = pFVar17;
      }
      if (pFVar18 != (FName *)0x0) {
        FVar2 = *param_1;
        uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
        pFVar11 = pFVar17;
        if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
            ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
          lVar14 = 0x155376368;
          if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
            lVar14 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
          }
          uVar7 = *(uint *)(lVar14 + (ulonglong)
                                     (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                                     FVar2.Number + uVar7) * 4);
          while ((pFVar11 = pFVar17, uVar7 != 0xffffffff &&
                 (pFVar11 = (FName *)((longlong)(int)uVar7 * 0x20 +
                                     ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_),
                 *pFVar11 != FVar2))) {
            uVar7 = pFVar11[3].ComparisonIndex.Value;
          }
        }
        pFVar16 = pFVar11 + 1;
        if (pFVar11 == (FName *)0x0) {
          pFVar16 = pFVar17;
        }
        FManagedArrayCollection::AttributeNames
                  ((this->ManagedArrayCollection).Object,&local_58,*param_1);
        iVar5 = local_58.ArrayNum;
        pFVar1 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
        FVar15.Data = local_58.AllocatorInstance.Data;
        while( true ) {
          if (local_58.ArrayNum != iVar5) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (FVar15.Data == pFVar1) break;
          FVar12 = *pFVar18;
          FVar2 = (FName)((longlong)FVar12 + (longlong)(int)pFVar18[1].ComparisonIndex.Value * 8);
          if (FVar12 != FVar2) {
            do {
              if (*(longlong *)FVar12 == *(longlong *)FVar15.Data) goto LAB_14db30b79;
              FVar12 = (FName)((longlong)FVar12 + 8);
            } while (FVar12 != FVar2);
          }
          local_48._0_8_ = *(undefined8 *)FVar15.Data;
          local_48._8_8_ = *param_1;
          pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                           *)&((this->ManagedArrayCollection).Object)->Map,
                          (TTuple<FName,FName> *)local_48);
          pcVar13 = &pTVar9->field_0x10;
          if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pcVar13 = (char *)0x0;
          }
          if ((pcVar13 != (char *)0x0) && (*pcVar13 == '\x06')) {
            if (*(longlong *)(pcVar13 + 0x20) == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypedManagedArray != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                 ,0x306,L"");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar10;
              }
            }
            else {
              if (pFVar16 != (FName *)0x0) {
                FVar12 = *pFVar16;
                FVar2 = (FName)((longlong)FVar12 +
                               (longlong)(int)pFVar16[1].ComparisonIndex.Value * 8);
                if (FVar12 != FVar2) {
                  do {
                    if (*(int *)FVar15.Data == *(int *)FVar12) goto LAB_14db30b79;
                    FVar12 = (FName)((longlong)FVar12 + 8);
                  } while (FVar12 != FVar2);
                }
              }
              pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar3 <= FVar15.Data) &&
                  (FVar15.Data < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar10;
              }
              iVar8 = __return_storage_ptr__->ArrayNum;
              if (iVar8 == __return_storage_ptr__->ArrayMax) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              __return_storage_ptr__->ArrayNum = iVar8 + 1;
              *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8)
                   = *(longlong *)FVar15.Data;
            }
          }
LAB_14db30b79:
          FVar15.Data = FVar15.Data + 8;
        }
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// HasUserDefinedAttribute<int> @ 14db30ef0

bool __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::HasUserDefinedAttribute<int>
          (FConstClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  TManagedArray<int> *pTVar4;
  FName *pFVar5;
  FName FVar6;
  longlong lVar7;
  FName *pFVar8;
  
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar8 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar7 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar6) {
                return false;
              }
              FVar6 = (FName)((longlong)FVar6 + 8);
            } while (FVar6 != FVar1);
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar7 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 == FVar1) goto LAB_14db31102;
          while (*(FName *)FVar6 != *param_1) {
            FVar6 = (FName)((longlong)FVar6 + 8);
            if (FVar6 == FVar1) {
LAB_14db31102:
              pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                                 ((this->ManagedArrayCollection).Object,*param_1,*param_2);
              return pTVar4 != (TManagedArray<int> *)0x0;
            }
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar7 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 == (FName *)0x0) {
          return false;
        }
        FVar6 = *pFVar3;
        FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
        if (FVar6 == FVar1) {
          return false;
        }
        do {
          if (*(FName *)FVar6 == *param_1) {
            pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                               ((this->ManagedArrayCollection).Object,*param_1,*param_2);
            return pTVar4 != (TManagedArray<int> *)0x0;
          }
          FVar6 = (FName)((longlong)FVar6 + 8);
        } while (FVar6 != FVar1);
        return false;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  return false;
}

// HasUserDefinedAttribute<float> @ 14db31190

bool __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::HasUserDefinedAttribute<float>
          (FConstClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  TManagedArray<float> *pTVar4;
  FName *pFVar5;
  FName FVar6;
  longlong lVar7;
  FName *pFVar8;
  
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar8 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar7 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar6) {
                return false;
              }
              FVar6 = (FName)((longlong)FVar6 + 8);
            } while (FVar6 != FVar1);
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar7 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 == FVar1) goto LAB_14db313a2;
          while (*(FName *)FVar6 != *param_1) {
            FVar6 = (FName)((longlong)FVar6 + 8);
            if (FVar6 == FVar1) {
LAB_14db313a2:
              pTVar4 = FManagedArrayCollection::FindAttributeTyped<float>
                                 ((this->ManagedArrayCollection).Object,*param_1,*param_2);
              return pTVar4 != (TManagedArray<float> *)0x0;
            }
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar7 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 == (FName *)0x0) {
          return false;
        }
        FVar6 = *pFVar3;
        FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
        if (FVar6 == FVar1) {
          return false;
        }
        do {
          if (*(FName *)FVar6 == *param_1) {
            pTVar4 = FManagedArrayCollection::FindAttributeTyped<float>
                               ((this->ManagedArrayCollection).Object,*param_1,*param_2);
            return pTVar4 != (TManagedArray<float> *)0x0;
          }
          FVar6 = (FName)((longlong)FVar6 + 8);
        } while (FVar6 != FVar1);
        return false;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  return false;
}

// HasUserDefinedAttribute<UE::Math::TVector<float>_> @ 14db31430

bool __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::HasUserDefinedAttribute<UE::Math::TVector<float>_>
          (FConstClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  TManagedArray<UE::Math::TVector<float>_> *pTVar4;
  FName *pFVar5;
  FName FVar6;
  longlong lVar7;
  FName *pFVar8;
  
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar8 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar7 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar6) {
                return false;
              }
              FVar6 = (FName)((longlong)FVar6 + 8);
            } while (FVar6 != FVar1);
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar7 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 == FVar1) goto LAB_14db31642;
          while (*(FName *)FVar6 != *param_1) {
            FVar6 = (FName)((longlong)FVar6 + 8);
            if (FVar6 == FVar1) {
LAB_14db31642:
              pTVar4 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                                 ((this->ManagedArrayCollection).Object,*param_1,*param_2);
              return pTVar4 != (TManagedArray<UE::Math::TVector<float>_> *)0x0;
            }
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar7 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 == (FName *)0x0) {
          return false;
        }
        FVar6 = *pFVar3;
        FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
        if (FVar6 == FVar1) {
          return false;
        }
        do {
          if (*(FName *)FVar6 == *param_1) {
            pTVar4 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                               ((this->ManagedArrayCollection).Object,*param_1,*param_2);
            return pTVar4 != (TManagedArray<UE::Math::TVector<float>_> *)0x0;
          }
          FVar6 = (FName)((longlong)FVar6 + 8);
        } while (FVar6 != FVar1);
        return false;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  return false;
}

// HasUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db316d0

bool __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::
HasUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FConstClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FName *pFVar5;
  FName FVar6;
  longlong lVar7;
  FName *pFVar8;
  
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar8 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar7 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar6) {
                return false;
              }
              FVar6 = (FName)((longlong)FVar6 + 8);
            } while (FVar6 != FVar1);
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar7 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 == FVar1) goto LAB_14db318e2;
          while (*(FName *)FVar6 != *param_1) {
            FVar6 = (FName)((longlong)FVar6 + 8);
            if (FVar6 == FVar1) {
LAB_14db318e2:
              pTVar4 = FManagedArrayCollection::
                       FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                                 ((this->ManagedArrayCollection).Object,*param_1,*param_2);
              return pTVar4 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
            }
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar7 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 == (FName *)0x0) {
          return false;
        }
        FVar6 = *pFVar3;
        FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
        if (FVar6 == FVar1) {
          return false;
        }
        do {
          if (*(FName *)FVar6 == *param_1) {
            pTVar4 = FManagedArrayCollection::
                     FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                               ((this->ManagedArrayCollection).Object,*param_1,*param_2);
            return pTVar4 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
          }
          FVar6 = (FName)((longlong)FVar6 + 8);
        } while (FVar6 != FVar1);
        return false;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  return false;
}

// HasUserDefinedAttribute<bool> @ 14db31960

bool __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::HasUserDefinedAttribute<bool>
          (FConstClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  TManagedArray<bool> *pTVar4;
  FName *pFVar5;
  FName FVar6;
  longlong lVar7;
  FName *pFVar8;
  
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar8 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar7 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar6) {
                return false;
              }
              FVar6 = (FName)((longlong)FVar6 + 8);
            } while (FVar6 != FVar1);
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar7 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 != (FName *)0x0) {
          FVar6 = *pFVar3;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
          if (FVar6 == FVar1) goto LAB_14db31b72;
          while (*(FName *)FVar6 != *param_1) {
            FVar6 = (FName)((longlong)FVar6 + 8);
            if (FVar6 == FVar1) {
LAB_14db31b72:
              pTVar4 = FManagedArrayCollection::FindAttributeTyped<bool>
                                 ((this->ManagedArrayCollection).Object,*param_1,*param_2);
              return pTVar4 != (TManagedArray<bool> *)0x0;
            }
          }
        }
        break;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar7 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar2 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    while (uVar2 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar3 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar3 = pFVar8;
        }
        if (pFVar3 == (FName *)0x0) {
          return false;
        }
        FVar6 = *pFVar3;
        FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar3[1].ComparisonIndex.Value * 8);
        if (FVar6 == FVar1) {
          return false;
        }
        do {
          if (*(FName *)FVar6 == *param_1) {
            pTVar4 = FManagedArrayCollection::FindAttributeTyped<bool>
                               ((this->ManagedArrayCollection).Object,*param_1,*param_2);
            return pTVar4 != (TManagedArray<bool> *)0x0;
          }
          FVar6 = (FName)((longlong)FVar6 + 8);
        } while (FVar6 != FVar1);
        return false;
      }
      uVar2 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  return false;
}

// FConstClothCollection @ 14db3b400

FConstClothCollection * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::FConstClothCollection
          (FConstClothCollection *this,TSharedRef<FManagedArrayCollection_const_,1> *param_1)

{
  FConstClothCollection<FManagedArrayCollection_const_>(this,param_1,(TProtectedInit)0x0);
  return this;
}

// GetArrayIndexForContainedElement @ 14db571d0

int __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetArrayIndexForContainedElement
          (TManagedArray<int> *param_1,TManagedArray<int> *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  iVar3 = (**(code **)(*(longlong *)param_1 + 0x60))();
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < *(int *)&param_1->field_0x18) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      if (*(int *)(*(longlong *)&param_1->field_0x10 + lVar6) <= param_3) {
        uVar4 = 0;
        if ((int)uVar5 < *(int *)&param_2->field_0x18) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
        if (param_3 <= *(int *)(*(longlong *)&param_2->field_0x10 + lVar6)) {
          return uVar5;
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 4;
      iVar3 = (**(code **)(*(longlong *)param_1 + 0x60))(param_1);
    } while ((int)uVar5 < iVar3);
  }
  return -1;
}

// GetElementsOffset @ 14db57c00

int __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetElementsOffset
          (TManagedArray<int> *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = (ulonglong)param_2;
  lVar7 = uVar6 * 4;
  while( true ) {
    uVar5 = (uint)uVar6;
    uVar3 = 0;
    if ((int)uVar5 < *(int *)&param_1->field_0x18) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    if ((*(int *)(lVar7 + *(longlong *)&param_1->field_0x10) != -1) || (param_3 <= (int)uVar5))
    break;
    uVar6 = (ulonglong)(uVar5 + 1);
    lVar7 = lVar7 + 4;
  }
  uVar3 = 0;
  if (param_3 < *(int *)&param_1->field_0x18) {
    uVar3 = (uint)~param_3 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  lVar7 = *(longlong *)&param_1->field_0x10;
  uVar3 = 0;
  if ((int)uVar5 < *(int *)&param_1->field_0x18) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)(lVar7 + (longlong)param_3 * 4) -
         *(int *)(*(longlong *)&param_1->field_0x10 + (longlong)(int)uVar5 * 4);
}

// GetNumElements @ 14db58080

int __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::GetNumElements
          (FConstClothCollection *this,FName *param_1)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements((this->ManagedArrayCollection).Object,*param_1);
  return iVar1;
}

// GetNumElements @ 14db580a0

int __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::GetNumElements
          (FConstClothCollection *this,TManagedArray<int> *param_1,TManagedArray<int> *param_2,
          int param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  if ((((param_1 != (TManagedArray<int> *)0x0) && (-1 < param_3)) &&
      (param_3 < *(int *)&param_1->field_0x18)) &&
     ((param_2 != (TManagedArray<int> *)0x0 && (param_3 < *(int *)&param_2->field_0x18)))) {
    uVar4 = 0;
    if (param_3 < *(int *)&param_1->field_0x18) {
      uVar4 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    iVar5 = *(int *)(*(longlong *)&param_1->field_0x10 + (longlong)param_3 * 4);
    uVar4 = 0;
    if (param_3 < *(int *)&param_2->field_0x18) {
      uVar4 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    iVar1 = *(int *)(*(longlong *)&param_2->field_0x10 + (longlong)param_3 * 4);
    if (iVar5 == -1) {
      if (iVar1 == -1) {
        return 0;
      }
    }
    else if (iVar1 != -1) {
      return (iVar1 - iVar5) + 1;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x304,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  return 0;
}

// GetNumSubElements @ 14db584b0

int __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetNumSubElements
          (TManagedArray<int> *param_1,TManagedArray<int> *param_2,TManagedArray<int> *param_3,
          TManagedArray<int> *param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int local_18;
  int iStack_14;
  
  GetSubElementsStartEnd<1,1>
            ((TManagedArray<int> *)&stack0xffffffffffffffe8,param_1,param_2,param_3,(int)param_4);
  if ((local_18 != -1) && (iStack_14 != -1)) {
    return (iStack_14 - local_18) + 1;
  }
  if (local_18 != iStack_14) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x3aa,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 0;
}

// GetSimAccessoryMeshBoneIndices @ 14db5d340

TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::GetSimAccessoryMeshBoneIndices
          (FConstClothCollection *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FValueType *pFVar5;
  FValueType *this_00;
  FName local_18;
  FName local_10;
  
  if (*param_1 == (FName)0x0) {
    return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  if ((*param_1).ComparisonIndex.Value !=
      ClothCollectionAttribute::SimAccessoryMeshBoneIndicesPrefix.ComparisonIndex.Value) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private::NamesHaveMatchingPrefix(AttributeName, ClothCollectionAttribute::SimAccessoryMeshBoneIndicesPrefix)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x4f7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_18 = *param_1;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&((this->ManagedArrayCollection).Object)->Map,(TTuple<FName,FName> *)&local_18)
  ;
  pFVar5 = (FValueType *)0x0;
  this_00 = (FValueType *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar5;
  }
  if (this_00 != (FValueType *)0x0) {
    pFVar5 = (FValueType *)
             FManagedArrayCollection::FValueType::
             GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(this_00);
  }
  return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar5;
}

// GetSimAccessoryMeshBoneWeights @ 14db5d840

TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::GetSimAccessoryMeshBoneWeights
          (FConstClothCollection *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  if (*param_1 == (FName)0x0) {
    return (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  if ((*param_1).ComparisonIndex.Value !=
      ClothCollectionAttribute::SimAccessoryMeshBoneWeightsPrefix.ComparisonIndex.Value) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private::NamesHaveMatchingPrefix(AttributeName, ClothCollectionAttribute::SimAccessoryMeshBoneWeightsPrefix)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x501,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FManagedArrayCollection::FindAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                     ((this->ManagedArrayCollection).Object,*param_1,
                      ClothCollectionGroup::SimVertices3D);
  return pTVar3;
}

// GetSimAccessoryMeshNormal @ 14db5df40

TManagedArray<UE::Math::TVector<float>_> * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::GetSimAccessoryMeshNormal
          (FConstClothCollection *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FValueType *pFVar5;
  FValueType *this_00;
  FName local_18;
  FName local_10;
  
  if (*param_1 == (FName)0x0) {
    return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  if ((*param_1).ComparisonIndex.Value !=
      ClothCollectionAttribute::SimAccessoryMeshNormalPrefix.ComparisonIndex.Value) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private::NamesHaveMatchingPrefix(AttributeName, ClothCollectionAttribute::SimAccessoryMeshNormalPrefix)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x4ed,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_18 = *param_1;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&((this->ManagedArrayCollection).Object)->Map,(TTuple<FName,FName> *)&local_18)
  ;
  pFVar5 = (FValueType *)0x0;
  this_00 = (FValueType *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar5;
  }
  if (this_00 != (FValueType *)0x0) {
    pFVar5 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(this_00);
  }
  return (TManagedArray<UE::Math::TVector<float>_> *)pFVar5;
}

// GetSimAccessoryMeshPosition3D @ 14db5e440

TManagedArray<UE::Math::TVector<float>_> * __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::GetSimAccessoryMeshPosition3D
          (FConstClothCollection *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FValueType *pFVar5;
  FValueType *this_00;
  FName local_18;
  FName local_10;
  
  if (*param_1 == (FName)0x0) {
    return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  if ((*param_1).ComparisonIndex.Value !=
      ClothCollectionAttribute::SimAccessoryMeshPosition3DPrefix.ComparisonIndex.Value) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private::NamesHaveMatchingPrefix(AttributeName, ClothCollectionAttribute::SimAccessoryMeshPosition3DPrefix)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x4e3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_18 = *param_1;
  local_10 = ClothCollectionGroup::SimVertices3D;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&((this->ManagedArrayCollection).Object)->Map,(TTuple<FName,FName> *)&local_18)
  ;
  pFVar5 = (FValueType *)0x0;
  this_00 = (FValueType *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar5;
  }
  if (this_00 != (FValueType *)0x0) {
    pFVar5 = (FValueType *)
             FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(this_00);
  }
  return (TManagedArray<UE::Math::TVector<float>_> *)pFVar5;
}

// GetValidClothCollectionGroupName @ 14db613d0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::GetValidClothCollectionGroupName
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
              *)&ClothAsset::Private::FixedAttributeNamesMap,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsValid @ 14db65ab0

bool __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::IsValid
          (FConstClothCollection *this,EClothCollectionExtendedSchemas param_1)

{
  if ((param_1 & CookedOnly) == None) {
    if (this->PhysicsAssetSoftObjectPathName == (TManagedArray<FSoftObjectPath> *)0x0) {
      return false;
    }
    if (this->SkeletalMeshSoftObjectPathName == (TManagedArray<FSoftObjectPath> *)0x0) {
      return false;
    }
    if (this->ReferenceBoneName == (TManagedArray<FName> *)0x0) {
      return false;
    }
    if ((param_1 & Solvers) != None) {
      if (this->SolverGravity == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        return false;
      }
      if (this->SolverAirDamping == (TManagedArray<float> *)0x0) {
        return false;
      }
      if (this->SolverSubSteps == (TManagedArray<int> *)0x0) {
        return false;
      }
      if (this->SolverTimeStep == (TManagedArray<float> *)0x0) {
        return false;
      }
    }
    if (this->SeamStitchStart == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (this->SeamStitchEnd == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (this->SeamStitch2DEndIndices == (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0) {
      return false;
    }
    if (this->SeamStitch3DIndex == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (this->SimVertices2DStart == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (this->SimVertices2DEnd == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (this->SimFacesStart == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (this->SimFacesEnd == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (this->SimPatternFabric == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (this->RenderVerticesStart == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (this->RenderVerticesEnd == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (this->RenderFacesStart == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (this->RenderFacesEnd == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (this->RenderMaterialSoftObjectPathName == (TManagedArray<FSoftObjectPath> *)0x0) {
      return false;
    }
    if (((param_1 & RenderDeformer) != None) &&
       (this->RenderDeformerNumInfluences == (TManagedArray<int> *)0x0)) {
      return false;
    }
    if (this->SimIndices2D == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
      return false;
    }
    if (this->SimIndices3D == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
      return false;
    }
    if ((param_1 & Fabrics) != None) {
      if (this->FabricBendingStiffness == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        return false;
      }
      if (this->FabricBucklingStiffness == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        return false;
      }
      if (this->FabricStretchStiffness == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        return false;
      }
      if (this->FabricBucklingRatio == (TManagedArray<float> *)0x0) {
        return false;
      }
      if (this->FabricDensity == (TManagedArray<float> *)0x0) {
        return false;
      }
      if (this->FabricFriction == (TManagedArray<float> *)0x0) {
        return false;
      }
      if (this->FabricDamping == (TManagedArray<float> *)0x0) {
        return false;
      }
      if (this->FabricPressure == (TManagedArray<float> *)0x0) {
        return false;
      }
      if (this->FabricLayer == (TManagedArray<int> *)0x0) {
        return false;
      }
      if (this->FabricCollisionThickness == (TManagedArray<float> *)0x0) {
        return false;
      }
    }
    if (this->SimPosition2D == (TManagedArray<UE::Math::TVector2<float>_> *)0x0) {
      return false;
    }
    if (this->SimVertex3DLookup == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (((param_1 >> 8 & 1) != 0) && (this->SimImportVertexID == (TManagedArray<int> *)0x0)) {
      return false;
    }
    if (this->SimPosition3D == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      return false;
    }
    if (this->SimNormal == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      return false;
    }
    if (this->SimBoneIndices == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      return false;
    }
    if (this->SimBoneWeights == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      return false;
    }
    if (this->TetherKinematicIndex == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0
       ) {
      return false;
    }
    if (this->TetherReferenceLength ==
        (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      return false;
    }
    if (this->SimVertex2DLookup == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      return false;
    }
    if (this->SeamStitchLookup == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      return false;
    }
    if ((param_1 & Resizing) != None) {
      if (this->SimCustomResizingBlend == (TManagedArray<float> *)0x0) {
        return false;
      }
      if (this->PreResizedSimPosition3D == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        return false;
      }
    }
    if ((param_1 & SimMorphTargets) != None) {
      if (this->SimMorphTargetName == (TManagedArray<FString> *)0x0) {
        return false;
      }
      if (this->SimMorphTargetVerticesStart == (TManagedArray<int> *)0x0) {
        return false;
      }
      if (this->SimMorphTargetVerticesEnd == (TManagedArray<int> *)0x0) {
        return false;
      }
      if (this->SimMorphTargetPositionDelta == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        return false;
      }
      if (this->SimMorphTargetTangentZDelta == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        return false;
      }
      if (this->SimMorphTargetSimVertex3DIndex == (TManagedArray<int> *)0x0) {
        return false;
      }
    }
    if (this->RenderIndices == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
      return false;
    }
    if (this->RenderPosition == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      return false;
    }
    if (this->RenderNormal == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      return false;
    }
    if (this->RenderTangentU == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      return false;
    }
    if (this->RenderTangentV == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      return false;
    }
    if (this->RenderUVs ==
        (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
      return false;
    }
    if (this->RenderColor == (TManagedArray<FLinearColor> *)0x0) {
      return false;
    }
    if (this->RenderBoneIndices == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      return false;
    }
    if (this->RenderBoneWeights == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)
    {
      return false;
    }
    if ((param_1 & RenderDeformer) != None) {
      if (this->RenderDeformerPositionBaryCoordsAndDist ==
          (TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
        return false;
      }
      if (this->RenderDeformerNormalBaryCoordsAndDist ==
          (TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
        return false;
      }
      if (this->RenderDeformerTangentBaryCoordsAndDist ==
          (TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
        return false;
      }
      if (this->RenderDeformerSimIndices3D ==
          (TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *)0x0) {
        return false;
      }
      if (this->RenderDeformerWeight ==
          (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
        return false;
      }
      if (this->RenderDeformerSkinningBlend == (TManagedArray<float> *)0x0) {
        return false;
      }
    }
    if ((param_1 & Resizing) != None) {
      if (this->RenderCustomResizingBlend == (TManagedArray<float> *)0x0) {
        return false;
      }
      if (this->CustomResizingRegionSet == (TManagedArray<FString> *)0x0) {
        return false;
      }
      if (this->CustomResizingRegionType == (TManagedArray<int> *)0x0) {
        return false;
      }
    }
    if (-1 < (char)param_1) {
      return true;
    }
  }
  else {
    if (this->SimMorphTargetName == (TManagedArray<FString> *)0x0) {
      return false;
    }
    if (this->SimMorphTargetVerticesStart == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (this->SimMorphTargetVerticesEnd == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (this->SimMorphTargetPositionDelta == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      return false;
    }
    if (this->SimMorphTargetTangentZDelta == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      return false;
    }
    if (this->SimMorphTargetSimVertex3DIndex == (TManagedArray<int> *)0x0) {
      return false;
    }
    if (this->PreResizedSimPosition3D == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      return false;
    }
  }
  if ((((this->SimAccessoryMeshName != (TManagedArray<FName> *)0x0) &&
       (this->SimAccessoryMeshPosition3DAttribute != (TManagedArray<FName> *)0x0)) &&
      (this->SimAccessoryMeshNormalAttribute != (TManagedArray<FName> *)0x0)) &&
     ((this->SimAccessoryMeshBoneIndicesAttribute != (TManagedArray<FName> *)0x0 &&
      (this->SimAccessoryMeshBoneWeightsAttribute != (TManagedArray<FName> *)0x0)))) {
    return true;
  }
  return false;
}

// IsValidClothCollectionGroupName @ 14db65fa0

bool __cdecl
UE::Chaos::ClothAsset::FConstClothCollection::IsValidClothCollectionGroupName(FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar4 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar4 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    for (iVar3 = *(int *)(lVar4 + (ulonglong)
                                  (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                                  FVar1.Number + uVar2) * 4); iVar3 != -1;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_)) {
      if (*(FName *)((longlong)iVar3 * 0x20 + ClothAsset::Private::FixedAttributeNamesMap._0_8_) ==
          FVar1) goto LAB_14db6601b;
    }
  }
  iVar3 = -1;
LAB_14db6601b:
  return iVar3 != -1;
}

// IsValidUserDefinedAttributeName @ 14db66030

bool __thiscall
UE::Chaos::ClothAsset::FConstClothCollection::IsValidUserDefinedAttributeName
          (FConstClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  bool bVar2;
  uint uVar3;
  FName *pFVar4;
  FName *pFVar5;
  FName FVar6;
  longlong lVar7;
  FName *pFVar8;
  
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar8 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar7 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar4 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar4 = pFVar8;
        }
        if (pFVar4 != (FName *)0x0) {
          FVar6 = *pFVar4;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar4[1].ComparisonIndex.Value * 8);
          if (FVar6 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar6) {
                return false;
              }
              FVar6 = (FName)((longlong)FVar6 + 8);
            } while (FVar6 != FVar1);
          }
        }
        break;
      }
      uVar3 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar7 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar4 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar4 = pFVar8;
        }
        if (pFVar4 != (FName *)0x0) {
          FVar6 = *pFVar4;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar4[1].ComparisonIndex.Value * 8);
          if (FVar6 == FVar1) {
            return true;
          }
          while (*(FName *)FVar6 != *param_1) {
            FVar6 = (FName)((longlong)FVar6 + 8);
            if (FVar6 == FVar1) {
              return true;
            }
          }
        }
        break;
      }
      uVar3 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar7 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar4 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar4 = pFVar8;
        }
        if (pFVar4 == (FName *)0x0) {
          return false;
        }
        FVar6 = *pFVar4;
        FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar4[1].ComparisonIndex.Value * 8);
        if (FVar6 == FVar1) {
          return false;
        }
        do {
          if (*(FName *)FVar6 == *param_1) {
            bVar2 = FManagedArrayCollection::HasAttribute
                              ((this->ManagedArrayCollection).Object,*param_1,*param_2);
            return bVar2;
          }
          FVar6 = (FName)((longlong)FVar6 + 8);
        } while (FVar6 != FVar1);
        return false;
      }
      uVar3 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  return false;
}

