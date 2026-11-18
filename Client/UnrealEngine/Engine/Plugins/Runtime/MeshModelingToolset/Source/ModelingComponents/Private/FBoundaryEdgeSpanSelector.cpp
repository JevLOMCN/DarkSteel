// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// FBoundaryEdgeSpanSelector @ 14cb61060

FBoundaryEdgeSpanSelector * __thiscall
FBoundaryEdgeSpanSelector::FBoundaryEdgeSpanSelector
          (FBoundaryEdgeSpanSelector *this,FDynamicMesh3 *param_1,FMeshBoundaryLoops *param_2)

{
  undefined8 *puVar1;
  FEdgeSpanTopologyProvider *this_00;
  FEdgeSpanTopologyProvider *pFVar2;
  
  FMeshTopologySelector::FMeshTopologySelector((FMeshTopologySelector *)this);
  *(FDynamicMesh3 **)&this->field_0x48 = param_1;
  *(undefined ***)this = &___7FBoundaryEdgeSpanSelector__6B_;
  this_00 = ::operator_new(0x20);
  pFVar2 = (FEdgeSpanTopologyProvider *)0x0;
  if (this_00 != (FEdgeSpanTopologyProvider *)0x0) {
    pFVar2 = EdgeSpanSelectorHelpers::FEdgeSpanTopologyProvider::FEdgeSpanTopologyProvider
                       (this_00,param_2);
  }
  puVar1 = *(undefined8 **)&this->field_0x50;
  *(FEdgeSpanTopologyProvider **)&this->field_0x50 = pFVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined2 *)&this->field_0x90 = 0;
  return this;
}

// DrawSelection @ 14cb85120

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
FBoundaryEdgeSpanSelector::DrawSelection
          (FBoundaryEdgeSpanSelector *this,FGroupTopologySelection *param_1,
          FToolDataVisualizer *param_2,FViewCameraState *param_3,ECornerDrawStyle param_4)

