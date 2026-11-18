// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 10

// ~TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> @ 146d77660

void __thiscall
TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::
~TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
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

// AddElementInternal @ 146d80370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::AddElementInternal
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *this,uint param_1,
          FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,FNavigationOctreeElement *param_4
          ,TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *param_5)

{
  int *piVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  FOctreeNodeContext *pFVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  FNavigationElementHandle *pFVar23;
  int iVar24;
  longlong lVar25;
  TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
  *pTVar26;
  uint uVar27;
  longlong lVar28;
  ForElementType<FNavigationOctreeElement> FVar29;
  ForElementType<FNavigationOctreeElement> FVar30;
  uint uVar31;
  double dVar32;
  uint uVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar38;
  uint uVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar40;
  uint uVar41;
  undefined4 uVar42;
  uint uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  uint uVar51;
  uint uVar52;
  uint uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 local_res10 [8];
  FOctreeNodeContext *local_res18;
  FBoxCenterAndExtent *local_res20;
  undefined1 local_1b4 [12];
  FOctreeElementId2 *local_1a8;
  undefined8 local_1a0;
  FWeakObjectPtr *local_198;
  FOctreeElementId2 **local_190;
  FWeakObjectPtr *local_188;
  undefined8 *local_180;
  TVector4<double>_u_0 local_178;
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  FWeakObjectPtr local_138;
  ulong64 uStack_130;
  FWeakObjectPtr local_128;
  ulong64 uStack_120;
  TVector4<double>_u_0 local_118;
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  FNavigationElementHandle local_b8;
  FNavigationElementHandle local_a8 [2];
  undefined8 local_88;
  
  uVar31 = ~param_1 >> 0x1f;
  local_res18 = param_2;
  local_res20 = param_3;
  while( true ) {
    lVar25 = (longlong)(int)param_1;
    uVar21 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar21 = uVar31;
    }
    if ((uVar21 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->TreeNodes).AllocatorInstance.Data + lVar25 * 8 + 4;
    *(int *)pFVar3 = *(int *)pFVar3 + 1;
    iVar22 = (this->TreeNodes).ArrayNum;
    uVar21 = 0;
    if ((int)param_1 < iVar22) {
      uVar21 = uVar31;
    }
    if (uVar21 == 0) {
      iVar22 = 0x506106c8;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar20) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar19 = local_res18;
    if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar25 * 8) != -1) {
      dVar11 = (local_res20->Center).field0_0x0._s_0.Z;
      dVar12 = (local_res20->Center).field0_0x0._s_0.W;
      dVar13 = (local_res18->Bounds).Center.field0_0x0._s_0.Z;
      dVar14 = (local_res18->Bounds).Center.field0_0x0._s_0.W;
      dVar15 = (local_res20->Center).field0_0x0._s_0.X;
      dVar16 = (local_res20->Center).field0_0x0._s_0.Y;
      dVar32 = local_res18->ChildCenterOffset;
      dVar17 = (local_res18->Bounds).Center.field0_0x0._s_0.X;
      dVar18 = (local_res18->Bounds).Center.field0_0x0._s_0.Y;
      dVar38 = local_res18->ChildExtent;
      auVar45._8_4_ = SUB84(dVar32,0);
      auVar45._0_8_ = dVar32;
      uVar42 = (undefined4)((ulonglong)dVar32 >> 0x20);
      auVar45._12_4_ = uVar42;
      dVar8 = dVar12 - (dVar14 - dVar32);
      auVar46._0_8_ = (dVar32 + dVar13) - dVar11;
      auVar46._8_8_ = (auVar45._8_8_ + dVar14) - dVar12;
      auVar33._8_4_ = SUB84(dVar38,0);
      auVar33._0_8_ = dVar38;
      auVar33._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      auVar47._8_4_ = SUB84(dVar8,0);
      auVar47._0_8_ = dVar11 - (dVar13 - dVar32);
      auVar47._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar47 = minpd(auVar46,auVar47);
      auVar34._8_8_ =
           -(ulonglong)(auVar33._8_8_ < auVar47._8_8_ + (local_res20->Extent).field0_0x0._s_0.W);
      auVar34._0_8_ = -(ulonglong)(dVar38 < auVar47._0_8_ + (local_res20->Extent).field0_0x0._s_0.Z)
      ;
      uVar21 = movmskpd(iVar22,auVar34);
      auVar48._8_4_ = SUB84(dVar32,0);
      auVar48._0_8_ = dVar32;
      auVar48._12_4_ = uVar42;
      auVar49._0_8_ = (dVar32 + dVar17) - dVar15;
      auVar49._8_8_ = (auVar48._8_8_ + dVar18) - dVar16;
      dVar8 = dVar16 - (dVar18 - dVar32);
      auVar6._8_4_ = SUB84(dVar8,0);
      auVar6._0_8_ = dVar15 - (dVar17 - dVar32);
      auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar47 = minpd(auVar49,auVar6);
      lVar28 = -(ulonglong)(dVar38 < auVar47._8_8_ + (local_res20->Extent).field0_0x0._s_0.Y);
      auVar9._8_4_ = (int)lVar28;
      auVar9._0_8_ = -(ulonglong)(dVar38 < auVar47._0_8_ + (local_res20->Extent).field0_0x0._s_0.X);
      auVar9._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
      iVar22 = movmskpd((int)local_res20,auVar9);
      if ((uVar21 & 0x3fffffff) == 0 && iVar22 == 0) {
        auVar54._8_8_ = -(ulonglong)(dVar14 < dVar12);
        auVar54._0_8_ = -(ulonglong)(dVar13 < dVar11);
        iVar24 = movmskpd(0,auVar54);
        auVar10._8_4_ = (int)-(ulonglong)(dVar18 < dVar16);
        auVar10._0_8_ = -(ulonglong)(dVar17 < dVar15);
        auVar10._12_4_ = (int)(-(ulonglong)(dVar18 < dVar16) >> 0x20);
        uVar21 = movmskpd(iVar22,auVar10);
        uVar27 = (iVar24 << 2 | uVar21) & 7;
        uVar21 = 0;
        if ((int)param_1 < (this->TreeNodes).ArrayNum) {
          uVar21 = uVar31;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar52 = SUB84(pFVar19->ChildCenterOffset,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar53 = (uint)((ulonglong)pFVar19->ChildCenterOffset >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        dVar32 = (double)(float)-(uint)((uVar27 & ___xmm_00000008000000040000000200000001) ==
                                       ___xmm_00000008000000040000000200000001);
        dVar38 = (double)(float)-(uint)((uVar27 & _UNK_150744154) == _UNK_150744154);
        uVar31 = SUB84(dVar32,0);
        uVar21 = (uint)((ulonglong)dVar32 >> 0x20);
        uVar37 = SUB84(dVar38,0);
        uVar39 = (uint)((ulonglong)dVar38 >> 0x20);
        dVar32 = (double)(float)-(uint)((uVar27 & _UNK_150744158) == _UNK_150744158);
        uVar40 = SUB84(dVar32,0);
        uVar41 = (uint)((ulonglong)dVar32 >> 0x20);
        dVar32 = (double)(float)-(uint)((uVar27 & _UNK_15074415c) == _UNK_15074415c);
        uVar43 = SUB84(dVar32,0);
        uVar44 = (uint)((ulonglong)dVar32 >> 0x20);
        auVar35._0_4_ = ~uVar31 & uVar52;
        auVar35._4_4_ = ~uVar21 & uVar53;
        auVar35._8_4_ = ~uVar37 & uVar52;
        auVar35._12_4_ = ~uVar39 & uVar53;
        uVar51 = SUB84(pFVar19->ChildCenterOffset,0);
        auVar55._0_4_ = uVar31 & uVar51;
        uVar31 = (uint)((ulonglong)pFVar19->ChildCenterOffset >> 0x20);
        auVar55._4_4_ = uVar21 & uVar31;
        auVar55._8_4_ = uVar37 & uVar51;
        auVar55._12_4_ = uVar39 & uVar31;
        local_118._s_0.X = SUB168(auVar55 | auVar35,0) + (pFVar19->Bounds).Center.field0_0x0._s_0.X;
        local_118._s_0.Y = SUB168(auVar55 | auVar35,8) + (pFVar19->Bounds).Center.field0_0x0._s_0.Y;
        auVar50._0_4_ = uVar40 & uVar51;
        auVar50._4_4_ = uVar41 & uVar31;
        auVar50._8_4_ = uVar43 & uVar51;
        auVar50._12_4_ = uVar44 & uVar31;
        auVar7._4_4_ = ~uVar41 & uVar53;
        auVar7._0_4_ = ~uVar40 & uVar52;
        auVar7._8_4_ = ~uVar43 & uVar52;
        auVar7._12_4_ = ~uVar44 & uVar53;
        local_d0 = pFVar19->ChildExtent;
        uVar42 = (undefined4)((ulonglong)local_d0 >> 0x20);
        auVar36._8_4_ = SUB84(local_d0,0);
        auVar36._0_8_ = local_d0;
        auVar36._12_4_ = uVar42;
        local_f8._8_4_ = SUB84(local_d0,0);
        local_f8._0_8_ = local_d0;
        local_f8._12_4_ = uVar42;
        local_e8 = local_d0 * (double)_UNK_150689548;
        dStack_e0 = auVar36._8_8_ * (double)_UNK_15068954c;
        local_118._s_0.Z =
             (SUB168(auVar50 | auVar7,0) + (pFVar19->Bounds).Center.field0_0x0._s_0.Z) *
             (double)_UNK_150689548;
        local_118._s_0.W =
             (SUB168(auVar50 | auVar7,8) + (pFVar19->Bounds).Center.field0_0x0._s_0.W) *
             (double)_UNK_15068954c;
        local_d8 = local_d0 * __real_3fe0000000000000 * __real_3ff1000000000000;
        local_d0 = local_d0 - local_d8;
        AddElementInternal(this,*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar25 * 8) +
                                uVar27,(FOctreeNodeContext *)&local_118._s_0,local_res20,param_4,
                           param_5);
      }
      else {
        uVar21 = 0;
        if ((int)param_1 < (this->TreeElements).ArrayNum) {
          uVar21 = uVar31;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar30 = (ForElementType<FNavigationOctreeElement>)
                 (lVar25 * 0x490 + (longlong)(this->TreeElements).AllocatorInstance.Data);
        iVar22 = *(int *)((ForElementType<FNavigationOctreeElement> *)((longlong)FVar30 + 0x488))->
                         InlineData;
        if (iVar22 == *(int *)((longlong)FVar30 + 0x48c)) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationOctreeElement>_>
                             (0x848,(ForElementType<FNavigationOctreeElement> *)FVar30,
                              (int *)((longlong)FVar30 + 0x48c));
        }
        *(int *)((ForElementType<FNavigationOctreeElement> *)((longlong)FVar30 + 0x488))->InlineData
             = iVar22 + 1;
        lVar25 = (longlong)iVar22;
        FVar29 = *(ForElementType<FNavigationOctreeElement> *)((longlong)FVar30 + 0x480);
        if (*(ForElementType<FNavigationOctreeElement> *)((longlong)FVar30 + 0x480) ==
            (ForElementType<FNavigationOctreeElement>)0x0) {
          FVar29 = FVar30;
        }
        dVar32 = (param_4->Bounds).Origin.field0_0x0._s_0.Y;
        pdVar2 = (double *)((longlong)FVar29 + lVar25 * 0x48);
        *pdVar2 = (param_4->Bounds).Origin.field0_0x0._s_0.X;
        pdVar2[1] = dVar32;
        dVar32 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.X;
        pdVar2 = (double *)((longlong)FVar29 + 0x10 + lVar25 * 0x48);
        *pdVar2 = (param_4->Bounds).Origin.field0_0x0._s_0.Z;
        pdVar2[1] = dVar32;
        dVar32 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.Z;
        pdVar2 = (double *)((longlong)FVar29 + 0x20 + lVar25 * 0x48);
        *pdVar2 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.Y;
        pdVar2[1] = dVar32;
        *(double *)((longlong)FVar29 + 0x30 + lVar25 * 0x48) = (param_4->Bounds).SphereRadius;
        *(FNavigationRelevantData **)((longlong)FVar29 + 0x38 + lVar25 * 0x48) =
             (param_4->Data).Object;
        pTVar4 = (param_4->Data).SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)((longlong)FVar29 + 0x40 + lVar25 * 0x48) = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar23 = FNavigationElement::GetHandle
                            ((((param_4->Data).Object)->SourceElement).Object,local_a8);
        local_1a0 = CONCAT44(iVar22,param_1);
        local_128 = (pFVar23->OwnerUObject).WeakPtr;
        uStack_120 = pFVar23->SubElementId;
        local_188 = &local_128;
        pTVar26 = (TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
                   *)((longlong)&this[1].RootNodeContext.Bounds.Extent.field0_0x0 + 0x18);
        local_180 = &local_1a0;
        if (this == (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)0x0) {
          pTVar26 = (TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
                     *)&DAT_000000f8;
        }
        TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FNavigationElementHandle_const_&,FOctreeElementId2_const_&>_>
                  (pTVar26,(TPairInitializer<FNavigationElementHandle_const_&,FOctreeElementId2_const_&>
                            *)(local_1b4 + 4),(bool *)&local_188);
      }
      return;
    }
    uVar21 = 0;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar21 = uVar31;
    }
    if ((uVar21 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar28 = lVar25 * 0x490;
    if ((*(int *)((this->TreeElements).AllocatorInstance.Data + lVar28 + 0x488) + 1 < 0x11) ||
       ((local_res18->Bounds).Extent.field0_0x0._s_0.X <= this->MinLeafExtent)) break;
    uVar21 = 0;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar21 = uVar31;
    }
    if ((uVar21 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::
    operator=(param_5,(TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                       *)((this->TreeElements).AllocatorInstance.Data + lVar28));
    uVar21 = AllocateEightNodes(this);
    uVar27 = uVar21 - 1 >> 3;
    if (((this->ParentLinks).ArrayNum <= (int)uVar27) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(uint *)((this->ParentLinks).AllocatorInstance.Data + (ulonglong)uVar27 * 4) = param_1;
    uVar27 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar27 = uVar31;
    }
    if ((uVar27 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar25 * 8) = uVar21;
    uVar21 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar21 = uVar31;
    }
    if ((uVar21 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)((this->TreeNodes).AllocatorInstance.Data + lVar25 * 8 + 4) = 0;
    FVar30 = (param_5->AllocatorInstance).SecondaryData;
    iVar22 = param_5->ArrayNum;
    FVar29 = (ForElementType<FNavigationOctreeElement>)param_5;
    if (FVar30 != (ForElementType<FNavigationOctreeElement>)0x0) {
      FVar29 = FVar30;
    }
    FVar30 = (ForElementType<FNavigationOctreeElement>)((longlong)FVar29 + (longlong)iVar22 * 0x48);
    while( true ) {
      if (param_5->ArrayNum != iVar22) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FNavigationOctreeElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar29 == FVar30) break;
      local_178._s_0.X = (double)*(undefined8 *)FVar29;
      local_178._s_0.Y = (double)*(undefined8 *)((longlong)FVar29 + 8);
      local_148 = *(undefined8 *)((longlong)FVar29 + 0x28);
      local_178._s_0.Z = (double)*(undefined8 *)((longlong)FVar29 + 0x10);
      local_158 = (((TVector<double> *)((longlong)FVar29 + 0x18))->field0_0x0)._s_0.X;
      local_150 = *(undefined8 *)((longlong)FVar29 + 0x20);
      local_140 = 0;
      local_178._s_0.W = 0.0;
      local_88 = local_148;
      AddElementInternal(this,param_1,local_res18,(FBoxCenterAndExtent *)&local_178._s_0,
                         (FNavigationOctreeElement *)FVar29,param_5);
      FVar29 = (ForElementType<FNavigationOctreeElement>)((longlong)FVar29 + 0x48);
    }
    piVar1 = &param_5->ArrayMax;
    FVar30 = (param_5->AllocatorInstance).SecondaryData;
    if (*piVar1 < 0) {
      FVar29 = (ForElementType<FNavigationOctreeElement>)param_5;
      if (FVar30 != (ForElementType<FNavigationOctreeElement>)0x0) {
        FVar29 = FVar30;
      }
      DestructItems<FNavigationOctreeElement,int>
                ((FNavigationOctreeElement *)FVar29,param_5->ArrayNum);
      param_5->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationOctreeElement>_>
                  (0x48,8,0,&param_5->AllocatorInstance,0,piVar1);
      }
    }
    else {
      FVar29 = (ForElementType<FNavigationOctreeElement>)param_5;
      if (FVar30 != (ForElementType<FNavigationOctreeElement>)0x0) {
        FVar29 = FVar30;
      }
      DestructItems<FNavigationOctreeElement,int>
                ((FNavigationOctreeElement *)FVar29,param_5->ArrayNum);
      param_5->ArrayNum = 0;
    }
  }
  uVar21 = 0;
  if ((int)param_1 < (this->TreeElements).ArrayNum) {
    uVar21 = uVar31;
  }
  if ((uVar21 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar30 = (ForElementType<FNavigationOctreeElement>)
           (lVar28 + (longlong)(this->TreeElements).AllocatorInstance.Data);
  iVar22 = *(int *)((ForElementType<FNavigationOctreeElement> *)((longlong)FVar30 + 0x488))->
                   InlineData;
  if (iVar22 == *(int *)((longlong)FVar30 + 0x48c)) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationOctreeElement>_>
                       (0x848,(ForElementType<FNavigationOctreeElement> *)FVar30,
                        (int *)((longlong)FVar30 + 0x48c));
  }
  *(int *)((ForElementType<FNavigationOctreeElement> *)((longlong)FVar30 + 0x488))->InlineData =
       iVar22 + 1;
  lVar25 = (longlong)iVar22;
  FVar29 = *(ForElementType<FNavigationOctreeElement> *)((longlong)FVar30 + 0x480);
  if (*(ForElementType<FNavigationOctreeElement> *)((longlong)FVar30 + 0x480) ==
      (ForElementType<FNavigationOctreeElement>)0x0) {
    FVar29 = FVar30;
  }
  dVar32 = (param_4->Bounds).Origin.field0_0x0._s_0.Y;
  pdVar2 = (double *)((longlong)FVar29 + lVar25 * 0x48);
  *pdVar2 = (param_4->Bounds).Origin.field0_0x0._s_0.X;
  pdVar2[1] = dVar32;
  dVar32 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.X;
  pdVar2 = (double *)((longlong)FVar29 + 0x10 + lVar25 * 0x48);
  *pdVar2 = (param_4->Bounds).Origin.field0_0x0._s_0.Z;
  pdVar2[1] = dVar32;
  dVar32 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.Z;
  pdVar2 = (double *)((longlong)FVar29 + 0x20 + lVar25 * 0x48);
  *pdVar2 = (param_4->Bounds).BoxExtent.field0_0x0._s_0.Y;
  pdVar2[1] = dVar32;
  *(double *)((longlong)FVar29 + 0x30 + lVar25 * 0x48) = (param_4->Bounds).SphereRadius;
  *(FNavigationRelevantData **)((longlong)FVar29 + 0x38 + lVar25 * 0x48) = (param_4->Data).Object;
  pTVar4 = (param_4->Data).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)FVar29 + 0x40 + lVar25 * 0x48) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar23 = FNavigationElement::GetHandle
                      ((((param_4->Data).Object)->SourceElement).Object,&local_b8);
  local_1a8 = (FOctreeElementId2 *)CONCAT44(iVar22,param_1);
  local_138 = (pFVar23->OwnerUObject).WeakPtr;
  uStack_130 = pFVar23->SubElementId;
  local_198 = &local_138;
  pTVar26 = (TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
             *)((longlong)&this[1].RootNodeContext.Bounds.Extent.field0_0x0 + 0x18);
  local_190 = &local_1a8;
  if (this == (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)0x0) {
    pTVar26 = (TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
               *)&DAT_000000f8;
  }
  TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNavigationElementHandle_const_&,FOctreeElementId2_const_&>_>
            (pTVar26,(TPairInitializer<FNavigationElementHandle_const_&,FOctreeElementId2_const_&> *
                     )local_1b4,(bool *)&local_198);
  return;
}

