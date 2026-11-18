// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 16

// TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> @ 1497de200

TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> * __thiscall
TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>
          (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this)

{
  int *piVar1;
  TArray<TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,TAlignedHeapAllocator<8>_>
  *pTVar2;
  int iVar3;
  
  piVar1 = &(this->TreeNodes).ArrayMax;
  *piVar1 = 0;
  pTVar2 = &this->TreeElements;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.X = 0.0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->TreeElements).ArrayNum = 0;
  (this->TreeElements).ArrayMax = 0;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Y = 0.0;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Z = 0.0;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.X = 0.0;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Y = 0.0;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Z = 0.0;
  (this->TreeNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TreeNodes).ArrayNum = 0;
  (this->ParentLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentLinks).ArrayNum = 0;
  (this->ParentLinks).ArrayMax = 0;
  (this->FreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeList).ArrayNum = 0;
  (this->FreeList).ArrayMax = 0;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.W = 1.0;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.W = 1.0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&(this->TreeNodes).AllocatorInstance,piVar1);
  (this->TreeNodes).ArrayNum = iVar3 + 1;
  DefaultConstructItems<TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::FNode,int>
            ((this->TreeNodes).AllocatorInstance.Data + (longlong)iVar3 * 8,1);
  iVar3 = (this->TreeElements).ArrayNum;
  if (iVar3 == (this->TreeElements).ArrayMax) {
    iVar3 = UE::Core::Private::ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                      (0x410,8,&pTVar2->AllocatorInstance,&(this->TreeElements).ArrayMax);
  }
  (this->TreeElements).ArrayNum = iVar3 + 1;
  DefaultConstructItems<TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
            ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 0x410,1);
  return this;
}

// ~TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> @ 1497e1c50

