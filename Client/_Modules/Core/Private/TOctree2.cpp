// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// AddElementInternal @ 141bf62c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics>::AddElementInternal
          (TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics> *this,
          uint param_1,FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,
          FTestOctreeElement *param_4,
          TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_5)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  FOctreeNodeContext *pFVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *_Src;
  ForElementType<UE::MathTest::FTestOctreeElement> FVar25;
  uint uVar26;
  ForElementType<UE::MathTest::FTestOctreeElement> FVar27;
  uint uVar28;
  longlong lVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar35;
  uint uVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar46;
  undefined4 uVar47;
  uint uVar48;
  uint uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 local_res10 [8];
  FOctreeNodeContext *local_res18;
  FBoxCenterAndExtent *local_res20;
  TVector4<double>_u_0 local_118;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  TVector4<double>_u_0 local_d8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  double local_98;
  double local_90;
  
  lVar29 = (longlong)(int)param_1;
  uVar28 = ~param_1 >> 0x1f;
  local_res18 = param_2;
  local_res20 = param_3;
  while( true ) {
    uVar26 = 0;
    uVar20 = uVar26;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar20 = uVar28;
    }
    if ((uVar20 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->TreeNodes).AllocatorInstance.Data + lVar29 * 8 + 4;
    *(int *)pFVar2 = *(int *)pFVar2 + 1;
    iVar21 = (this->TreeNodes).ArrayNum;
    uVar20 = uVar26;
    if ((int)param_1 < iVar21) {
      uVar20 = uVar28;
    }
    if (uVar20 == 0) {
      iVar21 = 0x506106c8;
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar19) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar2 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar2 + lVar29 * 8) != -1) {
      dVar10 = (param_2->Bounds).Center.field0_0x0._s_0.Z;
      dVar11 = (param_2->Bounds).Center.field0_0x0._s_0.W;
      dVar30 = param_2->ChildCenterOffset;
      dVar35 = param_2->ChildExtent;
      auVar41._8_4_ = SUB84(dVar30,0);
      auVar41._0_8_ = dVar30;
      uVar47 = (undefined4)((ulonglong)dVar30 >> 0x20);
      auVar41._12_4_ = uVar47;
      dVar12 = (param_2->Bounds).Center.field0_0x0._s_0.X;
      dVar13 = (param_2->Bounds).Center.field0_0x0._s_0.Y;
      dVar14 = (local_res20->Center).field0_0x0._s_0.X;
      dVar15 = (local_res20->Center).field0_0x0._s_0.Y;
      dVar16 = (local_res20->Center).field0_0x0._s_0.Z;
      dVar17 = (local_res20->Center).field0_0x0._s_0.W;
      auVar42._0_8_ = (dVar30 + dVar10) - dVar16;
      auVar42._8_8_ = (auVar41._8_8_ + dVar11) - dVar17;
      dVar7 = dVar17 - (dVar11 - dVar30);
      auVar31._8_4_ = SUB84(dVar35,0);
      auVar31._0_8_ = dVar35;
      auVar31._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      auVar43._8_4_ = SUB84(dVar7,0);
      auVar43._0_8_ = dVar16 - (dVar10 - dVar30);
      auVar43._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar43 = minpd(auVar42,auVar43);
      auVar32._8_8_ =
           -(ulonglong)(auVar31._8_8_ < auVar43._8_8_ + (local_res20->Extent).field0_0x0._s_0.W);
      auVar32._0_8_ = -(ulonglong)(dVar35 < auVar43._0_8_ + (local_res20->Extent).field0_0x0._s_0.Z)
      ;
      uVar20 = movmskpd(iVar21,auVar32);
      auVar44._8_4_ = SUB84(dVar30,0);
      auVar44._0_8_ = dVar30;
      auVar44._12_4_ = uVar47;
      auVar45._0_8_ = (dVar30 + dVar12) - dVar14;
      auVar45._8_8_ = (auVar44._8_8_ + dVar13) - dVar15;
      dVar7 = dVar15 - (dVar13 - dVar30);
      auVar5._8_4_ = SUB84(dVar7,0);
      auVar5._0_8_ = dVar14 - (dVar12 - dVar30);
      auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar43 = minpd(auVar45,auVar5);
      lVar24 = -(ulonglong)(dVar35 < auVar43._8_8_ + (local_res20->Extent).field0_0x0._s_0.Y);
      auVar8._8_4_ = (int)lVar24;
      auVar8._0_8_ = -(ulonglong)(dVar35 < auVar43._0_8_ + (local_res20->Extent).field0_0x0._s_0.X);
      auVar8._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      iVar21 = movmskpd((int)pFVar2,auVar8);
      if ((uVar20 & 0x3fffffff) == 0 && iVar21 == 0) {
        auVar50._8_8_ = -(ulonglong)(dVar11 < dVar17);
        auVar50._0_8_ = -(ulonglong)(dVar10 < dVar16);
        iVar23 = movmskpd((int)local_res20,auVar50);
        auVar9._8_4_ = (int)-(ulonglong)(dVar13 < dVar15);
        auVar9._0_8_ = -(ulonglong)(dVar12 < dVar14);
        auVar9._12_4_ = (int)(-(ulonglong)(dVar13 < dVar15) >> 0x20);
        uVar20 = movmskpd(iVar21,auVar9);
        uVar20 = (iVar23 << 2 | uVar20) & 7;
        if ((int)param_1 < (this->TreeNodes).ArrayNum) {
          uVar26 = uVar28;
        }
        if ((uVar26 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar48 = SUB84(param_2->ChildCenterOffset,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar49 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        dVar30 = (double)(float)-(uint)((uVar20 & ___xmm_00000008000000040000000200000001) ==
                                       ___xmm_00000008000000040000000200000001);
        dVar35 = (double)(float)-(uint)((uVar20 & _UNK_150744154) == _UNK_150744154);
        uVar28 = SUB84(dVar30,0);
        uVar26 = (uint)((ulonglong)dVar30 >> 0x20);
        uVar22 = SUB84(dVar35,0);
        uVar36 = (uint)((ulonglong)dVar35 >> 0x20);
        auVar33._0_4_ = ~uVar28 & uVar48;
        auVar33._4_4_ = ~uVar26 & uVar49;
        auVar33._8_4_ = ~uVar22 & uVar48;
        auVar33._12_4_ = ~uVar36 & uVar49;
        dVar30 = (double)(float)-(uint)((uVar20 & _UNK_150744158) == _UNK_150744158);
        uVar37 = SUB84(dVar30,0);
        uVar38 = (uint)((ulonglong)dVar30 >> 0x20);
        dVar30 = (double)(float)-(uint)((uVar20 & _UNK_15074415c) == _UNK_15074415c);
        uVar39 = SUB84(dVar30,0);
        uVar40 = (uint)((ulonglong)dVar30 >> 0x20);
        uVar46 = SUB84(param_2->ChildCenterOffset,0);
        auVar51._0_4_ = uVar28 & uVar46;
        uVar28 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20);
        auVar51._4_4_ = uVar26 & uVar28;
        auVar51._8_4_ = uVar22 & uVar46;
        auVar51._12_4_ = uVar36 & uVar28;
        local_d8._s_0.X = SUB168(auVar51 | auVar33,0) + (param_2->Bounds).Center.field0_0x0._s_0.X;
        local_d8._s_0.Y = SUB168(auVar51 | auVar33,8) + (param_2->Bounds).Center.field0_0x0._s_0.Y;
        auVar34._0_4_ = uVar37 & uVar46;
        auVar34._4_4_ = uVar38 & uVar28;
        auVar34._8_4_ = uVar39 & uVar46;
        auVar34._12_4_ = uVar40 & uVar28;
        auVar6._4_4_ = ~uVar38 & uVar49;
        auVar6._0_4_ = ~uVar37 & uVar48;
        auVar6._8_4_ = ~uVar39 & uVar48;
        auVar6._12_4_ = ~uVar40 & uVar49;
        local_90 = param_2->ChildExtent;
        local_d8._s_0.Z =
             (SUB168(auVar34 | auVar6,0) + (param_2->Bounds).Center.field0_0x0._s_0.Z) *
             (double)_UNK_150689548;
        local_d8._s_0.W =
             (SUB168(auVar34 | auVar6,8) + (param_2->Bounds).Center.field0_0x0._s_0.W) *
             (double)_UNK_15068954c;
        dVar30 = (double)_UNK_15068954c * local_90;
        local_98 = local_90 * __real_3fe0000000000000 * __real_3ff1000000000000;
        local_b8._8_4_ = SUB84(local_90,0);
        local_b8._0_8_ = local_90;
        local_b8._12_4_ = (int)((ulonglong)local_90 >> 0x20);
        local_a8._8_4_ = SUB84(dVar30,0);
        local_a8._0_8_ = (double)_UNK_150689548 * local_90;
        local_a8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        local_90 = local_90 - local_98;
        AddElementInternal(this,*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar29 * 8) +
                                uVar20,(FOctreeNodeContext *)&local_d8._s_0,local_res20,param_4,
                           param_5);
      }
      else {
        if ((int)param_1 < (this->TreeElements).ArrayNum) {
          uVar26 = uVar28;
        }
        if ((uVar26 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar27 = (ForElementType<UE::MathTest::FTestOctreeElement>)
                 (lVar29 * 0xc0 + (longlong)(this->TreeElements).AllocatorInstance.Data);
        iVar21 = *(int *)((ForElementType<UE::MathTest::FTestOctreeElement> *)
                         ((longlong)FVar27 + 0xb0))->InlineData;
        if (iVar21 == *(int *)((longlong)FVar27 + 0xb4)) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MathTest::FTestOctreeElement>_>
                             (0x1050,(ForElementType<UE::MathTest::FTestOctreeElement> *)FVar27,
                              (int *)((longlong)FVar27 + 0xb4));
        }
        lVar29 = (longlong)iVar21;
        *(int *)((ForElementType<UE::MathTest::FTestOctreeElement> *)((longlong)FVar27 + 0xb0))->
                InlineData = iVar21 + 1;
        FVar25 = *(ForElementType<UE::MathTest::FTestOctreeElement> *)((longlong)FVar27 + 0xa0);
        if (*(ForElementType<UE::MathTest::FTestOctreeElement> *)((longlong)FVar27 + 0xa0) ==
            (ForElementType<UE::MathTest::FTestOctreeElement>)0x0) {
          FVar25 = FVar27;
        }
        lVar24 = param_4->_padding_;
        puVar1 = (undefined8 *)((longlong)FVar25 + lVar29 * 0x50);
        *puVar1 = *(undefined8 *)param_4;
        puVar1[1] = lVar24;
        dVar30 = (param_4->Bounds).Center.field0_0x0._s_0.Y;
        pdVar3 = (double *)((longlong)FVar25 + 0x10 + lVar29 * 0x50);
        *pdVar3 = (param_4->Bounds).Center.field0_0x0._s_0.X;
        pdVar3[1] = dVar30;
        dVar30 = (param_4->Bounds).Center.field0_0x0._s_0.W;
        pdVar3 = (double *)((longlong)FVar25 + 0x20 + lVar29 * 0x50);
        *pdVar3 = (param_4->Bounds).Center.field0_0x0._s_0.Z;
        pdVar3[1] = dVar30;
        dVar30 = (param_4->Bounds).Extent.field0_0x0._s_0.Y;
        pdVar3 = (double *)((longlong)FVar25 + 0x30 + lVar29 * 0x50);
        *pdVar3 = (param_4->Bounds).Extent.field0_0x0._s_0.X;
        pdVar3[1] = dVar30;
        dVar30 = (param_4->Bounds).Extent.field0_0x0._s_0.W;
        pdVar3 = (double *)((longlong)FVar25 + 0x40 + lVar29 * 0x50);
        *pdVar3 = (param_4->Bounds).Extent.field0_0x0._s_0.Z;
        pdVar3[1] = dVar30;
      }
      return;
    }
    uVar20 = uVar26;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar20 = uVar28;
    }
    if ((uVar20 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar24 = lVar29 * 0xc0;
    if ((*(int *)((this->TreeElements).AllocatorInstance.Data + lVar24 + 0xb0) + 1 < 3) ||
       ((param_2->Bounds).Extent.field0_0x0._s_0.X <= this->MinLeafExtent)) {
      if ((int)param_1 < (this->TreeElements).ArrayNum) {
        uVar26 = uVar28;
      }
      if ((uVar26 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar27 = (ForElementType<UE::MathTest::FTestOctreeElement>)
               (lVar24 + (longlong)(this->TreeElements).AllocatorInstance.Data);
      iVar21 = *(int *)((ForElementType<UE::MathTest::FTestOctreeElement> *)
                       ((longlong)FVar27 + 0xb0))->InlineData;
      if (iVar21 == *(int *)((longlong)FVar27 + 0xb4)) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MathTest::FTestOctreeElement>_>
                           (0x1050,(ForElementType<UE::MathTest::FTestOctreeElement> *)FVar27,
                            (int *)((longlong)FVar27 + 0xb4));
      }
      lVar29 = (longlong)iVar21;
      *(int *)((ForElementType<UE::MathTest::FTestOctreeElement> *)((longlong)FVar27 + 0xb0))->
              InlineData = iVar21 + 1;
      FVar25 = *(ForElementType<UE::MathTest::FTestOctreeElement> *)((longlong)FVar27 + 0xa0);
      if (*(ForElementType<UE::MathTest::FTestOctreeElement> *)((longlong)FVar27 + 0xa0) ==
          (ForElementType<UE::MathTest::FTestOctreeElement>)0x0) {
        FVar25 = FVar27;
      }
      lVar24 = param_4->_padding_;
      puVar1 = (undefined8 *)((longlong)FVar25 + lVar29 * 0x50);
      *puVar1 = *(undefined8 *)param_4;
      puVar1[1] = lVar24;
      dVar30 = (param_4->Bounds).Center.field0_0x0._s_0.Y;
      pdVar3 = (double *)((longlong)FVar25 + 0x10 + lVar29 * 0x50);
      *pdVar3 = (param_4->Bounds).Center.field0_0x0._s_0.X;
      pdVar3[1] = dVar30;
      dVar30 = (param_4->Bounds).Center.field0_0x0._s_0.W;
      pdVar3 = (double *)((longlong)FVar25 + 0x20 + lVar29 * 0x50);
      *pdVar3 = (param_4->Bounds).Center.field0_0x0._s_0.Z;
      pdVar3[1] = dVar30;
      dVar30 = (param_4->Bounds).Extent.field0_0x0._s_0.Y;
      pdVar3 = (double *)((longlong)FVar25 + 0x30 + lVar29 * 0x50);
      *pdVar3 = (param_4->Bounds).Extent.field0_0x0._s_0.X;
      pdVar3[1] = dVar30;
      dVar30 = (param_4->Bounds).Extent.field0_0x0._s_0.W;
      pdVar3 = (double *)((longlong)FVar25 + 0x40 + lVar29 * 0x50);
      *pdVar3 = (param_4->Bounds).Extent.field0_0x0._s_0.Z;
      pdVar3[1] = dVar30;
      return;
    }
    uVar20 = uVar26;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar20 = uVar28;
    }
    if ((uVar20 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) break;
    _Src = (TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
            *)((this->TreeElements).AllocatorInstance.Data + lVar24);
    if (param_5 != _Src) {
      if ((_Src->AllocatorInstance).SecondaryData ==
          (ForElementType<UE::MathTest::FTestOctreeElement>)0x0) {
        memmove(param_5,_Src,0xa0);
      }
      FVar27 = (param_5->AllocatorInstance).SecondaryData;
      if (FVar27 != (ForElementType<UE::MathTest::FTestOctreeElement>)0x0) {
        FMemory::Free((void *)FVar27);
      }
      (param_5->AllocatorInstance).SecondaryData = (_Src->AllocatorInstance).SecondaryData;
      (_Src->AllocatorInstance).SecondaryData =
           (ForElementType<UE::MathTest::FTestOctreeElement>)0x0;
      param_5->ArrayNum = _Src->ArrayNum;
      param_5->ArrayMax = _Src->ArrayMax;
      _Src->ArrayNum = 0;
      _Src->ArrayMax = 2;
    }
    uVar20 = AllocateEightNodes(this);
    uVar22 = uVar20 - 1 >> 3;
    if (((this->ParentLinks).ArrayNum <= (int)uVar22) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(uint *)((this->ParentLinks).AllocatorInstance.Data + (ulonglong)uVar22 * 4) = param_1;
    uVar22 = uVar26;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar22 = uVar28;
    }
    if ((uVar22 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar29 * 8) = uVar20;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar26 = uVar28;
    }
    if ((uVar26 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar18 = local_res18;
    *(undefined4 *)((this->TreeNodes).AllocatorInstance.Data + lVar29 * 8 + 4) = 0;
    FVar27 = (param_5->AllocatorInstance).SecondaryData;
    iVar21 = param_5->ArrayNum;
    FVar25 = (ForElementType<UE::MathTest::FTestOctreeElement>)param_5;
    if (FVar27 != (ForElementType<UE::MathTest::FTestOctreeElement>)0x0) {
      FVar25 = FVar27;
    }
    FVar27 = (ForElementType<UE::MathTest::FTestOctreeElement>)
             ((longlong)iVar21 * 0x50 + (longlong)FVar25);
    while( true ) {
      if (param_5->ArrayNum != iVar21) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UE::MathTest::FTestOctreeElement,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      param_2 = local_res18;
      if (FVar25 == FVar27) break;
      local_118._s_0.X =
           (((FBoxCenterAndExtent *)((longlong)FVar25 + 0x10))->Center).field0_0x0._s_0.X;
      local_118._s_0.Y = (double)*(undefined8 *)((longlong)FVar25 + 0x18);
      local_118._s_0.Z = (double)*(undefined8 *)((longlong)FVar25 + 0x20);
      local_118._s_0.W = (double)*(undefined8 *)((longlong)FVar25 + 0x28);
      local_f8 = (((TVector4<double> *)((longlong)FVar25 + 0x30))->field0_0x0)._s_0.X;
      uStack_f0 = *(undefined8 *)((longlong)FVar25 + 0x38);
      local_e8 = *(undefined8 *)((longlong)FVar25 + 0x40);
      uStack_e0 = *(undefined8 *)((longlong)FVar25 + 0x48);
      AddElementInternal(this,param_1,pFVar18,(FBoxCenterAndExtent *)&local_118._s_0,
                         (FTestOctreeElement *)FVar25,param_5);
      FVar25 = (ForElementType<UE::MathTest::FTestOctreeElement>)((longlong)FVar25 + 0x50);
    }
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MathTest::FTestOctreeElement>_>
                (0x50,0x10,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// AllocateEightNodes @ 141bf6b30

uint __thiscall
TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics>::AllocateEightNodes
          (TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics> *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (this->FreeList).ArrayNum;
  if (iVar5 == 0) {
    uVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,8,&(this->TreeNodes).AllocatorInstance,&(this->TreeNodes).ArrayNum,
                       &(this->TreeNodes).ArrayMax);
    DefaultConstructItems<TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics>::FNode,int>
              ((this->TreeNodes).AllocatorInstance.Data + (longlong)(int)uVar4 * 8,8);
    iVar5 = (this->ParentLinks).ArrayNum;
    piVar1 = &(this->ParentLinks).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->ParentLinks).AllocatorInstance,piVar1);
    }
    (this->ParentLinks).ArrayNum = iVar5 + 1;
    *(undefined4 *)((this->ParentLinks).AllocatorInstance.Data + (longlong)iVar5 * 4) = 0;
    iVar5 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (0xc0,0x10,8,&(this->TreeElements).AllocatorInstance,
                       &(this->TreeElements).ArrayNum,&(this->TreeElements).ArrayMax);
    DefaultConstructItems<TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,int>
              ((this->TreeElements).AllocatorInstance.Data + (longlong)iVar5 * 0xc0,8);
    return uVar4;
  }
  if (iVar5 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  iVar5 = (this->FreeList).ArrayNum;
  iVar6 = iVar5 + -1;
  iVar5 = *(int *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar5 * 4 + -4);
  (this->FreeList).ArrayNum = iVar6;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&(this->FreeList).AllocatorInstance,iVar6,&(this->FreeList).ArrayMax);
  return iVar5 * 8 + 1;
}

// ApplyOffset @ 141bf6cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics>::ApplyOffset
          (TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics> *this,
          TVector<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  ulonglong uVar7;
  ForElementType<UE::MathTest::FTestOctreeElement> FVar8;
  ForElementType<UE::MathTest::FTestOctreeElement> FVar9;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8 [16];
  TVector4<double>_u_0 local_1e8;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_1a8;
  TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1a8.AllocatorInstance.SecondaryData = (ForElementType<UE::MathTest::FTestOctreeElement>)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 2;
  if (((this->TreeNodes).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)((this->TreeNodes).AllocatorInstance.Data + 4);
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (local_1a8.ArrayMax < (int)uVar3) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MathTest::FTestOctreeElement>_>
              (0x50,0x10,uVar3,&local_1a8.AllocatorInstance,local_1a8.ArrayNum,&local_1a8.ArrayMax);
  }
  CollapseNodesInternal(this,0,&local_1a8);
  Destroy(this);
  iVar5 = local_1a8.ArrayNum;
  if (!param_2) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar2 = (param_1->field0_0x0)._s_0.Z;
    (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.X =
         (param_1->field0_0x0)._s_0.X + (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.X;
    (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Y =
         dVar1 + (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Y;
    (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Z =
         dVar2 + (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Z;
  }
  uVar7 = (ulonglong)local_1a8.ArrayNum;
  FVar8 = (ForElementType<UE::MathTest::FTestOctreeElement>)&local_1a8;
  if (local_1a8.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MathTest::FTestOctreeElement>)0x0) {
    FVar8 = local_1a8.AllocatorInstance.SecondaryData;
  }
  FVar9 = (ForElementType<UE::MathTest::FTestOctreeElement>)(uVar7 * 0x50 + (longlong)FVar8);
  while( true ) {
    if ((uint)uVar7 != iVar5) {
      `TCheckedPointerIterator<UE::MathTest::FTestOctreeElement,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1f8);
    }
    if (FVar8 == FVar9) break;
    local_1e8._s_0.X = (((FBoxCenterAndExtent *)((longlong)FVar8 + 0x10))->Center).field0_0x0._s_0.X
    ;
    local_1e8._s_0.Y = (double)*(undefined8 *)((longlong)FVar8 + 0x18);
    local_1e8._s_0.Z = (double)*(undefined8 *)((longlong)FVar8 + 0x20);
    local_1e8._s_0.W = (double)*(undefined8 *)((longlong)FVar8 + 0x28);
    local_1c8 = (((TVector4<double> *)((longlong)FVar8 + 0x30))->field0_0x0)._s_0.X;
    uStack_1c0 = *(undefined8 *)((longlong)FVar8 + 0x38);
    local_e8.AllocatorInstance.SecondaryData = (ForElementType<UE::MathTest::FTestOctreeElement>)0x0
    ;
    local_1b8 = *(undefined8 *)((longlong)FVar8 + 0x40);
    uStack_1b0 = *(undefined8 *)((longlong)FVar8 + 0x48);
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 2;
    AddElementInternal(this,0,&this->RootNodeContext,(FBoxCenterAndExtent *)&local_1e8._s_0,
                       (FTestOctreeElement *)FVar8,&local_e8);
    if (local_e8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MathTest::FTestOctreeElement>)0x0) {
      FMemory::Free((void *)local_e8.AllocatorInstance.SecondaryData);
    }
    uVar7 = (ulonglong)(uint)local_1a8.ArrayNum;
    FVar8 = (ForElementType<UE::MathTest::FTestOctreeElement>)((longlong)FVar8 + 0x50);
  }
  if (local_1a8.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MathTest::FTestOctreeElement>)0x0) {
    FMemory::Free((void *)local_1a8.AllocatorInstance.SecondaryData);
  }
  return;
}

// CollapseNodesInternal @ 141bf8280

void __thiscall
TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics>::CollapseNodesInternal
          (TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics> *this,
          uint param_1,
          TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int iVar1;
  ForElementType<UE::MathTest::FTestOctreeElement> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *_Src;
  byte bVar7;
  uint uVar9;
  ForElementType<UE::MathTest::FTestOctreeElement> FVar10;
  ForElementType<UE::MathTest::FTestOctreeElement> *pFVar11;
  longlong lVar12;
  TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar13;
  uint uVar8;
  
  lVar12 = (longlong)(int)param_1;
  uVar9 = ~param_1 >> 0x1f;
  uVar5 = 0;
  if ((int)param_1 < (this->TreeElements).ArrayNum) {
    uVar5 = uVar9;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar13 = (TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
             *)((this->TreeElements).AllocatorInstance.Data + lVar12 * 0xc0);
  if (param_2 == pTVar13) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = pTVar13->ArrayNum;
  if (iVar1 != 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MathTest::FTestOctreeElement>_>
                      (0x50,0x10,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    FVar2 = (param_2->AllocatorInstance).SecondaryData;
    _Src = *(TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
             **)&(pTVar13->AllocatorInstance).SecondaryData.field_0x0;
    if (_Src == (TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
      _Src = pTVar13;
    }
    FVar10 = (ForElementType<UE::MathTest::FTestOctreeElement>)param_2;
    if (FVar2 != (ForElementType<UE::MathTest::FTestOctreeElement>)0x0) {
      FVar10 = FVar2;
    }
    memmove((void *)((longlong)iVar6 * 0x50 + (longlong)FVar10),_Src,(longlong)iVar1 * 0x50);
    pTVar13->ArrayNum = 0;
  }
  uVar5 = 0;
  if ((int)param_1 < (this->TreeElements).ArrayNum) {
    uVar5 = uVar9;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar11 = (ForElementType<UE::MathTest::FTestOctreeElement> *)
            ((this->TreeElements).AllocatorInstance.Data + lVar12 * 0xc0);
  iVar1 = *(int *)(pFVar11[1].InlineData + 4);
  pFVar11[1].InlineData[0] = '\0';
  pFVar11[1].InlineData[1] = '\0';
  pFVar11[1].InlineData[2] = '\0';
  pFVar11[1].InlineData[3] = '\0';
  if (iVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MathTest::FTestOctreeElement>_>
              (0x50,0x10,0,pFVar11,0,(int *)(pFVar11[1].InlineData + 4));
  }
  uVar5 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar5 = uVar9;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar12 * 8) != -1) {
    uVar5 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar5 = uVar9;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar8 = 0;
    uVar5 = *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar12 * 8);
    do {
      CollapseNodesInternal(this,uVar8 + uVar5,param_2);
      bVar7 = (char)uVar8 + 1;
      uVar8 = (uint)bVar7;
    } while ((char)bVar7 < '\b');
    uVar8 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar8 = uVar9;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)((this->TreeNodes).AllocatorInstance.Data + lVar12 * 8) = 0xffffffff;
    FreeEightNodes(this,uVar5);
  }
  return;
}

// Destroy @ 141bffc90

void __thiscall
TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics>::Destroy
          (TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics> *this)

{
  int *piVar1;
  int *piVar2;
  TArray<TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,TAlignedHeapAllocator<16>_>
  *pTVar3;
  TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  int iVar5;
  
  piVar1 = &(this->TreeNodes).ArrayMax;
  (this->TreeNodes).ArrayNum = 0;
  if ((this->TreeNodes).ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,&(this->TreeNodes).AllocatorInstance,0,piVar1);
  }
  pTVar3 = &this->TreeElements;
  piVar2 = &(this->TreeElements).ArrayMax;
  pTVar4 = (TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
            *)(pTVar3->AllocatorInstance).Data;
  iVar5 = (this->TreeElements).ArrayNum;
  if ((this->TreeElements).ArrayMax < 1) {
    DestructItems<TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar4,iVar5);
    (this->TreeElements).ArrayNum = 0;
    if (*piVar2 != 1) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0xc0,0x10,1,&pTVar3->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar4,iVar5);
    (this->TreeElements).ArrayNum = 0;
  }
  (this->FreeList).ArrayNum = 0;
  if ((this->FreeList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FreeList).AllocatorInstance,0,&(this->FreeList).ArrayMax);
  }
  (this->ParentLinks).ArrayNum = 0;
  if ((this->ParentLinks).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ParentLinks).AllocatorInstance,0,&(this->ParentLinks).ArrayMax);
  }
  iVar5 = (this->TreeNodes).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->TreeNodes).AllocatorInstance,piVar1);
  }
  (this->TreeNodes).ArrayNum = iVar5 + 1;
  DefaultConstructItems<TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics>::FNode,int>
            ((this->TreeNodes).AllocatorInstance.Data + (longlong)iVar5 * 8,1);
  iVar5 = (this->TreeElements).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (0x10c0,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->TreeElements).ArrayNum = iVar5 + 1;
  DefaultConstructItems<TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,int>
            ((pTVar3->AllocatorInstance).Data + (longlong)iVar5 * 0xc0,1);
  return;
}

// FreeEightNodes @ 141c01090

void __thiscall
TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics>::FreeEightNodes
          (TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics> *this,
          uint param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint local_18 [4];
  
  bVar7 = 0;
  do {
    uVar8 = bVar7 + param_1;
    uVar9 = 0;
    if ((int)uVar8 < (this->TreeNodes).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    bVar7 = bVar7 + 1;
    *(undefined8 *)((this->TreeNodes).AllocatorInstance.Data + (longlong)(int)uVar8 * 8) =
         0xffffffff;
  } while ((char)bVar7 < '\b');
  uVar9 = param_1 - 1 >> 3;
  if ((this->ParentLinks).ArrayNum <= (int)uVar9) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = &this->FreeList;
  *(undefined4 *)((this->ParentLinks).AllocatorInstance.Data + (ulonglong)uVar9 * 4) = 0xffffffff;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_18[0] = uVar9;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->FreeList).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->FreeList).ArrayNum;
  piVar1 = &(this->FreeList).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->FreeList).ArrayNum = iVar6 + 1;
  *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18[0];
  return;
}

