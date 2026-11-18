// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 7

// <lambda_invoker_cdecl> @ 14c940f30

bool __cdecl
UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::<lambda_42_>::
<lambda_invoker_cdecl>(void)

{
  return false;
}

// operator() @ 14c94fdb0

void __thiscall
`UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::fill_spans'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  
  uVar11 = param_1 * *(int *)((longlong)this + 8);
  pfVar7 = UE::Geometry::TDenseGrid3<float>::operator[]
                     (*(TDenseGrid3<float> **)((longlong)this + 0x18),uVar11);
  fVar4 = __real_7f7fffff;
  fVar12 = *pfVar7;
  if (fVar12 == __real_7f7fffff) {
    fVar12 = 0.0;
  }
  if (0 < *(int *)((longlong)this + 8)) {
    lVar9 = (longlong)(int)uVar11 * 4;
    uVar8 = uVar11;
    do {
      plVar1 = *(longlong **)((longlong)this + 0x18);
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (int)plVar1[1]) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar2 = *(longlong **)((longlong)this + 0x18);
      if (fVar4 == *(float *)(*plVar1 + lVar9)) {
        uVar6 = 0;
        if ((int)uVar8 < (int)plVar2[1]) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(float *)(*plVar2 + lVar9) = fVar12;
      }
      else {
        uVar6 = 0;
        if ((int)uVar8 < (int)plVar2[1]) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar12 = *(float *)(*plVar2 + lVar9);
        if (fVar12 < *(float *)(*(longlong *)this + 0x20)) {
          fVar12 = 0.0;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
    } while ((int)(uVar8 - uVar11) < *(int *)((longlong)this + 8));
  }
  return;
}

// operator() @ 14c94ffa0

void __thiscall
`UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::make_grid'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  code *pcVar6;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *this_00;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  double dVar15;
  TVector<double>_u_0 local_78 [3];
  
  lVar12 = *(longlong *)this;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar12 + 0x30));
  pcVar6 = *(code **)(lVar12 + 0x30);
  plVar11 = (longlong *)(lVar12 + 0x40);
  if (*(longlong **)(lVar12 + 0x58) != (longlong *)0x0) {
    plVar11 = *(longlong **)(lVar12 + 0x58);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  cVar7 = (*pcVar6)(uVar10);
  if (cVar7 == '\0') {
    iVar5 = *(int *)((longlong)this + 0x1c);
    uVar13 = (iVar5 * (param_1 / iVar5) + param_1 % iVar5) * *(int *)((longlong)this + 0x18);
    if (0 < *(int *)((longlong)this + 0x18)) {
      iVar14 = -uVar13;
      lVar12 = (longlong)(int)uVar13 * 4;
      do {
        plVar11 = *(longlong **)((longlong)this + 0x30);
        uVar9 = 0;
        if ((int)uVar13 < (int)plVar11[1]) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((double)*(float *)(*plVar11 + lVar12) < *(double *)(*(longlong *)this + 0x10)) {
          fVar1 = *(float *)((longlong)this + 0x14);
          this_00 = *(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)(*(longlong *)this + 8);
          fVar2 = *(float *)((longlong)this + 0x10);
          fVar3 = *(float *)((longlong)this + 0xc);
          fVar4 = *(float *)((longlong)this + 8);
          UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(this_00,false);
          local_78[0]._0_8_ = (double)((float)(int)(iVar14 + uVar13) * fVar1 + fVar4);
          local_78[0]._8_8_ = (double)((float)(param_1 % iVar5) * fVar1 + fVar3);
          local_78[0]._16_8_ = (double)((float)(param_1 / iVar5) * fVar1 + fVar2);
          dVar15 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::
                   branch_fast_winding_num
                             (this_00,this_00->Tree->RootIndex,(TVector<double> *)&local_78[0]._s_0)
          ;
          plVar11 = *(longlong **)((longlong)this + 0x28);
          uVar9 = 0;
          if ((int)uVar13 < (int)plVar11[1]) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(float *)(*plVar11 + lVar12) = (float)dVar15;
        }
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 4;
      } while ((int)(iVar14 + uVar13) < *(int *)((longlong)this + 0x18));
    }
  }
  return;
}

// operator() @ 14c9501f0

