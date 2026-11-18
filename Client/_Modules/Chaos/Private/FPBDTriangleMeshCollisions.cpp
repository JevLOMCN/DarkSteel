// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// FPBDTriangleMeshCollisions @ 143a37d70

FPBDTriangleMeshCollisions * __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::FPBDTriangleMeshCollisions
          (FPBDTriangleMeshCollisions *this,int param_1,int param_2,FTriangleMesh *param_3,
          bool param_4,bool param_5)

{
  bool bVar1;
  
  (this->CollidableSubMesh).FullMesh = param_3;
  this->_padding_ = (longlong)&___7FPBDTriangleMeshCollisions_Softs_Chaos__6B_;
  FTriangleMesh::FTriangleMesh(&(this->CollidableSubMesh).DynamicSubMesh);
  FTriangleMesh::FTriangleMesh(&(this->CollidableSubMesh).KinematicColliderSubMesh);
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
  this->Offset = param_1;
  this->NumParticles = param_2;
  if ((param_4) || (param_5)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  this->bUseSelfIntersections = bVar1;
  *(undefined8 *)&(this->DisabledFaces).Elements = 0;
  *(undefined8 *)&(this->DisabledFaces).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DisabledFaces).Elements.field_0x20 = 0;
  this->bGlobalIntersectionAnalysis = param_4;
  this->bContourMinimization = param_5;
  this->NumContourMinimizationPostSteps = 0;
  this->bUseGlobalPostStepContours = true;
  this->bOnlyCollideWithKinematics = false;
  this->bSelfCollideAgainstAllKinematicVertices = false;
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
  this->UseSelfIntersectionsIndex = -1;
  this->UseGlobalIntersectionAnalysisIndex = -1;
  this->UseContourMinimizationIndex = -1;
  this->NumContourMinimizationPostStepsIndex = -1;
  this->UseGlobalPostStepContoursIndex = -1;
  this->SelfCollideAgainstKinematicCollidersOnlyIndex = -1;
  this->SelfCollideAgainstAllKinematicVerticesIndex = -1;
  this->SelfCollisionDisabledFacesIndex = -1;
  (this->SelfCollisionEnabledKinematicFacesIndex).Index = -1;
  return this;
}

// ~FPBDTriangleMeshCollisions @ 143a3aa80

void __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::~FPBDTriangleMeshCollisions
          (FPBDTriangleMeshCollisions *this)

{
  FScriptContainerElement *pFVar1;
  FScratchBuffers *pFVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  
  DestructItems<TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>
              *)(this->PostStepIntersectionContourPoints).AllocatorInstance.Data,
             (this->PostStepIntersectionContourPoints).ArrayNum);
  pFVar1 = (this->PostStepIntersectionContourPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PostStepContourMinimizationIntersections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IntersectionContourTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>
              *)(this->IntersectionContourPoints).AllocatorInstance.Data,
             (this->IntersectionContourPoints).ArrayNum);
  pFVar1 = (this->IntersectionContourPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->ScratchBuffers).Ptr;
  if (pFVar2 != (FScratchBuffers *)0x0) {
    (*(code *)pFVar2[-1].IntersectionContours.AllocatorInstance.Data)
              (&pFVar2[-1].IntersectionContours);
  }
  pFVar1 = (this->TriangleGIAColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexGIAColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ContourMinimizationIntersections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->KinematicSubMeshSpatialHash).Bounds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->KinematicSubMeshSpatialHash).UsedLods.field_0x48 = 0;
  pvVar3 = *(void **)&(this->KinematicSubMeshSpatialHash).UsedLods.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->KinematicSubMeshSpatialHash).UsedLods);
  pvVar3 = (void *)(this->KinematicSubMeshSpatialHash)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = (void *)(this->KinematicSubMeshSpatialHash)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pFVar1 = (this->DynamicSubMeshSpatialHash).Bounds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DynamicSubMeshSpatialHash).UsedLods.field_0x48 = 0;
  pvVar3 = *(void **)&(this->DynamicSubMeshSpatialHash).UsedLods.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DynamicSubMeshSpatialHash).UsedLods);
  pvVar3 = (void *)(this->DynamicSubMeshSpatialHash)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = (void *)(this->DynamicSubMeshSpatialHash)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  (this->EnabledKinematicFaces).HashSize = 0;
  FVar4 = (this->EnabledKinematicFaces).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EnabledKinematicFaces).Elements);
  (this->DisabledFaces).HashSize = 0;
  FVar4 = (this->DisabledFaces).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DisabledFaces).Elements);
  FTriangleSubMesh::~FTriangleSubMesh(&this->CollidableSubMesh);
  return;
}

// Init<Chaos::Softs::FSolverParticles> @ 143d8c8e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::Init<Chaos::Softs::FSolverParticles>
          (FPBDTriangleMeshCollisions *this,FSolverParticles *param_1,FPBDFlatWeightMap *param_2)

