// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// FGeometryCollectionProximityUtility @ 144067bf0

FGeometryCollectionProximityUtility * __thiscall
FGeometryCollectionProximityUtility::FGeometryCollectionProximityUtility
          (FGeometryCollectionProximityUtility *this,FGeometryCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  FGeometryCollectionProximityUtility *pFVar3;
  
  this->Collection = param_1;
  if (param_1 == (FGeometryCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionProximityUtility.cpp"
                       ,0x20c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGeometryCollectionProximityUtility *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// operator() @ 14406eb40

void __thiscall
`FGeometryCollectionProximityUtility::CopyProximityToConnectionGraph'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,bool param_3,float param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  int local_res8;
  int local_resc;
  int *local_48;
  float *local_40;
  
  lVar2 = **(longlong **)this;
  uVar11 = 0;
  if (param_1 < *(int *)(lVar2 + 0x3b8)) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar15 = *(int *)(*(longlong *)(lVar2 + 0x3b0) + (longlong)param_1 * 4);
  lVar2 = **(longlong **)this;
  uVar11 = 0;
  if (param_2 < *(int *)(lVar2 + 0x3b8)) {
    uVar11 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = *(int *)(*(longlong *)(lVar2 + 0x3b0) + (longlong)param_2 * 4);
  iVar6 = Chaos::Facades::FCollectionHierarchyFacade::GetInitialLevel
                    (*(FCollectionHierarchyFacade **)((longlong)this + 0x10),iVar15);
  iVar7 = Chaos::Facades::FCollectionHierarchyFacade::GetInitialLevel
                    (*(FCollectionHierarchyFacade **)((longlong)this + 0x10),iVar1);
  iVar8 = Chaos::Facades::FCollectionHierarchyFacade::GetParent
                    (*(FCollectionHierarchyFacade **)((longlong)this + 0x10),iVar15);
  iVar9 = Chaos::Facades::FCollectionHierarchyFacade::GetParent
                    (*(FCollectionHierarchyFacade **)((longlong)this + 0x10),iVar1);
  while( true ) {
    if (iVar8 == -1) {
      return;
    }
    if (iVar9 == -1) {
      return;
    }
    if (iVar15 == iVar1) {
      return;
    }
    if (iVar8 == iVar9) break;
    iVar13 = iVar6;
    iVar10 = iVar8;
    if (iVar7 <= iVar6) {
      iVar10 = Chaos::Facades::FCollectionHierarchyFacade::GetParent
                         (*(FCollectionHierarchyFacade **)((longlong)this + 0x10),iVar8);
      iVar13 = iVar6 + -1;
      iVar15 = iVar8;
    }
    bVar5 = iVar6 <= iVar7;
    iVar6 = iVar13;
    iVar8 = iVar10;
    if (bVar5) {
      iVar13 = Chaos::Facades::FCollectionHierarchyFacade::GetParent
                         (*(FCollectionHierarchyFacade **)((longlong)this + 0x10),iVar9);
      iVar7 = iVar7 + -1;
      iVar1 = iVar9;
      iVar9 = iVar13;
    }
  }
  local_res8 = iVar15;
  local_resc = iVar1;
  if (iVar1 < iVar15) {
    local_res8 = iVar1;
    local_resc = iVar15;
  }
  plVar3 = *(longlong **)((longlong)this + 0x18);
  uVar11 = FCrc::MemCrc_DEPRECATED(&local_res8,8,0);
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar14 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar14 = plVar3 + 7;
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar3[9] - 1U & uVar11) * 4);
    if (iVar15 != -1) {
      do {
        lVar2 = *plVar3 + (longlong)iVar15 * 0x14;
        if ((*(int *)(*plVar3 + (longlong)iVar15 * 0x14) == local_res8) &&
           (*(int *)(lVar2 + 4) == local_resc)) {
          if (iVar15 != -1) {
            pfVar12 = (float *)(lVar2 + 8);
            if (lVar2 == 0) {
              pfVar12 = (float *)0x0;
            }
            if (pfVar12 != (float *)0x0) {
              if (!param_3) {
                return;
              }
              *pfVar12 = param_4 + *pfVar12;
              return;
            }
          }
          break;
        }
        iVar15 = *(int *)(lVar2 + 0xc);
      } while (iVar15 != -1);
    }
  }
  local_48 = &local_res8;
  local_40 = &param_4;
  TSet<TTuple<UE::Geometry::FIndex2i,float>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,float,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_const_&,float_const_&>_>
            (*(TSet<TTuple<UE::Geometry::FIndex2i,float>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,float,0>,FDefaultSetAllocator>
               **)((longlong)this + 0x18),
             (TPairInitializer<UE::Geometry::FIndex2i_const_&,float_const_&> *)&stack0x00000010,
             (bool *)&local_48);
  return;
}

// operator() @ 144070d00

void __thiscall
`FGeometryCollectionProximityUtility::UpdateProximity'::__l19::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 (*pauVar23) [16];
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined1 auVar47 [16];
  
  plVar5 = *(longlong **)this;
  lVar24 = (longlong)param_1;
  uVar26 = (uint)~param_1 >> 0x1f;
  uVar21 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar21 = uVar26;
  }
  if ((uVar21 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pauVar23 = (undefined1 (*) [16])(lVar24 * 0x38 + *plVar5);
  lVar22 = **(longlong **)((longlong)this + 8);
  uVar21 = 0;
  if (param_1 < *(int *)(lVar22 + 0x438)) {
    uVar21 = uVar26;
  }
  if ((uVar21 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = *(int *)(*(longlong *)(lVar22 + 0x430) + lVar24 * 4);
  uVar27 = (ulonglong)iVar3;
  lVar22 = **(longlong **)((longlong)this + 8);
  uVar21 = 0;
  if (param_1 < *(int *)(lVar22 + 0x458)) {
    uVar21 = uVar26;
  }
  if ((uVar21 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar5 = *(longlong **)((longlong)this + 0x10);
  iVar4 = *(int *)(*(longlong *)(lVar22 + 0x450) + lVar24 * 4);
  lVar22 = **(longlong **)((longlong)this + 8);
  uVar21 = 0;
  if (param_1 < *(int *)(lVar22 + 0x3b8)) {
    uVar21 = uVar26;
  }
  if ((uVar21 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar21 = *(uint *)(*(longlong *)(lVar22 + 0x3b0) + lVar24 * 4);
  uVar26 = 0;
  if ((int)uVar21 < (int)plVar5[1]) {
    uVar26 = ~uVar21 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar24 = *plVar5;
  lVar25 = (longlong)(iVar4 + iVar3);
  lVar22 = (longlong)(int)uVar21 * 0x60;
  auVar2 = *(undefined1 (*) [16])(lVar22 + lVar24);
  auVar31 = *(undefined1 (*) [16])(lVar22 + 0x10 + lVar24);
  pdVar1 = (double *)(lVar22 + 0x20 + lVar24);
  dVar13 = *pdVar1;
  dVar14 = pdVar1[1];
  dVar15 = *(double *)(lVar22 + 0x30 + lVar24);
  pdVar1 = (double *)(lVar22 + 0x40 + lVar24);
  dVar16 = *pdVar1;
  dVar17 = pdVar1[1];
  pdVar1 = (double *)(lVar22 + 0x50 + lVar24);
  dVar18 = *pdVar1;
  dVar19 = pdVar1[1];
  if ((longlong)uVar27 < lVar25) {
    lVar24 = uVar27 * 0xc;
    auVar47 = blendpd(auVar2,auVar31,2);
    dVar10 = auVar31._8_8_;
    lVar25 = lVar25 - uVar27;
    dVar9 = auVar31._0_8_;
    dVar11 = auVar2._8_8_;
    do {
      uVar26 = (uint)uVar27;
      lVar22 = **(longlong **)((longlong)this + 8);
      uVar21 = 0;
      if ((int)uVar26 < *(int *)(lVar22 + 0x238)) {
        uVar21 = ~uVar26 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar22 = *(longlong *)(lVar22 + 0x230);
      dVar43 = dVar16 * (double)*(float *)(lVar24 + lVar22);
      dVar44 = dVar17 * (double)*(float *)(lVar24 + 4 + lVar22);
      dVar29 = (double)*(float *)(lVar24 + 8 + lVar22) * dVar18;
      dVar28 = dVar19 * 0.0;
      auVar40._8_4_ = SUB84(dVar44,0);
      auVar40._0_8_ = dVar43;
      uVar45 = (undefined4)((ulonglong)dVar44 >> 0x20);
      auVar40._12_4_ = uVar45;
      auVar30._8_4_ = SUB84(dVar44,0);
      auVar30._0_8_ = dVar43;
      auVar30._12_4_ = uVar45;
      auVar31._8_4_ = SUB84(dVar28,0);
      auVar31._0_8_ = dVar29;
      auVar31._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      auVar31 = blendpd(auVar30,auVar31,2);
      auVar41._0_8_ = auVar40._8_8_ * auVar2._0_8_ - dVar11 * dVar43;
      auVar41._8_8_ = dVar29 * dVar11 - dVar9 * dVar44;
      auVar32._0_8_ = auVar31._0_8_ * dVar9 - auVar47._0_8_ * dVar29;
      auVar32._8_8_ = auVar31._8_8_ * dVar10 - auVar47._8_8_ * dVar28;
      auVar31 = blendpd(auVar41,auVar32,2);
      dVar28 = auVar41._8_8_ + auVar41._8_8_;
      dVar38 = auVar32._0_8_ + auVar32._0_8_;
      uVar45 = (undefined4)((ulonglong)dVar38 >> 0x20);
      auVar42._0_8_ = auVar31._0_8_ + auVar31._0_8_;
      auVar42._8_8_ = auVar31._8_8_ + auVar31._8_8_;
      auVar35._8_4_ = SUB84(dVar38,0);
      auVar35._0_8_ = dVar28;
      auVar35._12_4_ = uVar45;
      auVar33._8_4_ = SUB84(dVar38,0);
      auVar33._0_8_ = dVar28;
      auVar33._12_4_ = uVar45;
      auVar31 = blendpd(auVar33,auVar42,2);
      auVar36._0_8_ = auVar35._8_8_ * auVar2._0_8_ - dVar28 * dVar11;
      auVar36._8_8_ = auVar42._0_8_ * dVar11 - dVar38 * dVar9;
      auVar34._0_8_ = auVar31._0_8_ * dVar9 - auVar42._0_8_ * auVar47._0_8_;
      auVar34._8_8_ = auVar31._8_8_ * dVar10 - auVar42._8_8_ * auVar47._8_8_;
      auVar31 = blendpd(auVar36,auVar34,2);
      dVar39 = auVar42._0_8_ * dVar10 + dVar29 + auVar31._0_8_ + dVar15;
      dVar29 = dVar28 * dVar10 + dVar43 + auVar36._8_8_ + dVar13;
      dVar28 = dVar38 * dVar10 + dVar44 + auVar34._0_8_ + dVar14;
      uVar45 = SUB84(dVar28,0);
      uVar46 = (undefined4)((ulonglong)dVar28 >> 0x20);
      if (pauVar23[3][0] == '\0') {
        auVar7._8_4_ = uVar45;
        auVar7._0_8_ = dVar29;
        auVar7._12_4_ = uVar46;
        *(undefined1 (*) [16])(pauVar23[1] + 8) = auVar7;
        pauVar23[3][0] = 1;
        auVar8._8_4_ = uVar45;
        auVar8._0_8_ = dVar29;
        auVar8._12_4_ = uVar46;
        *pauVar23 = auVar8;
        *(double *)(pauVar23[2] + 8) = dVar39;
        *(double *)pauVar23[1] = dVar39;
      }
      else {
        auVar12._4_8_ = auVar31._8_8_;
        auVar12._0_4_ = (int)((ulonglong)dVar29 >> 0x20);
        auVar37._0_8_ = auVar12._0_8_ << 0x20;
        auVar37._8_4_ = uVar45;
        auVar37._12_4_ = uVar46;
        dVar28 = dVar29;
        if (*(double *)*pauVar23 <= dVar29) {
          dVar28 = *(double *)*pauVar23;
        }
        dVar38 = auVar37._8_8_;
        if (dVar29 <= *(double *)(pauVar23[1] + 8)) {
          dVar29 = *(double *)(pauVar23[1] + 8);
        }
        *(double *)*pauVar23 = dVar28;
        dVar28 = dVar38;
        if (*(double *)(*pauVar23 + 8) <= dVar38) {
          dVar28 = *(double *)(*pauVar23 + 8);
        }
        if (dVar38 <= *(double *)pauVar23[2]) {
          dVar38 = *(double *)pauVar23[2];
        }
        *(double *)(pauVar23[1] + 8) = dVar29;
        *(double *)(*pauVar23 + 8) = dVar28;
        dVar29 = dVar39;
        if (*(double *)pauVar23[1] <= dVar39) {
          dVar29 = *(double *)pauVar23[1];
        }
        *(double *)pauVar23[2] = dVar38;
        *(double *)pauVar23[1] = dVar29;
        dVar29 = *(double *)(pauVar23[2] + 8);
        if (*(double *)(pauVar23[2] + 8) <= dVar39) {
          dVar29 = dVar39;
        }
        *(double *)(pauVar23[2] + 8) = dVar29;
      }
      uVar27 = (ulonglong)(uVar26 + 1);
      lVar24 = lVar24 + 0xc;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  return;
}

// operator() @ 144072970

void __thiscall
`FGeometryCollectionProximityUtility::EnumerateNeighbors'::__l2::<lambda_4>::operator()
          (void *this,int param_1)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  longlong lVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  longlong *plVar15;
  uint uVar16;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  int local_d0 [2];
  longlong *local_c8;
  int iStack_c0;
  uint uStack_bc;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  lVar10 = *(longlong *)((longlong)this + 0x40);
  uVar12 = 0;
  if (param_1 < *(int *)(lVar10 + 0x18)) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)((longlong)this + 0x30);
  uVar12 = *(uint *)(*(longlong *)(lVar10 + 0x10) + (longlong)param_1 * 4);
  uVar16 = 0;
  if ((int)uVar12 < *(int *)(lVar3 + 0x18)) {
    uVar16 = ~uVar12 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iStack_c0 = 0;
  plVar15 = (longlong *)((longlong)(int)uVar12 * 0x50 + *(longlong *)(lVar3 + 0x10));
  local_a8 = 0;
  iVar9 = (int)plVar15[5];
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2);
  uStack_bc = 1;
  iStack_ac = 0;
  if (iVar9 != 0) {
    pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar2;
    }
    uVar12 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_144072abe;
      uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar10 * 4 + 4);
    }
    uStack_bc = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_bc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_ac = (int)lVar10 + -1 + local_a8;
    if (iVar9 < iStack_ac) {
      iStack_ac = iVar9;
    }
  }
LAB_144072abe:
  uVar12 = *(uint *)(plVar15 + 5);
  uStack_a4 = local_4c;
  uVar16 = uVar12 & 0xffffffe0;
  iStack_a0 = (int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34);
  uStack_b0 = 0xffffffff;
  TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
  TStack_90.CurrentBitIndex = iStack_ac;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = local_a8;
  uStack_70 = CONCAT44(uStack_9c,iStack_a0);
  local_c8 = plVar15;
  local_b8 = pTVar2;
  local_98 = plVar15;
  TStack_90.Array = pTVar2;
  if ((((int)uVar12 < 0) || (iVar9 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)(plVar15 + 5);
  if (uVar12 != uVar8) {
    pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) &
             *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_144072bc0;
      uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_144072bc0:
  do {
    plVar6 = local_98;
    if ((int)local_98[1] - *(int *)((longlong)local_98 + 0x34) != (int)uStack_70) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_90.CurrentBitIndex == uVar12) && (TStack_90.Array == pTVar2)) &&
       (plVar6 == plVar15)) {
      return;
    }
    lVar10 = *(longlong *)((longlong)this + 0x38);
    uVar16 = *(uint *)(*plVar6 + (longlong)TStack_90.CurrentBitIndex * 0xc);
    uVar8 = 0;
    if ((int)uVar16 < *(int *)(lVar10 + 0x18)) {
      uVar8 = ~uVar16 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar16 = *(uint *)(*(longlong *)(lVar10 + 0x10) + (longlong)(int)uVar16 * 4);
    local_res8[0] = uVar16;
    iVar9 = Chaos::Facades::FCollectionHierarchyFacade::GetInitialLevel
                      (*(FCollectionHierarchyFacade **)this,uVar16);
    if (*(char *)((longlong)this + 0x18) == '\0') {
LAB_144072c7f:
      iVar13 = *(int *)((longlong)this + 0x28);
    }
    else {
      iVar13 = *(int *)((longlong)this + 0x28);
      if (iVar9 < iVar13) {
        local_res18[0] = uVar16;
        (*(code *)**(undefined8 **)((longlong)this + 0x10))
                  ((*(undefined8 **)((longlong)this + 0x10))[1],local_res18);
        goto LAB_144072c7f;
      }
    }
    uVar8 = local_res8[0];
    if (iVar13 < iVar9) {
      do {
        uVar8 = uVar16;
        if (uVar16 == 0xffffffff) break;
        uVar16 = Chaos::Facades::FCollectionHierarchyFacade::GetParent
                           (*(FCollectionHierarchyFacade **)this,uVar16);
        iVar9 = iVar9 + -1;
        uVar8 = uVar16;
      } while (*(int *)((longlong)this + 0x28) < iVar9);
    }
    local_res8[0] = uVar8;
    if ((uVar16 != *(uint *)((longlong)this + 8)) && (uVar16 != 0xffffffff)) {
      if (*(char *)((longlong)this + 0x19) != '\0') {
        this_00 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 0x20)
        ;
        if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
          FVar4 = (this_00->Hash).SecondaryData;
          FVar11 = (ForElementType<FSetElementId>)&this_00->Hash;
          if (FVar4 != (ForElementType<FSetElementId>)0x0) {
            FVar11 = FVar4;
          }
          iVar9 = *(int *)((longlong)FVar11 + (ulonglong)(this_00->HashSize - 1U & uVar16) * 4);
          if (iVar9 != -1) {
            do {
              if (*(uint *)(*(longlong *)&this_00->Elements + (longlong)iVar9 * 0xc) == uVar16)
              goto LAB_144072d1f;
              iVar9 = *(int *)(*(longlong *)&this_00->Elements + 4 + (longlong)iVar9 * 0xc);
            } while (iVar9 != -1);
          }
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (this_00,local_d0,(bool *)local_res8);
      }
      local_res20[0] = uVar16;
      (*(code *)**(undefined8 **)((longlong)this + 0x10))
                ((*(undefined8 **)((longlong)this + 0x10))[1],local_res20);
    }
LAB_144072d1f:
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  } while( true );
}

// ClearConnectionGraph @ 14407f6a0

void __thiscall
FGeometryCollectionProximityUtility::ClearConnectionGraph(FGeometryCollectionProximityUtility *this)

{
  FCollectionConnectionGraphFacade local_e8;
  
  GeometryCollection::Facades::FCollectionConnectionGraphFacade::FCollectionConnectionGraphFacade
            (&local_e8,(FManagedArrayCollection *)this->Collection);
  GeometryCollection::Facades::FCollectionConnectionGraphFacade::ClearAttributes(&local_e8);
  return;
}

// ComputeConvexGeometryContactFromProximity @ 14407fc50

TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_> *
__cdecl FGeometryCollectionProximityUtility::ComputeConvexGeometryContactFromProximity
                  (TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
                   *__return_storage_ptr__,FGeometryCollection *param_1,float param_2,
                  FConvexHulls *param_3)

{
  ulonglong uVar1;
  FConvex *pFVar2;
  code *pcVar3;
  float fVar4;
  FName FVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FName *pFVar13;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar14;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar15;
  TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
  *pTVar16;
  byte bVar17;
  FValueType *pFVar18;
  longlong lVar19;
  longlong *plVar20;
  FValueType *pFVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  TBitArray<FDefaultBitArrayAllocator> *pTVar27;
  FScriptContainerElement *pFVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 local_2a8;
  undefined1 local_2a7;
  undefined1 local_2a6;
  undefined1 local_2a5;
  uint local_2a4;
  uint local_2a0;
  ForAnyElementType local_298;
  undefined8 local_290;
  FScriptContainerElement *local_288;
  undefined8 uStack_280;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_278;
  uint uStack_270;
  uint uStack_26c;
  uint uStack_268;
  undefined4 uStack_264;
  int local_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  uint uStack_240;
  uint uStack_23c;
  uint local_238;
  undefined4 uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  uint local_218;
  int local_214;
  TBitArray<FDefaultBitArrayAllocator> *local_210;
  longlong local_208;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_200;
  FScriptContainerElement *local_1f8;
  FScriptContainerElement *local_1f0;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  longlong *local_1d8;
  TBitArray<FDefaultBitArrayAllocator> *local_1d0;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  FScriptContainerElement *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  FScriptContainerElement *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  FName local_128;
  FName local_120;
  FName local_118 [4];
  undefined4 local_f4;
  undefined4 local_d4;
  undefined4 local_b4;
  
  FVar5 = FGeometryCollection::GeometryGroup;
  pFVar13 = ::FName::FName(local_118,"Proximity");
  local_120 = FVar5;
  local_128 = *pFVar13;
  pTVar14 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&param_1->_padding_,(TTuple<FName,FName> *)&local_128);
  pFVar21 = (FValueType *)0x0;
  pFVar18 = (FValueType *)&pTVar14->field_0x10;
  if (pTVar14 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar18 = pFVar21;
  }
  if (pFVar18 == (FValueType *)0x0) {
    local_200 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0;
  }
  else {
    pTVar15 = FManagedArrayCollection::FValueType::
              ModifyTypedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pFVar18);
    local_200 = pTVar15;
    if (pTVar15 != (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0)
    goto LAB_14407fcf1;
  }
  pTVar15 = local_200;
  local_2a8 = 0;
  bVar8 = `FGeometryCollectionProximityUtility::ComputeConvexGeometryContactFromProximity'::__l3::
          <lambda_1>::operator()(&local_2a8);
  if (!bVar8) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
LAB_14407fcf1:
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290 = 0;
  local_2a4 = 0;
  iVar9 = (**(code **)(*(longlong *)pTVar15 + 0x60))(pTVar15);
  fVar4 = __real_3f000000;
  if (0 < iVar9) {
    local_208 = 0;
    pFVar18 = pFVar21;
    do {
      uVar11 = (uint)pFVar21;
      uVar23 = 0;
      if ((int)uVar11 < *(int *)&(param_1->TransformIndex).field_0x18) {
        uVar23 = ~uVar11 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pTVar16 = (TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
                   *)(*pcVar3)();
        return pTVar16;
      }
      uVar23 = *(uint *)(*(longlong *)&(param_1->TransformIndex).field_0x10 + (longlong)pFVar18 * 4)
      ;
      uVar10 = 0;
      if ((int)uVar23 < (param_3->TransformToHullsIndices).ArrayNum) {
        uVar10 = ~uVar23 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pTVar16 = (TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
                   *)(*pcVar3)();
        return pTVar16;
      }
      local_1f8 = (param_3->TransformToHullsIndices).AllocatorInstance.Data +
                  (longlong)(int)uVar23 * 0x50;
      uVar23 = 0;
      uVar10 = uVar23;
      if ((int)uVar11 < *(int *)&pTVar15->field_0x18) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pTVar16 = (TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
                   *)(*pcVar3)();
        return pTVar16;
      }
      uVar10 = 1;
      plVar20 = (longlong *)((longlong)pFVar18 * 0x50 + *(longlong *)&pTVar15->field_0x10);
      uVar11 = *(uint *)(plVar20 + 5);
      pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar20 + 2);
      uStack_23c = uVar23;
      local_238 = uVar23;
      if (uVar11 != 0) {
        pTVar26 = pTVar27;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar20[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)plVar20[4];
        }
        uVar12 = *(uint *)(pTVar26->AllocatorInstance).InlineData;
        local_238 = 0;
        uVar23 = 0;
        while (uVar12 == 0) {
          lVar19 = (longlong)(int)uVar23;
          local_238 = local_238 + 0x20;
          uVar23 = uVar23 + 1;
          uStack_23c = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar23)
          goto LAB_14407fefd;
          uVar12 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar19 * 4 + 4);
        }
        uVar10 = -uVar12 & uVar12;
        uVar1 = (ulonglong)uVar10 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_1e8 = (int)lVar19;
        uStack_23c = (local_238 - 1) + local_1e8;
        if ((int)uVar11 < (int)uStack_23c) {
          uStack_23c = uVar11;
        }
      }
LAB_14407fefd:
      uVar12 = *(uint *)(plVar20 + 5);
      uStack_234 = local_f4;
      bVar17 = (byte)uVar12 & 0x1f;
      iStack_230 = (int)plVar20[1] - *(int *)((longlong)plVar20 + 0x34);
      uVar22 = uVar12 & 0xffffffe0;
      uStack_250 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar10,uVar23);
      TStack_150.CurrentBitIndex = uStack_23c;
      TStack_150.UnvisitedBitMask = 0xffffffff;
      iVar9 = (int)uVar12 >> 5;
      uVar23 = -1 << bVar17;
      local_258 = CONCAT44(1 << bVar17,iVar9);
      local_248._4_4_ = uVar12;
      local_248._0_4_ = uVar23;
      TStack_150._padding_ = (longlong)uStack_250;
      TStack_150._28_4_ = local_f4;
      TStack_150.BaseBitIndex = local_238;
      uStack_130 = CONCAT44(uStack_22c,iStack_230);
      uStack_250 = pTVar27;
      uStack_240 = uVar22;
      local_1d8 = plVar20;
      local_158 = plVar20;
      TStack_150.Array = pTVar27;
      if ((((int)uVar12 < 0) || ((int)uVar11 < (int)uVar12)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        pTVar16 = (TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
                   *)(*pcVar3)();
        return pTVar16;
      }
      uVar11 = *(uint *)(plVar20 + 5);
      if (uVar12 != uVar11) {
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar20[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)plVar20[4];
        }
        uVar23 = uVar23 & *(uint *)((pTVar27->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
        while (uVar23 == 0) {
          uStack_240 = uVar22 + 0x20;
          lVar19 = (longlong)iVar9;
          iVar9 = iVar9 + 1;
          uVar1 = (ulonglong)local_258 >> 0x20;
          local_258 = CONCAT44((int)uVar1,iVar9);
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) {
            local_248._4_4_ = uVar11;
            goto LAB_14408003e;
          }
          uVar23 = *(uint *)((pTVar27->AllocatorInstance).InlineData + lVar19 * 4 + 4);
          local_248._0_4_ = 0xffffffff;
          local_248._4_4_ = 0;
          uVar22 = uStack_240;
        }
        local_258 = CONCAT44(-uVar23 & uVar23,(undefined4)local_258);
        uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_1e4 = (int)lVar19;
        local_248._4_4_ = (uVar22 - 1) + local_1e4;
        if ((int)uVar11 < (int)local_248._4_4_) {
          local_248._4_4_ = uVar11;
        }
      }
LAB_14408003e:
      uStack_264 = uStack_23c;
      uStack_268 = uStack_240;
      uStack_280 = local_258;
      pTStack_278 = uStack_250;
      uStack_270 = (uint)local_248;
      uStack_26c = local_248._4_4_;
      uVar6 = _uStack_270;
      uStack_26c = SUB84(local_248,4);
      local_210 = uStack_250;
      local_214 = uStack_26c;
      uVar23 = uStack_26c;
      _uStack_270 = uVar6;
      while( true ) {
        plVar20 = local_158;
        if ((int)local_158[1] - *(int *)((longlong)local_158 + 0x34) != (int)uStack_130) {
          local_2a7 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2a7);
        }
        pTVar15 = local_200;
        if (((TStack_150.CurrentBitIndex == uVar23) && (TStack_150.Array == local_210)) &&
           (plVar20 == local_1d8)) break;
        local_218 = *(uint *)(*plVar20 + (longlong)TStack_150.CurrentBitIndex * 0xc);
        lVar19 = (longlong)(int)local_218;
        if ((int)local_2a4 < (int)local_218) {
          uVar23 = 0;
          uVar11 = uVar23;
          if ((int)local_218 < *(int *)&(param_1->TransformIndex).field_0x18) {
            uVar11 = ~local_218 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
                       *)(*pcVar3)();
            return pTVar16;
          }
          uVar11 = *(uint *)(*(longlong *)&(param_1->TransformIndex).field_0x10 + lVar19 * 4);
          uVar10 = uVar23;
          if ((int)uVar11 < (param_3->TransformToHullsIndices).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
                       *)(*pcVar3)();
            return pTVar16;
          }
          pFVar7 = local_1f8;
          uVar10 = *(uint *)(local_1f8 + 0x28);
          pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10);
          fVar31 = 0.0;
          pFVar28 = (param_3->TransformToHullsIndices).AllocatorInstance.Data +
                    (longlong)(int)uVar11 * 0x50;
          fVar32 = 0.0;
          fVar33 = 0.0;
          fVar34 = 0.0;
          uVar11 = 1;
          uStack_26c = uVar23;
          uStack_268 = uVar23;
          if (uVar10 != 0) {
            pTVar26 = pTVar27;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(local_1f8 + 0x20) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)(local_1f8 + 0x20);
            }
            uVar12 = *(uint *)(pTVar26->AllocatorInstance).InlineData;
            while (uVar12 == 0) {
              lVar19 = (longlong)(int)uVar23;
              uStack_268 = uStack_268 + 0x20;
              uVar23 = uVar23 + 1;
              uStack_26c = uVar10;
              if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar23)
              goto LAB_14408020d;
              uVar12 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar19 * 4 + 4);
            }
            uVar11 = -uVar12 & uVar12;
            uVar1 = (ulonglong)uVar11 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            local_1e0 = (int)lVar19;
            uStack_26c = (uStack_268 - 1) + local_1e0;
            if ((int)uVar10 < (int)uStack_26c) {
              uStack_26c = uVar10;
            }
          }
LAB_14408020d:
          uVar12 = *(uint *)(local_1f8 + 0x28);
          local_260 = *(int *)(local_1f8 + 8) - *(int *)(local_1f8 + 0x34);
          local_288 = local_1f8;
          uVar22 = uVar12 & 0xffffffe0;
          uStack_280 = CONCAT44(uVar11,uVar23);
          uStack_270 = 0xffffffff;
          uStack_264 = local_d4;
          local_188 = local_1f8;
          TStack_180._padding_ = uStack_280;
          iVar9 = (int)uVar12 >> 5;
          uStack_160 = CONCAT44(uStack_25c,local_260);
          TStack_180.BaseBitIndex = uStack_268;
          TStack_180._28_4_ = local_d4;
          TStack_180.UnvisitedBitMask = 0xffffffff;
          TStack_180.CurrentBitIndex = uStack_26c;
          local_2a0 = uVar12;
          pTStack_278 = pTVar27;
          local_1f0 = pFVar28;
          local_1d0 = pTVar27;
          TStack_180.Array = pTVar27;
          if ((((int)uVar12 < 0) || ((int)uVar10 < (int)uVar12)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
                       *)(*pcVar3)();
            return pTVar16;
          }
          uVar23 = *(uint *)(pFVar7 + 0x28);
          if (uVar12 != uVar23) {
            pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar7 + 0x20);
            pTVar25 = pTVar27;
            if (pTVar26 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar25 = pTVar26;
            }
            uVar11 = -1 << ((byte)uVar12 & 0x1f) &
                     *(uint *)((pTVar25->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
            while (uVar11 == 0) {
              lVar19 = (longlong)iVar9;
              uVar22 = uVar22 + 0x20;
              iVar9 = iVar9 + 1;
              uVar12 = uVar23;
              local_2a0 = uVar23;
              if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
              goto LAB_144080340;
              uVar11 = *(uint *)((pTVar25->AllocatorInstance).InlineData + lVar19 * 4 + 4);
            }
            uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
            lVar19 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            local_1c0 = (int)lVar19;
            uVar12 = (uVar22 - 1) + local_1c0;
            local_2a0 = uVar12;
            if ((int)uVar23 < (int)uVar12) {
              uVar12 = uVar23;
              local_2a0 = uVar23;
            }
          }
LAB_144080340:
          while( true ) {
            pFVar7 = local_188;
            if (*(int *)(local_188 + 8) - *(int *)(local_188 + 0x34) != (int)uStack_160) {
              local_2a6 = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2a6);
            }
            if (((TStack_180.CurrentBitIndex == uVar12) && (TStack_180.Array == pTVar27)) &&
               (pFVar7 == local_1f8)) break;
            iVar9 = *(int *)(pFVar28 + 0x28);
            pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar28 + 0x10);
            uVar11 = 1;
            uVar23 = *(uint *)(*(longlong *)pFVar7 + (longlong)TStack_180.CurrentBitIndex * 0xc);
            iVar24 = 0;
            uStack_268 = 0;
            uStack_26c = 0;
            if (iVar9 != 0) {
              pTVar26 = pTVar27;
              if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar28 + 0x20) !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar28 + 0x20);
              }
              uVar10 = *(uint *)(pTVar26->AllocatorInstance).InlineData;
              uStack_268 = 0;
              while (uVar10 == 0) {
                lVar19 = (longlong)iVar24;
                uStack_268 = uStack_268 + 0x20;
                iVar24 = iVar24 + 1;
                uStack_26c = iVar9;
                if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24)
                goto LAB_14408040d;
                uVar10 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar19 * 4 + 4);
              }
              uVar11 = -uVar10 & uVar10;
              uVar1 = (ulonglong)uVar11 * 2 + 1;
              lVar19 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              local_1c4 = (int)lVar19;
              uStack_26c = uStack_268 + -1 + local_1c4;
              if (iVar9 < (int)uStack_26c) {
                uStack_26c = iVar9;
              }
            }
