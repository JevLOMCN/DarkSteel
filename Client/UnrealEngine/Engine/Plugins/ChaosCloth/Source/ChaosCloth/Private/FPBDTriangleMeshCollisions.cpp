// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// FPBDTriangleMeshCollisions @ 14db96340

FPBDTriangleMeshCollisions * __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::FPBDTriangleMeshCollisions
          (FPBDTriangleMeshCollisions *this,int param_1,int param_2,
          TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
          *param_3,FTriangleMesh *param_4,FCollectionPropertyConstFacade *param_5)

{
  FCollectionPropertyConstFacade *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  FString *pFVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this->_padding_ = (longlong)&___7FPBDTriangleMeshCollisions_Softs_Chaos__6B_;
  (this->CollidableSubMesh).FullMesh = param_4;
  FTriangleMesh::FTriangleMesh(&(this->CollidableSubMesh).DynamicSubMesh);
  FTriangleMesh::FTriangleMesh(&(this->CollidableSubMesh).KinematicColliderSubMesh);
  this_00 = param_5;
  (this->CollidableSubMesh).FullMeshToSubMeshIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CollidableSubMesh).FullMeshToSubMeshIndices.ArrayNum = 0;
  (this->CollidableSubMesh).FullMeshToSubMeshIndices.ArrayMax = 0;
  (this->CollidableSubMesh).DynamicSubMeshToFullMeshIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CollidableSubMesh).DynamicSubMeshToFullMeshIndices.ArrayNum = 0;
  (this->CollidableSubMesh).DynamicSubMeshToFullMeshIndices.ArrayMax = 0;
  (this->CollidableSubMesh).KinematicColliderSubMeshToFullMeshIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CollidableSubMesh).KinematicColliderSubMeshToFullMeshIndices.ArrayNum = 0;
  (this->CollidableSubMesh).KinematicColliderSubMeshToFullMeshIndices.ArrayMax = 0;
  (this->CollidableSubMesh).DynamicVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollidableSubMesh).DynamicVertices.ArrayNum = 0;
  (this->CollidableSubMesh).DynamicVertices.ArrayMax = 0;
  this->NumParticles = param_2;
  this->Offset = param_1;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_5->KeyNameIndices,UseSelfIntersectionsName);
  if ((piVar4 == (int *)0x0) || (*piVar4 == -1)) {
    bVar1 = false;
  }
  else {
    bVar1 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (this_00,*piVar4,&this_00->LowValueArray);
  }
  pTVar7 = &this_00->LowValueArray;
  this->bUseSelfIntersections = bVar1;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,UseSelfIntersectionsName);
  if ((((piVar4 == (int *)0x0) || (*piVar4 == -1)) ||
      (bVar1 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                         (this_00,*piVar4,pTVar7), !bVar1)) ||
     (((piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                 ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         *)&this_00->KeyNameIndices,UseGlobalIntersectionAnalysisName),
       piVar4 != (int *)0x0 && (*piVar4 != -1)) &&
      (bVar1 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                         (this_00,*piVar4,pTVar7), !bVar1)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bGlobalIntersectionAnalysis = bVar1;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,UseSelfIntersectionsName);
  if (((piVar4 == (int *)0x0) || (*piVar4 == -1)) ||
     ((bVar1 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                         (this_00,*piVar4,pTVar7), !bVar1 ||
      (((piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)&this_00->KeyNameIndices,UseContourMinimizationName),
        piVar4 != (int *)0x0 && (*piVar4 != -1)) &&
       (bVar1 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                          (this_00,*piVar4,pTVar7), !bVar1)))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bContourMinimization = bVar1;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,UseSelfIntersectionsName);
  iVar2 = 0;
  if (((piVar4 != (int *)0x0) && (*piVar4 != -1)) &&
     ((bVar1 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                         (this_00,*piVar4,pTVar7), bVar1 &&
      ((piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                 ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         *)&this_00->KeyNameIndices,NumContourMinimizationPostStepsName),
       piVar4 != (int *)0x0 && (*piVar4 != -1)))))) {
    iVar2 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (this_00,*piVar4,pTVar7);
  }
  this->NumContourMinimizationPostSteps = iVar2;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,UseGlobalPostStepContoursName);
  if ((piVar4 == (int *)0x0) || (*piVar4 == -1)) {
    bVar1 = true;
  }
  else {
    bVar1 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (this_00,*piVar4,pTVar7);
  }
  this->bUseGlobalPostStepContours = bVar1;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,SelfCollideAgainstKinematicCollidersOnlyName);
  if ((piVar4 == (int *)0x0) || (*piVar4 == -1)) {
    bVar1 = false;
  }
  else {
    bVar1 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (this_00,*piVar4,pTVar7);
  }
  this->bOnlyCollideWithKinematics = bVar1;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,SelfCollideAgainstAllKinematicVerticesName);
  if ((piVar4 == (int *)0x0) || (*piVar4 == -1)) {
    bVar1 = false;
  }
  else {
    bVar1 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (this_00,*piVar4,pTVar7);
  }
  this->bSelfCollideAgainstAllKinematicVertices = bVar1;
  *(undefined8 *)&(this->DisabledFaces).Elements = 0;
  *(undefined8 *)&(this->DisabledFaces).Elements.field_0x8 = 0;
  iVar2 = -1;
  *(undefined8 *)&(this->DisabledFaces).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DisabledFaces).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DisabledFaces).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DisabledFaces).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DisabledFaces).Elements.field_0x34 = 0;
  (this->DisabledFaces).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DisabledFaces).HashSize = 0;
  *(undefined8 *)&(this->EnabledKinematicFaces).Elements = 0;
  *(undefined8 *)&(this->EnabledKinematicFaces).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EnabledKinematicFaces).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EnabledKinematicFaces).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EnabledKinematicFaces).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EnabledKinematicFaces).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EnabledKinematicFaces).Elements.field_0x34 = 0;
  (this->EnabledKinematicFaces).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EnabledKinematicFaces).HashSize = 0;
  this->bCollidableSubMeshDirty = true;
  (this->DynamicSubMeshSpatialHash)._padding_ = 0;
  (this->DynamicSubMeshSpatialHash)._padding_ = 0;
  (this->DynamicSubMeshSpatialHash)._padding_ = 0;
  (this->DynamicSubMeshSpatialHash)._padding_ = 0;
  *(undefined4 *)&(this->DynamicSubMeshSpatialHash)._padding_ = 0;
  *(undefined8 *)&(this->DynamicSubMeshSpatialHash).UsedLods = 0;
  *(undefined8 *)&(this->DynamicSubMeshSpatialHash).UsedLods.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicSubMeshSpatialHash).UsedLods.field_0x20 = 0;
  *(undefined4 *)&(this->DynamicSubMeshSpatialHash).UsedLods.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicSubMeshSpatialHash).UsedLods.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicSubMeshSpatialHash).UsedLods.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicSubMeshSpatialHash).UsedLods.field_0x34 = 0;
  *(undefined8 *)&(this->DynamicSubMeshSpatialHash).UsedLods.field_0x40 = 0;
  *(undefined4 *)&(this->DynamicSubMeshSpatialHash).UsedLods.field_0x48 = 0;
  (this->DynamicSubMeshSpatialHash).Bounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicSubMeshSpatialHash).Bounds.ArrayNum = 0;
  (this->DynamicSubMeshSpatialHash).Bounds.ArrayMax = 0;
  (this->KinematicSubMeshSpatialHash)._padding_ = 0;
  (this->KinematicSubMeshSpatialHash)._padding_ = 0;
  (this->KinematicSubMeshSpatialHash)._padding_ = 0;
  (this->KinematicSubMeshSpatialHash)._padding_ = 0;
  *(undefined4 *)&(this->KinematicSubMeshSpatialHash)._padding_ = 0;
  *(undefined8 *)&(this->KinematicSubMeshSpatialHash).UsedLods = 0;
  *(undefined8 *)&(this->KinematicSubMeshSpatialHash).UsedLods.field_0x8 = 0;
  *(undefined8 *)&(this->KinematicSubMeshSpatialHash).UsedLods.field_0x20 = 0;
  *(undefined4 *)&(this->KinematicSubMeshSpatialHash).UsedLods.field_0x28 = 0;
  *(undefined4 *)&(this->KinematicSubMeshSpatialHash).UsedLods.field_0x2c = 0x80;
  *(undefined4 *)&(this->KinematicSubMeshSpatialHash).UsedLods.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KinematicSubMeshSpatialHash).UsedLods.field_0x34 = 0;
  *(undefined8 *)&(this->KinematicSubMeshSpatialHash).UsedLods.field_0x40 = 0;
  *(undefined4 *)&(this->KinematicSubMeshSpatialHash).UsedLods.field_0x48 = 0;
  (this->KinematicSubMeshSpatialHash).Bounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->KinematicSubMeshSpatialHash).Bounds.ArrayNum = 0;
  (this->KinematicSubMeshSpatialHash).Bounds.ArrayMax = 0;
  (this->ContourMinimizationIntersections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContourMinimizationIntersections).ArrayNum = 0;
  (this->ContourMinimizationIntersections).ArrayMax = 0;
  (this->VertexGIAColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexGIAColors).ArrayNum = 0;
  (this->VertexGIAColors).ArrayMax = 0;
  (this->TriangleGIAColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleGIAColors).ArrayNum = 0;
  (this->TriangleGIAColors).ArrayMax = 0;
  (this->ScratchBuffers).Ptr = (FScratchBuffers *)0x0;
  (this->IntersectionContourPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntersectionContourPoints).ArrayNum = 0;
  (this->IntersectionContourPoints).ArrayMax = 0;
  (this->IntersectionContourTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntersectionContourTypes).ArrayNum = 0;
  (this->IntersectionContourTypes).ArrayMax = 0;
  (this->PostStepContourMinimizationIntersections).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PostStepContourMinimizationIntersections).ArrayNum = 0;
  (this->PostStepContourMinimizationIntersections).ArrayMax = 0;
  (this->PostStepIntersectionContourPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostStepIntersectionContourPoints).ArrayNum = 0;
  (this->PostStepIntersectionContourPoints).ArrayMax = 0;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,UseSelfIntersectionsName);
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *piVar4;
  }
  (this->UseSelfIntersectionsIndex).Index = iVar3;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,UseGlobalIntersectionAnalysisName);
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *piVar4;
  }
  (this->UseGlobalIntersectionAnalysisIndex).Index = iVar3;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,UseContourMinimizationName);
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *piVar4;
  }
  (this->UseContourMinimizationIndex).Index = iVar3;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,NumContourMinimizationPostStepsName);
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *piVar4;
  }
  (this->NumContourMinimizationPostStepsIndex).Index = iVar3;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,UseGlobalPostStepContoursName);
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *piVar4;
  }
  (this->UseGlobalPostStepContoursIndex).Index = iVar3;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,SelfCollideAgainstKinematicCollidersOnlyName);
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *piVar4;
  }
  (this->SelfCollideAgainstKinematicCollidersOnlyIndex).Index = iVar3;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,SelfCollideAgainstAllKinematicVerticesName);
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *piVar4;
  }
  (this->SelfCollideAgainstAllKinematicVerticesIndex).Index = iVar3;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,SelfCollisionDisabledFacesName);
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *piVar4;
  }
  (this->SelfCollisionDisabledFacesIndex).Index = iVar3;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,SelfCollisionEnabledKinematicFacesName);
  if (piVar4 != (int *)0x0) {
    iVar2 = *piVar4;
  }
  (this->SelfCollisionEnabledKinematicFacesIndex).Index = iVar2;
  pFVar5 = ::FName::ToString(&SelfCollisionDisabledFacesName,&local_38);
  pFVar5 = ::FString::FString(&local_28,pFVar5);
  param_4 = (FTriangleMesh *)this_00;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_00,&local_48,&SelfCollisionDisabledFacesName,(<lambda_1> *)&param_4,pFVar5,
             (int *)0x0);
  pTVar6 = TMapBase<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
           ::FindRef((TMapBase<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
                      *)param_3,&local_48,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (pTVar6 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(&this->DisabledFaces,pTVar6);
  }
  return this;
}