{
  FTriangleMesh *pFVar1;
  int *piVar2;
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_> *this_00;
  TArray<TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TPimplPtr<Chaos::Softs::FPBDTriangleMeshCollisions::FScratchBuffers,0> *pTVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>
  *pTVar8;
  FScratchBuffers *pFVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  TArray<Chaos::Softs::GIA::FIntersectionContourPair,TSizedDefaultAllocator<32>_> *pTVar13;
  bool bVar14;
  float fVar15;
  longlong local_78;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_70;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_60;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_50 [2];
  
  if ((this->bGlobalIntersectionAnalysis != false) ||
     (bVar11 = false, this->bContourMinimization != false)) {
    bVar11 = true;
  }
  if (this->bCollidableSubMeshDirty != false) {
    FTriangleSubMesh::Init<Chaos::Softs::FSolverParticles>
              (&this->CollidableSubMesh,param_1,&this->DisabledFaces,
               this->bSelfCollideAgainstAllKinematicVertices,&this->EnabledKinematicFaces,
               this->bOnlyCollideWithKinematics);
    this->bCollidableSubMeshDirty = false;
  }
  if (((this->CollidableSubMesh).DynamicSubMesh.MElements.ArrayNum == 0) &&
     (this->bOnlyCollideWithKinematics == false)) {
    return;
  }
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshCollisions::Init<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64,Chaos::Softs::FPBDFlatWeightMap_const&___ptr64)___ptr64'
                ::__l9::__CpuProfilerEventSpecId1398,
               "ChaosFPBDTriangleMeshCollisions_BuildSpatialHash",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDTriangleMeshCollisions.cpp"
               ,0x576);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshCollisions::Init<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64,Chaos::Softs::FPBDFlatWeightMap_const&___ptr64)___ptr64'
               ::__l9::__CpuProfilerEventSpecId1398);
  }
  if (((param_2->MapView).MapValues.ArrayNum < 1) ||
     (fVar15 = *(float *)&(param_2->MapView).OffsetRange.field_0x4,
     (float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    fVar15 = *(float *)&(param_2->MapView).OffsetRange;
    iVar7 = (int)param_1->_padding_;
    fVar15 = fVar15 + fVar15;
    local_60.DataPtr = (TVector<float,3> *)param_1->_padding_;
    if ((iVar7 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_60.ArrayNum = iVar7;
    FTriangleMesh::BuildSpatialHash<float>
              (&(this->CollidableSubMesh).DynamicSubMesh,&local_60,&this->DynamicSubMeshSpatialHash,
               fVar15 + fVar15);
  }
  else {
    fVar15 = fVar15 + *(float *)&(param_2->MapView).OffsetRange;
    local_70.DataPtr = (TVector<float,3> *)param_1->_padding_;
    iVar7 = (int)param_1->_padding_;
    iVar6 = this->Offset;
    fVar5 = *(float *)&(param_2->MapView).OffsetRange;
    if (fVar15 <= fVar5) {
      fVar15 = fVar5;
    }
    if ((iVar7 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_70.ArrayNum = iVar7;
    FTriangleMesh::BuildSpatialHash
              (&(this->CollidableSubMesh).DynamicSubMesh,&local_70,&this->DynamicSubMeshSpatialHash,
               param_2,iVar6,fVar15 + fVar15);
  }
  if (0 < (this->CollidableSubMesh).KinematicColliderSubMesh.MElements.ArrayNum) {
    local_50[0].DataPtr = (TVector<float,3> *)param_1->_padding_;
    iVar7 = (int)param_1->_padding_;
    if ((iVar7 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_50[0].ArrayNum = iVar7;
    FTriangleMesh::BuildSpatialHash<float>
              (&(this->CollidableSubMesh).KinematicColliderSubMesh,local_50,
               &this->KinematicSubMeshSpatialHash,fVar15 + fVar15);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  piVar2 = &(this->ContourMinimizationIntersections).ArrayMax;
  (this->ContourMinimizationIntersections).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2c,4,0,&(this->ContourMinimizationIntersections).AllocatorInstance,0,piVar2);
  }
  this_00 = &this->VertexGIAColors;
  (this->VertexGIAColors).ArrayNum = 0;
  if ((this->VertexGIAColors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&this_00->AllocatorInstance,0,&(this->VertexGIAColors).ArrayMax);
  }
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>::
  SetNumZeroed(this_00,this->NumParticles,Default);
  piVar2 = &(this->TriangleGIAColors).ArrayMax;
  (this->TriangleGIAColors).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->TriangleGIAColors).AllocatorInstance,0,piVar2);
  }
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>::
  SetNumZeroed(&this->TriangleGIAColors,(this->CollidableSubMesh).DynamicSubMesh.MElements.ArrayNum,
               Default);
  pTVar3 = &this->IntersectionContourPoints;
  piVar2 = &(this->IntersectionContourPoints).ArrayMax;
  pTVar8 = (TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>
            *)(pTVar3->AllocatorInstance).Data;
  iVar7 = (this->IntersectionContourPoints).ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>,int>
              (pTVar8,iVar7);
    (this->IntersectionContourPoints).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>,int>
              (pTVar8,iVar7);
    (this->IntersectionContourPoints).ArrayNum = 0;
  }
  piVar2 = &(this->IntersectionContourTypes).ArrayMax;
  (this->IntersectionContourTypes).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->IntersectionContourTypes).AllocatorInstance,0,piVar2);
  }
  if (!bVar11) {
    return;
  }
  if (this->bOnlyCollideWithKinematics != false) {
    return;
  }
  pTVar4 = &this->ScratchBuffers;
  if (pTVar4->Ptr == (FScratchBuffers *)0x0) {
    pTVar13 = ::operator_new(0x30);
    if (pTVar13 ==
        (TArray<Chaos::Softs::GIA::FIntersectionContourPair,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar13 = (TArray<Chaos::Softs::GIA::FIntersectionContourPair,TSizedDefaultAllocator<32>_> *)
                0x0;
    }
    else {
      (pTVar13->AllocatorInstance).Data =
           (FScriptContainerElement *)
           UE::Core::Private::PimplPtr::
           DeleterFunc<Chaos::Softs::FPBDTriangleMeshCollisions::FScratchBuffers>;
      pTVar13->ArrayNum = 0;
      pTVar13->ArrayMax = 0;
      pTVar13[1].AllocatorInstance = 0;
      *(undefined8 *)((longlong)(pTVar13 + 1) + 8) = 0;
      pTVar13[2].AllocatorInstance = 0;
      *(undefined8 *)((longlong)(pTVar13 + 2) + 8) = 0;
    }
    if ((TPimplPtr<Chaos::Softs::FPBDTriangleMeshCollisions::FScratchBuffers,0> *)&local_78 ==
        pTVar4) {
      if ((FScratchBuffers *)(pTVar13 + 1) == (FScratchBuffers *)0x0) goto LAB_143d8cd14;
    }
    else {
      pFVar9 = pTVar4->Ptr;
      pTVar4->Ptr = (FScratchBuffers *)(pTVar13 + 1);
      if (pFVar9 == (FScratchBuffers *)0x0) goto LAB_143d8cd14;
      pTVar13 = &pFVar9[-1].IntersectionContours;
    }
    (*(code *)(pTVar13->AllocatorInstance).Data)();
  }
LAB_143d8cd14:
  FScratchBuffers::Reset(pTVar4->Ptr);
  FindEdgeFaceIntersections<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>
            (&(this->CollidableSubMesh).DynamicSubMesh,&this->DynamicSubMeshSpatialHash,param_1,
             &pTVar4->Ptr->EdgeFaceIntersections);
  pFVar9 = pTVar4->Ptr;
  if ((pFVar9->EdgeFaceIntersections).ArrayNum != 0) {
    if (this->bGlobalIntersectionAnalysis != false) {
      GIA::ContourBuilding::BuildIntersectionContours
                (&(this->CollidableSubMesh).DynamicSubMesh,&pFVar9->EdgeFaceIntersections,
                 &pFVar9->IntersectionContours,pTVar3);
      GIA::FloodFill::FloodFillContours
                (&(this->CollidableSubMesh).DynamicSubMesh,this->NumParticles,this->Offset,
                 &((this->ScratchBuffers).Ptr)->IntersectionContours,this_00,
                 &this->TriangleGIAColors);
      GIA::FloodFill::AssignContourPointTypes
                (&((this->ScratchBuffers).Ptr)->IntersectionContours,pTVar3,
                 &this->IntersectionContourTypes);
    }
    if (this->bContourMinimization != false) {
      pFVar9 = (this->ScratchBuffers).Ptr;
      pFVar1 = &(this->CollidableSubMesh).DynamicSubMesh;
      if (this->bGlobalIntersectionAnalysis == false) {
        ContourMinimization::
        BuildLocalContourMinimizationIntersections<Chaos::Softs::FSolverParticles>
                  (pFVar1,param_1,&pFVar9->EdgeFaceIntersections,
                   &this->ContourMinimizationIntersections);
      }
      else {
        ContourMinimization::
        BuildGlobalContourMinimizationIntersections<Chaos::Softs::FSolverParticles>
                  (pFVar1,param_1,&pFVar9->IntersectionContours,
                   &this->ContourMinimizationIntersections);
      }
    }
  }
  return;
}