LAB_14408040d:
            local_260 = *(int *)(pFVar28 + 8) - *(int *)(pFVar28 + 0x34);
            uVar10 = *(uint *)(pFVar28 + 0x28);
            uStack_280 = CONCAT44(uVar11,iVar24);
            uVar11 = uVar10 & 0xffffffe0;
            uStack_270 = 0xffffffff;
            uStack_264 = local_b4;
            TStack_1b0._padding_ = uStack_280;
            iVar24 = (int)uVar10 >> 5;
            uStack_190 = CONCAT44(uStack_25c,local_260);
            TStack_1b0.UnvisitedBitMask = 0xffffffff;
            TStack_1b0.CurrentBitIndex = uStack_26c;
            TStack_1b0.BaseBitIndex = uStack_268;
            TStack_1b0._28_4_ = local_b4;
            local_288 = pFVar28;
            pTStack_278 = pTVar27;
            local_1b8 = pFVar28;
            TStack_1b0.Array = pTVar27;
            if ((((int)uVar10 < 0) || (iVar9 < (int)uVar10)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              pTVar16 = (TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
                         *)(*pcVar3)();
              return pTVar16;
            }
            pFVar7 = local_1f0;
            uVar12 = *(uint *)(pFVar28 + 0x28);
            if (uVar10 != uVar12) {
              pTVar26 = pTVar27;
              if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar28 + 0x20) !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar28 + 0x20);
              }
              uVar10 = -1 << ((byte)uVar10 & 0x1f) &
                       *(uint *)((pTVar26->AllocatorInstance).InlineData + (longlong)iVar24 * 4);
              while (uVar10 == 0) {
                lVar19 = (longlong)iVar24;
                uVar11 = uVar11 + 0x20;
                iVar24 = iVar24 + 1;
                uVar10 = uVar12;
                if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
                goto LAB_144080521;
                uVar10 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar19 * 4 + 4);
              }
              uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
              lVar19 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              local_1c8 = (int)lVar19;
              uVar10 = (uVar11 - 1) + local_1c8;
              if ((int)uVar12 < (int)uVar10) {
                uVar10 = uVar12;
              }
            }