void __thiscall
TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
~TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>
          (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
              *)(this->TreeElements).AllocatorInstance.Data,(this->TreeElements).ArrayNum);
  pFVar1 = (this->TreeElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParentLinks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TreeNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddElementInternal @ 1497eb450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::AddElementInternal
          (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this,uint param_1
          ,FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,FPointRef *param_4,
          TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_5)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FOctreeNodeContext *pFVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  ForElementType<PCGPointOctree::FPointRef> FVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *_Src;
  uchar *puVar25;
  ForElementType<PCGPointOctree::FPointRef> FVar26;
  uint uVar27;
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
  TVector4<double>_u_0 local_138;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  TVector4<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  undefined8 local_88;
  
  lVar29 = (longlong)(int)param_1;
  uVar28 = ~param_1 >> 0x1f;
  local_res18 = param_2;
  local_res20 = param_3;
  while( true ) {
    uVar27 = 0;
    uVar19 = uVar27;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar19 = uVar28;
    }
    if ((uVar19 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (this->TreeNodes).AllocatorInstance.Data + lVar29 * 8 + 4;
    *(int *)pFVar1 = *(int *)pFVar1 + 1;
    iVar20 = (this->TreeNodes).ArrayNum;
    uVar19 = uVar27;
    if ((int)param_1 < iVar20) {
      uVar19 = uVar28;
    }
    if (uVar19 == 0) {
      iVar20 = 0x506106c8;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + lVar29 * 8) != -1) {
      dVar9 = (param_2->Bounds).Center.field0_0x0._s_0.Z;
      dVar10 = (param_2->Bounds).Center.field0_0x0._s_0.W;
      dVar30 = param_2->ChildCenterOffset;
      dVar11 = (param_2->Bounds).Center.field0_0x0._s_0.X;
      dVar12 = (param_2->Bounds).Center.field0_0x0._s_0.Y;
      dVar35 = param_2->ChildExtent;
      auVar41._8_4_ = SUB84(dVar30,0);
      auVar41._0_8_ = dVar30;
      uVar47 = (undefined4)((ulonglong)dVar30 >> 0x20);
      auVar41._12_4_ = uVar47;
      dVar13 = (local_res20->Center).field0_0x0._s_0.X;
      dVar14 = (local_res20->Center).field0_0x0._s_0.Y;
      dVar15 = (local_res20->Center).field0_0x0._s_0.Z;
      dVar16 = (local_res20->Center).field0_0x0._s_0.W;
      auVar42._0_8_ = (dVar30 + dVar9) - dVar15;
      auVar42._8_8_ = (auVar41._8_8_ + dVar10) - dVar16;
      dVar6 = dVar16 - (dVar10 - dVar30);
      auVar31._8_4_ = SUB84(dVar35,0);
      auVar31._0_8_ = dVar35;
      auVar31._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      auVar43._8_4_ = SUB84(dVar6,0);
      auVar43._0_8_ = dVar15 - (dVar9 - dVar30);
      auVar43._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar43 = minpd(auVar42,auVar43);
      auVar32._8_8_ =
           -(ulonglong)(auVar31._8_8_ < auVar43._8_8_ + (local_res20->Extent).field0_0x0._s_0.W);
      auVar32._0_8_ = -(ulonglong)(dVar35 < auVar43._0_8_ + (local_res20->Extent).field0_0x0._s_0.Z)
      ;
      uVar19 = movmskpd(iVar20,auVar32);
      auVar44._8_4_ = SUB84(dVar30,0);
      auVar44._0_8_ = dVar30;
      auVar44._12_4_ = uVar47;
      auVar45._0_8_ = (dVar30 + dVar11) - dVar13;
      auVar45._8_8_ = (auVar44._8_8_ + dVar12) - dVar14;
      dVar6 = dVar14 - (dVar12 - dVar30);
      auVar4._8_4_ = SUB84(dVar6,0);
      auVar4._0_8_ = dVar13 - (dVar11 - dVar30);
      auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar43 = minpd(auVar45,auVar4);
      lVar24 = -(ulonglong)(dVar35 < auVar43._8_8_ + (local_res20->Extent).field0_0x0._s_0.Y);
      auVar7._8_4_ = (int)lVar24;
      auVar7._0_8_ = -(ulonglong)(dVar35 < auVar43._0_8_ + (local_res20->Extent).field0_0x0._s_0.X);
      auVar7._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      iVar20 = movmskpd((int)pFVar1,auVar7);
      if ((uVar19 & 0x3fffffff) == 0 && iVar20 == 0) {
        auVar50._8_8_ = -(ulonglong)(dVar10 < dVar16);
        auVar50._0_8_ = -(ulonglong)(dVar9 < dVar15);
        iVar23 = movmskpd((int)local_res20,auVar50);
        auVar8._8_4_ = (int)-(ulonglong)(dVar12 < dVar14);
        auVar8._0_8_ = -(ulonglong)(dVar11 < dVar13);
        auVar8._12_4_ = (int)(-(ulonglong)(dVar12 < dVar14) >> 0x20);
        uVar19 = movmskpd(iVar20,auVar8);
        uVar19 = (iVar23 << 2 | uVar19) & 7;
        if ((int)param_1 < (this->TreeNodes).ArrayNum) {
          uVar27 = uVar28;
        }
        if ((uVar27 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar48 = SUB84(param_2->ChildCenterOffset,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar49 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        dVar30 = (double)(float)-(uint)((uVar19 & ___xmm_00000008000000040000000200000001) ==
                                       ___xmm_00000008000000040000000200000001);
        dVar35 = (double)(float)-(uint)((uVar19 & _UNK_150744154) == _UNK_150744154);
        uVar28 = SUB84(dVar30,0);
        uVar27 = (uint)((ulonglong)dVar30 >> 0x20);
        uVar22 = SUB84(dVar35,0);
        uVar36 = (uint)((ulonglong)dVar35 >> 0x20);
        auVar33._0_4_ = ~uVar28 & uVar48;
        auVar33._4_4_ = ~uVar27 & uVar49;
        auVar33._8_4_ = ~uVar22 & uVar48;
        auVar33._12_4_ = ~uVar36 & uVar49;
        dVar30 = (double)(float)-(uint)((uVar19 & _UNK_150744158) == _UNK_150744158);
        uVar37 = SUB84(dVar30,0);
        uVar38 = (uint)((ulonglong)dVar30 >> 0x20);
        dVar30 = (double)(float)-(uint)((uVar19 & _UNK_15074415c) == _UNK_15074415c);
        uVar39 = SUB84(dVar30,0);
        uVar40 = (uint)((ulonglong)dVar30 >> 0x20);
        uVar46 = SUB84(param_2->ChildCenterOffset,0);
        auVar51._0_4_ = uVar28 & uVar46;
        uVar28 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20);
        auVar51._4_4_ = uVar27 & uVar28;
        auVar51._8_4_ = uVar22 & uVar46;
        auVar51._12_4_ = uVar36 & uVar28;
        local_f8._s_0.X = SUB168(auVar51 | auVar33,0) + (param_2->Bounds).Center.field0_0x0._s_0.X;
        local_f8._s_0.Y = SUB168(auVar51 | auVar33,8) + (param_2->Bounds).Center.field0_0x0._s_0.Y;
        auVar34._0_4_ = uVar37 & uVar46;
        auVar34._4_4_ = uVar38 & uVar28;
        auVar34._8_4_ = uVar39 & uVar46;
        auVar34._12_4_ = uVar40 & uVar28;
        auVar5._4_4_ = ~uVar38 & uVar49;
        auVar5._0_4_ = ~uVar37 & uVar48;
        auVar5._8_4_ = ~uVar39 & uVar48;
        auVar5._12_4_ = ~uVar40 & uVar49;
        local_b0 = param_2->ChildExtent;
        local_f8._s_0.Z =
             (SUB168(auVar34 | auVar5,0) + (param_2->Bounds).Center.field0_0x0._s_0.Z) *
             (double)_UNK_150689548;
        local_f8._s_0.W =
             (SUB168(auVar34 | auVar5,8) + (param_2->Bounds).Center.field0_0x0._s_0.W) *
             (double)_UNK_15068954c;
        dVar30 = (double)_UNK_15068954c * local_b0;
        local_b8 = local_b0 * __real_3fe0000000000000 * __real_3ff1000000000000;
        local_d8._8_4_ = SUB84(local_b0,0);
        local_d8._0_8_ = local_b0;
        local_d8._12_4_ = (int)((ulonglong)local_b0 >> 0x20);
        local_c8._8_4_ = SUB84(dVar30,0);
        local_c8._0_8_ = (double)_UNK_150689548 * local_b0;
        local_c8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        local_b0 = local_b0 - local_b8;
        AddElementInternal(this,*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar29 * 8) +
                                uVar19,(FOctreeNodeContext *)&local_f8._s_0,local_res20,param_4,
                           param_5);
      }
      else {
        if ((int)param_1 < (this->TreeElements).ArrayNum) {
          uVar27 = uVar28;
        }
        if ((uVar27 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar26 = (ForElementType<PCGPointOctree::FPointRef>)
                 (lVar29 * 0x410 + (longlong)(this->TreeElements).AllocatorInstance.Data);
        iVar20 = *(int *)((ForElementType<PCGPointOctree::FPointRef> *)((longlong)FVar26 + 0x408))->
                         InlineData;
        if (iVar20 == *(int *)((longlong)FVar26 + 0x40c)) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGPointOctree::FPointRef>_>
                             (0x840,(ForElementType<PCGPointOctree::FPointRef> *)FVar26,
                              (int *)((longlong)FVar26 + 0x40c));
        }
        *(int *)((ForElementType<PCGPointOctree::FPointRef> *)((longlong)FVar26 + 0x408))->
                InlineData = iVar20 + 1;
        FVar21 = *(ForElementType<PCGPointOctree::FPointRef> *)((longlong)FVar26 + 0x400);
        if (*(ForElementType<PCGPointOctree::FPointRef> *)((longlong)FVar26 + 0x400) ==
            (ForElementType<PCGPointOctree::FPointRef>)0x0) {
          FVar21 = FVar26;
        }
        lVar29 = (longlong)iVar20 * 0x40;
        dVar30 = (param_4->Bounds).Origin.field0_0x0._s_0.X;
        *(undefined8 *)((longlong)FVar21 + lVar29) = *(undefined8 *)param_4;
        ((undefined8 *)((longlong)FVar21 + lVar29))[1] = dVar30;
        dVar30 = (param_4->Bounds).Origin.field0_0x0._s_0.Z;
        pdVar2 = (double *)((longlong)FVar21 + 0x10 + lVar29);
        *pdVar2 = (param_4->Bounds).Origin.field0_0x0._s_0.Y;
        pdVar2[1] = dVar30;
        dVar30 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.Y;
        pdVar2 = (double *)((longlong)FVar21 + 0x20 + lVar29);
        *pdVar2 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.X;
        pdVar2[1] = dVar30;
        dVar30 = (param_4->Bounds).SphereRadius;
        pdVar2 = (double *)((longlong)FVar21 + 0x30 + lVar29);
        *pdVar2 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.Z;
        pdVar2[1] = dVar30;
      }
      return;
    }
    uVar19 = uVar27;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar19 = uVar28;
    }
    if ((uVar19 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar24 = lVar29 * 0x410;
    if ((*(int *)((this->TreeElements).AllocatorInstance.Data + lVar24 + 0x408) + 1 < 0x11) ||
       ((param_2->Bounds).Extent.field0_0x0._s_0.X <= this->MinLeafExtent)) {
      if ((int)param_1 < (this->TreeElements).ArrayNum) {
        uVar27 = uVar28;
      }
      if ((uVar27 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar26 = (ForElementType<PCGPointOctree::FPointRef>)
               (lVar24 + (longlong)(this->TreeElements).AllocatorInstance.Data);
      iVar20 = *(int *)((ForElementType<PCGPointOctree::FPointRef> *)((longlong)FVar26 + 0x408))->
                       InlineData;
      if (iVar20 == *(int *)((longlong)FVar26 + 0x40c)) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGPointOctree::FPointRef>_>
                           (0x840,(ForElementType<PCGPointOctree::FPointRef> *)FVar26,
                            (int *)((longlong)FVar26 + 0x40c));
      }
      *(int *)((ForElementType<PCGPointOctree::FPointRef> *)((longlong)FVar26 + 0x408))->InlineData
           = iVar20 + 1;
      FVar21 = *(ForElementType<PCGPointOctree::FPointRef> *)((longlong)FVar26 + 0x400);
      if (*(ForElementType<PCGPointOctree::FPointRef> *)((longlong)FVar26 + 0x400) ==
          (ForElementType<PCGPointOctree::FPointRef>)0x0) {
        FVar21 = FVar26;
      }
      lVar29 = (longlong)iVar20 * 0x40;
      dVar30 = (param_4->Bounds).Origin.field0_0x0._s_0.X;
      *(undefined8 *)((longlong)FVar21 + lVar29) = *(undefined8 *)param_4;
      ((undefined8 *)((longlong)FVar21 + lVar29))[1] = dVar30;
      dVar30 = (param_4->Bounds).Origin.field0_0x0._s_0.Z;
      pdVar2 = (double *)((longlong)FVar21 + 0x10 + lVar29);
      *pdVar2 = (param_4->Bounds).Origin.field0_0x0._s_0.Y;
      pdVar2[1] = dVar30;
      dVar30 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.Y;
      pdVar2 = (double *)((longlong)FVar21 + 0x20 + lVar29);
      *pdVar2 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.X;
      pdVar2[1] = dVar30;
      dVar30 = (param_4->Bounds).SphereRadius;
      pdVar2 = (double *)((longlong)FVar21 + 0x30 + lVar29);
      *pdVar2 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.Z;
      pdVar2[1] = dVar30;
      return;
    }
    uVar19 = uVar27;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar19 = uVar28;
    }
    if ((uVar19 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) break;
    _Src = (TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
            *)((this->TreeElements).AllocatorInstance.Data + lVar24);
    if (param_5 != _Src) {
      if ((_Src->AllocatorInstance).SecondaryData == (ForElementType<PCGPointOctree::FPointRef>)0x0)
      {
        memmove(param_5,_Src,0x400);
      }
      FVar26 = (param_5->AllocatorInstance).SecondaryData;
      if (FVar26 != (ForElementType<PCGPointOctree::FPointRef>)0x0) {
        FMemory::Free((void *)FVar26);
      }
      (param_5->AllocatorInstance).SecondaryData = (_Src->AllocatorInstance).SecondaryData;
      (_Src->AllocatorInstance).SecondaryData = (ForElementType<PCGPointOctree::FPointRef>)0x0;
      param_5->ArrayNum = _Src->ArrayNum;
      param_5->ArrayMax = _Src->ArrayMax;
      _Src->ArrayNum = 0;
      _Src->ArrayMax = 0x10;
    }
    uVar19 = AllocateEightNodes(this);
    uVar22 = uVar19 - 1 >> 3;
    if (((this->ParentLinks).ArrayNum <= (int)uVar22) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(uint *)((this->ParentLinks).AllocatorInstance.Data + (ulonglong)uVar22 * 4) = param_1;
    uVar22 = uVar27;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar22 = uVar28;
    }
    if ((uVar22 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar29 * 8) = uVar19;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar27 = uVar28;
    }
    if ((uVar27 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar17 = local_res18;
    *(undefined4 *)((this->TreeNodes).AllocatorInstance.Data + lVar29 * 8 + 4) = 0;
    FVar26 = (param_5->AllocatorInstance).SecondaryData;
    iVar20 = param_5->ArrayNum;
    FVar21 = (ForElementType<PCGPointOctree::FPointRef>)param_5;
    if (FVar26 != (ForElementType<PCGPointOctree::FPointRef>)0x0) {
      FVar21 = FVar26;
    }
    puVar25 = (uchar *)((longlong)FVar21 + 0x10);
    while( true ) {
      if (param_5->ArrayNum != iVar20) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<PCGPointOctree::FPointRef,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      param_2 = local_res18;
      if ((ForElementType<PCGPointOctree::FPointRef> *)(puVar25 + -0x10) ==
          (ForElementType<PCGPointOctree::FPointRef> *)((longlong)iVar20 * 0x40 + (longlong)FVar21))
      break;
      local_138._s_0.X = (double)*(undefined8 *)(puVar25 + -8);
      local_138._s_0.Y = (double)*(undefined8 *)puVar25;
      local_108 = *(undefined8 *)(puVar25 + 0x20);
      local_138._s_0.Z = (double)*(undefined8 *)(puVar25 + 8);
      local_118 = *(undefined8 *)(puVar25 + 0x10);
      local_110 = *(undefined8 *)(puVar25 + 0x18);
      local_100 = 0;
      local_138._s_0.W = 0.0;
      local_88 = local_108;
      AddElementInternal(this,param_1,pFVar17,(FBoxCenterAndExtent *)&local_138._s_0,
                         (FPointRef *)(puVar25 + -0x10),param_5);
      puVar25 = puVar25 + 0x40;
    }
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGPointOctree::FPointRef>_>
                (0x40,8,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// AllocateEightNodes @ 1497ee4d0

uint __thiscall
TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::AllocateEightNodes
          (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this)

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
    DefaultConstructItems<TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::FNode,int>
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
    iVar5 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                      (0x410,8,8,&(this->TreeElements).AllocatorInstance,
                       &(this->TreeElements).ArrayNum,&(this->TreeElements).ArrayMax);
    DefaultConstructItems<TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
              ((this->TreeElements).AllocatorInstance.Data + (longlong)iVar5 * 0x410,8);
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

// TOctree2<FPCGPointRef,FPCGPointRefSemantics> @ 14988bec0

TOctree2<FPCGPointRef,FPCGPointRefSemantics> * __thiscall
TOctree2<FPCGPointRef,FPCGPointRefSemantics>::TOctree2<FPCGPointRef,FPCGPointRefSemantics>
          (TOctree2<FPCGPointRef,FPCGPointRefSemantics> *this)

{
  int *piVar1;
  TArray<TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,TAlignedHeapAllocator<8>_>
  *pTVar2;
  int iVar3;
  
  piVar1 = &(this->TreeNodes).ArrayMax;
  *piVar1 = 0;
  pTVar2 = &this->TreeElements;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.X = 0.0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->TreeElements).ArrayNum = 0;
  (this->TreeElements).ArrayMax = 0;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Y = 0.0;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Z = 0.0;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.X = 0.0;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Y = 0.0;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Z = 0.0;
  (this->TreeNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TreeNodes).ArrayNum = 0;
  (this->ParentLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentLinks).ArrayNum = 0;
  (this->ParentLinks).ArrayMax = 0;
  (this->FreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeList).ArrayNum = 0;
  (this->FreeList).ArrayMax = 0;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.W = 1.0;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.W = 1.0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&(this->TreeNodes).AllocatorInstance,piVar1);
  (this->TreeNodes).ArrayNum = iVar3 + 1;
  DefaultConstructItems<TOctree2<FPCGPointRef,FPCGPointRefSemantics>::FNode,int>
            ((this->TreeNodes).AllocatorInstance.Data + (longlong)iVar3 * 8,1);
  iVar3 = (this->TreeElements).ArrayNum;
  if (iVar3 == (this->TreeElements).ArrayMax) {
    iVar3 = UE::Core::Private::ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                      (0x410,8,&pTVar2->AllocatorInstance,&(this->TreeElements).ArrayMax);
  }
  (this->TreeElements).ArrayNum = iVar3 + 1;
  DefaultConstructItems<TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
            ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 0x410,1);
  return this;
}

// ~TOctree2<FPCGPointRef,FPCGPointRefSemantics> @ 149890db0

void __thiscall
TOctree2<FPCGPointRef,FPCGPointRefSemantics>::~TOctree2<FPCGPointRef,FPCGPointRefSemantics>
          (TOctree2<FPCGPointRef,FPCGPointRefSemantics> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             (this->TreeElements).AllocatorInstance.Data,(this->TreeElements).ArrayNum);
  pFVar1 = (this->TreeElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParentLinks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TreeNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddElementInternal @ 14989c990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<FPCGPointRef,FPCGPointRefSemantics>::AddElementInternal
          (TOctree2<FPCGPointRef,FPCGPointRefSemantics> *this,uint param_1,
          FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,FPCGPointRef *param_4,
          TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FOctreeNodeContext *pFVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  ForElementType<FPCGPointRef> FVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *_Src;
  uchar *puVar25;
  ForElementType<FPCGPointRef> FVar26;
  uint uVar27;
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
  TVector4<double>_u_0 local_138;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  TVector4<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  undefined8 local_88;
  
  lVar29 = (longlong)(int)param_1;
  uVar28 = ~param_1 >> 0x1f;
  local_res18 = param_2;
  local_res20 = param_3;
  while( true ) {
    uVar27 = 0;
    uVar19 = uVar27;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar19 = uVar28;
    }
    if ((uVar19 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (this->TreeNodes).AllocatorInstance.Data + lVar29 * 8 + 4;
    *(int *)pFVar1 = *(int *)pFVar1 + 1;
    iVar20 = (this->TreeNodes).ArrayNum;
    uVar19 = uVar27;
    if ((int)param_1 < iVar20) {
      uVar19 = uVar28;
    }
    if (uVar19 == 0) {
      iVar20 = 0x506106c8;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + lVar29 * 8) != -1) {
      dVar9 = (param_2->Bounds).Center.field0_0x0._s_0.Z;
      dVar10 = (param_2->Bounds).Center.field0_0x0._s_0.W;
      dVar30 = param_2->ChildCenterOffset;
      dVar11 = (param_2->Bounds).Center.field0_0x0._s_0.X;
      dVar12 = (param_2->Bounds).Center.field0_0x0._s_0.Y;
      dVar35 = param_2->ChildExtent;
      auVar41._8_4_ = SUB84(dVar30,0);
      auVar41._0_8_ = dVar30;
      uVar47 = (undefined4)((ulonglong)dVar30 >> 0x20);
      auVar41._12_4_ = uVar47;
      dVar13 = (local_res20->Center).field0_0x0._s_0.X;
      dVar14 = (local_res20->Center).field0_0x0._s_0.Y;
      dVar15 = (local_res20->Center).field0_0x0._s_0.Z;
      dVar16 = (local_res20->Center).field0_0x0._s_0.W;
      auVar42._0_8_ = (dVar30 + dVar9) - dVar15;
      auVar42._8_8_ = (auVar41._8_8_ + dVar10) - dVar16;
      dVar6 = dVar16 - (dVar10 - dVar30);
      auVar31._8_4_ = SUB84(dVar35,0);
      auVar31._0_8_ = dVar35;
      auVar31._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      auVar43._8_4_ = SUB84(dVar6,0);
      auVar43._0_8_ = dVar15 - (dVar9 - dVar30);
      auVar43._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar43 = minpd(auVar42,auVar43);
      auVar32._8_8_ =
           -(ulonglong)(auVar31._8_8_ < auVar43._8_8_ + (local_res20->Extent).field0_0x0._s_0.W);
      auVar32._0_8_ = -(ulonglong)(dVar35 < auVar43._0_8_ + (local_res20->Extent).field0_0x0._s_0.Z)
      ;
      uVar19 = movmskpd(iVar20,auVar32);
      auVar44._8_4_ = SUB84(dVar30,0);
      auVar44._0_8_ = dVar30;
      auVar44._12_4_ = uVar47;
      auVar45._0_8_ = (dVar30 + dVar11) - dVar13;
      auVar45._8_8_ = (auVar44._8_8_ + dVar12) - dVar14;
      dVar6 = dVar14 - (dVar12 - dVar30);
      auVar4._8_4_ = SUB84(dVar6,0);
      auVar4._0_8_ = dVar13 - (dVar11 - dVar30);
      auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar43 = minpd(auVar45,auVar4);
      lVar24 = -(ulonglong)(dVar35 < auVar43._8_8_ + (local_res20->Extent).field0_0x0._s_0.Y);
      auVar7._8_4_ = (int)lVar24;
      auVar7._0_8_ = -(ulonglong)(dVar35 < auVar43._0_8_ + (local_res20->Extent).field0_0x0._s_0.X);
      auVar7._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      iVar20 = movmskpd((int)pFVar1,auVar7);
      if ((uVar19 & 0x3fffffff) == 0 && iVar20 == 0) {
        auVar50._8_8_ = -(ulonglong)(dVar10 < dVar16);
        auVar50._0_8_ = -(ulonglong)(dVar9 < dVar15);
        iVar23 = movmskpd((int)local_res20,auVar50);
        auVar8._8_4_ = (int)-(ulonglong)(dVar12 < dVar14);
        auVar8._0_8_ = -(ulonglong)(dVar11 < dVar13);
        auVar8._12_4_ = (int)(-(ulonglong)(dVar12 < dVar14) >> 0x20);
        uVar19 = movmskpd(iVar20,auVar8);
        uVar19 = (iVar23 << 2 | uVar19) & 7;
        if ((int)param_1 < (this->TreeNodes).ArrayNum) {
          uVar27 = uVar28;
        }
        if ((uVar27 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar48 = SUB84(param_2->ChildCenterOffset,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar49 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        dVar30 = (double)(float)-(uint)((uVar19 & ___xmm_00000008000000040000000200000001) ==
                                       ___xmm_00000008000000040000000200000001);
        dVar35 = (double)(float)-(uint)((uVar19 & _UNK_150744154) == _UNK_150744154);
        uVar28 = SUB84(dVar30,0);
        uVar27 = (uint)((ulonglong)dVar30 >> 0x20);
        uVar22 = SUB84(dVar35,0);
        uVar36 = (uint)((ulonglong)dVar35 >> 0x20);
        auVar33._0_4_ = ~uVar28 & uVar48;
        auVar33._4_4_ = ~uVar27 & uVar49;
        auVar33._8_4_ = ~uVar22 & uVar48;
        auVar33._12_4_ = ~uVar36 & uVar49;
        dVar30 = (double)(float)-(uint)((uVar19 & _UNK_150744158) == _UNK_150744158);
        uVar37 = SUB84(dVar30,0);
        uVar38 = (uint)((ulonglong)dVar30 >> 0x20);
        dVar30 = (double)(float)-(uint)((uVar19 & _UNK_15074415c) == _UNK_15074415c);
        uVar39 = SUB84(dVar30,0);
        uVar40 = (uint)((ulonglong)dVar30 >> 0x20);
        uVar46 = SUB84(param_2->ChildCenterOffset,0);
        auVar51._0_4_ = uVar28 & uVar46;
        uVar28 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20);
        auVar51._4_4_ = uVar27 & uVar28;
        auVar51._8_4_ = uVar22 & uVar46;
        auVar51._12_4_ = uVar36 & uVar28;
        local_f8._s_0.X = SUB168(auVar51 | auVar33,0) + (param_2->Bounds).Center.field0_0x0._s_0.X;
        local_f8._s_0.Y = SUB168(auVar51 | auVar33,8) + (param_2->Bounds).Center.field0_0x0._s_0.Y;
        auVar34._0_4_ = uVar37 & uVar46;
        auVar34._4_4_ = uVar38 & uVar28;
        auVar34._8_4_ = uVar39 & uVar46;
        auVar34._12_4_ = uVar40 & uVar28;
        auVar5._4_4_ = ~uVar38 & uVar49;
        auVar5._0_4_ = ~uVar37 & uVar48;
        auVar5._8_4_ = ~uVar39 & uVar48;
        auVar5._12_4_ = ~uVar40 & uVar49;
        local_b0 = param_2->ChildExtent;
        local_f8._s_0.Z =
             (SUB168(auVar34 | auVar5,0) + (param_2->Bounds).Center.field0_0x0._s_0.Z) *
             (double)_UNK_150689548;
        local_f8._s_0.W =
             (SUB168(auVar34 | auVar5,8) + (param_2->Bounds).Center.field0_0x0._s_0.W) *
             (double)_UNK_15068954c;
        dVar30 = (double)_UNK_15068954c * local_b0;
        local_b8 = local_b0 * __real_3fe0000000000000 * __real_3ff1000000000000;
        local_d8._8_4_ = SUB84(local_b0,0);
        local_d8._0_8_ = local_b0;
        local_d8._12_4_ = (int)((ulonglong)local_b0 >> 0x20);
        local_c8._8_4_ = SUB84(dVar30,0);
        local_c8._0_8_ = (double)_UNK_150689548 * local_b0;
        local_c8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        local_b0 = local_b0 - local_b8;
        AddElementInternal(this,*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar29 * 8) +
                                uVar19,(FOctreeNodeContext *)&local_f8._s_0,local_res20,param_4,
                           param_5);
      }
      else {
        if ((int)param_1 < (this->TreeElements).ArrayNum) {
          uVar27 = uVar28;
        }
        if ((uVar27 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar26 = (ForElementType<FPCGPointRef>)
                 (lVar29 * 0x410 + (longlong)(this->TreeElements).AllocatorInstance.Data);
        iVar20 = *(int *)((ForElementType<FPCGPointRef> *)((longlong)FVar26 + 0x408))->InlineData;
        if (iVar20 == *(int *)((longlong)FVar26 + 0x40c)) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPointRef>_>
                             (0x840,(ForElementType<FPCGPointRef> *)FVar26,
                              (int *)((longlong)FVar26 + 0x40c));
        }
        *(int *)((ForElementType<FPCGPointRef> *)((longlong)FVar26 + 0x408))->InlineData =
             iVar20 + 1;
        FVar21 = *(ForElementType<FPCGPointRef> *)((longlong)FVar26 + 0x400);
        if (*(ForElementType<FPCGPointRef> *)((longlong)FVar26 + 0x400) ==
            (ForElementType<FPCGPointRef>)0x0) {
          FVar21 = FVar26;
        }
        lVar29 = (longlong)iVar20 * 0x40;
        dVar30 = (param_4->Bounds).Origin.field0_0x0._s_0.X;
        *(undefined8 *)((longlong)FVar21 + lVar29) = param_4->Point;
        ((undefined8 *)((longlong)FVar21 + lVar29))[1] = dVar30;
        dVar30 = (param_4->Bounds).Origin.field0_0x0._s_0.Z;
        pdVar2 = (double *)((longlong)FVar21 + 0x10 + lVar29);
        *pdVar2 = (param_4->Bounds).Origin.field0_0x0._s_0.Y;
        pdVar2[1] = dVar30;
        dVar30 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.Y;
        pdVar2 = (double *)((longlong)FVar21 + 0x20 + lVar29);
        *pdVar2 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.X;
        pdVar2[1] = dVar30;
        dVar30 = (param_4->Bounds).SphereRadius;
        pdVar2 = (double *)((longlong)FVar21 + 0x30 + lVar29);
        *pdVar2 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.Z;
        pdVar2[1] = dVar30;
      }
      return;
    }
    uVar19 = uVar27;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar19 = uVar28;
    }
    if ((uVar19 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar24 = lVar29 * 0x410;
    if ((*(int *)((this->TreeElements).AllocatorInstance.Data + lVar24 + 0x408) + 1 < 0x11) ||
       ((param_2->Bounds).Extent.field0_0x0._s_0.X <= this->MinLeafExtent)) {
      if ((int)param_1 < (this->TreeElements).ArrayNum) {
        uVar27 = uVar28;
      }
      if ((uVar27 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar26 = (ForElementType<FPCGPointRef>)
               (lVar24 + (longlong)(this->TreeElements).AllocatorInstance.Data);
      iVar20 = *(int *)((ForElementType<FPCGPointRef> *)((longlong)FVar26 + 0x408))->InlineData;
      if (iVar20 == *(int *)((longlong)FVar26 + 0x40c)) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPointRef>_>
                           (0x840,(ForElementType<FPCGPointRef> *)FVar26,
                            (int *)((longlong)FVar26 + 0x40c));
      }
      *(int *)((ForElementType<FPCGPointRef> *)((longlong)FVar26 + 0x408))->InlineData = iVar20 + 1;
      FVar21 = *(ForElementType<FPCGPointRef> *)((longlong)FVar26 + 0x400);
      if (*(ForElementType<FPCGPointRef> *)((longlong)FVar26 + 0x400) ==
          (ForElementType<FPCGPointRef>)0x0) {
        FVar21 = FVar26;
      }
      lVar29 = (longlong)iVar20 * 0x40;
      dVar30 = (param_4->Bounds).Origin.field0_0x0._s_0.X;
      *(undefined8 *)((longlong)FVar21 + lVar29) = param_4->Point;
      ((undefined8 *)((longlong)FVar21 + lVar29))[1] = dVar30;
      dVar30 = (param_4->Bounds).Origin.field0_0x0._s_0.Z;
      pdVar2 = (double *)((longlong)FVar21 + 0x10 + lVar29);
      *pdVar2 = (param_4->Bounds).Origin.field0_0x0._s_0.Y;
      pdVar2[1] = dVar30;
      dVar30 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.Y;
      pdVar2 = (double *)((longlong)FVar21 + 0x20 + lVar29);
      *pdVar2 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.X;
      pdVar2[1] = dVar30;
      dVar30 = (param_4->Bounds).SphereRadius;
      pdVar2 = (double *)((longlong)FVar21 + 0x30 + lVar29);
      *pdVar2 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.Z;
      pdVar2[1] = dVar30;
      return;
    }
    uVar19 = uVar27;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar19 = uVar28;
    }
    if ((uVar19 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) break;
    _Src = (TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
           ((this->TreeElements).AllocatorInstance.Data + lVar24);
    if (param_5 != _Src) {
      if ((_Src->AllocatorInstance).SecondaryData == (ForElementType<FPCGPointRef>)0x0) {
        memmove(param_5,_Src,0x400);
      }
      FVar26 = (param_5->AllocatorInstance).SecondaryData;
      if (FVar26 != (ForElementType<FPCGPointRef>)0x0) {
        FMemory::Free((void *)FVar26);
      }
      (param_5->AllocatorInstance).SecondaryData = (_Src->AllocatorInstance).SecondaryData;
      (_Src->AllocatorInstance).SecondaryData = (ForElementType<FPCGPointRef>)0x0;
      param_5->ArrayNum = _Src->ArrayNum;
      param_5->ArrayMax = _Src->ArrayMax;
      _Src->ArrayNum = 0;
      _Src->ArrayMax = 0x10;
    }
    uVar19 = AllocateEightNodes(this);
    uVar22 = uVar19 - 1 >> 3;
    if (((this->ParentLinks).ArrayNum <= (int)uVar22) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(uint *)((this->ParentLinks).AllocatorInstance.Data + (ulonglong)uVar22 * 4) = param_1;
    uVar22 = uVar27;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar22 = uVar28;
    }
    if ((uVar22 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar29 * 8) = uVar19;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar27 = uVar28;
    }
    if ((uVar27 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar17 = local_res18;
    *(undefined4 *)((this->TreeNodes).AllocatorInstance.Data + lVar29 * 8 + 4) = 0;
    FVar26 = (param_5->AllocatorInstance).SecondaryData;
    iVar20 = param_5->ArrayNum;
    FVar21 = (ForElementType<FPCGPointRef>)param_5;
    if (FVar26 != (ForElementType<FPCGPointRef>)0x0) {
      FVar21 = FVar26;
    }
    puVar25 = (uchar *)((longlong)FVar21 + 0x10);
    while( true ) {
      if (param_5->ArrayNum != iVar20) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FPCGPointRef,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      param_2 = local_res18;
      if ((ForElementType<FPCGPointRef> *)(puVar25 + -0x10) ==
          (ForElementType<FPCGPointRef> *)((longlong)iVar20 * 0x40 + (longlong)FVar21)) break;
      local_138._s_0.X = (double)*(undefined8 *)(puVar25 + -8);
      local_138._s_0.Y = (double)*(undefined8 *)puVar25;
      local_108 = *(undefined8 *)(puVar25 + 0x20);
      local_138._s_0.Z = (double)*(undefined8 *)(puVar25 + 8);
      local_118 = *(undefined8 *)(puVar25 + 0x10);
      local_110 = *(undefined8 *)(puVar25 + 0x18);
      local_100 = 0;
      local_138._s_0.W = 0.0;
      local_88 = local_108;
      AddElementInternal(this,param_1,pFVar17,(FBoxCenterAndExtent *)&local_138._s_0,
                         (FPCGPointRef *)(puVar25 + -0x10),param_5);
      puVar25 = puVar25 + 0x40;
    }
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPointRef>_>
                (0x40,8,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// AllocateEightNodes @ 14989e7e0

uint __thiscall
TOctree2<FPCGPointRef,FPCGPointRefSemantics>::AllocateEightNodes
          (TOctree2<FPCGPointRef,FPCGPointRefSemantics> *this)

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
    DefaultConstructItems<TOctree2<FPCGPointRef,FPCGPointRefSemantics>::FNode,int>
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
    iVar5 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                      (0x410,8,8,&(this->TreeElements).AllocatorInstance,
                       &(this->TreeElements).ArrayNum,&(this->TreeElements).ArrayMax);
    DefaultConstructItems<TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
              ((this->TreeElements).AllocatorInstance.Data + (longlong)iVar5 * 0x410,8);
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

// TOctree2<FPCGComponentRef,FPCGComponentRefSemantics> @ 149ca1d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOctree2<FPCGComponentRef,FPCGComponentRefSemantics> * __thiscall
TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::
TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>
          (TOctree2<FPCGComponentRef,FPCGComponentRefSemantics> *this,TVector<double> *param_1,
          double param_2)

{
  int *piVar1;
  TArray<TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,TAlignedHeapAllocator<8>_>
  *pTVar2;
  undefined1 auVar3 [16];
  double dVar4;
  int iVar5;
  double dVar6;
  
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  piVar1 = &(this->TreeNodes).ArrayMax;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  pTVar2 = &this->TreeElements;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Y = dVar4;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Z = dVar6;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.W = 0.0;
  auVar3._8_4_ = SUB84(param_2,0);
  auVar3._0_8_ = param_2;
  auVar3._12_4_ = (int)((ulonglong)param_2 >> 0x20);
  *(undefined1 (*) [16])&(this->RootNodeContext).Bounds.Extent.field0_0x0 = auVar3;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Z = param_2;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.W = 0.0;
  dVar6 = param_2 * __real_3fe1000000000000;
  (this->RootNodeContext).InCullBits = 0;
  (this->RootNodeContext).OutCullBits = 0;
  dVar4 = param_2 * ___real_3f408f227be81608;
  (this->RootNodeContext).ChildExtent = dVar6;
  (this->RootNodeContext).ChildCenterOffset = param_2 - dVar6;
  (this->TreeNodes).ArrayNum = 0;
  *piVar1 = 0;
  (this->ParentLinks).ArrayNum = 0;
  (this->ParentLinks).ArrayMax = 0;
  (this->TreeElements).ArrayNum = 0;
  (this->TreeElements).ArrayMax = 0;
  (this->FreeList).ArrayNum = 0;
  (this->FreeList).ArrayMax = 0;
  (this->TreeNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->FreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MinLeafExtent = dVar4;
  iVar5 = (this->TreeNodes).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->TreeNodes).AllocatorInstance,piVar1);
  }
  (this->TreeNodes).ArrayNum = iVar5 + 1;
  DefaultConstructItems<TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::FNode,int>
            ((this->TreeNodes).AllocatorInstance.Data + (longlong)iVar5 * 8,1);
  iVar5 = (this->TreeElements).ArrayNum;
  if (iVar5 == (this->TreeElements).ArrayMax) {
    iVar5 = UE::Core::Private::ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                      (0x510,8,&pTVar2->AllocatorInstance,&(this->TreeElements).ArrayMax);
  }
  (this->TreeElements).ArrayNum = iVar5 + 1;
  DefaultConstructItems<TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
            ((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x510,1);
  return this;
}

// AddElement @ 149ca9b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::AddElement
          (TOctree2<FPCGComponentRef,FPCGComponentRefSemantics> *this,FPCGComponentRef *param_1)

{
  ForElementType<FPCGComponentRef> FVar1;
  undefined1 auStackY_5a8 [32];
  TVector4<double>_u_0 local_578;
  double local_558;
  double local_550;
  double local_548;
  undefined8 local_540;
  TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_520;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  local_578._s_0.X = (param_1->Bounds).Origin.field0_0x0._s_0.X;
  local_578._s_0.Y = (param_1->Bounds).Origin.field0_0x0._s_0.Y;
  local_558 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  local_550 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  local_520.AllocatorInstance.SecondaryData = (ForElementType<FPCGComponentRef>)0x0;
  local_578._s_0.Z = (param_1->Bounds).Origin.field0_0x0._s_0.Z;
  local_548 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  local_520.ArrayNum = 0;
  local_540 = 0;
  local_578._s_0.W = 0.0;
  local_520.ArrayMax = 0x10;
  AddElementInternal(this,0,&this->RootNodeContext,(FBoxCenterAndExtent *)&local_578._s_0,param_1,
                     &local_520);
  FVar1 = (ForElementType<FPCGComponentRef>)&local_520;
  if (local_520.AllocatorInstance.SecondaryData != (ForElementType<FPCGComponentRef>)0x0) {
    FVar1 = local_520.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPCGComponentRef,int>((FPCGComponentRef *)FVar1,local_520.ArrayNum);
  if (local_520.AllocatorInstance.SecondaryData != (ForElementType<FPCGComponentRef>)0x0) {
    FMemory::Free((void *)local_520.AllocatorInstance.SecondaryData);
  }
  return;
}

// AddElementInternal @ 149ca9c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::AddElementInternal
          (TOctree2<FPCGComponentRef,FPCGComponentRefSemantics> *this,uint param_1,
          FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,FPCGComponentRef *param_4,
          TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  FOctreeElementId2 FVar16;
  FOctreeElementId2 FVar17;
  FOctreeNodeContext *pFVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  ForElementType<FPCGComponentRef> FVar22;
  uint uVar23;
  int iVar24;
  int *unaff_RBX;
  longlong lVar25;
  uchar *puVar26;
  ForElementType<FPCGComponentRef> FVar27;
  uint uVar28;
  longlong lVar29;
  double dVar30;
  uint uVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar36;
  uint uVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  uint uVar47;
  undefined4 uVar48;
  uint uVar49;
  uint uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 local_res10 [8];
  FOctreeNodeContext *local_res18;
  FBoxCenterAndExtent *local_res20;
  TVector4<double>_u_0 local_138;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  TVector4<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  undefined8 local_88;
  
  lVar29 = (longlong)(int)param_1;
  uVar28 = ~param_1 >> 0x1f;
  local_res18 = param_2;
  local_res20 = param_3;
  while( true ) {
    uVar20 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar20 = uVar28;
    }
    if ((uVar20 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->TreeNodes).AllocatorInstance.Data + lVar29 * 8 + 4;
    *(int *)pFVar1 = *(int *)pFVar1 + 1;
    iVar21 = (this->TreeNodes).ArrayNum;
    uVar20 = 0;
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
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar29 * 8) != -1) {
      dVar8 = (param_2->Bounds).Center.field0_0x0._s_0.Z;
      dVar9 = (param_2->Bounds).Center.field0_0x0._s_0.W;
      dVar30 = param_2->ChildCenterOffset;
      dVar10 = (param_2->Bounds).Center.field0_0x0._s_0.X;
      dVar11 = (param_2->Bounds).Center.field0_0x0._s_0.Y;
      dVar36 = param_2->ChildExtent;
      auVar42._8_4_ = SUB84(dVar30,0);
      auVar42._0_8_ = dVar30;
      uVar48 = (undefined4)((ulonglong)dVar30 >> 0x20);
      auVar42._12_4_ = uVar48;
      dVar12 = (local_res20->Center).field0_0x0._s_0.X;
      dVar13 = (local_res20->Center).field0_0x0._s_0.Y;
      dVar14 = (local_res20->Center).field0_0x0._s_0.Z;
      dVar15 = (local_res20->Center).field0_0x0._s_0.W;
      auVar43._0_8_ = (dVar30 + dVar8) - dVar14;
      auVar43._8_8_ = (auVar42._8_8_ + dVar9) - dVar15;
      dVar5 = dVar15 - (dVar9 - dVar30);
      auVar31._8_4_ = SUB84(dVar36,0);
      auVar31._0_8_ = dVar36;
      auVar31._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      auVar44._8_4_ = SUB84(dVar5,0);
      auVar44._0_8_ = dVar14 - (dVar8 - dVar30);
      auVar44._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar44 = minpd(auVar43,auVar44);
      auVar32._8_8_ =
           -(ulonglong)(auVar31._8_8_ < auVar44._8_8_ + (local_res20->Extent).field0_0x0._s_0.W);
      auVar32._0_8_ = -(ulonglong)(dVar36 < auVar44._0_8_ + (local_res20->Extent).field0_0x0._s_0.Z)
      ;
      uVar20 = movmskpd(iVar21,auVar32);
      auVar45._8_4_ = SUB84(dVar30,0);
      auVar45._0_8_ = dVar30;
      auVar45._12_4_ = uVar48;
      auVar46._0_8_ = (dVar30 + dVar10) - dVar12;
      auVar46._8_8_ = (auVar45._8_8_ + dVar11) - dVar13;
      dVar5 = dVar13 - (dVar11 - dVar30);
      auVar3._8_4_ = SUB84(dVar5,0);
      auVar3._0_8_ = dVar12 - (dVar10 - dVar30);
      auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar44 = minpd(auVar46,auVar3);
      lVar25 = -(ulonglong)(dVar36 < auVar44._8_8_ + (local_res20->Extent).field0_0x0._s_0.Y);
      auVar6._8_4_ = (int)lVar25;
      auVar6._0_8_ = -(ulonglong)(dVar36 < auVar44._0_8_ + (local_res20->Extent).field0_0x0._s_0.X);
      auVar6._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
      iVar21 = movmskpd((int)local_res20,auVar6);
      if ((uVar20 & 0x3fffffff) == 0 && iVar21 == 0) {
        auVar51._8_8_ = -(ulonglong)(dVar9 < dVar15);
        auVar51._0_8_ = -(ulonglong)(dVar8 < dVar14);
        iVar24 = movmskpd((int)unaff_RBX,auVar51);
        auVar7._8_4_ = (int)-(ulonglong)(dVar11 < dVar13);
        auVar7._0_8_ = -(ulonglong)(dVar10 < dVar12);
        auVar7._12_4_ = (int)(-(ulonglong)(dVar11 < dVar13) >> 0x20);
        uVar20 = movmskpd(iVar21,auVar7);
        uVar23 = (iVar24 << 2 | uVar20) & 7;
        uVar20 = 0;
        if ((int)param_1 < (this->TreeNodes).ArrayNum) {
          uVar20 = uVar28;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar49 = SUB84(param_2->ChildCenterOffset,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar50 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        dVar30 = (double)(float)-(uint)((uVar23 & ___xmm_00000008000000040000000200000001) ==
                                       ___xmm_00000008000000040000000200000001);
        dVar36 = (double)(float)-(uint)((uVar23 & _UNK_150744154) == _UNK_150744154);
        uVar28 = SUB84(dVar30,0);
        uVar20 = (uint)((ulonglong)dVar30 >> 0x20);
        uVar35 = SUB84(dVar36,0);
        uVar37 = (uint)((ulonglong)dVar36 >> 0x20);
        auVar33._0_4_ = ~uVar28 & uVar49;
        auVar33._4_4_ = ~uVar20 & uVar50;
        auVar33._8_4_ = ~uVar35 & uVar49;
        auVar33._12_4_ = ~uVar37 & uVar50;
        dVar30 = (double)(float)-(uint)((uVar23 & _UNK_150744158) == _UNK_150744158);
        uVar38 = SUB84(dVar30,0);
        uVar39 = (uint)((ulonglong)dVar30 >> 0x20);
        dVar30 = (double)(float)-(uint)((uVar23 & _UNK_15074415c) == _UNK_15074415c);
        uVar40 = SUB84(dVar30,0);
        uVar41 = (uint)((ulonglong)dVar30 >> 0x20);
        uVar47 = SUB84(param_2->ChildCenterOffset,0);
        auVar52._0_4_ = uVar28 & uVar47;
        uVar28 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20);
        auVar52._4_4_ = uVar20 & uVar28;
        auVar52._8_4_ = uVar35 & uVar47;
        auVar52._12_4_ = uVar37 & uVar28;
        local_f8._s_0.X = SUB168(auVar52 | auVar33,0) + (param_2->Bounds).Center.field0_0x0._s_0.X;
        local_f8._s_0.Y = SUB168(auVar52 | auVar33,8) + (param_2->Bounds).Center.field0_0x0._s_0.Y;
        auVar34._0_4_ = uVar38 & uVar47;
        auVar34._4_4_ = uVar39 & uVar28;
        auVar34._8_4_ = uVar40 & uVar47;
        auVar34._12_4_ = uVar41 & uVar28;
        auVar4._4_4_ = ~uVar39 & uVar50;
        auVar4._0_4_ = ~uVar38 & uVar49;
        auVar4._8_4_ = ~uVar40 & uVar49;
        auVar4._12_4_ = ~uVar41 & uVar50;
        local_b0 = param_2->ChildExtent;
        local_f8._s_0.Z =
             (SUB168(auVar34 | auVar4,0) + (param_2->Bounds).Center.field0_0x0._s_0.Z) *
             (double)_UNK_150689548;
        local_f8._s_0.W =
             (SUB168(auVar34 | auVar4,8) + (param_2->Bounds).Center.field0_0x0._s_0.W) *
             (double)_UNK_15068954c;
        dVar30 = (double)_UNK_15068954c * local_b0;
        local_b8 = local_b0 * __real_3fe0000000000000 * __real_3ff1000000000000;
        local_d8._8_4_ = SUB84(local_b0,0);
        local_d8._0_8_ = local_b0;
        local_d8._12_4_ = (int)((ulonglong)local_b0 >> 0x20);
        local_c8._8_4_ = SUB84(dVar30,0);
        local_c8._0_8_ = (double)_UNK_150689548 * local_b0;
        local_c8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        local_b0 = local_b0 - local_b8;
        AddElementInternal(this,*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar29 * 8) +
                                uVar23,(FOctreeNodeContext *)&local_f8._s_0,local_res20,param_4,
                           param_5);
      }
      else {
        uVar20 = 0;
        if ((int)param_1 < (this->TreeElements).ArrayNum) {
          uVar20 = uVar28;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar27 = (ForElementType<FPCGComponentRef>)
                 (lVar29 * 0x510 + (longlong)(this->TreeElements).AllocatorInstance.Data);
        iVar21 = *(int *)((ForElementType<FPCGComponentRef> *)((longlong)FVar27 + 0x508))->
                         InlineData;
        if (iVar21 == *(int *)((longlong)FVar27 + 0x50c)) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>_>
                             (0x850,(ForElementType<FPCGComponentRef> *)FVar27,
                              (int *)((longlong)FVar27 + 0x50c));
        }
        *(int *)((ForElementType<FPCGComponentRef> *)((longlong)FVar27 + 0x508))->InlineData =
             iVar21 + 1;
        FVar22 = *(ForElementType<FPCGComponentRef> *)((longlong)FVar27 + 0x500);
        if (*(ForElementType<FPCGComponentRef> *)((longlong)FVar27 + 0x500) ==
            (ForElementType<FPCGComponentRef>)0x0) {
          FVar22 = FVar27;
        }
        FPCGComponentRef::FPCGComponentRef
                  ((FPCGComponentRef *)((longlong)FVar22 + (longlong)iVar21 * 0x50),param_4);
        FVar17.ElementIndex = iVar21;
        FVar17.NodeIndex = param_1;
        ((param_4->IdShared).Object)->Id = FVar17;
      }
      return;
    }
    uVar20 = 0;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar20 = uVar28;
    }
    if ((uVar20 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar25 = lVar29 * 0x510;
    if ((*(int *)((this->TreeElements).AllocatorInstance.Data + lVar25 + 0x508) + 1 < 0x11) ||
       ((param_2->Bounds).Extent.field0_0x0._s_0.X <= this->MinLeafExtent)) {
      uVar20 = 0;
      if ((int)param_1 < (this->TreeElements).ArrayNum) {
        uVar20 = uVar28;
      }
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar27 = (ForElementType<FPCGComponentRef>)
               (lVar25 + (longlong)(this->TreeElements).AllocatorInstance.Data);
      iVar21 = *(int *)((ForElementType<FPCGComponentRef> *)((longlong)FVar27 + 0x508))->InlineData;
      if (iVar21 == *(int *)((longlong)FVar27 + 0x50c)) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>_>
                           (0x850,(ForElementType<FPCGComponentRef> *)FVar27,
                            (int *)((longlong)FVar27 + 0x50c));
      }
      *(int *)((ForElementType<FPCGComponentRef> *)((longlong)FVar27 + 0x508))->InlineData =
           iVar21 + 1;
      FVar22 = *(ForElementType<FPCGComponentRef> *)((longlong)FVar27 + 0x500);
      if (*(ForElementType<FPCGComponentRef> *)((longlong)FVar27 + 0x500) ==
          (ForElementType<FPCGComponentRef>)0x0) {
        FVar22 = FVar27;
      }
      FPCGComponentRef::FPCGComponentRef
                ((FPCGComponentRef *)((longlong)FVar22 + (longlong)iVar21 * 0x50),param_4);
      FVar16.ElementIndex = iVar21;
      FVar16.NodeIndex = param_1;
      ((param_4->IdShared).Object)->Id = FVar16;
      return;
    }
    uVar20 = 0;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar20 = uVar28;
    }
    if ((uVar20 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) break;
    TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::operator=
              (param_5,(TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                        *)((this->TreeElements).AllocatorInstance.Data + lVar25));
    uVar20 = AllocateEightNodes(this);
    uVar23 = uVar20 - 1 >> 3;
    if (((this->ParentLinks).ArrayNum <= (int)uVar23) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(uint *)((this->ParentLinks).AllocatorInstance.Data + (ulonglong)uVar23 * 4) = param_1;
    uVar23 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar23 = uVar28;
    }
    if ((uVar23 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar29 * 8) = uVar20;
    uVar20 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar20 = uVar28;
    }
    if ((uVar20 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar18 = local_res18;
    *(undefined4 *)((this->TreeNodes).AllocatorInstance.Data + lVar29 * 8 + 4) = 0;
    FVar27 = (param_5->AllocatorInstance).SecondaryData;
    iVar21 = param_5->ArrayNum;
    FVar22 = (ForElementType<FPCGComponentRef>)param_5;
    if (FVar27 != (ForElementType<FPCGComponentRef>)0x0) {
      FVar22 = FVar27;
    }
    puVar26 = (uchar *)((longlong)FVar22 + 0x20);
    while( true ) {
      if (param_5->ArrayNum != iVar21) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FPCGComponentRef,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if ((ForElementType<FPCGComponentRef> *)(puVar26 + -0x20) ==
          (ForElementType<FPCGComponentRef> *)((longlong)iVar21 * 0x50 + (longlong)FVar22)) break;
      local_138._s_0.X = (double)*(undefined8 *)(puVar26 + -8);
      local_138._s_0.Y = (double)*(undefined8 *)puVar26;
      local_108 = *(undefined8 *)(puVar26 + 0x20);
      local_138._s_0.Z = (double)*(undefined8 *)(puVar26 + 8);
      local_118 = *(undefined8 *)(puVar26 + 0x10);
      local_110 = *(undefined8 *)(puVar26 + 0x18);
      local_100 = 0;
      local_138._s_0.W = 0.0;
      local_88 = local_108;
      AddElementInternal(this,param_1,pFVar18,(FBoxCenterAndExtent *)&local_138._s_0,
                         (FPCGComponentRef *)(puVar26 + -0x20),param_5);
      puVar26 = puVar26 + 0x50;
    }
    unaff_RBX = &param_5->ArrayMax;
    FVar27 = (param_5->AllocatorInstance).SecondaryData;
    if (*unaff_RBX < 0) {
      FVar22 = (ForElementType<FPCGComponentRef>)param_5;
      if (FVar27 != (ForElementType<FPCGComponentRef>)0x0) {
        FVar22 = FVar27;
      }
      DestructItems<FPCGComponentRef,int>((FPCGComponentRef *)FVar22,param_5->ArrayNum);
      param_2 = local_res18;
      param_5->ArrayNum = 0;
      if (*unaff_RBX != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>_>
                  (0x50,8,0,&param_5->AllocatorInstance,0,unaff_RBX);
      }
    }
    else {
      FVar22 = (ForElementType<FPCGComponentRef>)param_5;
      if (FVar27 != (ForElementType<FPCGComponentRef>)0x0) {
        FVar22 = FVar27;
      }
      DestructItems<FPCGComponentRef,int>((FPCGComponentRef *)FVar22,param_5->ArrayNum);
      param_5->ArrayNum = 0;
      param_2 = local_res18;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// AllocateEightNodes @ 149cac1a0

uint __thiscall
TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::AllocateEightNodes
          (TOctree2<FPCGComponentRef,FPCGComponentRefSemantics> *this)

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
    DefaultConstructItems<TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::FNode,int>
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
    iVar5 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                      (0x510,8,8,&(this->TreeElements).AllocatorInstance,
                       &(this->TreeElements).ArrayNum,&(this->TreeElements).ArrayMax);
    DefaultConstructItems<TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
              ((this->TreeElements).AllocatorInstance.Data + (longlong)iVar5 * 0x510,8);
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

// CollapseNodesInternal @ 149cb5770

void __thiscall
TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::CollapseNodesInternal
          (TOctree2<FPCGComponentRef,FPCGComponentRefSemantics> *this,uint param_1,
          TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  uchar *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FPCGComponentRef> FVar7;
  TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *_Src;
  byte bVar8;
  TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar10;
  ForElementType<FPCGComponentRef> FVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar9;
  
  lVar13 = (longlong)(int)param_1;
  uVar12 = ~param_1 >> 0x1f;
  uVar5 = 0;
  if ((int)param_1 < (this->TreeElements).ArrayNum) {
    uVar5 = uVar12;
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
  pTVar10 = (TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
            ((this->TreeElements).AllocatorInstance.Data + lVar13 * 0x510);
  if (param_2 == pTVar10) {
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
  iVar2 = pTVar10->ArrayNum;
  if (iVar2 != 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>_>
                      (0x50,8,iVar2,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    FVar7 = (param_2->AllocatorInstance).SecondaryData;
    _Src = *(TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> **)
            &(pTVar10->AllocatorInstance).SecondaryData.field_0x0;
    if (_Src == (TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
      _Src = pTVar10;
    }
    FVar11 = (ForElementType<FPCGComponentRef>)param_2;
    if (FVar7 != (ForElementType<FPCGComponentRef>)0x0) {
      FVar11 = FVar7;
    }
    memmove((void *)((longlong)iVar6 * 0x50 + (longlong)FVar11),_Src,(longlong)iVar2 * 0x50);
    pTVar10->ArrayNum = 0;
  }
  uVar5 = 0;
  if ((int)param_1 < (this->TreeElements).ArrayNum) {
    uVar5 = uVar12;
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
  FVar11 = (ForElementType<FPCGComponentRef>)
           ((longlong)(this->TreeElements).AllocatorInstance.Data + lVar13 * 0x510);
  iVar2 = *(int *)((ForElementType<FPCGComponentRef> *)((longlong)FVar11 + 0x508))->InlineData;
  puVar1 = (uchar *)((longlong)FVar11 + 0x50c);
  FVar7 = *(ForElementType<FPCGComponentRef> *)((longlong)FVar11 + 0x500);
  if (*(int *)puVar1 < 0) {
    if (FVar7 == (ForElementType<FPCGComponentRef>)0x0) {
      FVar7 = FVar11;
    }
    DestructItems<FPCGComponentRef,int>((FPCGComponentRef *)FVar7,iVar2);
    *(undefined4 *)((longlong)FVar11 + 0x508) = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>_>
                (0x50,8,0,(ForElementType<FPCGComponentRef> *)FVar11,0,(int *)puVar1);
    }
  }
  else {
    if (FVar7 == (ForElementType<FPCGComponentRef>)0x0) {
      FVar7 = FVar11;
    }
    DestructItems<FPCGComponentRef,int>((FPCGComponentRef *)FVar7,iVar2);
    *(undefined4 *)((longlong)FVar11 + 0x508) = 0;
  }
  uVar5 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar5 = uVar12;
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
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar13 * 8) != -1) {
    uVar5 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar5 = uVar12;
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
    uVar9 = 0;
    uVar5 = *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar13 * 8);
    do {
      CollapseNodesInternal(this,uVar9 + uVar5,param_2);
      bVar8 = (char)uVar9 + 1;
      uVar9 = (uint)bVar8;
    } while ((char)bVar8 < '\b');
    uVar9 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar9 = uVar12;
    }
    if (uVar9 == 0) {
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
    *(undefined4 *)((this->TreeNodes).AllocatorInstance.Data + lVar13 * 8) = 0xffffffff;
    FreeEightNodes(this,uVar5);
  }
  return;
}

// FreeEightNodes @ 149cc5b40

void __thiscall
TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::FreeEightNodes
          (TOctree2<FPCGComponentRef,FPCGComponentRefSemantics> *this,uint param_1)

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

// GetElementById @ 149cc7740

FPCGComponentRef * __thiscall
TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::GetElementById
          (TOctree2<FPCGComponentRef,FPCGComponentRefSemantics> *this,FOctreeElementId2 param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGComponentRef *pFVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  int iStackX_14;
  
  uVar5 = param_1.NodeIndex;
  if ((int)uVar5 < 0 || (this->TreeElements).ArrayNum <= (int)uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGComponentRef *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar6 = (this->TreeElements).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x510;
  iStackX_14 = param_1.ElementIndex;
  if ((longlong)param_1 < 0 || *(int *)(pFVar6 + 0x508) <= iStackX_14) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGComponentRef *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = *(FScriptContainerElement **)(pFVar6 + 0x500);
  if (*(FScriptContainerElement **)(pFVar6 + 0x500) == (FScriptContainerElement *)0x0) {
    pFVar4 = pFVar6;
  }
  return (FPCGComponentRef *)(pFVar4 + (longlong)iStackX_14 * 0x50);
}

// RemoveElement @ 149cd73c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::RemoveElement
          (TOctree2<FPCGComponentRef,FPCGComponentRefSemantics> *this,FOctreeElementId2 param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForElementType<FPCGComponentRef> FVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar18;
  bool bVar19;
  int iStackX_14;
  undefined1 auStackY_588 [32];
  TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_550;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_588;
  uVar9 = param_1.NodeIndex;
  bVar19 = (int)uVar9 < 0;
  if ((bVar19 || (this->TreeElements).ArrayNum <= (int)uVar9) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStackX_14 = param_1.ElementIndex;
  lVar15 = (longlong)(int)uVar9 * 0x510;
  pTVar18 = (TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
            ((this->TreeElements).AllocatorInstance.Data + lVar15);
  if (((longlong)param_1 < 0 || pTVar18->ArrayNum <= iStackX_14) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::
  RemoveAtSwapImpl(pTVar18,iStackX_14);
  if ((bVar19 || (this->TreeElements).ArrayNum <= (int)uVar9) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iStackX_14 < *(int *)((this->TreeElements).AllocatorInstance.Data + lVar15 + 0x508)) {
    if ((bVar19 || (this->TreeElements).ArrayNum <= (int)uVar9) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar11 = (this->TreeElements).AllocatorInstance.Data + lVar15;
    if (((longlong)param_1 < 0 || *(int *)(pFVar11 + 0x508) <= iStackX_14) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = *(FScriptContainerElement **)(pFVar11 + 0x500);
    if (*(FScriptContainerElement **)(pFVar11 + 0x500) == (FScriptContainerElement *)0x0) {
      pFVar5 = pFVar11;
    }
    *(FOctreeElementId2 *)(*(longlong *)(pFVar5 + (longlong)iStackX_14 * 0x50) + 0x10) = param_1;
  }
  uVar10 = 0;
  uVar16 = 0xffffffff;
  while( true ) {
    uVar8 = param_1.NodeIndex;
    uVar9 = 0;
    if ((int)uVar8 < (this->TreeNodes).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar11 = (this->TreeNodes).AllocatorInstance.Data + (longlong)(int)uVar8 * 8 + 4;
    *(int *)pFVar11 = *(int *)pFVar11 + -1;
    uVar4 = 0;
    uVar9 = uVar4;
    if ((int)uVar8 < (this->TreeNodes).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar9 = uVar8;
    if (6 < *(uint *)((this->TreeNodes).AllocatorInstance.Data + (longlong)(int)uVar8 * 8 + 4)) {
      uVar9 = (uint)uVar16;
    }
    uVar16 = (ulonglong)uVar9;
    if (uVar8 == 0) break;
    uVar9 = uVar8 - 1 >> 3;
    if (((this->ParentLinks).ArrayNum <= (int)uVar9) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_1.ElementIndex = 0;
    param_1.NodeIndex = *(uint *)((this->ParentLinks).AllocatorInstance.Data + (ulonglong)uVar9 * 4)
    ;
  }
  if (uVar9 != 0xffffffff) {
    uVar17 = ~uVar9 >> 0x1f;
    uVar8 = uVar4;
    if ((int)uVar9 < (this->TreeNodes).ArrayNum) {
      uVar8 = uVar17;
    }
    if ((uVar8 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar15 = (longlong)(int)uVar9;
    if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar15 * 8) != -1) {
      uVar8 = uVar4;
      if ((int)uVar9 < (this->TreeElements).ArrayNum) {
        uVar8 = uVar17;
      }
      if ((uVar8 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = (this->TreeElements).AllocatorInstance.Data;
      if ((int)uVar9 < (this->TreeNodes).ArrayNum) {
        uVar4 = uVar17;
      }
      if ((uVar4 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar13 = lVar15 * 0x510;
      if (*(int *)(pFVar11 + lVar13 + 0x508) <
          *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar15 * 8 + 4)) {
        local_550.AllocatorInstance.SecondaryData = (ForElementType<FPCGComponentRef>)0x0;
        local_550.ArrayNum = 0;
        uVar8 = 0;
        if ((int)uVar9 < (this->TreeNodes).ArrayNum) {
          uVar8 = uVar17;
        }
        local_550.ArrayMax = 0x10;
        if ((uVar8 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar8 = *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar15 * 8 + 4);
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
        }
        if (local_550.ArrayMax < (int)uVar8) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>_>
                    (0x50,8,uVar8,&local_550.AllocatorInstance,local_550.ArrayNum,
                     &local_550.ArrayMax);
        }
        CollapseNodesInternal(this,uVar9,&local_550);
        uVar8 = 0;
        if ((int)uVar9 < (this->TreeElements).ArrayNum) {
          uVar8 = uVar17;
        }
        if ((uVar8 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar18 = (TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                   *)((this->TreeElements).AllocatorInstance.Data + lVar13);
        uVar14 = uVar10;
        if (pTVar18 != &local_550) {
          pTVar6 = *(TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                     **)&(pTVar18->AllocatorInstance).SecondaryData.field_0x0;
          if (pTVar6 == (TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                         *)0x0) {
            pTVar6 = pTVar18;
          }
          DestructItems<FPCGComponentRef,int>
                    ((FPCGComponentRef *)pTVar6,*(int *)(&pTVar18->AllocatorInstance + 1));
          if (local_550.AllocatorInstance.SecondaryData == (ForElementType<FPCGComponentRef>)0x0) {
            memmove(pTVar18,&local_550,0x500);
          }
          pvVar1 = *(void **)&(pTVar18->AllocatorInstance).SecondaryData.field_0x0;
          if (pvVar1 != (void *)0x0) {
            FMemory::Free(pvVar1);
          }
          *(ForElementType<FPCGComponentRef> *)&(pTVar18->AllocatorInstance).SecondaryData.field_0x0
               = local_550.AllocatorInstance.SecondaryData;
          local_550.AllocatorInstance.SecondaryData = (ForElementType<FPCGComponentRef>)0x0;
          *(int *)(&pTVar18->AllocatorInstance + 1) = local_550.ArrayNum;
          *(int *)((longlong)(&pTVar18->AllocatorInstance + 1) + 4) = local_550.ArrayMax;
          local_550.ArrayNum = 0;
          local_550.ArrayMax = 0x10;
        }
        while( true ) {
          uVar8 = 0;
          if ((int)uVar9 < (this->TreeElements).ArrayNum) {
            uVar8 = uVar17;
          }
          if ((uVar8 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar8 = (uint)uVar10;
          if (*(int *)((this->TreeElements).AllocatorInstance.Data + lVar13 + 0x508) <= (int)uVar8)
          break;
          uVar12 = uVar10 << 0x20;
          uVar4 = 0;
          if ((int)uVar9 < (this->TreeElements).ArrayNum) {
            uVar4 = uVar17;
          }
          if ((uVar4 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar11 = (this->TreeElements).AllocatorInstance.Data + lVar13;
          uVar4 = 0;
          if ((int)uVar8 < *(int *)(pFVar11 + 0x508)) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(FScriptContainerElement **)(pFVar11 + 0x500) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar11 + 0x500);
          }
          uVar10 = (ulonglong)(uVar8 + 1);
          *(ulonglong *)(*(longlong *)(pFVar11 + uVar14) + 0x10) = uVar12 | uVar16;
          uVar14 = uVar14 + 0x50;
        }
        FVar7 = (ForElementType<FPCGComponentRef>)&local_550;
        if (local_550.AllocatorInstance.SecondaryData != (ForElementType<FPCGComponentRef>)0x0) {
          FVar7 = local_550.AllocatorInstance.SecondaryData;
        }
        DestructItems<FPCGComponentRef,int>((FPCGComponentRef *)FVar7,local_550.ArrayNum);
        if (local_550.AllocatorInstance.SecondaryData != (ForElementType<FPCGComponentRef>)0x0) {
          FMemory::Free((void *)local_550.AllocatorInstance.SecondaryData);
        }
      }
    }
  }
  return;
}

