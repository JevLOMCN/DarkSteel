// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 9

// FindNearestHit @ 14cb8d990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FSceneVolumeSpatial::FindNearestHit
          (FSceneVolumeSpatial *this,TRay<double> *param_1,FSceneGeometryPoint *param_2,
          double param_3)

{
  AActor *pAVar1;
  code *pcVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  UPrimitiveComponent *pUVar9;
  TVector<double> *pTVar10;
  longlong *plVar11;
  double dVar12;
  undefined1 auStackY_148 [32];
  int local_118 [2];
  double local_110;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  double local_d8;
  double local_d0;
  double local_c8;
  TVector<double>_u_0 local_c0;
  TVector<double> local_a8;
  undefined1 local_88 [56];
  longlong *local_50;
  bool local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  cVar6 = (**(code **)(*(longlong *)this + 8))();
  if (cVar6 != '\0') {
    if (((this->bDeferredRebuildPending != false) &&
        ((**(code **)(*(longlong *)this + 0x38))(this), this->bDeferredRebuildPending != false)) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1898223674788413560>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneGeometrySpatialCache.cpp"
                           ,0x78,"bDeferredRebuildPending == false"), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    UE::Geometry::TTransformSRT3<double>::InverseTransformRay
              (&this->Transform,(TRay<double> *)&local_f0._s_0,param_1);
    local_88._0_8_ = __real_7fefffffffffffff;
    local_88._16_8_ = 0;
    local_50 = (longlong *)0x0;
    local_48 = false;
    bVar7 = UE::Geometry::FColliderMesh::FindNearestHitTriangle
                      (&this->ColliderMesh,(TRay<double> *)&local_f0._s_0,&local_110,local_118,
                       (TVector<double> *)&local_c0._s_0,(FQueryOptions *)local_88);
    if (local_88._16_8_ != 0) {
      plVar11 = (longlong *)(local_88 + 0x20);
      if (local_50 != (longlong *)0x0) {
        plVar11 = local_50;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (bVar7) {
      pUVar9 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->Component).WeakPtr);
      param_2->Component = pUVar9;
      pAVar1 = *(AActor **)&pUVar9->field_0xa8;
      (param_2->PointBaryCoords).field0_0x0._s_0.X = local_c0._s_0.X;
      (param_2->PointBaryCoords).field0_0x0._s_0.Y = local_c0._s_0.Y;
      param_2->Actor = pAVar1;
      (param_2->PointBaryCoords).field0_0x0._s_0.Z = local_c0._s_0.Z;
      param_2->GeometryIndex = local_118[0];
      param_2->GeometryType = Triangle;
      dVar12 = local_d0 * local_110 + local_f0._s_0.Y;
      dVar3 = local_c8 * local_110 + local_f0._s_0.Z;
      (param_2->LocalPoint).field0_0x0._s_0.X = local_d8 * local_110 + local_f0._s_0.X;
      (param_2->LocalPoint).field0_0x0._s_0.Y = dVar12;
      (param_2->LocalPoint).field0_0x0._s_0.Z = dVar3;
      local_108._s_0.X =
           (param_2->LocalPoint).field0_0x0._s_0.X * (this->Transform).Scale3D.field0_0x0._s_0.X;
      local_108._s_0.Y = dVar12 * (this->Transform).Scale3D.field0_0x0._s_0.Y;
      local_108._s_0.Z = dVar3 * (this->Transform).Scale3D.field0_0x0._s_0.Z;
      pTVar10 = UE::Geometry::operator*<double>
                          (&local_a8,&(this->Transform).Rotation,(TVector<double> *)&local_108._s_0)
      ;
      dVar12 = (this->Transform).Translation.field0_0x0._s_0.Y;
      dVar5 = (pTVar10->field0_0x0)._s_0.Y;
      dVar3 = (pTVar10->field0_0x0)._s_0.Z + (this->Transform).Translation.field0_0x0._s_0.Z;
      (param_2->WorldPoint).field0_0x0._s_0.X =
           (pTVar10->field0_0x0)._s_0.X + (this->Transform).Translation.field0_0x0._s_0.X;
      auVar4._8_4_ = SUB84(dVar3,0);
      auVar4._0_8_ = dVar5 + dVar12;
      auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(param_2->WorldPoint).field0_0x0 + 8) = auVar4;
      dVar3 = (param_1->Origin).field0_0x0._s_0.Y;
      (param_2->Ray).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
      (param_2->Ray).Origin.field0_0x0._s_0.Y = dVar3;
      dVar3 = (param_1->Direction).field0_0x0._s_0.X;
      (param_2->Ray).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
      (param_2->Ray).Direction.field0_0x0._s_0.X = dVar3;
      dVar3 = (param_1->Direction).field0_0x0._s_0.Z;
      (param_2->Ray).Direction.field0_0x0._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
      (param_2->Ray).Direction.field0_0x0._s_0.Z = dVar3;
      param_2->RayDistance =
           ((param_2->WorldPoint).field0_0x0._s_0.Y - (param_1->Origin).field0_0x0._s_0.Y) *
           (param_1->Direction).field0_0x0._s_0.Y +
           ((param_2->WorldPoint).field0_0x0._s_0.X - (param_1->Origin).field0_0x0._s_0.X) *
           (param_1->Direction).field0_0x0._s_0.X +
           ((param_2->WorldPoint).field0_0x0._s_0.Z - (param_1->Origin).field0_0x0._s_0.Z) *
           (param_1->Direction).field0_0x0._s_0.Z;
      return true;
    }
  }
  return false;
}