void __thiscall
`UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::make_grid_dense'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *this_00;
  undefined1 uVar8;
  undefined8 uVar9;
  float *pfVar10;
  longlong *plVar11;
  double dVar12;
  TVector<double>_u_0 local_58 [3];
  
  if (param_1 == (param_1 / 100) * 100) {
    lVar6 = *(longlong *)this;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar6 + 0x30));
    pcVar7 = *(code **)(lVar6 + 0x30);
    plVar11 = (longlong *)(lVar6 + 0x40);
    if (*(longlong **)(lVar6 + 0x58) != (longlong *)0x0) {
      plVar11 = *(longlong **)(lVar6 + 0x58);
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    uVar8 = (*pcVar7)(uVar9);
    **(undefined1 **)((longlong)this + 0x20) = uVar8;
  }
  if (**(char **)((longlong)this + 0x20) == '\0') {
    fVar1 = *(float *)((longlong)this + 0x10);
    iVar4 = *(int *)(*(longlong *)((longlong)this + 0x18) + 0x10);
    iVar5 = *(int *)(*(longlong *)((longlong)this + 0x18) + 0x14);
    dVar12 = (double)*(float *)((longlong)this + 0x14);
    this_00 = *(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)(*(longlong *)this + 8);
    fVar2 = *(float *)((longlong)this + 0xc);
    fVar3 = *(float *)((longlong)this + 8);
    UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(this_00,false);
    local_58[0]._0_8_ = (double)(param_1 % iVar4) * dVar12 + (double)fVar3;
    local_58[0]._8_8_ =
         (double)(int)((longlong)
                       ((ulonglong)(uint)((int)((longlong)param_1 / (longlong)iVar4) >> 0x1f) <<
                        0x20 | (longlong)param_1 / (longlong)iVar4 & 0xffffffffU) % (longlong)iVar5)
         * dVar12 + (double)fVar2;
    local_58[0]._16_8_ = (double)(param_1 / (iVar5 * iVar4)) * dVar12 + (double)fVar1;
    dVar12 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                       (this_00,this_00->Tree->RootIndex,(TVector<double> *)&local_58[0]._s_0);
    pfVar10 = UE::Geometry::TDenseGrid3<float>::operator[]
                        (*(TDenseGrid3<float> **)((longlong)this + 0x18),param_1);
    *pfVar10 = (float)dVar12;
  }
  return;
}

// operator() @ 14c957350

void __thiscall
`UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::make_grid'::__l18::<lambda_2>::
operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  int *piVar9;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *this_00;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar10;
  float fVar11;
  undefined1 uVar12;
  bool bVar13;
  int iVar14;
  undefined8 uVar15;
  float *pfVar16;
  uint uVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  double dVar26;
  float fVar27;
  uint local_res20 [2];
  int local_c8 [2];
  longlong *local_c0;
  TVector<double>_u_0 local_b8 [5];
  
  if (param_1 == (param_1 / 100) * 100) {
    lVar5 = *(longlong *)this;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar5 + 0x30));
    pcVar6 = *(code **)(lVar5 + 0x30);
    plVar18 = (longlong *)(lVar5 + 0x40);
    if (*(longlong **)(lVar5 + 0x58) != (longlong *)0x0) {
      plVar18 = *(longlong **)(lVar5 + 0x58);
    }
    uVar15 = (**(code **)(*plVar18 + 8))();
    uVar12 = (*pcVar6)(uVar15);
    **(undefined1 **)((longlong)this + 0x60) = uVar12;
  }
  if (**(char **)((longlong)this + 0x60) == '\0') {
    plVar7 = *(longlong **)((longlong)this + 0x48);
    plVar18 = (longlong *)((longlong)this + 0x28);
    lVar5 = *plVar18;
    uVar17 = 0;
    if (param_1 < (int)plVar7[1]) {
      uVar17 = (uint)~param_1 >> 0x1f;
    }
    local_c0 = plVar18;
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    plVar8 = (longlong *)*plVar18;
    iVar14 = *(int *)(*plVar7 + (longlong)param_1 * 4);
    uVar10 = (longlong)iVar14 / (longlong)*(int *)(lVar5 + 0x10);
    iVar19 = iVar14 % *(int *)(lVar5 + 0x10);
    iVar20 = (int)((longlong)((ulonglong)(uint)((int)uVar10 >> 0x1f) << 0x20 | uVar10 & 0xffffffff)
                  % (longlong)*(int *)(lVar5 + 0x14));
    iVar14 = iVar14 / (*(int *)(lVar5 + 0x14) * *(int *)(lVar5 + 0x10));
    uVar21 = (iVar14 * *(int *)((longlong)plVar8 + 0x14) + iVar20) * (int)plVar8[2] + iVar19;
    uVar17 = 0;
    if ((int)uVar21 < (int)plVar8[1]) {
      uVar17 = ~uVar21 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (local_c0 = plVar18,
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar11 = __real_7f7fffff;
    piVar25 = &IndexUtil::GridOffsets26[0].field0_0x0._s_0.Y;
    fVar1 = *(float *)(*plVar8 + (longlong)(int)uVar21 * 4);
    do {
      piVar9 = *(int **)((longlong)this + 0x38);
      iVar24 = ((FVector3i_u_0_s_0 *)(piVar25 + -1))->X + iVar19;
      iVar23 = *piVar25 + iVar20;
      iVar22 = piVar25[1] + iVar14;
      if (((((*piVar9 <= iVar24) && (piVar9[1] <= iVar23)) && (piVar9[2] <= iVar22)) &&
          ((iVar24 <= piVar9[3] && (iVar23 <= piVar9[4])))) && (iVar22 <= piVar9[5])) {
        plVar18 = (longlong *)*plVar18;
        uVar21 = (iVar22 * *(int *)((longlong)plVar18 + 0x14) + iVar23) * (int)plVar18[2] + iVar24;
        uVar17 = 0;
        if ((int)uVar21 < (int)plVar18[1]) {
          uVar17 = ~uVar21 >> 0x1f;
        }
        local_res20[0] = uVar21;
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar27 = *(float *)(*plVar18 + (longlong)(int)uVar21 * 4);
        if (fVar27 == fVar11) {
          fVar27 = *(float *)((longlong)this + 0x14);
          this_00 = *(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)(*(longlong *)this + 8);
          fVar2 = *(float *)((longlong)this + 0x10);
          fVar3 = *(float *)((longlong)this + 0xc);
          fVar4 = *(float *)((longlong)this + 8);
          UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(this_00,false);
          local_b8[0]._0_8_ = (double)((float)iVar24 * fVar27 + fVar4);
          local_b8[0]._8_8_ = (double)((float)iVar23 * fVar27 + fVar3);
          local_b8[0]._16_8_ = (double)((float)iVar22 * fVar27 + fVar2);
          dVar26 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::
                   branch_fast_winding_num
                             (this_00,this_00->Tree->RootIndex,(TVector<double> *)&local_b8[0]._s_0)
          ;
          fVar27 = (float)dVar26;
          pfVar16 = UE::Geometry::TDenseGrid3<float>::operator[]
                              ((TDenseGrid3<float> *)*local_c0,uVar21);
          *pfVar16 = fVar27;
        }
        plVar18 = *(longlong **)((longlong)this + 0x40);
        uVar17 = 0;
        if ((int)uVar21 < (int)plVar18[1]) {
          uVar17 = ~uVar21 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(char *)((longlong)(int)uVar21 + *plVar18) == '\0') {
          fVar2 = *(float *)(*(longlong *)this + 0x20);
          if (fVar2 < fVar1) {
LAB_14c95770c:
            if (fVar2 < fVar27) goto LAB_14c957761;
          }
          else if (fVar27 <= fVar2) {
            if (fVar1 <= fVar2) goto LAB_14c957761;
            goto LAB_14c95770c;
          }
          lpCriticalSection = *(LPCRITICAL_SECTION *)((longlong)this + 0x58);
          if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection(lpCriticalSection);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
                      ((longlong)this + 0x50),local_c8,(bool *)local_res20);
          LeaveCriticalSection(lpCriticalSection);
        }
      }
LAB_14c957761:
      piVar25 = piVar25 + 3;
      plVar18 = local_c0;
    } while ((longlong)piVar25 < 0x150aa30ec);
  }
  return;
}

