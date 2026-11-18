// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 21

// FClothingSimulationCollider @ 14db8f6c0

FClothingSimulationCollider * __thiscall
Chaos::FClothingSimulationCollider::FClothingSimulationCollider
          (FClothingSimulationCollider *this,UPhysicsAsset *param_1,FReferenceSkeleton *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FClothingSimulationCollider *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar8 = (undefined8 *)0x0;
  this->PhysicsAsset = param_1;
  (this->LODData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->LODData).ArrayMax;
  (this->LODData).ArrayNum = 0;
  *piVar1 = 0;
  *(undefined8 *)&this->LODIndices = 0;
  *(undefined8 *)&(this->LODIndices).field_0x8 = 0;
  *(undefined8 *)&(this->LODIndices).field_0x20 = 0;
  this->CollisionData = (FClothCollisionData *)0x0;
  this->bHasExternalCollisionChanged = false;
  this->ReferenceSkeleton = param_2;
  *(undefined4 *)&(this->LODIndices).field_0x28 = 0;
  *(undefined4 *)&(this->LODIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->LODIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LODIndices).field_0x34 = 0;
  *(undefined8 *)&(this->LODIndices).field_0x40 = 0;
  *(undefined4 *)&(this->LODIndices).field_0x48 = 0;
  this->Scale = 1.0;
  if (*piVar1 < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,2,&(this->LODData).AllocatorInstance,0,piVar1);
  }
  puVar6 = ::operator_new(0x98);
  local_18[0] = puVar8;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(undefined4 *)(puVar6 + 8) = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    *(undefined4 *)(puVar6 + 0xe) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x74) = 0x80;
    *(undefined4 *)(puVar6 + 0xf) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x7c) = 0;
    puVar6[0x11] = 0;
    *(undefined4 *)(puVar6 + 0x12) = 0;
    local_18[0] = puVar6;
  }
  pFVar2 = (this->LODData).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FClothingSimulationCollider *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->LODData).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->LODData).AllocatorInstance,piVar1);
  }
  (this->LODData).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->LODData).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  local_18[0] = (undefined8 *)0x0;
  puVar6 = ::operator_new(0x98);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(undefined4 *)(puVar6 + 8) = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    *(undefined4 *)(puVar6 + 0xe) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x74) = 0x80;
    *(undefined4 *)(puVar6 + 0xf) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x7c) = 0;
    puVar6[0x11] = 0;
    *(undefined4 *)(puVar6 + 0x12) = 0;
    puVar8 = puVar6;
  }
  pFVar2 = (this->LODData).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FClothingSimulationCollider *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->LODData).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->LODData).AllocatorInstance,piVar1);
  }
  (this->LODData).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->LODData).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return this;
}

// ~FClothingSimulationCollider @ 14db9f660

void __thiscall
Chaos::FClothingSimulationCollider::~FClothingSimulationCollider(FClothingSimulationCollider *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->LODIndices).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LODIndices).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LODIndices);
  DestructItems<TUniquePtr<Chaos::FClothingSimulationCollider::FLODData,TDefaultDelete<Chaos::FClothingSimulationCollider::FLODData>_>,int>
            ((TUniquePtr<Chaos::FClothingSimulationCollider::FLODData,TDefaultDelete<Chaos::FClothingSimulationCollider::FLODData>_>
              *)(this->LODData).AllocatorInstance.Data,(this->LODData).ArrayNum);
  pFVar2 = (this->LODData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Add @ 14dbb4b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulationCollider::Add
          (FClothingSimulationCollider *this,FClothingSimulationSolver *param_1,
          FClothingSimulationCloth *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
  *pTVar4;
  longlong lVar5;
  undefined1 *puVar6;
  TKeyInitializer<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>_&&>
  local_res8;
  FClothingSimulationSolver **local_res10;
  FClothCollisionDataExtended local_118;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  FClothCollisionData local_b8;
  FClothingSimulationSolver *local_78;
  FClothingSimulationCloth *local_70;
  FClothingSimulationSolver *local_68;
  FClothingSimulationCloth *local_60;
  double local_58;
  double dStack_50;
  double local_48;
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                         ,0x342,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_2 == (FClothingSimulationCloth *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cloth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                         ,0x343,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_2->Mesh == (FClothingSimulationMesh *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cloth->GetMesh()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                         ,0x344,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_78 = param_1;
  local_70 = param_2;
  pTVar4 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,
                  (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                   *)&local_78);
  puVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
                 *)0x0) {
    puVar6 = (undefined1 *)0x0;
  }
  if ((puVar6 != (undefined1 *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!LODIndices.Find(FSolverClothPair(Solver, Cloth))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                         ,0x347,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res10 = &local_68;
  local_68 = param_1;
  local_60 = param_2;
  TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
  ::
  Emplace<TKeyInitializer<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>_&&>_>
            ((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
              *)&this->LODIndices,&local_res8,(bool *)&local_res10);
  *(undefined4 *)((longlong)(int)local_res8.Key * 0x20 + 0x10 + *(longlong *)&this->LODIndices) =
       0xffffffff;
  lVar5 = (**(code **)(param_2->Mesh->_padding_ + 0xc0))();
  dVar2 = *(double *)(lVar5 + 0x40);
  dStack_50 = *(double *)(lVar5 + 0x48);
  local_48 = *(double *)(lVar5 + 0x50);
  local_58 = dVar2;
  if ((2 < (byte)LogChaosCloth._0_1_) &&
     ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)(dVar2 - dStack_50) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2 - dStack_50,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
      || (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)(dVar2 - local_48) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar2 - local_48,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
         )))) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
  }
  this->Scale = dVar2;
  local_b8.Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Spheres.ArrayNum = 0;
  local_b8.Spheres.ArrayMax = 0;
  local_b8.SphereConnections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.SphereConnections.ArrayNum = 0;
  local_b8.SphereConnections.ArrayMax = 0;
  local_b8.Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Convexes.ArrayNum = 0;
  local_b8.Convexes.ArrayMax = 0;
  local_b8.Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Boxes.ArrayNum = 0;
  local_b8.Boxes.ArrayMax = 0;
  local_118.LevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.LevelSets.ArrayNum = 0;
  local_118.LevelSets.ArrayMax = 0;
  local_118.SkinnedLevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.SkinnedLevelSets.ArrayNum = 0;
  local_118.SkinnedLevelSets.ArrayMax = 0;
  local_118.MLLevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.MLLevelSets.ArrayNum = 0;
  local_118.MLLevelSets.ArrayMax = 0;
  local_118.SkinnedTriangleMeshes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.SkinnedTriangleMeshes.ArrayNum = 0;
  local_118.SkinnedTriangleMeshes.ArrayMax = 0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  ExtractPhysicsAssetCollision
            (this->PhysicsAsset,this->ReferenceSkeleton,&local_b8,&local_118,&local_c8,&local_d8,
             false,false);
  if (((this->LODData).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FLODData::Add(*(FLODData **)(this->LODData).AllocatorInstance.Data,param_1,param_2,&local_b8,
                &local_118,this->Scale,&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  DestructItems<Chaos::FSkinnedTriangleMeshCollisionData,int>
            ((FSkinnedTriangleMeshCollisionData *)
             local_118.SkinnedTriangleMeshes.AllocatorInstance.Data,
             local_118.SkinnedTriangleMeshes.ArrayNum);
  if ((FSkinnedTriangleMeshCollisionData *)local_118.SkinnedTriangleMeshes.AllocatorInstance.Data !=
      (FSkinnedTriangleMeshCollisionData *)0x0) {
    FMemory::Free(local_118.SkinnedTriangleMeshes.AllocatorInstance.Data);
  }
  DestructItems<Chaos::FMLLevelSetCollisionData,int>
            ((FMLLevelSetCollisionData *)local_118.MLLevelSets.AllocatorInstance.Data,
             local_118.MLLevelSets.ArrayNum);
  if ((FMLLevelSetCollisionData *)local_118.MLLevelSets.AllocatorInstance.Data !=
      (FMLLevelSetCollisionData *)0x0) {
    FMemory::Free(local_118.MLLevelSets.AllocatorInstance.Data);
  }
  DestructItems<Chaos::FSkinnedLevelSetCollisionData,int>
            ((FSkinnedLevelSetCollisionData *)local_118.SkinnedLevelSets.AllocatorInstance.Data,
             local_118.SkinnedLevelSets.ArrayNum);
  if ((FSkinnedLevelSetCollisionData *)local_118.SkinnedLevelSets.AllocatorInstance.Data !=
      (FSkinnedLevelSetCollisionData *)0x0) {
    FMemory::Free(local_118.SkinnedLevelSets.AllocatorInstance.Data);
  }
  DestructItems<Chaos::FLevelSetCollisionData,int>
            ((FLevelSetCollisionData *)local_118.LevelSets.AllocatorInstance.Data,
             local_118.LevelSets.ArrayNum);
  if ((FLevelSetCollisionData *)local_118.LevelSets.AllocatorInstance.Data !=
      (FLevelSetCollisionData *)0x0) {
    FMemory::Free(local_118.LevelSets.AllocatorInstance.Data);
  }
  if (local_b8.Boxes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Boxes.AllocatorInstance.Data);
  }
  DestructItems<FClothCollisionPrim_Convex,int>
            ((FClothCollisionPrim_Convex *)local_b8.Convexes.AllocatorInstance.Data,
             local_b8.Convexes.ArrayNum);
  if ((FClothCollisionPrim_Convex *)local_b8.Convexes.AllocatorInstance.Data !=
      (FClothCollisionPrim_Convex *)0x0) {
    FMemory::Free(local_b8.Convexes.AllocatorInstance.Data);
  }
  if (local_b8.SphereConnections.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.SphereConnections.AllocatorInstance.Data);
  }
  if (local_b8.Spheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Spheres.AllocatorInstance.Data);
  }
  return;
}

