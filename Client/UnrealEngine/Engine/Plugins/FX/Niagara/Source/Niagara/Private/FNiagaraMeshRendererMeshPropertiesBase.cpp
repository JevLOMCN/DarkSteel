// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 148e42470

UScriptStruct * __cdecl FNiagaraMeshRendererMeshPropertiesBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraMeshRendererMeshPropertiesBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraMeshRendererMeshPropertiesBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshPropertiesBase,
                         (UObject *)pUVar1,L"NiagaraMeshRendererMeshPropertiesBase");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraMeshRendererMeshPropertiesBase.OuterSingleton;
}

// operator= @ 148e57290

FNiagaraMeshRendererMeshPropertiesBase * __thiscall
FNiagaraMeshRendererMeshPropertiesBase::operator=
          (FNiagaraMeshRendererMeshPropertiesBase *this,
          FNiagaraMeshRendererMeshPropertiesBase *param_1)

{
  UStaticMesh *pUVar1;
  double dVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Mesh).field0_0x0.DebugPtr, pUVar1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Mesh).field0_0x0 = (param_1->Mesh).field0_0x0;
  dVar2 = (param_1->Scale).field0_0x0._s_0.Y;
  (this->Scale).field0_0x0._s_0.X = (param_1->Scale).field0_0x0._s_0.X;
  (this->Scale).field0_0x0._s_0.Y = dVar2;
  (this->Scale).field0_0x0._s_0.Z = (param_1->Scale).field0_0x0._s_0.Z;
  dVar2 = (param_1->Rotation).Yaw;
  (this->Rotation).Pitch = (param_1->Rotation).Pitch;
  (this->Rotation).Yaw = dVar2;
  (this->Rotation).Roll = (param_1->Rotation).Roll;
  dVar2 = (param_1->PivotOffset).field0_0x0._s_0.Y;
  (this->PivotOffset).field0_0x0._s_0.X = (param_1->PivotOffset).field0_0x0._s_0.X;
  (this->PivotOffset).field0_0x0._s_0.Y = dVar2;
  (this->PivotOffset).field0_0x0._s_0.Z = (param_1->PivotOffset).field0_0x0._s_0.Z;
  this->PivotOffsetSpace = param_1->PivotOffsetSpace;
  return this;
}

// IsNearlyEqual @ 148e75120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FNiagaraMeshRendererMeshPropertiesBase::IsNearlyEqual
          (FNiagaraMeshRendererMeshPropertiesBase *this,
          FNiagaraMeshRendererMeshPropertiesBase *param_1,float param_2)

