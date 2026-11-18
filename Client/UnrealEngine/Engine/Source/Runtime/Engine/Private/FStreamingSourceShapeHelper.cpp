// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ForEachShape @ 148a92320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FStreamingSourceShapeHelper::ForEachShape
          (float param_1,float param_2,bool param_3,TVector<double> *param_4,
          TRotator<double> *param_5,
          TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *param_6,
          TFunctionRef<void___cdecl(FSphericalSector_const_&)> *param_7,float param_8,float param_9)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  bool bVar27;
  undefined4 uVar28;
  int iVar29;
  TQuat<double> *pTVar30;
  FSphericalSector *pFVar31;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined4 uVar32;
  uint uVar33;
  TRotator<double> *this;
  undefined1 *this_00;
  char *this_01;
  FScriptContainerElement *pFVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  float fVar40;
  double dVar41;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar42;
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
  double dVar63;
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
  double dVar89;
  double dVar90;
  undefined4 uVar94;
  double dVar95;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  double dVar96;
  undefined4 uVar97;
  undefined1 auVar93 [16];
  double dVar98;
  double dVar107;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  double dVar108;
  undefined1 auVar109 [16];
  double dVar110;
  undefined4 uVar111;
  undefined4 uVar112;
  undefined4 uVar113;
  undefined4 uVar114;
  undefined4 uVar115;
  uint uVar116;
  uint uVar117;
  undefined4 uVar118;
  undefined4 uVar119;
  uint uVar120;
  undefined4 uVar121;
  undefined1 auVar122 [16];
  undefined4 uVar123;
  undefined4 uVar124;
  undefined4 uVar125;
  undefined4 uVar126;
  undefined4 uVar127;
  undefined4 uVar128;
  undefined1 local_res18 [8];
  double local_res20;
  uint local_388;
  uint uStack_384;
  uint uStack_380;
  uint uStack_37c;
  TTransform<double> local_318;
  TRotator<double> local_2b8;
  undefined1 local_2a0 [32];
  double dStack_280;
  double local_278;
  undefined1 local_270 [16];
  double local_260;
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_240;
  TVector<double>_u_0 local_228;
  double local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  undefined8 local_1f0;
  double local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  TVector<double> local_1a8;
  undefined8 local_180;
  TQuat<double> local_178;
  FSphericalSector local_158;
  FSphericalSector local_118 [3];
  
  if (param_3) {
    local_2b8.Yaw = param_5->Yaw;
    this = &local_2b8;
    local_2b8.Pitch = 0.0;
    local_2b8.Roll = 0.0;
  }
  else {
    local_2a0._24_8_ = param_5->Pitch;
    dStack_280 = param_5->Yaw;
    this = (TRotator<double> *)(local_2a0 + 0x18);
    local_278 = param_5->Roll;
  }
  pTVar30 = UE::Math::TRotator<double>::Quaternion(this,&local_178);
  dVar26 = _UNK_150689688;
  dVar25 = ___xmm_3ff00000000000003ff0000000000000;
  dVar24 = _UNK_150689518;
  dVar23 = ___xmm_00000000000000003ff0000000000000;
  uVar22 = _UNK_15061cc8c;
  uVar21 = _UNK_15061cc88;
  uVar20 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_318.Translation.ZW.m128d_f64[0] = (param_4->field0_0x0)._s_0.Z;
  dVar12 = pTVar30->X;
  dVar13 = pTVar30->Y;
  auVar17._0_8_ = pTVar30->X;
  auVar17._8_8_ = pTVar30->Y;
  dVar14 = pTVar30->Z;
  auVar18 = *(undefined1 (*) [12])&pTVar30->Y;
  dVar15 = pTVar30->W;
  auVar16._0_8_ = pTVar30->Z;
  auVar16._8_8_ = pTVar30->W;
  iVar4 = param_6->ArrayNum;
  local_1c8 = dVar12;
  dStack_1c0 = dVar13;
  local_1b8 = dVar14;
  dStack_1b0 = dVar15;
  local_318.Translation.ZW.m128d_f64[1] = 0.0;
  local_318.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_318.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_318.Translation.XY.m128d_f64[0] = (param_4->field0_0x0)._s_0.X;
  local_318.Translation.XY.m128d_f64[1] = (param_4->field0_0x0)._s_0.Y;
  local_318.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_318.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  uVar117 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
  uVar116 = (uint)((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
  local_318.Rotation.XY.m128d_f64[0] = dVar12;
  local_318.Rotation.XY.m128d_f64[1] = dVar13;
  local_318.Rotation.ZW.m128d_f64[0] = dVar14;
  local_318.Rotation.ZW.m128d_f64[1] = dVar15;
  if (iVar4 == 0) {
    if (0.0 < param_2 + param_8) {
      local_210 = (double)(param_2 + param_8);
      local_228._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_228._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_228._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1f0 = __real_4076800000000000;
      local_208 = UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_;
      uStack_204 = UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_;
      uStack_200 = UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_;
      uStack_1fc = UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_;
      local_1f8 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      if ((((double)CONCAT44((uint)((ulonglong)local_210 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_210,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3e45798ee2308c3a) ||
          ((((double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_ &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_ &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             __real_3f1a36e2e0000000 &&
            ((double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_ &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_ &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             __real_3f1a36e2e0000000)) &&
           ((double)CONCAT44(uVar116 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             uVar117 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000)))) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("LocalShape.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingSource.h"
                              ,0xbd,L""), bVar27)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar31 = FSphericalSector::TransformBy
                          ((FSphericalSector *)&local_228._s_0,local_118,&local_318);
      (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,pFVar31);
    }
  }
  else {
    pFVar34 = (param_6->AllocatorInstance).Data;
    this_01 = (char *)((longlong)iVar4 * 9);
    pFVar1 = pFVar34 + (longlong)iVar4 * 0x48;
    uVar94 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
    uVar113 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
    uVar114 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
    uVar115 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
    uVar97 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
    uVar118 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
    uVar119 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
    uVar121 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
    dVar90 = (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_,
                              UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_);
    dVar42 = (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_,
                              UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_);
    uVar111 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
    uVar123 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
    uVar124 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._0_4_;
    uVar125 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._4_4_;
    uVar112 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
    uVar126 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
    uVar127 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
    uVar128 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
    while( true ) {
      uVar28 = SUB84(pTVar30,0);
      uVar32 = SUB84(this_01,0);
      if (param_6->ArrayNum != iVar4) {
        this_00 = local_res18;
        local_res18[0] = 0;
        bVar27 = `TCheckedPointerIterator<FStreamingSourceShape_const_,int,0>::operator!='::__l2::
                 <lambda_1>::operator()(this_00);
        uVar32 = SUB84(this_00,0);
        uVar28 = (undefined4)CONCAT71(extraout_var,bVar27);
        uVar117 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
        uVar116 = (uint)((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >>
                        0x20);
        dVar90 = (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_,
                                  UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_);
        dVar42 = (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_,
                                  UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_);
        uVar94 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
        uVar113 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
        uVar114 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
        uVar115 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
        uVar97 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
        uVar118 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
        uVar119 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
        uVar121 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
        uVar111 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
        uVar123 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
        uVar124 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._0_4_;
        uVar125 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._4_4_;
        uVar112 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
        uVar126 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
        uVar127 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
        uVar128 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
      }
      if (pFVar34 == pFVar1) break;
      if (*pFVar34 == (FScriptContainerElement)0x0) {
        fVar40 = *(float *)(pFVar34 + 8);
      }
      else {
        fVar40 = param_1 * *(float *)(pFVar34 + 4);
      }
      dVar10 = (double)(fVar40 + param_8);
      fVar40 = __real_43b40000;
      if ((pFVar34[0xc] != (FScriptContainerElement)0x0) &&
         (fVar40 = param_9 + *(float *)(pFVar34 + 0x10),
         __real_43b40000 <= param_9 + *(float *)(pFVar34 + 0x10))) {
        fVar40 = __real_43b40000;
      }
      if (param_3) {
        local_270._8_8_ = 0;
        local_270._0_8_ = *(ulonglong *)(pFVar34 + 0x38);
        local_270 = local_270 << 0x40;
        local_260 = 0.0;
        local_2a0._16_8_ = 0.0;
      }
      else {
        local_270 = *(undefined1 (*) [16])(pFVar34 + 0x30);
        local_260 = *(double *)(pFVar34 + 0x40);
      }
      auVar64._8_8_ = 0;
      auVar64._0_8_ = local_260;
      auVar122._4_4_ = uVar118;
      auVar122._0_4_ = uVar97;
      auVar122._8_4_ = uVar119;
      auVar122._12_4_ = uVar121;
      auVar43 = divpd(local_270,auVar122);
      auVar43 = roundpd(auVar64,auVar43,3);
      auVar65._0_8_ = auVar43._0_8_ * (double)CONCAT44(uVar118,uVar97);
      auVar65._8_8_ = auVar43._8_8_ * (double)CONCAT44(uVar121,uVar119);
      auVar44._8_8_ = 0;
      auVar44._0_8_ = local_260;
      auVar43._4_4_ = uVar113;
      auVar43._0_4_ = uVar94;
      auVar43._8_4_ = uVar114;
      auVar43._12_4_ = uVar115;
      auVar43 = divpd(auVar44,auVar43);
      dVar89 = local_270._0_8_ - auVar65._0_8_;
      dVar95 = local_270._8_8_ - auVar65._8_8_;
      auVar43 = roundpd(auVar65,auVar43,3);
      auVar45._8_4_ = SUB84(dVar95,0);
      auVar45._0_8_ = dVar89;
      auVar45._12_4_ = (int)((ulonglong)dVar95 >> 0x20);
      dVar98 = local_260 - auVar43._0_8_ * (double)CONCAT44(uVar113,uVar94);
      dVar107 = 0.0 - auVar43._8_8_ * (double)CONCAT44(uVar115,uVar114);
      uVar35 = -(ulonglong)(0.0 <= dVar89);
      uVar37 = -(ulonglong)(0.0 <= dVar95);
      auVar66._0_8_ = uVar35 & (ulonglong)dVar89;
      auVar66._8_4_ = (undefined4)(uVar37 & (ulonglong)dVar95);
      auVar66._12_4_ = (undefined4)((uVar37 & (ulonglong)dVar95) >> 0x20);
      dVar89 = dVar89 + (double)CONCAT44(uVar118,uVar97);
      dVar95 = auVar45._8_8_ + (double)CONCAT44(uVar121,uVar119);
      uVar36 = -(ulonglong)(0.0 <= dVar98);
      uVar38 = -(ulonglong)(0.0 <= dVar107);
      auVar109._0_4_ = ~(uint)uVar35 & SUB84(dVar89,0);
      auVar109._4_4_ = ~(uint)(uVar35 >> 0x20) & (uint)((ulonglong)dVar89 >> 0x20);
      auVar109._8_4_ = ~(uint)uVar37 & SUB84(dVar95,0);
      auVar109._12_4_ = ~(uint)(uVar37 >> 0x20) & (uint)((ulonglong)dVar95 >> 0x20);
      auVar109 = auVar109 | auVar66;
      auVar81._0_8_ = uVar36 & (ulonglong)dVar98;
      auVar81._8_4_ = (undefined4)(uVar38 & (ulonglong)dVar107);
      auVar81._12_4_ = (undefined4)((uVar38 & (ulonglong)dVar107) >> 0x20);
      auVar46._8_4_ = SUB84(dVar107,0);
      auVar46._0_8_ = dVar98;
      auVar46._12_4_ = (int)((ulonglong)dVar107 >> 0x20);
      local_res20 = __real_3f1a36e2e0000000;
      auVar99._0_8_ = (double)CONCAT44(uVar126,uVar112);
      auVar99._8_4_ = uVar127;
      auVar99._12_4_ = uVar128;
      dVar98 = dVar98 + (double)CONCAT44(uVar113,uVar94);
      dVar89 = auVar46._8_8_ + (double)CONCAT44(uVar115,uVar114);
      uVar37 = -(ulonglong)(auVar99._0_8_ < auVar109._0_8_);
      uVar39 = -(ulonglong)(auVar99._8_8_ < auVar109._8_8_);
      auVar91._0_4_ = ~(uint)uVar36 & SUB84(dVar98,0);
      auVar91._4_4_ = ~(uint)(uVar36 >> 0x20) & (uint)((ulonglong)dVar98 >> 0x20);
      auVar91._8_4_ = ~(uint)uVar38 & SUB84(dVar89,0);
      auVar91._12_4_ = ~(uint)(uVar38 >> 0x20) & (uint)((ulonglong)dVar89 >> 0x20);
      auVar47._0_8_ = (double)CONCAT44(uVar123,uVar111);
      auVar47._8_4_ = uVar124;
      auVar47._12_4_ = uVar125;
      auVar91 = auVar91 | auVar81;
      uVar36 = -(ulonglong)(auVar47._0_8_ < auVar91._0_8_);
      uVar38 = -(ulonglong)(auVar47._8_8_ < auVar91._8_8_);
      auVar67._0_8_ = uVar36 & (ulonglong)(auVar91._0_8_ - (double)CONCAT44(uVar113,uVar94));
      uVar35 = uVar38 & (ulonglong)(auVar91._8_8_ - (double)CONCAT44(uVar115,uVar114));
      auVar67._8_4_ = (undefined4)uVar35;
      auVar67._12_4_ = (undefined4)(uVar35 >> 0x20);
      auVar48._0_4_ = ~(uint)uVar36 & auVar91._0_4_;
      auVar48._4_4_ = ~(uint)(uVar36 >> 0x20) & auVar91._4_4_;
      auVar48._8_4_ = ~(uint)uVar38 & auVar91._8_4_;
      auVar48._12_4_ = ~(uint)(uVar38 >> 0x20) & auVar91._12_4_;
      auVar67 = auVar67 | auVar48;
      auVar49._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
      auVar49._0_8_ = __real_3f1a36e2e0000000;
      auVar49._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
      auVar68._0_8_ = (double)CONCAT44(auVar67._4_4_ & uVar20,auVar67._0_4_ & uVar19);
      auVar68._8_4_ = auVar67._8_4_ & uVar21;
      auVar68._12_4_ = auVar67._12_4_ & uVar22;
      auVar50._8_8_ = -(ulonglong)(auVar49._8_8_ < auVar68._8_8_);
      auVar50._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar68._0_8_);
      uVar33 = movmskpd(uVar32,auVar50);
      auVar69._0_8_ = (ulonglong)(auVar109._0_8_ - (double)CONCAT44(uVar118,uVar97)) & uVar37;
      uVar35 = uVar39 & (ulonglong)(auVar109._8_8_ - (double)CONCAT44(uVar121,uVar119));
      auVar69._8_4_ = (undefined4)uVar35;
      auVar69._12_4_ = (undefined4)(uVar35 >> 0x20);
      auVar100._0_4_ = ~(uint)uVar37 & auVar109._0_4_;
      auVar100._4_4_ = ~(uint)(uVar37 >> 0x20) & auVar109._4_4_;
      auVar100._8_4_ = ~(uint)uVar39 & auVar109._8_4_;
      auVar100._12_4_ = ~(uint)(uVar39 >> 0x20) & auVar109._12_4_;
      auVar69 = auVar69 | auVar100;
      auVar70._0_8_ = (double)CONCAT44(auVar69._4_4_ & uVar20,auVar69._0_4_ & uVar19);
      auVar70._8_4_ = auVar69._8_4_ & uVar21;
      auVar70._12_4_ = auVar69._12_4_ & uVar22;
      auVar82._8_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar70._8_8_);
      auVar82._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar70._0_8_);
      iVar29 = movmskpd(uVar28,auVar82);
      if ((uVar33 & 0x3fffffff) == 0 && iVar29 == 0) {
        local_2a0._0_8_ = dVar90;
        local_2a0._8_8_ = dVar42;
        pTVar30 = (TQuat<double> *)local_2a0;
        local_2a0._16_8_ = CONCAT44(uVar116,uVar117);
        this_01 = (char *)0x0;
      }
      else {
        this_01 = local_270;
        pTVar30 = (TQuat<double> *)
                  UE::Math::TRotator<double>::Vector((TRotator<double> *)this_01,&local_1a8);
        uVar117 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
        uVar116 = (uint)((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >>
                        0x20);
        dVar90 = (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_,
                                  UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_);
        dVar42 = (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_,
                                  UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_);
        uVar94 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
        uVar113 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
        uVar114 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
        uVar115 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
        uVar97 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
        uVar118 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
        uVar119 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
        uVar121 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
        uVar111 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
        uVar123 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
        uVar124 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._0_4_;
        uVar125 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._4_4_;
        uVar112 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
        uVar126 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
        uVar127 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
        uVar128 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
      }
      dVar89 = pTVar30->Z;
      local_1d8 = dVar89;
      uVar2 = pTVar30->X;
      uVar3 = pTVar30->Y;
      uVar33 = (uint)((ulonglong)uVar2 >> 0x20);
      uVar120 = (uint)((ulonglong)uVar3 >> 0x20);
      if (param_3) {
        dVar95 = *(double *)(pFVar34 + 0x18);
        dVar107 = *(double *)(pFVar34 + 0x20);
        local_180 = 0;
        dVar98 = 0.0;
      }
      else {
        dVar95 = *(double *)(pFVar34 + 0x18);
        dVar107 = *(double *)(pFVar34 + 0x20);
        dVar98 = *(double *)(pFVar34 + 0x28);
      }
      auVar11._4_8_ = dVar107;
      auVar11._0_4_ = uVar33;
      auVar83._0_8_ = auVar11._0_8_ << 0x20;
      auVar83._8_4_ = (uint)uVar3;
      auVar83._12_4_ = uVar120;
      dVar41 = (double)fVar40;
      dVar63 = __real_3ff0000000000000 -
               (auVar83._8_8_ * auVar83._8_8_ + (double)uVar2 * (double)uVar2 + dVar89 * dVar89);
      if (__real_3f847ae140000000 <=
          (double)CONCAT44((uint)((ulonglong)dVar63 >> 0x20) & uVar20,SUB84(dVar63,0) & uVar19)) {
        this_01 = "InAxis.IsNormalized()";
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("InAxis.IsNormalized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingSource.h"
                            ,0x26,L"");
        pTVar30 = (TQuat<double> *)CONCAT71(extraout_var_00,bVar27);
        if (bVar27) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar112 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
        uVar126 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
        uVar127 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
        uVar128 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
        uVar111 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
        uVar123 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
        uVar124 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._0_4_;
        uVar125 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._4_4_;
        uVar97 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
        uVar118 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
        uVar119 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
        uVar121 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
        uVar94 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
        uVar113 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
        uVar114 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
        uVar115 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
        dVar90 = (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_,
                                  UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_);
        dVar42 = (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_,
                                  UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_);
        uVar117 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
        uVar116 = (uint)((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >>
                        0x20);
      }
      if ((fVar40 < __real_00000000) || (__real_43b40000 < fVar40)) {
        this_01 = "InAngle >= 0 && InAngle <= 360";
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("InAngle >= 0 && InAngle <= 360",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingSource.h"
                            ,0x27,L"");
        pTVar30 = (TQuat<double> *)CONCAT71(extraout_var_01,bVar27);
        if (bVar27) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar117 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
        uVar116 = (uint)((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >>
                        0x20);
        dVar90 = (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_,
                                  UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_);
        dVar42 = (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_,
                                  UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_);
        uVar94 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
        uVar113 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
        uVar114 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
        uVar115 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
        uVar97 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
        uVar118 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
        uVar119 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
        uVar121 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
        uVar111 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
        uVar123 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
        uVar124 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._0_4_;
        uVar125 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._4_4_;
        uVar112 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
        uVar126 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
        uVar127 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
        uVar128 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
      }
      if (((__real_3e45798ee2308c3a <
            (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar20,SUB84(dVar10,0) & uVar19))
          && (((__real_3f1a36e2e0000000 < (double)CONCAT44(uVar33 & uVar20,(uint)uVar2 & uVar19) ||
               (__real_3f1a36e2e0000000 < (double)CONCAT44(uVar120 & uVar20,(uint)uVar3 & uVar19)))
              || (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar89 >> 0x20) & uVar20,
                                   SUB84(dVar89,0) & uVar19))))) &&
         (__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar20,SUB84(dVar41,0) & uVar19))) {
        dVar89 = dVar89 * dVar23;
        dVar90 = dVar24 * 0.0;
        dVar108 = dVar25 * (double)uVar2;
        dVar110 = dVar26 * (double)uVar3;
        auVar101._8_4_ = SUB84(dVar110,0);
        auVar101._0_8_ = dVar108;
        uVar94 = (undefined4)((ulonglong)dVar110 >> 0x20);
        auVar101._12_4_ = uVar94;
        auVar71._8_4_ = SUB84(dVar110,0);
        auVar71._0_8_ = dVar108;
        auVar71._12_4_ = uVar94;
        auVar51._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        auVar51._0_12_ = auVar18;
        auVar6._8_4_ = SUB84(dVar90,0);
        auVar6._0_8_ = dVar89;
        auVar6._12_4_ = (int)((ulonglong)dVar90 >> 0x20);
        auVar43 = blendpd(auVar71,auVar6,2);
        auVar102._0_8_ = auVar101._8_8_ * dVar12 - dVar13 * dVar108;
        auVar102._8_8_ = dVar89 * dVar13 - auVar51._8_8_ * dVar110;
        auVar92._8_4_ = SUB84(auVar102._8_8_,0);
        auVar92._0_8_ = auVar102._0_8_;
        auVar92._12_4_ = (int)((ulonglong)auVar102._8_8_ >> 0x20);
        auVar122 = blendpd(auVar17,auVar16,2);
        dVar42 = auVar122._0_8_;
        dVar63 = auVar122._8_8_;
        local_388 = SUB84(dVar23,0);
        uStack_384 = (uint)((ulonglong)dVar23 >> 0x20);
        uStack_380 = SUB84(dVar24,0);
        uStack_37c = (uint)((ulonglong)dVar24 >> 0x20);
        local_388 = uVar19 & local_388;
        uStack_384 = uVar20 & uStack_384;
        uStack_380 = uVar21 & uStack_380;
        uStack_37c = uVar22 & uStack_37c;
        auVar72._0_8_ = auVar43._0_8_ * dVar14 - dVar42 * dVar89;
        auVar72._8_8_ = auVar43._8_8_ * dVar15 - dVar63 * dVar90;
        auVar43 = blendpd(auVar102,auVar72,2);
        auVar103._0_8_ = auVar43._0_8_ + auVar43._0_8_;
        auVar103._8_8_ = auVar43._8_8_ + auVar43._8_8_;
        dVar90 = auVar92._8_8_ + auVar92._8_8_;
        dVar96 = auVar72._0_8_ + auVar72._0_8_;
        uVar94 = SUB84(dVar96,0);
        auVar84._8_4_ = uVar94;
        auVar84._0_8_ = dVar90;
        uVar97 = (undefined4)((ulonglong)dVar96 >> 0x20);
        auVar84._12_4_ = uVar97;
        auVar52._8_4_ = uVar94;
        auVar52._0_8_ = dVar90;
        auVar52._12_4_ = uVar97;
        auVar73._8_4_ = uVar94;
        auVar73._0_8_ = dVar90;
        auVar73._12_4_ = uVar97;
        auVar43 = blendpd(auVar73,auVar103,2);
        auVar85._0_8_ = auVar84._8_8_ * dVar12 - dVar90 * dVar13;
        auVar85._8_8_ = auVar103._0_8_ * dVar13 - auVar52._8_8_ * dVar14;
        auVar53._8_4_ = SUB84(auVar103._8_8_,0);
        auVar53._0_8_ = auVar103._0_8_;
        auVar53._12_4_ = (int)((ulonglong)auVar103._8_8_ >> 0x20);
        auVar74._0_8_ = auVar43._0_8_ * dVar14 - auVar103._0_8_ * dVar42;
        auVar74._8_8_ = auVar43._8_8_ * dVar15 - auVar53._8_8_ * dVar63;
        auVar54._8_4_ = SUB84(auVar85._8_8_,0);
        auVar54._0_8_ = auVar85._0_8_;
        auVar54._12_4_ = (int)((ulonglong)auVar85._8_8_ >> 0x20);
        dVar98 = dVar98 * dVar23;
        uVar111 = SUB84(dVar24 * 0.0,0);
        uVar112 = (undefined4)((ulonglong)(dVar24 * 0.0) >> 0x20);
        auVar43 = blendpd(auVar85,auVar74,2);
        local_258._s_0.Z = auVar103._0_8_ * dVar15 + dVar89 + auVar43._0_8_;
        local_258._s_0.X = dVar90 * dVar15 + dVar108 + auVar54._8_8_;
        local_258._s_0.Y = dVar96 * dVar15 + dVar110 + auVar74._0_8_;
        uVar116 = uVar19 & SUB84(dVar25,0);
        uVar117 = uVar20 & (uint)((ulonglong)dVar25 >> 0x20);
        uVar33 = uVar21 & SUB84(dVar26,0);
        uVar120 = uVar22 & (uint)((ulonglong)dVar26 >> 0x20);
        dVar95 = dVar25 * dVar95;
        dVar107 = dVar26 * dVar107;
        uVar94 = SUB84(dVar107,0);
        auVar104._8_4_ = uVar94;
        auVar104._0_8_ = dVar95;
        uVar97 = (undefined4)((ulonglong)dVar107 >> 0x20);
        auVar104._12_4_ = uVar97;
        auVar55._8_4_ = uVar94;
        auVar55._0_8_ = dVar95;
        auVar55._12_4_ = uVar97;
        auVar75._8_4_ = uVar94;
        auVar75._0_8_ = dVar95;
        auVar75._12_4_ = uVar97;
        auVar7._8_4_ = uVar111;
        auVar7._0_8_ = dVar98;
        auVar7._12_4_ = uVar112;
        auVar43 = blendpd(auVar75,auVar7,2);
        auVar105._0_8_ = auVar104._8_8_ * dVar12 - dVar95 * dVar13;
        auVar105._8_8_ = dVar98 * dVar13 - auVar55._8_8_ * dVar14;
        auVar56._8_4_ = uVar111;
        auVar56._0_8_ = dVar98;
        auVar56._12_4_ = uVar112;
        auVar93._8_4_ = SUB84(auVar105._8_8_,0);
        auVar93._0_8_ = auVar105._0_8_;
        auVar93._12_4_ = (int)((ulonglong)auVar105._8_8_ >> 0x20);
        auVar76._0_8_ = auVar43._0_8_ * dVar14 - dVar98 * dVar42;
        auVar76._8_8_ = auVar43._8_8_ * dVar15 - auVar56._8_8_ * dVar63;
        dVar90 = auVar93._8_8_ + auVar93._8_8_;
        dVar89 = auVar76._0_8_ + auVar76._0_8_;
        auVar43 = blendpd(auVar105,auVar76,2);
        auVar106._0_8_ = auVar43._0_8_ + auVar43._0_8_;
        auVar106._8_8_ = auVar43._8_8_ + auVar43._8_8_;
        uVar94 = SUB84(dVar89,0);
        auVar86._8_4_ = uVar94;
        auVar86._0_8_ = dVar90;
        uVar97 = (undefined4)((ulonglong)dVar89 >> 0x20);
        auVar86._12_4_ = uVar97;
        auVar57._8_4_ = uVar94;
        auVar57._0_8_ = dVar90;
        auVar57._12_4_ = uVar97;
        auVar77._8_4_ = uVar94;
        auVar77._0_8_ = dVar90;
        auVar77._12_4_ = uVar97;
        auVar87._0_8_ = auVar86._8_8_ * dVar12 - dVar90 * dVar13;
        auVar87._8_8_ = auVar106._0_8_ * dVar13 - auVar57._8_8_ * dVar14;
        auVar43 = blendpd(auVar77,auVar106,2);
        auVar58._8_4_ = SUB84(auVar106._8_8_,0);
        auVar58._0_8_ = auVar106._0_8_;
        auVar58._12_4_ = (int)((ulonglong)auVar106._8_8_ >> 0x20);
        auVar78._0_8_ = auVar43._0_8_ * dVar14 - auVar106._0_8_ * dVar42;
        auVar78._8_8_ = auVar43._8_8_ * dVar15 - auVar58._8_8_ * dVar63;
        auVar59._8_4_ = SUB84(auVar87._8_8_,0);
        auVar59._0_8_ = auVar87._0_8_;
        auVar59._12_4_ = (int)((ulonglong)auVar87._8_8_ >> 0x20);
        auVar43 = blendpd(auVar87,auVar78,2);
        local_240._s_0.X =
             dVar90 * dVar15 + dVar95 + auVar59._8_8_ + local_318.Translation.XY.m128d_f64[0];
        local_240._s_0.Y =
             dVar89 * dVar15 + dVar107 + auVar78._0_8_ + local_318.Translation.XY.m128d_f64[1];
        auVar60._4_4_ = uVar117;
        auVar60._0_4_ = uVar116;
        auVar60._8_4_ = uVar33;
        auVar60._12_4_ = uVar120;
        auVar88._4_4_ = uVar117;
        auVar88._0_4_ = uVar116;
        auVar88._8_4_ = uVar33;
        auVar88._12_4_ = uVar120;
        local_240._s_0.Z =
             auVar106._0_8_ * dVar15 + dVar98 + auVar43._0_8_ +
             local_318.Translation.ZW.m128d_f64[0];
        auVar61._12_4_ = uStack_384;
        auVar61._8_4_ = local_388;
        auVar61._0_8_ = auVar60._8_8_;
        auVar79._4_4_ = uStack_384;
        auVar79._0_4_ = local_388;
        auVar43 = maxpd(auVar88,auVar61);
        auVar79._12_4_ = uVar117;
        auVar79._8_4_ = uVar116;
        auVar62._4_4_ = uVar117;
        auVar62._0_4_ = uVar116;
        auVar62._8_4_ = uVar33;
        auVar62._12_4_ = uVar120;
        auVar122 = maxpd(auVar43,auVar79);
        auVar8._4_4_ = uStack_384;
        auVar8._0_4_ = local_388;
        auVar8._8_4_ = uStack_380;
        auVar8._12_4_ = uStack_37c;
        auVar43 = blendpd(auVar62,auVar8,2);
        auVar9._4_4_ = uVar120;
        auVar9._0_4_ = uVar33;
        auVar80._4_4_ = uStack_384;
        auVar80._0_4_ = local_388;
        auVar80._8_4_ = uStack_380;
        auVar80._12_4_ = uStack_37c;
        auVar43 = maxpd(auVar80,auVar43);
        auVar9._8_4_ = uStack_380;
        auVar9._12_4_ = uStack_37c;
        maxpd(auVar43,auVar9);
        FSphericalSector::FSphericalSector
                  (&local_158,(TVector<double> *)&local_240._s_0,
                   (double)(float)auVar122._0_8_ * dVar10,(TVector<double> *)&local_258._s_0,dVar41)
        ;
        this_01 = *(char **)&param_7->field_0x8;
        pTVar30 = (TQuat<double> *)(**(code **)param_7)(this_01,&local_158);
        uVar117 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
        uVar116 = (uint)((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >>
                        0x20);
        dVar90 = (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_,
                                  UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_);
        dVar42 = (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_,
                                  UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_);
        uVar94 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
        uVar113 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
        uVar114 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
        uVar115 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
        uVar97 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
        uVar118 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
        uVar119 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
        uVar121 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
        uVar111 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
        uVar123 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
        uVar124 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._0_4_;
        uVar125 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._4_4_;
        uVar112 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
        uVar126 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
        uVar127 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
        uVar128 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
      }
      pFVar34 = pFVar34 + 0x48;
    }
  }
  return;
}

// IsSourceAffectingGrid @ 148a9a4e0

bool __cdecl
FStreamingSourceShapeHelper::IsSourceAffectingGrid
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,
          EStreamingSourceTargetBehavior param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (param_2 == Include) {
    if (*(int *)&(param_1->Elements).field_0x8 == *(int *)&(param_1->Elements).field_0x34) {
      return true;
    }
    uVar4 = ::GetTypeHash(param_3.ComparisonIndex.Value);
    if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
      FVar6 = (param_1->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&param_1->Hash;
      }
      iVar5 = *(int *)((longlong)FVar6 +
                      (ulonglong)(param_1->HashSize - 1U & param_3.Number + uVar4) * 4);
      if (iVar5 != -1) {
        do {
          if (*(FName *)(*(longlong *)&param_1->Elements + (longlong)iVar5 * 0x10) == param_3) {
            return true;
          }
          iVar5 = *(int *)(*(longlong *)&param_1->Elements + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
    return false;
  }
  if (param_2 != Exclude) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingSource.h"
                       ,0xaf,L"");
    if (!bVar2) {
      return false;
    }
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  uVar4 = ::GetTypeHash(param_3.ComparisonIndex.Value);
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    FVar6 = (param_1->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar5 = *(int *)((longlong)FVar6 +
                    (ulonglong)(param_1->HashSize - 1U & param_3.Number + uVar4) * 4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(*(longlong *)&param_1->Elements + (longlong)iVar5 * 0x10) == param_3)
        goto LAB_148a9a58b;
        iVar5 = *(int *)(*(longlong *)&param_1->Elements + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_148a9a58b:
  return iVar5 == -1;
}

