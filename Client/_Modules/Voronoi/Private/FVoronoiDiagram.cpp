// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voronoi
// Functions: 20

// FVoronoiDiagram @ 1436a0230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVoronoiDiagram * __thiscall
FVoronoiDiagram::FVoronoiDiagram
          (FVoronoiDiagram *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          TBox<double> *param_2,double param_3,double param_4)

{
  TPimplPtr<voro::container,0> *pTVar1;
  container *pcVar2;
  double dVar3;
  double dVar4;
  double in_XMM2_Qa;
  undefined1 auStack_88 [32];
  TPimplPtr<voro::container,0> local_68;
  undefined1 local_60 [16];
  double local_50;
  double dStack_48;
  undefined1 local_40 [16];
  undefined1 local_30;
  undefined7 uStack_2f;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  this->NumSites = 0;
  pTVar1 = &this->Container;
  (this->Bounds).IsValid = '\0';
  dVar4 = (param_2->Min).field0_0x0._s_0.X;
  dVar3 = (param_2->Min).field0_0x0._s_0.Y;
  pTVar1->Ptr = (container *)0x0;
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  local_30 = 1;
  dVar3 = dVar3 - param_3;
  local_60._8_4_ = SUB84(dVar3,0);
  local_60._0_8_ = dVar4 - param_3;
  local_60._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_50 = (param_2->Min).field0_0x0._s_0.Z - param_3;
  dStack_48 = param_3 + (param_2->Max).field0_0x0._s_0.X;
  dVar3 = (param_2->Max).field0_0x0._s_0.Z + param_3;
  local_40._8_4_ = SUB84(dVar3,0);
  local_40._0_8_ = (param_2->Max).field0_0x0._s_0.Y + param_3;
  local_40._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  ::`anonymous_namespace'::EmptyVoroContainerInit
            ((int)&local_68,(TBox<double> *)(ulonglong)(uint)param_1->ArrayNum,in_XMM2_Qa);
  if (param_4 <= 0.0) {
    ::`anonymous_namespace'::PutSites(local_68.Ptr,param_1,0);
  }
  else {
    ::`anonymous_namespace'::PutSitesWithDistanceCheck(local_68.Ptr,param_1,0,param_4);
  }
  if (&local_68 != pTVar1) {
    pcVar2 = pTVar1->Ptr;
    pTVar1->Ptr = local_68.Ptr;
    local_68.Ptr = (container *)0x0;
    if (pcVar2 == (container *)0x0) goto LAB_1436a0337;
    (**(code **)&pcVar2[-1].field_0xc0)(&pcVar2[-1].field_0xc0);
  }
  if (local_68.Ptr != (container *)0x0) {
    (**(code **)&local_68.Ptr[-1].field_0xc0)(&local_68.Ptr[-1].field_0xc0);
  }
LAB_1436a0337:
  (this->Bounds).Min.field0_0x0._s_0.X = (double)local_60._0_8_;
  (this->Bounds).Min.field0_0x0._s_0.Y = (double)local_60._8_8_;
  (this->Bounds).Min.field0_0x0._s_0.Z = local_50;
  (this->Bounds).Max.field0_0x0._s_0.X = dStack_48;
  (this->Bounds).Max.field0_0x0._s_0.Y = (double)local_40._0_8_;
  (this->Bounds).Max.field0_0x0._s_0.Z = (double)local_40._8_8_;
  (this->Bounds).IsValid = local_30;
  (this->Bounds).Pad[0] = (char)uStack_2f;
  (this->Bounds).Pad[1] = (char)((uint7)uStack_2f >> 8);
  (this->Bounds).Pad[2] = (char)((uint7)uStack_2f >> 0x10);
  (this->Bounds).Pad[3] = (char)((uint7)uStack_2f >> 0x18);
  (this->Bounds).Pad[4] = (char)((uint7)uStack_2f >> 0x20);
  (this->Bounds).Pad[5] = (char)((uint7)uStack_2f >> 0x28);
  (this->Bounds).Pad[6] = (char)((uint7)uStack_2f >> 0x30);
  this->NumSites = param_1->ArrayNum;
  return this;
}

// FVoronoiDiagram @ 1436a03a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVoronoiDiagram * __thiscall
FVoronoiDiagram::FVoronoiDiagram
          (FVoronoiDiagram *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          double param_2,double param_3)

{
  TPimplPtr<voro::container,0> *pTVar1;
  container *pcVar2;
  double dVar3;
  double dVar4;
  TBox<double> *pTVar5;
  undefined1 auStack_d8 [32];
  TPimplPtr<voro::container,0> local_b8;
  TBox<double> local_b0;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  undefined1 local_48;
  undefined7 uStack_47;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this->NumSites = 0;
  pTVar1 = &this->Container;
  (this->Bounds).IsValid = '\0';
  pTVar1->Ptr = (container *)0x0;
  pTVar5 = ::`anonymous_namespace'::SafeInitBounds(&local_b0,param_1);
  local_48 = 1;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  local_78 = (pTVar5->Min).field0_0x0._s_0.X - param_2;
  dStack_70 = (pTVar5->Min).field0_0x0._s_0.Y - param_2;
  local_68 = (pTVar5->Min).field0_0x0._s_0.Z - param_2;
  dStack_60 = param_2 + (pTVar5->Max).field0_0x0._s_0.X;
  dVar3 = param_2 + (pTVar5->Max).field0_0x0._s_0.Y;
  dVar4 = param_2 + (pTVar5->Max).field0_0x0._s_0.Z;
  local_58._8_4_ = SUB84(dVar4,0);
  local_58._0_8_ = dVar3;
  local_58._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  ::`anonymous_namespace'::EmptyVoroContainerInit
            ((int)&local_b8,(TBox<double> *)(ulonglong)(uint)param_1->ArrayNum,dVar3);
  if (param_3 <= 0.0) {
    ::`anonymous_namespace'::PutSites(local_b8.Ptr,param_1,0);
  }
  else {
    ::`anonymous_namespace'::PutSitesWithDistanceCheck(local_b8.Ptr,param_1,0,param_3);
  }
  if (&local_b8 != pTVar1) {
    pcVar2 = pTVar1->Ptr;
    pTVar1->Ptr = local_b8.Ptr;
    local_b8.Ptr = (container *)0x0;
    if (pcVar2 == (container *)0x0) goto LAB_1436a04d6;
    (**(code **)&pcVar2[-1].field_0xc0)(&pcVar2[-1].field_0xc0);
  }
  if (local_b8.Ptr != (container *)0x0) {
    (**(code **)&local_b8.Ptr[-1].field_0xc0)(&local_b8.Ptr[-1].field_0xc0);
  }
LAB_1436a04d6:
  (this->Bounds).Min.field0_0x0._s_0.X = local_78;
  (this->Bounds).Min.field0_0x0._s_0.Y = dStack_70;
  (this->Bounds).Min.field0_0x0._s_0.Z = local_68;
  (this->Bounds).Max.field0_0x0._s_0.X = dStack_60;
  (this->Bounds).Max.field0_0x0._s_0.Y = (double)local_58._0_8_;
  (this->Bounds).Max.field0_0x0._s_0.Z = (double)local_58._8_8_;
  (this->Bounds).IsValid = local_48;
  (this->Bounds).Pad[0] = (char)uStack_47;
  (this->Bounds).Pad[1] = (char)((uint7)uStack_47 >> 8);
  (this->Bounds).Pad[2] = (char)((uint7)uStack_47 >> 0x10);
  (this->Bounds).Pad[3] = (char)((uint7)uStack_47 >> 0x18);
  (this->Bounds).Pad[4] = (char)((uint7)uStack_47 >> 0x20);
  (this->Bounds).Pad[5] = (char)((uint7)uStack_47 >> 0x28);
  (this->Bounds).Pad[6] = (char)((uint7)uStack_47 >> 0x30);
  this->NumSites = param_1->ArrayNum;
  return this;
}

// FVoronoiDiagram @ 1436a0550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVoronoiDiagram * __thiscall
FVoronoiDiagram::FVoronoiDiagram
          (FVoronoiDiagram *this,int param_1,TBox<double> *param_2,double param_3)

{
  TPimplPtr<voro::container,0> *pTVar1;
  container *pcVar2;
  double dVar3;
  double dVar4;
  TPimplPtr<voro::container,0> TVar5;
  undefined4 in_register_00000014;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [16];
  double local_40;
  double dStack_38;
  undefined1 local_30 [16];
  undefined1 local_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  this->NumSites = 0;
  pTVar1 = &this->Container;
  (this->Bounds).IsValid = '\0';
  dVar4 = (param_2->Min).field0_0x0._s_0.X;
  dVar3 = (param_2->Min).field0_0x0._s_0.Y;
  pTVar1->Ptr = (container *)0x0;
  local_20 = 1;
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  dVar3 = dVar3 - param_3;
  local_50._8_4_ = SUB84(dVar3,0);
  local_50._0_8_ = dVar4 - param_3;
  local_50._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_40 = (param_2->Min).field0_0x0._s_0.Z - param_3;
  dStack_38 = param_3 + (param_2->Max).field0_0x0._s_0.X;
  dVar3 = (param_2->Max).field0_0x0._s_0.Z + param_3;
  local_30._8_4_ = SUB84(dVar3,0);
  local_30._0_8_ = (param_2->Max).field0_0x0._s_0.Y + param_3;
  local_30._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TVar5 = ::`anonymous_namespace'::EmptyVoroContainerInit
                    ((int)&local_58,(TBox<double> *)CONCAT44(in_register_00000014,param_1),dStack_38
                    );
  if (TVar5.Ptr != (container *)pTVar1) {
    pcVar2 = pTVar1->Ptr;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Ptr = *TVar5.Ptr;
    *(undefined8 *)TVar5.Ptr = 0;
    if (pcVar2 != (container *)0x0) {
      (**(code **)&pcVar2[-1].field_0xc0)(&pcVar2[-1].field_0xc0);
    }
  }
  if (local_58 != 0) {
    (**(code **)(local_58 + -0x10))(local_58 + -0x10);
  }
  (this->Bounds).Min.field0_0x0._s_0.X = (double)local_50._0_8_;
  (this->Bounds).Min.field0_0x0._s_0.Y = (double)local_50._8_8_;
  (this->Bounds).Min.field0_0x0._s_0.Z = local_40;
  (this->Bounds).Max.field0_0x0._s_0.X = dStack_38;
  (this->Bounds).Max.field0_0x0._s_0.Y = (double)local_30._0_8_;
  (this->Bounds).Max.field0_0x0._s_0.Z = (double)local_30._8_8_;
  (this->Bounds).IsValid = local_20;
  (this->Bounds).Pad[0] = (char)uStack_1f;
  (this->Bounds).Pad[1] = (char)((uint7)uStack_1f >> 8);
  (this->Bounds).Pad[2] = (char)((uint7)uStack_1f >> 0x10);
  (this->Bounds).Pad[3] = (char)((uint7)uStack_1f >> 0x18);
  (this->Bounds).Pad[4] = (char)((uint7)uStack_1f >> 0x20);
  (this->Bounds).Pad[5] = (char)((uint7)uStack_1f >> 0x28);
  (this->Bounds).Pad[6] = (char)((uint7)uStack_1f >> 0x30);
  return this;
}