LAB_144080521:
            while( true ) {
              pFVar28 = local_1b8;
              if (*(int *)(local_1b8 + 8) - *(int *)(local_1b8 + 0x34) != (int)uStack_190) {
                local_2a5 = 0;
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2a5);
              }
              if (((TStack_1b0.CurrentBitIndex == uVar10) && (TStack_1b0.Array == pTVar27)) &&
                 (pFVar28 == pFVar7)) break;
              uVar11 = *(uint *)(*(longlong *)pFVar28 + (longlong)TStack_1b0.CurrentBitIndex * 0xc);
              uVar12 = 0;
              if ((int)uVar11 < (param_3->Hulls).ArrayNum) {
                uVar12 = ~uVar11 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar3 = (code *)swi(3);
                pTVar16 = (TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
                           *)(*pcVar3)();
                return pTVar16;
              }
              pFVar2 = *(FConvex **)
                        ((param_3->Hulls).AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
              uVar11 = 0;
              if ((int)uVar23 < (param_3->Hulls).ArrayNum) {
                uVar11 = ~uVar23 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar3 = (code *)swi(3);
                pTVar16 = (TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
                           *)(*pcVar3)();
                return pTVar16;
              }
              UE::GeometryCollectionConvexUtility::HullIntersectionStats
                        (*(FConvex **)
                          ((param_3->Hulls).AllocatorInstance.Data + (longlong)(int)uVar23 * 8),
                         pFVar2,param_2,&local_21c,&local_220,&local_228,&local_224);
              fVar29 = local_228;
              if (local_228 <= fVar33) {
                fVar29 = fVar33;
              }
              fVar30 = local_224;
              if (local_224 <= fVar34) {
                fVar30 = fVar34;
              }
              fVar32 = fVar32 + local_220;
              fVar31 = fVar31 + local_21c;
              TStack_1b0.UnvisitedBitMask =
                   TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
              fVar33 = fVar29;
              fVar34 = fVar30;
            }
            TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
            pTVar27 = local_1d0;
            pFVar28 = pFVar7;
            uVar12 = local_2a0;
          }
          iVar9 = (int)local_290;
          if ((int)local_290 == local_290._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,&local_298,(int *)((longlong)&local_290 + 4));
          }
          local_290 = CONCAT44(local_290._4_4_,iVar9 + 1);
          lVar19 = (longlong)iVar9;
          *(uint *)(local_298.Data + lVar19 * 0x18) = local_2a4;
          *(uint *)(local_298.Data + lVar19 * 0x18 + 4) = local_218;
          *(float *)(local_298.Data + lVar19 * 0x18 + 8) = fVar31 * fVar4;
          *(float *)(local_298.Data + lVar19 * 0x18 + 0xc) = fVar32 * fVar4;
          *(float *)(local_298.Data + lVar19 * 0x18 + 0x10) = fVar33;
          *(float *)(local_298.Data + lVar19 * 0x18 + 0x14) = fVar34;
          uVar23 = local_214;
        }
        TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
      }
      uVar23 = local_2a4 + 1;
      pFVar21 = (FValueType *)(ulonglong)uVar23;
      pFVar18 = (FValueType *)(local_208 + 1);
      local_2a4 = uVar23;
      local_208 = (longlong)pFVar18;
      iVar9 = (**(code **)(*(longlong *)local_200 + 0x60))(local_200);
    } while ((int)uVar23 < iVar9);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_298.Data;
  __return_storage_ptr__->ArrayNum = (int)local_290;
  __return_storage_ptr__->ArrayMax = local_290._4_4_;
  return __return_storage_ptr__;
}