// AllocateEightNodes @ 146d84050

uint __thiscall
TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::AllocateEightNodes
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *this)

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
    DefaultConstructItems<TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::FNode,int>
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
                      (0x490,8,8,&(this->TreeElements).AllocatorInstance,
                       &(this->TreeElements).ArrayNum,&(this->TreeElements).ArrayMax);
    DefaultConstructItems<TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
              ((this->TreeElements).AllocatorInstance.Data + (longlong)iVar5 * 0x490,8);
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

// CollapseNodesInternal @ 146d87680

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::CollapseNodesInternal
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *this,uint param_1,
          TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  uchar *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FNavigationOctreeElement> FVar7;
  TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *_Src;
  byte bVar8;
  TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar10;
  ForElementType<FNavigationOctreeElement> FVar11;
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
  pTVar10 = (TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
             *)((this->TreeElements).AllocatorInstance.Data + lVar13 * 0x490);
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
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationOctreeElement>_>
                      (0x48,8,iVar2,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    FVar7 = (param_2->AllocatorInstance).SecondaryData;
    _Src = *(TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
             **)&(pTVar10->AllocatorInstance).SecondaryData.field_0x0;
    if (_Src == (TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
      _Src = pTVar10;
    }
    FVar11 = (ForElementType<FNavigationOctreeElement>)param_2;
    if (FVar7 != (ForElementType<FNavigationOctreeElement>)0x0) {
      FVar11 = FVar7;
    }
    memmove((void *)((longlong)FVar11 + (longlong)iVar6 * 0x48),_Src,(longlong)iVar2 * 0x48);
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
  FVar11 = (ForElementType<FNavigationOctreeElement>)
           ((longlong)(this->TreeElements).AllocatorInstance.Data + lVar13 * 0x490);
  iVar2 = *(int *)((ForElementType<FNavigationOctreeElement> *)((longlong)FVar11 + 0x488))->
                  InlineData;
  puVar1 = (uchar *)((longlong)FVar11 + 0x48c);
  FVar7 = *(ForElementType<FNavigationOctreeElement> *)((longlong)FVar11 + 0x480);
  if (*(int *)puVar1 < 0) {
    if (FVar7 == (ForElementType<FNavigationOctreeElement>)0x0) {
      FVar7 = FVar11;
    }
    DestructItems<FNavigationOctreeElement,int>((FNavigationOctreeElement *)FVar7,iVar2);
    *(undefined4 *)((longlong)FVar11 + 0x488) = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationOctreeElement>_>
                (0x48,8,0,(ForElementType<FNavigationOctreeElement> *)FVar11,0,(int *)puVar1);
    }
  }
  else {
    if (FVar7 == (ForElementType<FNavigationOctreeElement>)0x0) {
      FVar7 = FVar11;
    }
    DestructItems<FNavigationOctreeElement,int>((FNavigationOctreeElement *)FVar7,iVar2);
    *(undefined4 *)((longlong)FVar11 + 0x488) = 0;
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

// Destroy @ 146d901a0

void __thiscall
TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::Destroy
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *this)

{
  int *piVar1;
  int *piVar2;
  TArray<TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,TAlignedHeapAllocator<8>_>
  *pTVar3;
  TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4
  ;
  int iVar5;
  
  piVar1 = &(this->TreeNodes).ArrayMax;
  (this->TreeNodes).ArrayNum = 0;
  if ((this->TreeNodes).ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,&(this->TreeNodes).AllocatorInstance,0,piVar1);
  }
  pTVar3 = &this->TreeElements;
  piVar2 = &(this->TreeElements).ArrayMax;
  pTVar4 = (TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
            *)(pTVar3->AllocatorInstance).Data;
  iVar5 = (this->TreeElements).ArrayNum;
  if ((this->TreeElements).ArrayMax < 1) {
    DestructItems<TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar4,iVar5);
    (this->TreeElements).ArrayNum = 0;
    if (*piVar2 != 1) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                (0x490,8,1,&pTVar3->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
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
  DefaultConstructItems<TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::FNode,int>
            ((this->TreeNodes).AllocatorInstance.Data + (longlong)iVar5 * 8,1);
  iVar5 = (this->TreeElements).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                      (0x490,8,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->TreeElements).ArrayNum = iVar5 + 1;
  DefaultConstructItems<TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
            ((pTVar3->AllocatorInstance).Data + (longlong)iVar5 * 0x490,1);
  return;
}

// FreeEightNodes @ 146d97980

void __thiscall
TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::FreeEightNodes
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *this,uint param_1)

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

