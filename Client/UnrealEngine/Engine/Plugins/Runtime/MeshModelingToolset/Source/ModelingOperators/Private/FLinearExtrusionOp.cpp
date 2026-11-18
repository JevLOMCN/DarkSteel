// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 3

// operator() @ 14c957a00

TVector<double> * __thiscall
`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l2::<lambda_3>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,int param_3)

{
  TFrame3<double> *this_00;
  double dVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  TVector<double> *pTVar6;
  uint uVar7;
  uint uVar9;
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88 [4];
  
  lVar2 = *(longlong *)this;
  local_a0._s_0.X = (param_1->field0_0x0)._s_0.X - *(double *)(lVar2 + 0xa8);
  local_a0._s_0.Y = (param_1->field0_0x0)._s_0.Y - *(double *)(lVar2 + 0xb0);
  local_a0._s_0.Z = (param_1->field0_0x0)._s_0.Z - *(double *)(lVar2 + 0xb8);
  UE::Geometry::TQuaternion<double>::InverseMultiply
            ((TQuaternion<double> *)(lVar2 + 0xc0),(TVector<double> *)&local_b8,
             (TVector<double> *)&local_a0._s_0);
  if (*(int *)(lVar2 + 0x130) == 1) {
    local_a8 = 0.0;
  }
  this_00 = (TFrame3<double> *)(lVar2 + 0xe0);
  local_a8 = (double)local_a8 * *(double *)(lVar2 + 0x128);
  dStack_b0 = dStack_b0 * *(double *)(lVar2 + 0x120);
  local_b8 = local_b8 * *(double *)(lVar2 + 0x118);
  pTVar6 = UE::Geometry::operator*<double>
                     ((TVector<double> *)&local_a0._s_0,(TQuaternion<double> *)(lVar2 + 0xf8),
                      (TVector<double> *)&local_b8);
  dVar12 = (this_00->Origin).field0_0x0._s_0.X;
  dVar11 = (pTVar6->field0_0x0)._s_0.Y;
  dVar13 = *(double *)(lVar2 + 0xe8);
  dVar1 = (pTVar6->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (pTVar6->field0_0x0)._s_0.Z + *(double *)(lVar2 + 0xf0);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11 + dVar13;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar12 + dVar1;
  if (*(int *)(lVar2 + 0x130) == 2) {
    dVar11 = (this_00->Origin).field0_0x0._s_0.X - *(double *)(lVar2 + 0xa8);
    dVar12 = *(double *)(lVar2 + 0xe8) - *(double *)(lVar2 + 0xb0);
    dVar13 = *(double *)(lVar2 + 0xf0) - *(double *)(lVar2 + 0xb8);
    auVar8._0_8_ = dVar11 * dVar11;
    auVar8._8_8_ = 0;
    auVar10._0_8_ = dVar12 * dVar12 + auVar8._0_8_ + dVar13 * dVar13;
    auVar10._8_8_ = 0;
    auVar8 = sqrtpd(auVar8,auVar10);
    if (auVar8._0_8_ <= 0.0) {
      uVar15 = 0;
      uVar16 = 0;
      dVar12 = 0.0;
      local_a8 = 0.0;
      dVar11 = 0.0;
    }
    else {
      dVar1 = __real_3ff0000000000000 / auVar8._0_8_;
      dVar11 = dVar1 * dVar11;
      dVar12 = dVar1 * dVar12;
      local_a8 = dVar1 * dVar13;
      uVar15 = SUB84(dVar12,0);
      uVar16 = (undefined4)((ulonglong)dVar12 >> 0x20);
    }
    uVar3 = (ulonglong)local_a8 >> 0x20;
    uVar14 = (uint)local_a8;
    unique0x10000177 = uVar15;
    local_b8 = dVar11;
    unique0x1000017b = uVar16;
    bVar4 = UE::Geometry::TFrame3<double>::RayPlaneIntersection
                      (this_00,param_1,(TVector<double> *)&local_b8,2,__return_storage_ptr__);
    if (!bVar4) {
      uVar7 = (uint)__xmm_80000000000000008000000000000000;
      uVar9 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_a0._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar9,SUB84(dVar11,0) ^ uVar7);
      local_a0._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar9,SUB84(dVar12,0) ^ uVar7);
      local_a0._s_0.Z = (double)CONCAT44((uint)uVar3 ^ uVar9,uVar14 ^ uVar7);
      bVar4 = UE::Geometry::TFrame3<double>::RayPlaneIntersection
                        ((TFrame3<double> *)(*(longlong *)this + 0xe0),param_1,
                         (TVector<double> *)&local_a0._s_0,2,__return_storage_ptr__);
      if (!bVar4) {
        dVar12 = (param_1->field0_0x0)._s_0.Y;
        (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar12;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      }
    }
    local_a0._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_a0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_a0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    local_88[0]._s_0.Z = local_a8;
    local_88[0]._8_4_ = uVar15;
    local_88[0]._0_8_ = dVar11;
    local_88[0]._12_4_ = uVar16;
    UE::Math::TVector<double>::Normalize
              ((TVector<double> *)&local_88[0]._s_0,__real_3e45798ee0000000);
    dVar12 = ((__return_storage_ptr__->field0_0x0)._s_0.Y - local_a0._s_0.Y) *
             (double)local_88[0]._8_8_ +
             ((__return_storage_ptr__->field0_0x0)._s_0.X - local_a0._s_0.X) *
             (double)local_88[0]._0_8_ +
             ((__return_storage_ptr__->field0_0x0)._s_0.Z - local_a0._s_0.Z) *
             (double)local_88[0]._16_8_;
    if (*(double *)(*(longlong *)this + 0x138) <
        (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      if (dVar12 <= 0.0) {
        iVar5 = (0.0 <= dVar12) - 1;
      }
      else {
        iVar5 = 1;
      }
      dVar12 = (double)iVar5 * *(double *)(*(longlong *)this + 0x138);
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           dVar12 * (double)local_88[0]._0_8_ + local_a0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y =
           dVar12 * (double)local_88[0]._8_8_ + local_a0._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           dVar12 * (double)local_88[0]._16_8_ + local_a0._s_0.Z;
    }
  }
  return __return_storage_ptr__;
}

// CalculateResult @ 14c966780

void __thiscall
UE::Geometry::FLinearExtrusionOp::CalculateResult(FLinearExtrusionOp *this,FProgressCancel *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearExtrusionOp *local_res8;
  code *local_18;
  FLinearExtrusionOp **local_10;
  
  if ((this->OriginalMeshShared).Object ==
      (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10 = &local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FLinearExtrusionOp::CalculateResult'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_res8 = this;
  bVar2 = TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>::AccessSharedObject
                    ((this->OriginalMeshShared).Object,
                     (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
  if (bVar2) {
    (**(code **)(this->_padding_ + 0x20))(this,this->_padding_,param_1);
  }
  return;
}

// CalculateResultInPlace @ 14c971c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace
          (FLinearExtrusionOp *this,FDynamicMesh3 *param_1,FProgressCancel *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  code *pcVar6;
  FScriptContainerElement *_Src;
  undefined ***pppuVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined ***pppuVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStackY_1c8 [32];
  undefined **local_178 [4];
  undefined **local_158 [2];
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  code *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  FLinearExtrusionOp *pFStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  EVertexExtrusionVectorType local_100;
  code *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  FLinearExtrusionOp *pFStack_e0;
  FDynamicMesh3 *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  bool local_c4;
  bool local_c3;
  int local_b8;
  bool local_b4;
  bool local_b3;
  bool local_b2;
  bool local_b1;
  double local_b0;
  int local_a8;
  ForAnyElementType local_a0;
  int local_98;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (param_2 != (FProgressCancel *)0x0) {
    if (param_2->WasCancelled != false) {
      return false;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_2->CancelF);
    pcVar6 = *(code **)&param_2->CancelF;
    plVar12 = *(longlong **)&(param_2->CancelF).field_0x28;
    plVar11 = (longlong *)&(param_2->CancelF).field_0x10;
    if (plVar12 != (longlong *)0x0) {
      plVar11 = plVar12;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    bVar8 = (bool)(*pcVar6)(uVar9);
    param_2->WasCancelled = bVar8;
    if (bVar8 != false) {
      return false;
    }
  }
  FOffsetMeshRegion::FOffsetMeshRegion((FOffsetMeshRegion *)local_158,param_1);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)&local_148 != &this->TriangleSelection) {
    iVar5 = (this->TriangleSelection).ArrayNum;
    _Src = (this->TriangleSelection).AllocatorInstance.Data;
    local_140 = iVar5;
    if ((iVar5 == 0) && (local_13c == 0)) {
      local_13c = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar5,local_13c,&local_148,iVar5,&local_13c);
      if (iVar5 != 0) {
        memcpy(local_148.Data,_Src,(longlong)iVar5 << 2);
      }
    }
  }
  pcVar6 = local_f8;
  local_178[2]._0_4_ = local_d8._0_4_;
  local_178[2]._4_4_ = local_d8._4_4_;
  pppuVar7 = (undefined ***)CONCAT44(uStack_cc,uStack_d0);
  local_b8 = this->NumSubdivisions;
  if (this->bInferGroupsFromNeighbours == false) {
    local_178[0] = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::`10'::<lambda_2>,0,0>
                    ::_vftable_;
    local_f8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l10::<lambda_2>,bool,int,int>
               ::Call;
  }
  else {
    local_178[0] = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::`8'::<lambda_1>,0,0>
                    ::_vftable_;
    local_f8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l8::<lambda_1>,bool,int,int>
               ::Call;
  }
  local_d8 = param_1;
  uStack_d0 = 0;
  uStack_cc = 0;
  local_e8._0_4_ = local_178[0]._0_4_;
  local_e8._4_4_ = local_178[0]._4_4_;
  pFStack_e0 = this;
  if (pcVar6 != (code *)0x0) {
    pppuVar10 = local_178;
    if (pppuVar7 != (undefined ***)0x0) {
      pppuVar10 = pppuVar7;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  pcVar6 = local_138;
  local_b4 = this->bRemapExtrudeGroups == false;
  pppuVar7 = (undefined ***)CONCAT44(uStack_10c,uStack_110);
  local_b3 = this->bNewGroupPerSubdivision;
  local_b2 = this->bUVIslandPerGroup;
  local_a8 = this->SetMaterialID;
  local_b1 = this->bInferMaterialID;
  local_b0 = this->CreaseAngleThresholdDeg;
  local_138 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l2::<lambda_3>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
              ::Call;
  uStack_130 = uStack_f0;
  local_100 = Zero;
  local_118 = local_178[2]._0_4_;
  uStack_114 = local_178[2]._4_4_;
  uStack_110 = 0;
  uStack_10c = 0;
  local_c8 = (float)this->UVScaleFactor;
  local_128 = 0x528d8668;
  uStack_124 = 1;
  pFStack_120 = this;
  if (pcVar6 != (code *)0x0) {
    pppuVar10 = local_178;
    if (pppuVar7 != (undefined ***)0x0) {
      pppuVar10 = pppuVar7;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  dVar1 = (this->StartFrame).Rotation.field0_0x0._s_0.X;
  dVar2 = (this->StartFrame).Rotation.field0_0x0._s_0.Y;
  dVar3 = (this->StartFrame).Rotation.field0_0x0._s_0.Z;
  dVar4 = (this->StartFrame).Rotation.field0_0x0._s_0.W;
  dVar3 = dVar3 + dVar3;
  local_c4 = this->bShellsToSolids;
  local_c3 = 0.0 < (dVar3 * dVar2 - dVar4 * (dVar1 + dVar1)) *
                   ((this->ToFrame).Origin.field0_0x0._s_0.Y -
                   (this->StartFrame).Origin.field0_0x0._s_0.Y) +
                   (dVar4 * (dVar2 + dVar2) + dVar3 * dVar1) *
                   ((this->ToFrame).Origin.field0_0x0._s_0.X -
                   (this->StartFrame).Origin.field0_0x0._s_0.X) +
                   (__real_3ff0000000000000 - ((dVar2 + dVar2) * dVar2 + (dVar1 + dVar1) * dVar1)) *
                   ((this->ToFrame).Origin.field0_0x0._s_0.Z -
                   (this->StartFrame).Origin.field0_0x0._s_0.Z);
  FOffsetMeshRegion::Apply((FOffsetMeshRegion *)local_158);
  if (param_2 == (FProgressCancel *)0x0) {
LAB_14c971fd6:
    if (this->bRecomputeNormals != false) {
      FMeshNormals::RecomputeOverlayTriNormals(param_1,&local_90,true,true);
    }
    bVar8 = true;
  }
  else {
    if (param_2->WasCancelled == false) {
      Core::Private::Function::CheckCallable(*(void **)&param_2->CancelF);
      pcVar6 = *(code **)&param_2->CancelF;
      plVar12 = *(longlong **)&(param_2->CancelF).field_0x28;
      plVar11 = (longlong *)&(param_2->CancelF).field_0x10;
      if (plVar12 != (longlong *)0x0) {
        plVar11 = plVar12;
      }
      uVar9 = (**(code **)(*plVar11 + 8))();
      bVar8 = (bool)(*pcVar6)(uVar9);
      param_2->WasCancelled = bVar8;
      if (bVar8 == false) goto LAB_14c971fd6;
    }
    bVar8 = false;
  }
  local_158[0] = &___7FOffsetMeshRegion_Geometry_UE__6B_;
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FOffsetMeshRegion::FOffsetInfo,int>
            ((FOffsetInfo *)local_a0.Data,local_98);
  if ((FOffsetInfo *)local_a0.Data != (FOffsetInfo *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  if (local_f8 != (code *)0x0) {
    plVar12 = &local_e8;
    if ((longlong *)CONCAT44(uStack_cc,uStack_d0) != (longlong *)0x0) {
      plVar12 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_138 != (code *)0x0) {
    plVar12 = (longlong *)&local_128;
    if ((longlong *)CONCAT44(uStack_10c,uStack_110) != (longlong *)0x0) {
      plVar12 = (longlong *)CONCAT44(uStack_10c,uStack_110);
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  return bVar8;
}