// GetComponent @ 14cb952c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPrimitiveComponent * __thiscall FSceneVolumeSpatial::GetComponent(FSceneVolumeSpatial *this)

{
  UPrimitiveComponent *pUVar1;
  
  pUVar1 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->Component).WeakPtr);
  return pUVar1;
}

// GetGeometry @ 14cb965d0

bool __thiscall
FSceneVolumeSpatial::GetGeometry
          (FSceneVolumeSpatial *this,EGeometryPointType param_1,int param_2,bool param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6)

{
  double dVar1;
  TVector<double> *pTVar2;
  TTransformSRT3<double> *this_00;
  TVector<double> local_28;
  
  if (((param_1 == Triangle) && (-1 < param_2)) &&
     (param_2 < (this->ColliderMesh).Triangles.ArrayNum)) {
    UE::Geometry::FColliderMesh::GetTriVertices(&this->ColliderMesh,param_2,param_4,param_5,param_6)
    ;
    if (param_3) {
      this_00 = &this->Transform;
      pTVar2 = UE::Geometry::TTransformSRT3<double>::TransformPosition<double>
                         (this_00,&local_28,param_4);
      dVar1 = (pTVar2->field0_0x0)._s_0.Y;
      (param_4->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
      (param_4->field0_0x0)._s_0.Y = dVar1;
      (param_4->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
      pTVar2 = UE::Geometry::TTransformSRT3<double>::TransformPosition<double>
                         (this_00,&local_28,param_5);
      dVar1 = (pTVar2->field0_0x0)._s_0.Y;
      (param_5->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
      (param_5->field0_0x0)._s_0.Y = dVar1;
      (param_5->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
      pTVar2 = UE::Geometry::TTransformSRT3<double>::TransformPosition<double>
                         (this_00,&local_28,param_6);
      dVar1 = (pTVar2->field0_0x0)._s_0.Y;
      (param_6->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
      (param_6->field0_0x0)._s_0.Y = dVar1;
      (param_6->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
    }
    return true;
  }
  return false;
}

// GetWorldBounds @ 14cba07e0

TAxisAlignedBox3<double> * __thiscall
FSceneVolumeSpatial::GetWorldBounds
          (FSceneVolumeSpatial *this,TAxisAlignedBox3<double> *__return_storage_ptr__)

{
  UE::Geometry::TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
            (__return_storage_ptr__,&this->LocalBounds,&this->Transform);
  return __return_storage_ptr__;
}

// Initialize @ 14cba1690

void __thiscall FSceneVolumeSpatial::Initialize(FSceneVolumeSpatial *this,UBrushComponent *param_1)

{
  UBrushComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBrushComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Component).WeakPtr,(FObjectPtr)local_res8);
  this->bDeferredRebuildPending = true;
  return;
}

// IsValid @ 14cba4630

bool __thiscall FSceneVolumeSpatial::IsValid(FSceneVolumeSpatial *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr,false,false);
  return bVar1;
}

// IsVisible @ 14cba46a0

bool __thiscall FSceneVolumeSpatial::IsVisible(FSceneVolumeSpatial *this)

{
  char cVar1;
  UObject *pUVar2;
  
  cVar1 = (**(code **)(*(longlong *)this + 8))();
  if (cVar1 == '\0') {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
  if ((pUVar2 != (UObject *)0x0) &&
     (cVar1 = (**(code **)(*(longlong *)pUVar2 + 0x560))(pUVar2), cVar1 == '\0')) {
    return false;
  }
  return true;
}

// OnGeometryModified @ 14cba6680

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FSceneVolumeSpatial::OnGeometryModified(FSceneVolumeSpatial *this,bool param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  char cVar9;
  UObject *pUVar10;
  double *pdVar11;
  UClass *pUVar12;
  AVolume *pAVar13;
  double dVar14;
  double dVar15;
  FBuildOptions local_res8 [2];
  FVolumeToMeshOptions local_res18;
  undefined1 local_2d0 [24];
  undefined1 local_2b8 [16];
  double local_2a0;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  FDynamicMesh3 local_278;
  
  UE::Geometry::FColliderMesh::Reset(&this->ColliderMesh,No);
  cVar9 = (**(code **)(*(longlong *)this + 8))(this);
  if (cVar9 == '\0') {
    return;
  }
  pUVar10 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
  dVar1 = *(double *)&pUVar10[0xc].field_0x18;
  dVar2 = *(double *)&pUVar10[0xc].field_0x20;
  dVar3 = *(double *)(pUVar10 + 0xd);
  local_2a0 = *(double *)&pUVar10[0xd].field_0x18;
  dStack_298 = *(double *)(pUVar10 + 0xe);
  dStack_290 = *(double *)&pUVar10[0xe].field_0x8;
  dVar8 = *(double *)&pUVar10[0xd].field_0x8;
  dVar14 = *(double *)&pUVar10[0xd].field_0x10;
  dStack_288 = *(double *)&pUVar10[0xe].field_0x10;
  (this->Transform).Rotation.field0_0x0._s_0.X = *(double *)&pUVar10[0xc].field_0x10;
  (this->Transform).Rotation.field0_0x0._s_0.Y = dVar1;
  (this->Transform).Rotation.field0_0x0._s_0.Z = dVar2;
  (this->Transform).Rotation.field0_0x0._s_0.W = dVar3;
  (this->Transform).Translation.field0_0x0._s_0.X = dVar8;
  (this->Transform).Translation.field0_0x0._s_0.Y = dVar14;
  (this->Transform).Translation.field0_0x0._s_0.Z = local_2a0;
  (this->Transform).Scale3D.field0_0x0._s_0.X = dStack_298;
  (this->Transform).Scale3D.field0_0x0._s_0.Y = dStack_290;
  (this->Transform).Scale3D.field0_0x0._s_0.Z = dStack_288;
  pUVar10 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
  pdVar11 = (double *)
            (**(code **)(*(longlong *)pUVar10 + 0x598))
                      (pUVar10,local_2d0,&UE::Math::TTransform<double>::Identity);
  dVar1 = pdVar11[2];
  dVar8 = *pdVar11 + pdVar11[3];
  dVar2 = pdVar11[5];
  dVar3 = pdVar11[5];
  dVar14 = pdVar11[1] + pdVar11[4];
  dVar15 = pdVar11[1] - pdVar11[4];
  auVar7._8_4_ = SUB84(dVar14,0);
  auVar7._0_8_ = dVar8;
  auVar7._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  local_2b8._0_4_ = SUB84(dVar8,0);
  local_2b8._4_4_ = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar6._8_4_ = SUB84(dVar15,0);
  auVar6._0_8_ = *pdVar11 - pdVar11[3];
  auVar6._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])&(this->LocalBounds).Min.field0_0x0 = auVar6;
  auVar5._8_4_ = local_2b8._0_4_;
  auVar5._0_8_ = dVar1 - dVar3;
  auVar5._12_4_ = local_2b8._4_4_;
  *(undefined1 (*) [16])((longlong)&(this->LocalBounds).Min.field0_0x0 + 0x10) = auVar5;
  *(double *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 8) = dVar14;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = dVar1 + dVar2;
  if (param_1) {
    this->bDeferredRebuildPending = true;
    return;
  }
  local_2b8 = auVar7;
  pUVar10 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
  pAVar13 = *(AVolume **)&pUVar10[4].field_0x8;
  if (pAVar13 != (AVolume *)0x0) {
    pUVar12 = Z_Construct_UClass_AVolume_NoRegister();
    iVar4 = (int)pUVar12->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&pAVar13->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pAVar13->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar12->_padding_)) goto LAB_14cba6863;
  }
  pAVar13 = (AVolume *)0x0;
LAB_14cba6863:
  if (pAVar13 != (AVolume *)0x0) {
    local_res18.bInWorldSpace = false;
    local_res18.bSetGroups = false;
    local_res18.bMergeVertices = false;
    local_res18.bAutoRepairMesh = false;
    local_res18.bOptimizeMesh = false;
    local_res18.bGenerateNormals = true;
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_278);
    UE::Conversion::VolumeToDynamicMesh(pAVar13,&local_278,&local_res18);
    local_res8[0].bBuildAABBTree = true;
    local_res8[0].bBuildVertexMap = false;
    local_res8[0].bBuildTriangleMap = false;
    UE::Geometry::FColliderMesh::Initialize(&this->ColliderMesh,&local_278,local_res8);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_278);
  }
  this->bDeferredRebuildPending = false;
  return;
}

