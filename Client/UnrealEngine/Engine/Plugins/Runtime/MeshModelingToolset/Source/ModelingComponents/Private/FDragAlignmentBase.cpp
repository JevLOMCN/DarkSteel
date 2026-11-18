// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 15

// <lambda_invoker_cdecl> @ 14cab0c00

bool __cdecl FDragAlignmentBase::<lambda_38_>::<lambda_invoker_cdecl>(int param_1)

{
  return true;
}

// FDragAlignmentBase @ 14cac95b0

FDragAlignmentBase * __thiscall FDragAlignmentBase::FDragAlignmentBase(FDragAlignmentBase *this)

{
  undefined1 *puVar1;
  
  this->_padding_ = (longlong)&___7FDragAlignmentBase__6B_;
  *(undefined8 *)&this->WorldRayCast = 0;
  *(undefined8 *)&(this->WorldRayCast).field_0x28 = 0;
  *(undefined8 *)&this->MeshRayCast = 0;
  *(undefined8 *)&(this->MeshRayCast).field_0x28 = 0;
  *(undefined8 *)&this->MeshRayCastTriangleFilter = 0;
  *(undefined8 *)&(this->MeshRayCastTriangleFilter).field_0x28 = 0;
  *(undefined ***)&(this->MeshRayCastTriangleFilter).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NH_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->MeshRayCastTriangleFilter).field_0x18;
  *(code **)puVar1 = <lambda_38_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->MeshRayCastTriangleFilter =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(int),bool,int>::Call;
  }
  (this->CachedCameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CachedCameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CachedCameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CachedCameraState).Orientation.W = 1.0;
  (this->CachedCameraState).Orientation.X = 0.0;
  (this->CachedCameraState).Orientation.Y = 0.0;
  (this->CachedCameraState).Orientation.Z = 0.0;
  (this->CachedCameraState).HorizontalFOVDegrees = 90.0;
  (this->CachedCameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CachedCameraState).AspectRatio = 1.0;
  (this->CachedCameraState).bIsOrthographic = false;
  (this->CachedCameraState).bIsVR = false;
  (this->CachedCameraState).DPIScale = 1.0;
  this->VisualAngleSnapThreshold = 1.0;
  this->bPreviewEndpointsValid = false;
  this->bWaitingOnProjectedResult = false;
  memset(&this->LastHitResult,0,0x100);
  (this->LastHitResult).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->LastHitResult).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->LastHitResult).Time = 1.0;
  (this->LastHitResult).MyItem = -1;
  (this->LastHitResult).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->LastHitResult).HitObjectHandle.InstanceIndex = -1;
  (this->LastHitResult).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->LastHitResult).HitObjectHandle.field_0x1d = 0;
  return this;
}

// ~FDragAlignmentBase @ 14cad1850