// ~FVoronoiDiagram @ 1436a0670

void __thiscall FVoronoiDiagram::~FVoronoiDiagram(FVoronoiDiagram *this)

{
  container *pcVar1;
  
  pcVar1 = (this->Container).Ptr;
  if (pcVar1 != (container *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001436a0681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)&pcVar1[-1].field_0xc0)(&pcVar1[-1].field_0xc0);
    return;
  }
  return;
}

// operator() @ 1436a0690

void __thiscall
`FVoronoiDiagram::ComputeAllCells'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  code *pcVar14;
  bool bVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar25;
  undefined1 local_res10 [8];
  int local_res18;
  uint local_res20;
  TVector<double>_u_0 local_1f0;
  voro_compute<voro::container> local_1d8;
  voronoicell_neighbor local_138;
  
  voro::container::make_compute(*(container **)(*(longlong *)this + 8),&local_1d8);
  plVar7 = *(longlong **)((longlong)this + 8);
  uVar23 = param_1 + 1;
  piVar8 = *(int **)(*(longlong *)this + 8);
  local_res20 = piVar8[1];
  iVar4 = *piVar8;
  iVar17 = piVar8[3];
  iVar19 = piVar8[4];
  lVar9 = *(longlong *)(piVar8 + 0x2e);
  iVar5 = piVar8[0x32];
  lVar10 = *(longlong *)(piVar8 + 0x2c);
  lVar11 = *(longlong *)(piVar8 + 0x2a);
  uVar18 = 0;
  if ((int)uVar23 < (int)plVar7[1]) {
    uVar18 = ~uVar23 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar6 = *(int *)(*plVar7 + (longlong)(int)uVar23 * 4);
  plVar7 = *(longlong **)((longlong)this + 8);
  uVar18 = 0;
  if (param_1 < (int)plVar7[1]) {
    uVar18 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar24 = *(int *)(*plVar7 + (longlong)param_1 * 4);
  uVar20 = (ulonglong)iVar24;
  if (((((iVar24 < 0) || (iVar19 <= iVar24)) || (iVar6 < 0)) || (iVar19 < iVar6)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ijk_start >= 0 && ijk_start < nxyz && ijk_stop >= 0 && ijk_stop <= nxyz",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\c_loops.hh"
                          ,0xf8,L""), bVar15)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  voro::voronoicell_neighbor::voronoicell_neighbor(&local_138);
  uVar13 = (longlong)iVar24 / (longlong)iVar17;
  uVar21 = uVar13 & 0xffffffff;
  iVar24 = iVar24 - iVar17 * (int)uVar13;
  local_res18 = 0;
  uVar13 = (longlong)iVar24 / (longlong)iVar4;
  uVar22 = uVar13 & 0xffffffff;
  iVar24 = iVar24 - (int)uVar13 * iVar4;
  iVar17 = *(int *)(lVar9 + uVar20 * 4);
  while( true ) {
    if (iVar17 != 0) {
      do {
        do {
          iVar17 = local_res18;
          iVar19 = (int)uVar20;
          bVar15 = voro::voro_compute<voro::container>::compute_cell<voro::voronoicell_neighbor>
                             (&local_1d8,&local_138,iVar19,local_res18,iVar24,(int)uVar22,
                              (int)uVar21);
          if (bVar15) {
            uVar18 = *(uint *)(*(longlong *)(lVar11 + (longlong)iVar19 * 8) + (longlong)iVar17 * 4);
            lVar16 = (longlong)(iVar17 * iVar5);
            lVar12 = *(longlong *)(lVar10 + (longlong)iVar19 * 8);
            dVar1 = *(double *)(lVar12 + lVar16 * 8);
            dVar2 = *(double *)(lVar12 + 8 + lVar16 * 8);
            dVar3 = *(double *)(lVar12 + 0x10 + lVar16 * 8);
            plVar7 = *(longlong **)((longlong)this + 0x10);
            uVar23 = 0;
            if ((int)uVar18 < (int)plVar7[1]) {
              uVar23 = ~uVar18 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pTVar25 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                      ((longlong)(int)uVar18 * 0x40 + *plVar7);
            if ((pTVar25[1].ArrayNum != 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Cell.Faces.Num() == 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\Voronoi\\Voronoi.cpp"
                                    ,0x13d,L""), bVar15)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            local_1f0._s_0.X = dVar1;
            local_1f0._s_0.Y = dVar2;
            local_1f0._s_0.Z = dVar3;
            voro::voronoicell_neighbor::extractCellInfo
                      (&local_138,(TVector<double> *)&local_1f0._s_0,pTVar25,
                       (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar25 + 1),
                       (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar25 + 2),pTVar25 + 3);
          }
          else {
            local_res10[0] = bVar15;
            ``FVoronoiDiagram::ComputeAllCells'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>::
            operator()(local_res10);
            local_res18 = iVar17;
          }
          local_res18 = local_res18 + 1;
        } while (local_res18 < *(int *)(lVar9 + (longlong)iVar19 * 4));
        local_res18 = 0;
        do {
          iVar17 = (int)uVar20;
          uVar18 = iVar17 + 1;
          uVar20 = (ulonglong)uVar18;
          if (iVar6 <= (int)uVar18) goto LAB_1436a0a49;
          iVar24 = iVar24 + 1;
          if (iVar24 == iVar4) {
            iVar24 = 0;
            uVar18 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar18;
            if (uVar18 == local_res20) {
              uVar22 = 0;
              uVar21 = (ulonglong)((int)uVar21 + 1);
            }
          }
        } while (*(int *)(lVar9 + 4 + (longlong)iVar17 * 4) == 0);
      } while( true );
    }
    iVar17 = (int)uVar20;
    uVar18 = iVar17 + 1;
    uVar20 = (ulonglong)uVar18;
    if (iVar6 <= (int)uVar18) break;
    iVar24 = iVar24 + 1;
    if (iVar24 == iVar4) {
      iVar24 = 0;
      uVar18 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar18;
      if (uVar18 == local_res20) {
        uVar22 = 0;
        uVar21 = (ulonglong)((int)uVar21 + 1);
      }
    }
    iVar17 = *(int *)(lVar9 + 4 + (longlong)iVar17 * 4);
  }
LAB_1436a0a49:
  local_res18 = 0;
  voro::voronoicell_neighbor::~voronoicell_neighbor(&local_138);
  operator_delete__(local_1d8.qu);
  operator_delete__(local_1d8.mask);
  return;
}

// operator() @ 1436a0a90

void __thiscall
`FVoronoiDiagram::ComputeAllNeighbors'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 local_res10 [8];
  bool local_res18;
  uint local_res20;
  voro_compute<voro::container> local_1a8;
  voronoicell_neighbor local_108;
  
  voro::container::make_compute(*(container **)(*(longlong *)this + 8),&local_1a8);
  plVar3 = *(longlong **)((longlong)this + 8);
  uVar15 = param_1 + 1;
  piVar4 = *(int **)(*(longlong *)this + 8);
  local_res20 = piVar4[1];
  iVar1 = *piVar4;
  iVar10 = piVar4[3];
  iVar17 = piVar4[4];
  lVar5 = *(longlong *)(piVar4 + 0x2e);
  lVar6 = *(longlong *)(piVar4 + 0x2a);
  uVar11 = 0;
  if ((int)uVar15 < (int)plVar3[1]) {
    uVar11 = ~uVar15 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar2 = *(int *)(*plVar3 + (longlong)(int)uVar15 * 4);
  plVar3 = *(longlong **)((longlong)this + 8);
  uVar11 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar14 = *(int *)(*plVar3 + (longlong)param_1 * 4);
  uVar12 = (ulonglong)iVar14;
  if (((((iVar14 < 0) || (iVar17 <= iVar14)) || (iVar2 < 0)) || (iVar17 < iVar2)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ijk_start >= 0 && ijk_start < nxyz && ijk_stop >= 0 && ijk_stop <= nxyz",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\c_loops.hh"
                         ,0xf8,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  voro::voronoicell_neighbor::voronoicell_neighbor(&local_108);
  uVar7 = (longlong)iVar14 / (longlong)iVar10;
  uVar13 = uVar7 & 0xffffffff;
  iVar17 = 0;
  iVar14 = iVar14 - (int)uVar7 * iVar10;
  uVar7 = (longlong)iVar14 / (longlong)iVar1;
  uVar16 = uVar7 & 0xffffffff;
  iVar14 = iVar14 - (int)uVar7 * iVar1;
  iVar10 = *(int *)(lVar5 + uVar12 * 4);
  while( true ) {
    if (iVar10 != 0) {
      do {
        do {
          iVar10 = (int)uVar12;
          bVar9 = voro::voro_compute<voro::container>::compute_cell<voro::voronoicell_neighbor>
                            (&local_1a8,&local_108,iVar10,iVar17,iVar14,(int)uVar16,(int)uVar13);
          if (bVar9) {
            uVar11 = *(uint *)(*(longlong *)(lVar6 + (longlong)iVar10 * 8) + (longlong)iVar17 * 4);
            local_res18 = (bool)**(undefined1 **)((longlong)this + 0x18);
            plVar3 = *(longlong **)((longlong)this + 0x10);
            uVar15 = 0;
            if ((int)uVar11 < (int)plVar3[1]) {
              uVar15 = ~uVar11 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            voro::voronoicell_neighbor::neighborsTArray
                      (&local_108,
                       (TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((longlong)(int)uVar11 * 0x10 + *plVar3),local_res18);
          }
          else {
            local_res10[0] = bVar9;
            ``FVoronoiDiagram::ComputeAllNeighbors'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>
            ::operator()(local_res10);
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < *(int *)(lVar5 + (longlong)iVar10 * 4));
        iVar17 = 0;
        do {
          iVar10 = (int)uVar12;
          uVar11 = iVar10 + 1;
          uVar12 = (ulonglong)uVar11;
          if (iVar2 <= (int)uVar11) goto LAB_1436a0d7e;
          iVar14 = iVar14 + 1;
          if (iVar14 == iVar1) {
            iVar14 = 0;
            uVar11 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar11;
            if (uVar11 == local_res20) {
              uVar16 = 0;
              uVar13 = (ulonglong)((int)uVar13 + 1);
            }
          }
        } while (*(int *)(lVar5 + 4 + (longlong)iVar10 * 4) == 0);
      } while( true );
    }
    iVar10 = (int)uVar12;
    uVar11 = iVar10 + 1;
    uVar12 = (ulonglong)uVar11;
    if (iVar2 <= (int)uVar11) break;
    iVar14 = iVar14 + 1;
    if (iVar14 == iVar1) {
      iVar14 = 0;
      uVar11 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar11;
      if (uVar11 == local_res20) {
        uVar16 = 0;
        uVar13 = (ulonglong)((int)uVar13 + 1);
      }
    }
    iVar10 = *(int *)(lVar5 + 4 + (longlong)iVar10 * 4);
  }
LAB_1436a0d7e:
  voro::voronoicell_neighbor::~voronoicell_neighbor(&local_108);
  operator_delete__(local_1a8.qu);
  operator_delete__(local_1a8.mask);
  return;
}

// operator() @ 1436a0dc0

void __thiscall
`FVoronoiDiagram::ComputeCellEdges'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  ForAnyElementType *pFVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined4 uVar26;
  int local_res8;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  uint local_234;
  uint local_230;
  TArray<int,TSizedDefaultAllocator<32>_> local_228;
  undefined4 local_218;
  int local_214;
  uint local_210;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_208;
  int local_1f8;
  uint local_1f4;
  uint local_1f0;
  ForAnyElementType *local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  ulonglong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  TVector<double>_u_0 local_1a0;
  voronoicell_base local_188;
  voro_compute<voro::container> local_e8;
  
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar21 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_1e8 = (ForAnyElementType *)((longlong)param_1 * 0x20 + *plVar4);
  local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.ArrayNum = 0;
  local_208.ArrayMax = 0;
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  voro::container::make_compute(*(container **)(*(longlong *)this + 8),&local_e8);
  uVar23 = param_1 + 1;
  plVar4 = *(longlong **)((longlong)this + 0x10);
  piVar15 = *(int **)(*(longlong *)this + 8);
  local_214 = *piVar15;
  iVar13 = piVar15[4];
  local_210 = piVar15[1];
  iVar16 = piVar15[3];
  local_1f8 = piVar15[0x32];
  local_1b8 = *(longlong *)(piVar15 + 0x2c);
  local_1c0 = *(longlong *)(piVar15 + 0x2a);
  local_1c8 = *(longlong *)(piVar15 + 0x2e);
  uVar21 = 0;
  if ((int)uVar23 < (int)plVar4[1]) {
    uVar21 = ~uVar23 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar5 = *(longlong **)((longlong)this + 0x10);
  iVar3 = *(int *)(*plVar4 + (longlong)(int)uVar23 * 4);
  uVar21 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_234 = *(uint *)(*plVar5 + (longlong)param_1 * 4);
  uVar20 = (ulonglong)(int)local_234;
  if ((((((int)local_234 < 0) || (iVar13 <= (int)local_234)) || (iVar3 < 0)) || (iVar13 < iVar3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ijk_start >= 0 && ijk_start < nxyz && ijk_stop >= 0 && ijk_stop <= nxyz",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\c_loops.hh"
                          ,0xf8,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  voro::voronoicell_base::voronoicell_base(&local_188);
  local_188._padding_ = (longlong)&___7voronoicell_voro__6B_;
  local_res20 = 0;
  uVar24 = (longlong)(int)local_234 / (longlong)iVar16;
  local_230 = (uint)uVar24;
  uVar24 = uVar24 & 0xffffffff;
  local_res8 = local_234 - local_230 * iVar16;
  uVar22 = (longlong)local_res8 / (longlong)local_214;
  local_res18 = (uint)uVar22;
  uVar22 = uVar22 & 0xffffffff;
  local_res8 = local_res8 - local_res18 * local_214;
  iVar13 = *(int *)(local_1c8 + uVar20 * 4);
  while( true ) {
    lVar25 = local_1c8;
    iVar16 = local_res8;
    if (iVar13 != 0) {
      do {
        do {
          iVar13 = local_res20;
          iVar18 = (int)uVar20;
          bVar12 = voro::voro_compute<voro::container>::compute_cell<voro::voronoicell>
                             (&local_e8,(voronoicell *)&local_188,iVar18,local_res20,iVar16,
                              (int)uVar22,(int)uVar24);
          if (bVar12) {
            uVar26 = *(undefined4 *)
                      (*(longlong *)(local_1c0 + (longlong)iVar18 * 8) + (longlong)iVar13 * 4);
            lVar17 = *(longlong *)(local_1b8 + (longlong)iVar18 * 8);
            pdVar1 = (double *)(lVar17 + (longlong)(iVar13 * local_1f8) * 8);
            local_1a0._s_0.X = *pdVar1;
            local_1a0._s_0.Y = pdVar1[1];
            local_1a0._s_0.Z = *(double *)(lVar17 + 0x10 + (longlong)(iVar13 * local_1f8) * 8);
            local_218 = uVar26;
            voro::voronoicell::extractCellInfo
                      ((voronoicell *)&local_188,(TVector<double> *)&local_1a0._s_0,&local_208,
                       &local_228);
            uVar22 = (ulonglong)local_228.ArrayNum;
            uVar21 = 0;
            local_1d0 = 0;
            local_1a8 = uVar22;
            if (uVar22 != 0) {
              do {
                uVar19 = (uint)local_1d0;
                local_1f0 = ~uVar19 >> 0x1f;
                uVar23 = 0;
                if ((int)uVar19 < local_228.ArrayNum) {
                  uVar23 = local_1f0;
                }
                if ((uVar23 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                lVar25 = (longlong)(int)uVar19;
                iVar13 = *(int *)(local_228.AllocatorInstance.Data + lVar25 * 4);
                uVar19 = iVar13 + uVar21;
                uVar23 = 0;
                if ((int)uVar19 < local_228.ArrayNum) {
                  uVar23 = ~uVar19 >> 0x1f;
                }
                local_1f4 = uVar19;
                local_1b0 = lVar25;
                if ((uVar23 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar11 = local_1e8;
                local_1d8 = (longlong)iVar13;
                if (0 < iVar13) {
                  lVar17 = (longlong)(int)uVar21 * 4 + 4;
                  uVar23 = *(uint *)(local_228.AllocatorInstance.Data + (longlong)(int)uVar19 * 4);
                  do {
                    uVar21 = uVar21 + 1;
                    piVar15 = (int *)((longlong)&pFVar11[3].Data + 4);
                    iVar13 = *(int *)&pFVar11[3].Data;
                    local_1e0 = lVar17;
                    if (iVar13 == *piVar15) {
                      iVar13 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,pFVar11 + 2,piVar15);
                    }
                    *(int *)&pFVar11[3].Data = iVar13 + 1;
                    *(undefined4 *)(pFVar11[2].Data + (longlong)iVar13 * 4) = uVar26;
                    uVar19 = 0;
                    if ((int)uVar21 < local_228.ArrayNum) {
                      uVar19 = ~uVar21 >> 0x1f;
                    }
                    if ((uVar19 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    uVar19 = *(uint *)(local_228.AllocatorInstance.Data + lVar17);
                    uVar14 = 0;
                    if ((int)uVar19 < local_208.ArrayNum) {
                      uVar14 = ~uVar19 >> 0x1f;
                    }
                    if (uVar14 == 0) {
                      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar12) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                    }
                    FVar9.Data = local_208.AllocatorInstance.Data;
                    uVar14 = 0;
                    if ((int)uVar23 < local_208.ArrayNum) {
                      uVar14 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar14 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FVar10.Data = local_208.AllocatorInstance.Data;
                    piVar15 = (int *)((longlong)&pFVar11[1].Data + 4);
                    iVar13 = *(int *)&pFVar11[1].Data;
                    if (iVar13 == *piVar15) {
                      iVar13 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x830,pFVar11,piVar15);
                    }
                    *(int *)&pFVar11[1].Data = iVar13 + 1;
                    pFVar2 = FVar10.Data + (longlong)(int)uVar23 * 0x18;
                    uVar8 = *(undefined8 *)(pFVar2 + 8);
                    lVar25 = (longlong)iVar13;
                    pFVar6 = pFVar11->Data;
                    *(undefined8 *)(pFVar6 + lVar25 * 0x30) = *(undefined8 *)pFVar2;
                    *(undefined8 *)(pFVar6 + lVar25 * 0x30 + 8) = uVar8;
                    *(undefined8 *)(pFVar6 + lVar25 * 0x30 + 0x10) =
                         *(undefined8 *)(FVar10.Data + (longlong)(int)uVar23 * 0x18 + 0x10);
                    lVar17 = local_1e0 + 4;
                    local_1d8 = local_1d8 + -1;
                    pFVar2 = FVar9.Data + (longlong)(int)uVar19 * 0x18;
                    uVar8 = *(undefined8 *)(pFVar2 + 8);
                    *(undefined8 *)(pFVar6 + lVar25 * 0x30 + 0x18) = *(undefined8 *)pFVar2;
                    *(undefined8 *)(pFVar6 + lVar25 * 0x30 + 0x18 + 8) = uVar8;
                    *(undefined8 *)(pFVar6 + lVar25 * 0x30 + 0x28) =
                         *(undefined8 *)(FVar9.Data + (longlong)(int)uVar19 * 0x18 + 0x10);
                    uVar26 = local_218;
                    uVar23 = uVar19;
                  } while (local_1d8 != 0);
                  local_1d8 = 0;
                  uVar22 = local_1a8;
                  lVar25 = local_1b0;
                  local_1e0 = lVar17;
                }
                uVar20 = local_1d0;
                uVar21 = local_1f4 + 1;
                uVar23 = 0;
                if ((int)local_1d0 < local_228.ArrayNum) {
                  uVar23 = local_1f0;
                }
                if ((uVar23 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                local_1d0 = uVar20 + (longlong)
                                     (*(int *)(local_228.AllocatorInstance.Data + lVar25 * 4) + 1);
              } while (local_1d0 < uVar22);
              uVar20 = (ulonglong)local_234;
              uVar24 = (ulonglong)local_230;
              lVar25 = local_1c8;
            }
            uVar22 = (ulonglong)local_res18;
            iVar16 = local_res8;
          }
          else {
            local_res10[0] = bVar12;
            ``FVoronoiDiagram::ComputeCellEdges'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>::
            operator()(local_res10);
            local_res20 = iVar13;
          }
          local_res20 = local_res20 + 1;
        } while (local_res20 < *(int *)(lVar25 + (longlong)(int)uVar20 * 4));
        local_res20 = 0;
        local_res8 = iVar16;
        do {
          iVar13 = (int)uVar20;
          local_234 = iVar13 + 1;
          uVar20 = (ulonglong)local_234;
          if (iVar3 <= (int)local_234) goto LAB_1436a149c;
          local_res8 = local_res8 + 1;
          if (local_res8 == local_214) {
            local_res18 = (int)uVar22 + 1;
            uVar22 = (ulonglong)local_res18;
            local_res8 = 0;
            if (local_res18 == local_210) {
              uVar22 = 0;
              local_230 = (int)uVar24 + 1;
              uVar24 = (ulonglong)local_230;
              local_res18 = 0;
            }
          }
          iVar16 = local_res8;
        } while (*(int *)(lVar25 + 4 + (longlong)iVar13 * 4) == 0);
      } while( true );
    }
    iVar13 = (int)uVar20;
    local_234 = iVar13 + 1;
    uVar20 = (ulonglong)local_234;
    if (iVar3 <= (int)local_234) break;
    local_res8 = local_res8 + 1;
    if (local_res8 == local_214) {
      local_res18 = (int)uVar22 + 1;
      uVar22 = (ulonglong)local_res18;
      local_res8 = 0;
      if (local_res18 == local_210) {
        uVar22 = 0;
        local_230 = (int)uVar24 + 1;
        uVar24 = (ulonglong)local_230;
        local_res18 = 0;
      }
    }
    iVar13 = *(int *)(local_1c8 + 4 + (longlong)iVar13 * 4);
  }
LAB_1436a149c:
  local_res20 = 0;
  voro::voronoicell_base::~voronoicell_base(&local_188);
  operator_delete__(local_e8.qu);
  operator_delete__(local_e8.mask);
  if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
  if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.AllocatorInstance.Data);
  }
  return;
}

// AddSites @ 1436a1540

void __thiscall
FVoronoiDiagram::AddSites
          (FVoronoiDiagram *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          double param_2)

{
  container *pcVar1;
  
  pcVar1 = (this->Container).Ptr;
  if (0.0 < param_2) {
    ::`anonymous_namespace'::PutSitesWithDistanceCheck(pcVar1,param_1,this->NumSites,param_2);
    this->NumSites = this->NumSites + param_1->ArrayNum;
    return;
  }
  ::`anonymous_namespace'::PutSites(pcVar1,param_1,this->NumSites);
  this->NumSites = this->NumSites + param_1->ArrayNum;
  return;
}

// ComputeAllCells @ 1436a15d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FVoronoiDiagram::ComputeAllCells
          (FVoronoiDiagram *this,TArray<FVoronoiCellInfo,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  <lambda_1> local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  FVoronoiDiagram **local_30;
  FVoronoiDiagram *local_28;
  TArray<int,TSizedDefaultAllocator<32>_> *local_20;
  TArray<FVoronoiCellInfo,TSizedDefaultAllocator<32>_> *local_18;
  
  if ((this->Container).Ptr == (container *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Container",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\Voronoi\\Voronoi.cpp"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GetParallelBlockRanges(this,&local_58,param_2);
  if (local_58.ArrayNum < 3) {
    ComputeAllCellsSerial(this,param_1);
  }
  else {
    TArray<FVoronoiCellInfo,TSizedDefaultAllocator<32>_>::SetNum(param_1,this->NumSites,Default);
    local_20 = &local_58;
    local_48.DataPtr = (void **)0x0;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`FVoronoiDiagram::ComputeAllCells'::__l2::<lambda_1>,void,int>::
               Call;
    local_30 = &local_28;
    local_48.ArrayNum = 0;
    local_28 = this;
    local_18 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_58.ArrayNum + -1,1,
               (TFunctionRef<void___cdecl(int)> *)&local_38,local_res8,None,&local_48);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// ComputeAllCellsSerial @ 1436a16f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FVoronoiDiagram::ComputeAllCellsSerial
          (FVoronoiDiagram *this,TArray<FVoronoiCellInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  container *pcVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar21;
  int iVar22;
  undefined1 local_res8 [8];
  TArray<FVoronoiCellInfo,TSizedDefaultAllocator<32>_> *local_res10;
  uint local_res18;
  int local_res20;
  TVector<double>_u_0 local_1f0;
  voro_compute<voro::container> local_1d8;
  voronoicell_neighbor local_138;
  
  local_res10 = param_1;
  if (((this->Container).Ptr == (container *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Container",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\Voronoi\\Voronoi.cpp"
                          ,0xdc,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  voro::container::make_compute((this->Container).Ptr,&local_1d8);
  TArray<FVoronoiCellInfo,TSizedDefaultAllocator<32>_>::SetNum(param_1,this->NumSites,Default);
  pcVar8 = (this->Container).Ptr;
  local_res20 = *(int *)pcVar8;
  iVar4 = *(int *)&pcVar8->field_0x4;
  iVar5 = *(int *)&pcVar8->field_0x10;
  piVar9 = *(int **)&pcVar8->field_0xb8;
  iVar6 = *(int *)&pcVar8->field_0xc8;
  lVar10 = *(longlong *)&pcVar8->field_0xb0;
  lVar11 = *(longlong *)&pcVar8->field_0xa8;
  voro::voronoicell_neighbor::voronoicell_neighbor(&local_138);
  iVar22 = 0;
  iVar19 = 0;
  iVar18 = 0;
  iVar17 = 0;
  iVar20 = 0;
  iVar7 = *piVar9;
  do {
    if (iVar7 != 0) {
      do {
        do {
          bVar13 = voro::voro_compute<voro::container>::compute_cell<voro::voronoicell_neighbor>
                             (&local_1d8,&local_138,iVar19,iVar22,iVar20,iVar17,iVar18);
          if (bVar13) {
            local_res18 = *(uint *)(*(longlong *)(lVar11 + (longlong)iVar19 * 8) +
                                   (longlong)iVar22 * 4);
            lVar16 = (longlong)(iVar22 * iVar6);
            lVar15 = *(longlong *)(lVar10 + (longlong)iVar19 * 8);
            dVar1 = *(double *)(lVar15 + lVar16 * 8);
            dVar2 = *(double *)(lVar15 + 8 + lVar16 * 8);
            dVar3 = *(double *)(lVar15 + 0x10 + lVar16 * 8);
            uVar14 = 0;
            if ((int)local_res18 < local_res10->ArrayNum) {
              uVar14 = ~local_res18 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar21 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                      ((local_res10->AllocatorInstance).Data + (longlong)(int)local_res18 * 0x40);
            local_1f0._s_0.X = dVar1;
            local_1f0._s_0.Y = dVar2;
            local_1f0._s_0.Z = dVar3;
            voro::voronoicell_neighbor::extractCellInfo
                      (&local_138,(TVector<double> *)&local_1f0._s_0,pTVar21,
                       (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar21 + 1),
                       (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar21 + 2),pTVar21 + 3);
          }
          else {
            local_res8[0] = bVar13;
            `FVoronoiDiagram::ComputeAllCellsSerial'::__l14::<lambda_1>::operator()(local_res8);
          }
          iVar22 = iVar22 + 1;
        } while (iVar22 < piVar9[iVar19]);
        iVar22 = 0;
        do {
          lVar15 = (longlong)iVar19;
          iVar20 = iVar20 + 1;
          iVar19 = iVar19 + 1;
          if (iVar20 == local_res20) {
            iVar20 = 0;
            iVar17 = iVar17 + 1;
            if (iVar17 == iVar4) {
              iVar17 = 0;
              iVar18 = iVar18 + 1;
              if (iVar19 == iVar5) goto LAB_1436a1994;
            }
          }
        } while (piVar9[lVar15 + 1] == 0);
      } while( true );
    }
    lVar15 = (longlong)iVar19;
    iVar20 = iVar20 + 1;
    iVar19 = iVar19 + 1;
    if (iVar20 == local_res20) {
      iVar20 = 0;
      iVar17 = iVar17 + 1;
      if (iVar17 == iVar4) {
        iVar17 = 0;
        iVar18 = iVar18 + 1;
        if (iVar19 == iVar5) {
LAB_1436a1994:
          voro::voronoicell_neighbor::~voronoicell_neighbor(&local_138);
          operator_delete__(local_1d8.qu);
          operator_delete__(local_1d8.mask);
          return;
        }
      }
    }
    iVar7 = piVar9[lVar15 + 1];
  } while( true );
}

// ComputeAllNeighbors @ 1436a19e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FVoronoiDiagram::ComputeAllNeighbors
          (FVoronoiDiagram *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  <lambda_1> local_res8;
  undefined1 local_res18 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  FVoronoiDiagram **local_30;
  FVoronoiDiagram *local_28;
  TArray<int,TSizedDefaultAllocator<32>_> *local_20;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_18;
  undefined1 *local_10;
  
  local_res18[0] = param_2;
  if ((this->Container).Ptr == (container *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Container",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\Voronoi\\Voronoi.cpp"
                       ,0x146,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GetParallelBlockRanges(this,&local_58,param_3);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (param_1,this->NumSites,Default);
  local_20 = &local_58;
  local_10 = local_res18;
  local_48.DataPtr = (void **)0x0;
  local_48.ArrayNum = 0;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FVoronoiDiagram::ComputeAllNeighbors'::__l2::<lambda_1>,void,int>::
             Call;
  local_30 = &local_28;
  local_28 = this;
  local_18 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_58.ArrayNum + -1,1,
             (TFunctionRef<void___cdecl(int)> *)&local_38,local_res8,None,&local_48);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// ComputeCellEdges @ 1436a1b00

void __thiscall
FVoronoiDiagram::ComputeCellEdges
          (FVoronoiDiagram *this,
          TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
          *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  FChunkOutput *pFVar10;
  int iVar11;
  ulong64 uVar12;
  TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
  *pTVar13;
  <lambda_1> local_res8 [8];
  undefined1 local_88 [8];
  ForAnyElementType local_80;
  undefined8 local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  TArrayView<std::nullptr_t,int> local_60;
  code *local_50;
  FVoronoiDiagram **local_48;
  FVoronoiDiagram *local_40;
  ForAnyElementType *local_38;
  TArray<int,TSizedDefaultAllocator<32>_> *local_30;
  
  if (((this->Container).Ptr == (container *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Container",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\Voronoi\\Voronoi.cpp"
                         ,0x196,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  GetParallelBlockRanges(this,&local_70,param_3);
  if (local_70.ArrayNum < 3) {
    ComputeCellEdgesSerial(this,param_1,param_2);
  }
  else {
    uVar12 = 0;
    uVar7 = local_70.ArrayNum - 1;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = 0;
    if ((int)uVar7 < 1) {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
    }
    else {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,uVar7,&local_80,(int *)&local_78,(int *)((longlong)&local_78 + 4));
      DefaultConstructItems<_FVoronoiDiagram::ComputeCellEdges_::__l2::FChunkOutput,int>
                (local_80.Data + (longlong)iVar4 * 0x20,uVar7);
    }
    local_38 = &local_80;
    local_30 = &local_70;
    local_60.DataPtr = (void **)0x0;
    local_60.ArrayNum = 0;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<`FVoronoiDiagram::ComputeCellEdges'::__l2::<lambda_1>,void,int>::
               Call;
    local_48 = &local_40;
    local_40 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_70.ArrayNum + -1,1,
               (TFunctionRef<void___cdecl(int)> *)&local_50,local_res8[0],None,&local_60);
    iVar4 = (int)local_78;
    uVar6 = (ulonglong)(int)local_78;
    pFVar10 = (FChunkOutput *)(local_80.Data + uVar6 * 0x20);
    FVar8.Data = local_80.Data;
    while( true ) {
      if ((int)uVar6 != iVar4) {
        local_res8[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<`FVoronoiDiagram::ComputeCellEdges'::__l2::FChunkOutput,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
        uVar6 = local_78 & 0xffffffff;
      }
      iVar11 = (int)uVar12;
      if ((FChunkOutput *)FVar8.Data == pFVar10) break;
      uVar12 = (ulong64)(uint)(iVar11 + (((FChunkOutput *)FVar8.Data)->Edges).ArrayNum);
      FVar8.Data = FVar8.Data + 0x20;
    }
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar11,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar11,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    iVar4 = (int)local_78;
    pTVar13 = (TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
               *)(local_80.Data + (longlong)(int)local_78 * 0x20);
    pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_80.Data + 0x10);
    while( true ) {
      if ((int)local_78 != iVar4) {
        local_88[0] = 0;
        `TCheckedPointerIterator<`FVoronoiDiagram::ComputeCellEdges'::__l2::FChunkOutput,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_88);
      }
      pTVar1 = (TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
                *)(pTVar9 + -1);
      if (pTVar1 == pTVar13) break;
      if ((param_1 == pTVar1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar11 = pTVar9[-1].ArrayNum;
      if (iVar11 != 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x30,8,iVar11,&param_1->AllocatorInstance,&param_1->ArrayNum,
                           &param_1->ArrayMax);
        memcpy((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x30,
               (pTVar1->AllocatorInstance).Data,(longlong)iVar11 * 0x30);
      }
      if ((param_2 == pTVar9) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar11 = pTVar9->ArrayNum;
      if (iVar11 != 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar11,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        memcpy((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,
               (pTVar9->AllocatorInstance).Data,(longlong)iVar11 << 2);
      }
      pTVar9 = pTVar9 + 2;
    }
    DestructItems<_FVoronoiDiagram::ComputeCellEdges_::__l2::FChunkOutput,int>
              ((FChunkOutput *)local_80.Data,(int)local_78);
    if ((FChunkOutput *)local_80.Data != (FChunkOutput *)0x0) {
      FMemory::Free(local_80.Data);
    }
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return;
}

// ComputeCellEdgesSerial @ 1436a1e80

void __thiscall
FVoronoiDiagram::ComputeCellEdgesSerial
          (FVoronoiDiagram *this,
          TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
          *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  container *pcVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  undefined1 local_res8 [8];
  TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
  *local_res10;
  int local_res20;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  TArray<int,TSizedDefaultAllocator<32>_> local_218;
  int local_208;
  int local_204;
  int local_200;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1f8;
  int local_1e8;
  undefined4 local_1e4;
  uint local_1e0;
  uint local_1dc;
  longlong local_1d8;
  longlong local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  int *local_1a0;
  TVector<double>_u_0 local_198;
  voronoicell_base local_178;
  voro_compute<voro::container> local_d8;
  
  local_res10 = param_1;
  if (((this->Container).Ptr == (container *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Container",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\Voronoi\\Voronoi.cpp"
                          ,0x166,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar3 = (this->Container).Ptr;
  local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.ArrayNum = 0;
  local_1f8.ArrayMax = 0;
  local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.ArrayNum = 0;
  local_218.ArrayMax = 0;
  local_1e8 = *(int *)&pcVar3->field_0xc8;
  piVar23 = *(int **)&pcVar3->field_0xb8;
  iVar12 = *(int *)pcVar3;
  iVar19 = *(int *)&pcVar3->field_0x4;
  iVar24 = *(int *)&pcVar3->field_0x10;
  local_1b8 = *(longlong *)&pcVar3->field_0xb0;
  local_1c0 = *(longlong *)&pcVar3->field_0xa8;
  local_208 = iVar12;
  local_204 = iVar19;
  local_200 = iVar24;
  local_1a0 = piVar23;
  voro::voronoicell_base::voronoicell_base(&local_178);
  local_178._padding_ = (longlong)&___7voronoicell_voro__6B_;
  voro::container::make_compute((this->Container).Ptr,&local_d8);
  iVar22 = 0;
  iVar15 = 0;
  local_224 = 0;
  iVar16 = 0;
  iVar17 = *piVar23;
  while (iVar17 == 0) {
    lVar14 = (longlong)iVar22;
    iVar16 = iVar16 + 1;
    iVar22 = iVar22 + 1;
    if (iVar16 == iVar12) {
      iVar16 = 0;
      iVar15 = iVar15 + 1;
      if ((iVar15 == iVar19) && (iVar15 = 0, iVar22 == iVar24)) goto LAB_1436a246a;
    }
    iVar17 = piVar23[lVar14 + 1];
  }
  iVar19 = 0;
  iVar24 = 0;
  iVar17 = 0;
  local_res20 = 0;
  local_21c = 0;
  local_228 = 0;
  iVar12 = *piVar23;
  do {
    iVar15 = local_res20;
    local_220 = iVar19;
    if (iVar12 != 0) {
      do {
        do {
          bVar10 = voro::voro_compute<voro::container>::compute_cell<voro::voronoicell>
                             (&local_d8,(voronoicell *)&local_178,iVar19,local_224,iVar15,iVar17,
                              iVar24);
          if (bVar10) {
            local_1e4 = *(undefined4 *)
                         (*(longlong *)(local_1c0 + (longlong)iVar19 * 8) + (longlong)local_224 * 4)
            ;
            lVar14 = *(longlong *)(local_1b8 + (longlong)iVar19 * 8);
            pdVar1 = (double *)(lVar14 + (longlong)(local_224 * local_1e8) * 8);
            local_198._s_0.X = *pdVar1;
            local_198._s_0.Y = pdVar1[1];
            local_198._s_0.Z = *(double *)(lVar14 + 0x10 + (longlong)(local_224 * local_1e8) * 8);
            voro::voronoicell::extractCellInfo
                      ((voronoicell *)&local_178,(TVector<double> *)&local_198._s_0,&local_1f8,
                       &local_218);
            local_1a8 = (ulonglong)local_218.ArrayNum;
            uVar21 = 0;
            local_1c8 = 0;
            iVar15 = local_res20;
            iVar17 = local_228;
            if (local_1a8 != 0) {
              do {
                uVar20 = (uint)local_1c8;
                local_1dc = ~uVar20 >> 0x1f;
                uVar11 = 0;
                if ((int)uVar20 < local_218.ArrayNum) {
                  uVar11 = local_1dc;
                }
                if ((uVar11 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                lVar14 = (longlong)(int)uVar20;
                iVar12 = *(int *)(local_218.AllocatorInstance.Data + lVar14 * 4);
                uVar20 = iVar12 + uVar21;
                uVar11 = 0;
                if ((int)uVar20 < local_218.ArrayNum) {
                  uVar11 = ~uVar20 >> 0x1f;
                }
                local_1e0 = uVar20;
                local_1b0 = lVar14;
                if ((uVar11 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                local_1d0 = (longlong)iVar12;
                if (0 < iVar12) {
                  lVar18 = (longlong)(int)uVar21 * 4 + 4;
                  uVar11 = *(uint *)(local_218.AllocatorInstance.Data + (longlong)(int)uVar20 * 4);
                  do {
                    uVar21 = uVar21 + 1;
                    iVar12 = param_2->ArrayNum;
                    local_1d8 = lVar18;
                    if (iVar12 == param_2->ArrayMax) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
                    }
                    param_2->ArrayNum = iVar12 + 1;
                    *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar12 * 4) =
                         local_1e4;
                    uVar20 = 0;
                    if ((int)uVar21 < local_218.ArrayNum) {
                      uVar20 = ~uVar21 >> 0x1f;
                    }
                    if ((uVar20 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    uVar20 = *(uint *)(local_218.AllocatorInstance.Data + lVar18);
                    uVar13 = 0;
                    if ((int)uVar20 < local_1f8.ArrayNum) {
                      uVar13 = ~uVar20 >> 0x1f;
                    }
                    if (uVar13 == 0) {
                      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar10) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                    }
                    FVar7.Data = local_1f8.AllocatorInstance.Data;
                    uVar13 = 0;
                    if ((int)uVar11 < local_1f8.ArrayNum) {
                      uVar13 = ~uVar11 >> 0x1f;
                    }
                    if ((uVar13 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    FVar8.Data = local_1f8.AllocatorInstance.Data;
                    iVar12 = local_res10->ArrayNum;
                    if (iVar12 == local_res10->ArrayMax) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x830,&local_res10->AllocatorInstance,
                                          &local_res10->ArrayMax);
                    }
                    local_res10->ArrayNum = iVar12 + 1;
                    pFVar2 = FVar8.Data + (longlong)(int)uVar11 * 0x18;
                    uVar6 = *(undefined8 *)(pFVar2 + 8);
                    lVar14 = (longlong)iVar12;
                    pFVar4 = (local_res10->AllocatorInstance).Data;
                    *(undefined8 *)(pFVar4 + lVar14 * 0x30) = *(undefined8 *)pFVar2;
                    *(undefined8 *)(pFVar4 + lVar14 * 0x30 + 8) = uVar6;
                    *(undefined8 *)(pFVar4 + lVar14 * 0x30 + 0x10) =
                         *(undefined8 *)(FVar8.Data + (longlong)(int)uVar11 * 0x18 + 0x10);
                    lVar18 = local_1d8 + 4;
                    local_1d0 = local_1d0 + -1;
                    pFVar2 = FVar7.Data + (longlong)(int)uVar20 * 0x18;
                    uVar6 = *(undefined8 *)(pFVar2 + 8);
                    *(undefined8 *)(pFVar4 + lVar14 * 0x30 + 0x18) = *(undefined8 *)pFVar2;
                    *(undefined8 *)(pFVar4 + lVar14 * 0x30 + 0x18 + 8) = uVar6;
                    *(undefined8 *)(pFVar4 + lVar14 * 0x30 + 0x28) =
                         *(undefined8 *)(FVar7.Data + (longlong)(int)uVar20 * 0x18 + 0x10);
                    uVar11 = uVar20;
                  } while (local_1d0 != 0);
                  local_1d0 = 0;
                  lVar14 = local_1b0;
                  local_1d8 = lVar18;
                }
                uVar9 = local_1c8;
                uVar21 = local_1e0 + 1;
                uVar11 = 0;
                if ((int)local_1c8 < local_218.ArrayNum) {
                  uVar11 = local_1dc;
                }
                if ((uVar11 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                local_1c8 = uVar9 + (longlong)
                                    (*(int *)(local_218.AllocatorInstance.Data + lVar14 * 4) + 1);
                piVar23 = local_1a0;
                iVar19 = local_220;
                iVar24 = local_21c;
              } while (local_1c8 < local_1a8);
            }
          }
          else {
            local_res8[0] = bVar10;
            `FVoronoiDiagram::ComputeCellEdgesSerial'::__l17::<lambda_1>::operator()(local_res8);
          }
          local_224 = local_224 + 1;
        } while (local_224 < piVar23[iVar19]);
        local_224 = 0;
        local_res20 = iVar15;
        do {
          local_res20 = local_res20 + 1;
          lVar14 = (longlong)iVar19;
          iVar19 = iVar19 + 1;
          if (local_res20 == local_208) {
            iVar17 = iVar17 + 1;
            local_res20 = 0;
            local_228 = iVar17;
            if (iVar17 == local_204) {
              iVar17 = 0;
              iVar24 = iVar24 + 1;
              local_228 = 0;
              local_21c = iVar24;
              if (iVar19 == local_200) goto LAB_1436a246a;
            }
          }
          iVar15 = local_res20;
          local_220 = iVar19;
        } while (piVar23[lVar14 + 1] == 0);
      } while( true );
    }
    local_res20 = local_res20 + 1;
    lVar14 = (longlong)iVar19;
    iVar19 = iVar19 + 1;
    if (local_res20 == local_208) {
      iVar17 = iVar17 + 1;
      local_res20 = 0;
      local_228 = iVar17;
      if (iVar17 == local_204) {
        iVar17 = 0;
        iVar24 = iVar24 + 1;
        local_228 = 0;
        local_21c = iVar24;
        if (iVar19 == local_200) {
LAB_1436a246a:
          operator_delete__(local_d8.qu);
          operator_delete__(local_d8.mask);
          voro::voronoicell_base::~voronoicell_base(&local_178);
          if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.AllocatorInstance.Data);
          }
          if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.AllocatorInstance.Data);
          }
          return;
        }
      }
    }
    iVar12 = piVar23[lVar14 + 1];
  } while( true );
}

// FindCell @ 1436a26b0

int __thiscall
FVoronoiDiagram::FindCell
          (FVoronoiDiagram *this,TVector<double> *param_1,FVoronoiComputeHelper *param_2,
          TVector<double> *param_3)

{
  container *pcVar1;
  voro_compute<voro::container> *pvVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res8 [2];
  
  pcVar1 = (this->Container).Ptr;
  if (((pcVar1 == (container *)0x0) ||
      (pvVar2 = (param_2->Compute).Ptr, pvVar2 == (voro_compute<voro::container> *)0x0)) ||
     (pvVar2->con != pcVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Container && ComputeHelper.Compute && &ComputeHelper.Compute->con == Container.Get()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\Voronoi\\Voronoi.cpp"
                       ,0x1e5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  bVar4 = voro::container::find_voronoi_cell
                    ((this->Container).Ptr,(param_1->field0_0x0)._s_0.X,(param_1->field0_0x0)._s_0.Y
                     ,(param_1->field0_0x0)._s_0.Z,(double *)param_3,&(param_3->field0_0x0)._s_0.Y,
                     &(param_3->field0_0x0)._s_0.Z,local_res8,(param_2->Compute).Ptr);
  iVar5 = -1;
  if (bVar4) {
    iVar5 = local_res8[0];
  }
  return iVar5;
}

// GetBounds @ 1436a2780

TBox<double> * __cdecl
FVoronoiDiagram::GetBounds
          (TBox<double> *__return_storage_ptr__,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  TVector<double>_u_0 local_58;
  double local_40;
  double dStack_38;
  double local_30;
  
  ::`anonymous_namespace'::SafeInitBounds((TBox<double> *)&local_58._s_0,param_1);
  auVar1._8_4_ = SUB84(local_58._s_0.Y - param_2,0);
  auVar1._0_8_ = local_58._s_0.X - param_2;
  auVar1._12_4_ = (int)((ulonglong)(local_58._s_0.Y - param_2) >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = auVar1;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_58._s_0.Z - param_2;
  auVar2._8_4_ = SUB84(dStack_38 + param_2,0);
  auVar2._0_8_ = local_40 + param_2;
  auVar2._12_4_ = (int)((ulonglong)(dStack_38 + param_2) >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Max).field0_0x0 = auVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = local_30 + param_2;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// GetComputeHelper @ 1436a27f0

FVoronoiComputeHelper __thiscall FVoronoiDiagram::GetComputeHelper(FVoronoiDiagram *this)

{
  container *pcVar1;
  voro_compute<voro::container> *pvVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  TPimplPtr<voro::voro_compute<voro::container>,0> in_RDX;
  undefined1 local_b8 [144];
  int *local_28;
  int *local_20;
  
  puVar5 = (undefined8 *)0x0;
  (in_RDX.Ptr)->con = (container *)0x0;
  pvVar2 = voro::container::make_compute
                     ((this->Container).Ptr,(voro_compute<voro::container> *)(local_b8 + 8));
  puVar3 = ::operator_new(0xb0);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    *puVar3 = UE::Core::Private::PimplPtr::DeleterFunc<voro::voro_compute<voro::container>_>;
    puVar3[2] = pvVar2->con;
    puVar3[3] = pvVar2->boxx;
    puVar3[4] = pvVar2->boxy;
    puVar3[5] = pvVar2->boxz;
    puVar3[6] = pvVar2->xsp;
    puVar3[7] = pvVar2->ysp;
    puVar3[8] = pvVar2->zsp;
    *(int *)(puVar3 + 9) = pvVar2->hx;
    *(int *)((longlong)puVar3 + 0x4c) = pvVar2->hy;
    *(int *)(puVar3 + 10) = pvVar2->hz;
    *(int *)((longlong)puVar3 + 0x54) = pvVar2->hxy;
    *(int *)(puVar3 + 0xb) = pvVar2->hxyz;
    *(int *)((longlong)puVar3 + 0x5c) = pvVar2->ps;
    puVar3[0xc] = pvVar2->id;
    puVar3[0xd] = pvVar2->p;
    puVar3[0xe] = pvVar2->co;
    puVar3[0xf] = pvVar2->bxsq;
    *(uint *)(puVar3 + 0x10) = pvVar2->mv;
    *(int *)((longlong)puVar3 + 0x84) = pvVar2->qu_size;
    puVar3[0x11] = pvVar2->wl;
    puVar3[0x12] = pvVar2->mrad;
    puVar3[0x13] = pvVar2->mask;
    puVar3[0x14] = pvVar2->qu;
    puVar3[0x15] = pvVar2->qu_l;
    pvVar2->qu = (int *)0x0;
    pvVar2->mask = (uint *)0x0;
    puVar5 = puVar3;
  }
  if ((voro_compute<voro::container> *)local_b8 == in_RDX.Ptr) {
    if ((container *)(puVar5 + 2) == (container *)0x0) goto LAB_1436a295a;
    pcVar4 = (code *)*puVar5;
  }
  else {
    pcVar1 = (in_RDX.Ptr)->con;
    (in_RDX.Ptr)->con = (container *)(puVar5 + 2);
    if (pcVar1 == (container *)0x0) goto LAB_1436a295a;
    pcVar4 = *(code **)&pcVar1[-1].field_0xc0;
    puVar5 = (undefined8 *)&pcVar1[-1].field_0xc0;
  }
  (*pcVar4)(puVar5);
LAB_1436a295a:
  operator_delete__(local_20);
  operator_delete__(local_28);
  return (FVoronoiComputeHelper)(TPimplPtr<voro::voro_compute<voro::container>,0>)in_RDX.Ptr;
}

// GetParallelBlockRanges @ 1436a29a0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FVoronoiDiagram::GetParallelBlockRanges
          (FVoronoiDiagram *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  container *pcVar14;
  int local_38;
  undefined4 local_34 [7];
  
  uVar12 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if ((param_1 < 0) &&
     (param_1 = (int)((this->NumSites >> 0x1f & 0x3fU) + this->NumSites) >> 6, param_1 < 0x96)) {
    param_1 = 0x96;
  }
  if ((double)param_1 < (double)this->NumSites * __real_3ff8000000000000) {
    uVar11 = this->NumSites / param_1 + 2;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    uVar13 = 0;
    uVar6 = uVar13;
    if (0 < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar11,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
      uVar6 = *piVar1;
    }
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_34[0] = 0;
    if (((pFVar2 <= (FScriptContainerElement *)local_34) &&
        ((FScriptContainerElement *)local_34 < pFVar2 + (longlong)(int)uVar6 * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
         local_34[0];
    pcVar14 = (this->Container).Ptr;
    local_38 = 0;
    if (0 < *(int *)&pcVar14->field_0x10) {
      do {
        if (param_1 <= (int)uVar12) {
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
              ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)*piVar1 * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar8;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
               local_38;
          uVar12 = 0;
        }
        pcVar14 = (this->Container).Ptr;
        lVar9 = (longlong)local_38;
        local_38 = local_38 + 1;
        uVar13 = uVar12 + *(int *)(*(longlong *)&pcVar14->field_0xb8 + lVar9 * 4);
        uVar12 = uVar13;
      } while (local_38 < *(int *)&pcVar14->field_0x10);
    }
    puVar10 = &pcVar14->field_0x10;
    if ((double)(int)uVar13 < (double)param_1 * __real_3fe0000000000000) {
      uVar7 = *(undefined4 *)puVar10;
      uVar11 = __return_storage_ptr__->ArrayNum - 1;
      uVar12 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      *(undefined4 *)
       ((__return_storage_ptr__->AllocatorInstance).Data +
       (longlong)__return_storage_ptr__->ArrayNum * 4 + -4) = uVar7;
      return __return_storage_ptr__;
    }
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar2 <= puVar10) && (puVar10 < pFVar2 + (longlong)*piVar1 * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    uVar7 = *(undefined4 *)puVar10;
  }
  else {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) = 0;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    puVar10 = &((this->Container).Ptr)->field_0x10;
    if (((pFVar2 <= puVar10) && (puVar10 < pFVar2 + (longlong)*piVar1 * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    uVar7 = *(undefined4 *)puVar10;
  }
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) = uVar7;
  return __return_storage_ptr__;
}

// Initialize @ 1436a2f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FVoronoiDiagram::Initialize
          (FVoronoiDiagram *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          TBox<double> *param_2,double param_3,double param_4)

{
  TPimplPtr<voro::container,0> *pTVar1;
  container *pcVar2;
  double dVar3;
  double in_XMM2_Qa;
  undefined1 auStack_88 [32];
  TPimplPtr<voro::container,0> local_68;
  undefined1 local_60 [16];
  double local_50;
  double dStack_48;
  undefined1 local_40 [16];
  undefined1 local_30;
  undefined7 uStack_2f;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_30 = 1;
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  dVar3 = (param_2->Min).field0_0x0._s_0.Y - param_3;
  local_60._8_4_ = SUB84(dVar3,0);
  local_60._0_8_ = (param_2->Min).field0_0x0._s_0.X - param_3;
  local_60._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_50 = (param_2->Min).field0_0x0._s_0.Z - param_3;
  dStack_48 = param_3 + (param_2->Max).field0_0x0._s_0.X;
  dVar3 = (param_2->Max).field0_0x0._s_0.Z + param_3;
  local_40._8_4_ = SUB84(dVar3,0);
  local_40._0_8_ = (param_2->Max).field0_0x0._s_0.Y + param_3;
  local_40._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  ::`anonymous_namespace'::EmptyVoroContainerInit
            ((int)&local_68,(TBox<double> *)(ulonglong)(uint)param_1->ArrayNum,in_XMM2_Qa);
  if (param_4 <= 0.0) {
    ::`anonymous_namespace'::PutSites(local_68.Ptr,param_1,0);
  }
  else {
    ::`anonymous_namespace'::PutSitesWithDistanceCheck(local_68.Ptr,param_1,0,param_4);
  }
  pTVar1 = &this->Container;
  if (&local_68 != pTVar1) {
    pcVar2 = pTVar1->Ptr;
    pTVar1->Ptr = local_68.Ptr;
    local_68.Ptr = (container *)0x0;
    if (pcVar2 == (container *)0x0) goto LAB_1436a3011;
    (**(code **)&pcVar2[-1].field_0xc0)(&pcVar2[-1].field_0xc0);
  }
  if (local_68.Ptr != (container *)0x0) {
    (**(code **)&local_68.Ptr[-1].field_0xc0)(&local_68.Ptr[-1].field_0xc0);
  }
LAB_1436a3011:
  (this->Bounds).Min.field0_0x0._s_0.X = (double)local_60._0_8_;
  (this->Bounds).Min.field0_0x0._s_0.Y = (double)local_60._8_8_;
  (this->Bounds).Min.field0_0x0._s_0.Z = local_50;
  (this->Bounds).Max.field0_0x0._s_0.X = dStack_48;
  (this->Bounds).Max.field0_0x0._s_0.Y = (double)local_40._0_8_;
  (this->Bounds).Max.field0_0x0._s_0.Z = (double)local_40._8_8_;
  (this->Bounds).IsValid = local_30;
  (this->Bounds).Pad[0] = (char)uStack_2f;
  (this->Bounds).Pad[1] = (char)((uint7)uStack_2f >> 8);
  (this->Bounds).Pad[2] = (char)((uint7)uStack_2f >> 0x10);
  (this->Bounds).Pad[3] = (char)((uint7)uStack_2f >> 0x18);
  (this->Bounds).Pad[4] = (char)((uint7)uStack_2f >> 0x20);
  (this->Bounds).Pad[5] = (char)((uint7)uStack_2f >> 0x28);
  (this->Bounds).Pad[6] = (char)((uint7)uStack_2f >> 0x30);
  this->NumSites = param_1->ArrayNum;
  return;
}

// operator() @ 1504a12a0

bool __thiscall `FVoronoiDiagram::ComputeCellEdgesSerial'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7244755443392708232>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7244755443392708232>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a12e0

bool __thiscall `FVoronoiDiagram::ComputeAllCellsSerial'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7244755443392708375>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7244755443392708375>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