// Compute @ 14c978c40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::Compute
          (TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3> *this)

{
  TDenseGrid3<float> *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  uint uVar5;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  undefined1 local_res8 [8];
  TVector<float>_u_0 local_c8;
  TArrayView<std::nullptr_t,int> local_b8;
  code *local_a8;
  TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3> **local_a0;
  TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3> *local_98;
  undefined8 local_90;
  float local_88;
  float local_84;
  TDenseGrid3<float> *local_80;
  undefined1 *local_78;
  
  pTVar6 = this->FastWinding->Tree;
  uVar5 = pTVar6->RootIndex;
  if ((int)uVar5 < 0) {
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2828200105734045879>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                        ,0xb7,"RootIndex >= 0");
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    uVar16 = (ulonglong)(uVar5 & 0x1ff);
    lVar7 = *(longlong *)
             ((pTVar6->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8);
    dVar1 = *(double *)(lVar7 + uVar16 * 0x18);
    lVar8 = *(longlong *)
             ((pTVar6->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8);
    dVar2 = *(double *)(lVar7 + 8 + uVar16 * 0x18);
    dVar20 = *(double *)(lVar7 + 0x10 + uVar16 * 0x18);
    dVar12 = dVar1 - *(double *)(lVar8 + uVar16 * 0x18);
    dVar1 = dVar1 + *(double *)(lVar8 + uVar16 * 0x18);
    dVar11 = dVar2 + *(double *)(lVar8 + 8 + uVar16 * 0x18);
    dVar2 = dVar2 - *(double *)(lVar8 + 8 + uVar16 * 0x18);
    dVar10 = dVar20 + *(double *)(lVar8 + 0x10 + uVar16 * 0x18);
    dVar20 = dVar20 - *(double *)(lVar8 + 0x10 + uVar16 * 0x18);
    if (((dVar12 <= dVar1) && (dVar2 <= dVar11)) && (dVar20 <= dVar10)) {
      dVar3 = this->CellSize;
      fVar21 = (float)this->BufferCells * (float)dVar3;
      fVar18 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y * fVar21;
      fVar19 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z * fVar21;
      (this->GridOrigin).field0_0x0._s_0.X =
           (float)dVar12 - UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X * fVar21;
      (this->GridOrigin).field0_0x0._s_0.Y = (float)dVar2 - fVar18;
      (this->GridOrigin).field0_0x0._s_0.Z = (float)dVar20 - fVar19;
      fVar18 = __real_3f800000 / (float)dVar3;
      iVar14 = (int)(((UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y * fVar21 +
                      (float)dVar11) - (this->GridOrigin).field0_0x0._s_0.Y) * fVar18) + 1;
      iVar17 = (int)(((UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z * fVar21 +
                      (float)dVar10) - (this->GridOrigin).field0_0x0._s_0.Z) * fVar18) + 1;
      iVar15 = (int)(((UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X * fVar21 + (float)dVar1
                      ) - (this->GridOrigin).field0_0x0._s_0.X) * fVar18) + 1;
      if (((-1 < iVar15) && (-1 < iVar14)) && (-1 < iVar17)) {
        dVar1 = this->CellSize;
        this_00 = &this->WindingGrid;
        if (this->ComputeMode == FullGrid) {
          uVar4 = *(undefined8 *)&(this->GridOrigin).field0_0x0;
          fVar18 = (this->GridOrigin).field0_0x0._s_0.Z;
          TDenseGrid3<float>::Resize(this_00,iVar15,iVar14,iVar17,Default);
          TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(this->FastWinding,false);
          local_78 = local_res8;
          local_res8[0] = 0;
          local_a8 = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::make_grid_dense'::__l2::<lambda_1>,void,int>
                     ::Call;
          local_a0 = &local_98;
          local_b8.DataPtr = (void **)0x0;
          local_b8.ArrayNum = 0;
          local_98 = this;
          local_90 = uVar4;
          local_88 = fVar18;
          local_84 = (float)dVar1;
          local_80 = this_00;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",
                     (this->WindingGrid).Dimensions.field0_0x0._s_0.Z *
                     (this->WindingGrid).Dimensions.field0_0x0._s_0.Y *
                     (this->WindingGrid).Dimensions.field0_0x0._s_0.X,1,
                     (TFunctionRef<void___cdecl(int)> *)&local_a8,(<lambda_1>)0x0,None,&local_b8);
        }
        else {
          local_c8._0_8_ = *(undefined8 *)&(this->GridOrigin).field0_0x0;
          local_c8._s_0.Z = (this->GridOrigin).field0_0x0._s_0.Z;
          make_grid(this,(TVector<float> *)&local_c8._s_0,(float)dVar1,iVar15,iVar14,iVar17,this_00)
          ;
        }
      }
      if (this->bWantMeshSDFGrid == false) {
        TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&(this->MeshSDF).Grid.Buffer,0,Default);
        *(undefined8 *)&(this->MeshSDF).Grid.Dimensions.field0_0x0 = 0;
        (this->MeshSDF).Grid.Dimensions.field0_0x0._s_0.Z = 0;
        TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&(this->MeshSDF).ClosestTriGrid.Buffer,0,Default);
        *(undefined8 *)&(this->MeshSDF).ClosestTriGrid.Dimensions.field0_0x0 = 0;
        (this->MeshSDF).ClosestTriGrid.Dimensions.field0_0x0._s_0.Z = 0;
        TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&(this->MeshSDF).IntersectionsGrid.Buffer,0,Default);
        *(undefined8 *)&(this->MeshSDF).IntersectionsGrid.Dimensions.field0_0x0 = 0;
        (this->MeshSDF).IntersectionsGrid.Dimensions.field0_0x0._s_0.Z = 0;
      }
    }
  }
  return;
}

