// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 19

// AddElementInternal @ 144c26c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics>::AddElementInternal
          (TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics> *this,uint param_1,
          FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,FLightSceneInfoCompact *param_4,
          TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>
          *param_5)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  undefined8 *puVar3;
  FLightSceneProxy *pFVar4;
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
  undefined8 uVar19;
  FOctreeElementId2 FVar20;
  FOctreeElementId2 FVar21;
  FOctreeNodeContext *pFVar22;
  bool bVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  ForElementType<FLightSceneInfoCompact> FVar28;
  uint uVar29;
  longlong lVar30;
  ForElementType<FLightSceneInfoCompact> FVar31;
  longlong lVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar38;
  double dVar39;
  uint uVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  uint uVar50;
  undefined4 uVar51;
  uint uVar52;
  uint uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 local_res10 [8];
  FOctreeNodeContext *local_res18;
  FBoxCenterAndExtent *local_res20;
  double local_140;
  double dStack_138;
  double local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  TVector4<double>_u_0 local_118;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  TVector4<double>_u_0 local_d8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  double local_98;
  double local_90;
  
  lVar32 = (longlong)(int)param_1;
  uVar27 = ~param_1 >> 0x1f;
  local_res18 = param_2;
  local_res20 = param_3;
  while( true ) {
    uVar38 = 0;
    uVar24 = uVar38;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar24 = uVar27;
    }
    if ((uVar24 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar1 = (this->TreeNodes).AllocatorInstance.Data + lVar32 * 8 + 4;
    *(int *)pFVar1 = *(int *)pFVar1 + 1;
    iVar25 = (this->TreeNodes).ArrayNum;
    uVar24 = uVar38;
    if ((int)param_1 < iVar25) {
      uVar24 = uVar27;
    }
    if (uVar24 == 0) {
      iVar25 = 0x506106c8;
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar22 = local_res18;
    if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar32 * 8) != -1) {
      dVar11 = (local_res20->Center).field0_0x0._s_0.Z;
      dVar12 = (local_res20->Center).field0_0x0._s_0.W;
      dVar13 = (local_res18->Bounds).Center.field0_0x0._s_0.Z;
      dVar14 = (local_res18->Bounds).Center.field0_0x0._s_0.W;
      dVar15 = (local_res20->Center).field0_0x0._s_0.X;
      dVar16 = (local_res20->Center).field0_0x0._s_0.Y;
      dVar33 = local_res18->ChildCenterOffset;
      dVar17 = (local_res18->Bounds).Center.field0_0x0._s_0.X;
      dVar18 = (local_res18->Bounds).Center.field0_0x0._s_0.Y;
      dVar39 = local_res18->ChildExtent;
      auVar45._8_4_ = SUB84(dVar33,0);
      auVar45._0_8_ = dVar33;
      uVar51 = (undefined4)((ulonglong)dVar33 >> 0x20);
      auVar45._12_4_ = uVar51;
      dVar8 = dVar12 - (dVar14 - dVar33);
      auVar46._0_8_ = (dVar33 + dVar13) - dVar11;
      auVar46._8_8_ = (auVar45._8_8_ + dVar14) - dVar12;
      auVar34._8_4_ = SUB84(dVar39,0);
      auVar34._0_8_ = dVar39;
      auVar34._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      auVar47._8_4_ = SUB84(dVar8,0);
      auVar47._0_8_ = dVar11 - (dVar13 - dVar33);
      auVar47._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar47 = minpd(auVar46,auVar47);
      auVar35._8_8_ =
           -(ulonglong)(auVar34._8_8_ < auVar47._8_8_ + (local_res20->Extent).field0_0x0._s_0.W);
      auVar35._0_8_ = -(ulonglong)(dVar39 < auVar47._0_8_ + (local_res20->Extent).field0_0x0._s_0.Z)
      ;
      uVar24 = movmskpd(iVar25,auVar35);
      auVar48._8_4_ = SUB84(dVar33,0);
      auVar48._0_8_ = dVar33;
      auVar48._12_4_ = uVar51;
      auVar49._0_8_ = (dVar33 + dVar17) - dVar15;
      auVar49._8_8_ = (auVar48._8_8_ + dVar18) - dVar16;
      dVar8 = dVar16 - (dVar18 - dVar33);
      auVar6._8_4_ = SUB84(dVar8,0);
      auVar6._0_8_ = dVar15 - (dVar17 - dVar33);
      auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar47 = minpd(auVar49,auVar6);
      lVar30 = -(ulonglong)(dVar39 < auVar47._8_8_ + (local_res20->Extent).field0_0x0._s_0.Y);
      auVar9._8_4_ = (int)lVar30;
      auVar9._0_8_ = -(ulonglong)(dVar39 < auVar47._0_8_ + (local_res20->Extent).field0_0x0._s_0.X);
      auVar9._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
      iVar25 = movmskpd((int)local_res20,auVar9);
      if ((uVar24 & 0x3fffffff) == 0 && iVar25 == 0) {
        auVar54._8_8_ = -(ulonglong)(dVar14 < dVar12);
        auVar54._0_8_ = -(ulonglong)(dVar13 < dVar11);
        iVar26 = movmskpd(0,auVar54);
        auVar10._8_4_ = (int)-(ulonglong)(dVar18 < dVar16);
        auVar10._0_8_ = -(ulonglong)(dVar17 < dVar15);
        auVar10._12_4_ = (int)(-(ulonglong)(dVar18 < dVar16) >> 0x20);
        uVar24 = movmskpd(iVar25,auVar10);
        uVar24 = (iVar26 << 2 | uVar24) & 7;
        if ((int)param_1 < (this->TreeNodes).ArrayNum) {
          uVar38 = uVar27;
        }
        if ((uVar38 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar52 = SUB84(pFVar22->ChildCenterOffset,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar53 = (uint)((ulonglong)pFVar22->ChildCenterOffset >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        dVar33 = (double)(float)-(uint)((uVar24 & ___xmm_00000008000000040000000200000001) ==
                                       ___xmm_00000008000000040000000200000001);
        dVar39 = (double)(float)-(uint)((uVar24 & _UNK_150744154) == _UNK_150744154);
        uVar27 = SUB84(dVar33,0);
        uVar38 = (uint)((ulonglong)dVar33 >> 0x20);
        uVar29 = SUB84(dVar39,0);
        uVar40 = (uint)((ulonglong)dVar39 >> 0x20);
        auVar36._0_4_ = ~uVar27 & uVar52;
        auVar36._4_4_ = ~uVar38 & uVar53;
        auVar36._8_4_ = ~uVar29 & uVar52;
        auVar36._12_4_ = ~uVar40 & uVar53;
        dVar33 = (double)(float)-(uint)((uVar24 & _UNK_150744158) == _UNK_150744158);
        uVar41 = SUB84(dVar33,0);
        uVar42 = (uint)((ulonglong)dVar33 >> 0x20);
        dVar33 = (double)(float)-(uint)((uVar24 & _UNK_15074415c) == _UNK_15074415c);
        uVar43 = SUB84(dVar33,0);
        uVar44 = (uint)((ulonglong)dVar33 >> 0x20);
        uVar50 = SUB84(pFVar22->ChildCenterOffset,0);
        auVar55._0_4_ = uVar27 & uVar50;
        uVar27 = (uint)((ulonglong)pFVar22->ChildCenterOffset >> 0x20);
        auVar55._4_4_ = uVar38 & uVar27;
        auVar55._8_4_ = uVar29 & uVar50;
        auVar55._12_4_ = uVar40 & uVar27;
        local_d8._s_0.X = SUB168(auVar55 | auVar36,0) + (pFVar22->Bounds).Center.field0_0x0._s_0.X;
        local_d8._s_0.Y = SUB168(auVar55 | auVar36,8) + (pFVar22->Bounds).Center.field0_0x0._s_0.Y;
        auVar37._0_4_ = uVar41 & uVar50;
        auVar37._4_4_ = uVar42 & uVar27;
        auVar37._8_4_ = uVar43 & uVar50;
        auVar37._12_4_ = uVar44 & uVar27;
        auVar7._4_4_ = ~uVar42 & uVar53;
        auVar7._0_4_ = ~uVar41 & uVar52;
        auVar7._8_4_ = ~uVar43 & uVar52;
        auVar7._12_4_ = ~uVar44 & uVar53;
        local_90 = pFVar22->ChildExtent;
        local_d8._s_0.Z =
             (SUB168(auVar37 | auVar7,0) + (pFVar22->Bounds).Center.field0_0x0._s_0.Z) *
             (double)_UNK_150689548;
        local_d8._s_0.W =
             (SUB168(auVar37 | auVar7,8) + (pFVar22->Bounds).Center.field0_0x0._s_0.W) *
             (double)_UNK_15068954c;
        dVar33 = (double)_UNK_15068954c * local_90;
        local_98 = local_90 * __real_3fe0000000000000 * __real_3ff1000000000000;
        local_b8._8_4_ = SUB84(local_90,0);
        local_b8._0_8_ = local_90;
        local_b8._12_4_ = (int)((ulonglong)local_90 >> 0x20);
        local_a8._8_4_ = SUB84(dVar33,0);
        local_a8._0_8_ = (double)_UNK_150689548 * local_90;
        local_a8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        local_90 = local_90 - local_98;
        AddElementInternal(this,*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar32 * 8) +
                                uVar24,(FOctreeNodeContext *)&local_d8._s_0,local_res20,param_4,
                           param_5);
      }
      else {
        if ((int)param_1 < (this->TreeElements).ArrayNum) {
          uVar38 = uVar27;
        }
        if ((uVar38 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar31 = (ForElementType<FLightSceneInfoCompact>)
                 ((longlong)(this->TreeElements).AllocatorInstance.Data + lVar32 * 0x420);
        iVar25 = *(int *)((ForElementType<FLightSceneInfoCompact> *)((longlong)FVar31 + 0x410))->
                         InlineData;
        if (iVar25 == *(int *)((longlong)FVar31 + 0x414)) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>_>
                             (0x1040,(ForElementType<FLightSceneInfoCompact> *)FVar31,
                              (int *)((longlong)FVar31 + 0x414));
        }
        *(int *)((ForElementType<FLightSceneInfoCompact> *)((longlong)FVar31 + 0x410))->InlineData =
             iVar25 + 1;
        dVar33 = (param_4->BoundingSphereVector).XY.m128d_f64[1];
        FVar28 = *(ForElementType<FLightSceneInfoCompact> *)((longlong)FVar31 + 0x400);
        if (*(ForElementType<FLightSceneInfoCompact> *)((longlong)FVar31 + 0x400) ==
            (ForElementType<FLightSceneInfoCompact>)0x0) {
          FVar28 = FVar31;
        }
        lVar32 = (longlong)iVar25 * 0x40;
        FVar21.ElementIndex = iVar25;
        FVar21.NodeIndex = param_1;
        *(double *)((longlong)FVar28 + lVar32) = (param_4->BoundingSphereVector).XY.m128d_f64[0];
        ((double *)((longlong)FVar28 + lVar32))[1] = dVar33;
        dVar33 = (param_4->BoundingSphereVector).ZW.m128d_f64[1];
        pdVar2 = (double *)((longlong)FVar28 + 0x10 + lVar32);
        *pdVar2 = (param_4->BoundingSphereVector).ZW.m128d_f64[0];
        pdVar2[1] = dVar33;
        uVar19 = *(undefined8 *)((longlong)&(param_4->Color).field0_0x0 + 8);
        puVar3 = (undefined8 *)((longlong)FVar28 + 0x20 + lVar32);
        *puVar3 = *(undefined8 *)&(param_4->Color).field0_0x0;
        puVar3[1] = uVar19;
        uVar19 = *(undefined8 *)&param_4->field_0x38;
        puVar3 = (undefined8 *)((longlong)FVar28 + 0x30 + lVar32);
        *puVar3 = param_4->LightSceneInfo;
        puVar3[1] = uVar19;
        param_4->LightSceneInfo->OctreeId = FVar21;
      }
      return;
    }
    uVar24 = uVar38;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar24 = uVar27;
    }
    if ((uVar24 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar30 = lVar32 * 0x420;
    if ((*(int *)((this->TreeElements).AllocatorInstance.Data + lVar30 + 0x410) + 1 < 0x11) ||
       ((local_res18->Bounds).Extent.field0_0x0._s_0.X <= this->MinLeafExtent)) {
      if ((int)param_1 < (this->TreeElements).ArrayNum) {
        uVar38 = uVar27;
      }
      if ((uVar38 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar31 = (ForElementType<FLightSceneInfoCompact>)
               ((longlong)(this->TreeElements).AllocatorInstance.Data + lVar30);
      iVar25 = *(int *)((ForElementType<FLightSceneInfoCompact> *)((longlong)FVar31 + 0x410))->
                       InlineData;
      if (iVar25 == *(int *)((longlong)FVar31 + 0x414)) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>_>
                           (0x1040,(ForElementType<FLightSceneInfoCompact> *)FVar31,
                            (int *)((longlong)FVar31 + 0x414));
      }
      *(int *)((ForElementType<FLightSceneInfoCompact> *)((longlong)FVar31 + 0x410))->InlineData =
           iVar25 + 1;
      dVar33 = (param_4->BoundingSphereVector).XY.m128d_f64[1];
      FVar28 = *(ForElementType<FLightSceneInfoCompact> *)((longlong)FVar31 + 0x400);
      if (*(ForElementType<FLightSceneInfoCompact> *)((longlong)FVar31 + 0x400) ==
          (ForElementType<FLightSceneInfoCompact>)0x0) {
        FVar28 = FVar31;
      }
      lVar32 = (longlong)iVar25 * 0x40;
      FVar20.ElementIndex = iVar25;
      FVar20.NodeIndex = param_1;
      *(double *)((longlong)FVar28 + lVar32) = (param_4->BoundingSphereVector).XY.m128d_f64[0];
      ((double *)((longlong)FVar28 + lVar32))[1] = dVar33;
      dVar33 = (param_4->BoundingSphereVector).ZW.m128d_f64[1];
      pdVar2 = (double *)((longlong)FVar28 + 0x10 + lVar32);
      *pdVar2 = (param_4->BoundingSphereVector).ZW.m128d_f64[0];
      pdVar2[1] = dVar33;
      uVar19 = *(undefined8 *)((longlong)&(param_4->Color).field0_0x0 + 8);
      puVar3 = (undefined8 *)((longlong)FVar28 + 0x20 + lVar32);
      *puVar3 = *(undefined8 *)&(param_4->Color).field0_0x0;
      puVar3[1] = uVar19;
      uVar19 = *(undefined8 *)&param_4->field_0x38;
      puVar3 = (undefined8 *)((longlong)FVar28 + 0x30 + lVar32);
      *puVar3 = param_4->LightSceneInfo;
      puVar3[1] = uVar19;
      param_4->LightSceneInfo->OctreeId = FVar20;
      return;
    }
    uVar24 = uVar38;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar24 = uVar27;
    }
    if ((uVar24 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) break;
    TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>::
    operator=(param_5,(TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>
                       *)((this->TreeElements).AllocatorInstance.Data + lVar30));
    uVar24 = AllocateEightNodes(this);
    uVar29 = uVar24 - 1 >> 3;
    if (((this->ParentLinks).ArrayNum <= (int)uVar29) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(uint *)((this->ParentLinks).AllocatorInstance.Data + (ulonglong)uVar29 * 4) = param_1;
    uVar29 = uVar38;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar29 = uVar27;
    }
    if ((uVar29 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar32 * 8) = uVar24;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar38 = uVar27;
    }
    if ((uVar38 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)((this->TreeNodes).AllocatorInstance.Data + lVar32 * 8 + 4) = 0;
    FVar31 = (param_5->AllocatorInstance).SecondaryData;
    iVar25 = param_5->ArrayNum;
    FVar28 = (ForElementType<FLightSceneInfoCompact>)param_5;
    if (FVar31 != (ForElementType<FLightSceneInfoCompact>)0x0) {
      FVar28 = FVar31;
    }
    FVar31 = (ForElementType<FLightSceneInfoCompact>)((longlong)iVar25 * 0x40 + (longlong)FVar28);
    while( true ) {
      if (param_5->ArrayNum != iVar25) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FLightSceneInfoCompact,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar28 == FVar31) break;
      pFVar4 = (*(FLightSceneInfo **)((longlong)FVar28 + 0x30))->Proxy;
      (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4,&local_140);
      local_118._s_0.X = local_140;
      local_118._s_0.Y = dStack_138;
      local_118._s_0.Z = local_130;
      local_118._s_0.W = 0.0;
      local_e8 = local_128;
      uStack_e4 = uStack_124;
      local_e0 = 0;
      local_f8 = local_128;
      uStack_f4 = uStack_124;
      uStack_f0 = local_128;
      uStack_ec = uStack_124;
      AddElementInternal(this,param_1,local_res18,(FBoxCenterAndExtent *)&local_118._s_0,
                         (FLightSceneInfoCompact *)FVar28,param_5);
      FVar28 = (ForElementType<FLightSceneInfoCompact>)((longlong)FVar28 + 0x40);
    }
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>_>
                (0x40,0x10,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// AllocateEightNodes @ 144c2ae00

uint __thiscall
TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics>::AllocateEightNodes
          (TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics> *this)

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
    DefaultConstructItems<TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics>::FNode,int>
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
                      (0x420,0x10,8,&(this->TreeElements).AllocatorInstance,
                       &(this->TreeElements).ArrayNum,&(this->TreeElements).ArrayMax);
    DefaultConstructItems<TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>,int>
              ((this->TreeElements).AllocatorInstance.Data + (longlong)iVar5 * 0x420,8);
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

// CollapseNodesInternal @ 144c2cca0

void __thiscall
TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics>::CollapseNodesInternal
          (TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics> *this,uint param_1,
          TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>
          *param_2)

{
  int iVar1;
  ForElementType<FLightSceneInfoCompact> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_> *_Src;
  byte bVar7;
  TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_> *pTVar9;
  uint uVar10;
  ForElementType<FLightSceneInfoCompact> FVar11;
  ForElementType<FLightSceneInfoCompact> *pFVar12;
  longlong lVar13;
  uint uVar8;
  
  lVar13 = (longlong)(int)param_1;
  uVar10 = ~param_1 >> 0x1f;
  uVar5 = 0;
  if ((int)param_1 < (this->TreeElements).ArrayNum) {
    uVar5 = uVar10;
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
  pTVar9 = (TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>
            *)((this->TreeElements).AllocatorInstance.Data + lVar13 * 0x420);
  if (param_2 == pTVar9) {
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
  iVar1 = pTVar9->ArrayNum;
  if (iVar1 != 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>_>
                      (0x40,0x10,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    FVar2 = (param_2->AllocatorInstance).SecondaryData;
    _Src = *(TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>
             **)&(pTVar9->AllocatorInstance).SecondaryData.field_0x0;
    if (_Src == (TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>
                 *)0x0) {
      _Src = pTVar9;
    }
    FVar11 = (ForElementType<FLightSceneInfoCompact>)param_2;
    if (FVar2 != (ForElementType<FLightSceneInfoCompact>)0x0) {
      FVar11 = FVar2;
    }
    memmove((void *)((longlong)iVar6 * 0x40 + (longlong)FVar11),_Src,(longlong)iVar1 << 6);
    pTVar9->ArrayNum = 0;
  }
  uVar5 = 0;
  if ((int)param_1 < (this->TreeElements).ArrayNum) {
    uVar5 = uVar10;
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
  pFVar12 = (ForElementType<FLightSceneInfoCompact> *)
            ((this->TreeElements).AllocatorInstance.Data + lVar13 * 0x420);
  iVar1 = *(int *)(pFVar12[1].InlineData + 4);
  pFVar12[1].InlineData[0] = '\0';
  pFVar12[1].InlineData[1] = '\0';
  pFVar12[1].InlineData[2] = '\0';
  pFVar12[1].InlineData[3] = '\0';
  if (iVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>_>
              (0x40,0x10,0,pFVar12,0,(int *)(pFVar12[1].InlineData + 4));
  }
  uVar5 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar5 = uVar10;
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
      uVar5 = uVar10;
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
    uVar5 = *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar13 * 8);
    do {
      CollapseNodesInternal(this,uVar8 + uVar5,param_2);
      bVar7 = (char)uVar8 + 1;
      uVar8 = (uint)bVar7;
    } while ((char)bVar7 < '\b');
    uVar8 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar8 = uVar10;
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
    *(undefined4 *)((this->TreeNodes).AllocatorInstance.Data + lVar13 * 8) = 0xffffffff;
    FreeEightNodes(this,uVar5);
  }
  return;
}

// FreeEightNodes @ 144c416d0

void __thiscall
TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics>::FreeEightNodes
          (TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics> *this,uint param_1)

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

// RemoveElement @ 144c54cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics>::RemoveElement
          (TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics> *this,FOctreeElementId2 param_1)

{
  ForElementType<FLightSceneInfoCompact> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_> *pTVar16;
  bool bVar17;
  int iStackX_14;
  undefined1 auStackY_4a8 [32];
  TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_> local_468;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  uVar7 = param_1.NodeIndex;
  bVar17 = (int)uVar7 < 0;
  if ((bVar17 || (this->TreeElements).ArrayNum <= (int)uVar7) &&
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
  lVar13 = (longlong)(int)uVar7 * 0x420;
  pTVar16 = (TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>
             *)((this->TreeElements).AllocatorInstance.Data + lVar13);
  if (((longlong)param_1 < 0 || pTVar16->ArrayNum <= iStackX_14) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>::
  RemoveAtSwapImpl(pTVar16,iStackX_14);
  if ((bVar17 || (this->TreeElements).ArrayNum <= (int)uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iStackX_14 < *(int *)((this->TreeElements).AllocatorInstance.Data + lVar13 + 0x410)) {
    if ((bVar17 || (this->TreeElements).ArrayNum <= (int)uVar7) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = (this->TreeElements).AllocatorInstance.Data + lVar13;
    if (((longlong)param_1 < 0 || *(int *)(pFVar9 + 0x410) <= iStackX_14) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = *(FScriptContainerElement **)(pFVar9 + 0x400);
    if (*(FScriptContainerElement **)(pFVar9 + 0x400) == (FScriptContainerElement *)0x0) {
      pFVar5 = pFVar9;
    }
    *(FOctreeElementId2 *)(*(longlong *)(pFVar5 + (longlong)iStackX_14 * 0x40 + 0x30) + 0x38) =
         param_1;
  }
  uVar8 = 0;
  uVar14 = 0xffffffff;
  while( true ) {
    uVar6 = param_1.NodeIndex;
    uVar7 = 0;
    if ((int)uVar6 < (this->TreeNodes).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = (this->TreeNodes).AllocatorInstance.Data + (longlong)(int)uVar6 * 8 + 4;
    *(int *)pFVar9 = *(int *)pFVar9 + -1;
    uVar4 = 0;
    uVar7 = uVar4;
    if ((int)uVar6 < (this->TreeNodes).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = uVar6;
    if (6 < *(uint *)((this->TreeNodes).AllocatorInstance.Data + (longlong)(int)uVar6 * 8 + 4)) {
      uVar7 = (uint)uVar14;
    }
    uVar14 = (ulonglong)uVar7;
    if (uVar6 == 0) break;
    uVar7 = uVar6 - 1 >> 3;
    if (((this->ParentLinks).ArrayNum <= (int)uVar7) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_1.ElementIndex = 0;
    param_1.NodeIndex = *(uint *)((this->ParentLinks).AllocatorInstance.Data + (ulonglong)uVar7 * 4)
    ;
  }
  if (uVar7 != 0xffffffff) {
    uVar15 = ~uVar7 >> 0x1f;
    uVar6 = uVar4;
    if ((int)uVar7 < (this->TreeNodes).ArrayNum) {
      uVar6 = uVar15;
    }
    if ((uVar6 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar13 = (longlong)(int)uVar7;
    if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar13 * 8) != -1) {
      uVar6 = uVar4;
      if ((int)uVar7 < (this->TreeElements).ArrayNum) {
        uVar6 = uVar15;
      }
      if ((uVar6 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = (this->TreeElements).AllocatorInstance.Data;
      if ((int)uVar7 < (this->TreeNodes).ArrayNum) {
        uVar4 = uVar15;
      }
      if ((uVar4 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar11 = lVar13 * 0x420;
      if (*(int *)(pFVar9 + lVar11 + 0x410) <
          *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar13 * 8 + 4)) {
        local_468.AllocatorInstance.SecondaryData = (ForElementType<FLightSceneInfoCompact>)0x0;
        local_468.ArrayNum = 0;
        uVar6 = 0;
        if ((int)uVar7 < (this->TreeNodes).ArrayNum) {
          uVar6 = uVar15;
        }
        local_468.ArrayMax = 0x10;
        if ((uVar6 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar13 * 8 + 4);
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
        if (local_468.ArrayMax < (int)uVar6) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>_>
                    (0x40,0x10,uVar6,&local_468.AllocatorInstance,local_468.ArrayNum,
                     &local_468.ArrayMax);
        }
        CollapseNodesInternal(this,uVar7,&local_468);
        uVar6 = 0;
        if ((int)uVar7 < (this->TreeElements).ArrayNum) {
          uVar6 = uVar15;
        }
        if ((uVar6 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar16 = (TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>
                   *)((this->TreeElements).AllocatorInstance.Data + lVar11);
        uVar12 = uVar8;
        if (pTVar16 != &local_468) {
          if (local_468.AllocatorInstance.SecondaryData ==
              (ForElementType<FLightSceneInfoCompact>)0x0) {
            memmove(pTVar16,&local_468,0x400);
          }
          FVar1 = (pTVar16->AllocatorInstance).SecondaryData;
          if (FVar1 != (ForElementType<FLightSceneInfoCompact>)0x0) {
            FMemory::Free((void *)FVar1);
          }
          (pTVar16->AllocatorInstance).SecondaryData = local_468.AllocatorInstance.SecondaryData;
          local_468.AllocatorInstance.SecondaryData = (ForElementType<FLightSceneInfoCompact>)0x0;
          pTVar16->ArrayNum = local_468.ArrayNum;
          pTVar16->ArrayMax = local_468.ArrayMax;
          local_468.ArrayNum = 0;
          local_468.ArrayMax = 0x10;
        }
        while( true ) {
          uVar6 = 0;
          if ((int)uVar7 < (this->TreeElements).ArrayNum) {
            uVar6 = uVar15;
          }
          if ((uVar6 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar6 = (uint)uVar8;
          if (*(int *)((this->TreeElements).AllocatorInstance.Data + lVar11 + 0x410) <= (int)uVar6)
          break;
          uVar10 = uVar8 << 0x20;
          uVar4 = 0;
          if ((int)uVar7 < (this->TreeElements).ArrayNum) {
            uVar4 = uVar15;
          }
          if ((uVar4 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar9 = (this->TreeElements).AllocatorInstance.Data + lVar11;
          uVar4 = 0;
          if ((int)uVar6 < *(int *)(pFVar9 + 0x410)) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(FScriptContainerElement **)(pFVar9 + 0x400) != (FScriptContainerElement *)0x0) {
            pFVar9 = *(FScriptContainerElement **)(pFVar9 + 0x400);
          }
          uVar8 = (ulonglong)(uVar6 + 1);
          *(ulonglong *)(*(longlong *)(pFVar9 + uVar12 + 0x30) + 0x38) = uVar10 | uVar14;
          uVar12 = uVar12 + 0x40;
        }
        if (local_468.AllocatorInstance.SecondaryData != (ForElementType<FLightSceneInfoCompact>)0x0
           ) {
          FMemory::Free((void *)local_468.AllocatorInstance.SecondaryData);
        }
      }
    }
  }
  return;
}

// AddElementInternal @ 14529f8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::AddElementInternal
          (TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics> *this,uint param_1,
          FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,
          FPrimitiveSceneInfoCompact *param_4,
          TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> *param_5)

{
  FPrimitiveSceneInfoCompact *pFVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined8 uVar4;
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
  FPrimitiveSceneProxy *pFVar19;
  FOctreeElementId2 FVar20;
  FOctreeElementId2 FVar21;
  FOctreeNodeContext *pFVar22;
  bool bVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  FPrimitiveSceneInfoCompact *pFVar29;
  FScriptContainerElement *pFVar30;
  longlong lVar31;
  uint uVar32;
  double dVar33;
  uint uVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar39;
  uint uVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  uint uVar50;
  undefined4 uVar51;
  uint uVar52;
  uint uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 local_res10 [8];
  FOctreeNodeContext *local_res18;
  FBoxCenterAndExtent *local_res20;
  TVector4<double>_u_0 local_118;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 local_e0;
  TVector4<double>_u_0 local_d8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  double local_98;
  double local_90;
  
  lVar31 = (longlong)(int)param_1;
  uVar32 = ~param_1 >> 0x1f;
  local_res18 = param_2;
  local_res20 = param_3;
  while( true ) {
    uVar24 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar24 = uVar32;
    }
    if ((uVar24 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar30 = (this->TreeNodes).AllocatorInstance.Data + lVar31 * 8 + 4;
    *(int *)pFVar30 = *(int *)pFVar30 + 1;
    iVar25 = (this->TreeNodes).ArrayNum;
    uVar24 = 0;
    if ((int)param_1 < iVar25) {
      uVar24 = uVar32;
    }
    if (uVar24 == 0) {
      iVar25 = 0x506106c8;
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar30 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar30 + lVar31 * 8) != -1) {
      dVar11 = (param_2->Bounds).Center.field0_0x0._s_0.Z;
      dVar12 = (param_2->Bounds).Center.field0_0x0._s_0.W;
      dVar33 = param_2->ChildCenterOffset;
      dVar13 = (param_2->Bounds).Center.field0_0x0._s_0.X;
      dVar14 = (param_2->Bounds).Center.field0_0x0._s_0.Y;
      dVar39 = param_2->ChildExtent;
      auVar45._8_4_ = SUB84(dVar33,0);
      auVar45._0_8_ = dVar33;
      uVar51 = (undefined4)((ulonglong)dVar33 >> 0x20);
      auVar45._12_4_ = uVar51;
      dVar15 = (local_res20->Center).field0_0x0._s_0.X;
      dVar16 = (local_res20->Center).field0_0x0._s_0.Y;
      dVar17 = (local_res20->Center).field0_0x0._s_0.Z;
      dVar18 = (local_res20->Center).field0_0x0._s_0.W;
      auVar46._0_8_ = (dVar33 + dVar11) - dVar17;
      auVar46._8_8_ = (auVar45._8_8_ + dVar12) - dVar18;
      dVar8 = dVar18 - (dVar12 - dVar33);
      auVar34._8_4_ = SUB84(dVar39,0);
      auVar34._0_8_ = dVar39;
      auVar34._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      auVar47._8_4_ = SUB84(dVar8,0);
      auVar47._0_8_ = dVar17 - (dVar11 - dVar33);
      auVar47._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar47 = minpd(auVar46,auVar47);
      auVar35._8_8_ =
           -(ulonglong)(auVar34._8_8_ < auVar47._8_8_ + (local_res20->Extent).field0_0x0._s_0.W);
      auVar35._0_8_ = -(ulonglong)(dVar39 < auVar47._0_8_ + (local_res20->Extent).field0_0x0._s_0.Z)
      ;
      uVar24 = movmskpd(iVar25,auVar35);
      auVar48._8_4_ = SUB84(dVar33,0);
      auVar48._0_8_ = dVar33;
      auVar48._12_4_ = uVar51;
      auVar49._0_8_ = (dVar33 + dVar13) - dVar15;
      auVar49._8_8_ = (auVar48._8_8_ + dVar14) - dVar16;
      dVar8 = dVar16 - (dVar14 - dVar33);
      auVar6._8_4_ = SUB84(dVar8,0);
      auVar6._0_8_ = dVar15 - (dVar13 - dVar33);
      auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar47 = minpd(auVar49,auVar6);
      lVar28 = -(ulonglong)(dVar39 < auVar47._8_8_ + (local_res20->Extent).field0_0x0._s_0.Y);
      auVar9._8_4_ = (int)lVar28;
      auVar9._0_8_ = -(ulonglong)(dVar39 < auVar47._0_8_ + (local_res20->Extent).field0_0x0._s_0.X);
      auVar9._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
      iVar25 = movmskpd((int)pFVar30,auVar9);
      if ((uVar24 & 0x3fffffff) == 0 && iVar25 == 0) {
        auVar54._8_8_ = -(ulonglong)(dVar12 < dVar18);
        auVar54._0_8_ = -(ulonglong)(dVar11 < dVar17);
        iVar27 = movmskpd((int)local_res20,auVar54);
        auVar10._8_4_ = (int)-(ulonglong)(dVar14 < dVar16);
        auVar10._0_8_ = -(ulonglong)(dVar13 < dVar15);
        auVar10._12_4_ = (int)(-(ulonglong)(dVar14 < dVar16) >> 0x20);
        uVar24 = movmskpd(iVar25,auVar10);
        uVar26 = (iVar27 << 2 | uVar24) & 7;
        uVar24 = 0;
        if ((int)param_1 < (this->TreeNodes).ArrayNum) {
          uVar24 = uVar32;
        }
        if ((uVar24 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar52 = SUB84(param_2->ChildCenterOffset,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar53 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        dVar33 = (double)(float)-(uint)((uVar26 & ___xmm_00000008000000040000000200000001) ==
                                       ___xmm_00000008000000040000000200000001);
        dVar39 = (double)(float)-(uint)((uVar26 & _UNK_150744154) == _UNK_150744154);
        uVar32 = SUB84(dVar33,0);
        uVar24 = (uint)((ulonglong)dVar33 >> 0x20);
        uVar38 = SUB84(dVar39,0);
        uVar40 = (uint)((ulonglong)dVar39 >> 0x20);
        auVar36._0_4_ = ~uVar32 & uVar52;
        auVar36._4_4_ = ~uVar24 & uVar53;
        auVar36._8_4_ = ~uVar38 & uVar52;
        auVar36._12_4_ = ~uVar40 & uVar53;
        dVar33 = (double)(float)-(uint)((uVar26 & _UNK_150744158) == _UNK_150744158);
        uVar41 = SUB84(dVar33,0);
        uVar42 = (uint)((ulonglong)dVar33 >> 0x20);
        dVar33 = (double)(float)-(uint)((uVar26 & _UNK_15074415c) == _UNK_15074415c);
        uVar43 = SUB84(dVar33,0);
        uVar44 = (uint)((ulonglong)dVar33 >> 0x20);
        uVar50 = SUB84(param_2->ChildCenterOffset,0);
        auVar55._0_4_ = uVar32 & uVar50;
        uVar32 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20);
        auVar55._4_4_ = uVar24 & uVar32;
        auVar55._8_4_ = uVar38 & uVar50;
        auVar55._12_4_ = uVar40 & uVar32;
        local_d8._s_0.X = SUB168(auVar55 | auVar36,0) + (param_2->Bounds).Center.field0_0x0._s_0.X;
        local_d8._s_0.Y = SUB168(auVar55 | auVar36,8) + (param_2->Bounds).Center.field0_0x0._s_0.Y;
        auVar37._0_4_ = uVar41 & uVar50;
        auVar37._4_4_ = uVar42 & uVar32;
        auVar37._8_4_ = uVar43 & uVar50;
        auVar37._12_4_ = uVar44 & uVar32;
        auVar7._4_4_ = ~uVar42 & uVar53;
        auVar7._0_4_ = ~uVar41 & uVar52;
        auVar7._8_4_ = ~uVar43 & uVar52;
        auVar7._12_4_ = ~uVar44 & uVar53;
        local_90 = param_2->ChildExtent;
        local_d8._s_0.Z =
             (SUB168(auVar37 | auVar7,0) + (param_2->Bounds).Center.field0_0x0._s_0.Z) *
             (double)_UNK_150689548;
        local_d8._s_0.W =
             (SUB168(auVar37 | auVar7,8) + (param_2->Bounds).Center.field0_0x0._s_0.W) *
             (double)_UNK_15068954c;
        dVar33 = (double)_UNK_15068954c * local_90;
        local_98 = local_90 * __real_3fe0000000000000 * __real_3ff1000000000000;
        local_b8._8_4_ = SUB84(local_90,0);
        local_b8._0_8_ = local_90;
        local_b8._12_4_ = (int)((ulonglong)local_90 >> 0x20);
        local_a8._8_4_ = SUB84(dVar33,0);
        local_a8._0_8_ = (double)_UNK_150689548 * local_90;
        local_a8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        local_90 = local_90 - local_98;
        AddElementInternal(this,*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar31 * 8) +
                                uVar26,(FOctreeNodeContext *)&local_d8._s_0,local_res20,param_4,
                           param_5);
      }
      else {
        uVar24 = 0;
        if ((int)param_1 < (this->TreeElements).ArrayNum) {
          uVar24 = uVar32;
        }
        if ((uVar24 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar30 = (this->TreeElements).AllocatorInstance.Data + lVar31 * 0x10;
        iVar25 = *(int *)&pFVar30[8].field_0x0;
        if (iVar25 == *(int *)(pFVar30 + 0xc)) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)pFVar30,(int *)(pFVar30 + 0xc));
        }
        *(int *)&pFVar30[8].field_0x0 = iVar25 + 1;
        lVar28 = (longlong)iVar25;
        pFVar19 = param_4->Proxy;
        lVar31 = *(longlong *)&pFVar30->field_0x0;
        puVar2 = (undefined8 *)(lVar31 + lVar28 * 0x48);
        *puVar2 = param_4->PrimitiveSceneInfo;
        puVar2[1] = pFVar19;
        dVar33 = (param_4->Bounds).Origin.field0_0x0._s_0.Y;
        pdVar3 = (double *)(lVar31 + lVar28 * 0x48 + 0x10);
        *pdVar3 = (param_4->Bounds).Origin.field0_0x0._s_0.X;
        pdVar3[1] = dVar33;
        dVar33 = *(double *)&(param_4->Bounds).BoxExtent.field0_0x0;
        pdVar3 = (double *)(lVar31 + lVar28 * 0x48 + 0x20);
        *pdVar3 = (param_4->Bounds).Origin.field0_0x0._s_0.Z;
        pdVar3[1] = dVar33;
        uVar4 = *(undefined8 *)&param_4->MinDrawDistance;
        puVar2 = (undefined8 *)(lVar31 + lVar28 * 0x48 + 0x30);
        *puVar2 = *(undefined8 *)((longlong)&(param_4->Bounds).BoxExtent.field0_0x0 + 8);
        puVar2[1] = uVar4;
        *(undefined8 *)(lVar31 + lVar28 * 0x48 + 0x40) = *(undefined8 *)&param_4->VisibilityId;
        FVar21.ElementIndex = iVar25;
        FVar21.NodeIndex = param_1;
        SetElementId(this,param_4,FVar21);
      }
      return;
    }
    uVar24 = 0;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar24 = uVar32;
    }
    if ((uVar24 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar28 = lVar31 * 0x10;
    if ((*(int *)((this->TreeElements).AllocatorInstance.Data + lVar28 + 8) + 1 < 0x101) ||
       ((param_2->Bounds).Extent.field0_0x0._s_0.X <= this->MinLeafExtent)) {
      uVar24 = 0;
      if ((int)param_1 < (this->TreeElements).ArrayNum) {
        uVar24 = uVar32;
      }
      if ((uVar24 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar30 = (this->TreeElements).AllocatorInstance.Data + lVar28;
      iVar25 = *(int *)&pFVar30[8].field_0x0;
      if (iVar25 == *(int *)(pFVar30 + 0xc)) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,(ForAnyElementType *)pFVar30,(int *)(pFVar30 + 0xc));
      }
      *(int *)&pFVar30[8].field_0x0 = iVar25 + 1;
      lVar28 = (longlong)iVar25;
      pFVar19 = param_4->Proxy;
      lVar31 = *(longlong *)&pFVar30->field_0x0;
      puVar2 = (undefined8 *)(lVar31 + lVar28 * 0x48);
      *puVar2 = param_4->PrimitiveSceneInfo;
      puVar2[1] = pFVar19;
      dVar33 = (param_4->Bounds).Origin.field0_0x0._s_0.Y;
      pdVar3 = (double *)(lVar31 + lVar28 * 0x48 + 0x10);
      *pdVar3 = (param_4->Bounds).Origin.field0_0x0._s_0.X;
      pdVar3[1] = dVar33;
      dVar33 = *(double *)&(param_4->Bounds).BoxExtent.field0_0x0;
      pdVar3 = (double *)(lVar31 + lVar28 * 0x48 + 0x20);
      *pdVar3 = (param_4->Bounds).Origin.field0_0x0._s_0.Z;
      pdVar3[1] = dVar33;
      uVar4 = *(undefined8 *)&param_4->MinDrawDistance;
      puVar2 = (undefined8 *)(lVar31 + lVar28 * 0x48 + 0x30);
      *puVar2 = *(undefined8 *)((longlong)&(param_4->Bounds).BoxExtent.field0_0x0 + 8);
      puVar2[1] = uVar4;
      *(undefined8 *)(lVar31 + lVar28 * 0x48 + 0x40) = *(undefined8 *)&param_4->VisibilityId;
      FVar20.ElementIndex = iVar25;
      FVar20.NodeIndex = param_1;
      SetElementId(this,param_4,FVar20);
      return;
    }
    uVar24 = 0;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar24 = uVar32;
    }
    if ((uVar24 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) break;
    TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_>::operator=
              (param_5,(TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> *)
                       ((this->TreeElements).AllocatorInstance.Data + lVar28));
    uVar24 = AllocateEightNodes(this);
    uVar26 = uVar24 - 1 >> 3;
    if (((this->ParentLinks).ArrayNum <= (int)uVar26) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(uint *)((this->ParentLinks).AllocatorInstance.Data + (ulonglong)uVar26 * 4) = param_1;
    uVar26 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar26 = uVar32;
    }
    if ((uVar26 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar31 * 8) = uVar24;
    uVar24 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar24 = uVar32;
    }
    if ((uVar24 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar22 = local_res18;
    *(undefined4 *)((this->TreeNodes).AllocatorInstance.Data + lVar31 * 8 + 4) = 0;
    iVar25 = param_5->ArrayNum;
    pFVar29 = (FPrimitiveSceneInfoCompact *)(param_5->AllocatorInstance).Data;
    pFVar1 = pFVar29 + iVar25;
    while( true ) {
      if (param_5->ArrayNum != iVar25) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FPrimitiveSceneInfoCompact,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      param_2 = local_res18;
      if (pFVar29 == pFVar1) break;
      local_118._s_0.X = (pFVar29->Bounds).Origin.field0_0x0._s_0.X;
      local_118._s_0.Y = (pFVar29->Bounds).Origin.field0_0x0._s_0.Y;
      local_118._s_0.Z = (pFVar29->Bounds).Origin.field0_0x0._s_0.Z;
      uVar4 = *(undefined8 *)&(pFVar29->Bounds).BoxExtent.field0_0x0;
      local_f8 = (double)(float)uVar4;
      dStack_f0 = (double)(float)((ulonglong)uVar4 >> 0x20);
      local_e8 = (double)(pFVar29->Bounds).BoxExtent.field0_0x0._s_0.Z;
      local_e0 = 0;
      local_118._s_0.W = 0.0;
      AddElementInternal(this,param_1,pFVar22,(FBoxCenterAndExtent *)&local_118._s_0,pFVar29,param_5
                        );
      pFVar29 = pFVar29 + 1;
    }
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// AllocateEightNodes @ 1452b4c50

uint __thiscall
TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::AllocateEightNodes
          (TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics> *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  
  iVar5 = (this->FreeList).ArrayNum;
  if (iVar5 == 0) {
    uVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,8,&(this->TreeNodes).AllocatorInstance,&(this->TreeNodes).ArrayNum,
                       &(this->TreeNodes).ArrayMax);
    DefaultConstructItems<TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNode,int>
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
                      (0x10,8,8,&(this->TreeElements).AllocatorInstance,
                       &(this->TreeElements).ArrayNum,&(this->TreeElements).ArrayMax);
    pFVar6 = (this->TreeElements).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(undefined8 *)(pFVar6 + 0x18) = 0;
    *(undefined8 *)(pFVar6 + 0x20) = 0;
    *(undefined8 *)(pFVar6 + 0x28) = 0;
    *(undefined8 *)(pFVar6 + 0x30) = 0;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined8 *)(pFVar6 + 0x40) = 0;
    *(undefined8 *)(pFVar6 + 0x48) = 0;
    *(undefined8 *)(pFVar6 + 0x50) = 0;
    *(undefined8 *)(pFVar6 + 0x58) = 0;
    *(undefined8 *)(pFVar6 + 0x60) = 0;
    *(undefined8 *)(pFVar6 + 0x68) = 0;
    *(undefined8 *)(pFVar6 + 0x70) = 0;
    *(undefined8 *)(pFVar6 + 0x78) = 0;
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
  iVar7 = iVar5 + -1;
  iVar5 = *(int *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar5 * 4 + -4);
  (this->FreeList).ArrayNum = iVar7;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&(this->FreeList).AllocatorInstance,iVar7,&(this->FreeList).ArrayMax);
  return iVar5 * 8 + 1;
}

// CollapseNodesInternal @ 1452b8440

void __thiscall
TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::CollapseNodesInternal
          (TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics> *this,uint param_1,
          TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  uint uVar7;
  
  lVar11 = (longlong)(int)param_1;
  uVar8 = ~param_1 >> 0x1f;
  uVar4 = 0;
  if ((int)param_1 < (this->TreeElements).ArrayNum) {
    uVar4 = uVar8;
  }
  if (uVar4 == 0) {
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
  pTVar10 = (TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> *)
            ((this->TreeElements).AllocatorInstance.Data + lVar11 * 0x10);
  if (param_2 == pTVar10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = pTVar10->ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    memmove((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x48,
            (pTVar10->AllocatorInstance).Data,(longlong)iVar1 * 0x48);
    pTVar10->ArrayNum = 0;
  }
  uVar4 = 0;
  if ((int)param_1 < (this->TreeElements).ArrayNum) {
    uVar4 = uVar8;
  }
  if (uVar4 == 0) {
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
  pFVar9 = (this->TreeElements).AllocatorInstance.Data + lVar11 * 0x10;
  iVar1 = *(int *)(pFVar9 + 0xc);
  *(undefined4 *)&pFVar9[8].field_0x0 = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)pFVar9,0,(int *)(pFVar9 + 0xc));
  }
  uVar4 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar4 = uVar8;
  }
  if (uVar4 == 0) {
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
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar11 * 8) != -1) {
    uVar4 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar4 = uVar8;
    }
    if (uVar4 == 0) {
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
    uVar7 = 0;
    uVar4 = *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar11 * 8);
    do {
      CollapseNodesInternal(this,uVar7 + uVar4,param_2);
      bVar6 = (char)uVar7 + 1;
      uVar7 = (uint)bVar6;
    } while ((char)bVar6 < '\b');
    uVar7 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
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
    *(undefined4 *)((this->TreeNodes).AllocatorInstance.Data + lVar11 * 8) = 0xffffffff;
    FreeEightNodes(this,uVar4);
  }
  return;
}

// FreeEightNodes @ 1452c31e0

void __thiscall
TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FreeEightNodes
          (TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics> *this,uint param_1)

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

// RemoveElement @ 1452d1280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::RemoveElement
          (TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics> *this,
          FOctreeElementId2 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> *pTVar7;
  FOctreeElementId2 FVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  bool bVar13;
  int iStackX_14;
  TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> local_38;
  
  uVar6 = param_1.NodeIndex;
  bVar13 = (int)uVar6 < 0;
  if (bVar13 || (this->TreeElements).ArrayNum <= (int)uVar6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iStackX_14 = param_1.ElementIndex;
  lVar12 = (longlong)(int)uVar6 * 0x10;
  pFVar11 = (this->TreeElements).AllocatorInstance.Data + lVar12;
  if ((longlong)param_1 < 0 || *(int *)(pFVar11 + 8) <= iStackX_14) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = (*(int *)(pFVar11 + 8) - iStackX_14) + -1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)pFVar11 + (longlong)iStackX_14 * 0x48),
            (void *)(*(longlong *)pFVar11 + (longlong)(*(int *)(pFVar11 + 8) - iVar5) * 0x48),
            (longlong)iVar5 * 0x48);
  }
  *(int *)(pFVar11 + 8) = *(int *)(pFVar11 + 8) + -1;
  if (bVar13 || (this->TreeElements).ArrayNum <= (int)uVar6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iStackX_14 < *(int *)((this->TreeElements).AllocatorInstance.Data + lVar12 + 8)) {
    if (bVar13 || (this->TreeElements).ArrayNum <= (int)uVar6) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar11 = (this->TreeElements).AllocatorInstance.Data;
    if ((longlong)param_1 < 0 || *(int *)(pFVar11 + lVar12 + 8) <= iStackX_14) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SetElementId(this,(FPrimitiveSceneInfoCompact *)
                      (*(longlong *)(pFVar11 + lVar12) + (longlong)iStackX_14 * 0x48),param_1);
  }
  uVar6 = 0xffffffff;
  while( true ) {
    uVar10 = param_1.NodeIndex;
    uVar3 = 0;
    if ((int)uVar10 < (this->TreeNodes).ArrayNum) {
      uVar3 = ~uVar10 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar11 = (this->TreeNodes).AllocatorInstance.Data + (longlong)(int)uVar10 * 8 + 4;
    *(int *)pFVar11 = *(int *)pFVar11 + -1;
    uVar3 = 0;
    if ((int)uVar10 < (this->TreeNodes).ArrayNum) {
      uVar3 = ~uVar10 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = uVar10;
    if (6 < *(uint *)((this->TreeNodes).AllocatorInstance.Data + (longlong)(int)uVar10 * 8 + 4)) {
      uVar3 = uVar6;
    }
    if (uVar10 == 0) break;
    uVar6 = uVar10 - 1 >> 3;
    if ((this->ParentLinks).ArrayNum <= (int)uVar6) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1.ElementIndex = 0;
    param_1.NodeIndex = *(uint *)((this->ParentLinks).AllocatorInstance.Data + (ulonglong)uVar6 * 4)
    ;
    uVar6 = uVar3;
  }
  if (uVar3 != 0xffffffff) {
    uVar10 = ~uVar3 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar3 < (this->TreeNodes).ArrayNum) {
      uVar6 = uVar10;
    }
    if (uVar6 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar12 = (longlong)(int)uVar3;
    if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar12 * 8) != -1) {
      uVar6 = 0;
      if ((int)uVar3 < (this->TreeElements).ArrayNum) {
        uVar6 = uVar10;
      }
      if (uVar6 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar11 = (this->TreeElements).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar3 < (this->TreeNodes).ArrayNum) {
        uVar6 = uVar10;
      }
      if (uVar6 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      lVar9 = lVar12 * 0x10;
      if (*(int *)(pFVar11 + lVar9 + 8) <
          *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar12 * 8 + 4)) {
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.ArrayNum = 0;
        local_38.ArrayMax = 0;
        uVar6 = 0;
        if ((int)uVar3 < (this->TreeNodes).ArrayNum) {
          uVar6 = uVar10;
        }
        if (uVar6 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        uVar6 = *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar12 * 8 + 4);
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
        if (local_38.ArrayMax < (int)uVar6) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,uVar6,&local_38.AllocatorInstance,local_38.ArrayNum,&local_38.ArrayMax);
        }
        CollapseNodesInternal(this,uVar3,&local_38);
        uVar6 = 0;
        if ((int)uVar3 < (this->TreeElements).ArrayNum) {
          uVar6 = uVar10;
        }
        if (uVar6 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pTVar7 = (TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> *)
                 ((this->TreeElements).AllocatorInstance.Data + lVar9);
        if (pTVar7 != &local_38) {
          pFVar11 = (pTVar7->AllocatorInstance).Data;
          if (pFVar11 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar11);
          }
          (pTVar7->AllocatorInstance).Data = local_38.AllocatorInstance.Data;
          local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pTVar7->ArrayNum = local_38.ArrayNum;
          pTVar7->ArrayMax = local_38.ArrayMax;
          local_38.ArrayNum = 0;
          local_38.ArrayMax = 0;
        }
        uVar6 = 0;
        while( true ) {
          uVar4 = 0;
          if ((int)uVar3 < (this->TreeElements).ArrayNum) {
            uVar4 = uVar10;
          }
          if (uVar4 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (*(int *)((this->TreeElements).AllocatorInstance.Data + lVar9 + 8) <= (int)uVar6)
          break;
          FVar8.ElementIndex = uVar6;
          FVar8.NodeIndex = uVar3;
          uVar4 = 0;
          if ((int)uVar3 < (this->TreeElements).ArrayNum) {
            uVar4 = uVar10;
          }
          if (uVar4 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          pFVar11 = (this->TreeElements).AllocatorInstance.Data;
          uVar4 = 0;
          if ((int)uVar6 < *(int *)(pFVar11 + lVar9 + 8)) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if (uVar4 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          SetElementId(this,(FPrimitiveSceneInfoCompact *)
                            (*(longlong *)(pFVar11 + lVar9) + (longlong)(int)uVar6 * 0x48),FVar8);
          uVar6 = uVar6 + 1;
        }
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// SetElementId @ 1452d33d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::SetElementId
          (TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics> *this,
          FPrimitiveSceneInfoCompact *param_1,FOctreeElementId2 param_2)

{
  uint uVar1;
  FScene *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  param_1->PrimitiveSceneInfo->OctreeId = param_2;
  uVar1 = param_1->PrimitiveSceneInfo->PackedIndex;
  if ((uVar1 != 0xffffffff) && (uVar1 != 0x7fffffff)) {
    pFVar2 = param_1->PrimitiveSceneInfo->Scene;
    uVar5 = 0;
    if ((int)uVar1 < (pFVar2->PrimitiveOctreeIndex).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
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
    *(uint *)((pFVar2->PrimitiveOctreeIndex).AllocatorInstance.Data + (longlong)(int)uVar1 * 4) =
         param_2.NodeIndex;
  }
  return;
}

// ~TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics> @ 145403460

void __thiscall
TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics>::
~TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics>
          (TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>,int>
            ((TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>
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

// ~TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics> @ 1454034d0

void __thiscall
TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::
~TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>
          (TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> *)
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

// AddElement @ 145419d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics>::AddElement
          (TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics> *this,
          FLightSceneInfoCompact *param_1)

{
  undefined1 auStackY_4a8 [32];
  FBoxCenterAndExtent local_478;
  TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_> local_438;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_438.ArrayMax = 0x10;
  local_438.AllocatorInstance.SecondaryData = (ForElementType<FLightSceneInfoCompact>)0x0;
  local_438.ArrayNum = 0;
  FLightSceneInfo::GetBoundingBox(param_1->LightSceneInfo,&local_478);
  AddElementInternal(this,0,&this->RootNodeContext,&local_478,param_1,&local_438);
  if (local_438.AllocatorInstance.SecondaryData != (ForElementType<FLightSceneInfoCompact>)0x0) {
    FMemory::Free((void *)local_438.AllocatorInstance.SecondaryData);
  }
  return;
}

// ApplyOffset @ 14541f630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics>::ApplyOffset
          (TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics> *this,TVector<double> *param_1,
          bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  int iVar8;
  bool bVar9;
  ulonglong uVar10;
  ForElementType<FLightSceneInfoCompact> FVar11;
  ForElementType<FLightSceneInfoCompact> FVar12;
  undefined1 auStackY_8e8 [32];
  undefined1 local_8b8 [16];
  FBoxCenterAndExtent local_8a8;
  TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_> local_868;
  TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_> local_448;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  local_868.AllocatorInstance.SecondaryData = (ForElementType<FLightSceneInfoCompact>)0x0;
  local_868.ArrayNum = 0;
  local_868.ArrayMax = 0x10;
  if (((this->TreeNodes).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)((this->TreeNodes).AllocatorInstance.Data + 4);
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (local_868.ArrayMax < (int)uVar4) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>_>
              (0x40,0x10,uVar4,&local_868.AllocatorInstance,local_868.ArrayNum,&local_868.ArrayMax);
  }
  CollapseNodesInternal(this,0,&local_868);
  Destroy(this);
  iVar8 = local_868.ArrayNum;
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
  uVar10 = (ulonglong)local_868.ArrayNum;
  FVar11 = (ForElementType<FLightSceneInfoCompact>)&local_868;
  if (local_868.AllocatorInstance.SecondaryData != (ForElementType<FLightSceneInfoCompact>)0x0) {
    FVar11 = local_868.AllocatorInstance.SecondaryData;
  }
  FVar12 = (ForElementType<FLightSceneInfoCompact>)(uVar10 * 0x40 + (longlong)FVar11);
  while( true ) {
    if ((uint)uVar10 != iVar8) {
      `TCheckedPointerIterator<FLightSceneInfoCompact,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_8b8);
    }
    if (FVar11 == FVar12) break;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    dVar2 = ((__m128d *)((longlong)FVar11 + 0x10))->m128d_f64[0];
    dVar3 = *(double *)((longlong)FVar11 + 0x18);
    dVar7 = *(double *)((longlong)FVar11 + 8) + (param_1->field0_0x0)._s_0.Y;
    auVar6._8_4_ = SUB84(dVar7,0);
    auVar6._0_8_ = *(double *)FVar11 + (param_1->field0_0x0)._s_0.X;
    auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])FVar11 = auVar6;
    ((__m128d *)((longlong)FVar11 + 0x10))->m128d_f64[0] = dVar1 + dVar2;
    *(double *)((longlong)FVar11 + 0x18) = dVar3 + 0.0;
    local_448.AllocatorInstance.SecondaryData = (ForElementType<FLightSceneInfoCompact>)0x0;
    local_448.ArrayNum = 0;
    local_448.ArrayMax = 0x10;
    FLightSceneInfo::GetBoundingBox(*(FLightSceneInfo **)((longlong)FVar11 + 0x30),&local_8a8);
    AddElementInternal(this,0,&this->RootNodeContext,&local_8a8,(FLightSceneInfoCompact *)FVar11,
                       &local_448);
    if (local_448.AllocatorInstance.SecondaryData != (ForElementType<FLightSceneInfoCompact>)0x0) {
      FMemory::Free((void *)local_448.AllocatorInstance.SecondaryData);
    }
    uVar10 = (ulonglong)(uint)local_868.ArrayNum;
    FVar11 = (ForElementType<FLightSceneInfoCompact>)((longlong)FVar11 + 0x40);
  }
  if (local_868.AllocatorInstance.SecondaryData != (ForElementType<FLightSceneInfoCompact>)0x0) {
    FMemory::Free((void *)local_868.AllocatorInstance.SecondaryData);
  }
  return;
}

// ApplyOffset @ 14541f890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::ApplyOffset
          (TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics> *this,
          TVector<double> *param_1,bool param_2)

{
  FPrimitiveSceneInfoCompact *pFVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> local_a8 [3];
  TVector4<double>_u_0 local_78;
  undefined1 local_58 [16];
  double local_48;
  undefined8 local_40;
  
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  if ((this->TreeNodes).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar4 = *(uint *)((this->TreeNodes).AllocatorInstance.Data + 4);
  if (-1 < (int)uVar4) {
    if (local_b8.ArrayMax < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,uVar4,&local_b8.AllocatorInstance,local_b8.ArrayNum,&local_b8.ArrayMax);
    }
    CollapseNodesInternal(this,0,&local_b8);
    Destroy(this);
    if (!param_2) {
      dVar2 = (param_1->field0_0x0)._s_0.Y;
      dVar3 = (param_1->field0_0x0)._s_0.Z;
      (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.X =
           (param_1->field0_0x0)._s_0.X + (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.X;
      (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Y =
           dVar2 + (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Y;
      (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Z =
           dVar3 + (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Z;
    }
    iVar6 = local_b8.ArrayNum;
    uVar8 = (ulonglong)local_b8.ArrayNum;
    pFVar1 = (FPrimitiveSceneInfoCompact *)(local_b8.AllocatorInstance.Data + uVar8 * 0x48);
    pFVar9 = local_b8.AllocatorInstance.Data + 0x18;
    while( true ) {
      if ((int)uVar8 != iVar6) {
        `TCheckedPointerIterator<FPrimitiveSceneInfoCompact,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if ((FPrimitiveSceneInfoCompact *)(pFVar9 + -0x18) == pFVar1) break;
      local_78._s_0.Z = (param_1->field0_0x0)._s_0.Z + *(double *)(pFVar9 + 8);
      local_78._s_0.X = (param_1->field0_0x0)._s_0.X + *(double *)(pFVar9 + -8);
      local_78._s_0.Y = (param_1->field0_0x0)._s_0.Y + *(double *)pFVar9;
      *(undefined8 *)(pFVar9 + 8) = local_78._s_0.Z;
      *(undefined8 *)(pFVar9 + -8) = local_78._s_0.X;
      *(undefined8 *)pFVar9 = local_78._s_0.Y;
      dVar2 = (double)(float)((ulonglong)*(double *)(pFVar9 + 0x10) >> 0x20);
      local_a8[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8[0].ArrayNum = 0;
      local_a8[0].ArrayMax = 0;
      local_48 = (double)*(float *)(pFVar9 + 0x18);
      local_40 = 0;
      local_78._s_0.W = 0.0;
      local_58._8_4_ = SUB84(dVar2,0);
      local_58._0_8_ = (double)SUB84(*(double *)(pFVar9 + 0x10),0);
      local_58._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      AddElementInternal(this,0,&this->RootNodeContext,(FBoxCenterAndExtent *)&local_78._s_0,
                         (FPrimitiveSceneInfoCompact *)(pFVar9 + -0x18),local_a8);
      if (local_a8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8[0].AllocatorInstance.Data);
      }
      uVar8 = local_b8._8_8_ & 0xffffffff;
      pFVar9 = pFVar9 + 0x48;
    }
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// Destroy @ 145429460

void __thiscall
TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics>::Destroy
          (TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics> *this)

{
  int *piVar1;
  int *piVar2;
  TArray<TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>,TAlignedHeapAllocator<16>_>
  *pTVar3;
  TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_> *pTVar4;
  int iVar5;
  
  piVar1 = &(this->TreeNodes).ArrayMax;
  (this->TreeNodes).ArrayNum = 0;
  if ((this->TreeNodes).ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,&(this->TreeNodes).AllocatorInstance,0,piVar1);
  }
  pTVar3 = &this->TreeElements;
  piVar2 = &(this->TreeElements).ArrayMax;
  pTVar4 = (TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>
            *)(pTVar3->AllocatorInstance).Data;
  iVar5 = (this->TreeElements).ArrayNum;
  if ((this->TreeElements).ArrayMax < 1) {
    DestructItems<TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>,int>
              (pTVar4,iVar5);
    (this->TreeElements).ArrayNum = 0;
    if (*piVar2 != 1) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x420,0x10,1,&pTVar3->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>,int>
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
  DefaultConstructItems<TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics>::FNode,int>
            ((this->TreeNodes).AllocatorInstance.Data + (longlong)iVar5 * 8,1);
  iVar5 = (this->TreeElements).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (0x420,0x10,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->TreeElements).ArrayNum = iVar5 + 1;
  DefaultConstructItems<TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>,int>
            ((pTVar3->AllocatorInstance).Data + (longlong)iVar5 * 0x420,1);
  return;
}

// Destroy @ 1454295f0

void __thiscall
TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::Destroy
          (TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics> *this)

{
  int *piVar1;
  int *piVar2;
  TArray<TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_>,TAlignedHeapAllocator<8>_>
  *pTVar3;
  TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  piVar1 = &(this->TreeNodes).ArrayMax;
  (this->TreeNodes).ArrayNum = 0;
  if ((this->TreeNodes).ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,&(this->TreeNodes).AllocatorInstance,0,piVar1);
  }
  pTVar3 = &this->TreeElements;
  piVar2 = &(this->TreeElements).ArrayMax;
  pTVar4 = (TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> *)
           (pTVar3->AllocatorInstance).Data;
  iVar5 = (this->TreeElements).ArrayNum;
  if ((this->TreeElements).ArrayMax < 1) {
    DestructItems<TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_>,int>(pTVar4,iVar5);
    (this->TreeElements).ArrayNum = 0;
    if (*piVar2 != 1) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                (0x10,8,1,&pTVar3->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_>,int>(pTVar4,iVar5);
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
  DefaultConstructItems<TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNode,int>
            ((this->TreeNodes).AllocatorInstance.Data + (longlong)iVar5 * 8,1);
  iVar5 = (this->TreeElements).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                      (0x810,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->TreeElements).ArrayNum = iVar5 + 1;
  pFVar6 = (pTVar3->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  return;
}

// GetElementsForNode @ 145636430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArrayView<FPrimitiveSceneInfoCompact_const_,int> * __thiscall
TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::GetElementsForNode
          (TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics> *this,
          TArrayView<FPrimitiveSceneInfoCompact_const_,int> *__return_storage_ptr__,uint param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<FPrimitiveSceneInfoCompact_const_,int> *pTVar5;
  FScriptContainerElement *pFVar6;
  
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
      pTVar5 = (TArrayView<FPrimitiveSceneInfoCompact_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar6 = (this->TreeElements).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10;
  iVar1 = *(int *)(pFVar6 + 8);
  __return_storage_ptr__->DataPtr = *(FPrimitiveSceneInfoCompact **)pFVar6;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<FPrimitiveSceneInfoCompact_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