// Init<Chaos::Softs::FSolverParticlesRange> @ 143d8dd40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::Init<Chaos::Softs::FSolverParticlesRange>
          (FPBDTriangleMeshCollisions *this,FSolverParticlesRange *param_1,
          FPBDFlatWeightMap *param_2)

{
  FTriangleMesh *pFVar1;
  int *piVar2;
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_> *this_00;
  TArray<TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TPimplPtr<Chaos::Softs::FPBDTriangleMeshCollisions::FScratchBuffers,0> *pTVar4;
  float fVar5;
  int iVar6;
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FScratchBuffers *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  TArray<Chaos::Softs::GIA::FIntersectionContourPair,TSizedDefaultAllocator<32>_> *pTVar12;
  bool bVar13;
  float fVar14;
  longlong local_78;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_70;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_60;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_50 [2];
  
  if ((this->bGlobalIntersectionAnalysis != false) ||
     (bVar10 = false, this->bContourMinimization != false)) {
    bVar10 = true;
  }
  if (this->bCollidableSubMeshDirty != false) {
    FTriangleSubMesh::Init<Chaos::Softs::FSolverParticlesRange>
              (&this->CollidableSubMesh,param_1,&this->DisabledFaces,
               this->bSelfCollideAgainstAllKinematicVertices,&this->EnabledKinematicFaces,
               this->bOnlyCollideWithKinematics);
    this->bCollidableSubMeshDirty = false;
  }
  if (((this->CollidableSubMesh).DynamicSubMesh.MElements.ArrayNum == 0) &&
     (this->bOnlyCollideWithKinematics == false)) {
    return;
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshCollisions::Init<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange_const&___ptr64,Chaos::Softs::FPBDFlatWeightMap_const&___ptr64)___ptr64'
                ::__l9::__CpuProfilerEventSpecId1398,
               "ChaosFPBDTriangleMeshCollisions_BuildSpatialHash",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDTriangleMeshCollisions.cpp"
               ,0x576);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshCollisions::Init<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange_const&___ptr64,Chaos::Softs::FPBDFlatWeightMap_const&___ptr64)___ptr64'
               ::__l9::__CpuProfilerEventSpecId1398);
  }
  if (((param_2->MapView).MapValues.ArrayNum < 1) ||
     (fVar14 = *(float *)&(param_2->MapView).OffsetRange.field_0x4,
     (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    fVar14 = *(float *)&(param_2->MapView).OffsetRange;
    fVar14 = fVar14 + fVar14;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetConstArrayView<Chaos::TVector<float,3>_>
              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_60,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)&param_1->field_0x8 + 0x28));
    FTriangleMesh::BuildSpatialHash<float>
              (&(this->CollidableSubMesh).DynamicSubMesh,&local_60,&this->DynamicSubMeshSpatialHash,
               fVar14 + fVar14);
  }
  else {
    fVar14 = fVar14 + *(float *)&(param_2->MapView).OffsetRange;
    iVar6 = this->Offset;
    fVar5 = *(float *)&(param_2->MapView).OffsetRange;
    if (fVar14 <= fVar5) {
      fVar14 = fVar5;
    }
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetConstArrayView<Chaos::TVector<float,3>_>
              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_70,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)&param_1->field_0x8 + 0x28));
    FTriangleMesh::BuildSpatialHash
              (&(this->CollidableSubMesh).DynamicSubMesh,&local_70,&this->DynamicSubMeshSpatialHash,
               param_2,iVar6,fVar14 + fVar14);
  }
  if (0 < (this->CollidableSubMesh).KinematicColliderSubMesh.MElements.ArrayNum) {
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetConstArrayView<Chaos::TVector<float,3>_>
              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,local_50,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)&param_1->field_0x8 + 0x28));
    FTriangleMesh::BuildSpatialHash<float>
              (&(this->CollidableSubMesh).KinematicColliderSubMesh,local_50,
               &this->KinematicSubMeshSpatialHash,fVar14 + fVar14);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  piVar2 = &(this->ContourMinimizationIntersections).ArrayMax;
  (this->ContourMinimizationIntersections).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2c,4,0,&(this->ContourMinimizationIntersections).AllocatorInstance,0,piVar2);
  }
  this_00 = &this->VertexGIAColors;
  (this->VertexGIAColors).ArrayNum = 0;
  if ((this->VertexGIAColors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&this_00->AllocatorInstance,0,&(this->VertexGIAColors).ArrayMax);
  }
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>::
  SetNumZeroed(this_00,this->NumParticles,Default);
  piVar2 = &(this->TriangleGIAColors).ArrayMax;
  (this->TriangleGIAColors).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->TriangleGIAColors).AllocatorInstance,0,piVar2);
  }
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>::
  SetNumZeroed(&this->TriangleGIAColors,(this->CollidableSubMesh).DynamicSubMesh.MElements.ArrayNum,
               Default);
  pTVar3 = &this->IntersectionContourPoints;
  piVar2 = &(this->IntersectionContourPoints).ArrayMax;
  pTVar7 = (TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>
            *)(pTVar3->AllocatorInstance).Data;
  iVar6 = (this->IntersectionContourPoints).ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>,int>
              (pTVar7,iVar6);
    (this->IntersectionContourPoints).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>,int>
              (pTVar7,iVar6);
    (this->IntersectionContourPoints).ArrayNum = 0;
  }
  piVar2 = &(this->IntersectionContourTypes).ArrayMax;
  (this->IntersectionContourTypes).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->IntersectionContourTypes).AllocatorInstance,0,piVar2);
  }
  if (!bVar10) {
    return;
  }
  if (this->bOnlyCollideWithKinematics != false) {
    return;
  }
  pTVar4 = &this->ScratchBuffers;
  if (pTVar4->Ptr == (FScratchBuffers *)0x0) {
    pTVar12 = ::operator_new(0x30);
    if (pTVar12 ==
        (TArray<Chaos::Softs::GIA::FIntersectionContourPair,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar12 = (TArray<Chaos::Softs::GIA::FIntersectionContourPair,TSizedDefaultAllocator<32>_> *)
                0x0;
    }
    else {
      (pTVar12->AllocatorInstance).Data =
           (FScriptContainerElement *)
           UE::Core::Private::PimplPtr::
           DeleterFunc<Chaos::Softs::FPBDTriangleMeshCollisions::FScratchBuffers>;
      pTVar12->ArrayNum = 0;
      pTVar12->ArrayMax = 0;
      pTVar12[1].AllocatorInstance = 0;
      *(undefined8 *)((longlong)(pTVar12 + 1) + 8) = 0;
      pTVar12[2].AllocatorInstance = 0;
      *(undefined8 *)((longlong)(pTVar12 + 2) + 8) = 0;
    }
    if ((TPimplPtr<Chaos::Softs::FPBDTriangleMeshCollisions::FScratchBuffers,0> *)&local_78 ==
        pTVar4) {
      if ((FScratchBuffers *)(pTVar12 + 1) == (FScratchBuffers *)0x0) goto LAB_143d8e187;
    }
    else {
      pFVar8 = pTVar4->Ptr;
      pTVar4->Ptr = (FScratchBuffers *)(pTVar12 + 1);
      if (pFVar8 == (FScratchBuffers *)0x0) goto LAB_143d8e187;
      pTVar12 = &pFVar8[-1].IntersectionContours;
    }
    (*(code *)(pTVar12->AllocatorInstance).Data)();
  }
LAB_143d8e187:
  FScratchBuffers::Reset(pTVar4->Ptr);
  FindEdgeFaceIntersections<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>
            (&(this->CollidableSubMesh).DynamicSubMesh,&this->DynamicSubMeshSpatialHash,param_1,
             &pTVar4->Ptr->EdgeFaceIntersections);
  pFVar8 = pTVar4->Ptr;
  if ((pFVar8->EdgeFaceIntersections).ArrayNum != 0) {
    if (this->bGlobalIntersectionAnalysis != false) {
      GIA::ContourBuilding::BuildIntersectionContours
                (&(this->CollidableSubMesh).DynamicSubMesh,&pFVar8->EdgeFaceIntersections,
                 &pFVar8->IntersectionContours,pTVar3);
      GIA::FloodFill::FloodFillContours
                (&(this->CollidableSubMesh).DynamicSubMesh,this->NumParticles,this->Offset,
                 &((this->ScratchBuffers).Ptr)->IntersectionContours,this_00,
                 &this->TriangleGIAColors);
      GIA::FloodFill::AssignContourPointTypes
                (&((this->ScratchBuffers).Ptr)->IntersectionContours,pTVar3,
                 &this->IntersectionContourTypes);
    }
    if (this->bContourMinimization != false) {
      pFVar8 = (this->ScratchBuffers).Ptr;
      pFVar1 = &(this->CollidableSubMesh).DynamicSubMesh;
      if (this->bGlobalIntersectionAnalysis == false) {
        ContourMinimization::
        BuildLocalContourMinimizationIntersections<Chaos::Softs::FSolverParticlesRange>
                  (pFVar1,param_1,&pFVar8->EdgeFaceIntersections,
                   &this->ContourMinimizationIntersections);
      }
      else {
        ContourMinimization::
        BuildGlobalContourMinimizationIntersections<Chaos::Softs::FSolverParticlesRange>
                  (pFVar1,param_1,&pFVar8->IntersectionContours,
                   &this->ContourMinimizationIntersections);
      }
    }
  }
  return;
}