// ComputePreciseProximity @ 144080a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_> * __cdecl
FGeometryCollectionProximityUtility::ComputePreciseProximity
          (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,FGeometryCollection *param_1)

{
  undefined1 auStack_98 [32];
  FGeometryCollectionProximitySpatial local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::
  FGeometryCollectionProximitySpatial(&local_78,param_1,__real_3c23d70a);
  UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::MoveProximityToArray
            (&local_78,__return_storage_ptr__);
  DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             local_78.KnownProximity.AllocatorInstance.Data,local_78.KnownProximity.ArrayNum);
  if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
      local_78.KnownProximity.AllocatorInstance.Data !=
      (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    FMemory::Free(local_78.KnownProximity.AllocatorInstance.Data);
  }
  DestructItems<UE::GeometryCollectionInternal::FPerGeometrySpatial,int>
            ((FPerGeometrySpatial *)local_78.GeoInfo.AllocatorInstance.Data,
             local_78.GeoInfo.ArrayNum);
  if ((FPerGeometrySpatial *)local_78.GeoInfo.AllocatorInstance.Data != (FPerGeometrySpatial *)0x0)
  {
    FMemory::Free(local_78.GeoInfo.AllocatorInstance.Data);
  }
  if (local_78.SurfaceNormals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.SurfaceNormals.AllocatorInstance.Data);
  }
  if (local_78.TransformedVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.TransformedVertices.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CopyProximityToConnectionGraph @ 144082d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGeometryCollectionProximityUtility::CopyProximityToConnectionGraph
          (FGeometryCollectionProximityUtility *this,
          TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
          *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  FGeometryCollection *pFVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  FName FVar7;
  FCollectionHierarchyFacade *this_00;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FName *pFVar15;
  TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
  *pTVar16;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar17;
  longlong lVar18;
  byte bVar19;
  longlong lVar20;
  ForElementType<FSetElementId> FVar21;
  int iVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  uint *puVar29;
  undefined8 uVar30;
  FScriptContainerElement *pFVar31;
  int iVar32;
  uint uVar33;
  TBitArray<FDefaultBitArrayAllocator> *pTVar34;
  undefined1 auStackY_588 [32];
  undefined1 local_538;
  undefined1 local_537 [3];
  uint local_534;
  undefined1 local_530 [4];
  uint local_52c;
  int local_528;
  int local_524;
  uint local_520;
  longlong local_518;
  undefined4 local_510 [2];
  undefined8 local_508;
  TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
  local_500;
  FScriptContainerElement *local_4f0;
  uint uStack_4e8;
  uint uStack_4e4;
  TBitArray<FDefaultBitArrayAllocator> *local_4e0;
  undefined4 uStack_4d8;
  uint uStack_4d4;
  uint local_4d0;
  undefined4 uStack_4cc;
  int iStack_4c8;
  undefined4 uStack_4c4;
  FName local_4c0 [2];
  FScriptContainerElement *local_4b0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_4a8;
  FGeometryCollectionProximityUtility *local_498;
  FCollectionConnectionGraphFacade *local_490;
  FCollectionHierarchyFacade *local_488;
  TSet<TTuple<UE::Geometry::FIndex2i,float>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,float,0>,FDefaultSetAllocator>
  *local_480;
  int local_478;
  int local_474;
  TPairInitializer<UE::Geometry::FIndex2i_const_&,float_const_&> local_470;
  TBitArray<FDefaultBitArrayAllocator> *local_460;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_458;
  FScriptContainerElement *local_450;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_448;
  undefined8 uStack_428;
  longlong *local_420;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_418;
  undefined8 uStack_3f8;
  FProximityProperties local_3f0;
  int *local_3e0;
  undefined4 *local_3d8;
  FConvexHulls local_3d0;
  FName local_398;
  TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
  local_390;
  FConvexCreationProperties local_380;
  TFunction<bool___cdecl(int)> local_368;
  FCollectionConnectionGraphFacade local_338;
  undefined4 local_23c;
  undefined4 local_21c;
  FCollectionHierarchyFacade local_218;
  FCollectionConnectionGraphFacade local_168;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  FVar7 = FGeometryCollection::GeometryGroup;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_588;
  pFVar4 = this->Collection;
  pFVar15 = ::FName::FName(&local_398,"Proximity");
  bVar9 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)pFVar4,*pFVar15,FVar7);
  if (bVar9) {
    GeometryCollection::Facades::FCollectionConnectionGraphFacade::FCollectionConnectionGraphFacade
              (&local_338,(FManagedArrayCollection *)this->Collection);
    GeometryCollection::Facades::FCollectionConnectionGraphFacade::DefineSchema(&local_338);
    GeometryCollection::Facades::FCollectionConnectionGraphFacade::ResetConnections(&local_338);
    Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
              (&local_218,(FManagedArrayCollection *)this->Collection);
    Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_218);
    local_490 = &local_338;
    pFVar27 = (FScriptContainerElement *)0x0;
    local_488 = &local_218;
    local_88._0_8_ = 0;
    local_480 = (TSet<TTuple<UE::Geometry::FIndex2i,float>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,float,0>,FDefaultSetAllocator>
                 *)local_88;
    local_88._8_8_ = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    local_498 = this;
    FGeometryCollectionProximityPropertiesInterface::GetProximityProperties
              ((FGeometryCollectionProximityPropertiesInterface *)&this->Collection->_padding_,
               &local_3f0);
    uVar30 = 1;
    local_508 = 1;
    if (local_3f0.ContactAreaMethod == ConvexHullContactArea) {
      GeometryCollection::Facades::FCollectionConnectionGraphFacade::EnableContactAreas
                (&local_338,true,__real_3f800000);
      local_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_500.ArrayNum = 0;
      local_500.ArrayMax = 0;
      if (param_1 ==
          (TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
           *)0x0) {
        FGeometryCollectionConvexPropertiesInterface::GetConvexProperties
                  ((FGeometryCollectionConvexPropertiesInterface *)&this->Collection->_padding_,
                   &local_380,-1);
        local_4a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4a8.ArrayNum = 0;
        local_4a8.ArrayMax = 0;
        GeometryCollectionAlgo::
        GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
                  ((TManagedArray<UE::Math::TTransform<float>_> *)&this->Collection->_padding_,
                   (TManagedArray<int> *)&this->Collection->_padding_,&local_4a8);
        local_368._0_8_ = 0;
        local_368._40_8_ = 0;
        FGeometryCollectionConvexUtility::ComputeLeafHulls
                  (&local_3d0,this->Collection,&local_4a8,(double)local_380.SimplificationThreshold,
                   0.0,&local_368,(FConvexDecompositionSettings *)0x0,
                   (TArray<FGeometryCollectionConvexUtility::FTransformedConvex,TSizedDefaultAllocator<32>_>
                    *)0x0,(TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                           *)0x0,
                   (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                    *)0x0);
        pTVar16 = ComputeConvexGeometryContactFromProximity
                            (&local_390,this->Collection,local_3f0.DistanceThreshold,&local_3d0);
        if (&local_500 != pTVar16) {
          pFVar27 = (pTVar16->AllocatorInstance).Data;
          (pTVar16->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_500.ArrayNum = pTVar16->ArrayNum;
          local_500.ArrayMax = pTVar16->ArrayMax;
          pTVar16->ArrayNum = 0;
          pTVar16->ArrayMax = 0;
          local_500.AllocatorInstance.Data = pFVar27;
        }
        if (local_390.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_390.AllocatorInstance.Data);
        }
        param_1 = &local_500;
        if (local_3d0.Pivots.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.Pivots.AllocatorInstance.Data);
        }
        DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   local_3d0.TransformToHullsIndices.AllocatorInstance.Data,
                   local_3d0.TransformToHullsIndices.ArrayNum);
        if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
            local_3d0.TransformToHullsIndices.AllocatorInstance.Data !=
            (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
          FMemory::Free(local_3d0.TransformToHullsIndices.AllocatorInstance.Data);
        }
        DestructItems<TRefCountPtr<Chaos::FConvex>,int>
                  ((TRefCountPtr<Chaos::FConvex> *)local_3d0.Hulls.AllocatorInstance.Data,
                   local_3d0.Hulls.ArrayNum);
        if (local_3d0.Hulls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.Hulls.AllocatorInstance.Data);
        }
        if (local_4a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a8.AllocatorInstance.Data);
        }
      }
      iVar23 = param_1->ArrayNum;
      pFVar24 = (param_1->AllocatorInstance).Data;
      pFVar31 = pFVar24 + (longlong)iVar23 * 0x18;
      while( true ) {
        if (param_1->ArrayNum != iVar23) {
          local_538 = 0;
          `TCheckedPointerIterator<FGeometryCollectionProximityUtility::FGeometryContactEdge_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_538);
        }
        if (pFVar24 == pFVar31) break;
        `FGeometryCollectionProximityUtility::CopyProximityToConnectionGraph'::__l2::<lambda_1>::
        operator()(&local_498,*(int *)pFVar24,*(int *)(pFVar24 + 4),true,*(float *)(pFVar24 + 8));
        pFVar24 = pFVar24 + 0x18;
      }
      if (pFVar27 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar27);
      }
    }
    else {
      GeometryCollection::Facades::FCollectionConnectionGraphFacade::EnableContactAreas
                (&local_338,false,__real_3f800000);
      FVar7 = FGeometryCollection::GeometryGroup;
      pFVar4 = this->Collection;
      pFVar15 = ::FName::FName(local_4c0,"Proximity");
      pTVar17 = FManagedArrayCollection::
                GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                          ((FManagedArrayCollection *)pFVar4,*pFVar15,FVar7);
      local_520 = 0;
      local_458 = pTVar17;
      iVar23 = (**(code **)(*(longlong *)pTVar17 + 0x60))(pTVar17);
      uVar30 = local_508;
      if (0 < iVar23) {
        local_518 = 0;
        local_4b0 = (FScriptContainerElement *)0x0;
        pFVar31 = pFVar27;
        do {
          uVar33 = ~(uint)pFVar31 >> 0x1f;
          uVar26 = 0;
          if ((int)(uint)pFVar31 < *(int *)&pTVar17->field_0x18) {
            uVar26 = uVar33;
          }
          local_534 = uVar33;
          if ((uVar26 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uStack_4e8 = 0;
          pFVar27 = pFVar27 + *(longlong *)&pTVar17->field_0x10;
          iVar23 = *(int *)(pFVar27 + 0x28);
          pTVar34 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar27 + 0x10);
          local_4d0 = 0;
          uStack_4e4 = (uint)local_508;
          uStack_4d4 = 0;
          if (iVar23 != 0) {
            pTVar28 = pTVar34;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar27 + 0x20) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar28 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar27 + 0x20);
            }
            uVar26 = *(uint *)(pTVar28->AllocatorInstance).InlineData;
            while (uVar26 == 0) {
              lVar20 = (longlong)(int)uStack_4e8;
              local_4d0 = local_4d0 + 0x20;
              uStack_4e8 = uStack_4e8 + 1;
              uStack_4d4 = iVar23;
              if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_4e8)
              goto LAB_1440831bd;
              uVar26 = *(uint *)((pTVar28->AllocatorInstance).InlineData + lVar20 * 4 + 4);
            }
            uStack_4e4 = -uVar26 & uVar26;
            uVar1 = (ulonglong)uStack_4e4 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_478 = (int)lVar20;
            uStack_4d4 = local_4d0 + -1 + local_478;
            if (iVar23 < (int)uStack_4d4) {
              uStack_4d4 = iVar23;
            }
          }
LAB_1440831bd:
          uVar26 = *(uint *)(pFVar27 + 0x28);
          uStack_4cc = local_23c;
          iStack_4c8 = *(int *)(pFVar27 + 8) - *(int *)(pFVar27 + 0x34);
          uVar25 = uVar26 & 0xffffffe0;
          TStack_448._padding_ = CONCAT44(uStack_4e4,uStack_4e8);
          uStack_4d8 = 0xffffffff;
          TStack_448.CurrentBitIndex = uStack_4d4;
          TStack_448.UnvisitedBitMask = 0xffffffff;
          iVar22 = (int)uVar26 >> 5;
          TStack_448._28_4_ = local_23c;
          TStack_448.BaseBitIndex = local_4d0;
          uStack_428 = CONCAT44(uStack_4c4,iStack_4c8);
          local_52c = uVar26;
          local_4f0 = pFVar27;
          local_4e0 = pTVar34;
          local_470.Value = (float *)pFVar27;
          local_460 = pTVar34;
          local_450 = pFVar27;
          TStack_448.Array = pTVar34;
          if ((((int)uVar26 < 0) || (iVar23 < (int)uVar26)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar2 = *(uint *)(pFVar27 + 0x28);
          if (uVar26 != uVar2) {
            pTVar28 = pTVar34;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar27 + 0x20) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar28 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar27 + 0x20);
            }
            uVar26 = -1 << ((byte)uVar26 & 0x1f) &
                     *(uint *)((pTVar28->AllocatorInstance).InlineData + (longlong)iVar22 * 4);
            while (uVar26 == 0) {
              lVar20 = (longlong)iVar22;
              uVar25 = uVar25 + 0x20;
              iVar22 = iVar22 + 1;
              local_52c = uVar2;
              uVar26 = uVar2;
              if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
              goto LAB_1440832d1;
              uVar26 = *(uint *)((pTVar28->AllocatorInstance).InlineData + lVar20 * 4 + 4);
            }
            uVar1 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
            lVar20 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_474 = (int)lVar20;
            local_52c = (uVar25 - 1) + local_474;
            uVar26 = local_52c;
            if ((int)uVar2 < (int)local_52c) {
              local_52c = uVar2;
              uVar26 = uVar2;
            }
          }
