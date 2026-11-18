// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 38

// operator() @ 143458a90

void __thiscall
`UE::Geometry::FMeshNormals::ComputeOverlayNormal'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  double *pdVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  bool bVar8;
  TVector<double> *pTVar9;
  int iVar10;
  double local_res8;
  double dStack_80;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TVector<double> local_48;
  TVector<double> local_30;
  
  uVar7 = param_1 * 3;
  iVar10 = **(int **)((longlong)this + 8);
  lVar3 = *(longlong *)(**(longlong **)this + 0x78);
  if (((*(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4
                ) == iVar10) ||
      (*(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
               (ulonglong)(uVar7 + 1 & 0x1ff) * 4) == iVar10)) ||
     (*(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
              (ulonglong)(uVar7 + 2 & 0x1ff) * 4) == iVar10)) {
    UE::Geometry::FDynamicMesh3::GetTriInfo
              (*(FDynamicMesh3 **)((longlong)this + 0x10),param_1,(TVector<double> *)&local_60._s_0,
               &local_res8,&local_48);
    cVar2 = **(char **)((longlong)this + 0x18);
    local_78._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_78._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_78._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    if (**(char **)((longlong)this + 0x20) != '\0') {
      pTVar9 = UE::Geometry::FDynamicMesh3::GetTriInternalAnglesR
                         (*(FDynamicMesh3 **)((longlong)this + 0x10),&local_30,param_1);
      local_78._0_16_ = *(undefined1 (*) [16])&pTVar9->field0_0x0;
      local_78._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
    }
    if (cVar2 != '\0') {
      auVar6._8_4_ = SUB84(local_78._s_0.Y * local_res8,0);
      auVar6._0_8_ = local_78._s_0.X * local_res8;
      auVar6._12_4_ = (int)((ulonglong)(local_78._s_0.Y * local_res8) >> 0x20);
      local_78._0_16_ = auVar6;
      local_78._s_0.Z = local_78._s_0.Z * local_res8;
    }
    lVar3 = *(longlong *)(**(longlong **)this + 0x78);
    iVar10 = **(int **)((longlong)this + 8);
    if (*(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4
                ) == iVar10) {
      iVar10 = 0;
    }
    else if (*(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                     (ulonglong)(uVar7 + 1 & 0x1ff) * 4) == iVar10) {
      iVar10 = 1;
    }
    else if (*(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                     (ulonglong)(uVar7 + 2 & 0x1ff) * 4) == iVar10) {
      iVar10 = 2;
    }
    else {
      iVar10 = -1;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    dVar1 = *(double *)((longlong)&local_78 + (longlong)iVar10 * 8);
    pdVar4 = *(double **)((longlong)this + 0x28);
    *pdVar4 = dVar1 * local_60._s_0.X + *pdVar4;
    pdVar4[1] = dVar1 * local_60._s_0.Y + pdVar4[1];
    pdVar4[2] = dVar1 * local_60._s_0.Z + pdVar4[2];
    **(int **)((longlong)this + 0x30) = **(int **)((longlong)this + 0x30) + 1;
  }
  return;
}

// operator() @ 14345a360

void __thiscall
`UE::Geometry::FMeshNormals::ComputeVertexNormal'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double dVar1;
  longlong lVar2;
  double *pdVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  char cVar6;
  bool bVar7;
  TVector<double> *pTVar8;
  FDynamicMesh3 *this_00;
  int iVar9;
  double local_res8;
  int local_res10 [2];
  double dStack_90;
  TVector<double>_u_0 local_88;
  undefined8 local_70;
  int local_68;
  TVector<double>_u_0 local_60;
  TVector<double> local_48;
  TVector<double> local_30;
  
  local_res10[0] = param_1;
  cVar6 = (*(code *)**(undefined8 **)this)((*(undefined8 **)this)[1],local_res10);
  if (cVar6 != '\0') {
    UE::Geometry::FDynamicMesh3::GetTriInfo
              (*(FDynamicMesh3 **)((longlong)this + 8),param_1,(TVector<double> *)&local_60._s_0,
               &local_res8,&local_48);
    this_00 = *(FDynamicMesh3 **)((longlong)this + 8);
    cVar6 = **(char **)((longlong)this + 0x10);
    local_88._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_88._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_88._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    if (**(char **)((longlong)this + 0x18) != '\0') {
      pTVar8 = UE::Geometry::FDynamicMesh3::GetTriInternalAnglesR(this_00,&local_30,param_1);
      this_00 = *(FDynamicMesh3 **)((longlong)this + 8);
      local_88._0_16_ = *(undefined1 (*) [16])&pTVar8->field0_0x0;
      local_88._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    }
    if (cVar6 != '\0') {
      auVar5._8_4_ = SUB84(local_88._s_0.Y * local_res8,0);
      auVar5._0_8_ = local_88._s_0.X * local_res8;
      auVar5._12_4_ = (int)((ulonglong)(local_88._s_0.Y * local_res8) >> 0x20);
      local_88._0_16_ = auVar5;
      local_88._s_0.Z = local_88._s_0.Z * local_res8;
    }
    lVar2 = *(longlong *)
             ((this_00->Triangles).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8);
    local_70 = *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    local_68 = *(int *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    iVar9 = **(int **)((longlong)this + 0x20);
    if ((int)local_70 == iVar9) {
      iVar9 = 0;
    }
    else if ((int)((ulonglong)local_70 >> 0x20) == iVar9) {
      iVar9 = 1;
    }
    else if (local_68 == iVar9) {
      iVar9 = 2;
    }
    else {
      iVar9 = -1;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    dVar1 = *(double *)((longlong)&local_88 + (longlong)iVar9 * 8);
    pdVar3 = *(double **)((longlong)this + 0x28);
    *pdVar3 = dVar1 * local_60._s_0.X + *pdVar3;
    pdVar3[1] = dVar1 * local_60._s_0.Y + pdVar3[1];
    pdVar3[2] = dVar1 * local_60._s_0.Z + pdVar3[2];
  }
  return;
}

// operator() @ 14345a510

void __thiscall
`UE::Geometry::FMeshNormals::ComputeVertexNormal'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  double *pdVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  TVector<double> *pTVar8;
  FDynamicMesh3 *this_00;
  int iVar9;
  double local_res8;
  double dStack_80;
  TVector<double>_u_0 local_78;
  undefined8 local_60;
  int local_58;
  TVector<double>_u_0 local_50;
  TVector<double> local_38;
  TVector<double> local_20;
  
  UE::Geometry::FDynamicMesh3::GetTriInfo
            (*(FDynamicMesh3 **)this,param_1,(TVector<double> *)&local_50._s_0,&local_res8,&local_38
            );
  this_00 = *(FDynamicMesh3 **)this;
  cVar2 = **(char **)((longlong)this + 8);
  local_78._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_78._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_78._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  if (**(char **)((longlong)this + 0x10) != '\0') {
    pTVar8 = UE::Geometry::FDynamicMesh3::GetTriInternalAnglesR(this_00,&local_20,param_1);
    this_00 = *(FDynamicMesh3 **)this;
    local_78._0_16_ = *(undefined1 (*) [16])&pTVar8->field0_0x0;
    local_78._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
  }
  if (cVar2 != '\0') {
    auVar6._8_4_ = SUB84(local_78._s_0.Y * local_res8,0);
    auVar6._0_8_ = local_78._s_0.X * local_res8;
    auVar6._12_4_ = (int)((ulonglong)(local_78._s_0.Y * local_res8) >> 0x20);
    local_78._0_16_ = auVar6;
    local_78._s_0.Z = local_78._s_0.Z * local_res8;
  }
  lVar3 = *(longlong *)
           ((this_00->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8
           );
  local_60 = *(undefined8 *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_58 = *(int *)(lVar3 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  iVar9 = **(int **)((longlong)this + 0x18);
  if ((int)local_60 == iVar9) {
    iVar9 = 0;
  }
  else if ((int)((ulonglong)local_60 >> 0x20) == iVar9) {
    iVar9 = 1;
  }
  else if (local_58 == iVar9) {
    iVar9 = 2;
  }
  else {
    iVar9 = -1;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar1 = *(double *)((longlong)&local_78 + (longlong)iVar9 * 8);
  pdVar4 = *(double **)((longlong)this + 0x20);
  *pdVar4 = dVar1 * local_50._s_0.X + *pdVar4;
  pdVar4[1] = dVar1 * local_50._s_0.Y + pdVar4[1];
  pdVar4[2] = dVar1 * local_50._s_0.Z + pdVar4[2];
  return;
}

// operator() @ 14345a6b0

void __thiscall
`UE::Geometry::FMeshNormals::Compute_Triangle'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  undefined8 *puVar3;
  FDynamicMesh3 *this_00;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  TVector<double> local_28;
  
  puVar3 = *(undefined8 **)this;
  this_00 = (FDynamicMesh3 *)*puVar3;
  if (((-1 < param_1) &&
      (param_1 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    pTVar12 = UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,&local_28,param_1);
    uVar6 = *(undefined4 *)&pTVar12->field0_0x0;
    uVar7 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 4);
    uVar8 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 8);
    uVar9 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 0xc);
    dVar2 = (pTVar12->field0_0x0)._s_0.Z;
    uVar11 = 0;
    if (param_1 < *(int *)(puVar3 + 2)) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = puVar3[1];
    puVar1 = (undefined4 *)(lVar4 + (longlong)param_1 * 0x18);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    *(double *)(lVar4 + 0x10 + (longlong)param_1 * 0x18) = dVar2;
  }
  return;
}

// operator() @ 14345a7c0

bool __thiscall
`UE::Geometry::FMeshNormals::InitializeOverlayTopologyFromOpeningAngle'::__l2::<lambda_1>::
operator()(void *this,int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  
  plVar1 = *(longlong **)this;
  lVar9 = (longlong)param_2;
  lVar10 = (longlong)param_3;
  uVar8 = 0;
  if (param_2 < (int)plVar1[1]) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  plVar2 = *(longlong **)this;
  lVar3 = *plVar1;
  uVar8 = 0;
  if (param_3 < (int)plVar2[1]) {
    uVar8 = (uint)~param_3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  lVar4 = *plVar2;
  dVar11 = *(double *)(lVar4 + 8 + lVar10 * 0x18) * *(double *)(lVar3 + 8 + lVar9 * 0x18) +
           *(double *)(lVar3 + lVar9 * 0x18) * *(double *)(lVar4 + lVar10 * 0x18) +
           *(double *)(lVar4 + 0x10 + lVar10 * 0x18) * *(double *)(lVar3 + 0x10 + lVar9 * 0x18);
  return **(double **)((longlong)this + 8) <= dVar11 && dVar11 != **(double **)((longlong)this + 8);
}

// operator() @ 14345dba0

void __thiscall
`UE::Geometry::FMeshNormals::QuickComputeVertexNormalsForTriangles'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18 [4];
  code *local_68;
  FDynamicMesh3 **local_60;
  double local_58;
  double dStack_50;
  double local_48;
  FDynamicMesh3 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  uint *local_28;
  double *local_20;
  
  plVar1 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = *(uint *)(*plVar1 + (longlong)param_1 * 4);
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8[0] = **(undefined1 **)((longlong)this + 0x18);
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_res10[0] = **(undefined1 **)((longlong)this + 0x10);
  local_38 = local_res10;
  local_30 = local_res8;
  local_28 = local_res18;
  local_20 = &local_58;
  local_60 = &local_40;
  local_40 = *(FDynamicMesh3 **)((longlong)this + 8);
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshNormals::ComputeVertexNormal'::__l2::<lambda_1>,void,int>
             ::Call;
  local_res18[0] = uVar6;
  UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
            (local_40,uVar6,(TFunctionRef<void___cdecl(int)> *)&local_68);
  auVar9._0_8_ = local_58 * local_58 + dStack_50 * dStack_50 + local_48 * local_48;
  auVar9._8_8_ = 0;
  dVar8 = 0.0;
  auVar9 = sqrtpd(auVar9,auVar9);
  if (auVar9._0_8_ <= 0.0) {
    dStack_50 = 0.0;
    dVar4 = 0.0;
  }
  else {
    dVar4 = __real_3ff0000000000000 / auVar9._0_8_;
    dVar8 = dVar4 * local_58;
    dStack_50 = dVar4 * dStack_50;
    dVar4 = dVar4 * local_48;
  }
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x70) != '\0') {
    uVar7 = (ulonglong)(uVar6 & 0x1ff);
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x60) + (ulonglong)(uVar6 >> 9) * 8)
    ;
    *(float *)(lVar2 + uVar7 * 0xc) = (float)dVar8;
    *(float *)(lVar2 + 4 + uVar7 * 0xc) = (float)dStack_50;
    *(float *)(lVar2 + 8 + uVar7 * 0xc) = (float)dVar4;
  }
  return;
}

