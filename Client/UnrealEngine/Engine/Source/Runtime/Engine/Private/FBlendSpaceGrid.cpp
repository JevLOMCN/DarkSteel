// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FindTriangleThisPointBelongsTo @ 147555520

bool __thiscall
FBlendSpaceGrid::FindTriangleThisPointBelongsTo
          (FBlendSpaceGrid *this,TVector2<double> *param_1,TVector<double> *param_2,
          FTriangle **param_3,TArray<FTriangle_*,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  longlong lVar2;
  FTriangle *pFVar3;
  FVertex *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  TArray<FTriangle_*,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  FIndexAndDistance *pFVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 unaff_XMM6 [16];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  int local_c8 [6];
  double local_b0;
  
  pTVar11 = param_4;
  uVar18 = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_4->ArrayNum,&local_d0,local_c8,local_c8 + 1);
  uVar20 = uVar18;
  uVar21 = uVar18;
  if (0 < pTVar11->ArrayNum) {
    do {
      uVar17 = (uint)uVar18;
      uVar23 = ~uVar17 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar17 < local_c8[0]) {
        uVar15 = uVar23;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        uVar14 = (*pcVar5)();
        return (bool)uVar14;
      }
      *(uint *)(local_d0.Data + uVar21) = uVar17;
      uVar15 = 0;
      if ((int)uVar17 < pTVar11->ArrayNum) {
        uVar15 = uVar23;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        uVar14 = (*pcVar5)();
        return (bool)uVar14;
      }
      lVar2 = *(longlong *)((pTVar11->AllocatorInstance).Data + uVar20);
      dVar8 = (param_1->field0_0x0)._s_0.Y - *(double *)(lVar2 + 0x20);
      dVar24 = (param_1->field0_0x0)._s_0.X - *(double *)(lVar2 + 0x18);
      uVar15 = 0;
      if ((int)uVar17 < local_c8[0]) {
        uVar15 = uVar23;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar8 * dVar8 + dVar24 * dVar24;
      unaff_XMM6 = sqrtpd(unaff_XMM6,auVar6);
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        uVar14 = (*pcVar5)();
        return (bool)uVar14;
      }
      uVar18 = (ulonglong)(uVar17 + 1);
      *(longlong *)(local_d0.Data + uVar21 + 8) = unaff_XMM6._0_8_;
      uVar20 = uVar20 + 8;
      uVar21 = uVar21 + 0x10;
    } while ((int)(uVar17 + 1) < pTVar11->ArrayNum);
  }
  AlgoImpl::
  IntroSortInternal<FIndexAndDistance,int,FIdentityFunctor,TDereferenceWrapper<FIndexAndDistance,_FBlendSpaceGrid::FindTriangleThisPointBelongsTo_::__l2::<lambda_1>_>_>
            ((FIndexAndDistance *)local_d0.Data,local_c8[0],param_4._0_1_,(<lambda_1> *)local_d8);
  dVar24 = __real_3f1a36e2e0000000;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar15 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3ff0000000000000;
  iVar12 = local_c8[0];
  pFVar22 = (FIndexAndDistance *)(local_d0.Data + (longlong)local_c8[0] * 0x10);
  FVar19.Data = local_d0.Data;
  while( true ) {
    if (local_c8[0] != iVar12) {
      param_4._0_1_ = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FIndexAndDistance,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_4);
    }
    if ((FIndexAndDistance *)FVar19.Data == pFVar22) {
      bVar13 = false;
      goto LAB_1475558dd;
    }
    uVar23 = ((FIndexAndDistance *)FVar19.Data)->Index;
    uVar16 = 0;
    if ((int)uVar23 < pTVar11->ArrayNum) {
      uVar16 = ~uVar23 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar5 = (code *)swi(3);
      uVar14 = (*pcVar5)();
      return (bool)uVar14;
    }
    pFVar3 = *(FTriangle **)((pTVar11->AllocatorInstance).Data + (longlong)(int)uVar23 * 8);
    pFVar4 = pFVar3->Vertices[0];
    dVar26 = (pFVar3->Vertices[2]->Position).field0_0x0._s_0.X;
    dVar1 = (pFVar3->Vertices[2]->Position).field0_0x0._s_0.Y;
    dVar28 = (param_1->field0_0x0)._s_0.X - dVar26;
    dVar10 = (pFVar3->Vertices[1]->Position).field0_0x0._s_0.Y - dVar1;
    dVar9 = (pFVar4->Position).field0_0x0._s_0.X - dVar26;
    dVar26 = dVar26 - (pFVar3->Vertices[1]->Position).field0_0x0._s_0.X;
    dVar27 = (param_1->field0_0x0)._s_0.Y - dVar1;
    dVar25 = dVar8 / (((pFVar4->Position).field0_0x0._s_0.Y - dVar1) * dVar26 + dVar10 * dVar9);
    dVar26 = (dVar10 * dVar28 + dVar26 * dVar27) * dVar25;
    dVar25 = ((dVar1 - (pFVar4->Position).field0_0x0._s_0.Y) * dVar28 + dVar9 * dVar27) * dVar25;
    local_b0 = (dVar8 - dVar26) - dVar25;
    if ((double)CONCAT44((uint)((ulonglong)local_b0 >> 0x20) & uVar17,SUB84(local_b0,0) & uVar15) <
        dVar24) {
      local_b0 = 0.0;
    }
    if ((((0.0 <= dVar26) && (dVar26 <= dVar8)) && (0.0 <= dVar25)) &&
       (((dVar25 <= dVar8 && (0.0 <= local_b0)) && (local_b0 <= dVar8)))) break;
    FVar19.Data = FVar19.Data + 0x10;
  }
  bVar13 = true;
  auVar7._8_4_ = SUB84(dVar25,0);
  auVar7._0_8_ = dVar26;
  auVar7._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  *(undefined1 (*) [16])&param_2->field0_0x0 = auVar7;
  (param_2->field0_0x0)._s_0.Z = local_b0;
  *param_3 = pFVar3;