LAB_1440832d1:
          pFVar27 = local_450;
          if (*(int *)(local_450 + 8) - *(int *)(local_450 + 0x34) != (int)uStack_428) {
            local_537[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_537);
          }
          pTVar17 = local_458;
          if (((TStack_448.CurrentBitIndex != uVar26) || (TStack_448.Array != pTVar34)) ||
             (pFVar27 != (FScriptContainerElement *)local_470.Value)) {
            local_510[0] = 0x3f800000;
            uVar26 = *(uint *)(*(longlong *)pFVar27 + (longlong)TStack_448.CurrentBitIndex * 0xc);
            pFVar4 = local_498->Collection;
            uVar25 = 0;
            if ((int)pFVar31 < *(int *)&(pFVar4->TransformIndex).field_0x18) {
              uVar25 = uVar33;
            }
            if ((uVar25 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar23 = *(int *)(*(longlong *)&(pFVar4->TransformIndex).field_0x10 + local_518 * 4);
            pFVar4 = local_498->Collection;
            uVar25 = 0;
            if ((int)uVar26 < *(int *)&(pFVar4->TransformIndex).field_0x18) {
              uVar25 = ~uVar26 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_00 = local_488;
            iVar22 = *(int *)(*(longlong *)&(pFVar4->TransformIndex).field_0x10 +
                             (longlong)(int)uVar26 * 4);
            iVar10 = Chaos::Facades::FCollectionHierarchyFacade::GetInitialLevel(local_488,iVar23);
            iVar11 = Chaos::Facades::FCollectionHierarchyFacade::GetInitialLevel(this_00,iVar22);
            iVar12 = Chaos::Facades::FCollectionHierarchyFacade::GetParent(this_00,iVar23);
            iVar13 = Chaos::Facades::FCollectionHierarchyFacade::GetParent(this_00,iVar22);
            while (((iVar12 != -1 && (uVar33 = local_534, iVar13 != -1)) && (iVar23 != iVar22))) {
              if (iVar12 == iVar13) {
                local_528 = iVar23;
                local_524 = iVar22;
                if (iVar22 < iVar23) {
                  local_528 = iVar22;
                  local_524 = iVar23;
                }
                uVar33 = FCrc::MemCrc_DEPRECATED(&local_528,8,0);
                if (*(int *)&(local_480->Elements).field_0x8 ==
                    *(int *)&(local_480->Elements).field_0x34) goto LAB_14408351e;
                FVar5 = (local_480->Hash).SecondaryData;
                FVar21 = (ForElementType<FSetElementId>)&local_480->Hash;
                if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                  FVar21 = FVar5;
                }
                iVar23 = *(int *)((longlong)FVar21 +
                                 (ulonglong)(local_480->HashSize - 1U & uVar33) * 4);
                if (iVar23 == -1) goto LAB_14408351e;
                goto LAB_1440834e0;
              }
              iVar32 = iVar10;
              iVar14 = iVar12;
              if (iVar11 <= iVar10) {
                iVar14 = Chaos::Facades::FCollectionHierarchyFacade::GetParent(local_488,iVar12);
                iVar32 = iVar10 + -1;
                iVar23 = iVar12;
              }
              bVar9 = iVar10 <= iVar11;
              iVar10 = iVar32;
              iVar12 = iVar14;
              uVar33 = local_534;
              if (bVar9) {
                iVar32 = Chaos::Facades::FCollectionHierarchyFacade::GetParent(local_488,iVar13);
                iVar11 = iVar11 + -1;
                iVar22 = iVar13;
                iVar13 = iVar32;
                uVar33 = local_534;
              }
            }
            goto LAB_144083551;
          }
          uVar33 = (int)pFVar31 + 1;
          pFVar31 = (FScriptContainerElement *)(ulonglong)uVar33;
          local_518 = local_518 + 1;
          pFVar27 = local_4b0 + 0x50;
          local_520 = uVar33;
          local_4b0 = pFVar27;
          iVar23 = (**(code **)(*(longlong *)local_458 + 0x60))(local_458);
          uVar30 = local_508;
        } while ((int)uVar33 < iVar23);
      }
    }
    uVar33 = local_60;
    uStack_4e4 = (uint)uVar30;
    uStack_4e8 = 0;
    uStack_4d4 = uStack_4e8;
    local_4d0 = uStack_4e8;
    if (local_60 != 0) {
      puVar29 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar29 = local_68;
      }
      uVar26 = *puVar29;
      while (uVar26 == 0) {
        lVar20 = (longlong)(int)uStack_4e8;
        local_4d0 = local_4d0 + 0x20;
        uStack_4e8 = uStack_4e8 + 1;
        uStack_4d4 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_4e8)
        goto LAB_144083631;
        uVar26 = puVar29[lVar20 + 1];
      }
      uStack_4e4 = -uVar26 & uVar26;
      uVar1 = (ulonglong)uStack_4e4 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uStack_4d4 = (local_4d0 - 1) + (int)lVar20;
      local_470.Key._4_4_ = (int)lVar20;
      if ((int)local_60 < (int)uStack_4d4) {
        uStack_4d4 = local_60;
      }
    }
LAB_144083631:
    local_4f0 = (FScriptContainerElement *)local_88;
    uStack_4cc = local_21c;
    uVar26 = local_60 & 0xffffffe0;
    local_4e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uStack_4d8 = 0xffffffff;
    iStack_4c8 = local_88._8_4_ - local_54;
    local_420 = (longlong *)local_88;
    TStack_418._padding_ = CONCAT44(uStack_4e4,uStack_4e8);
    iVar23 = (int)local_60 >> 5;
    bVar19 = (byte)local_60;
    TStack_418.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    TStack_418.UnvisitedBitMask = 0xffffffff;
    TStack_418.CurrentBitIndex = uStack_4d4;
    TStack_418.BaseBitIndex = local_4d0;
    TStack_418._28_4_ = local_21c;
    uStack_3f8 = CONCAT44(uStack_4c4,local_88._8_4_ - local_54);
    if (((int)local_60 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar33 != local_60) {
      puVar29 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar29 = local_68;
      }
      uVar33 = -1 << (bVar19 & 0x1f) & puVar29[iVar23];
      while (uVar33 == 0) {
        lVar20 = (longlong)iVar23;
        uVar26 = uVar26 + 0x20;
        iVar23 = iVar23 + 1;
        uVar33 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_144083760;
        uVar33 = puVar29[lVar20 + 1];
      }
      uVar1 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uVar33 = (uVar26 - 1) + (int)lVar20;
      if ((int)local_60 < (int)uVar33) {
        uVar33 = local_60;
      }
    }
LAB_144083760:
    while( true ) {
      plVar8 = local_420;
      if ((int)local_420[1] - *(int *)((longlong)local_420 + 0x34) != (int)uStack_3f8) {
        `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_530);
      }
      if (((TStack_418.CurrentBitIndex == uVar33) &&
          (TStack_418.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (plVar8 == (longlong *)local_88)) break;
      lVar20 = *plVar8;
      local_4c0[0] = *(FName *)(lVar20 + (longlong)TStack_418.CurrentBitIndex * 0x14);
      fVar3 = *(float *)(lVar20 + 8 + (longlong)TStack_418.CurrentBitIndex * 0x14);
      bVar9 = GeometryCollection::Facades::FCollectionConnectionGraphFacade::HasContactAreas
                        (&local_338);
      if (bVar9) {
        GeometryCollection::Facades::FCollectionConnectionGraphFacade::ConnectWithContact
                  (&local_338,local_4c0[0].ComparisonIndex.Value,local_4c0[0].Number,fVar3);
      }
      else {
        GeometryCollection::Facades::FCollectionConnectionGraphFacade::Connect
                  (&local_338,local_4c0[0].ComparisonIndex.Value,local_4c0[0].Number);
      }
      TStack_418.UnvisitedBitMask = TStack_418.UnvisitedBitMask & ~TStack_418._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_418);
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  else {
    GeometryCollection::Facades::FCollectionConnectionGraphFacade::FCollectionConnectionGraphFacade
              (&local_168,(FManagedArrayCollection *)this->Collection);
    GeometryCollection::Facades::FCollectionConnectionGraphFacade::ClearAttributes(&local_168);
  }
  return;
  while (iVar23 = *(int *)(lVar20 + 0xc), iVar23 != -1) {
LAB_1440834e0:
    lVar20 = *(longlong *)&local_480->Elements + (longlong)iVar23 * 0x14;
    if ((*(int *)(*(longlong *)&local_480->Elements + (longlong)iVar23 * 0x14) == local_528) &&
       (*(int *)(lVar20 + 4) == local_524)) {
      if (iVar23 != -1) {
        lVar18 = lVar20 + 8;
        if (lVar20 == 0) {
          lVar18 = 0;
        }
        uVar33 = local_534;
        if (lVar18 != 0) goto LAB_144083551;
      }
      break;
    }
  }
LAB_14408351e:
  local_3e0 = &local_528;
  local_3d8 = local_510;
  TSet<TTuple<UE::Geometry::FIndex2i,float>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,float,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_const_&,float_const_&>_>
            (local_480,&local_470,(bool *)&local_3e0);
  uVar33 = local_534;
LAB_144083551:
  TStack_448.UnvisitedBitMask = TStack_448.UnvisitedBitMask & ~TStack_448._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_448);
  pFVar31 = (FScriptContainerElement *)(ulonglong)local_520;
  pTVar34 = local_460;
  uVar26 = local_52c;
  goto LAB_1440832d1;
}

// EnumerateNeighbors @ 14408a370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGeometryCollectionProximityUtility::EnumerateNeighbors
          (FGeometryCollectionProximityUtility *this,FCollectionHierarchyFacade *param_1,int param_2
          ,TFunctionRef<void___cdecl(int)> *param_3,bool param_4,bool param_5)

{
  FGeometryCollection *pFVar1;
  ulonglong uVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar7;
  TManagedArray<int> *pTVar8;
  TManagedArray<int> *pTVar9;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [4];
  int local_114;
  TManagedArray<int> *local_110;
  undefined1 local_108 [16];
  FGeometryCollectionProximityUtility *local_f8;
  TManagedArray<int> **local_f0;
  FCollectionHierarchyFacade *local_e8;
  int local_e0;
  TManagedArray<int> *local_d8;
  bool local_d0;
  bool local_cf;
  ForAnyElementType *local_c8;
  int local_c0;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_b8;
  TManagedArray<int> *local_b0;
  TManagedArray<int> *local_a8;
  TManagedArray<int> *local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  FVar3 = FGeometryCollection::GeometryGroup;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pFVar1 = this->Collection;
  local_114 = param_2;
  local_110 = (TManagedArray<int> *)param_3;
  local_f8 = this;
  pFVar6 = ::FName::FName((FName *)local_108,"Proximity");
  bVar4 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)pFVar1,*pFVar6,FVar3);
  if ((!bVar4) &&
     (bVar4 = `FGeometryCollectionProximityUtility::EnumerateNeighbors'::__l3::<lambda_1>::
              operator()(local_118), !bVar4)) {
    return;
  }
  bVar4 = Chaos::Facades::FCollectionHierarchyFacade::IsValid(param_1);
  if ((!bVar4) ||
     (bVar4 = Chaos::Facades::FCollectionHierarchyFacade::HasLevelAttribute(param_1), !bVar4)) {
    `FGeometryCollectionProximityUtility::EnumerateNeighbors'::__l8::<lambda_2>::operator()
              (local_118);
  }
  local_88.MaxBits = 0x80;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  iVar5 = Chaos::Facades::FCollectionHierarchyFacade::GetInitialLevel(param_1,param_2);
  FVar3 = FGeometryCollection::GeometryGroup;
  pFVar1 = this->Collection;
  pFVar6 = ::FName::FName((FName *)local_108,"Proximity");
  pTVar7 = FManagedArrayCollection::
           GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     ((FManagedArrayCollection *)pFVar1,*pFVar6,FVar3);
  FVar3 = FGeometryCollection::GeometryGroup;
  pFVar1 = this->Collection;
  pFVar6 = ::FName::FName((FName *)local_108,"TransformIndex");
  pTVar8 = FManagedArrayCollection::GetAttribute<int>
                     ((FManagedArrayCollection *)pFVar1,*pFVar6,FVar3);
  FVar3 = FTransformCollection::TransformGroup;
  pFVar1 = this->Collection;
  pFVar6 = ::FName::FName((FName *)local_108,"TransformToGeometryIndex");
  pTVar9 = FManagedArrayCollection::GetAttribute<int>
                     ((FManagedArrayCollection *)pFVar1,*pFVar6,FVar3);
  FVar3 = FTransformCollection::TransformGroup;
  pFVar1 = local_f8->Collection;
  pFVar6 = ::FName::FName((FName *)local_108,"SimulationType");
  local_a0 = FManagedArrayCollection::GetAttribute<int>
                       ((FManagedArrayCollection *)pFVar1,*pFVar6,FVar3);
  local_d8 = local_110;
  local_d0 = param_4;
  local_cf = param_5;
  local_c8 = &local_98;
  local_108._8_8_ = &local_e8;
  local_f0 = &local_110;
  local_108._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FGeometryCollectionProximityUtility::EnumerateNeighbors'::__l2::<lambda_4>,void,int>
       ::Call;
  local_e0 = local_114;
  local_f8 = (FGeometryCollectionProximityUtility *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`FGeometryCollectionProximityUtility::EnumerateNeighbors'::__l2::<lambda_3>,bool,int>
             ::Call;
  local_110 = local_a0;
  local_e8 = param_1;
  local_c0 = iVar5;
  local_b8 = pTVar7;
  local_b0 = pTVar8;
  local_a8 = pTVar9;
  Chaos::Facades::FCollectionHierarchyFacade::EnumerateChildTransforms
            (param_1,local_114,(TFunctionRef<bool___cdecl(int)> *)&local_f8,
             (TFunctionRef<void___cdecl(int)> *)local_108);
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  uVar2 = local_90 >> 0x20;
  local_90 = local_90 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_88.NumBits = 0;
  if (0x80 < (uint)local_88.MaxBits) {
    local_88.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return;
}

// InvalidateProximity @ 144092330

void __thiscall
FGeometryCollectionProximityUtility::InvalidateProximity(FGeometryCollectionProximityUtility *this)

{
  FGeometryCollection *pFVar1;
  FName FVar2;
  bool bVar3;
  FName *pFVar4;
  FName local_res8;
  
  FVar2 = FGeometryCollection::GeometryGroup;
  pFVar1 = this->Collection;
  pFVar4 = ::FName::FName(&local_res8,"Proximity");
  bVar3 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)pFVar1,*pFVar4,FVar2);
  FVar2 = FGeometryCollection::GeometryGroup;
  if (bVar3) {
    pFVar1 = this->Collection;
    pFVar4 = ::FName::FName(&local_res8,"Proximity");
    FManagedArrayCollection::RemoveAttribute((FManagedArrayCollection *)pFVar1,*pFVar4,FVar2);
  }
  return;
}