// InitFlesh<Chaos::Softs::FSolverParticles> @ 143d8fc00

void __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::InitFlesh<Chaos::Softs::FSolverParticles>
          (FPBDTriangleMeshCollisions *this,FSolverParticles *param_1,FPBDFlatWeightMap *param_2,
          bool param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  TVector<float,3> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar7;
  FTriangleMesh *pFVar8;
  bool bVar9;
  float fVar10;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_68;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_58;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_48;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_38 [2];
  
  if (this->bCollidableSubMeshDirty != false) {
    FTriangleSubMesh::Init<Chaos::Softs::FSolverParticles>
              (&this->CollidableSubMesh,param_1,&this->DisabledFaces,
               this->bSelfCollideAgainstAllKinematicVertices,&this->EnabledKinematicFaces,
               this->bOnlyCollideWithKinematics);
    this->bCollidableSubMeshDirty = false;
  }
  if (((this->CollidableSubMesh).DynamicSubMesh.MElements.ArrayNum != 0) ||
     ((((this->CollidableSubMesh).FullMesh)->MElements).ArrayNum != 0)) {
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshCollisions::InitFlesh<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64,Chaos::Softs::FPBDFlatWeightMap_const&___ptr64,bool)___ptr64'
                  ::__l9::__CpuProfilerEventSpecId1486,
                 "ChaosFPBDTriangleMeshCollisions_BuildSpatialHash",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDTriangleMeshCollisions.cpp"
                 ,0x5ce);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshCollisions::InitFlesh<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64,Chaos::Softs::FPBDFlatWeightMap_const&___ptr64,bool)___ptr64'
                 ::__l9::__CpuProfilerEventSpecId1486);
    }
    if (((param_2->MapView).MapValues.ArrayNum < 1) ||
       (fVar10 = *(float *)&(param_2->MapView).OffsetRange.field_0x4,
       (float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
      fVar10 = *(float *)&(param_2->MapView).OffsetRange;
      pTVar4 = (TVector<float,3> *)param_1->_padding_;
      fVar10 = fVar10 + fVar10;
      if (param_3) {
        pFVar8 = (this->CollidableSubMesh).FullMesh;
        iVar2 = (int)param_1->_padding_;
        local_48.DataPtr = pTVar4;
        if ((iVar2 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar7 = &local_48;
        local_48.ArrayNum = iVar2;
      }
      else {
        pFVar8 = &(this->CollidableSubMesh).DynamicSubMesh;
        iVar2 = (int)param_1->_padding_;
        local_38[0].DataPtr = pTVar4;
        if ((iVar2 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar7 = local_38;
        local_38[0].ArrayNum = iVar2;
      }
      FTriangleMesh::BuildSpatialHash<float>
                (pFVar8,pTVar7,&this->DynamicSubMeshSpatialHash,fVar10 + fVar10);
    }
    else {
      fVar1 = *(float *)&(param_2->MapView).OffsetRange;
      iVar2 = this->Offset;
      iVar3 = (int)param_1->_padding_;
      fVar10 = fVar1 + fVar10;
      if (fVar10 <= fVar1) {
        fVar10 = fVar1;
      }
      if (param_3) {
        pFVar8 = (this->CollidableSubMesh).FullMesh;
        local_68.DataPtr = (TVector<float,3> *)param_1->_padding_;
        if ((iVar3 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_68.ArrayNum = iVar3;
        FTriangleMesh::BuildSpatialHash
                  (pFVar8,&local_68,&this->DynamicSubMeshSpatialHash,param_2,iVar2,fVar10 + fVar10);
      }
      else {
        local_58.DataPtr = (TVector<float,3> *)param_1->_padding_;
        if ((iVar3 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_58.ArrayNum = iVar3;
        FTriangleMesh::BuildSpatialHash
                  (&(this->CollidableSubMesh).DynamicSubMesh,&local_58,
                   &this->DynamicSubMeshSpatialHash,param_2,iVar2,fVar10 + fVar10);
      }
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// InitFlesh<Chaos::Softs::FSolverParticlesRange> @ 143d8fee0

void __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::InitFlesh<Chaos::Softs::FSolverParticlesRange>
          (FPBDTriangleMeshCollisions *this,FSolverParticlesRange *param_1,
          FPBDFlatWeightMap *param_2,bool param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FTriangleMesh *pFVar5;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar6;
  bool bVar7;
  float fVar8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_68;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_58;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_48;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_38 [2];
  
  if (this->bCollidableSubMeshDirty != false) {
    FTriangleSubMesh::Init<Chaos::Softs::FSolverParticlesRange>
              (&this->CollidableSubMesh,param_1,&this->DisabledFaces,
               this->bSelfCollideAgainstAllKinematicVertices,&this->EnabledKinematicFaces,
               this->bOnlyCollideWithKinematics);
    this->bCollidableSubMeshDirty = false;
  }
  if (((this->CollidableSubMesh).DynamicSubMesh.MElements.ArrayNum != 0) ||
     ((((this->CollidableSubMesh).FullMesh)->MElements).ArrayNum != 0)) {
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshCollisions::InitFlesh<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange_const&___ptr64,Chaos::Softs::FPBDFlatWeightMap_const&___ptr64,bool)___ptr64'
                  ::__l9::__CpuProfilerEventSpecId1486,
                 "ChaosFPBDTriangleMeshCollisions_BuildSpatialHash",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDTriangleMeshCollisions.cpp"
                 ,0x5ce);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshCollisions::InitFlesh<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange_const&___ptr64,Chaos::Softs::FPBDFlatWeightMap_const&___ptr64,bool)___ptr64'
                 ::__l9::__CpuProfilerEventSpecId1486);
    }
    if (((param_2->MapView).MapValues.ArrayNum < 1) ||
       (fVar8 = *(float *)&(param_2->MapView).OffsetRange.field_0x4,
       (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
      fVar8 = *(float *)&(param_2->MapView).OffsetRange;
      fVar8 = fVar8 + fVar8;
      if (param_3) {
        pFVar5 = (this->CollidableSubMesh).FullMesh;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::
        GetConstArrayView<Chaos::TVector<float,3>_>
                  ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_48,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)&param_1->field_0x8 + 0x28));
        pTVar6 = &local_48;
      }
      else {
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::
        GetConstArrayView<Chaos::TVector<float,3>_>
                  ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,local_38,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)&param_1->field_0x8 + 0x28));
        pTVar6 = local_38;
        pFVar5 = &(this->CollidableSubMesh).DynamicSubMesh;
      }
      FTriangleMesh::BuildSpatialHash<float>
                (pFVar5,pTVar6,&this->DynamicSubMeshSpatialHash,fVar8 + fVar8);
    }
    else {
      fVar1 = *(float *)&(param_2->MapView).OffsetRange;
      iVar2 = this->Offset;
      fVar8 = fVar1 + fVar8;
      if (fVar8 <= fVar1) {
        fVar8 = fVar1;
      }
      if (param_3) {
        pFVar5 = (this->CollidableSubMesh).FullMesh;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::
        GetConstArrayView<Chaos::TVector<float,3>_>
                  ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_68,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)&param_1->field_0x8 + 0x28));
        FTriangleMesh::BuildSpatialHash
                  (pFVar5,&local_68,&this->DynamicSubMeshSpatialHash,param_2,iVar2,fVar8 + fVar8);
      }
      else {
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::
        GetConstArrayView<Chaos::TVector<float,3>_>
                  ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_58,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)&param_1->field_0x8 + 0x28));
        FTriangleMesh::BuildSpatialHash
                  (&(this->CollidableSubMesh).DynamicSubMesh,&local_58,
                   &this->DynamicSubMeshSpatialHash,param_2,iVar2,fVar8 + fVar8);
      }
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// PostStepInit<Chaos::Softs::FSolverParticles> @ 143d90390