LAB_1475558dd:
  if ((FIndexAndDistance *)local_d0.Data != (FIndexAndDistance *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  return bVar13;
}

// GenerateGridElements @ 147556220

void __thiscall
FBlendSpaceGrid::GenerateGridElements
          (FBlendSpaceGrid *this,TArray<FVertex,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FTriangle_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TIntPoint<int>_u_0_s_0 TVar2;
  double *pdVar3;
  double *pdVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  bool bVar13;
  uint uVar14;
  FEditorElement *pFVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  int local_res20;
  int local_108;
  FTriangle *local_100;
  TVector2<double>_u_0 local_f8;
  TVector<double>_u_0 local_e8 [7];
  
  if ((((this->NumGridDivisions).field0_0x0._s_0.X < 1) ||
      ((this->NumGridDivisions).field0_0x0._s_0.Y < 1)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumGridDivisions.X > 0 && NumGridDivisions.Y > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                          ,0x293,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((this->GridMax).field0_0x0._s_0.X <= (this->GridMin).field0_0x0._s_0.X) ||
      ((this->GridMax).field0_0x0._s_0.Y <= (this->GridMin).field0_0x0._s_0.Y)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("GridMax.ComponentwiseAllGreaterThan(GridMin)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                          ,0x294,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar18 = (this->NumGridPointsForAxis).field0_0x0._s_0.Y *
           (this->NumGridPointsForAxis).field0_0x0._s_0.X;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  piVar1 = &(this->GridPoints).ArrayMax;
  (this->GridPoints).ArrayNum = 0;
  if (*piVar1 != uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar18,&(this->GridPoints).AllocatorInstance,0,piVar1);
  }
  if ((param_1->ArrayNum != 0) && (param_2->ArrayNum != 0)) {
    TArray<FEditorElement,TSizedDefaultAllocator<32>_>::AddDefaulted(&this->GridPoints,uVar18);
    dVar11 = __real_47eff933c78cdfad;
    dVar10 = __real_3ff0000000000000;
    local_108 = 0;
    if (0 < (this->NumGridPointsForAxis).field0_0x0._s_0.X) {
      do {
        local_res20 = 0;
        if (0 < (this->NumGridPointsForAxis).field0_0x0._s_0.Y) {
          do {
            local_100 = (FTriangle *)0x0;
            pFVar15 = GetElement(this,local_108,local_res20);
            TVar2 = (this->NumGridDivisions).field0_0x0._s_0;
            dVar6 = (((this->GridMax).field0_0x0._s_0.X - (this->GridMin).field0_0x0._s_0.X) /
                    (double)TVar2.X) * (double)local_108 + (this->GridMin).field0_0x0._s_0.X;
            dVar7 = (((this->GridMax).field0_0x0._s_0.Y - (this->GridMin).field0_0x0._s_0.Y) /
                    (double)TVar2.Y) * (double)local_res20 + (this->GridMin).field0_0x0._s_0.Y;
            local_f8._s_0.X = dVar6;
            local_f8._s_0.Y = dVar7;
            bVar13 = FindTriangleThisPointBelongsTo
                               (this,(TVector2<double> *)&local_f8._s_0,
                                (TVector<double> *)&local_e8[0]._s_0,&local_100,param_2);
            if (bVar13) {
              pFVar15->Weights[0] = (float)(double)local_e8[0]._0_8_;
              pFVar15->Weights[1] = (float)(double)local_e8[0]._8_8_;
              pFVar15->Weights[2] = (float)(double)local_e8[0]._16_8_;
              iVar16 = local_100->Vertices[0]->SampleIndex;
              pFVar15->Indices[0] = iVar16;
              pFVar15->Indices[1] = local_100->Vertices[1]->SampleIndex;
              pFVar15->Indices[2] = local_100->Vertices[2]->SampleIndex;
              if ((iVar16 == -1) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("GridPoint.Indices[0] != INDEX_NONE",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                                      ,0x2b5,L""), bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((pFVar15->Indices[1] == -1) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("GridPoint.Indices[1] != INDEX_NONE",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                                      ,0x2b6,L""), bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((pFVar15->Indices[2] == -1) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("GridPoint.Indices[2] != INDEX_NONE",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                                      ,0x2b7,L""), bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              iVar16 = param_2->ArrayNum;
              uVar18 = 0;
              lVar20 = 0;
              lVar21 = 0;
              uVar19 = 0;
              lVar22 = 0;
              uVar30 = 0;
              uVar31 = 0;
              dVar27 = dVar11;
              if (0 < iVar16) {
                do {
                  uVar14 = 0;
                  if ((int)uVar19 < iVar16) {
                    uVar14 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  lVar17 = *(longlong *)((param_2->AllocatorInstance).Data + lVar22 * 8);
                  pdVar3 = *(double **)(lVar17 + 0x30);
                  pdVar4 = *(double **)(lVar17 + 0x28);
                  dVar23 = *pdVar4;
                  dVar24 = pdVar4[1];
                  dVar25 = *pdVar3 - dVar23;
                  dVar28 = pdVar3[1] - dVar24;
                  dVar26 = (dVar7 - dVar24) * dVar28 + (dVar6 - dVar23) * dVar25;
                  if (0.0 < dVar26) {
                    dVar29 = dVar25 * dVar25 + dVar28 * dVar28;
                    if (dVar26 < dVar29) {
                      dVar26 = dVar26 / dVar29;
                      dVar24 = dVar28 * dVar26 + dVar24;
                      dVar23 = dVar25 * dVar26 + dVar23;
                    }
                    else {
                      dVar23 = *pdVar3;
                      dVar24 = pdVar3[1];
                      dVar26 = dVar10;
                    }
                  }
                  else {
                    dVar23 = *pdVar4;
                    dVar24 = pdVar4[1];
                    dVar26 = 0.0;
                  }
                  dVar23 = (dVar24 - dVar7) * (dVar24 - dVar7) + (dVar23 - dVar6) * (dVar23 - dVar6)
                  ;
                  if (dVar23 < dVar27) {
                    uVar30 = SUB84(dVar26,0);
                    uVar31 = (undefined4)((ulonglong)dVar26 >> 0x20);
                  }
                  pdVar3 = *(double **)(lVar17 + 0x40);
                  pdVar4 = *(double **)(lVar17 + 0x38);
                  dVar24 = dVar27;
                  if (dVar23 <= dVar27) {
                    dVar24 = dVar23;
                  }
                  dVar26 = *pdVar4;
                  dVar25 = pdVar4[1];
                  dVar28 = *pdVar3 - dVar26;
                  dVar29 = pdVar3[1] - dVar25;
                  uVar14 = uVar19;
                  lVar9 = lVar22;
                  lVar12 = 0;
                  if (dVar27 <= dVar23) {
                    uVar14 = uVar18;
                    lVar9 = lVar20;
                    lVar12 = lVar21;
                  }
                  lVar21 = lVar12;
                  dVar27 = (dVar7 - dVar25) * dVar29 + (dVar6 - dVar26) * dVar28;
                  if (0.0 < dVar27) {
                    dVar23 = dVar28 * dVar28 + dVar29 * dVar29;
                    if (dVar27 < dVar23) {
                      dVar27 = dVar27 / dVar23;
                      dVar25 = dVar29 * dVar27 + dVar25;
                      dVar26 = dVar28 * dVar27 + dVar26;
                    }
                    else {
                      dVar26 = *pdVar3;
                      dVar25 = pdVar3[1];
                      dVar27 = dVar10;
                    }
                  }
                  else {
                    dVar26 = *pdVar4;
                    dVar25 = pdVar4[1];
                    dVar27 = 0.0;
                  }
                  dVar23 = (dVar25 - dVar7) * (dVar25 - dVar7) + (dVar26 - dVar6) * (dVar26 - dVar6)
                  ;
                  if (dVar23 < dVar24) {
                    lVar21 = 1;
                    uVar30 = SUB84(dVar27,0);
                    uVar31 = (undefined4)((ulonglong)dVar27 >> 0x20);
                  }
                  pdVar3 = *(double **)(lVar17 + 0x50);
                  pdVar4 = *(double **)(lVar17 + 0x48);
                  dVar26 = dVar24;
                  if (dVar23 <= dVar24) {
                    dVar26 = dVar23;
                  }
                  dVar27 = *pdVar4;
                  dVar25 = pdVar4[1];
                  dVar28 = *pdVar3 - dVar27;
                  lVar17 = lVar22;
                  if (dVar24 <= dVar23) {
                    lVar17 = lVar9;
                  }
                  dVar29 = pdVar3[1] - dVar25;
                  uVar8 = uVar19;
                  if (dVar24 <= dVar23) {
                    uVar8 = uVar14;
                  }
                  dVar23 = (dVar7 - dVar25) * dVar29 + (dVar6 - dVar27) * dVar28;
                  if (0.0 < dVar23) {
                    dVar24 = dVar28 * dVar28 + dVar29 * dVar29;
                    if (dVar23 < dVar24) {
                      dVar23 = dVar23 / dVar24;
                      dVar25 = dVar29 * dVar23 + dVar25;
                      dVar27 = dVar28 * dVar23 + dVar27;
                    }
                    else {
                      dVar27 = *pdVar3;
                      dVar25 = pdVar3[1];
                      dVar23 = dVar10;
                    }
                  }
                  else {
                    dVar27 = *pdVar4;
                    dVar25 = pdVar4[1];
                    dVar23 = 0.0;
                  }
                  dVar24 = (dVar25 - dVar7) * (dVar25 - dVar7) + (dVar27 - dVar6) * (dVar27 - dVar6)
                  ;
                  if (dVar24 < dVar26) {
                    lVar21 = 2;
                    uVar30 = SUB84(dVar23,0);
                    uVar31 = (undefined4)((ulonglong)dVar23 >> 0x20);
                  }
                  dVar27 = dVar26;
                  if (dVar24 <= dVar26) {
                    dVar27 = dVar24;
                  }
                  uVar18 = uVar19;
                  lVar20 = lVar22;
                  if (dVar26 <= dVar24) {
                    uVar18 = uVar8;
                    lVar20 = lVar17;
                  }
                  iVar16 = param_2->ArrayNum;
                  uVar19 = uVar19 + 1;
                  lVar22 = lVar22 + 1;
                } while ((int)uVar19 < iVar16);
              }
              uVar19 = 0;
              if ((int)uVar18 < iVar16) {
                uVar19 = ~uVar18 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar20 = *(longlong *)((param_2->AllocatorInstance).Data + lVar20 * 8);
              pFVar15->Weights[0] = (float)(dVar10 - (double)CONCAT44(uVar31,uVar30));
              pFVar15->Indices[0] = *(int *)(*(longlong *)(lVar20 + 0x28 + lVar21 * 0x10) + 0x20);
              pFVar15->Weights[1] = (float)(double)CONCAT44(uVar31,uVar30);
              pFVar15->Indices[1] = *(int *)(*(longlong *)(lVar20 + (lVar21 + 3) * 0x10) + 0x20);
            }
            local_res20 = local_res20 + 1;
          } while (local_res20 < (this->NumGridPointsForAxis).field0_0x0._s_0.Y);
        }
        local_108 = local_108 + 1;
      } while (local_108 < (this->NumGridPointsForAxis).field0_0x0._s_0.X);
    }
  }
  return;
}

// GetElement @ 14755b690

FEditorElement * __thiscall
FBlendSpaceGrid::GetElement(FBlendSpaceGrid *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FEditorElement *pFVar3;
  uint uVar4;
  uint uVar5;
  
  if ((this->NumGridPointsForAxis).field0_0x0._s_0.X < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumGridPointsForAxis.X >= GridX",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                       ,0x2f7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEditorElement *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->NumGridPointsForAxis).field0_0x0._s_0.Y < param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumGridPointsForAxis.Y >= GridY",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                       ,0x2f8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEditorElement *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->GridPoints).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GridPoints.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                       ,0x2fa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEditorElement *)(*pcVar1)();
      return pFVar3;
    }
  }
  uVar5 = param_2 * (this->NumGridPointsForAxis).field0_0x0._s_0.X + param_1;
  uVar4 = 0;
  if ((int)uVar5 < (this->GridPoints).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEditorElement *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->NumGridPointsForAxis).field0_0x0._s_0.X < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumGridPointsForAxis.X >= GridX",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                       ,0x302,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEditorElement *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->NumGridPointsForAxis).field0_0x0._s_0.Y < param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumGridPointsForAxis.Y >= GridY",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEditorElement *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->GridPoints).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GridPoints.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                       ,0x305,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEditorElement *)(*pcVar1)();
      return pFVar3;
    }
  }
  uVar5 = param_2 * (this->NumGridPointsForAxis).field0_0x0._s_0.X + param_1;
  uVar4 = 0;
  if ((int)uVar5 < (this->GridPoints).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEditorElement *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FEditorElement *)((this->GridPoints).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18)
  ;
}

// GetElement @ 14755b880

FEditorElement * __thiscall
FBlendSpaceGrid::GetElement(FBlendSpaceGrid *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEditorElement *pFVar4;
  uint uVar5;
  
  if ((this->NumGridPointsForAxis).field0_0x0._s_0.X < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumGridPointsForAxis.X >= GridX",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                       ,0x2f7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEditorElement *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((this->NumGridPointsForAxis).field0_0x0._s_0.Y < param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumGridPointsForAxis.Y >= GridY",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                       ,0x2f8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEditorElement *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((this->GridPoints).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GridPoints.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                       ,0x2fa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEditorElement *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar5 = param_2 * (this->NumGridPointsForAxis).field0_0x0._s_0.X + param_1;
  uVar3 = 0;
  if ((int)uVar5 < (this->GridPoints).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEditorElement *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FEditorElement *)((this->GridPoints).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18)
  ;
}

// GetPosFromIndex @ 14755e7e0

TVector2<double> * __thiscall
FBlendSpaceGrid::GetPosFromIndex
          (FBlendSpaceGrid *this,TVector2<double> *__return_storage_ptr__,int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  TIntPoint<int>_u_0_s_0 TVar3;
  
  TVar3 = (this->NumGridDivisions).field0_0x0._s_0;
  dVar1 = (this->GridMax).field0_0x0._s_0.Y;
  dVar2 = (this->GridMin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (((this->GridMax).field0_0x0._s_0.X - (this->GridMin).field0_0x0._s_0.X) / (double)TVar3.X) *
       (double)param_1 + (this->GridMin).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       ((dVar1 - dVar2) / (double)TVar3.Y) * (double)param_2 + (this->GridMin).field0_0x0._s_0.Y;
  return __return_storage_ptr__;
}