void __thiscall FDragAlignmentBase::~FDragAlignmentBase(FDragAlignmentBase *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7FDragAlignmentBase__6B_;
  if (*(longlong *)&this->MeshRayCastTriangleFilter != 0) {
    plVar1 = *(longlong **)&(this->MeshRayCastTriangleFilter).field_0x28;
    plVar2 = (longlong *)&(this->MeshRayCastTriangleFilter).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->MeshRayCast != 0) {
    plVar1 = *(longlong **)&(this->MeshRayCast).field_0x28;
    plVar2 = (longlong *)&(this->MeshRayCast).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->WorldRayCast != 0) {
    plVar1 = *(longlong **)&(this->WorldRayCast).field_0x28;
    plVar2 = (longlong *)&(this->WorldRayCast).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014cad18b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// operator() @ 14cad67d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`FDragAlignmentBase::SetupInternal'::__l2::<lambda_1>::operator()
          (void *this,TRay<double> *param_1,FHitResult *param_2,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  FHitResult *pFVar14;
  USceneSnappingManager *pUVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 auStackY_208 [32];
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined1 local_1b8 [136];
  double local_130;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *pTStack_128;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *local_120;
  undefined8 local_118;
  TVector<double> *local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  double local_b8;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *pTStack_b0;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *local_a8;
  FSnapGeometry local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1d8 = (param_1->Direction).field0_0x0._s_0.X + (param_1->Origin).field0_0x0._s_0.X;
  local_1b8._32_8_ = 0.0;
  local_1d0 = (param_1->Origin).field0_0x0._s_0.Y + (param_1->Direction).field0_0x0._s_0.Y;
  local_98.PointCount = 0;
  local_1b8._64_8_ = ___xmm_3ff00000000000000000000000000000;
  local_1b8._72_8_ = _UNK_15061cbc8;
  local_1b8._80_4_ = 90.0;
  local_1b8._84_4_ = 100.0;
  local_1c8 = (param_1->Origin).field0_0x0._s_0.Z + (param_1->Direction).field0_0x0._s_0.Z;
  local_1b8._88_6_ = 0x3f800000;
  local_110 = (TVector<double> *)0x0;
  local_1b8._16_8_ = 0.0;
  local_1b8._24_8_ = 0.0;
  local_1b8._48_8_ = 0.0;
  local_1b8._56_8_ = 0.0;
  local_1b8._96_8_ = __real_3ff0000000000000;
  local_1b8._0_8_ = (**(code **)(**(longlong **)this + 8))();
  local_1b8._112_8_ = &local_1d8;
  lVar17 = *(longlong *)this;
  local_1b8._16_8_ = *(double *)(lVar17 + 0xa0);
  local_1b8._24_8_ = *(double *)(lVar17 + 0xa8);
  local_1b8._32_8_ = *(double *)(lVar17 + 0xb0);
  local_1b8._40_8_ = *(undefined8 *)(lVar17 + 0xb8);
  local_1b8._48_8_ = *(double *)(lVar17 + 0xc0);
  local_1b8._56_8_ = *(double *)(lVar17 + 200);
  local_1b8._64_8_ = *(double *)(lVar17 + 0xd0);
  local_1b8._72_8_ = *(double *)(lVar17 + 0xd8);
  local_1b8._80_8_ = *(undefined8 *)(lVar17 + 0xe0);
  local_1b8._88_8_ = *(undefined8 *)(lVar17 + 0xe8);
  local_1b8._96_8_ = *(double *)(lVar17 + 0xf0);
  local_1b8._104_8_ = *(undefined8 *)(lVar17 + 0xf8);
  local_1b8._120_8_ = &local_b8;
  local_1b8._128_2_ = 0x101;
  local_118 = &local_98;
  local_130 = (double)*(float *)(lVar17 + 0x100);
  local_120 = param_4;
  pTStack_128 = param_3;
  bVar13 = ToolSceneQueriesUtil::FindSceneSnapPoint((FFindSceneSnapPointParams *)local_1b8);
  if (bVar13) {
    memset(local_1b8,0,0x100);
    local_100 = 0;
    uStack_f8 = 0;
    lVar17 = 2;
    local_1b8._4_4_ = 0x3f800000;
    local_1b8._128_8_ = (param_1->Origin).field0_0x0._s_0.Z;
    local_f0 = 0;
    uStack_e8 = 0xffffffff;
    local_118 = (FSnapGeometry *)CONCAT44(0xffffffff,(undefined4)local_118);
    local_130 = local_b8;
    pTStack_128 = pTStack_b0;
    local_1b8._112_8_ = (TVector<double> *)(param_1->Origin).field0_0x0._s_0.X;
    local_1b8._120_8_ = (TVector<double> *)(param_1->Origin).field0_0x0._s_0.Y;
    local_120 = local_a8;
    pFVar14 = param_2;
    puVar16 = (undefined8 *)local_1b8;
    do {
      uVar9 = *puVar16;
      uVar10 = puVar16[1];
      uVar11 = puVar16[2];
      uVar12 = puVar16[3];
      pFVar14->FaceIndex = (int)uVar9;
      pFVar14->Time = (float)(int)((ulonglong)uVar9 >> 0x20);
      pFVar14->Distance = (float)(int)uVar10;
      pFVar14->_padding_ = (int)((ulonglong)uVar10 >> 0x20);
      uVar9 = puVar16[4];
      uVar10 = puVar16[5];
      *(undefined8 *)&pFVar14->Location = uVar11;
      *(undefined8 *)&(pFVar14->Location).field_0x8 = uVar12;
      uVar11 = puVar16[6];
      uVar12 = puVar16[7];
      *(undefined8 *)&(pFVar14->Location).field_0x10 = uVar9;
      *(undefined8 *)&pFVar14->ImpactPoint = uVar10;
      uVar9 = puVar16[8];
      uVar10 = puVar16[9];
      *(undefined8 *)&(pFVar14->ImpactPoint).field_0x8 = uVar11;
      *(undefined8 *)&(pFVar14->ImpactPoint).field_0x10 = uVar12;
      uVar11 = puVar16[10];
      uVar12 = puVar16[0xb];
      *(undefined8 *)&pFVar14->Normal = uVar9;
      *(undefined8 *)&(pFVar14->Normal).field_0x8 = uVar10;
      uVar9 = puVar16[0xc];
      uVar10 = puVar16[0xd];
      *(undefined8 *)&(pFVar14->Normal).field_0x10 = uVar11;
      *(undefined8 *)&pFVar14->ImpactNormal = uVar12;
      uVar11 = puVar16[0xe];
      uVar12 = puVar16[0xf];
      *(undefined8 *)&(pFVar14->ImpactNormal).field_0x8 = uVar9;
      *(undefined8 *)&(pFVar14->ImpactNormal).field_0x10 = uVar10;
      *(undefined8 *)&pFVar14->TraceStart = uVar11;
      *(undefined8 *)&(pFVar14->TraceStart).field_0x8 = uVar12;
      lVar17 = lVar17 + -1;
      pFVar14 = (FHitResult *)&(pFVar14->TraceStart).field_0x10;
      puVar16 = puVar16 + 0x10;
    } while (lVar17 != 0);
    bVar13 = true;
    *(double *)&param_2->ImpactPoint = local_b8;
    *(TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> **)
     &(param_2->ImpactPoint).field_0x8 = pTStack_b0;
    *(TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> **)
     &(param_2->ImpactPoint).field_0x10 = local_a8;
    dVar1 = *(double *)&(param_2->ImpactPoint).field_0x8;
    dVar2 = (param_1->Origin).field0_0x0._s_0.Y;
    dVar3 = (param_1->Origin).field0_0x0._s_0.X;
    dVar4 = *(double *)&(param_2->ImpactPoint).field_0x10;
    dVar5 = (param_1->Origin).field0_0x0._s_0.Z;
    dVar6 = (param_1->Direction).field0_0x0._s_0.Y;
    dVar7 = (param_1->Direction).field0_0x0._s_0.X;
    dVar8 = (param_1->Direction).field0_0x0._s_0.Z;
    param_2->Item = (local_98.PointCount != 1) + 2;
    param_2->Distance =
         (float)((dVar1 - dVar2) * dVar6 + (*(double *)&param_2->ImpactPoint - dVar3) * dVar7 +
                (dVar4 - dVar5) * dVar8);
  }
  else {
    pUVar15 = (USceneSnappingManager *)(**(code **)(**(longlong **)this + 8))();
    bVar13 = ToolSceneQueriesUtil::FindNearestVisibleObjectHit
                       (pUVar15,param_2,param_1,param_3,
                        (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0);
    if (bVar13) {
      param_2->Item = 1;
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
  }
  return bVar13;
}

// operator() @ 14cad7970

bool __thiscall
`FDragAlignmentBase::InitializeDeformedMeshRayCast'::__l5::<lambda_1>::operator()
          (void *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar2 = *(longlong *)((longlong)this + 8);
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  lVar5 = 0;
  local_18 = *(undefined8 *)(lVar4 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_10 = *(undefined4 *)(lVar4 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  do {
    uVar1 = *(uint *)((longlong)&local_18 + lVar5 * 4);
    if (*(int *)(lVar2 + 0x40) != *(int *)(lVar2 + 0x6c)) {
      lVar4 = lVar2 + 0x70;
      if (*(longlong *)(lVar2 + 0x78) != 0) {
        lVar4 = *(longlong *)(lVar2 + 0x78);
      }
      iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x80) - 1U & uVar1) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)(*(longlong *)(lVar2 + 0x38) + (longlong)iVar3 * 0xc) == uVar1) {
            return false;
          }
          iVar3 = *(int *)(*(longlong *)(lVar2 + 0x38) + 4 + (longlong)iVar3 * 0xc);
        } while (iVar3 != -1);
      }
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 < 3);
  return true;
}

// operator() @ 14cad8c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cad9106) */
/* WARNING: Removing unreachable block (ram,0x00014cad911a) */
/* WARNING: Removing unreachable block (ram,0x00014cad911e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`FDragAlignmentBase::InitializeDeformedMeshRayCast'::__l2::<lambda_2>::operator()
          (void *this,TRay<double> *param_1,FHitResult *param_2,bool param_3)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  code *pcVar4;
  FDynamicMesh3 *this_00;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  int iVar10;
  undefined **ppuVar11;
  char cVar12;
  bool bVar13;
  undefined8 uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  TVector<double>_u_0 *pTVar17;
  FHitResult *pFVar18;
  TVector<double> *pTVar19;
  FHitResult *pFVar20;
  undefined ***pppuVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  TVector<double>_u_0 *pTVar25;
  longlong lVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  double dVar75;
  undefined4 uVar76;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined4 uVar96;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  double dVar97;
  undefined1 auVar98 [16];
  double dVar104;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  double dVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  double dVar119;
  double dVar120;
  double dVar121;
  undefined1 auVar122 [16];
  double dVar123;
  undefined1 auStack_398 [32];
  undefined8 *local_378;
  uint local_368 [4];
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_338;
  TVector<double>_u_0 local_318;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  TVector<double>_u_0 local_2e0;
  double local_2c8 [2];
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a0;
  TVector<double>_u_0 local_288;
  double local_260;
  FHitResult local_258;
  TVector<double>_u_0 local_158;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128 [2];
  code *local_118;
  double dStack_110;
  undefined **local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined ***pppuStack_f0;
  undefined1 local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_398;
  auVar107 = *(undefined1 (*) [16])&(param_1->Direction).field0_0x0;
  dVar29 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar64 = *(double *)((longlong)this + 0x40) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar75 = *(double *)((longlong)this + 0x48) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar77._0_8_ =
       *(double *)((longlong)this + 0x50) *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar77._8_8_ =
       *(double *)((longlong)this + 0x58) *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar50._8_4_ = SUB84(dVar75,0);
  auVar50._0_8_ = dVar64;
  uVar76 = (undefined4)((ulonglong)dVar75 >> 0x20);
  auVar50._12_4_ = uVar76;
  auVar53._8_4_ = SUB84(dVar75,0);
  auVar53._0_8_ = dVar64;
  auVar53._12_4_ = uVar76;
  dVar28 = auVar107._8_8_;
  auVar54 = blendpd(auVar53,auVar77,2);
  auVar45._8_8_ = 0;
  auVar45._0_8_ = dVar29;
  auVar45 = blendpd(auVar107,auVar45,2);
  auVar110._8_4_ = SUB84(auVar77._8_8_,0);
  auVar110._0_8_ = auVar77._0_8_;
  auVar110._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
  auVar116._0_8_ = dVar28 * dVar64 - auVar107._0_8_ * auVar50._8_8_;
  auVar116._8_8_ = dVar29 * dVar75 - dVar28 * auVar77._0_8_;
  auVar98._8_4_ = SUB84(auVar116._8_8_,0);
  auVar98._0_8_ = auVar116._0_8_;
  auVar98._12_4_ = (int)((ulonglong)auVar116._8_8_ >> 0x20);
  auVar46._0_8_ = auVar45._0_8_ * auVar77._0_8_ - auVar54._0_8_ * dVar29;
  auVar46._8_8_ = auVar45._8_8_ * auVar77._8_8_ - auVar54._8_8_ * 0.0;
  dVar97 = auVar98._8_8_ + auVar98._8_8_;
  dVar104 = auVar46._0_8_ + auVar46._0_8_;
  auVar117 = blendpd(auVar116,auVar46,2);
  uVar76 = SUB84(dVar104,0);
  auVar105._8_4_ = uVar76;
  auVar105._0_8_ = dVar97;
  uVar96 = (undefined4)((ulonglong)dVar104 >> 0x20);
  auVar105._12_4_ = uVar96;
  local_358._s_0.X = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
  local_358._s_0.Y = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
  auVar84._8_4_ = uVar76;
  auVar84._0_8_ = dVar97;
  auVar84._12_4_ = uVar96;
  auVar45 = *(undefined1 (*) [16])((longlong)this + 0x80);
  auVar83._8_4_ = uVar76;
  auVar83._0_8_ = dVar97;
  auVar83._12_4_ = uVar96;
  auVar118._0_8_ = auVar117._0_8_ + auVar117._0_8_;
  auVar118._8_8_ = auVar117._8_8_ + auVar117._8_8_;
  auVar5._4_8_ = dVar75;
  auVar5._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar65._0_8_ = auVar5._0_8_ << 0x20;
  auVar65._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar65._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar106._0_8_ = auVar105._8_8_ * dVar64 - dVar97 * auVar50._8_8_;
  auVar106._8_8_ = auVar118._0_8_ * dVar75 - auVar84._8_8_ * auVar77._0_8_;
  auVar84 = blendpd(auVar83,auVar118,2);
  auVar117._8_4_ = SUB84(auVar118._8_8_,0);
  auVar117._0_8_ = auVar118._0_8_;
  auVar117._12_4_ = (int)((ulonglong)auVar118._8_8_ >> 0x20);
  auVar85._0_8_ = auVar84._0_8_ * auVar77._0_8_ - auVar118._0_8_ * auVar54._0_8_;
  auVar85._8_8_ = auVar84._8_8_ * auVar77._8_8_ - auVar117._8_8_ * auVar54._8_8_;
  auVar84 = *(undefined1 (*) [16])((longlong)this + 0x90);
  auVar78._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar45._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar45._0_4_);
  auVar78._8_4_ = _UNK_15061cc88 & auVar45._8_4_;
  auVar78._12_4_ = _UNK_15061cc8c & auVar45._12_4_;
  auVar66._8_8_ = auVar65._8_8_;
  auVar66._0_8_ = auVar84._0_8_;
  auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar45);
  lVar26 = -(ulonglong)(auVar78._8_8_ <= local_358._s_0.Y);
  auVar79._0_8_ =
       (double)CONCAT44(~(uint)(-(ulonglong)(auVar78._0_8_ <= local_358._s_0.X) >> 0x20) &
                        auVar45._4_4_,
                        ~(uint)-(ulonglong)(auVar78._0_8_ <= local_358._s_0.X) & auVar45._0_4_);
  auVar79._8_4_ = ~(uint)lVar26 & auVar45._8_4_;
  auVar79._12_4_ = ~(uint)((ulonglong)lVar26 >> 0x20) & auVar45._12_4_;
  auVar54._8_4_ = SUB84(auVar106._8_8_,0);
  auVar54._0_8_ = auVar106._0_8_;
  auVar54._12_4_ = (int)((ulonglong)auVar106._8_8_ >> 0x20);
  local_2c8[0] = 0.0;
  local_2c8[1] = 0.0;
  lVar26 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar84._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar84._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar66);
  local_338._s_0.X = auVar79._0_8_ * (dVar97 * auVar110._8_8_ + auVar107._0_8_ + auVar54._8_8_);
  local_338._s_0.Y = auVar79._8_8_ * (dVar104 * auVar77._8_8_ + dVar28 + auVar85._0_8_);
  dVar64 = *(double *)((longlong)this + 0x40) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar75 = *(double *)((longlong)this + 0x48) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar80._0_8_ =
       *(double *)((longlong)this + 0x50) *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar80._8_8_ =
       *(double *)((longlong)this + 0x58) *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar55._8_4_ = SUB84(dVar75,0);
  auVar55._0_8_ = dVar64;
  uVar76 = (undefined4)((ulonglong)dVar75 >> 0x20);
  auVar55._12_4_ = uVar76;
  dVar28 = (param_1->Origin).field0_0x0._s_0.Z - *(double *)((longlong)this + 0x70);
  auVar107 = blendpd(auVar106,auVar85,2);
  auVar84 = blendpd(auVar55,auVar80,2);
  dVar115 = (param_1->Origin).field0_0x0._s_0.X - *(double *)((longlong)this + 0x60);
  dVar119 = (param_1->Origin).field0_0x0._s_0.Y - *(double *)((longlong)this + 0x68);
  local_2e0._s_0.Z =
       (dVar29 + auVar118._0_8_ * auVar110._8_8_ + auVar107._0_8_) *
       (double)CONCAT44(~(uint)((ulonglong)lVar26 >> 0x20) & auVar45._4_4_,
                        ~(uint)lVar26 & auVar45._0_4_);
  auVar51._8_4_ = SUB84(dVar75,0);
  auVar51._0_8_ = dVar64;
  auVar51._12_4_ = uVar76;
  auVar111._8_4_ = SUB84(dVar119,0);
  auVar111._0_8_ = dVar115;
  uVar76 = (undefined4)((ulonglong)dVar119 >> 0x20);
  auVar111._12_4_ = uVar76;
  dVar29 = auVar51._8_8_;
  auVar108._8_4_ = SUB84(auVar80._8_8_,0);
  auVar108._0_8_ = auVar80._0_8_;
  auVar108._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
  auVar31._8_4_ = SUB84(auVar80._0_8_,0);
  auVar31._0_8_ = dVar29;
  auVar31._12_4_ = (int)((ulonglong)auVar80._0_8_ >> 0x20);
  auVar47._8_4_ = SUB84(dVar119,0);
  auVar47._0_8_ = dVar115;
  auVar47._12_4_ = uVar76;
  auVar112._0_8_ = auVar111._8_8_ * dVar64 - dVar29 * dVar115;
  auVar112._8_8_ = dVar28 * dVar75 - auVar31._8_8_ * dVar119;
  auVar86._8_4_ = SUB84(auVar112._8_8_,0);
  auVar86._0_8_ = auVar112._0_8_;
  auVar86._12_4_ = (int)((ulonglong)auVar112._8_8_ >> 0x20);
  auVar107._8_8_ = 0;
  auVar107._0_8_ = dVar28;
  auVar107 = blendpd(auVar47,auVar107,2);
  auVar48._0_8_ = auVar107._0_8_ * auVar80._0_8_ - auVar84._0_8_ * dVar28;
  auVar48._8_8_ = auVar107._8_8_ * auVar80._8_8_ - auVar84._8_8_ * 0.0;
  dVar97 = auVar86._8_8_ + auVar86._8_8_;
  dVar104 = auVar48._0_8_ + auVar48._0_8_;
  auVar45 = blendpd(auVar112,auVar48,2);
  auVar107 = *(undefined1 (*) [16])((longlong)this + 0x80);
  uVar76 = SUB84(dVar104,0);
  auVar99._8_4_ = uVar76;
  auVar99._0_8_ = dVar97;
  uVar96 = (undefined4)((ulonglong)dVar104 >> 0x20);
  auVar99._12_4_ = uVar96;
  auVar113._0_8_ = auVar45._0_8_ + auVar45._0_8_;
  auVar113._8_8_ = auVar45._8_8_ + auVar45._8_8_;
  auVar32._8_4_ = uVar76;
  auVar32._0_8_ = dVar97;
  auVar32._12_4_ = uVar96;
  auVar67._8_4_ = uVar76;
  auVar67._0_8_ = dVar97;
  auVar67._12_4_ = uVar96;
  auVar100._0_8_ = auVar99._8_8_ * dVar64 - dVar97 * dVar29;
  auVar100._8_8_ = auVar113._0_8_ * dVar75 - auVar32._8_8_ * auVar80._0_8_;
  auVar45 = blendpd(auVar67,auVar113,2);
  auVar33._8_4_ = SUB84(auVar113._8_8_,0);
  auVar33._0_8_ = auVar113._0_8_;
  auVar33._12_4_ = (int)((ulonglong)auVar113._8_8_ >> 0x20);
  auVar6._4_8_ = auVar80._8_8_;
  auVar6._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar81._0_8_ = auVar6._0_8_ << 0x20;
  auVar81._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar81._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar56._0_8_ =
       (double)CONCAT44(auVar107._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar107._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar56._8_4_ = auVar107._8_4_ & _UNK_15061cc88;
  auVar56._12_4_ = auVar107._12_4_ & _UNK_15061cc8c;
  lVar27 = -(ulonglong)(auVar56._8_8_ <= local_358._s_0.Y);
  auVar68._0_8_ = auVar45._0_8_ * auVar80._0_8_ - auVar113._0_8_ * auVar84._0_8_;
  auVar68._8_8_ = auVar45._8_8_ * auVar80._8_8_ - auVar33._8_8_ * auVar84._8_8_;
  auVar45 = *(undefined1 (*) [16])((longlong)this + 0x90);
  auVar82._8_8_ = auVar81._8_8_;
  auVar82._0_8_ = auVar45._0_8_;
  auVar34._8_4_ = SUB84(auVar100._8_8_,0);
  auVar34._0_8_ = auVar100._0_8_;
  auVar34._12_4_ = (int)((ulonglong)auVar100._8_8_ >> 0x20);
  auVar84 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar82);
  auVar107 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar107);
  lVar26 = -(ulonglong)
            ((double)CONCAT44(auVar45._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar45._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar57._0_8_ =
       (double)CONCAT44(~(uint)(-(ulonglong)(auVar56._0_8_ <= local_358._s_0.X) >> 0x20) &
                        auVar107._4_4_,
                        ~(uint)-(ulonglong)(auVar56._0_8_ <= local_358._s_0.X) & auVar107._0_4_);
  auVar57._8_4_ = ~(uint)lVar27 & auVar107._8_4_;
  auVar57._12_4_ = ~(uint)((ulonglong)lVar27 >> 0x20) & auVar107._12_4_;
  auVar107 = blendpd(auVar100,auVar68,2);
  local_318._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar26 >> 0x20) & auVar84._4_4_,
                        ~(uint)lVar26 & auVar84._0_4_) *
       (auVar113._0_8_ * auVar108._8_8_ + dVar28 + auVar107._0_8_);
  local_2f8 = auVar57._0_8_ * (dVar97 * auVar108._8_8_ + dVar115 + auVar34._8_8_);
  dStack_2f0 = auVar57._8_8_ * (dVar104 * auVar80._8_8_ + dVar119 + auVar68._0_8_);
  local_2e8 = local_318._s_0.Z;
  local_2e0._s_0.X = local_338._s_0.X;
  local_2e0._s_0.Y = local_338._s_0.Y;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_2e0._s_0,__real_3e45798ee0000000);
  auVar49._0_8_ = local_2e0._s_0.Z * local_2e0._s_0.Z;
  auVar49._8_8_ = 0;
  auVar52._0_8_ =
       local_2e0._s_0.X * local_2e0._s_0.X + local_2e0._s_0.Y * local_2e0._s_0.Y + auVar49._0_8_;
  auVar52._8_8_ = 0;
  auVar107 = sqrtpd(auVar49,auVar52);
  if (auVar107._0_8_ <= 0.0) {
    local_2e0._s_0.X = 0.0;
    local_2e0._s_0.Y = 0.0;
    local_2e0._s_0.Z = 0.0;
  }
  else {
    dVar29 = __real_3ff0000000000000 / auVar107._0_8_;
    local_2e0._s_0.X = local_2e0._s_0.X * dVar29;
    local_2e0._s_0.Y = local_2e0._s_0.Y * dVar29;
    local_2e0._s_0.Z = local_2e0._s_0.Z * dVar29;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar4 = *(code **)((longlong)this + 0x10);
  plVar15 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar15 = *(longlong **)((longlong)this + 0x38);
  }
  uVar14 = (**(code **)(*plVar15 + 8))();
  plVar15 = (longlong *)(*pcVar4)(uVar14);
  uVar14 = local_f8;
  uStack_140 = uStack_100;
  ppuVar11 = local_108;
  dVar29 = dStack_110;
  this_00 = (FDynamicMesh3 *)plVar15[1];
  local_128[0] = __real_7fefffffffffffff;
  local_118 = (code *)0x0;
  local_e8 = 0;
  if (param_3) {
    uStack_100 = *(undefined8 *)this;
    dStack_110 = local_158._s_0.Y;
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<``FDragAlignmentBase::InitializeDeformedMeshRayCast'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,bool,int>
                ::Call;
    local_f8 = local_138;
    pppuStack_f0 = (undefined ***)0x0;
    local_108 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``FDragAlignmentBase::InitializeDeformedMeshRayCast'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>,0,0>
                 ::_vftable_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar29;
    local_158._0_16_ = auVar7 << 0x40;
    local_158._s_0.Z = (double)ppuVar11;
    local_138 = uVar14;
    uStack_130 = 0;
    local_108 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``FDragAlignmentBase::InitializeDeformedMeshRayCast'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>,0,0>
                 ::_vftable_;
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<``FDragAlignmentBase::InitializeDeformedMeshRayCast'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,bool,int>
                ::Call;
    uStack_130 = 0;
  }
  pppuStack_f0 = (undefined ***)0x0;
  local_378 = local_128;
  local_e8 = param_3;
  cVar12 = (**(code **)(*plVar15 + 0x38))(plVar15,&local_2f8,local_2c8,local_368);
  if (cVar12 == '\0') {
    bVar13 = false;
  }
  else {
    auVar107 = *(undefined1 (*) [16])((longlong)this + 0x50);
    dVar75 = auVar107._0_8_;
    uVar16 = (ulonglong)(local_368[0] & 0x1ff);
    local_358._s_0.X =
         local_2c8[0] * (param_1->Direction).field0_0x0._s_0.Z + (param_1->Origin).field0_0x0._s_0.Z
    ;
    local_338._s_0.X =
         local_2c8[0] * (param_1->Direction).field0_0x0._s_0.X + (param_1->Origin).field0_0x0._s_0.X
    ;
    dVar64 = *(double *)((longlong)this + 0x58);
    local_338._s_0.Y =
         local_2c8[0] * (param_1->Direction).field0_0x0._s_0.Y + (param_1->Origin).field0_0x0._s_0.Y
    ;
    lVar26 = *(longlong *)
              ((this_00->Triangles).Blocks.AllocatorInstance.Data +
              (ulonglong)(local_368[0] >> 9) * 8);
    uVar3 = *(uint *)(lVar26 + uVar16 * 0xc);
    uVar23 = (ulonglong)(uVar3 & 0x1ff);
    lVar27 = *(longlong *)
              ((this_00->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8);
    pdVar1 = (double *)(lVar27 + uVar23 * 0x18);
    dVar104 = *pdVar1 * *(double *)((longlong)this + 0x80);
    dVar115 = pdVar1[1] * *(double *)((longlong)this + 0x88);
    uVar3 = *(uint *)(lVar26 + 4 + uVar16 * 0xc);
    auVar87._8_4_ = SUB84(dVar115,0);
    auVar87._0_8_ = dVar104;
    uVar76 = (undefined4)((ulonglong)dVar115 >> 0x20);
    auVar87._12_4_ = uVar76;
    auVar45 = *(undefined1 (*) [16])((longlong)this + 0x40);
    uVar24 = (ulonglong)(uVar3 & 0x1ff);
    auVar101._0_8_ = *(double *)(lVar27 + 0x10 + uVar23 * 0x18) * *(double *)((longlong)this + 0x90)
    ;
    auVar101._8_8_ = *(double *)((longlong)this + 0x98) * 0.0;
    lVar27 = *(longlong *)
              ((this_00->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8);
    pdVar1 = (double *)(lVar27 + uVar24 * 0x18);
    dVar97 = auVar107._8_8_;
    uVar3 = *(uint *)(lVar26 + 8 + uVar16 * 0xc);
    auVar88._0_8_ = auVar87._8_8_ * auVar45._0_8_ - auVar45._8_8_ * dVar104;
    auVar88._8_8_ = auVar101._0_8_ * auVar45._8_8_ - dVar75 * dVar115;
    uVar16 = (ulonglong)(uVar3 & 0x1ff);
    lVar26 = *(longlong *)
              ((this_00->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8);
    auVar35._8_4_ = SUB84(dVar115,0);
    auVar35._0_8_ = dVar104;
    auVar35._12_4_ = uVar76;
    auVar122._8_4_ = SUB84(auVar88._8_8_,0);
    auVar122._0_8_ = auVar88._0_8_;
    auVar122._12_4_ = (int)((ulonglong)auVar88._8_8_ >> 0x20);
    auVar84 = blendpd(auVar35,auVar101,2);
    auVar45 = blendpd(auVar45,auVar107,2);
    pdVar2 = (double *)(lVar26 + uVar16 * 0x18);
    auVar36._0_8_ = auVar84._0_8_ * dVar75 - auVar45._0_8_ * auVar101._0_8_;
    auVar36._8_8_ = auVar84._8_8_ * dVar97 - auVar45._8_8_ * auVar101._8_8_;
    auVar45 = *(undefined1 (*) [16])((longlong)this + 0x40);
    dVar121 = auVar122._8_8_ + auVar122._8_8_;
    dVar123 = auVar36._0_8_ + auVar36._0_8_;
    auVar84 = blendpd(auVar88,auVar36,2);
    auVar89._0_8_ = auVar84._0_8_ + auVar84._0_8_;
    auVar89._8_8_ = auVar84._8_8_ + auVar84._8_8_;
    auVar69._8_4_ = SUB84(dVar123,0);
    auVar69._0_8_ = dVar121;
    uVar76 = (undefined4)((ulonglong)dVar123 >> 0x20);
    auVar69._12_4_ = uVar76;
    dVar119 = *pdVar1 * *(double *)((longlong)this + 0x80);
    dVar120 = pdVar1[1] * *(double *)((longlong)this + 0x88);
    dVar29 = *pdVar2 * *(double *)((longlong)this + 0x80);
    dVar28 = pdVar2[1] * *(double *)((longlong)this + 0x88);
    uVar96 = (undefined4)((ulonglong)dVar28 >> 0x20);
    auVar58._8_4_ = SUB84(dVar123,0);
    auVar58._0_8_ = dVar121;
    auVar58._12_4_ = uVar76;
    auVar117 = blendpd(auVar58,auVar89,2);
    auVar84 = blendpd(auVar45,auVar107,2);
    auVar70._0_8_ = auVar69._8_8_ * auVar45._0_8_ - auVar45._8_8_ * dVar121;
    auVar70._8_8_ = auVar89._0_8_ * auVar45._8_8_ - dVar75 * dVar123;
    auVar37._8_4_ = SUB84(auVar70._8_8_,0);
    auVar37._0_8_ = auVar70._0_8_;
    auVar37._12_4_ = (int)((ulonglong)auVar70._8_8_ >> 0x20);
    auVar59._0_8_ = auVar117._0_8_ * dVar75 - auVar84._0_8_ * auVar89._0_8_;
    auVar59._8_8_ = auVar117._8_8_ * dVar97 - auVar84._8_8_ * auVar89._8_8_;
    auVar45 = blendpd(auVar70,auVar59,2);
    local_2b8._s_0.X =
         dVar121 * dVar64 + dVar104 + auVar37._8_8_ + *(double *)((longlong)this + 0x60);
    local_2b8._s_0.Y =
         dVar123 * dVar64 + dVar115 + auVar59._0_8_ + *(double *)((longlong)this + 0x68);
    local_318._s_0.Z =
         auVar89._0_8_ * dVar64 + auVar101._0_8_ + auVar45._0_8_ +
         *(double *)((longlong)this + 0x70);
    auVar45 = *(undefined1 (*) [16])((longlong)this + 0x40);
    auVar102._0_8_ = *(double *)(lVar27 + 0x10 + uVar24 * 0x18) * *(double *)((longlong)this + 0x90)
    ;
    auVar102._8_8_ = *(double *)((longlong)this + 0x98) * 0.0;
    auVar90._8_4_ = SUB84(dVar120,0);
    auVar90._0_8_ = dVar119;
    uVar76 = (undefined4)((ulonglong)dVar120 >> 0x20);
    auVar90._12_4_ = uVar76;
    auVar84 = blendpd(auVar45,auVar107,2);
    auVar91._0_8_ = auVar90._8_8_ * auVar45._0_8_ - auVar45._8_8_ * dVar119;
    auVar91._8_8_ = auVar102._0_8_ * auVar45._8_8_ - dVar75 * dVar120;
    auVar114._8_4_ = SUB84(auVar91._8_8_,0);
    auVar114._0_8_ = auVar91._0_8_;
    auVar114._12_4_ = (int)((ulonglong)auVar91._8_8_ >> 0x20);
    auVar38._8_4_ = SUB84(dVar120,0);
    auVar38._0_8_ = dVar119;
    auVar38._12_4_ = uVar76;
    auVar45 = blendpd(auVar38,auVar102,2);
    auVar39._0_8_ = auVar45._0_8_ * dVar75 - auVar84._0_8_ * auVar102._0_8_;
    auVar39._8_8_ = auVar45._8_8_ * dVar97 - auVar84._8_8_ * auVar102._8_8_;
    auVar45 = *(undefined1 (*) [16])((longlong)this + 0x40);
    auVar84 = blendpd(auVar91,auVar39,2);
    dVar64 = auVar114._8_8_ + auVar114._8_8_;
    dVar104 = auVar39._0_8_ + auVar39._0_8_;
    auVar92._0_8_ = auVar84._0_8_ + auVar84._0_8_;
    auVar92._8_8_ = auVar84._8_8_ + auVar84._8_8_;
    auVar71._8_4_ = SUB84(dVar104,0);
    auVar71._0_8_ = dVar64;
    uVar76 = (undefined4)((ulonglong)dVar104 >> 0x20);
    auVar71._12_4_ = uVar76;
    auVar60._8_4_ = SUB84(dVar104,0);
    auVar60._0_8_ = dVar64;
    auVar60._12_4_ = uVar76;
    auVar84 = blendpd(auVar60,auVar92,2);
    auVar72._0_8_ = auVar71._8_8_ * auVar45._0_8_ - auVar45._8_8_ * dVar64;
    auVar72._8_8_ = auVar92._0_8_ * auVar45._8_8_ - dVar75 * dVar104;
    auVar40._8_4_ = SUB84(auVar72._8_8_,0);
    auVar40._0_8_ = auVar72._0_8_;
    auVar40._12_4_ = (int)((ulonglong)auVar72._8_8_ >> 0x20);
    auVar45 = blendpd(auVar45,auVar107,2);
    auVar61._0_8_ = auVar84._0_8_ * dVar75 - auVar45._0_8_ * auVar92._0_8_;
    auVar61._8_8_ = auVar84._8_8_ * dVar97 - auVar45._8_8_ * auVar92._8_8_;
    auVar45 = blendpd(auVar72,auVar61,2);
    local_2a0._s_0.X =
         dVar64 * dVar97 + dVar119 + auVar40._8_8_ + *(double *)((longlong)this + 0x60);
    local_2a0._s_0.Y =
         dVar104 * dVar97 + dVar120 + auVar61._0_8_ + *(double *)((longlong)this + 0x68);
    local_2a0._s_0.Z =
         auVar92._0_8_ * dVar97 + auVar102._0_8_ + auVar45._0_8_ +
         *(double *)((longlong)this + 0x70);
    auVar103._0_8_ = *(double *)(lVar26 + 0x10 + uVar16 * 0x18) * *(double *)((longlong)this + 0x90)
    ;
    auVar103._8_8_ = *(double *)((longlong)this + 0x98) * 0.0;
    local_158._0_16_ = *(undefined1 (*) [16])((longlong)this + 0x40);
    auVar93._8_4_ = SUB84(dVar28,0);
    auVar93._0_8_ = dVar29;
    auVar93._12_4_ = uVar96;
    auVar84 = blendpd(local_158._0_16_,auVar107,2);
    auVar94._0_8_ = auVar93._8_8_ * local_158._0_8_ - local_158._8_8_ * dVar29;
    auVar94._8_8_ = auVar103._0_8_ * local_158._8_8_ - dVar75 * dVar28;
    auVar41._8_4_ = SUB84(dVar28,0);
    auVar41._0_8_ = dVar29;
    auVar41._12_4_ = uVar96;
    auVar45 = blendpd(auVar41,auVar103,2);
    auVar109._8_4_ = SUB84(auVar94._8_8_,0);
    auVar109._0_8_ = auVar94._0_8_;
    auVar109._12_4_ = (int)((ulonglong)auVar94._8_8_ >> 0x20);
    auVar42._0_8_ = auVar45._0_8_ * dVar75 - auVar84._0_8_ * auVar103._0_8_;
    auVar42._8_8_ = auVar45._8_8_ * dVar97 - auVar84._8_8_ * auVar103._8_8_;
    auVar45 = *(undefined1 (*) [16])((longlong)this + 0x40);
    auVar84 = blendpd(auVar94,auVar42,2);
    dVar64 = auVar109._8_8_ + auVar109._8_8_;
    dVar104 = auVar42._0_8_ + auVar42._0_8_;
    auVar95._0_8_ = auVar84._0_8_ + auVar84._0_8_;
    auVar95._8_8_ = auVar84._8_8_ + auVar84._8_8_;
    auVar73._8_4_ = SUB84(dVar104,0);
    auVar73._0_8_ = dVar64;
    uVar76 = (undefined4)((ulonglong)dVar104 >> 0x20);
    auVar73._12_4_ = uVar76;
    auVar62._8_4_ = SUB84(dVar104,0);
    auVar62._0_8_ = dVar64;
    auVar62._12_4_ = uVar76;
    auVar84 = blendpd(auVar62,auVar95,2);
    auVar107 = blendpd(auVar45,auVar107,2);
    auVar74._0_8_ = auVar73._8_8_ * auVar45._0_8_ - auVar45._8_8_ * dVar64;
    auVar74._8_8_ = auVar95._0_8_ * auVar45._8_8_ - dVar75 * dVar104;
    auVar43._8_4_ = SUB84(auVar74._8_8_,0);
    auVar43._0_8_ = auVar74._0_8_;
    auVar43._12_4_ = (int)((ulonglong)auVar74._8_8_ >> 0x20);
    auVar63._0_8_ = auVar84._0_8_ * dVar75 - auVar107._0_8_ * auVar95._0_8_;
    auVar63._8_8_ = auVar84._8_8_ * dVar97 - auVar107._8_8_ * auVar95._8_8_;
    local_288._s_0.X = dVar64 * dVar97 + dVar29 + auVar43._8_8_ + *(double *)((longlong)this + 0x60)
    ;
    local_288._s_0.Y =
         dVar104 * dVar97 + dVar28 + auVar63._0_8_ + *(double *)((longlong)this + 0x68);
    dVar29 = (local_2b8._s_0.Y - local_338._s_0.Y) * (local_2b8._s_0.Y - local_338._s_0.Y) +
             (local_2b8._s_0.X - local_338._s_0.X) * (local_2b8._s_0.X - local_338._s_0.X) +
             (local_318._s_0.Z - local_358._s_0.X) * (local_318._s_0.Z - local_358._s_0.X);
    auVar107 = blendpd(auVar74,auVar63,2);
    local_288._s_0.Z =
         auVar95._0_8_ * dVar97 + auVar103._0_8_ + auVar107._0_8_ +
         *(double *)((longlong)this + 0x70);
    dVar28 = (local_2a0._s_0.Y - local_338._s_0.Y) * (local_2a0._s_0.Y - local_338._s_0.Y) +
             (local_2a0._s_0.X - local_338._s_0.X) * (local_2a0._s_0.X - local_338._s_0.X) +
             (local_2a0._s_0.Z - local_358._s_0.X) * (local_2a0._s_0.Z - local_358._s_0.X);
    pTVar17 = &local_2b8;
    if (dVar28 < dVar29) {
      pTVar17 = &local_2a0;
      dVar29 = dVar28;
    }
    pTVar25 = &local_288;
    if (dVar29 <= (local_288._s_0.Y - local_338._s_0.Y) * (local_288._s_0.Y - local_338._s_0.Y) +
                  (local_288._s_0.X - local_338._s_0.X) * (local_288._s_0.X - local_338._s_0.X) +
                  (local_288._s_0.Z - local_358._s_0.X) * (local_288._s_0.Z - local_358._s_0.X)) {
      pTVar25 = pTVar17;
    }
    local_338._s_0.Z = local_358._s_0.X;
    local_2b8._s_0.Z = local_318._s_0.Z;
    local_260 = local_2a0._s_0.Z;
    local_158._s_0.Z = local_288._s_0.Z;
    bVar13 = ToolSceneQueriesUtil::PointSnapQuery
                       ((FViewCameraState *)(*(longlong *)this + 0xa0),
                        (TVector<double> *)&local_338._s_0,(TVector<double> *)&pTVar25->_s_0,
                        (double)*(float *)(*(longlong *)this + 0x100));
    if (bVar13) {
      local_358._s_0.X = (((TVector<double>_u_0 *)&(pTVar25->_s_0).X)->_s_0).X;
      local_358._s_0.Y = (pTVar25->_s_0).Y;
      local_358._s_0.Z = (pTVar25->_s_0).Z;
      local_318._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
      local_318._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
      local_318._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
      pFVar18 = FHitResult::FHitResult
                          (&local_258,(TVector<double> *)&local_318._s_0,
                           (TVector<double> *)&local_358._s_0);
      iVar22 = 2;
      lVar26 = 2;
      pFVar20 = param_2;
      do {
        fVar8 = pFVar18->Time;
        fVar9 = pFVar18->Distance;
        iVar10 = pFVar18->_padding_;
        pFVar20->FaceIndex = pFVar18->FaceIndex;
        pFVar20->Time = fVar8;
        pFVar20->Distance = fVar9;
        pFVar20->_padding_ = iVar10;
        uVar14 = *(undefined8 *)&(pFVar18->Location).field_0x8;
        *(undefined8 *)&pFVar20->Location = *(undefined8 *)&pFVar18->Location;
        *(undefined8 *)&(pFVar20->Location).field_0x8 = uVar14;
        uVar14 = *(undefined8 *)&pFVar18->ImpactPoint;
        *(undefined8 *)&(pFVar20->Location).field_0x10 =
             *(undefined8 *)&(pFVar18->Location).field_0x10;
        *(undefined8 *)&pFVar20->ImpactPoint = uVar14;
        uVar14 = *(undefined8 *)&(pFVar18->ImpactPoint).field_0x10;
        *(undefined8 *)&(pFVar20->ImpactPoint).field_0x8 =
             *(undefined8 *)&(pFVar18->ImpactPoint).field_0x8;
        *(undefined8 *)&(pFVar20->ImpactPoint).field_0x10 = uVar14;
        uVar14 = *(undefined8 *)&(pFVar18->Normal).field_0x8;
        *(undefined8 *)&pFVar20->Normal = *(undefined8 *)&pFVar18->Normal;
        *(undefined8 *)&(pFVar20->Normal).field_0x8 = uVar14;
        uVar14 = *(undefined8 *)&pFVar18->ImpactNormal;
        *(undefined8 *)&(pFVar20->Normal).field_0x10 = *(undefined8 *)&(pFVar18->Normal).field_0x10;
        *(undefined8 *)&pFVar20->ImpactNormal = uVar14;
        uVar14 = *(undefined8 *)&(pFVar18->ImpactNormal).field_0x10;
        *(undefined8 *)&(pFVar20->ImpactNormal).field_0x8 =
             *(undefined8 *)&(pFVar18->ImpactNormal).field_0x8;
        *(undefined8 *)&(pFVar20->ImpactNormal).field_0x10 = uVar14;
        uVar14 = *(undefined8 *)&(pFVar18->TraceStart).field_0x8;
        *(undefined8 *)&pFVar20->TraceStart = *(undefined8 *)&pFVar18->TraceStart;
        *(undefined8 *)&(pFVar20->TraceStart).field_0x8 = uVar14;
        lVar26 = lVar26 + -1;
        pFVar18 = (FHitResult *)&(pFVar18->TraceStart).field_0x10;
        pFVar20 = (FHitResult *)&(pFVar20->TraceStart).field_0x10;
      } while (lVar26 != 0);
      uVar14 = (pTVar25->_s_0).Z;
      uVar30 = (((TVector<double>_u_0 *)&(pTVar25->_s_0).X)->_s_0).X;
      uVar44 = (pTVar25->_s_0).Y;
    }
    else {
      local_318._s_0.X = local_338._s_0.X;
      local_318._s_0.Y = local_338._s_0.Y;
      local_358._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
      local_358._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
      local_318._s_0.Z = local_338._s_0.Z;
      local_358._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
      pFVar18 = FHitResult::FHitResult
                          (&local_258,(TVector<double> *)&local_358._s_0,
                           (TVector<double> *)&local_318._s_0);
      lVar26 = 2;
      pFVar20 = param_2;
      do {
        fVar8 = pFVar18->Time;
        fVar9 = pFVar18->Distance;
        iVar22 = pFVar18->_padding_;
        pFVar20->FaceIndex = pFVar18->FaceIndex;
        pFVar20->Time = fVar8;
        pFVar20->Distance = fVar9;
        pFVar20->_padding_ = iVar22;
        uVar14 = *(undefined8 *)&(pFVar18->Location).field_0x8;
        *(undefined8 *)&pFVar20->Location = *(undefined8 *)&pFVar18->Location;
        *(undefined8 *)&(pFVar20->Location).field_0x8 = uVar14;
        uVar14 = *(undefined8 *)&pFVar18->ImpactPoint;
        *(undefined8 *)&(pFVar20->Location).field_0x10 =
             *(undefined8 *)&(pFVar18->Location).field_0x10;
        *(undefined8 *)&pFVar20->ImpactPoint = uVar14;
        uVar14 = *(undefined8 *)&(pFVar18->ImpactPoint).field_0x10;
        *(undefined8 *)&(pFVar20->ImpactPoint).field_0x8 =
             *(undefined8 *)&(pFVar18->ImpactPoint).field_0x8;
        *(undefined8 *)&(pFVar20->ImpactPoint).field_0x10 = uVar14;
        uVar14 = *(undefined8 *)&(pFVar18->Normal).field_0x8;
        *(undefined8 *)&pFVar20->Normal = *(undefined8 *)&pFVar18->Normal;
        *(undefined8 *)&(pFVar20->Normal).field_0x8 = uVar14;
        uVar14 = *(undefined8 *)&pFVar18->ImpactNormal;
        *(undefined8 *)&(pFVar20->Normal).field_0x10 = *(undefined8 *)&(pFVar18->Normal).field_0x10;
        *(undefined8 *)&pFVar20->ImpactNormal = uVar14;
        uVar14 = *(undefined8 *)&(pFVar18->ImpactNormal).field_0x10;
        *(undefined8 *)&(pFVar20->ImpactNormal).field_0x8 =
             *(undefined8 *)&(pFVar18->ImpactNormal).field_0x8;
        *(undefined8 *)&(pFVar20->ImpactNormal).field_0x10 = uVar14;
        uVar14 = *(undefined8 *)&(pFVar18->TraceStart).field_0x8;
        *(undefined8 *)&pFVar20->TraceStart = *(undefined8 *)&pFVar18->TraceStart;
        *(undefined8 *)&(pFVar20->TraceStart).field_0x8 = uVar14;
        lVar26 = lVar26 + -1;
        pFVar18 = (FHitResult *)&(pFVar18->TraceStart).field_0x10;
        pFVar20 = (FHitResult *)&(pFVar20->TraceStart).field_0x10;
      } while (lVar26 != 0);
      iVar22 = 1;
      uVar14 = local_338._s_0.Z;
      uVar30 = local_338._s_0.X;
      uVar44 = local_338._s_0.Y;
    }
    *(undefined8 *)&param_2->ImpactPoint = uVar30;
    *(undefined8 *)&(param_2->ImpactPoint).field_0x8 = uVar44;
    *(undefined8 *)&(param_2->ImpactPoint).field_0x10 = uVar14;
    param_2->Item = iVar22;
    param_2->Distance =
         (float)((*(double *)&(param_2->ImpactPoint).field_0x8 - (param_1->Origin).field0_0x0._s_0.Y
                 ) * (param_1->Direction).field0_0x0._s_0.Y +
                 (*(double *)&param_2->ImpactPoint - (param_1->Origin).field0_0x0._s_0.X) *
                 (param_1->Direction).field0_0x0._s_0.X +
                (*(double *)&(param_2->ImpactPoint).field_0x10 - (param_1->Origin).field0_0x0._s_0.Z
                ) * (param_1->Direction).field0_0x0._s_0.Z);
    pTVar19 = UE::Geometry::FDynamicMesh3::GetTriNormal
                        (this_00,(TVector<double> *)&local_158._s_0,local_368[0]);
    bVar13 = true;
    dVar28 = (pTVar19->field0_0x0)._s_0.Y;
    dVar29 = (pTVar19->field0_0x0)._s_0.Z;
    *(double *)&param_2->ImpactNormal = (pTVar19->field0_0x0)._s_0.X;
    *(double *)&(param_2->ImpactNormal).field_0x8 = dVar28;
    *(double *)&(param_2->ImpactNormal).field_0x10 = dVar29;
  }
  if (local_118 != (code *)0x0) {
    pppuVar21 = &local_108;
    if (pppuStack_f0 != (undefined ***)0x0) {
      pppuVar21 = pppuStack_f0;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  return bVar13;
}

// operator() @ 14cadab20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>::operator()
          (void *this,UIntervalGizmo *param_1,TVector<double> *param_2,float param_3)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  TVector<double> *pTVar5;
  undefined1 auStack_f8 [32];
  TQuat<double> local_d8;
  TRotator<double> local_b8;
  TVector<double> local_a0;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  (**(code **)(param_1->_padding_ + 0x340))(param_1,&local_88);
  local_d8.X = local_88;
  local_d8.Y = dStack_80;
  local_d8.Z = local_78;
  local_d8.W = dStack_70;
  UE::Math::TQuat<double>::Rotator(&local_d8,&local_b8);
  pTVar5 = UE::Math::TRotator<double>::RotateVector(&local_b8,&local_a0,param_2);
  dVar3 = (double)param_3;
  dVar1 = (pTVar5->field0_0x0)._s_0.Z;
  lVar2 = *(longlong *)this;
  dStack_60 = dStack_60 + dVar3 * (pTVar5->field0_0x0)._s_0.Y;
  if (*(char *)(lVar2 + 0x105) == '\0') {
    *(undefined1 *)(lVar2 + 0x105) = 0;
  }
  else {
    auVar4._8_4_ = SUB84(dStack_60,0);
    auVar4._0_8_ = local_68 + dVar3 * (pTVar5->field0_0x0)._s_0.X;
    auVar4._12_4_ = (int)((ulonglong)dStack_60 >> 0x20);
    *(undefined1 (*) [16])(lVar2 + 0x208) = auVar4;
    *(undefined2 *)(lVar2 + 0x104) = 1;
    *(double *)(lVar2 + 0x218) = dVar3 * dVar1 + local_58;
  }
  return;
}

// AddToGizmo @ 14cae7980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDragAlignmentBase::AddToGizmo
          (FDragAlignmentBase *this,UCombinedTransformGizmo *param_1,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  ACombinedTransformGizmoActor *this_00;
  UTransformProxy *pUVar2;
  code *pcVar3;
  FDragAlignmentBase *pFVar4;
  FSharedReferencer<1> FVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  int iVar8;
  UCombinedTransformGizmo *pUVar9;
  TSharedRef<TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>,1> *pTVar10;
  UClass *pUVar11;
  <lambda_6> *p<Var12;
  <lambda_7> *p<Var13;
  <lambda_8> *p<Var14;
  <lambda_9> *p<Var15;
  undefined ***pppuVar16;
  longlong *plVar17;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *pTVar18;
  UCombinedTransformGizmo *pUVar19;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined1 auStackY_208 [32];
  undefined1 local_1d8 [8];
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *local_1d0;
  FDragAlignmentBase *local_1c8;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *local_1c0;
  FSharedReferencer<1> local_1b8;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *local_1b0;
  FSharedReferencer<1> FStack_1a8;
  FDragAlignmentBase *local_1a0;
  FDragAlignmentBase *local_198;
  FDragAlignmentBase *local_190;
  FDragAlignmentBase *local_188;
  undefined8 local_180;
  FSharedReferencer<1> local_178;
  undefined8 local_170;
  FSharedReferencer<1> local_168;
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  TSharedRef<TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>,1> local_140;
  TSharedRef<TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>,1> local_130;
  code *local_118 [2];
  undefined **local_108;
  FDragAlignmentBase *local_100;
  undefined ***local_f0;
  code *local_e8 [2];
  longlong local_d8 [3];
  longlong *local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  FDragAlignmentBase *local_a0;
  undefined ***local_90;
  code *local_88 [2];
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1d0 = param_3;
  local_1c8 = this;
  if ((param_1 == (UCombinedTransformGizmo *)0x0) ||
     ((param_1->ActiveTarget).field0_0x0.DebugPtr == (UTransformProxy *)0x0)) {
    local_1d8[0] = 0;
    bVar7 = `FDragAlignmentBase::AddToGizmo'::__l3::<lambda_1>::operator()(local_1d8);
    if (!bVar7) {
      return;
    }
  }
  pUVar9 = ::operator_new(0x20);
  if (pUVar9 == (UCombinedTransformGizmo *)0x0) {
    pTVar20 = (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
    pUVar9 = (UCombinedTransformGizmo *)0x0;
  }
  else {
    *(undefined4 *)&pUVar9->field_0x8 = 1;
    pTVar20 = (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)&pUVar9->field_0x10
    ;
    *(undefined4 *)&pUVar9->field_0xc = 1;
    *(undefined ***)pUVar9 =
         &
         ___7__TIntrusiveReferenceController_V__TArray_PEBVUPrimitiveComponent__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pUVar9->field_0x10 = 0;
    *(undefined8 *)&pUVar9->field_0x18 = 0;
    if ((pTVar20 == (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    *(int *)&pUVar9->field_0x8 = *(int *)&pUVar9->field_0x8 + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar9);
  this_00 = (param_1->GizmoActor).field0_0x0.DebugPtr;
  if (this_00 == (ACombinedTransformGizmoActor *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6124850043879948253>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\DragAlignmentMechanic.cpp"
                       ,0x23,"TransformGizmo->GetGizmoActor()");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pTVar20 == (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AActor::GetComponents<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>
              ((AActor *)this_00,pTVar20,false);
  }
  if (pUVar9 != (UCombinedTransformGizmo *)0x0) {
    LOCK();
    *(int *)&pUVar9->field_0x8 = *(int *)&pUVar9->field_0x8 + 1;
    UNLOCK();
  }
  pTVar18 = pTVar20;
  local_1b8.ReferenceController = (TReferenceControllerBase<1> *)pUVar9;
  if (param_2 != (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar10 = MakeShared<TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>,1,TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>_const_&>
                        (&local_140,param_2);
    local_178.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    local_1c0 = pTVar10->Object;
    if (local_178.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_178.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_180 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1b8,&local_178);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_140.SharedReferenceCount.ReferenceController);
    pTVar18 = local_1c0;
    if ((local_1c0 == (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pTVar20 == (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pTVar18 == pTVar20) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = pTVar20->ArrayNum;
    if (iVar1 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar1,&pTVar18->AllocatorInstance,&pTVar18->ArrayNum,&pTVar18->ArrayMax
                        );
      memcpy((pTVar18->AllocatorInstance).Data + (longlong)iVar8 * 8,
             (pTVar20->AllocatorInstance).Data,(longlong)iVar1 << 3);
    }
  }
  FVar5.ReferenceController = local_1b8.ReferenceController;
  local_1b0 = (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0;
  FStack_1a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_1d0 != (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar10 = MakeShared<TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>,1,TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>_const_&>
                        (&local_130,local_1d0);
    local_168.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    local_1b0 = pTVar10->Object;
    if (local_168.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_168.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_168.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_170 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1a8,&local_168);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_130.SharedReferenceCount.ReferenceController);
  }
  FVar6.ReferenceController = FStack_1a8.ReferenceController;
  local_1d0 = *(TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> **)
               (*(longlong *)param_1 + 0x310);
  if ((UCombinedTransformGizmo *)FVar5.ReferenceController != (UCombinedTransformGizmo *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FStack_1a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_1a8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_1a8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x30,8);
  local_c0[1] = (longlong)local_1c8;
  *local_c0 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_3>,1,1>::
               _vftable_;
  local_c0[4] = (longlong)local_1b0;
  local_c0[2] = (longlong)pTVar18;
  local_c0[3] = (longlong)FVar5.ReferenceController;
  local_c0[5] = (longlong)FVar6.ReferenceController;
  if (local_c0 != (longlong *)&DAT_fffffffffffffff8) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>,bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
                  ::Call;
  }
  local_100 = local_1c8;
  local_f0 = (undefined ***)0x0;
  local_108 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_2>,1,0>::
               _vftable_;
  local_118[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_2>,bool>::Call;
  (*(code *)local_1d0)(param_1,local_118,local_e8);
  if (local_118[0] != (code *)0x0) {
    pppuVar16 = &local_108;
    if (local_f0 != (undefined ***)0x0) {
      pppuVar16 = local_f0;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (local_e8[0] != (code *)0x0) {
    plVar17 = local_d8;
    if (local_c0 != (longlong *)0x0) {
      plVar17 = local_c0;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pUVar11 = Z_Construct_UClass_URepositionableTransformGizmo_NoRegister();
  iVar1 = (int)pUVar11->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     (pUVar19 = param_1,
     (longlong *)
     *(undefined1 **)(*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8)
     != &pUVar11->_padding_)) {
    pUVar19 = (UCombinedTransformGizmo *)0x0;
  }
  local_188 = local_1c8;
  if (pUVar19 != (UCombinedTransformGizmo *)0x0) {
    local_1d0 = *(TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> **)
                 (*(longlong *)pUVar19 + 0x3e0);
    if (pUVar9 != (UCombinedTransformGizmo *)0x0) {
      LOCK();
      *(int *)&pUVar9->field_0x8 = *(int *)&pUVar9->field_0x8 + 1;
      UNLOCK();
    }
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar6.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x30,8);
    pFVar4 = local_1c8;
    local_60[2] = (longlong)pTVar20;
    *local_60 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FDragAlignmentBase::AddToGizmo'::`17'::<lambda_5>,1,1>::
                 _vftable_;
    local_60[1] = (longlong)local_1c8;
    local_60[4] = (longlong)local_1b0;
    local_60[3] = (longlong)pUVar9;
    local_60[5] = (longlong)FVar6.ReferenceController;
    if (local_60 + 1 != (longlong *)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FDragAlignmentBase::AddToGizmo'::__l17::<lambda_5>,bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
                    ::Call;
    }
    local_90 = (undefined ***)0x0;
    local_a0 = local_1c8;
    local_a8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FDragAlignmentBase::AddToGizmo'::`17'::<lambda_4>,1,0>::
                _vftable_;
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDragAlignmentBase::AddToGizmo'::__l17::<lambda_4>,bool>::Call
    ;
    (*(code *)local_1d0)(pUVar19,local_b8,local_88);
    if (local_b8[0] != (code *)0x0) {
      pppuVar16 = &local_a8;
      if (local_90 != (undefined ***)0x0) {
        pppuVar16 = local_90;
      }
      (*(code *)(*pppuVar16)[2])();
    }
    if (local_88[0] != (code *)0x0) {
      plVar17 = local_78;
      if (local_60 != (longlong *)0x0) {
        plVar17 = local_60;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_188 = pFVar4;
  }
  pUVar2 = (param_1->ActiveTarget).field0_0x0.DebugPtr;
  local_1a0 = local_188;
  p<Var12 = (<lambda_6> *)(**(code **)(local_188->_padding_ + 0x20))(local_188);
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::AddWeakLambda<UObject,_FDragAlignmentBase::AddToGizmo_::__l2::<lambda_6>_>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
              *)&pUVar2->OnTransformChanged,(UObject *)local_160,p<Var12);
  pUVar2 = (param_1->ActiveTarget).field0_0x0.DebugPtr;
  local_198 = local_188;
  p<Var13 = (<lambda_7> *)(**(code **)(local_188->_padding_ + 0x20))(local_188);
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::AddWeakLambda<UObject,_FDragAlignmentBase::AddToGizmo_::__l2::<lambda_7>_>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
              *)&pUVar2->OnPivotChanged,(UObject *)(local_160 + 8),p<Var13);
  pUVar2 = (param_1->ActiveTarget).field0_0x0.DebugPtr;
  local_190 = local_188;
  p<Var14 = (<lambda_8> *)(**(code **)(local_188->_padding_ + 0x20))(local_188);
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
  AddWeakLambda<UObject,_FDragAlignmentBase::AddToGizmo_::__l2::<lambda_8>_>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
              *)&pUVar2->OnEndTransformEdit,(UObject *)local_150,p<Var14);
  pUVar2 = (param_1->ActiveTarget).field0_0x0.DebugPtr;
  p<Var15 = (<lambda_9> *)(**(code **)(local_188->_padding_ + 0x20))(local_188);
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
  AddWeakLambda<UObject,_FDragAlignmentBase::AddToGizmo_::__l2::<lambda_9>_>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
              *)&pUVar2->OnEndPivotEdit,(UObject *)(local_150 + 8),p<Var15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar9);
  return;
}

