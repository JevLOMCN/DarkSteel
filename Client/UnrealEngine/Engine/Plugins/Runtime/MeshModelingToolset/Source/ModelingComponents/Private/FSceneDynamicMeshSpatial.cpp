// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 10

// operator() @ 14cb6bf90

void __thiscall
`FSceneDynamicMeshSpatial::GetGeometry'::__l8::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  uint uVar1;
  longlong lVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  TVector<double> *pTVar10;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  uVar1 = **(uint **)this;
  if (((-1 < (int)uVar1) &&
      ((int)uVar1 <
       (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) <
      0xfffe)) {
    UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (param_1,uVar1,*(TVector<double> **)((longlong)this + 8),
               *(TVector<double> **)((longlong)this + 0x10),
               *(TVector<double> **)((longlong)this + 0x18));
    if (**(char **)((longlong)this + 0x20) != '\0') {
      lVar2 = *(longlong *)((longlong)this + 0x28);
      pdVar3 = *(double **)((longlong)this + 8);
      local_38._s_0.X = *pdVar3 * *(double *)(lVar2 + 0x80);
      local_38._s_0.Y = *(double *)(lVar2 + 0x88) * pdVar3[1];
      local_38._s_0.Z = *(double *)(lVar2 + 0x90) * pdVar3[2];
      pTVar10 = UE::Geometry::operator*<double>
                          (&local_20,(TQuaternion<double> *)(lVar2 + 0x48),
                           (TVector<double> *)&local_38._s_0);
      dVar8 = *(double *)(lVar2 + 0x70);
      dVar9 = (pTVar10->field0_0x0)._s_0.Y;
      dVar7 = (pTVar10->field0_0x0)._s_0.Z + *(double *)(lVar2 + 0x78);
      *pdVar3 = *(double *)(lVar2 + 0x68) + (pTVar10->field0_0x0)._s_0.X;
      auVar4._8_4_ = SUB84(dVar7,0);
      auVar4._0_8_ = dVar9 + dVar8;
      auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pdVar3 + 1) = auVar4;
      lVar2 = *(longlong *)((longlong)this + 0x28);
      pdVar3 = *(double **)((longlong)this + 0x10);
      local_38._s_0.X = *(double *)(lVar2 + 0x80) * *pdVar3;
      local_38._s_0.Y = *(double *)(lVar2 + 0x88) * pdVar3[1];
      local_38._s_0.Z = *(double *)(lVar2 + 0x90) * pdVar3[2];
      pTVar10 = UE::Geometry::operator*<double>
                          (&local_20,(TQuaternion<double> *)(lVar2 + 0x48),
                           (TVector<double> *)&local_38._s_0);
      dVar8 = *(double *)(lVar2 + 0x70);
      dVar9 = (pTVar10->field0_0x0)._s_0.Y;
      dVar7 = (pTVar10->field0_0x0)._s_0.Z + *(double *)(lVar2 + 0x78);
      *pdVar3 = (pTVar10->field0_0x0)._s_0.X + *(double *)(lVar2 + 0x68);
      auVar5._8_4_ = SUB84(dVar7,0);
      auVar5._0_8_ = dVar9 + dVar8;
      auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pdVar3 + 1) = auVar5;
      lVar2 = *(longlong *)((longlong)this + 0x28);
      pdVar3 = *(double **)((longlong)this + 0x18);
      local_38._s_0.X = *pdVar3 * *(double *)(lVar2 + 0x80);
      local_38._s_0.Y = *(double *)(lVar2 + 0x88) * pdVar3[1];
      local_38._s_0.Z = *(double *)(lVar2 + 0x90) * pdVar3[2];
      pTVar10 = UE::Geometry::operator*<double>
                          (&local_20,(TQuaternion<double> *)(lVar2 + 0x48),
                           (TVector<double> *)&local_38._s_0);
      dVar8 = *(double *)(lVar2 + 0x70);
      dVar9 = (pTVar10->field0_0x0)._s_0.Y;
      dVar7 = *(double *)(lVar2 + 0x78) + (pTVar10->field0_0x0)._s_0.Z;
      *pdVar3 = (pTVar10->field0_0x0)._s_0.X + *(double *)(lVar2 + 0x68);
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = dVar8 + dVar9;
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pdVar3 + 1) = auVar6;
    }
    **(undefined1 **)((longlong)this + 0x30) = 1;
  }
  return;
}

// FindNearestHit @ 14cb8d3f0

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
FSceneDynamicMeshSpatial::FindNearestHit
          (FSceneDynamicMeshSpatial *this,TRay<double> *param_1,FSceneGeometryPoint *param_2,
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
  double local_c0;
  double dStack_b8;
  double local_b0;
  TVector<double> local_a8;
  undefined8 local_88;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  cVar6 = (**(code **)(*(longlong *)this + 8))();
  if (cVar6 != '\0') {
    if (((this->bDeferredRebuildPending != false) &&
        ((**(code **)(*(longlong *)this + 0x38))(this), this->bDeferredRebuildPending != false)) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1898223674788413718>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneGeometrySpatialCache.cpp"
                           ,0x116,"bDeferredRebuildPending == false"), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    UE::Geometry::TTransformSRT3<double>::InverseTransformRay
              (&this->Transform,(TRay<double> *)&local_f0._s_0,param_1);
    local_88 = __real_7fefffffffffffff;
    local_78 = 0;
    local_50 = (longlong *)0x0;
    local_48 = 0;
    cVar6 = (**(code **)((this->AABBTree)._padding_ + 0x30))
                      (&this->AABBTree,&local_f0,&local_110,local_118);
    if (local_78 != 0) {
      plVar11 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar11 = local_50;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (cVar6 != '\0') {
      pUVar9 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->Component).WeakPtr);
      param_2->Component = pUVar9;
      pAVar1 = *(AActor **)&pUVar9->field_0xa8;
      (param_2->PointBaryCoords).field0_0x0._s_0.X = local_c0;
      (param_2->PointBaryCoords).field0_0x0._s_0.Y = dStack_b8;
      param_2->Actor = pAVar1;
      (param_2->PointBaryCoords).field0_0x0._s_0.Z = local_b0;
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

// GetComponent @ 14cb952b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPrimitiveComponent * __thiscall
FSceneDynamicMeshSpatial::GetComponent(FSceneDynamicMeshSpatial *this)

{
  UPrimitiveComponent *pUVar1;
  
  pUVar1 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->Component).WeakPtr);
  return pUVar1;
}

// GetGeometry @ 14cb963f0

bool __thiscall
FSceneDynamicMeshSpatial::GetGeometry
          (FSceneDynamicMeshSpatial *this,EGeometryPointType param_1,int param_2,bool param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6)

{
  UObject *pUVar1;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined1 local_res20 [8];
  code *local_58;
  undefined4 **local_50;
  int *local_48;
  TVector<double> *local_40;
  TVector<double> *local_38;
  TVector<double> *local_30;
  undefined1 *local_28;
  FSceneDynamicMeshSpatial *local_20;
  undefined1 *local_18;
  
  local_res10[0] = 0;
  if (param_1 == Triangle) {
    local_res18[0] = param_2;
    local_res20[0] = param_3;
    pUVar1 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
    if (pUVar1 != (UObject *)0x0) {
      local_48 = local_res18;
      local_40 = param_4;
      local_38 = param_5;
      local_30 = param_6;
      local_28 = local_res20;
      local_18 = local_res10;
      local_50 = &local_48;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FSceneDynamicMeshSpatial::GetGeometry'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      local_20 = this;
      (**(code **)(*(longlong *)pUVar1 + 0xb40))(pUVar1,&local_58);
    }
    return (bool)local_res10[0];
  }
  return false;
}

// GetWorldBounds @ 14cba07b0

TAxisAlignedBox3<double> * __thiscall
FSceneDynamicMeshSpatial::GetWorldBounds
          (FSceneDynamicMeshSpatial *this,TAxisAlignedBox3<double> *__return_storage_ptr__)

{
  UE::Geometry::TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
            (__return_storage_ptr__,&this->LocalBounds,&this->Transform);
  return __return_storage_ptr__;
}

// Initialize @ 14cba1640

void __thiscall
FSceneDynamicMeshSpatial::Initialize(FSceneDynamicMeshSpatial *this,UDynamicMeshComponent *param_1)

{
  UDynamicMeshComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UDynamicMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Component).WeakPtr,(FObjectPtr)local_res8);
  this->bDeferredRebuildPending = true;
  return;
}

// IsValid @ 14cba4610

bool __thiscall FSceneDynamicMeshSpatial::IsValid(FSceneDynamicMeshSpatial *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr,false,false);
  return bVar1;
}

// IsVisible @ 14cba4650

bool __thiscall FSceneDynamicMeshSpatial::IsVisible(FSceneDynamicMeshSpatial *this)

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

// OnGeometryModified @ 14cba6500

void __thiscall
FSceneDynamicMeshSpatial::OnGeometryModified(FSceneDynamicMeshSpatial *this,bool param_1)

{
  double dVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  UObject *pUVar12;
  FSceneDynamicMeshSpatial *local_res8;
  code *local_88;
  FSceneDynamicMeshSpatial **local_80;
  undefined8 local_78;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  cVar11 = (**(code **)(*(longlong *)this + 8))();
  if ((cVar11 != '\0') &&
     (pUVar12 = FWeakObjectPtr::Get(&(this->Component).WeakPtr), pUVar12 != (UObject *)0x0)) {
    dVar1 = *(double *)&pUVar12[0xc].field_0x18;
    uVar2 = *(undefined8 *)&pUVar12[0xd].field_0x18;
    uVar3 = *(undefined4 *)&pUVar12[0xd].field_0x8;
    uVar4 = *(undefined4 *)&pUVar12[0xd].field_0xc;
    uVar5 = *(undefined4 *)&pUVar12[0xd].field_0x10;
    uVar6 = *(undefined4 *)&pUVar12[0xd].field_0x14;
    uVar7 = *(undefined8 *)(pUVar12 + 0xe);
    uVar8 = *(undefined8 *)&pUVar12[0xe].field_0x8;
    local_78 = *(undefined8 *)&pUVar12[0xe].field_0x10;
    dVar9 = *(double *)&pUVar12[0xc].field_0x20;
    dVar10 = *(double *)(pUVar12 + 0xd);
    local_80 = &local_res8;
    (this->Transform).Rotation.field0_0x0._s_0.X = *(double *)&pUVar12[0xc].field_0x10;
    (this->Transform).Rotation.field0_0x0._s_0.Y = dVar1;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`FSceneDynamicMeshSpatial::OnGeometryModified'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_40._0_4_ = (undefined4)uVar2;
    local_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_38._0_4_ = (undefined4)uVar7;
    uStack_38._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    (this->Transform).Rotation.field0_0x0._s_0.Z = dVar9;
    (this->Transform).Rotation.field0_0x0._s_0.W = dVar10;
    uStack_30._0_4_ = (undefined4)uVar8;
    uStack_30._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
    uStack_28._0_4_ = (undefined4)local_78;
    uStack_28._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    *(undefined4 *)&(this->Transform).Translation.field0_0x0 = uVar3;
    *(undefined4 *)((longlong)&(this->Transform).Translation.field0_0x0 + 4) = uVar4;
    *(undefined4 *)((longlong)&(this->Transform).Translation.field0_0x0 + 8) = uVar5;
    *(undefined4 *)((longlong)&(this->Transform).Translation.field0_0x0 + 0xc) = uVar6;
    *(undefined4 *)((longlong)&(this->Transform).Translation.field0_0x0 + 0x10) =
         (undefined4)local_40;
    *(undefined4 *)((longlong)&(this->Transform).Translation.field0_0x0 + 0x14) = local_40._4_4_;
    *(undefined4 *)&(this->Transform).Scale3D.field0_0x0 = (undefined4)uStack_38;
    *(undefined4 *)((longlong)&(this->Transform).Scale3D.field0_0x0 + 4) = uStack_38._4_4_;
    *(undefined4 *)((longlong)&(this->Transform).Scale3D.field0_0x0 + 8) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)&(this->Transform).Scale3D.field0_0x0 + 0xc) = uStack_30._4_4_;
    *(undefined4 *)((longlong)&(this->Transform).Scale3D.field0_0x0 + 0x10) = (undefined4)uStack_28;
    *(undefined4 *)((longlong)&(this->Transform).Scale3D.field0_0x0 + 0x14) = uStack_28._4_4_;
    local_res8 = this;
    local_40 = uVar2;
    uStack_38 = uVar7;
    uStack_30 = uVar8;
    uStack_28 = local_78;
    (**(code **)(*(longlong *)pUVar12 + 0xb40))(pUVar12,&local_88);
    if (param_1) {
      this->bDeferredRebuildPending = true;
    }
    else {
      local_80 = &local_res8;
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FSceneDynamicMeshSpatial::OnGeometryModified'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      local_res8 = this;
      (**(code **)(*(longlong *)pUVar12 + 0xb40))(pUVar12,&local_88);
      this->bDeferredRebuildPending = false;
    }
  }
  return;
}

// OnTransformModified @ 14cba69d0

void __thiscall FSceneDynamicMeshSpatial::OnTransformModified(FSceneDynamicMeshSpatial *this)

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