// ExtractPhysicsAssetCollision @ 14dbf0900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014dbf28d9) */
/* WARNING: Removing unreachable block (ram,0x00014dbf23c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::FClothingSimulationCollider::ExtractPhysicsAssetCollision
          (UPhysicsAsset *param_1,FReferenceSkeleton *param_2,FClothCollisionData *param_3,
          FClothCollisionDataExtended *param_4,TArray<int,TSizedDefaultAllocator<32>_> *param_5,
          TArray<int,TSizedDefaultAllocator<32>_> *param_6,bool param_7,bool param_8)

{
  int *piVar1;
  void *_Dst;
  FName *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  TConvexHalfEdgeStructureData<int> *pTVar10;
  FClothCollisionPrim_Convex *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined8 uVar13;
  FSkinnedTriangleMesh *pFVar14;
  code *pcVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  double dVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  FClothCollisionData *pFVar33;
  ForAnyElementType FVar34;
  FClothCollisionDataExtended *pFVar35;
  FReferenceSkeleton *pFVar36;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar37;
  bool bVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  uint uVar42;
  int *piVar43;
  TVector<double> *pTVar44;
  FScriptContainerElement *pFVar45;
  TQuat<double> *pTVar46;
  FPlaneData *pFVar47;
  FPlaneData *pFVar48;
  FPlaneData *pFVar49;
  FHalfEdgeData *pFVar50;
  FHalfEdgeData *pFVar51;
  FHalfEdgeData *pFVar52;
  int *piVar53;
  TRefCountPtr<Chaos::FSkinnedTriangleMesh> *pTVar54;
  longlong lVar55;
  ulonglong uVar56;
  uint uVar57;
  uint uVar58;
  longlong lVar59;
  uint uVar60;
  longlong lVar61;
  ulonglong uVar62;
  atomic<int> *paVar63;
  FName *pFVar64;
  FKSkinnedTriangleMeshElem *pFVar65;
  ulonglong uVar66;
  FKSkinnedTriangleMeshElem *pFVar67;
  uint uVar68;
  double *pdVar69;
  ulonglong uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  double dVar75;
  double dVar76;
  undefined1 auStackY_4c8 [32];
  undefined1 local_468;
  undefined1 local_467;
  undefined1 local_466;
  undefined1 local_465;
  undefined1 local_464;
  undefined1 local_463;
  undefined1 local_462;
  undefined1 local_461;
  undefined1 local_460;
  undefined1 local_45f;
  undefined1 local_45e;
  undefined1 local_45d;
  undefined1 local_45c [4];
  uint local_458;
  ForAnyElementType local_450;
  undefined8 local_448;
  ForAnyElementType local_440;
  undefined8 local_438;
  FClothCollisionData *local_430;
  FKSkinnedTriangleMeshElem *local_428;
  ForAnyElementType local_420;
  undefined8 local_418;
  int local_410;
  int local_40c;
  int local_408;
  int local_404;
  FClothCollisionPrim_Convex local_400;
  FKSkinnedTriangleMeshElem *local_3d8;
  FScriptContainerElement *local_3d0;
  FClothCollisionDataExtended *local_3c8;
  FReferenceSkeleton *local_3c0;
  longlong local_3b8;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  uint local_3a4;
  TArray<int,TSizedDefaultAllocator<32>_> *local_3a0;
  FScriptContainerElement *local_398;
  int local_390;
  undefined4 uStack_38c;
  double dStack_388;
  double dStack_380;
  double dStack_378;
  int local_370;
  undefined4 uStack_36c;
  double dStack_368;
  double dStack_360;
  double dStack_358;
  int local_350;
  undefined4 uStack_34c;
  double dStack_348;
  double dStack_340;
  double dStack_338;
  int local_330;
  undefined4 uStack_32c;
  double dStack_328;
  double dStack_320;
  double dStack_318;
  UPhysicsAsset *local_310;
  longlong local_308;
  longlong local_300;
  FClothCollisionPrim_ConvexFace *local_2f8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2f0;
  int *local_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  int local_2c8;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  int local_2a8;
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  int local_288;
  float fStack_284;
  double dStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  undefined1 local_228 [16];
  double local_218;
  int iStack_210;
  undefined4 uStack_20c;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1f0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  TVector<double> local_178;
  TQuat<double> local_158;
  undefined8 local_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_2f0 = param_5;
  local_3a0 = param_6;
  local_430 = param_3;
  local_3c8 = param_4;
  local_3c0 = param_2;
  local_310 = param_1;
  FClothCollisionData::Reset(param_3);
  FClothCollisionDataExtended::Reset(param_4);
  piVar53 = &param_5->ArrayMax;
  param_5->ArrayNum = 0;
  local_2e8 = piVar53;
  if (param_5->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_5->AllocatorInstance,0,piVar53);
  }
  param_6->ArrayNum = 0;
  if (param_6->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_6->AllocatorInstance,0,&param_6->ArrayMax);
  }
  if (param_1 != (UPhysicsAsset *)0x0) {
    uVar58 = (param_1->SkeletalBodySetups).ArrayNum;
    if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
    }
    if (*piVar53 < (int)uVar58) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar58,&param_5->AllocatorInstance,param_5->ArrayNum,piVar53);
    }
    dVar32 = _UNK_150689678;
    dVar31 = ___xmm_3fe00000000000003fe0000000000000;
    fVar30 = __real_3f000000;
    dVar29 = __real_3fe0000000000000;
    local_3a4 = (param_1->SkeletalBodySetups).ArrayNum;
    uVar56 = (ulonglong)(int)local_3a4;
    local_3d0 = (param_1->SkeletalBodySetups).AllocatorInstance.Data;
    pFVar45 = local_3d0 + uVar56 * 8;
    local_398 = pFVar45;
    while( true ) {
      if ((param_1->SkeletalBodySetups).ArrayNum != (int)uVar56) {
        local_468 = 0;
        `TCheckedPointerIterator<TObjectPtr<USkeletalBodySetup>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_468);
      }
      if (local_3d0 == pFVar45) break;
      lVar8 = *(longlong *)local_3d0;
      if (lVar8 != 0) {
        iVar39 = -1;
        if (((param_2 != (FReferenceSkeleton *)0x0) && (*(FName *)(lVar8 + 0x28) != (FName)0x0)) &&
           (piVar43 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                              *)&param_2->FinalNameToIndexMap,*(FName *)(lVar8 + 0x28)),
           piVar43 != (int *)0x0)) {
          iVar39 = *piVar43;
        }
        local_410 = iVar39;
        if ((!param_8) || (pFVar45 = local_398, iVar39 != -1)) {
          pFVar45 = (param_5->AllocatorInstance).Data;
          if ((pFVar45 <= (FScriptContainerElement *)&local_410) &&
             (((FScriptContainerElement *)&local_410 < pFVar45 + (longlong)*piVar53 * 4 &&
              (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar38)))) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          iVar39 = param_5->ArrayNum;
          if (iVar39 == *piVar53) {
            iVar39 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_5->AllocatorInstance,piVar53);
          }
          pFVar45 = (param_5->AllocatorInstance).Data;
          param_5->ArrayNum = iVar39 + 1;
          *(int *)(pFVar45 + (longlong)iVar39 * 4) = local_410;
          iVar41 = *(int *)(lVar8 + 0x60);
          if (iVar41 != 0) {
            lVar61 = *(longlong *)(lVar8 + 0x58);
            lVar59 = (longlong)iVar41 * 0x68 + lVar61;
            while( true ) {
              if (*(int *)(lVar8 + 0x60) != iVar41) {
                local_467 = 0;
                `TCheckedPointerIterator<FKSphylElem_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_467);
              }
              if (lVar61 == lVar59) break;
              if (*(float *)(lVar61 + 100) == 0.0) {
                uStack_2c0 = *(undefined8 *)(lVar61 + 0x30);
                uStack_2b8 = *(undefined8 *)(lVar61 + 0x38);
                pFVar45 = (param_3->Spheres).AllocatorInstance.Data;
                uStack_2b0 = *(undefined8 *)(lVar61 + 0x40);
                uStack_2c4 = *(undefined4 *)(lVar61 + 0x60);
                local_2c8 = iVar39;
                if (((pFVar45 <= (FScriptContainerElement *)&local_2c8) &&
                    ((FScriptContainerElement *)&local_2c8 <
                     pFVar45 + (longlong)(param_3->Spheres).ArrayMax * 0x20)) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar38)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                iVar40 = (param_3->Spheres).ArrayNum;
                piVar53 = &(param_3->Spheres).ArrayMax;
                if (iVar40 == *piVar53) {
                  iVar40 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,(ForAnyElementType *)param_3,piVar53);
                }
                (param_3->Spheres).ArrayNum = iVar40 + 1;
                pFVar9 = (param_3->Spheres).AllocatorInstance.Data;
                lVar61 = lVar61 + 0x68;
                pFVar45 = pFVar9 + (longlong)iVar40 * 0x20;
                *(ulonglong *)pFVar45 = CONCAT44(uStack_2c4,local_2c8);
                *(undefined8 *)(pFVar45 + 8) = uStack_2c0;
                pFVar9 = pFVar9 + (longlong)iVar40 * 0x20 + 0x10;
                *(undefined8 *)pFVar9 = uStack_2b8;
                *(undefined8 *)(pFVar9 + 8) = uStack_2b0;
              }
              else {
                local_390 = 0xffffffff;
                uStack_38c = 0;
                dStack_388 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                dStack_380 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                local_370 = 0xffffffff;
                dStack_368 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                dStack_360 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                uStack_36c = 0;
                dStack_378 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                dStack_358 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                UE::Math::TRotator<double>::RotateVector
                          ((TRotator<double> *)(lVar61 + 0x48),(TVector<double> *)&local_208._s_0,
                           &UE::Math::TVector<double>::UpVector);
                pFVar45 = (param_3->Spheres).AllocatorInstance.Data;
                local_118 = 0xffffffffffffffff;
                dVar16 = (double)(*(float *)(lVar61 + 100) * fVar30);
                dStack_388 = *(double *)(lVar61 + 0x30) - dVar16 * local_208._s_0.X;
                dStack_368 = *(double *)(lVar61 + 0x30) + dVar16 * local_208._s_0.X;
                dStack_380 = *(double *)(lVar61 + 0x38) - dVar16 * local_208._s_0.Y;
                dStack_360 = dVar16 * local_208._s_0.Y + *(double *)(lVar61 + 0x38);
                dStack_378 = *(double *)(lVar61 + 0x40) - dVar16 * local_208._s_0.Z;
                dStack_358 = dVar16 * local_208._s_0.Z + *(double *)(lVar61 + 0x40);
                uStack_38c = *(undefined4 *)(lVar61 + 0x60);
                dStack_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                dStack_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                dStack_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                local_390 = iVar39;
                local_370 = iVar39;
                uStack_36c = uStack_38c;
                if (((pFVar45 <= (FScriptContainerElement *)&local_390) &&
                    ((FScriptContainerElement *)&local_390 <
                     pFVar45 + (longlong)(param_3->Spheres).ArrayMax * 0x20)) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar38)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                iVar40 = (param_3->Spheres).ArrayNum;
                if (iVar40 == (param_3->Spheres).ArrayMax) {
                  iVar40 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,(ForAnyElementType *)param_3,
                                      &(param_3->Spheres).ArrayMax);
                }
                (param_3->Spheres).ArrayNum = iVar40 + 1;
                pFVar9 = (param_3->Spheres).AllocatorInstance.Data;
                pFVar45 = pFVar9 + (longlong)iVar40 * 0x20;
                *(ulonglong *)pFVar45 = CONCAT44(uStack_38c,local_390);
                *(double *)(pFVar45 + 8) = dStack_388;
                pFVar9 = pFVar9 + (longlong)iVar40 * 0x20 + 0x10;
                *(double *)pFVar9 = dStack_380;
                *(double *)(pFVar9 + 8) = dStack_378;
                pFVar45 = (param_3->Spheres).AllocatorInstance.Data;
                local_118 = CONCAT44(local_118._4_4_,iVar40);
                if (((pFVar45 <= (FScriptContainerElement *)&local_370) &&
                    ((FScriptContainerElement *)&local_370 <
                     pFVar45 + (longlong)(param_3->Spheres).ArrayMax * 0x20)) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar38)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                iVar40 = (param_3->Spheres).ArrayNum;
                if (iVar40 == (param_3->Spheres).ArrayMax) {
                  iVar40 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,(ForAnyElementType *)param_3,
                                      &(param_3->Spheres).ArrayMax);
                }
                (param_3->Spheres).ArrayNum = iVar40 + 1;
                pFVar9 = (param_3->Spheres).AllocatorInstance.Data;
                pFVar45 = pFVar9 + (longlong)iVar40 * 0x20;
                *(ulonglong *)pFVar45 = CONCAT44(uStack_36c,local_370);
                *(double *)(pFVar45 + 8) = dStack_368;
                pFVar9 = pFVar9 + (longlong)iVar40 * 0x20 + 0x10;
                *(double *)pFVar9 = dStack_360;
                *(double *)(pFVar9 + 8) = dStack_358;
                pFVar45 = (param_3->SphereConnections).AllocatorInstance.Data;
                local_118 = CONCAT44(iVar40,(undefined4)local_118);
                if (((pFVar45 <= (FScriptContainerElement *)&local_118) &&
                    ((FScriptContainerElement *)&local_118 <
                     pFVar45 + (longlong)(param_3->SphereConnections).ArrayMax * 0x20)) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar38)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                iVar40 = (param_3->SphereConnections).ArrayNum;
                piVar53 = &(param_3->SphereConnections).ArrayMax;
                if (iVar40 == *piVar53) {
                  iVar40 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&(param_3->SphereConnections).AllocatorInstance,piVar53)
                  ;
                }
                (param_3->SphereConnections).ArrayNum = iVar40 + 1;
                pFVar9 = (param_3->SphereConnections).AllocatorInstance.Data;
                lVar61 = lVar61 + 0x68;
                pFVar45 = pFVar9 + (longlong)iVar40 * 0x20;
                *(undefined8 *)pFVar45 = local_118;
                *(double *)(pFVar45 + 8) = dStack_110;
                pFVar9 = pFVar9 + (longlong)iVar40 * 0x20 + 0x10;
                *(double *)pFVar9 = dStack_108;
                *(double *)(pFVar9 + 8) = dStack_100;
              }
            }
          }
          iVar41 = *(int *)(lVar8 + 0x40);
          lVar61 = *(longlong *)(lVar8 + 0x38);
          lVar59 = (longlong)iVar41 * 0x50 + lVar61;
          while( true ) {
            if (*(int *)(lVar8 + 0x40) != iVar41) {
              local_466 = 0;
              `TCheckedPointerIterator<FKSphereElem_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_466);
            }
            piVar43 = &(param_3->Spheres).ArrayMax;
            piVar53 = &(param_3->Spheres).ArrayNum;
            if (lVar61 == lVar59) break;
            uStack_2a0 = *(undefined8 *)(lVar61 + 0x30);
            uStack_298 = *(undefined8 *)(lVar61 + 0x38);
            uStack_290 = *(undefined8 *)(lVar61 + 0x40);
            pFVar45 = (local_430->Spheres).AllocatorInstance.Data;
            uStack_2a4 = *(undefined4 *)(lVar61 + 0x48);
            local_2a8 = iVar39;
            if (((pFVar45 <= (FScriptContainerElement *)&local_2a8) &&
                ((FScriptContainerElement *)&local_2a8 < pFVar45 + (longlong)*piVar43 * 0x20)) &&
               (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar38)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            iVar40 = *piVar53;
            if (iVar40 == *piVar43) {
              iVar40 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,(ForAnyElementType *)local_430,piVar43);
              *piVar53 = iVar40;
            }
            *piVar53 = iVar40 + 1;
            lVar61 = lVar61 + 0x50;
            pFVar9 = (local_430->Spheres).AllocatorInstance.Data;
            pFVar45 = pFVar9 + (longlong)iVar40 * 0x20;
            *(ulonglong *)pFVar45 = CONCAT44(uStack_2a4,local_2a8);
            *(undefined8 *)(pFVar45 + 8) = uStack_2a0;
            pFVar9 = pFVar9 + (longlong)iVar40 * 0x20 + 0x10;
            *(undefined8 *)pFVar9 = uStack_298;
            *(undefined8 *)(pFVar9 + 8) = uStack_290;
          }
          lVar61 = *(longlong *)(lVar8 + 0x78);
          iVar41 = *(int *)(lVar8 + 0x80);
          pdVar69 = (double *)(lVar61 + 0x30);
          lVar59 = (longlong)iVar41 * 0x70 + lVar61;
          while( true ) {
            if (*(int *)(lVar8 + 0x80) != iVar41) {
              local_465 = 0;
              `TCheckedPointerIterator<FKTaperedCapsuleElem_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_465);
            }
            pFVar33 = local_430;
            if (lVar61 == lVar59) break;
            if ((*(float *)(pdVar69 + 7) == 0.0) && (*(char *)((longlong)pdVar69 + 0x3c) == '\0')) {
              dStack_280 = *pdVar69;
              uStack_278 = pdVar69[1];
              uStack_270 = pdVar69[2];
              fStack_284 = *(float *)((longlong)pdVar69 + 0x34);
              if (*(float *)((longlong)pdVar69 + 0x34) <= *(float *)(pdVar69 + 6)) {
                fStack_284 = *(float *)(pdVar69 + 6);
              }
              pFVar45 = (local_430->Spheres).AllocatorInstance.Data;
              local_288 = iVar39;
              if (((pFVar45 <= (FScriptContainerElement *)&local_288) &&
                  ((FScriptContainerElement *)&local_288 < pFVar45 + (longlong)*piVar43 * 0x20)) &&
                 (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar38)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              iVar40 = *piVar53;
              if (iVar40 == *piVar43) {
                iVar40 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,(ForAnyElementType *)pFVar33,piVar43);
                *piVar53 = iVar40;
              }
              *piVar53 = iVar40 + 1;
              pFVar45 = (pFVar33->Spheres).AllocatorInstance.Data;
              lVar55 = (longlong)iVar40 * 0x20;
              *(ulonglong *)(pFVar45 + lVar55) = CONCAT44(fStack_284,local_288);
              *(double *)(pFVar45 + lVar55 + 8) = dStack_280;
              uVar71 = (undefined4)uStack_278;
              uVar72 = uStack_278._4_4_;
              uVar73 = (undefined4)uStack_270;
              uVar74 = uStack_270._4_4_;
            }
            else {
              local_350 = 0xffffffff;
              uStack_34c = 0;
              dStack_348 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              dStack_340 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              local_330 = 0xffffffff;
              dStack_328 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              dStack_320 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              uStack_32c = 0;
              dStack_338 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              dStack_318 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              UE::Math::TRotator<double>::RotateVector
                        ((TRotator<double> *)(pdVar69 + 3),(TVector<double> *)&local_1f0._s_0,
                         &UE::Math::TVector<double>::UpVector);
              pFVar33 = local_430;
              pFVar45 = (local_430->Spheres).AllocatorInstance.Data;
              local_138 = 0xffffffffffffffff;
              dVar16 = (double)(*(float *)(pdVar69 + 7) * fVar30);
              dStack_348 = local_1f0._s_0.X * dVar16 + *pdVar69;
              dStack_328 = *pdVar69 - local_1f0._s_0.X * dVar16;
              dStack_340 = local_1f0._s_0.Y * dVar16 + pdVar69[1];
              dStack_320 = pdVar69[1] - local_1f0._s_0.Y * dVar16;
              dStack_338 = local_1f0._s_0.Z * dVar16 + pdVar69[2];
              dStack_318 = pdVar69[2] - local_1f0._s_0.Z * dVar16;
              uStack_32c = *(undefined4 *)((longlong)pdVar69 + 0x34);
              uStack_34c = *(undefined4 *)(pdVar69 + 6);
              dStack_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              uStack_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              uStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_350 = iVar39;
              local_330 = iVar39;
              if ((pFVar45 <= (FScriptContainerElement *)&local_350) &&
                 (((FScriptContainerElement *)&local_350 < pFVar45 + (longlong)*piVar43 * 0x20 &&
                  (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar38)))) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              iVar40 = *piVar53;
              if (iVar40 == *piVar43) {
                iVar40 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,(ForAnyElementType *)pFVar33,piVar43);
                *piVar53 = iVar40;
              }
              *piVar53 = iVar40 + 1;
              pFVar9 = (pFVar33->Spheres).AllocatorInstance.Data;
              pFVar45 = pFVar9 + (longlong)iVar40 * 0x20;
              *(ulonglong *)pFVar45 = CONCAT44(uStack_34c,local_350);
              *(double *)(pFVar45 + 8) = dStack_348;
              pFVar9 = pFVar9 + (longlong)iVar40 * 0x20 + 0x10;
              *(double *)pFVar9 = dStack_340;
              *(double *)(pFVar9 + 8) = dStack_338;
              pFVar45 = (pFVar33->Spheres).AllocatorInstance.Data;
              local_138 = CONCAT44(local_138._4_4_,iVar40);
              if (((pFVar45 <= (FScriptContainerElement *)&local_330) &&
                  ((FScriptContainerElement *)&local_330 < pFVar45 + (longlong)*piVar43 * 0x20)) &&
                 (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar38)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              iVar40 = *piVar53;
              if (iVar40 == *piVar43) {
                iVar40 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,(ForAnyElementType *)pFVar33,piVar43);
                *piVar53 = iVar40;
              }
              *piVar53 = iVar40 + 1;
              pFVar9 = (pFVar33->Spheres).AllocatorInstance.Data;
              pFVar45 = pFVar9 + (longlong)iVar40 * 0x20;
              *(ulonglong *)pFVar45 = CONCAT44(uStack_32c,local_330);
              *(double *)(pFVar45 + 8) = dStack_328;
              pFVar9 = pFVar9 + (longlong)iVar40 * 0x20 + 0x10;
              *(double *)pFVar9 = dStack_320;
              *(double *)(pFVar9 + 8) = dStack_318;
              local_138 = CONCAT44(iVar40,(undefined4)local_138);
              if (*(char *)((longlong)pdVar69 + 0x3c) != '\0') {
                pTVar44 = UE::Math::TRotator<double>::RotateVector
                                    ((TRotator<double> *)(pdVar69 + 3),&local_178,
                                     &UE::Math::TVector<double>::ForwardVector);
                dStack_130 = (pTVar44->field0_0x0)._s_0.X;
                uStack_128 = *(double *)((longlong)&pTVar44->field0_0x0 + 8);
                uStack_120 = *(double *)((longlong)&pTVar44->field0_0x0 + 0x10);
              }
              pFVar45 = (pFVar33->SphereConnections).AllocatorInstance.Data;
              if (((pFVar45 <= (FScriptContainerElement *)&local_138) &&
                  ((FScriptContainerElement *)&local_138 <
                   pFVar45 + (longlong)(pFVar33->SphereConnections).ArrayMax * 0x20)) &&
                 (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar38)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              iVar40 = (pFVar33->SphereConnections).ArrayNum;
              piVar1 = &(pFVar33->SphereConnections).ArrayMax;
              if (iVar40 == *piVar1) {
                iVar40 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&(pFVar33->SphereConnections).AllocatorInstance,piVar1);
              }
              (pFVar33->SphereConnections).ArrayNum = iVar40 + 1;
              pFVar45 = (pFVar33->SphereConnections).AllocatorInstance.Data;
              lVar55 = (longlong)iVar40 * 0x20;
              *(undefined8 *)(pFVar45 + lVar55) = local_138;
              *(double *)(pFVar45 + lVar55 + 8) = dStack_130;
              uVar71 = (undefined4)uStack_128;
              uVar72 = uStack_128._4_4_;
              uVar73 = (undefined4)uStack_120;
              uVar74 = uStack_120._4_4_;
            }
            lVar61 = lVar61 + 0x70;
            pdVar69 = pdVar69 + 0xe;
            pFVar45 = pFVar45 + lVar55 + 0x10;
            *(undefined4 *)pFVar45 = uVar71;
            *(undefined4 *)(pFVar45 + 4) = uVar72;
            *(undefined4 *)(pFVar45 + 8) = uVar73;
            *(undefined4 *)(pFVar45 + 0xc) = uVar74;
          }
          pFVar45 = local_398;
          piVar53 = local_2e8;
          param_2 = local_3c0;
          param_3 = local_430;
          param_5 = local_2f0;
          param_1 = local_310;
          if (!param_7) {
            iVar41 = *(int *)(lVar8 + 0x50);
            lVar61 = *(longlong *)(lVar8 + 0x48);
            lVar59 = (longlong)iVar41 * 0x70 + lVar61;
            while( true ) {
              if (*(int *)(lVar8 + 0x50) != iVar41) {
                local_464 = 0;
                `TCheckedPointerIterator<FKBoxElem_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_464);
              }
              if (lVar61 == lVar59) break;
              local_248 = UE::Math::TQuat<double>::Identity.X;
              dStack_240 = UE::Math::TQuat<double>::Identity.Y;
              iStack_210 = 0xffffffff;
              local_238 = UE::Math::TQuat<double>::Identity.Z;
              dStack_230 = UE::Math::TQuat<double>::Identity.W;
              local_258 = *(undefined8 *)(lVar61 + 0x40);
              local_228._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              local_228._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              local_218 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_268 = *(undefined8 *)(lVar61 + 0x30);
              uStack_260 = *(undefined8 *)(lVar61 + 0x38);
              pTVar46 = UE::Math::TRotator<double>::Quaternion
                                  ((TRotator<double> *)(lVar61 + 0x48),&local_158);
              pFVar33 = local_430;
              pFVar45 = (local_430->Boxes).AllocatorInstance.Data;
              local_248 = pTVar46->X;
              dStack_240 = pTVar46->Y;
              local_238 = pTVar46->Z;
              dStack_230 = pTVar46->W;
              dVar16 = (double)(float)((ulonglong)*(undefined8 *)(lVar61 + 0x60) >> 0x20) * dVar32;
              local_218 = (double)*(float *)(lVar61 + 0x68) * dVar29;
              local_228._8_4_ = SUB84(dVar16,0);
              local_228._0_8_ = (double)(float)*(undefined8 *)(lVar61 + 0x60) * dVar31;
              local_228._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
              iStack_210 = iVar39;
              if (((pFVar45 <= (FScriptContainerElement *)&local_268) &&
                  ((FScriptContainerElement *)&local_268 <
                   pFVar45 + (longlong)(local_430->Boxes).ArrayMax * 0x60)) &&
                 (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar38)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              iVar40 = (pFVar33->Boxes).ArrayNum;
              piVar53 = &(pFVar33->Boxes).ArrayMax;
              if (iVar40 == *piVar53) {
                iVar40 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1060,&(pFVar33->Boxes).AllocatorInstance,piVar53);
              }
              (pFVar33->Boxes).ArrayNum = iVar40 + 1;
              pFVar45 = (pFVar33->Boxes).AllocatorInstance.Data;
              lVar55 = (longlong)iVar40 * 0x60;
              lVar61 = lVar61 + 0x70;
              *(undefined8 *)(pFVar45 + lVar55) = local_268;
              *(undefined8 *)(pFVar45 + lVar55 + 8) = uStack_260;
              *(undefined8 *)(pFVar45 + lVar55 + 0x10) = local_258;
              *(undefined8 *)(pFVar45 + lVar55 + 0x10 + 8) = uStack_250;
              *(double *)(pFVar45 + lVar55 + 0x20) = local_248;
              *(double *)(pFVar45 + lVar55 + 0x20 + 8) = dStack_240;
              *(double *)(pFVar45 + lVar55 + 0x30) = local_238;
              *(double *)(pFVar45 + lVar55 + 0x30 + 8) = dStack_230;
              *(undefined8 *)(pFVar45 + lVar55 + 0x40) = local_228._0_8_;
              *(undefined8 *)(pFVar45 + lVar55 + 0x40 + 8) = local_228._8_8_;
              *(double *)(pFVar45 + lVar55 + 0x50) = local_218;
              *(ulonglong *)(pFVar45 + lVar55 + 0x50 + 8) = CONCAT44(uStack_20c,iStack_210);
            }
            local_458 = *(uint *)(lVar8 + 0x70);
            uVar56 = (ulonglong)(int)local_458;
            pFVar67 = *(FKSkinnedTriangleMeshElem **)(lVar8 + 0x68);
            local_3d8 = (FKSkinnedTriangleMeshElem *)(uVar56 * 0x100 + (longlong)pFVar67);
            while( true ) {
              pFVar65 = local_3d8;
              uVar66 = 0;
              local_428 = pFVar67;
              if (*(int *)(lVar8 + 0x70) != (int)uVar56) {
                local_463 = 0;
                `TCheckedPointerIterator<FKConvexElem_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_463);
              }
              if (pFVar67 == pFVar65) break;
              lVar61 = *(longlong *)((longlong)pFVar67 + 0xf0);
              local_400.Faces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_400.Faces.ArrayNum = 0;
              local_400.Faces.ArrayMax = 0;
              local_400.SurfacePoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_400.SurfacePoints.ArrayNum = 0;
              local_400.SurfacePoints.ArrayMax = 0;
              uVar56 = uVar66;
              local_400.BoneIndex = iVar39;
              local_308 = lVar61;
              if (*(char *)(lVar61 + 0x18) != '\b') {
                bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                   ("T_DERIVED::StaticType() == Type",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                    ,0xbb,L"");
                if (bVar38) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                uVar56 = (ulonglong)(uint)local_400.Faces.ArrayNum;
              }
              uVar58 = *(uint *)(lVar61 + 0x28);
              iVar41 = (int)uVar56;
              if (iVar41 < (int)uVar58) {
                iVar40 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x30,0x10,uVar58 - iVar41,(ForAnyElementType *)&local_400,
                                    &local_400.Faces.ArrayNum,&local_400.Faces.ArrayMax);
                DefaultConstructItems<FClothCollisionPrim_ConvexFace,int>
                          (local_400.Faces.AllocatorInstance.Data + (longlong)iVar40 * 0x30,
                           uVar58 - iVar41);
LAB_14dbf19ed:
                uVar56 = (ulonglong)(uint)local_400.Faces.ArrayNum;
              }
              else {
                if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
                }
                if ((int)uVar58 < iVar41) {
                  uVar60 = iVar41 - uVar58;
                  if ((int)(uVar60 | uVar58) < 0) {
                    bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       );
                    if (bVar38) {
                      pcVar15 = (code *)swi(3);
                      (*pcVar15)();
                      return;
                    }
                    uVar56 = (ulonglong)(uint)local_400.Faces.ArrayNum;
                  }
                  if (uVar60 != 0) {
                    TArray<FClothCollisionPrim_ConvexFace,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                              (&local_400.Faces,uVar58,uVar60);
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x30,0x10,(ForAnyElementType *)&local_400,local_400.Faces.ArrayNum,
                               &local_400.Faces.ArrayMax);
                    goto LAB_14dbf19ed;
                  }
                }
              }
              local_3b8 = 0;
              if (0 < *(int *)(lVar61 + 0x28)) {
                local_300 = 0;
                uVar70 = uVar66;
                do {
                  lVar59 = local_300;
                  uVar62 = 0;
                  uVar68 = (uint)uVar70;
                  uVar58 = 0;
                  uVar60 = uVar58;
                  if ((int)uVar68 < (int)uVar56) {
                    uVar60 = ~uVar68 >> 0x1f;
                  }
                  if ((uVar60 == 0) &&
                     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar38)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  FVar34.Data = local_400.Faces.AllocatorInstance.Data;
                  local_2f8 = (FClothCollisionPrim_ConvexFace *)
                              local_400.Faces.AllocatorInstance.Data;
                  uVar60 = 0;
                  if ((int)uVar68 < *(int *)(lVar61 + 0x28)) {
                    uVar60 = ~uVar68 >> 0x1f;
                  }
                  if ((uVar60 == 0) &&
                     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar38)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  lVar55 = *(longlong *)(lVar61 + 0x20);
                  fVar3 = *(float *)(lVar59 + 4 + lVar55);
                  fVar4 = *(float *)(lVar59 + lVar55);
                  fVar5 = *(float *)(lVar59 + 0x14 + lVar55);
                  fVar6 = *(float *)(lVar59 + 8 + lVar55);
                  dVar16 = (double)*(float *)(lVar59 + 0xc + lVar55);
                  dVar75 = (double)*(float *)(lVar59 + 0x10 + lVar55);
                  *(double *)(FVar34.Data + uVar66) = dVar16;
                  *(double *)(FVar34.Data + uVar66 + 8) = dVar75;
                  dVar76 = (double)fVar5;
                  *(double *)(FVar34.Data + uVar66 + 0x10) = dVar76;
                  *(double *)(FVar34.Data + uVar66 + 0x18) =
                       (double)fVar3 * dVar75 + (double)fVar4 * dVar16 + (double)fVar6 * dVar76;
                  pTVar10 = *(TConvexHalfEdgeStructureData<int> **)(lVar61 + 0x58);
                  if (pTVar10 != (TConvexHalfEdgeStructureData<int> *)0x0) {
                    cVar7 = *(char *)(lVar61 + 0x60);
                    if (cVar7 == '\x01') {
                      pFVar49 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                                          ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar10,
                                           uVar68);
                      uVar58 = (uint)pFVar49->NumHalfEdges;
                    }
                    else if (cVar7 == '\x02') {
                      pFVar48 = TConvexHalfEdgeStructureData<short>::GetPlane
                                          ((TConvexHalfEdgeStructureData<short> *)pTVar10,uVar68);
                      uVar58 = (uint)pFVar48->NumHalfEdges;
                    }
                    else if (cVar7 == '\x03') {
                      pFVar47 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar10,uVar68);
                      uVar58 = pFVar47->NumHalfEdges;
                    }
                  }
                  iVar41 = *(int *)(FVar34.Data + uVar66 + 0x28);
                  if (iVar41 < (int)uVar58) {
                    iVar40 = UE::Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (4,4,uVar58 - iVar41,
                                        (ForAnyElementType *)(FVar34.Data + uVar66 + 0x20),
                                        (int *)(FVar34.Data + uVar66 + 0x28),
                                        (int *)(FVar34.Data + uVar66 + 0x2c));
                    memset((void *)(*(longlong *)(FVar34.Data + uVar66 + 0x20) +
                                   (longlong)iVar40 * 4),0,(longlong)(int)(uVar58 - iVar41) << 2);
                  }
                  else {
                    if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
                    }
                    if ((int)uVar58 < iVar41) {
                      uVar60 = iVar41 - uVar58;
                      if (((int)(uVar60 | uVar58) < 0) &&
                         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x458,
                                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                             ), bVar38)) {
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      if (uVar60 != 0) {
                        _Dst = (void *)(*(longlong *)(FVar34.Data + uVar66 + 0x20) +
                                       (longlong)(int)uVar58 * 4);
                        iVar41 = (*(int *)(FVar34.Data + uVar66 + 0x28) - uVar60) - uVar58;
                        if (iVar41 != 0) {
                          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar60 * 4),
                                  (longlong)iVar41 << 2);
                        }
                        iVar41 = *(int *)(FVar34.Data + uVar66 + 0x28);
                        *(uint *)(FVar34.Data + uVar66 + 0x28) = iVar41 - uVar60;
                        UE::Core::Private::
                        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (4,4,(ForAnyElementType *)(FVar34.Data + uVar66 + 0x20),
                                   iVar41 - uVar60,(int *)(FVar34.Data + uVar66 + 0x2c));
                      }
                    }
                  }
                  uVar56 = uVar62;
                  if (0 < (int)uVar58) {
                    do {
                      pTVar10 = *(TConvexHalfEdgeStructureData<int> **)(local_308 + 0x58);
                      uVar60 = (uint)uVar62;
                      if (pTVar10 == (TConvexHalfEdgeStructureData<int> *)0x0) {
LAB_14dbf1cfc:
                        uVar57 = 0xffffffff;
                      }
                      else {
                        cVar7 = *(char *)(local_308 + 0x60);
                        if (cVar7 == '\x01') {
                          iVar41 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                                             ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar10
                                              ,uVar68,uVar60);
                          pFVar52 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                                              ((TConvexHalfEdgeStructureData<unsigned_char> *)
                                               pTVar10,iVar41);
                          uVar57 = (uint)pFVar52->VertexIndex;
                        }
                        else if (cVar7 == '\x02') {
                          iVar41 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                                             ((TConvexHalfEdgeStructureData<short> *)pTVar10,uVar68,
                                              uVar60);
                          pFVar51 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                                              ((TConvexHalfEdgeStructureData<short> *)pTVar10,iVar41
                                              );
                          uVar57 = (uint)pFVar51->VertexIndex;
                        }
                        else {
                          if (cVar7 != '\x03') goto LAB_14dbf1cfc;
                          iVar41 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge
                                             (pTVar10,uVar68,uVar60);
                          pFVar50 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar10,iVar41);
                          uVar57 = pFVar50->VertexIndex;
                        }
                      }
                      uVar42 = 0;
                      if ((int)uVar60 < *(int *)((longlong)&(local_2f8->Indices).ArrayNum + uVar66))
                      {
                        uVar42 = ~uVar60 >> 0x1f;
                      }
                      if ((uVar42 == 0) &&
                         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar38)) {
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      uVar62 = (ulonglong)(uVar60 + 1);
                      *(uint *)(uVar56 + *(longlong *)
                                          ((longlong)&(local_2f8->Indices).AllocatorInstance.Data +
                                          uVar66)) = uVar57;
                      uVar56 = uVar56 + 4;
                      lVar61 = local_308;
                    } while ((int)(uVar60 + 1) < (int)uVar58);
                  }
                  uVar70 = (ulonglong)(uVar68 + 1);
                  local_3b8 = local_3b8 + 1;
                  local_300 = local_300 + 0x18;
                  uVar66 = uVar66 + 0x30;
                  pFVar67 = local_428;
                  if (*(int *)(lVar61 + 0x28) <= (int)(uVar68 + 1)) break;
                  uVar56 = (ulonglong)(uint)local_400.Faces.ArrayNum;
                } while( true );
              }
              lVar59 = 0;
              uVar58 = *(uint *)(lVar61 + 0x38);
              if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
              }
              if (local_400.SurfacePoints.ArrayMax < (int)uVar58) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,uVar58,&local_400.SurfacePoints.AllocatorInstance,
                           local_400.SurfacePoints.ArrayNum,&local_400.SurfacePoints.ArrayMax);
              }
              uVar60 = 0;
              if (0 < (int)uVar58) {
                do {
                  uVar68 = 0;
                  if ((int)uVar60 < *(int *)(lVar61 + 0x38)) {
                    uVar68 = ~uVar60 >> 0x1f;
                  }
                  if ((uVar68 == 0) &&
                     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar38)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  lVar55 = *(longlong *)(lVar61 + 0x30);
                  local_2d0 = (double)*(float *)(lVar55 + 8 + lVar59);
                  dStack_2d8 = (double)*(float *)(lVar55 + 4 + lVar59);
                  local_2e0 = (double)*(float *)(lVar55 + lVar59);
                  if (((local_400.SurfacePoints.AllocatorInstance.Data <=
                        (FScriptContainerElement *)&local_2e0) &&
                      ((FScriptContainerElement *)&local_2e0 <
                       local_400.SurfacePoints.AllocatorInstance.Data +
                       (longlong)local_400.SurfacePoints.ArrayMax * 0x18)) &&
                     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar38)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  if (local_400.SurfacePoints.ArrayNum == local_400.SurfacePoints.ArrayMax) {
                    iVar41 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x818,&local_400.SurfacePoints.AllocatorInstance,
                                        &local_400.SurfacePoints.ArrayMax);
                    local_400.SurfacePoints.ArrayNum = iVar41;
                  }
                  lVar55 = (longlong)local_400.SurfacePoints.ArrayNum;
                  uVar60 = uVar60 + 1;
                  lVar59 = lVar59 + 0xc;
                  local_400.SurfacePoints.ArrayNum = local_400.SurfacePoints.ArrayNum + 1;
                  *(double *)(local_400.SurfacePoints.AllocatorInstance.Data + lVar55 * 0x18) =
                       local_2e0;
                  *(double *)(local_400.SurfacePoints.AllocatorInstance.Data + lVar55 * 0x18 + 8) =
                       dStack_2d8;
                  *(double *)(local_400.SurfacePoints.AllocatorInstance.Data + lVar55 * 0x18 + 0x10)
                       = local_2d0;
                } while ((int)uVar60 < (int)uVar58);
              }
              pFVar33 = local_430;
              pFVar11 = (FClothCollisionPrim_Convex *)(local_430->Convexes).AllocatorInstance.Data;
              if (((pFVar11 <= &local_400) &&
                  (&local_400 < pFVar11 + (local_430->Convexes).ArrayMax)) &&
                 (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar38)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              iVar41 = (pFVar33->Convexes).ArrayNum;
              piVar53 = &(pFVar33->Convexes).ArrayMax;
              if (iVar41 == *piVar53) {
                iVar41 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x828,&(pFVar33->Convexes).AllocatorInstance,piVar53);
              }
              (pFVar33->Convexes).ArrayNum = iVar41 + 1;
              FClothCollisionPrim_Convex::FClothCollisionPrim_Convex
                        ((FClothCollisionPrim_Convex *)
                         ((pFVar33->Convexes).AllocatorInstance.Data + (longlong)iVar41 * 0x28),
                         &local_400);
              if (local_400.SurfacePoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(local_400.SurfacePoints.AllocatorInstance.Data);
              }
              DestructItems<FClothCollisionPrim_ConvexFace,int>
                        ((FClothCollisionPrim_ConvexFace *)local_400.Faces.AllocatorInstance.Data,
                         local_400.Faces.ArrayNum);
              if ((FClothCollisionPrim_ConvexFace *)local_400.Faces.AllocatorInstance.Data !=
                  (FClothCollisionPrim_ConvexFace *)0x0) {
                FMemory::Free(local_400.Faces.AllocatorInstance.Data);
              }
              pFVar67 = (FKSkinnedTriangleMeshElem *)((longlong)pFVar67 + 0x100);
              uVar56 = (ulonglong)local_458;
            }
            iVar41 = *(int *)(lVar8 + 0x90);
            lVar61 = *(longlong *)(lVar8 + 0x88);
            lVar59 = (longlong)iVar41 * 0xa0 + lVar61;
            while( true ) {
              if (*(int *)(lVar8 + 0x90) != iVar41) {
                local_462 = 0;
                `TCheckedPointerIterator<FKLevelSetElem_const_,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(&local_462);
              }
              if (lVar61 == lVar59) break;
              pTVar12 = *(TReferenceControllerBase<1> **)(lVar61 + 0x98);
              lVar55 = *(longlong *)(lVar61 + 0x90);
              if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar12->SharedReferenceCount =
                     (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar12);
              if (lVar55 != 0) {
                uVar17 = *(undefined8 *)(lVar61 + 0x30);
                uVar18 = *(undefined8 *)(lVar61 + 0x38);
                pTVar12 = *(TReferenceControllerBase<1> **)(lVar61 + 0x98);
                uVar13 = *(undefined8 *)(lVar61 + 0x90);
                uVar19 = *(undefined8 *)(lVar61 + 0x40);
                uVar20 = *(undefined8 *)(lVar61 + 0x48);
                uVar21 = *(undefined8 *)(lVar61 + 0x50);
                uVar22 = *(undefined8 *)(lVar61 + 0x58);
                uVar23 = *(undefined8 *)(lVar61 + 0x60);
                uVar24 = *(undefined8 *)(lVar61 + 0x68);
                uVar25 = *(undefined8 *)(lVar61 + 0x70);
                uVar26 = *(undefined8 *)(lVar61 + 0x78);
                uVar27 = *(undefined8 *)(lVar61 + 0x80);
                uVar28 = *(undefined8 *)(lVar61 + 0x88);
                if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
                  paVar63 = (atomic<int> *)&DAT_00000008;
                }
                else {
                  paVar63 = &pTVar12->SharedReferenceCount;
                  LOCK();
                  *paVar63 = (atomic<int>)((int)*paVar63 + 1);
                  UNLOCK();
                }
                piVar53 = &(local_3c8->LevelSets).ArrayMax;
                iVar40 = (local_3c8->LevelSets).ArrayNum;
                local_1d8 = uVar17;
                uStack_1d0 = uVar18;
                local_1c8 = uVar19;
                uStack_1c0 = uVar20;
                local_1b8 = uVar21;
                uStack_1b0 = uVar22;
                local_1a8 = uVar23;
                uStack_1a0 = uVar24;
                local_198 = uVar25;
                uStack_190 = uVar26;
                local_188 = uVar27;
                uStack_180 = uVar28;
                if (iVar40 == *piVar53) {
                  iVar40 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x1080,(ForAnyElementType *)local_3c8,piVar53);
                }
                (local_3c8->LevelSets).ArrayNum = iVar40 + 1;
                pFVar45 = (local_3c8->LevelSets).AllocatorInstance.Data;
                lVar55 = (longlong)iVar40 * 0x80;
                *(undefined8 *)(pFVar45 + lVar55) = uVar13;
                *(TReferenceControllerBase<1> **)(pFVar45 + lVar55 + 8) = pTVar12;
                if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  *paVar63 = (atomic<int>)((int)*paVar63 + 1);
                  UNLOCK();
                }
                *(undefined8 *)(pFVar45 + lVar55 + 0x10) = uVar17;
                *(undefined8 *)(pFVar45 + lVar55 + 0x10 + 8) = uVar18;
                *(int *)(pFVar45 + lVar55 + 0x70) = iVar39;
                *(undefined8 *)(pFVar45 + lVar55 + 0x20) = uVar19;
                *(undefined8 *)(pFVar45 + lVar55 + 0x20 + 8) = uVar20;
                *(undefined8 *)(pFVar45 + lVar55 + 0x30) = uVar21;
                *(undefined8 *)(pFVar45 + lVar55 + 0x30 + 8) = uVar22;
                *(undefined8 *)(pFVar45 + lVar55 + 0x40) = uVar23;
                *(undefined8 *)(pFVar45 + lVar55 + 0x40 + 8) = uVar24;
                *(undefined8 *)(pFVar45 + lVar55 + 0x50) = uVar25;
                *(undefined8 *)(pFVar45 + lVar55 + 0x50 + 8) = uVar26;
                *(undefined8 *)(pFVar45 + lVar55 + 0x60) = uVar27;
                *(undefined8 *)(pFVar45 + lVar55 + 0x60 + 8) = uVar28;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar12);
              }
              lVar61 = lVar61 + 0xa0;
            }
            local_458 = *(uint *)(lVar8 + 0xa0);
            uVar56 = (ulonglong)(int)local_458;
            pFVar67 = *(FKSkinnedTriangleMeshElem **)(lVar8 + 0x98);
            pFVar65 = (FKSkinnedTriangleMeshElem *)(uVar56 * 0x38 + (longlong)pFVar67);
            local_3d8 = pFVar65;
            while( true ) {
              local_428 = pFVar67;
              if (*(int *)(lVar8 + 0xa0) != (int)uVar56) {
                local_461 = 0;
                `TCheckedPointerIterator<FKSkinnedLevelSetElem_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_461);
              }
              if (pFVar67 == pFVar65) break;
              lVar61 = *(longlong *)((longlong)pFVar67 + 0x30);
              if (lVar61 != 0) {
                local_420.Data = (FScriptContainerElement *)0x0;
                local_418 = 0;
                uVar58 = *(uint *)(lVar61 + 0xa0);
                if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
                }
                if (0 < (int)uVar58) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,uVar58,&local_420,0,(int *)((longlong)&local_418 + 4));
                }
                pTVar37 = local_3a0;
                pFVar36 = local_3c0;
                pFVar64 = *(FName **)(lVar61 + 0x98);
                iVar41 = *(int *)(lVar61 + 0xa0);
                pFVar2 = pFVar64 + iVar41;
                while( true ) {
                  if (*(int *)(lVar61 + 0xa0) != iVar41) {
                    local_460 = 0;
                    `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_460);
                  }
                  pFVar35 = local_3c8;
                  pFVar65 = local_3d8;
                  pFVar67 = local_428;
                  if (pFVar64 == pFVar2) break;
                  iVar40 = -1;
                  if (((pFVar36 != (FReferenceSkeleton *)0x0) && (*pFVar64 != (FName)0x0)) &&
                     (piVar53 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                        *)&pFVar36->FinalNameToIndexMap,*pFVar64),
                     piVar53 != (int *)0x0)) {
                    iVar40 = *piVar53;
                  }
                  local_3b0 = iVar40;
                  local_40c = TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                        (pTVar37,&local_3b0);
                  if (((local_420.Data <= (FScriptContainerElement *)&local_40c) &&
                      ((FScriptContainerElement *)&local_40c <
                       local_420.Data + (longlong)local_418._4_4_ * 4)) &&
                     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar38)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  iVar40 = (int)local_418;
                  if ((int)local_418 == local_418._4_4_) {
                    iVar40 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_420,(int *)((longlong)&local_418 + 4));
                  }
                  pFVar64 = pFVar64 + 1;
                  local_418 = CONCAT44(local_418._4_4_,iVar40 + 1);
                  *(int *)(local_420.Data + (longlong)iVar40 * 4) = local_40c;
                }
                piVar53 = &(local_3c8->SkinnedLevelSets).ArrayMax;
                iVar41 = (local_3c8->SkinnedLevelSets).ArrayNum;
                if (iVar41 == *piVar53) {
                  iVar41 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&(local_3c8->SkinnedLevelSets).AllocatorInstance,piVar53
                                     );
                }
                pFVar45 = (pFVar35->SkinnedLevelSets).AllocatorInstance.Data;
                (pFVar35->SkinnedLevelSets).ArrayNum = iVar41 + 1;
                lVar59 = (longlong)iVar41 * 0x20;
                *(undefined8 *)(pFVar45 + lVar59) = 0;
                lVar61 = *(longlong *)((longlong)pFVar67 + 0x30);
                *(longlong *)(pFVar45 + lVar59) = lVar61;
                if (lVar61 != 0) {
                  LOCK();
                  *(int *)(lVar61 + 8) = *(int *)(lVar61 + 8) + 1;
                  UNLOCK();
                }
                *(undefined8 *)(pFVar45 + lVar59 + 0x10) = 0;
                *(int *)(pFVar45 + lVar59 + 8) = iVar39;
                *(FScriptContainerElement **)(pFVar45 + lVar59 + 0x10) = local_420.Data;
                local_420.Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar45 + lVar59 + 0x18) = (int)local_418;
                *(int *)(pFVar45 + lVar59 + 0x1c) = local_418._4_4_;
                local_418 = 0;
              }
              uVar56 = (ulonglong)local_458;
              pFVar67 = (FKSkinnedTriangleMeshElem *)((longlong)pFVar67 + 0x38);
            }
            local_458 = *(uint *)(lVar8 + 0xb0);
            uVar56 = (ulonglong)(int)local_458;
            pFVar67 = *(FKSkinnedTriangleMeshElem **)(lVar8 + 0xa8);
            pFVar65 = (FKSkinnedTriangleMeshElem *)(uVar56 * 0x50 + (longlong)pFVar67);
            local_3d8 = pFVar65;
            while( true ) {
              local_428 = pFVar67;
              if (*(int *)(lVar8 + 0xb0) != (int)uVar56) {
                local_45f = 0;
                `TCheckedPointerIterator<FKMLLevelSetElem_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_45f);
              }
              if (pFVar67 == pFVar65) break;
              pTVar12 = *(TReferenceControllerBase<1> **)((longlong)pFVar67 + 0x38);
              lVar61 = *(longlong *)((longlong)pFVar67 + 0x30);
              if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar12->SharedReferenceCount =
                     (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar12);
              if (lVar61 != 0) {
                pTVar12 = *(TReferenceControllerBase<1> **)((longlong)pFVar67 + 0x38);
                lVar61 = *(longlong *)((longlong)pFVar67 + 0x30);
                local_450.Data = (FScriptContainerElement *)0x0;
                local_448 = 0;
                if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar12->SharedReferenceCount =
                       (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
                  UNLOCK();
                }
                if ((lVar61 == 0) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar38)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar12);
                uVar58 = *(uint *)(lVar61 + 0x28);
                if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
                }
                if (local_448._4_4_ < (int)uVar58) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,uVar58,&local_450,(int)local_448,(int *)((longlong)&local_448 + 4))
                  ;
                }
                pTVar37 = local_3a0;
                pFVar36 = local_3c0;
                pFVar64 = *(FName **)(lVar61 + 0x20);
                iVar41 = *(int *)(lVar61 + 0x28);
                pFVar2 = pFVar64 + iVar41;
                while( true ) {
                  if (*(int *)(lVar61 + 0x28) != iVar41) {
                    local_45e = 0;
                    `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_45e);
                  }
                  pFVar35 = local_3c8;
                  pFVar65 = local_3d8;
                  pFVar67 = local_428;
                  if (pFVar64 == pFVar2) break;
                  iVar40 = -1;
                  if (((pFVar36 != (FReferenceSkeleton *)0x0) && (*pFVar64 != (FName)0x0)) &&
                     (piVar53 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                        *)&pFVar36->FinalNameToIndexMap,*pFVar64),
                     piVar53 != (int *)0x0)) {
                    iVar40 = *piVar53;
                  }
                  local_3ac = iVar40;
                  local_408 = TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                        (pTVar37,&local_3ac);
                  if (((local_450.Data <= (FScriptContainerElement *)&local_408) &&
                      ((FScriptContainerElement *)&local_408 <
                       local_450.Data + (longlong)local_448._4_4_ * 4)) &&
                     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar38)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  iVar40 = (int)local_448;
                  if ((int)local_448 == local_448._4_4_) {
                    iVar40 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_450,(int *)((longlong)&local_448 + 4));
                  }
                  pFVar64 = pFVar64 + 1;
                  local_448 = CONCAT44(local_448._4_4_,iVar40 + 1);
                  *(int *)(local_450.Data + (longlong)iVar40 * 4) = local_408;
                }
                pTVar12 = *(TReferenceControllerBase<1> **)((longlong)local_428 + 0x38);
                uVar13 = *(undefined8 *)((longlong)local_428 + 0x30);
                if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
                  paVar63 = (atomic<int> *)&DAT_00000008;
                }
                else {
                  paVar63 = &pTVar12->SharedReferenceCount;
                  LOCK();
                  *paVar63 = (atomic<int>)((int)*paVar63 + 1);
                  UNLOCK();
                }
                iVar41 = (local_3c8->MLLevelSets).ArrayNum;
                piVar53 = &(local_3c8->MLLevelSets).ArrayMax;
                if (iVar41 == *piVar53) {
                  iVar41 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x828,&(local_3c8->MLLevelSets).AllocatorInstance,piVar53);
                }
                pFVar45 = (pFVar35->MLLevelSets).AllocatorInstance.Data;
                (pFVar35->MLLevelSets).ArrayNum = iVar41 + 1;
                lVar61 = (longlong)iVar41;
                *(undefined8 *)(pFVar45 + lVar61 * 0x28) = uVar13;
                *(TReferenceControllerBase<1> **)(pFVar45 + lVar61 * 0x28 + 8) = pTVar12;
                if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  *paVar63 = (atomic<int>)((int)*paVar63 + 1);
                  UNLOCK();
                }
                *(undefined8 *)(pFVar45 + lVar61 * 0x28 + 0x18) = 0;
                *(int *)(pFVar45 + lVar61 * 0x28 + 0x10) = iVar39;
                *(FScriptContainerElement **)(pFVar45 + lVar61 * 0x28 + 0x18) = local_450.Data;
                local_450.Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar45 + lVar61 * 0x28 + 0x20) = (int)local_448;
                *(int *)(pFVar45 + lVar61 * 0x28 + 0x24) = local_448._4_4_;
                local_448 = 0;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar12);
                if (local_450.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_450.Data);
                }
              }
              uVar56 = (ulonglong)local_458;
              pFVar67 = (FKSkinnedTriangleMeshElem *)((longlong)pFVar67 + 0x50);
            }
            local_458 = *(uint *)(lVar8 + 0xc0);
            uVar56 = (ulonglong)(int)local_458;
            pFVar67 = *(FKSkinnedTriangleMeshElem **)(lVar8 + 0xb8);
            pFVar65 = pFVar67 + uVar56;
            local_3d8 = pFVar65;
            while( true ) {
              local_428 = pFVar67;
              if (*(int *)(lVar8 + 0xc0) != (int)uVar56) {
                local_45d = 0;
                `TCheckedPointerIterator<FKSkinnedTriangleMeshElem_const_,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(&local_45d);
              }
              pFVar45 = local_398;
              piVar53 = local_2e8;
              param_2 = local_3c0;
              param_3 = local_430;
              param_5 = local_2f0;
              param_1 = local_310;
              if (pFVar67 == pFVar65) break;
              pTVar54 = FKSkinnedTriangleMeshElem::GetSkinnedTriangleMesh(pFVar67);
              if (pTVar54->Reference != (FSkinnedTriangleMesh *)0x0) {
                local_440.Data = (FScriptContainerElement *)0x0;
                local_438 = 0;
                pTVar54 = FKSkinnedTriangleMeshElem::GetSkinnedTriangleMesh(pFVar67);
                pFVar14 = pTVar54->Reference;
                uVar58 = (pFVar14->UsedBones).ArrayNum;
                if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
                }
                if (local_438._4_4_ < (int)uVar58) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,uVar58,&local_440,(int)local_438,(int *)((longlong)&local_438 + 4))
                  ;
                }
                pTVar37 = local_3a0;
                pFVar36 = local_3c0;
                pFVar64 = (FName *)(pFVar14->UsedBones).AllocatorInstance.Data;
                iVar41 = (pFVar14->UsedBones).ArrayNum;
                pFVar2 = pFVar64 + iVar41;
                while( true ) {
                  if ((pFVar14->UsedBones).ArrayNum != iVar41) {
                    local_45c[0] = 0;
                    `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_45c);
                  }
                  pFVar35 = local_3c8;
                  pFVar67 = local_428;
                  if (pFVar64 == pFVar2) break;
                  iVar40 = -1;
                  if (((pFVar36 != (FReferenceSkeleton *)0x0) && (*pFVar64 != (FName)0x0)) &&
                     (piVar53 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                        *)&pFVar36->FinalNameToIndexMap,*pFVar64),
                     piVar53 != (int *)0x0)) {
                    iVar40 = *piVar53;
                  }
                  local_3a8 = iVar40;
                  local_404 = TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                        (pTVar37,&local_3a8);
                  if (((local_440.Data <= (FScriptContainerElement *)&local_404) &&
                      ((FScriptContainerElement *)&local_404 <
                       local_440.Data + (longlong)local_438._4_4_ * 4)) &&
                     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar38)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  iVar40 = (int)local_438;
                  if ((int)local_438 == local_438._4_4_) {
                    iVar40 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_440,(int *)((longlong)&local_438 + 4));
                  }
                  pFVar64 = pFVar64 + 1;
                  local_438 = CONCAT44(local_438._4_4_,iVar40 + 1);
                  *(int *)(local_440.Data + (longlong)iVar40 * 4) = local_404;
                }
                pTVar54 = FKSkinnedTriangleMeshElem::GetSkinnedTriangleMesh(local_428);
                pFVar65 = local_3d8;
                piVar53 = &(pFVar35->SkinnedTriangleMeshes).ArrayMax;
                iVar41 = (pFVar35->SkinnedTriangleMeshes).ArrayNum;
                if (iVar41 == *piVar53) {
                  iVar41 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&(pFVar35->SkinnedTriangleMeshes).AllocatorInstance,
                                      piVar53);
                }
                pFVar45 = (pFVar35->SkinnedTriangleMeshes).AllocatorInstance.Data;
                (pFVar35->SkinnedTriangleMeshes).ArrayNum = iVar41 + 1;
                lVar61 = (longlong)iVar41 * 0x20;
                *(undefined8 *)(pFVar45 + lVar61) = 0;
                pFVar14 = pTVar54->Reference;
                *(FSkinnedTriangleMesh **)(pFVar45 + lVar61) = pFVar14;
                if (pFVar14 != (FSkinnedTriangleMesh *)0x0) {
                  LOCK();
                  *(int *)&pFVar14->field_0x8 = *(int *)&pFVar14->field_0x8 + 1;
                  UNLOCK();
                }
                *(undefined8 *)(pFVar45 + lVar61 + 0x10) = 0;
                *(int *)(pFVar45 + lVar61 + 8) = iVar39;
                *(FScriptContainerElement **)(pFVar45 + lVar61 + 0x10) = local_440.Data;
                local_440.Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar45 + lVar61 + 0x18) = (int)local_438;
                *(int *)(pFVar45 + lVar61 + 0x1c) = local_438._4_4_;
                local_438 = 0;
              }
              uVar56 = (ulonglong)local_458;
              pFVar67 = pFVar67 + 1;
            }
          }
        }
      }
      uVar56 = (ulonglong)local_3a4;
      local_3d0 = local_3d0 + 8;
    }
  }
  return;
}

// ExtractPhysicsAssetCollision @ 14dbf29e0

void __cdecl
Chaos::FClothingSimulationCollider::ExtractPhysicsAssetCollision
          (UPhysicsAsset *param_1,FReferenceSkeleton *param_2,FClothCollisionData *param_3,
          TArray<Chaos::FLevelSetCollisionData,TSizedDefaultAllocator<32>_> *param_4,
          TArray<Chaos::FSkinnedLevelSetCollisionData,TSizedDefaultAllocator<32>_> *param_5,
          TArray<int,TSizedDefaultAllocator<32>_> *param_6,bool param_7,bool param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  TArray<Chaos::FSkinnedLevelSetCollisionData,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int *piVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  TArray<int,TSizedDefaultAllocator<32>_> local_80;
  FClothCollisionDataExtended local_68;
  
  pTVar6 = param_6;
  local_68.LevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.LevelSets.ArrayNum = 0;
  local_68.LevelSets.ArrayMax = 0;
  local_68.SkinnedLevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.SkinnedLevelSets.ArrayNum = 0;
  local_68.SkinnedLevelSets.ArrayMax = 0;
  local_68.MLLevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.MLLevelSets.ArrayNum = 0;
  local_68.MLLevelSets.ArrayMax = 0;
  local_68.SkinnedTriangleMeshes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.SkinnedTriangleMeshes.ArrayNum = 0;
  local_68.SkinnedTriangleMeshes.ArrayMax = 0;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  ExtractPhysicsAssetCollision(param_1,param_2,param_3,&local_68,param_6,&local_80,param_7,param_8);
  if ((FClothCollisionDataExtended *)param_4 != &local_68) {
    DestructItems<Chaos::FLevelSetCollisionData,int>
              ((FLevelSetCollisionData *)(param_4->AllocatorInstance).Data,param_4->ArrayNum);
    pFVar13 = (param_4->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (param_4->AllocatorInstance).Data = local_68.LevelSets.AllocatorInstance.Data;
    param_4->ArrayNum = local_68.LevelSets.ArrayNum;
    param_4->ArrayMax = local_68.LevelSets.ArrayMax;
    local_68.LevelSets.ArrayNum = 0;
    local_68.LevelSets.ArrayMax = 0;
    local_68.LevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar5 = param_5;
  if (param_5 != &local_68.SkinnedLevelSets) {
    DestructItems<Chaos::FSkinnedLevelSetCollisionData,int>
              ((FSkinnedLevelSetCollisionData *)(param_5->AllocatorInstance).Data,param_5->ArrayNum)
    ;
    pFVar13 = (pTVar5->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar5->AllocatorInstance).Data = local_68.SkinnedLevelSets.AllocatorInstance.Data;
    pTVar5->ArrayNum = local_68.SkinnedLevelSets.ArrayNum;
    pTVar5->ArrayMax = local_68.SkinnedLevelSets.ArrayMax;
    local_68.SkinnedLevelSets.ArrayNum = 0;
    local_68.SkinnedLevelSets.ArrayMax = 0;
    local_68.SkinnedLevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  iVar2 = pTVar6->ArrayNum;
  if (pTVar6 == &local_80) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar10 = (longlong)local_80.ArrayNum;
  if (local_80.ArrayNum != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_80.ArrayNum,&pTVar6->AllocatorInstance,&pTVar6->ArrayNum,
                       &pTVar6->ArrayMax);
    memcpy((pTVar6->AllocatorInstance).Data + (longlong)iVar8 * 4,local_80.AllocatorInstance.Data,
           lVar10 << 2);
  }
  uVar3 = pTVar5->ArrayNum;
  uVar9 = (ulonglong)(int)uVar3;
  pFVar14 = (pTVar5->AllocatorInstance).Data;
  pFVar11 = pFVar14 + uVar9 * 0x20;
  pFVar13 = pFVar14 + 0x18;
  while( true ) {
    if (pTVar5->ArrayNum != (int)uVar9) {
      `TCheckedPointerIterator<Chaos::FSkinnedLevelSetCollisionData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&param_6);
    }
    if (pFVar14 == pFVar11) break;
    piVar12 = *(int **)(pFVar13 + -8);
    iVar8 = *(int *)pFVar13;
    piVar1 = piVar12 + iVar8;
    while( true ) {
      if (*(int *)pFVar13 != iVar8) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&param_5);
      }
      if (piVar12 == piVar1) break;
      *piVar12 = *piVar12 + iVar2;
      piVar12 = piVar12 + 1;
    }
    pFVar14 = pFVar14 + 0x20;
    uVar9 = (ulonglong)uVar3;
    pFVar13 = pFVar13 + 0x20;
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  DestructItems<Chaos::FSkinnedTriangleMeshCollisionData,int>
            ((FSkinnedTriangleMeshCollisionData *)
             local_68.SkinnedTriangleMeshes.AllocatorInstance.Data,
             local_68.SkinnedTriangleMeshes.ArrayNum);
  if ((FSkinnedTriangleMeshCollisionData *)local_68.SkinnedTriangleMeshes.AllocatorInstance.Data !=
      (FSkinnedTriangleMeshCollisionData *)0x0) {
    FMemory::Free(local_68.SkinnedTriangleMeshes.AllocatorInstance.Data);
  }
  DestructItems<Chaos::FMLLevelSetCollisionData,int>
            ((FMLLevelSetCollisionData *)local_68.MLLevelSets.AllocatorInstance.Data,
             local_68.MLLevelSets.ArrayNum);
  if ((FMLLevelSetCollisionData *)local_68.MLLevelSets.AllocatorInstance.Data !=
      (FMLLevelSetCollisionData *)0x0) {
    FMemory::Free(local_68.MLLevelSets.AllocatorInstance.Data);
  }
  DestructItems<Chaos::FSkinnedLevelSetCollisionData,int>
            ((FSkinnedLevelSetCollisionData *)local_68.SkinnedLevelSets.AllocatorInstance.Data,
             local_68.SkinnedLevelSets.ArrayNum);
  if ((FSkinnedLevelSetCollisionData *)local_68.SkinnedLevelSets.AllocatorInstance.Data !=
      (FSkinnedLevelSetCollisionData *)0x0) {
    FMemory::Free(local_68.SkinnedLevelSets.AllocatorInstance.Data);
  }
  DestructItems<Chaos::FLevelSetCollisionData,int>
            ((FLevelSetCollisionData *)local_68.LevelSets.AllocatorInstance.Data,
             local_68.LevelSets.ArrayNum);
  if ((FLevelSetCollisionData *)local_68.LevelSets.AllocatorInstance.Data !=
      (FLevelSetCollisionData *)0x0) {
    FMemory::Free(local_68.LevelSets.AllocatorInstance.Data);
  }
  return;
}

// GetCollisionData @ 14dbf9030

FClothCollisionData * __thiscall
Chaos::FClothingSimulationCollider::GetCollisionData
          (FClothingSimulationCollider *this,FClothCollisionData *__return_storage_ptr__,
          FClothingSimulationSolver *param_1,FClothingSimulationCloth *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FClothCollisionData *pFVar4;
  TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
  *pTVar5;
  uint uVar6;
  FClothingSimulationSolver *local_18;
  FClothingSimulationCloth *local_10;
  
  (__return_storage_ptr__->Spheres).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Spheres).ArrayNum = 0;
  (__return_storage_ptr__->Spheres).ArrayMax = 0;
  (__return_storage_ptr__->SphereConnections).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SphereConnections).ArrayNum = 0;
  (__return_storage_ptr__->SphereConnections).ArrayMax = 0;
  (__return_storage_ptr__->Convexes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Convexes).ArrayNum = 0;
  (__return_storage_ptr__->Convexes).ArrayMax = 0;
  (__return_storage_ptr__->Boxes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Boxes).ArrayNum = 0;
  (__return_storage_ptr__->Boxes).ArrayMax = 0;
  if ((this->LODData).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FClothCollisionData *)(*pcVar2)();
      return pFVar4;
    }
  }
  FClothCollisionData::Append
            (__return_storage_ptr__,*(FClothCollisionData **)(this->LODData).AllocatorInstance.Data)
  ;
  if ((this->LODData).ArrayNum < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FClothCollisionData *)(*pcVar2)();
      return pFVar4;
    }
  }
  FClothCollisionData::Append
            (__return_storage_ptr__,
             *(FClothCollisionData **)((this->LODData).AllocatorInstance.Data + 8));
  local_18 = param_1;
  local_10 = param_2;
  pTVar5 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,
                  (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                   *)&local_18);
  if (pTVar5 == (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
                 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FClothCollisionData *)(*pcVar2)();
      return pFVar4;
    }
  }
  uVar1 = *(uint *)&pTVar5->field_0x10;
  if (1 < (int)uVar1) {
    uVar6 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FClothCollisionData *)(*pcVar2)();
        return pFVar4;
      }
    }
    FClothCollisionData::Append
              (__return_storage_ptr__,
               *(FClothCollisionData **)
                ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8));
  }
  return __return_storage_ptr__;
}

// GetCollisionGeometries @ 14dbf91e0

TArrayView<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const_,int> *
__thiscall
Chaos::FClothingSimulationCollider::GetCollisionGeometries
          (FClothingSimulationCollider *this,
          TArrayView<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const_,int>
          *__return_storage_ptr__,FClothingSimulationSolver *param_1,
          FClothingSimulationCloth *param_2,ECollisionDataType param_3)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const_,int>
  *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                     ,0x3f5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArrayView<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const_,int>
              *)(*pcVar1)();
    return pTVar3;
  }
  __return_storage_ptr__->DataPtr =
       (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetCollisionGeometry @ 14dbf9230

TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> * __thiscall
Chaos::FClothingSimulationCollider::GetCollisionGeometry
          (FClothingSimulationCollider *this,
          TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1,FClothingSimulationCloth *param_2,
          ECollisionDataType param_3)

{
  FEvolution *this_00;
  longlong lVar1;
  FPBDEvolution *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *pTVar6;
  FSolverCollisionParticlesRange *pFVar7;
  longlong *plVar8;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_1c;
  undefined4 local_c;
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                         ,0x3ec,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *)(*pcVar2)();
    return pTVar6;
  }
  if ((param_2 == (FClothingSimulationCloth *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cloth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                         ,0x3ed,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *)(*pcVar2)();
    return pTVar6;
  }
  iVar4 = GetCollisionRangeId(this,param_1,param_2,param_3);
  if (iVar4 == -1) {
    local_38 = 0;
    local_30 = 0;
    plVar8 = &local_38;
  }
  else {
    this_00 = (param_1->Evolution).Ptr;
    if (this_00 == (FEvolution *)0x0) {
      this_01 = (param_1->PBDEvolution).Ptr;
      iVar5 = Softs::FPBDEvolution::GetCollisionParticleRangeSize(this_01,iVar4);
      local_48 = (this_01->MCollisionParticles)._padding_ + (longlong)iVar4 * 8;
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *)(*pcVar2)();
        return pTVar6;
      }
    }
    else {
      pFVar7 = Softs::FEvolution::GetCollisionParticleRange(this_00,iVar4);
      if ((*(longlong *)&pFVar7->field_0x8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *)(*pcVar2)();
        return pTVar6;
      }
      lVar1 = *(longlong *)&pFVar7->field_0x8;
      if (((*(int *)&pFVar7->field_0x10 < 0) ||
          (*(int *)(lVar1 + 0x68) < *(int *)&pFVar7->field_0x10 + *(int *)&pFVar7->field_0x14)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x4b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *)(*pcVar2)();
        return pTVar6;
      }
      iVar5 = *(int *)&pFVar7->field_0x14;
      local_48 = *(longlong *)(lVar1 + 0x60) + (longlong)*(int *)&pFVar7->field_0x10 * 8;
      local_c = local_1c;
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), local_c = local_1c, bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *)(*pcVar2)();
        return pTVar6;
      }
    }
    uStack_40 = CONCAT44(local_c,iVar5);
    plVar8 = &local_48;
  }
  lVar1 = plVar8[1];
  __return_storage_ptr__->DataPtr = (TRefCountPtr<Chaos::FImplicitObject> *)*plVar8;
  *(longlong *)&__return_storage_ptr__->ArrayNum = lVar1;
  return __return_storage_ptr__;
}

// GetCollisionRangeId @ 14dbf9cb0

int __thiscall
Chaos::FClothingSimulationCollider::GetCollisionRangeId
          (FClothingSimulationCollider *this,FClothingSimulationSolver *param_1,
          FClothingSimulationCloth *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
  *pTVar5;
  int *piVar6;
  FClothingSimulationSolver *local_18;
  FClothingSimulationCloth *local_10;
  
  if ((-1 < param_3) && (param_3 < (this->LODData).ArrayNum)) {
    uVar3 = 0;
    if (param_3 < (this->LODData).ArrayNum) {
      uVar3 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    local_18 = param_1;
    local_10 = param_2;
    pTVar5 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                     *)(*(longlong *)
                         ((this->LODData).AllocatorInstance.Data + (longlong)param_3 * 8) + 0x48),
                    (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                     *)&local_18);
    piVar6 = (int *)&pTVar5->field_0x10;
    if (pTVar5 == (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
                   *)0x0) {
      piVar6 = (int *)0x0;
    }
    if (piVar6 != (int *)0x0) {
      return *piVar6;
    }
  }
  return -1;
}

// GetCollisionRangeId @ 14dbf9d90

int __thiscall
Chaos::FClothingSimulationCollider::GetCollisionRangeId
          (FClothingSimulationCollider *this,FClothingSimulationSolver *param_1,
          FClothingSimulationCloth *param_2,ECollisionDataType param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
  *pTVar4;
  FClothingSimulationSolver *local_18;
  FClothingSimulationCloth *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pTVar4 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,
                  (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                   *)&local_18);
  if (pTVar4 == (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
                 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (1 < (int)param_3) {
    param_3 = ~LODless;
    if (1 < *(int *)&pTVar4->field_0x10) {
      param_3 = *(ECollisionDataType *)&pTVar4->field_0x10;
    }
  }
  iVar3 = GetCollisionRangeId(this,param_1,param_2,param_3);
  return iVar3;
}

// GetCollisionRangeIdAndNumGeometries @ 14dbf9e40

bool __thiscall
Chaos::FClothingSimulationCollider::GetCollisionRangeIdAndNumGeometries
          (FClothingSimulationCollider *this,FClothingSimulationSolver *param_1,
          FClothingSimulationCloth *param_2,ECollisionDataType param_3,int *param_4,int *param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
  *pTVar5;
  FClothingSimulationSolver *local_48;
  FClothingSimulationCloth *local_40;
  FClothingSimulationSolver *local_38;
  FClothingSimulationCloth *local_30;
  
  *param_4 = -1;
  *param_5 = 0;
  local_48 = param_1;
  local_40 = param_2;
  pTVar5 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,
                  (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                   *)&local_48);
  if (pTVar5 == (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
                 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (1 < (int)param_3) {
    param_3 = ~LODless;
    if (1 < *(int *)&pTVar5->field_0x10) {
      param_3 = *(ECollisionDataType *)&pTVar5->field_0x10;
    }
  }
  if ((-1 < (int)param_3) && ((int)param_3 < (this->LODData).ArrayNum)) {
    uVar4 = 0;
    if ((int)param_3 < (this->LODData).ArrayNum) {
      uVar4 = ~param_3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    local_38 = param_1;
    local_30 = param_2;
    pTVar5 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                     *)(*(longlong *)
                         ((this->LODData).AllocatorInstance.Data + (longlong)(int)param_3 * 8) +
                       0x48),(TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                              *)&local_38);
    if (pTVar5 == (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
                   *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    *param_4 = *(int *)&pTVar5->field_0x10;
    uVar4 = 0;
    if ((int)param_3 < (this->LODData).ArrayNum) {
      uVar4 = ~param_3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    *param_5 = *(int *)(*(longlong *)
                         ((this->LODData).AllocatorInstance.Data + (longlong)(int)param_3 * 8) +
                       0x40);
  }
  if ((*param_4 == -1) || (*param_5 < 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

// GetCollisionRotations @ 14dbfa020

TArrayView<Chaos::TRotation<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationCollider::GetCollisionRotations
          (FClothingSimulationCollider *this,
          TArrayView<Chaos::TRotation<float,3>_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1,FClothingSimulationCloth *param_2,
          ECollisionDataType param_3)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  TRotation<float,3> *pTVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TArrayView<Chaos::TRotation<float,3>_const_,int> *pTVar6;
  FSolverCollisionParticlesRange *this_02;
  TArrayView<Chaos::TRotation<float,3>,int> *pTVar7;
  TRotation<float,3> **ppTVar8;
  TRotation<float,3> *local_58;
  undefined8 uStack_50;
  TRotation<float,3> *local_48;
  undefined4 local_40;
  TArrayView<Chaos::TRotation<float,3>,int> local_38;
  undefined4 local_1c;
  undefined4 local_c;
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                         ,0x3da,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TArrayView<Chaos::TRotation<float,3>_const_,int> *)(*pcVar1)();
    return pTVar6;
  }
  if ((param_2 == (FClothingSimulationCloth *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cloth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                         ,0x3db,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TArrayView<Chaos::TRotation<float,3>_const_,int> *)(*pcVar1)();
    return pTVar6;
  }
  iVar4 = GetCollisionRangeId(this,param_1,param_2,param_3);
  if (iVar4 == -1) {
    local_48 = (TRotation<float,3> *)0x0;
    local_40 = 0;
    ppTVar8 = &local_48;
  }
  else {
    this_00 = (param_1->Evolution).Ptr;
    if (this_00 == (FEvolution *)0x0) {
      this_01 = (param_1->PBDEvolution).Ptr;
      iVar5 = Softs::FPBDEvolution::GetCollisionParticleRangeSize(this_01,iVar4);
      local_58 = (TRotation<float,3> *)
                 ((longlong)iVar4 * 0x10 + (this_01->MCollisionParticles)._padding_);
      local_1c = local_c;
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), local_1c = local_c, bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArrayView<Chaos::TRotation<float,3>_const_,int> *)(*pcVar1)();
        return pTVar6;
      }
    }
    else {
      this_02 = Softs::FEvolution::GetCollisionParticleRange(this_00,iVar4);
      pTVar7 = Softs::FSolverCollisionParticlesRange::GetR(this_02,&local_38);
      local_58 = pTVar7->DataPtr;
      iVar5 = pTVar7->ArrayNum;
    }
    uStack_50 = CONCAT44(local_1c,iVar5);
    ppTVar8 = &local_58;
  }
  pTVar2 = ppTVar8[1];
  __return_storage_ptr__->DataPtr = *ppTVar8;
  *(TRotation<float,3> **)&__return_storage_ptr__->ArrayNum = pTVar2;
  return __return_storage_ptr__;
}

// GetCollisionStatus @ 14dbfa190

TArrayView<bool_const_,int> * __thiscall
Chaos::FClothingSimulationCollider::GetCollisionStatus
          (FClothingSimulationCollider *this,TArrayView<bool_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1,FClothingSimulationCloth *param_2,
          ECollisionDataType param_3)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TArrayView<bool_const_,int> *pTVar6;
  FSolverCollisionParticlesRange *pFVar7;
  longlong *plVar8;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_1c;
  undefined4 local_c;
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                         ,0x3fb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TArrayView<bool_const_,int> *)(*pcVar1)();
    return pTVar6;
  }
  if ((param_2 == (FClothingSimulationCloth *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cloth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                         ,0x3fc,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TArrayView<bool_const_,int> *)(*pcVar1)();
    return pTVar6;
  }
  iVar4 = GetCollisionRangeId(this,param_1,param_2,param_3);
  if (iVar4 == -1) {
    local_38 = 0;
    local_30 = 0;
    plVar8 = &local_38;
  }
  else {
    this_00 = (param_1->Evolution).Ptr;
    if (this_00 == (FEvolution *)0x0) {
      this_01 = (param_1->PBDEvolution).Ptr;
      iVar5 = Softs::FPBDEvolution::GetCollisionParticleRangeSize(this_01,iVar4);
      local_48 = (longlong)iVar4 + *(longlong *)&(this_01->MCollided).field_0x8;
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArrayView<bool_const_,int> *)(*pcVar1)();
        return pTVar6;
      }
    }
    else {
      pFVar7 = Softs::FEvolution::GetCollisionParticleRange(this_00,iVar4);
      if (((*(int *)&pFVar7->field_0x10 < 0) ||
          (*(int *)&(param_1->Collided).field_0x10 <
           *(int *)&pFVar7->field_0x14 + *(int *)&pFVar7->field_0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x4b,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArrayView<bool_const_,int> *)(*pcVar1)();
        return pTVar6;
      }
      local_48 = (longlong)*(int *)&pFVar7->field_0x10 + *(longlong *)&(param_1->Collided).field_0x8
      ;
      iVar5 = *(int *)&pFVar7->field_0x14;
      local_c = local_1c;
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), local_c = local_1c, bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArrayView<bool_const_,int> *)(*pcVar1)();
        return pTVar6;
      }
    }
    uStack_40 = CONCAT44(local_c,iVar5);
    plVar8 = &local_48;
  }
  lVar2 = plVar8[1];
  __return_storage_ptr__->DataPtr = (bool *)*plVar8;
  *(longlong *)&__return_storage_ptr__->ArrayNum = lVar2;
  return __return_storage_ptr__;
}

// GetCollisionTranslations @ 14dbfa540

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationCollider::GetCollisionTranslations
          (FClothingSimulationCollider *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1,FClothingSimulationCloth *param_2,
          ECollisionDataType param_3)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  TVector<float,3> *pTVar2;
  bool bVar3;
  int iVar4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar5;
  TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *this_02;
  TVector<float,3> **ppTVar6;
  TVector<float,3> *local_58;
  undefined8 uStack_50;
  TArrayView<Chaos::TVector<float,3>,int> local_48;
  TVector<float,3> *local_38;
  undefined4 local_30;
  undefined4 local_1c;
  undefined4 local_c;
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                         ,0x3d1,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
    return pTVar5;
  }
  if ((param_2 == (FClothingSimulationCloth *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cloth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                         ,0x3d2,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
    return pTVar5;
  }
  iVar4 = GetCollisionRangeId(this,param_1,param_2,param_3);
  if (iVar4 == -1) {
    local_38 = (TVector<float,3> *)0x0;
    local_30 = 0;
    ppTVar6 = &local_38;
  }
  else {
    this_00 = (param_1->Evolution).Ptr;
    if (this_00 == (FEvolution *)0x0) {
      this_01 = (param_1->PBDEvolution).Ptr;
      local_48.ArrayNum = Softs::FPBDEvolution::GetCollisionParticleRangeSize(this_01,iVar4);
      local_58 = (TVector<float,3> *)
                 ((this_01->MCollisionParticles)._padding_ + (longlong)iVar4 * 0xc);
      local_1c = local_c;
      if ((local_48.ArrayNum < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), local_1c = local_c, bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
        return pTVar5;
      }
    }
    else {
      this_02 = (TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *)
                Softs::FEvolution::GetCollisionParticleRange(this_00,iVar4);
      if ((this_02->Particles == (FSolverCollisionParticles *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x57,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
        return pTVar5;
      }
      Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
      GetArrayView<Chaos::TVector<float,3>_>
                (this_02,&local_48,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 &this_02->Particles->_padding_);
      local_58 = local_48.DataPtr;
    }
    uStack_50 = CONCAT44(local_1c,local_48.ArrayNum);
    ppTVar6 = &local_58;
  }
  pTVar2 = ppTVar6[1];
  __return_storage_ptr__->DataPtr = *ppTVar6;
  *(TVector<float,3> **)&__return_storage_ptr__->ArrayNum = pTVar2;
  return __return_storage_ptr__;
}

// GetNumGeometries @ 14dbfccb0

int __thiscall
Chaos::FClothingSimulationCollider::GetNumGeometries(FClothingSimulationCollider *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->LODData).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->LODData).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    return *(int *)(*(longlong *)((this->LODData).AllocatorInstance.Data + (longlong)param_1 * 8) +
                   0x40);
  }
  return 0;
}

// GetNumGeometries @ 14dbfcd40

int __thiscall
Chaos::FClothingSimulationCollider::GetNumGeometries(FClothingSimulationCollider *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->LODData).AllocatorInstance.Data;
  iVar2 = (this->LODData).ArrayNum;
  iVar4 = 0;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LODData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCollider::FLODData,TDefaultDelete<Chaos::FClothingSimulationCollider::FLODData>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    iVar4 = iVar4 + *(int *)(*(longlong *)pFVar3 + 0x40);
    pFVar3 = pFVar3 + 8;
  }
  return iVar4;
}

// GetOldCollisionTransforms @ 14dbfd7f0

TArrayView<Chaos::TRigidTransform<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationCollider::GetOldCollisionTransforms
          (FClothingSimulationCollider *this,
          TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1,FClothingSimulationCloth *param_2,
          ECollisionDataType param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *pTVar5;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> local_28;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> local_18;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                       ,0x3e3,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (param_2 == (FClothingSimulationCloth *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Cloth",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                       ,0x3e4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar4 = GetCollisionRangeId(this,param_1,param_2,param_3);
  if (iVar4 == -1) {
    local_28.DataPtr = (TRigidTransform<float,3> *)0x0;
    local_28.ArrayNum = 0;
    pTVar5 = &local_28;
  }
  else {
    Chaos::Private::GetCollisionParticleConstArrayView<Chaos::TRigidTransform<float,3>_>
              (&local_18,&param_1->Evolution,&param_1->PBDEvolution,iVar4,
               (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
               &(param_1->OldCollisionTransforms).field_0x8);
    pTVar5 = &local_18;
  }
  iVar4 = pTVar5->ArrayNum;
  uVar2 = *(undefined4 *)&pTVar5->field_0xc;
  __return_storage_ptr__->DataPtr = pTVar5->DataPtr;
  __return_storage_ptr__->ArrayNum = iVar4;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar2;
  return __return_storage_ptr__;
}

// PreUpdate @ 14dc0a4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulationCollider::PreUpdate
          (FClothingSimulationCollider *this,FClothingSimulationSolver *param_1,
          FClothingSimulationCloth *param_2)

{
  FLODData *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothingSimulationColliderUpdate> FVar10;
  TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
  *pTVar11;
  FClothCollisionData *pFVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  int *piVar13;
  FName FVar14;
  int local_res20;
  int local_178;
  FColor_u_0 local_174;
  FName local_170;
  FName local_168;
  FClothCollisionDataExtended local_158;
  TArray<int,TSizedDefaultAllocator<32>_> local_118;
  TArray<int,TSizedDefaultAllocator<32>_> local_108;
  FClothCollisionData local_f8;
  LARGE_INTEGER local_b8;
  FStatMessage local_b0;
  FClothingSimulationSolver *local_a0;
  FClothingSimulationCloth *local_98;
  FName local_90;
  FClothCollisionData local_88;
  
  iVar8 = 0;
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                         ,0x36f,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_2 == (FClothingSimulationCloth *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cloth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                         ,0x370,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId882,"FClothingSimulationCollider_PreUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
               ,0x372);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId882);
  }
  FVar10 = StatPtr_STAT_ChaosClothingSimulationColliderUpdate;
  if (StatPtr_STAT_ChaosClothingSimulationColliderUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothingSimulationColliderUpdate>)0x0) {
    pFVar9 = ::FName::FName(&local_90,"STAT_ChaosClothingSimulationColliderUpdate");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothingSimulationColliderUpdate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosClothingSimulationColliderUpdate,*pFVar9,
                        L"Chaos Cloth Update Collider","STATGROUP_ChaosCloth","STATCAT_Advanced",
                        L"ChaosCloth",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar2 = false;
  bVar4 = false;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  if ((FVar14.ComparisonIndex.Value.Value == 0) && (FVar14.Number == 0)) {
LAB_14dc0a6c5:
    bVar3 = false;
    FVar14 = local_168;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_174.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_174._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_170.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_170.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_170,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                   ,0x373);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dc0a6c5;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar3 = true;
  }
  if ((this->LODData).ArrayNum < 2) {
    local_res20 = 0;
  }
  else {
    local_res20 = *(int *)(*(longlong *)((this->LODData).AllocatorInstance.Data + 8) + 0x40);
    local_a0 = param_1;
    local_98 = param_2;
    pTVar11 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                      *)(*(longlong *)((this->LODData).AllocatorInstance.Data + 8) + 0x48),
                     (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                      *)&local_a0);
    piVar13 = (int *)&pTVar11->field_0x10;
    if (pTVar11 ==
        (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
         *)0x0) {
      piVar13 = (int *)0x0;
    }
    if (piVar13 != (int *)0x0) {
      local_178 = *piVar13;
      goto LAB_14dc0a744;
    }
  }
  local_178 = -1;
LAB_14dc0a744:
  if (((this->LODData).ArrayNum < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  this_00 = *(FLODData **)((this->LODData).AllocatorInstance.Data + 8);
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  local_158.LevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.LevelSets.ArrayNum = 0;
  local_158.LevelSets.ArrayMax = 0;
  local_158.SkinnedLevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SkinnedLevelSets.ArrayNum = 0;
  local_158.SkinnedLevelSets.ArrayMax = 0;
  local_158.MLLevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.MLLevelSets.ArrayNum = 0;
  local_158.MLLevelSets.ArrayMax = 0;
  local_158.SkinnedTriangleMeshes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SkinnedTriangleMeshes.ArrayNum = 0;
  local_158.SkinnedTriangleMeshes.ArrayMax = 0;
  bVar7 = this->CollisionData == (FClothCollisionData *)0x0;
  if (bVar7) {
    local_f8.Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar12 = &local_f8;
    local_f8.Spheres.ArrayNum = 0;
    local_f8.Spheres.ArrayMax = 0;
    local_f8.SphereConnections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.SphereConnections.ArrayNum = 0;
    local_f8.SphereConnections.ArrayMax = 0;
    local_f8.Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Convexes.ArrayNum = 0;
    local_f8.Convexes.ArrayMax = 0;
    local_f8.Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Boxes.ArrayNum = 0;
    local_f8.Boxes.ArrayMax = 0;
  }
  else {
    pFVar12 = FClothCollisionData::FClothCollisionData(&local_88,this->CollisionData);
  }
  FLODData::Add(this_00,param_1,param_2,pFVar12,&local_158,__real_3ff0000000000000,&local_118,
                &local_108);
  if (bVar7) {
    if (local_f8.Boxes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Boxes.AllocatorInstance.Data);
    }
    FVar5.Data = local_f8.Convexes.AllocatorInstance.Data;
    DestructItems<FClothCollisionPrim_Convex,int>
              ((FClothCollisionPrim_Convex *)local_f8.Convexes.AllocatorInstance.Data,
               local_f8.Convexes.ArrayNum);
    if ((FClothCollisionPrim_Convex *)FVar5.Data != (FClothCollisionPrim_Convex *)0x0) {
      FMemory::Free(FVar5.Data);
    }
    if (local_f8.SphereConnections.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.SphereConnections.AllocatorInstance.Data);
    }
    if (local_f8.Spheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Spheres.AllocatorInstance.Data);
    }
  }
  if (!bVar7) {
    if (local_88.Boxes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Boxes.AllocatorInstance.Data);
    }
    DestructItems<FClothCollisionPrim_Convex,int>
              ((FClothCollisionPrim_Convex *)local_88.Convexes.AllocatorInstance.Data,
               local_88.Convexes.ArrayNum);
    if ((FClothCollisionPrim_Convex *)local_88.Convexes.AllocatorInstance.Data !=
        (FClothCollisionPrim_Convex *)0x0) {
      FMemory::Free(local_88.Convexes.AllocatorInstance.Data);
    }
    if (local_88.SphereConnections.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.SphereConnections.AllocatorInstance.Data);
    }
    if (local_88.Spheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Spheres.AllocatorInstance.Data);
    }
  }
  FVar5.Data = local_158.SkinnedTriangleMeshes.AllocatorInstance.Data;
  DestructItems<Chaos::FSkinnedTriangleMeshCollisionData,int>
            ((FSkinnedTriangleMeshCollisionData *)
             local_158.SkinnedTriangleMeshes.AllocatorInstance.Data,
             local_158.SkinnedTriangleMeshes.ArrayNum);
  if ((FSkinnedTriangleMeshCollisionData *)FVar5.Data != (FSkinnedTriangleMeshCollisionData *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  FVar5.Data = local_158.MLLevelSets.AllocatorInstance.Data;
  DestructItems<Chaos::FMLLevelSetCollisionData,int>
            ((FMLLevelSetCollisionData *)local_158.MLLevelSets.AllocatorInstance.Data,
             local_158.MLLevelSets.ArrayNum);
  if ((FMLLevelSetCollisionData *)FVar5.Data != (FMLLevelSetCollisionData *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  FVar5.Data = local_158.SkinnedLevelSets.AllocatorInstance.Data;
  DestructItems<Chaos::FSkinnedLevelSetCollisionData,int>
            ((FSkinnedLevelSetCollisionData *)local_158.SkinnedLevelSets.AllocatorInstance.Data,
             local_158.SkinnedLevelSets.ArrayNum);
  if ((FSkinnedLevelSetCollisionData *)FVar5.Data != (FSkinnedLevelSetCollisionData *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  FVar5.Data = local_158.LevelSets.AllocatorInstance.Data;
  DestructItems<Chaos::FLevelSetCollisionData,int>
            ((FLevelSetCollisionData *)local_158.LevelSets.AllocatorInstance.Data,
             local_158.LevelSets.ArrayNum);
  if ((FLevelSetCollisionData *)FVar5.Data != (FLevelSetCollisionData *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if (1 < (this->LODData).ArrayNum) {
    iVar8 = *(int *)(*(longlong *)((this->LODData).AllocatorInstance.Data + 8) + 0x40);
  }
  if ((local_res20 == iVar8) &&
     (iVar8 = GetCollisionRangeId(this,param_1,param_2,1), local_178 == iVar8)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  this->bHasExternalCollisionChanged = bVar7;
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_b0.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_b0.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b8);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_b0);
      piVar13 = &this_01->ScopeCount;
      *piVar13 = *piVar13 + -1;
      if (*piVar13 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Remove @ 14dc0d2f0

void __thiscall
Chaos::FClothingSimulationCollider::Remove
          (FClothingSimulationCollider *this,FClothingSimulationSolver *param_1,
          FClothingSimulationCloth *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FClothingSimulationSolver *local_28;
  FClothingSimulationCloth *local_20;
  
  local_28 = param_1;
  local_20 = param_2;
  TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
            *)&this->LODIndices,
           (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
            *)&local_28);
  pFVar3 = (this->LODData).AllocatorInstance.Data;
  iVar2 = (this->LODData).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LODData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCollider::FLODData,TDefaultDelete<Chaos::FClothingSimulationCollider::FLODData>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_28 = param_1;
    local_20 = param_2;
    TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
              *)(*(longlong *)pFVar3 + 0x48),
             (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
              *)&local_28);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ResetStartPose @ 14dc0ffa0

void __thiscall
Chaos::FClothingSimulationCollider::ResetStartPose
          (FClothingSimulationCollider *this,FClothingSimulationSolver *param_1,
          FClothingSimulationCloth *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->LODData).AllocatorInstance.Data;
  iVar2 = (this->LODData).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LODData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCollider::FLODData,TDefaultDelete<Chaos::FClothingSimulationCollider::FLODData>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FLODData::ResetStartPose(*(FLODData **)pFVar3,param_1,param_2);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// Update @ 14dc1fcf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulationCollider::Update
          (FClothingSimulationCollider *this,FClothingSimulationSolver *param_1,
          FClothingSimulationCloth *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TTransform<double> *pTVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothingSimulationColliderUpdate> FVar16;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar17;
  TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
  *pTVar18;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar19;
  TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
  *pTVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res20 [8];
  FColor_u_0 local_d0 [2];
  FName local_c8;
  FName local_c0;
  FName local_b8;
  TTransform<double> *local_a8;
  FClothingSimulationSolver *local_a0;
  FClothingSimulationCloth *local_98;
  FClothingSimulationSolver *local_90;
  FClothingSimulationCloth *local_88;
  FClothingSimulationSolver *local_80;
  FClothingSimulationCloth *local_78;
  FClothingSimulationSolver *local_70;
  FClothingSimulationCloth *local_68;
  FClothingSimulationSolver *local_60;
  FClothingSimulationCloth *local_58;
  FName local_50 [2];
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Solver",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                          ,0x386,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2 == (FClothingSimulationCloth *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Cloth",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                          ,0x387,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2->Mesh == (FClothingSimulationMesh *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Cloth->GetMesh()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                          ,0x388,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId905,"FClothingSimulationCollider_Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
               ,0x389);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId905);
  }
  FVar16 = StatPtr_STAT_ChaosClothingSimulationColliderUpdate;
  if (StatPtr_STAT_ChaosClothingSimulationColliderUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothingSimulationColliderUpdate>)0x0) {
    pFVar15 = ::FName::FName(local_50,"STAT_ChaosClothingSimulationColliderUpdate");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothingSimulationColliderUpdate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosClothingSimulationColliderUpdate,*pFVar15,
                        L"Chaos Cloth Update Collider","STATGROUP_ChaosCloth","STATCAT_Advanced",
                        L"ChaosCloth",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar16;
  bVar7 = false;
  bVar6 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar11 = false;
  bVar9 = false;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d0[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar11 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_c8.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                   ,0x38a);
        bVar7 = true;
        bVar6 = true;
        bVar11 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c0 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar9 = true;
      goto LAB_14dc1ff15;
    }
  }
  bVar7 = bVar11;
  bVar6 = bVar9;
  bVar9 = false;
  local_c0 = local_b8;
LAB_14dc1ff15:
  local_a8 = (TTransform<double> *)(**(code **)(param_2->Mesh->_padding_ + 0xc0))();
  pTVar17 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
            (**(code **)(param_2->Mesh->_padding_ + 0xb8))();
  pTVar8 = local_a8;
  pFVar21 = (this->LODData).AllocatorInstance.Data;
  iVar12 = (this->LODData).ArrayNum;
  pFVar1 = pFVar21 + (longlong)iVar12 * 8;
  while( true ) {
    if ((this->LODData).ArrayNum != iVar12) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCollider::FLODData,TDefaultDelete<Chaos::FClothingSimulationCollider::FLODData>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar21 == pFVar1) break;
    FLODData::Update(*(FLODData **)pFVar21,param_1,param_2,pTVar8,pTVar17);
    pFVar21 = pFVar21 + 8;
  }
  local_a0 = param_1;
  local_98 = param_2;
  pTVar18 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                    *)&this->LODIndices,
                   (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                    *)&local_a0);
  FVar3 = local_c0;
  if ((pTVar18 ==
       (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
        *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = *(uint *)&pTVar18->field_0x10;
  pTVar19 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                    *)&param_2->LODIndices,param_1);
  if ((pTVar19 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x27b,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar12 = *(int *)&pTVar19->field_0x8 + 2;
  *(int *)&pTVar18->field_0x10 = iVar12;
  if ((iVar12 < 0) || ((this->LODData).ArrayNum <= iVar12)) {
    *(undefined4 *)&pTVar18->field_0x10 = 1;
  }
  if (this->bHasExternalCollisionChanged != false) {
    if (((this->LODData).ArrayNum < 2) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(longlong *)((this->LODData).AllocatorInstance.Data + 8);
    if ((param_1 == (FClothingSimulationSolver *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Solver",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                            ,0x1c3,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(int *)(lVar4 + 0x40) != 0) {
      local_90 = param_1;
      local_88 = param_2;
      pTVar20 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                        *)(lVar4 + 0x48),
                       (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                        *)&local_90);
      if ((pTVar20 ==
           (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
            *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FClothingSimulationSolver::EnableCollisionParticles(param_1,*(int *)&pTVar20->field_0x10,true)
      ;
    }
    if (((this->LODData).ArrayNum < 2) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FLODData::ResetStartPose
              (*(FLODData **)((this->LODData).AllocatorInstance.Data + 8),param_1,param_2);
  }
  if (*(uint *)&pTVar18->field_0x10 != uVar2) {
    if (uVar2 == 0xffffffff) {
      if (((this->LODData).ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)(this->LODData).AllocatorInstance.Data;
      if ((param_1 == (FClothingSimulationSolver *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Solver",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                              ,0x1c3,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)(lVar4 + 0x40) != 0) {
        local_80 = param_1;
        local_78 = param_2;
        pTVar20 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                          *)(lVar4 + 0x48),
                         (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                          *)&local_80);
        if ((pTVar20 ==
             (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
              *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FClothingSimulationSolver::EnableCollisionParticles
                  (param_1,*(int *)&pTVar20->field_0x10,true);
      }
      if (((this->LODData).ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FLODData::ResetStartPose(*(FLODData **)(this->LODData).AllocatorInstance.Data,param_1,param_2)
      ;
    }
    else if (1 < (int)uVar2) {
      uVar13 = 0;
      if ((int)uVar2 < (this->LODData).ArrayNum) {
        uVar13 = ~uVar2 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
      if ((param_1 == (FClothingSimulationSolver *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Solver",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                              ,0x1c3,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)(lVar4 + 0x40) != 0) {
        local_70 = param_1;
        local_68 = param_2;
        pTVar20 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                          *)(lVar4 + 0x48),
                         (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                          *)&local_70);
        if ((pTVar20 ==
             (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
              *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FClothingSimulationSolver::EnableCollisionParticles
                  (param_1,*(int *)&pTVar20->field_0x10,false);
      }
    }
    uVar13 = *(uint *)&pTVar18->field_0x10;
    if (1 < (int)uVar13) {
      uVar14 = 0;
      if ((int)uVar13 < (this->LODData).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
      if ((param_1 == (FClothingSimulationSolver *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Solver",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                              ,0x1c3,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)(lVar4 + 0x40) != 0) {
        local_60 = param_1;
        local_58 = param_2;
        pTVar20 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                          *)(lVar4 + 0x48),
                         (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                          *)&local_60);
        if ((pTVar20 ==
             (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
              *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FClothingSimulationSolver::EnableCollisionParticles
                  (param_1,*(int *)&pTVar20->field_0x10,true);
      }
      if (uVar2 == 0xffffffff) {
        uVar2 = *(uint *)&pTVar18->field_0x10;
        uVar13 = 0;
        if ((int)uVar2 < (this->LODData).ArrayNum) {
          uVar13 = ~uVar2 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FLODData::ResetStartPose
                  (*(FLODData **)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar2 * 8)
                   ,param_1,param_2);
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar3,CycleScopeEnd);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

