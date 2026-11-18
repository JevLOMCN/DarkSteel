// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// FBoundarySelector @ 14cb610e0

FBoundarySelector * __thiscall
FBoundarySelector::FBoundarySelector
          (FBoundarySelector *this,FDynamicMesh3 *param_1,FMeshBoundaryLoops *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FMeshTopologySelector::FMeshTopologySelector((FMeshTopologySelector *)this);
  *(FDynamicMesh3 **)&this->field_0x48 = param_1;
  *(undefined ***)this = &___7FBoundarySelector__6B_;
  puVar2 = ::operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_2;
    *puVar2 = &___7FBoundaryTopologyProvider__6B_;
  }
  puVar1 = *(undefined8 **)&this->field_0x50;
  *(undefined8 **)&this->field_0x50 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined2 *)&this->field_0x90 = 0;
  return this;
}

// DrawSelection @ 14cb85950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FBoundarySelector::DrawSelection
          (FBoundarySelector *this,FGroupTopologySelection *param_1,FToolDataVisualizer *param_2,
          FViewCameraState *param_3,ECornerDrawStyle param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  double *pdVar3;
  float fVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  undefined4 uVar22;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar23;
  bool bVar24;
  uint uVar25;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar26;
  longlong *plVar27;
  ulonglong uVar28;
  TVector<double> *pTVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar33;
  bool *pbVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  undefined1 local_res10 [8];
  int local_res18;
  FViewCameraState *local_res20;
  ulonglong in_stack_fffffffffffffd30;
  int iStack_29c;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_278;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_258;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_248;
  undefined8 uStack_228;
  TVector<double>_u_0 local_220;
  undefined1 local_208 [16];
  double local_1f8;
  undefined1 local_1f0 [16];
  double local_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined1 local_1c0 [16];
  double local_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined1 local_190 [16];
  double local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  TVector<double> local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_100 [6];
  
  local_288 = *(undefined8 *)&(param_2->LineColor).field0_0x0;
  uStack_280 = *(undefined8 *)((longlong)&(param_2->LineColor).field0_0x0 + 8);
  pTVar33 = &param_1->SelectedEdgeIDs;
  puVar1 = &(param_1->SelectedEdgeIDs).Elements.field_0x10;
  fVar4 = param_2->LineThickness;
  local_278._padding_._0_4_ = 0;
  local_278._padding_._4_4_ = 1;
  local_278.UnvisitedBitMask = 0xffffffff;
  local_278.CurrentBitIndex = 0;
  local_278.BaseBitIndex = 0;
  local_res20 = param_3;
  local_278.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_258 = pTVar33;
  if (*(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_278);
  }
  TStack_248._padding_ = CONCAT44(local_278._padding_._4_4_,(undefined4)local_278._padding_);
  TStack_248.CurrentBitIndex = local_278.CurrentBitIndex;
  TStack_248.UnvisitedBitMask = local_278.UnvisitedBitMask;
  TStack_248._28_4_ = local_278._28_4_;
  TStack_248.BaseBitIndex = local_278.BaseBitIndex;
  uStack_228 = CONCAT44(uStack_28c,
                        *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
                        *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34);
  TStack_248.Array = local_278.Array;
  local_250 = pTVar33;
  pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (local_100,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x28);
  pTVar21 = pTVar26->Array;
  uVar22 = pTVar26->CurrentBitIndex;
  local_res18 = uVar22;
  while( true ) {
    pTVar23 = local_250;
    iVar6 = local_res18;
    if (*(int *)&(local_250->Elements).field_0x8 - *(int *)&(local_250->Elements).field_0x34 !=
        (int)uStack_228) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_248.CurrentBitIndex == iVar6) && (TStack_248.Array == pTVar21)) &&
       (pTVar23 == pTVar33)) break;
    plVar27 = (longlong *)
              (**(code **)(**(longlong **)&this->field_0x50 + 0x38))
                        (*(longlong **)&this->field_0x50,
                         *(undefined4 *)
                          (*(longlong *)&pTVar23->Elements +
                          (longlong)TStack_248.CurrentBitIndex * 0xc));
    lVar31 = *(longlong *)&this->field_0x48;
    iVar6 = (int)plVar27[1];
    uVar28 = (ulonglong)iVar6;
    if (iVar6 < 1) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      in_stack_fffffffffffffd30 = uVar28;
      if (bVar24) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pbVar34 = &param_3->bIsOrthographic;
    uVar28 = (ulonglong)(*(uint *)*plVar27 & 0x1ff);
    lVar31 = *(longlong *)(*(longlong *)(lVar31 + 0x10) + (ulonglong)(*(uint *)*plVar27 >> 9) * 8);
    puVar2 = (undefined4 *)(lVar31 + uVar28 * 0x18);
    uVar92 = *puVar2;
    uVar94 = puVar2[1];
    uVar96 = puVar2[2];
    uVar98 = puVar2[3];
    dVar5 = *(double *)(lVar31 + 0x10 + uVar28 * 0x18);
    uVar75 = SUB84(dVar5,0);
    uVar91 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if (*pbVar34 != false) {
      pcVar8 = *(code **)(param_2->_padding_ + 0x18);
      local_220._0_4_ = uVar92;
      local_220._4_4_ = uVar94;
      local_220._8_4_ = uVar96;
      local_220._12_4_ = uVar98;
      local_220._16_8_ = dVar5;
      pTVar29 = FToolDataVisualizer::TransformP
                          (param_2,&local_118,(TVector<double> *)&local_220._s_0);
      (*pcVar8)(param_2,pTVar29,&local_288);
    }
    lVar31 = (longlong)(iVar6 + -1);
    if (0 < lVar31) {
      uVar30 = 1;
      lVar32 = 4;
      uVar74 = uVar92;
      uVar93 = uVar94;
      uVar95 = uVar96;
      uVar97 = uVar98;
      uVar73 = uVar75;
      uVar99 = uVar91;
      do {
        uVar28 = (ulonglong)(int)plVar27[1];
        lVar7 = *(longlong *)&this->field_0x48;
        uVar25 = 0;
        if ((int)uVar30 < (int)plVar27[1]) {
          uVar25 = ~uVar30 >> 0x1f;
        }
        if (uVar25 == 0) {
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          in_stack_fffffffffffffd30 = uVar28;
          if (bVar24) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        auVar63 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.ZW.m128d_f64;
        auVar40 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
        dVar19 = (param_2->TotalTransform).Rotation.ZW.m128d_f64[1];
        uVar28 = (ulonglong)(*(uint *)(*plVar27 + lVar32) & 0x1ff);
        lVar7 = *(longlong *)
                 (*(longlong *)(lVar7 + 0x10) + (ulonglong)(*(uint *)(*plVar27 + lVar32) >> 9) * 8);
        local_190 = *(undefined1 (*) [16])(lVar7 + uVar28 * 0x18);
        uVar92 = local_190._0_4_;
        uVar94 = local_190._4_4_;
        uVar96 = local_190._8_4_;
        uVar98 = local_190._12_4_;
        local_180 = *(double *)(lVar7 + 0x10 + uVar28 * 0x18);
        uVar75 = SUB84(local_180,0);
        uVar91 = (undefined4)((ulonglong)local_180 >> 0x20);
        dVar17 = local_190._0_8_ * (param_2->TotalTransform).Scale3D.XY.m128d_f64[0];
        dVar18 = local_190._8_8_ * (param_2->TotalTransform).Scale3D.XY.m128d_f64[1];
        uVar72 = (undefined4)((ulonglong)dVar18 >> 0x20);
        dVar10 = local_180 * (param_2->TotalTransform).Scale3D.ZW.m128d_f64[0];
        dVar12 = (param_2->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
        auVar35 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
        auVar76._8_4_ = SUB84(dVar18,0);
        auVar76._0_8_ = dVar17;
        auVar76._12_4_ = uVar72;
        auVar49 = blendpd(auVar35,auVar63,2);
        dVar5 = auVar63._0_8_;
        auVar77._0_8_ = auVar76._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar17;
        auVar77._8_8_ = dVar10 * auVar35._8_8_ - dVar5 * dVar18;
        auVar60._8_4_ = SUB84(dVar18,0);
        auVar60._0_8_ = dVar17;
        auVar60._12_4_ = uVar72;
        auVar35._8_4_ = SUB84(dVar12,0);
        auVar35._0_8_ = dVar10;
        auVar35._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        auVar35 = blendpd(auVar60,auVar35,2);
        auVar36._0_8_ = auVar35._0_8_ * dVar5 - auVar49._0_8_ * dVar10;
        auVar36._8_8_ = auVar35._8_8_ * auVar63._8_8_ - auVar49._8_8_ * dVar12;
        auVar35 = blendpd(auVar77,auVar36,2);
        dVar12 = auVar77._8_8_ + auVar77._8_8_;
        dVar9 = auVar36._0_8_ + auVar36._0_8_;
        uVar72 = (undefined4)((ulonglong)dVar9 >> 0x20);
        auVar78._0_8_ = auVar35._0_8_ + auVar35._0_8_;
        auVar78._8_8_ = auVar35._8_8_ + auVar35._8_8_;
        auVar61._8_4_ = SUB84(dVar9,0);
        auVar61._0_8_ = dVar12;
        auVar61._12_4_ = uVar72;
        auVar50._8_4_ = SUB84(dVar9,0);
        auVar50._0_8_ = dVar12;
        auVar50._12_4_ = uVar72;
        auVar60 = blendpd(auVar40,auVar63,2);
        auVar62._0_8_ = auVar61._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar12;
        auVar62._8_8_ = auVar78._0_8_ * auVar40._8_8_ - dVar5 * dVar9;
        auVar35 = blendpd(auVar50,auVar78,2);
        auVar40._8_4_ = SUB84(auVar62._8_8_,0);
        auVar40._0_8_ = auVar62._0_8_;
        auVar40._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
        dVar11 = (param_2->TotalTransform).Scale3D.XY.m128d_f64[0] * (double)CONCAT44(uVar93,uVar74)
        ;
        dVar13 = (param_2->TotalTransform).Scale3D.XY.m128d_f64[1] * (double)CONCAT44(uVar97,uVar95)
        ;
        uVar72 = (undefined4)((ulonglong)dVar13 >> 0x20);
        auVar51._0_8_ = auVar35._0_8_ * dVar5 - auVar60._0_8_ * auVar78._0_8_;
        auVar51._8_8_ = auVar35._8_8_ * auVar63._8_8_ - auVar60._8_8_ * auVar78._8_8_;
        local_168 = (double)CONCAT44(uVar99,uVar73);
        dVar5 = dVar19 * dVar9 + dVar18 + auVar51._0_8_ +
                (param_2->TotalTransform).Translation.XY.m128d_f64[1];
        auVar63 = blendpd(auVar62,auVar51,2);
        local_1f8 = dVar19 * auVar78._0_8_ + dVar10 + auVar63._0_8_ +
                    (param_2->TotalTransform).Translation.ZW.m128d_f64[0];
        auVar63 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
        dVar10 = local_168 * (param_2->TotalTransform).Scale3D.ZW.m128d_f64[0];
        dVar9 = (param_2->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar18 = (param_2->TotalTransform).Rotation.ZW.m128d_f64[1];
        local_208._8_4_ = SUB84(dVar5,0);
        local_208._0_8_ =
             dVar19 * dVar12 + dVar17 + auVar40._8_8_ +
             (param_2->TotalTransform).Translation.XY.m128d_f64[0];
        local_208._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        auVar40 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.ZW.m128d_f64;
        auVar35 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
        auVar60 = blendpd(auVar63,auVar40,2);
        in_stack_fffffffffffffd30 = in_stack_fffffffffffffd30 & 0xffffffffffffff00;
        auVar79._8_4_ = SUB84(dVar13,0);
        auVar79._0_8_ = dVar11;
        auVar79._12_4_ = uVar72;
        dVar5 = auVar40._0_8_;
        auVar80._0_8_ = auVar79._8_8_ * auVar63._0_8_ - auVar63._8_8_ * dVar11;
        auVar80._8_8_ = dVar10 * auVar63._8_8_ - dVar5 * dVar13;
        auVar49._8_4_ = SUB84(dVar13,0);
        auVar49._0_8_ = dVar11;
        auVar49._12_4_ = uVar72;
        auVar63._8_4_ = SUB84(dVar9,0);
        auVar63._0_8_ = dVar10;
        auVar63._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        auVar63 = blendpd(auVar49,auVar63,2);
        auVar37._0_8_ = auVar63._0_8_ * dVar5 - auVar60._0_8_ * dVar10;
        auVar37._8_8_ = auVar63._8_8_ * auVar40._8_8_ - auVar60._8_8_ * dVar9;
        auVar63 = blendpd(auVar80,auVar37,2);
        dVar12 = auVar80._8_8_ + auVar80._8_8_;
        dVar9 = auVar37._0_8_ + auVar37._0_8_;
        uVar73 = (undefined4)((ulonglong)dVar9 >> 0x20);
        auVar81._0_8_ = auVar63._0_8_ + auVar63._0_8_;
        auVar81._8_8_ = auVar63._8_8_ + auVar63._8_8_;
        auVar64._8_4_ = SUB84(dVar9,0);
        auVar64._0_8_ = dVar12;
        auVar64._12_4_ = uVar73;
        auVar52._8_4_ = SUB84(dVar9,0);
        auVar52._0_8_ = dVar12;
        auVar52._12_4_ = uVar73;
        auVar63 = blendpd(auVar52,auVar81,2);
        auVar65._0_8_ = auVar64._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar12;
        auVar65._8_8_ = auVar81._0_8_ * auVar35._8_8_ - dVar5 * dVar9;
        auVar38._8_4_ = SUB84(auVar65._8_8_,0);
        auVar38._0_8_ = auVar65._0_8_;
        auVar38._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
        auVar35 = blendpd(auVar35,auVar40,2);
        auVar53._0_8_ = auVar63._0_8_ * dVar5 - auVar35._0_8_ * auVar81._0_8_;
        auVar53._8_8_ = auVar63._8_8_ * auVar40._8_8_ - auVar35._8_8_ * auVar81._8_8_;
        auVar63 = blendpd(auVar65,auVar53,2);
        dVar5 = dVar9 * dVar18 + dVar13 + auVar53._0_8_ +
                (param_2->TotalTransform).Translation.XY.m128d_f64[1];
        local_1e0 = auVar81._0_8_ * dVar18 + dVar10 + auVar63._0_8_ +
                    (param_2->TotalTransform).Translation.ZW.m128d_f64[0];
        local_1f0._8_4_ = SUB84(dVar5,0);
        local_1f0._0_8_ =
             dVar12 * dVar18 + dVar11 + auVar38._8_8_ +
             (param_2->TotalTransform).Translation.XY.m128d_f64[0];
        local_1f0._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        local_178 = uVar74;
        uStack_174 = uVar93;
        uStack_170 = uVar95;
        uStack_16c = uVar97;
        (**(code **)(param_2->_padding_ + 8))
                  (param_2,local_1f0,local_208,&local_288,fVar4,in_stack_fffffffffffffd30);
        uVar30 = uVar30 + 1;
        lVar32 = lVar32 + 4;
        lVar31 = lVar31 + -1;
        uVar74 = uVar92;
        uVar93 = uVar94;
        uVar95 = uVar96;
        uVar97 = uVar98;
        uVar73 = uVar75;
        uVar99 = uVar91;
      } while (lVar31 != 0);
      pbVar34 = &local_res20->bIsOrthographic;
      param_3 = local_res20;
    }
    uVar28 = (ulonglong)(int)plVar27[1];
    lVar31 = *(longlong *)&this->field_0x48;
    if ((int)plVar27[1] < 1) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      in_stack_fffffffffffffd30 = uVar28;
      if (bVar24) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    auVar63 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
    dVar20 = (param_2->TotalTransform).Rotation.ZW.m128d_f64[1];
    uVar28 = (ulonglong)(*(uint *)*plVar27 & 0x1ff);
    lVar31 = *(longlong *)(*(longlong *)(lVar31 + 0x10) + (ulonglong)(*(uint *)*plVar27 >> 9) * 8);
    pdVar3 = (double *)(lVar31 + uVar28 * 0x18);
    local_160 = *pdVar3;
    dStack_158 = pdVar3[1];
    local_150 = *(double *)(lVar31 + 0x10 + uVar28 * 0x18);
    dVar17 = local_150 * (param_2->TotalTransform).Scale3D.ZW.m128d_f64[0];
    dVar9 = (param_2->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar40 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
    dVar11 = (param_2->TotalTransform).Scale3D.XY.m128d_f64[0] * local_160;
    dVar13 = (param_2->TotalTransform).Scale3D.XY.m128d_f64[1] * dStack_158;
    uVar74 = (undefined4)((ulonglong)dVar13 >> 0x20);
    auVar35 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.ZW.m128d_f64;
    auVar82._8_4_ = SUB84(dVar13,0);
    auVar82._0_8_ = dVar11;
    auVar82._12_4_ = uVar74;
    dVar5 = auVar35._0_8_;
    auVar60 = blendpd(auVar40,auVar35,2);
    auVar83._0_8_ = auVar82._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar11;
    auVar83._8_8_ = dVar17 * auVar40._8_8_ - dVar5 * dVar13;
    auVar39._8_4_ = SUB84(dVar13,0);
    auVar39._0_8_ = dVar11;
    auVar39._12_4_ = uVar74;
    auVar14._8_4_ = SUB84(dVar9,0);
    auVar14._0_8_ = dVar17;
    auVar14._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar40 = blendpd(auVar39,auVar14,2);
    dVar12 = auVar35._8_8_;
    auVar41._0_8_ = auVar40._0_8_ * dVar5 - auVar60._0_8_ * dVar17;
    auVar41._8_8_ = auVar40._8_8_ * dVar12 - auVar60._8_8_ * dVar9;
    auVar40 = blendpd(auVar83,auVar41,2);
    auVar84._0_8_ = auVar40._0_8_ + auVar40._0_8_;
    auVar84._8_8_ = auVar40._8_8_ + auVar40._8_8_;
    dVar9 = auVar83._8_8_ + auVar83._8_8_;
    dVar10 = auVar41._0_8_ + auVar41._0_8_;
    uVar74 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar66._8_4_ = SUB84(dVar10,0);
    auVar66._0_8_ = dVar9;
    auVar66._12_4_ = uVar74;
    auVar54._8_4_ = SUB84(dVar10,0);
    auVar54._0_8_ = dVar9;
    auVar54._12_4_ = uVar74;
    auVar40 = blendpd(auVar54,auVar84,2);
    auVar67._0_8_ = auVar66._8_8_ * auVar63._0_8_ - auVar63._8_8_ * dVar9;
    auVar67._8_8_ = auVar84._0_8_ * auVar63._8_8_ - dVar5 * dVar10;
    auVar42._8_4_ = SUB84(auVar67._8_8_,0);
    auVar42._0_8_ = auVar67._0_8_;
    auVar42._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
    auVar63 = blendpd(auVar63,auVar35,2);
    auVar55._0_8_ = auVar40._0_8_ * dVar5 - auVar63._0_8_ * auVar84._0_8_;
    auVar55._8_8_ = auVar40._8_8_ * dVar12 - auVar63._8_8_ * auVar84._8_8_;
    local_138 = CONCAT44(uVar91,uVar75);
    dVar10 = dVar10 * dVar20 + dVar13 + auVar55._0_8_ +
             (param_2->TotalTransform).Translation.XY.m128d_f64[1];
    auVar63 = blendpd(auVar67,auVar55,2);
    local_1c8 = auVar84._0_8_ * dVar20 + dVar17 + auVar63._0_8_ +
                (param_2->TotalTransform).Translation.ZW.m128d_f64[0];
    auVar63 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
    dVar18 = (double)CONCAT44(uVar91,uVar75) * (param_2->TotalTransform).Scale3D.ZW.m128d_f64[0];
    dVar19 = (param_2->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar13 = (param_2->TotalTransform).Scale3D.XY.m128d_f64[0] * (double)CONCAT44(uVar94,uVar92);
    dVar17 = (param_2->TotalTransform).Scale3D.XY.m128d_f64[1] * (double)CONCAT44(uVar98,uVar96);
    uVar74 = (undefined4)((ulonglong)dVar17 >> 0x20);
    local_1d8._8_4_ = SUB84(dVar10,0);
    local_1d8._0_8_ =
         dVar9 * dVar20 + dVar11 + auVar42._8_8_ +
         (param_2->TotalTransform).Translation.XY.m128d_f64[0];
    local_1d8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar85._8_4_ = SUB84(dVar17,0);
    auVar85._0_8_ = dVar13;
    auVar85._12_4_ = uVar74;
    auVar40 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
    in_stack_fffffffffffffd30 = in_stack_fffffffffffffd30 & 0xffffffffffffff00;
    auVar60 = blendpd(auVar63,auVar35,2);
    auVar86._0_8_ = auVar85._8_8_ * auVar63._0_8_ - auVar63._8_8_ * dVar13;
    auVar86._8_8_ = dVar18 * auVar63._8_8_ - dVar5 * dVar17;
    auVar43._8_4_ = SUB84(dVar17,0);
    auVar43._0_8_ = dVar13;
    auVar43._12_4_ = uVar74;
    auVar15._8_4_ = SUB84(dVar19,0);
    auVar15._0_8_ = dVar18;
    auVar15._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    auVar63 = blendpd(auVar43,auVar15,2);
    auVar44._0_8_ = auVar63._0_8_ * dVar5 - auVar60._0_8_ * dVar18;
    auVar44._8_8_ = auVar63._8_8_ * dVar12 - auVar60._8_8_ * dVar19;
    auVar63 = blendpd(auVar86,auVar44,2);
    dVar9 = auVar86._8_8_ + auVar86._8_8_;
    dVar10 = auVar44._0_8_ + auVar44._0_8_;
    uVar74 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar87._0_8_ = auVar63._0_8_ + auVar63._0_8_;
    auVar87._8_8_ = auVar63._8_8_ + auVar63._8_8_;
    auVar68._8_4_ = SUB84(dVar10,0);
    auVar68._0_8_ = dVar9;
    auVar68._12_4_ = uVar74;
    auVar56._8_4_ = SUB84(dVar10,0);
    auVar56._0_8_ = dVar9;
    auVar56._12_4_ = uVar74;
    auVar63 = blendpd(auVar56,auVar87,2);
    auVar69._0_8_ = auVar68._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar9;
    auVar69._8_8_ = auVar87._0_8_ * auVar40._8_8_ - dVar5 * dVar10;
    auVar45._8_4_ = SUB84(auVar69._8_8_,0);
    auVar45._0_8_ = auVar69._0_8_;
    auVar45._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
    auVar40 = blendpd(auVar40,auVar35,2);
    auVar57._0_8_ = auVar63._0_8_ * dVar5 - auVar40._0_8_ * auVar87._0_8_;
    auVar57._8_8_ = auVar63._8_8_ * dVar12 - auVar40._8_8_ * auVar87._8_8_;
    auVar63 = blendpd(auVar69,auVar57,2);
    dVar5 = dVar10 * dVar12 + dVar17 + auVar57._0_8_ +
            (param_2->TotalTransform).Translation.XY.m128d_f64[1];
    local_1b0 = auVar87._0_8_ * dVar12 + dVar18 + auVar63._0_8_ +
                (param_2->TotalTransform).Translation.ZW.m128d_f64[0];
    local_1c0._8_4_ = SUB84(dVar5,0);
    local_1c0._0_8_ =
         dVar9 * dVar12 + dVar13 + auVar45._8_8_ +
         (param_2->TotalTransform).Translation.XY.m128d_f64[0];
    local_1c0._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_148 = uVar92;
    uStack_144 = uVar94;
    uStack_140 = uVar96;
    uStack_13c = uVar98;
    (**(code **)(param_2->_padding_ + 8))
              (param_2,local_1c0,local_1d8,&local_288,fVar4,in_stack_fffffffffffffd30);
    if (*pbVar34 != false) {
      auVar63 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.ZW.m128d_f64;
      auVar40 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
      local_120 = CONCAT44(uVar91,uVar75);
      dVar17 = (param_2->TotalTransform).Rotation.ZW.m128d_f64[1];
      dVar13 = (double)CONCAT44(uVar91,uVar75) * (param_2->TotalTransform).Scale3D.ZW.m128d_f64[0];
      dVar12 = (param_2->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar35 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
      auVar60 = blendpd(auVar35,auVar63,2);
      dVar10 = (param_2->TotalTransform).Scale3D.XY.m128d_f64[0] * (double)CONCAT44(uVar94,uVar92);
      dVar11 = (param_2->TotalTransform).Scale3D.XY.m128d_f64[1] * (double)CONCAT44(uVar98,uVar96);
      uVar75 = (undefined4)((ulonglong)dVar11 >> 0x20);
      auVar88._8_4_ = SUB84(dVar11,0);
      auVar88._0_8_ = dVar10;
      auVar88._12_4_ = uVar75;
      dVar5 = auVar63._0_8_;
      auVar89._0_8_ = auVar88._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar10;
      auVar89._8_8_ = dVar13 * auVar35._8_8_ - dVar5 * dVar11;
      auVar46._8_4_ = SUB84(dVar11,0);
      auVar46._0_8_ = dVar10;
      auVar46._12_4_ = uVar75;
      auVar16._8_4_ = SUB84(dVar12,0);
      auVar16._0_8_ = dVar13;
      auVar16._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar35 = blendpd(auVar46,auVar16,2);
      auVar47._0_8_ = auVar35._0_8_ * dVar5 - auVar60._0_8_ * dVar13;
      auVar47._8_8_ = auVar35._8_8_ * auVar63._8_8_ - auVar60._8_8_ * dVar12;
      auVar35 = blendpd(auVar89,auVar47,2);
      dVar12 = auVar89._8_8_ + auVar89._8_8_;
      dVar9 = auVar47._0_8_ + auVar47._0_8_;
      uVar75 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar90._0_8_ = auVar35._0_8_ + auVar35._0_8_;
      auVar90._8_8_ = auVar35._8_8_ + auVar35._8_8_;
      auVar70._8_4_ = SUB84(dVar9,0);
      auVar70._0_8_ = dVar12;
      auVar70._12_4_ = uVar75;
      auVar58._8_4_ = SUB84(dVar9,0);
      auVar58._0_8_ = dVar12;
      auVar58._12_4_ = uVar75;
      auVar35 = blendpd(auVar58,auVar90,2);
      auVar71._0_8_ = auVar70._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar12;
      auVar71._8_8_ = auVar90._0_8_ * auVar40._8_8_ - dVar5 * dVar9;
      auVar40 = blendpd(auVar40,auVar63,2);
      auVar48._8_4_ = SUB84(auVar71._8_8_,0);
      auVar48._0_8_ = auVar71._0_8_;
      auVar48._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
      auVar59._0_8_ = auVar35._0_8_ * dVar5 - auVar40._0_8_ * auVar90._0_8_;
      auVar59._8_8_ = auVar35._8_8_ * auVar63._8_8_ - auVar40._8_8_ * auVar90._8_8_;
      auVar63 = blendpd(auVar71,auVar59,2);
      dVar5 = dVar9 * dVar17 + dVar11 + auVar59._0_8_ +
              (param_2->TotalTransform).Translation.XY.m128d_f64[1];
      local_198 = auVar90._0_8_ * dVar17 + dVar13 + auVar63._0_8_ +
                  (param_2->TotalTransform).Translation.ZW.m128d_f64[0];
      local_1a8._8_4_ = SUB84(dVar5,0);
      local_1a8._0_8_ =
           dVar12 * dVar17 + dVar10 + auVar48._8_8_ +
           (param_2->TotalTransform).Translation.XY.m128d_f64[0];
      local_1a8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_130 = uVar92;
      uStack_12c = uVar94;
      uStack_128 = uVar96;
      uStack_124 = uVar98;
      (**(code **)(param_2->_padding_ + 0x18))(param_2,local_1a8,&local_288);
    }
    TStack_248.UnvisitedBitMask = TStack_248.UnvisitedBitMask & ~TStack_248._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_248);
    pTVar33 = local_258;
  }
  return;
}

