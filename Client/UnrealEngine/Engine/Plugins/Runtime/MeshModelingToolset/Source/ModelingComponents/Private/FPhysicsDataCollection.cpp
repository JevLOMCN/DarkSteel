// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// ClearAggregate @ 14caf3fb0

void __thiscall FPhysicsDataCollection::ClearAggregate(FPhysicsDataCollection *this)

{
  ForAnyElementType FVar1;
  FKAggregateGeom local_a8;
  
  local_a8.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.SphereElems.ArrayNum = 0;
  local_a8.SphereElems.ArrayMax = 0;
  local_a8.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.BoxElems.ArrayNum = 0;
  local_a8.BoxElems.ArrayMax = 0;
  local_a8.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.SphylElems.ArrayNum = 0;
  local_a8.SphylElems.ArrayMax = 0;
  local_a8.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ConvexElems.ArrayNum = 0;
  local_a8.ConvexElems.ArrayMax = 0;
  local_a8.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.TaperedCapsuleElems.ArrayNum = 0;
  local_a8.TaperedCapsuleElems.ArrayMax = 0;
  local_a8.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.LevelSetElems.ArrayNum = 0;
  local_a8.LevelSetElems.ArrayMax = 0;
  local_a8.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.SkinnedLevelSetElems.ArrayNum = 0;
  local_a8.SkinnedLevelSetElems.ArrayMax = 0;
  local_a8.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.MLLevelSetElems.ArrayNum = 0;
  local_a8.MLLevelSetElems.ArrayMax = 0;
  local_a8.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_a8.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_a8.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_a8.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  FKAggregateGeom::FreeRenderInfo(&this->AggGeom);
  FKAggregateGeom::CloneAgg(&this->AggGeom,&local_a8);
  FVar1.Data = local_a8.SkinnedTriangleMeshElems.AllocatorInstance.Data;
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)local_a8.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_a8.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)FVar1.Data != (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  FVar1.Data = local_a8.MLLevelSetElems.AllocatorInstance.Data;
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_a8.MLLevelSetElems.AllocatorInstance.Data,
             local_a8.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)FVar1.Data != (FKMLLevelSetElem *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  FVar1.Data = local_a8.SkinnedLevelSetElems.AllocatorInstance.Data;
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_a8.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_a8.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)FVar1.Data != (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  FVar1.Data = local_a8.LevelSetElems.AllocatorInstance.Data;
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_a8.LevelSetElems.AllocatorInstance.Data,
             local_a8.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)FVar1.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  FVar1.Data = local_a8.TaperedCapsuleElems.AllocatorInstance.Data;
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_a8.TaperedCapsuleElems.AllocatorInstance.Data,
             local_a8.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)FVar1.Data != (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  FVar1.Data = local_a8.ConvexElems.AllocatorInstance.Data;
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_a8.ConvexElems.AllocatorInstance.Data,
             local_a8.ConvexElems.ArrayNum);
  if ((FKConvexElem *)FVar1.Data != (FKConvexElem *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  FVar1.Data = local_a8.SphylElems.AllocatorInstance.Data;
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_a8.SphylElems.AllocatorInstance.Data,local_a8.SphylElems.ArrayNum)
  ;
  if ((FKSphylElem *)FVar1.Data != (FKSphylElem *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  FVar1.Data = local_a8.BoxElems.AllocatorInstance.Data;
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_a8.BoxElems.AllocatorInstance.Data,local_a8.BoxElems.ArrayNum);
  if ((FKBoxElem *)FVar1.Data != (FKBoxElem *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  FVar1.Data = local_a8.SphereElems.AllocatorInstance.Data;
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_a8.SphereElems.AllocatorInstance.Data,
             local_a8.SphereElems.ArrayNum);
  if ((FKSphereElem *)FVar1.Data != (FKSphereElem *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  return;
}

// CopyGeometryFromExisting @ 14cafb7e0

void __thiscall
FPhysicsDataCollection::CopyGeometryFromExisting
          (FPhysicsDataCollection *this,FPhysicsDataCollection *param_1)

{
  UE::Geometry::FSimpleShapeSet3d::operator=(&this->Geometry,&param_1->Geometry);
  FKAggregateGeom::FreeRenderInfo(&this->AggGeom);
  FKAggregateGeom::CloneAgg(&this->AggGeom,&param_1->AggGeom);
  return;
}

// CopyGeometryToAggregate @ 14cafb830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FPhysicsDataCollection::CopyGeometryToAggregate(FPhysicsDataCollection *this)

{
  int *piVar1;
  TArray<FKBoxElem,TSizedDefaultAllocator<32>_> *pTVar2;
  FKAggregateGeom *pFVar3;
  TArray<FKSphylElem,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FKConvexElem *pFVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  FConvex *pFVar17;
  bool bVar18;
  int iVar19;
  TRotator<double> *pTVar20;
  longlong lVar21;
  FKLevelSetElem *this_00;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  FDynamicMesh3 *pFVar24;
  TTransform<double> *pTVar25;
  FScriptContainerElement *pFVar26;
  FDynamicMesh3 *pFVar27;
  TTransform<double> *pTVar28;
  undefined1 auStack_458 [32];
  FKConvexElem *local_438;
  FKConvexElem *local_430;
  longlong local_428;
  longlong local_420;
  undefined8 local_418;
  undefined1 local_408;
  undefined1 local_407;
  undefined1 local_406;
  undefined1 local_405;
  undefined1 local_404 [12];
  undefined1 local_3f8 [25];
  FScriptContainerElement local_3df;
  undefined4 local_3d8;
  undefined1 *local_3d0;
  TVector<double>_u_0 local_3c8;
  double local_3b0;
  TVector<double>_u_0 TStack_3a8;
  undefined1 local_388 [25];
  FScriptContainerElement local_36f;
  undefined4 local_368;
  undefined1 *local_360;
  TVector<double>_u_0 local_358;
  float local_340;
  undefined1 local_338 [48];
  TVector<double>_u_0 local_308;
  double local_2f0;
  TVector<double>_u_0 TStack_2e8;
  TVector<double>_u_0 local_2d0;
  FScriptContainerElement *local_2b8;
  TQuaternion<double>_u_0 local_2b0;
  TQuat<double> local_288;
  TQuat<double> local_268;
  TVector<double>_u_0 local_248;
  TRotator<double> local_230;
  TRotator<double> local_218;
  undefined1 local_1f8 [32];
  Type local_1d8;
  undefined1 *local_1d0;
  __m128d local_1c8;
  __m128d local_1b8;
  __m128d local_1a8;
  __m128d local_198;
  __m128d local_188;
  __m128d local_178;
  FLevelSet *local_168;
  FSharedReferencer<1> FStack_160;
  FKConvexElem local_158;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_458;
  ClearAggregate(this);
  iVar6 = (this->Geometry).Boxes.ArrayNum;
  pFVar23 = (this->Geometry).Boxes.AllocatorInstance.Data;
  pFVar26 = pFVar23 + (longlong)iVar6 * 0x50;
  while( true ) {
    if ((this->Geometry).Boxes.ArrayNum != iVar6) {
      local_408 = 0;
      `TCheckedPointerIterator<UE::Geometry::FBoxShape3d,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_408);
    }
    if (pFVar23 == pFVar26) break;
    local_338._40_8_ = local_338;
    local_338[0x18] = local_338[0x18] | 1;
    local_2f0 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    TStack_2e8._s_0.X = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_338._8_4_ = 0;
    local_338._12_4_ = 0;
    TStack_2e8._s_0.Y = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_338._16_4_ = 0;
    local_338._20_4_ = 1;
    local_338[0x19] = (FScriptContainerElement)0x3;
    local_338._32_4_ = 6;
    local_338._0_8_ = &___7FKBoxElem__6B_;
    TStack_2e8._16_4_ = (float)*(double *)(pFVar23 + 0x38) + (float)*(double *)(pFVar23 + 0x38);
    TStack_2e8._20_4_ = (float)*(double *)(pFVar23 + 0x40) + (float)*(double *)(pFVar23 + 0x40);
    local_308._s_0.X = (double)*(undefined8 *)pFVar23;
    local_308._s_0.Y = (double)*(undefined8 *)(pFVar23 + 8);
    local_288.X = *(double *)(pFVar23 + 0x18);
    local_288.Y = *(double *)(pFVar23 + 0x20);
    local_2d0._0_4_ = (float)*(double *)(pFVar23 + 0x48) + (float)*(double *)(pFVar23 + 0x48);
    local_288.Z = *(double *)(pFVar23 + 0x28);
    local_288.W = *(double *)(pFVar23 + 0x30);
    local_308._s_0.Z = (double)*(undefined8 *)(pFVar23 + 0x10);
    pTVar20 = UE::Math::TRotator<double>::TRotator<double>(&local_230,&local_288);
    pTVar2 = &(this->AggGeom).BoxElems;
    pFVar7 = (FKConvexElem *)(pTVar2->AllocatorInstance).Data;
    local_2f0 = pTVar20->Pitch;
    TStack_2e8._s_0.X = pTVar20->Yaw;
    TStack_2e8._s_0.Y = pTVar20->Roll;
    if ((pFVar7 <= (FKConvexElem *)local_338) &&
       (lVar21 = (longlong)(this->AggGeom).BoxElems.ArrayMax,
       local_338 < &pFVar7->field_0x0 + lVar21 * 0x70)) {
      local_420 = (longlong)(this->AggGeom).BoxElems.ArrayNum;
      local_418 = 0x70;
      local_438 = (FKConvexElem *)local_338;
      local_430 = pFVar7;
      local_428 = lVar21;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar19 = (this->AggGeom).BoxElems.ArrayNum;
    piVar1 = &(this->AggGeom).BoxElems.ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x870,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->AggGeom).BoxElems.ArrayNum = iVar19 + 1;
    pFVar22 = (pTVar2->AllocatorInstance).Data + (longlong)iVar19 * 0x70;
    *(undefined ***)pFVar22 = &___7FKShapeElem__6B_;
    *(undefined4 *)(pFVar22 + 8) = local_338._8_4_;
    *(ulonglong *)(pFVar22 + 0xc) = CONCAT44(local_338._16_4_,local_338._12_4_);
    *(undefined4 *)(pFVar22 + 0x14) = local_338._20_4_;
    pFVar22[0x18] = (FScriptContainerElement)((byte)pFVar22[0x18] & 0xfe | local_338[0x18] & 1);
    pFVar22[0x19] = (FScriptContainerElement)local_338[0x19];
    *(undefined4 *)(pFVar22 + 0x20) = 6;
    *(FScriptContainerElement **)(pFVar22 + 0x28) = pFVar22;
    *(undefined ***)pFVar22 = &___7FKBoxElem__6B_;
    *(double *)(pFVar22 + 0x30) = local_308._s_0.X;
    *(double *)(pFVar22 + 0x38) = local_308._s_0.Y;
    *(double *)(pFVar22 + 0x40) = local_308._s_0.Z;
    *(double *)(pFVar22 + 0x48) = local_2f0;
    *(double *)(pFVar22 + 0x50) = TStack_2e8._s_0.X;
    *(double *)(pFVar22 + 0x58) = TStack_2e8._s_0.Y;
    *(undefined4 *)(pFVar22 + 0x60) = TStack_2e8._16_4_;
    *(undefined4 *)(pFVar22 + 100) = TStack_2e8._20_4_;
    *(undefined4 *)(pFVar22 + 0x68) = local_2d0._0_4_;
    FKBoxElem::~FKBoxElem((FKBoxElem *)local_338);
    pFVar23 = pFVar23 + 0x50;
  }
  iVar6 = (this->Geometry).Spheres.ArrayNum;
  pFVar23 = (this->Geometry).Spheres.AllocatorInstance.Data;
  pFVar26 = pFVar23 + (longlong)iVar6 * 0x20;
  while( true ) {
    if ((this->Geometry).Spheres.ArrayNum != iVar6) {
      local_407 = 0;
      `TCheckedPointerIterator<UE::Geometry::FSphereShape3d,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_407);
    }
    pFVar17 = __real_3ff0000000000000;
    if (pFVar23 == pFVar26) break;
    local_358._s_0.X = (double)*(undefined8 *)pFVar23;
    local_358._s_0.Y = (double)*(undefined8 *)(pFVar23 + 8);
    local_388[0x18] = local_388[0x18] | 1;
    local_360 = local_388;
    local_358._s_0.Z = (double)*(undefined8 *)(pFVar23 + 0x10);
    pFVar3 = &this->AggGeom;
    pFVar7 = (FKConvexElem *)(pFVar3->SphereElems).AllocatorInstance.Data;
    local_340 = (float)*(double *)(pFVar23 + 0x18);
    local_388._8_4_ = 0;
    local_388._12_4_ = 0;
    local_388._16_4_ = 0;
    local_388[0x14] = '\0';
    local_388[0x15] = '\0';
    local_388[0x16] = '\0';
    local_388[0x17] = '\0';
    local_36f = (FScriptContainerElement)0x3;
    local_368 = 6;
    local_388._0_8_ = &___7FKSphereElem__6B_;
    if ((pFVar7 <= (FKConvexElem *)local_388) &&
       (lVar21 = (longlong)(this->AggGeom).SphereElems.ArrayMax,
       local_388 < &pFVar7->field_0x0 + lVar21 * 0x50)) {
      local_420 = (longlong)(this->AggGeom).SphereElems.ArrayNum;
      local_418 = 0x50;
      local_438 = (FKConvexElem *)local_388;
      local_430 = pFVar7;
      local_428 = lVar21;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar19 = (this->AggGeom).SphereElems.ArrayNum;
    piVar1 = &(this->AggGeom).SphereElems.ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,(ForAnyElementType *)pFVar3,piVar1);
    }
    (this->AggGeom).SphereElems.ArrayNum = iVar19 + 1;
    pFVar22 = (pFVar3->SphereElems).AllocatorInstance.Data + (longlong)iVar19 * 0x50;
    *(undefined ***)pFVar22 = &___7FKShapeElem__6B_;
    *(undefined4 *)(pFVar22 + 8) = local_388._8_4_;
    *(ulonglong *)(pFVar22 + 0xc) = CONCAT44(local_388._16_4_,local_388._12_4_);
    *(undefined4 *)(pFVar22 + 0x14) = local_388._20_4_;
    pFVar22[0x18] = (FScriptContainerElement)(local_388[0x18] & 1 | (byte)pFVar22[0x18] & 0xfe);
    pFVar22[0x19] = local_36f;
    *(undefined4 *)(pFVar22 + 0x20) = 6;
    *(FScriptContainerElement **)(pFVar22 + 0x28) = pFVar22;
    *(undefined ***)pFVar22 = &___7FKSphereElem__6B_;
    *(double *)(pFVar22 + 0x30) = local_358._s_0.X;
    *(double *)(pFVar22 + 0x38) = local_358._s_0.Y;
    *(double *)(pFVar22 + 0x40) = local_358._s_0.Z;
    *(float *)(pFVar22 + 0x48) = local_340;
    FKSphereElem::~FKSphereElem((FKSphereElem *)local_388);
    pFVar23 = pFVar23 + 0x20;
  }
  iVar6 = (this->Geometry).Capsules.ArrayNum;
  pFVar23 = (this->Geometry).Capsules.AllocatorInstance.Data;
  pFVar26 = pFVar23 + (longlong)iVar6 * 0x40;
  while( true ) {
    if ((this->Geometry).Capsules.ArrayNum != iVar6) {
      local_406 = 0;
      `TCheckedPointerIterator<UE::Geometry::FCapsuleShape3d,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_406);
    }
    if (pFVar23 == pFVar26) break;
    local_3d0 = local_3f8;
    local_3f8[0x18] = local_3f8[0x18] | 1;
    local_2b8 = *(FScriptContainerElement **)(pFVar23 + 0x10);
    local_3b0 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    TStack_3a8._s_0.X = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_3f8._8_4_ = 0;
    local_3f8._12_4_ = 0;
    TStack_3a8._s_0.Y = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_2d0._s_0.Y = (double)*(undefined8 *)pFVar23;
    local_2d0._s_0.Z = (double)*(undefined8 *)(pFVar23 + 8);
    local_3f8._16_4_ = 0;
    local_2b0._s_0.X = 0.0;
    local_3f8._20_4_ = 2;
    local_3df = (FScriptContainerElement)0x3;
    local_2b0._s_0.W = (double)pFVar17;
    local_248._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_248._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_3d8 = 6;
    local_248._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_3f8._0_8_ = &___7FKSphylElem__6B_;
    TStack_3a8._16_4_ = 0x3f800000;
    TStack_3a8._20_4_ = 0x3f800000;
    local_2b0._s_0.Y = 0.0;
    local_2b0._s_0.Z = 0.0;
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_2b0._s_0,(TVector<double> *)&local_248._s_0,
               (TVector<double> *)(pFVar23 + 0x18));
    local_3c8._s_0.X = local_2d0._s_0.Y;
    local_3c8._s_0.Y = local_2d0._s_0.Z;
    local_3c8._s_0.Z = (double)local_2b8;
    local_268.X = local_2b0._s_0.X;
    local_268.Y = local_2b0._s_0.Y;
    local_268.Z = local_2b0._s_0.Z;
    local_268.W = local_2b0._s_0.W;
    pTVar20 = UE::Math::TRotator<double>::TRotator<double>(&local_218,&local_268);
    pTVar4 = &(this->AggGeom).SphylElems;
    pFVar7 = (FKConvexElem *)(pTVar4->AllocatorInstance).Data;
    local_3b0 = pTVar20->Pitch;
    TStack_3a8._s_0.X = pTVar20->Yaw;
    TStack_3a8._s_0.Y = pTVar20->Roll;
    TStack_3a8._16_4_ = (undefined4)*(double *)(pFVar23 + 0x38);
    TStack_3a8._20_4_ = (undefined4)(*(double *)(pFVar23 + 0x30) + *(double *)(pFVar23 + 0x30));
    if ((pFVar7 <= (FKConvexElem *)local_3f8) &&
       (lVar21 = (longlong)(this->AggGeom).SphylElems.ArrayMax,
       local_3f8 < &pFVar7->field_0x0 + lVar21 * 0x68)) {
      local_420 = (longlong)(this->AggGeom).SphylElems.ArrayNum;
      local_418 = 0x68;
      local_438 = (FKConvexElem *)local_3f8;
      local_430 = pFVar7;
      local_428 = lVar21;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar19 = (this->AggGeom).SphylElems.ArrayNum;
    piVar1 = &(this->AggGeom).SphylElems.ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x868,&pTVar4->AllocatorInstance,piVar1);
    }
    (this->AggGeom).SphylElems.ArrayNum = iVar19 + 1;
    pFVar22 = (pTVar4->AllocatorInstance).Data + (longlong)iVar19 * 0x68;
    *(undefined ***)pFVar22 = &___7FKShapeElem__6B_;
    *(undefined4 *)(pFVar22 + 8) = local_3f8._8_4_;
    *(ulonglong *)(pFVar22 + 0xc) = CONCAT44(local_3f8._16_4_,local_3f8._12_4_);
    *(undefined4 *)(pFVar22 + 0x14) = local_3f8._20_4_;
    pFVar22[0x18] = (FScriptContainerElement)(local_3f8[0x18] & 1 | (byte)pFVar22[0x18] & 0xfe);
    pFVar22[0x19] = local_3df;
    *(undefined4 *)(pFVar22 + 0x20) = 6;
    *(FScriptContainerElement **)(pFVar22 + 0x28) = pFVar22;
    *(undefined ***)pFVar22 = &___7FKSphylElem__6B_;
    *(double *)(pFVar22 + 0x30) = local_3c8._s_0.X;
    *(double *)(pFVar22 + 0x38) = local_3c8._s_0.Y;
    *(double *)(pFVar22 + 0x40) = local_3c8._s_0.Z;
    *(double *)(pFVar22 + 0x48) = local_3b0;
    *(double *)(pFVar22 + 0x50) = TStack_3a8._s_0.X;
    *(double *)(pFVar22 + 0x58) = TStack_3a8._s_0.Y;
    *(undefined4 *)(pFVar22 + 0x60) = TStack_3a8._16_4_;
    *(undefined4 *)(pFVar22 + 100) = TStack_3a8._20_4_;
    FKSphylElem::~FKSphylElem((FKSphylElem *)local_3f8);
    pFVar23 = pFVar23 + 0x40;
  }
  iVar6 = (this->Geometry).Convexes.ArrayNum;
  pFVar24 = (FDynamicMesh3 *)(this->Geometry).Convexes.AllocatorInstance.Data;
  pFVar27 = pFVar24 + iVar6;
  while( true ) {
    if ((this->Geometry).Convexes.ArrayNum != iVar6) {
      local_405 = 0;
      `TCheckedPointerIterator<UE::Geometry::FConvexShape3d,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_405);
    }
    if (pFVar24 == pFVar27) break;
    FKConvexElem::FKConvexElem(&local_158);
    UE::Geometry::GetFKElement(pFVar24,&local_158);
    pTVar5 = &(this->AggGeom).ConvexElems;
    pFVar7 = (FKConvexElem *)(pTVar5->AllocatorInstance).Data;
    if ((pFVar7 <= &local_158) &&
       (lVar21 = (longlong)(this->AggGeom).ConvexElems.ArrayMax, &local_158 < pFVar7 + lVar21)) {
      local_420 = (longlong)(this->AggGeom).ConvexElems.ArrayNum;
      local_418 = 0x100;
      local_438 = &local_158;
      local_430 = pFVar7;
      local_428 = lVar21;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar19 = (this->AggGeom).ConvexElems.ArrayNum;
    piVar1 = &(this->AggGeom).ConvexElems.ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x100,0x10,&pTVar5->AllocatorInstance,piVar1);
    }
    (this->AggGeom).ConvexElems.ArrayNum = iVar19 + 1;
    FKConvexElem::FKConvexElem
              ((FKConvexElem *)((pTVar5->AllocatorInstance).Data + (longlong)iVar19 * 0x100),
               &local_158);
    FKConvexElem::~FKConvexElem(&local_158);
    pFVar24 = pFVar24 + 1;
  }
  iVar6 = (this->Geometry).LevelSets.ArrayNum;
  pTVar25 = (TTransform<double> *)(this->Geometry).LevelSets.AllocatorInstance.Data;
  pTVar28 = (TTransform<double> *)((longlong)pTVar25 + (longlong)iVar6 * 0x90);
  while( true ) {
    if ((this->Geometry).LevelSets.ArrayNum != iVar6) {
      `TCheckedPointerIterator<UE::Geometry::FLevelSetShape3d,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_404);
    }
    if (pTVar25 == pTVar28) break;
    local_1d0 = local_1f8;
    local_1f8[0x18] = local_1f8[0x18] | 1;
    local_1f8._0_8_ = &___7FKLevelSetElem__6B_;
    local_1f8._8_8_ = 0;
    local_1f8._16_4_ = 0;
    local_1f8._20_4_ = LevelSet;
    local_1f8[0x19] = '\x03';
    local_1c8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_1c8.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1c8.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_1d8 = AggShape;
    local_1b8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_1b8.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1b8.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_1a8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_1a8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1a8.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_198.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_198.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_198.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_188.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_188.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_188.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_178.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_178.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_178.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_168 = (FLevelSet *)0x0;
    FStack_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    UE::Geometry::GetFKElement
              (pTVar25,(TDenseGrid3<float> *)(pTVar25 + 1),
               *(float *)pTVar25[1].Translation.XY.m128d_f64,(FKLevelSetElem *)local_1f8);
    iVar19 = (this->AggGeom).LevelSetElems.ArrayNum;
    piVar1 = &(this->AggGeom).LevelSetElems.ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10a0,&(this->AggGeom).LevelSetElems.AllocatorInstance,piVar1);
      (this->AggGeom).LevelSetElems.ArrayNum = iVar19;
    }
    (this->AggGeom).LevelSetElems.ArrayNum = iVar19 + 1;
    this_00 = (FKLevelSetElem *)
              ((this->AggGeom).LevelSetElems.AllocatorInstance.Data + (longlong)iVar19 * 0xa0);
    this_00->_padding_ = 0;
    *(undefined4 *)&this_00->_padding_ = 0;
    *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | 1;
    *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 9;
    *(undefined1 *)((longlong)&this_00->_padding_ + 1) = 3;
    *(undefined4 *)&this_00->_padding_ = 6;
    this_00->_padding_ = (longlong)this_00;
    this_00->_padding_ = (longlong)&___7FKLevelSetElem__6B_;
    fVar9 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar11._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar11._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(this_00->Transform).Rotation.XY.m128d_f64 = auVar11;
    auVar12._8_4_ = SUB84((double)fVar10,0);
    auVar12._0_8_ = (double)fVar9;
    auVar12._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
    *(undefined1 (*) [16])(this_00->Transform).Rotation.ZW.m128d_f64 = auVar12;
    fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar13._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar13._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(this_00->Transform).Translation.XY.m128d_f64 = auVar13;
    auVar14._8_4_ = SUB84((double)fVar10,0);
    auVar14._0_8_ = (double)fVar9;
    auVar14._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
    *(undefined1 (*) [16])(this_00->Transform).Translation.ZW.m128d_f64 = auVar14;
    fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar15._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(this_00->Transform).Scale3D.XY.m128d_f64 = auVar15;
    auVar16._8_4_ = SUB84((double)fVar10,0);
    auVar16._0_8_ = (double)fVar9;
    auVar16._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
    *(undefined1 (*) [16])(this_00->Transform).Scale3D.ZW.m128d_f64 = auVar16;
    (this_00->LevelSet).Object = (FLevelSet *)0x0;
    (this_00->LevelSet).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FKLevelSetElem::CloneElem(this_00,(FKLevelSetElem *)local_1f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_160.ReferenceController);
    FKShapeElem::~FKShapeElem((FKShapeElem *)local_1f8);
    pTVar25 = (TTransform<double> *)&pTVar25[1].Translation.ZW;
  }
  return;
}

// InitializeFromComponent @ 14cb1eff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPhysicsDataCollection::InitializeFromComponent
          (FPhysicsDataCollection *this,UActorComponent *param_1,bool param_2)

{
  int iVar1;
  FWeakObjectPtr FVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  local_res8 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UActorComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (UObject *)0x0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->BodySetup).WeakPtr = local_res8;
  if (param_1 == (UActorComponent *)0x0) goto LAB_14cb1f1f4;
  pUVar6 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar6->_padding_)) {
    if (param_1 == (UActorComponent *)0x0) goto LAB_14cb1f1f4;
    pUVar6 = Z_Construct_UClass_UBrushComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      pUVar7 = (UObject *)param_1[7]._padding_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar7 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      (this->BodySetup).WeakPtr = local_res8;
      goto LAB_14cb1f1f4;
    }
    if (param_1 == (UActorComponent *)0x0) goto LAB_14cb1f1f4;
    pUVar6 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_14cb1f1f4;
    local_res8 = (FWeakObjectPtr)(**(code **)(param_1->_padding_ + 0xd60))(param_1);
  }
  else {
    FVar2 = (FWeakObjectPtr)param_1[7].PrimaryComponentTick.Target;
    if (FVar2 == (FWeakObjectPtr)0x0) goto LAB_14cb1f1f4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)FVar2);
    }
    local_res8 = FVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)FVar2);
    }
    FWeakObjectPtr::operator=(&(this->SourceStaticMesh).WeakPtr,(FObjectPtr)&local_res8);
    local_res8 = *(FWeakObjectPtr *)((longlong)FVar2 + 0x1d8);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(this->BodySetup).WeakPtr,(FObjectPtr)&local_res8);
LAB_14cb1f1f4:
  dVar4 = _UNK_150689688;
  dVar3 = __real_3ff0000000000000;
  (this->ExternalScale3D).field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  (this->ExternalScale3D).field0_0x0._s_0.Y = dVar4;
  (this->ExternalScale3D).field0_0x0._s_0.Z = dVar3;
  if ((param_2) &&
     (bVar5 = TWeakObjectPtr<UBodySetup_const_,FWeakObjectPtr>::UEOpEquals
                        (&this->BodySetup,(void *)0x0), !bVar5)) {
    pUVar7 = FWeakObjectPtr::Get(&(this->BodySetup).WeakPtr);
    FKAggregateGeom::FreeRenderInfo(&this->AggGeom);
    FKAggregateGeom::CloneAgg(&this->AggGeom,(FKAggregateGeom *)&pUVar7[1].field_0x10);
    UE::Geometry::GetShapeSet(&this->AggGeom,&this->Geometry);
  }
  return;
}

// InitializeFromExisting @ 14cb1f280

void __thiscall
FPhysicsDataCollection::InitializeFromExisting
          (FPhysicsDataCollection *this,FPhysicsDataCollection *param_1)

{
  double dVar1;
  
  (this->SourceComponent).WeakPtr = (param_1->SourceComponent).WeakPtr;
  (this->SourceStaticMesh).WeakPtr = (param_1->SourceStaticMesh).WeakPtr;
  (this->BodySetup).WeakPtr = (param_1->BodySetup).WeakPtr;
  dVar1 = (param_1->ExternalScale3D).field0_0x0._s_0.Y;
  (this->ExternalScale3D).field0_0x0._s_0.X = (param_1->ExternalScale3D).field0_0x0._s_0.X;
  (this->ExternalScale3D).field0_0x0._s_0.Y = dVar1;
  (this->ExternalScale3D).field0_0x0._s_0.Z = (param_1->ExternalScale3D).field0_0x0._s_0.Z;
  return;
}

// InitializeFromStaticMesh @ 14cb1f300

void __thiscall
FPhysicsDataCollection::InitializeFromStaticMesh
          (FPhysicsDataCollection *this,UStaticMesh *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UStaticMesh *local_res10 [2];
  UBodySetup *local_res20;
  
  if (param_1 == (UStaticMesh *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_49882772377960400>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Physics\\PhysicsDataCollection.cpp"
                       ,0x30,"StaticMesh");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_res10[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->SourceStaticMesh).WeakPtr,(FObjectPtr)local_res10);
    local_res20 = (param_1->BodySetup).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UBodySetup *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FWeakObjectPtr::operator=(&(this->BodySetup).WeakPtr,(FObjectPtr)&local_res20);
    (this->ExternalScale3D).field0_0x0._s_0.X = 1.0;
    (this->ExternalScale3D).field0_0x0._s_0.Y = 1.0;
    (this->ExternalScale3D).field0_0x0._s_0.Z = 1.0;
    if (param_2) {
      pUVar3 = FWeakObjectPtr::Get(&(this->BodySetup).WeakPtr);
      FKAggregateGeom::FreeRenderInfo(&this->AggGeom);
      FKAggregateGeom::CloneAgg(&this->AggGeom,(FKAggregateGeom *)&pUVar3[1].field_0x10);
      UE::Geometry::GetShapeSet(&this->AggGeom,&this->Geometry);
    }
  }
  return;
}

