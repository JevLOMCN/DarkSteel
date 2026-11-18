// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 10

// operator() @ 14c7bc180

TVector<double> * __thiscall
`UE::Geometry::FMeshConvexHull::Compute_VertexSubset'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  ulonglong uVar10;
  
  plVar3 = *(longlong **)this;
  lVar4 = *plVar3;
  uVar8 = 0;
  if (param_1 < (int)plVar3[2]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar5)();
      return pTVar9;
    }
  }
  uVar8 = *(uint *)(plVar3[1] + (longlong)param_1 * 4);
  uVar10 = (ulonglong)(uVar8 & 0x1ff);
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
  pdVar1 = (double *)(lVar4 + uVar10 * 0x18);
  dVar6 = pdVar1[1];
  dVar2 = *(double *)(lVar4 + 0x10 + uVar10 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// operator() @ 14c7c4320

TVector<double> * __thiscall
`UE::Geometry::FMeshConvexHull::Compute_Helper'::__l20::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  
  plVar3 = *(longlong **)this;
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar5)();
      return pTVar9;
    }
  }
  lVar4 = *plVar3;
  pdVar1 = (double *)(lVar4 + (longlong)param_1 * 0x18);
  dVar6 = pdVar1[1];
  dVar2 = *(double *)(lVar4 + 0x10 + (longlong)param_1 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// operator() @ 14c7d0130

void __thiscall
`UE::Geometry::FMeshConvexHull::Compute_Helper'::__l2::<lambda_3>::operator()
          (void *this,FIndex3i *param_1)

{
  TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar1;
  longlong lVar2;
  int *piVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  int local_res8 [4];
  uint local_res18 [2];
  uint local_res20 [2];
  TPairInitializer<int_const_&,int_const_&> local_88;
  int *local_78;
  double local_70;
  double dStack_68;
  double local_60;
  TVector<double>_u_0 local_58;
  undefined8 local_40;
  float local_38;
  undefined8 local_34;
  float local_2c;
  TVector2<float>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  
  pTVar1 = *(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)this;
  local_res20[0] = (param_1->field0_0x0)._s_0.A;
  if (*(int *)&(pTVar1->Pairs).Elements.field_0x8 != *(int *)&(pTVar1->Pairs).Elements.field_0x34) {
    FVar4 = (pTVar1->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(pTVar1->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar4 +
                    (ulonglong)((pTVar1->Pairs).HashSize - 1U & local_res20[0]) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(pTVar1->Pairs).Elements;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x10) == local_res20[0]) {
          if (iVar5 != -1) {
            piVar3 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                     ::FindChecked(pTVar1,local_res20[0]);
            (param_1->field0_0x0)._s_0.A = *piVar3;
            goto LAB_14c7d0235;
          }
          break;
        }
        iVar5 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  local_res18[0] = local_res20[0];
  (*(code *)**(undefined8 **)((longlong)this + 8))
            (&local_70,(*(undefined8 **)((longlong)this + 8))[1],local_res18);
  local_58._s_0.X = local_70;
  local_58._s_0.Y = dStack_68;
  local_38 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_2c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_34 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_58._s_0.Z = local_60;
  local_28 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_20 = 0;
  local_1e = 0;
  local_res8[0] =
       UE::Geometry::FDynamicMesh3::AppendVertex
                 ((FDynamicMesh3 *)(*(longlong *)((longlong)this + 0x10) + 0x28),
                  (FVertexInfo *)&local_58._s_0);
  local_88.Value = (int *)local_res20;
  local_78 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> **)
              this,&local_88,(bool *)&local_88.Value);
  (param_1->field0_0x0)._s_0.A = local_res8[0];
LAB_14c7d0235:
  pTVar1 = *(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)this;
  local_res20[0] = (param_1->field0_0x0)._s_0.B;
  if (*(int *)&(pTVar1->Pairs).Elements.field_0x8 != *(int *)&(pTVar1->Pairs).Elements.field_0x34) {
    FVar4 = (pTVar1->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(pTVar1->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar4 +
                    (ulonglong)((pTVar1->Pairs).HashSize - 1U & local_res20[0]) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(pTVar1->Pairs).Elements;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x10) == local_res20[0]) {
          if (iVar5 != -1) {
            piVar3 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                     ::FindChecked(pTVar1,local_res20[0]);
            (param_1->field0_0x0)._s_0.B = *piVar3;
            goto LAB_14c7d0326;
          }
          break;
        }
        iVar5 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  local_res18[0] = local_res20[0];
  (*(code *)**(undefined8 **)((longlong)this + 8))
            (&local_70,(*(undefined8 **)((longlong)this + 8))[1],local_res18);
  local_58._s_0.X = local_70;
  local_58._s_0.Y = dStack_68;
  local_38 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_2c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_34 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_58._s_0.Z = local_60;
  local_28 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_20 = 0;
  local_1e = 0;
  local_res8[0] =
       UE::Geometry::FDynamicMesh3::AppendVertex
                 ((FDynamicMesh3 *)(*(longlong *)((longlong)this + 0x10) + 0x28),
                  (FVertexInfo *)&local_58._s_0);
  local_88.Value = (int *)local_res20;
  local_78 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> **)
              this,&local_88,(bool *)&local_88.Value);
  (param_1->field0_0x0)._s_0.B = local_res8[0];
LAB_14c7d0326:
  pTVar1 = *(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)this;
  local_res20[0] = (param_1->field0_0x0)._s_0.C;
  if (*(int *)&(pTVar1->Pairs).Elements.field_0x8 != *(int *)&(pTVar1->Pairs).Elements.field_0x34) {
    FVar4 = (pTVar1->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(pTVar1->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar4 +
                    (ulonglong)((pTVar1->Pairs).HashSize - 1U & local_res20[0]) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(pTVar1->Pairs).Elements;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x10) == local_res20[0]) {
          if (iVar5 != -1) {
            piVar3 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                     ::FindChecked(pTVar1,local_res20[0]);
            (param_1->field0_0x0)._s_0.C = *piVar3;
            goto LAB_14c7d0416;
          }
          break;
        }
        iVar5 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  local_res18[0] = local_res20[0];
  (*(code *)**(undefined8 **)((longlong)this + 8))
            (&local_70,(*(undefined8 **)((longlong)this + 8))[1],local_res18);
  local_58._s_0.X = local_70;
  local_58._s_0.Y = dStack_68;
  local_38 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_2c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_34 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_58._s_0.Z = local_60;
  local_28 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_20 = 0;
  local_1e = 0;
  local_res8[0] =
       UE::Geometry::FDynamicMesh3::AppendVertex
                 ((FDynamicMesh3 *)(*(longlong *)((longlong)this + 0x10) + 0x28),
                  (FVertexInfo *)&local_58._s_0);
  local_88.Value = (int *)local_res20;
  local_78 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> **)
              this,&local_88,(bool *)&local_88.Value);
  (param_1->field0_0x0)._s_0.C = local_res8[0];
LAB_14c7d0416:
  UE::Geometry::FDynamicMesh3::AppendTriangle
            ((FDynamicMesh3 *)(*(longlong *)((longlong)this + 0x10) + 0x28),param_1,0);
  return;
}

// Compute @ 14c7ea050

bool __thiscall
UE::Geometry::FMeshConvexHull::Compute(FMeshConvexHull *this,FProgressCancel *param_1)

{
  bool bVar1;
  TFunctionRef<bool___cdecl(int)> *pTVar2;
  int iVar3;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *pTVar4;
  FMeshConvexHull *local_res8;
  FMeshConvexHull *local_res18 [2];
  code *local_28;
  FMeshConvexHull **local_20;
  code *local_18;
  FMeshConvexHull **local_10;
  
  iVar3 = (this->VertexSet).ArrayNum;
  if (iVar3 < 1) {
    local_10 = &local_res8;
    pTVar4 = (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_28;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshConvexHull::Compute_FullMesh'::__l2::<lambda_2>,bool,int>
               ::Call;
    local_20 = local_res18;
    local_28 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshConvexHull::Compute_FullMesh'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
               ::Call;
    iVar3 = (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
            (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed;
    pTVar2 = (TFunctionRef<bool___cdecl(int)> *)&local_18;
    local_res8 = this;
  }
  else {
    local_20 = &local_res8;
    pTVar4 = (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_18;
    local_28 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshConvexHull::Compute_VertexSubset'::__l2::<lambda_2>,bool,int>
               ::Call;
    local_10 = local_res18;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshConvexHull::Compute_VertexSubset'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
               ::Call;
    pTVar2 = (TFunctionRef<bool___cdecl(int)> *)&local_28;
  }
  local_res18[0] = this;
  bVar1 = Compute_Helper(this,param_1,iVar3,pTVar4,pTVar2,true);
  if (!bVar1) {
    return false;
  }
  if (this->bPostSimplify != false) {
    bVar1 = SimplifyHull(&this->ConvexHull,this->MaxTargetFaceCount,param_1);
  }
  return bVar1;
}

// Compute_FullMesh @ 14c7f4c90

bool __thiscall
UE::Geometry::FMeshConvexHull::Compute_FullMesh(FMeshConvexHull *this,FProgressCancel *param_1)

{
  bool bVar1;
  FMeshConvexHull *local_res8 [2];
  FMeshConvexHull *local_res18 [2];
  code *local_28;
  FMeshConvexHull **local_20;
  code *local_18;
  FMeshConvexHull **local_10;
  
  local_20 = local_res8;
  local_28 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshConvexHull::Compute_FullMesh'::__l2::<lambda_2>,bool,int>
             ::Call;
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshConvexHull::Compute_FullMesh'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
             ::Call;
  local_res8[0] = this;
  local_res18[0] = this;
  bVar1 = Compute_Helper(this,param_1,
                         (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                         (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed,
                         (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_18,
                         (TFunctionRef<bool___cdecl(int)> *)&local_28,true);
  return bVar1;
}

// Compute_Helper @ 14c7f4d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FMeshConvexHull::Compute_Helper
          (FMeshConvexHull *this,FProgressCancel *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3,
          TFunctionRef<bool___cdecl(int)> *param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  double dVar14;
  char cVar15;
  bool bVar16;
  undefined1 uVar17;
  FDynamicMesh3 *pFVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  double *pdVar22;
  ForAnyElementType FVar23;
  ulonglong uVar24;
  int iVar25;
  double dVar26;
  undefined1 auStackY_698 [32];
  ForAnyElementType local_648;
  int local_640;
  int iStack_63c;
  undefined1 local_638;
  undefined1 local_637 [7];
  int local_630 [2];
  int local_628 [2];
  int local_620 [2];
  int local_618 [2];
  undefined8 local_610;
  undefined4 local_608;
  double local_600;
  double dStack_5f8;
  double local_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double local_5d0;
  double local_5c8;
  double local_5c0;
  FMeshConvexHull *local_5b8;
  ForAnyElementType *local_5b0;
  FProgressCancel *local_5a8;
  FIndex3i_u_0 local_598;
  TFunctionRef<bool___cdecl(int)> local_588;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_578;
  code *local_568;
  undefined1 *local_560;
  code *local_558;
  ForAnyElementType **local_550;
  TFunctionRef<bool___cdecl(int)> local_548;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_538;
  double local_528;
  double local_520;
  double local_518;
  ForAnyElementType *local_510;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *local_508;
  FMeshConvexHull *local_500;
  TConvexHull3<double> local_4f8;
  undefined1 local_448 [16];
  double local_438 [8];
  FDynamicMesh3 local_3f8;
  TExtremePoints3<double> local_1c8;
  ForAnyElementType local_148;
  undefined8 local_140;
  TBitArray<FDefaultBitArrayAllocator> local_138;
  undefined4 local_118;
  undefined4 local_114;
  void *local_108;
  undefined4 local_100;
  ulonglong local_f8;
  
  dVar4 = _UNK_1508ffb58;
  dVar3 = ___xmm_ffefffffffffffffffefffffffffffff;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_698;
  iVar25 = 0;
  local_5b8 = this;
  local_5a8 = param_1;
  if ((param_5) && (0.0 < this->MinDimension)) {
    local_588._0_8_ = *(undefined8 *)param_4;
    local_588._8_8_ = *(undefined8 *)&param_4->field_0x8;
    local_578._0_8_ = *(undefined8 *)param_3;
    local_578._8_8_ = *(undefined8 *)&param_3->field_0x8;
    local_1c8.Dimension = 0;
    local_1c8.Extreme[0] = 0;
    local_1c8.Extreme[1] = 0;
    local_1c8.Extreme[2] = 0;
    local_1c8.Origin.field0_0x0._s_0.Y = 0.0;
    local_1c8.Origin.field0_0x0._s_0.Z = 0.0;
    local_1c8.Basis[0].field0_0x0._s_0.Z = 0.0;
    local_1c8.Basis[1].field0_0x0._s_0.X = 0.0;
    local_1c8.Basis[2].field0_0x0._s_0.X = 0.0;
    local_1c8.Basis[2].field0_0x0._s_0.Y = 0.0;
    local_1c8.Origin.field0_0x0._s_0.X = 0.0;
    local_1c8.Basis[2].field0_0x0._s_0.Z = 0.0;
    local_1c8.Extreme[3] = 0;
    local_1c8.Basis[0].field0_0x0._s_0.X = 0.0;
    local_1c8.Basis[0].field0_0x0._s_0.Y = 0.0;
    local_1c8.Basis[1].field0_0x0._s_0.Y = 0.0;
    local_1c8.Basis[1].field0_0x0._s_0.Z = 0.0;
    TExtremePoints3<double>::Init(&local_1c8,param_2,&local_578,&local_588,__real_3cb0000000000000);
    if (local_1c8.Dimension == 0) {
      local_1c8.Basis[2].field0_0x0._s_0.Z = __real_3ff0000000000000;
      local_1c8.Basis[1].field0_0x0._s_0.Z = _UNK_150689518;
      local_1c8.Basis[1].field0_0x0._s_0.X = 0.0;
      local_1c8.Basis[0].field0_0x0._s_0.Y = _UNK_150689518;
      local_1c8.Basis[2].field0_0x0._s_0.Y = 0.0;
      local_1c8.Basis[2].field0_0x0._s_0.X = 0.0;
      local_1c8.Basis[1].field0_0x0._s_0.Y = ___xmm_00000000000000003ff0000000000000;
      local_1c8.Basis[0].field0_0x0._s_0.Z = 0.0;
      local_1c8.Basis[0].field0_0x0._s_0.X = ___xmm_00000000000000003ff0000000000000;
    }
    else if (local_1c8.Dimension == 1) {
      VectorUtil::MakePerpVectors<double>(local_1c8.Basis,local_1c8.Basis + 1,local_1c8.Basis + 2);
    }
    else if (local_1c8.Dimension == 2) {
      local_1c8.Basis[2].field0_0x0._s_0.X =
           local_1c8.Basis[1].field0_0x0._s_0.Z * local_1c8.Basis[0].field0_0x0._s_0.Y -
           local_1c8.Basis[1].field0_0x0._s_0.Y * local_1c8.Basis[0].field0_0x0._s_0.Z;
      local_1c8.Basis[2].field0_0x0._s_0.Y =
           local_1c8.Basis[1].field0_0x0._s_0.X * local_1c8.Basis[0].field0_0x0._s_0.Z -
           local_1c8.Basis[1].field0_0x0._s_0.Z * local_1c8.Basis[0].field0_0x0._s_0.X;
      local_1c8.Basis[2].field0_0x0._s_0.Z =
           local_1c8.Basis[1].field0_0x0._s_0.Y * local_1c8.Basis[0].field0_0x0._s_0.X -
           local_1c8.Basis[1].field0_0x0._s_0.X * local_1c8.Basis[0].field0_0x0._s_0.Y;
    }
    dVar2 = __real_7fefffffffffffff;
    dVar9 = __real_7fefffffffffffff;
    dVar8 = __real_7fefffffffffffff;
    dVar10 = __real_7fefffffffffffff;
    dVar11 = dVar3;
    iVar19 = iVar25;
    dVar12 = dVar3;
    dVar14 = dVar3;
    if (0 < param_2) {
      do {
        local_630[0] = iVar19;
        cVar15 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_630);
        dVar8 = dVar2;
        if (cVar15 != '\0') {
          local_628[0] = iVar19;
          (**(code **)param_3)(&local_528,*(undefined8 *)&param_3->field_0x8,local_628);
          dVar8 = local_1c8.Basis[0].field0_0x0._s_0.Y * local_520 +
                  local_1c8.Basis[0].field0_0x0._s_0.X * local_528 +
                  local_1c8.Basis[0].field0_0x0._s_0.Z * local_518;
          dVar26 = local_1c8.Basis[1].field0_0x0._s_0.Y * local_520 +
                   local_1c8.Basis[1].field0_0x0._s_0.X * local_528 +
                   local_1c8.Basis[1].field0_0x0._s_0.Z * local_518;
          if (dVar8 <= dVar9) {
            dVar9 = dVar8;
          }
          if (dVar14 <= dVar8) {
            dVar14 = dVar8;
          }
          if (dVar26 <= dVar10) {
            dVar10 = dVar26;
          }
          if (dVar12 <= dVar26) {
            dVar12 = dVar26;
          }
          dVar26 = local_1c8.Basis[2].field0_0x0._s_0.Y * local_520 +
                   local_1c8.Basis[2].field0_0x0._s_0.X * local_528 +
                   local_1c8.Basis[2].field0_0x0._s_0.Z * local_518;
          dVar8 = dVar26;
          if (dVar2 <= dVar26) {
            dVar8 = dVar2;
          }
          if (dVar11 < dVar26) {
            dVar11 = dVar26;
          }
        }
        iVar19 = iVar19 + 1;
        dVar2 = dVar8;
      } while (iVar19 < param_2);
    }
    dVar2 = this->MinDimension;
    local_610 = 0xffffffffffffffff;
    bVar16 = dVar14 - dVar9 < dVar2;
    local_608 = 0xffffffff;
    if (bVar16) {
      local_610 = 0xffffffff00000000;
      local_438[0] = (dVar2 - (dVar14 - dVar9)) * __real_3fe0000000000000;
      local_448._8_4_ = SUB84(local_1c8.Basis[0].field0_0x0._s_0.Y * local_438[0],0);
      local_448._0_8_ = local_1c8.Basis[0].field0_0x0._s_0.X * local_438[0];
      local_448._12_4_ =
           (int)((ulonglong)(local_1c8.Basis[0].field0_0x0._s_0.Y * local_438[0]) >> 0x20);
      local_438[0] = local_1c8.Basis[0].field0_0x0._s_0.Z * local_438[0];
    }
    uVar21 = (ulonglong)bVar16;
    uVar24 = uVar21;
    if (dVar12 - dVar10 < dVar2) {
      *(undefined4 *)((longlong)&local_610 + uVar21 * 4) = 1;
      uVar24 = (ulonglong)(bVar16 + 1);
      dVar2 = (dVar2 - (dVar12 - dVar10)) * __real_3fe0000000000000;
      auVar6._8_4_ = SUB84(local_1c8.Basis[1].field0_0x0._s_0.Y * dVar2,0);
      auVar6._0_8_ = local_1c8.Basis[1].field0_0x0._s_0.X * dVar2;
      auVar6._12_4_ = (int)((ulonglong)(local_1c8.Basis[1].field0_0x0._s_0.Y * dVar2) >> 0x20);
      *(undefined1 (*) [16])(local_448 + uVar21 * 0x18) = auVar6;
      local_438[uVar21 * 3] = local_1c8.Basis[1].field0_0x0._s_0.Z * dVar2;
    }
    dVar2 = this->MinDimension;
    uVar20 = (uint)uVar24;
    if (dVar11 - dVar8 < dVar2) {
      uVar20 = uVar20 + 1;
      *(undefined4 *)((longlong)&local_610 + uVar24 * 4) = 2;
      dVar8 = (dVar2 - (dVar11 - dVar8)) * __real_3fe0000000000000;
      auVar7._8_4_ = SUB84(local_1c8.Basis[2].field0_0x0._s_0.Y * dVar8,0);
      auVar7._0_8_ = local_1c8.Basis[2].field0_0x0._s_0.X * dVar8;
      auVar7._12_4_ = (int)((ulonglong)(local_1c8.Basis[2].field0_0x0._s_0.Y * dVar8) >> 0x20);
      *(undefined1 (*) [16])(local_448 + uVar24 * 0x18) = auVar7;
      local_438[uVar24 * 3] = local_1c8.Basis[2].field0_0x0._s_0.Z * dVar8;
    }
    if (uVar20 != 0) {
      local_648.Data = (FScriptContainerElement *)0x0;
      local_640 = 0;
      iStack_63c = 0;
      uVar13 = param_2 * uVar20 * 2;
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if (0 < (int)uVar13) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar13,&local_648,0,&iStack_63c);
      }
      if (0 < param_2) {
        do {
          local_620[0] = iVar25;
          cVar15 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_620);
          if ((cVar15 != '\0') &&
             (local_618[0] = iVar25,
             (**(code **)param_3)(&local_5d0,*(undefined8 *)&param_3->field_0x8,local_618),
             (ulonglong)uVar20 != 0)) {
            pdVar22 = (double *)(local_448 + 8);
            uVar24 = (ulonglong)uVar20;
            do {
              dVar3 = pdVar22[-1];
              dVar4 = *pdVar22;
              local_600 = local_5d0 + dVar3;
              dVar8 = pdVar22[1];
              dStack_5f8 = local_5c8 + dVar4;
              local_5f0 = local_5c0 + dVar8;
              if (((local_648.Data <= (FScriptContainerElement *)&local_600) &&
                  ((FScriptContainerElement *)&local_600 <
                   local_648.Data + (longlong)iStack_63c * 0x18)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar5 = (code *)swi(3);
                uVar17 = (*pcVar5)();
                return (bool)uVar17;
              }
              if (local_640 == iStack_63c) {
                local_640 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x818,&local_648,&iStack_63c);
              }
              iVar19 = local_640 + 1;
              *(double *)(local_648.Data + (longlong)local_640 * 0x18) = local_600;
              *(double *)(local_648.Data + (longlong)local_640 * 0x18 + 8) = dStack_5f8;
              *(double *)(local_648.Data + (longlong)local_640 * 0x18 + 0x10) = local_5f0;
              local_5e8 = local_5d0 - dVar3;
              dStack_5e0 = local_5c8 - dVar4;
              local_5d8 = local_5c0 - dVar8;
              local_640 = iVar19;
              if (((local_648.Data <= (FScriptContainerElement *)&local_5e8) &&
                  ((FScriptContainerElement *)&local_5e8 <
                   local_648.Data + (longlong)iStack_63c * 0x18)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar5 = (code *)swi(3);
                uVar17 = (*pcVar5)();
                return (bool)uVar17;
              }
              if (local_640 == iStack_63c) {
                local_640 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x818,&local_648,&iStack_63c);
              }
              iVar19 = local_640 + 1;
              pdVar22 = pdVar22 + 3;
              *(double *)(local_648.Data + (longlong)local_640 * 0x18) = local_5e8;
              *(double *)(local_648.Data + (longlong)local_640 * 0x18 + 8) = dStack_5e0;
              *(double *)(local_648.Data + (longlong)local_640 * 0x18 + 0x10) = local_5d8;
              uVar24 = uVar24 - 1;
              local_640 = iVar19;
            } while (uVar24 != 0);
          }
          iVar25 = iVar25 + 1;
          this = local_5b8;
        } while (iVar25 < param_2);
      }
      local_560 = &local_638;
      local_568 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FMeshConvexHull::Compute_Helper'::__l20::<lambda_2>,bool,int>
                  ::Call;
      local_5b0 = &local_648;
      local_550 = &local_5b0;
      local_558 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FMeshConvexHull::Compute_Helper'::__l20::<lambda_1>,UE::Math::TVector<double>,int>
                  ::Call;
      bVar16 = Compute_Helper(this,local_5a8,local_640,
                              (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_558,
                              (TFunctionRef<bool___cdecl(int)> *)&local_568,false);
      if (local_648.Data == (FScriptContainerElement *)0x0) {
        return bVar16;
      }
      FMemory::Free(local_648.Data);
      return bVar16;
    }
  }
  local_548._0_8_ = *(undefined8 *)param_4;
  local_548._8_8_ = *(undefined8 *)&param_4->field_0x8;
  local_538._0_8_ = *(undefined8 *)param_3;
  local_4f8.Line.Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_4f8.Line.Origin.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_538._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_4f8.Line.Origin.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_4f8.SimplificationSettings.DegenerateEdgeTolerance = 0.0;
  local_4f8.bSaveTriangleNeighbors = false;
  local_4f8.SimplificationSettings.MaxHullVertices = -1;
  local_4f8.SimplificationSettings.SkipAtHullDistanceAbsolute = dVar3;
  local_4f8.SimplificationSettings.SkipAtHullDistanceAsFraction = dVar4;
  local_4f8.NumHullPoints = 0;
  local_4f8.Line.Direction.field0_0x0._s_0.X =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  local_4f8.Line.Direction.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  local_4f8.Line.Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  local_4f8.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f8.Hull.ArrayNum = 0;
  local_4f8.Hull.ArrayMax = 0;
  local_4f8.HullNeighbors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f8.HullNeighbors.ArrayNum = 0;
  local_4f8.HullNeighbors.ArrayMax = 0;
  local_4f8.Progress = param_1;
  bVar16 = TConvexHull3<double>::Solve(&local_4f8,param_2,&local_538,&local_548);
  if (bVar16) {
    local_148.Data = (FScriptContainerElement *)0x0;
    local_140 = 0;
    local_138.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_138.NumBits = 0;
    local_138.MaxBits = 0x80;
    local_118 = 0xffffffff;
    local_114 = 0;
    local_108 = (void *)0x0;
    local_100 = 0;
    pFVar18 = FDynamicMesh3::FDynamicMesh3(&local_3f8,None);
    FDynamicMesh3::operator=(&this->ConvexHull,pFVar18);
    FDynamicMesh3::~FDynamicMesh3(&local_3f8);
    iVar25 = local_4f8.Hull.ArrayNum;
    uVar24 = (ulonglong)local_4f8.Hull.ArrayNum;
    local_510 = &local_148;
    pFVar1 = local_4f8.Hull.AllocatorInstance.Data + uVar24 * 0xc;
    FVar23.Data = local_4f8.Hull.AllocatorInstance.Data;
    local_508 = param_3;
    local_500 = this;
    while( true ) {
      if ((int)uVar24 != iVar25) {
        `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_637);
      }
      if (FVar23.Data == pFVar1) break;
      local_598._0_8_ = *(undefined8 *)FVar23.Data;
      local_598._s_0.C = *(undefined4 *)(FVar23.Data + 8);
      Core::Private::Function::
      TFunctionRefCaller<`UE::Geometry::FMeshConvexHull::Compute_Helper'::__l2::<lambda_3>,void,UE::Geometry::FIndex3i>
      ::Call(&local_510,(FIndex3i *)&local_598._s_0);
      uVar24 = local_4f8.Hull._8_8_ & 0xffffffff;
      FVar23.Data = FVar23.Data + 0xc;
    }
    local_100 = 0;
    if (local_108 != (void *)0x0) {
      FMemory::Free(local_108);
    }
    uVar24 = local_140 >> 0x20;
    local_140 = local_140 & 0xffffffff00000000;
    if ((int)uVar24 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_148,0,(int *)((longlong)&local_140 + 4));
    }
    local_118 = 0xffffffff;
    local_114 = 0;
    local_138.NumBits = 0;
    if (0x80 < (uint)local_138.MaxBits) {
      local_138.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_138,0);
    }
    if (local_138.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_138.AllocatorInstance.SecondaryData);
    }
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data);
    }
    if (local_4f8.HullNeighbors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.HullNeighbors.AllocatorInstance.Data);
    }
    if (local_4f8.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.Hull.AllocatorInstance.Data);
    }
    bVar16 = true;
  }
  else {
    if (local_4f8.HullNeighbors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.HullNeighbors.AllocatorInstance.Data);
    }
    if (local_4f8.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.Hull.AllocatorInstance.Data);
    }
    bVar16 = false;
  }
  return bVar16;
}

// Compute_VertexSubset @ 14c7f5800

bool __thiscall
UE::Geometry::FMeshConvexHull::Compute_VertexSubset(FMeshConvexHull *this,FProgressCancel *param_1)

{
  bool bVar1;
  undefined1 local_res8 [16];
  FMeshConvexHull *local_res18 [2];
  code *local_28;
  undefined1 *local_20;
  code *local_18;
  FMeshConvexHull **local_10;
  
  local_20 = local_res8;
  local_28 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshConvexHull::Compute_VertexSubset'::__l2::<lambda_2>,bool,int>
             ::Call;
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshConvexHull::Compute_VertexSubset'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
             ::Call;
  local_res18[0] = this;
  bVar1 = Compute_Helper(this,param_1,(this->VertexSet).ArrayNum,
                         (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_18,
                         (TFunctionRef<bool___cdecl(int)> *)&local_28,true);
  return bVar1;
}

// DebugGetCellIndex @ 14c7ff6c0

FVector3i * __cdecl
UE::Geometry::FMeshConvexHull::DebugGetCellIndex
          (FVector3i *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  FVector3i *pFVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  
  FDynamicMesh3::GetBounds(param_1,(TAxisAlignedBox3<double> *)&local_78._s_0,false);
  local_58 = local_58 + __real_3f1a36e2eb1c432d;
  local_50 = local_50 + __real_3f1a36e2eb1c432d;
  dVar6 = local_78._s_0.Y - __real_3f1a36e2eb1c432d;
  auVar14._0_8_ = local_78._s_0.Z - __real_3f1a36e2eb1c432d;
  local_60 = local_60 + __real_3f1a36e2eb1c432d;
  auVar13._0_8_ = local_78._s_0.X - __real_3f1a36e2eb1c432d;
  dVar12 = 0.0;
  dVar2 = local_58 - dVar6;
  if (local_58 - dVar6 <= 0.0) {
    dVar2 = dVar12;
  }
  dVar5 = local_50 - auVar14._0_8_;
  if (local_50 - auVar14._0_8_ <= 0.0) {
    dVar5 = dVar12;
  }
  dVar15 = local_60 - auVar13._0_8_;
  if (local_60 - auVar13._0_8_ <= 0.0) {
    dVar15 = dVar12;
  }
  if (dVar5 <= dVar2) {
    dVar5 = dVar2;
  }
  if (dVar5 <= dVar15) {
    dVar5 = dVar15;
  }
  dVar5 = dVar5 / (double)param_2;
  if (dVar5 < __real_3e45798ee2308c3a) {
    local_78._s_0.X = auVar13._0_8_;
    local_78._s_0.Y = dVar6;
    local_78._s_0.Z = auVar14._0_8_;
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2954325157570674525>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\GridIndexing3.h"
                       ,0xa3,"CellSize >= TMathUtil<RealType>::ZeroTolerance");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FVector3i *)(*pcVar3)();
      return pFVar9;
    }
  }
  dVar15 = __real_3ff0000000000000 / dVar5;
  lVar11 = *(longlong *)
            ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_3 >> 9) * 8
            );
  pdVar1 = (double *)(lVar11 + (ulonglong)(param_3 & 0x1ff) * 0x18);
  dVar12 = pdVar1[1];
  dVar2 = *(double *)(lVar11 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
  auVar13._0_8_ = (*pdVar1 - auVar13._0_8_) / dVar5;
  lVar10 = (longlong)auVar13._0_8_;
  if ((lVar10 != -0x8000000000000000) && ((double)lVar10 != auVar13._0_8_)) {
    auVar13._8_8_ = auVar13._0_8_;
    uVar8 = movmskpd((int)lVar11,auVar13);
    auVar13._0_8_ = (double)(longlong)(lVar10 - (ulonglong)(uVar8 & 1));
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (int)auVar13._0_8_;
  dVar6 = (dVar12 - dVar6) * dVar15;
  lVar11 = (longlong)dVar6;
  if ((lVar11 != -0x8000000000000000) && ((double)lVar11 != dVar6)) {
    auVar4._8_4_ = SUB84(dVar6,0);
    auVar4._0_8_ = dVar6;
    auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uVar8 = movmskpd((int)auVar13._0_8_,auVar4);
    dVar6 = (double)(longlong)(lVar11 - (ulonglong)(uVar8 & 1));
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (int)dVar6;
  auVar14._0_8_ = (dVar2 - auVar14._0_8_) * dVar15;
  lVar11 = (longlong)auVar14._0_8_;
  if ((lVar11 != -0x8000000000000000) && ((double)lVar11 != auVar14._0_8_)) {
    auVar14._8_8_ = auVar14._0_8_;
    uVar8 = movmskpd((int)dVar6,auVar14);
    auVar14._0_8_ = (double)(longlong)(lVar11 - (ulonglong)(uVar8 & 1));
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (int)auVar14._0_8_;
  return __return_storage_ptr__;
}

// GridSample @ 14c811f80

void __cdecl
UE::Geometry::FMeshConvexHull::GridSample
          (FDynamicMesh3 *param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined7 extraout_var;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ForAnyElementType FVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  double dVar29;
  double dVar30;
  undefined1 local_res20 [8];
  int local_f8;
  int local_f4;
  TArray<int,TSizedDefaultAllocator<32>_> local_f0;
  int local_e0;
  int local_dc;
  int local_d8;
  TVector<double>_u_0 local_d0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_90;
  
  FDynamicMesh3::GetBounds(param_1,(TAxisAlignedBox3<double> *)&local_d0._s_0,false);
  if (local_b8 < local_d0._s_0.X) {
    return;
  }
  if (local_b0 < local_d0._s_0.Y) {
    return;
  }
  if (local_a8 < local_d0._s_0.Z) {
    return;
  }
  local_a8 = local_a8 + __real_3f1a36e2eb1c432d;
  local_b0 = local_b0 + __real_3f1a36e2eb1c432d;
  local_b8 = local_b8 + __real_3f1a36e2eb1c432d;
  dVar13 = local_d0._s_0.Y - __real_3f1a36e2eb1c432d;
  dVar14 = local_d0._s_0.Z - __real_3f1a36e2eb1c432d;
  dVar15 = local_d0._s_0.X - __real_3f1a36e2eb1c432d;
  uVar18 = 0x50a;
  if (param_2 < 0x50a) {
    uVar18 = param_2;
  }
  dVar11 = local_a8 - dVar14;
  uVar19 = 1;
  if (1 < (int)uVar18) {
    uVar19 = uVar18;
  }
  dVar30 = local_b0 - dVar13;
  dVar29 = local_b8 - dVar15;
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  if (dVar30 <= 0.0) {
    dVar30 = 0.0;
  }
  if (dVar29 <= 0.0) {
    dVar29 = 0.0;
  }
  if (dVar11 <= dVar30) {
    dVar11 = dVar30;
  }
  if (dVar11 <= dVar29) {
    dVar11 = dVar29;
  }
  dVar11 = dVar11 / (double)(int)uVar19;
  local_d0._s_0.X = dVar15;
  local_d0._s_0.Y = dVar13;
  local_d0._s_0.Z = dVar14;
  if (dVar11 < __real_3e45798ee2308c3a) {
    bVar17 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2954325157570674525>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\GridIndexing3.h"
                        ,0xa3,"CellSize >= TMathUtil<RealType>::ZeroTolerance");
    uVar19 = (uint)CONCAT71(extraout_var,bVar17);
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar12 = __real_3ff0000000000000;
  dVar30 = __real_3ff0000000000000 / dVar11;
  dVar29 = (local_b8 - dVar15) * dVar30;
  lVar21 = (longlong)dVar29;
  if ((lVar21 != -0x8000000000000000) && ((double)lVar21 != dVar29)) {
    auVar5._8_4_ = SUB84(dVar29,0);
    auVar5._0_8_ = dVar29;
    auVar5._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    uVar18 = movmskpd(uVar19,auVar5);
    uVar19 = uVar18 & 1 ^ 1;
    dVar29 = (double)(longlong)(lVar21 + (ulonglong)uVar19);
  }
  local_f4 = (int)dVar29;
  dVar29 = (local_b0 - dVar13) * dVar30;
  lVar21 = (longlong)dVar29;
  if ((lVar21 != -0x8000000000000000) && ((double)lVar21 != dVar29)) {
    auVar6._8_4_ = SUB84(dVar29,0);
    auVar6._0_8_ = dVar29;
    auVar6._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    uVar18 = movmskpd(uVar19,auVar6);
    uVar19 = uVar18 & 1 ^ 1;
    dVar29 = (double)(longlong)(lVar21 + (ulonglong)uVar19);
  }
  local_dc = (int)dVar29;
  dVar30 = (local_a8 - dVar14) * dVar30;
  lVar21 = (longlong)dVar30;
  if ((lVar21 != -0x8000000000000000) && ((double)lVar21 != dVar30)) {
    auVar9._8_4_ = SUB84(dVar30,0);
    auVar9._0_8_ = dVar30;
    auVar9._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    uVar18 = movmskpd(uVar19,auVar9);
    dVar30 = (double)(longlong)(lVar21 + (ulonglong)(uVar18 & 1 ^ 1));
  }
  local_d8 = (int)dVar30;
  uVar23 = 0;
  local_e0 = -1;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_f0,&local_e0,local_d8 * local_dc * local_f4);
  iVar16 = local_dc;
  uVar18 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((uVar18 != 0) &&
     (pFVar2 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar23 = 1;
    uVar19 = 1;
    if ((int)uVar18 < 2) goto LAB_14c81227a;
    do {
      uVar22 = (ulonglong)((uint)uVar23 & 0x1ff);
      lVar21 = *(longlong *)(pFVar2 + (uVar23 >> 9) * 8);
      if ((*(short *)(lVar21 + uVar22 * 2) != 0) && (*(short *)(lVar21 + uVar22 * 2) != -1)) break;
      uVar19 = (uint)uVar23 + 1;
      uVar23 = (ulonglong)uVar19;
    } while ((int)uVar19 < (int)uVar18);
  }
  uVar19 = (uint)uVar23;
LAB_14c81227a:
  if (uVar19 != uVar18) {
    dVar12 = dVar12 / dVar11;
LAB_14c8122a0:
    do {
      uVar19 = (uint)uVar23;
      uVar23 = *(ulonglong *)((param_1->Vertices).Blocks.AllocatorInstance.Data + (uVar23 >> 9) * 8)
      ;
      local_90 = *(double *)(uVar23 + 0x10 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
      pdVar1 = (double *)(uVar23 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
      dVar11 = (*pdVar1 - dVar15) * dVar12;
      lVar21 = (longlong)dVar11;
      if ((lVar21 != -0x8000000000000000) && ((double)lVar21 != dVar11)) {
        auVar7._8_4_ = SUB84(dVar11,0);
        auVar7._0_8_ = dVar11;
        auVar7._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        uVar20 = movmskpd((int)uVar23,auVar7);
        uVar23 = (ulonglong)(uVar20 & 1);
        dVar11 = (double)(longlong)(lVar21 - uVar23);
      }
      uVar20 = (uint)uVar23;
      iVar28 = (int)dVar11;
      dVar11 = (pdVar1[1] - dVar13) * dVar12;
      lVar21 = (longlong)dVar11;
      if ((lVar21 != -0x8000000000000000) && ((double)lVar21 != dVar11)) {
        auVar10._8_4_ = SUB84(dVar11,0);
        auVar10._0_8_ = dVar11;
        auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        uVar20 = movmskpd(uVar20,auVar10);
        uVar20 = uVar20 & 1;
        dVar11 = (double)(longlong)(lVar21 - (ulonglong)uVar20);
      }
      iVar27 = (int)dVar11;
      dVar11 = (local_90 - dVar14) * dVar12;
      lVar21 = (longlong)dVar11;
      if ((lVar21 != -0x8000000000000000) && ((double)lVar21 != dVar11)) {
        auVar8._8_4_ = SUB84(dVar11,0);
        auVar8._0_8_ = dVar11;
        auVar8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        uVar20 = movmskpd(uVar20,auVar8);
        dVar11 = (double)(longlong)(lVar21 - (ulonglong)(uVar20 & 1));
      }
      iVar25 = (int)dVar11;
      if (((iVar28 < 0) || (local_f4 <= iVar28)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("CellIndex.X >= 0 && CellIndex.X < GridResolution.X",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\MeshConvexHull.cpp"
                              ,0xf0,L""), bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((iVar27 < 0) || (iVar16 <= iVar27)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("CellIndex.Y >= 0 && CellIndex.Y < GridResolution.Y",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\MeshConvexHull.cpp"
                              ,0xf1,L""), bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((iVar25 < 0) || (local_d8 <= iVar25)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("CellIndex.Z >= 0 && CellIndex.Z < GridResolution.Z",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\MeshConvexHull.cpp"
                              ,0xf2,L""), bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar26 = (iVar25 * iVar16 + iVar27) * local_f4 + iVar28;
      uVar20 = 0;
      if ((int)uVar26 < local_f0.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(uint *)(local_f0.AllocatorInstance.Data + (longlong)(int)uVar26 * 4) = uVar19;
      uVar19 = uVar19 + 1;
      uVar23 = (ulonglong)uVar19;
      if ((int)uVar19 < (int)uVar18) {
        do {
          uVar22 = (ulonglong)((uint)uVar23 & 0x1ff);
          lVar21 = *(longlong *)
                    ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (uVar23 >> 9) * 8);
          if ((*(short *)(lVar21 + uVar22 * 2) != 0) && (*(short *)(lVar21 + uVar22 * 2) != -1))
          goto LAB_14c8122a0;
          uVar19 = (uint)uVar23 + 1;
          uVar23 = (ulonglong)uVar19;
        } while ((int)uVar19 < (int)uVar18);
      }
    } while (uVar19 != uVar18);
  }
  iVar16 = local_f0.ArrayNum;
  pFVar2 = local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayNum * 4;
  FVar24.Data = local_f0.AllocatorInstance.Data;
  while( true ) {
    if (local_f0.ArrayNum != iVar16) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar24.Data == pFVar2) break;
    local_f8 = *(int *)FVar24.Data;
    if (-1 < local_f8) {
      pFVar3 = (param_3->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 < pFVar3 + (longlong)param_3->ArrayMax * 4)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar28 = param_3->ArrayNum;
      if (iVar28 == param_3->ArrayMax) {
        iVar28 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar28 + 1;
      *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar28 * 4) = local_f8;
    }
    FVar24.Data = FVar24.Data + 4;
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// SimplifyHull @ 14c831a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Geometry::FMeshConvexHull::SimplifyHull
          (FDynamicMesh3 *param_1,int param_2,FProgressCancel *param_3)

{
  code *pcVar1;
  FDynamicMeshAttributeSet *pFVar2;
  ulonglong uVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStackY_568 [32];
  FMeshConvexHull local_538;
  undefined **local_2d8;
  FDynamicMesh3 *local_2d0;
  FMeshConstraints local_2c8;
  char local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong local_1e8 [3];
  longlong *local_1d0;
  undefined8 local_1c8;
  void *pvStack_1c0;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined1 local_1ae;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  ESimplificationCollapseModes local_198;
  undefined4 local_194;
  EGeometricErrorCriteria local_184;
  double local_180;
  float local_178;
  double local_170;
  undefined8 local_168;
  ulong64 local_160;
  double local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  ForAnyElementType local_140;
  undefined8 local_138;
  TBitArray<FDefaultBitArrayAllocator> local_130;
  undefined8 uStack_110;
  void *local_100;
  undefined4 local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_d0;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  FIndexPriorityQueue local_b8;
  ForAnyElementType local_78;
  undefined8 local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_568;
  if (param_3 != (FProgressCancel *)0x0) {
    if (param_3->WasCancelled != false) {
      return false;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_3->CancelF);
    pcVar1 = *(code **)&param_3->CancelF;
    plVar9 = *(longlong **)&(param_3->CancelF).field_0x28;
    plVar10 = (longlong *)&(param_3->CancelF).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar10 = plVar9;
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    bVar5 = (bool)(*pcVar1)(uVar8);
    param_3->WasCancelled = bVar5;
    if (bVar5 != false) {
      return false;
    }
  }
  if ((param_2 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxTargetFaceCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\MeshConvexHull.cpp"
                         ,0x2d,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  bVar5 = false;
  if (param_2 < (param_1->TriangleRefCounts).UsedCount) {
    local_180 = 0.0;
    local_208 = 0;
    uStack_200 = 0;
    local_1c8 = 0;
    pvStack_1c0 = (void *)0x0;
    local_1a8 = ___xmm_3e45798ee00000000000000000000000;
    uStack_1a0 = _UNK_1528cb7a8;
    local_158 = __real_4070000000000000;
    local_130.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_130.MaxBits = _UNK_150631d94;
    uStack_110 = _UNK_150631d98;
    local_170 = __real_7fefffffffffffff;
    local_210 = '\0';
    local_1f8 = 0;
    local_1d0 = (longlong *)0x0;
    local_1b8 = 0;
    local_1b0 = 0x100;
    local_1ae = 0;
    local_1ac = 0;
    local_2d8 = &___7__TMeshSimplification_V__TVolPresQuadricError_N_Geometry_UE___Geometry_UE__6B_;
    local_198 = MinimalQuadricPositionError;
    local_194._0_1_ = false;
    local_194._1_1_ = true;
    local_194._2_1_ = true;
    local_194._3_1_ = false;
    local_184 = None;
    local_178 = 3.4028235e+38;
    local_168._0_4_ = 0x7fffffff;
    local_168._4_4_ = TriangleCount;
    local_160 = 0;
    local_150.Data = (FScriptContainerElement *)0x0;
    local_148._0_4_ = 0;
    local_148._4_4_ = 0;
    local_140.Data = (FScriptContainerElement *)0x0;
    local_138 = 0;
    local_130.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_100 = (void *)0x0;
    local_f8 = 0;
    local_f0.Data = (FScriptContainerElement *)0x0;
    local_e8._0_4_ = 0;
    local_e8._4_4_ = 0;
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0._0_4_ = 0;
    local_c0._4_4_ = 0;
    local_2d0 = param_1;
    FIndexPriorityQueue::FIndexPriorityQueue(&local_b8);
    pFVar2 = (param_1->AttributeSet).Ptr;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70._0_4_ = 0;
    local_70._4_4_ = 0;
    local_d0 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    if ((pFVar2 != (FDynamicMeshAttributeSet *)0x0) &&
       (local_d0 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0,
       0 < (pFVar2->NormalLayers).Array.ArrayNum)) {
      local_d0 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                  (pFVar2->NormalLayers).Array.AllocatorInstance.Data;
    }
    local_198 = MinimalExistingVertexError;
    TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::SimplifyToTriangleCount
              ((TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *)&local_2d8,
               param_2);
    bVar5 = true;
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    if (local_b8.id_to_index.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.id_to_index.AllocatorInstance.Data);
    }
    TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
    ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_b8.nodes);
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
    }
    local_f8 = 0;
    if (local_100 != (void *)0x0) {
      FMemory::Free(local_100);
    }
    uVar3 = local_138 >> 0x20;
    local_138 = local_138 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,&local_140,0,(int *)((longlong)&local_138 + 4));
    }
    iVar4 = local_130.MaxBits;
    uStack_110 = 0xffffffff;
    local_130._24_8_ = (ulonglong)(uint)local_130.MaxBits << 0x20;
    if (0x80 < (uint)iVar4) {
      local_130.NumBits = 0;
      local_130.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_130,0);
    }
    if (local_130.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_130.AllocatorInstance.SecondaryData);
    }
    if (local_140.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data);
    }
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
    local_2d8 = &___7FMeshRefinerBase_Geometry_UE__6B_;
    if (pvStack_1c0 != (void *)0x0) {
      FMemory::Free(pvStack_1c0);
    }
    if (local_1f8 != 0) {
      plVar9 = local_1e8;
      if (local_1d0 != (longlong *)0x0) {
        plVar9 = local_1d0;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (local_210 != '\0') {
      FMeshConstraints::~FMeshConstraints(&local_2c8);
    }
  }
  if (param_3 == (FProgressCancel *)0x0) {
LAB_14c831e58:
    if (bVar5) {
      local_538.MinDimension = 0.0;
      local_538.VertexSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_538.VertexSet.ArrayNum = 0;
      local_538.VertexSet.ArrayMax = 0;
      local_538.bPostSimplify = false;
      local_538.MaxTargetFaceCount = 0;
      FDynamicMesh3::FDynamicMesh3(&local_538.ConvexHull);
      local_538.Mesh = param_1;
      bVar5 = Compute(&local_538,param_3);
      if (bVar5) {
        FDynamicMesh3::operator=(param_1,&local_538.ConvexHull);
      }
      FDynamicMesh3::~FDynamicMesh3(&local_538.ConvexHull);
      if (local_538.VertexSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_538.VertexSet.AllocatorInstance.Data);
      }
    }
    return true;
  }
  if (param_3->WasCancelled == false) {
    Core::Private::Function::CheckCallable(*(void **)&param_3->CancelF);
    pcVar1 = *(code **)&param_3->CancelF;
    plVar9 = *(longlong **)&(param_3->CancelF).field_0x28;
    plVar10 = (longlong *)&(param_3->CancelF).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar10 = plVar9;
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    bVar7 = (bool)(*pcVar1)(uVar8);
    param_3->WasCancelled = bVar7;
    if (bVar7 == false) goto LAB_14c831e58;
  }
  return false;
}

