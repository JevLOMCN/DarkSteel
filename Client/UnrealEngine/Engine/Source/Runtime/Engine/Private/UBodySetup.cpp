// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 47

// StaticClass @ 147260d70

UClass * __cdecl UBodySetup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UBodySetup.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BodySetup",&Z_Registration_Info_UClass_UBodySetup.InnerSingleton,
               StaticRegisterNativesUBodySetup,0x338,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBodySetup>,InternalVTableHelperCtorCaller<UBodySetup>,aFStackX_8
               ,UBodySetupCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBodySetup.InnerSingleton;
}

// UBodySetup @ 148250e70

UBodySetup * __thiscall UBodySetup::UBodySetup(UBodySetup *this,FVTableHelper *param_1)

{
  UBodySetupCore::UBodySetupCore((UBodySetupCore *)this,param_1);
  this->_padding_ = (longlong)&___7UBodySetup__6B_;
  (this->AggGeom).SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SphereElems.ArrayNum = 0;
  (this->AggGeom).SphereElems.ArrayMax = 0;
  (this->AggGeom).BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).BoxElems.ArrayNum = 0;
  (this->AggGeom).BoxElems.ArrayMax = 0;
  (this->AggGeom).SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SphylElems.ArrayNum = 0;
  (this->AggGeom).SphylElems.ArrayMax = 0;
  (this->AggGeom).ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).ConvexElems.ArrayNum = 0;
  (this->AggGeom).ConvexElems.ArrayMax = 0;
  (this->AggGeom).TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).TaperedCapsuleElems.ArrayNum = 0;
  (this->AggGeom).TaperedCapsuleElems.ArrayMax = 0;
  (this->AggGeom).LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).LevelSetElems.ArrayNum = 0;
  (this->AggGeom).LevelSetElems.ArrayMax = 0;
  (this->AggGeom).SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SkinnedLevelSetElems.ArrayNum = 0;
  (this->AggGeom).SkinnedLevelSetElems.ArrayMax = 0;
  (this->AggGeom).MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).MLLevelSetElems.ArrayNum = 0;
  (this->AggGeom).MLLevelSetElems.ArrayMax = 0;
  (this->AggGeom).SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SkinnedTriangleMeshElems.ArrayNum = 0;
  (this->AggGeom).SkinnedTriangleMeshElems.ArrayMax = 0;
  (this->AggGeom).RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  (this->AggGeom).RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  (this->PhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  (this->WalkableSlopeOverride).WalkableSlopeBehavior.Value = '\0';
  (this->WalkableSlopeOverride).WalkableSlopeAngle = 0.0;
  (this->WalkableSlopeOverride).CachedSlopeAngle = 0.0;
  (this->WalkableSlopeOverride).CachedSlopeCos = 1.0;
  (this->CookedFormatData).Formats.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedFormatData).Formats.Pairs.ArrayNum = 0;
  (this->CookedFormatData).Formats.Pairs.ArrayMax = 0;
  (this->BodySetupGuid).A = 0;
  (this->BodySetupGuid).B = 0;
  (this->BodySetupGuid).C = 0;
  (this->BodySetupGuid).D = 0;
  (this->TriMeshGeometries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriMeshGeometries).ArrayNum = 0;
  (this->TriMeshGeometries).ArrayMax = 0;
  (this->UVInfo).IndexBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVInfo).IndexBuffer.ArrayNum = 0;
  (this->UVInfo).IndexBuffer.ArrayMax = 0;
  (this->UVInfo).VertPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVInfo).VertPositions.ArrayNum = 0;
  (this->UVInfo).VertPositions.ArrayMax = 0;
  (this->UVInfo).VertUVs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVInfo).VertUVs.ArrayNum = 0;
  (this->UVInfo).VertUVs.ArrayMax = 0;
  (this->FaceRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FaceRemap).ArrayNum = 0;
  (this->FaceRemap).ArrayMax = 0;
  FBodyInstance::FBodyInstance(&this->DefaultInstance);
  (this->ChaosDerivedDataReader).Ptr = (FChaosDerivedDataReader<float,3> *)0x0;
  (this->ChaosTriMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChaosTriMeshes).ArrayNum = 0;
  (this->ChaosTriMeshes).ArrayMax = 0;
  return this;
}

// UBodySetup @ 148250fc0

UBodySetup * __thiscall UBodySetup::UBodySetup(UBodySetup *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  
  UBodySetupCore::UBodySetupCore((UBodySetupCore *)this,param_1);
  this->_padding_ = (longlong)&___7UBodySetup__6B_;
  (this->AggGeom).SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SphereElems.ArrayNum = 0;
  (this->AggGeom).SphereElems.ArrayMax = 0;
  (this->AggGeom).BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).BoxElems.ArrayNum = 0;
  (this->AggGeom).BoxElems.ArrayMax = 0;
  (this->AggGeom).SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SphylElems.ArrayNum = 0;
  (this->AggGeom).SphylElems.ArrayMax = 0;
  (this->AggGeom).ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).ConvexElems.ArrayNum = 0;
  (this->AggGeom).ConvexElems.ArrayMax = 0;
  (this->AggGeom).TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).TaperedCapsuleElems.ArrayNum = 0;
  (this->AggGeom).TaperedCapsuleElems.ArrayMax = 0;
  (this->AggGeom).LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).LevelSetElems.ArrayNum = 0;
  (this->AggGeom).LevelSetElems.ArrayMax = 0;
  (this->AggGeom).SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SkinnedLevelSetElems.ArrayNum = 0;
  (this->AggGeom).SkinnedLevelSetElems.ArrayMax = 0;
  (this->AggGeom).MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).MLLevelSetElems.ArrayNum = 0;
  (this->AggGeom).MLLevelSetElems.ArrayMax = 0;
  (this->AggGeom).SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SkinnedTriangleMeshElems.ArrayNum = 0;
  (this->AggGeom).SkinnedTriangleMeshElems.ArrayMax = 0;
  (this->AggGeom).RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  (this->AggGeom).RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  (this->PhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  (this->WalkableSlopeOverride).WalkableSlopeBehavior.Value = '\0';
  (this->WalkableSlopeOverride).WalkableSlopeAngle = 0.0;
  (this->WalkableSlopeOverride).CachedSlopeAngle = 0.0;
  (this->WalkableSlopeOverride).CachedSlopeCos = 1.0;
  (this->CookedFormatData).Formats.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedFormatData).Formats.Pairs.ArrayNum = 0;
  (this->CookedFormatData).Formats.Pairs.ArrayMax = 0;
  (this->BodySetupGuid).A = 0;
  (this->BodySetupGuid).B = 0;
  (this->BodySetupGuid).C = 0;
  (this->BodySetupGuid).D = 0;
  (this->TriMeshGeometries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriMeshGeometries).ArrayNum = 0;
  (this->TriMeshGeometries).ArrayMax = 0;
  (this->UVInfo).IndexBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVInfo).IndexBuffer.ArrayNum = 0;
  (this->UVInfo).IndexBuffer.ArrayMax = 0;
  (this->UVInfo).VertPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVInfo).VertPositions.ArrayNum = 0;
  (this->UVInfo).VertPositions.ArrayMax = 0;
  (this->UVInfo).VertUVs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVInfo).VertUVs.ArrayNum = 0;
  (this->UVInfo).VertUVs.ArrayMax = 0;
  (this->FaceRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FaceRemap).ArrayNum = 0;
  (this->FaceRemap).ArrayMax = 0;
  FBodyInstance::FBodyInstance(&this->DefaultInstance);
  (this->ChaosDerivedDataReader).Ptr = (FChaosDerivedDataReader<float,3> *)0x0;
  (this->ChaosTriMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar2 = &this->field_0xd9;
  this->bFailedToCreatePhysicsMeshes = '\0';
  this->bNeverNeedsCookedCollisionData = '\0';
  this->bHasCookedCollisionData = '\x01';
  (this->ChaosTriMeshes).ArrayNum = 0;
  (this->ChaosTriMeshes).ArrayMax = 0;
  puVar2 = &this->field_0xd8;
  this->bConsiderForBounds = '\x01';
  this->bSupportUVsAndFaceRemap = '\0';
  this->bGenerateMirroredCollision = '\x01';
  this->bGenerateNonMirroredCollision = '\x01';
  this->bMeshCollideAll = '\0';
  FBodyInstance::SetObjectType(&this->DefaultInstance,ECC_PhysicsBody);
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->BuildScale3D).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BuildScale3D).field0_0x0._s_0.Y = (double)uVar4;
  (this->BuildScale3D).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  this->bSharedCookedData = '\0';
  this->CookedFormatDataOverride = (FFormatContainer *)0x0;
  this->CurrentCookHelper = (FCookHelper *)0x0;
  return this;
}

// ~UBodySetup @ 148253480

void __thiscall UBodySetup::~UBodySetup(UBodySetup *this)

{
  FScriptContainerElement *pFVar1;
  FChaosDerivedDataReader<float,3> *this_00;
  
  this->_padding_ = (longlong)&___7UBodySetup__6B_;
  DestructItems<TSharedPtr<Chaos::FTriangleMeshImplicitObject,1>,int>
            ((TSharedPtr<Chaos::FTriangleMeshImplicitObject,1> *)
             (this->ChaosTriMeshes).AllocatorInstance.Data,(this->ChaosTriMeshes).ArrayNum);
  pFVar1 = (this->ChaosTriMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->ChaosDerivedDataReader).Ptr;
  if (this_00 != (FChaosDerivedDataReader<float,3> *)0x0) {
    FChaosDerivedDataReader<float,3>::~FChaosDerivedDataReader<float,3>(this_00);
    ::operator_delete(this_00,0x88);
  }
  FBodyInstance::~FBodyInstance(&this->DefaultInstance);
  pFVar1 = (this->FaceRemap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             (this->UVInfo).VertUVs.AllocatorInstance.Data,(this->UVInfo).VertUVs.ArrayNum);
  pFVar1 = (this->UVInfo).VertUVs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UVInfo).VertPositions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UVInfo).IndexBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int>
            ((TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)
             (this->TriMeshGeometries).AllocatorInstance.Data,(this->TriMeshGeometries).ArrayNum);
  pFVar1 = (this->TriMeshGeometries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FFormatContainer::FlushData(&this->CookedFormatData);
  pFVar1 = (this->CookedFormatData).Formats.Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FKAggregateGeom::~FKAggregateGeom(&this->AggGeom);
  UBodySetupCore::~UBodySetupCore((UBodySetupCore *)this);
  return;
}

// AbortPhysicsMeshAsyncCreation @ 1482602c0

void __thiscall UBodySetup::AbortPhysicsMeshAsyncCreation(UBodySetup *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                       ,0x1ef,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->CurrentCookHelper != (FCookHelper *)0x0) {
    LOCK();
    this->CurrentCookHelper->bCanceled = (atomic<bool>)0x1;
    UNLOCK();
    this->CurrentCookHelper = (FCookHelper *)0x0;
  }
  return;
}

// AddCollisionElemFrom @ 1482606d0

bool __thiscall
UBodySetup::AddCollisionElemFrom(UBodySetup *this,FKAggregateGeom *param_1,Type param_2,int param_3)

