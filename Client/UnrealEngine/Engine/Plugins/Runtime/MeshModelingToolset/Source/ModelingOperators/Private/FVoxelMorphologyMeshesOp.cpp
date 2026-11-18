// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 3

// operator() @ 14c953910

TVector<double> * __thiscall
`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l19::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TVector<double> *pTVar6;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  local_38._s_0.X = (param_2->field0_0x0)._s_0.X * *(double *)((longlong)this + 0x38);
  local_38._s_0.Y = *(double *)((longlong)this + 0x40) * (param_2->field0_0x0)._s_0.Y;
  local_38._s_0.Z = *(double *)((longlong)this + 0x48) * (param_2->field0_0x0)._s_0.Z;
  pTVar6 = UE::Geometry::operator*<double>(&local_20,this,(TVector<double> *)&local_38._s_0);
  dVar1 = *(double *)((longlong)this + 0x28);
  dVar2 = (pTVar6->field0_0x0)._s_0.Y;
  dVar3 = *(double *)((longlong)this + 0x58);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (*(double *)((longlong)this + 0x20) + (pTVar6->field0_0x0)._s_0.X) -
       *(double *)((longlong)this + 0x50);
  dVar4 = *(double *)((longlong)this + 0x30);
  dVar5 = (pTVar6->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar1 + dVar2) - dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar4 + dVar5) - *(double *)((longlong)this + 0x60)
  ;
  return __return_storage_ptr__;
}

// CalculateResult @ 14c96f990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult
          (FVoxelMorphologyMeshesOp *this,FProgressCancel *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  EMorphologyOperation EVar3;
  short sVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FDynamicMesh3 *this_00;
  code *pcVar7;
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  bool bVar28;
  int iVar29;
  TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *pTVar30;
  TAxisAlignedBox3<double> *pTVar31;
  ulonglong uVar32;
  FMeshShapeGenerator *pFVar33;
  ulong64 uVar34;
  undefined ***pppuVar35;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  longlong lVar39;
  int iVar40;
  TArray<UE::Geometry::TTransformSRT3<double>,TSizedDefaultAllocator<32>_> *pTVar41;
  ulonglong uVar42;
  uint uVar43;
  int iVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 uVar50;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar48 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar49 [16];
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined8 uVar55;
  undefined1 auVar54 [16];
  uint uVar56;
  uint uVar57;
  uint uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  double dVar61;
  undefined1 auStackY_10c8 [32];
  FProgressCancel *local_1088;
  longlong local_1080;
  FDynamicMeshEditor local_1078;
  FVoxelMorphologyMeshesOp *local_1070;
  double local_1068;
  double local_1060;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_1058;
  TVector<double>_u_0 local_1020;
  IndexIterator local_1008;
  TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> local_ff8;
  code *local_fe8 [5];
  undefined8 *local_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  longlong local_fa8;
  longlong lStack_fa0;
  double local_f98;
  double dStack_f90;
  undefined1 auStack_f88 [16];
  undefined1 auStack_f78 [16];
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined4 local_f38;
  undefined4 uStack_f34;
  undefined4 uStack_f30;
  undefined4 uStack_f2c;
  undefined1 local_f28 [16];
  double local_f18;
  double dStack_f10;
  double local_f08;
  TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> local_f00;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_ee8;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined4 local_e88;
  undefined4 uStack_e84;
  undefined4 uStack_e80;
  undefined4 uStack_e7c;
  undefined1 local_e78 [16];
  FDynamicMesh3 local_e68;
  TAxisAlignedBox3<double> local_c38;
  TAxisAlignedBox3<double> local_c08;
  undefined1 local_bd8 [128];
  undefined **local_b58;
  FProgressCancel **ppFStack_b50;
  undefined8 local_b48;
  undefined ***pppuStack_b40;
  FMarchingCubes local_b38;
  undefined1 local_878 [48];
  undefined **local_848;
  code *local_840;
  undefined8 local_830;
  double local_828;
  TDynamicVector<int,512> local_820;
  TDynamicVector<UE::Math::TVector<double>,512> local_808;
  TDynamicVector<UE::Math::TVector<double>,512> local_7f0;
  TDynamicVector<int,512> local_7d8;
  undefined8 local_7c0;
  code *local_7b8;
  undefined8 uStack_7b0;
  undefined **local_7a8;
  code *pcStack_7a0;
  undefined8 local_798;
  undefined ***pppuStack_790;
  code *local_788;
  undefined8 uStack_780;
  undefined **local_778;
  FProgressCancel **ppFStack_770;
  undefined8 local_768;
  undefined ***pppuStack_760;
  undefined1 local_758 [64];
  void *local_718;
  undefined4 local_710;
  undefined1 local_708 [64];
  void *local_6c8;
  undefined4 local_6c0;
  undefined2 local_6b8;
  undefined1 local_6b0 [64];
  void *local_670;
  undefined4 local_668;
  undefined1 local_660 [64];
  void *local_620;
  undefined4 local_618;
  undefined2 local_610;
  undefined1 local_608 [64];
  void *local_5c8;
  undefined4 local_5c0;
  undefined1 local_5b8 [64];
  void *local_578;
  undefined4 local_570;
  undefined2 local_568;
  undefined1 local_560 [64];
  void *local_520;
  undefined4 local_518;
  undefined1 local_510 [64];
  void *local_4d0;
  undefined4 local_4c8;
  undefined2 local_4c0;
  ForAnyElementType local_4b8;
  undefined8 local_4b0;
  ForAnyElementType local_4a8;
  undefined8 local_4a0;
  FExtrudeMesh local_498;
  undefined1 local_438 [128];
  undefined **local_3b8;
  FProgressCancel **ppFStack_3b0;
  undefined8 local_3a8;
  undefined ***pppuStack_3a0;
  FMarchingCubes local_398;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_10c8;
  local_1088 = param_1;
  local_1070 = this;
  if ((param_1 != (FProgressCancel *)0x0) && (bVar28 = FProgressCancel::Cancelled(param_1), bVar28))
  {
    return;
  }
  dVar61 = __real_ffefffffffffffff;
  dVar2 = __real_7fefffffffffffff;
  uVar59 = SUB84(__real_3ff0000000000000,0);
  uVar60 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar32 = 0;
  local_bd8._0_8_ = (FDynamicMesh3 *)0x0;
  local_bd8._8_8_ = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  local_bd8._32_8_ = ___xmm_3ff00000000000003ff0000000000000;
  local_bd8._40_8_ = _UNK_150689688;
  local_bd8._56_8_ = __real_7fefffffffffffff;
  local_bd8._64_8_ = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_bd8._72_8_ = _UNK_150a9e648;
  local_1060 = __real_3ff0000000000000;
  local_bd8._24_8_ = __real_3ff0000000000000;
  local_1068 = __real_ffefffffffffffff;
  local_bd8._96_8_ = __real_ffefffffffffffff;
  local_bd8._16_4_ = Dilate;
  local_bd8[0x30] = false;
  local_bd8._80_8_ = ___xmm_ffefffffffffffffffefffffffffffff;
  local_bd8._88_8_ = _UNK_1508ffb58;
  pppuStack_b40 = (undefined ***)0x0;
  local_b58 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  ppFStack_b50 = (FProgressCancel **)
                 TImplicitMorphology<UE::Geometry::FDynamicMesh3>::<lambda_34_>::
                 <lambda_invoker_cdecl>;
  local_bd8._112_8_ = Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  FMarchingCubes::FMarchingCubes(&local_b38);
  EVar3 = this->Operation;
  if (EVar3 == Dilate) {
    local_bd8._16_4_ = Dilate;
  }
  else if (EVar3 == Contract) {
    local_bd8._16_4_ = Contract;
  }
  else if (EVar3 == Close) {
    local_bd8._16_4_ = Close;
  }
  else if (EVar3 == Open) {
    local_bd8._16_4_ = Open;
  }
  else {
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CompositionOps\\VoxelMorphologyMeshesOp.cpp"
                        ,0x33,L"");
    if (bVar28) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((this->Transforms).ArrayNum != (this->Meshes).ArrayNum) {
    bVar28 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4813784678043484106>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CompositionOps\\VoxelMorphologyMeshesOp.cpp"
                        ,0x36,"Transforms.Num() == Meshes.Num()");
    if (bVar28) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    goto LAB_14c970d40;
  }
  FDynamicMesh3::FDynamicMesh3(&local_e68);
  pTVar41 = &this->Transforms;
  pTVar30 = TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>::
            TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int><TArray<UE::Geometry::TTransformSRT3<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::TTransformSRT3<double>,TSizedDefaultAllocator<32>_>_>
                      (&local_f00,pTVar41);
  local_ff8.DataPtr = pTVar30->DataPtr;
  local_ff8.ArrayNum = pTVar30->ArrayNum;
  local_ff8._12_4_ = *(undefined4 *)&pTVar30->field_0xc;
  FVoxelBaseOp::GetAverageTranslation<UE::Geometry::TTransformSRT3<double>_>
            ((TVector<double> *)&local_1020._s_0,&local_ff8);
  uVar50 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar23 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  lStack_fa0 = _UNK_15061cbc8;
  local_fa8 = ___xmm_3ff00000000000000000000000000000;
  local_1078.Mesh = &local_e68;
  auStack_f88._8_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0);
  auStack_f88._12_4_ =
       (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >> 0x20);
  auVar9._4_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  auVar9._0_4_ = auStack_f88._4_4_;
  auVar46._0_8_ = auVar9._0_8_ << 0x20;
  auVar46._8_4_ = auStack_f88._8_4_;
  auVar46._12_4_ = auStack_f88._12_4_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  auVar47._8_8_ = auVar46._8_8_;
  auVar47._0_8_ = local_1020._s_0.Z;
  this->_padding_ = local_fa8;
  this->_padding_ = lStack_fa0;
  auVar53._8_8_ = uVar50;
  auVar53._0_8_ = uVar23;
  this->_padding_ = (longlong)local_1020._s_0.X;
  this->_padding_ = (longlong)local_1020._s_0.Y;
  this->_padding_ = local_1020._16_8_;
  this->_padding_ = auVar47._8_8_;
  this->_padding_ = uVar23;
  uVar24 = _UNK_150631d98;
  uVar23 = ___xmm_00000000ffffffff0000008000000000;
  this->_padding_ = uVar50;
  local_fb8 = 0;
  uStack_fb0 = 0;
  local_f98 = local_1020._s_0.X;
  dStack_f90 = local_1020._s_0.Y;
  auStack_f88 = auVar47;
  auStack_f78 = auVar53;
  if (0 < (this->Meshes).ArrayNum) {
    local_1080 = 0;
    uVar42 = uVar32;
    do {
      lVar39 = local_1080;
      uVar38 = 0;
      uVar55 = auVar53._8_8_;
      uVar50 = auVar47._8_8_;
      uVar56 = (uint)uVar32;
      uVar43 = 0;
      uVar36 = ~uVar56 >> 0x1f;
      uVar37 = uVar43;
      if ((int)uVar56 < pTVar41->ArrayNum) {
        uVar37 = uVar36;
      }
      if (uVar37 == 0) {
        bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar55 = auVar53._8_8_;
        uVar50 = extraout_XMM0._8_8_;
        if (bVar28) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar27 = local_1020._s_0.Z;
      uVar26 = local_1020._s_0.Y;
      uVar25 = local_1020._s_0.X;
      pFVar5 = (pTVar41->AllocatorInstance).Data;
      auVar47 = *(undefined1 (*) [16])(pFVar5 + lVar39 + 0x40);
      pFVar1 = pFVar5 + lVar39 + 0x30;
      uVar59 = *(undefined4 *)pFVar1;
      uVar60 = *(undefined4 *)(pFVar1 + 4);
      uVar14 = *(undefined4 *)(pFVar1 + 8);
      uVar15 = *(undefined4 *)(pFVar1 + 0xc);
      uVar16 = *(undefined8 *)(pFVar5 + lVar39);
      uVar17 = *(undefined8 *)(pFVar5 + lVar39 + 8);
      uVar18 = *(undefined8 *)(pFVar5 + lVar39 + 0x10);
      uVar19 = *(undefined8 *)(pFVar5 + lVar39 + 0x10 + 8);
      uVar20 = *(undefined8 *)(pFVar5 + lVar39 + 0x20);
      uVar21 = *(undefined8 *)(pFVar5 + lVar39 + 0x20 + 8);
      local_758._0_8_ = 0;
      auVar10._4_8_ = uVar50;
      auVar10._0_4_ = uVar60;
      auVar48._0_8_ = auVar10._0_8_ << 0x20;
      auVar48._8_4_ = uVar14;
      auVar48._12_4_ = uVar15;
      auVar11._4_8_ = uVar55;
      auVar11._0_4_ = auVar47._4_4_;
      auVar54._0_8_ = auVar11._0_8_ << 0x20;
      auVar54._8_4_ = auVar47._8_4_;
      auVar54._12_4_ = auVar47._12_4_;
      local_758._8_8_ = 0;
      auVar53._8_8_ = auVar47._8_8_;
      auVar53._0_8_ = auVar54._8_8_;
      local_758._32_8_ = 0;
      local_758._40_4_ = 0;
      local_758._44_4_ = 0x80;
      local_758._48_4_ = 0xffffffff;
      local_758._52_4_ = 0;
      local_718 = (void *)0x0;
      local_710 = 0;
      local_708._0_8_ = 0;
      local_708._8_8_ = 0;
      local_708._32_8_ = 0;
      local_708._40_4_ = 0;
      local_708._44_4_ = 0x80;
      local_708._48_4_ = 0xffffffff;
      local_708._52_4_ = 0;
      local_6c8 = (void *)0x0;
      local_6c0 = 0;
      local_6b8._0_1_ = true;
      local_6b8._1_1_ = true;
      local_6b0._0_8_ = 0;
      local_6b0._8_8_ = 0;
      local_6b0._32_8_ = 0;
      local_6b0._40_8_ = uVar23;
      local_6b0._48_8_ = uVar24;
      local_670 = (void *)0x0;
      local_668 = 0;
      local_660._0_8_ = 0;
      local_660._8_8_ = 0;
      local_660._32_8_ = 0;
      local_660._40_8_ = uVar23;
      local_660._48_8_ = uVar24;
      local_620 = (void *)0x0;
      local_618 = 0;
      local_610._0_1_ = true;
      local_610._1_1_ = true;
      local_608._0_8_ = 0;
      local_608._8_8_ = 0;
      local_608._32_8_ = 0;
      local_608._40_4_ = 0;
      local_608._44_4_ = 0x80;
      local_608._48_4_ = 0xffffffff;
      local_608._52_4_ = 0;
      local_5c8 = (void *)0x0;
      local_5c0 = 0;
      local_5b8._0_8_ = 0;
      local_5b8._8_8_ = 0;
      local_5b8._32_8_ = 0;
      local_5b8._40_4_ = 0;
      local_5b8._44_4_ = 0x80;
      local_5b8._48_4_ = 0xffffffff;
      local_5b8._52_4_ = 0;
      local_578 = (void *)0x0;
      local_570 = 0;
      local_568._0_1_ = true;
      local_568._1_1_ = true;
      local_560._0_8_ = 0;
      local_560._8_8_ = 0;
      local_560._32_8_ = 0;
      local_560._40_8_ = uVar23;
      local_560._48_8_ = uVar24;
      local_520 = (void *)0x0;
      local_518 = 0;
      local_510._0_8_ = 0;
      local_510._8_8_ = 0;
      local_510._32_8_ = 0;
      local_510._40_8_ = uVar23;
      local_510._48_8_ = uVar24;
      local_f18 = local_1020._s_0.X;
      dStack_f10 = local_1020._s_0.Y;
      local_4d0 = (void *)0x0;
      local_4c8 = 0;
      local_4c0._0_1_ = true;
      local_4c0._1_1_ = true;
      local_4b8.Data = (FScriptContainerElement *)0x0;
      local_4b0._0_4_ = 0;
      local_4b0._4_4_ = 0;
      local_4a8.Data = (FScriptContainerElement *)0x0;
      local_4a0._0_4_ = 0;
      local_4a0._4_4_ = 0;
      local_ee8._0_8_ = 0;
      local_ee8._40_8_ = 0;
      local_fe8[0] = (code *)0x0;
      local_fc0 = (undefined8 *)0x0;
      local_f08 = local_1020._s_0.Z;
      local_f68 = uVar16;
      uStack_f60 = uVar17;
      local_f58 = uVar18;
      uStack_f50 = uVar19;
      local_f48 = uVar20;
      uStack_f40 = uVar21;
      local_f38 = uVar59;
      uStack_f34 = uVar60;
      uStack_f30 = uVar14;
      uStack_f2c = uVar15;
      local_f28 = auVar47;
      local_eb8 = uVar16;
      uStack_eb0 = uVar17;
      local_ea8 = uVar18;
      uStack_ea0 = uVar19;
      local_e98 = uVar20;
      uStack_e90 = uVar21;
      local_e88 = uVar59;
      uStack_e84 = uVar60;
      uStack_e80 = uVar14;
      uStack_e7c = uVar15;
      local_e78 = auVar47;
      local_fc0 = FMemory::Malloc(0x70,8);
      local_fc0[1] = uVar16;
      local_fc0[2] = uVar17;
      local_fc0[3] = uVar18;
      local_fc0[4] = uVar19;
      *local_fc0 = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::`19'::<lambda_1>,0,1>
                    ::_vftable_;
      local_fc0[5] = uVar20;
      local_fc0[6] = uVar21;
      *(undefined4 *)(local_fc0 + 7) = uVar59;
      *(undefined4 *)((longlong)local_fc0 + 0x3c) = uVar60;
      *(undefined4 *)(local_fc0 + 8) = uVar14;
      *(undefined4 *)((longlong)local_fc0 + 0x44) = uVar15;
      *(undefined1 (*) [16])(local_fc0 + 9) = auVar47;
      local_fc0[0xb] = uVar25;
      local_fc0[0xc] = uVar26;
      local_fc0[0xd] = uVar27;
      if (local_fc0 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_fe8[0] = Core::Private::Function::
                       TFunctionRefCaller<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l19::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                       ::Call;
      }
      uVar37 = uVar43;
      if ((int)uVar56 < (this->Meshes).ArrayNum) {
        uVar37 = uVar36;
      }
      if ((uVar37 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FDynamicMeshEditor::AppendMesh
                (&local_1078,*(FDynamicMesh3 **)((this->Meshes).AllocatorInstance.Data + uVar42),
                 (FMeshIndexMappings *)local_758,
                 (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                  *)local_fe8,&local_ee8,false);
      if (auVar47._0_8_ * auVar48._8_8_ * auVar54._8_8_ < 0.0) {
        if ((int)uVar56 < (this->Meshes).ArrayNum) {
          uVar43 = uVar36;
        }
        if ((uVar43 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar1 = (this->Meshes).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar1 + uVar42) == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar28)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = *(longlong *)(pFVar1 + uVar42);
        iVar40 = *(int *)(lVar6 + 0x144) + *(int *)(lVar6 + 0x140) * 0x200;
        if (((iVar40 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar6 + 0x148) - 1U)))
           && (uVar38 = 1, 1 < iVar40)) {
          do {
            sVar4 = *(short *)((*(undefined8 **)(lVar6 + 0x148))[uVar38 >> 9] +
                              (ulonglong)((uint)uVar38 & 0x1ff) * 2);
            this = local_1070;
            if ((sVar4 != 0) && (sVar4 != -1)) break;
            uVar37 = (uint)uVar38 + 1;
            uVar38 = (ulonglong)uVar37;
          } while ((int)uVar37 < iVar40);
        }
        FRefCountVector::IndexIterator::IndexIterator
                  (&local_1008,(FRefCountVector *)(lVar6 + 0x140),iVar40,iVar40);
        lVar39 = local_1080;
        iVar44 = local_1008._8_4_;
        if ((int)uVar38 != local_1008._8_4_) {
          do {
            iVar29 = TIndexMap<int>::GetTo((TIndexMap<int> *)local_6b0,(int)uVar38);
            FDynamicMesh3::ReverseTriOrientation(&local_e68,iVar29);
            uVar37 = (int)uVar38 + 1;
            uVar38 = (ulonglong)uVar37;
            if ((int)uVar37 < iVar40) {
              do {
                uVar32 = (ulonglong)((uint)uVar38 & 0x1ff);
                lVar39 = *(longlong *)(*(longlong *)(lVar6 + 0x148) + (uVar38 >> 9) * 8);
                iVar44 = local_1008._8_4_;
                if ((*(short *)(lVar39 + uVar32 * 2) != 0) &&
                   (*(short *)(lVar39 + uVar32 * 2) != -1)) break;
                uVar37 = (uint)uVar38 + 1;
                uVar38 = (ulonglong)uVar37;
              } while ((int)uVar37 < iVar40);
            }
            lVar39 = local_1080;
          } while ((int)uVar38 != iVar44);
        }
      }
      DestructItems<UE::Geometry::TIndexMap<int>,int>
                ((TIndexMap<int> *)local_4a8.Data,(int)local_4a0);
      if ((TIndexMap<int> *)local_4a8.Data != (TIndexMap<int> *)0x0) {
        FMemory::Free(local_4a8.Data);
      }
      DestructItems<UE::Geometry::TIndexMap<int>,int>
                ((TIndexMap<int> *)local_4b8.Data,(int)local_4b0);
      if ((TIndexMap<int> *)local_4b8.Data != (TIndexMap<int> *)0x0) {
        FMemory::Free(local_4b8.Data);
      }
      local_4c8 = 0;
      if (local_4d0 != (void *)0x0) {
        FMemory::Free(local_4d0);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_510);
      local_518 = 0;
      if (local_520 != (void *)0x0) {
        FMemory::Free(local_520);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_560);
      local_570 = 0;
      if (local_578 != (void *)0x0) {
        FMemory::Free(local_578);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_5b8);
      local_5c0 = 0;
      if (local_5c8 != (void *)0x0) {
        FMemory::Free(local_5c8);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_608);
      local_618 = 0;
      if (local_620 != (void *)0x0) {
        FMemory::Free(local_620);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_660);
      local_668 = 0;
      if (local_670 != (void *)0x0) {
        FMemory::Free(local_670);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_6b0);
      local_6c0 = 0;
      if (local_6c8 != (void *)0x0) {
        FMemory::Free(local_6c8);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_708);
      local_710 = 0;
      if (local_718 != (void *)0x0) {
        FMemory::Free(local_718);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_758);
      local_1080 = lVar39 + 0x50;
      pTVar41 = &this->Transforms;
      uVar32 = (ulonglong)(uVar56 + 1);
      uVar42 = uVar42 + 0x10;
      auVar47 = extraout_XMM0_00;
    } while ((int)(uVar56 + 1) < (this->Meshes).ArrayNum);
    uVar59 = SUB84(local_1060,0);
    uVar60 = (undefined4)((ulonglong)local_1060 >> 0x20);
    dVar61 = local_1068;
  }
  if (local_e68.TriangleRefCounts.UsedCount != 0) {
    uVar37 = (uint)__xmm_80000000000000008000000000000000;
    uVar43 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if ((this->bVoxWrapInput != false) && (0.0 < this->ThickenShells)) {
      pTVar31 = FDynamicMesh3::GetBounds(&local_e68,&local_c38,true);
      dVar45 = (pTVar31->Max).field0_0x0._s_0.Y - (pTVar31->Min).field0_0x0._s_0.Y;
      dVar8 = (pTVar31->Max).field0_0x0._s_0.Z - (pTVar31->Min).field0_0x0._s_0.Z;
      dVar51 = (pTVar31->Max).field0_0x0._s_0.X - (pTVar31->Min).field0_0x0._s_0.X;
      if (dVar45 <= 0.0) {
        dVar45 = 0.0;
      }
      if (dVar8 <= 0.0) {
        dVar8 = 0.0;
      }
      if (dVar51 <= 0.0) {
        dVar51 = 0.0;
      }
      if (dVar8 <= dVar45) {
        dVar8 = dVar45;
      }
      if (dVar8 <= dVar51) {
        dVar8 = dVar51;
      }
      dVar8 = (dVar8 + dVar8) / (double)*(int *)((longlong)&this->_padding_ + 4);
      if (dVar8 <= this->ThickenShells) {
        dVar8 = this->ThickenShells;
      }
      FMeshNormals::QuickComputeVertexNormals(&local_e68,false);
      FExtrudeMesh::FExtrudeMesh(&local_498,&local_e68);
      local_498.IsPositiveOffset = false;
      local_498.bSkipClosedComponents = true;
      local_498.DefaultExtrudeDistance =
           (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar43,SUB84(dVar8,0) ^ uVar37);
      FExtrudeMesh::Apply(&local_498);
      FExtrudeMesh::~FExtrudeMesh(&local_498);
    }
    local_bd8._0_8_ = &local_e68;
    local_828 = __real_3e45798ee2308c3a;
    local_878._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    local_848 = &
                ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    local_840 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
                MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_878._32_8_ =
         Core::Private::Function::
         TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
         ::Call;
    local_878._16_8_ = 0;
    local_878._24_4_ = 3;
    local_830 = 0;
    local_820.CurBlock = 0;
    local_820.CurBlockUsed = 0;
    local_820.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_820.Blocks.ArrayNum = 0;
    local_820.Blocks.ArrayMax = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_820);
    local_808.CurBlock = 0;
    local_808.CurBlockUsed = 0;
    local_808.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_808.Blocks.ArrayNum = 0;
    local_808.Blocks.ArrayMax = 0;
    TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_808);
    local_7f0.CurBlock = 0;
    local_7f0.CurBlockUsed = 0;
    local_7f0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7f0.Blocks.ArrayNum = 0;
    local_7f0.Blocks.ArrayMax = 0;
    TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_7f0);
    local_7d8.CurBlock = 0;
    local_7d8.CurBlockUsed = 0;
    local_7d8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7d8.Blocks.ArrayNum = 0;
    local_7d8.Blocks.ArrayMax = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_7d8);
    local_878._8_8_ = &local_e68;
    local_7c0 = -1;
    local_878._16_8_ = 0;
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_878,false);
    local_878._16_8_ = FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_878._8_8_);
    if (this->bVoxWrapInput == false) {
LAB_14c970a03:
      if (local_e68.TriangleRefCounts.UsedCount != 0) {
        iVar40 = (int)this->_padding_;
        local_bd8._8_8_ = local_878;
        iVar44 = *(int *)((longlong)&this->_padding_ + 4);
        dVar2 = this->Distance;
        pTVar31 = FDynamicMesh3::GetBounds(&local_e68,&local_c08,true);
        pppuStack_760 = pppuStack_b40;
        uVar24 = local_b48;
        uVar23 = local_bd8._120_8_;
        local_788 = (code *)local_bd8._112_8_;
        auVar47 = *(undefined1 (*) [16])&(pTVar31->Min).field0_0x0;
        if (0x4b0 < iVar44) {
          iVar44 = 0x4b0;
        }
        dVar61 = dVar2 + dVar2;
        dVar8 = dVar61;
        if (local_bd8[0x30] != false) {
          dVar8 = 0.0;
        }
        auVar12._4_8_ = extraout_XMM0_Qb;
        auVar12._0_4_ = auVar47._4_4_;
        auVar49._0_8_ = auVar12._0_8_ << 0x20;
        auVar49._8_4_ = auVar47._8_4_;
        auVar49._12_4_ = auVar47._12_4_;
        dVar52 = (pTVar31->Max).field0_0x0._s_0.Z - (pTVar31->Min).field0_0x0._s_0.Z;
        dVar45 = (pTVar31->Max).field0_0x0._s_0.Y - auVar49._8_8_;
        dVar51 = (pTVar31->Max).field0_0x0._s_0.X - auVar47._0_8_;
        if (0x4b0 < iVar40) {
          iVar40 = 0x4b0;
        }
        if (dVar52 <= 0.0) {
          dVar52 = 0.0;
        }
        if (dVar45 <= 0.0) {
          dVar45 = 0.0;
        }
        if (dVar51 <= 0.0) {
          dVar51 = 0.0;
        }
        if (dVar45 <= dVar52) {
          dVar45 = dVar52;
        }
        dVar52 = dVar51;
        if (dVar51 <= dVar45) {
          dVar52 = dVar45;
        }
        local_bd8._32_8_ = (dVar52 + dVar8) / (double)iVar44;
        if (local_bd8[0x30] != false) {
          dVar61 = 0.0;
        }
        if (dVar45 <= dVar51) {
          dVar45 = dVar51;
        }
        local_bd8._40_8_ = (dVar45 + dVar61) / (double)iVar40;
        local_bd8._112_8_ =
             Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l2::<lambda_3>,bool>
             ::Call;
        local_bd8._120_8_ = uStack_780;
        local_778 = local_b58;
        ppFStack_770 = ppFStack_b50;
        local_b58 = &Core::Private::Function::
                     TFunction_OwnedObject<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::`2'::<lambda_3>,0,0>
                     ::_vftable_;
        ppFStack_b50 = &local_1088;
        local_b48 = local_768;
        pppuStack_b40 = (undefined ***)0x0;
        uStack_780 = uVar23;
        local_768 = uVar24;
        local_bd8._24_8_ = dVar2;
        if (local_788 != (code *)0x0) {
          pppuVar35 = &local_778;
          if (pppuStack_760 != (undefined ***)0x0) {
            pppuVar35 = pppuStack_760;
          }
          (*(code *)(*pppuVar35)[2])();
        }
        if ((local_1088 == (FProgressCancel *)0x0) ||
           (bVar28 = FProgressCancel::Cancelled(local_1088), !bVar28)) {
          this_00 = (FDynamicMesh3 *)this->_padding_;
          FMeshShapeGenerator::Reset((FMeshShapeGenerator *)&local_b38);
          uVar23 = local_bd8._8_8_;
          if ((FDynamicMesh3 *)local_bd8._0_8_ == (FDynamicMesh3 *)0x0) {
LAB_14c970c0b:
            bVar28 = false;
LAB_14c970c0d:
            if ((((double)local_bd8._24_8_ <= 0.0) || ((double)local_bd8._32_8_ <= 0.0)) ||
               (((double)local_bd8._40_8_ <= 0.0 ||
                (iVar40 = _finite((double)local_bd8._40_8_), iVar40 == 0)))) {
              bVar22 = false;
            }
            else {
              bVar22 = true;
            }
            if ((bVar28) && (bVar22)) {
              uVar57 = (uint)local_bd8._24_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              uVar58 = SUB84(local_bd8._24_8_,4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              uVar36 = uVar57;
              uVar56 = uVar58;
              if ((local_bd8._16_4_ & ~Close) == Dilate) {
                uVar36 = uVar57 ^ uVar37;
                uVar56 = uVar58 ^ uVar43;
              }
              TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeFirstPass
                        ((TImplicitMorphology<UE::Geometry::FDynamicMesh3> *)local_bd8,
                         (double)CONCAT44(uVar58,uVar57),(double)CONCAT44(uVar56,uVar36));
              if (local_bd8._16_4_ - Close < 2) {
                TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass
                          ((TImplicitMorphology<UE::Geometry::FDynamicMesh3> *)local_bd8,
                           (double)CONCAT44(uVar58,uVar57),
                           (double)CONCAT44(uVar56 ^ uVar43,uVar36 ^ uVar37));
              }
            }
            else {
              bVar28 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3291503738396606353>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\Morphology.h"
                                  ,0x6f,"Validate()");
              if (bVar28) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
          }
          else if (((FRefCountVector *)(local_bd8._0_8_ + 0x140))->UsedCount != 0) {
            if ((((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_bd8._8_8_ ==
                  (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) ||
                (*(int *)(local_bd8._8_8_ + 0xbc) < 0)) ||
               (uVar34 = FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)(local_bd8._8_8_ + 8)),
               *(ulong64 *)(uVar23 + 0x10) != uVar34)) goto LAB_14c970c0b;
            bVar28 = true;
            goto LAB_14c970c0d;
          }
          FDynamicMesh3::Copy(this_00,(FMeshShapeGenerator *)&local_b38);
          (**(code **)(this->_padding_ + 0x20))(this,local_1088,(int)local_bd8._40_8_);
        }
      }
    }
    else {
      local_1058.Tree = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_878;
      local_1058.FWNBeta = __real_4000000000000000;
      local_1058.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1058.FastWindingCache.ArrayNum = 0;
      local_1058.FastWindingCache.ArrayMax = 0;
      local_1058.FastWindingCacheOffset = 0;
      local_1058.FastWindingCacheMeshChangeStamp = 0;
      local_1058.FWNApproxOrder = 2;
      TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(&local_1058,true);
      dVar8 = __real_3fe0000000000000;
      local_438._0_8_ = &local_e68;
      local_438._8_8_ = local_878;
      local_438._16_8_ = &local_1058;
      local_438._48_8_ = ___xmm_7fefffffffffffff7fefffffffffffff;
      local_438._56_8_ = _UNK_150a9e648;
      ppFStack_3b0 = (FProgressCancel **)
                     TImplicitSolidify<UE::Geometry::FDynamicMesh3>::<lambda_41_>::
                     <lambda_invoker_cdecl>;
      local_438._24_8_ = __real_3fe0000000000000;
      local_438._40_8_ = dVar2;
      local_438._104_8_ = CONCAT44(uVar60,uVar59);
      local_438[0x20] = false;
      local_438._64_8_ = ___xmm_ffefffffffffffffffefffffffffffff;
      local_438._72_8_ = _UNK_1508ffb58;
      local_438._80_8_ = ___xmm_3ff0000000000000ffefffffffffffff;
      local_438._88_8_ = _UNK_1528d8ae8;
      local_438[0x60] = true;
      local_438._100_4_ = 4;
      pppuStack_3a0 = (undefined ***)0x0;
      local_3b8 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
      local_438._112_8_ =
           Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
      FMarchingCubes::FMarchingCubes(&local_398);
      iVar40 = *(int *)((longlong)&this->_padding_ + 4);
      if (local_7c0 < 0) {
        bVar28 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<2828200105734045879>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                            ,0xb7,"RootIndex >= 0");
        dVar52 = dVar61;
        dVar51 = dVar2;
        dVar13 = dVar2;
        dVar45 = dVar61;
        if (bVar28) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        uVar32 = (ulonglong)(local_7c0._4_4_ & 0x1ff);
        lVar39 = *(longlong *)
                  (local_808.Blocks.AllocatorInstance.Data + (ulonglong)(local_7c0._4_4_ >> 9) * 8);
        dVar45 = *(double *)(lVar39 + uVar32 * 0x18);
        lVar6 = *(longlong *)
                 (local_7f0.Blocks.AllocatorInstance.Data + (ulonglong)(local_7c0._4_4_ >> 9) * 8);
        dVar51 = *(double *)(lVar39 + 8 + uVar32 * 0x18);
        dVar2 = *(double *)(lVar39 + 0x10 + uVar32 * 0x18);
        dVar61 = dVar2 + *(double *)(lVar6 + 0x10 + uVar32 * 0x18);
        dVar2 = dVar2 - *(double *)(lVar6 + 0x10 + uVar32 * 0x18);
        dVar52 = dVar51 + *(double *)(lVar6 + 8 + uVar32 * 0x18);
        dVar51 = dVar51 - *(double *)(lVar6 + 8 + uVar32 * 0x18);
        dVar13 = dVar45 - *(double *)(lVar6 + uVar32 * 0x18);
        dVar45 = dVar45 + *(double *)(lVar6 + uVar32 * 0x18);
      }
      pppuStack_790 = pppuStack_3a0;
      uVar24 = local_3a8;
      pcStack_7a0 = (code *)ppFStack_3b0;
      local_7a8 = local_3b8;
      uVar23 = local_438._120_8_;
      local_7b8 = (code *)local_438._112_8_;
      dVar61 = dVar61 - dVar2;
      dVar52 = dVar52 - dVar51;
      dVar45 = dVar45 - dVar13;
      if (dVar61 <= 0.0) {
        dVar61 = 0.0;
      }
      local_438._88_8_ = 0.0;
      if (dVar52 <= 0.0) {
        dVar52 = 0.0;
      }
      local_3b8 = &Core::Private::Function::
                   TFunction_OwnedObject<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::`35'::<lambda_2>,0,0>
                   ::_vftable_;
      ppFStack_3b0 = &local_1088;
      if (dVar45 <= 0.0) {
        dVar45 = 0.0;
      }
      if (dVar61 <= dVar52) {
        dVar61 = dVar52;
      }
      if (dVar61 <= dVar45) {
        dVar61 = dVar45;
      }
      local_438._112_8_ =
           Core::Private::Function::
           TFunctionRefCaller<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l35::<lambda_2>,bool>
           ::Call;
      local_438._120_8_ = uStack_7b0;
      local_438._104_8_ = dVar61 / (double)iVar40;
      local_3a8 = local_798;
      pppuStack_3a0 = (undefined ***)0x0;
      uStack_7b0 = uVar23;
      local_798 = uVar24;
      if (local_7b8 != (code *)0x0) {
        pppuVar35 = &local_7a8;
        if (pppuStack_790 != (undefined ***)0x0) {
          pppuVar35 = pppuStack_790;
        }
        (*(code *)(*pppuVar35)[2])();
      }
      pFVar33 = TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate
                          ((TImplicitSolidify<UE::Geometry::FDynamicMesh3> *)local_438);
      FDynamicMesh3::Copy(&local_e68,pFVar33);
      if ((local_1088 == (FProgressCancel *)0x0) ||
         (bVar28 = FProgressCancel::Cancelled(local_1088), !bVar28)) {
        if (this->bRemoveInternalsAfterVoxWrap != false) {
          MeshAutoRepair::RemoveInternalTriangles
                    (&local_e68,true,Centroids,FastWindingNumber,0,dVar8,true);
        }
        TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                  ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_878,false);
        local_878._16_8_ = FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_878._8_8_);
        FMarchingCubes::~FMarchingCubes(&local_398);
        if ((code *)local_438._112_8_ != (code *)0x0) {
          pppuVar35 = &local_3b8;
          if (pppuStack_3a0 != (undefined ***)0x0) {
            pppuVar35 = pppuStack_3a0;
          }
          (*(code *)(*pppuVar35)[2])();
        }
        if (local_1058.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1058.FastWindingCache.AllocatorInstance.Data);
        }
        goto LAB_14c970a03;
      }
      FMarchingCubes::~FMarchingCubes(&local_398);
      if ((code *)local_438._112_8_ != (code *)0x0) {
        pppuVar35 = &local_3b8;
        if (pppuStack_3a0 != (undefined ***)0x0) {
          pppuVar35 = pppuStack_3a0;
        }
        (*(code *)(*pppuVar35)[2])();
      }
      if (local_1058.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1058.FastWindingCache.AllocatorInstance.Data);
      }
    }
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_878);
  }
  FDynamicMesh3::~FDynamicMesh3(&local_e68);
LAB_14c970d40:
  FMarchingCubes::~FMarchingCubes(&local_b38);
  if ((code *)local_bd8._112_8_ != (code *)0x0) {
    pppuVar35 = &local_b58;
    if (pppuStack_b40 != (undefined ***)0x0) {
      pppuVar35 = pppuStack_b40;
    }
    (*(code *)(*pppuVar35)[2])();
  }
  return;
}

// SetTransform @ 14c985ab0

void __thiscall
UE::Geometry::FVoxelMorphologyMeshesOp::SetTransform
          (FVoxelMorphologyMeshesOp *this,TTransformSRT3<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.W;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Translation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_1->Scale3D).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  return;
}