void __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::PostStepInit<Chaos::Softs::FSolverParticles>
          (FPBDTriangleMeshCollisions *this,FSolverParticles *param_1)

{
  int *piVar1;
  FTriangleMesh *pFVar2;
  TArray<TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TPimplPtr<Chaos::Softs::FPBDTriangleMeshCollisions::FScratchBuffers,0> *pTVar4;
  int iVar5;
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>
  *pTVar6;
  FScratchBuffers *pFVar7;
  code *pcVar8;
  bool bVar9;
  TArray<Chaos::Softs::GIA::FIntersectionContourPair,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<Chaos::Softs::GIA::FIntersectionContourPair,TSizedDefaultAllocator<32>_> *pTVar11;
  bool bVar12;
  longlong local_48;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_40;
  
  if ((this->CollidableSubMesh).DynamicSubMesh.MElements.ArrayNum == 0) {
    return;
  }
  pTVar3 = &this->PostStepIntersectionContourPoints;
  piVar1 = &(this->PostStepIntersectionContourPoints).ArrayMax;
  pTVar6 = (TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>
            *)(pTVar3->AllocatorInstance).Data;
  iVar5 = (this->PostStepIntersectionContourPoints).ArrayNum;
  if ((this->PostStepIntersectionContourPoints).ArrayMax < 0) {
    DestructItems<TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>,int>
              (pTVar6,iVar5);
    (this->PostStepIntersectionContourPoints).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>,int>
              (pTVar6,iVar5);
    (this->PostStepIntersectionContourPoints).ArrayNum = 0;
  }
  pTVar11 = (TArray<Chaos::Softs::GIA::FIntersectionContourPair,TSizedDefaultAllocator<32>_> *)0x0;
  piVar1 = &(this->PostStepContourMinimizationIntersections).ArrayMax;
  (this->PostStepContourMinimizationIntersections).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2c,4,0,&(this->PostStepContourMinimizationIntersections).AllocatorInstance,0,piVar1
              );
  }
  if (this->NumContourMinimizationPostSteps < 1) {
    return;
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshCollisions::PostStepInit<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64)___ptr64'
                ::__l9::__CpuProfilerEventSpecId1535,
               "ChaosFPBDTriangleMeshCollisions_BuildSpatialHash",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDTriangleMeshCollisions.cpp"
               ,0x5ff);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshCollisions::PostStepInit<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64)___ptr64'
               ::__l9::__CpuProfilerEventSpecId1535);
  }
  local_40.DataPtr = (TVector<float,3> *)param_1->_padding_;
  iVar5 = (int)param_1->_padding_;
  if ((iVar5 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_40.ArrayNum = iVar5;
  FTriangleMesh::BuildSpatialHash<float>
            (&(this->CollidableSubMesh).DynamicSubMesh,&local_40,&this->DynamicSubMeshSpatialHash,
             __real_3f800000);
  pTVar4 = &this->ScratchBuffers;
  if (pTVar4->Ptr == (FScratchBuffers *)0x0) {
    pTVar10 = ::operator_new(0x30);
    if (pTVar10 !=
        (TArray<Chaos::Softs::GIA::FIntersectionContourPair,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar10->ArrayNum = 0;
      pTVar10->ArrayMax = 0;
      (pTVar10->AllocatorInstance).Data =
           (FScriptContainerElement *)
           UE::Core::Private::PimplPtr::
           DeleterFunc<Chaos::Softs::FPBDTriangleMeshCollisions::FScratchBuffers>;
      pTVar10[1].AllocatorInstance = 0;
      *(undefined8 *)((longlong)(pTVar10 + 1) + 8) = 0;
      pTVar10[2].AllocatorInstance = 0;
      *(undefined8 *)((longlong)(pTVar10 + 2) + 8) = 0;
      pTVar11 = pTVar10;
    }
    if ((TPimplPtr<Chaos::Softs::FPBDTriangleMeshCollisions::FScratchBuffers,0> *)&local_48 ==
        pTVar4) {
      if ((FScratchBuffers *)(pTVar11 + 1) == (FScratchBuffers *)0x0) goto LAB_143d90566;
    }
    else {
      pFVar7 = pTVar4->Ptr;
      pTVar4->Ptr = (FScratchBuffers *)(pTVar11 + 1);
      if (pFVar7 == (FScratchBuffers *)0x0) goto LAB_143d90566;
      pTVar11 = &pFVar7[-1].IntersectionContours;
    }
    (*(code *)(pTVar11->AllocatorInstance).Data)();
  }
LAB_143d90566:
  FScratchBuffers::Reset(pTVar4->Ptr);
  FindEdgeFaceIntersections<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>
            (&(this->CollidableSubMesh).DynamicSubMesh,&this->DynamicSubMeshSpatialHash,param_1,
             &pTVar4->Ptr->EdgeFaceIntersections);
  pFVar2 = &(this->CollidableSubMesh).DynamicSubMesh;
  if (this->bUseGlobalPostStepContours == false) {
    ContourMinimization::BuildLocalContourMinimizationIntersections<Chaos::Softs::FSolverParticles>
              (pFVar2,param_1,&pTVar4->Ptr->EdgeFaceIntersections,
               &this->PostStepContourMinimizationIntersections);
  }
  else {
    GIA::ContourBuilding::BuildIntersectionContours
              (pFVar2,&pTVar4->Ptr->EdgeFaceIntersections,&pTVar4->Ptr->IntersectionContours,pTVar3)
    ;
    ContourMinimization::BuildGlobalContourMinimizationIntersections<Chaos::Softs::FSolverParticles>
              (&(this->CollidableSubMesh).DynamicSubMesh,param_1,&pTVar4->Ptr->IntersectionContours,
               &this->PostStepContourMinimizationIntersections);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PostStepInit<Chaos::Softs::FSolverParticlesRange> @ 143d90610

void __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::PostStepInit<Chaos::Softs::FSolverParticlesRange>
          (FPBDTriangleMeshCollisions *this,FSolverParticlesRange *param_1)

{
  int *piVar1;
  FTriangleMesh *pFVar2;
  TArray<TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TPimplPtr<Chaos::Softs::FPBDTriangleMeshCollisions::FScratchBuffers,0> *pTVar4;
  int iVar5;
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>
  *pTVar6;
  FScratchBuffers *pFVar7;
  code *pcVar8;
  bool bVar9;
  TArray<Chaos::Softs::GIA::FIntersectionContourPair,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<Chaos::Softs::GIA::FIntersectionContourPair,TSizedDefaultAllocator<32>_> *pTVar11;
  bool bVar12;
  longlong local_48;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_40;
  
  if ((this->CollidableSubMesh).DynamicSubMesh.MElements.ArrayNum == 0) {
    return;
  }
  pTVar3 = &this->PostStepIntersectionContourPoints;
  piVar1 = &(this->PostStepIntersectionContourPoints).ArrayMax;
  pTVar6 = (TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>
            *)(pTVar3->AllocatorInstance).Data;
  iVar5 = (this->PostStepIntersectionContourPoints).ArrayNum;
  if ((this->PostStepIntersectionContourPoints).ArrayMax < 0) {
    DestructItems<TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>,int>
              (pTVar6,iVar5);
    (this->PostStepIntersectionContourPoints).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>,int>
              (pTVar6,iVar5);
    (this->PostStepIntersectionContourPoints).ArrayNum = 0;
  }
  pTVar11 = (TArray<Chaos::Softs::GIA::FIntersectionContourPair,TSizedDefaultAllocator<32>_> *)0x0;
  piVar1 = &(this->PostStepContourMinimizationIntersections).ArrayMax;
  (this->PostStepContourMinimizationIntersections).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2c,4,0,&(this->PostStepContourMinimizationIntersections).AllocatorInstance,0,piVar1
              );
  }
  if (this->NumContourMinimizationPostSteps < 1) {
    return;
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshCollisions::PostStepInit<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange_const&___ptr64)___ptr64'
                ::__l9::__CpuProfilerEventSpecId1535,
               "ChaosFPBDTriangleMeshCollisions_BuildSpatialHash",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDTriangleMeshCollisions.cpp"
               ,0x5ff);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshCollisions::PostStepInit<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange_const&___ptr64)___ptr64'
               ::__l9::__CpuProfilerEventSpecId1535);
  }
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_40,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x28));
  FTriangleMesh::BuildSpatialHash<float>
            (&(this->CollidableSubMesh).DynamicSubMesh,&local_40,&this->DynamicSubMeshSpatialHash,
             __real_3f800000);
  pTVar4 = &this->ScratchBuffers;
  if (pTVar4->Ptr == (FScratchBuffers *)0x0) {
    pTVar10 = ::operator_new(0x30);
    if (pTVar10 !=
        (TArray<Chaos::Softs::GIA::FIntersectionContourPair,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar10->ArrayNum = 0;
      pTVar10->ArrayMax = 0;
      (pTVar10->AllocatorInstance).Data =
           (FScriptContainerElement *)
           UE::Core::Private::PimplPtr::
           DeleterFunc<Chaos::Softs::FPBDTriangleMeshCollisions::FScratchBuffers>;
      pTVar10[1].AllocatorInstance = 0;
      *(undefined8 *)((longlong)(pTVar10 + 1) + 8) = 0;
      pTVar10[2].AllocatorInstance = 0;
      *(undefined8 *)((longlong)(pTVar10 + 2) + 8) = 0;
      pTVar11 = pTVar10;
    }
    if ((TPimplPtr<Chaos::Softs::FPBDTriangleMeshCollisions::FScratchBuffers,0> *)&local_48 ==
        pTVar4) {
      if ((FScratchBuffers *)(pTVar11 + 1) == (FScratchBuffers *)0x0) goto LAB_143d907ed;
    }
    else {
      pFVar7 = pTVar4->Ptr;
      pTVar4->Ptr = (FScratchBuffers *)(pTVar11 + 1);
      if (pFVar7 == (FScratchBuffers *)0x0) goto LAB_143d907ed;
      pTVar11 = &pFVar7[-1].IntersectionContours;
    }
    (*(code *)(pTVar11->AllocatorInstance).Data)();
  }
LAB_143d907ed:
  FScratchBuffers::Reset(pTVar4->Ptr);
  FindEdgeFaceIntersections<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>
            (&(this->CollidableSubMesh).DynamicSubMesh,&this->DynamicSubMeshSpatialHash,param_1,
             &pTVar4->Ptr->EdgeFaceIntersections);
  pFVar2 = &(this->CollidableSubMesh).DynamicSubMesh;
  if (this->bUseGlobalPostStepContours == false) {
    ContourMinimization::
    BuildLocalContourMinimizationIntersections<Chaos::Softs::FSolverParticlesRange>
              (pFVar2,param_1,&pTVar4->Ptr->EdgeFaceIntersections,
               &this->PostStepContourMinimizationIntersections);
  }
  else {
    GIA::ContourBuilding::BuildIntersectionContours
              (pFVar2,&pTVar4->Ptr->EdgeFaceIntersections,&pTVar4->Ptr->IntersectionContours,pTVar3)
    ;
    ContourMinimization::
    BuildGlobalContourMinimizationIntersections<Chaos::Softs::FSolverParticlesRange>
              (&(this->CollidableSubMesh).DynamicSubMesh,param_1,&pTVar4->Ptr->IntersectionContours,
               &this->PostStepContourMinimizationIntersections);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