{
  FKAggregateGeom *pFVar1;
  int *piVar2;
  TArray<FKBoxElem,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FKSphylElem,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FKTaperedCapsuleElem,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FKLevelSetElem,TSizedDefaultAllocator<32>_> *pTVar7;
  FKConvexElem *pFVar8;
  FKTaperedCapsuleElem *pFVar9;
  FKLevelSetElem *pFVar10;
  code *pcVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FKConvexElem *pFVar21;
  FKTaperedCapsuleElem *pFVar22;
  FKLevelSetElem *pFVar23;
  
  lVar19 = (longlong)param_3;
  switch(param_2) {
  case Sphere:
    pFVar1 = &this->AggGeom;
    if ((-1 < param_3) && (param_3 < (param_1->SphereElems).ArrayNum)) {
      if ((param_3 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      pFVar18 = (pFVar1->SphereElems).AllocatorInstance.Data;
      pFVar20 = (param_1->SphereElems).AllocatorInstance.Data + lVar19 * 0x50;
      if (((pFVar18 <= pFVar20) &&
          (pFVar20 < pFVar18 + (longlong)(this->AggGeom).SphereElems.ArrayMax * 0x50)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      iVar16 = (this->AggGeom).SphereElems.ArrayNum;
      piVar2 = &(this->AggGeom).SphereElems.ArrayMax;
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,(ForAnyElementType *)pFVar1,piVar2);
      }
      (this->AggGeom).SphereElems.ArrayNum = iVar16 + 1;
      pFVar18 = (pFVar1->SphereElems).AllocatorInstance.Data + (longlong)iVar16 * 0x50;
      *(undefined ***)pFVar18 = &___7FKShapeElem__6B_;
      *(undefined4 *)(pFVar18 + 8) = *(undefined4 *)(pFVar20 + 8);
      *(undefined8 *)(pFVar18 + 0xc) = *(undefined8 *)(pFVar20 + 0xc);
      *(undefined4 *)(pFVar18 + 0x14) = *(undefined4 *)(pFVar20 + 0x14);
      pFVar18[0x18] =
           (FScriptContainerElement)
           ((byte)pFVar18[0x18] ^ ((byte)pFVar18[0x18] ^ (byte)pFVar20[0x18]) & 1);
      pFVar18[0x19] = pFVar20[0x19];
      *(undefined4 *)(pFVar18 + 0x20) = 6;
      *(FScriptContainerElement **)(pFVar18 + 0x28) = pFVar18;
      *(undefined ***)pFVar18 = &___7FKSphereElem__6B_;
      uVar12 = *(undefined8 *)(pFVar20 + 0x38);
      *(undefined8 *)(pFVar18 + 0x30) = *(undefined8 *)(pFVar20 + 0x30);
      *(undefined8 *)(pFVar18 + 0x38) = uVar12;
      *(undefined8 *)(pFVar18 + 0x40) = *(undefined8 *)(pFVar20 + 0x40);
      *(undefined4 *)(pFVar18 + 0x48) = *(undefined4 *)(pFVar20 + 0x48);
      return true;
    }
    break;
  case Box:
    pTVar3 = &(this->AggGeom).BoxElems;
    if ((-1 < param_3) && (param_3 < (param_1->BoxElems).ArrayNum)) {
      if ((param_3 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      pFVar18 = (pTVar3->AllocatorInstance).Data;
      pFVar20 = (param_1->BoxElems).AllocatorInstance.Data + lVar19 * 0x70;
      if (((pFVar18 <= pFVar20) &&
          (pFVar20 < pFVar18 + (longlong)(this->AggGeom).BoxElems.ArrayMax * 0x70)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      iVar16 = (this->AggGeom).BoxElems.ArrayNum;
      piVar2 = &(this->AggGeom).BoxElems.ArrayMax;
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x870,&pTVar3->AllocatorInstance,piVar2);
      }
      (this->AggGeom).BoxElems.ArrayNum = iVar16 + 1;
      pFVar18 = (pTVar3->AllocatorInstance).Data + (longlong)iVar16 * 0x70;
      *(undefined ***)pFVar18 = &___7FKShapeElem__6B_;
      *(undefined4 *)(pFVar18 + 8) = *(undefined4 *)(pFVar20 + 8);
      *(undefined8 *)(pFVar18 + 0xc) = *(undefined8 *)(pFVar20 + 0xc);
      *(undefined4 *)(pFVar18 + 0x14) = *(undefined4 *)(pFVar20 + 0x14);
      pFVar18[0x18] =
           (FScriptContainerElement)
           ((byte)pFVar18[0x18] ^ ((byte)pFVar18[0x18] ^ (byte)pFVar20[0x18]) & 1);
      pFVar18[0x19] = pFVar20[0x19];
      *(undefined4 *)(pFVar18 + 0x20) = 6;
      *(FScriptContainerElement **)(pFVar18 + 0x28) = pFVar18;
      *(undefined ***)pFVar18 = &___7FKBoxElem__6B_;
      uVar12 = *(undefined8 *)(pFVar20 + 0x38);
      *(undefined8 *)(pFVar18 + 0x30) = *(undefined8 *)(pFVar20 + 0x30);
      *(undefined8 *)(pFVar18 + 0x38) = uVar12;
      *(undefined8 *)(pFVar18 + 0x40) = *(undefined8 *)(pFVar20 + 0x40);
      uVar12 = *(undefined8 *)(pFVar20 + 0x50);
      *(undefined8 *)(pFVar18 + 0x48) = *(undefined8 *)(pFVar20 + 0x48);
      *(undefined8 *)(pFVar18 + 0x50) = uVar12;
      *(undefined8 *)(pFVar18 + 0x58) = *(undefined8 *)(pFVar20 + 0x58);
      *(undefined4 *)(pFVar18 + 0x60) = *(undefined4 *)(pFVar20 + 0x60);
      *(undefined4 *)(pFVar18 + 100) = *(undefined4 *)(pFVar20 + 100);
      *(undefined4 *)(pFVar18 + 0x68) = *(undefined4 *)(pFVar20 + 0x68);
      return true;
    }
    break;
  case Sphyl:
    pTVar4 = &(this->AggGeom).SphylElems;
    if ((-1 < param_3) && (param_3 < (param_1->SphylElems).ArrayNum)) {
      if ((param_3 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      pFVar18 = (pTVar4->AllocatorInstance).Data;
      pFVar20 = (param_1->SphylElems).AllocatorInstance.Data + lVar19 * 0x68;
      if (((pFVar18 <= pFVar20) &&
          (pFVar20 < pFVar18 + (longlong)(this->AggGeom).SphylElems.ArrayMax * 0x68)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      iVar16 = (this->AggGeom).SphylElems.ArrayNum;
      piVar2 = &(this->AggGeom).SphylElems.ArrayMax;
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x868,&pTVar4->AllocatorInstance,piVar2);
      }
      (this->AggGeom).SphylElems.ArrayNum = iVar16 + 1;
      pFVar18 = (pTVar4->AllocatorInstance).Data + (longlong)iVar16 * 0x68;
      *(undefined ***)pFVar18 = &___7FKShapeElem__6B_;
      *(undefined4 *)(pFVar18 + 8) = *(undefined4 *)(pFVar20 + 8);
      *(undefined8 *)(pFVar18 + 0xc) = *(undefined8 *)(pFVar20 + 0xc);
      *(undefined4 *)(pFVar18 + 0x14) = *(undefined4 *)(pFVar20 + 0x14);
      pFVar18[0x18] =
           (FScriptContainerElement)
           ((byte)pFVar18[0x18] ^ ((byte)pFVar18[0x18] ^ (byte)pFVar20[0x18]) & 1);
      pFVar18[0x19] = pFVar20[0x19];
      *(undefined4 *)(pFVar18 + 0x20) = 6;
      *(FScriptContainerElement **)(pFVar18 + 0x28) = pFVar18;
      *(undefined ***)pFVar18 = &___7FKSphylElem__6B_;
      uVar12 = *(undefined8 *)(pFVar20 + 0x38);
      *(undefined8 *)(pFVar18 + 0x30) = *(undefined8 *)(pFVar20 + 0x30);
      *(undefined8 *)(pFVar18 + 0x38) = uVar12;
      *(undefined8 *)(pFVar18 + 0x40) = *(undefined8 *)(pFVar20 + 0x40);
      uVar12 = *(undefined8 *)(pFVar20 + 0x50);
      *(undefined8 *)(pFVar18 + 0x48) = *(undefined8 *)(pFVar20 + 0x48);
      *(undefined8 *)(pFVar18 + 0x50) = uVar12;
      *(undefined8 *)(pFVar18 + 0x58) = *(undefined8 *)(pFVar20 + 0x58);
      *(undefined4 *)(pFVar18 + 0x60) = *(undefined4 *)(pFVar20 + 0x60);
      *(undefined4 *)(pFVar18 + 100) = *(undefined4 *)(pFVar20 + 100);
      return true;
    }
    break;
  case Convex:
    pTVar5 = &(this->AggGeom).ConvexElems;
    if ((-1 < param_3) && (param_3 < (param_1->ConvexElems).ArrayNum)) {
      if ((param_3 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      pFVar8 = (FKConvexElem *)(pTVar5->AllocatorInstance).Data;
      pFVar21 = (FKConvexElem *)((param_1->ConvexElems).AllocatorInstance.Data + lVar19 * 0x100);
      if (((pFVar8 <= pFVar21) && (pFVar21 < pFVar8 + (this->AggGeom).ConvexElems.ArrayMax)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      iVar16 = (this->AggGeom).ConvexElems.ArrayNum;
      piVar2 = &(this->AggGeom).ConvexElems.ArrayMax;
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x100,0x10,&pTVar5->AllocatorInstance,piVar2);
      }
      (this->AggGeom).ConvexElems.ArrayNum = iVar16 + 1;
      FKConvexElem::FKConvexElem
                ((FKConvexElem *)((pTVar5->AllocatorInstance).Data + (longlong)iVar16 * 0x100),
                 pFVar21);
      iVar16 = (this->AggGeom).ConvexElems.ArrayNum;
      uVar17 = iVar16 - 1;
      uVar15 = 0;
      if ((int)uVar17 < iVar16) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      FKConvexElem::ResetChaosConvexMesh
                ((FKConvexElem *)
                 ((pTVar5->AllocatorInstance).Data +
                 (longlong)((this->AggGeom).ConvexElems.ArrayNum + -1) * 0x100));
      return true;
    }
    break;
  case TaperedCapsule:
    pTVar6 = &(this->AggGeom).TaperedCapsuleElems;
    if ((-1 < param_3) && (param_3 < (param_1->TaperedCapsuleElems).ArrayNum)) {
      if ((param_3 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      pFVar9 = (FKTaperedCapsuleElem *)(pTVar6->AllocatorInstance).Data;
      pFVar22 = (FKTaperedCapsuleElem *)
                ((param_1->TaperedCapsuleElems).AllocatorInstance.Data + lVar19 * 0x70);
      if (((pFVar9 <= pFVar22) && (pFVar22 < pFVar9 + (this->AggGeom).TaperedCapsuleElems.ArrayMax))
         && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      iVar16 = (this->AggGeom).TaperedCapsuleElems.ArrayNum;
      piVar2 = &(this->AggGeom).TaperedCapsuleElems.ArrayMax;
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x870,&pTVar6->AllocatorInstance,piVar2);
      }
      (this->AggGeom).TaperedCapsuleElems.ArrayNum = iVar16 + 1;
      FKTaperedCapsuleElem::FKTaperedCapsuleElem
                ((FKTaperedCapsuleElem *)
                 ((pTVar6->AllocatorInstance).Data + (longlong)iVar16 * 0x70),pFVar22);
      return true;
    }
    break;
  case LevelSet:
    pTVar7 = &(this->AggGeom).LevelSetElems;
    if ((-1 < param_3) && (param_3 < (param_1->LevelSetElems).ArrayNum)) {
      if ((param_3 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      pFVar10 = (FKLevelSetElem *)(pTVar7->AllocatorInstance).Data;
      pFVar23 = (FKLevelSetElem *)((param_1->LevelSetElems).AllocatorInstance.Data + lVar19 * 0xa0);
      if (((pFVar10 <= pFVar23) && (pFVar23 < pFVar10 + (this->AggGeom).LevelSetElems.ArrayMax)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      iVar16 = (this->AggGeom).LevelSetElems.ArrayNum;
      piVar2 = &(this->AggGeom).LevelSetElems.ArrayMax;
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10a0,&pTVar7->AllocatorInstance,piVar2);
      }
      (this->AggGeom).LevelSetElems.ArrayNum = iVar16 + 1;
      FKLevelSetElem::FKLevelSetElem
                ((FKLevelSetElem *)((pTVar7->AllocatorInstance).Data + (longlong)iVar16 * 0xa0),
                 pFVar23);
      return true;
    }
  }
  return false;
}

// AddCollisionFrom @ 148260ee0

void __thiscall UBodySetup::AddCollisionFrom(UBodySetup *this,FKAggregateGeom *param_1)

{
  FKAggregateGeom *pFVar1;
  TArray<FKBoxElem,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FKSphylElem,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  int *piVar6;
  TArray<FKLevelSetElem,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FKMLLevelSetElem,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined8 *puVar11;
  code *pcVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  
  pFVar1 = &this->AggGeom;
  if (pFVar1 == param_1) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  iVar9 = (param_1->SphereElems).ArrayNum;
  if (iVar9 != 0) {
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x50,8,iVar9,(ForAnyElementType *)pFVar1,
                        &(this->AggGeom).SphereElems.ArrayNum,&(this->AggGeom).SphereElems.ArrayMax)
    ;
    ConstructItems<FKSphereElem,FKSphereElem,int>
              ((pFVar1->SphereElems).AllocatorInstance.Data + (longlong)iVar14 * 0x50,
               (FKSphereElem *)(param_1->SphereElems).AllocatorInstance.Data,iVar9);
  }
  pTVar2 = &(this->AggGeom).BoxElems;
  if (pTVar2 == &param_1->BoxElems) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  iVar9 = (param_1->BoxElems).ArrayNum;
  if (iVar9 != 0) {
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x70,8,iVar9,&pTVar2->AllocatorInstance,&(this->AggGeom).BoxElems.ArrayNum,
                        &(this->AggGeom).BoxElems.ArrayMax);
    ConstructItems<FKBoxElem,FKBoxElem,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x70,
               (FKBoxElem *)(param_1->BoxElems).AllocatorInstance.Data,iVar9);
  }
  pTVar3 = &(this->AggGeom).SphylElems;
  if (pTVar3 == &param_1->SphylElems) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  iVar9 = (param_1->SphylElems).ArrayNum;
  if (iVar9 != 0) {
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x68,8,iVar9,&pTVar3->AllocatorInstance,&(this->AggGeom).SphylElems.ArrayNum
                        ,&(this->AggGeom).SphylElems.ArrayMax);
    ConstructItems<FKSphylElem,FKSphylElem,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 0x68,
               (FKSphylElem *)(param_1->SphylElems).AllocatorInstance.Data,iVar9);
  }
  iVar9 = (this->AggGeom).ConvexElems.ArrayNum;
  uVar18 = (ulonglong)iVar9;
  pTVar4 = &(this->AggGeom).ConvexElems;
  piVar5 = &(this->AggGeom).ConvexElems.ArrayNum;
  if (pTVar4 == &param_1->ConvexElems) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  iVar14 = (param_1->ConvexElems).ArrayNum;
  if (iVar14 != 0) {
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x100,0x10,iVar14,&pTVar4->AllocatorInstance,piVar5,
                        &(this->AggGeom).ConvexElems.ArrayMax);
    ConstructItems<FKConvexElem,FKConvexElem,int>
              ((pTVar4->AllocatorInstance).Data + (longlong)iVar15 * 0x100,
               (FKConvexElem *)(param_1->ConvexElems).AllocatorInstance.Data,iVar14);
  }
  iVar14 = *piVar5;
  if (iVar9 < iVar14) {
    lVar19 = uVar18 << 8;
    do {
      uVar17 = (uint)uVar18;
      uVar16 = 0;
      if ((int)uVar17 < iVar14) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      pFVar10 = (pTVar4->AllocatorInstance).Data;
      puVar11 = *(undefined8 **)(pFVar10 + lVar19 + 0xf0);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(pFVar10 + lVar19 + 0xf0) = 0;
        LOCK();
        piVar6 = (int *)(puVar11 + 1);
        iVar9 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if ((iVar9 == 1) && (*(int *)((longlong)puVar11 + 0xc) == 0)) {
          (**(code **)*puVar11)(puVar11,1);
        }
      }
      iVar14 = *piVar5;
      uVar18 = (ulonglong)(uVar17 + 1);
      lVar19 = lVar19 + 0x100;
    } while ((int)(uVar17 + 1) < iVar14);
  }
  pTVar7 = &(this->AggGeom).LevelSetElems;
  if (pTVar7 == &param_1->LevelSetElems) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  iVar9 = (param_1->LevelSetElems).ArrayNum;
  if (iVar9 != 0) {
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xa0,0x10,iVar9,&pTVar7->AllocatorInstance,
                        &(this->AggGeom).LevelSetElems.ArrayNum,
                        &(this->AggGeom).LevelSetElems.ArrayMax);
    ConstructItems<FKLevelSetElem,FKLevelSetElem,int>
              ((pTVar7->AllocatorInstance).Data + (longlong)iVar14 * 0xa0,
               (FKLevelSetElem *)(param_1->LevelSetElems).AllocatorInstance.Data,iVar9);
  }
  pTVar8 = &(this->AggGeom).MLLevelSetElems;
  if (pTVar8 == &param_1->MLLevelSetElems) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  iVar9 = (param_1->MLLevelSetElems).ArrayNum;
  if (iVar9 != 0) {
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x50,8,iVar9,&pTVar8->AllocatorInstance,
                        &(this->AggGeom).MLLevelSetElems.ArrayNum,
                        &(this->AggGeom).MLLevelSetElems.ArrayMax);
    ConstructItems<FKMLLevelSetElem,FKMLLevelSetElem,int>
              ((pTVar8->AllocatorInstance).Data + (longlong)iVar14 * 0x50,
               (FKMLLevelSetElem *)(param_1->MLLevelSetElems).AllocatorInstance.Data,iVar9);
  }
  return;
}

// AddCollisionFrom @ 1482612a0

void __thiscall UBodySetup::AddCollisionFrom(UBodySetup *this,UBodySetup *param_1)

{
  AddCollisionFrom(this,&param_1->AggGeom);
  return;
}

// AddShapesToRigidActor_AssumesLocked @ 148265d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBodySetup::AddShapesToRigidActor_AssumesLocked
          (UBodySetup *this,FBodyInstance *param_1,TVector<double> *param_2,
          UPhysicalMaterial *param_3,
          TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> *param_5,
          FBodyCollisionData *param_6,TTransform<double> *param_7,
          TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> *param_8)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  TEnumAsByte<ECollisionTraceFlag> TVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_AddShapesToActor> FVar13;
  undefined7 extraout_var;
  TTransform<double> *pTVar14;
  FThreadSafeStaticStat<FStat_STAT_AddGeomToSolver> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FNameEntryId FVar18;
  FName FVar19;
  FName FVar20;
  FNameEntryId FVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStackY_368 [32];
  FColor_u_0 local_304;
  FName local_300;
  FName local_2f8;
  FColor_u_0 local_2f0 [2];
  FName local_2e8;
  FName local_2d8;
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> *local_2d0;
  FName local_2c8;
  TTransform<double> *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  FBodyCollisionData *local_2a8;
  UPhysicalMaterial *local_2a0;
  LARGE_INTEGER local_298;
  LARGE_INTEGER local_290;
  FStatMessage local_288;
  FStatMessage local_278;
  FScriptContainerElement *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  FPhysicalMaterialMaskParams *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  FName local_248;
  FName local_240;
  FGeometryAddParams local_238;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_2a8 = param_6;
  local_2b8 = param_7;
  local_2d0 = param_8;
  FVar21.Value = 0;
  FVar13 = StatPtr_STAT_AddShapesToActor;
  local_2a0 = param_3;
  if (StatPtr_STAT_AddShapesToActor == (FThreadSafeStaticStat<FStat_STAT_AddShapesToActor>)0x0) {
    pFVar12 = ::FName::FName(&local_248,"STAT_AddShapesToActor");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_AddShapesToActor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddShapesToActor,*pFVar12,
                        L"AddShapesToRigidActor","STATGROUP_Physics","STATCAT_Advanced",L"Physics",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar13;
  bVar6 = false;
  bVar9 = false;
  local_2c8.ComparisonIndex.Value = 0;
  local_2c8.Number = 0;
  if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2f0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2f0[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2d8.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_2d8.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2d8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                   ,0x2b5);
        bVar6 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_300 = FVar20;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar7 = true;
      goto LAB_148265e83;
    }
  }
  bVar7 = false;
  FVar20 = local_2c8;
LAB_148265e83:
  if ((param_1 == (FBodyInstance *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("OwningInstance",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                          ,0x2b7,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (**(code **)(this->_padding_ + 0x2b0))(this);
  uVar23 = (uint)*(undefined8 *)&param_2->field0_0x0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar24 = (uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar24,uVar23) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar24,uVar23) == __real_3f1a36e2e0000000) &&
      (uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8),
      uVar23 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar24 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar24,uVar23) < __real_3f1a36e2e0000000 ||
      (double)CONCAT44(uVar24,uVar23) == __real_3f1a36e2e0000000)) &&
     (uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10),
     uVar23 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar24 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar24,uVar23) < __real_3f1a36e2e0000000 ||
     (double)CONCAT44(uVar24,uVar23) == __real_3f1a36e2e0000000)) {
    (param_2->field0_0x0)._s_0.X = 0.10000000149011612;
    (param_2->field0_0x0)._s_0.Y = 0.10000000149011612;
    (param_2->field0_0x0)._s_0.Z = 0.10000000149011612;
  }
  uVar25 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar26 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_238.bDoubleSided = this->bDoubleSidedGeometry;
  local_238.ChaosTriMeshes.DataPtr = (TSharedPtr<Chaos::FTriangleMeshImplicitObject,1> *)0x0;
  local_238.ChaosTriMeshes.ArrayNum = 0;
  local_238.LocalTransform.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_238.LocalTransform.Rotation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_238.LocalTransform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_238.LocalTransform.Translation.XY.m128d_f64[1] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_238.LocalTransform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_238.LocalTransform.Translation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_238.LocalTransform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_238.LocalTransform.Scale3D.XY.m128d_f64[1] =
       (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_238.LocalTransform.Scale3D.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_238.LocalTransform.Scale3D.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_238.CollisionData.CollisionFilterData.SimFilter.Word0 =
       (local_2a8->CollisionFilterData).SimFilter.Word0;
  local_238.CollisionData.CollisionFilterData.SimFilter.Word1 =
       (local_2a8->CollisionFilterData).SimFilter.Word1;
  local_238.CollisionData.CollisionFilterData.SimFilter.Word2 =
       (local_2a8->CollisionFilterData).SimFilter.Word2;
  local_238.CollisionData.CollisionFilterData.SimFilter.Word3 =
       (local_2a8->CollisionFilterData).SimFilter.Word3;
  local_238.CollisionData.CollisionFilterData.QuerySimpleFilter.Word0 =
       (local_2a8->CollisionFilterData).QuerySimpleFilter.Word0;
  local_238.CollisionData.CollisionFilterData.QuerySimpleFilter.Word1 =
       (local_2a8->CollisionFilterData).QuerySimpleFilter.Word1;
  local_238.CollisionData.CollisionFilterData.QuerySimpleFilter.Word2 =
       (local_2a8->CollisionFilterData).QuerySimpleFilter.Word2;
  local_238.CollisionData.CollisionFilterData.QuerySimpleFilter.Word3 =
       (local_2a8->CollisionFilterData).QuerySimpleFilter.Word3;
  local_238.CollisionData.CollisionFilterData.QueryComplexFilter.Word0 =
       (local_2a8->CollisionFilterData).QueryComplexFilter.Word0;
  local_238.CollisionData.CollisionFilterData.QueryComplexFilter.Word1 =
       (local_2a8->CollisionFilterData).QueryComplexFilter.Word1;
  local_238.CollisionData.CollisionFilterData.QueryComplexFilter.Word2 =
       (local_2a8->CollisionFilterData).QueryComplexFilter.Word2;
  local_238.CollisionData.CollisionFilterData.QueryComplexFilter.Word3 =
       (local_2a8->CollisionFilterData).QueryComplexFilter.Word3;
  local_238.CollisionData.CollisionFlags = local_2a8->CollisionFlags;
  local_238.LocalTransform.Rotation.XY.m128d_f64[1]._0_4_ = uVar25;
  local_238.LocalTransform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_238.LocalTransform.Rotation.XY.m128d_f64[1]._4_4_ = uVar26;
  local_238.WorldTransform.Rotation.XY.m128d_f64[1]._0_4_ = uVar25;
  local_238.WorldTransform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_238.WorldTransform.Rotation.XY.m128d_f64[1]._4_4_ = uVar26;
  local_238.WorldTransform.Rotation.ZW.m128d_f64[0] =
       local_238.LocalTransform.Rotation.ZW.m128d_f64[0];
  local_238.WorldTransform.Rotation.ZW.m128d_f64[1] =
       local_238.LocalTransform.Rotation.ZW.m128d_f64[1];
  local_238.WorldTransform.Translation.XY.m128d_f64[0] =
       local_238.LocalTransform.Translation.XY.m128d_f64[0];
  local_238.WorldTransform.Translation.XY.m128d_f64[1] =
       local_238.LocalTransform.Translation.XY.m128d_f64[1];
  local_238.WorldTransform.Translation.ZW.m128d_f64[0] =
       local_238.LocalTransform.Translation.ZW.m128d_f64[0];
  local_238.WorldTransform.Translation.ZW.m128d_f64[1] =
       local_238.LocalTransform.Translation.ZW.m128d_f64[1];
  local_238.WorldTransform.Scale3D.XY.m128d_f64[0] =
       local_238.LocalTransform.Scale3D.XY.m128d_f64[0];
  local_238.WorldTransform.Scale3D.XY.m128d_f64[1] =
       local_238.LocalTransform.Scale3D.XY.m128d_f64[1];
  local_238.WorldTransform.Scale3D.ZW.m128d_f64[0] =
       local_238.LocalTransform.Scale3D.ZW.m128d_f64[0];
  local_238.WorldTransform.Scale3D.ZW.m128d_f64[1] =
       local_238.LocalTransform.Scale3D.ZW.m128d_f64[1];
  TVar11 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)this);
  local_238.Scale.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_238.Scale.field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_238.Scale.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_238.CollisionTraceType = (ECollisionTraceFlag)*(byte *)CONCAT71(extraout_var,TVar11.Value);
  local_238.SimpleMaterial = local_2a0;
  local_268 = (param_4->AllocatorInstance).Data;
  iStack_260 = param_4->ArrayNum;
  if ((iStack_260 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_238.ComplexMaterials._12_4_ = uStack_25c;
  local_238.ComplexMaterials.ArrayNum = iStack_260;
  local_258 = (FPhysicalMaterialMaskParams *)(param_5->AllocatorInstance).Data;
  iVar3 = param_5->ArrayNum;
  local_238.ComplexMaterials.DataPtr = (UPhysicalMaterial **)local_268;
  if ((iVar3 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_238.ComplexMaterialMasks._12_4_ = uStack_24c;
  local_238.ComplexMaterialMasks.ArrayNum = iVar3;
  local_238.LocalTransform.Rotation.XY.m128d_f64 = *&(local_2b8->Rotation).XY.m128d_f64;
  local_238.ComplexMaterialMasks.DataPtr = local_258;
  local_238.LocalTransform.Rotation.ZW.m128d_f64[0] = (local_2b8->Rotation).ZW.m128d_f64[0];
  local_238.LocalTransform.Rotation.ZW.m128d_f64[1] = (local_2b8->Rotation).ZW.m128d_f64[1];
  local_238.LocalTransform.Translation.ZW.m128d_f64[0] = (local_2b8->Translation).ZW.m128d_f64[0];
  local_238.LocalTransform.Translation.ZW.m128d_f64[1] = (local_2b8->Translation).ZW.m128d_f64[1];
  local_238.LocalTransform.Translation.XY.m128d_f64[0] = (local_2b8->Translation).XY.m128d_f64[0];
  local_238.LocalTransform.Translation.XY.m128d_f64[1] = (local_2b8->Translation).XY.m128d_f64[1];
  local_238.LocalTransform.Scale3D.ZW.m128d_f64[0] = (local_2b8->Scale3D).ZW.m128d_f64[0];
  local_238.LocalTransform.Scale3D.ZW.m128d_f64[1] = (local_2b8->Scale3D).ZW.m128d_f64[1];
  local_238.LocalTransform.Scale3D.XY.m128d_f64[0] = (local_2b8->Scale3D).XY.m128d_f64[0];
  local_238.LocalTransform.Scale3D.XY.m128d_f64[1] = (local_2b8->Scale3D).XY.m128d_f64[1];
  iStack_250 = iVar3;
  pTVar14 = FBodyInstance::GetUnrealWorldTransform(param_1,&local_c8,true,false);
  iStack_2b0 = (this->TriMeshGeometries).ArrayNum;
  local_238.WorldTransform.Rotation.XY.m128d_f64 = *&(pTVar14->Rotation).XY.m128d_f64;
  local_238.WorldTransform.Rotation.ZW.m128d_f64[0] = (pTVar14->Rotation).ZW.m128d_f64[0];
  local_238.WorldTransform.Rotation.ZW.m128d_f64[1] = (pTVar14->Rotation).ZW.m128d_f64[1];
  local_238.WorldTransform.Translation.XY.m128d_f64[0] = (pTVar14->Translation).XY.m128d_f64[0];
  local_238.WorldTransform.Translation.XY.m128d_f64[1] = (pTVar14->Translation).XY.m128d_f64[1];
  local_238.WorldTransform.Translation.ZW.m128d_f64[0] = (pTVar14->Translation).ZW.m128d_f64[0];
  local_238.WorldTransform.Translation.ZW.m128d_f64[1] = (pTVar14->Translation).ZW.m128d_f64[1];
  local_238.WorldTransform.Scale3D.XY.m128d_f64[0] = (pTVar14->Scale3D).XY.m128d_f64[0];
  local_238.WorldTransform.Scale3D.XY.m128d_f64[1] = (pTVar14->Scale3D).XY.m128d_f64[1];
  local_238.WorldTransform.Scale3D.ZW.m128d_f64[0] = (pTVar14->Scale3D).ZW.m128d_f64[0];
  local_238.WorldTransform.Scale3D.ZW.m128d_f64[1] = (pTVar14->Scale3D).ZW.m128d_f64[1];
  local_238.Geometry = &this->AggGeom;
  local_2b8 = (TTransform<double> *)(this->TriMeshGeometries).AllocatorInstance.Data;
  if ((iStack_2b0 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_238.TriMeshGeometries._12_4_ = uStack_2ac;
  local_238.TriMeshGeometries.ArrayNum = iStack_2b0;
  local_238.TriMeshGeometries.DataPtr =
       (TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)local_2b8;
  FVar15 = StatPtr_STAT_AddGeomToSolver;
  if (StatPtr_STAT_AddGeomToSolver == (FThreadSafeStaticStat<FStat_STAT_AddGeomToSolver>)0x0) {
    pFVar12 = ::FName::FName(&local_240,"STAT_AddGeomToSolver");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_AddGeomToSolver>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddGeomToSolver,*pFVar12,
                        L"AddGeomToSolver","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar15;
  bVar10 = false;
  bVar8 = false;
  local_2e8.ComparisonIndex.Value = 0;
  local_2e8.Number = 0;
  FVar18 = FVar4.ComparisonIndex.Value;
  uVar23 = FVar4.Number;
  if ((FVar18.Value == 0) && (uVar23 == 0)) {
    local_300 = (FName)FBodyInstance::GetPhysicsActor(param_1);
    FPhysInterface_Chaos::AddGeometry
              ((FSingleParticlePhysicsProxy **)&local_300,&local_238,local_2d0);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_304.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_304._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar10 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2f8.ComparisonIndex.Value = FVar18.Value;
        local_2f8.Number = uVar23;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2f8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                   ,0x2d3);
        bVar10 = true;
        bVar8 = true;
      }
    }
    bVar22 = FThreadStats::bPrimaryEnable != false;
    FVar19 = local_2e8;
    if (bVar22) {
      local_2f8.ComparisonIndex.Value = FVar18.Value;
      local_2f8.Number = uVar23;
      local_2e8 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      FVar19 = FVar4;
      FVar21.Value = local_2e8.ComparisonIndex.Value;
    }
    local_300 = (FName)FBodyInstance::GetPhysicsActor(param_1);
    FPhysInterface_Chaos::AddGeometry
              ((FSingleParticlePhysicsProxy **)&local_300,&local_238,local_2d0);
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar22) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
        local_288.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
        local_288.NameAndInfo.Index.Value = FVar21.Value;
        QueryPerformanceCounter(&local_298);
        local_288.StatData.Pad[4] = '\0';
        local_288.StatData.Pad[5] = '\0';
        local_288.StatData.Pad[6] = '\0';
        local_288.StatData.Pad[7] = '\0';
        local_288.StatData.Pad[0] = local_298.s.LowPart._0_1_;
        local_288.StatData.Pad[1] = local_298.s.LowPart._1_1_;
        local_288.StatData.Pad[2] = local_298.s.LowPart._2_1_;
        local_288.StatData.Pad[3] = local_298.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar16,&local_288);
        piVar1 = &pFVar16->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_278.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_278.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_290);
      local_278.StatData.Pad[4] = '\0';
      local_278.StatData.Pad[5] = '\0';
      local_278.StatData.Pad[6] = '\0';
      local_278.StatData.Pad[7] = '\0';
      local_278.StatData.Pad[0] = local_290.s.LowPart._0_1_;
      local_278.StatData.Pad[1] = local_290.s.LowPart._1_1_;
      local_278.StatData.Pad[2] = local_290.s.LowPart._2_1_;
      local_278.StatData.Pad[3] = local_290.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_278);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  return;
}