// GetElementById @ 146d9b0e0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FNavigationOctreeElement * __thiscall
TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetElementById
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *this,
          FOctreeElementId2 param_1)

{
  code *pcVar1;
  bool bVar2;
  FNavigationOctreeElement *pFVar3;
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
      pFVar3 = (FNavigationOctreeElement *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar6 = (this->TreeElements).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x490;
  iStackX_14 = param_1.ElementIndex;
  if ((longlong)param_1 < 0 || *(int *)(pFVar6 + 0x488) <= iStackX_14) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNavigationOctreeElement *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = *(FScriptContainerElement **)(pFVar6 + 0x480);
  if (*(FScriptContainerElement **)(pFVar6 + 0x480) == (FScriptContainerElement *)0x0) {
    pFVar4 = pFVar6;
  }
  return (FNavigationOctreeElement *)(pFVar4 + (longlong)iStackX_14 * 0x48);
}

// GetElementsForNode @ 146d9b1e0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

TArrayView<FNavigationOctreeElement_const_,int> * __thiscall
TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetElementsForNode
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *this,
          TArrayView<FNavigationOctreeElement_const_,int> *__return_storage_ptr__,uint param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<FNavigationOctreeElement_const_,int> *pTVar5;
  FNavigationOctreeElement *pFVar6;
  FNavigationOctreeElement *pFVar7;
  
  uVar4 = 0;
  if ((int)param_1 < (this->TreeElements).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<FNavigationOctreeElement_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar7 = (FNavigationOctreeElement *)
           ((this->TreeElements).AllocatorInstance.Data + (longlong)(int)param_1 * 0x490);
  pFVar6 = (FNavigationOctreeElement *)pFVar7[0x10].Bounds.Origin.field0_0x0._s_0.X;
  iVar1 = *(int *)((longlong)&pFVar7[0x10].Bounds.Origin.field0_0x0 + 8);
  if (pFVar6 == (FNavigationOctreeElement *)0x0) {
    pFVar6 = pFVar7;
  }
  __return_storage_ptr__->DataPtr = pFVar6;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<FNavigationOctreeElement_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetSizeBytes @ 146da2570

ulong64 __thiscall
TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetSizeBytes
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  
  iVar1 = (this->TreeElements).ArrayMax;
  iVar2 = (this->TreeNodes).ArrayMax;
  if ((this->TreeNodes).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return ((longlong)iVar1 * 0x92 + (longlong)iVar2) * 8 +
         (ulonglong)*(uint *)((this->TreeNodes).AllocatorInstance.Data + 4) * 0x48;
}

// RemoveElement @ 146db4270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::RemoveElement
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *this,
          FOctreeElementId2 param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar6
  ;
  FNavigationElementHandle *pFVar7;
  TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
  *pTVar8;
  TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar9
  ;
  ForElementType<FNavigationOctreeElement> FVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  int iStackX_14;
  undefined1 auStackY_598 [32];
  longlong local_568;
  undefined1 local_560 [8];
  FOctreeElementId2 local_558;
  undefined8 local_550;
  longlong local_548;
  FWeakObjectPtr *local_540;
  FOctreeElementId2 *local_538;
  FWeakObjectPtr *local_530;
  undefined8 *local_528;
  FWeakObjectPtr local_518;
  ulong64 uStack_510;
  FWeakObjectPtr local_508;
  ulong64 uStack_500;
  FNavigationElementHandle local_4f8;
  FNavigationElementHandle local_4e8;
  TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  local_4d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_598;
  uVar12 = param_1.NodeIndex;
  bVar17 = (int)uVar12 < 0;
  if (bVar17 || (this->TreeElements).ArrayNum <= (int)uVar12) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iStackX_14 = param_1.ElementIndex;
  lVar16 = (longlong)(int)uVar12 * 0x490;
  pTVar6 = (TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
            *)((this->TreeElements).AllocatorInstance.Data + lVar16);
  if ((longlong)param_1 < 0 || pTVar6->ArrayNum <= iStackX_14) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::
  RemoveAtSwapImpl(pTVar6,iStackX_14);
  if (bVar17 || (this->TreeElements).ArrayNum <= (int)uVar12) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iStackX_14 < *(int *)((this->TreeElements).AllocatorInstance.Data + lVar16 + 0x488)) {
    if (bVar17 || (this->TreeElements).ArrayNum <= (int)uVar12) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar14 = (this->TreeElements).AllocatorInstance.Data + lVar16;
    if ((longlong)param_1 < 0 || *(int *)(pFVar14 + 0x488) <= iStackX_14) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar11 = *(FScriptContainerElement **)(pFVar14 + 0x480);
    if (*(FScriptContainerElement **)(pFVar14 + 0x480) == (FScriptContainerElement *)0x0) {
      pFVar11 = pFVar14;
    }
    pFVar7 = FNavigationElement::GetHandle
                       (*(FNavigationElement **)
                         (*(longlong *)(pFVar11 + (longlong)iStackX_14 * 0x48 + 0x38) + 0x100),
                        &local_4f8);
    pTVar8 = (TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
              *)((longlong)&this[1].RootNodeContext.Bounds.Extent.field0_0x0 + 0x18);
    local_518 = (pFVar7->OwnerUObject).WeakPtr;
    uStack_510 = pFVar7->SubElementId;
    local_540 = &local_518;
    local_538 = &local_558;
    if (this == (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)0x0) {
      pTVar8 = (TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
                *)&DAT_000000f8;
    }
    local_558 = param_1;
    TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FNavigationElementHandle_const_&,FOctreeElementId2_const_&>_>
              (pTVar8,(TPairInitializer<FNavigationElementHandle_const_&,FOctreeElementId2_const_&>
                       *)local_560,(bool *)&local_540);
  }
  uVar12 = 0xffffffff;
  while( true ) {
    uVar15 = param_1.NodeIndex;
    uVar4 = 0;
    if ((int)uVar15 < (this->TreeNodes).ArrayNum) {
      uVar4 = ~uVar15 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar14 = (this->TreeNodes).AllocatorInstance.Data + (longlong)(int)uVar15 * 8 + 4;
    *(int *)pFVar14 = *(int *)pFVar14 + -1;
    uVar4 = 0;
    if ((int)uVar15 < (this->TreeNodes).ArrayNum) {
      uVar4 = ~uVar15 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar4 = uVar15;
    if (6 < *(uint *)((this->TreeNodes).AllocatorInstance.Data + (longlong)(int)uVar15 * 8 + 4)) {
      uVar4 = uVar12;
    }
    if (uVar15 == 0) break;
    uVar12 = uVar15 - 1 >> 3;
    if ((this->ParentLinks).ArrayNum <= (int)uVar12) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    param_1.ElementIndex = 0;
    param_1.NodeIndex =
         *(uint *)((this->ParentLinks).AllocatorInstance.Data + (ulonglong)uVar12 * 4);
    uVar12 = uVar4;
  }
  if (uVar4 != 0xffffffff) {
    uVar15 = ~uVar4 >> 0x1f;
    uVar12 = 0;
    if ((int)uVar4 < (this->TreeNodes).ArrayNum) {
      uVar12 = uVar15;
    }
    if (uVar12 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar16 = (longlong)(int)uVar4;
    if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar16 * 8) != -1) {
      uVar12 = 0;
      if ((int)uVar4 < (this->TreeElements).ArrayNum) {
        uVar12 = uVar15;
      }
      if (uVar12 == 0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar14 = (this->TreeElements).AllocatorInstance.Data;
      uVar12 = 0;
      if ((int)uVar4 < (this->TreeNodes).ArrayNum) {
        uVar12 = uVar15;
      }
      if (uVar12 == 0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      lVar13 = lVar16 * 0x490;
      if (*(int *)(pFVar14 + lVar13 + 0x488) <
          *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar16 * 8 + 4)) {
        local_4d8.AllocatorInstance.SecondaryData = (ForElementType<FNavigationOctreeElement>)0x0;
        local_4d8.ArrayNum = 0;
        uVar12 = 0;
        if ((int)uVar4 < (this->TreeNodes).ArrayNum) {
          uVar12 = uVar15;
        }
        local_4d8.ArrayMax = 0x10;
        local_548 = lVar13;
        if (uVar12 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar12 = *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar16 * 8 + 4);
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        if (local_4d8.ArrayMax < (int)uVar12) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationOctreeElement>_>
                    (0x48,8,uVar12,&local_4d8.AllocatorInstance,local_4d8.ArrayNum,
                     &local_4d8.ArrayMax);
        }
        CollapseNodesInternal(this,uVar4,&local_4d8);
        uVar12 = 0;
        if ((int)uVar4 < (this->TreeElements).ArrayNum) {
          uVar12 = uVar15;
        }
        if (uVar12 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pTVar6 = (TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                  *)((this->TreeElements).AllocatorInstance.Data + lVar13);
        if (pTVar6 != &local_4d8) {
          pTVar9 = *(TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                     **)&(pTVar6->AllocatorInstance).SecondaryData.field_0x0;
          if (pTVar9 == (TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                         *)0x0) {
            pTVar9 = pTVar6;
          }
          DestructItems<FNavigationOctreeElement,int>
                    ((FNavigationOctreeElement *)pTVar9,*(int *)(&pTVar6->AllocatorInstance + 1));
          if (local_4d8.AllocatorInstance.SecondaryData ==
              (ForElementType<FNavigationOctreeElement>)0x0) {
            memmove(pTVar6,&local_4d8,0x480);
          }
          pvVar1 = *(void **)&(pTVar6->AllocatorInstance).SecondaryData.field_0x0;
          if (pvVar1 != (void *)0x0) {
            FMemory::Free(pvVar1);
          }
          *(ForElementType<FNavigationOctreeElement> *)
           &(pTVar6->AllocatorInstance).SecondaryData.field_0x0 =
               local_4d8.AllocatorInstance.SecondaryData;
          local_4d8.AllocatorInstance.SecondaryData = (ForElementType<FNavigationOctreeElement>)0x0;
          *(int *)(&pTVar6->AllocatorInstance + 1) = local_4d8.ArrayNum;
          *(int *)((longlong)(&pTVar6->AllocatorInstance + 1) + 4) = local_4d8.ArrayMax;
          local_4d8.ArrayNum = 0;
          local_4d8.ArrayMax = 0x10;
        }
        uVar12 = 0;
        local_568 = 0;
        while( true ) {
          uVar5 = 0;
          if ((int)uVar4 < (this->TreeElements).ArrayNum) {
            uVar5 = uVar15;
          }
          if (uVar5 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if (*(int *)((this->TreeElements).AllocatorInstance.Data + lVar13 + 0x488) <= (int)uVar12)
          break;
          uVar5 = 0;
          if ((int)uVar4 < (this->TreeElements).ArrayNum) {
            uVar5 = uVar15;
          }
          if (uVar5 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          pFVar14 = (this->TreeElements).AllocatorInstance.Data + lVar13;
          uVar5 = 0;
          if ((int)uVar12 < *(int *)(pFVar14 + 0x488)) {
            uVar5 = ~uVar12 >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if (*(FScriptContainerElement **)(pFVar14 + 0x480) != (FScriptContainerElement *)0x0) {
            pFVar14 = *(FScriptContainerElement **)(pFVar14 + 0x480);
          }
          pFVar7 = FNavigationElement::GetHandle
                             (*(FNavigationElement **)
                               (*(longlong *)(pFVar14 + local_568 + 0x38) + 0x100),&local_4e8);
          pTVar8 = (TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
                    *)((longlong)&this[1].RootNodeContext.Bounds.Extent.field0_0x0 + 0x18);
          local_508 = (pFVar7->OwnerUObject).WeakPtr;
          uStack_500 = pFVar7->SubElementId;
          local_530 = &local_508;
          local_528 = &local_550;
          if (this == (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)0x0) {
            pTVar8 = (TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
                      *)&DAT_000000f8;
          }
          local_550 = CONCAT44(uVar12,uVar4);
          TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FNavigationElementHandle_const_&,FOctreeElementId2_const_&>_>
                    (pTVar8,(TPairInitializer<FNavigationElementHandle_const_&,FOctreeElementId2_const_&>
                             *)(local_560 + 4),(bool *)&local_530);
          uVar12 = uVar12 + 1;
          local_568 = local_568 + 0x48;
          lVar13 = local_548;
        }
        FVar10 = (ForElementType<FNavigationOctreeElement>)&local_4d8;
        if (local_4d8.AllocatorInstance.SecondaryData !=
            (ForElementType<FNavigationOctreeElement>)0x0) {
          FVar10 = local_4d8.AllocatorInstance.SecondaryData;
        }
        DestructItems<FNavigationOctreeElement,int>
                  ((FNavigationOctreeElement *)FVar10,local_4d8.ArrayNum);
        if (local_4d8.AllocatorInstance.SecondaryData !=
            (ForElementType<FNavigationOctreeElement>)0x0) {
          FMemory::Free((void *)local_4d8.AllocatorInstance.SecondaryData);
        }
      }
    }
  }
  return;
}

