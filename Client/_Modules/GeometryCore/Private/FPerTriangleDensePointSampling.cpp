// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// InitializeForTriangleSet<UE::Geometry::FDynamicMesh3> @ 1435d7380

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UELocal::FPerTriangleDensePointSampling::InitializeForTriangleSet<UE::Geometry::FDynamicMesh3>
          (FPerTriangleDensePointSampling *this,FDynamicMesh3 *param_1,FTriangleInfoCache *param_2,
          double param_3,int param_4,FNonUniformSamplingConfig *param_5,
          FDenseSamplePointSet *param_6,int param_7)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  longlong lVar2;
  code *pcVar3;
  FTriangleInfoCache *pFVar4;
  FDenseSamplePointSet *pFVar5;
  bool bVar6;
  EParallelForFlags EVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  EParallelForFlags EVar17;
  <lambda_1> local_res8 [8];
  uint local_res10;
  FTriangleInfoCache *local_res18;
  TArrayView<std::nullptr_t,int> local_b0;
  code *local_a0;
  FPerTriangleDensePointSampling **local_98;
  FPerTriangleDensePointSampling *local_90;
  int *local_88;
  FTriangleInfoCache *local_80;
  int *local_78;
  FDenseSamplePointSet *local_70;
  <lambda_1> *local_68;
  FNonUniformSamplingConfig *local_60;
  FDynamicMesh3 *local_58;
  
  piVar1 = &(this->TriSubArrays).ArrayNum;
  uVar10 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  iVar9 = *piVar1;
  local_res18 = param_2;
  if (iVar9 < (int)uVar10) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar10 - iVar9,(ForAnyElementType *)this,piVar1,&(this->TriSubArrays).ArrayMax);
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((int)uVar10 < iVar9) {
      uVar14 = iVar9 - uVar10;
      if (((int)(uVar14 | uVar10) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar14 != 0) {
        _Dst = (this->TriSubArrays).AllocatorInstance.Data + (longlong)(int)uVar10 * 8;
        iVar9 = (*piVar1 - uVar14) - uVar10;
        if (iVar9 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar14 * 8,(longlong)iVar9 << 3);
        }
        *piVar1 = *piVar1 - uVar14;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(ForAnyElementType *)this,*piVar1,&(this->TriSubArrays).ArrayMax);
      }
    }
  }
  uVar10 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
  uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar12 = 0;
  iVar9 = 0;
  EVar17 = None;
  local_res10 = 0;
  uVar13 = uVar12;
  uVar15 = uVar12;
  if (0 < (int)(uVar10 * 0x200 + uVar14)) {
    do {
      pFVar4 = local_res18;
      uVar11 = (uint)uVar12;
      if ((((int)uVar11 < 0) || ((int)(uVar10 * 0x200 + uVar14) <= (int)uVar11)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (uVar12 >> 9) * 8) +
                                      (ulonglong)(uVar11 & 0x1ff) * 2) - 1U))) {
        EVar7 = None;
        if ((int)uVar11 < (this->TriSubArrays).ArrayNum) {
          EVar7 = ~uVar11 >> 0x1f;
        }
        if ((EVar7 == None) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined8 *)((this->TriSubArrays).AllocatorInstance.Data + uVar13) = 0xffffffff;
      }
      else {
        EVar7 = EVar17;
        if ((int)uVar11 < (local_res18->TriAreas).ArrayNum) {
          EVar7 = ~uVar11 >> 0x1f;
        }
        if ((EVar7 == None) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = (int)(*(double *)((pFVar4->TriAreas).AllocatorInstance.Data + uVar13) / param_3);
        iVar9 = 2;
        if (2 < iVar8) {
          iVar9 = iVar8;
        }
        uVar16 = CONCAT44(iVar9,local_res10);
        EVar7 = None;
        if ((int)uVar11 < (this->TriSubArrays).ArrayNum) {
          EVar7 = ~uVar11 >> 0x1f;
        }
        if ((EVar7 == None) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_res10 = local_res10 + iVar9;
        uVar15 = (ulonglong)local_res10;
        *(undefined8 *)((this->TriSubArrays).AllocatorInstance.Data + uVar13) = uVar16;
      }
      iVar9 = (int)uVar15;
      uVar10 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      param_2 = local_res18;
      uVar13 = uVar13 + 8;
    } while ((int)(uVar11 + 1) < (int)(uVar10 * 0x200 + uVar14));
  }
  pFVar5 = param_6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_6->DensePoints,iVar9,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&pFVar5->Triangles,iVar9,Default);
  local_60 = param_5;
  lVar2 = *(longlong *)&(param_5->WeightFunction).field0_0x0;
  local_res8[0] = (<lambda_1>)(lVar2 != 0);
  if (lVar2 != 0) {
    TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&pFVar5->Weights,iVar9,Default);
  }
  local_88 = &param_7;
  local_78 = &param_4;
  iVar9 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
          (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  local_68 = local_res8;
  local_b0.DataPtr = (void **)0x0;
  local_b0.ArrayNum = 0;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<`UELocal::FPerTriangleDensePointSampling::InitializeForTriangleSet<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_98 = &local_90;
  if (iVar9 < 100) {
    EVar17 = Unbalanced;
  }
  local_70 = pFVar5;
  local_90 = this;
  local_80 = param_2;
  local_58 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ComputeDenseSamples",iVar9,500,(TFunctionRef<void___cdecl(int)> *)&local_a0,
             local_res8[0],EVar17,&local_b0);
  return;
}

// operator() @ 1435e5780

void __thiscall
`UELocal::FPerTriangleDensePointSampling::InitializeForTriangleSet<UE::Geometry::FDynamicMesh3>'::
__l2::<lambda_1>::operator()(void *this,int param_1)

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
  int iVar10;
  longlong *plVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  bool bVar17;
  bool bVar18;
  double *pdVar19;
  TVector<double> *pTVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar45 [16];
  int local_res18 [2];
  int local_res20 [2];
  longlong local_238;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  TVector<double>_u_0 local_1a0;
  double local_188;
  double local_180;
  double local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  TVector<double> local_108 [5];
  
  plVar11 = *(longlong **)this;
  uVar29 = (uint)~param_1 >> 0x1f;
  uVar21 = 0;
  if (param_1 < (int)plVar11[1]) {
    uVar21 = uVar29;
  }
  if ((uVar21 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  lVar26 = (longlong)param_1;
  iVar10 = *(int *)(*plVar11 + 4 + lVar26 * 8);
  local_218 = (longlong)iVar10;
  if (iVar10 != 0) {
    plVar11 = *(longlong **)this;
    uVar21 = 0;
    if (param_1 < (int)plVar11[1]) {
      uVar21 = uVar29;
    }
    if ((uVar21 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    fVar16 = __real_3f800000;
    dVar1 = __real_3ff0000000000000;
    uVar25 = (ulonglong)*(int *)(*plVar11 + lVar26 * 8);
    if (**(int **)((longlong)this + 8) == 0) {
      lVar31 = *(longlong *)((longlong)this + 0x10);
      uVar21 = 0;
      if (param_1 < *(int *)(lVar31 + 0x28)) {
        uVar21 = uVar29;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar23 = *(longlong *)((longlong)this + 0x10);
      pdVar19 = (double *)(lVar26 * 0x38 + *(longlong *)(lVar31 + 0x20));
      uVar21 = 0;
      if (param_1 < *(int *)(lVar23 + 0x38)) {
        uVar21 = uVar29;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar31 = *(longlong *)(lVar23 + 0x30);
      lVar23 = *(longlong *)((longlong)this + 0x10);
      uVar28 = **(int **)((longlong)this + 0x18) + param_1;
      dVar1 = *(double *)(lVar31 + 0x10 + lVar26 * 0x30);
      dVar2 = *(double *)(lVar31 + 0x18 + lVar26 * 0x30);
      dVar3 = *(double *)(lVar31 + 0x20 + lVar26 * 0x30);
      dVar4 = *(double *)(lVar31 + 0x28 + lVar26 * 0x30);
      dVar5 = *(double *)(lVar31 + lVar26 * 0x30);
      dVar6 = *(double *)(lVar31 + 8 + lVar26 * 0x30);
      dVar7 = *(double *)(lVar31 + lVar26 * 0x30);
      dVar8 = *(double *)(lVar31 + 8 + lVar26 * 0x30);
      uVar21 = 0;
      if (param_1 < *(int *)(lVar23 + 0x18)) {
        uVar21 = uVar29;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      bVar17 = *(double *)(*(longlong *)(lVar23 + 0x10) + lVar26 * 8) == 0.0;
      if (0 < local_218) {
        local_208 = uVar25 * 8;
        uVar41 = SUB84(__real_3ff0000000000000,0);
        uVar42 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        local_210 = uVar25 * 4;
        lVar23 = 0;
        local_238 = 0;
        lVar30 = uVar25 * 0x18;
        do {
          uVar21 = uVar28 * 0xbb38435 + 0x3619636b;
          uVar28 = uVar21 * 0xbb38435 + 0x3619636b;
          dVar34 = (double)((float)(uVar21 >> 9 | 0x3f800000) - __real_3f800000);
          dVar37 = (double)((float)(uVar28 >> 9 | 0x3f800000) - __real_3f800000);
          if ((bVar17) &&
             ((double)CONCAT44(uVar42,uVar41) <= dVar37 + dVar34 &&
              dVar37 + dVar34 != (double)CONCAT44(uVar42,uVar41))) {
            dVar34 = (double)CONCAT44(uVar42,uVar41) - dVar34;
            dVar37 = (double)CONCAT44(uVar42,uVar41) - dVar37;
          }
          dVar33 = *(double *)(lVar31 + lVar26 * 0x30);
          dVar44 = *(double *)(lVar31 + 8 + lVar26 * 0x30);
          dVar15 = (dVar1 - dVar5) * dVar34 + dVar33 + (dVar3 - dVar7) * dVar37;
          dVar34 = (dVar2 - dVar6) * dVar34 + dVar44 + (dVar4 - dVar8) * dVar37;
          if (bVar17) {
LAB_1435e5c25:
            local_1a0._s_0.Z = 0.0;
            local_1a0._s_0.X = dVar15;
            local_1a0._s_0.Y = dVar34;
            pTVar20 = UE::Geometry::operator*<double>
                                (local_108,(TQuaternion<double> *)(pdVar19 + 3),
                                 (TVector<double> *)&local_1a0._s_0);
            dVar33 = *pdVar19 + (pTVar20->field0_0x0)._s_0.X;
            plVar11 = *(longlong **)((longlong)this + 0x20);
            dVar44 = (pTVar20->field0_0x0)._s_0.Y + pdVar19[1];
            dVar37 = (pTVar20->field0_0x0)._s_0.Z + pdVar19[2];
            uVar29 = (uint)uVar25;
            uVar21 = 0;
            if ((int)uVar29 < (int)plVar11[1]) {
              uVar21 = ~uVar29 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar23 = *plVar11;
            *(double *)(lVar23 + lVar30) = dVar33;
            *(double *)(lVar23 + 8 + lVar30) = dVar44;
            *(double *)(lVar23 + 0x10 + lVar30) = dVar37;
            lVar23 = *(longlong *)((longlong)this + 0x20);
            uVar21 = 0;
            if ((int)uVar29 < *(int *)(lVar23 + 0x18)) {
              uVar21 = ~uVar29 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            *(int *)(local_210 + *(longlong *)(lVar23 + 0x10)) = param_1;
            if (**(char **)((longlong)this + 0x28) != '\0') {
              dVar36 = *(double *)(lVar31 + 0x20 + lVar26 * 0x30);
              dVar9 = *(double *)(lVar31 + 0x28 + lVar26 * 0x30);
              dVar13 = *(double *)(lVar31 + 0x10 + lVar26 * 0x30) - dVar36;
              dVar40 = *(double *)(lVar31 + lVar26 * 0x30) - dVar36;
              dVar35 = *(double *)(lVar31 + 8 + lVar26 * 0x30) - dVar9;
              lVar23 = *(longlong *)((longlong)this + 0x30);
              dVar39 = *(double *)(lVar31 + 0x18 + lVar26 * 0x30) - dVar9;
              dVar43 = dVar35 * dVar35 + dVar40 * dVar40;
              dVar14 = dVar39 * dVar35 + dVar13 * dVar40;
              dVar38 = dVar39 * dVar39 + dVar13 * dVar13;
              uVar41 = SUB84(__real_3ff0000000000000,0);
              uVar42 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              dVar40 = (dVar34 - dVar9) * dVar35 + (dVar15 - dVar36) * dVar40;
              dVar15 = (dVar34 - dVar9) * dVar39 + (dVar15 - dVar36) * dVar13;
              dVar36 = __real_3ff0000000000000 / (dVar38 * dVar43 - dVar14 * dVar14);
              dVar34 = (dVar40 * dVar38 - dVar15 * dVar14) * dVar36;
              dVar36 = (dVar15 * dVar43 - dVar40 * dVar14) * dVar36;
              dVar15 = __real_3ff0000000000000 - dVar34;
              if ((*(longlong *)(lVar23 + 0x10) == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar18)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              local_res18[0] = param_1;
              local_188 = dVar34;
              local_180 = dVar36;
              local_178 = dVar15 - dVar36;
              local_168 = dVar33;
              dStack_160 = dVar44;
              local_158 = dVar37;
              uVar32 = (**(code **)(lVar23 + 0x10))
                                 (*(undefined8 *)(lVar23 + 0x18),local_res18,&local_168,&local_188);
              lVar23 = *(longlong *)((longlong)this + 0x20);
              uVar21 = 0;
              if ((int)uVar29 < *(int *)(lVar23 + 0x28)) {
                uVar21 = ~uVar29 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              *(undefined8 *)(local_208 + *(longlong *)(lVar23 + 0x20)) = uVar32;
            }
            local_210 = local_210 + 4;
            lVar23 = local_238 + 1;
            uVar25 = (ulonglong)(uVar29 + 1);
            lVar30 = lVar30 + 0x18;
            local_208 = local_208 + 8;
            local_238 = lVar23;
          }
          else {
            dVar37 = *(double *)(lVar31 + 0x10 + lVar26 * 0x30);
            dVar36 = *(double *)(lVar31 + 0x18 + lVar26 * 0x30);
            dVar9 = *(double *)(lVar31 + 0x20 + lVar26 * 0x30);
            dVar40 = *(double *)(lVar31 + 0x28 + lVar26 * 0x30);
            dVar13 = (dVar37 - dVar33) * (dVar34 - dVar44) - (dVar36 - dVar44) * (dVar15 - dVar33);
            dVar37 = (dVar34 - dVar36) * (dVar9 - dVar37) - (dVar15 - dVar37) * (dVar40 - dVar36);
            dVar33 = (dVar34 - dVar40) * (dVar33 - dVar9) - (dVar15 - dVar9) * (dVar44 - dVar40);
            uVar41 = SUB84(__real_3ff0000000000000,0);
            uVar42 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            if (((0.0 < dVar37 * dVar13) && (0.0 < dVar33 * dVar37)) && (0.0 < dVar33 * dVar13))
            goto LAB_1435e5c25;
          }
        } while (lVar23 < local_218);
      }
    }
    else {
      uVar27 = (ulonglong)(param_1 & 0x1ff);
      lVar26 = *(longlong *)(*(longlong *)((longlong)this + 0x38) + 0x10);
      lVar31 = *(longlong *)
                (*(longlong *)(*(longlong *)((longlong)this + 0x38) + 0x130) +
                (ulonglong)((uint)param_1 >> 9) * 8);
      uVar21 = *(uint *)(lVar31 + uVar27 * 0xc);
      uVar22 = (ulonglong)(uVar21 & 0x1ff);
      lVar23 = *(longlong *)(lVar26 + (ulonglong)(uVar21 >> 9) * 8);
      pdVar19 = (double *)(lVar23 + uVar22 * 0x18);
      dVar5 = *pdVar19;
      dVar6 = pdVar19[1];
      dVar2 = *(double *)(lVar23 + 0x10 + uVar22 * 0x18);
      uVar21 = *(uint *)(lVar31 + 4 + uVar27 * 0xc);
      uVar22 = (ulonglong)(uVar21 & 0x1ff);
      lVar23 = *(longlong *)(lVar26 + (ulonglong)(uVar21 >> 9) * 8);
      pdVar19 = (double *)(lVar23 + uVar22 * 0x18);
      dVar7 = *pdVar19;
      dVar8 = pdVar19[1];
      dVar3 = *(double *)(lVar23 + 0x10 + uVar22 * 0x18);
      uVar21 = *(uint *)(lVar31 + 8 + uVar27 * 0xc);
      uVar22 = (ulonglong)(uVar21 & 0x1ff);
      lVar26 = *(longlong *)(lVar26 + (ulonglong)(uVar21 >> 9) * 8);
      pdVar19 = (double *)(lVar26 + uVar22 * 0x18);
      dVar34 = *pdVar19;
      dVar37 = pdVar19[1];
      dVar4 = *(double *)(lVar26 + 0x10 + uVar22 * 0x18);
      uVar21 = **(int **)((longlong)this + 0x18) + param_1;
      if (0 < iVar10) {
        lVar26 = uVar25 * 8;
        lVar31 = uVar25 * 4;
        lVar23 = uVar25 * 0x18;
        do {
          plVar11 = *(longlong **)((longlong)this + 0x20);
          uVar28 = uVar21 * 0xbb38435 + 0x3619636b;
          uVar21 = uVar28 * 0xbb38435 + 0x3619636b;
          uVar24 = (uint)uVar25;
          uVar29 = 0;
          if ((int)uVar24 < (int)plVar11[1]) {
            uVar29 = ~uVar24 >> 0x1f;
          }
          dVar33 = (double)((float)(uVar21 >> 9 | 0x3f800000) - fVar16);
          auVar45._0_8_ = (double)((float)(uVar28 >> 9 | 0x3f800000) - fVar16);
          auVar45._8_8_ = 0;
          auVar45 = sqrtpd(unaff_XMM9,auVar45);
          dVar44 = auVar45._0_8_;
          dVar36 = (dVar1 - dVar33) * dVar44;
          dVar9 = dVar1 - dVar44;
          unaff_XMM9._8_8_ = auVar45._8_8_;
          unaff_XMM9._0_8_ = dVar44 * dVar33;
          dVar44 = dVar7 * dVar36 + dVar5 * dVar9 + dVar34 * unaff_XMM9._0_8_;
          dVar15 = dVar8 * dVar36 + dVar6 * dVar9 + dVar37 * unaff_XMM9._0_8_;
          dVar33 = dVar3 * dVar36 + dVar2 * dVar9 + dVar4 * unaff_XMM9._0_8_;
          if ((uVar29 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar30 = *plVar11;
          *(double *)(lVar23 + lVar30) = dVar44;
          *(double *)(lVar23 + 8 + lVar30) = dVar15;
          *(double *)(lVar23 + 0x10 + lVar30) = dVar33;
          lVar30 = *(longlong *)((longlong)this + 0x20);
          uVar29 = 0;
          if ((int)uVar24 < *(int *)(lVar30 + 0x18)) {
            uVar29 = ~uVar24 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          *(int *)(lVar31 + *(longlong *)(lVar30 + 0x10)) = param_1;
          if (**(char **)((longlong)this + 0x28) != '\0') {
            lVar30 = *(longlong *)((longlong)this + 0x30);
            if ((*(longlong *)(lVar30 + 0x10) == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_res20[0] = param_1;
            local_148 = dVar9;
            dStack_140 = dVar36;
            local_138 = unaff_XMM9._0_8_;
            local_128 = dVar44;
            dStack_120 = dVar15;
            local_118 = dVar33;
            uVar32 = (**(code **)(lVar30 + 0x10))
                               (*(undefined8 *)(lVar30 + 0x18),local_res20,&local_128,&local_148);
            lVar30 = *(longlong *)((longlong)this + 0x20);
            uVar29 = 0;
            if ((int)uVar24 < *(int *)(lVar30 + 0x28)) {
              uVar29 = ~uVar24 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            *(undefined8 *)(lVar26 + *(longlong *)(lVar30 + 0x20)) = uVar32;
          }
          uVar25 = (ulonglong)(uVar24 + 1);
          lVar23 = lVar23 + 0x18;
          lVar31 = lVar31 + 4;
          lVar26 = lVar26 + 8;
          local_218 = local_218 + -1;
        } while (local_218 != 0);
      }
    }
  }
  return;
}