// make_grid @ 14c989910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::make_grid
          (TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3> *this,TVector<float> *param_1,
          float param_2,int param_3,int param_4,int param_5,TDenseGrid3<float> *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  <lambda_1> <Var9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  undefined8 uVar13;
  byte bVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  TFunction<bool___cdecl(void)> *pTVar25;
  undefined1 auStackY_408 [32];
  <lambda_1> local_3b8 [8];
  ForAnyElementType local_3b0;
  int local_3a8;
  int iStack_3a4;
  char local_3a0 [4];
  uint local_39c;
  undefined4 local_398;
  int local_394;
  TArray<bool,TSizedDefaultAllocator<32>_> local_390;
  int local_380;
  longlong *local_378;
  int iStack_370;
  uint uStack_36c;
  TBitArray<FDefaultBitArrayAllocator> *local_368;
  undefined4 uStack_360;
  uint uStack_35c;
  uint local_358;
  undefined4 uStack_354;
  int iStack_350;
  undefined4 uStack_34c;
  TVector<float> *local_348;
  TFunction<bool___cdecl(void)> *local_340;
  TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3> *local_338;
  undefined8 local_330;
  undefined4 local_328;
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310;
  int local_30c;
  longlong *local_308;
  longlong *local_300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f8;
  undefined8 uStack_2d8;
  longlong *local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c8;
  undefined8 uStack_2a8;
  TArrayView<std::nullptr_t,int> local_2a0;
  code *local_290;
  TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3> **local_288;
  TArrayView<std::nullptr_t,int> local_280;
  TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3> *local_270;
  int local_268;
  int local_264;
  int local_260;
  TDenseGrid3<float> *local_258;
  code *local_250;
  TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3> **local_248;
  TArrayView<std::nullptr_t,int> local_240;
  code *local_230;
  TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3> **local_228;
  TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3> *local_220;
  undefined8 local_218;
  float local_210;
  float local_20c;
  int local_208;
  int local_204;
  int local_200;
  TDenseGrid3<float> *local_1f8;
  TDenseGrid3<float> *local_1f0;
  TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3> *local_1e8;
  undefined8 local_1e0;
  float local_1d8;
  float local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  TDenseGrid3<float> *local_1c0;
  TDenseGrid3<float> *local_1b8;
  undefined8 *local_1b0;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_1a8;
  ForAnyElementType *local_1a0;
  undefined1 *local_198;
  _RTL_CRITICAL_SECTION *local_190;
  char *local_188;
  TVector<double>_u_0 local_178;
  double local_160;
  double local_158;
  double local_150;
  undefined4 local_12c;
  undefined4 local_10c;
  undefined1 local_108 [32];
  uint *local_e8;
  uint local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4;
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  _RTL_CRITICAL_SECTION local_b8;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_394 = param_3;
  local_348 = param_1;
  local_338 = this;
  TDenseGrid3<float>::Resize(param_6,param_3,param_4,param_5,Default);
  fVar8 = __real_7f7fffff;
  TDenseGrid3<float>::Assign(param_6,__real_7f7fffff);
  TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(this->FastWinding,false);
  pTVar25 = &this->CancelF;
  (this->MeshSDF).bComputeSigns = false;
  local_340 = pTVar25;
  TFunction<bool___cdecl(void)>::operator=(&(this->MeshSDF).CancelF,pTVar25);
  pTVar5 = this->FastWinding->Tree;
  uVar20 = pTVar5->RootIndex;
  if ((int)uVar20 < 0) {
    bVar10 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2828200105734045879>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                        ,0xb7,"RootIndex >= 0");
    local_178._s_0.Z = __real_7fefffffffffffff;
    local_150 = __real_ffefffffffffffff;
    local_178._s_0.Y = __real_7fefffffffffffff;
    local_158 = __real_ffefffffffffffff;
    local_160 = __real_ffefffffffffffff;
    local_178._s_0.X = __real_7fefffffffffffff;
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    uVar18 = (ulonglong)(uVar20 & 0x1ff);
    lVar15 = *(longlong *)
              ((pTVar5->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8);
    dVar1 = *(double *)(lVar15 + uVar18 * 0x18);
    lVar6 = *(longlong *)
             ((pTVar5->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8);
    dVar2 = *(double *)(lVar15 + 8 + uVar18 * 0x18);
    dVar3 = *(double *)(lVar15 + 0x10 + uVar18 * 0x18);
    local_178._s_0.Z = dVar3 - *(double *)(lVar6 + 0x10 + uVar18 * 0x18);
    local_150 = dVar3 + *(double *)(lVar6 + 0x10 + uVar18 * 0x18);
    local_178._s_0.Y = dVar2 - *(double *)(lVar6 + 8 + uVar18 * 0x18);
    local_158 = dVar2 + *(double *)(lVar6 + 8 + uVar18 * 0x18);
    local_160 = dVar1 + *(double *)(lVar6 + uVar18 * 0x18);
    local_178._s_0.X = dVar1 - *(double *)(lVar6 + uVar18 * 0x18);
  }
  TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::Compute
            (&this->MeshSDF,(TAxisAlignedBox3<double> *)&local_178._s_0);
  Core::Private::Function::CheckCallable(*(void **)pTVar25);
  plVar17 = *(longlong **)&(this->CancelF).field_0x28;
  pcVar7 = *(code **)pTVar25;
  plVar16 = (longlong *)&(this->CancelF).field_0x10;
  if (plVar17 != (longlong *)0x0) {
    plVar16 = plVar17;
  }
  uVar13 = (**(code **)(*plVar16 + 8))();
  cVar11 = (*pcVar7)(uVar13);
  if (cVar11 == '\0') {
    local_1f0 = &(this->MeshSDF).Grid;
    local_200 = param_5;
    local_380 = param_4 * param_5;
    local_218 = *(undefined8 *)&local_348->field0_0x0;
    local_210 = (local_348->field0_0x0)._s_0.Z;
    local_208 = local_394;
    local_280.DataPtr = (void **)0x0;
    local_280.ArrayNum = 0;
    local_250 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::make_grid'::__l2::<lambda_1>,void,int>
                ::Call;
    local_248 = &local_220;
    local_204 = param_4;
    local_1f8 = param_6;
    local_220 = this;
    local_20c = param_2;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_380,1,(TFunctionRef<void___cdecl(int)> *)&local_250,
               local_3b8[0],None,&local_280);
    Core::Private::Function::CheckCallable(*(void **)pTVar25);
    plVar17 = *(longlong **)&(this->CancelF).field_0x28;
    pcVar7 = *(code **)pTVar25;
    plVar16 = (longlong *)&(this->CancelF).field_0x10;
    if (plVar17 != (longlong *)0x0) {
      plVar16 = plVar17;
    }
    uVar13 = (**(code **)(*plVar16 + 8))();
    cVar11 = (*pcVar7)(uVar13);
    if (cVar11 == '\0') {
      iVar21 = (param_6->Dimensions).field0_0x0._s_0.X;
      iVar19 = (param_6->Dimensions).field0_0x0._s_0.Y;
      iVar4 = (param_6->Dimensions).field0_0x0._s_0.Z;
      local_330 = 0;
      local_324 = iVar21 + -1;
      local_328 = 0;
      local_320 = iVar19 + -1;
      local_31c = iVar4 + -1;
      local_390.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_390.ArrayNum = 0;
      local_390.ArrayMax = 0;
      TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (&local_390,iVar4 * iVar19 * iVar21,Default);
      local_3b0.Data = (FScriptContainerElement *)0x0;
      local_3a8 = 0;
      iStack_3a4 = 0;
      local_39c = 0;
      if (0 < local_390.ArrayNum) {
        do {
          uVar20 = local_39c;
          uVar23 = 0;
          if ((int)local_39c < (param_6->Buffer).ArrayNum) {
            uVar23 = ~local_39c >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (fVar8 != *(float *)((param_6->Buffer).AllocatorInstance.Data +
                                 (longlong)(int)uVar20 * 4)) {
            if (((local_3b0.Data <= (FScriptContainerElement *)&local_39c) &&
                ((FScriptContainerElement *)&local_39c < local_3b0.Data + (longlong)iStack_3a4 * 4))
               && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (local_3a8 == iStack_3a4) {
              local_3a8 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_3b0,&iStack_3a4);
            }
            lVar15 = (longlong)local_3a8;
            local_3a8 = local_3a8 + 1;
            *(uint *)(local_3b0.Data + lVar15 * 4) = local_39c;
            lVar15 = (longlong)(int)local_39c;
            uVar20 = 0;
            if ((int)local_39c < local_390.ArrayNum) {
              uVar20 = ~local_39c >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_390.AllocatorInstance.Data[lVar15] = (FScriptContainerElement)0x1;
          }
          local_39c = local_39c + 1;
        } while ((int)local_39c < local_390.ArrayNum);
      }
      Core::Private::Function::CheckCallable(*(void **)pTVar25);
      plVar17 = *(longlong **)&(this->CancelF).field_0x28;
      pcVar7 = *(code **)pTVar25;
      plVar16 = (longlong *)&(this->CancelF).field_0x10;
      if (plVar17 != (longlong *)0x0) {
        plVar16 = plVar17;
      }
      uVar13 = (**(code **)(*plVar16 + 8))();
      cVar11 = (*pcVar7)(uVar13);
      if (cVar11 == '\0') {
        local_dc = 0x80;
        local_108._0_8_ = (FScriptContainerElement *)0x0;
        local_108._8_8_ = 0;
        local_e8 = (uint *)0x0;
        local_e0 = 0;
        local_d4 = 0;
        local_c8 = (ForElementType<FSetElementId>)0x0;
        local_c0 = 0;
        local_d8 = 0xffffffff;
        InitializeCriticalSectionAndSpinCount(&local_b8,4000);
        <Var9 = local_3b8[0];
        local_308 = (longlong *)&(this->CancelF).field_0x10;
        plVar17 = local_308;
        while( true ) {
          iVar21 = 0;
          Core::Private::Function::CheckCallable(*(void **)pTVar25);
          plVar16 = *(longlong **)&(this->CancelF).field_0x28;
          pcVar7 = *(code **)pTVar25;
          if (plVar16 != (longlong *)0x0) {
            plVar17 = plVar16;
          }
          uVar13 = (**(code **)(*plVar17 + 8))();
          cVar11 = (*pcVar7)(uVar13);
          if (cVar11 != '\0') break;
          local_1c8 = param_5;
          local_1e0 = *(undefined8 *)&local_348->field0_0x0;
          local_1d8 = (local_348->field0_0x0)._s_0.Z;
          local_1d0 = local_394;
          local_1cc = param_4;
          local_1b8 = &(this->MeshSDF).Grid;
          local_1b0 = &local_330;
          local_1a8 = &local_390;
          local_1a0 = &local_3b0;
          local_198 = local_108;
          local_190 = &local_b8;
          local_188 = local_3a0;
          local_230 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::make_grid'::__l18::<lambda_2>,void,int>
                      ::Call;
          local_228 = &local_1e8;
          local_1c0 = param_6;
          local_240.DataPtr = (void **)0x0;
          local_240.ArrayNum = 0;
          local_3a0[0] = cVar11;
          local_1e8 = this;
          local_1d4 = param_2;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",local_3a8,1,(TFunctionRef<void___cdecl(int)> *)&local_230,
                     <Var9,None,&local_240);
          uVar20 = local_e0;
          iVar19 = local_108._8_4_ - local_d4;
          if (iVar19 == 0) {
            Core::Private::Function::CheckCallable(*(void **)pTVar25);
            pcVar7 = *(code **)pTVar25;
            plVar17 = (longlong *)&pTVar25->field_0x10;
            if (*(longlong **)&pTVar25->field_0x28 != (longlong *)0x0) {
              plVar17 = *(longlong **)&pTVar25->field_0x28;
            }
            uVar13 = (**(code **)(*plVar17 + 8))(plVar17);
            cVar11 = (*pcVar7)(uVar13);
            if (cVar11 == '\0') {
              local_268 = local_394;
              local_264 = param_4;
              local_290 = Core::Private::Function::
                          TFunctionRefCaller<`UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::fill_spans'::__l2::<lambda_1>,void,int>
                          ::Call;
              local_288 = &local_270;
              local_260 = param_5;
              local_258 = param_6;
              local_2a0.DataPtr = (void **)0x0;
              local_2a0.ArrayNum = 0;
              local_270 = this;
              ParallelForImpl::
              ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                        (L"ParallelFor Task",local_380,1,
                         (TFunctionRef<void___cdecl(int)> *)&local_290,local_3b8[0],None,&local_2a0)
              ;
            }
            break;
          }
          uStack_36c = 1;
          local_358 = 0;
          uStack_35c = 0;
          iStack_370 = iVar21;
          if (local_e0 != 0) {
            puVar22 = (uint *)(local_108 + 0x10);
            if (local_e8 != (uint *)0x0) {
              puVar22 = local_e8;
            }
            uVar23 = *puVar22;
            local_358 = iVar21;
            while (uVar23 == 0) {
              lVar15 = (longlong)iStack_370;
              local_358 = local_358 + 0x20;
              iStack_370 = iStack_370 + 1;
              uStack_35c = local_e0;
              if ((int)((local_e0 - 1) + ((int)(local_e0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_370)
              goto LAB_14c98a030;
              uVar23 = puVar22[lVar15 + 1];
            }
            uStack_36c = -uVar23 & uVar23;
            uVar18 = (ulonglong)uStack_36c * 2 + 1;
            lVar15 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_318 = (int)lVar15;
            uStack_35c = local_358 + -1 + local_318;
            if ((int)local_e0 < (int)uStack_35c) {
              uStack_35c = local_e0;
            }
          }
LAB_14c98a030:
          local_378 = (longlong *)local_108;
          local_368 = (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10);
          uVar23 = local_e0 & 0xffffffe0;
          TStack_2f8._padding_ = CONCAT44(uStack_36c,iStack_370);
          uStack_360 = 0xffffffff;
          TStack_2f8.CurrentBitIndex = uStack_35c;
          TStack_2f8.UnvisitedBitMask = 0xffffffff;
          uStack_354 = local_12c;
          TStack_2f8._28_4_ = local_12c;
          TStack_2f8.BaseBitIndex = local_358;
          uStack_2d8 = CONCAT44(uStack_34c,iVar19);
          iVar21 = (int)local_e0 >> 5;
          bVar14 = (byte)local_e0;
          iStack_350 = iVar19;
          local_300 = local_378;
          TStack_2f8.Array = local_368;
          if (((int)local_e0 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (uVar20 != local_e0) {
            puVar22 = (uint *)(local_108 + 0x10);
            if (local_e8 != (uint *)0x0) {
              puVar22 = local_e8;
            }
            uVar20 = -1 << (bVar14 & 0x1f) & puVar22[iVar21];
            while (uVar20 == 0) {
              lVar15 = (longlong)iVar21;
              uVar23 = uVar23 + 0x20;
              iVar21 = iVar21 + 1;
              uVar20 = local_e0;
              if ((int)((local_e0 - 1) + ((int)(local_e0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
              goto LAB_14c98a141;
              uVar20 = puVar22[lVar15 + 1];
            }
            uVar18 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_314 = (int)lVar15;
            uVar20 = (uVar23 - 1) + local_314;
            if ((int)local_e0 < (int)uVar20) {
              uVar20 = local_e0;
            }
          }
LAB_14c98a141:
          uVar23 = 0;
          while( true ) {
            plVar17 = local_300;
            if ((int)local_300[1] - *(int *)((longlong)local_300 + 0x34) != (int)uStack_2d8) {
              local_3a0[1] = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3a0 + 1);
            }
            if (((TStack_2f8.CurrentBitIndex == uVar20) &&
                (TStack_2f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10))) &&
               (plVar17 == (longlong *)local_108)) break;
            uVar24 = *(uint *)(*plVar17 + (longlong)TStack_2f8.CurrentBitIndex * 0xc);
            uVar12 = uVar23;
            if ((int)uVar24 < local_390.ArrayNum) {
              uVar12 = ~uVar24 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_390.AllocatorInstance.Data[(int)uVar24] = (FScriptContainerElement)0x1;
            TStack_2f8.UnvisitedBitMask = TStack_2f8.UnvisitedBitMask & ~TStack_2f8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f8);
          }
          local_3a8 = 0;
          if (iStack_3a4 < 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_3b0,0,&iStack_3a4);
          }
          uVar20 = local_e0;
          iStack_370 = 0;
          uStack_36c = 1;
          uStack_35c = uVar23;
          if (local_e0 != 0) {
            puVar22 = (uint *)(local_108 + 0x10);
            if (local_e8 != (uint *)0x0) {
              puVar22 = local_e8;
            }
            uVar24 = *puVar22;
            while (uVar24 == 0) {
              lVar15 = (longlong)iStack_370;
              uVar23 = uVar23 + 0x20;
              iStack_370 = iStack_370 + 1;
              uStack_35c = local_e0;
              if ((int)((local_e0 - 1) + ((int)(local_e0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_370)
              goto LAB_14c98a2c2;
              uVar24 = puVar22[lVar15 + 1];
            }
            uStack_36c = -uVar24 & uVar24;
            uVar18 = (ulonglong)uStack_36c * 2 + 1;
            lVar15 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_310 = (int)lVar15;
            uStack_35c = (uVar23 - 1) + local_310;
            if ((int)local_e0 < (int)uStack_35c) {
              uStack_35c = local_e0;
            }
          }
LAB_14c98a2c2:
          local_378 = (longlong *)local_108;
          uStack_354 = local_10c;
          local_368 = (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10);
          uVar24 = local_e0 & 0xffffffe0;
          iStack_350 = local_108._8_4_ - local_d4;
          TStack_2c8._padding_ = CONCAT44(uStack_36c,iStack_370);
          uStack_360 = 0xffffffff;
          TStack_2c8.CurrentBitIndex = uStack_35c;
          TStack_2c8.UnvisitedBitMask = 0xffffffff;
          iVar21 = (int)local_e0 >> 5;
          TStack_2c8._28_4_ = local_10c;
          TStack_2c8.BaseBitIndex = uVar23;
          uStack_2a8 = CONCAT44(uStack_34c,iStack_350);
          bVar14 = (byte)local_e0;
          local_358 = uVar23;
          local_2d0 = local_378;
          TStack_2c8.Array = local_368;
          if (((int)local_e0 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (uVar20 != local_e0) {
            puVar22 = (uint *)(local_108 + 0x10);
            if (local_e8 != (uint *)0x0) {
              puVar22 = local_e8;
            }
            uVar20 = -1 << (bVar14 & 0x1f) & puVar22[iVar21];
            while (uVar20 == 0) {
              lVar15 = (longlong)iVar21;
              uVar24 = uVar24 + 0x20;
              iVar21 = iVar21 + 1;
              uVar20 = local_e0;
              if ((int)((local_e0 - 1) + ((int)(local_e0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
              goto LAB_14c98a3e1;
              uVar20 = puVar22[lVar15 + 1];
            }
            uVar18 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_30c = (int)lVar15;
            uVar20 = local_30c + -1 + uVar24;
            if ((int)local_e0 < (int)uVar20) {
              uVar20 = local_e0;
            }
          }
LAB_14c98a3e1:
          while( true ) {
            plVar17 = local_2d0;
            if ((int)local_2d0[1] - *(int *)((longlong)local_2d0 + 0x34) != (int)uStack_2a8) {
              local_3b8[0] = (<lambda_1>)0x0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3b8);
            }
            this = local_338;
            pTVar25 = local_340;
            if (((TStack_2c8.CurrentBitIndex == uVar20) &&
                (TStack_2c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10))) &&
               (plVar17 == (longlong *)local_108)) break;
            local_398 = *(undefined4 *)(*plVar17 + (longlong)TStack_2c8.CurrentBitIndex * 0xc);
            if (((local_3b0.Data <= (FScriptContainerElement *)&local_398) &&
                ((FScriptContainerElement *)&local_398 < local_3b0.Data + (longlong)iStack_3a4 * 4))
               && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (local_3a8 == iStack_3a4) {
              local_3a8 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_3b0,&iStack_3a4);
            }
            lVar15 = (longlong)local_3a8;
            local_3a8 = local_3a8 + 1;
            *(undefined4 *)(local_3b0.Data + lVar15 * 4) = local_398;
            TStack_2c8.UnvisitedBitMask = TStack_2c8.UnvisitedBitMask & ~TStack_2c8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c8);
          }
          plVar17 = (longlong *)&(local_338->CancelF).field_0x10;
          if (local_108._8_4_ != local_d4) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108);
            uVar13 = local_108._8_8_;
            local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
            if ((longlong)uVar13 < 0) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
            }
            local_d8 = 0xffffffff;
            local_d4 = 0;
            local_e0 = 0;
            plVar17 = local_308;
          }
        }
        DeleteCriticalSection(&local_b8);
        local_c0 = 0;
        if (local_c8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_c8);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_108);
      }
      if (local_3b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.Data);
      }
      if (local_390.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.AllocatorInstance.Data);
      }
    }
  }
  return;
}