{
  UStaticMesh *pUVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar35;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  
  pUVar1 = (param_1->Mesh).field0_0x0.DebugPtr;
  if ((this->Mesh).field0_0x0.DebugPtr == pUVar1) {
    dVar18 = (this->Scale).field0_0x0._s_0.X - (param_1->Scale).field0_0x0._s_0.X;
    dVar9 = (double)param_2;
    if ((((double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar9)
        && (dVar18 = (this->Scale).field0_0x0._s_0.Y - (param_1->Scale).field0_0x0._s_0.Y,
           (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar9
           )) && (dVar18 = (this->Scale).field0_0x0._s_0.Z - (param_1->Scale).field0_0x0._s_0.Z,
                 (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                 dVar9)) {
      dVar33 = (this->Rotation).Pitch - (param_1->Rotation).Pitch;
      dVar35 = (this->Rotation).Yaw - (param_1->Rotation).Yaw;
      dVar18 = (this->Rotation).Roll - (param_1->Rotation).Roll;
      auVar19._8_4_ = SUB84(dVar35,0);
      auVar19._0_8_ = dVar33;
      auVar19._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      auVar20 = divpd(auVar19,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar20 = roundpd(in_XMM1,auVar20,3);
      dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar27._0_8_ = auVar20._0_8_ * dVar7;
      dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar27._8_8_ = auVar20._8_8_ * dVar8;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = dVar18;
      dVar33 = dVar33 - auVar27._0_8_;
      dVar35 = dVar35 - auVar27._8_8_;
      auVar20 = divpd(auVar21,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      auVar20 = roundpd(auVar27,auVar20,3);
      dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar22._8_4_ = SUB84(dVar35,0);
      auVar22._0_8_ = dVar33;
      auVar22._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      dVar18 = dVar18 - auVar20._0_8_ * dVar5;
      dVar4 = 0.0 - auVar20._8_8_ * dVar6;
      uVar12 = -(ulonglong)(0.0 <= dVar33);
      uVar14 = -(ulonglong)(0.0 <= dVar35);
      auVar28._0_8_ = uVar12 & (ulonglong)dVar33;
      auVar28._8_4_ = (undefined4)(uVar14 & (ulonglong)dVar35);
      auVar28._12_4_ = (undefined4)((uVar14 & (ulonglong)dVar35) >> 0x20);
      dVar35 = auVar22._8_8_ + dVar8;
      uVar13 = -(ulonglong)(0.0 <= dVar18);
      uVar15 = -(ulonglong)(0.0 <= dVar4);
      auVar36._0_4_ = ~(uint)uVar12 & SUB84(dVar33 + dVar7,0);
      auVar36._4_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)(dVar33 + dVar7) >> 0x20);
      auVar36._8_4_ = ~(uint)uVar14 & SUB84(dVar35,0);
      auVar36._12_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
      auVar36 = auVar36 | auVar28;
      auVar23._8_4_ = SUB84(dVar4,0);
      auVar23._0_8_ = dVar18;
      auVar23._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      dVar35 = auVar23._8_8_ + dVar6;
      uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar36._0_8_);
      uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar36._8_8_);
      auVar34._0_4_ = ~(uint)uVar13 & SUB84(dVar18 + dVar5,0);
      auVar34._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar18 + dVar5) >> 0x20);
      auVar34._8_4_ = ~(uint)uVar15 & SUB84(dVar35,0);
      auVar34._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
      auVar20._8_4_ = (int)((ulonglong)dVar4 & uVar15);
      auVar20._0_8_ = (ulonglong)dVar18 & uVar13;
      auVar20._12_4_ = (int)(((ulonglong)dVar4 & uVar15) >> 0x20);
      auVar34 = auVar34 | auVar20;
      uVar13 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar34._0_8_);
      uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar34._8_8_);
      auVar29._0_8_ = uVar13 & (ulonglong)(auVar34._0_8_ - dVar5);
      uVar12 = uVar15 & (ulonglong)(auVar34._8_8_ - dVar6);
      auVar29._8_4_ = (undefined4)uVar12;
      auVar29._12_4_ = (undefined4)(uVar12 >> 0x20);
      auVar24._0_4_ = ~(uint)uVar13 & auVar34._0_4_;
      auVar24._4_4_ = ~(uint)(uVar13 >> 0x20) & auVar34._4_4_;
      auVar24._8_4_ = ~(uint)uVar15 & auVar34._8_4_;
      auVar24._12_4_ = ~(uint)(uVar15 >> 0x20) & auVar34._12_4_;
      auVar29 = auVar29 | auVar24;
      auVar25._8_4_ = SUB84(dVar9,0);
      auVar25._0_8_ = dVar9;
      auVar25._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar30._0_8_ =
           (double)CONCAT44(auVar29._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar29._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar30._8_4_ = auVar29._8_4_ & _UNK_15061cc88;
      auVar30._12_4_ = auVar29._12_4_ & _UNK_15061cc8c;
      auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < auVar30._8_8_);
      auVar26._0_8_ = -(ulonglong)(dVar9 < auVar30._0_8_);
      uVar11 = movmskpd((int)this,auVar26);
      auVar31._0_8_ = uVar14 & (ulonglong)(auVar36._0_8_ - dVar7);
      uVar12 = uVar16 & (ulonglong)(auVar36._8_8_ - dVar8);
      auVar31._8_4_ = (undefined4)uVar12;
      auVar31._12_4_ = (undefined4)(uVar12 >> 0x20);
      auVar3._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar36._4_4_;
      auVar3._0_4_ = ~(uint)uVar14 & auVar36._0_4_;
      auVar3._8_4_ = ~(uint)uVar16 & auVar36._8_4_;
      auVar3._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar36._12_4_;
      auVar31 = auVar31 | auVar3;
      auVar32._0_8_ =
           (double)CONCAT44(auVar31._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar31._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar32._8_4_ = auVar31._8_4_ & _UNK_15061cc88;
      auVar32._12_4_ = auVar31._12_4_ & _UNK_15061cc8c;
      lVar17 = -(ulonglong)(dVar9 < auVar32._8_8_);
      auVar2._8_4_ = (int)lVar17;
      auVar2._0_8_ = -(ulonglong)(dVar9 < auVar32._0_8_);
      auVar2._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      iVar10 = movmskpd((int)pUVar1,auVar2);
      if ((((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) &&
          (dVar18 = (this->PivotOffset).field0_0x0._s_0.X - (param_1->PivotOffset).field0_0x0._s_0.X
          , (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            dVar9)) &&
         ((dVar18 = (this->PivotOffset).field0_0x0._s_0.Y - (param_1->PivotOffset).field0_0x0._s_0.Y
          , (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            dVar9 &&
          ((dVar18 = (this->PivotOffset).field0_0x0._s_0.Z -
                     (param_1->PivotOffset).field0_0x0._s_0.Z,
           (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar9
           && (this->PivotOffsetSpace == param_1->PivotOffsetSpace)))))) {
        return true;
      }
    }
  }
  return false;
}