// AddToGizmo @ 14cae7fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDragAlignmentBase::AddToGizmo
          (FDragAlignmentBase *this,UIntervalGizmo *param_1,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  FSharedReferencer<1> FVar3;
  TSharedRef<TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>,1> *pTVar4;
  <lambda_3> *p<Var5;
  <lambda_4> *p<Var6;
  undefined ***pppuVar7;
  longlong *plVar8;
  undefined1 auStack_108 [32];
  FDragAlignmentBase *local_e8;
  FSharedReferencer<1> FStack_e0;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *local_d8;
  FSharedReferencer<1> FStack_d0;
  TSharedRef<TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>,1> local_c8;
  TSharedRef<TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>,1> local_b8;
  code *local_a8 [2];
  undefined **local_98;
  FDragAlignmentBase *local_90;
  undefined ***local_80;
  code *local_78 [2];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_d8 = (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0;
  FStack_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2 != (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = MakeShared<TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>,1,TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>_const_&>
                       (&local_c8,param_2);
    FStack_e0.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_d8 = pTVar4->Object;
    if (FStack_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_e0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_e0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e8 = (FDragAlignmentBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_d0,&FStack_e0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_e0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
  }
  local_e8 = (FDragAlignmentBase *)0x0;
  FStack_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_3 != (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = MakeShared<TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>,1,TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>_const_&>
                       (&local_b8,param_3);
    local_c8.SharedReferenceCount.ReferenceController =
         (pTVar4->SharedReferenceCount).ReferenceController;
    local_e8 = (FDragAlignmentBase *)pTVar4->Object;
    if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8.Object = (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&FStack_e0,&local_c8.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  FVar3.ReferenceController = FStack_d0.ReferenceController;
  FVar2.ReferenceController = FStack_e0.ReferenceController;
  pcVar1 = *(code **)(param_1->_padding_ + 0x318);
  if (FStack_d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_d0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_d0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FStack_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78[0] = (code *)0x0;
  local_50 = FMemory::Malloc(0x30,8);
  local_50[1] = (longlong)this;
  local_50[3] = (longlong)FVar3.ReferenceController;
  *local_50 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_2>,1,1>::
               _vftable_;
  local_50[2] = (longlong)local_d8;
  local_50[4] = (longlong)local_e8;
  local_50[5] = (longlong)FVar2.ReferenceController;
  if (local_50 != (longlong *)&DAT_fffffffffffffff8) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_2>,bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
                  ::Call;
  }
  local_80 = (undefined ***)0x0;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_1>,bool>::Call;
  local_90 = this;
  (*pcVar1)(param_1,local_a8,local_78);
  if (local_a8[0] != (code *)0x0) {
    pppuVar7 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar7 = local_80;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if (local_78[0] != (code *)0x0) {
    plVar8 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar8 = local_50;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_e8 = this;
  p<Var5 = (<lambda_3> *)(**(code **)(this->_padding_ + 0x20))(this);
  TMulticastDelegateRegistration<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy>
  ::AddWeakLambda<UObject,_FDragAlignmentBase::AddToGizmo_::__l2::<lambda_3>_>
            ((TMulticastDelegateRegistration<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy>
              *)&param_1->OnIntervalChanged,(UObject *)&local_d8,p<Var5);
  local_e8 = this;
  p<Var6 = (<lambda_4> *)(**(code **)(this->_padding_ + 0x20))(this);
  TMulticastDelegateRegistration<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy>::
  AddWeakLambda<UObject,_FDragAlignmentBase::AddToGizmo_::__l2::<lambda_4>_>
            ((TMulticastDelegateRegistration<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy>
              *)&param_1->OnEndIntervalGizmoEdit,(UObject *)&local_d8,p<Var6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return;
}

// CastRay @ 14caf2d50

bool __thiscall
FDragAlignmentBase::CastRay
          (FDragAlignmentBase *this,TRay<double> *param_1,TVector<double> *param_2,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_4,bool param_5)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  char cVar7;
  undefined8 uVar8;
  FHitResult *pFVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *local_res8;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *local_238 [2];
  undefined8 local_228;
  float fStack_220;
  undefined4 local_184;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_128;
  float fStack_120;
  undefined4 local_84;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  bVar14 = false;
  memset(&local_228,0,0x100);
  lVar13 = 2;
  local_228._4_4_ = 0x3f800000;
  local_184 = 0xffffffff;
  local_170 = 0;
  uStack_168 = 0;
  uStack_158 = 0xffffffff;
  local_160 = 0;
  if (*(void **)&this->MeshRayCast != (void *)0x0) {
    local_res8 = (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)
                 CONCAT71(local_res8._1_7_,param_5);
    UE::Core::Private::Function::CheckCallable(*(void **)&this->MeshRayCast);
    plVar1 = *(longlong **)&(this->MeshRayCast).field_0x28;
    pcVar2 = *(code **)&this->MeshRayCast;
    plVar11 = (longlong *)&(this->MeshRayCast).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar11 = plVar1;
    }
    uVar8 = (**(code **)(*plVar11 + 8))();
    cVar7 = (*pcVar2)(uVar8,param_1,&local_228,&local_res8);
    if (cVar7 != '\0') {
      bVar14 = true;
      lVar12 = 2;
      pFVar9 = &this->LastHitResult;
      puVar10 = &local_228;
      do {
        uVar8 = *puVar10;
        uVar3 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        pFVar9->FaceIndex = (int)uVar8;
        pFVar9->Time = (float)(int)((ulonglong)uVar8 >> 0x20);
        pFVar9->Distance = (float)(int)uVar3;
        pFVar9->_padding_ = (int)((ulonglong)uVar3 >> 0x20);
        uVar8 = puVar10[4];
        uVar3 = puVar10[5];
        *(undefined8 *)&pFVar9->Location = uVar4;
        *(undefined8 *)&(pFVar9->Location).field_0x8 = uVar5;
        uVar4 = puVar10[6];
        uVar5 = puVar10[7];
        *(undefined8 *)&(pFVar9->Location).field_0x10 = uVar8;
        *(undefined8 *)&pFVar9->ImpactPoint = uVar3;
        uVar8 = puVar10[8];
        uVar3 = puVar10[9];
        *(undefined8 *)&(pFVar9->ImpactPoint).field_0x8 = uVar4;
        *(undefined8 *)&(pFVar9->ImpactPoint).field_0x10 = uVar5;
        uVar4 = puVar10[10];
        uVar5 = puVar10[0xb];
        *(undefined8 *)&pFVar9->Normal = uVar8;
        *(undefined8 *)&(pFVar9->Normal).field_0x8 = uVar3;
        uVar8 = puVar10[0xc];
        uVar3 = puVar10[0xd];
        *(undefined8 *)&(pFVar9->Normal).field_0x10 = uVar4;
        *(undefined8 *)&pFVar9->ImpactNormal = uVar5;
        uVar4 = puVar10[0xe];
        uVar5 = puVar10[0xf];
        *(undefined8 *)&(pFVar9->ImpactNormal).field_0x8 = uVar8;
        *(undefined8 *)&(pFVar9->ImpactNormal).field_0x10 = uVar3;
        *(undefined8 *)&pFVar9->TraceStart = uVar4;
        *(undefined8 *)&(pFVar9->TraceStart).field_0x8 = uVar5;
        lVar12 = lVar12 + -1;
        pFVar9 = (FHitResult *)&(pFVar9->TraceStart).field_0x10;
        puVar10 = puVar10 + 0x10;
      } while (lVar12 != 0);
      dVar6 = *(double *)&(this->LastHitResult).ImpactPoint.field_0x8;
      (param_2->field0_0x0)._s_0.X = *(double *)&(this->LastHitResult).ImpactPoint;
      (param_2->field0_0x0)._s_0.Y = dVar6;
      (param_2->field0_0x0)._s_0.Z = *(double *)&(this->LastHitResult).ImpactPoint.field_0x10;
    }
  }
  memset(&local_128,0,0x100);
  local_128._4_4_ = 0x3f800000;
  local_84 = 0xffffffff;
  local_70 = 0;
  uStack_68 = 0;
  uStack_58 = 0xffffffff;
  local_60 = 0;
  if (*(void **)&this->WorldRayCast != (void *)0x0) {
    local_res8 = param_4;
    local_238[0] = param_3;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->WorldRayCast);
    plVar1 = *(longlong **)&(this->WorldRayCast).field_0x28;
    pcVar2 = *(code **)&this->WorldRayCast;
    plVar11 = (longlong *)&(this->WorldRayCast).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar11 = plVar1;
    }
    uVar8 = (**(code **)(*plVar11 + 8))();
    cVar7 = (*pcVar2)(uVar8,param_1,&local_128,local_238,&local_res8);
    if ((cVar7 != '\0') && ((bVar14 == false || (fStack_120 < fStack_220)))) {
      bVar14 = true;
      pFVar9 = &this->LastHitResult;
      puVar10 = &local_128;
      do {
        uVar8 = *puVar10;
        uVar3 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        pFVar9->FaceIndex = (int)uVar8;
        pFVar9->Time = (float)(int)((ulonglong)uVar8 >> 0x20);
        pFVar9->Distance = (float)(int)uVar3;
        pFVar9->_padding_ = (int)((ulonglong)uVar3 >> 0x20);
        uVar8 = puVar10[4];
        uVar3 = puVar10[5];
        *(undefined8 *)&pFVar9->Location = uVar4;
        *(undefined8 *)&(pFVar9->Location).field_0x8 = uVar5;
        uVar4 = puVar10[6];
        uVar5 = puVar10[7];
        *(undefined8 *)&(pFVar9->Location).field_0x10 = uVar8;
        *(undefined8 *)&pFVar9->ImpactPoint = uVar3;
        uVar8 = puVar10[8];
        uVar3 = puVar10[9];
        *(undefined8 *)&(pFVar9->ImpactPoint).field_0x8 = uVar4;
        *(undefined8 *)&(pFVar9->ImpactPoint).field_0x10 = uVar5;
        uVar4 = puVar10[10];
        uVar5 = puVar10[0xb];
        *(undefined8 *)&pFVar9->Normal = uVar8;
        *(undefined8 *)&(pFVar9->Normal).field_0x8 = uVar3;
        uVar8 = puVar10[0xc];
        uVar3 = puVar10[0xd];
        *(undefined8 *)&(pFVar9->Normal).field_0x10 = uVar4;
        *(undefined8 *)&pFVar9->ImpactNormal = uVar5;
        uVar4 = puVar10[0xe];
        uVar5 = puVar10[0xf];
        *(undefined8 *)&(pFVar9->ImpactNormal).field_0x8 = uVar8;
        *(undefined8 *)&(pFVar9->ImpactNormal).field_0x10 = uVar3;
        *(undefined8 *)&pFVar9->TraceStart = uVar4;
        *(undefined8 *)&(pFVar9->TraceStart).field_0x8 = uVar5;
        lVar13 = lVar13 + -1;
        pFVar9 = (FHitResult *)&(pFVar9->TraceStart).field_0x10;
        puVar10 = puVar10 + 0x10;
      } while (lVar13 != 0);
      dVar6 = *(double *)&(this->LastHitResult).ImpactPoint.field_0x8;
      (param_2->field0_0x0)._s_0.X = *(double *)&(this->LastHitResult).ImpactPoint;
      (param_2->field0_0x0)._s_0.Y = dVar6;
      (param_2->field0_0x0)._s_0.Z = *(double *)&(this->LastHitResult).ImpactPoint.field_0x10;
    }
  }
  this->bWaitingOnProjectedResult = bVar14;
  this->bPreviewEndpointsValid = false;
  return bVar14;
}

// InitializeDeformedMeshRayCast @ 14cb1d4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDragAlignmentBase::InitializeDeformedMeshRayCast
          (FDragAlignmentBase *this,
          TFunction<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)>
          *param_1,TTransform<double> *param_2,FGroupTopologyDeformer *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_118 [32];
  code *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  FDragAlignmentBase *local_c8;
  longlong local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (param_3 != (FGroupTopologyDeformer *)0x0) {
    local_f8 = *(code **)&this->MeshRayCastTriangleFilter;
    uVar2 = *(undefined8 *)&(this->MeshRayCastTriangleFilter).field_0x8;
    local_e8 = *(longlong *)&(this->MeshRayCastTriangleFilter).field_0x10;
    uVar1 = *(undefined8 *)&(this->MeshRayCastTriangleFilter).field_0x18;
    local_d8 = *(undefined8 *)&(this->MeshRayCastTriangleFilter).field_0x20;
    uStack_d0 = *(longlong **)&(this->MeshRayCastTriangleFilter).field_0x28;
    uStack_e0._0_4_ = SUB84(param_3->Mesh,0);
    uStack_e0._4_4_ = (undefined4)((ulonglong)param_3->Mesh >> 0x20);
    *(code **)&this->MeshRayCastTriangleFilter =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDragAlignmentBase::InitializeDeformedMeshRayCast'::__l5::<lambda_1>,bool,int>
         ::Call;
    *(undefined8 *)&(this->MeshRayCastTriangleFilter).field_0x8 = uStack_f0;
    *(undefined4 *)&(this->MeshRayCastTriangleFilter).field_0x10 = 0x52911ef8;
    *(undefined4 *)&(this->MeshRayCastTriangleFilter).field_0x14 = 1;
    *(undefined4 *)&(this->MeshRayCastTriangleFilter).field_0x18 = (undefined4)uStack_e0;
    *(undefined4 *)&(this->MeshRayCastTriangleFilter).field_0x1c = uStack_e0._4_4_;
    *(FGroupTopologyDeformer **)&(this->MeshRayCastTriangleFilter).field_0x20 = param_3;
    *(undefined4 *)&(this->MeshRayCastTriangleFilter).field_0x28 = 0;
    *(undefined4 *)&(this->MeshRayCastTriangleFilter).field_0x2c = 0;
    uStack_e0 = uVar1;
    uStack_f0 = uVar2;
    if (local_f8 != (code *)0x0) {
      plVar8 = &local_e8;
      if (uStack_d0 != (longlong *)0x0) {
        plVar8 = uStack_d0;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  local_b8 = *(longlong *)param_1;
  local_90 = (longlong *)0x0;
  local_c8 = this;
  if (local_b8 != 0) {
    puVar6 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_a8);
  }
  local_88 = (param_2->Rotation).XY.m128d_f64[0];
  dStack_80 = (param_2->Rotation).XY.m128d_f64[1];
  local_78 = (param_2->Rotation).ZW.m128d_f64[0];
  dStack_70 = (param_2->Rotation).ZW.m128d_f64[1];
  local_68 = (param_2->Translation).XY.m128d_f64[0];
  dStack_60 = (param_2->Translation).XY.m128d_f64[1];
  local_58 = (param_2->Translation).ZW.m128d_f64[0];
  dStack_50 = (param_2->Translation).ZW.m128d_f64[1];
  local_48 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_40 = (param_2->Scale3D).XY.m128d_f64[1];
  local_38 = (param_2->Scale3D).ZW.m128d_f64[0];
  dStack_30 = (param_2->Scale3D).ZW.m128d_f64[1];
  local_f8 = (code *)0x0;
  puVar6 = FMemory::Malloc(0xb0,0x10);
  *puVar6 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FDragAlignmentBase::InitializeDeformedMeshRayCast'::`2'::<lambda_2>,1,1>
             ::_vftable_;
  puVar6[2] = local_c8;
  puVar6[4] = local_b8;
  puVar6[9] = local_90;
  local_90 = (longlong *)0x0;
  puVar6[6] = local_a8;
  puVar6[7] = uStack_a0;
  puVar6[8] = local_98;
  if (puVar6[4] != 0) {
    local_b8 = 0;
  }
  puVar6[10] = local_88;
  puVar6[0xb] = dStack_80;
  puVar6[0xc] = local_78;
  puVar6[0xd] = dStack_70;
  puVar6[0xe] = local_68;
  puVar6[0xf] = dStack_60;
  puVar6[0x10] = local_58;
  puVar6[0x11] = dStack_50;
  puVar6[0x12] = local_48;
  puVar6[0x13] = dStack_40;
  puVar6[0x14] = local_38;
  puVar6[0x15] = dStack_30;
  lVar3 = *(longlong *)&this->MeshRayCast;
  uVar2 = *(undefined8 *)&(this->MeshRayCast).field_0x8;
  if (puVar6 + 2 != (undefined8 *)0x0) {
    local_f8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FDragAlignmentBase::InitializeDeformedMeshRayCast'::__l2::<lambda_2>,bool,UE::Math::TRay<double>_const_&,FHitResult_&,bool>
               ::Call;
  }
  lVar4 = *(longlong *)&(this->MeshRayCast).field_0x10;
  uVar5 = *(undefined8 *)&(this->MeshRayCast).field_0x18;
  uVar1 = *(undefined8 *)&(this->MeshRayCast).field_0x20;
  plVar8 = *(longlong **)&(this->MeshRayCast).field_0x28;
  *(code **)&this->MeshRayCast = local_f8;
  *(undefined8 *)&(this->MeshRayCast).field_0x8 = uStack_f0;
  uStack_d0._0_4_ = SUB84(puVar6,0);
  uStack_d0._4_4_ = (undefined4)((ulonglong)puVar6 >> 0x20);
  *(undefined4 *)&(this->MeshRayCast).field_0x10 = (undefined4)local_e8;
  *(undefined4 *)&(this->MeshRayCast).field_0x14 = local_e8._4_4_;
  *(undefined4 *)&(this->MeshRayCast).field_0x18 = (undefined4)uStack_e0;
  *(undefined4 *)&(this->MeshRayCast).field_0x1c = uStack_e0._4_4_;
  *(undefined4 *)&(this->MeshRayCast).field_0x20 = (undefined4)local_d8;
  *(undefined4 *)&(this->MeshRayCast).field_0x24 = local_d8._4_4_;
  *(undefined4 *)&(this->MeshRayCast).field_0x28 = (undefined4)uStack_d0;
  *(undefined4 *)&(this->MeshRayCast).field_0x2c = uStack_d0._4_4_;
  local_e8 = lVar4;
  uStack_e0 = uVar5;
  local_d8 = uVar1;
  uStack_d0 = plVar8;
  local_f8 = (code *)lVar3;
  uStack_f0 = uVar2;
  if (lVar3 != 0) {
    plVar7 = &local_e8;
    if (plVar8 != (longlong *)0x0) {
      plVar7 = plVar8;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_b8 != 0) {
    plVar8 = &local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar8 = local_90;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar8 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// OnGizmoTransformChanged @ 14cb27980

void __thiscall
FDragAlignmentBase::OnGizmoTransformChanged(FDragAlignmentBase *this,TTransform<double> *param_1)

{
  double dVar1;
  
  if (this->bWaitingOnProjectedResult != false) {
    dVar1 = (param_1->Translation).XY.m128d_f64[1];
    (this->LastProjectedResult).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
    (this->LastProjectedResult).field0_0x0._s_0.Y = dVar1;
    this->bPreviewEndpointsValid = true;
    this->bWaitingOnProjectedResult = false;
    (this->LastProjectedResult).field0_0x0._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
    return;
  }
  this->bWaitingOnProjectedResult = false;
  return;
}

// RenderInternal @ 14cb314e0

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

void __thiscall
FDragAlignmentBase::RenderInternal(FDragAlignmentBase *this,IToolsContextRenderAPI *param_1)

{
  FVector_NetQuantize *pFVar1;
  bool bVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FColor FVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  double *pdVar12;
  longlong *plVar13;
  TVector<double> *pTVar14;
  float *pfVar15;
  uint uVar16;
  ulonglong uVar17;
  float *pfVar18;
  ulonglong uVar19;
  uint uVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined1 auStackY_3a8 [32];
  FLinearColor_u_0 local_364;
  TVector<double>_u_0 local_350;
  undefined2 local_338;
  TVector<double>_u_0 local_330;
  uint local_318;
  TVector<double>_u_0 local_308;
  TQuaternion<double>_u_0 local_2f0 [2];
  longlong *local_2a8;
  float *local_2a0;
  float *local_298;
  TVector<double> local_290;
  FViewCameraState local_278;
  FToolDataVisualizer local_218;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  pdVar12 = (double *)(**(code **)(this->_padding_ + 0x10))(this,&local_308);
  bVar2 = this->bPreviewEndpointsValid;
  dVar23 = pdVar12[1];
  (this->CachedCameraState).Position.field0_0x0._s_0.X = *pdVar12;
  (this->CachedCameraState).Position.field0_0x0._s_0.Y = dVar23;
  dVar23 = pdVar12[3];
  (this->CachedCameraState).Position.field0_0x0._s_0.Z = pdVar12[2];
  *(double *)&(this->CachedCameraState).field_0x18 = dVar23;
  dVar23 = pdVar12[5];
  (this->CachedCameraState).Orientation.X = pdVar12[4];
  (this->CachedCameraState).Orientation.Y = dVar23;
  dVar23 = pdVar12[7];
  (this->CachedCameraState).Orientation.Z = pdVar12[6];
  (this->CachedCameraState).Orientation.W = dVar23;
  dVar23 = pdVar12[9];
  *(double *)&(this->CachedCameraState).HorizontalFOVDegrees = pdVar12[8];
  *(double *)&(this->CachedCameraState).AspectRatio = dVar23;
  uVar4 = *(undefined4 *)((longlong)pdVar12 + 0x54);
  uVar5 = *(undefined4 *)(pdVar12 + 0xb);
  uVar6 = *(undefined4 *)((longlong)pdVar12 + 0x5c);
  *(undefined4 *)&(this->CachedCameraState).DPIScale = *(undefined4 *)(pdVar12 + 10);
  *(undefined4 *)((longlong)&(this->CachedCameraState).DPIScale + 4) = uVar4;
  *(undefined4 *)&(this->CachedCameraState).field_0x58 = uVar5;
  *(undefined4 *)&(this->CachedCameraState).field_0x5c = uVar6;
  FVar7 = FColor::Orange;
  if (bVar2 != false) {
    local_318 = (uint)FColor::Orange.field0_0x0 >> 8;
    local_338 = FColor::Orange.field0_0x0._2_2_;
    uVar11 = (uint)FColor::Orange.field0_0x0 >> 0x18;
    uVar16 = (uint)FColor::Orange.field0_0x0 >> 8;
    uVar20 = (uint)FColor::Orange.field0_0x0 >> 0x10;
    (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_278);
    plVar13 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
    fVar25 = local_278.HorizontalFOVDegrees * __real_3c360b61;
    local_2a8 = plVar13;
    FToolDataVisualizer::FToolDataVisualizer(&local_218);
    FToolDataVisualizer::BeginFrame(&local_218,param_1,&local_278);
    dVar23 = __real_3ff0000000000000;
    pFVar1 = &(this->LastHitResult).ImpactPoint;
    if ((this->LastHitResult).Item == 1) {
      local_350._s_0.X = (double)*(undefined8 *)&(this->LastHitResult).ImpactNormal;
      local_350._s_0.Y = (double)*(undefined8 *)&(this->LastHitResult).ImpactNormal.field_0x8;
      local_350._s_0.Z = (double)*(undefined8 *)&(this->LastHitResult).ImpactNormal.field_0x10;
      local_308._s_0.X = (double)*(undefined8 *)pFVar1;
      local_308._s_0.Y = (double)*(undefined8 *)&(this->LastHitResult).ImpactPoint.field_0x8;
      local_330._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_330._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_308._s_0.Z = (double)*(undefined8 *)&(this->LastHitResult).ImpactPoint.field_0x10;
      local_330._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      local_2f0[0]._s_0.X = 0.0;
      local_2f0[0]._s_0.W = __real_3ff0000000000000;
      local_2f0[0]._s_0.Y = 0.0;
      local_2f0[0]._s_0.Z = 0.0;
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&local_2f0[0]._s_0,(TVector<double> *)&local_330._s_0,
                 (TVector<double> *)&local_350._s_0);
      dVar22 = ToolSceneQueriesUtil::CalculateDimensionFromVisualAngleD
                         (&local_278,(TVector<double> *)&local_308._s_0,__real_3fe999999999999a);
      local_330._s_0.Z = 0.0;
      local_2a0 = FLinearColor::sRGBToLinearTable + (uVar20 & 0xff);
      fVar24 = (float)dVar22;
      local_364._s_0.R = *local_2a0;
      fVar25 = fVar25 * __real_40800000;
      local_298 = FLinearColor::sRGBToLinearTable + (uVar16 & 0xff);
      local_364._s_0.G = *local_298;
      local_364._s_0.B = FLinearColor::sRGBToLinearTable[(uint)FVar7.field0_0x0 & 0xff];
      dVar3 = (double)fVar24;
      fVar21 = (float)uVar11 * __real_3b808081;
      local_330._8_4_ = SUB84(dVar3,0);
      local_330._s_0.X = dVar3;
      local_330._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_364._s_0.A = fVar21;
      pTVar14 = UE::Geometry::operator*<double>
                          (&local_290,(TQuaternion<double> *)&local_2f0[0]._s_0,
                           (TVector<double> *)&local_330._s_0);
      uVar10 = local_308._s_0.Z;
      uVar9 = local_308._s_0.Y;
      uVar8 = local_308._s_0.X;
      local_350._s_0.X = local_308._s_0.X + (pTVar14->field0_0x0)._s_0.X;
      local_350._s_0.Y = local_308._s_0.Y + (pTVar14->field0_0x0)._s_0.Y;
      local_350._s_0.Z = local_308._s_0.Z + (pTVar14->field0_0x0)._s_0.Z;
      dVar22 = (double)(float)((uint)fVar24 ^ __xmm_80000000800000008000000080000000);
      local_330._s_0.Z = 0.0;
      local_330._8_4_ = SUB84(dVar22,0);
      local_330._s_0.X = dVar22;
      local_330._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      pTVar14 = UE::Geometry::operator*<double>
                          (&local_290,(TQuaternion<double> *)&local_2f0[0]._s_0,
                           (TVector<double> *)&local_330._s_0);
      local_330._s_0.X = (double)uVar8 + (pTVar14->field0_0x0)._s_0.X;
      local_330._s_0.Y = (double)uVar9 + (pTVar14->field0_0x0)._s_0.Y;
      local_330._s_0.Z = (double)uVar10 + (pTVar14->field0_0x0)._s_0.Z;
      FToolDataVisualizer::DrawLine<UE::Math::TVector<double>_>
                (&local_218,(TVector<double> *)&local_330._s_0,(TVector<double> *)&local_350._s_0,
                 (FLinearColor *)&local_364._s_0,fVar25,false);
      uVar17 = (ulonglong)(byte)local_338;
      uVar19 = (ulonglong)(byte)local_318;
      local_364._s_0.R = FLinearColor::sRGBToLinearTable[uVar17];
      local_364._s_0.G = FLinearColor::sRGBToLinearTable[uVar19];
      local_364._s_0.B = FLinearColor::sRGBToLinearTable[(uint)FVar7.field0_0x0 & 0xff];
      local_350._s_0.Z = 0.0;
      local_364._s_0.A = fVar21;
      local_350._s_0.X = dVar3;
      local_350._s_0.Y = dVar22;
      pTVar14 = UE::Geometry::operator*<double>
                          (&local_290,(TQuaternion<double> *)&local_2f0[0]._s_0,
                           (TVector<double> *)&local_350._s_0);
      uVar10 = local_308._s_0.Z;
      uVar9 = local_308._s_0.Y;
      uVar8 = local_308._s_0.X;
      local_330._s_0.X = local_308._s_0.X + (pTVar14->field0_0x0)._s_0.X;
      local_330._s_0.Y = local_308._s_0.Y + (pTVar14->field0_0x0)._s_0.Y;
      local_350._s_0.Z = 0.0;
      local_330._s_0.Z = local_308._s_0.Z + (pTVar14->field0_0x0)._s_0.Z;
      local_350._s_0.X = dVar22;
      local_350._s_0.Y = dVar3;
      pTVar14 = UE::Geometry::operator*<double>
                          (&local_290,(TQuaternion<double> *)&local_2f0[0]._s_0,
                           (TVector<double> *)&local_350._s_0);
      local_350._s_0.X = (double)uVar8 + (pTVar14->field0_0x0)._s_0.X;
      local_350._s_0.Y = (double)uVar9 + (pTVar14->field0_0x0)._s_0.Y;
      local_350._s_0.Z = (double)uVar10 + (pTVar14->field0_0x0)._s_0.Z;
      FToolDataVisualizer::DrawLine<UE::Math::TVector<double>_>
                (&local_218,(TVector<double> *)&local_350._s_0,(TVector<double> *)&local_330._s_0,
                 (FLinearColor *)&local_364._s_0,fVar25,false);
      local_364._s_0.R = FLinearColor::sRGBToLinearTable[uVar17];
      local_364._s_0.G = FLinearColor::sRGBToLinearTable[uVar19];
      local_364._s_0.B = FLinearColor::sRGBToLinearTable[(uint)FVar7.field0_0x0 & 0xff];
      local_350._s_0.X =
           ((double)local_2f0[0]._16_8_ + (double)local_2f0[0]._16_8_) * (double)local_2f0[0]._0_8_
           + ((double)local_2f0[0]._8_8_ + (double)local_2f0[0]._8_8_) * (double)local_2f0[0]._24_8_
      ;
      local_350._s_0.Y =
           ((double)local_2f0[0]._16_8_ + (double)local_2f0[0]._16_8_) * (double)local_2f0[0]._8_8_
           - ((double)local_2f0[0]._0_8_ + (double)local_2f0[0]._0_8_) * (double)local_2f0[0]._24_8_
      ;
      local_330._s_0.Z = local_308._s_0.Z;
      local_330._s_0.Y = local_308._s_0.Y;
      local_330._s_0.X = local_308._s_0.X;
      local_350._s_0.Z =
           dVar23 - (((double)local_2f0[0]._8_8_ + (double)local_2f0[0]._8_8_) *
                     (double)local_2f0[0]._8_8_ +
                    ((double)local_2f0[0]._0_8_ + (double)local_2f0[0]._0_8_) *
                    (double)local_2f0[0]._0_8_);
      local_364._s_0.A = fVar21;
      (**(code **)(local_218._padding_ + 0x20))(&local_218,&local_330,&local_350,fVar24 + fVar24);
      pfVar15 = local_2a0;
      pfVar18 = local_298;
      plVar13 = local_2a8;
    }
    else {
      pfVar15 = FLinearColor::sRGBToLinearTable + (uVar20 & 0xff);
      local_364._s_0.R = *pfVar15;
      pfVar18 = FLinearColor::sRGBToLinearTable + (uVar16 & 0xff);
      local_364._s_0.G = *pfVar18;
      local_364._s_0.B = FLinearColor::sRGBToLinearTable[(uint)FVar7.field0_0x0 & 0xff];
      fVar21 = (float)uVar11 * __real_3b808081;
      local_364._s_0.A = fVar21;
      (**(code **)(*plVar13 + 0x40))(plVar13,pFVar1,&local_364,fVar25 * __real_41200000);
    }
    local_350._s_0.X = (double)*(undefined8 *)pFVar1;
    local_350._s_0.Y = (double)*(undefined8 *)&(this->LastHitResult).ImpactPoint.field_0x8;
    local_350._s_0.Z = (double)*(undefined8 *)&(this->LastHitResult).ImpactPoint.field_0x10;
    dVar23 = ToolSceneQueriesUtil::CalculateNormalizedViewVisualAngleD
                       (&local_278,(TVector<double> *)&local_350._s_0,&this->LastProjectedResult);
    if (__real_3fe0000000000000 < dVar23) {
      local_364._s_0.R = *pfVar15;
      local_364._s_0.G = *pfVar18;
      local_350._s_0.Z = (this->LastProjectedResult).field0_0x0._s_0.Z;
      local_364._s_0.B = FLinearColor::sRGBToLinearTable[(uint)FVar7.field0_0x0 & 0xff];
      local_350._s_0.X = (this->LastProjectedResult).field0_0x0._s_0.X;
      local_350._s_0.Y = (this->LastProjectedResult).field0_0x0._s_0.Y;
      local_364._s_0.A = fVar21;
      (**(code **)(*plVar13 + 0x30))(plVar13,pFVar1,&local_350,&local_364);
    }
    FToolDataVisualizer::EndFrame(&local_218);
    FToolDataVisualizer::~FToolDataVisualizer(&local_218);
  }
  return;
}

// SetupInternal @ 14cb3ba20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FDragAlignmentBase::SetupInternal(FDragAlignmentBase *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = *(longlong *)&this->WorldRayCast;
  uVar2 = *(undefined8 *)&(this->WorldRayCast).field_0x8;
  local_38 = *(longlong *)&(this->WorldRayCast).field_0x10;
  uStack_30 = *(undefined8 *)&(this->WorldRayCast).field_0x18;
  uVar1 = *(undefined8 *)&(this->WorldRayCast).field_0x20;
  plStack_20 = *(longlong **)&(this->WorldRayCast).field_0x28;
  *(code **)&this->WorldRayCast =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FDragAlignmentBase::SetupInternal'::__l2::<lambda_1>,bool,UE::Math::TRay<double>_const_&,FHitResult_&,TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>_const_*,TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>_const_*>
       ::Call;
  *(undefined8 *)&(this->WorldRayCast).field_0x8 = uStack_40;
  *(undefined4 *)&(this->WorldRayCast).field_0x10 = 0x52911f58;
  *(undefined4 *)&(this->WorldRayCast).field_0x14 = 1;
  *(FDragAlignmentBase **)&(this->WorldRayCast).field_0x18 = this;
  *(undefined4 *)&(this->WorldRayCast).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->WorldRayCast).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->WorldRayCast).field_0x28 = 0;
  *(undefined4 *)&(this->WorldRayCast).field_0x2c = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// operator() @ 150576770

bool __thiscall `FDragAlignmentBase::AddToGizmo'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6124850043879948262>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6124850043879948262>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