// OnTransformModified @ 14cba6ab0

void __thiscall FSceneVolumeSpatial::OnTransformModified(FSceneVolumeSpatial *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  UObject *pUVar11;
  
  cVar10 = (**(code **)(*(longlong *)this + 8))();
  if (cVar10 != '\0') {
    pUVar11 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
    dVar3 = *(double *)&pUVar11[0xc].field_0x20;
    dVar4 = *(double *)(pUVar11 + 0xd);
    dVar5 = *(double *)&pUVar11[0xc].field_0x18;
    dVar1 = *(double *)&pUVar11[0xd].field_0x18;
    dVar6 = *(double *)&pUVar11[0xd].field_0x8;
    dVar7 = *(double *)&pUVar11[0xd].field_0x10;
    dVar8 = *(double *)(pUVar11 + 0xe);
    dVar9 = *(double *)&pUVar11[0xe].field_0x8;
    dVar2 = *(double *)&pUVar11[0xe].field_0x10;
    (this->Transform).Rotation.field0_0x0._s_0.X = *(double *)&pUVar11[0xc].field_0x10;
    (this->Transform).Rotation.field0_0x0._s_0.Y = dVar5;
    (this->Transform).Rotation.field0_0x0._s_0.Z = dVar3;
    (this->Transform).Rotation.field0_0x0._s_0.W = dVar4;
    (this->Transform).Translation.field0_0x0._s_0.X = dVar6;
    (this->Transform).Translation.field0_0x0._s_0.Y = dVar7;
    (this->Transform).Translation.field0_0x0._s_0.Z = dVar1;
    (this->Transform).Scale3D.field0_0x0._s_0.X = dVar8;
    (this->Transform).Scale3D.field0_0x0._s_0.Y = dVar9;
    (this->Transform).Scale3D.field0_0x0._s_0.Z = dVar2;
  }
  return;
}