// SetProperties @ 14dc16e00

void __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::SetProperties
          (FPBDTriangleMeshCollisions *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
          *param_2)

{
  FSelfCollideAgainstKinematicCollidersOnlyIndex *pFVar1;
  FSelfCollideAgainstAllKinematicVerticesIndex *pFVar2;
  FSelfCollisionDisabledFacesIndex *pFVar3;
  FSelfCollisionEnabledKinematicFacesIndex *pFVar4;
  code *pcVar5;
  ECollectionPropertyFlags EVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FString *pFVar11;
  longlong lVar12;
  int iVar13;
  wchar_t *pwVar14;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar15;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar16;
  wchar_t *pwVar17;
  FCollectionPropertyConstFacade *local_res8;
  FCollectionPropertyConstFacade *local_res20;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  iVar13 = (this->UseSelfIntersectionsIndex).Index;
  if (iVar13 == -1) {
LAB_14dc16e9c:
    bVar8 = false;
  }
  else {
    EVar6 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar13,&param_1->FlagsArray);
    if (((EVar6 & Animatable) == None) ||
       (EVar6 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->UseSelfIntersectionsIndex).Index,&param_1->FlagsArray),
       -1 < (char)EVar6)) goto LAB_14dc16e9c;
    bVar8 = true;
    if (((this->UseSelfIntersectionsIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("UseSelfIntersectionsIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDTriangleMeshCollisions.h"
                           ,0x1be,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar7 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,(this->UseSelfIntersectionsIndex).Index,&param_1->LowValueArray);
    this->bUseSelfIntersections = bVar7;
  }
  pTVar16 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  iVar13 = 0;
  if (this->bUseSelfIntersections == false) {
    this->bGlobalIntersectionAnalysis = false;
    this->bContourMinimization = false;
    this->NumContourMinimizationPostSteps = 0;
    goto LAB_14dc17117;
  }
  if ((bVar8) ||
     (((iVar9 = (this->UseGlobalIntersectionAnalysisIndex).Index, iVar9 != -1 &&
       (EVar6 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,iVar9,&param_1->FlagsArray), (EVar6 & Animatable) != None)) &&
      (EVar6 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,(this->UseGlobalIntersectionAnalysisIndex).Index,
                          &param_1->FlagsArray), (char)EVar6 < '\0')))) {
    if (((this->UseGlobalIntersectionAnalysisIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("UseGlobalIntersectionAnalysisIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDTriangleMeshCollisions.h"
                           ,0x1bf,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar7 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,(this->UseGlobalIntersectionAnalysisIndex).Index,
                       &param_1->LowValueArray);
    this->bGlobalIntersectionAnalysis = bVar7;
    if (!bVar8) goto LAB_14dc16f52;
LAB_14dc16f9b:
    if (((this->UseContourMinimizationIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("UseContourMinimizationIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDTriangleMeshCollisions.h"
                           ,0x1c0,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar7 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,(this->UseContourMinimizationIndex).Index,&param_1->LowValueArray);
    this->bContourMinimization = bVar7;
    if (!bVar8) goto LAB_14dc16ff4;
LAB_14dc17033:
    if (((this->NumContourMinimizationPostStepsIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumContourMinimizationPostStepsIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDTriangleMeshCollisions.h"
                           ,0x1c1,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_1,(this->NumContourMinimizationPostStepsIndex).Index,
                       &param_1->LowValueArray);
    this->NumContourMinimizationPostSteps = iVar9;
    if (!bVar8) goto LAB_14dc17085;
  }
  else {
LAB_14dc16f52:
    iVar9 = (this->UseContourMinimizationIndex).Index;
    if (iVar9 != -1) {
      EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,iVar9,&param_1->FlagsArray);
      if (((EVar6 & Animatable) != None) &&
         (EVar6 = FCollectionPropertyConstFacade::
                  GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                            (param_1,(this->UseContourMinimizationIndex).Index,&param_1->FlagsArray)
         , (char)EVar6 < '\0')) goto LAB_14dc16f9b;
    }
LAB_14dc16ff4:
    iVar9 = (this->NumContourMinimizationPostStepsIndex).Index;
    if (iVar9 != -1) {
      EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,iVar9,&param_1->FlagsArray);
      if (((EVar6 & Animatable) != None) &&
         (EVar6 = FCollectionPropertyConstFacade::
                  GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                            (param_1,(this->NumContourMinimizationPostStepsIndex).Index,
                             &param_1->FlagsArray), (char)EVar6 < '\0')) goto LAB_14dc17033;
    }
LAB_14dc17085:
    iVar9 = (this->UseGlobalPostStepContoursIndex).Index;
    if (((iVar9 == -1) ||
        (EVar6 = FCollectionPropertyConstFacade::
                 GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                           (param_1,iVar9,&param_1->FlagsArray), (EVar6 & Animatable) == None)) ||
       (EVar6 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->UseGlobalPostStepContoursIndex).Index,&param_1->FlagsArray
                          ), -1 < (char)EVar6)) goto LAB_14dc17117;
  }
  if (((this->UseGlobalPostStepContoursIndex).Index == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("UseGlobalPostStepContoursIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDTriangleMeshCollisions.h"
                         ,0x1c2,
                         L"The default value getter that sets the property index must be called once prior to calling this function."
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar8 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                    (param_1,(this->UseGlobalPostStepContoursIndex).Index,&param_1->LowValueArray);
  this->bUseGlobalPostStepContours = bVar8;
LAB_14dc17117:
  pFVar1 = &this->SelfCollideAgainstKinematicCollidersOnlyIndex;
  if (((pFVar1->Index != -1) &&
      (EVar6 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,pFVar1->Index,&param_1->FlagsArray), (EVar6 & Animatable) != None)
      ) && (EVar6 = FCollectionPropertyConstFacade::
                    GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                              (param_1,pFVar1->Index,&param_1->FlagsArray), (char)EVar6 < '\0')) {
    if ((pFVar1->Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SelfCollideAgainstKinematicCollidersOnlyIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDTriangleMeshCollisions.h"
                           ,0x1c3,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar8 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,pFVar1->Index,&param_1->LowValueArray);
    if (bVar8 != this->bOnlyCollideWithKinematics) {
      this->bOnlyCollideWithKinematics = bVar8;
      this->bCollidableSubMeshDirty = true;
    }
  }
  pFVar2 = &this->SelfCollideAgainstAllKinematicVerticesIndex;
  if (((pFVar2->Index != -1) &&
      (EVar6 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,pFVar2->Index,&param_1->FlagsArray), (EVar6 & Animatable) != None)
      ) && (EVar6 = FCollectionPropertyConstFacade::
                    GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                              (param_1,pFVar2->Index,&param_1->FlagsArray), (char)EVar6 < '\0')) {
    if ((pFVar2->Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SelfCollideAgainstAllKinematicVerticesIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDTriangleMeshCollisions.h"
                           ,0x1c4,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar8 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,pFVar2->Index,&param_1->LowValueArray);
    if (bVar8 != this->bSelfCollideAgainstAllKinematicVertices) {
      this->bSelfCollideAgainstAllKinematicVertices = bVar8;
      this->bCollidableSubMeshDirty = true;
    }
  }
  pFVar3 = &this->SelfCollisionDisabledFacesIndex;
  pwVar17 = L"";
  if (((pFVar3->Index != -1) &&
      (EVar6 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,pFVar3->Index,&param_1->FlagsArray), (EVar6 & Animatable) != None)
      ) && (EVar6 = FCollectionPropertyConstFacade::
                    GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                              (param_1,pFVar3->Index,&param_1->FlagsArray), (char)EVar6 < '\0')) {
    if ((pFVar3->Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SelfCollisionDisabledFacesIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDTriangleMeshCollisions.h"
                           ,0x1c5,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar6 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,pFVar3->Index,&param_1->FlagsArray);
    if ((EVar6 & StringDirty) != None) {
      pFVar11 = ::FName::ToString(&SelfCollisionDisabledFacesName,&local_78);
      pFVar11 = ::FString::FString(&local_58,pFVar11);
      local_res8 = param_1;
      FCollectionPropertyConstFacade::
      SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
                (param_1,&local_98,&SelfCollisionDisabledFacesName,(<lambda_1> *)&local_res8,pFVar11
                 ,(int *)0x0);
      if (local_98.Data.ArrayNum == 0) {
        pwVar14 = L"";
        iVar9 = iVar13;
      }
      else {
        pwVar14 = (wchar_t *)local_98.Data.AllocatorInstance.Data;
        iVar9 = local_98.Data.ArrayNum + -1;
      }
      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
      iVar9 = TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
                          *)param_2,uVar10,&local_98);
      pTVar15 = pTVar16;
      if ((iVar9 != -1) && (lVar12 = (longlong)iVar9 * 0x20 + *(longlong *)param_2, lVar12 != 0)) {
        pTVar15 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)(lVar12 + 0x10);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (pTVar15 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
        if (*(int *)&(this->DisabledFaces).Elements.field_0x8 !=
            *(int *)&(this->DisabledFaces).Elements.field_0x34) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->DisabledFaces);
          this->bCollidableSubMeshDirty = true;
        }
      }
      else {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  (&this->DisabledFaces,pTVar15);
        this->bCollidableSubMeshDirty = true;
      }
    }
  }
  pFVar4 = &this->SelfCollisionEnabledKinematicFacesIndex;
  if (((pFVar4->Index != -1) &&
      (EVar6 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,pFVar4->Index,&param_1->FlagsArray), (EVar6 & Animatable) != None)
      ) && (EVar6 = FCollectionPropertyConstFacade::
                    GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                              (param_1,pFVar4->Index,&param_1->FlagsArray), (char)EVar6 < '\0')) {
    if ((pFVar4->Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SelfCollisionEnabledKinematicFacesIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDTriangleMeshCollisions.h"
                           ,0x1c6,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar6 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,pFVar4->Index,&param_1->FlagsArray);
    if ((EVar6 & StringDirty) != None) {
      pFVar11 = ::FName::ToString(&SelfCollisionEnabledKinematicFacesName,&local_68);
      pFVar11 = ::FString::FString(&local_48,pFVar11);
      local_res20 = param_1;
      FCollectionPropertyConstFacade::
      SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
                (param_1,&local_88,&SelfCollisionEnabledKinematicFacesName,
                 (<lambda_1> *)&local_res20,pFVar11,(int *)0x0);
      if (local_88.Data.ArrayNum != 0) {
        iVar13 = local_88.Data.ArrayNum + -1;
        pwVar17 = (wchar_t *)local_88.Data.AllocatorInstance.Data;
      }
      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar17);
      iVar13 = TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
                           *)param_2,uVar10,&local_88);
      if ((iVar13 != -1) && (lVar12 = (longlong)iVar13 * 0x20 + *(longlong *)param_2, lVar12 != 0))
      {
        pTVar16 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)(lVar12 + 0x10);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (pTVar16 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
        if (*(int *)&(this->EnabledKinematicFaces).Elements.field_0x8 ==
            *(int *)&(this->EnabledKinematicFaces).Elements.field_0x34) {
          return;
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->EnabledKinematicFaces);
      }
      else {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  (&this->EnabledKinematicFaces,pTVar16);
      }
      this->bCollidableSubMeshDirty = true;
    }
  }
  return;
}