// RequireProximity @ 1440ae280

void __thiscall
FGeometryCollectionProximityUtility::RequireProximity
          (FGeometryCollectionProximityUtility *this,FConvexHulls *param_1)

{
  FGeometryCollection *this_00;
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FName local_res8;
  
  FVar1 = FGeometryCollection::GeometryGroup;
  this_00 = this->Collection;
  pFVar3 = ::FName::FName(&local_res8,"Proximity");
  bVar2 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)this_00,*pFVar3,FVar1);
  if (!bVar2) {
    UpdateProximity(this,param_1);
  }
  return;
}

// UpdateProximity @ 1440b9b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGeometryCollectionProximityUtility::UpdateProximity
          (FGeometryCollectionProximityUtility *this,FConvexHulls *param_1)

{
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_> *pTVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  FGeometryCollection *pFVar13;
  code *pcVar14;
  bool bVar15;
  float fVar16;
  FName FVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  longlong *plVar20;
  bool bVar21;
  uint uVar22;
  FConvexHulls *pFVar23;
  TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
  *pTVar24;
  FName *pFVar25;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar26;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar27;
  uint *puVar28;
  FScriptContainerElement *pFVar29;
  longlong lVar30;
  longlong lVar31;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar36;
  uint uVar37;
  ulonglong uVar38;
  ForAnyElementType FVar39;
  TBitArray<FDefaultBitArrayAllocator> *pTVar40;
  uint uVar41;
  uint *puVar42;
  longlong *plVar43;
  undefined4 uVar44;
  float fVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  double dVar49;
  double dVar50;
  undefined1 auStackY_5c8 [32];
  <lambda_1> local_578;
  undefined1 local_577;
  undefined1 local_576;
  undefined1 local_575 [5];
  ForAnyElementType local_570;
  undefined8 local_568;
  ForAnyElementType local_560;
  int local_558;
  int local_554;
  uint local_550 [2];
  TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
  local_548;
  uint local_538;
  FProximityProperties local_530;
  uint local_520;
  uint local_518 [2];
  uint local_510 [2];
  uint local_508 [2];
  uint local_500 [2];
  uint local_4f8 [2];
  uint local_4f0 [2];
  longlong local_4e8;
  FConvexHulls local_4e0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_4a8;
  FGeometryCollectionProximityUtility *local_498;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_490;
  undefined1 local_480 [16];
  TVector2<double>_u_0 local_470;
  bool local_460;
  undefined7 uStack_45f;
  longlong local_458;
  longlong *local_450;
  int local_448;
  int local_444;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_438;
  longlong local_430;
  longlong *local_428;
  int iStack_420;
  uint uStack_41c;
  TBitArray<FDefaultBitArrayAllocator> *local_418;
  undefined4 uStack_410;
  uint uStack_40c;
  uint local_408;
  undefined4 uStack_404;
  int iStack_400;
  undefined4 uStack_3fc;
  longlong *local_3f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3f0;
  undefined8 uStack_3d0;
  TArrayView<std::nullptr_t,int> local_3c8;
  code *local_3b8;
  ForAnyElementType **local_3b0;
  ForAnyElementType *local_3a8;
  FGeometryCollectionProximityUtility *local_3a0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_398;
  FConvexHulls local_390;
  double local_358 [4];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  double local_320 [4];
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
  local_2e8;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  FConvexCreationProperties local_2c0;
  TFunction<bool___cdecl(int)> local_2a8;
  undefined4 local_25c;
  FCollectionConnectionGraphFacade local_258;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148;
  undefined4 uStack_147;
  undefined2 uStack_143;
  undefined1 uStack_141;
  FGeometryCollectionProximitySpatial local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_498 = this;
  FGeometryCollectionProximityPropertiesInterface::GetProximityProperties
            ((FGeometryCollectionProximityPropertiesInterface *)&this->Collection->_padding_,
             &local_530);
  if (((0.0 < local_530.RequireContactAmount) &&
      ((byte)(local_530.ContactMethod - ConvexHullSharpContact) < 2)) ||
     (local_530.ContactAreaMethod == ConvexHullContactArea)) {
    bVar21 = true;
  }
  else {
    bVar21 = false;
  }
  if ((local_530.Method == ConvexHull) || (bVar21)) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  FGeometryCollectionConvexPropertiesInterface::GetConvexProperties
            ((FGeometryCollectionConvexPropertiesInterface *)&this->Collection->_padding_,&local_2c0
             ,-1);
  puVar42 = (uint *)0x0;
  local_4e0.Hulls.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4e0.Hulls.ArrayNum = 0;
  local_4e0.Hulls.ArrayMax = 0;
  local_4e0.TransformToHullsIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4e0.TransformToHullsIndices.ArrayNum = 0;
  local_4e0.TransformToHullsIndices.ArrayMax = 0;
  local_4e0.Pivots.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4e0.Pivots.ArrayNum = 0;
  local_4e0.Pivots.ArrayMax = 0;
  if ((bVar15) && ((param_1 == (FConvexHulls *)0x0 || (0.0 < param_1->OverlapRemovalShrinkPercent)))
     ) {
    local_490.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_490.ArrayNum = 0;
    local_490.ArrayMax = 0;
    GeometryCollectionAlgo::
    GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
              ((TManagedArray<UE::Math::TTransform<float>_> *)&this->Collection->_padding_,
               (TManagedArray<int> *)&this->Collection->_padding_,&local_490);
    local_2a8._0_8_ = 0;
    local_2a8._40_8_ = 0;
    pFVar23 = FGeometryCollectionConvexUtility::ComputeLeafHulls
                        (&local_390,this->Collection,&local_490,
                         (double)local_2c0.SimplificationThreshold,0.0,&local_2a8,
                         (FConvexDecompositionSettings *)0x0,
                         (TArray<FGeometryCollectionConvexUtility::FTransformedConvex,TSizedDefaultAllocator<32>_>
                          *)0x0,(TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                                 *)0x0,
                         (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                          *)0x0);
    if (&local_4e0 != pFVar23) {
      DestructItems<TRefCountPtr<Chaos::FConvex>,int>((TRefCountPtr<Chaos::FConvex> *)0x0,0);
      local_4e0.Hulls.AllocatorInstance.Data = (pFVar23->Hulls).AllocatorInstance.Data;
      (pFVar23->Hulls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e0.Hulls.ArrayNum = (pFVar23->Hulls).ArrayNum;
      local_4e0.Hulls.ArrayMax = (pFVar23->Hulls).ArrayMax;
      (pFVar23->Hulls).ArrayNum = 0;
      (pFVar23->Hulls).ArrayMax = 0;
    }
    pTVar1 = &pFVar23->TransformToHullsIndices;
    if (&local_4e0.TransformToHullsIndices != pTVar1) {
      DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0,0);
      local_4e0.TransformToHullsIndices.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_4e0.TransformToHullsIndices.ArrayNum = (pFVar23->TransformToHullsIndices).ArrayNum;
      local_4e0.TransformToHullsIndices.ArrayMax = (pFVar23->TransformToHullsIndices).ArrayMax;
      (pFVar23->TransformToHullsIndices).ArrayNum = 0;
      (pFVar23->TransformToHullsIndices).ArrayMax = 0;
    }
    local_4e0.OverlapRemovalShrinkPercent = pFVar23->OverlapRemovalShrinkPercent;
    pTVar36 = &pFVar23->Pivots;
    if (&local_4e0.Pivots != pTVar36) {
      local_4e0.Pivots.AllocatorInstance.Data = (pTVar36->AllocatorInstance).Data;
      (pTVar36->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_4e0.Pivots.ArrayNum = (pFVar23->Pivots).ArrayNum;
      local_4e0.Pivots.ArrayMax = (pFVar23->Pivots).ArrayMax;
      (pFVar23->Pivots).ArrayNum = 0;
      (pFVar23->Pivots).ArrayMax = 0;
    }
    if (local_390.Pivots.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Pivots.AllocatorInstance.Data);
    }
    DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               local_390.TransformToHullsIndices.AllocatorInstance.Data,
               local_390.TransformToHullsIndices.ArrayNum);
    if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
        local_390.TransformToHullsIndices.AllocatorInstance.Data !=
        (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      FMemory::Free(local_390.TransformToHullsIndices.AllocatorInstance.Data);
    }
    DestructItems<TRefCountPtr<Chaos::FConvex>,int>
              ((TRefCountPtr<Chaos::FConvex> *)local_390.Hulls.AllocatorInstance.Data,
               local_390.Hulls.ArrayNum);
    if (local_390.Hulls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Hulls.AllocatorInstance.Data);
    }
    param_1 = &local_4e0;
    if (local_490.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_490.AllocatorInstance.Data);
    }
  }
  if (local_530.Method == ConvexHull) {
    UE::GeometryCollectionInternal::BuildProximityFromConvexHulls
              (this->Collection,param_1,(double)local_530.DistanceThreshold);
  }
  else {
    UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::
    FGeometryCollectionProximitySpatial(&local_138,this->Collection,__real_3c23d70a);
    UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::MoveProximityToCollection
              (&local_138,this->Collection);
    DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               local_138.KnownProximity.AllocatorInstance.Data,local_138.KnownProximity.ArrayNum);
    if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
        local_138.KnownProximity.AllocatorInstance.Data !=
        (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      FMemory::Free(local_138.KnownProximity.AllocatorInstance.Data);
    }
    DestructItems<UE::GeometryCollectionInternal::FPerGeometrySpatial,int>
              ((FPerGeometrySpatial *)local_138.GeoInfo.AllocatorInstance.Data,
               local_138.GeoInfo.ArrayNum);
    if ((FPerGeometrySpatial *)local_138.GeoInfo.AllocatorInstance.Data !=
        (FPerGeometrySpatial *)0x0) {
      FMemory::Free(local_138.GeoInfo.AllocatorInstance.Data);
    }
    if (local_138.SurfaceNormals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.SurfaceNormals.AllocatorInstance.Data);
    }
    if (local_138.TransformedVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.TransformedVertices.AllocatorInstance.Data);
    }
  }
  local_548.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_548.ArrayNum = 0;
  local_548.ArrayMax = 0;
  if (bVar21) {
    pTVar24 = ComputeConvexGeometryContactFromProximity
                        (&local_2e8,this->Collection,local_530.DistanceThreshold,param_1);
    if (&local_548 != pTVar24) {
      if (local_548.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_548.AllocatorInstance.Data);
      }
      local_548.AllocatorInstance.Data = (pTVar24->AllocatorInstance).Data;
      (pTVar24->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_548.ArrayNum = pTVar24->ArrayNum;
      local_548.ArrayMax = pTVar24->ArrayMax;
      pTVar24->ArrayNum = 0;
      pTVar24->ArrayMax = 0;
    }
    if (local_2e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.AllocatorInstance.Data);
    }
  }
  FVar17 = FGeometryCollection::GeometryGroup;
  if (0.0 < local_530.RequireContactAmount) {
    if (local_530.ContactMethod == MinOverlapInProjectionToMajorAxes) {
      pFVar13 = this->Collection;
      pFVar25 = ::FName::FName(&local_2d8,"Proximity");
      pTVar26 = FManagedArrayCollection::
                ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                          ((FManagedArrayCollection *)pFVar13,*pFVar25,FVar17);
      uVar41 = 0;
      local_438 = pTVar26;
      pTVar27 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                        *)&this->Collection->_padding_,FGeometryCollection::GeometryGroup);
      puVar28 = (uint *)&pTVar27->field_0x8;
      if (pTVar27 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
        puVar28 = puVar42;
      }
      if (puVar28 != (uint *)0x0) {
        uVar41 = *puVar28;
      }
      local_560.Data = (FScriptContainerElement *)0x0;
      local_554 = 0;
      local_148 = 0;
      uStack_147 = 0;
      uStack_143 = 0;
      uStack_141 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
      }
      local_558 = 0;
      if ((uVar41 != 0) &&
         (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,uVar41,&local_560,0,&local_554), 0 < (int)uVar41)) {
        uVar38 = (ulonglong)uVar41;
        do {
          if (((local_560.Data <= (FScriptContainerElement *)&local_178) &&
              ((FScriptContainerElement *)&local_178 < local_560.Data + (longlong)local_554 * 0x38))
             && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar21)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          if (local_558 == local_554) {
            local_558 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x838,&local_560,&local_554);
          }
          iVar34 = local_558 + 1;
          pFVar29 = local_560.Data + (longlong)local_558 * 0x38;
          *(undefined8 *)pFVar29 = local_178;
          *(undefined8 *)(pFVar29 + 8) = uStack_170;
          *(undefined8 *)(pFVar29 + 0x10) = local_168;
          *(undefined8 *)(pFVar29 + 0x18) = uStack_160;
          *(undefined8 *)(pFVar29 + 0x20) = local_158;
          *(undefined8 *)(pFVar29 + 0x28) = uStack_150;
          *(ulonglong *)(pFVar29 + 0x30) =
               CONCAT17(uStack_141,CONCAT25(uStack_143,CONCAT41(uStack_147,local_148)));
          uVar38 = uVar38 - 1;
          local_558 = iVar34;
        } while (uVar38 != 0);
      }
      local_4a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4a8.ArrayNum = 0;
      local_4a8.ArrayMax = 0;
      GeometryCollectionAlgo::
      GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
                ((TManagedArray<UE::Math::TTransform<float>_> *)&this->Collection->_padding_,
                 (TManagedArray<int> *)&this->Collection->_padding_,&local_4a8);
      local_3a8 = &local_560;
      local_398 = &local_4a8;
      local_3c8.DataPtr = (void **)0x0;
      local_3c8.ArrayNum = 0;
      local_3b8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FGeometryCollectionProximityUtility::UpdateProximity'::__l19::<lambda_1>,void,int>
                  ::Call;
      local_3b0 = &local_3a8;
      local_3a0 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",uVar41,1,(TFunctionRef<void___cdecl(int)> *)&local_3b8,
                 local_578,None,&local_3c8);
      fVar16 = __real_3f000000;
      local_458 = (longlong)(int)uVar41;
      local_570.Data = (FScriptContainerElement *)0x0;
      local_568 = 0;
      local_538 = 0;
      if (0 < (int)uVar41) {
        local_4e8 = 0;
        do {
          lVar31 = local_4e8;
          uVar22 = (uint)puVar42;
          uVar33 = ~uVar22 >> 0x1f;
          uVar41 = 0;
          if ((int)uVar22 < local_558) {
            uVar41 = uVar33;
          }
          local_520 = uVar33;
          if ((uVar41 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          lVar30 = lVar31 * 0x38;
          bVar21 = (longlong)local_568 < 0;
          local_358[0] = *(double *)(local_560.Data + lVar30);
          local_358[1] = (double)*(undefined8 *)(local_560.Data + lVar30 + 8);
          local_358[2] = (double)*(undefined8 *)(local_560.Data + lVar30 + 0x10);
          local_358[3] = (double)*(undefined8 *)(local_560.Data + lVar30 + 0x10 + 8);
          local_338 = *(undefined8 *)(local_560.Data + lVar30 + 0x20);
          uStack_330 = *(undefined8 *)(local_560.Data + lVar30 + 0x20 + 8);
          local_568 = local_568 & 0xffffffff00000000;
          local_328 = *(undefined8 *)(local_560.Data + lVar30 + 0x30);
          if (bVar21) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_570,0,(int *)((longlong)&local_568 + 4));
          }
          uVar41 = 0;
          uVar37 = uVar41;
          if ((int)uVar22 < *(int *)&pTVar26->field_0x18) {
            uVar37 = uVar33;
          }
          if ((uVar37 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          local_430 = lVar31 * 0x50;
          plVar43 = (longlong *)(*(longlong *)&pTVar26->field_0x10 + local_430);
          uVar33 = *(uint *)(plVar43 + 5);
          pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar43 + 2);
          uStack_41c = 1;
          uStack_40c = uVar41;
          iStack_420 = 0;
          if (uVar33 != 0) {
            pTVar40 = pTVar2;
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar43[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar40 = (TBitArray<FDefaultBitArrayAllocator> *)plVar43[4];
            }
            uVar22 = *(uint *)(pTVar40->AllocatorInstance).InlineData;
            uVar41 = 0;
            while (uVar22 == 0) {
              lVar31 = (longlong)iStack_420;
              uVar41 = uVar41 + 0x20;
              iStack_420 = iStack_420 + 1;
              uStack_40c = uVar33;
              if ((int)((uVar33 - 1) + ((int)(uVar33 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_420)
              goto LAB_1440ba3a1;
              uVar22 = *(uint *)((pTVar40->AllocatorInstance).InlineData + lVar31 * 4 + 4);
            }
            uStack_41c = ~(uVar22 - 1) & uVar22;
            uVar38 = (ulonglong)uStack_41c * 2 + 1;
            lVar31 = 0x3f;
            if (uVar38 != 0) {
              for (; uVar38 >> lVar31 == 0; lVar31 = lVar31 + -1) {
              }
            }
            local_448 = (int)lVar31;
            uStack_40c = (uVar41 - 1) + local_448;
            if ((int)uVar33 < (int)uStack_40c) {
              uStack_40c = uVar33;
            }
          }
LAB_1440ba3a1:
          uVar22 = *(uint *)(plVar43 + 5);
          uStack_404 = local_25c;
          uVar37 = uVar22 & 0xffffffe0;
          iStack_400 = (int)plVar43[1] - *(int *)((longlong)plVar43 + 0x34);
          TStack_3f0._padding_ = CONCAT44(uStack_41c,iStack_420);
          uStack_410 = 0xffffffff;
          TStack_3f0.CurrentBitIndex = uStack_40c;
          TStack_3f0.UnvisitedBitMask = 0xffffffff;
          iVar34 = (int)uVar22 >> 5;
          TStack_3f0._28_4_ = local_25c;
          TStack_3f0.BaseBitIndex = uVar41;
          uStack_3d0 = CONCAT44(uStack_3fc,iStack_400);
          local_450 = plVar43;
          local_428 = plVar43;
          local_418 = pTVar2;
          local_408 = uVar41;
          local_3f8 = plVar43;
          TStack_3f0.Array = pTVar2;
          if ((((int)uVar22 < 0) || ((int)uVar33 < (int)uVar22)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar21)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          uVar41 = *(uint *)(plVar43 + 5);
          if (uVar22 != uVar41) {
            pTVar40 = pTVar2;
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar43[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar40 = (TBitArray<FDefaultBitArrayAllocator> *)plVar43[4];
            }
            uVar33 = -1 << ((byte)uVar22 & 0x1f) &
                     *(uint *)((pTVar40->AllocatorInstance).InlineData + (longlong)iVar34 * 4);
            while (uVar33 == 0) {
              lVar31 = (longlong)iVar34;
              uVar37 = uVar37 + 0x20;
              iVar34 = iVar34 + 1;
              uVar22 = uVar41;
              if ((int)((uVar41 - 1) + ((int)(uVar41 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar34)
              goto LAB_1440ba4e0;
              uVar33 = *(uint *)((pTVar40->AllocatorInstance).InlineData + lVar31 * 4 + 4);
            }
            uVar38 = (ulonglong)(~(uVar33 - 1) & uVar33) * 2 + 1;
            lVar31 = 0x3f;
            if (uVar38 != 0) {
              for (; uVar38 >> lVar31 == 0; lVar31 = lVar31 + -1) {
              }
            }
            local_444 = (int)lVar31;
            uVar22 = (uVar37 - 1) + local_444;
            if ((int)uVar41 < (int)uVar22) {
              uVar22 = uVar41;
            }
          }
LAB_1440ba4e0:
          while( true ) {
            plVar20 = local_3f8;
            if ((int)local_3f8[1] - *(int *)((longlong)local_3f8 + 0x34) != (int)uStack_3d0) {
              local_577 = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_577);
            }
            pTVar26 = local_438;
            uVar33 = local_520;
            uVar41 = local_538;
            if (((TStack_3f0.CurrentBitIndex == uVar22) && (TStack_3f0.Array == pTVar2)) &&
               (plVar20 == plVar43)) break;
            local_550[0] = *(uint *)(*plVar20 + (longlong)TStack_3f0.CurrentBitIndex * 0xc);
            lVar31 = (longlong)(int)local_550[0];
            uVar41 = 0;
            if ((int)local_550[0] < local_558) {
              uVar41 = ~local_550[0] >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            lVar31 = lVar31 * 0x38;
            local_320[0] = *(double *)(local_560.Data + lVar31);
            local_320[1] = (double)*(undefined8 *)(local_560.Data + lVar31 + 8);
            local_320[2] = (double)*(undefined8 *)(local_560.Data + lVar31 + 0x10);
            local_320[3] = (double)*(undefined8 *)(local_560.Data + lVar31 + 0x10 + 8);
            local_300 = *(undefined8 *)(local_560.Data + lVar31 + 0x20);
            uStack_2f8 = *(undefined8 *)(local_560.Data + lVar31 + 0x20 + 8);
            local_2f0 = *(undefined8 *)(local_560.Data + lVar31 + 0x30);
            iVar34 = 2;
            do {
              iVar35 = iVar34 + -1;
              uVar41 = iVar35 + (iVar35 / 3 + (iVar35 >> 0x1f) +
                                (int)(((longlong)iVar35 / 3 + ((longlong)iVar35 >> 0x3f) &
                                      0xffffffffU) >> 0x1f)) * -3;
              uVar33 = iVar34 + (iVar34 / 3 + (iVar34 >> 0x1f) +
                                (int)(((longlong)iVar34 / 3 + ((longlong)iVar34 >> 0x3f) &
                                      0xffffffffU) >> 0x1f)) * -3;
              if ((2 < uVar33) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(Index)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                      ,0x7ab,L""), bVar21)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              dVar5 = local_358[(longlong)(int)uVar33 + 3];
              if ((2 < uVar41) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(Index)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                      ,0x7ab,L""), bVar21)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              dVar6 = local_358[(longlong)(int)uVar41 + 3];
              if ((2 < uVar33) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(Index)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                      ,0x7ab,L""), bVar21)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              dVar7 = local_358[(int)uVar33];
              if ((2 < uVar41) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(Index)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                      ,0x7ab,L""), bVar21)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              dVar8 = local_358[(int)uVar41];
              if ((2 < uVar33) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(Index)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                      ,0x7ab,L""), bVar21)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              dVar9 = local_320[(longlong)(int)uVar33 + 3];
              if ((2 < uVar41) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(Index)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                      ,0x7ab,L""), bVar21)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              dVar10 = local_320[(longlong)(int)uVar41 + 3];
              if ((2 < uVar33) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(Index)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                      ,0x7ab,L""), bVar21)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              dVar11 = local_320[(int)uVar33];
              if ((2 < uVar41) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(Index)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                      ,0x7ab,L""), bVar21)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              dVar12 = local_320[(int)uVar41];
              if ((((dVar10 < dVar8) || (dVar6 < dVar12)) || (dVar9 < dVar7)) || (dVar5 < dVar11)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c) <
                     `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                     ::__l5::_thread_safe_static_guard_0__) &&
                   (_Init_thread_header(&`public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                                         ::__l5::_thread_safe_static_guard_0__),
                   `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                   ::__l5::_thread_safe_static_guard_0__ == -1)) {
                  `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                  ::__l5::EmptyBox.Min.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
                  `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                  ::__l5::EmptyBox.bIsValid = false;
                  `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                  ::__l5::EmptyBox._33_7_ = 0;
                  `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                  ::__l5::EmptyBox.Max.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
                  _Init_thread_footer(&`public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                                       ::__l5::_thread_safe_static_guard_0__);
                }
                local_480 = (undefined1  [16])
                            `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                            ::__l5::EmptyBox.Min.field0_0x0;
                auVar18 = local_480;
                local_460 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                            ::__l5::EmptyBox.bIsValid;
                uStack_45f = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                             ::__l5::EmptyBox._33_7_;
                uVar19 = _local_460;
                local_460 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                            ::__l5::EmptyBox.bIsValid;
                bVar21 = local_460 != false;
                local_470 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                            ::__l5::EmptyBox.Max.field0_0x0;
                _local_460 = uVar19;
                if (bVar21) {
                  uVar47 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                           ::__l5::EmptyBox.Max.field0_0x0._8_4_;
                  uVar48 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                           ::__l5::EmptyBox.Max.field0_0x0._12_4_;
                  uVar44 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                           ::__l5::EmptyBox.Max.field0_0x0._0_4_;
                  uVar46 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                           ::__l5::EmptyBox.Max.field0_0x0._4_4_;
                  local_480._8_8_ =
                       `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                       ::__l5::EmptyBox.Min.field0_0x0._8_8_;
                  local_480._0_8_ =
                       `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                       ::__l5::EmptyBox.Min.field0_0x0._0_8_;
                  dVar49 = (double)local_480._0_8_;
                  dVar50 = (double)local_480._8_8_;
                  local_480 = auVar18;
                  goto LAB_1440ba858;
                }
              }
              else {
                local_460 = true;
                local_480._0_8_ = dVar12;
                if (dVar12 <= dVar8) {
                  local_480._0_8_ = dVar8;
                }
                local_480._8_8_ = dVar7;
                if (dVar7 <= dVar11) {
                  local_480._8_8_ = dVar11;
                }
                uVar44 = SUB84(dVar10,0);
                uVar46 = (int)((ulonglong)dVar10 >> 0x20);
                if (dVar6 <= dVar10) {
                  uVar44 = SUB84(dVar6,0);
                  uVar46 = (int)((ulonglong)dVar6 >> 0x20);
                }
                uVar47 = SUB84(dVar5,0);
                uVar48 = (int)((ulonglong)dVar5 >> 0x20);
                if (dVar9 <= dVar5) {
                  uVar47 = SUB84(dVar9,0);
                  uVar48 = (int)((ulonglong)dVar9 >> 0x20);
                }
                local_470._4_4_ = uVar46;
                local_470._0_4_ = uVar44;
                local_470._12_4_ = uVar48;
                local_470._8_4_ = uVar47;
                dVar49 = (double)local_480._0_8_;
                dVar50 = (double)local_480._8_8_;
LAB_1440ba858:
                dVar49 = (double)CONCAT44(uVar46,uVar44) - dVar49;
                dVar50 = (double)CONCAT44(uVar48,uVar47) - dVar50;
                if (dVar50 <= dVar49) {
                  dVar49 = dVar50;
                }
                dVar50 = dVar5 - dVar7;
                if (dVar6 - dVar8 <= dVar5 - dVar7) {
                  dVar50 = dVar6 - dVar8;
                }
                dVar5 = dVar10 - dVar12;
                if (dVar9 - dVar11 <= dVar10 - dVar12) {
                  dVar5 = dVar9 - dVar11;
                }
                if (dVar5 <= dVar50) {
                  dVar50 = dVar5;
                }
                fVar45 = (float)dVar50 * fVar16;
                if (local_530.RequireContactAmount <= (float)dVar50 * fVar16) {
                  fVar45 = local_530.RequireContactAmount;
                }
                if (fVar45 < (float)dVar49) goto LAB_1440ba95a;
              }
              iVar35 = iVar34 + -1;
              iVar34 = iVar34 + 1;
            } while (iVar35 < 3);
            if (((local_570.Data <= (FScriptContainerElement *)local_550) &&
                ((FScriptContainerElement *)local_550 <
                 local_570.Data + (longlong)local_568._4_4_ * 4)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            iVar34 = (int)local_568;
            if ((int)local_568 == local_568._4_4_) {
              iVar34 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_570,(int *)((longlong)&local_568 + 4));
            }
            local_568 = CONCAT44(local_568._4_4_,iVar34 + 1);
            *(uint *)(local_570.Data + (longlong)iVar34 * 4) = local_550[0];
LAB_1440ba95a:
            TStack_3f0.UnvisitedBitMask = TStack_3f0.UnvisitedBitMask & ~TStack_3f0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3f0);
            plVar43 = local_450;
          }
          iVar34 = (int)local_568;
          pFVar29 = local_570.Data + (longlong)(int)local_568 * 4;
          FVar39.Data = local_570.Data;
          while( true ) {
            if ((int)local_568 != iVar34) {
              local_576 = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_576);
            }
            if (FVar39.Data == pFVar29) break;
            uVar22 = *(uint *)FVar39.Data;
            uVar37 = 0;
            if ((int)uVar41 < *(int *)&pTVar26->field_0x18) {
              uVar37 = uVar33;
            }
            if ((uVar37 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pTVar32 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                      (local_430 + *(longlong *)&pTVar26->field_0x10);
            local_518[0] = uVar22;
            if (*(int *)&(pTVar32->Elements).field_0x8 != *(int *)&(pTVar32->Elements).field_0x34) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                        (pTVar32,uVar22,(int *)local_518);
            }
            uVar37 = 0;
            if ((int)uVar22 < *(int *)&pTVar26->field_0x18) {
              uVar37 = ~uVar22 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            local_510[0] = uVar41;
            pTVar32 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                      ((longlong)(int)uVar22 * 0x50 + *(longlong *)&pTVar26->field_0x10);
            if (*(int *)&(pTVar32->Elements).field_0x8 != *(int *)&(pTVar32->Elements).field_0x34) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                        (pTVar32,uVar41,(int *)local_510);
            }
            FVar39.Data = FVar39.Data + 4;
          }
          local_538 = uVar41 + 1;
          puVar42 = (uint *)(ulonglong)local_538;
          local_4e8 = local_4e8 + 1;
        } while (local_4e8 < local_458);
      }
      if (local_570.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_570.Data);
      }
      if (local_4a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a8.AllocatorInstance.Data);
      }
      this = local_498;
      if (local_560.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_560.Data);
        this = local_498;
      }
    }
    else if (local_530.ContactMethod == ConvexHullSharpContact) {
      pFVar13 = this->Collection;
      pFVar25 = ::FName::FName(&local_2d0,"Proximity");
      pTVar26 = FManagedArrayCollection::
                ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                          ((FManagedArrayCollection *)pFVar13,*pFVar25,FVar17);
      dVar5 = __real_3fe0000000000000;
      iVar34 = local_548.ArrayNum;
      pFVar29 = local_548.AllocatorInstance.Data + 4;
      pFVar4 = local_548.AllocatorInstance.Data + (longlong)local_548.ArrayNum * 0x18;
      while( true ) {
        if (local_548.ArrayNum != iVar34) {
          local_575[0] = 0;
          `TCheckedPointerIterator<FGeometryCollectionProximityUtility::FGeometryContactEdge,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_575);
        }
        pFVar3 = pFVar29 + -4;
        if (pFVar3 == pFVar4) break;
        if ((*(float *)(pFVar29 + 0xc) < local_530.RequireContactAmount) &&
           ((double)*(float *)(pFVar29 + 0xc) < (double)*(float *)(pFVar29 + 0x10) * dVar5)) {
          uVar41 = *(uint *)pFVar3;
          uVar33 = 0;
          if ((int)uVar41 < *(int *)&pTVar26->field_0x18) {
            uVar33 = ~uVar41 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          local_508[0] = *(uint *)pFVar29;
          pTVar32 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    ((longlong)(int)uVar41 * 0x50 + *(longlong *)&pTVar26->field_0x10);
          if (*(int *)&(pTVar32->Elements).field_0x8 != *(int *)&(pTVar32->Elements).field_0x34) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (pTVar32,local_508[0],(int *)local_508);
          }
          uVar41 = *(uint *)pFVar29;
          uVar33 = 0;
          if ((int)uVar41 < *(int *)&pTVar26->field_0x18) {
            uVar33 = ~uVar41 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          local_500[0] = *(uint *)pFVar3;
          pTVar32 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    ((longlong)(int)uVar41 * 0x50 + *(longlong *)&pTVar26->field_0x10);
          if (*(int *)&(pTVar32->Elements).field_0x8 != *(int *)&(pTVar32->Elements).field_0x34) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (pTVar32,local_500[0],(int *)local_500);
          }
        }
        pFVar29 = pFVar29 + 0x18;
      }
    }
    else if (local_530.ContactMethod == ConvexHullAreaContact) {
      pFVar13 = this->Collection;
      pFVar25 = ::FName::FName(&local_2c8,"Proximity");
      pTVar26 = FManagedArrayCollection::
                ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                          ((FManagedArrayCollection *)pFVar13,*pFVar25,FVar17);
      dVar5 = __real_3fe0000000000000;
      iVar34 = local_548.ArrayNum;
      pFVar29 = local_548.AllocatorInstance.Data + 4;
      pFVar4 = local_548.AllocatorInstance.Data + (longlong)local_548.ArrayNum * 0x18;
      while( true ) {
        if (local_548.ArrayNum != iVar34) {
          local_578 = (<lambda_1>)0x0;
          `TCheckedPointerIterator<FGeometryCollectionProximityUtility::FGeometryContactEdge,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_578);
        }
        pFVar3 = pFVar29 + -4;
        if (pFVar3 == pFVar4) break;
        if ((*(float *)(pFVar29 + 4) <
             local_530.RequireContactAmount * local_530.RequireContactAmount) &&
           ((double)*(float *)(pFVar29 + 4) < (double)*(float *)(pFVar29 + 8) * dVar5)) {
          uVar41 = *(uint *)pFVar3;
          uVar33 = 0;
          if ((int)uVar41 < *(int *)&pTVar26->field_0x18) {
            uVar33 = ~uVar41 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          local_4f8[0] = *(uint *)pFVar29;
          pTVar32 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    ((longlong)(int)uVar41 * 0x50 + *(longlong *)&pTVar26->field_0x10);
          if (*(int *)&(pTVar32->Elements).field_0x8 != *(int *)&(pTVar32->Elements).field_0x34) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (pTVar32,local_4f8[0],(int *)local_4f8);
          }
          uVar41 = *(uint *)pFVar29;
          uVar33 = 0;
          if ((int)uVar41 < *(int *)&pTVar26->field_0x18) {
            uVar33 = ~uVar41 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          local_4f0[0] = *(uint *)pFVar3;
          pTVar32 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    ((longlong)(int)uVar41 * 0x50 + *(longlong *)&pTVar26->field_0x10);
          if (*(int *)&(pTVar32->Elements).field_0x8 != *(int *)&(pTVar32->Elements).field_0x34) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (pTVar32,local_4f0[0],(int *)local_4f0);
          }
        }
        pFVar29 = pFVar29 + 0x18;
      }
    }
  }
  if (local_530.bUseAsConnectionGraph == false) {
    GeometryCollection::Facades::FCollectionConnectionGraphFacade::FCollectionConnectionGraphFacade
              (&local_258,(FManagedArrayCollection *)this->Collection);
    GeometryCollection::Facades::FCollectionConnectionGraphFacade::ClearAttributes(&local_258);
  }
  else {
    pTVar24 = &local_548;
    if (local_530.ContactAreaMethod != ConvexHullContactArea) {
      pTVar24 = (TArray<FGeometryCollectionProximityUtility::FGeometryContactEdge,TSizedDefaultAllocator<32>_>
                 *)0x0;
    }
    CopyProximityToConnectionGraph(this,pTVar24);
  }
  if (local_548.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.AllocatorInstance.Data);
  }
  if (local_4e0.Pivots.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.Pivots.AllocatorInstance.Data);
  }
  FVar39.Data = local_4e0.TransformToHullsIndices.AllocatorInstance.Data;
  DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             local_4e0.TransformToHullsIndices.AllocatorInstance.Data,
             local_4e0.TransformToHullsIndices.ArrayNum);
  if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar39.Data !=
      (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    FMemory::Free(FVar39.Data);
  }
  FVar39.Data = local_4e0.Hulls.AllocatorInstance.Data;
  DestructItems<TRefCountPtr<Chaos::FConvex>,int>
            ((TRefCountPtr<Chaos::FConvex> *)local_4e0.Hulls.AllocatorInstance.Data,
             local_4e0.Hulls.ArrayNum);
  if (FVar39.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar39.Data);
  }
  return;
}

// operator() @ 1504ad590

bool __thiscall
`FGeometryCollectionProximityUtility::ComputeConvexGeometryContactFromProximity'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5404470520945048713>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5404470520945048713>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ad5d0

bool __thiscall
`FGeometryCollectionProximityUtility::EnumerateNeighbors'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5404470520945049045>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5404470520945049045>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504add80

bool __thiscall
`FGeometryCollectionProximityUtility::EnumerateNeighbors'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5404470520945049039>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5404470520945049039>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