// operator() @ 14345dd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FMeshNormals::SetDegenerateTriangleNormalsToNeighborNormal'::__l2::<lambda_1>::
operator()(void *this,int param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          int *param_3)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  longlong *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ForElementType<FSetElementId> FVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStackY_128 [32];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  uint local_c8 [2];
  ulonglong local_c0;
  uint local_b8;
  int local_a8 [2];
  uint *local_a0;
  double local_88;
  uint local_80;
  uint local_7c;
  uint local_78 [2];
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_128;
  lVar15 = (longlong)param_1;
  local_a0 = (uint *)param_3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_2);
  *param_3 = -1;
  if (param_1 != -1) {
    lVar3 = *(longlong *)this;
    uVar9 = 0;
    if (param_1 < *(int *)(lVar3 + 0x10)) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar3 = *(longlong *)(lVar3 + 8);
    if (((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X ==
          *(double *)(lVar3 + lVar15 * 0x18)) &&
        (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y ==
         *(double *)(lVar3 + 8 + lVar15 * 0x18))) &&
       (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z ==
        *(double *)(lVar3 + 0x10 + lVar15 * 0x18))) goto LAB_14345de60;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("StartTid != FDynamicMesh3::InvalidID && Normals[StartTid] == FVector3d::Zero()"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\MeshNormals.cpp"
                     ,0x8a,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14345de60:
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  iVar10 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_d8,(int *)((longlong)&local_d0 + 4));
  *(int *)(local_d8.Data + (longlong)iVar10 * 4) = param_1;
  local_d0._0_4_ = iVar10 + 1;
joined_r0x00014345dea0:
  do {
    if ((int)local_d0 == 0) {
LAB_14345e606:
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
      return;
    }
    if (((int)local_d0 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = (int)local_d0 + -1;
    uVar9 = *(uint *)(local_d8.Data + (longlong)iVar10 * 4);
    lVar15 = (longlong)(int)uVar9;
    iVar11 = ((int)local_d0 - iVar10) + -1;
    if (iVar11 != 0) {
      memmove(local_d8.Data + (longlong)iVar10 * 4,local_d8.Data + (longlong)iVar10 * 4 + 4,
              (longlong)iVar11 << 2);
    }
    local_d0._0_4_ = (int)local_d0 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&local_d8,(int)local_d0,(int *)((longlong)&local_d0 + 4));
    local_c8[0] = uVar9;
    if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
      FVar4 = (param_2->Hash).SecondaryData;
      FVar14 = (ForElementType<FSetElementId>)&param_2->Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar14 = FVar4;
      }
      iVar10 = *(int *)((longlong)FVar14 + (ulonglong)(param_2->HashSize - 1U & uVar9) * 4);
      if (iVar10 != -1) {
        do {
          if (*(uint *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0xc) == uVar9)
          goto joined_r0x00014345dea0;
          iVar10 = *(int *)(*(longlong *)&param_2->Elements + 4 + (longlong)iVar10 * 0xc);
        } while (iVar10 != -1);
      }
    }
    lVar3 = *(longlong *)this;
    uVar12 = 0;
    if ((int)uVar9 < *(int *)(lVar3 + 0x10)) {
      uVar12 = ~uVar9 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar3 = *(longlong *)(lVar3 + 8);
    if (((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X !=
          *(double *)(lVar3 + lVar15 * 0x18)) ||
        (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y !=
         *(double *)(lVar3 + 8 + lVar15 * 0x18))) ||
       (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z !=
        *(double *)(lVar3 + 0x10 + lVar15 * 0x18))) {
      *local_a0 = uVar9;
      goto LAB_14345e606;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (param_2,local_a8,(bool *)local_c8);
    plVar5 = *(longlong **)this;
    lVar15 = *plVar5;
    if (*(int *)(lVar15 + 0x140) * 0x200 + *(int *)(lVar15 + 0x144) <
        *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\MeshNormals.cpp"
                         ,0xa6,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      goto LAB_14345e606;
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar15 + 0x180) + (ulonglong)(uVar9 >> 9) * 8);
    local_c0 = *(ulonglong *)(lVar3 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
    local_b8 = *(uint *)(lVar3 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
    uVar17 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(lVar15 + 0x1c0) + (ulonglong)((uint)local_c0 >> 9) * 8) +
               8 + (ulonglong)((uint)local_c0 & 0x1ff) * 0x10);
    if ((uint)uVar17 == uVar9) {
      uVar17 = uVar17 >> 0x20;
    }
    uVar12 = (uint)uVar17;
    if (uVar12 == 0xffffffff) {
      dVar18 = 0.0;
    }
    else {
      lVar15 = *(longlong *)(*plVar5 + 0x10);
      uVar17 = *(ulonglong *)
                (*(longlong *)
                  (*(longlong *)(*plVar5 + 0x1c0) + (ulonglong)((uint)local_c0 >> 9) * 8) +
                (ulonglong)((uint)local_c0 & 0x1ff) * 0x10);
      uVar13 = (ulonglong)((uint)uVar17 & 0x1ff);
      lVar3 = *(longlong *)(lVar15 + ((uVar17 & 0xffffffff) >> 9) * 8);
      pdVar1 = (double *)(lVar3 + uVar13 * 0x18);
      local_88 = *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
      uVar13 = (ulonglong)((uint)(uVar17 >> 0x20) & 0x1ff);
      lVar15 = *(longlong *)(lVar15 + (uVar17 >> 0x29) * 8);
      pdVar2 = (double *)(lVar15 + uVar13 * 0x18);
      dVar18 = *pdVar2 - *pdVar1;
      dVar19 = *(double *)(lVar15 + 0x10 + uVar13 * 0x18) - local_88;
      dVar21 = pdVar2[1] - pdVar1[1];
      dVar18 = dVar21 * dVar21 + dVar18 * dVar18 + dVar19 * dVar19;
    }
    uVar17 = (ulonglong)((uint)(local_c0 >> 0x20) & 0x1ff);
    uVar6 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(*plVar5 + 0x1c0) + (local_c0 >> 0x29) * 8) + 8 +
             uVar17 * 0x10);
    uVar16 = (uint)uVar6;
    if (uVar16 == uVar9) {
      uVar16 = (uint)((ulonglong)uVar6 >> 0x20);
    }
    if (uVar16 == 0xffffffff) {
      dVar19 = 0.0;
    }
    else {
      lVar15 = *(longlong *)(*plVar5 + 0x10);
      uVar17 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(*plVar5 + 0x1c0) + (local_c0 >> 0x29) * 8) +
                uVar17 * 0x10);
      uVar13 = (ulonglong)((uint)uVar17 & 0x1ff);
      lVar3 = *(longlong *)(lVar15 + ((uVar17 & 0xffffffff) >> 9) * 8);
      pdVar1 = (double *)(lVar3 + uVar13 * 0x18);
      local_88 = *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
      uVar13 = (ulonglong)((uint)(uVar17 >> 0x20) & 0x1ff);
      lVar15 = *(longlong *)(lVar15 + (uVar17 >> 0x29) * 8);
      pdVar2 = (double *)(lVar15 + uVar13 * 0x18);
      dVar19 = *pdVar2 - *pdVar1;
      dVar21 = *(double *)(lVar15 + 0x10 + uVar13 * 0x18) - local_88;
      dVar20 = pdVar2[1] - pdVar1[1];
      dVar19 = dVar20 * dVar20 + dVar19 * dVar19 + dVar21 * dVar21;
    }
    uVar6 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(*plVar5 + 0x1c0) + (ulonglong)(local_b8 >> 9) * 8) + 8 +
             (ulonglong)(local_b8 & 0x1ff) * 0x10);
    local_78[0] = (uint)uVar6;
    if (local_78[0] == uVar9) {
      local_78[0] = (uint)((ulonglong)uVar6 >> 0x20);
    }
    if (local_78[0] == 0xffffffff) {
      dVar21 = 0.0;
    }
    else {
      lVar15 = *(longlong *)(*plVar5 + 0x10);
      uVar17 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(*plVar5 + 0x1c0) + (ulonglong)(local_b8 >> 9) * 8) +
                (ulonglong)(local_b8 & 0x1ff) * 0x10);
      uVar13 = (ulonglong)((uint)uVar17 & 0x1ff);
      lVar3 = *(longlong *)(lVar15 + ((uVar17 & 0xffffffff) >> 9) * 8);
      pdVar1 = (double *)(lVar3 + uVar13 * 0x18);
      local_88 = *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
      uVar13 = (ulonglong)((uint)(uVar17 >> 0x20) & 0x1ff);
      lVar15 = *(longlong *)(lVar15 + (uVar17 >> 0x29) * 8);
      pdVar2 = (double *)(lVar15 + uVar13 * 0x18);
      dVar20 = *pdVar2 - *pdVar1;
      dVar22 = *(double *)(lVar15 + 0x10 + uVar13 * 0x18) - local_88;
      dVar21 = pdVar2[1] - pdVar1[1];
      dVar21 = dVar21 * dVar21 + dVar20 * dVar20 + dVar22 * dVar22;
    }
    uVar9 = uVar12;
    if (dVar19 < dVar18) {
      uVar9 = uVar16;
      uVar16 = uVar12;
    }
    dVar20 = dVar18;
    if (dVar19 <= dVar18) {
      dVar20 = dVar19;
    }
    if (dVar18 <= dVar19) {
      dVar18 = dVar19;
    }
    local_7c = uVar16;
    if (dVar21 < dVar18) {
      dVar18 = dVar21;
      local_7c = local_78[0];
      local_78[0] = uVar16;
    }
    local_80 = uVar9;
    if (dVar18 < dVar20) {
      local_80 = local_7c;
      local_7c = uVar9;
    }
    if (local_80 != 0xffffffff) {
      if (((local_d8.Data <= (FScriptContainerElement *)&local_80) &&
          ((FScriptContainerElement *)&local_80 < local_d8.Data + (longlong)local_d0._4_4_ * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((int)local_d0 == local_d0._4_4_) {
        local_d0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_d8,(int *)((longlong)&local_d0 + 4));
      }
      *(uint *)(local_d8.Data + (longlong)(int)local_d0 * 4) = local_80;
      local_d0._0_4_ = (int)local_d0 + 1;
    }
    if (local_7c != 0xffffffff) {
      if (((local_d8.Data <= (FScriptContainerElement *)&local_7c) &&
          ((FScriptContainerElement *)&local_7c < local_d8.Data + (longlong)local_d0._4_4_ * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((int)local_d0 == local_d0._4_4_) {
        local_d0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_d8,(int *)((longlong)&local_d0 + 4));
      }
      *(uint *)(local_d8.Data + (longlong)(int)local_d0 * 4) = local_7c;
      local_d0._0_4_ = (int)local_d0 + 1;
    }
    if (local_78[0] != 0xffffffff) {
      if (((local_d8.Data <= (FScriptContainerElement *)local_78) &&
          ((FScriptContainerElement *)local_78 < local_d8.Data + (longlong)local_d0._4_4_ * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((int)local_d0 == local_d0._4_4_) {
        local_d0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_d8,(int *)((longlong)&local_d0 + 4));
      }
      *(uint *)(local_d8.Data + (longlong)(int)local_d0 * 4) = local_78[0];
      local_d0._0_4_ = (int)local_d0 + 1;
    }
  } while( true );
}

// operator() @ 14345f230

void __thiscall
`UE::Geometry::FMeshNormals::RecomputeOverlayElementNormals'::__l5::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  double *pdVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18 [2];
  uint local_res20 [2];
  longlong local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  code *local_90;
  undefined8 **local_88;
  double local_80;
  double dStack_78;
  double local_70;
  longlong *local_68;
  uint *local_60;
  FDynamicMesh3 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  double *local_40;
  int *local_38;
  
  plVar1 = *(longlong **)this;
  uVar7 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar7 = *(uint *)(*plVar1 + (longlong)param_1 * 4);
  local_c8 = **(longlong **)((longlong)this + 8);
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(local_c8 + 8) * 0x200 + *(int *)(local_c8 + 0xc)))
  {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(local_c8 + 0x10) + (ulonglong)(uVar7 >> 9) * 8) +
                           (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe) {
      local_58 = *(FDynamicMesh3 **)((longlong)this + 0x10);
      local_res8[0] = **(undefined1 **)((longlong)this + 0x20);
      local_res10[0] = **(undefined1 **)((longlong)this + 0x18);
      local_68 = &local_c8;
      local_60 = local_res20;
      local_50 = local_res10;
      local_48 = local_res8;
      local_40 = &local_c0;
      local_38 = local_res18;
      local_88 = &local_68;
      local_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_90 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FMeshNormals::ComputeOverlayNormal'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_res18[0] = 0;
      local_res20[0] = uVar7;
      UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                (local_58,*(int *)(*(longlong *)
                                    (*(longlong *)(local_c8 + 0x60) + (ulonglong)(uVar7 >> 9) * 8) +
                                  (ulonglong)(uVar7 & 0x1ff) * 4),
                 (TFunctionRef<void___cdecl(int)> *)&local_90);
      if (local_res18[0] < 1) {
        pdVar8 = &local_80;
        local_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        auVar9._0_8_ = dStack_b8 * dStack_b8;
        auVar9._8_8_ = 0;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = local_c0 * local_c0 + auVar9._0_8_ + local_b0 * local_b0;
        auVar10 = sqrtpd(auVar9,auVar10);
        if (auVar10._0_8_ <= 0.0) {
          local_98 = 0.0;
          local_a8 = 0.0;
          dStack_a0 = 0.0;
          pdVar8 = &local_a8;
        }
        else {
          pdVar8 = &local_a8;
          dVar4 = __real_3ff0000000000000 / auVar10._0_8_;
          local_a8 = dVar4 * local_c0;
          dStack_a0 = dVar4 * dStack_b8;
          local_98 = dVar4 * local_b0;
        }
      }
      dVar5 = pdVar8[1];
      uVar7 = uVar7 * 3;
      dVar4 = pdVar8[2];
      lVar2 = **(longlong **)((longlong)this + 8);
      *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar7 >> 9) * 8) +
                (ulonglong)(uVar7 & 0x1ff) * 4) = (float)*pdVar8;
      *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                (ulonglong)(uVar7 + 1 & 0x1ff) * 4) = (float)dVar5;
      *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                (ulonglong)(uVar7 + 2 & 0x1ff) * 4) = (float)dVar4;
    }
  }
  return;
}

// operator() @ 1434607b0

void __thiscall
`UE::Geometry::FMeshNormals::SmoothVertexNormals'::__l7::<lambda_1>::operator()
          (void *this,int param_1)

{
  float *pfVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined4 uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  float fStack_c4;
  double *local_b8;
  longlong local_b0;
  code *local_a8;
  undefined8 **local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code **local_78;
  int local_70;
  
  lVar8 = (longlong)param_1;
  local_b0 = *(longlong *)this;
  if ((-1 < param_1) && (param_1 < *(int *)(local_b0 + 0x20) * 0x200 + *(int *)(local_b0 + 0x24))) {
    uVar9 = (ulonglong)(param_1 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(local_b0 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8)
                           + uVar9 * 2) - 1U) < 0xfffe) {
      local_b8 = &local_98;
      local_a0 = &local_b8;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<``UE::Geometry::FMeshNormals::SmoothVertexNormals'::__l7::<lambda_1>::operator()'::__l5::<lambda_1>,void,int>
                 ::Call;
      local_78 = &local_a8;
      local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_80 = local_b0;
      local_70 = param_1;
      UE::Geometry::FSmallListSet::
      Enumerate<_UE::Geometry::FDynamicMesh3::EnumerateVertexVertices_::__l2::<lambda_1>_>
                ((FSmallListSet *)(local_b0 + 0xb8),param_1,(<lambda_1> *)&local_80);
      auVar13._0_8_ = local_88 * local_88;
      auVar13._8_8_ = 0;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = local_98 * local_98 + dStack_90 * dStack_90 + auVar13._0_8_;
      auVar14 = sqrtpd(auVar13,auVar14);
      if (auVar14._0_8_ <= 0.0) {
        local_88 = 0.0;
        dStack_90 = 0.0;
        local_98 = 0.0;
      }
      else {
        dVar12 = __real_3ff0000000000000 / auVar14._0_8_;
        local_98 = local_98 * dVar12;
        dStack_90 = dStack_90 * dVar12;
        local_88 = local_88 * dVar12;
      }
      dVar12 = **(double **)((longlong)this + 0x10);
      if (*(char *)(*(longlong *)this + 0x70) == '\0') {
        fStack_c4 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y;
        uVar7 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
        uVar11 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
      }
      else {
        lVar3 = *(longlong *)
                 (*(longlong *)(*(longlong *)this + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8);
        pfVar1 = (float *)(lVar3 + uVar9 * 0xc);
        uVar11 = *pfVar1;
        fStack_c4 = pfVar1[1];
        uVar7 = *(float *)(lVar3 + 8 + uVar9 * 0xc);
      }
      dVar5 = __real_3ff0000000000000 - dVar12;
      plVar2 = *(longlong **)((longlong)this + 8);
      uVar10 = 0;
      if (param_1 < (int)plVar2[1]) {
        uVar10 = (uint)~param_1 >> 0x1f;
      }
      dVar15 = local_98 * dVar12;
      dVar16 = dStack_90 * dVar12;
      dVar12 = local_88 * dVar12;
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *plVar2;
      *(double *)(lVar3 + lVar8 * 0x18) = (double)(float)uVar11 * dVar5 + dVar15;
      *(double *)(lVar3 + 8 + lVar8 * 0x18) = (double)fStack_c4 * dVar5 + dVar16;
      *(double *)(lVar3 + 0x10 + lVar8 * 0x18) = (double)(float)uVar7 * dVar5 + dVar12;
      plVar2 = *(longlong **)((longlong)this + 8);
      uVar10 = 0;
      if (param_1 < (int)plVar2[1]) {
        uVar10 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UE::Geometry::Normalize<double>((TVector<double> *)(*plVar2 + lVar8 * 0x18),0.0);
    }
  }
  return;
}

// operator() @ 143460fc0

void __thiscall
`UE::Geometry::FMeshNormals::QuickRecomputeOverlayNormals'::__l10::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  char cVar6;
  FDynamicMesh3 *this_00;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  bool bVar14;
  uint uVar15;
  float fVar16;
  TVector<double> *pTVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 in_XMM0_Qb;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float local_b8 [4];
  int local_a8 [4];
  undefined8 local_98;
  double dStack_90;
  double local_88;
  TVector<double> local_80 [3];
  
  if ((-1 < param_1) &&
     (this_00 = *(FDynamicMesh3 **)((longlong)this + 8),
     param_1 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                    (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) {
    uVar20 = (ulonglong)(param_1 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)((uint)param_1 >> 9) * 8) + uVar20 * 2) - 1U) < 0xfffe) {
      uVar22 = param_1 * 3;
      lVar23 = *(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x78);
      local_a8[0] = *(int *)(*(longlong *)(lVar23 + (ulonglong)(uVar22 >> 9) * 8) +
                            (ulonglong)(uVar22 & 0x1ff) * 4);
      local_a8[1] = *(undefined4 *)
                     (*(longlong *)(lVar23 + (ulonglong)(uVar22 + 1 >> 9) * 8) +
                     (ulonglong)(uVar22 + 1 & 0x1ff) * 4);
      local_a8[2] = *(undefined4 *)
                     (*(longlong *)(lVar23 + (ulonglong)(uVar22 + 2 >> 9) * 8) +
                     (ulonglong)(uVar22 + 2 & 0x1ff) * 4);
      if (local_a8[0] != -1) {
        pFVar7 = (this_00->Vertices).Blocks.AllocatorInstance.Data;
        lVar23 = *(longlong *)
                  ((this_00->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        uVar22 = *(uint *)(lVar23 + uVar20 * 0xc);
        uVar19 = (ulonglong)(uVar22 & 0x1ff);
        auVar30 = *(undefined1 (*) [16])
                   (*(longlong *)(pFVar7 + (ulonglong)(uVar22 >> 9) * 8) + uVar19 * 0x18);
        dVar5 = *(double *)
                 (*(longlong *)(pFVar7 + (ulonglong)(uVar22 >> 9) * 8) + 0x10 + uVar19 * 0x18);
        uVar22 = *(uint *)(lVar23 + 4 + uVar20 * 0xc);
        auVar13._4_8_ = in_XMM0_Qb;
        auVar13._0_4_ = auVar30._4_4_;
        auVar25._0_8_ = auVar13._0_8_ << 0x20;
        auVar25._8_4_ = auVar30._8_4_;
        auVar25._12_4_ = auVar30._12_4_;
        uVar19 = (ulonglong)(uVar22 & 0x1ff);
        pdVar1 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar22 >> 9) * 8) + uVar19 * 0x18);
        dVar28 = pdVar1[1];
        uVar15 = *(uint *)(lVar23 + 8 + uVar20 * 0xc);
        dVar11 = *pdVar1 - auVar30._0_8_;
        auVar29._0_8_ = dVar28 - auVar25._8_8_;
        auVar29._8_8_ = dVar28;
        uVar20 = (ulonglong)(uVar15 & 0x1ff);
        dVar27 = *(double *)
                  (*(longlong *)(pFVar7 + (ulonglong)(uVar22 >> 9) * 8) + 0x10 + uVar19 * 0x18) -
                 dVar5;
        pdVar1 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar15 >> 9) * 8) + uVar20 * 0x18);
        dVar5 = *(double *)
                 (*(longlong *)(pFVar7 + (ulonglong)(uVar15 >> 9) * 8) + 0x10 + uVar20 * 0x18) -
                dVar5;
        dVar26 = pdVar1[1] - auVar25._8_8_;
        dVar28 = *pdVar1 - auVar30._0_8_;
        dVar12 = dVar26 * dVar27 - dVar5 * auVar29._0_8_;
        dVar5 = dVar5 * dVar11 - dVar28 * dVar27;
        dVar11 = dVar28 * auVar29._0_8_ - dVar26 * dVar11;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = dVar5 * dVar5 + dVar12 * dVar12 + dVar11 * dVar11;
        auVar30 = sqrtpd(auVar29,auVar30);
        dVar28 = auVar30._0_8_;
        if (dVar28 <= 0.0) {
          dVar28 = 0.0;
          dVar11 = 0.0;
          dVar5 = 0.0;
          dVar12 = 0.0;
        }
        else {
          dVar26 = __real_3ff0000000000000 / dVar28;
          dVar11 = dVar11 * dVar26;
          dVar5 = dVar5 * dVar26;
          dVar12 = dVar12 * dVar26;
        }
        cVar6 = *(char *)((longlong)this + 0x10);
        dVar28 = dVar28 * __real_3fe0000000000000;
        local_98 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dStack_90 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        if (*(char *)((longlong)this + 0x11) != '\0') {
          pTVar17 = UE::Geometry::FDynamicMesh3::GetTriInternalAnglesR(this_00,local_80,param_1);
          local_98 = (pTVar17->field0_0x0)._s_0.X;
          dStack_90 = (pTVar17->field0_0x0)._s_0.Y;
          local_88 = (pTVar17->field0_0x0)._s_0.Z;
        }
        dVar27 = dStack_90;
        dVar26 = local_88;
        if (cVar6 != '\0') {
          local_98 = local_98 * dVar28;
          dVar27 = dStack_90 * dVar28;
          dVar26 = local_88 * dVar28;
        }
        lVar23 = 0;
        local_b8[0] = (float)local_98;
        local_b8[1] = (float)dVar27;
        local_b8[2] = (float)dVar26;
        do {
          fVar3 = *(float *)((longlong)local_b8 + lVar23);
          lVar24 = 3;
          uVar22 = *(int *)((longlong)local_a8 + lVar23) * 3;
          lVar18 = (longlong)(int)uVar22;
          local_98 = (double)CONCAT44(fVar3 * (float)dVar5,fVar3 * (float)dVar12);
          dStack_90 = (double)CONCAT44(dStack_90._4_4_,fVar3 * (float)dVar11);
          lVar21 = lVar18 * 4;
          do {
            plVar8 = *(longlong **)this;
            fVar3 = *(float *)((longlong)&local_98 + lVar21 + lVar18 * -4);
            uVar15 = 0;
            if ((int)uVar22 < (int)plVar8[1]) {
              uVar15 = ~uVar22 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar9 = *plVar8;
            fVar16 = *(float *)(lVar21 + lVar9);
            do {
              pfVar2 = (float *)(lVar21 + lVar9);
              LOCK();
              fVar4 = *pfVar2;
              bVar14 = fVar16 == fVar4;
              if (bVar14) {
                *pfVar2 = fVar16 + fVar3;
                fVar4 = fVar16;
              }
              fVar16 = fVar4;
              UNLOCK();
            } while (!bVar14);
            uVar22 = uVar22 + 1;
            lVar21 = lVar21 + 4;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar23 = lVar23 + 4;
        } while (lVar23 < 0xc);
      }
    }
  }
  return;
}

// operator() @ 143463190

void __thiscall
`UE::Geometry::FMeshNormals::QuickRecomputeOverlayNormals'::__l10::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  if (((-1 < param_1) &&
      (lVar1 = *(longlong *)((longlong)this + 0x10),
      param_1 < *(int *)(lVar1 + 8) * 0x200 + *(int *)(lVar1 + 0xc))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    uVar5 = param_1 * 3;
    plVar2 = *(longlong **)this;
    uVar9 = uVar5 + 2;
    uVar7 = 0;
    if ((int)uVar9 < (int)plVar2[1]) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = uVar5 + 1;
    plVar3 = *(longlong **)this;
    dVar14 = (double)*(float *)(*plVar2 + ((longlong)(int)uVar5 + 2) * 4);
    uVar7 = 0;
    if ((int)uVar8 < (int)plVar3[1]) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar2 = *(longlong **)this;
    dVar13 = (double)*(float *)(*plVar3 + ((longlong)(int)uVar5 + 1) * 4);
    uVar7 = 0;
    if ((int)uVar5 < (int)plVar2[1]) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar1 = *(longlong *)((longlong)this + 0x10);
    dVar15 = (double)*(float *)(*plVar2 + (longlong)(int)uVar5 * 4);
    auVar10._0_8_ = dVar13 * dVar13;
    auVar10._8_8_ = 0;
    dVar12 = 0.0;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar15 * dVar15 + auVar10._0_8_ + dVar14 * dVar14;
    auVar11 = sqrtpd(auVar10,auVar11);
    if (auVar11._0_8_ <= 0.0) {
      dVar13 = 0.0;
      dVar14 = 0.0;
    }
    else {
      dVar12 = __real_3ff0000000000000 / auVar11._0_8_;
      dVar13 = dVar12 * dVar13;
      dVar14 = dVar12 * dVar14;
      dVar12 = dVar12 * dVar15;
    }
    dVar15 = (double)*(float *)((longlong)this + 8);
    *(float *)(*(longlong *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)(uVar5 >> 9) * 8) +
              (ulonglong)(uVar5 & 0x1ff) * 4) = (float)(dVar15 * dVar12);
    *(float *)(*(longlong *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)(uVar8 >> 9) * 8) +
              (ulonglong)((uint)((longlong)(int)uVar5 + 1) & 0x1ff) * 4) = (float)(dVar15 * dVar13);
    *(float *)(*(longlong *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)(uVar9 >> 9) * 8) +
              (ulonglong)((uint)((longlong)(int)uVar5 + 2) & 0x1ff) * 4) = (float)(dVar15 * dVar14);
  }
  return;
}