// BeginDestroy @ 1482682f0

void __thiscall UBodySetup::BeginDestroy(UBodySetup *this)

{
  UObject::BeginDestroy((UObject *)this);
  FKAggregateGeom::FreeRenderInfo(&this->AggGeom);
  return;
}

// CalcUVAtLocation @ 14826a2c0

bool __thiscall
UBodySetup::CalcUVAtLocation
          (UBodySetup *this,TVector<double> *param_1,int param_2,int param_3,
          TVector2<double> *param_4)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80 [3];
  
  lVar19 = (longlong)param_3;
  if ((param_3 < 0) || ((this->UVInfo).VertUVs.ArrayNum <= param_3)) {
    return false;
  }
  uVar14 = param_2 * 3;
  uVar3 = uVar14 + 2;
  if (((int)uVar3 < 0) || ((this->UVInfo).IndexBuffer.ArrayNum <= (int)uVar3)) {
    bVar12 = false;
  }
  else {
    uVar15 = 0;
    if ((int)uVar14 < (this->UVInfo).IndexBuffer.ArrayNum) {
      uVar15 = ~uVar14 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    uVar17 = uVar14 + 1;
    uVar14 = *(uint *)((this->UVInfo).IndexBuffer.AllocatorInstance.Data + (longlong)(int)uVar14 * 4
                      );
    lVar20 = (longlong)(int)uVar14;
    uVar15 = 0;
    if ((int)uVar17 < (this->UVInfo).IndexBuffer.ArrayNum) {
      uVar15 = ~uVar17 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    uVar15 = *(uint *)((this->UVInfo).IndexBuffer.AllocatorInstance.Data + (longlong)(int)uVar17 * 4
                      );
    lVar18 = (longlong)(int)uVar15;
    uVar17 = 0;
    if ((int)uVar3 < (this->UVInfo).IndexBuffer.ArrayNum) {
      uVar17 = ~uVar3 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    uVar3 = *(uint *)((this->UVInfo).IndexBuffer.AllocatorInstance.Data + (longlong)(int)uVar3 * 4);
    uVar17 = 0;
    if ((int)uVar14 < (this->UVInfo).VertPositions.ArrayNum) {
      uVar17 = ~uVar14 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    pFVar4 = (this->UVInfo).VertPositions.AllocatorInstance.Data;
    pFVar1 = pFVar4 + lVar20 * 0x18;
    local_80[0]._0_8_ = *(undefined8 *)pFVar1;
    local_80[0]._8_8_ = *(undefined8 *)(pFVar1 + 8);
    local_80[0]._16_8_ = *(undefined8 *)(pFVar4 + lVar20 * 0x18 + 0x10);
    uVar17 = 0;
    if ((int)uVar15 < (this->UVInfo).VertPositions.ArrayNum) {
      uVar17 = ~uVar15 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    pFVar4 = (this->UVInfo).VertPositions.AllocatorInstance.Data;
    pFVar1 = pFVar4 + lVar18 * 0x18;
    local_98._s_0.X = (double)*(undefined8 *)pFVar1;
    local_98._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
    local_98._s_0.Z = (double)*(undefined8 *)(pFVar4 + lVar18 * 0x18 + 0x10);
    uVar17 = 0;
    if ((int)uVar3 < (this->UVInfo).VertPositions.ArrayNum) {
      uVar17 = ~uVar3 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    pFVar4 = (this->UVInfo).VertPositions.AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)(int)uVar3 * 0x18;
    local_b0._s_0.X = (double)*(undefined8 *)pFVar1;
    local_b0._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
    local_b0._s_0.Z = (double)*(undefined8 *)(pFVar4 + (longlong)(int)uVar3 * 0x18 + 0x10);
    uVar16 = (uint)~param_3 >> 0x1f;
    uVar17 = 0;
    if (param_3 < (this->UVInfo).VertUVs.ArrayNum) {
      uVar17 = uVar16;
    }
    if ((uVar17 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    pFVar1 = (this->UVInfo).VertUVs.AllocatorInstance.Data;
    uVar17 = 0;
    if ((int)uVar14 < *(int *)(pFVar1 + lVar19 * 0x10 + 8)) {
      uVar17 = ~uVar14 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    pdVar2 = (double *)(*(longlong *)(pFVar1 + lVar19 * 0x10) + lVar20 * 0x10);
    dVar6 = *pdVar2;
    dVar7 = pdVar2[1];
    uVar14 = 0;
    if (param_3 < (this->UVInfo).VertUVs.ArrayNum) {
      uVar14 = uVar16;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    pFVar1 = (this->UVInfo).VertUVs.AllocatorInstance.Data;
    uVar14 = 0;
    if ((int)uVar15 < *(int *)(pFVar1 + lVar19 * 0x10 + 8)) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    pdVar2 = (double *)(*(longlong *)(pFVar1 + lVar19 * 0x10) + lVar18 * 0x10);
    dVar8 = *pdVar2;
    dVar9 = pdVar2[1];
    uVar14 = 0;
    if (param_3 < (this->UVInfo).VertUVs.ArrayNum) {
      uVar14 = uVar16;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    pFVar1 = (this->UVInfo).VertUVs.AllocatorInstance.Data;
    uVar14 = 0;
    if ((int)uVar3 < *(int *)(pFVar1 + lVar19 * 0x10 + 8)) {
      uVar14 = ~uVar3 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    pdVar2 = (double *)(*(longlong *)(pFVar1 + lVar19 * 0x10) + (longlong)(int)uVar3 * 0x10);
    dVar10 = *pdVar2;
    dVar11 = pdVar2[1];
    FMath::ComputeBaryCentric2D
              ((TVector<double> *)&local_c8._s_0,param_1,(TVector<double> *)&local_80[0]._s_0,
               (TVector<double> *)&local_98._s_0,(TVector<double> *)&local_b0._s_0);
    (param_4->field0_0x0)._s_0.X =
         dVar8 * local_c8._s_0.Y + dVar6 * local_c8._s_0.X + dVar10 * local_c8._s_0.Z;
    (param_4->field0_0x0)._s_0.Y =
         dVar9 * local_c8._s_0.Y + dVar7 * local_c8._s_0.X + dVar11 * local_c8._s_0.Z;
    bVar12 = true;
  }
  return bVar12;
}

// CalculateMass @ 14826a8a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall UBodySetup::CalculateMass(UBodySetup *this,UPrimitiveComponent *param_1)

{
  int iVar1;
  double _Y;
  UClass *pUVar2;
  FBodyInstance *pFVar3;
  UPhysicalMaterial *pUVar4;
  FBodyInstance *this_00;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  longlong local_68;
  undefined8 uStack_60;
  double local_58;
  
  dVar7 = __real_3ff0000000000000;
  local_58 = __real_3ff0000000000000;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  if (param_1 == (UPrimitiveComponent *)0x0) {
    param_1 = (UPrimitiveComponent *)this->_padding_;
    if (param_1 != (UPrimitiveComponent *)0x0) {
      pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) goto LAB_14826a913;
    }
    param_1 = (UPrimitiveComponent *)0x0;
  }
LAB_14826a913:
  this_00 = &this->DefaultInstance;
  if (param_1 != (UPrimitiveComponent *)0x0) {
    local_68 = *(longlong *)&param_1->field_0x230;
    uStack_60 = *(undefined8 *)&param_1->field_0x238;
    this_00 = &param_1->BodyInstance;
    local_58 = *(double *)&param_1->field_0x240;
    pUVar2 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      pFVar3 = (FBodyInstance *)
               (**(code **)(*(longlong *)param_1 + 0x818))
                         (param_1,this->_padding_,
                          CONCAT71((int7)((ulonglong)&pUVar2->_padding_ >> 8),1),0xffffffff);
      if (pFVar3 != (FBodyInstance *)0x0) {
        this_00 = pFVar3;
      }
    }
  }
  if ((this_00->_padding_ & 2) == 0) {
    pUVar4 = FBodyInstance::GetSimplePhysicalMaterial(this_00);
    fVar5 = this_00->MassScale;
    fVar8 = __real_3f800000;
    fVar9 = __real_3f400000;
    if (pUVar4 != (UPhysicalMaterial *)0x0) {
      fVar8 = pUVar4->Density * __real_3a83126f;
      fVar9 = pUVar4->RaiseMassToPower;
      if (fVar8 <= __real_38bcbe62) {
        fVar8 = __real_38bcbe62;
      }
    }
    dVar6 = (double)(**(code **)(this->_padding_ + 0x2c0))(this,&local_68);
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
    }
    _Y = (double)fVar9;
    if (dVar7 <= (double)fVar9) {
      _Y = dVar7;
    }
    if (_Y <= __real_3f1a36e2e0000000) {
      _Y = __real_3f1a36e2e0000000;
    }
    dVar7 = pow(dVar6 * (double)fVar8,_Y);
    fVar5 = (float)(dVar7 * (double)fVar5);
  }
  else {
    fVar5 = this_00->MassInKgOverride;
  }
  return fVar5;
}

// ClearPhysicsMeshes @ 14826db90

void __thiscall UBodySetup::ClearPhysicsMeshes(UBodySetup *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  iVar7 = (this->AggGeom).ConvexElems.ArrayNum;
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar8 < iVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->AggGeom).ConvexElems.AllocatorInstance.Data;
      puVar3 = *(undefined8 **)(pFVar2 + uVar10 + 0xf0);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(pFVar2 + uVar10 + 0xf0) = 0;
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar7 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      iVar7 = (this->AggGeom).ConvexElems.ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x100;
    } while ((int)(uVar8 + 1) < iVar7);
  }
  piVar1 = &(this->TriMeshGeometries).ArrayMax;
  pFVar2 = (this->TriMeshGeometries).AllocatorInstance.Data;
  iVar7 = (this->TriMeshGeometries).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int>
              ((TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)pFVar2,iVar7);
    (this->TriMeshGeometries).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->TriMeshGeometries).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int>
              ((TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)pFVar2,iVar7);
    (this->TriMeshGeometries).ArrayNum = 0;
  }
  this->bCreatedPhysicsMeshes = '\0';
  FKAggregateGeom::FreeRenderInfo(&this->AggGeom);
  return;
}

// CopyBodyPropertiesFrom @ 148270b10

void __thiscall UBodySetup::CopyBodyPropertiesFrom(UBodySetup *this,UBodySetup *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  UPhysicalMaterial *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  
  FKAggregateGeom::FreeRenderInfo(&this->AggGeom);
  FKAggregateGeom::CloneAgg(&this->AggGeom,&param_1->AggGeom);
  iVar11 = (this->AggGeom).ConvexElems.ArrayNum;
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < iVar11) {
    do {
      uVar8 = (uint)uVar9;
      uVar7 = 0;
      if ((int)uVar8 < iVar11) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (this->AggGeom).ConvexElems.AllocatorInstance.Data;
      puVar3 = *(undefined8 **)(pFVar2 + uVar10 + 0xf0);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(pFVar2 + uVar10 + 0xf0) = 0;
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar11 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      iVar11 = (this->AggGeom).ConvexElems.ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x100;
    } while ((int)(uVar8 + 1) < iVar11);
  }
  FBodyInstance::CopyBodyInstancePropertiesFrom(&this->DefaultInstance,&param_1->DefaultInstance);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->PhysMaterial).field0_0x0.DebugPtr, pUVar4 != (UPhysicalMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->PhysMaterial).field0_0x0 = (param_1->PhysMaterial).field0_0x0;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->field_0xd8 = (this->field_0xd8 ^ param_1->field_0xd8) & 8 ^ this->field_0xd8;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  return;
}

// CreatePhysicsMeshes @ 148276830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBodySetup::CreatePhysicsMeshes(UBodySetup *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  FChaosDerivedDataReader<float,3> *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  bool bVar24;
  int iVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_CreatePhysicsMeshes> FVar27;
  FBulkData *pFVar28;
  FPackageFileVersion FVar29;
  uint uVar30;
  uint uVar31;
  FNameEntryId FVar32;
  FName FVar33;
  FKConvexElem *pFVar34;
  uint uVar35;
  ulonglong uVar36;
  FKConvexElem *this_00;
  ulonglong uVar37;
  longlong lVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FName local_res20;
  FChaosDerivedDataReader<float,3> local_248;
  FCookHelper local_1b8;
  
  if (this->bCreatedPhysicsMeshes != '\0' || this->bNeverNeedsCookedCollisionData != '\0') {
    return;
  }
  uVar36 = 0;
  FVar27 = StatPtr_STAT_CreatePhysicsMeshes;
  if (StatPtr_STAT_CreatePhysicsMeshes == (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsMeshes>)0x0
     ) {
    pFVar26 = ::FName::FName(&local_res20,"STAT_CreatePhysicsMeshes");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsMeshes>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreatePhysicsMeshes,*pFVar26,
                        L"Create Physics Meshes","STATGROUP_Physics","STATCAT_Advanced",L"Physics",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar27;
  bVar17 = false;
  bVar19 = false;
  FVar32 = FVar33.ComparisonIndex.Value;
  uVar30 = FVar33.Number;
  if ((FVar32.Value == 0) && (uVar30 == 0)) {
LAB_14827699f:
    bVar18 = false;
    FVar33.ComparisonIndex.Value = 0;
    FVar33.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar17 = false;
      bVar19 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar32.Value;
        local_res18.Number = uVar30;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                   ,0x19b);
        bVar17 = true;
        bVar19 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14827699f;
    local_res8 = FVar32.Value;
    uStackX_c = uVar30;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar18 = true;
  }
  pFVar7 = (this->ChaosDerivedDataReader).Ptr;
  bVar16 = true;
  if (pFVar7 == (FChaosDerivedDataReader<float,3> *)0x0) {
    pFVar28 = (FBulkData *)GetCookedFormatData(this);
    if (pFVar28 == (FBulkData *)0x0) {
      bVar24 = IsRuntime(this);
      if (!bVar24) goto LAB_148276aad;
      Chaos::FCookHelper::FCookHelper(&local_1b8,this);
      Chaos::FCookHelper::Cook(&local_1b8);
      FinishCreatingPhysicsMeshes_Chaos(this,&local_1b8);
      Chaos::FCookHelper::~FCookHelper(&local_1b8);
    }
    else {
      if ((pFVar28->BulkMeta).Data[0xb] != '\0') goto LAB_148276aad;
      FChaosDerivedDataReader<float,3>::FChaosDerivedDataReader<float,3>(&local_248,pFVar28);
      FinishCreatingPhysicsMeshes_Chaos
                (this,&local_248.ConvexGeometries,&local_248.TriMeshGeometries,&local_248.UVInfo,
                 &local_248.FaceRemap);
      FChaosDerivedDataReader<float,3>::~FChaosDerivedDataReader<float,3>(&local_248);
    }
    bVar16 = false;
  }
  else {
    FinishCreatingPhysicsMeshes_Chaos
              (this,&pFVar7->ConvexGeometries,&pFVar7->TriMeshGeometries,&pFVar7->UVInfo,
               &pFVar7->FaceRemap);
    pFVar7 = (this->ChaosDerivedDataReader).Ptr;
    bVar16 = false;
    if (pFVar7 != (FChaosDerivedDataReader<float,3> *)0x0) {
      (this->ChaosDerivedDataReader).Ptr = (FChaosDerivedDataReader<float,3> *)0x0;
      FChaosDerivedDataReader<float,3>::~FChaosDerivedDataReader<float,3>(pFVar7);
      ::operator_delete(pFVar7,0x88);
    }
  }