{
  undefined1 *puVar1;
  VectorRegister4Double *pVVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  undefined4 uVar20;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar21;
  bool bVar22;
  uint uVar23;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar24;
  longlong *plVar25;
  ulonglong uVar26;
  uint uVar27;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar28;
  VectorRegister4Double *pVVar29;
  undefined4 uVar42;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
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
  undefined4 uVar62;
  undefined4 uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined1 local_res10 [8];
  int local_res18;
  FViewCameraState *local_res20;
  ulonglong in_stack_fffffffffffffd80;
  longlong local_278;
  longlong local_270;
  int iStack_23c;
  undefined4 uStack_22c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_228;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  undefined8 uStack_1c8;
  undefined1 local_1c0 [16];
  double local_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined1 local_190 [16];
  double local_180;
  undefined1 local_178 [16];
  double local_168;
  undefined1 local_160 [16];
  double local_150;
  undefined1 local_148 [16];
  double local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_100 [6];
  
  local_200 = *(undefined8 *)&(param_2->LineColor).field0_0x0;
  uStack_1f8 = *(undefined8 *)((longlong)&(param_2->LineColor).field0_0x0 + 8);
  pTVar28 = &param_1->SelectedEdgeIDs;
  puVar1 = &(param_1->SelectedEdgeIDs).Elements.field_0x10;
  fVar3 = param_2->LineThickness;
  local_228._padding_._0_4_ = 0;
  local_228._padding_._4_4_ = 1;
  local_228.UnvisitedBitMask = 0xffffffff;
  local_228.CurrentBitIndex = 0;
  local_228.BaseBitIndex = 0;
  local_res20 = param_3;
  local_228.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_208 = pTVar28;
  if (*(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_228);
  }
  TStack_1e8._padding_ = CONCAT44(local_228._padding_._4_4_,(undefined4)local_228._padding_);
  TStack_1e8.CurrentBitIndex = local_228.CurrentBitIndex;
  TStack_1e8.UnvisitedBitMask = local_228.UnvisitedBitMask;
  TStack_1e8._28_4_ = local_228._28_4_;
  TStack_1e8.BaseBitIndex = local_228.BaseBitIndex;
  uStack_1c8 = CONCAT44(uStack_22c,
                        *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
                        *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34);
  TStack_1e8.Array = local_228.Array;
  local_1f0 = pTVar28;
  pTVar24 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (local_100,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x28);
  pTVar19 = pTVar24->Array;
  uVar20 = pTVar24->CurrentBitIndex;
  local_res18 = uVar20;
  while( true ) {
    pTVar21 = local_1f0;
    iVar5 = local_res18;
    if (*(int *)&(local_1f0->Elements).field_0x8 - *(int *)&(local_1f0->Elements).field_0x34 !=
        (int)uStack_1c8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_1e8.CurrentBitIndex == iVar5) && (TStack_1e8.Array == pTVar19)) &&
       (pTVar21 == pTVar28)) break;
    plVar25 = (longlong *)
              (**(code **)(**(longlong **)&this->field_0x50 + 0x38))
                        (*(longlong **)&this->field_0x50,
                         *(undefined4 *)
                          (*(longlong *)&pTVar21->Elements +
                          (longlong)TStack_1e8.CurrentBitIndex * 0xc));
    lVar6 = *(longlong *)&this->field_0x48;
    iVar5 = (int)plVar25[1];
    uVar26 = (ulonglong)iVar5;
    if ((iVar5 < 1) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       in_stack_fffffffffffffd80 = uVar26, bVar22)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar26 = (ulonglong)(*(uint *)*plVar25 & 0x1ff);
    pVVar2 = &(param_2->TotalTransform).Scale3D;
    lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(*(uint *)*plVar25 >> 9) * 8);
    auVar53 = *(undefined1 (*) [16])(lVar6 + uVar26 * 0x18);
    uVar77 = auVar53._0_4_;
    uVar79 = auVar53._4_4_;
    uVar81 = auVar53._8_4_;
    uVar84 = auVar53._12_4_;
    dVar4 = *(double *)(lVar6 + 0x10 + uVar26 * 0x18);
    uVar76 = SUB84(dVar4,0);
    uVar42 = (undefined4)((ulonglong)dVar4 >> 0x20);
    if (param_3->bIsOrthographic != false) {
      auVar33 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
      dVar14 = (param_2->TotalTransform).Rotation.ZW.m128d_f64[1];
      dVar13 = dVar4 * (param_2->TotalTransform).Scale3D.ZW.m128d_f64[0];
      dVar15 = (param_2->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar30 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
      dVar11 = (pVVar2->XY).m128d_f64[0] * auVar53._0_8_;
      dVar12 = (param_2->TotalTransform).Scale3D.XY.m128d_f64[1] * auVar53._8_8_;
      uVar62 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar47 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.ZW.m128d_f64;
      auVar64._8_4_ = SUB84(dVar12,0);
      auVar64._0_8_ = dVar11;
      auVar64._12_4_ = uVar62;
      dVar9 = auVar47._0_8_;
      auVar43 = blendpd(auVar30,auVar47,2);
      auVar65._0_8_ = auVar64._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar11;
      auVar65._8_8_ = dVar13 * auVar30._8_8_ - dVar9 * dVar12;
      auVar52._8_4_ = SUB84(dVar12,0);
      auVar52._0_8_ = dVar11;
      auVar52._12_4_ = uVar62;
      auVar30._8_4_ = SUB84(dVar15,0);
      auVar30._0_8_ = dVar13;
      auVar30._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      auVar30 = blendpd(auVar52,auVar30,2);
      auVar31._0_8_ = auVar30._0_8_ * dVar9 - auVar43._0_8_ * dVar13;
      auVar31._8_8_ = auVar30._8_8_ * auVar47._8_8_ - auVar43._8_8_ * dVar15;
      auVar30 = blendpd(auVar65,auVar31,2);
      dVar15 = auVar65._8_8_ + auVar65._8_8_;
      dVar8 = auVar31._0_8_ + auVar31._0_8_;
      uVar62 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar66._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar66._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      auVar54._8_4_ = SUB84(dVar8,0);
      auVar54._0_8_ = dVar15;
      auVar54._12_4_ = uVar62;
      auVar43._8_4_ = SUB84(dVar8,0);
      auVar43._0_8_ = dVar15;
      auVar43._12_4_ = uVar62;
      auVar30 = blendpd(auVar43,auVar66,2);
      auVar55._0_8_ = auVar54._8_8_ * auVar33._0_8_ - auVar33._8_8_ * dVar15;
      auVar55._8_8_ = auVar66._0_8_ * auVar33._8_8_ - dVar9 * dVar8;
      auVar52 = blendpd(auVar33,auVar47,2);
      auVar33._8_4_ = SUB84(auVar55._8_8_,0);
      auVar33._0_8_ = auVar55._0_8_;
      auVar33._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
      auVar44._0_8_ = auVar30._0_8_ * dVar9 - auVar52._0_8_ * auVar66._0_8_;
      auVar44._8_8_ = auVar30._8_8_ * auVar47._8_8_ - auVar52._8_8_ * auVar66._8_8_;
      auVar30 = blendpd(auVar55,auVar44,2);
      dVar9 = dVar8 * dVar14 + dVar12 + auVar44._0_8_ +
              (param_2->TotalTransform).Translation.XY.m128d_f64[1];
      local_1b0 = auVar66._0_8_ * dVar14 + dVar13 + auVar30._0_8_ +
                  (param_2->TotalTransform).Translation.ZW.m128d_f64[0];
      local_1c0._8_4_ = SUB84(dVar9,0);
      local_1c0._0_8_ =
           dVar15 * dVar14 + dVar11 + auVar33._8_8_ +
           (param_2->TotalTransform).Translation.XY.m128d_f64[0];
      local_1c0._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      local_160 = auVar53;
      local_150 = dVar4;
      (**(code **)(param_2->_padding_ + 0x18))(param_2,local_1c0,&local_200);
    }
    pVVar29 = &(param_2->TotalTransform).Translation;
    local_270 = (longlong)(iVar5 + -1);
    if (0 < iVar5 + -1) {
      uVar27 = 1;
      local_278 = 4;
      uVar62 = uVar77;
      uVar78 = uVar79;
      uVar80 = uVar81;
      uVar82 = uVar84;
      uVar85 = uVar76;
      do {
        uVar26 = (ulonglong)(int)plVar25[1];
        lVar6 = *(longlong *)&this->field_0x48;
        uVar23 = 0;
        if ((int)uVar27 < (int)plVar25[1]) {
          uVar23 = ~uVar27 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), in_stack_fffffffffffffd80 = uVar26, bVar22)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        auVar53 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
        dVar18 = (param_2->TotalTransform).Rotation.ZW.m128d_f64[1];
        uVar26 = (ulonglong)(*(uint *)(local_278 + *plVar25) & 0x1ff);
        dVar16 = (double)CONCAT44(uVar78,uVar62) * (pVVar2->XY).m128d_f64[0];
        dVar17 = (double)CONCAT44(uVar82,uVar80) * (param_2->TotalTransform).Scale3D.XY.m128d_f64[1]
        ;
        uVar83 = (undefined4)((ulonglong)dVar17 >> 0x20);
        lVar6 = *(longlong *)
                 (*(longlong *)(lVar6 + 0x10) +
                 (ulonglong)(*(uint *)(local_278 + *plVar25) >> 9) * 8);
        local_148 = *(undefined1 (*) [16])(lVar6 + uVar26 * 0x18);
        uVar77 = local_148._0_4_;
        uVar79 = local_148._4_4_;
        uVar81 = local_148._8_4_;
        uVar84 = local_148._12_4_;
        dVar4 = *(double *)(lVar6 + 0x10 + uVar26 * 0x18);
        uVar76 = SUB84(dVar4,0);
        dVar14 = dVar4 * (param_2->TotalTransform).Scale3D.ZW.m128d_f64[0];
        dVar8 = (param_2->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
        auVar33 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
        dVar12 = (pVVar2->XY).m128d_f64[0] * local_148._0_8_;
        dVar13 = (param_2->TotalTransform).Scale3D.XY.m128d_f64[1] * local_148._8_8_;
        uVar63 = (undefined4)((ulonglong)dVar13 >> 0x20);
        auVar30 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.ZW.m128d_f64;
        auVar67._8_4_ = SUB84(dVar13,0);
        auVar67._0_8_ = dVar12;
        auVar67._12_4_ = uVar63;
        dVar9 = auVar30._0_8_;
        auVar52 = blendpd(auVar33,auVar30,2);
        auVar68._0_8_ = auVar67._8_8_ * auVar33._0_8_ - auVar33._8_8_ * dVar12;
        auVar68._8_8_ = dVar14 * auVar33._8_8_ - dVar9 * dVar13;
        auVar32._8_4_ = SUB84(dVar13,0);
        auVar32._0_8_ = dVar12;
        auVar32._12_4_ = uVar63;
        auVar47._8_4_ = SUB84(dVar8,0);
        auVar47._0_8_ = dVar14;
        auVar47._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        auVar33 = blendpd(auVar32,auVar47,2);
        dVar15 = auVar30._8_8_;
        auVar34._0_8_ = auVar33._0_8_ * dVar9 - auVar52._0_8_ * dVar14;
        auVar34._8_8_ = auVar33._8_8_ * dVar15 - auVar52._8_8_ * dVar8;
        auVar33 = blendpd(auVar68,auVar34,2);
        auVar69._0_8_ = auVar33._0_8_ + auVar33._0_8_;
        auVar69._8_8_ = auVar33._8_8_ + auVar33._8_8_;
        dVar8 = auVar68._8_8_ + auVar68._8_8_;
        dVar11 = auVar34._0_8_ + auVar34._0_8_;
        uVar63 = (undefined4)((ulonglong)dVar11 >> 0x20);
        auVar56._8_4_ = SUB84(dVar11,0);
        auVar56._0_8_ = dVar8;
        auVar56._12_4_ = uVar63;
        auVar45._8_4_ = SUB84(dVar11,0);
        auVar45._0_8_ = dVar8;
        auVar45._12_4_ = uVar63;
        auVar33 = blendpd(auVar45,auVar69,2);
        auVar57._0_8_ = auVar56._8_8_ * auVar53._0_8_ - auVar53._8_8_ * dVar8;
        auVar57._8_8_ = auVar69._0_8_ * auVar53._8_8_ - dVar9 * dVar11;
        auVar35._8_4_ = SUB84(auVar57._8_8_,0);
        auVar35._0_8_ = auVar57._0_8_;
        auVar35._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
        auVar53 = blendpd(auVar53,auVar30,2);
        auVar46._0_8_ = auVar33._0_8_ * dVar9 - auVar53._0_8_ * auVar69._0_8_;
        auVar46._8_8_ = auVar33._8_8_ * dVar15 - auVar53._8_8_ * auVar69._8_8_;
        local_120 = (double)CONCAT44(uVar42,uVar85);
        dVar11 = dVar11 * dVar18 + dVar13 + auVar46._0_8_ +
                 (param_2->TotalTransform).Translation.XY.m128d_f64[1];
        auVar53 = blendpd(auVar57,auVar46,2);
        local_198 = auVar69._0_8_ * dVar18 + dVar14 + auVar53._0_8_ +
                    (param_2->TotalTransform).Translation.ZW.m128d_f64[0];
        auVar53 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
        dVar13 = local_120 * (param_2->TotalTransform).Scale3D.ZW.m128d_f64[0];
        dVar14 = (param_2->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
        auVar70._8_4_ = SUB84(dVar17,0);
        auVar70._0_8_ = dVar16;
        auVar70._12_4_ = uVar83;
        local_1a8._8_4_ = SUB84(dVar11,0);
        local_1a8._0_8_ = dVar8 * dVar18 + dVar12 + auVar35._8_8_ + (pVVar29->XY).m128d_f64[0];
        local_1a8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        auVar33 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
        in_stack_fffffffffffffd80 = in_stack_fffffffffffffd80 & 0xffffffffffffff00;
        auVar47 = blendpd(auVar53,auVar30,2);
        auVar71._0_8_ = auVar70._8_8_ * auVar53._0_8_ - auVar53._8_8_ * dVar16;
        auVar71._8_8_ = dVar13 * auVar53._8_8_ - dVar9 * dVar17;
        auVar36._8_4_ = SUB84(dVar17,0);
        auVar36._0_8_ = dVar16;
        auVar36._12_4_ = uVar83;
        auVar53._8_4_ = SUB84(dVar14,0);
        auVar53._0_8_ = dVar13;
        auVar53._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        auVar53 = blendpd(auVar36,auVar53,2);
        auVar37._0_8_ = auVar53._0_8_ * dVar9 - auVar47._0_8_ * dVar13;
        auVar37._8_8_ = auVar53._8_8_ * dVar15 - auVar47._8_8_ * dVar14;
        auVar53 = blendpd(auVar71,auVar37,2);
        dVar8 = auVar71._8_8_ + auVar71._8_8_;
        dVar11 = auVar37._0_8_ + auVar37._0_8_;
        uVar42 = (undefined4)((ulonglong)dVar11 >> 0x20);
        auVar72._0_8_ = auVar53._0_8_ + auVar53._0_8_;
        auVar72._8_8_ = auVar53._8_8_ + auVar53._8_8_;
        auVar58._8_4_ = SUB84(dVar11,0);
        auVar58._0_8_ = dVar8;
        auVar58._12_4_ = uVar42;
        auVar48._8_4_ = SUB84(dVar11,0);
        auVar48._0_8_ = dVar8;
        auVar48._12_4_ = uVar42;
        auVar53 = blendpd(auVar48,auVar72,2);
        auVar59._0_8_ = auVar58._8_8_ * auVar33._0_8_ - auVar33._8_8_ * dVar8;
        auVar59._8_8_ = auVar72._0_8_ * auVar33._8_8_ - dVar9 * dVar11;
        auVar38._8_4_ = SUB84(auVar59._8_8_,0);
        auVar38._0_8_ = auVar59._0_8_;
        auVar38._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
        auVar33 = blendpd(auVar33,auVar30,2);
        auVar49._0_8_ = auVar53._0_8_ * dVar9 - auVar33._0_8_ * auVar72._0_8_;
        auVar49._8_8_ = auVar53._8_8_ * dVar15 - auVar33._8_8_ * auVar72._8_8_;
        auVar53 = blendpd(auVar59,auVar49,2);
        dVar9 = dVar11 * dVar15 + dVar17 + auVar49._0_8_ +
                (param_2->TotalTransform).Translation.XY.m128d_f64[1];
        local_180 = auVar72._0_8_ * dVar15 + dVar13 + auVar53._0_8_ +
                    (param_2->TotalTransform).Translation.ZW.m128d_f64[0];
        local_190._8_4_ = SUB84(dVar9,0);
        local_190._0_8_ = dVar8 * dVar15 + dVar16 + auVar38._8_8_ + (pVVar29->XY).m128d_f64[0];
        local_190._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        local_138 = dVar4;
        local_130 = uVar62;
        uStack_12c = uVar78;
        uStack_128 = uVar80;
        uStack_124 = uVar82;
        (**(code **)(param_2->_padding_ + 8))
                  (param_2,local_190,local_1a8,&local_200,fVar3,in_stack_fffffffffffffd80);
        local_278 = local_278 + 4;
        uVar27 = uVar27 + 1;
        local_270 = local_270 + -1;
        uVar42 = (undefined4)((ulonglong)dVar4 >> 0x20);
        uVar62 = uVar77;
        uVar78 = uVar79;
        uVar80 = uVar81;
        uVar82 = uVar84;
        uVar85 = uVar76;
      } while (local_270 != 0);
    }
    if (local_res20->bIsOrthographic != false) {
      auVar53 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.ZW.m128d_f64;
      auVar33 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
      dVar13 = (param_2->TotalTransform).Rotation.ZW.m128d_f64[1];
      local_108 = CONCAT44(uVar42,uVar76);
      dVar8 = (double)CONCAT44(uVar42,uVar76) * (param_2->TotalTransform).Scale3D.ZW.m128d_f64[0];
      dVar9 = (param_2->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar30 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
      auVar47 = blendpd(auVar30,auVar53,2);
      dVar11 = (double)CONCAT44(uVar79,uVar77) * (param_2->TotalTransform).Scale3D.XY.m128d_f64[0];
      dVar12 = (double)CONCAT44(uVar84,uVar81) * (param_2->TotalTransform).Scale3D.XY.m128d_f64[1];
      uVar42 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar73._8_4_ = SUB84(dVar12,0);
      auVar73._0_8_ = dVar11;
      auVar73._12_4_ = uVar42;
      dVar4 = auVar53._0_8_;
      auVar74._0_8_ = auVar73._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar11;
      auVar74._8_8_ = dVar8 * auVar30._8_8_ - dVar4 * dVar12;
      auVar39._8_4_ = SUB84(dVar12,0);
      auVar39._0_8_ = dVar11;
      auVar39._12_4_ = uVar42;
      auVar10._8_4_ = SUB84(dVar9,0);
      auVar10._0_8_ = dVar8;
      auVar10._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar30 = blendpd(auVar39,auVar10,2);
      auVar40._0_8_ = auVar30._0_8_ * dVar4 - auVar47._0_8_ * dVar8;
      auVar40._8_8_ = auVar30._8_8_ * auVar53._8_8_ - auVar47._8_8_ * dVar9;
      auVar30 = blendpd(auVar74,auVar40,2);
      dVar9 = auVar74._8_8_ + auVar74._8_8_;
      dVar15 = auVar40._0_8_ + auVar40._0_8_;
      uVar42 = (undefined4)((ulonglong)dVar15 >> 0x20);
      auVar75._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar75._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      auVar60._8_4_ = SUB84(dVar15,0);
      auVar60._0_8_ = dVar9;
      auVar60._12_4_ = uVar42;
      auVar50._8_4_ = SUB84(dVar15,0);
      auVar50._0_8_ = dVar9;
      auVar50._12_4_ = uVar42;
      auVar30 = blendpd(auVar50,auVar75,2);
      auVar61._0_8_ = auVar60._8_8_ * auVar33._0_8_ - auVar33._8_8_ * dVar9;
      auVar61._8_8_ = auVar75._0_8_ * auVar33._8_8_ - dVar4 * dVar15;
      auVar33 = blendpd(auVar33,auVar53,2);
      auVar41._8_4_ = SUB84(auVar61._8_8_,0);
      auVar41._0_8_ = auVar61._0_8_;
      auVar41._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
      auVar51._0_8_ = auVar30._0_8_ * dVar4 - auVar33._0_8_ * auVar75._0_8_;
      auVar51._8_8_ = auVar30._8_8_ * auVar53._8_8_ - auVar33._8_8_ * auVar75._8_8_;
      auVar53 = blendpd(auVar61,auVar51,2);
      dVar4 = dVar15 * dVar13 + dVar12 + auVar51._0_8_ +
              (param_2->TotalTransform).Translation.XY.m128d_f64[1];
      local_168 = auVar75._0_8_ * dVar13 + dVar8 + auVar53._0_8_ +
                  (param_2->TotalTransform).Translation.ZW.m128d_f64[0];
      local_178._8_4_ = SUB84(dVar4,0);
      local_178._0_8_ =
           dVar9 * dVar13 + dVar11 + auVar41._8_8_ +
           (param_2->TotalTransform).Translation.XY.m128d_f64[0];
      local_178._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_118 = uVar77;
      uStack_114 = uVar79;
      uStack_110 = uVar81;
      uStack_10c = uVar84;
      (**(code **)(param_2->_padding_ + 0x18))(param_2,local_178,&local_200);
    }
    TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
    pTVar28 = local_208;
    param_3 = local_res20;
  }
  return;
}