// ComputeOverlayNormal @ 143495e50

TVector<double> * __cdecl
UE::Geometry::FMeshNormals::ComputeOverlayNormal
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_2,int param_3,
          bool param_4,bool param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int local_res8 [2];
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_res18;
  int local_res20 [2];
  code *local_68;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> ***local_60;
  double local_58;
  double dStack_50;
  double local_48;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **local_40;
  int *local_38;
  FDynamicMesh3 *local_30;
  bool *local_28;
  bool *local_20;
  double *local_18;
  int *local_10;
  
  local_40 = &local_res18;
  local_38 = local_res20;
  local_res8[0] = 0;
  local_28 = &param_4;
  local_20 = &param_5;
  local_18 = &local_58;
  local_10 = local_res8;
  local_60 = &local_40;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshNormals::ComputeOverlayNormal'::__l2::<lambda_1>,void,int>
             ::Call;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_30 = param_1;
  FDynamicMesh3::EnumerateVertexTriangles
            (param_1,*(int *)(*(longlong *)
                               (*(longlong *)&param_2->field_0x60 +
                               (ulonglong)((uint)param_3 >> 9) * 8) +
                             (ulonglong)(param_3 & 0x1ff) * 4),
             (TFunctionRef<void___cdecl(int)> *)&local_68);
  if (local_res8[0] < 1) {
    local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    auVar2._0_8_ = dStack_50 * dStack_50;
    auVar2._8_8_ = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_58 * local_58 + auVar2._0_8_ + local_48 * local_48;
    auVar3 = sqrtpd(auVar2,auVar3);
    if (auVar3._0_8_ <= 0.0) {
      local_48 = 0.0;
      local_58 = 0.0;
      dStack_50 = 0.0;
    }
    else {
      dVar1 = __real_3ff0000000000000 / auVar3._0_8_;
      local_58 = dVar1 * local_58;
      dStack_50 = dVar1 * dStack_50;
      local_48 = dVar1 * local_48;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_58;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_50;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_48;
  return __return_storage_ptr__;
}

// ComputeVertexNormal @ 143496650

TVector<double> * __cdecl
UE::Geometry::FMeshNormals::ComputeVertexNormal
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          TFunctionRef<bool___cdecl(int)> *param_3,bool param_4,bool param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int local_res18 [4];
  code *local_78;
  TFunctionRef<bool___cdecl(int)> **local_70;
  double local_68;
  double dStack_60;
  double local_58;
  TFunctionRef<bool___cdecl(int)> *local_50;
  FDynamicMesh3 *local_48;
  bool *local_40;
  bool *local_38;
  int *local_30;
  double *local_28;
  
  local_40 = &param_4;
  local_38 = &param_5;
  local_30 = local_res18;
  local_28 = &local_68;
  dVar2 = 0.0;
  local_70 = &local_50;
  local_58 = 0.0;
  local_78 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshNormals::ComputeVertexNormal'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68 = 0.0;
  dStack_60 = 0.0;
  local_res18[0] = param_2;
  local_50 = param_3;
  local_48 = param_1;
  FDynamicMesh3::EnumerateVertexTriangles
            (param_1,param_2,(TFunctionRef<void___cdecl(int)> *)&local_78);
  auVar3._0_8_ = local_58 * local_58;
  auVar3._8_8_ = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_68 * local_68 + dStack_60 * dStack_60 + auVar3._0_8_;
  auVar4 = sqrtpd(auVar3,auVar4);
  if (auVar4._0_8_ <= 0.0) {
    dStack_60 = 0.0;
    dVar1 = 0.0;
  }
  else {
    dVar1 = __real_3ff0000000000000 / auVar4._0_8_;
    dVar2 = dVar1 * local_58;
    dStack_60 = dVar1 * dStack_60;
    dVar1 = dVar1 * local_68;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_60;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// ComputeVertexNormal @ 143496750

TVector<double> * __cdecl
UE::Geometry::FMeshNormals::ComputeVertexNormal
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,bool param_3,
          bool param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int local_res18 [2];
  undefined1 local_res20 [8];
  code *local_58;
  FDynamicMesh3 **local_50;
  double local_48;
  double dStack_40;
  double local_38;
  FDynamicMesh3 *local_30;
  undefined1 *local_28;
  bool *local_20;
  int *local_18;
  double *local_10;
  
  local_28 = local_res20;
  local_20 = &param_4;
  local_18 = local_res18;
  local_10 = &local_48;
  local_50 = &local_30;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_58 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshNormals::ComputeVertexNormal'::__l2::<lambda_1>,void,int>
             ::Call;
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  local_30 = param_1;
  FDynamicMesh3::EnumerateVertexTriangles
            (param_1,param_2,(TFunctionRef<void___cdecl(int)> *)&local_58);
  auVar3._0_8_ = local_48 * local_48 + dStack_40 * dStack_40 + local_38 * local_38;
  auVar3._8_8_ = 0;
  dVar2 = 0.0;
  auVar3 = sqrtpd(auVar3,auVar3);
  if (auVar3._0_8_ <= 0.0) {
    dStack_40 = 0.0;
    dVar1 = 0.0;
  }
  else {
    dVar1 = __real_3ff0000000000000 / auVar3._0_8_;
    dVar2 = dVar1 * local_38;
    dStack_40 = dVar1 * dStack_40;
    dVar1 = dVar1 * local_48;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_40;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// Compute_FaceAvg @ 143496850

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshNormals::Compute_FaceAvg(FMeshNormals *this,bool param_1,bool param_2)

{
  double dVar1;
  FDynamicMesh3 *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  FDynamicMesh3 *this_00;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double local_res20;
  double local_128;
  double dStack_120;
  double local_118;
  TVector<double>_u_0 local_110;
  undefined8 local_f8;
  TVector<double> local_e8;
  TVector<double> local_d0 [6];
  
  if ((!param_2) && (param_1)) {
    Compute_FaceAvg_AreaWeighted(this);
    return;
  }
  iVar15 = (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed +
           (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if ((this->Normals).ArrayNum < iVar15) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Normals,iVar15,Default);
  }
  memset((this->Normals).AllocatorInstance.Data,0,(longlong)(this->Normals).ArrayNum * 0x18);
  pFVar2 = this->Mesh;
  uVar17 = (pFVar2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar2->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar16 = 0;
  dVar6 = __real_3ff0000000000000;
  if (((uVar17 != 0) &&
      (pFVar3 = (pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar16 = 0,
      0xfffd < (ushort)(**(short **)pFVar3 - 1U))) && (uVar16 = 1, 1 < (int)uVar17)) {
    do {
      lVar18 = *(longlong *)(pFVar3 + (ulonglong)(uVar16 >> 9) * 8);
      if ((*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) break;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)uVar17);
  }
joined_r0x000143496968:
  __real_3ff0000000000000 = dVar6;
  if (uVar16 != uVar17) {
    while( true ) {
      FDynamicMesh3::GetTriInfo
                (this->Mesh,uVar16,(TVector<double> *)&local_110._s_0,&local_res20,&local_e8);
      this_00 = this->Mesh;
      local_128 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      dStack_120 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      local_118 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      if (param_2) {
        pTVar14 = FDynamicMesh3::GetTriInternalAnglesR(this_00,local_d0,uVar16);
        this_00 = this->Mesh;
        local_128 = (pTVar14->field0_0x0)._s_0.X;
        dStack_120 = (pTVar14->field0_0x0)._s_0.Y;
        local_118 = (pTVar14->field0_0x0)._s_0.Z;
      }
      uVar10 = local_110._s_0.Z;
      uVar9 = local_110._s_0.Y;
      uVar8 = local_110._s_0.X;
      if (param_1) {
        local_128 = local_128 * local_res20;
        dStack_120 = dStack_120 * local_res20;
        local_118 = local_118 * local_res20;
      }
      dVar6 = local_110._s_0.X * local_128;
      dVar7 = local_110._s_0.Y * local_128;
      lVar18 = *(longlong *)
                ((this_00->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8);
      local_128 = local_110._s_0.Z * local_128;
      local_f8 = *(undefined8 *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
      uVar13 = *(uint *)(lVar18 + 8 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
      lVar20 = (longlong)(int)uVar13;
      lVar18 = (longlong)(int)(uint)local_f8;
      uVar12 = 0;
      if ((int)(uint)local_f8 < (this->Normals).ArrayNum) {
        uVar12 = ~(uint)local_f8 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Normals).AllocatorInstance.Data;
      lVar19 = (longlong)(int)local_f8._4_4_;
      dVar1 = *(double *)(pFVar3 + lVar18 * 0x18 + 8);
      dVar21 = *(double *)(pFVar3 + lVar18 * 0x18 + 0x10);
      *(double *)(pFVar3 + lVar18 * 0x18) = dVar6 + *(double *)(pFVar3 + lVar18 * 0x18);
      *(double *)(pFVar3 + lVar18 * 0x18 + 8) = dVar7 + dVar1;
      *(double *)(pFVar3 + lVar18 * 0x18 + 0x10) = local_128 + dVar21;
      uVar12 = 0;
      if ((int)local_f8._4_4_ < (this->Normals).ArrayNum) {
        uVar12 = ~local_f8._4_4_ >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Normals).AllocatorInstance.Data;
      dVar6 = *(double *)(pFVar3 + lVar19 * 0x18 + 8);
      dVar7 = *(double *)(pFVar3 + lVar19 * 0x18 + 0x10);
      *(double *)(pFVar3 + lVar19 * 0x18) =
           (double)uVar8 * dStack_120 + *(double *)(pFVar3 + lVar19 * 0x18);
      *(double *)(pFVar3 + lVar19 * 0x18 + 8) = (double)uVar9 * dStack_120 + dVar6;
      *(double *)(pFVar3 + lVar19 * 0x18 + 0x10) = (double)uVar10 * dStack_120 + dVar7;
      uVar12 = 0;
      if ((int)uVar13 < (this->Normals).ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Normals).AllocatorInstance.Data;
      uVar16 = uVar16 + 1;
      dVar6 = *(double *)(pFVar3 + lVar20 * 0x18 + 8);
      dVar7 = *(double *)(pFVar3 + lVar20 * 0x18 + 0x10);
      *(double *)(pFVar3 + lVar20 * 0x18) =
           local_118 * (double)uVar8 + *(double *)(pFVar3 + lVar20 * 0x18);
      *(double *)(pFVar3 + lVar20 * 0x18 + 8) = (double)uVar9 * local_118 + dVar6;
      *(double *)(pFVar3 + lVar20 * 0x18 + 0x10) = (double)uVar10 * local_118 + dVar7;
      dVar6 = __real_3ff0000000000000;
      if ((int)uVar17 <= (int)uVar16) break;
      while( true ) {
        lVar18 = *(longlong *)
                  ((pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar16 >> 9) * 8);
        if ((*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) break;
        uVar16 = uVar16 + 1;
        if ((int)uVar17 <= (int)uVar16) goto joined_r0x000143496968;
      }
    }
    goto joined_r0x000143496968;
  }
  pFVar2 = this->Mesh;
  uVar16 = 0;
  uVar17 = (pFVar2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar2->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((uVar17 != 0) &&
     (pFVar3 = (pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar16 = 1;
    bVar11 = uVar17 == 1;
    if ((int)uVar17 < 2) goto LAB_143496d68;
    do {
      lVar18 = *(longlong *)(pFVar3 + (ulonglong)(uVar16 >> 9) * 8);
      if ((*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) break;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)uVar17);
  }
  bVar11 = uVar16 == uVar17;
LAB_143496d68:
  if (!bVar11) {
LAB_143496d80:
    do {
      uVar13 = 0;
      if ((int)uVar16 < (this->Normals).ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar18 = (longlong)(int)uVar16;
      pFVar3 = (this->Normals).AllocatorInstance.Data;
      dVar7 = *(double *)(pFVar3 + lVar18 * 0x18);
      dVar1 = *(double *)(pFVar3 + lVar18 * 0x18 + 8);
      dVar21 = *(double *)(pFVar3 + lVar18 * 0x18 + 0x10);
      auVar22._0_8_ = dVar21 * dVar21;
      auVar22._8_8_ = 0;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = dVar1 * dVar1 + dVar7 * dVar7 + auVar22._0_8_;
      auVar23 = sqrtpd(auVar22,auVar23);
      if (auVar23._0_8_ <= 0.0) {
        dVar21 = 0.0;
        dVar1 = 0.0;
        dVar5 = 0.0;
      }
      else {
        dVar5 = dVar6 / auVar23._0_8_;
        dVar21 = dVar5 * dVar21;
        dVar1 = dVar5 * dVar1;
        dVar5 = dVar5 * dVar7;
      }
      *(double *)(pFVar3 + lVar18 * 0x18) = dVar5;
      uVar16 = uVar16 + 1;
      *(double *)(pFVar3 + lVar18 * 0x18 + 8) = dVar1;
      *(double *)(pFVar3 + lVar18 * 0x18 + 0x10) = dVar21;
      if ((int)uVar16 < (int)uVar17) {
        do {
          lVar18 = *(longlong *)
                    ((pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar16 >> 9) * 8);
          if ((*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) goto LAB_143496d80;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)uVar17);
      }
    } while (uVar16 != uVar17);
  }
  return;
}

// Compute_FaceAvg_AreaWeighted @ 143496ed0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FMeshNormals::Compute_FaceAvg_AreaWeighted(FMeshNormals *this)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_00;
  undefined8 uVar1;
  FDynamicMesh3 *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double local_res8;
  uint local_98;
  uint uStack_94;
  TVector<double>_u_0 local_88;
  TVector<double> local_70 [3];
  
  this_00 = &this->Normals;
  iVar11 = (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((this->Normals).ArrayNum < iVar11) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (this_00,iVar11,Default);
  }
  memset((this_00->AllocatorInstance).Data,0,(longlong)(this->Normals).ArrayNum * 0x18);
  pFVar2 = this->Mesh;
  uVar15 = (pFVar2->TriangleRefCounts).RefCounts.CurBlockUsed +
           (pFVar2->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar12 = 0;
  dVar5 = __real_3ff0000000000000;
  if (((uVar15 != 0) &&
      (pFVar3 = (pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar12 = 0,
      0xfffd < (ushort)(**(short **)pFVar3 - 1U))) && (uVar12 = 1, 1 < (int)uVar15)) {
    do {
      lVar13 = *(longlong *)(pFVar3 + (ulonglong)(uVar12 >> 9) * 8);
      if ((*(short *)(lVar13 + (ulonglong)(uVar12 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar13 + (ulonglong)(uVar12 & 0x1ff) * 2) != -1)) break;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar15);
  }
joined_r0x000143496fa8:
  __real_3ff0000000000000 = dVar5;
  if (uVar12 != uVar15) {
    while( true ) {
      FDynamicMesh3::GetTriInfo
                (this->Mesh,uVar12,(TVector<double> *)&local_88._s_0,&local_res8,local_70);
      dVar5 = local_88._s_0.X * local_res8;
      dVar6 = local_88._s_0.Y * local_res8;
      dVar7 = local_88._s_0.Z * local_res8;
      lVar13 = *(longlong *)
                ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar12 >> 9) * 8);
      uVar1 = *(undefined8 *)(lVar13 + (ulonglong)(uVar12 & 0x1ff) * 0xc);
      uVar10 = *(uint *)(lVar13 + 8 + (ulonglong)(uVar12 & 0x1ff) * 0xc);
      lVar16 = (longlong)(int)uVar10;
      local_98 = (uint)uVar1;
      lVar13 = (longlong)(int)local_98;
      uVar9 = 0;
      if ((int)local_98 < (this->Normals).ArrayNum) {
        uVar9 = ~local_98 >> 0x1f;
      }
      local_88._s_0.X = dVar5;
      local_88._s_0.Y = dVar6;
      local_88._s_0.Z = dVar7;
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      uStack_94 = (uint)((ulonglong)uVar1 >> 0x20);
      lVar14 = (longlong)(int)uStack_94;
      dVar18 = *(double *)(pFVar3 + lVar13 * 0x18 + 8);
      *(double *)(pFVar3 + lVar13 * 0x18) = dVar5 + *(double *)(pFVar3 + lVar13 * 0x18);
      *(double *)(pFVar3 + lVar13 * 0x18 + 8) = dVar6 + dVar18;
      *(double *)(pFVar3 + lVar13 * 0x18 + 0x10) =
           dVar7 + *(double *)(pFVar3 + lVar13 * 0x18 + 0x10);
      uVar9 = 0;
      if ((int)uStack_94 < (this->Normals).ArrayNum) {
        uVar9 = ~uStack_94 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      dVar18 = *(double *)(pFVar3 + lVar14 * 0x18 + 8);
      *(double *)(pFVar3 + lVar14 * 0x18) = dVar5 + *(double *)(pFVar3 + lVar14 * 0x18);
      *(double *)(pFVar3 + lVar14 * 0x18 + 8) = dVar6 + dVar18;
      *(double *)(pFVar3 + lVar14 * 0x18 + 0x10) =
           dVar7 + *(double *)(pFVar3 + lVar14 * 0x18 + 0x10);
      uVar9 = 0;
      if ((int)uVar10 < (this->Normals).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      uVar12 = uVar12 + 1;
      dVar18 = *(double *)(pFVar3 + lVar16 * 0x18 + 8);
      dVar17 = *(double *)(pFVar3 + lVar16 * 0x18 + 0x10);
      *(double *)(pFVar3 + lVar16 * 0x18) = dVar5 + *(double *)(pFVar3 + lVar16 * 0x18);
      *(double *)(pFVar3 + lVar16 * 0x18 + 8) = dVar6 + dVar18;
      *(double *)(pFVar3 + lVar16 * 0x18 + 0x10) = dVar7 + dVar17;
      dVar5 = __real_3ff0000000000000;
      if ((int)uVar15 <= (int)uVar12) break;
      while( true ) {
        lVar13 = *(longlong *)
                  ((pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar12 >> 9) * 8);
        if ((*(short *)(lVar13 + (ulonglong)(uVar12 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar13 + (ulonglong)(uVar12 & 0x1ff) * 2) != -1)) break;
        uVar12 = uVar12 + 1;
        if ((int)uVar15 <= (int)uVar12) goto joined_r0x000143496fa8;
      }
    }
    goto joined_r0x000143496fa8;
  }
  pFVar2 = this->Mesh;
  uVar12 = 0;
  uVar15 = (pFVar2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar2->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((uVar15 != 0) &&
     (pFVar3 = (pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar12 = 1;
    bVar8 = uVar15 == 1;
    if ((int)uVar15 < 2) goto LAB_1434972c9;
    do {
      lVar13 = *(longlong *)(pFVar3 + (ulonglong)(uVar12 >> 9) * 8);
      if ((*(short *)(lVar13 + (ulonglong)(uVar12 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar13 + (ulonglong)(uVar12 & 0x1ff) * 2) != -1)) break;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar15);
  }
  bVar8 = uVar12 == uVar15;
LAB_1434972c9:
  if (!bVar8) {
LAB_1434972e0:
    do {
      uVar10 = 0;
      if ((int)uVar12 < (this->Normals).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar13 = (longlong)(int)uVar12;
      pFVar3 = (this_00->AllocatorInstance).Data;
      dVar6 = *(double *)(pFVar3 + lVar13 * 0x18);
      dVar7 = *(double *)(pFVar3 + lVar13 * 0x18 + 8);
      dVar18 = *(double *)(pFVar3 + lVar13 * 0x18 + 0x10);
      auVar19._0_8_ = dVar18 * dVar18;
      auVar19._8_8_ = 0;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = dVar7 * dVar7 + dVar6 * dVar6 + auVar19._0_8_;
      auVar20 = sqrtpd(auVar19,auVar20);
      if (auVar20._0_8_ <= 0.0) {
        dVar18 = 0.0;
        dVar7 = 0.0;
        dVar17 = 0.0;
      }
      else {
        dVar17 = dVar5 / auVar20._0_8_;
        dVar18 = dVar17 * dVar18;
        dVar7 = dVar17 * dVar7;
        dVar17 = dVar17 * dVar6;
      }
      *(double *)(pFVar3 + lVar13 * 0x18) = dVar17;
      uVar12 = uVar12 + 1;
      *(double *)(pFVar3 + lVar13 * 0x18 + 8) = dVar7;
      *(double *)(pFVar3 + lVar13 * 0x18 + 0x10) = dVar18;
      if ((int)uVar12 < (int)uVar15) {
        do {
          lVar13 = *(longlong *)
                    ((pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar12 >> 9) * 8);
          if ((*(short *)(lVar13 + (ulonglong)(uVar12 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar13 + (ulonglong)(uVar12 & 0x1ff) * 2) != -1)) goto LAB_1434972e0;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar15);
      }
    } while (uVar12 != uVar15);
  }
  return;
}

// Compute_Overlay_FaceAvg @ 143497410

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshNormals::Compute_Overlay_FaceAvg
          (FMeshNormals *this,TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          bool param_2,bool param_3)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_00;
  double *pdVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FDynamicMesh3 *pFVar6;
  FScriptContainerElement *pFVar7;
  FDynamicMesh3 *this_01;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  TVector<double> *pTVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double local_108;
  double dStack_100;
  double local_f8;
  TVector<double> local_f0 [7];
  
  if ((!param_3) && (param_2)) {
    Compute_Overlay_FaceAvg_AreaWeighted(this,param_1);
    return;
  }
  this_00 = &this->Normals;
  iVar19 = *(int *)&param_1->field_0x8 * 0x200 + *(int *)&param_1->field_0xc;
  if ((this->Normals).ArrayNum < iVar19) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (this_00,iVar19,Default);
  }
  memset((this_00->AllocatorInstance).Data,0,(longlong)(this->Normals).ArrayNum * 0x18);
  dVar12 = __real_3ff0000000000000;
  pFVar6 = this->Mesh;
  uVar21 = (pFVar6->TriangleRefCounts).RefCounts.CurBlockUsed +
           (pFVar6->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar20 = 0;
  if (((uVar21 != 0) &&
      (pFVar7 = (pFVar6->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar20 = 0,
      0xfffd < (ushort)(**(short **)pFVar7 - 1U))) && (uVar20 = 1, 1 < (int)uVar21)) {
    do {
      lVar22 = *(longlong *)(pFVar7 + (ulonglong)(uVar20 >> 9) * 8);
      if ((*(short *)(lVar22 + (ulonglong)(uVar20 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar22 + (ulonglong)(uVar20 & 0x1ff) * 2) != -1)) break;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < (int)uVar21);
  }
  if (uVar20 != uVar21) {
    uVar32 = (undefined4)__real_3fe0000000000000;
    uVar33 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
LAB_143497590:
    do {
      lVar22 = *(longlong *)&param_1->field_0x78;
      uVar4 = uVar20 * 3;
      uVar15 = *(uint *)(*(longlong *)(lVar22 + (ulonglong)(uVar4 >> 9) * 8) +
                        (ulonglong)(uVar4 & 0x1ff) * 4);
      lVar24 = (longlong)(int)uVar15;
      uVar3 = *(uint *)(*(longlong *)(lVar22 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                       (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
      lVar23 = (longlong)(int)uVar3;
      uVar4 = *(uint *)(*(longlong *)(lVar22 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                       (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
      lVar22 = (longlong)(int)uVar4;
      if (uVar15 != 0xffffffff) {
        this_01 = this->Mesh;
        uVar16 = (ulonglong)(uVar20 & 0x1ff);
        lVar8 = *(longlong *)
                 ((this_01->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8)
        ;
        pFVar7 = (this_01->Vertices).Blocks.AllocatorInstance.Data;
        uVar14 = *(uint *)(lVar8 + uVar16 * 0xc);
        uVar18 = (ulonglong)(uVar14 & 0x1ff);
        pdVar1 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar14 >> 9) * 8) + uVar18 * 0x18);
        dVar11 = *pdVar1;
        dVar31 = pdVar1[1];
        dVar25 = *(double *)
                  (*(longlong *)(pFVar7 + (ulonglong)(uVar14 >> 9) * 8) + 0x10 + uVar18 * 0x18);
        uVar14 = *(uint *)(lVar8 + 4 + uVar16 * 0xc);
        uVar18 = (ulonglong)(uVar14 & 0x1ff);
        pdVar1 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar14 >> 9) * 8) + uVar18 * 0x18);
        uVar5 = *(uint *)(lVar8 + 8 + uVar16 * 0xc);
        dVar10 = *pdVar1 - dVar11;
        dVar30 = *(double *)
                  (*(longlong *)(pFVar7 + (ulonglong)(uVar14 >> 9) * 8) + 0x10 + uVar18 * 0x18) -
                 dVar25;
        dVar26 = pdVar1[1] - dVar31;
        uVar16 = (ulonglong)(uVar5 & 0x1ff);
        local_f0[0].field0_0x0._16_8_ =
             *(double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar16 * 0x18)
        ;
        pdVar1 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar5 >> 9) * 8) + uVar16 * 0x18);
        dVar25 = (double)local_f0[0].field0_0x0._16_8_ - dVar25;
        dVar11 = *pdVar1 - dVar11;
        dVar31 = pdVar1[1] - dVar31;
        dVar29 = dVar25 * dVar10 - dVar11 * dVar30;
        dVar25 = dVar31 * dVar30 - dVar25 * dVar26;
        dVar10 = dVar11 * dVar26 - dVar31 * dVar10;
        dVar26 = SQRT(dVar25 * dVar25 + dVar29 * dVar29 + dVar10 * dVar10);
        if (dVar26 <= 0.0) {
          dVar26 = 0.0;
          dVar10 = 0.0;
          dVar29 = 0.0;
          dVar11 = 0.0;
        }
        else {
          dVar11 = dVar12 / dVar26;
          dVar10 = dVar11 * dVar10;
          dVar29 = dVar11 * dVar29;
          dVar11 = dVar11 * dVar25;
        }
        dVar26 = dVar26 * (double)CONCAT44(uVar33,uVar32);
        local_108 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dStack_100 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_f8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        if (param_3) {
          pTVar17 = FDynamicMesh3::GetTriInternalAnglesR(this_01,local_f0,uVar20);
          local_108 = (pTVar17->field0_0x0)._s_0.X;
          dStack_100 = (pTVar17->field0_0x0)._s_0.Y;
          local_f8 = (pTVar17->field0_0x0)._s_0.Z;
        }
        if (param_2) {
          local_108 = local_108 * dVar26;
          dStack_100 = dStack_100 * dVar26;
          local_f8 = local_f8 * dVar26;
        }
        uVar14 = 0;
        if ((int)uVar15 < (this->Normals).ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar7 = (this_00->AllocatorInstance).Data;
        dVar25 = *(double *)(pFVar7 + lVar24 * 0x18 + 8);
        dVar26 = *(double *)(pFVar7 + lVar24 * 0x18 + 8 + 8);
        *(double *)(pFVar7 + lVar24 * 0x18) =
             local_108 * dVar11 + *(double *)(pFVar7 + lVar24 * 0x18);
        *(double *)(pFVar7 + lVar24 * 0x18 + 8) = local_108 * dVar29 + dVar25;
        *(double *)(pFVar7 + lVar24 * 0x18 + 8 + 8) = local_108 * dVar10 + dVar26;
        uVar15 = 0;
        if ((int)uVar3 < (this->Normals).ArrayNum) {
          uVar15 = ~uVar3 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar7 = (this_00->AllocatorInstance).Data;
        *(double *)(pFVar7 + lVar23 * 0x18) =
             dStack_100 * dVar11 + *(double *)(pFVar7 + lVar23 * 0x18);
        dVar25 = *(double *)(pFVar7 + lVar23 * 0x18 + 8 + 8);
        *(double *)(pFVar7 + lVar23 * 0x18 + 8) =
             dStack_100 * dVar29 + *(double *)(pFVar7 + lVar23 * 0x18 + 8);
        *(double *)(pFVar7 + lVar23 * 0x18 + 8 + 8) = dStack_100 * dVar10 + dVar25;
        uVar15 = 0;
        if ((int)uVar4 < (this->Normals).ArrayNum) {
          uVar15 = ~uVar4 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar7 = (this_00->AllocatorInstance).Data;
        uVar32 = (undefined4)__real_3fe0000000000000;
        uVar33 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
        *(double *)(pFVar7 + lVar22 * 0x18) =
             local_f8 * dVar11 + *(double *)(pFVar7 + lVar22 * 0x18);
        dVar25 = *(double *)(pFVar7 + lVar22 * 0x18 + 8 + 8);
        *(double *)(pFVar7 + lVar22 * 0x18 + 8) =
             local_f8 * dVar29 + *(double *)(pFVar7 + lVar22 * 0x18 + 8);
        *(double *)(pFVar7 + lVar22 * 0x18 + 8 + 8) = local_f8 * dVar10 + dVar25;
      }
      uVar20 = uVar20 + 1;
      if ((int)uVar20 < (int)uVar21) {
        do {
          lVar22 = *(longlong *)
                    ((pFVar6->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar20 >> 9) * 8);
          if ((*(short *)(lVar22 + (ulonglong)(uVar20 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar22 + (ulonglong)(uVar20 & 0x1ff) * 2) != -1)) goto LAB_143497590;
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)uVar21);
      }
    } while (uVar20 != uVar21);
  }
  uVar20 = 0;
  uVar21 = *(int *)&param_1->field_0x8 * 0x200 + *(int *)&param_1->field_0xc;
  if ((uVar21 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)&param_1->field_0x10 - 1U))) {
    uVar20 = 1;
    bVar13 = uVar21 == 1;
    if ((int)uVar21 < 2) goto LAB_143497a9b;
    do {
      sVar2 = *(short *)((*(undefined8 **)&param_1->field_0x10)[uVar20 >> 9] +
                        (ulonglong)(uVar20 & 0x1ff) * 2);
      if ((sVar2 != 0) && (sVar2 != -1)) break;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < (int)uVar21);
  }
  bVar13 = uVar20 == uVar21;
LAB_143497a9b:
  if (!bVar13) {
LAB_143497ab0:
    do {
      uVar15 = 0;
      if ((int)uVar20 < (this->Normals).ArrayNum) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar22 = (longlong)(int)uVar20;
      pFVar7 = (this->Normals).AllocatorInstance.Data;
      dVar25 = *(double *)(pFVar7 + lVar22 * 0x18);
      dVar10 = *(double *)(pFVar7 + lVar22 * 0x18 + 8);
      dVar26 = *(double *)(pFVar7 + lVar22 * 0x18 + 0x10);
      auVar27._0_8_ = dVar26 * dVar26;
      auVar27._8_8_ = 0;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = dVar10 * dVar10 + dVar25 * dVar25 + auVar27._0_8_;
      auVar28 = sqrtpd(auVar27,auVar28);
      if (auVar28._0_8_ <= 0.0) {
        dVar26 = 0.0;
        dVar10 = 0.0;
        dVar11 = 0.0;
      }
      else {
        dVar11 = dVar12 / auVar28._0_8_;
        dVar26 = dVar11 * dVar26;
        dVar10 = dVar11 * dVar10;
        dVar11 = dVar11 * dVar25;
      }
      *(double *)(pFVar7 + lVar22 * 0x18) = dVar11;
      uVar20 = uVar20 + 1;
      *(double *)(pFVar7 + lVar22 * 0x18 + 8) = dVar10;
      *(double *)(pFVar7 + lVar22 * 0x18 + 0x10) = dVar26;
      if ((int)uVar20 < (int)uVar21) {
        do {
          lVar22 = *(longlong *)(*(longlong *)&param_1->field_0x10 + (ulonglong)(uVar20 >> 9) * 8);
          if ((*(short *)(lVar22 + (ulonglong)(uVar20 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar22 + (ulonglong)(uVar20 & 0x1ff) * 2) != -1)) goto LAB_143497ab0;
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)uVar21);
      }
    } while (uVar20 != uVar21);
  }
  return;
}

// Compute_Overlay_FaceAvg_AreaWeighted @ 143497bf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshNormals::Compute_Overlay_FaceAvg_AreaWeighted
          (FMeshNormals *this,TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_00;
  short sVar1;
  uint uVar2;
  uint uVar3;
  FDynamicMesh3 *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double local_res10;
  TVector<double>_u_0 local_98;
  TVector<double> local_80 [3];
  
  iVar15 = *(int *)&param_1->field_0xc + *(int *)&param_1->field_0x8 * 0x200;
  this_00 = &this->Normals;
  if ((this->Normals).ArrayNum < iVar15) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (this_00,iVar15,Default);
  }
  memset((this_00->AllocatorInstance).Data,0,(longlong)(this->Normals).ArrayNum * 0x18);
  pFVar4 = this->Mesh;
  uVar18 = (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed +
           (pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar16 = 0;
  dVar9 = __real_3ff0000000000000;
  if (((uVar18 != 0) &&
      (pFVar5 = (pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar16 = 0,
      0xfffd < (ushort)(**(short **)pFVar5 - 1U))) && (uVar16 = 1, 1 < (int)uVar18)) {
    do {
      lVar20 = *(longlong *)(pFVar5 + (ulonglong)(uVar16 >> 9) * 8);
      if ((*(short *)(lVar20 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar20 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) break;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)uVar18);
  }
joined_r0x000143497cc4:
  __real_3ff0000000000000 = dVar9;
  if (uVar16 != uVar18) {
    while( true ) {
      FDynamicMesh3::GetTriInfo
                (this->Mesh,uVar16,(TVector<double> *)&local_98._s_0,&local_res10,local_80);
      lVar20 = *(longlong *)&param_1->field_0x78;
      uVar3 = uVar16 * 3;
      dVar9 = local_98._s_0.X * local_res10;
      dVar10 = local_98._s_0.Y * local_res10;
      dVar11 = local_98._s_0.Z * local_res10;
      uVar14 = *(uint *)(*(longlong *)(lVar20 + (ulonglong)(uVar3 >> 9) * 8) +
                        (ulonglong)(uVar3 & 0x1ff) * 4);
      lVar19 = (longlong)(int)uVar14;
      uVar2 = *(uint *)(*(longlong *)(lVar20 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                       (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
      lVar17 = (longlong)(int)uVar2;
      uVar3 = *(uint *)(*(longlong *)(lVar20 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                       (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
      lVar20 = (longlong)(int)uVar3;
      local_98._s_0.X = dVar9;
      local_98._s_0.Y = dVar10;
      local_98._s_0.Z = dVar11;
      if (uVar14 != 0xffffffff) {
        uVar13 = 0;
        if ((int)uVar14 < (this->Normals).ArrayNum) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this_00->AllocatorInstance).Data;
        *(double *)(pFVar5 + lVar19 * 0x18) = dVar9 + *(double *)(pFVar5 + lVar19 * 0x18);
        dVar22 = dVar11 + *(double *)(pFVar5 + lVar19 * 0x18 + 8 + 8);
        auVar24._8_4_ = SUB84(dVar22,0);
        auVar24._0_8_ = dVar10 + *(double *)(pFVar5 + lVar19 * 0x18 + 8);
        auVar24._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        *(undefined1 (*) [16])(pFVar5 + lVar19 * 0x18 + 8) = auVar24;
      }
      if (uVar2 != 0xffffffff) {
        uVar14 = 0;
        if ((int)uVar2 < (this->Normals).ArrayNum) {
          uVar14 = ~uVar2 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this_00->AllocatorInstance).Data;
        *(double *)(pFVar5 + lVar17 * 0x18) = dVar9 + *(double *)(pFVar5 + lVar17 * 0x18);
        dVar22 = dVar11 + *(double *)(pFVar5 + lVar17 * 0x18 + 8 + 8);
        auVar7._8_4_ = SUB84(dVar22,0);
        auVar7._0_8_ = dVar10 + *(double *)(pFVar5 + lVar17 * 0x18 + 8);
        auVar7._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        *(undefined1 (*) [16])(pFVar5 + lVar17 * 0x18 + 8) = auVar7;
      }
      if (uVar3 != 0xffffffff) {
        uVar14 = 0;
        if ((int)uVar3 < (this->Normals).ArrayNum) {
          uVar14 = ~uVar3 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this_00->AllocatorInstance).Data;
        *(double *)(pFVar5 + lVar20 * 0x18) = dVar9 + *(double *)(pFVar5 + lVar20 * 0x18);
        dVar9 = *(double *)(pFVar5 + lVar20 * 0x18 + 8 + 8);
        *(double *)(pFVar5 + lVar20 * 0x18 + 8) = dVar10 + *(double *)(pFVar5 + lVar20 * 0x18 + 8);
        *(double *)(pFVar5 + lVar20 * 0x18 + 8 + 8) = dVar11 + dVar9;
      }
      uVar16 = uVar16 + 1;
      dVar9 = __real_3ff0000000000000;
      if ((int)uVar18 <= (int)uVar16) break;
      while( true ) {
        lVar20 = *(longlong *)
                  ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar16 >> 9) * 8);
        if ((*(short *)(lVar20 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar20 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) break;
        uVar16 = uVar16 + 1;
        if ((int)uVar18 <= (int)uVar16) goto joined_r0x000143497cc4;
      }
    }
    goto joined_r0x000143497cc4;
  }
  uVar16 = 0;
  uVar18 = *(int *)&param_1->field_0xc + *(int *)&param_1->field_0x8 * 0x200;
  if ((uVar18 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)&param_1->field_0x10 - 1U))) {
    uVar16 = 1;
    bVar12 = uVar18 == 1;
    if ((int)uVar18 < 2) goto LAB_143498028;
    do {
      sVar1 = *(short *)((*(undefined8 **)&param_1->field_0x10)[uVar16 >> 9] +
                        (ulonglong)(uVar16 & 0x1ff) * 2);
      if ((sVar1 != 0) && (sVar1 != -1)) break;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)uVar18);
  }
  bVar12 = uVar16 == uVar18;
LAB_143498028:
  if (!bVar12) {
LAB_143498040:
    do {
      uVar14 = 0;
      if ((int)uVar16 < (this->Normals).ArrayNum) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar20 = (longlong)(int)uVar16;
      pFVar5 = (this->Normals).AllocatorInstance.Data;
      dVar10 = *(double *)(pFVar5 + lVar20 * 0x18);
      dVar11 = *(double *)(pFVar5 + lVar20 * 0x18 + 8);
      dVar22 = *(double *)(pFVar5 + lVar20 * 0x18 + 0x10);
      auVar23._0_8_ = dVar22 * dVar22;
      auVar23._8_8_ = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar11 * dVar11 + dVar10 * dVar10 + auVar23._0_8_;
      auVar24 = sqrtpd(auVar23,auVar8);
      if (auVar24._0_8_ <= 0.0) {
        dVar22 = 0.0;
        dVar11 = 0.0;
        dVar21 = 0.0;
      }
      else {
        dVar21 = dVar9 / auVar24._0_8_;
        dVar22 = dVar21 * dVar22;
        dVar11 = dVar21 * dVar11;
        dVar21 = dVar21 * dVar10;
      }
      *(double *)(pFVar5 + lVar20 * 0x18) = dVar21;
      uVar16 = uVar16 + 1;
      *(double *)(pFVar5 + lVar20 * 0x18 + 8) = dVar11;
      *(double *)(pFVar5 + lVar20 * 0x18 + 0x10) = dVar22;
      if ((int)uVar16 < (int)uVar18) {
        do {
          lVar20 = *(longlong *)(*(longlong *)&param_1->field_0x10 + (ulonglong)(uVar16 >> 9) * 8);
          if ((*(short *)(lVar20 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar20 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) goto LAB_143498040;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)uVar18);
      }
    } while (uVar16 != uVar18);
  }
  return;
}

// Compute_Triangle @ 143498170

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FMeshNormals::Compute_Triangle(FMeshNormals *this)

{
  <lambda_1> <Var1;
  int iVar2;
  FMeshNormals *local_res8;
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FMeshNormals **local_10;
  
  iVar2 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
          (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((this->Normals).ArrayNum < iVar2) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Normals,iVar2,Default);
  }
  local_28.DataPtr = (void **)0x0;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshNormals::Compute_Triangle'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = &local_res8;
  local_28.ArrayNum = 0;
  local_res8._0_1_ = SUB81(this,0);
  <Var1 = local_res8._0_1_;
  local_res8 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar2,1,(TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,None,
             &local_28);
  return;
}

// CopyToOverlay @ 14349c460

void __thiscall
UE::Geometry::FMeshNormals::CopyToOverlay
          (FMeshNormals *this,TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          bool param_2)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  
  fVar10 = __real_3f800000;
  if (param_2) {
    fVar10 = __real_bf800000;
  }
  uVar9 = *(int *)&param_1->field_0x8 * 0x200 + *(int *)&param_1->field_0xc;
  uVar8 = 0;
  if ((uVar9 != 0) &&
     (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)&param_1->field_0x10 - 1U))) {
    uVar7 = 1;
    uVar8 = 1;
    if (1 < (int)uVar9) {
      do {
        lVar6 = (*(undefined8 **)&param_1->field_0x10)[uVar7 >> 9];
        if ((*(short *)(lVar6 + (ulonglong)(uVar7 & 0x1ff) * 2) != 0) &&
           (uVar8 = uVar7, *(short *)(lVar6 + (ulonglong)(uVar7 & 0x1ff) * 2) != -1)) break;
        uVar7 = uVar7 + 1;
        uVar8 = uVar7;
      } while ((int)uVar7 < (int)uVar9);
    }
  }
joined_r0x00014349c4f8:
  do {
    if (uVar8 == uVar9) {
      return;
    }
    while( true ) {
      uVar7 = 0;
      if ((int)uVar8 < (this->Normals).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = uVar8 * 3;
      lVar6 = (longlong)(int)uVar8;
      uVar8 = uVar8 + 1;
      pFVar3 = (this->Normals).AllocatorInstance.Data;
      dVar1 = *(double *)(pFVar3 + lVar6 * 0x18 + 8);
      dVar2 = *(double *)(pFVar3 + lVar6 * 0x18 + 0x10);
      *(float *)(*(longlong *)(*(longlong *)&param_1->field_0x48 + (ulonglong)(uVar7 >> 9) * 8) +
                (ulonglong)(uVar7 & 0x1ff) * 4) = (float)*(double *)(pFVar3 + lVar6 * 0x18) * fVar10
      ;
      *(float *)(*(longlong *)(*(longlong *)&param_1->field_0x48 + (ulonglong)(uVar7 + 1 >> 9) * 8)
                + (ulonglong)(uVar7 + 1 & 0x1ff) * 4) = (float)dVar1 * fVar10;
      *(float *)(*(longlong *)(*(longlong *)&param_1->field_0x48 + (ulonglong)(uVar7 + 2 >> 9) * 8)
                + (ulonglong)(uVar7 + 2 & 0x1ff) * 4) = (float)dVar2 * fVar10;
      if ((int)uVar9 <= (int)uVar8) break;
      while( true ) {
        if ((*(short *)(*(longlong *)
                         (*(longlong *)&param_1->field_0x10 + (ulonglong)(uVar8 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)
                        (*(longlong *)&param_1->field_0x10 + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 2) != -1)) break;
        uVar8 = uVar8 + 1;
        if ((int)uVar9 <= (int)uVar8) goto joined_r0x00014349c4f8;
      }
    }
  } while( true );
}

// CopyToVertexNormals @ 14349ce20

void __thiscall
UE::Geometry::FMeshNormals::CopyToVertexNormals
          (FMeshNormals *this,FDynamicMesh3 *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  FDynamicMesh3 *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  TVector<float>_u_0 local_48 [2];
  
  if ((param_1->VertexNormals).bIsSet == false) {
    local_48[0]._0_8_ = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
    local_48[0]._s_0.Z = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
    FDynamicMesh3::EnableVertexNormals(param_1,(TVector<float> *)&local_48[0]._s_0);
  }
  fVar15 = __real_3f800000;
  if (param_2) {
    fVar15 = __real_bf800000;
  }
  uVar10 = 0;
  iVar9 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
          (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((this->Normals).ArrayNum < iVar9) {
    iVar9 = (this->Normals).ArrayNum;
  }
  lVar11 = (longlong)iVar9;
  if (0 < iVar9) {
    lVar12 = 0;
    do {
      pFVar3 = this->Mesh;
      if ((-1 < (int)uVar10) &&
         ((int)uVar10 <
          (int)((pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed))) {
        uVar13 = uVar10 >> 9;
        if (((ushort)(*(short *)(*(longlong *)
                                  ((pFVar3->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                  + (ulonglong)uVar13 * 8) + (ulonglong)(uVar10 & 0x1ff) * 2) - 1U)
             < 0xfffe) &&
           ((int)uVar10 <
            (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) {
          uVar14 = (ulonglong)(uVar10 & 0x1ff);
          if ((ushort)(*(short *)(*(longlong *)
                                   ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + (ulonglong)uVar13 * 8) + uVar14 * 2) - 1U) < 0xfffe) {
            uVar8 = 0;
            if ((int)uVar10 < (this->Normals).ArrayNum) {
              uVar8 = ~uVar10 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar4 = (this->Normals).AllocatorInstance.Data;
            dVar1 = *(double *)(pFVar4 + lVar12 + 8);
            dVar2 = *(double *)(pFVar4 + lVar12 + 0x10);
            if ((param_1->VertexNormals).bIsSet != false) {
              lVar5 = *(longlong *)
                       ((param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                       (ulonglong)uVar13 * 8);
              *(float *)(lVar5 + uVar14 * 0xc) = (float)*(double *)(pFVar4 + lVar12) * fVar15;
              *(float *)(lVar5 + 4 + uVar14 * 0xc) = (float)dVar1 * fVar15;
              *(float *)(lVar5 + 8 + uVar14 * 0xc) = (float)dVar2 * fVar15;
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x18;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// GetVertexWeightsOnTriangle @ 1434cb8f0

TVector<double> * __cdecl
UE::Geometry::FMeshNormals::GetVertexWeightsOnTriangle
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,double param_3
          ,bool param_4,bool param_5)

{
  TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVertexWeightsOnTriangle
            (__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5);
  return __return_storage_ptr__;
}

// InitializeMeshToPerTriangleNormals @ 1434d01d0

void __cdecl UE::Geometry::FMeshNormals::InitializeMeshToPerTriangleNormals(FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FDynamicMeshAttributeSet *pFVar3;
  
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    FDynamicMesh3::EnableAttributes(param_1);
  }
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar2 = (FDynamicMeshAttributeSet *)0x0;
  pFVar3 = pFVar2;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar3 = pFVar1;
  }
  if (0 < (pFVar3->NormalLayers).Array.ArrayNum) {
    pFVar2 = *(FDynamicMeshAttributeSet **)(pFVar3->NormalLayers).Array.AllocatorInstance.Data;
  }
  InitializeOverlayToPerTriangleNormals
            ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar2);
  return;
}

// InitializeOverlayRegionToPerVertexNormals @ 1434d0bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Geometry::FMeshNormals::InitializeOverlayRegionToPerVertexNormals
          (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  uint *puVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  FDynamicMesh3 *this;
  TDynamicMeshOverlay<float,3> *this_00;
  bool bVar6;
  int iVar7;
  int iVar8;
  TArrayView<int_const_,int> *pTVar9;
  ulonglong uVar10;
  byte bVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  ForElementType<FSetElementId> FVar14;
  uint uVar15;
  FDynamicMesh3 *pFVar16;
  uint *puVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  ulonglong uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auStackY_318 [32];
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [8];
  undefined1 local_2d8 [4];
  uint local_2d4;
  FIndex3i_u_0 local_2d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2c0;
  int local_2b0 [2];
  FDynamicMesh3 *local_2a8;
  int local_2a0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_298;
  int local_288;
  uint uStack_284;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_280;
  undefined4 local_278;
  int iStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  int local_268;
  uint uStack_264;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_260;
  undefined4 local_258;
  int iStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  TDynamicMeshOverlay<float,3> *local_248;
  float local_240;
  float local_23c;
  float local_238;
  undefined4 local_234;
  int local_230;
  undefined4 local_22c;
  int local_228;
  undefined1 local_224 [20];
  double local_210;
  double dStack_208;
  double local_200;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f0;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c8;
  FSparseArrayAllocationInfo local_1a8;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  code *local_188;
  undefined1 *local_180;
  code *local_178;
  code ***local_170;
  int *local_168;
  uint *local_160;
  code **local_158;
  FDynamicMesh3 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  int *local_138;
  double *local_130;
  TArrayView<int_const_,int> local_128;
  TArrayView<int_const_,int> local_118;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_108;
  FScriptContainerElement local_d0 [8];
  ForAnyElementType local_c8;
  uint local_c0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_2a8 = *(FDynamicMesh3 **)param_1;
  local_248 = (TDynamicMeshOverlay<float,3> *)param_1;
  local_224._12_8_ = param_2;
  pTVar9 = TArrayView<int_const_,int>::
           TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                     (&local_118,param_2);
  puVar17 = (uint *)pTVar9->DataPtr;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  local_108.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar18 = (uint)*(undefined8 *)&pTVar9->ArrayNum;
  local_108.AllocationFlags.NumBits = 0;
  local_108.AllocationFlags.MaxBits = 0x80;
  local_108.FirstFreeIndex = -1;
  local_108.NumFreeIndices = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  if (uVar18 == 0) goto LAB_1434d0ed2;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_108,uVar18);
  uVar15 = 1;
  if (3 < uVar18) {
    uVar21 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_234 = (undefined4)lVar13;
    uVar15 = 1 << ((byte)lVar13 & 0x1f);
  }
  if ((local_c0 != 0) && ((int)uVar15 <= (int)local_c0)) goto LAB_1434d0ed2;
  local_c0 = uVar15;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
  }
  if (uVar15 != 0) {
    uVar20 = uVar15;
    if (uVar15 < 2) {
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        uVar20 = 0;
        goto LAB_1434d0d16;
      }
    }
    else {
LAB_1434d0d16:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,uVar20,4);
    }
    if (0 < (int)uVar15) {
      uVar23 = (ulonglong)uVar15;
      uVar21 = 0;
      do {
        FVar12.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_c8.Data;
        }
        uVar10 = uVar21 & (longlong)(int)uVar15 - 1U;
        uVar21 = uVar21 + 1;
        *(undefined4 *)(FVar12.Data + uVar10 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (local_c0 != 0) {
    pTStack_280 = &local_108.AllocationFlags;
    uStack_284 = 1;
    local_288 = 0;
    iStack_274 = 0;
    iStack_270 = 0;
    if (local_108.AllocationFlags.NumBits != 0) {
      FVar22 = (ForElementType<unsigned_int>)&local_108.AllocationFlags;
      if (local_108.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_108.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar15 = *(uint *)FVar22;
      iStack_270 = 0;
      local_288 = 0;
      while (uVar15 == 0) {
        iStack_270 = iStack_270 + 0x20;
        lVar13 = (longlong)local_288;
        local_288 = local_288 + 1;
        if ((int)(local_108.AllocationFlags.NumBits + -1 +
                 (local_108.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_288)
        goto LAB_1434d0e2d;
        uVar15 = *(uint *)((uchar *)((longlong)FVar22 + 4) + lVar13 * 4);
      }
      uStack_284 = -uVar15 & uVar15;
      uVar21 = (ulonglong)uStack_284 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_230 = (int)lVar13;
      iStack_274 = local_230 + -1 + iStack_270;
      if (local_108.AllocationFlags.NumBits < iStack_274) {
LAB_1434d0e2d:
        iStack_274 = local_108.AllocationFlags.NumBits;
      }
    }
    local_278 = 0xffffffff;
    local_1f8 = &local_108;
    local_1f0._padding_ = CONCAT44(uStack_284,local_288);
    local_1f0.CurrentBitIndex = iStack_274;
    local_1f0.UnvisitedBitMask = 0xffffffff;
    local_1f0._28_4_ = uStack_26c;
    local_1f0.BaseBitIndex = iStack_270;
    local_1f0.Array = pTStack_280;
    iVar7 = iStack_274;
    if (iStack_274 < local_108.AllocationFlags.NumBits) {
      do {
        pFVar3 = (local_1f8->Data).AllocatorInstance.Data;
        lVar13 = (longlong)iVar7;
        uVar15 = local_c0 - 1 & *(uint *)(pFVar3 + lVar13 * 0xc);
        *(uint *)(pFVar3 + lVar13 * 0xc + 8) = uVar15;
        FVar12.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_c8.Data;
        }
        uVar21 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar15;
        *(undefined4 *)(pFVar3 + lVar13 * 0xc + 4) = *(undefined4 *)(FVar12.Data + uVar21 * 4);
        *(int *)(FVar12.Data + uVar21 * 4) = iVar7;
        local_1f0.UnvisitedBitMask = local_1f0.UnvisitedBitMask & ~local_1f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f0);
        iVar7 = local_1f0.CurrentBitIndex;
      } while (local_1f0.CurrentBitIndex < (local_1f0.Array)->NumBits);
    }
  }
LAB_1434d0ed2:
  puVar1 = puVar17 + (int)uVar18;
  iVar7 = local_108.FirstFreeIndex;
  do {
    local_108.FirstFreeIndex = iVar7;
    if (puVar17 == puVar1) {
      local_198 = (param_2->AllocatorInstance).Data;
      iVar7 = param_2->ArrayNum;
      local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_298.ArrayNum = 0;
      local_298.ArrayMax = 0;
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = local_2a8;
      local_128._12_4_ = uStack_18c;
      local_128.ArrayNum = iVar7;
      local_128.DataPtr = (int *)local_198;
      iStack_190 = iVar7;
      TriangleToVertexIDs(local_2a8,&local_128,&local_298);
      iVar7 = local_298.ArrayNum;
      local_224._4_8_ = &local_108;
      local_b8.Elements._0_8_ = 0;
      local_b8.Elements._8_8_ = 0;
      local_b8.Elements._32_8_ = 0;
      local_b8.Elements._40_4_ = 0;
      local_b8.Elements._44_4_ = 0x80;
      local_b8.Elements._48_4_ = 0xffffffff;
      local_b8.Elements._52_4_ = 0;
      local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_b8.HashSize = 0;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
                (&local_b8,local_298.ArrayNum);
      local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2c0.ArrayNum = 0;
      local_2c0.ArrayMax = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_2c0,iVar7,Default);
      this = local_2a8;
      dVar5 = __real_3ff0000000000000;
      local_2d4 = 0;
      if (0 < iVar7) {
        do {
          uVar18 = local_2d4;
          uVar15 = 0;
          if ((int)local_2d4 < local_298.ArrayNum) {
            uVar15 = ~local_2d4 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_200 = 0.0;
          local_188 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::FMeshNormals::InitializeOverlayRegionToPerVertexNormals'::__l2::<lambda_1>,bool,int>
                      ::Call;
          local_2e0[0] = 1;
          local_2b0[0] = *(int *)(local_298.AllocatorInstance.Data + (longlong)(int)uVar18 * 4);
          local_180 = local_224 + 4;
          local_158 = &local_188;
          local_148 = local_2e8;
          local_140 = local_2e0;
          local_138 = local_2a0;
          local_130 = &local_210;
          local_170 = &local_158;
          local_2e8[0] = 1;
          local_210 = 0.0;
          dStack_208 = 0.0;
          local_150 = this;
          local_178 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::FMeshNormals::ComputeVertexNormal'::__l2::<lambda_1>,void,int>
                      ::Call;
          local_2a0[0] = local_2b0[0];
          FDynamicMesh3::EnumerateVertexTriangles
                    (this,local_2b0[0],(TFunctionRef<void___cdecl(int)> *)&local_178);
          auVar25._0_8_ = local_200 * local_200;
          auVar25._8_8_ = 0;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = dStack_208 * dStack_208 + local_210 * local_210 + auVar25._0_8_;
          auVar26 = sqrtpd(auVar25,auVar26);
          if (auVar26._0_8_ <= 0.0) {
            dVar27 = 0.0;
            dVar28 = 0.0;
            dVar24 = 0.0;
          }
          else {
            dVar24 = dVar5 / auVar26._0_8_;
            dVar27 = local_210 * dVar24;
            dVar28 = dStack_208 * dVar24;
            dVar24 = local_200 * dVar24;
          }
          local_240 = (float)dVar27;
          local_238 = (float)dVar24;
          local_23c = (float)dVar28;
          iVar8 = TDynamicMeshOverlay<float,3>::AppendElement
                            ((TDynamicMeshOverlay<float,3> *)param_1,&local_240);
          lVar13 = (longlong)(int)local_2d4;
          uVar18 = 0;
          if ((int)local_2d4 < local_2c0.ArrayNum) {
            uVar18 = ~local_2d4 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(int *)(local_2c0.AllocatorInstance.Data + lVar13 * 4) = iVar8;
          local_168 = local_2b0;
          local_160 = &local_2d4;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    (&local_b8,(TPairInitializer<int_const_&,int_const_&> *)local_224,
                     (bool *)&local_168);
          local_2d4 = local_2d4 + 1;
          pFVar16 = local_2a8;
          param_2 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_224._12_8_;
        } while ((int)local_2d4 < iVar7);
      }
      this_00 = local_248;
      pFVar19 = (param_2->AllocatorInstance).Data;
      iVar7 = param_2->ArrayNum;
      pFVar3 = pFVar19 + (longlong)iVar7 * 4;
      do {
        if (param_2->ArrayNum != iVar7) {
          local_2d8[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_2d8);
        }
        if (pFVar19 == pFVar3) {
          if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c0.AllocatorInstance.Data);
          }
          local_b8.HashSize = 0;
          if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_b8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_b8.Elements);
          if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.AllocatorInstance.Data);
          }
          local_c0 = 0;
          if (local_c8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&local_108);
          return;
        }
        uVar18 = *(uint *)pFVar19;
        lVar13 = *(longlong *)
                  ((pFVar16->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8
                  );
        local_2d0._0_8_ = *(undefined8 *)(lVar13 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
        local_2d0._s_0.C = *(uint *)(lVar13 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
        if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
          FVar14 = (ForElementType<FSetElementId>)&local_b8.Hash;
          if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar14 = local_b8.Hash.SecondaryData;
          }
          uVar15 = *(uint *)((longlong)FVar14 +
                            (ulonglong)(local_b8.HashSize - 1U & local_2d0._s_0.A) * 4);
          while (uVar15 != 0xffffffff) {
            puVar17 = (uint *)((longlong)(int)uVar15 * 0x10 + local_b8.Elements._0_8_);
            if (*puVar17 == local_2d0._s_0.A) {
              if (puVar17 != (uint *)0x0) goto LAB_1434d1767;
              goto LAB_1434d1741;
            }
            uVar15 = puVar17[2];
          }
        }
        puVar17 = (uint *)0x0;
LAB_1434d1741:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_1434d1767:
        uVar15 = puVar17[1];
        uVar20 = 0;
        if ((int)uVar15 < local_2c0.ArrayNum) {
          uVar20 = ~uVar15 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_2d0._s_0.A =
             *(undefined4 *)(local_2c0.AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
        if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
          FVar14 = (ForElementType<FSetElementId>)&local_b8.Hash;
          if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar14 = local_b8.Hash.SecondaryData;
          }
          uVar15 = *(uint *)((longlong)FVar14 +
                            (ulonglong)(local_b8.HashSize - 1U & local_2d0._s_0.B) * 4);
          while (uVar15 != 0xffffffff) {
            puVar17 = (uint *)((longlong)(int)uVar15 * 0x10 + local_b8.Elements._0_8_);
            if (*puVar17 == local_2d0._s_0.B) {
              if (puVar17 != (uint *)0x0) goto LAB_1434d1847;
              goto LAB_1434d1821;
            }
            uVar15 = puVar17[2];
          }
        }
        puVar17 = (uint *)0x0;
LAB_1434d1821:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_1434d1847:
        uVar15 = puVar17[1];
        uVar20 = 0;
        if ((int)uVar15 < local_2c0.ArrayNum) {
          uVar20 = ~uVar15 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_2d0._s_0.B =
             *(undefined4 *)(local_2c0.AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
        if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
          FVar14 = (ForElementType<FSetElementId>)&local_b8.Hash;
          if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar14 = local_b8.Hash.SecondaryData;
          }
          uVar15 = *(uint *)((longlong)FVar14 +
                            (ulonglong)(local_b8.HashSize - 1U & local_2d0._s_0.C) * 4);
          while (uVar15 != 0xffffffff) {
            puVar17 = (uint *)((longlong)(int)uVar15 * 0x10 + local_b8.Elements._0_8_);
            if (*puVar17 == local_2d0._s_0.C) {
              if (puVar17 != (uint *)0x0) goto LAB_1434d192a;
              goto LAB_1434d1904;
            }
            uVar15 = puVar17[2];
          }
        }
        puVar17 = (uint *)0x0;
LAB_1434d1904:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_1434d192a:
        uVar15 = puVar17[1];
        uVar20 = 0;
        if ((int)uVar15 < local_2c0.ArrayNum) {
          uVar20 = ~uVar15 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_2d0._s_0.C =
             *(undefined4 *)(local_2c0.AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
        TDynamicMeshOverlay<float,3>::SetTriangle(this_00,uVar18,(FIndex3i *)&local_2d0._s_0,true);
        pFVar19 = pFVar19 + 4;
        pFVar16 = local_2a8;
      } while( true );
    }
    if (local_108.NumFreeIndices == 0) {
      iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)&local_108,&local_108.Data.ArrayNum,
                         &local_108.Data.ArrayMax);
      iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_108.AllocationFlags,1);
      FVar22 = (ForElementType<unsigned_int>)&local_108.AllocationFlags;
      if (local_108.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_108.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      bVar11 = (byte)iVar8 & 0x1f;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0x1f;
        bVar11 = bVar11 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar22 + (longlong)(iVar8 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar11 & 0x1f));
    }
    else {
      local_108.NumFreeIndices = local_108.NumFreeIndices + -1;
      local_108.FirstFreeIndex =
           *(int *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar7 * 0xc + 4);
      if (local_108.NumFreeIndices != 0) {
        *(undefined4 *)
         (local_108.Data.AllocatorInstance.Data + (longlong)local_108.FirstFreeIndex * 0xc) =
             0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex(&local_108,&local_1a8,iVar7);
    if (local_1a8.Pointer != (uint *)0x0) {
      *(uint *)local_1a8.Pointer = *puVar17;
      *(uint *)((longlong)local_1a8.Pointer + 4) = 0xffffffff;
    }
    uVar18 = *(uint *)local_1a8.Pointer;
    if ((local_108.Data.ArrayNum - local_108.NumFreeIndices != 1) &&
       (local_108.Data.ArrayNum != local_108.NumFreeIndices)) {
      FVar12.Data = local_d0;
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FVar12.Data = local_c8.Data;
      }
      for (iVar7 = *(int *)(FVar12.Data + (ulonglong)(local_c0 - 1 & uVar18) * 4); iVar7 != -1;
          iVar7 = *(int *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar7 * 0xc + 4)) {
        if (*(uint *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar7 * 0xc) == uVar18) {
          if (iVar7 != -1) {
            *(uint *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar7 * 0xc) = uVar18;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(&local_108,local_1a8.Index,1);
            goto LAB_1434d131f;
          }
          break;
        }
      }
    }
    uVar20 = local_108.Data.ArrayNum - local_108.NumFreeIndices;
    uVar15 = 1;
    if (3 < uVar20) {
      uVar21 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_22c = (undefined4)lVar13;
      uVar15 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar20 < 1) || ((int)uVar15 <= (int)local_c0)) {
      uVar18 = local_c0 - 1 & uVar18;
      *(uint *)((longlong)local_1a8.Pointer + 8) = uVar18;
      FVar12.Data = local_d0;
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FVar12.Data = local_c8.Data;
      }
      uVar21 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar18;
      *(uint *)((longlong)local_1a8.Pointer + 4) = *(uint *)(FVar12.Data + uVar21 * 4);
      *(int *)(FVar12.Data + uVar21 * 4) = local_1a8.Index;
    }
    else {
      local_c0 = uVar15;
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
      }
      if (uVar15 != 0) {
        uVar18 = uVar15;
        if (uVar15 < 2) {
          if (local_c8.Data != (FScriptContainerElement *)0x0) {
            uVar18 = 0;
            goto LAB_1434d1122;
          }
        }
        else {
LAB_1434d1122:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,uVar18,4)
          ;
        }
        if (0 < (int)uVar15) {
          uVar23 = (ulonglong)uVar15;
          uVar21 = 0;
          do {
            FVar12.Data = local_d0;
            if (local_c8.Data != (FScriptContainerElement *)0x0) {
              FVar12.Data = local_c8.Data;
            }
            uVar10 = uVar21 & (longlong)(int)uVar15 - 1U;
            uVar21 = uVar21 + 1;
            *(undefined4 *)(FVar12.Data + uVar10 * 4) = 0xffffffff;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      if (local_c0 != 0) {
        pTStack_260 = &local_108.AllocationFlags;
        uStack_264 = 1;
        local_268 = 0;
        iStack_254 = 0;
        iStack_250 = 0;
        if (local_108.AllocationFlags.NumBits != 0) {
          FVar22 = (ForElementType<unsigned_int>)&local_108.AllocationFlags;
          if (local_108.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar22 = local_108.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          uVar18 = *(uint *)FVar22;
          iStack_250 = 0;
          local_268 = 0;
          while (uVar18 == 0) {
            iStack_250 = iStack_250 + 0x20;
            lVar13 = (longlong)local_268;
            local_268 = local_268 + 1;
            if ((int)(local_108.AllocationFlags.NumBits + -1 +
                     (local_108.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_268)
            goto LAB_1434d123d;
            uVar18 = *(uint *)((uchar *)((longlong)FVar22 + 4) + lVar13 * 4);
          }
          uStack_264 = -uVar18 & uVar18;
          uVar21 = (ulonglong)uStack_264 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_228 = (int)lVar13;
          iStack_254 = local_228 + -1 + iStack_250;
          if (local_108.AllocationFlags.NumBits < iStack_254) {
LAB_1434d123d:
            iStack_254 = local_108.AllocationFlags.NumBits;
          }
        }
        local_258 = 0xffffffff;
        local_1d0 = &local_108;
        local_1c8._padding_ = CONCAT44(uStack_264,local_268);
        local_1c8.CurrentBitIndex = iStack_254;
        local_1c8.UnvisitedBitMask = 0xffffffff;
        local_1c8._28_4_ = uStack_24c;
        local_1c8.BaseBitIndex = iStack_250;
        local_1c8.Array = pTStack_260;
        iVar7 = iStack_254;
        if (iStack_254 < local_108.AllocationFlags.NumBits) {
          do {
            pFVar3 = (local_1d0->Data).AllocatorInstance.Data;
            lVar13 = (longlong)iVar7;
            uVar18 = local_c0 - 1 & *(uint *)(pFVar3 + lVar13 * 0xc);
            *(uint *)(pFVar3 + lVar13 * 0xc + 8) = uVar18;
            FVar12.Data = local_d0;
            if (local_c8.Data != (FScriptContainerElement *)0x0) {
              FVar12.Data = local_c8.Data;
            }
            uVar21 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar18;
            *(undefined4 *)(pFVar3 + lVar13 * 0xc + 4) = *(undefined4 *)(FVar12.Data + uVar21 * 4);
            *(int *)(FVar12.Data + uVar21 * 4) = iVar7;
            local_1c8.UnvisitedBitMask = local_1c8.UnvisitedBitMask & ~local_1c8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c8);
            iVar7 = local_1c8.CurrentBitIndex;
          } while (local_1c8.CurrentBitIndex < (local_1c8.Array)->NumBits);
        }
      }
    }
LAB_1434d131f:
    puVar17 = puVar17 + 1;
    param_1 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)local_248;
    iVar7 = local_108.FirstFreeIndex;
  } while( true );
}

// InitializeOverlayToPerTriangleNormals @ 1434d1a80

void __cdecl
UE::Geometry::FMeshNormals::InitializeOverlayToPerTriangleNormals
          (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1)

{
  FDynamicMesh3 *this;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  FIndex3i_u_0 local_64;
  TVector<double>_u_0 local_58 [3];
  
  this = *(FDynamicMesh3 **)param_1;
  TDynamicMeshOverlay<float,3>::ClearElements((TDynamicMeshOverlay<float,3> *)param_1);
  uVar5 = (this->TriangleRefCounts).RefCounts.CurBlockUsed +
          (this->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar4 = 0;
  if ((uVar5 != 0) &&
     (pFVar1 = (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar4 = 0,
     0xfffd < (ushort)(**(short **)pFVar1 - 1U))) {
    uVar3 = 1;
    uVar4 = 1;
    if (1 < (int)uVar5) {
      do {
        lVar2 = *(longlong *)(pFVar1 + (ulonglong)(uVar3 >> 9) * 8);
        if ((*(short *)(lVar2 + (ulonglong)(uVar3 & 0x1ff) * 2) != 0) &&
           (uVar4 = uVar3, *(short *)(lVar2 + (ulonglong)(uVar3 & 0x1ff) * 2) != -1)) break;
        uVar3 = uVar3 + 1;
        uVar4 = uVar3;
      } while ((int)uVar3 < (int)uVar5);
    }
  }
joined_r0x0001434d1b17:
  do {
    if (uVar4 == uVar5) {
      return;
    }
    while( true ) {
      FDynamicMesh3::GetTriNormal(this,(TVector<double> *)&local_58[0]._s_0,uVar4);
      fVar8 = (float)(double)local_58[0]._0_8_;
      fVar7 = (float)(double)local_58[0]._8_8_;
      fVar6 = (float)(double)local_58[0]._16_8_;
      local_88 = fVar8;
      local_84 = fVar7;
      local_80 = fVar6;
      local_64._s_0.A =
           TDynamicMeshOverlay<float,3>::AppendElement
                     ((TDynamicMeshOverlay<float,3> *)param_1,&local_88);
      local_7c = fVar8;
      local_78 = fVar7;
      local_74 = fVar6;
      local_70 = fVar8;
      local_6c = fVar7;
      local_68 = fVar6;
      local_64._s_0.B =
           TDynamicMeshOverlay<float,3>::AppendElement
                     ((TDynamicMeshOverlay<float,3> *)param_1,&local_7c);
      local_64._s_0.C =
           TDynamicMeshOverlay<float,3>::AppendElement
                     ((TDynamicMeshOverlay<float,3> *)param_1,&local_70);
      TDynamicMeshOverlay<float,3>::SetTriangle
                ((TDynamicMeshOverlay<float,3> *)param_1,uVar4,(FIndex3i *)&local_64._s_0,true);
      uVar4 = uVar4 + 1;
      if ((int)uVar5 <= (int)uVar4) break;
      while( true ) {
        lVar2 = *(longlong *)
                 ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar4 >> 9) * 8);
        if ((*(short *)(lVar2 + (ulonglong)(uVar4 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar2 + (ulonglong)(uVar4 & 0x1ff) * 2) != -1)) break;
        uVar4 = uVar4 + 1;
        if ((int)uVar5 <= (int)uVar4) goto joined_r0x0001434d1b17;
      }
    }
  } while( true );
}

// InitializeOverlayToPerVertexNormals @ 1434d1c70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Geometry::FMeshNormals::InitializeOverlayToPerVertexNormals
          (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,bool param_2)

{
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  FIndex3i_u_0 local_88;
  undefined8 local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined8 local_60;
  float local_58;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  FMeshNormals local_40;
  
  pFVar1 = *(FDynamicMesh3 **)param_1;
  local_40.Mesh = pFVar1;
  if ((param_2) && ((pFVar1->VertexNormals).bIsSet != false)) {
    local_40.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar5 = true;
    local_40.Normals.ArrayNum = 0;
    local_40.Normals.ArrayMax = 0;
  }
  else {
    local_40.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.Normals.ArrayNum = 0;
    local_40.Normals.ArrayMax = 0;
    bVar5 = false;
    Compute_FaceAvg(&local_40,true,true);
  }
  TDynamicMeshOverlay<float,3>::ClearElements((TDynamicMeshOverlay<float,3> *)param_1);
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_50,
             (pFVar1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar1->VertexRefCounts).RefCounts.CurBlockUsed,Default);
  uVar13 = (pFVar1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar12 = 0;
  if (((uVar13 != 0) &&
      (pFVar2 = (pFVar1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar12 = 0,
      0xfffd < (ushort)(**(short **)pFVar2 - 1U))) && (uVar12 = 1, 1 < (int)uVar13)) {
    do {
      uVar9 = (ulonglong)((uint)uVar12 & 0x1ff);
      lVar14 = *(longlong *)(pFVar2 + (uVar12 >> 9) * 8);
      if ((*(short *)(lVar14 + uVar9 * 2) != 0) && (*(short *)(lVar14 + uVar9 * 2) != -1)) break;
      uVar10 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar13);
  }
  uVar10 = (uint)uVar12;
joined_r0x0001434d1d70:
  if (uVar10 != uVar13) {
    while( true ) {
      uVar11 = (uint)uVar12;
      if (bVar5) {
        if ((pFVar1->VertexNormals).bIsSet == false) {
          local_70 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
          pfVar8 = (float *)&local_78;
          local_78 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
        }
        else {
          lVar14 = *(longlong *)
                    ((pFVar1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                    (uVar12 >> 9) * 8);
          local_70 = *(float *)(lVar14 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
          pfVar8 = (float *)&local_78;
          local_78 = *(undefined8 *)(lVar14 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
        }
      }
      else {
        uVar10 = 0;
        if ((int)uVar11 < local_40.Normals.ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar14 = (longlong)(int)uVar11;
        local_6c = (float)*(double *)(local_40.Normals.AllocatorInstance.Data + lVar14 * 0x18);
        pfVar8 = &local_6c;
        local_68 = (float)*(double *)(local_40.Normals.AllocatorInstance.Data + lVar14 * 0x18 + 8);
        local_64 = (float)*(double *)
                           (local_40.Normals.AllocatorInstance.Data + lVar14 * 0x18 + 0x10);
      }
      local_60 = *(undefined8 *)pfVar8;
      local_58 = pfVar8[2];
      iVar6 = TDynamicMeshOverlay<float,3>::AppendElement
                        ((TDynamicMeshOverlay<float,3> *)param_1,(float *)&local_60);
      uVar10 = 0;
      if ((int)uVar11 < local_50.ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = uVar11 + 1;
      uVar12 = (ulonglong)uVar10;
      *(int *)(local_50.AllocatorInstance.Data + (longlong)(int)uVar11 * 4) = iVar6;
      if ((int)uVar13 <= (int)uVar10) break;
      while( true ) {
        uVar9 = (ulonglong)((uint)uVar12 & 0x1ff);
        lVar14 = *(longlong *)
                  ((pFVar1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar12 >> 9) * 8);
        if ((*(short *)(lVar14 + uVar9 * 2) != 0) && (*(short *)(lVar14 + uVar9 * 2) != -1)) break;
        uVar10 = (uint)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
        if ((int)uVar13 <= (int)uVar10) goto joined_r0x0001434d1d70;
      }
    }
    goto joined_r0x0001434d1d70;
  }
  uVar13 = (pFVar1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (pFVar1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar12 = 0;
  if ((uVar13 != 0) &&
     (pFVar2 = (pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar12 = 0,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar12 = 1;
    uVar10 = 1;
    if ((int)uVar13 < 2) goto joined_r0x0001434d1f88;
    do {
      uVar9 = (ulonglong)((uint)uVar12 & 0x1ff);
      lVar14 = *(longlong *)(pFVar2 + (uVar12 >> 9) * 8);
      if ((*(short *)(lVar14 + uVar9 * 2) != 0) && (*(short *)(lVar14 + uVar9 * 2) != -1)) break;
      uVar10 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar13);
  }
  uVar10 = (uint)uVar12;
joined_r0x0001434d1f88:
  do {
    if (uVar10 == uVar13) {
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      if (local_40.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Normals.AllocatorInstance.Data);
      }
      return;
    }
    while( true ) {
      uVar10 = (uint)uVar12;
      lVar14 = *(longlong *)((pFVar1->Triangles).Blocks.AllocatorInstance.Data + (uVar12 >> 9) * 8);
      local_88._0_8_ = *(undefined8 *)(lVar14 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
      local_88._s_0.C = *(uint *)(lVar14 + 8 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
      lVar14 = (longlong)local_88._s_0.A;
      uVar7 = 0;
      uVar11 = uVar7;
      if (local_88._s_0.A < local_50.ArrayNum) {
        uVar11 = (uint)~local_88._s_0.A >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar15 = (longlong)local_88._s_0.B;
      local_88._s_0.A = *(undefined4 *)(local_50.AllocatorInstance.Data + lVar14 * 4);
      uVar11 = uVar7;
      if (local_88._s_0.B < local_50.ArrayNum) {
        uVar11 = (uint)~local_88._s_0.B >> 0x1f;
      }
      iVar6 = local_50.ArrayNum;
      if (uVar11 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = local_50.ArrayNum;
      }
      lVar14 = (longlong)local_88._s_0.C;
      local_88._s_0.B = *(undefined4 *)(local_50.AllocatorInstance.Data + lVar15 * 4);
      if (local_88._s_0.C < iVar6) {
        uVar7 = (uint)~local_88._s_0.C >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_88._s_0.C = *(undefined4 *)(local_50.AllocatorInstance.Data + lVar14 * 4);
      TDynamicMeshOverlay<float,3>::SetTriangle
                ((TDynamicMeshOverlay<float,3> *)param_1,uVar10,(FIndex3i *)&local_88._s_0,true);
      uVar10 = uVar10 + 1;
      uVar12 = (ulonglong)uVar10;
      if ((int)uVar13 <= (int)uVar10) break;
      while( true ) {
        uVar9 = (ulonglong)((uint)uVar12 & 0x1ff);
        lVar14 = *(longlong *)
                  ((pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar12 >> 9) * 8);
        if ((*(short *)(lVar14 + uVar9 * 2) != 0) && (*(short *)(lVar14 + uVar9 * 2) != -1)) break;
        uVar10 = (uint)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
        if ((int)uVar13 <= (int)uVar10) goto joined_r0x0001434d1f88;
      }
    }
  } while( true );
}

// InitializeOverlayTopologyFromFaceGroups @ 1434d21a0

void __cdecl
UE::Geometry::FMeshNormals::InitializeOverlayTopologyFromFaceGroups
          (FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FDynamicMesh3 *local_res8;
  code *local_18;
  FDynamicMesh3 **local_10;
  
  if ((param_1->TriangleGroups).bIsSet == false) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4544586195333546642>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\MeshNormals.cpp"
                       ,0x292,"Mesh->HasTriangleGroups()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10 = &local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshNormals::InitializeOverlayTopologyFromFaceGroups'::__l2::<lambda_1>,bool,int,int,int>
             ::Call;
  local_res8 = param_1;
  TDynamicMeshOverlay<float,3>::CreateFromPredicate
            ((TDynamicMeshOverlay<float,3> *)param_2,
             (TFunctionRef<bool___cdecl(int,int,int)> *)&local_18,0.0);
  return;
}

// InitializeOverlayTopologyFromOpeningAngle @ 1434d2230

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Geometry::FMeshNormals::InitializeOverlayTopologyFromOpeningAngle
          (FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_2,double param_3)

{
  int iVar1;
  FDynamicMesh3 **local_res8;
  double local_res18 [2];
  undefined1 local_58 [12];
  uint uStack_4c;
  undefined1 local_48 [16];
  FDynamicMesh3 *local_38;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_30;
  
  local_res18[0] = cos(param_3 * __real_3f91df46a2529d39);
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  iVar1 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
          (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  local_38 = param_1;
  if (0 < iVar1) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_30,iVar1,Default);
  }
  local_res8 = &local_38;
  local_58._0_8_ = (void **)0x0;
  stack0xffffffffffffffb0 = (undefined1 *)((ulonglong)uStack_4c << 0x20);
  local_48._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FMeshNormals::Compute_Triangle'::__l2::<lambda_1>,void,int>
       ::Call;
  local_48._8_8_ = &local_res8;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)local_48,
             local_res8._0_1_,None,(TArrayView<std::nullptr_t,int> *)local_58);
  local_48._0_8_ = &local_30;
  local_48._8_8_ = local_res18;
  unique0x00008e00 = local_48;
  local_58._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FMeshNormals::InitializeOverlayTopologyFromOpeningAngle'::__l2::<lambda_1>,bool,int,int,int>
       ::Call;
  TDynamicMeshOverlay<float,3>::CreateFromPredicate
            ((TDynamicMeshOverlay<float,3> *)param_2,
             (TFunctionRef<bool___cdecl(int,int,int)> *)local_58,0.0);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// QuickComputeVertexNormals @ 1435149f0

void __cdecl
UE::Geometry::FMeshNormals::QuickComputeVertexNormals(FDynamicMesh3 *param_1,bool param_2)

{
  FMeshNormals local_28;
  
  local_28.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Normals.ArrayNum = 0;
  local_28.Normals.ArrayMax = 0;
  local_28.Mesh = param_1;
  Compute_FaceAvg(&local_28,true,true);
  CopyToVertexNormals(&local_28,param_1,param_2);
  if (local_28.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Normals.AllocatorInstance.Data);
  }
  return;
}

// QuickComputeVertexNormalsForTriangles @ 143514a60

void __cdecl
UE::Geometry::FMeshNormals::QuickComputeVertexNormalsForTriangles
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          bool param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  <lambda_1> local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TVector<float>_u_0 local_98;
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  TArray<int,TSizedDefaultAllocator<32>_> **local_50;
  TArrayView<int_const_,int> local_48;
  TArray<int,TSizedDefaultAllocator<32>_> *local_38;
  FDynamicMesh3 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if ((param_1->VertexNormals).bIsSet == false) {
    local_98._0_8_ = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
    local_98._s_0.Z = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
    FDynamicMesh3::EnableVertexNormals(param_1,(TVector<float> *)&local_98._s_0);
  }
  local_78 = (param_2->AllocatorInstance).Data;
  iVar1 = param_2->ArrayNum;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48._12_4_ = uStack_6c;
  local_48.ArrayNum = iVar1;
  local_48.DataPtr = (int *)local_78;
  iStack_70 = iVar1;
  TriangleToVertexIDs(param_1,&local_48,&local_88);
  local_38 = &local_88;
  local_28 = local_res18;
  local_20 = local_res20;
  local_68.DataPtr = (void **)0x0;
  local_68.ArrayNum = 0;
  local_58 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshNormals::QuickComputeVertexNormalsForTriangles'::__l2::<lambda_1>,void,int>
             ::Call;
  local_50 = &local_38;
  local_30 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_88.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_58,
             local_res8,None,&local_68);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// QuickRecomputeOverlayNormals @ 143514b90

bool __cdecl
UE::Geometry::FMeshNormals::QuickRecomputeOverlayNormals
          (FDynamicMesh3 *param_1,bool param_2,bool param_3,bool param_4,bool param_5)

{
  FDynamicMeshAttributeSet *pFVar1;
  FScriptContainerElement *pFVar2;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  ForAnyElementType local_68;
  int local_60 [2];
  FMeshNormals local_58;
  ForAnyElementType *local_40;
  FDynamicMesh3 *local_38;
  undefined8 local_30;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_28;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (((pFVar1 == (FDynamicMeshAttributeSet *)0x0) || ((pFVar1->NormalLayers).Array.ArrayNum < 1))
     || (pFVar2 = (pFVar1->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar2 == 0)) {
    bVar5 = false;
  }
  else {
    pTVar3 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)pFVar2;
    if (param_5) {
      local_68.Data = (FScriptContainerElement *)0x0;
      local_60[0] = 0;
      local_60[1] = 0;
      uVar4 = (*(int *)&pTVar3->field_0x8 * 0x200 + *(int *)&pTVar3->field_0xc) * 3;
      if ((int)uVar4 < 1) {
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
        }
      }
      else {
        iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar4,&local_68,local_60,local_60 + 1);
        memset(local_68.Data + (longlong)iVar6 * 4,0,(longlong)(int)uVar4 << 2);
      }
      local_40 = &local_68;
      local_58.Normals.AllocatorInstance.Data = (FScriptContainerElement *)&local_40;
      local_58.Mesh =
           (FDynamicMesh3 *)
           Core::Private::Function::
           TFunctionRefCaller<`UE::Geometry::FMeshNormals::QuickRecomputeOverlayNormals'::__l10::<lambda_1>,void,int>
           ::Call;
      local_30._0_2_ = CONCAT11(param_4,param_3);
      local_38 = param_1;
      local_28 = pTVar3;
      ParallelFor((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (param_1->TriangleRefCounts).RefCounts.CurBlockUsed,
                  (TFunctionRef<void___cdecl(int)> *)&local_58,false,false);
      uVar7 = __real_3f800000;
      if (param_2) {
        uVar7 = __real_bf800000;
      }
      local_40 = &local_68;
      local_58.Normals.AllocatorInstance.Data = (FScriptContainerElement *)&local_40;
      local_38 = (FDynamicMesh3 *)CONCAT44(local_38._4_4_,uVar7);
      local_58.Mesh =
           (FDynamicMesh3 *)
           Core::Private::Function::
           TFunctionRefCaller<`UE::Geometry::FMeshNormals::QuickRecomputeOverlayNormals'::__l10::<lambda_2>,void,int>
           ::Call;
      local_30 = pTVar3;
      ParallelFor(*(int *)&pTVar3->field_0x8 * 0x200 + *(int *)&pTVar3->field_0xc,
                  (TFunctionRef<void___cdecl(int)> *)&local_58,false,false);
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
    }
    else {
      local_58.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Normals.ArrayNum = 0;
      local_58.Normals.ArrayMax = 0;
      local_58.Mesh = param_1;
      Compute_Overlay_FaceAvg(&local_58,pTVar3,param_3,param_4);
      CopyToOverlay(&local_58,pTVar3,param_2);
      if (local_58.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Normals.AllocatorInstance.Data);
      }
    }
    bVar5 = true;
  }
  return bVar5;
}

// RecomputeOverlayElementNormals @ 143514ea0

bool __cdecl
UE::Geometry::FMeshNormals::RecomputeOverlayElementNormals
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          bool param_4)

{
  FDynamicMeshAttributeSet *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong local_res8 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  TArray<int,TSizedDefaultAllocator<32>_> **local_40;
  TArray<int,TSizedDefaultAllocator<32>_> *local_38;
  longlong *local_30;
  FDynamicMesh3 *local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (((pFVar1 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar1->NormalLayers).Array.ArrayNum))
     && (pFVar2 = (pFVar1->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar2 != 0)) {
    local_res8[0] = *(longlong *)pFVar2;
    local_30 = local_res8;
    local_20 = local_res18;
    local_58.DataPtr = (void **)0x0;
    local_18 = local_res20;
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshNormals::RecomputeOverlayElementNormals'::__l5::<lambda_1>,void,int>
               ::Call;
    local_40 = &local_38;
    local_58.ArrayNum = 0;
    local_res18[0] = param_3;
    local_res20[0] = param_4;
    local_38 = param_2;
    local_28 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",param_2->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_48,
               local_res8[0]._0_1_,None,&local_58);
    return true;
  }
  return false;
}

// RecomputeOverlayTriNormals @ 143514f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Geometry::FMeshNormals::RecomputeOverlayTriNormals
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          bool param_4)

{
  int iVar1;
  int iVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_148 [32];
  undefined1 local_108 [8];
  <lambda_1> local_100 [8];
  undefined1 local_f8 [4];
  undefined4 uStack_f4;
  int local_f0 [2];
  longlong local_e8;
  int local_e0;
  int local_dc;
  code *local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> **local_d0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_c8;
  longlong *local_c0;
  FDynamicMesh3 *local_b8;
  undefined1 *local_b0;
  <lambda_1> *local_a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pFVar3 = (param_1->AttributeSet).Ptr;
  if (((pFVar3 == (FDynamicMeshAttributeSet *)0x0) || ((pFVar3->NormalLayers).Array.ArrayNum < 1))
     || (pFVar4 = (pFVar3->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar4 == 0)) {
    bVar7 = false;
  }
  else {
    lVar9 = 0;
    if (0 < (pFVar3->NormalLayers).Array.ArrayNum) {
      lVar9 = *(longlong *)pFVar4;
    }
    pFVar10 = (param_2->AllocatorInstance).Data;
    iVar1 = param_2->ArrayNum;
    local_88.Elements._0_8_ = 0;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    pFVar4 = pFVar10 + (longlong)iVar1 * 4;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._48_4_ = 0xffffffff;
    local_88.Elements._52_4_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    local_108[0] = param_3;
    while( true ) {
      if (param_2->ArrayNum != iVar1) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_100);
      }
      if (pFVar10 == pFVar4) break;
      lVar5 = *(longlong *)(lVar9 + 0x78);
      uVar6 = *(int *)pFVar10 * 3;
      iVar2 = *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar6 >> 9) * 8) +
                      (ulonglong)(uVar6 & 0x1ff) * 4);
      if (-1 < iVar2) {
        _local_f8 = (void **)CONCAT44(*(undefined4 *)
                                       (*(longlong *)(lVar5 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                                       (ulonglong)(uVar6 + 1 & 0x1ff) * 4),iVar2);
        local_f0[0] = *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                              (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_88,&local_e0,(bool *)local_f8);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_88,&local_dc,(bool *)(local_f8 + 4));
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_88,(int *)&local_e8,(bool *)local_f0);
      }
      pFVar10 = pFVar10 + 4;
    }
    local_100[0] = (<lambda_1>)param_4;
    pTVar8 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_88,&local_a0);
    pFVar3 = (param_1->AttributeSet).Ptr;
    if (((pFVar3 == (FDynamicMeshAttributeSet *)0x0) || ((pFVar3->NormalLayers).Array.ArrayNum < 1))
       || (pFVar4 = (pFVar3->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar4 == 0))
    {
      bVar7 = false;
    }
    else {
      local_e8 = *(longlong *)pFVar4;
      local_c0 = &local_e8;
      local_b0 = local_108;
      local_a8 = local_100;
      local_d8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FMeshNormals::RecomputeOverlayElementNormals'::__l5::<lambda_1>,void,int>
                 ::Call;
      local_d0 = &local_c8;
      _local_f8 = (void **)0x0;
      local_f0[0] = 0;
      local_c8 = pTVar8;
      local_b8 = param_1;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",pTVar8->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_d8
                 ,local_100[0],None,(TArrayView<std::nullptr_t,int> *)local_f8);
      bVar7 = true;
    }
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
  }
  return bVar7;
}

// SetCount @ 14352bcc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FMeshNormals::SetCount(FMeshNormals *this,int param_1,bool param_2)

{
  if ((this->Normals).ArrayNum < param_1) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Normals,param_1,Default);
  }
  if (param_2) {
    memset((this->Normals).AllocatorInstance.Data,0,(longlong)(this->Normals).ArrayNum * 0x18);
  }
  return;
}

// SetDegenerateTriangleNormalsToNeighborNormal @ 14352bd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshNormals::SetDegenerateTriangleNormalsToNeighborNormal(FMeshNormals *this)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong uVar11;
  ForElementType<FSetElementId> FVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  FDynamicMesh3 *pFVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [3];
  uint local_1a4;
  uint local_1a0 [2];
  FDynamicMesh3 *local_198;
  longlong *local_190;
  int iStack_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  undefined4 uStack_178;
  uint uStack_174;
  uint local_170;
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  int local_15c;
  FMeshNormals *local_158;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (((this->Normals).ArrayNum <
       (int)((this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Normals.Num() >= Mesh->MaxTriangleID()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\MeshNormals.cpp"
                         ,0x7d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar17 = this->Mesh;
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (uint *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (ForElementType<FSetElementId>)0x0;
  local_b0 = 0;
  uVar19 = (pFVar17->TriangleRefCounts).RefCounts.CurBlockUsed +
           (pFVar17->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar15 = 0;
  if ((uVar19 != 0) &&
     (pFVar2 = (pFVar17->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar15 = 0,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar15 = 1;
    uVar13 = 1;
    if ((int)uVar19 < 2) goto LAB_14352be69;
    do {
      uVar11 = (ulonglong)((uint)uVar15 & 0x1ff);
      lVar9 = *(longlong *)(pFVar2 + (uVar15 >> 9) * 8);
      if ((*(short *)(lVar9 + uVar11 * 2) != 0) && (*(short *)(lVar9 + uVar11 * 2) != -1)) break;
      uVar13 = (uint)uVar15 + 1;
      uVar15 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)uVar19);
  }
  uVar13 = (uint)uVar15;
LAB_14352be69:
  local_1a4 = uVar19;
  local_198 = pFVar17;
  local_158 = this;
  if (uVar13 != uVar19) {
    uVar21 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar22 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar23 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
    uVar24 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20)
    ;
    uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
LAB_14352beb0:
    do {
      uVar14 = (uint)uVar15;
      uVar13 = 0;
      uVar20 = uVar13;
      if ((int)uVar14 < (this->Normals).ArrayNum) {
        uVar20 = ~uVar14 >> 0x1f;
      }
      if (uVar20 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar23 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
        uVar24 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
        uVar21 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar22 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar19 = local_1a4;
      }
      lVar9 = (longlong)(int)uVar14;
      pFVar2 = (this->Normals).AllocatorInstance.Data;
      if ((((double)uVar25 == *(double *)(pFVar2 + lVar9 * 0x18)) &&
          ((double)CONCAT44(uVar24,uVar23) == *(double *)(pFVar2 + lVar9 * 0x18 + 8))) &&
         ((double)CONCAT44(uVar22,uVar21) == *(double *)(pFVar2 + lVar9 * 0x18 + 0x10))) {
        if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
          FVar12 = (ForElementType<FSetElementId>)&local_a8.Hash;
          if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar12 = local_a8.Hash.SecondaryData;
          }
          for (iVar16 = *(int *)((longlong)FVar12 + (local_a8.HashSize - 1 & uVar15) * 4);
              iVar16 != -1; iVar16 = *(int *)(local_a8.Elements._0_8_ + 4 + (longlong)iVar16 * 0xc))
          {
            if (*(uint *)(local_a8.Elements._0_8_ + (longlong)iVar16 * 0xc) == uVar14)
            goto LAB_14352c35f;
          }
        }
        if (local_f8._8_4_ != local_c4) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_f8);
          bVar8 = (longlong)local_f8._8_8_ < 0;
          local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
          if (bVar8) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
          }
          local_c8 = 0xffffffff;
          local_c4 = 0;
          local_d0 = 0;
        }
        local_1a0[0] = 0xffffffff;
        `UE::Geometry::FMeshNormals::SetDegenerateTriangleNormalsToNeighborNormal'::__l2::<lambda_1>
        ::operator()(&local_158,uVar14,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_f8,
                     (int *)local_1a0);
        lVar9 = (longlong)(int)local_1a0[0];
        if (local_1a0[0] == 0xffffffff) {
          local_1a8 = 0;
          `UE::Geometry::FMeshNormals::SetDegenerateTriangleNormalsToNeighborNormal'::__l19::
          <lambda_2>::operator()(&local_1a8);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                    (&local_a8,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_f8);
        }
        else {
          uVar19 = uVar13;
          if ((int)local_1a0[0] < (this->Normals).ArrayNum) {
            uVar19 = ~local_1a0[0] >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (this->Normals).AllocatorInstance.Data;
          pFVar2 = pFVar3 + lVar9 * 0x18;
          dVar5 = *(double *)pFVar2;
          dVar6 = *(double *)(pFVar2 + 8);
          dVar1 = *(double *)(pFVar3 + lVar9 * 0x18 + 0x10);
          if (((dVar5 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) &&
              (dVar6 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) &&
             ((dVar1 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z &&
              (local_180 = (TBitArray<FDefaultBitArrayAllocator> *)dVar1,
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("NormalToUse != FVector3d::Zero()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\MeshNormals.cpp"
                                 ,0xf6,L""), bVar8)))) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar19 = local_d0;
          uStack_184 = 1;
          uStack_174 = uVar13;
          iStack_188 = 0;
          if (local_d0 != 0) {
            puVar18 = (uint *)(local_f8 + 0x10);
            if (local_d8 != (uint *)0x0) {
              puVar18 = local_d8;
            }
            uVar20 = *puVar18;
            while (uVar20 == 0) {
              lVar9 = (longlong)iStack_188;
              uVar13 = uVar13 + 0x20;
              iStack_188 = iStack_188 + 1;
              uStack_174 = local_d0;
              if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_188)
              goto LAB_14352c151;
              uVar20 = puVar18[lVar9 + 1];
            }
            uStack_184 = -uVar20 & uVar20;
            uVar15 = (ulonglong)uStack_184 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            local_160 = (int)lVar9;
            uStack_174 = (uVar13 - 1) + local_160;
            if ((int)local_d0 < (int)uStack_174) {
              uStack_174 = local_d0;
            }
          }
LAB_14352c151:
          local_190 = (longlong *)local_f8;
          uStack_16c = local_104;
          local_180 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
          uVar20 = local_d0 & 0xffffffe0;
          iStack_168 = local_f8._8_4_ - local_c4;
          TStack_148._padding_ = CONCAT44(uStack_184,iStack_188);
          uStack_178 = 0xffffffff;
          TStack_148.CurrentBitIndex = uStack_174;
          TStack_148.UnvisitedBitMask = 0xffffffff;
          iVar16 = (int)local_d0 >> 5;
          TStack_148._28_4_ = local_104;
          TStack_148.BaseBitIndex = uVar13;
          uStack_128 = CONCAT44(uStack_164,iStack_168);
          bVar10 = (byte)local_d0;
          local_170 = uVar13;
          local_150 = local_190;
          TStack_148.Array = local_180;
          if (((int)local_d0 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar19 != local_d0) {
            puVar18 = (uint *)(local_f8 + 0x10);
            if (local_d8 != (uint *)0x0) {
              puVar18 = local_d8;
            }
            uVar19 = -1 << (bVar10 & 0x1f) & puVar18[iVar16];
            while (uVar19 == 0) {
              lVar9 = (longlong)iVar16;
              uVar20 = uVar20 + 0x20;
              iVar16 = iVar16 + 1;
              uVar19 = local_d0;
              if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
              goto LAB_14352c262;
              uVar19 = puVar18[lVar9 + 1];
            }
            uVar15 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
            lVar9 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            local_15c = (int)lVar9;
            uVar19 = local_15c + -1 + uVar20;
            if ((int)local_d0 < (int)uVar19) {
              uVar19 = local_d0;
            }
          }
LAB_14352c262:
          while( true ) {
            plVar7 = local_150;
            if ((int)local_150[1] - *(int *)((longlong)local_150 + 0x34) != (int)uStack_128) {
              local_1a7[0] = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a7);
            }
            if (((TStack_148.CurrentBitIndex == uVar19) &&
                (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
               (plVar7 == (longlong *)local_f8)) break;
            uVar13 = *(uint *)(*plVar7 + (longlong)TStack_148.CurrentBitIndex * 0xc);
            uVar20 = 0;
            if ((int)uVar13 < (this->Normals).ArrayNum) {
              uVar20 = ~uVar13 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (this->Normals).AllocatorInstance.Data;
            pFVar2 = pFVar3 + (longlong)(int)uVar13 * 0x18;
            *(double *)pFVar2 = dVar5;
            *(double *)(pFVar2 + 8) = dVar6;
            *(double *)(pFVar3 + (longlong)(int)uVar13 * 0x18 + 0x10) = dVar1;
            TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
          }
        }
        uVar23 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
        uVar24 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
        uVar21 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar22 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        pFVar17 = local_198;
        uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar19 = local_1a4;
      }
LAB_14352c35f:
      uVar14 = uVar14 + 1;
      uVar15 = (ulonglong)uVar14;
      if ((int)uVar14 < (int)uVar19) {
        do {
          uVar11 = (ulonglong)((uint)uVar15 & 0x1ff);
          lVar9 = *(longlong *)
                   ((pFVar17->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (uVar15 >> 9) * 8);
          if ((*(short *)(lVar9 + uVar11 * 2) != 0) && (*(short *)(lVar9 + uVar11 * 2) != -1))
          goto LAB_14352beb0;
          uVar14 = (uint)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
        } while ((int)uVar14 < (int)uVar19);
      }
    } while (uVar14 != uVar19);
  }
  local_b0 = 0;
  if (local_b8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  return;
}

// SmoothVertexNormals @ 143532210

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Geometry::FMeshNormals::SmoothVertexNormals(FDynamicMesh3 *param_1,int param_2,double param_3)

{
  double dVar1;
  double dVar2;
  short sVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  <lambda_1> local_res10;
  double local_res18 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_98;
  TArrayView<std::nullptr_t,int> local_88;
  code *local_78;
  FDynamicMesh3 **local_70;
  double local_68;
  double dStack_60;
  double local_58;
  FDynamicMesh3 *local_50;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_48;
  double *local_40;
  
  iVar8 = 500;
  if (param_2 < 500) {
    iVar8 = param_2;
  }
  iVar15 = 0;
  iVar16 = 0;
  if (0 < iVar8) {
    iVar16 = iVar8;
  }
  if (0.0 <= param_3) {
    if (__real_3ff0000000000000 <= param_3) {
      param_3 = __real_3ff0000000000000;
    }
  }
  else {
    param_3 = 0.0;
  }
  if ((0 < iVar16) && (0.0 < param_3)) {
    uVar17 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_res18[0] = param_3;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_98,uVar17,Default);
    do {
      local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      uVar10 = local_98.ArrayMax;
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      uVar13 = 0;
      if (uVar10 != uVar17) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar17,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
        uVar13 = local_98._8_8_ & 0xffffffff;
      }
      if (0 < (int)uVar17) {
        uVar12 = (ulonglong)uVar17;
        while( true ) {
          iVar8 = (int)uVar13;
          if ((local_98.AllocatorInstance.Data <= (FScriptContainerElement *)&local_68) &&
             ((FScriptContainerElement *)&local_68 <
              local_98.AllocatorInstance.Data + (longlong)local_98.ArrayMax * 0x18)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = local_98.ArrayNum;
          }
          if (iVar8 == local_98.ArrayMax) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_98.AllocatorInstance,&local_98.ArrayMax);
          }
          local_98.ArrayNum = iVar8 + 1U;
          *(double *)(local_98.AllocatorInstance.Data + (longlong)iVar8 * 0x18) = local_68;
          *(double *)(local_98.AllocatorInstance.Data + (longlong)iVar8 * 0x18 + 8) = dStack_60;
          *(double *)(local_98.AllocatorInstance.Data + (longlong)iVar8 * 0x18 + 0x10) = local_58;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) break;
          uVar13 = (ulonglong)(iVar8 + 1U);
        }
      }
      local_48 = &local_98;
      local_40 = local_res18;
      local_88.DataPtr = (void **)0x0;
      local_88.ArrayNum = 0;
      local_78 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FMeshNormals::SmoothVertexNormals'::__l7::<lambda_1>,void,int>
                 ::Call;
      local_70 = &local_50;
      local_50 = param_1;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",uVar17,1,(TFunctionRef<void___cdecl(int)> *)&local_78,
                 local_res10,None,&local_88);
      uVar10 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
      uVar13 = 0;
      if ((uVar10 == 0) ||
         (pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar13 = 0,
         (ushort)(**(short **)pFVar4 - 1U) < 0xfffe)) {
LAB_14353248a:
        uVar11 = (uint)uVar13;
      }
      else {
        uVar13 = 1;
        uVar11 = 1;
        if (1 < (int)uVar10) {
          do {
            sVar3 = *(short *)(*(longlong *)(pFVar4 + (uVar13 >> 9) * 8) +
                              (ulonglong)((uint)uVar13 & 0x1ff) * 2);
            if ((sVar3 != 0) && (sVar3 != -1)) break;
            uVar11 = (uint)uVar13 + 1;
            uVar13 = (ulonglong)uVar11;
          } while ((int)uVar11 < (int)uVar10);
          goto LAB_14353248a;
        }
      }
joined_r0x00014353248c:
      if (uVar11 != uVar10) {
        while( true ) {
          uVar11 = (uint)uVar13;
          uVar9 = 0;
          if ((int)uVar11 < local_98.ArrayNum) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar14 = (longlong)(int)uVar11;
          dVar1 = *(double *)(local_98.AllocatorInstance.Data + lVar14 * 0x18 + 8);
          dVar2 = *(double *)(local_98.AllocatorInstance.Data + lVar14 * 0x18 + 0x10);
          if ((param_1->VertexNormals).bIsSet != false) {
            uVar12 = (ulonglong)(uVar11 & 0x1ff);
            lVar5 = *(longlong *)
                     ((param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                     (uVar13 >> 9) * 8);
            *(float *)(lVar5 + uVar12 * 0xc) =
                 (float)*(double *)(local_98.AllocatorInstance.Data + lVar14 * 0x18);
            *(float *)(lVar5 + 4 + uVar12 * 0xc) = (float)dVar1;
            *(float *)(lVar5 + 8 + uVar12 * 0xc) = (float)dVar2;
          }
          uVar11 = uVar11 + 1;
          uVar13 = (ulonglong)uVar11;
          if ((int)uVar10 <= (int)uVar11) break;
          pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
          while( true ) {
            uVar12 = (ulonglong)((uint)uVar13 & 0x1ff);
            if ((*(short *)(*(longlong *)(pFVar4 + (uVar13 >> 9) * 8) + uVar12 * 2) != 0) &&
               (*(short *)(*(longlong *)(pFVar4 + (uVar13 >> 9) * 8) + uVar12 * 2) != -1)) break;
            uVar11 = (uint)uVar13 + 1;
            uVar13 = (ulonglong)uVar11;
            if ((int)uVar10 <= (int)uVar11) goto joined_r0x00014353248c;
          }
        }
        goto joined_r0x00014353248c;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar16);
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  return;
}

// operator[] @ 143569cd0

TVector<double> * __thiscall UE::Geometry::FMeshNormals::operator[](FMeshNormals *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Normals).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double> *)((this->Normals).AllocatorInstance.Data + (longlong)param_1 * 0x18);
}

// operator() @ 15049f5b0

bool __thiscall
`UE::Geometry::FMeshNormals::SetDegenerateTriangleNormalsToNeighborNormal'::__l19::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4544586195333546223>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4544586195333546223>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

