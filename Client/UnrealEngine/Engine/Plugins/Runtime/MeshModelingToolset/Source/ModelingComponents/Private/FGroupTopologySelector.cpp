// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 7

// FGroupTopologySelector @ 14cb61b70

FGroupTopologySelector * __thiscall
FGroupTopologySelector::FGroupTopologySelector
          (FGroupTopologySelector *this,FDynamicMesh3 *param_1,FGroupTopology *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FMeshTopologySelector::FMeshTopologySelector((FMeshTopologySelector *)this);
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FGroupTopologySelector__6B_;
  puVar2 = ::operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_2;
    *puVar2 = &___7FGroupTopologyProvider__6B_;
  }
  puVar1 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  (this->GroupTopologyUtils).GroupTopology = param_2;
  *(undefined2 *)&this->_padding_ = 0;
  return this;
}

// operator() @ 14cb6c430

void __thiscall
`FGroupTopologySelector::DrawSelection'::__l30::<lambda_1>::operator()(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  uint uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined4 in_register_00000014;
  uint uVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
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
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  ulonglong in_stack_fffffffffffffee0;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_100 [16];
  double local_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  double local_c0;
  undefined1 local_b8 [16];
  
  plVar23 = *(longlong **)(*(longlong *)((longlong)this + 0x18) + 0x50);
  plVar23 = (longlong *)
            (**(code **)(*plVar23 + 0x38))(plVar23,CONCAT44(in_register_00000014,param_1));
  iVar3 = (int)plVar23[1];
  uVar24 = (ulonglong)iVar3;
  lVar26 = *(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x48);
  if ((iVar3 < 1) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     in_stack_fffffffffffffee0 = uVar24, bVar21)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar24 = (ulonglong)(*(uint *)*plVar23 & 0x1ff);
  lVar26 = *(longlong *)(*(longlong *)(lVar26 + 0x10) + (ulonglong)(*(uint *)*plVar23 >> 9) * 8);
  uVar2 = *(undefined8 *)(lVar26 + 0x10 + uVar24 * 0x18);
  puVar1 = (undefined4 *)(lVar26 + uVar24 * 0x18);
  if (0 < iVar3 + -1) {
    uVar25 = 1;
    lVar26 = 0;
    uVar52 = *puVar1;
    uVar53 = puVar1[1];
    uVar54 = puVar1[2];
    uVar55 = puVar1[3];
    uVar44 = (int)uVar2;
    uVar57 = (int)((ulonglong)uVar2 >> 0x20);
    do {
      uVar24 = (ulonglong)(int)plVar23[1];
      lVar4 = *(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x48);
      uVar22 = 0;
      if ((int)uVar25 < (int)plVar23[1]) {
        uVar22 = ~uVar25 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         in_stack_fffffffffffffee0 = uVar24, bVar21)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar22 = *(uint *)(*plVar23 + 4 + lVar26 * 4);
      uVar24 = (ulonglong)(uVar22 & 0x1ff);
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar22 >> 9) * 8);
      plVar5 = *(longlong **)((longlong)this + 0x10);
      local_e8 = *(undefined1 (*) [16])(lVar4 + uVar24 * 0x18);
      uVar7 = local_e8._0_4_;
      uVar8 = local_e8._4_4_;
      uVar9 = local_e8._8_4_;
      uVar10 = local_e8._12_4_;
      auVar40 = *(undefined1 (*) [16])(plVar5 + 0x1a);
      local_d8 = *(double *)(lVar4 + 0x10 + uVar24 * 0x18);
      uVar51 = SUB84(local_d8,0);
      uVar24 = (ulonglong)local_d8 >> 0x20;
      dVar20 = (double)plVar5[0x1d];
      dVar16 = local_d8 * (double)plVar5[0x24];
      dVar17 = (double)plVar5[0x25] * 0.0;
      dVar18 = (double)CONCAT44(uVar53,uVar52) * (double)plVar5[0x22];
      dVar19 = (double)CONCAT44(uVar55,uVar54) * (double)plVar5[0x23];
      uVar56 = (undefined4)((ulonglong)dVar19 >> 0x20);
      auVar28 = *(undefined1 (*) [16])(plVar5 + 0x1a);
      dVar14 = (double)plVar5[0x22] * local_e8._0_8_;
      dVar15 = (double)plVar5[0x23] * local_e8._8_8_;
      uVar43 = (undefined4)((ulonglong)dVar15 >> 0x20);
      auVar45._8_4_ = SUB84(dVar15,0);
      auVar45._0_8_ = dVar14;
      auVar45._12_4_ = uVar43;
      auVar36 = *(undefined1 (*) [16])(plVar5 + 0x1c);
      dVar13 = auVar36._0_8_;
      auVar33 = blendpd(auVar28,auVar36,2);
      auVar46._0_8_ = auVar45._8_8_ * auVar28._0_8_ - auVar28._8_8_ * dVar14;
      auVar46._8_8_ = dVar16 * auVar28._8_8_ - dVar13 * dVar15;
      auVar27._8_4_ = SUB84(dVar15,0);
      auVar27._0_8_ = dVar14;
      auVar27._12_4_ = uVar43;
      auVar37._8_4_ = SUB84(dVar17,0);
      auVar37._0_8_ = dVar16;
      auVar37._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      auVar28 = blendpd(auVar27,auVar37,2);
      dVar11 = auVar36._8_8_;
      auVar29._0_8_ = auVar28._0_8_ * dVar13 - auVar33._0_8_ * dVar16;
      auVar29._8_8_ = auVar28._8_8_ * dVar11 - auVar33._8_8_ * dVar17;
      auVar28 = blendpd(auVar46,auVar29,2);
      auVar47._0_8_ = auVar28._0_8_ + auVar28._0_8_;
      auVar47._8_8_ = auVar28._8_8_ + auVar28._8_8_;
      dVar17 = auVar46._8_8_ + auVar46._8_8_;
      dVar12 = auVar29._0_8_ + auVar29._0_8_;
      uVar43 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar38._8_4_ = SUB84(dVar12,0);
      auVar38._0_8_ = dVar17;
      auVar38._12_4_ = uVar43;
      auVar34._8_4_ = SUB84(dVar12,0);
      auVar34._0_8_ = dVar17;
      auVar34._12_4_ = uVar43;
      auVar28 = blendpd(auVar34,auVar47,2);
      auVar39._0_8_ = auVar38._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar17;
      auVar39._8_8_ = auVar47._0_8_ * auVar40._8_8_ - dVar13 * dVar12;
      auVar33._8_4_ = SUB84(auVar39._8_8_,0);
      auVar33._0_8_ = auVar39._0_8_;
      auVar33._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
      auVar37 = blendpd(auVar40,auVar36,2);
      auVar40._0_8_ = auVar28._0_8_ * dVar13 - auVar37._0_8_ * auVar47._0_8_;
      auVar40._8_8_ = auVar28._8_8_ * dVar11 - auVar37._8_8_ * auVar47._8_8_;
      local_c0 = (double)CONCAT44(uVar57,uVar44);
      dVar12 = dVar12 * dVar20 + dVar15 + auVar40._0_8_ + (double)plVar5[0x1f];
      auVar40 = blendpd(auVar39,auVar40,2);
      local_108 = auVar47._0_8_ * dVar20 + dVar16 + auVar40._0_8_ + (double)plVar5[0x20];
      local_b8 = *(undefined1 (*) [16])(plVar5 + 0x1a);
      dVar15 = local_c0 * (double)plVar5[0x24];
      dVar16 = (double)plVar5[0x25] * 0.0;
      auVar48._8_4_ = SUB84(dVar19,0);
      auVar48._0_8_ = dVar18;
      auVar48._12_4_ = uVar56;
      local_118._8_4_ = SUB84(dVar12,0);
      local_118._0_8_ = dVar17 * dVar20 + dVar14 + auVar33._8_8_ + (double)plVar5[0x1e];
      local_118._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar40 = *(undefined1 (*) [16])(plVar5 + 0x1a);
      in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffffffffffff00;
      auVar37 = blendpd(local_b8,auVar36,2);
      auVar49._0_8_ = auVar48._8_8_ * local_b8._0_8_ - local_b8._8_8_ * dVar18;
      auVar49._8_8_ = dVar15 * local_b8._8_8_ - dVar13 * dVar19;
      auVar30._8_4_ = SUB84(dVar19,0);
      auVar30._0_8_ = dVar18;
      auVar30._12_4_ = uVar56;
      auVar28._8_4_ = SUB84(dVar16,0);
      auVar28._0_8_ = dVar15;
      auVar28._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      auVar28 = blendpd(auVar30,auVar28,2);
      auVar31._0_8_ = auVar28._0_8_ * dVar13 - auVar37._0_8_ * dVar15;
      auVar31._8_8_ = auVar28._8_8_ * dVar11 - auVar37._8_8_ * dVar16;
      auVar28 = blendpd(auVar49,auVar31,2);
      dVar17 = auVar49._8_8_ + auVar49._8_8_;
      dVar12 = auVar31._0_8_ + auVar31._0_8_;
      uVar44 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar50._0_8_ = auVar28._0_8_ + auVar28._0_8_;
      auVar50._8_8_ = auVar28._8_8_ + auVar28._8_8_;
      auVar41._8_4_ = SUB84(dVar12,0);
      auVar41._0_8_ = dVar17;
      auVar41._12_4_ = uVar44;
      auVar35._8_4_ = SUB84(dVar12,0);
      auVar35._0_8_ = dVar17;
      auVar35._12_4_ = uVar44;
      auVar28 = blendpd(auVar35,auVar50,2);
      auVar42._0_8_ = auVar41._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar17;
      auVar42._8_8_ = auVar50._0_8_ * auVar40._8_8_ - dVar13 * dVar12;
      auVar32._8_4_ = SUB84(auVar42._8_8_,0);
      auVar32._0_8_ = auVar42._0_8_;
      auVar32._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
      auVar40 = blendpd(auVar40,auVar36,2);
      auVar36._0_8_ = auVar28._0_8_ * dVar13 - auVar40._0_8_ * auVar50._0_8_;
      auVar36._8_8_ = auVar28._8_8_ * dVar11 - auVar40._8_8_ * auVar50._8_8_;
      dVar13 = dVar12 * dVar11 + dVar19 + auVar36._0_8_ + (double)plVar5[0x1f];
      auVar40 = blendpd(auVar42,auVar36,2);
      local_100._8_4_ = SUB84(dVar13,0);
      local_100._0_8_ = dVar17 * dVar11 + dVar18 + auVar32._8_8_ + (double)plVar5[0x1e];
      local_100._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      local_f0 = auVar50._0_8_ * dVar11 + dVar15 + auVar40._0_8_ + (double)plVar5[0x20];
      local_d0 = uVar52;
      uStack_cc = uVar53;
      uStack_c8 = uVar54;
      uStack_c4 = uVar55;
      (**(code **)(*plVar5 + 8))
                (plVar5,local_100,local_118,*(undefined8 *)this,*(undefined4 *)((longlong)this + 8),
                 in_stack_fffffffffffffee0);
      uVar25 = uVar25 + 1;
      lVar26 = lVar26 + 1;
      uVar52 = uVar7;
      uVar53 = uVar8;
      uVar54 = uVar9;
      uVar55 = uVar10;
      uVar44 = uVar51;
      uVar57 = (int)uVar24;
    } while (lVar26 < iVar3 + -1);
  }
  return;
}

// DrawSelection @ 14cb86340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FGroupTopologySelector::DrawSelection
          (FGroupTopologySelector *this,FGroupTopologySelection *param_1,
          FToolDataVisualizer *param_2,FViewCameraState *param_3,ECornerDrawStyle param_4)

{
  undefined1 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  float fVar4;
  double dVar5;
  int iVar6;
  code *pcVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  FGroupTopologySelection *pFVar17;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar22;
  TVector<double> *pTVar23;
  ulonglong uVar24;
  longlong *plVar25;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar26;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar27;
  longlong lVar28;
  undefined4 uVar41;
  undefined1 auVar29 [16];
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
  double dVar66;
  double dVar67;
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar76;
  undefined4 uVar79;
  undefined1 auVar73 [16];
  undefined4 uVar80;
  undefined1 auVar74 [16];
  double dVar77;
  undefined1 auVar75 [16];
  double dVar78;
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
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined4 uVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  undefined4 uVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  undefined1 auStack_4f8 [32];
  undefined8 *local_4d8;
  ulonglong local_4d0;
  undefined1 local_4c8;
  undefined1 local_4b8 [8];
  longlong local_4b0;
  int local_4a8;
  TBitArray<FDefaultBitArrayAllocator> *local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_488;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_468;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_448;
  longlong local_428;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_420;
  FGroupTopologySelection *local_418;
  undefined1 local_410 [12];
  uint uStack_404;
  TBitArray<FDefaultBitArrayAllocator> *local_400;
  undefined8 uStack_3f8;
  longlong local_3f0;
  undefined8 uStack_3e8;
  undefined1 local_3e0 [12];
  uint uStack_3d4;
  TBitArray<FDefaultBitArrayAllocator> *local_3d0;
  undefined8 uStack_3c8;
  longlong local_3c0;
  undefined8 uStack_3b8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_3b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3a8;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined4 uStack_374;
  FToolDataVisualizer *local_370;
  FGroupTopologySelector *pFStack_368;
  TVector<double>_u_0 local_360;
  TVector<double>_u_0 local_348;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  double local_318;
  double dStack_310;
  double local_308;
  undefined1 local_300 [16];
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  undefined1 local_2b8 [16];
  TRangedForConstIterator local_298;
  TRangedForConstIterator local_268;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 local_210;
  undefined1 local_208 [16];
  double local_1f8;
  undefined1 local_1f0 [16];
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined1 local_1c0 [16];
  double local_1b0;
  undefined1 local_1a8 [2] [16];
  TVector<double> local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_128;
  longlong lStack_120;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  TBitArray<FDefaultBitArrayAllocator> **local_100;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStack_4f8;
  local_498 = *(undefined8 *)&(param_2->LineColor).field0_0x0;
  uStack_490 = *(undefined8 *)((longlong)&(param_2->LineColor).field0_0x0 + 8);
  pTVar27 = &param_1->SelectedCornerIDs;
  fVar4 = param_2->LineThickness;
  puVar1 = &(param_1->SelectedCornerIDs).Elements.field_0x10;
  uVar16._4_4_ = *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x28;
  local_418 = param_1;
  local_128 = pTVar27;
  if (param_4 == Point) {
    local_448._padding_._0_4_ = 0;
    local_448._padding_._4_4_ = 1;
    local_448.UnvisitedBitMask = 0xffffffff;
    local_448.CurrentBitIndex = 0;
    local_448.BaseBitIndex = 0;
    local_448.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (uVar16._4_4_ != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_448);
    }
    unique0x10001adb = CONCAT44(local_448._padding_._4_4_,(undefined4)local_448._padding_);
    uStack_3f8 = CONCAT44(local_448.CurrentBitIndex,local_448.UnvisitedBitMask);
    local_3f0 = CONCAT44(local_448._28_4_,local_448.BaseBitIndex);
    pTStack_118 = local_448.Array;
    local_100 = (TBitArray<FDefaultBitArrayAllocator> **)
                CONCAT44(local_100._4_4_,
                         *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x8 -
                         *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x34);
    local_400 = local_448.Array;
    uStack_3e8 = local_100;
    local_410._0_8_ = pTVar27;
    lStack_120 = unique0x10001adb;
    uStack_110 = uStack_3f8;
    lStack_108 = local_3f0;
    pTVar22 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_1a8,
                         (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                         *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x28);
    local_268._padding_ = pTVar22->_padding_;
    local_268._padding_ = (longlong)pTVar22->Array;
    local_268._padding_._0_4_ = pTVar22->UnvisitedBitMask;
    local_268._padding_._4_4_ = pTVar22->CurrentBitIndex;
    local_268._padding_ = *(longlong *)&pTVar22->BaseBitIndex;
    local_100 = (TBitArray<FDefaultBitArrayAllocator> **)
                CONCAT44(local_100._4_4_,
                         *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x8 -
                         *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x34);
    local_268._40_8_ = local_100;
    local_268._padding_ = (longlong)pTVar27;
    local_128 = pTVar27;
    lStack_120 = local_268._padding_;
    pTStack_118 = (TBitArray<FDefaultBitArrayAllocator> *)local_268._padding_;
    uStack_110 = local_268._padding_;
    lStack_108 = local_268._padding_;
    bVar19 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_410,&local_268);
    if (bVar19) {
      do {
        uVar20 = (**(code **)(*(longlong *)this->_padding_ + 0x10))
                           ((longlong *)this->_padding_,
                            *(undefined4 *)
                             (*(longlong *)
                               (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)local_410._0_8_ + (longlong)uStack_3f8._4_4_ * 0xc));
        pcVar7 = *(code **)(param_2->_padding_ + 0x18);
        lVar28 = *(longlong *)(*(longlong *)(this->_padding_ + 0x10) + (ulonglong)(uVar20 >> 9) * 8)
        ;
        pdVar2 = (double *)(lVar28 + (ulonglong)(uVar20 & 0x1ff) * 0x18);
        local_360._s_0.X = *pdVar2;
        local_360._s_0.Y = pdVar2[1];
        local_360._s_0.Z = *(double *)(lVar28 + 0x10 + (ulonglong)(uVar20 & 0x1ff) * 0x18);
        pTVar23 = FToolDataVisualizer::TransformP
                            (param_2,&local_188,(TVector<double> *)&local_360._s_0);
        local_4d8 = (undefined8 *)((ulonglong)local_4d8 & 0xffffffffffffff00);
        (*pcVar7)(param_2,pTVar23,&param_2->PointColor);
        uStack_3f8 = CONCAT44(uStack_3f8._4_4_,(uint)uStack_3f8 & ~uStack_404);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_410 + 8));
        bVar19 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_410,&local_268);
      } while (bVar19);
    }
  }
  else {
    local_468._padding_._0_4_ = 0;
    local_468._padding_._4_4_ = 1;
    local_468.UnvisitedBitMask = 0xffffffff;
    local_468.CurrentBitIndex = 0;
    local_468.BaseBitIndex = 0;
    local_468.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (uVar16._4_4_ != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_468);
    }
    unique0x10001abb = CONCAT44(local_468._padding_._4_4_,(undefined4)local_468._padding_);
    uStack_3c8 = CONCAT44(local_468.CurrentBitIndex,local_468.UnvisitedBitMask);
    local_3c0 = CONCAT44(local_468._28_4_,local_468.BaseBitIndex);
    pTStack_118 = local_468.Array;
    local_100 = (TBitArray<FDefaultBitArrayAllocator> **)
                CONCAT44(local_100._4_4_,
                         *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x8 -
                         *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x34);
    local_3d0 = local_468.Array;
    uStack_3b8 = local_100;
    local_3e0._0_8_ = pTVar27;
    lStack_120 = unique0x10001abb;
    uStack_110 = uStack_3c8;
    lStack_108 = local_3c0;
    pTVar22 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_170,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                         *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x28);
    local_298._padding_ = pTVar22->_padding_;
    local_298._padding_ = (longlong)pTVar22->Array;
    local_298._padding_._0_4_ = pTVar22->UnvisitedBitMask;
    local_298._padding_._4_4_ = pTVar22->CurrentBitIndex;
    local_298._padding_ = *(longlong *)&pTVar22->BaseBitIndex;
    local_100 = (TBitArray<FDefaultBitArrayAllocator> **)
                CONCAT44(local_100._4_4_,
                         *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x8 -
                         *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x34);
    local_298._40_8_ = local_100;
    local_298._padding_ = (longlong)pTVar27;
    local_128 = pTVar27;
    lStack_120 = local_298._padding_;
    pTStack_118 = (TBitArray<FDefaultBitArrayAllocator> *)local_298._padding_;
    uStack_110 = local_298._padding_;
    lStack_108 = local_298._padding_;
    bVar19 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_3e0,&local_298);
    dVar5 = __real_3fe0000000000000;
    if (bVar19) {
      do {
        uVar20 = (**(code **)(*(longlong *)this->_padding_ + 0x10))
                           ((longlong *)this->_padding_,
                            *(undefined4 *)
                             (*(longlong *)
                               (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)local_3e0._0_8_ + (longlong)uStack_3c8._4_4_ * 0xc));
        auVar61 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
        dVar76 = (param_2->TotalTransform).Rotation.ZW.m128d_f64[1];
        uVar24 = (ulonglong)(uVar20 & 0x1ff);
        lVar28 = *(longlong *)(*(longlong *)(this->_padding_ + 0x10) + (ulonglong)(uVar20 >> 9) * 8)
        ;
        pdVar2 = (double *)(lVar28 + uVar24 * 0x18);
        local_1d8 = *pdVar2;
        dStack_1d0 = pdVar2[1];
        local_1c8 = *(double *)(lVar28 + 0x10 + uVar24 * 0x18);
        dVar77 = local_1c8 * (param_2->TotalTransform).Scale3D.ZW.m128d_f64[0];
        dVar14 = (param_2->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
        local_1a8[0] = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
        dVar68 = (param_2->TotalTransform).Scale3D.XY.m128d_f64[0] * local_1d8;
        dVar66 = (param_2->TotalTransform).Scale3D.XY.m128d_f64[1] * dStack_1d0;
        uVar93 = (undefined4)((ulonglong)dVar66 >> 0x20);
        auVar69._8_4_ = SUB84(dVar66,0);
        auVar69._0_8_ = dVar68;
        auVar69._12_4_ = uVar93;
        auVar58 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.ZW.m128d_f64;
        dVar9 = auVar58._0_8_;
        auVar42 = blendpd(local_1a8[0],auVar58,2);
        auVar70._0_8_ = auVar69._8_8_ * local_1a8[0]._0_8_ - local_1a8[0]._8_8_ * dVar68;
        auVar70._8_8_ = dVar77 * local_1a8[0]._8_8_ - dVar9 * dVar66;
        auVar30._8_4_ = SUB84(dVar66,0);
        auVar30._0_8_ = dVar68;
        auVar30._12_4_ = uVar93;
        auVar53._8_4_ = SUB84(dVar14,0);
        auVar53._0_8_ = dVar77;
        auVar53._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        auVar53 = blendpd(auVar30,auVar53,2);
        auVar44._0_8_ = auVar53._0_8_ * dVar9 - auVar42._0_8_ * dVar77;
        auVar44._8_8_ = auVar53._8_8_ * auVar58._8_8_ - auVar42._8_8_ * dVar14;
        auVar53 = blendpd(auVar70,auVar44,2);
        dVar14 = auVar70._8_8_ + auVar70._8_8_;
        dVar78 = auVar44._0_8_ + auVar44._0_8_;
        uVar93 = (undefined4)((ulonglong)dVar78 >> 0x20);
        auVar71._0_8_ = auVar53._0_8_ + auVar53._0_8_;
        auVar71._8_8_ = auVar53._8_8_ + auVar53._8_8_;
        auVar54._8_4_ = SUB84(dVar78,0);
        auVar54._0_8_ = dVar14;
        auVar54._12_4_ = uVar93;
        auVar43._8_4_ = SUB84(dVar78,0);
        auVar43._0_8_ = dVar14;
        auVar43._12_4_ = uVar93;
        auVar53 = blendpd(auVar43,auVar71,2);
        auVar55._0_8_ = auVar54._8_8_ * auVar61._0_8_ - auVar61._8_8_ * dVar14;
        auVar55._8_8_ = auVar71._0_8_ * auVar61._8_8_ - dVar9 * dVar78;
        auVar42._8_4_ = SUB84(auVar55._8_8_,0);
        auVar42._0_8_ = auVar55._0_8_;
        auVar42._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
        auVar30 = blendpd(auVar61,auVar58,2);
        auVar61._0_8_ = auVar53._0_8_ * dVar9 - auVar30._0_8_ * auVar71._0_8_;
        auVar61._8_8_ = auVar53._8_8_ * auVar58._8_8_ - auVar30._8_8_ * auVar71._8_8_;
        auVar58 = blendpd(auVar55,auVar61,2);
        dVar9 = dVar14 * dVar76 + dVar68 + auVar42._8_8_ +
                (param_2->TotalTransform).Translation.XY.m128d_f64[0];
        dVar68 = dVar78 * dVar76 + dVar66 + auVar61._0_8_ +
                 (param_2->TotalTransform).Translation.XY.m128d_f64[1];
        uVar93 = SUB84(dVar68,0);
        uVar94 = (undefined4)((ulonglong)dVar68 >> 0x20);
        local_1e0 = auVar71._0_8_ * dVar76 + dVar77 + auVar58._0_8_ +
                    (param_2->TotalTransform).Translation.ZW.m128d_f64[0];
        local_1f0._8_4_ = uVar93;
        local_1f0._0_8_ = dVar9;
        local_1f0._12_4_ = uVar94;
        if (param_3->bIsOrthographic == false) {
          local_348._8_4_ = uVar93;
          local_348._0_8_ = dVar9;
          local_348._12_4_ = uVar94;
          local_348._s_0.Z = local_1e0;
          ToolSceneQueriesUtil::CalculateDimensionFromVisualAngleD
                    (param_3,(TVector<double> *)&local_348._s_0,dVar5);
        }
        puVar3 = (undefined8 *)(lVar28 + uVar24 * 0x18);
        local_330 = *puVar3;
        uStack_328 = puVar3[1];
        local_4d8 = &local_498;
        local_320 = *(undefined8 *)(lVar28 + 0x10 + uVar24 * 0x18);
        local_4c8 = 0;
        local_4d0 = CONCAT44(local_4d0._4_4_,fVar4);
        (**(code **)(param_2->_padding_ + 0x28))(param_2,&local_330);
        uStack_3c8 = CONCAT44(uStack_3c8._4_4_,(uint)uStack_3c8 & ~uStack_3d4);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_3e0 + 8));
        bVar19 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_3e0,&local_298);
      } while (bVar19);
    }
  }
  pTVar27 = &param_1->SelectedEdgeIDs;
  puVar1 = &(param_1->SelectedEdgeIDs).Elements.field_0x10;
  local_488._padding_._0_4_ = 0;
  local_488._padding_._4_4_ = 1;
  local_488.UnvisitedBitMask = 0xffffffff;
  local_488.CurrentBitIndex = 0;
  local_488.BaseBitIndex = 0;
  local_488.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_420 = pTVar27;
  if (*(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_488);
  }
  TStack_3a8._padding_ = CONCAT44(local_488._padding_._4_4_,(undefined4)local_488._padding_);
  TStack_3a8.CurrentBitIndex = local_488.CurrentBitIndex;
  TStack_3a8.UnvisitedBitMask = local_488.UnvisitedBitMask;
  TStack_3a8._28_4_ = local_488._28_4_;
  TStack_3a8.BaseBitIndex = local_488.BaseBitIndex;
  pTStack_118 = local_488.Array;
  local_100 = (TBitArray<FDefaultBitArrayAllocator> **)
              CONCAT44(local_100._4_4_,
                       *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
                       *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34);
  TStack_3a8.Array = local_488.Array;
  uStack_388 = local_100;
  local_3b0 = pTVar27;
  local_128 = pTVar27;
  lStack_120 = TStack_3a8._padding_;
  uStack_110 = TStack_3a8._16_8_;
  lStack_108 = TStack_3a8._24_8_;
  pTVar22 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_150,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x28);
  lStack_120 = pTVar22->_padding_;
  local_4a0 = pTVar22->Array;
  uVar16._0_4_ = pTVar22->UnvisitedBitMask;
  uVar16._4_4_ = pTVar22->CurrentBitIndex;
  lStack_108 = *(longlong *)&pTVar22->BaseBitIndex;
  local_4a8 = uVar16._4_4_;
  pTStack_118 = local_4a0;
  uStack_110 = uVar16;
  while( true ) {
    pTVar18 = local_3b0;
    if (*(int *)&(local_3b0->Elements).field_0x8 - *(int *)&(local_3b0->Elements).field_0x34 !=
        (int)uStack_388) {
      local_4b8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_4b8);
    }
    pFVar17 = local_418;
    if (((TStack_3a8.CurrentBitIndex == uVar16._4_4_) && (TStack_3a8.Array == local_4a0)) &&
       (pTVar18 == pTVar27)) break;
    plVar25 = (longlong *)
              (**(code **)(*(longlong *)this->_padding_ + 0x38))
                        ((longlong *)this->_padding_,
                         *(undefined4 *)
                          (*(longlong *)&pTVar18->Elements +
                          (longlong)TStack_3a8.CurrentBitIndex * 0xc));
    lVar28 = this->_padding_;
    iVar6 = (int)plVar25[1];
    local_4b0 = CONCAT44(local_4b0._4_4_,iVar6 + -1);
    if (iVar6 < 1) {
      local_4d8 = (undefined8 *)0x0;
      local_4d0 = (longlong)iVar6;
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar19) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar24 = (ulonglong)(*(uint *)*plVar25 & 0x1ff);
    lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x10) + (ulonglong)(*(uint *)*plVar25 >> 9) * 8);
    auVar61 = *(undefined1 (*) [16])(lVar28 + uVar24 * 0x18);
    uVar93 = auVar61._0_4_;
    uVar94 = auVar61._4_4_;
    uVar98 = auVar61._8_4_;
    uVar101 = auVar61._12_4_;
    dVar5 = *(double *)(lVar28 + 0x10 + uVar24 * 0x18);
    uVar95 = SUB84(dVar5,0);
    uVar41 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if (param_3->bIsOrthographic != false) {
      auVar58 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.ZW.m128d_f64;
      auVar53 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
      dVar78 = (param_2->TotalTransform).Rotation.ZW.m128d_f64[1];
      dVar68 = dVar5 * (param_2->TotalTransform).Scale3D.ZW.m128d_f64[0];
      dVar66 = (param_2->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      local_4d8 = (undefined8 *)((ulonglong)local_4d8 & 0xffffffffffffff00);
      dVar77 = auVar61._0_8_ * (param_2->TotalTransform).Scale3D.XY.m128d_f64[0];
      dVar14 = auVar61._8_8_ * (param_2->TotalTransform).Scale3D.XY.m128d_f64[1];
      uVar79 = (undefined4)((ulonglong)dVar14 >> 0x20);
      local_2b8 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
      auVar44 = blendpd(local_2b8,auVar58,2);
      auVar81._8_4_ = SUB84(dVar14,0);
      auVar81._0_8_ = dVar77;
      auVar81._12_4_ = uVar79;
      dVar9 = auVar58._0_8_;
      auVar82._0_8_ = auVar81._8_8_ * local_2b8._0_8_ - local_2b8._8_8_ * dVar77;
      auVar82._8_8_ = dVar68 * local_2b8._8_8_ - dVar9 * dVar14;
      auVar29._8_4_ = SUB84(dVar14,0);
      auVar29._0_8_ = dVar77;
      auVar29._12_4_ = uVar79;
      auVar10._8_4_ = SUB84(dVar66,0);
      auVar10._0_8_ = dVar68;
      auVar10._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
      auVar30 = blendpd(auVar29,auVar10,2);
      auVar72._8_4_ = SUB84(auVar82._8_8_,0);
      auVar72._0_8_ = auVar82._0_8_;
      auVar72._12_4_ = (int)((ulonglong)auVar82._8_8_ >> 0x20);
      auVar31._0_8_ = auVar30._0_8_ * dVar9 - auVar44._0_8_ * dVar68;
      auVar31._8_8_ = auVar30._8_8_ * auVar58._8_8_ - auVar44._8_8_ * dVar66;
      auVar30 = blendpd(auVar82,auVar31,2);
      dVar66 = auVar72._8_8_ + auVar72._8_8_;
      dVar76 = auVar31._0_8_ + auVar31._0_8_;
      auVar83._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar83._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      auVar56._8_4_ = SUB84(dVar76,0);
      auVar56._0_8_ = dVar66;
      uVar79 = (undefined4)((ulonglong)dVar76 >> 0x20);
      auVar56._12_4_ = uVar79;
      auVar45._8_4_ = SUB84(dVar76,0);
      auVar45._0_8_ = dVar66;
      auVar45._12_4_ = uVar79;
      auVar30 = blendpd(auVar45,auVar83,2);
      auVar57._0_8_ = auVar56._8_8_ * auVar53._0_8_ - auVar53._8_8_ * dVar66;
      auVar57._8_8_ = auVar83._0_8_ * auVar53._8_8_ - dVar9 * dVar76;
      auVar53 = blendpd(auVar53,auVar58,2);
      auVar32._8_4_ = SUB84(auVar57._8_8_,0);
      auVar32._0_8_ = auVar57._0_8_;
      auVar32._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
      auVar46._0_8_ = auVar30._0_8_ * dVar9 - auVar53._0_8_ * auVar83._0_8_;
      auVar46._8_8_ = auVar30._8_8_ * auVar58._8_8_ - auVar53._8_8_ * auVar83._8_8_;
      auVar58 = blendpd(auVar57,auVar46,2);
      local_318 = dVar66 * dVar78 + dVar77 + auVar32._8_8_ +
                  (param_2->TotalTransform).Translation.XY.m128d_f64[0];
      dStack_310 = dVar76 * dVar78 + dVar14 + auVar46._0_8_ +
                   (param_2->TotalTransform).Translation.XY.m128d_f64[1];
      local_308 = auVar83._0_8_ * dVar78 + dVar68 + auVar58._0_8_ +
                  (param_2->TotalTransform).Translation.ZW.m128d_f64[0];
      local_208 = auVar61;
      local_1f8 = dVar5;
      (**(code **)(param_2->_padding_ + 0x18))(param_2,&local_318,&local_498);
    }
    local_4b0 = (longlong)(int)local_4b0;
    if (0 < local_4b0) {
      uVar20 = 1;
      lVar28 = 4;
      uVar79 = uVar93;
      uVar96 = uVar94;
      uVar97 = uVar98;
      uVar99 = uVar101;
      uVar102 = uVar95;
      do {
        local_428 = this->_padding_;
        uVar21 = 0;
        if ((int)uVar20 < (int)plVar25[1]) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_4d8 = (undefined8 *)(longlong)(int)uVar20;
          local_4d0 = (longlong)(int)plVar25[1];
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        auVar61 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.ZW.m128d_f64;
        auVar58 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
        dVar15 = (param_2->TotalTransform).Rotation.ZW.m128d_f64[1];
        uVar24 = (ulonglong)(*(uint *)(*plVar25 + lVar28) & 0x1ff);
        dVar78 = (double)CONCAT44(uVar96,uVar79) * (param_2->TotalTransform).Scale3D.XY.m128d_f64[0]
        ;
        dVar76 = (double)CONCAT44(uVar99,uVar97) * (param_2->TotalTransform).Scale3D.XY.m128d_f64[1]
        ;
        uVar100 = (undefined4)((ulonglong)dVar76 >> 0x20);
        lVar8 = *(longlong *)
                 (*(longlong *)(local_428 + 0x10) +
                 (ulonglong)(*(uint *)(*plVar25 + lVar28) >> 9) * 8);
        local_1c0 = *(undefined1 (*) [16])(lVar8 + uVar24 * 0x18);
        uVar93 = local_1c0._0_4_;
        uVar94 = local_1c0._4_4_;
        uVar98 = local_1c0._8_4_;
        uVar101 = local_1c0._12_4_;
        dVar5 = *(double *)(lVar8 + 0x10 + uVar24 * 0x18);
        uVar95 = SUB84(dVar5,0);
        dVar77 = local_1c0._0_8_ * (param_2->TotalTransform).Scale3D.XY.m128d_f64[0];
        dVar14 = local_1c0._8_8_ * (param_2->TotalTransform).Scale3D.XY.m128d_f64[1];
        uVar80 = (undefined4)((ulonglong)dVar14 >> 0x20);
        dVar68 = dVar5 * (param_2->TotalTransform).Scale3D.ZW.m128d_f64[0];
        dVar66 = (param_2->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
        auVar53 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
        auVar84._8_4_ = SUB84(dVar14,0);
        auVar84._0_8_ = dVar77;
        auVar84._12_4_ = uVar80;
        auVar30 = blendpd(auVar53,auVar61,2);
        dVar9 = auVar61._0_8_;
        auVar85._0_8_ = auVar84._8_8_ * auVar53._0_8_ - auVar53._8_8_ * dVar77;
        auVar85._8_8_ = dVar68 * auVar53._8_8_ - dVar9 * dVar14;
        auVar33._8_4_ = SUB84(dVar14,0);
        auVar33._0_8_ = dVar77;
        auVar33._12_4_ = uVar80;
        auVar11._8_4_ = SUB84(dVar66,0);
        auVar11._0_8_ = dVar68;
        auVar11._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
        auVar53 = blendpd(auVar33,auVar11,2);
        auVar73._8_4_ = SUB84(auVar85._8_8_,0);
        auVar73._0_8_ = auVar85._0_8_;
        auVar73._12_4_ = (int)((ulonglong)auVar85._8_8_ >> 0x20);
        auVar34._0_8_ = auVar53._0_8_ * dVar9 - auVar30._0_8_ * dVar68;
        auVar34._8_8_ = auVar53._8_8_ * auVar61._8_8_ - auVar30._8_8_ * dVar66;
        auVar53 = blendpd(auVar85,auVar34,2);
        dVar67 = auVar73._8_8_ + auVar73._8_8_;
        dVar66 = auVar34._0_8_ + auVar34._0_8_;
        auVar86._0_8_ = auVar53._0_8_ + auVar53._0_8_;
        auVar86._8_8_ = auVar53._8_8_ + auVar53._8_8_;
        auVar59._8_4_ = SUB84(dVar66,0);
        auVar59._0_8_ = dVar67;
        uVar80 = (undefined4)((ulonglong)dVar66 >> 0x20);
        auVar59._12_4_ = uVar80;
        auVar47._8_4_ = SUB84(dVar66,0);
        auVar47._0_8_ = dVar67;
        auVar47._12_4_ = uVar80;
        auVar30 = blendpd(auVar58,auVar61,2);
        auVar60._0_8_ = auVar59._8_8_ * auVar58._0_8_ - auVar58._8_8_ * dVar67;
        auVar60._8_8_ = auVar86._0_8_ * auVar58._8_8_ - dVar9 * dVar66;
        auVar53 = blendpd(auVar47,auVar86,2);
        auVar58._8_4_ = SUB84(auVar60._8_8_,0);
        auVar58._0_8_ = auVar60._0_8_;
        auVar58._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
        auVar48._0_8_ = auVar53._0_8_ * dVar9 - auVar30._0_8_ * auVar86._0_8_;
        auVar48._8_8_ = auVar53._8_8_ * auVar61._8_8_ - auVar30._8_8_ * auVar86._8_8_;
        local_228 = (double)CONCAT44(uVar41,uVar102);
        dVar9 = dVar15 * dVar66 + dVar14 + auVar48._0_8_ +
                (param_2->TotalTransform).Translation.XY.m128d_f64[1];
        auVar61 = blendpd(auVar60,auVar48,2);
        local_2f0 = dVar15 * auVar86._0_8_ + dVar68 + auVar61._0_8_ +
                    (param_2->TotalTransform).Translation.ZW.m128d_f64[0];
        local_2b8 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
        dVar68 = local_228 * (param_2->TotalTransform).Scale3D.ZW.m128d_f64[0];
        dVar66 = (param_2->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar14 = (param_2->TotalTransform).Rotation.ZW.m128d_f64[1];
        local_300._8_4_ = SUB84(dVar9,0);
        local_300._0_8_ =
             dVar15 * dVar67 + dVar77 + auVar58._8_8_ +
             (param_2->TotalTransform).Translation.XY.m128d_f64[0];
        local_300._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        auVar61 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.ZW.m128d_f64;
        auVar58 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
        auVar30 = blendpd(local_2b8,auVar61,2);
        local_4d0 = local_4d0 & 0xffffffffffffff00;
        auVar87._8_4_ = SUB84(dVar76,0);
        auVar87._0_8_ = dVar78;
        auVar87._12_4_ = uVar100;
        local_4d8 = (undefined8 *)CONCAT44(local_4d8._4_4_,fVar4);
        dVar9 = auVar61._0_8_;
        auVar88._0_8_ = auVar87._8_8_ * local_2b8._0_8_ - local_2b8._8_8_ * dVar78;
        auVar88._8_8_ = dVar68 * local_2b8._8_8_ - dVar9 * dVar76;
        auVar35._8_4_ = SUB84(dVar76,0);
        auVar35._0_8_ = dVar78;
        auVar35._12_4_ = uVar100;
        auVar12._8_4_ = SUB84(dVar66,0);
        auVar12._0_8_ = dVar68;
        auVar12._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
        auVar53 = blendpd(auVar35,auVar12,2);
        auVar74._8_4_ = SUB84(auVar88._8_8_,0);
        auVar74._0_8_ = auVar88._0_8_;
        auVar74._12_4_ = (int)((ulonglong)auVar88._8_8_ >> 0x20);
        auVar36._0_8_ = auVar53._0_8_ * dVar9 - auVar30._0_8_ * dVar68;
        auVar36._8_8_ = auVar53._8_8_ * auVar61._8_8_ - auVar30._8_8_ * dVar66;
        auVar53 = blendpd(auVar88,auVar36,2);
        dVar66 = auVar74._8_8_ + auVar74._8_8_;
        dVar77 = auVar36._0_8_ + auVar36._0_8_;
        auVar89._0_8_ = auVar53._0_8_ + auVar53._0_8_;
        auVar89._8_8_ = auVar53._8_8_ + auVar53._8_8_;
        auVar62._8_4_ = SUB84(dVar77,0);
        auVar62._0_8_ = dVar66;
        uVar41 = (undefined4)((ulonglong)dVar77 >> 0x20);
        auVar62._12_4_ = uVar41;
        auVar49._8_4_ = SUB84(dVar77,0);
        auVar49._0_8_ = dVar66;
        auVar49._12_4_ = uVar41;
        auVar53 = blendpd(auVar49,auVar89,2);
        auVar63._0_8_ = auVar62._8_8_ * auVar58._0_8_ - auVar58._8_8_ * dVar66;
        auVar63._8_8_ = auVar89._0_8_ * auVar58._8_8_ - dVar9 * dVar77;
        auVar37._8_4_ = SUB84(auVar63._8_8_,0);
        auVar37._0_8_ = auVar63._0_8_;
        auVar37._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
        auVar58 = blendpd(auVar58,auVar61,2);
        auVar50._0_8_ = auVar53._0_8_ * dVar9 - auVar58._0_8_ * auVar89._0_8_;
        auVar50._8_8_ = auVar53._8_8_ * auVar61._8_8_ - auVar58._8_8_ * auVar89._8_8_;
        auVar61 = blendpd(auVar63,auVar50,2);
        local_2e8 = dVar66 * dVar14 + dVar78 + auVar37._8_8_ +
                    (param_2->TotalTransform).Translation.XY.m128d_f64[0];
        dStack_2e0 = dVar77 * dVar14 + dVar76 + auVar50._0_8_ +
                     (param_2->TotalTransform).Translation.XY.m128d_f64[1];
        local_2d8 = auVar89._0_8_ * dVar14 + dVar68 + auVar61._0_8_ +
                    (param_2->TotalTransform).Translation.ZW.m128d_f64[0];
        local_238 = uVar79;
        uStack_234 = uVar96;
        uStack_230 = uVar97;
        uStack_22c = uVar99;
        local_1b0 = dVar5;
        (**(code **)(param_2->_padding_ + 8))(param_2,&local_2e8,local_300,&local_498);
        uVar20 = uVar20 + 1;
        lVar28 = lVar28 + 4;
        local_4b0 = local_4b0 + -1;
        uVar41 = (undefined4)((ulonglong)dVar5 >> 0x20);
        uVar79 = uVar93;
        uVar96 = uVar94;
        uVar97 = uVar98;
        uVar99 = uVar101;
        uVar102 = uVar95;
      } while (local_4b0 != 0);
      local_4b0 = 0;
      uVar16._4_4_ = local_4a8;
    }
    if (param_3->bIsOrthographic != false) {
      auVar61 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.ZW.m128d_f64;
      auVar58 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
      dVar14 = (param_2->TotalTransform).Rotation.ZW.m128d_f64[1];
      local_210 = CONCAT44(uVar41,uVar95);
      dVar9 = (double)CONCAT44(uVar41,uVar95) * (param_2->TotalTransform).Scale3D.ZW.m128d_f64[0];
      dVar68 = (param_2->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      local_4d8 = (undefined8 *)((ulonglong)local_4d8 & 0xffffffffffffff00);
      local_2b8 = *(undefined1 (*) [16])(param_2->TotalTransform).Rotation.XY.m128d_f64;
      auVar30 = blendpd(local_2b8,auVar61,2);
      dVar66 = (double)CONCAT44(uVar94,uVar93) * (param_2->TotalTransform).Scale3D.XY.m128d_f64[0];
      dVar77 = (double)CONCAT44(uVar101,uVar98) * (param_2->TotalTransform).Scale3D.XY.m128d_f64[1];
      uVar41 = (undefined4)((ulonglong)dVar77 >> 0x20);
      auVar90._8_4_ = SUB84(dVar77,0);
      auVar90._0_8_ = dVar66;
      auVar90._12_4_ = uVar41;
      dVar5 = auVar61._0_8_;
      auVar91._0_8_ = auVar90._8_8_ * local_2b8._0_8_ - local_2b8._8_8_ * dVar66;
      auVar91._8_8_ = dVar9 * local_2b8._8_8_ - dVar5 * dVar77;
      auVar38._8_4_ = SUB84(dVar77,0);
      auVar38._0_8_ = dVar66;
      auVar38._12_4_ = uVar41;
      auVar13._8_4_ = SUB84(dVar68,0);
      auVar13._0_8_ = dVar9;
      auVar13._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
      auVar53 = blendpd(auVar38,auVar13,2);
      auVar75._8_4_ = SUB84(auVar91._8_8_,0);
      auVar75._0_8_ = auVar91._0_8_;
      auVar75._12_4_ = (int)((ulonglong)auVar91._8_8_ >> 0x20);
      auVar39._0_8_ = auVar53._0_8_ * dVar5 - auVar30._0_8_ * dVar9;
      auVar39._8_8_ = auVar53._8_8_ * auVar61._8_8_ - auVar30._8_8_ * dVar68;
      auVar53 = blendpd(auVar91,auVar39,2);
      dVar68 = auVar75._8_8_ + auVar75._8_8_;
      dVar78 = auVar39._0_8_ + auVar39._0_8_;
      auVar92._0_8_ = auVar53._0_8_ + auVar53._0_8_;
      auVar92._8_8_ = auVar53._8_8_ + auVar53._8_8_;
      auVar64._8_4_ = SUB84(dVar78,0);
      auVar64._0_8_ = dVar68;
      uVar41 = (undefined4)((ulonglong)dVar78 >> 0x20);
      auVar64._12_4_ = uVar41;
      auVar51._8_4_ = SUB84(dVar78,0);
      auVar51._0_8_ = dVar68;
      auVar51._12_4_ = uVar41;
      auVar53 = blendpd(auVar51,auVar92,2);
      auVar65._0_8_ = auVar64._8_8_ * auVar58._0_8_ - auVar58._8_8_ * dVar68;
      auVar65._8_8_ = auVar92._0_8_ * auVar58._8_8_ - dVar5 * dVar78;
      auVar58 = blendpd(auVar58,auVar61,2);
      auVar40._8_4_ = SUB84(auVar65._8_8_,0);
      auVar40._0_8_ = auVar65._0_8_;
      auVar40._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
      auVar52._0_8_ = auVar53._0_8_ * dVar5 - auVar58._0_8_ * auVar92._0_8_;
      auVar52._8_8_ = auVar53._8_8_ * auVar61._8_8_ - auVar58._8_8_ * auVar92._8_8_;
      auVar61 = blendpd(auVar65,auVar52,2);
      local_2d0 = dVar68 * dVar14 + dVar66 + auVar40._8_8_ +
                  (param_2->TotalTransform).Translation.XY.m128d_f64[0];
      dStack_2c8 = dVar78 * dVar14 + dVar77 + auVar52._0_8_ +
                   (param_2->TotalTransform).Translation.XY.m128d_f64[1];
      local_2c0 = auVar92._0_8_ * dVar14 + dVar9 + auVar61._0_8_ +
                  (param_2->TotalTransform).Translation.ZW.m128d_f64[0];
      local_220 = uVar93;
      uStack_21c = uVar94;
      uStack_218 = uVar98;
      uStack_214 = uVar101;
      (**(code **)(param_2->_padding_ + 0x18))(param_2,&local_2d0,&local_498);
    }
    TStack_3a8.UnvisitedBitMask = TStack_3a8.UnvisitedBitMask & ~TStack_3a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3a8);
    pTVar27 = local_420;
  }
  if ((param_3->bIsOrthographic != false) &&
     (0 < *(int *)&(local_418->SelectedGroupIDs).Elements.field_0x8 -
          *(int *)&(local_418->SelectedGroupIDs).Elements.field_0x34)) {
    plVar25 = (longlong *)this->_padding_;
    local_128 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
    pcVar7 = *(code **)(*plVar25 + 0x58);
    local_380 = &local_498;
    local_370 = param_2;
    pFStack_368 = this;
    local_100 = FMemory::Malloc(0x28,8);
    *local_100 = (TBitArray<FDefaultBitArrayAllocator> *)
                 &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FGroupTopologySelector::DrawSelection'::`30'::<lambda_1>,0,1>
                  ::_vftable_;
    *(undefined4 *)(local_100 + 1) = (undefined4)local_380;
    *(undefined4 *)((longlong)local_100 + 0xc) = local_380._4_4_;
    *(float *)(local_100 + 2) = fVar4;
    *(undefined4 *)((longlong)local_100 + 0x14) = uStack_374;
    local_100[3] = (TBitArray<FDefaultBitArrayAllocator> *)local_370;
    local_100[4] = (TBitArray<FDefaultBitArrayAllocator> *)pFStack_368;
    if (local_100 + 1 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
      local_128 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                  UE::Core::Private::Function::
                  TFunctionRefCaller<`FGroupTopologySelector::DrawSelection'::__l30::<lambda_1>,void,int>
                  ::Call;
    }
    (*pcVar7)(plVar25,pFVar17,&local_128);
    if (local_128 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      ppTVar26 = &pTStack_118;
      if (local_100 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
        ppTVar26 = local_100;
      }
      (*(code *)((*ppTVar26)->AllocatorInstance).SecondaryData)();
    }
  }
  return;
}

// ExpandSelectionByBoundaryLoops @ 14cb8bff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FGroupTopologySelector::ExpandSelectionByBoundaryLoops
          (FGroupTopologySelector *this,FGroupTopologySelection *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  FGroupTopology *pFVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  undefined1 local_118 [4];
  int local_114;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = &param_1->SelectedEdgeIDs;
  local_114 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
              *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  iVar15 = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(&local_98,pTVar1);
  puVar2 = &(param_1->SelectedEdgeIDs).Elements.field_0x10;
  iVar4 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  uStack_104 = 1;
  local_f0 = 0;
  iStack_f4 = local_f0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar14 = *puVar17;
    local_f0 = 0;
    iVar15 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      local_f0 = local_f0 + 0x20;
      iVar15 = iVar15 + 1;
      iStack_f4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14cb8c0ee;
      uVar14 = puVar17[lVar11 + 1];
    }
    uStack_104 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_104 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_e0 = (int)lVar11;
    iStack_f4 = local_f0 + -1 + local_e0;
    if (iVar4 < iStack_f4) {
      iStack_f4 = iVar4;
    }
  }
LAB_14cb8c0ee:
  iStack_e8 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
              *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34;
  uVar14 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  uStack_f8 = 0xffffffff;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uStack_104,iVar15);
  TStack_c8.CurrentBitIndex = iStack_f4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_c8._28_4_ = iStack_f4;
  TStack_c8.BaseBitIndex = local_f0;
  uStack_a8 = CONCAT44(uStack_e4,iStack_e8);
  local_110 = pTVar1;
  iStack_108 = iVar15;
  local_100 = puVar2;
  iStack_ec = iStack_f4;
  local_d0 = pTVar1;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar10 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14cb8c200;
      uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_dc = (int)lVar11;
    uVar14 = local_dc + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14cb8c200:
  do {
    pTVar7 = local_d0;
    if (*(int *)&(local_d0->Elements).field_0x8 - *(int *)&(local_d0->Elements).field_0x34 !=
        (int)uStack_a8) {
      local_118[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    if (((TStack_c8.CurrentBitIndex == uVar14) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == pTVar1))
    {
      if (pTVar1 != &local_98) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pTVar1,&local_98);
      }
      bVar8 = local_114 <
              *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
              *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34;
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return bVar8;
    }
    uVar13 = *(uint *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_c8.CurrentBitIndex * 0xc);
    bVar8 = UE::Geometry::FGroupTopology::IsBoundaryEdge
                      ((this->GroupTopologyUtils).GroupTopology,uVar13);
    if (bVar8) {
      pFVar5 = (this->GroupTopologyUtils).GroupTopology;
      iVar4 = (pFVar5->Edges).ArrayNum;
      uVar10 = 0;
      if ((int)uVar13 < iVar4) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (local_128 = (longlong)(int)uVar13, local_120 = (longlong)iVar4,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      local_d8 = *(undefined8 *)
                  ((pFVar5->Edges).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x50 + 0x48);
      if ((int)local_d8 != -1) {
        FGroupTopologyUtils::AddNewBoundaryLoopEdges
                  (&this->GroupTopologyUtils,uVar13,(int)local_d8,&local_98);
        FGroupTopologyUtils::AddNewBoundaryLoopEdges
                  (&this->GroupTopologyUtils,uVar13,local_d8._4_4_,&local_98);
      }
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  } while( true );
}

// ExpandSelectionByEdgeLoops @ 14cb8c380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FGroupTopologySelector::ExpandSelectionByEdgeLoops
          (FGroupTopologySelector *this,FGroupTopologySelection *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  FGroupTopology *pFVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  undefined1 local_118 [4];
  int local_114;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = &param_1->SelectedEdgeIDs;
  local_114 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
              *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  iVar15 = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(&local_98,pTVar1);
  puVar2 = &(param_1->SelectedEdgeIDs).Elements.field_0x10;
  iVar4 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  uStack_104 = 1;
  local_f0 = 0;
  iStack_f4 = local_f0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar14 = *puVar17;
    local_f0 = 0;
    iVar15 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      local_f0 = local_f0 + 0x20;
      iVar15 = iVar15 + 1;
      iStack_f4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14cb8c47e;
      uVar14 = puVar17[lVar11 + 1];
    }
    uStack_104 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_104 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_e0 = (int)lVar11;
    iStack_f4 = local_f0 + -1 + local_e0;
    if (iVar4 < iStack_f4) {
      iStack_f4 = iVar4;
    }
  }
LAB_14cb8c47e:
  iStack_e8 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
              *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34;
  uVar14 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  uStack_f8 = 0xffffffff;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uStack_104,iVar15);
  TStack_c8.CurrentBitIndex = iStack_f4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_c8._28_4_ = iStack_f4;
  TStack_c8.BaseBitIndex = local_f0;
  uStack_a8 = CONCAT44(uStack_e4,iStack_e8);
  local_110 = pTVar1;
  iStack_108 = iVar15;
  local_100 = puVar2;
  iStack_ec = iStack_f4;
  local_d0 = pTVar1;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar10 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14cb8c590;
      uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_dc = (int)lVar11;
    uVar14 = local_dc + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14cb8c590:
  while( true ) {
    pTVar7 = local_d0;
    if (*(int *)&(local_d0->Elements).field_0x8 - *(int *)&(local_d0->Elements).field_0x34 !=
        (int)uStack_a8) {
      local_118[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    if (((TStack_c8.CurrentBitIndex == uVar14) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == pTVar1))
    {
      if (pTVar1 != &local_98) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pTVar1,&local_98);
      }
      bVar8 = local_114 <
              *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
              *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34;
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return bVar8;
    }
    pFVar5 = (this->GroupTopologyUtils).GroupTopology;
    iVar4 = (pFVar5->Edges).ArrayNum;
    uVar13 = *(uint *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_c8.CurrentBitIndex * 0xc);
    uVar10 = 0;
    if ((int)uVar13 < iVar4) {
      uVar10 = ~uVar13 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (local_128 = (longlong)(int)uVar13, local_120 = (longlong)iVar4,
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    local_d8 = *(undefined8 *)
                ((pFVar5->Edges).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x50 + 0x48);
    if ((int)local_d8 != -1) {
      FGroupTopologyUtils::AddNewEdgeLoopEdgesFromCorner
                (&this->GroupTopologyUtils,uVar13,(int)local_d8,&local_98);
      FGroupTopologyUtils::AddNewEdgeLoopEdgesFromCorner
                (&this->GroupTopologyUtils,uVar13,local_d8._4_4_,&local_98);
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  pcVar6 = (code *)swi(3);
  uVar9 = (*pcVar6)();
  return (bool)uVar9;
}

// ExpandSelectionByEdgeRings @ 14cb8c6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FGroupTopologySelector::ExpandSelectionByEdgeRings
          (FGroupTopologySelector *this,FGroupTopologySelection *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  FGroupTopology *pFVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  undefined1 local_118 [4];
  int local_114;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = &param_1->SelectedEdgeIDs;
  local_114 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
              *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  iVar15 = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(&local_98,pTVar1);
  puVar2 = &(param_1->SelectedEdgeIDs).Elements.field_0x10;
  iVar4 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  uStack_104 = 1;
  local_f0 = 0;
  iStack_f4 = local_f0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar14 = *puVar17;
    local_f0 = 0;
    iVar15 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      local_f0 = local_f0 + 0x20;
      iVar15 = iVar15 + 1;
      iStack_f4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14cb8c7ee;
      uVar14 = puVar17[lVar11 + 1];
    }
    uStack_104 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_104 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_e0 = (int)lVar11;
    iStack_f4 = local_f0 + -1 + local_e0;
    if (iVar4 < iStack_f4) {
      iStack_f4 = iVar4;
    }
  }
LAB_14cb8c7ee:
  iStack_e8 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
              *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34;
  uVar14 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  uStack_f8 = 0xffffffff;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uStack_104,iVar15);
  TStack_c8.CurrentBitIndex = iStack_f4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_c8._28_4_ = iStack_f4;
  TStack_c8.BaseBitIndex = local_f0;
  uStack_a8 = CONCAT44(uStack_e4,iStack_e8);
  local_110 = pTVar1;
  iStack_108 = iVar15;
  local_100 = puVar2;
  iStack_ec = iStack_f4;
  local_d0 = pTVar1;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar10 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14cb8c900;
      uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_dc = (int)lVar11;
    uVar14 = local_dc + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14cb8c900:
  while( true ) {
    pTVar7 = local_d0;
    if (*(int *)&(local_d0->Elements).field_0x8 - *(int *)&(local_d0->Elements).field_0x34 !=
        (int)uStack_a8) {
      local_118[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    if (((TStack_c8.CurrentBitIndex == uVar14) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == pTVar1))
    {
      if (pTVar1 != &local_98) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pTVar1,&local_98);
      }
      bVar8 = local_114 <
              *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
              *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34;
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return bVar8;
    }
    pFVar5 = (this->GroupTopologyUtils).GroupTopology;
    iVar4 = (pFVar5->Edges).ArrayNum;
    uVar13 = *(uint *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_c8.CurrentBitIndex * 0xc);
    uVar10 = 0;
    if ((int)uVar13 < iVar4) {
      uVar10 = ~uVar13 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (local_128 = (longlong)(int)uVar13, local_120 = (longlong)iVar4,
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    local_d8 = *(undefined8 *)
                ((pFVar5->Edges).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x50);
    if ((int)local_d8 != -1) {
      FGroupTopologyUtils::AddNewEdgeRingEdges
                (&this->GroupTopologyUtils,uVar13,(int)local_d8,&local_98);
      FGroupTopologyUtils::AddNewEdgeRingEdges
                (&this->GroupTopologyUtils,uVar13,local_d8._4_4_,&local_98);
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  pcVar6 = (code *)swi(3);
  uVar9 = (*pcVar6)();
  return (bool)uVar9;
}

// Initialize @ 14cba15d0

void __thiscall
FGroupTopologySelector::Initialize
          (FGroupTopologySelector *this,FDynamicMesh3 *param_1,FGroupTopology *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  this->_padding_ = (longlong)param_1;
  puVar2 = ::operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_2;
    *puVar2 = &___7FGroupTopologyProvider__6B_;
  }
  puVar1 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  (this->GroupTopologyUtils).GroupTopology = param_2;
  *(undefined2 *)&this->_padding_ = 0;
  return;
}