LAB_148276aad:
  FVar29 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  auVar23 = ___xmm_7ff00000000000007ff0000000000000;
  uVar22 = _UNK_15061cc8c;
  uVar21 = _UNK_15061cc88;
  uVar20 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((*(int *)FVar29 < 0x134) && (iVar25 = (this->AggGeom).ConvexElems.ArrayNum, 0 < iVar25)) {
    fVar43 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
    fVar44 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
    fVar45 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2];
    fVar46 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3];
    fVar47 = GlobalVectorConstants::FloatOne.m128_f32[0];
    fVar48 = GlobalVectorConstants::FloatOne.m128_f32[1];
    fVar49 = GlobalVectorConstants::FloatOne.m128_f32[2];
    fVar50 = GlobalVectorConstants::FloatOne.m128_f32[3];
    uVar37 = uVar36;
    do {
      uVar35 = (uint)uVar36;
      uVar31 = 0;
      if ((int)uVar35 < iVar25) {
        uVar31 = ~uVar35 >> 0x1f;
      }
      if (uVar31 == 0) {
        iVar25 = 0x506106c8;
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar24) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar47 = GlobalVectorConstants::FloatOne.m128_f32[0];
        fVar48 = GlobalVectorConstants::FloatOne.m128_f32[1];
        fVar49 = GlobalVectorConstants::FloatOne.m128_f32[2];
        fVar50 = GlobalVectorConstants::FloatOne.m128_f32[3];
        fVar43 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
        fVar44 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
        fVar45 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2];
        fVar46 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3];
      }
      pFVar8 = (this->AggGeom).ConvexElems.AllocatorInstance.Data;
      uVar51 = auVar23._0_4_;
      uVar52 = auVar23._4_4_;
      uVar53 = auVar23._8_4_;
      uVar54 = auVar23._12_4_;
      auVar5 = *(undefined1 (*) [16])(pFVar8 + uVar37 + 0xa0);
      auVar6 = *(undefined1 (*) [16])(pFVar8 + uVar37 + 0x90);
      pFVar1 = pFVar8 + uVar37 + 0xb0;
      pFVar2 = pFVar8 + uVar37 + 0xc0;
      pFVar3 = pFVar8 + uVar37 + 0xd0;
      pFVar4 = pFVar8 + uVar37 + 0xe0;
      dVar39 = auVar23._0_8_;
      dVar40 = auVar23._8_8_;
      lVar38 = -(ulonglong)
                ((double)CONCAT44(uVar54 & auVar5._12_4_,uVar53 & auVar5._8_4_) == dVar40);
      auVar10._8_4_ = (int)lVar38;
      auVar10._0_8_ =
           -(ulonglong)((double)CONCAT44(uVar52 & auVar5._4_4_,uVar51 & auVar5._0_4_) == dVar39);
      auVar10._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      uVar31 = movmskpd(iVar25,auVar10);
      lVar38 = -(ulonglong)
                ((double)CONCAT44(uVar54 & auVar6._12_4_,uVar53 & auVar6._8_4_) == dVar40);
      auVar13._8_4_ = (int)lVar38;
      auVar13._0_8_ =
           -(ulonglong)((double)CONCAT44(uVar52 & auVar6._4_4_,uVar51 & auVar6._0_4_) == dVar39);
      auVar13._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      iVar25 = movmskpd((int)pFVar8,auVar13);
      if ((uVar31 & 0x3fffffff) == 0 && iVar25 == 0) {
        lVar38 = -(ulonglong)
                  ((double)CONCAT44(uVar54 & *(uint *)(pFVar2 + 0xc),uVar53 & *(uint *)(pFVar2 + 8))
                  == dVar40);
        auVar11._8_4_ = (int)lVar38;
        auVar11._0_8_ =
             -(ulonglong)
              ((double)CONCAT44(uVar52 & *(uint *)(pFVar2 + 4),uVar51 & *(uint *)pFVar2) == dVar39);
        auVar11._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
        uVar31 = movmskpd(0,auVar11);
        lVar38 = -(ulonglong)
                  ((double)CONCAT44(uVar54 & *(uint *)(pFVar1 + 0xc),uVar53 & *(uint *)(pFVar1 + 8))
                  == dVar40);
        auVar14._8_4_ = (int)lVar38;
        auVar14._0_8_ =
             -(ulonglong)
              ((double)CONCAT44(uVar52 & *(uint *)(pFVar1 + 4),uVar51 & *(uint *)pFVar1) == dVar39);
        auVar14._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
        iVar25 = movmskpd(iVar25,auVar14);
        if ((uVar31 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_148276c96;
        lVar38 = -(ulonglong)
                  ((double)CONCAT44(uVar54 & *(uint *)(pFVar4 + 0xc),uVar53 & *(uint *)(pFVar4 + 8))
                  == dVar40);
        auVar12._8_4_ = (int)lVar38;
        auVar12._0_8_ =
             -(ulonglong)
              ((double)CONCAT44(uVar52 & *(uint *)(pFVar4 + 4),uVar51 & *(uint *)pFVar4) == dVar39);
        auVar12._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
        uVar31 = movmskpd(0,auVar12);
        lVar38 = -(ulonglong)
                  ((double)CONCAT44(uVar54 & *(uint *)(pFVar3 + 0xc),uVar53 & *(uint *)(pFVar3 + 8))
                  == dVar40);
        auVar15._8_4_ = (int)lVar38;
        auVar15._0_8_ =
             -(ulonglong)
              ((double)CONCAT44(uVar52 & *(uint *)(pFVar3 + 4),uVar51 & *(uint *)pFVar3) == dVar39);
        auVar15._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
        iVar25 = movmskpd(iVar25,auVar15);
        if ((uVar31 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_148276c96;
        dVar39 = auVar5._0_8_ * auVar5._0_8_ + auVar6._0_8_ * auVar6._0_8_;
        dVar40 = auVar5._8_8_ * auVar5._8_8_ + auVar6._8_8_ * auVar6._8_8_;
        dVar42 = dVar40 + dVar39;
        dVar39 = dVar39 + dVar40;
        dVar40 = (double)fVar49 - dVar42;
        dVar41 = (double)fVar50 - dVar39;
        lVar38 = -(ulonglong)
                  ((double)fVar46 <
                  (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar22,
                                   SUB84(dVar41,0) & uVar21));
        auVar6._8_4_ = (int)lVar38;
        auVar6._0_8_ = -(ulonglong)
                        ((double)fVar45 <
                        (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar20,
                                         SUB84(dVar40,0) & uVar30));
        auVar6._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
        uVar31 = movmskpd(0,auVar6);
        dVar42 = (double)fVar47 - dVar42;
        dVar39 = (double)fVar48 - dVar39;
        lVar38 = -(ulonglong)
                  ((double)fVar44 <
                  (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar22,
                                   SUB84(dVar39,0) & uVar21));
        auVar5._8_4_ = (int)lVar38;
        auVar5._0_8_ = -(ulonglong)
                        ((double)fVar43 <
                        (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar20,
                                         SUB84(dVar42,0) & uVar30));
        auVar5._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
        iVar25 = movmskpd(iVar25,auVar5);
        if ((uVar31 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_148276c96;
      }
      else {
LAB_148276c96:
        uVar31 = 0;
        if ((int)uVar35 < (this->AggGeom).ConvexElems.ArrayNum) {
          uVar31 = ~uVar35 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FKConvexElem::SetTransform
                  ((FKConvexElem *)
                   ((this->AggGeom).ConvexElems.AllocatorInstance.Data +
                   (longlong)(int)uVar35 * 0x100),&UE::Math::TTransform<double>::Identity);
        fVar43 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
        fVar44 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
        fVar45 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2];
        fVar46 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3];
        fVar47 = GlobalVectorConstants::FloatOne.m128_f32[0];
        fVar48 = GlobalVectorConstants::FloatOne.m128_f32[1];
        fVar49 = GlobalVectorConstants::FloatOne.m128_f32[2];
        fVar50 = GlobalVectorConstants::FloatOne.m128_f32[3];
      }
      iVar25 = (this->AggGeom).ConvexElems.ArrayNum;
      uVar36 = (ulonglong)(uVar35 + 1);
      uVar37 = uVar37 + 0x100;
    } while ((int)(uVar35 + 1) < iVar25);
  }
  iVar25 = (this->AggGeom).ConvexElems.ArrayNum;
  this_00 = (FKConvexElem *)(this->AggGeom).ConvexElems.AllocatorInstance.Data;
  pFVar34 = this_00 + iVar25;
  while( true ) {
    if ((this->AggGeom).ConvexElems.ArrayNum != iVar25) {
      `TCheckedPointerIterator<FKConvexElem,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (this_00 == pFVar34) break;
    FKConvexElem::ComputeChaosConvexIndices(this_00,false);
    this_00 = this_00 + 1;
  }
  if (bVar16) {
    ClearPhysicsMeshes(this);
  }
  this->bCreatedPhysicsMeshes = '\x01';
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FThreadStats::AddMessage(FVar33,CycleScopeEnd);
  }
  return;
}

// CreatePhysicsMeshesAsync @ 148276e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBodySetup::CreatePhysicsMeshesAsync
          (UBodySetup *this,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FCookHelper *this_00;
  FCookHelper *this_01;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *this_02;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_PhysXCooking> FVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UBodySetup *local_res8;
  undefined8 *local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FDelegateAllocation local_100;
  undefined1 local_f0 [8];
  FDelegateAllocation local_e8;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FReadAccessScope local_68;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> local_50;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                         ,0x1d9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->CurrentCookHelper != (FCookHelper *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCookHelper == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                         ,0x1dc,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = ::operator_new(0x108);
  this_01 = (FCookHelper *)0x0;
  if (this_00 != (FCookHelper *)0x0) {
    this_01 = Chaos::FCookHelper::FCookHelper(this_00,this);
  }
  if ((((this_01->CookInfo).bCookTriMesh == false) &&
      ((this_01->CookInfo).bCookNonMirroredConvex == false)) &&
     ((this_01->CookInfo).bCookMirroredConvex == false)) {
    Chaos::FCookHelper::~FCookHelper(this_01);
    ::operator_delete(this_01,0x108);
    this_02 = TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::
              TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>(&local_50,param_1);
    bVar5 = IsInGameThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                           ,0x1fd,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this->CurrentCookHelper != (FCookHelper *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentCookHelper == AsyncPhysicsCookHelper",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                           ,0x20a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this->CurrentCookHelper = (FCookHelper *)0x0;
    ClearPhysicsMeshes(this);
    this->bCreatedPhysicsMeshes = '\x01';
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,&local_68);
    if ((*(int *)&this_02->field_0x10 != 0) &&
       (plVar3 = *(longlong **)&this_02->field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_02);
  }
  else {
    FVar7 = StatPtr_STAT_PhysXCooking;
    if (StatPtr_STAT_PhysXCooking == (FThreadSafeStaticStat<FStat_STAT_PhysXCooking>)0x0) {
      pFVar6 = ::FName::FName(&local_res20,"STAT_PhysXCooking");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_PhysXCooking>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysXCooking,*pFVar6,
                         L"BodySetup Cooking","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true
                         ,true,ST_int64,true,false,MCR_Invalid);
    }
    local_f0 = (undefined1  [8])0x0;
    local_e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
               (FWriteAccessScope *)&local_a8);
    local_90 = &local_e8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x40,&local_e8);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAUFCookHelper_Chaos__V__TDelegate___A6AX_N_ZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar8[1] = this_01;
      TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)(puVar8 + 2),param_1);
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[5] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUBodySetup____A6AXXZUFDefaultDelegateUserPolicy__PEAUFCookHelper_Chaos__V__TDelegate___A6AX_N_ZUFDefaultDelegateUserPolicy______6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[6] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 6),(FObjectPtr)&local_res8);
      puVar8[7] = FinishCreatePhysicsMeshesAsync;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_100.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_108,(FWriteAccessScope *)&local_88);
    local_70 = &local_100;
    puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_100);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar8 + 1),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f0);
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[4] = uVar9;
      *puVar8 = &
                ___7__TBaseRawMethodDelegateInstance__0A_UFCookHelper_Chaos____A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar8[6] = Chaos::FCookHelper::CookAsync;
      puVar8[5] = this_01;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_res18,
               (TStatIdData *)&local_108,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)FVar7,MainQueue);
    if (local_res18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_res18 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_res18)(local_res18,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_108,(FWriteAccessScope *)&local_d8);
    if ((local_100.DelegateSize != 0) &&
       (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_100,0,0,0x10);
      local_100.DelegateSize = 0;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_100.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
               (FWriteAccessScope *)&local_c0);
    if ((local_e8.DelegateSize != 0) &&
       (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e8,0,0,0x10);
      local_e8.DelegateSize = 0;
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    if (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_f0);
    this->CurrentCookHelper = this_01;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// FinishCreatePhysicsMeshesAsync @ 148281b80

void __thiscall
UBodySetup::FinishCreatePhysicsMeshesAsync
          (UBodySetup *this,FCookHelper *param_1,
          TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FReadAccessScope local_28;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                       ,0x1fd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1 == (FCookHelper *)0x0) || (param_1->bCanceled == (atomic<bool>)0x0)) {
    if (this->CurrentCookHelper != param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCookHelper == AsyncPhysicsCookHelper",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                         ,0x20a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->CurrentCookHelper = (FCookHelper *)0x0;
    if (param_1 == (FCookHelper *)0x0) {
      ClearPhysicsMeshes(this);
      this->bCreatedPhysicsMeshes = '\x01';
    }
    else {
      FinishCreatingPhysicsMeshes_Chaos(this,param_1);
      Chaos::FCookHelper::~FCookHelper(param_1);
      ::operator_delete(param_1,0x108);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_1 != (FCookHelper *)0x0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    if (this->CurrentCookHelper == param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCookHelper != AsyncPhysicsCookHelper",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                         ,0x203,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Chaos::FCookHelper::~FCookHelper(param_1);
    ::operator_delete(param_1,0x108);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// FinishCreatingPhysicsMeshes_Chaos @ 148281cf0

void __thiscall UBodySetup::FinishCreatingPhysicsMeshes_Chaos(UBodySetup *this,FCookHelper *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  TRefCountPtr<Chaos::FConvex> local_68;
  TRefCountPtr<Chaos::FTriangleMeshImplicitObject> local_60;
  TArray<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,TSizedDefaultAllocator<32>_> local_58;
  TArray<TRefCountPtr<Chaos::FConvex>,TSizedDefaultAllocator<32>_> local_48;
  
  pFVar8 = (param_1->SimpleImplicits).AllocatorInstance.Data;
  iVar2 = (param_1->SimpleImplicits).ArrayNum;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3 = pFVar8 + (longlong)iVar2 * 8;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  while( true ) {
    if ((param_1->SimpleImplicits).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar3) {
      pFVar8 = (param_1->ComplexImplicits).AllocatorInstance.Data;
      iVar2 = (param_1->ComplexImplicits).ArrayNum;
      pFVar3 = pFVar8 + (longlong)iVar2 * 8;
      while( true ) {
        if ((param_1->ComplexImplicits).ArrayNum != iVar2) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar8 == pFVar3) {
          piVar1 = &(param_1->SimpleImplicits).ArrayMax;
          pFVar3 = (param_1->SimpleImplicits).AllocatorInstance.Data;
          iVar2 = (param_1->SimpleImplicits).ArrayNum;
          if (*piVar1 < 0) {
            DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
                      ((TRefCountPtr<Chaos::FImplicitObject> *)pFVar3,iVar2);
            (param_1->SimpleImplicits).ArrayNum = 0;
            if (*piVar1 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,(ForAnyElementType *)param_1,0,piVar1);
            }
          }
          else {
            DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
                      ((TRefCountPtr<Chaos::FImplicitObject> *)pFVar3,iVar2);
            (param_1->SimpleImplicits).ArrayNum = 0;
          }
          piVar1 = &(param_1->ComplexImplicits).ArrayMax;
          pFVar3 = (param_1->ComplexImplicits).AllocatorInstance.Data;
          iVar2 = (param_1->ComplexImplicits).ArrayNum;
          if (*piVar1 < 0) {
            DestructItems<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int>
                      ((TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)pFVar3,iVar2);
            (param_1->ComplexImplicits).ArrayNum = 0;
            if (*piVar1 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,&(param_1->ComplexImplicits).AllocatorInstance,0,piVar1);
            }
          }
          else {
            DestructItems<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int>
                      ((TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)pFVar3,iVar2);
            (param_1->ComplexImplicits).ArrayNum = 0;
          }
          FinishCreatingPhysicsMeshes_Chaos
                    (this,&local_48,&local_58,&param_1->UVInfo,&param_1->FaceRemap);
          DestructItems<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int>
                    ((TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)
                     local_58.AllocatorInstance.Data,local_58.ArrayNum);
          if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.AllocatorInstance.Data);
          }
          DestructItems<TRefCountPtr<Chaos::FConvex>,int>
                    ((TRefCountPtr<Chaos::FConvex> *)local_48.AllocatorInstance.Data,
                     local_48.ArrayNum);
          if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.AllocatorInstance.Data);
          }
          return;
        }
        local_60.Reference = *(FTriangleMeshImplicitObject **)pFVar8;
        if ((char)(local_60.Reference)->_padding_ == '\v') {
          if (local_60.Reference != (FTriangleMeshImplicitObject *)0x0) {
            LOCK();
            *(int *)&(local_60.Reference)->_padding_ = (int)(local_60.Reference)->_padding_ + 1;
            UNLOCK();
          }
        }
        else {
          local_60.Reference = (FTriangleMeshImplicitObject *)0x0;
        }
        if (((local_58.AllocatorInstance.Data <= (FScriptContainerElement *)&local_60) &&
            ((FScriptContainerElement *)&local_60 <
             local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) break;
        iVar6 = local_58.ArrayNum;
        if (local_58.ArrayNum == local_58.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_58.AllocatorInstance,&local_58.ArrayMax);
        }
        pFVar8 = pFVar8 + 8;
        local_58.ArrayNum = iVar6 + 1;
        *(longlong *)(local_58.AllocatorInstance.Data + (longlong)iVar6 * 8) = 0;
        *(FTriangleMeshImplicitObject **)(local_58.AllocatorInstance.Data + (longlong)iVar6 * 8) =
             local_60.Reference;
        local_60.Reference = (FTriangleMeshImplicitObject *)0x0;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_68.Reference = *(FConvex **)pFVar8;
    if ((char)(local_68.Reference)->_padding_ == '\b') {
      if (local_68.Reference != (FConvex *)0x0) {
        LOCK();
        *(int *)&(local_68.Reference)->_padding_ = (int)(local_68.Reference)->_padding_ + 1;
        UNLOCK();
      }
    }
    else {
      local_68.Reference = (FConvex *)0x0;
    }
    if (((local_48.AllocatorInstance.Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    if (local_48.ArrayNum == local_48.ArrayMax) {
      local_48.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_48.AllocatorInstance,&local_48.ArrayMax);
    }
    lVar7 = (longlong)local_48.ArrayNum;
    pFVar8 = pFVar8 + 8;
    local_48.ArrayNum = local_48.ArrayNum + 1;
    *(undefined8 *)(local_48.AllocatorInstance.Data + lVar7 * 8) = 0;
    *(FConvex **)(local_48.AllocatorInstance.Data + lVar7 * 8) = local_68.Reference;
    local_68.Reference = (FConvex *)0x0;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// FinishCreatingPhysicsMeshes_Chaos @ 148282010

void __thiscall
UBodySetup::FinishCreatingPhysicsMeshes_Chaos
          (UBodySetup *this,FChaosDerivedDataReader<float,3> *param_1)

{
  FinishCreatingPhysicsMeshes_Chaos
            (this,&param_1->ConvexGeometries,&param_1->TriMeshGeometries,&param_1->UVInfo,
             &param_1->FaceRemap);
  return;
}

// FinishCreatingPhysicsMeshes_Chaos @ 148282040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBodySetup::FinishCreatingPhysicsMeshes_Chaos
          (UBodySetup *this,
          TArray<TRefCountPtr<Chaos::FConvex>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,TSizedDefaultAllocator<32>_>
          *param_2,FBodySetupUVInfo *param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  longlong *plVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  TRefCountPtr<Chaos::FConvex> *pTVar6;
  TArray<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,TSizedDefaultAllocator<32>_> *pTVar7;
  FBodySetupUVInfo *pFVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FConvex *pFVar12;
  code *pcVar13;
  float fVar14;
  float fVar15;
  TEnumAsByte<ECollisionTraceFlag> TVar16;
  bool bVar17;
  uint uVar18;
  undefined7 extraout_var;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar22;
  FScriptContainerElement *pFVar23;
  FKConvexElem *this_00;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 local_a8;
  undefined1 local_a7 [7];
  longlong local_a0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78 [3];
  
  ClearPhysicsMeshes(this);
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_88,(UObject *)0x0,None);
  TVar16 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)this);
  fVar15 = __real_358637bd;
  fVar14 = __real_3f800000;
  uVar21 = 0;
  if (*(char *)CONCAT71(extraout_var,TVar16.Value) != '\x03') {
    iVar19 = (this->AggGeom).ConvexElems.ArrayNum;
    piVar1 = &param_1->ArrayNum;
    if (0 < iVar19) {
      local_a0 = 0;
      uVar25 = uVar21;
      do {
        lVar24 = local_a0;
        uVar20 = (uint)uVar21;
        uVar18 = 0;
        if ((int)uVar20 < iVar19) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        this_00 = (FKConvexElem *)((this->AggGeom).ConvexElems.AllocatorInstance.Data + lVar24);
        if ((int)uVar20 < *piVar1) {
          if (((int)uVar20 < 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          lVar11 = *(longlong *)((param_1->AllocatorInstance).Data + uVar25 * 8);
          if ((*(int *)(lVar11 + 0x38) < 1) || (*(int *)(lVar11 + 0x28) < 1)) goto LAB_14828233f;
          uVar18 = 0;
          if ((int)uVar20 < *piVar1) {
            uVar18 = ~uVar20 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pTVar6 = &this_00->ChaosConvex;
          pFVar10 = (param_1->AllocatorInstance).Data + uVar25 * 8;
          if ((FScriptContainerElement *)pTVar6 != pFVar10) {
            pFVar12 = pTVar6->Reference;
            pTVar6->Reference = *(FConvex **)pFVar10;
            *(undefined8 *)pFVar10 = 0;
            if (pFVar12 != (FConvex *)0x0) {
              LOCK();
              plVar2 = &pFVar12->_padding_;
              lVar11 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if (((int)lVar11 == 1) && (*(int *)((longlong)&pFVar12->_padding_ + 4) == 0)) {
                (**(code **)pFVar12->_padding_)();
              }
            }
          }
          FKConvexElem::ComputeChaosConvexIndices(this_00,false);
          Chaos::FImplicitObject::Track
                    ((FImplicitObject *)pTVar6->Reference,
                     (TSerializablePtr<Chaos::FImplicitObject>)pTVar6->Reference,&local_88);
          if ((Chaos::FConvexBuilder::PerformGeometryCheck != 0) &&
             (pFVar12 = pTVar6->Reference,
             Chaos::FConvexBuilder::VerticesThreshold < (pFVar12->Vertices).ArrayNum)) {
            ::FString::PrintfImpl(local_78,L"Planes %d, Vertices %d");
            if (0 < Chaos::FConvexBuilder::PerformGeometryReduction) {
              ::FString::AppendChars(local_78,", [Simplifying]",0xf);
              local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_98.ArrayNum = 0;
              local_98.ArrayMax = 0;
              Chaos::FConvexBuilder::Simplify
                        (&pFVar12->Planes,&local_98,&pFVar12->Vertices,&pFVar12->LocalBoundingBox);
              Chaos::FConvexBuilder::MergeFaces
                        (&pFVar12->Planes,&local_98,&pFVar12->Vertices,fVar14);
              Chaos::FConvexBuilder::MergeColinearEdges
                        (&pFVar12->Planes,&local_98,&pFVar12->Vertices,fVar15);
              Chaos::FConvex::CreateStructureData(pFVar12,&local_98,false);
              DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<int,TSizedDefaultAllocator<32>_> *)local_98.AllocatorInstance.Data,
                         local_98.ArrayNum);
              if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_98.AllocatorInstance.Data !=
                  (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_98.AllocatorInstance.Data);
              }
            }
            lVar24 = local_a0;
            if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
              lVar24 = local_a0;
            }
          }
        }
        else {
LAB_14828233f:
          if (2 < (byte)LogPhysics._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
          }
        }
        iVar19 = (this->AggGeom).ConvexElems.ArrayNum;
        local_a0 = lVar24 + 0x100;
        uVar21 = (ulonglong)(uVar20 + 1);
        uVar25 = uVar25 + 1;
      } while ((int)(uVar20 + 1) < iVar19);
    }
    pFVar10 = (param_1->AllocatorInstance).Data;
    if (param_1->ArrayMax < 0) {
      DestructItems<TRefCountPtr<Chaos::FConvex>,int>
                ((TRefCountPtr<Chaos::FConvex> *)pFVar10,*piVar1);
      *piVar1 = 0;
      if (param_1->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
      }
    }
    else {
      DestructItems<TRefCountPtr<Chaos::FConvex>,int>
                ((TRefCountPtr<Chaos::FConvex> *)pFVar10,*piVar1);
      *piVar1 = 0;
    }
  }
  pTVar7 = &this->TriMeshGeometries;
  if (pTVar7 != param_2) {
    DestructItems<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int>
              ((TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)(pTVar7->AllocatorInstance).Data,
               (this->TriMeshGeometries).ArrayNum);
    pFVar10 = (pTVar7->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar7->AllocatorInstance).Data = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TriMeshGeometries).ArrayNum = param_2->ArrayNum;
    (this->TriMeshGeometries).ArrayMax = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
  }
  pFVar8 = &this->UVInfo;
  if (pFVar8 != param_3) {
    pFVar10 = (pFVar8->IndexBuffer).AllocatorInstance.Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pFVar8->IndexBuffer).AllocatorInstance.Data = (param_3->IndexBuffer).AllocatorInstance.Data;
    (param_3->IndexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->UVInfo).IndexBuffer.ArrayNum = (param_3->IndexBuffer).ArrayNum;
    (this->UVInfo).IndexBuffer.ArrayMax = (param_3->IndexBuffer).ArrayMax;
    (param_3->IndexBuffer).ArrayNum = 0;
    (param_3->IndexBuffer).ArrayMax = 0;
  }
  pTVar3 = &param_3->VertPositions;
  pTVar4 = &(this->UVInfo).VertPositions;
  if (pTVar4 != pTVar3) {
    pFVar10 = (pTVar4->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->UVInfo).VertPositions.ArrayNum = (param_3->VertPositions).ArrayNum;
    (this->UVInfo).VertPositions.ArrayMax = (param_3->VertPositions).ArrayMax;
    (param_3->VertPositions).ArrayNum = 0;
    (param_3->VertPositions).ArrayMax = 0;
  }
  pTVar5 = &param_3->VertUVs;
  pTVar22 = &(this->UVInfo).VertUVs;
  if (pTVar22 != pTVar5) {
    DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               (pTVar22->AllocatorInstance).Data,(this->UVInfo).VertUVs.ArrayNum);
    pFVar10 = (pTVar22->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar22->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->UVInfo).VertUVs.ArrayNum = (param_3->VertUVs).ArrayNum;
    (this->UVInfo).VertUVs.ArrayMax = (param_3->VertUVs).ArrayMax;
    (param_3->VertUVs).ArrayNum = 0;
    (param_3->VertUVs).ArrayMax = 0;
  }
  pTVar9 = &this->FaceRemap;
  if (pTVar9 != param_4) {
    pFVar10 = (pTVar9->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar9->AllocatorInstance).Data = (param_4->AllocatorInstance).Data;
    (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->FaceRemap).ArrayNum = param_4->ArrayNum;
    (this->FaceRemap).ArrayMax = param_4->ArrayMax;
    param_4->ArrayNum = 0;
    param_4->ArrayMax = 0;
  }
  pFVar23 = (this->TriMeshGeometries).AllocatorInstance.Data;
  iVar19 = (this->TriMeshGeometries).ArrayNum;
  pFVar10 = pFVar23 + (longlong)iVar19 * 8;
  while( true ) {
    if ((this->TriMeshGeometries).ArrayNum != iVar19) {
      `TCheckedPointerIterator<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_a8);
    }
    if (pFVar23 == pFVar10) break;
    Chaos::FImplicitObject::Track
              (*(FImplicitObject **)pFVar23,
               (TSerializablePtr<Chaos::FImplicitObject>)*(FImplicitObject **)pFVar23,&local_88);
    pFVar23 = pFVar23 + 8;
  }
  pFVar23 = (this->TriMeshGeometries).AllocatorInstance.Data;
  iVar19 = (this->TriMeshGeometries).ArrayNum;
  pFVar10 = pFVar23 + (longlong)iVar19 * 8;
  while( true ) {
    if ((this->TriMeshGeometries).ArrayNum != iVar19) {
      `TCheckedPointerIterator<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_a7);
    }
    if (pFVar23 == pFVar10) break;
    lVar24 = *(longlong *)pFVar23;
    pFVar23 = pFVar23 + 8;
    *(undefined1 *)(lVar24 + 0x15) = 0;
  }
  if (this->bSharedCookedData == '\0') {
    FFormatContainer::FlushData(&this->CookedFormatData);
  }
  this->bCreatedPhysicsMeshes = '\x01';
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// FinishDestroy @ 148282620

void __thiscall UBodySetup::FinishDestroy(UBodySetup *this)

{
  ClearPhysicsMeshes(this);
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetClosestPointAndNormal @ 148286690

float __thiscall
UBodySetup::GetClosestPointAndNormal
          (UBodySetup *this,TVector<double> *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,bool param_5)

{
  float fVar1;
  
  if (param_5) {
    fVar1 = GetClosestPointAndNormalImpl<1,1>(this,param_1,param_2,param_3,param_4);
    return fVar1;
  }
  fVar1 = GetClosestPointAndNormalImpl<1,0>(this,param_1,param_2,param_3,param_4);
  return fVar1;
}

// GetCookInfo @ 148286870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBodySetup::GetCookInfo(UBodySetup *this,FCookBodySetupInfo *param_1,EPhysXMeshCookFlags param_2)

{
  FString *pFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  UObjectBaseUtility *this_00;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  TEnumAsByte<ECollisionTraceFlag> TVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  FString *pFVar15;
  undefined7 extraout_var;
  FScriptContainerElement *pFVar16;
  undefined7 extraout_var_00;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  UClass *pUVar19;
  longlong *plVar20;
  undefined7 extraout_var_01;
  UPhysicsSettings *pUVar21;
  uint uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  bool bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  double dVar58;
  undefined4 uVar59;
  double dVar60;
  double dVar61;
  uint uVar62;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  undefined1 auVar63 [16];
  uint uVar67;
  uint uVar68;
  uint uVar69;
  undefined4 uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint local_180;
  double local_178 [2];
  FString local_158;
  undefined1 local_148 [8];
  uint uStack_140;
  uint uStack_13c;
  FString local_138;
  FString local_128;
  FString local_118 [2];
  double local_f8;
  
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId233,"UBodySetup::GetCookInfo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
               ,0xe9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId233);
  }
  pFVar15 = UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)this->_padding_,&local_138,(UObject *)0x0);
  pFVar1 = &param_1->OuterDebugName;
  if (pFVar1 != pFVar15) {
    pFVar16 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
    (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->OuterDebugName).Data.ArrayNum = (pFVar15->Data).ArrayNum;
    (param_1->OuterDebugName).Data.ArrayMax = (pFVar15->Data).ArrayMax;
    (pFVar15->Data).ArrayNum = 0;
    (pFVar15->Data).ArrayMax = 0;
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  param_1->bConvexDeformableMesh = false;
  TVar10 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)this);
  if ((*(char *)CONCAT71(extraout_var,TVar10.Value) == '\x03') ||
     ((this->AggGeom).ConvexElems.ArrayNum < 1)) {
    param_1->bCookNonMirroredConvex = false;
    param_1->bCookMirroredConvex = false;
  }
  else {
    local_180 = 0;
    param_1->bCookNonMirroredConvex = this->bGenerateNonMirroredCollision;
    param_1->bCookMirroredConvex = this->bGenerateMirroredCollision;
    if (0 < (this->AggGeom).ConvexElems.ArrayNum) {
      lVar26 = 0;
      auVar54 = ___xmm_7ff00000000000007ff0000000000000;
      uVar62 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar64 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar65 = _UNK_15061cc88;
      uVar66 = _UNK_15061cc8c;
      do {
        pFVar24 = (FScriptContainerElement *)0x0;
        uVar22 = ~local_180 >> 0x1f;
        pFVar16 = pFVar24;
        if ((int)local_180 < (this->AggGeom).ConvexElems.ArrayNum) {
          pFVar16 = (FScriptContainerElement *)(ulonglong)uVar22;
        }
        iVar13 = (int)pFVar16;
        if (iVar13 == 0) {
          uVar22 = 0x506106c8;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          iVar13 = (int)CONCAT71(extraout_var_00,bVar11);
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pFVar16 = (this->AggGeom).ConvexElems.AllocatorInstance.Data;
        iVar5 = *(int *)(pFVar16 + lVar26 + 0x38);
        pFVar17 = pFVar24;
        if (this->bGenerateNonMirroredCollision != '\0') {
          iVar13 = (param_1->NonMirroredConvexVertices).ArrayNum;
          piVar2 = &(param_1->NonMirroredConvexVertices).ArrayMax;
          if (iVar13 == *piVar2) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(param_1->NonMirroredConvexVertices).AllocatorInstance,piVar2
                               );
          }
          (param_1->NonMirroredConvexVertices).ArrayNum = iVar13 + 1;
          pFVar17 = (param_1->NonMirroredConvexVertices).AllocatorInstance.Data +
                    (longlong)iVar13 * 0x10;
          *(undefined8 *)pFVar17 = 0;
          *(undefined8 *)(pFVar17 + 8) = 0;
          iVar13 = (param_1->NonMirroredConvexVertices).ArrayNum;
          uVar23 = iVar13 - 1;
          uVar22 = 0;
          if ((int)uVar23 < iVar13) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar17 = (param_1->NonMirroredConvexVertices).AllocatorInstance.Data +
                    (longlong)((param_1->NonMirroredConvexVertices).ArrayNum + -1) * 0x10;
          uVar22 = 0x18;
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x18,8,iVar5,(ForAnyElementType *)pFVar17,(int *)(pFVar17 + 8),
                              (int *)(pFVar17 + 0xc));
        }
        pFVar18 = pFVar24;
        if (this->bGenerateMirroredCollision != '\0') {
          iVar13 = (param_1->MirroredConvexVertices).ArrayNum;
          piVar2 = &(param_1->MirroredConvexVertices).ArrayMax;
          if (iVar13 == *piVar2) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(param_1->MirroredConvexVertices).AllocatorInstance,piVar2);
          }
          (param_1->MirroredConvexVertices).ArrayNum = iVar13 + 1;
          pFVar18 = (param_1->MirroredConvexVertices).AllocatorInstance.Data +
                    (longlong)iVar13 * 0x10;
          *(undefined8 *)pFVar18 = 0;
          *(undefined8 *)(pFVar18 + 8) = 0;
          iVar13 = (param_1->MirroredConvexVertices).ArrayNum;
          uVar23 = iVar13 - 1;
          uVar22 = 0;
          if ((int)uVar23 < iVar13) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar18 = (param_1->MirroredConvexVertices).AllocatorInstance.Data +
                    (longlong)((param_1->MirroredConvexVertices).ArrayNum + -1) * 0x10;
          uVar22 = 0x18;
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x18,8,iVar5,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 8),
                              (int *)(pFVar18 + 0xc));
        }
        auVar84 = *(undefined1 (*) [16])(pFVar16 + lVar26 + 0xa0);
        uVar75 = auVar84._0_4_;
        uVar76 = auVar84._4_4_;
        uVar77 = auVar84._8_4_;
        uVar78 = auVar84._12_4_;
        auVar34 = *(undefined1 (*) [16])(pFVar16 + lVar26 + 0x90);
        uVar79 = auVar34._0_4_;
        uVar80 = auVar34._4_4_;
        uVar81 = auVar34._8_4_;
        uVar82 = auVar34._12_4_;
        pFVar25 = pFVar16 + lVar26 + 0xd0;
        local_178 = *(double (*) [2])pFVar25;
        pFVar3 = pFVar16 + lVar26 + 0xe0;
        uVar23 = *(uint *)&pFVar3->field_0x0;
        uVar67 = *(uint *)(pFVar3 + 4);
        uVar68 = *(uint *)(pFVar3 + 8);
        uVar69 = *(uint *)(pFVar3 + 0xc);
        _local_148 = *(double (*) [2])pFVar3;
        pFVar3 = pFVar16 + lVar26 + 0xb0;
        uVar85 = *(uint *)pFVar3;
        uVar86 = *(uint *)(pFVar3 + 4);
        uVar87 = *(uint *)(pFVar3 + 8);
        uVar88 = *(uint *)(pFVar3 + 0xc);
        pFVar3 = pFVar16 + lVar26 + 0xc0;
        uVar89 = *(uint *)pFVar3;
        uVar90 = *(uint *)(pFVar3 + 4);
        uVar71 = auVar54._0_4_;
        uVar72 = auVar54._4_4_;
        auVar28._0_8_ = (double)CONCAT44(uVar76 & uVar72,uVar75 & uVar71);
        uVar73 = auVar54._8_4_;
        auVar28._8_4_ = uVar77 & uVar73;
        uVar74 = auVar54._12_4_;
        auVar28._12_4_ = uVar78 & uVar74;
        dVar39 = auVar54._0_8_;
        dVar49 = auVar54._8_8_;
        auVar29._8_8_ = -(ulonglong)(auVar28._8_8_ == dVar49);
        auVar29._0_8_ = -(ulonglong)(auVar28._0_8_ == dVar39);
        uVar14 = movmskpd(iVar13,auVar29);
        auVar40._0_8_ = (double)CONCAT44(uVar80 & uVar72,uVar79 & uVar71);
        auVar40._8_4_ = uVar81 & uVar73;
        auVar40._12_4_ = uVar82 & uVar74;
        auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ == dVar49);
        auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ == dVar39);
        iVar13 = movmskpd(uVar22,auVar41);
        if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) {
          auVar30._0_8_ = (double)CONCAT44(uVar72 & uVar90,uVar71 & uVar89);
          auVar30._8_4_ = uVar73 & *(uint *)(pFVar3 + 8);
          auVar30._12_4_ = uVar74 & *(uint *)(pFVar3 + 0xc);
          auVar42._0_8_ = (double)CONCAT44(uVar72 & uVar86,uVar71 & uVar85);
          auVar42._8_4_ = uVar73 & uVar87;
          auVar42._12_4_ = uVar74 & uVar88;
          auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ == dVar49);
          auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ == dVar39);
          uVar22 = movmskpd(0,auVar31);
          auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ == dVar49);
          auVar43._0_8_ = -(ulonglong)(auVar42._0_8_ == dVar39);
          iVar13 = movmskpd(iVar13,auVar43);
          if ((uVar22 & 0x3fffffff) != 0 || iVar13 != 0) goto LAB_148286d66;
          auVar32._0_8_ = (double)CONCAT44(uVar72 & uVar67,uVar71 & uVar23);
          auVar32._8_4_ = uVar73 & uVar68;
          auVar32._12_4_ = uVar74 & uVar69;
          auVar44._0_8_ =
               (double)CONCAT44(uVar72 & *(uint *)(pFVar25 + 4),
                                uVar71 & *(uint *)&pFVar25->field_0x0);
          auVar44._8_4_ = uVar73 & *(uint *)(pFVar25 + 8);
          auVar44._12_4_ = uVar74 & *(uint *)(pFVar25 + 0xc);
          auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ == dVar49);
          auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ == dVar39);
          uVar22 = movmskpd(0,auVar33);
          auVar45._8_8_ = -(ulonglong)(auVar44._8_8_ == dVar49);
          auVar45._0_8_ = -(ulonglong)(auVar44._0_8_ == dVar39);
          iVar13 = movmskpd(iVar13,auVar45);
          if ((uVar22 & 0x3fffffff) != 0 || iVar13 != 0) goto LAB_148286d66;
          dVar39 = auVar34._0_8_ * auVar34._0_8_ + auVar84._0_8_ * auVar84._0_8_;
          dVar49 = auVar34._8_8_ * auVar34._8_8_ + auVar84._8_8_ * auVar84._8_8_;
          auVar51._8_4_ = SUB84(dVar49,0);
          auVar51._0_8_ = dVar39;
          auVar51._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
          dVar50 = auVar51._8_8_ + dVar39;
          dVar57 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar50;
          dVar58 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - (dVar39 + dVar49);
          dVar50 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar50;
          dVar39 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - (dVar39 + dVar49);
          auVar84._0_8_ =
               (double)CONCAT44(uVar64 & (uint)((ulonglong)dVar57 >> 0x20),uVar62 & SUB84(dVar57,0))
          ;
          auVar84._8_4_ = uVar65 & SUB84(dVar58,0);
          auVar84._12_4_ = uVar66 & (uint)((ulonglong)dVar58 >> 0x20);
          auVar46._8_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] < auVar84._8_8_);
          auVar46._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] < auVar84._0_8_);
          iVar13 = movmskpd(iVar13,auVar46);
          auVar34._0_8_ =
               (double)CONCAT44(uVar64 & (uint)((ulonglong)dVar50 >> 0x20),uVar62 & SUB84(dVar50,0))
          ;
          auVar34._8_4_ = uVar65 & SUB84(dVar39,0);
          auVar34._12_4_ = uVar66 & (uint)((ulonglong)dVar39 >> 0x20);
          auVar52._8_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] < auVar34._8_8_);
          auVar52._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] < auVar34._0_8_);
          uVar22 = movmskpd(0,auVar52);
          if ((uVar22 & 0x3fffffff) != 0 || iVar13 != 0) goto LAB_148286d66;
        }
        else {
LAB_148286d66:
          if (2 < (byte)LogPhysics._0_1_) {
            if ((UObjectBaseUtility *)this->_padding_ == (UObjectBaseUtility *)0x0) {
              ::FString::FString(&local_158,L"None");
            }
            else {
              UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)this->_padding_,&local_158,(UObject *)0x0);
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
          }
          uVar23 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar67 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar68 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar69 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
          uVar79 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar80 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar81 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar82 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          uVar75 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar76 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar77 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar78 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar85 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar86 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar87 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar88 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar89 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar90 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          local_178[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_178[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          local_148 = (undefined1  [8])
                      UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          _uStack_140 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        }
        if (0 < iVar5) {
          dVar49 = local_178[1];
          auVar83._4_4_ = uVar80;
          auVar83._0_4_ = uVar79;
          auVar83._8_4_ = uVar81;
          auVar83._12_4_ = uVar82;
          dVar39 = (double)CONCAT44(uVar82,uVar81);
          auVar54._4_4_ = uVar76;
          auVar54._0_4_ = uVar75;
          auVar54._8_4_ = uVar77;
          auVar54._12_4_ = uVar78;
          auVar84 = blendpd(auVar83,auVar54,2);
          pFVar25 = pFVar24;
          do {
            iVar13 = (int)pFVar24;
            if ((*(int *)(pFVar16 + lVar26 + 0x38) <= iVar13) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            auVar35._8_4_ = uVar75;
            auVar35._0_8_ = dVar39;
            auVar35._12_4_ = uVar76;
            auVar63._0_8_ =
                 *(double *)(pFVar25 + 0x10 + *(longlong *)(pFVar16 + lVar26 + 0x30)) *
                 (double)CONCAT44(uVar67,uVar23);
            auVar63._8_8_ = (double)CONCAT44(uVar69,uVar68) * 0.0;
            dVar60 = *(double *)(pFVar25 + *(longlong *)(pFVar16 + lVar26 + 0x30)) * local_178[0];
            dVar61 = *(double *)(pFVar25 + *(longlong *)(pFVar16 + lVar26 + 0x30) + 8) * dVar49;
            auVar53._8_4_ = SUB84(dVar61,0);
            auVar53._0_8_ = dVar60;
            auVar53._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
            auVar54 = blendpd(auVar53,auVar63,2);
            dVar57 = auVar63._0_8_ * (double)CONCAT44(uVar82,uVar81) - auVar35._8_8_ * dVar61;
            auVar55._0_8_ =
                 auVar54._0_8_ * (double)CONCAT44(uVar76,uVar75) - auVar84._0_8_ * auVar63._0_8_;
            auVar55._8_8_ =
                 auVar54._8_8_ * (double)CONCAT44(uVar78,uVar77) - auVar84._8_8_ * auVar63._8_8_;
            auVar36._8_4_ = SUB84(dVar57,0);
            auVar36._0_8_ = dVar61 * (double)CONCAT44(uVar80,uVar79) - dVar39 * dVar60;
            auVar36._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
            auVar54 = blendpd(auVar36,auVar55,2);
            auVar37._0_8_ = auVar54._0_8_ + auVar54._0_8_;
            auVar37._8_8_ = auVar54._8_8_ + auVar54._8_8_;
            dVar57 = dVar57 + dVar57;
            dVar58 = auVar55._0_8_ + auVar55._0_8_;
            uVar59 = (undefined4)((ulonglong)dVar58 >> 0x20);
            auVar47._8_4_ = SUB84(dVar58,0);
            auVar47._0_8_ = dVar57;
            auVar47._12_4_ = uVar59;
            auVar56._8_4_ = SUB84(dVar58,0);
            auVar56._0_8_ = dVar57;
            auVar56._12_4_ = uVar59;
            auVar54 = blendpd(auVar47,auVar37,2);
            dVar50 = auVar37._0_8_ * (double)CONCAT44(uVar82,uVar81) -
                     dVar58 * (double)CONCAT44(uVar76,uVar75);
            auVar48._0_8_ =
                 auVar54._0_8_ * (double)CONCAT44(uVar76,uVar75) - auVar37._0_8_ * auVar84._0_8_;
            auVar48._8_8_ =
                 auVar54._8_8_ * (double)CONCAT44(uVar78,uVar77) - auVar37._8_8_ * auVar84._8_8_;
            auVar38._8_4_ = SUB84(dVar50,0);
            auVar38._0_8_ = dVar58 * (double)CONCAT44(uVar80,uVar79) - dVar57 * dVar39;
            auVar38._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
            auVar54 = blendpd(auVar38,auVar48,2);
            dVar58 = auVar37._0_8_ * (double)CONCAT44(uVar78,uVar77) + auVar63._0_8_ + auVar54._0_8_
                     + (double)CONCAT44(uVar90,uVar89);
            dVar50 = dVar50 + dVar57 * (double)CONCAT44(uVar78,uVar77) + dVar60 +
                     (double)CONCAT44(uVar86,uVar85);
            dVar57 = auVar48._0_8_ + auVar56._8_8_ * (double)CONCAT44(uVar78,uVar77) + dVar61 +
                     (double)CONCAT44(uVar88,uVar87);
            uVar59 = SUB84(dVar57,0);
            uVar70 = (undefined4)((ulonglong)dVar57 >> 0x20);
            auVar8._8_4_ = uVar59;
            auVar8._0_8_ = dVar50;
            auVar8._12_4_ = uVar70;
            if (pFVar17 != (FScriptContainerElement *)0x0) {
              if ((*(int *)&pFVar17[8].field_0x0 <= iVar13) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar6 = *(longlong *)&pFVar17->field_0x0;
              auVar9._8_4_ = uVar59;
              auVar9._0_8_ = dVar50;
              auVar9._12_4_ = uVar70;
              *(undefined1 (*) [16])(pFVar25 + lVar6) = auVar9;
              *(double *)(pFVar25 + 0x10 + lVar6) = dVar58;
            }
            if (pFVar18 != (FScriptContainerElement *)0x0) {
              dVar50 = dVar50 * __real_bff0000000000000;
              local_178[1] = auVar8._8_8_;
              local_f8 = dVar58;
              if ((*(int *)&pFVar18[8].field_0x0 <= iVar13) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar6 = *(longlong *)&pFVar18->field_0x0;
              *(double *)(pFVar25 + lVar6) = dVar50;
              *(double *)(pFVar25 + lVar6 + 8) = local_178[1];
              *(double *)(pFVar25 + 0x10 + lVar6) = local_f8;
            }
            pFVar24 = (FScriptContainerElement *)(ulonglong)(iVar13 + 1U);
            pFVar25 = pFVar25 + 0x18;
            uVar23 = local_148._0_4_;
            uVar67 = local_148._4_4_;
            uVar68 = uStack_140;
            uVar69 = uStack_13c;
            auVar54 = ___xmm_7ff00000000000007ff0000000000000;
            uVar62 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            uVar64 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            uVar65 = _UNK_15061cc88;
            uVar66 = _UNK_15061cc8c;
          } while ((int)(iVar13 + 1U) < iVar5);
        }
        param_1->ConvexCookFlags = param_2;
        lVar6 = this->_padding_;
        pUVar19 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
        lVar6 = *(longlong *)(lVar6 + 0x10);
        iVar13 = (int)pUVar19->_padding_;
        if ((*(int *)(lVar6 + 0x38) < iVar13) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar13 * 8) !=
            &pUVar19->_padding_)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        lVar26 = lVar26 + 0x100;
        local_180 = local_180 + 1;
        param_1->bConvexDeformableMesh = bVar11;
      } while ((int)local_180 < (this->AggGeom).ConvexElems.ArrayNum);
    }
  }
  plVar20 = (longlong *)0x0;
  param_1->bCookTriMesh = false;
  param_1->bTriMeshError = false;
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar19 = Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
    plVar20 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar19);
  }
  TVar10 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)this);
  if (((*(char *)CONCAT71(extraout_var_01,TVar10.Value) != '\x02') && (plVar20 != (longlong *)0x0))
     && (cVar12 = (**(code **)(*plVar20 + 0x20))(plVar20,this->bMeshCollideAll), cVar12 != '\0')) {
    bVar11 = (bool)(**(code **)(*plVar20 + 0x10))(plVar20,param_1);
    param_1->bCookTriMesh = bVar11;
    if (bVar11 == false) {
      if (2 < (byte)LogPhysics._0_1_) {
        UObjectBaseUtility::GetPathName(this_00,local_118,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
        if (local_118[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118[0].Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      iVar13 = (param_1->TriangleMeshDesc).Indices.ArrayNum;
      if (((iVar13 == 0) || ((param_1->TriangleMeshDesc).Vertices.ArrayNum == 0)) ||
         (iVar13 < (param_1->TriangleMeshDesc).MaterialIndices.ArrayNum)) {
        if (2 < (byte)LogPhysics._0_1_) {
          UObjectBaseUtility::GetPathName(this_00,&local_128,(UObject *)0x0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
        }
        param_1->bTriMeshError = true;
      }
      param_1->TriMeshCookFlags = param_2;
      param_1->bSupportFaceRemap = this->bSupportUVsAndFaceRemap;
    }
  }
  pUVar21 = UPhysicsSettings::Get();
  if ((pUVar21->bSupportUVFromHitResults != false) || ((bool)this->bSupportUVsAndFaceRemap)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  param_1->bSupportUVFromHitResults = bVar11;
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetCookedData @ 148287300

TBulkData<unsigned_char> * __thiscall UBodySetup::GetCookedData(UBodySetup *this,FName param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FBulkData *pFVar4;
  TBulkData<unsigned_char> *pTVar5;
  long64 lVar6;
  FFormatContainer *this_01;
  FBulkData *pFVar7;
  
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  pFVar7 = (FBulkData *)0x0;
  if ((!bVar2) && (this->bNeverNeedsCookedCollisionData == '\0')) {
    this_00 = (UObjectBaseUtility *)this->_padding_;
    pFVar4 = pFVar7;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar3 = Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
      pFVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
    }
    if ((((this->AggGeom).ConvexElems.ArrayNum != 0) || (pFVar4 != (FBulkData *)0x0)) &&
       (this->bHasCookedCollisionData != '\0')) {
      this_01 = this->CookedFormatDataOverride;
      if (this_01 == (FFormatContainer *)0x0) {
        this_01 = &this->CookedFormatData;
      }
      IsRuntime(this);
      pFVar4 = (FBulkData *)FFormatContainer::GetFormat(this_01,param_1);
      if ((pFVar4 == (FBulkData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                             ,0x5d1,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TBulkData<unsigned_char> *)(*pcVar1)();
        return pTVar5;
      }
      lVar6 = FBulkData::GetBulkDataSize(pFVar4);
      if (0 < lVar6) {
        pFVar7 = pFVar4;
      }
    }
  }
  return (TBulkData<unsigned_char> *)pFVar7;
}

// GetCookedFormatData @ 1482873f0

TBulkData<unsigned_char> * __thiscall UBodySetup::GetCookedFormatData(UBodySetup *this)

{
  TBulkData<unsigned_char> *pTVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&PhysicsFormatName,"Chaos");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar1 = GetCookedData(this,PhysicsFormatName);
  return pTVar1;
}

// GetGeometryDDCKey @ 1482889e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UBodySetup::GetGeometryDDCKey(UBodySetup *this,FString *param_1)

{
  int iVar1;
  UObjectBaseUtility *this_00;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  TEnumAsByte<ECollisionTraceFlag> TVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined7 extraout_var;
  UPhysicsSettings *pUVar7;
  UScriptStruct *pUVar8;
  FStructuredArchiveFromArchive *this_01;
  FStructuredArchiveSlot FVar9;
  FString *pFVar10;
  int iVar11;
  undefined1 auStackY_428 [32];
  ForAnyElementType local_3c0;
  undefined8 local_3b8;
  FString local_3b0;
  uint local_3a0;
  uint local_39c;
  undefined8 local_398;
  FString local_390;
  FString local_380;
  FGuid local_370;
  FString local_360;
  FArchiveState local_348;
  undefined8 local_2b8;
  ForAnyElementType *local_2b0;
  undefined8 local_2a8;
  FSHA1 local_298;
  FStructuredArchiveFromArchive local_208;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_428;
  ::FString::FString(&local_360,L"CDP_BODYSETUP");
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar5 = Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
    plVar6 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar5);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x38))(plVar6,&local_360);
    }
  }
  UPhysicsSettings::Get();
  UPhysicsSettings::Get();
  TVar4 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)this);
  local_3a0 = (uint)*(byte *)CONCAT71(extraout_var,TVar4.Value);
  pUVar7 = UPhysicsSettings::Get();
  local_39c = (uint)pUVar7->bSupportUVFromHitResults;
  pUVar8 = FKAggregateGeom::StaticStruct();
  local_3c0.Data = (FScriptContainerElement *)0x0;
  local_3b8 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x40,&local_3c0,0,(int *)((longlong)&local_3b8 + 4));
  local_398 = 0;
  local_348._padding_ = 0;
  local_348.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_348.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_348.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_348.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_348._40_8_ = 0;
  local_348.ArSerializingDefaults = 0;
  local_348.ArPortFlags = 0;
  local_348.ArMaxSerializeSize = 0;
  local_348.ArUEVer.FileVersionUE4 = 0;
  local_348.ArUEVer.FileVersionUE5 = 0;
  local_348.ArLicenseeUEVer = 0;
  local_348.ArEngineVer.Major = 0;
  local_348.ArEngineVer.Minor = 0;
  local_348.ArEngineVer.Patch = 0;
  local_348.ArEngineVer._6_2_ = 0;
  local_348.ArEngineVer.Changelist = 0;
  local_348.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_348.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_348.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_348.SerializedProperty = (FProperty *)0x0;
  local_348.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_348.bCustomVersionsAreReset = false;
  local_348._129_7_ = 0;
  local_348.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_348);
  local_2b8 = 0;
  local_348._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_2b0 = &local_3c0;
  local_2a8 = 0;
  FArchiveState::SetIsSaving(&local_348,true);
  (**(code **)(local_348._padding_ + 0x108))(&local_348,0);
  local_348._padding_ = (longlong)&___7FMemoryWriter__6B_;
  pcVar2 = *(code **)(pUVar8->_padding_ + 0x2e0);
  this_01 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                      (&local_208,(FArchive *)&local_348);
  FVar9 = FStructuredArchiveFromArchive::GetSlot(this_01);
  (*pcVar2)(pUVar8,*(undefined8 *)FVar9,&this->AggGeom,pUVar8);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_208);
  FSHA1::FSHA1(&local_298);
  FSHA1::Update(&local_298,(uchar *)local_3c0.Data,(longlong)(int)local_3b8);
  FSHA1::Final(&local_298);
  FSHA1::GetHash(&local_298,(uchar *)&local_78);
  local_370.A = local_78 ^ local_68;
  local_370.B = local_74;
  local_370.C = local_70;
  local_370.D = local_6c;
  FSHA1::~FSHA1(&local_298);
  FArchive::~FArchive((FArchive *)&local_348);
  if (local_3c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data);
  }
  local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_380.Data.ArrayNum = 0;
  local_380.Data.ArrayMax = 0;
  FGuid::AppendString(&local_370,&local_380,Digits);
  local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_390.Data.ArrayNum = 0;
  local_390.Data.ArrayMax = 0;
  FGuid::AppendString(&this->BodySetupGuid,&local_390,Digits);
  ::FString::PrintfImpl(&local_3b0,L"%s_%s_%s_%d_%d_%d_%d_%f_%f_%d");
  if (param_1 != &local_3b0) {
    pFVar3 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (param_1->Data).AllocatorInstance.Data = local_3b0.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_3b0.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_3b0.Data.ArrayMax;
    local_3b0.Data.ArrayNum = 0;
    local_3b0.Data.ArrayMax = 0;
    local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
  }
  if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data.AllocatorInstance.Data);
  }
  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data.AllocatorInstance.Data);
  }
  if ((bool)this->bSupportUVsAndFaceRemap) {
    pFVar10 = ::FString::FString((FString *)&local_370,L"_1");
    iVar1 = (pFVar10->Data).ArrayNum;
    iVar11 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar11 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar11);
    if ((void *)CONCAT44(local_370.B,local_370.A) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_370.B,local_370.A));
    }
  }
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPhysMaterial @ 14828b960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPhysicalMaterial * __thiscall UBodySetup::GetPhysMaterial(UBodySetup *this)

{
  UPhysicalMaterial *pUVar1;
  
  pUVar1 = (this->PhysMaterial).field0_0x0.DebugPtr;
  if ((pUVar1 == (UPhysicalMaterial *)0x0) && (GEngine != (UEngine *)0x0)) {
    pUVar1 = (GEngine->DefaultPhysMaterial).field0_0x0.DebugPtr;
  }
  return pUVar1;
}

// GetPrivateStaticClass @ 14828bdf0

UClass * __cdecl UBodySetup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBodySetup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BodySetup",&Z_Registration_Info_UClass_UBodySetup.InnerSingleton,
               StaticRegisterNativesUBodySetup,0x338,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBodySetup>,InternalVTableHelperCtorCaller<UBodySetup>,local_res8
               ,UBodySetupCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBodySetup.InnerSingleton;
}

// GetResourceSizeEx @ 14828c9d0

void __thiscall UBodySetup::GetResourceSizeEx(UBodySetup *this,FResourceSizeEx *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> TVar3;
  TEnumAsByte<ECollisionTraceFlag> TVar4;
  bool bVar5;
  uint uVar6;
  undefined7 extraout_var;
  FChaosArchiveContext *this_00;
  FChaosArchiveContext *pFVar7;
  FChaosArchiveContext *pFVar8;
  FName *pFVar9;
  TBulkData<unsigned_char> **ppTVar10;
  FBulkData *this_01;
  ulong64 uVar11;
  int iVar12;
  FChaosArchiveContext *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  void *local_310;
  undefined8 local_308;
  void *local_300;
  undefined8 local_2f8;
  FName local_2f0;
  FName local_2e8 [2];
  FArchiveState local_2d8;
  undefined8 local_248;
  void **local_240;
  undefined8 local_238;
  FArchiveState local_228;
  undefined8 local_198;
  void **local_190;
  undefined8 local_188;
  FChaosArchive local_178;
  FChaosArchive local_d8;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  pFVar13 = (FChaosArchiveContext *)0x0;
  if (this->bSharedCookedData == '\0') {
    TVar4 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)this);
    if ((*(char *)CONCAT71(extraout_var,TVar4.Value) != '\x03') &&
       (iVar12 = (this->AggGeom).ConvexElems.ArrayNum, pFVar7 = pFVar13, pFVar8 = pFVar13,
       0 < iVar12)) {
      do {
        uVar14 = (uint)pFVar7;
        uVar6 = 0;
        if ((int)uVar14 < iVar12) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->AggGeom).ConvexElems.AllocatorInstance.Data;
        if (*(longlong *)(pFVar1 + 0x90 + (longlong)(&(pFVar8->PendingAdds).Hash + -4) + 8) != 0) {
          local_310 = (void *)0x0;
          local_308 = 0;
          local_2d8._padding_ = 0;
          local_2d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
          local_2d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
          local_2d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
          local_2d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
          local_2d8._40_8_ = 0;
          local_2d8.ArSerializingDefaults = 0;
          local_2d8.ArPortFlags = 0;
          local_2d8.ArMaxSerializeSize = 0;
          local_2d8.ArUEVer.FileVersionUE4 = 0;
          local_2d8.ArUEVer.FileVersionUE5 = 0;
          local_2d8.ArLicenseeUEVer = 0;
          local_2d8.ArEngineVer.Major = 0;
          local_2d8.ArEngineVer.Minor = 0;
          local_2d8.ArEngineVer.Patch = 0;
          local_2d8.ArEngineVer._6_2_ = 0;
          local_2d8.ArEngineVer.Changelist = 0;
          local_2d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
          local_2d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
          local_2d8.SavePackageData = (FArchiveSavePackageData *)0x0;
          local_2d8.SerializedProperty = (FProperty *)0x0;
          local_2d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
          local_2d8.bCustomVersionsAreReset = false;
          local_2d8._129_7_ = 0;
          local_2d8.NextProxy = (FArchiveState *)0x0;
          FArchiveState::FArchiveState(&local_2d8);
          local_240 = &local_310;
          local_248 = 0;
          local_2d8._padding_ =
               (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
          local_238 = 0;
          FArchiveState::SetIsSaving(&local_2d8,true);
          (**(code **)(local_2d8._padding_ + 0x108))(&local_2d8,0);
          local_2d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
          FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_178,(FArchive *)&local_2d8);
          local_178._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
          this_00 = ::operator_new(0x158);
          pFVar7 = pFVar13;
          if (this_00 != (FChaosArchiveContext *)0x0) {
            pFVar7 = Chaos::FChaosArchiveContext::FChaosArchiveContext(this_00);
          }
          local_178.Context.Ptr = pFVar7;
          Chaos::FConvex::Serialize
                    (*(FConvex **)(pFVar1 + 0x90 + (longlong)(&(pFVar8->PendingAdds).Hash + -4) + 8)
                     ,&local_178);
          FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(int)local_308);
          TVar3.Ptr = local_178.Context.Ptr;
          if (local_178.Context.Ptr != (FChaosArchiveContext *)0x0) {
            Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_178.Context.Ptr);
            ::operator_delete(TVar3.Ptr,0x158);
          }
          FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_178);
          FArchive::~FArchive((FArchive *)&local_2d8);
          if (local_310 != (void *)0x0) {
            FMemory::Free(local_310);
          }
        }
        iVar12 = (this->AggGeom).ConvexElems.ArrayNum;
        pFVar7 = (FChaosArchiveContext *)(ulonglong)(uVar14 + 1);
        pFVar8 = (FChaosArchiveContext *)&(pFVar8->ObjToSharedPtrHolder).field_0x48;
      } while ((int)(uVar14 + 1) < iVar12);
    }
    pFVar15 = (this->TriMeshGeometries).AllocatorInstance.Data;
    iVar12 = (this->TriMeshGeometries).ArrayNum;
    pFVar1 = pFVar15 + (longlong)iVar12 * 8;
    while( true ) {
      if ((this->TriMeshGeometries).ArrayNum != iVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar15 == pFVar1) break;
      if (*(longlong *)pFVar15 != 0) {
        local_300 = (void *)0x0;
        local_2f8 = 0;
        local_228._padding_ = 0;
        local_228.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_228.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_228.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_228.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_228._40_8_ = 0;
        local_228.ArSerializingDefaults = 0;
        local_228.ArPortFlags = 0;
        local_228.ArMaxSerializeSize = 0;
        local_228.ArUEVer.FileVersionUE4 = 0;
        local_228.ArUEVer.FileVersionUE5 = 0;
        local_228.ArLicenseeUEVer = 0;
        local_228.ArEngineVer.Major = 0;
        local_228.ArEngineVer.Minor = 0;
        local_228.ArEngineVer.Patch = 0;
        local_228.ArEngineVer._6_2_ = 0;
        local_228.ArEngineVer.Changelist = 0;
        local_228.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_228.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_228.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_228.SerializedProperty = (FProperty *)0x0;
        local_228.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_228.bCustomVersionsAreReset = false;
        local_228._129_7_ = 0;
        local_228.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_228);
        local_190 = &local_300;
        local_198 = 0;
        local_228._padding_ =
             (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
        local_188 = 0;
        FArchiveState::SetIsSaving(&local_228,true);
        (**(code **)(local_228._padding_ + 0x108))(&local_228,0);
        local_228._padding_ = (longlong)&___7FMemoryWriter__6B_;
        FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_d8,(FArchive *)&local_228);
        local_d8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
        pFVar8 = ::operator_new(0x158);
        pFVar7 = pFVar13;
        if (pFVar8 != (FChaosArchiveContext *)0x0) {
          pFVar7 = Chaos::FChaosArchiveContext::FChaosArchiveContext(pFVar8);
        }
        local_d8.Context.Ptr = pFVar7;
        Chaos::FTriangleMeshImplicitObject::Serialize
                  (*(FTriangleMeshImplicitObject **)pFVar15,&local_d8);
        FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(int)local_2f8);
        TVar3.Ptr = local_d8.Context.Ptr;
        if (local_d8.Context.Ptr != (FChaosArchiveContext *)0x0) {
          Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_d8.Context.Ptr);
          ::operator_delete(TVar3.Ptr,0x158);
        }
        FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_d8);
        FArchive::~FArchive((FArchive *)&local_228);
        if (local_300 != (void *)0x0) {
          FMemory::Free(local_300);
        }
      }
      pFVar15 = pFVar15 + 8;
    }
  }
  pFVar9 = ::FName::FName(&local_2f0,"Chaos");
  ppTVar10 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>::
             Find(&(this->CookedFormatData).Formats,*pFVar9);
  if (ppTVar10 != (TBulkData<unsigned_char> **)0x0) {
    pFVar9 = ::FName::FName(local_2e8,"Chaos");
    this_01 = (FBulkData *)FFormatContainer::GetFormat(&this->CookedFormatData,*pFVar9);
    uVar11 = FBulkData::GetBulkDataSize(this_01);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,uVar11);
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(this->FaceRemap).ArrayMax << 2);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->UVInfo).IndexBuffer.ArrayMax << 2);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->UVInfo).VertPositions.ArrayMax * 0x18);
  pFVar7 = pFVar13;
  if (0 < (this->UVInfo).VertUVs.ArrayNum) {
    do {
      uVar14 = (uint)pFVar7;
      uVar6 = 0;
      if ((int)uVar14 < (this->UVInfo).VertUVs.ArrayNum) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FResourceSizeEx::AddDedicatedSystemMemoryBytes
                (param_1,(longlong)
                         *(int *)((this->UVInfo).VertUVs.AllocatorInstance.Data + 0xc +
                                 (longlong)&(pFVar13->TagToObject).AllocatorInstance) << 4);
      pFVar13 = (FChaosArchiveContext *)&pFVar13->ObjToTag;
      pFVar7 = (FChaosArchiveContext *)(ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < (this->UVInfo).VertUVs.ArrayNum);
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->UVInfo).VertUVs.ArrayMax << 4);
  return;
}

// GetScaledVolume @ 14828d590

double __thiscall UBodySetup::GetScaledVolume(UBodySetup *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = FKAggregateGeom::GetScaledVolume(&this->AggGeom,param_1);
  return dVar1;
}

// GetShortestDistanceToPoint @ 14828e160

float __thiscall
UBodySetup::GetShortestDistanceToPoint
          (UBodySetup *this,TVector<double> *param_1,TTransform<double> *param_2,bool param_3)

{
  float fVar1;
  
  if (param_3) {
    fVar1 = GetClosestPointAndNormalImpl<0,1>
                      (this,param_1,param_2,(TVector<double> *)0x0,(TVector<double> *)0x0);
    return fVar1;
  }
  fVar1 = GetClosestPointAndNormalImpl<0,0>
                    (this,param_1,param_2,(TVector<double> *)0x0,(TVector<double> *)0x0);
  return fVar1;
}

// GetVolume @ 14828ed90

float __thiscall UBodySetup::GetVolume(UBodySetup *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (double)(**(code **)(this->_padding_ + 0x2c0))();
  return (float)dVar1;
}

// InvalidatePhysicsData @ 1482947e0

void __thiscall UBodySetup::InvalidatePhysicsData(UBodySetup *this)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FGuid *pFVar5;
  FGuid local_18;
  
  ClearPhysicsMeshes(this);
  pFVar5 = FGuid::NewGuid(&local_18);
  uVar2 = pFVar5->B;
  uVar3 = pFVar5->C;
  uVar4 = pFVar5->D;
  (this->BodySetupGuid).A = pFVar5->A;
  (this->BodySetupGuid).B = uVar2;
  (this->BodySetupGuid).C = uVar3;
  (this->BodySetupGuid).D = uVar4;
  if (this->bSharedCookedData == '\0') {
    FFormatContainer::FlushData(&this->CookedFormatData);
    return;
  }
  return;
}

// PostInitProperties @ 14829b820

void __thiscall UBodySetup::PostInitProperties(UBodySetup *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FString *pFVar6;
  FGuid *pFVar7;
  TStringView<wchar_t> local_38;
  FString local_28;
  FGuid local_18;
  
  UObject::PostInitProperties((UObject *)this);
  bVar5 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar5) {
    pFVar6 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
    local_38.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    iVar1 = (pFVar6->Data).ArrayNum;
    local_38.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_38.Size = 0;
    }
    pFVar7 = FGuid::NewDeterministicGuid(&local_18,&local_38,0);
    uVar2 = pFVar7->B;
    uVar3 = pFVar7->C;
    uVar4 = pFVar7->D;
    (this->BodySetupGuid).A = pFVar7->A;
    (this->BodySetupGuid).B = uVar2;
    (this->BodySetupGuid).C = uVar3;
    (this->BodySetupGuid).D = uVar4;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PostLoad @ 14829b8b0

void __thiscall UBodySetup::PostLoad(UBodySetup *this)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  uint uVar4;
  FPackageFileVersion FVar5;
  ITargetPlatformManagerModule *pIVar6;
  longlong *plVar7;
  FName *pFVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  undefined1 local_38 [24];
  
  FLLMScope::FLLMScope(local_res8,Physics,false,None,Default,true);
  FMemScope::FMemScope(local_res10,Physics,true);
  UObject::PostLoad((UObject *)this);
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this->_padding_);
  }
  FBodyInstance::FixupData(&this->DefaultInstance,(UObject *)this);
  FVar5 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar5 < 0x10b) {
    if (this->bAlwaysFullAnimWeight_DEPRECATED == 0) {
      *(byte *)&this->_padding_ = ~(byte)(this->DefaultInstance)._padding_ & 1;
    }
    else {
      *(undefined1 *)&this->_padding_ = 2;
    }
  }
  FVar5 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if ((*(int *)FVar5 < 0x11c) &&
     (TVar3 = FBodyInstance::GetCollisionEnabled_CheckOwner(&this->DefaultInstance),
     TVar3 == NoCollision)) {
    *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  }
  pIVar6 = GetTargetPlatformManager(true);
  if (pIVar6 != (ITargetPlatformManagerModule *)0x0) {
    plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0x90))(pIVar6);
    uVar11 = 0;
    iVar9 = (int)plVar7[1];
    if (0 < iVar9) {
      lVar10 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar11 < iVar9) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (FName *)(**(code **)(*(longlong *)(*(longlong *)(*plVar7 + lVar10) + 8) + 0x120))
                                    (*(longlong *)(*plVar7 + lVar10) + 8,local_38,this);
        GetCookedData(this,*pFVar8);
        iVar9 = (int)plVar7[1];
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar11 < iVar9);
    }
  }
  if (GEnableDeferredPhysicsCreation == 0) {
    (**(code **)(this->_padding_ + 0x2b0))(this);
  }
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ProcessFormatData_Chaos @ 14829d260

bool __thiscall
UBodySetup::ProcessFormatData_Chaos(UBodySetup *this,FChaosDerivedDataReader<float,3> *param_1)

{
  FinishCreatingPhysicsMeshes_Chaos
            (this,&param_1->ConvexGeometries,&param_1->TriMeshGeometries,&param_1->UVInfo,
             &param_1->FaceRemap);
  return true;
}

// ProcessFormatData_Chaos @ 14829d290

bool __thiscall
UBodySetup::ProcessFormatData_Chaos(UBodySetup *this,TBulkData<unsigned_char> *param_1)

{
  FChaosDerivedDataReader<float,3> local_98;
  
  if (param_1->field_0x13 != '\0') {
    return false;
  }
  FChaosDerivedDataReader<float,3>::FChaosDerivedDataReader<float,3>(&local_98,(FBulkData *)param_1)
  ;
  FinishCreatingPhysicsMeshes_Chaos
            (this,&local_98.ConvexGeometries,&local_98.TriMeshGeometries,&local_98.UVInfo,
             &local_98.FaceRemap);
  FChaosDerivedDataReader<float,3>::~FChaosDerivedDataReader<float,3>(&local_98);
  return true;
}

// RemoveSimpleCollision @ 1482a5830

void __thiscall UBodySetup::RemoveSimpleCollision(UBodySetup *this)

{
  (**(code **)(this->_padding_ + 0x2d0))();
  FKAggregateGeom::EmptyElements(&this->AggGeom);
  return;
}

// RescaleSimpleCollision @ 1482a5ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UBodySetup::RescaleSimpleCollision(UBodySetup *this,TVector<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  bool bVar28;
  int iVar29;
  undefined7 extraout_var;
  uint uVar30;
  uint uVar31;
  FKConvexElem *this_00;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  double dVar35;
  double dVar36;
  uint uVar37;
  float fVar38;
  uint uVar40;
  double dVar39;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  
  auVar27 = ___xmm_7ff00000000000007ff0000000000000;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if ((((this->BuildScale3D).field0_0x0._s_0.X != dVar1) ||
      ((this->BuildScale3D).field0_0x0._s_0.Y != (param_1->field0_0x0)._s_0.Y)) ||
     ((this->BuildScale3D).field0_0x0._s_0.Z != (param_1->field0_0x0)._s_0.Z)) {
    uVar32 = 0;
    iVar29 = (this->AggGeom).ConvexElems.ArrayNum;
    dVar1 = dVar1 / (this->BuildScale3D).field0_0x0._s_0.X;
    dVar17 = (param_1->field0_0x0)._s_0.Y / (this->BuildScale3D).field0_0x0._s_0.Y;
    dVar18 = (param_1->field0_0x0)._s_0.Z / (this->BuildScale3D).field0_0x0._s_0.Z;
    if (0 < iVar29) {
      lVar33 = 0;
      do {
        uVar30 = ~uVar32 >> 0x1f;
        uVar31 = 0;
        if ((int)uVar32 < iVar29) {
          uVar31 = uVar30;
        }
        if (uVar31 == 0) {
          uVar30 = 0x506106c8;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar31 = (uint)CONCAT71(extraout_var,bVar28);
          if (bVar28) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        this_00 = (FKConvexElem *)((this->AggGeom).ConvexElems.AllocatorInstance.Data + lVar33);
        auVar2 = *(undefined1 (*) [16])(this_00->Transform).Rotation.ZW.m128d_f64;
        auVar3 = *(undefined1 (*) [16])(this_00->Transform).Rotation.XY.m128d_f64;
        uVar19 = *(uint *)(this_00->Transform).Scale3D.XY.m128d_f64;
        uVar20 = *(uint *)((longlong)(this_00->Transform).Scale3D.XY.m128d_f64 + 4);
        uVar21 = *(uint *)((this_00->Transform).Scale3D.XY.m128d_f64 + 1);
        uVar22 = *(uint *)((longlong)(this_00->Transform).Scale3D.XY.m128d_f64 + 0xc);
        uVar23 = *(uint *)(this_00->Transform).Scale3D.ZW.m128d_f64;
        uVar24 = *(uint *)((longlong)(this_00->Transform).Scale3D.ZW.m128d_f64 + 4);
        uVar25 = *(uint *)((this_00->Transform).Scale3D.ZW.m128d_f64 + 1);
        uVar26 = *(uint *)((longlong)(this_00->Transform).Scale3D.ZW.m128d_f64 + 0xc);
        dVar14 = (this_00->Transform).Translation.ZW.m128d_f64[0] * dVar18;
        dVar36 = (this_00->Transform).Translation.XY.m128d_f64[1] * dVar17;
        uVar37 = auVar27._0_4_;
        uVar40 = auVar27._4_4_;
        uVar41 = auVar27._8_4_;
        uVar42 = auVar27._12_4_;
        dVar15 = (this_00->Transform).Translation.XY.m128d_f64[0] * dVar1;
        dVar39 = auVar27._0_8_;
        dVar35 = auVar27._8_8_;
        lVar34 = -(ulonglong)
                  ((double)CONCAT44(uVar42 & auVar3._12_4_,uVar41 & auVar3._8_4_) == dVar35);
        auVar10._8_4_ = (int)lVar34;
        auVar10._0_8_ =
             -(ulonglong)((double)CONCAT44(uVar40 & auVar3._4_4_,uVar37 & auVar3._0_4_) == dVar39);
        auVar10._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
        iVar29 = movmskpd(uVar31,auVar10);
        uVar43 = SUB84(dVar36,0);
        uVar44 = (uint)((ulonglong)dVar36 >> 0x20);
        lVar34 = -(ulonglong)
                  ((double)CONCAT44(uVar42 & auVar2._12_4_,uVar41 & auVar2._8_4_) == dVar35);
        auVar6._8_4_ = (int)lVar34;
        auVar6._0_8_ = -(ulonglong)
                        ((double)CONCAT44(uVar40 & auVar2._4_4_,uVar37 & auVar2._0_4_) == dVar39);
        auVar6._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
        uVar31 = movmskpd(uVar30,auVar6);
        if ((uVar31 & 0x3fffffff) == 0 && iVar29 == 0) {
          auVar7._8_4_ = (int)-(ulonglong)(dVar35 == 0.0);
          auVar7._0_8_ = -(ulonglong)
                          ((double)CONCAT44(uVar40 & (uint)((ulonglong)dVar14 >> 0x20),
                                            uVar37 & SUB84(dVar14,0)) == dVar39);
          auVar7._12_4_ = (int)(-(ulonglong)(dVar35 == 0.0) >> 0x20);
          uVar31 = movmskpd(0,auVar7);
          lVar34 = -(ulonglong)((double)CONCAT44(uVar42 & uVar44,uVar41 & uVar43) == dVar35);
          auVar11._8_4_ = (int)lVar34;
          auVar11._0_8_ =
               -(ulonglong)
                ((double)CONCAT44(uVar40 & (uint)((ulonglong)dVar15 >> 0x20),
                                  uVar37 & SUB84(dVar15,0)) == dVar39);
          auVar11._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
          iVar29 = movmskpd(iVar29,auVar11);
          if ((uVar31 & 0x3fffffff) != 0 || iVar29 != 0) goto LAB_1482a5f89;
          lVar34 = -(ulonglong)((double)CONCAT44(uVar42 & uVar26,uVar41 & uVar25) == dVar35);
          auVar8._8_4_ = (int)lVar34;
          auVar8._0_8_ = -(ulonglong)((double)CONCAT44(uVar40 & uVar24,uVar37 & uVar23) == dVar39);
          auVar8._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
          uVar31 = movmskpd(0,auVar8);
          lVar34 = -(ulonglong)((double)CONCAT44(uVar42 & uVar22,uVar41 & uVar21) == dVar35);
          auVar12._8_4_ = (int)lVar34;
          auVar12._0_8_ = -(ulonglong)((double)CONCAT44(uVar40 & uVar20,uVar37 & uVar19) == dVar39);
          auVar12._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
          iVar29 = movmskpd(iVar29,auVar12);
          if ((uVar31 & 0x3fffffff) != 0 || iVar29 != 0) goto LAB_1482a5f89;
          dVar36 = auVar2._0_8_ * auVar2._0_8_ + auVar3._0_8_ * auVar3._0_8_;
          dVar39 = auVar2._8_8_ * auVar2._8_8_ + auVar3._8_8_ * auVar3._8_8_;
          dVar35 = dVar39 + dVar36;
          dVar36 = dVar36 + dVar39;
          dVar39 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar35;
          dVar16 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar36;
          lVar34 = -(ulonglong)
                    ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
                    (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                                     SUB84(dVar16,0) & _UNK_15061cc88));
          auVar13._8_4_ = (int)lVar34;
          auVar13._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar39,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar13._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
          uVar31 = movmskpd(0,auVar13);
          dVar35 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar35;
          dVar36 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar36;
          lVar34 = -(ulonglong)
                    ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                    (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & _UNK_15061cc8c,
                                     SUB84(dVar36,0) & _UNK_15061cc88));
          auVar9._8_4_ = (int)lVar34;
          auVar9._0_8_ = -(ulonglong)
                          ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                          (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar35,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar9._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
          iVar29 = movmskpd(iVar29,auVar9);
          if ((uVar31 & 0x3fffffff) != 0 || iVar29 != 0) goto LAB_1482a5f89;
        }
        else {
LAB_1482a5f89:
          bVar28 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5523523784574763146>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\ConvexElem.h"
                              ,0x8a,"InTransform.IsValid()");
          if (bVar28) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        *(undefined1 (*) [16])(this_00->Transform).Rotation.XY.m128d_f64 = auVar3;
        uVar31 = 0;
        *(undefined1 (*) [16])(this_00->Transform).Rotation.ZW.m128d_f64 = auVar2;
        auVar2._8_4_ = uVar43;
        auVar2._0_8_ = dVar15;
        auVar2._12_4_ = uVar44;
        *(undefined1 (*) [16])(this_00->Transform).Translation.XY.m128d_f64 = auVar2;
        (this_00->Transform).Translation.ZW.m128d_f64[0] = dVar14;
        (this_00->Transform).Translation.ZW.m128d_f64[1] = 0.0;
        *(uint *)(this_00->Transform).Scale3D.XY.m128d_f64 = uVar19;
        *(uint *)((longlong)(this_00->Transform).Scale3D.XY.m128d_f64 + 4) = uVar20;
        *(uint *)((this_00->Transform).Scale3D.XY.m128d_f64 + 1) = uVar21;
        *(uint *)((longlong)(this_00->Transform).Scale3D.XY.m128d_f64 + 0xc) = uVar22;
        *(uint *)(this_00->Transform).Scale3D.ZW.m128d_f64 = uVar23;
        *(uint *)((longlong)(this_00->Transform).Scale3D.ZW.m128d_f64 + 4) = uVar24;
        *(uint *)((this_00->Transform).Scale3D.ZW.m128d_f64 + 1) = uVar25;
        *(uint *)((longlong)(this_00->Transform).Scale3D.ZW.m128d_f64 + 0xc) = uVar26;
        iVar29 = (this_00->VertexData).ArrayNum;
        if (0 < iVar29) {
          lVar34 = 0;
          do {
            uVar30 = 0;
            if ((int)uVar31 < iVar29) {
              uVar30 = ~uVar31 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (this_00->VertexData).AllocatorInstance.Data;
            uVar31 = uVar31 + 1;
            *(double *)(pFVar4 + lVar34) = dVar1 * *(double *)(pFVar4 + lVar34);
            *(double *)(pFVar4 + lVar34 + 8) = dVar17 * *(double *)(pFVar4 + lVar34 + 8);
            *(double *)(pFVar4 + lVar34 + 0x10) = dVar18 * *(double *)(pFVar4 + lVar34 + 0x10);
            lVar34 = lVar34 + 0x18;
            iVar29 = (this_00->VertexData).ArrayNum;
          } while ((int)uVar31 < iVar29);
        }
        FKConvexElem::UpdateElemBox(this_00);
        iVar29 = (this->AggGeom).ConvexElems.ArrayNum;
        uVar32 = uVar32 + 1;
        lVar33 = lVar33 + 0x100;
      } while ((int)uVar32 < iVar29);
    }
    dVar36 = dVar1;
    if (dVar1 <= dVar17) {
      dVar36 = dVar17;
    }
    uVar32 = 0;
    if (dVar36 <= dVar18) {
      dVar36 = dVar18;
    }
    fVar38 = (float)dVar36;
    if (0 < (this->AggGeom).SphereElems.ArrayNum) {
      lVar33 = 0;
      do {
        uVar31 = 0;
        if ((int)uVar32 < (this->AggGeom).SphereElems.ArrayNum) {
          uVar31 = ~uVar32 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->AggGeom).SphereElems.AllocatorInstance.Data;
        uVar32 = uVar32 + 1;
        *(double *)(pFVar4 + lVar33 + 0x30) = dVar1 * *(double *)(pFVar4 + lVar33 + 0x30);
        *(double *)(pFVar4 + lVar33 + 0x38) = dVar17 * *(double *)(pFVar4 + lVar33 + 0x38);
        *(double *)(pFVar4 + lVar33 + 0x40) = dVar18 * *(double *)(pFVar4 + lVar33 + 0x40);
        *(float *)(pFVar4 + lVar33 + 0x48) = fVar38 * *(float *)(pFVar4 + lVar33 + 0x48);
        lVar33 = lVar33 + 0x50;
      } while ((int)uVar32 < (this->AggGeom).SphereElems.ArrayNum);
    }
    iVar29 = (this->AggGeom).BoxElems.ArrayNum;
    uVar32 = 0;
    if (0 < iVar29) {
      lVar33 = 0;
      do {
        uVar31 = 0;
        if ((int)uVar32 < iVar29) {
          uVar31 = ~uVar32 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->AggGeom).BoxElems.AllocatorInstance.Data;
        uVar32 = uVar32 + 1;
        *(double *)(pFVar4 + lVar33 + 0x38) = dVar17 * *(double *)(pFVar4 + lVar33 + 0x38);
        *(double *)(pFVar4 + lVar33 + 0x30) = dVar1 * *(double *)(pFVar4 + lVar33 + 0x30);
        *(double *)(pFVar4 + lVar33 + 0x40) = dVar18 * *(double *)(pFVar4 + lVar33 + 0x40);
        *(float *)(pFVar4 + lVar33 + 0x60) =
             (float)((double)*(float *)(pFVar4 + lVar33 + 0x60) * dVar1);
        *(float *)(pFVar4 + lVar33 + 100) =
             (float)((double)*(float *)(pFVar4 + lVar33 + 100) * dVar17);
        *(float *)(pFVar4 + lVar33 + 0x68) =
             (float)((double)*(float *)(pFVar4 + lVar33 + 0x68) * dVar18);
        lVar33 = lVar33 + 0x70;
        iVar29 = (this->AggGeom).BoxElems.ArrayNum;
      } while ((int)uVar32 < iVar29);
    }
    iVar29 = (this->AggGeom).SphylElems.ArrayNum;
    uVar32 = 0;
    if (0 < iVar29) {
      lVar33 = 0;
      do {
        uVar31 = 0;
        if ((int)uVar32 < iVar29) {
          uVar31 = ~uVar32 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->AggGeom).SphylElems.AllocatorInstance.Data;
        uVar32 = uVar32 + 1;
        *(double *)(pFVar4 + lVar33 + 0x30) = dVar1 * *(double *)(pFVar4 + lVar33 + 0x30);
        *(double *)(pFVar4 + lVar33 + 0x38) = dVar17 * *(double *)(pFVar4 + lVar33 + 0x38);
        *(double *)(pFVar4 + lVar33 + 0x40) = dVar18 * *(double *)(pFVar4 + lVar33 + 0x40);
        *(float *)(pFVar4 + lVar33 + 100) = fVar38 * *(float *)(pFVar4 + lVar33 + 100);
        *(float *)(pFVar4 + lVar33 + 0x60) = fVar38 * *(float *)(pFVar4 + lVar33 + 0x60);
        lVar33 = lVar33 + 0x68;
        iVar29 = (this->AggGeom).SphylElems.ArrayNum;
      } while ((int)uVar32 < iVar29);
    }
    dVar17 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (this->BuildScale3D).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->BuildScale3D).field0_0x0._s_0.Y = dVar17;
    (this->BuildScale3D).field0_0x0._s_0.Z = dVar1;
  }
  return;
}

// RuntimeCookPhysics_Chaos @ 1482a80f0

bool __thiscall UBodySetup::RuntimeCookPhysics_Chaos(UBodySetup *this)

{
  FCookHelper local_118;
  
  Chaos::FCookHelper::FCookHelper(&local_118,this);
  Chaos::FCookHelper::Cook(&local_118);
  FinishCreatingPhysicsMeshes_Chaos(this,&local_118);
  Chaos::FCookHelper::~FCookHelper(&local_118);
  return true;
}

// Serialize @ 1482a8da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBodySetup::Serialize(UBodySetup *this,FArchive *param_1)

{
  uint *puVar1;
  FGuid *pFVar2;
  TUniquePtr<FChaosDerivedDataReader<float,3>,TDefaultDelete<FChaosDerivedDataReader<float,3>_>_>
  *pTVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> TVar9;
  bool bVar10;
  int iVar11;
  FGuid *pFVar12;
  FChaosArchiveContext *pFVar13;
  FImplicitObject *pFVar14;
  FBulkData *pFVar15;
  FChaosDerivedDataReader<float,3> *this_00;
  FChaosArchiveContext *this_01;
  uint uVar16;
  bool bVar17;
  bool local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [4];
  ForAnyElementType local_148;
  undefined8 local_140;
  FImplicitObject *local_138;
  FString local_130;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  undefined8 local_108 [2];
  TStringView<wchar_t> local_f8;
  FGuid local_e8;
  FChaosArchive local_d8;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  pFVar2 = &this->BodySetupGuid;
  ::operator<<(param_1,pFVar2);
  this_01 = (FChaosArchiveContext *)0x0;
  if (((param_1->field_0x28 & 1) != 0) &&
     ((((this->BodySetupGuid).D == 0 && (this->BodySetupGuid).C == 0) &&
      (this->BodySetupGuid).B == 0) && pFVar2->A == 0)) {
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_130,(UObject *)0x0);
    if (4 < (byte)LogPhysics._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
    }
    local_118 = local_130.Data.AllocatorInstance.Data;
    iStack_110 = local_130.Data.ArrayNum + -1;
    if (local_130.Data.ArrayNum == 0) {
      iStack_110 = 0;
    }
    local_f8._12_4_ = uStack_10c;
    local_f8.Size = iStack_110;
    local_f8.DataPtr = (wchar_t *)local_130.Data.AllocatorInstance.Data;
    pFVar12 = FGuid::NewDeterministicGuid(&local_e8,&local_f8,0);
    uVar16 = pFVar12->B;
    uVar7 = pFVar12->C;
    uVar8 = pFVar12->D;
    pFVar2->A = pFVar12->A;
    pFVar2->B = uVar16;
    (this->BodySetupGuid).C = uVar7;
    (this->BodySetupGuid).D = uVar8;
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
  }
  bVar17 = SUB41(uVar16,0);
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_res18[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res18[0] = uVar16;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar16 = local_res18[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_1482a8f3e;
  }
  else {
    uVar16 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  bVar17 = uVar16 != 0;
LAB_1482a8f3e:
  if (bVar17 != false) {
    if (0x11e < *(int *)&param_1->field_0x40) {
      local_res8[0] = this->bHasCookedCollisionData;
      ::operator<<(param_1,local_res8);
      this->bHasCookedCollisionData = local_res8[0];
    }
    FFormatContainer::Serialize
              (&this->CookedFormatData,param_1,(UObject *)this,
               (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0,true,0,true,false);
  }
  iVar11 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((0x29 < iVar11) &&
     (iVar11 = FArchiveState::CustomVer
                         ((FArchiveState *)param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID)
     , iVar11 < 1)) {
    local_148.Data = (FScriptContainerElement *)0x0;
    local_140 = 0;
    FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_d8,param_1);
    local_d8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
    pFVar13 = ::operator_new(0x158);
    local_d8.Context.Ptr = this_01;
    if (pFVar13 != (FChaosArchiveContext *)0x0) {
      local_d8.Context.Ptr = Chaos::FChaosArchiveContext::FChaosArchiveContext(pFVar13);
    }
    local_res10[0] = 0;
    if ((param_1->field_0x28 & 1) != 0) {
      if (local_140 < 0) {
        DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
                  ((TRefCountPtr<Chaos::FImplicitObject> *)local_148.Data,(int)local_140);
        if (local_140._4_4_ != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_148,0,(int *)((longlong)&local_140 + 4));
        }
      }
      else {
        DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
                  ((TRefCountPtr<Chaos::FImplicitObject> *)local_148.Data,(int)local_140);
      }
      plVar5 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res10);
        }
      }
      else {
        local_res10[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      pFVar13 = this_01;
      if (0 < (int)local_res10[0]) {
        do {
          pFVar14 = Chaos::FImplicitObject::SerializationFactory(&local_d8,(FImplicitObject *)0x0);
          if (pFVar14 != (FImplicitObject *)0x0) {
            (**(code **)(pFVar14->_padding_ + 0x108))(pFVar14,param_1);
            LOCK();
            *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
            UNLOCK();
            local_138 = pFVar14;
            if (((local_148.Data <= (FScriptContainerElement *)&local_138) &&
                ((FScriptContainerElement *)&local_138 <
                 local_148.Data + (longlong)local_140._4_4_ * 8)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar11 = (int)local_140;
            if ((int)local_140 == local_140._4_4_) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_148,(int *)((longlong)&local_140 + 4));
            }
            local_140 = CONCAT44(local_140._4_4_,iVar11 + 1);
            *(undefined8 *)(local_148.Data + (longlong)iVar11 * 8) = 0;
            *(FImplicitObject **)(local_148.Data + (longlong)iVar11 * 8) = local_138;
          }
          uVar16 = (int)pFVar13 + 1;
          pFVar13 = (FChaosArchiveContext *)(ulonglong)uVar16;
        } while ((int)uVar16 < (int)local_res10[0]);
      }
    }
    TVar9.Ptr = local_d8.Context.Ptr;
    if (local_d8.Context.Ptr != (FChaosArchiveContext *)0x0) {
      Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_d8.Context.Ptr);
      ::operator_delete(TVar9.Ptr,0x158);
    }
    FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_d8);
    DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
              ((TRefCountPtr<Chaos::FImplicitObject> *)local_148.Data,(int)local_140);
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data);
    }
  }
  if (((bVar17 != false) && ((param_1->field_0x28 & 1) != 0)) &&
     (pFVar15 = (FBulkData *)GetCookedFormatData(this), pFVar15 != (FBulkData *)0x0)) {
    this_00 = ::operator_new(0x88);
    if (this_00 != (FChaosDerivedDataReader<float,3> *)0x0) {
      this_01 = (FChaosArchiveContext *)
                FChaosDerivedDataReader<float,3>::FChaosDerivedDataReader<float,3>(this_00,pFVar15);
    }
    pTVar3 = &this->ChaosDerivedDataReader;
    if (pTVar3 == (TUniquePtr<FChaosDerivedDataReader<float,3>,TDefaultDelete<FChaosDerivedDataReader<float,3>_>_>
                   *)local_108) {
      if (this_01 == (FChaosArchiveContext *)0x0) {
        return;
      }
      FChaosDerivedDataReader<float,3>::~FChaosDerivedDataReader<float,3>
                ((FChaosDerivedDataReader<float,3> *)this_01);
    }
    else {
      pFVar13 = (FChaosArchiveContext *)pTVar3->Ptr;
      pTVar3->Ptr = (FChaosDerivedDataReader<float,3> *)this_01;
      if (pFVar13 == (FChaosArchiveContext *)0x0) {
        return;
      }
      FChaosDerivedDataReader<float,3>::~FChaosDerivedDataReader<float,3>
                ((FChaosDerivedDataReader<float,3> *)pFVar13);
      this_01 = pFVar13;
    }
    ::operator_delete(this_01,0x88);
  }
  return;
}

// Serialize @ 1482a92c0

void __thiscall UBodySetup::Serialize(UBodySetup *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUBodySetup @ 1482b1cc0

void __cdecl UBodySetup::StaticRegisterNativesUBodySetup(void)

{
  return;
}

// TryGetCookedData @ 1482b43f0

FBodySetupTryCookResult * __thiscall
UBodySetup::TryGetCookedData
          (UBodySetup *this,FBodySetupTryCookResult *__return_storage_ptr__,FName param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  void *pvVar4;
  FBulkData *this_01;
  FBodySetupTryCookResult *pFVar5;
  long64 lVar6;
  FBulkData *pFVar7;
  FFormatContainer *this_02;
  
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((!bVar2) && (this->bNeverNeedsCookedCollisionData == '\0')) {
    this_00 = (UObjectBaseUtility *)this->_padding_;
    if (this_00 == (UObjectBaseUtility *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
      pvVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
    }
    if ((((this->AggGeom).ConvexElems.ArrayNum != 0) || (pvVar4 != (void *)0x0)) &&
       (this->bHasCookedCollisionData != '\0')) {
      this_02 = this->CookedFormatDataOverride;
      if (this_02 == (FFormatContainer *)0x0) {
        this_02 = &this->CookedFormatData;
      }
      IsRuntime(this);
      this_01 = (FBulkData *)FFormatContainer::GetFormat(this_02,param_1);
      if (this_01 == (FBulkData *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                           ,0x5d1,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FBodySetupTryCookResult *)(*pcVar1)();
          return pFVar5;
        }
      }
      lVar6 = FBulkData::GetBulkDataSize(this_01);
      pFVar7 = (FBulkData *)0x0;
      if (0 < lVar6) {
        pFVar7 = this_01;
      }
      __return_storage_ptr__->Data = (TBulkData<unsigned_char> *)pFVar7;
      goto LAB_1482b44ce;
    }
  }
  __return_storage_ptr__->Data = (TBulkData<unsigned_char> *)0x0;
LAB_1482b44ce:
  __return_storage_ptr__->CookResult = NoError;
  return __return_storage_ptr__;
}

// UpdateTriMeshVertices @ 1482bdb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBodySetup::UpdateTriMeshVertices
          (UBodySetup *this,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_UpdateTriMeshVertices> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_48;
  FName local_40;
  FName local_38;
  FStatMessage local_28;
  
  FVar8 = StatPtr_STAT_UpdateTriMeshVertices;
  if (StatPtr_STAT_UpdateTriMeshVertices ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateTriMeshVertices>)0x0) {
    pFVar7 = ::FName::FName(&local_40,"STAT_UpdateTriMeshVertices");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_UpdateTriMeshVertices>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateTriMeshVertices,*pFVar7,
                       L"UpdateTriMeshVertices","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar10.Value;
        local_res20.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                   ,0x432);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_48.s.LowPart = FVar10.Value;
      local_48.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_1482bdc70;
    }
  }
  bVar4 = false;
  FVar11 = local_38;
LAB_1482bdc70:
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_60691740478143436>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodySetup.cpp"
                     ,0x434,"false");
  if (bVar6) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_48);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_48.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_48.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_48.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_48.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// __VTableCtorCaller @ 1482c02b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UBodySetup::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBodySetupCore *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UBodySetupCore *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBodySetupCore *)0x0) {
    UBodySetupCore::UBodySetupCore(this,param_1);
    this->_padding_ = (longlong)&___7UBodySetup__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].BoneName.ComparisonIndex = 0;
    this[1].BoneName.Number = 0;
    this[1].PhysicsType = '\0';
    this[1].CollisionTraceFlag = '\0';
    this[1].CollisionReponse = '\0';
    *(undefined5 *)&this[1].field_0x33 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].BoneName.ComparisonIndex = 0;
    this[2].BoneName.Number = 0;
    this[2].PhysicsType = '\0';
    this[2].CollisionTraceFlag = '\0';
    this[2].CollisionReponse = '\0';
    *(undefined5 *)&this[2].field_0x33 = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined1 *)&this[3].BoneName.ComparisonIndex.Value = 0;
    this[4]._padding_ = 0;
    *(undefined1 *)&this[4]._padding_ = 0;
    *(undefined8 *)((longlong)&this[4]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x3f800000;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4].BoneName.ComparisonIndex = 0;
    this[4].BoneName.Number = 0;
    this[4].PhysicsType = '\0';
    this[4].CollisionTraceFlag = '\0';
    this[4].CollisionReponse = '\0';
    *(undefined5 *)&this[4].field_0x33 = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5].BoneName.ComparisonIndex = 0;
    this[5].BoneName.Number = 0;
    this[5].PhysicsType = '\0';
    this[5].CollisionTraceFlag = '\0';
    this[5].CollisionReponse = '\0';
    *(undefined5 *)&this[5].field_0x33 = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    FBodyInstance::FBodyInstance((FBodyInstance *)&this[6]._padding_);
    this[0xe]._padding_ = 0;
    this[0xe]._padding_ = 0;
    this[0xe]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// CreateFromModel @ 1482f1880

bool __thiscall UBodySetup::CreateFromModel(UBodySetup *this,UModel *param_1,bool param_2)

{
  int *piVar1;
  bool bVar2;
  TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_2) {
    RemoveSimpleCollision(this);
  }
  bVar2 = false;
  if ((param_1 != (UModel *)0x0) && (bVar2 = false, 0 < (param_1->Nodes).ArrayNum)) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    bVar2 = ModelToHullsWorker(&this->AggGeom,param_1,0,param_1->RootOutside,&local_18);
    if (!bVar2) {
      DestructItems<FKConvexElem,int>
                ((FKConvexElem *)(this->AggGeom).ConvexElems.AllocatorInstance.Data,
                 (this->AggGeom).ConvexElems.ArrayNum);
      piVar1 = &(this->AggGeom).ConvexElems.ArrayMax;
      (this->AggGeom).ConvexElems.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x100,0x10,0,&(this->AggGeom).ConvexElems.AllocatorInstance,0,piVar1);
      }
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x2d0))(this);
  return bVar2;
}

