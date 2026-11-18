// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 2

// AddElementInternal @ 14439b680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>::
AddElementInternal(TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>
                   *this,uint param_1,FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,
                  FVertexInfo *param_4,
                  TArray<RigApplicationHelpers::FVertexInfo,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                  *param_5)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
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
  undefined8 uVar17;
  FOctreeNodeContext *pFVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  TArray<RigApplicationHelpers::FVertexInfo,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *_Src;
  ForElementType<RigApplicationHelpers::FVertexInfo> FVar25;
  uint uVar26;
  ForElementType<RigApplicationHelpers::FVertexInfo> FVar27;
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
  double dStack_f0;
  double local_e8;
  undefined8 local_e0;
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
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar2 + lVar29 * 8) != -1) {
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
      uVar20 = movmskpd(iVar21,auVar32);
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
      iVar21 = movmskpd((int)pFVar2,auVar7);
      if ((uVar20 & 0x3fffffff) == 0 && iVar21 == 0) {
        auVar50._8_8_ = -(ulonglong)(dVar10 < dVar16);
        auVar50._0_8_ = -(ulonglong)(dVar9 < dVar15);
        iVar23 = movmskpd((int)local_res20,auVar50);
        auVar8._8_4_ = (int)-(ulonglong)(dVar12 < dVar14);
        auVar8._0_8_ = -(ulonglong)(dVar11 < dVar13);
        auVar8._12_4_ = (int)(-(ulonglong)(dVar12 < dVar14) >> 0x20);
        uVar20 = movmskpd(iVar21,auVar8);
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
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
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
        auVar5._4_4_ = ~uVar38 & uVar49;
        auVar5._0_4_ = ~uVar37 & uVar48;
        auVar5._8_4_ = ~uVar39 & uVar48;
        auVar5._12_4_ = ~uVar40 & uVar49;
        local_90 = param_2->ChildExtent;
        local_d8._s_0.Z =
             (SUB168(auVar34 | auVar5,0) + (param_2->Bounds).Center.field0_0x0._s_0.Z) *
             (double)_UNK_150689548;
        local_d8._s_0.W =
             (SUB168(auVar34 | auVar5,8) + (param_2->Bounds).Center.field0_0x0._s_0.W) *
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
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar27 = (ForElementType<RigApplicationHelpers::FVertexInfo>)
                 (lVar29 * 0x110 + (longlong)(this->TreeElements).AllocatorInstance.Data);
        iVar21 = *(int *)((ForElementType<RigApplicationHelpers::FVertexInfo> *)
                         ((longlong)FVar27 + 0x108))->InlineData;
        if (iVar21 == *(int *)((longlong)FVar27 + 0x10c)) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<RigApplicationHelpers::FVertexInfo>_>
                             (0x410,(ForElementType<RigApplicationHelpers::FVertexInfo> *)FVar27,
                              (int *)((longlong)FVar27 + 0x10c));
        }
        *(int *)((ForElementType<RigApplicationHelpers::FVertexInfo> *)((longlong)FVar27 + 0x108))->
                InlineData = iVar21 + 1;
        FVar25 = *(ForElementType<RigApplicationHelpers::FVertexInfo> *)((longlong)FVar27 + 0x100);
        if (*(ForElementType<RigApplicationHelpers::FVertexInfo> *)((longlong)FVar27 + 0x100) ==
            (ForElementType<RigApplicationHelpers::FVertexInfo>)0x0) {
          FVar25 = FVar27;
        }
        uVar17 = *(undefined8 *)((longlong)&(param_4->Position).field0_0x0 + 8);
        puVar1 = (undefined8 *)((longlong)FVar25 + (longlong)iVar21 * 0x10);
        *puVar1 = *(undefined8 *)&(param_4->Position).field0_0x0;
        puVar1[1] = uVar17;
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
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar24 = lVar29 * 0x110;
    if ((*(int *)((this->TreeElements).AllocatorInstance.Data + lVar24 + 0x108) + 1 < 0x11) ||
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
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar27 = (ForElementType<RigApplicationHelpers::FVertexInfo>)
               (lVar24 + (longlong)(this->TreeElements).AllocatorInstance.Data);
      iVar21 = *(int *)((ForElementType<RigApplicationHelpers::FVertexInfo> *)
                       ((longlong)FVar27 + 0x108))->InlineData;
      if (iVar21 == *(int *)((longlong)FVar27 + 0x10c)) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<RigApplicationHelpers::FVertexInfo>_>
                           (0x410,(ForElementType<RigApplicationHelpers::FVertexInfo> *)FVar27,
                            (int *)((longlong)FVar27 + 0x10c));
      }
      *(int *)((ForElementType<RigApplicationHelpers::FVertexInfo> *)((longlong)FVar27 + 0x108))->
              InlineData = iVar21 + 1;
      FVar25 = *(ForElementType<RigApplicationHelpers::FVertexInfo> *)((longlong)FVar27 + 0x100);
      if (*(ForElementType<RigApplicationHelpers::FVertexInfo> *)((longlong)FVar27 + 0x100) ==
          (ForElementType<RigApplicationHelpers::FVertexInfo>)0x0) {
        FVar25 = FVar27;
      }
      uVar17 = *(undefined8 *)((longlong)&(param_4->Position).field0_0x0 + 8);
      puVar1 = (undefined8 *)((longlong)FVar25 + (longlong)iVar21 * 0x10);
      *puVar1 = *(undefined8 *)&(param_4->Position).field0_0x0;
      puVar1[1] = uVar17;
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
    _Src = (TArray<RigApplicationHelpers::FVertexInfo,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
            *)((this->TreeElements).AllocatorInstance.Data + lVar24);
    if (param_5 != _Src) {
      if ((_Src->AllocatorInstance).SecondaryData ==
          (ForElementType<RigApplicationHelpers::FVertexInfo>)0x0) {
        memmove(param_5,_Src,0x100);
      }
      FVar27 = (param_5->AllocatorInstance).SecondaryData;
      if (FVar27 != (ForElementType<RigApplicationHelpers::FVertexInfo>)0x0) {
        FMemory::Free((void *)FVar27);
      }
      (param_5->AllocatorInstance).SecondaryData = (_Src->AllocatorInstance).SecondaryData;
      (_Src->AllocatorInstance).SecondaryData =
           (ForElementType<RigApplicationHelpers::FVertexInfo>)0x0;
      param_5->ArrayNum = _Src->ArrayNum;
      param_5->ArrayMax = _Src->ArrayMax;
      _Src->ArrayNum = 0;
      _Src->ArrayMax = 0x10;
    }
    uVar20 = AllocateEightNodes(this);
    uVar22 = uVar20 - 1 >> 3;
    if (((this->ParentLinks).ArrayNum <= (int)uVar22) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar18 = local_res18;
    *(undefined4 *)((this->TreeNodes).AllocatorInstance.Data + lVar29 * 8 + 4) = 0;
    FVar27 = (param_5->AllocatorInstance).SecondaryData;
    iVar21 = param_5->ArrayNum;
    FVar25 = (ForElementType<RigApplicationHelpers::FVertexInfo>)param_5;
    if (FVar27 != (ForElementType<RigApplicationHelpers::FVertexInfo>)0x0) {
      FVar25 = FVar27;
    }
    FVar27 = (ForElementType<RigApplicationHelpers::FVertexInfo>)
             ((longlong)iVar21 * 0x10 + (longlong)FVar25);
    while( true ) {
      if (param_5->ArrayNum != iVar21) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<RigApplicationHelpers::FVertexInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      param_2 = local_res18;
      if (FVar25 == FVar27) break;
      local_118._s_0.X = (double)(float)*(undefined8 *)FVar25;
      local_118._s_0.Y = (double)(float)((ulonglong)*(undefined8 *)FVar25 >> 0x20);
      local_118._s_0.Z = (double)*(float *)((longlong)FVar25 + 8);
      local_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_118._s_0.W = 0.0;
      local_e0 = 0;
      AddElementInternal(this,param_1,pFVar18,(FBoxCenterAndExtent *)&local_118._s_0,
                         (FVertexInfo *)FVar25,param_5);
      FVar25 = (ForElementType<RigApplicationHelpers::FVertexInfo>)((longlong)FVar25 + 0x10);
    }
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<RigApplicationHelpers::FVertexInfo>_>
                (0x10,4,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// AllocateEightNodes @ 14439c500

uint __thiscall
TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>::
AllocateEightNodes(TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>
                   *this)

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
    DefaultConstructItems<TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>::FNode,int>
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
                      (0x110,8,8,&(this->TreeElements).AllocatorInstance,
                       &(this->TreeElements).ArrayNum,&(this->TreeElements).ArrayMax);
    DefaultConstructItems<TArray<RigApplicationHelpers::FVertexInfo,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
              ((this->TreeElements).AllocatorInstance.Data + (longlong)iVar5 * 0x110,8);
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

