// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// GetTransform @ 14a31a110

TTransform<double> * __thiscall
FNodeHierarchyData::GetTransform(FNodeHierarchyData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Transforms).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TTransform<double> *)
         ((this->Transforms).AllocatorInstance.Data + (longlong)param_1 * 0x60);
}

// SetTransform @ 14a351c40

void __thiscall
FNodeHierarchyData::SetTransform(FNodeHierarchyData *this,int param_1,TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  dVar6 = (param_2->Rotation).XY.m128d_f64[0];
  dVar7 = (param_2->Rotation).XY.m128d_f64[1];
  dVar9 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar10 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar11 = (param_2->Translation).XY.m128d_f64[0];
  dVar12 = (param_2->Translation).XY.m128d_f64[1];
  dVar13 = (param_2->Translation).ZW.m128d_f64[0];
  dVar14 = (param_2->Translation).ZW.m128d_f64[1];
  dVar15 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar16 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar17 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar18 = (param_2->Scale3D).ZW.m128d_f64[1];
  uVar20 = 0;
  if (param_1 < (this->Transforms).ArrayNum) {
    uVar20 = (uint)~param_1 >> 0x1f;
  }
  if (uVar20 == 0) {
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
  pFVar1 = (this->Transforms).AllocatorInstance.Data;
  lVar21 = (longlong)param_1 * 0x60;
  *(double *)(pFVar1 + lVar21) = dVar6;
  *(double *)(pFVar1 + lVar21 + 8) = dVar7;
  *(double *)(pFVar1 + lVar21 + 0x10) = dVar9;
  *(double *)(pFVar1 + lVar21 + 0x10 + 8) = dVar10;
  *(double *)(pFVar1 + lVar21 + 0x20) = dVar11;
  *(double *)(pFVar1 + lVar21 + 0x20 + 8) = dVar12;
  *(double *)(pFVar1 + lVar21 + 0x30) = dVar13;
  *(double *)(pFVar1 + lVar21 + 0x30 + 8) = dVar14;
  *(double *)(pFVar1 + lVar21 + 0x40) = dVar15;
  *(double *)(pFVar1 + lVar21 + 0x40 + 8) = dVar16;
  *(double *)(pFVar1 + lVar21 + 0x50) = dVar17;
  *(double *)(pFVar1 + lVar21 + 0x50 + 8) = dVar18;
  uVar20 = 0;
  if (param_1 < (this->Transforms).ArrayNum) {
    uVar20 = (uint)~param_1 >> 0x1f;
  }
  if (uVar20 == 0) {
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
  pFVar1 = (this->Transforms).AllocatorInstance.Data;
  dVar9 = *(double *)(pFVar1 + lVar21);
  dVar10 = *(double *)(pFVar1 + lVar21 + 8);
  dVar11 = *(double *)(pFVar1 + lVar21 + 0x10);
  dVar12 = *(double *)(pFVar1 + lVar21 + 0x10 + 8);
  dVar6 = dVar11 * dVar11 + dVar9 * dVar9;
  dVar7 = dVar12 * dVar12 + dVar10 * dVar10;
  auVar26._8_4_ = SUB84(dVar7,0);
  auVar26._0_8_ = dVar6;
  auVar26._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar27._0_8_ = auVar26._8_8_ + dVar6;
  auVar27._8_8_ = dVar6 + dVar7;
  auVar30 = sqrtpd(in_XMM2,auVar27);
  uVar22 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar27._0_8_);
  uVar24 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar27._8_8_);
  uVar23 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar27._0_8_);
  uVar25 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar27._8_8_);
  auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar30);
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar30);
  auVar29._0_8_ = uVar23 & (ulonglong)(auVar28._0_8_ * dVar9);
  uVar8 = uVar25 & (ulonglong)(auVar28._8_8_ * dVar10);
  auVar29._8_4_ = (undefined4)uVar8;
  auVar29._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar31._0_8_ = uVar22 & (ulonglong)(auVar30._0_8_ * dVar11);
  uVar8 = uVar24 & (ulonglong)(auVar30._8_8_ * dVar12);
  auVar31._8_4_ = (undefined4)uVar8;
  auVar31._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar30._4_4_ = ~(uint)(uVar23 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar30._0_4_ = ~(uint)uVar23 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar30._8_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar30._12_4_ = ~(uint)(uVar25 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  uVar20 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  uVar3 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  uVar5 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])(pFVar1 + lVar21) = auVar29 | auVar30;
  auVar28._4_4_ = ~(uint)(uVar22 >> 0x20) & uVar3;
  auVar28._0_4_ = ~(uint)uVar22 & uVar20;
  auVar28._8_4_ = ~(uint)uVar24 & uVar4;
  auVar28._12_4_ = ~(uint)(uVar24 >> 0x20) & uVar5;
  *(undefined1 (*) [16])(pFVar1 + lVar21 + 0x10) = auVar31 | auVar28;
  return;
}

