// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// FNoiseField @ 143f45490

FNoiseField * __thiscall
FNoiseField::FNoiseField(FNoiseField *this,float param_1,float param_2,TTransform<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->_padding_,"");
  dVar1 = (param_3->Rotation).XY.m128d_f64[1];
  dVar2 = (param_3->Rotation).ZW.m128d_f64[0];
  dVar3 = (param_3->Rotation).ZW.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  this->_padding_ = (longlong)&___7FNoiseField__6B_;
  dVar1 = (param_3->Translation).XY.m128d_f64[0];
  dVar4 = (param_3->Translation).XY.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = dVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_3->Translation).ZW.m128d_f64[0];
  dVar3 = (param_3->Translation).ZW.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = dVar1;
  (this->Transform).Translation.XY.m128d_f64[1] = dVar4;
  dVar1 = (param_3->Scale3D).XY.m128d_f64[0];
  dVar4 = (param_3->Scale3D).XY.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = dVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_3->Scale3D).ZW.m128d_f64[0];
  dVar3 = (param_3->Scale3D).ZW.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = dVar1;
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar4;
  this->MinRange = param_1;
  this->MaxRange = param_2;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = dVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar3;
  return this;
}

// ~FNoiseField @ 143f4b0f0

void __thiscall FNoiseField::~FNoiseField(FNoiseField *this)

{
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4bf80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FNoiseField::operator==(FNoiseField *this,FFieldNodeBase *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  FNoiseField *pFVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  pcVar1 = *(code **)(this->_padding_ + 0x10);
  iVar10 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  pFVar14 = this;
  iVar11 = (*pcVar1)();
  if (iVar10 != iVar11) {
    return false;
  }
  if (((((uint)this->_padding_ == (param_1->Name).ComparisonIndex.Value) &&
       (uVar12 = (param_1->Name).Number, *(uint *)((longlong)&this->_padding_ + 4) == uVar12)) &&
      (*(float *)&param_1[1]._padding_ == this->MinRange)) &&
     (*(float *)((longlong)&param_1[1]._padding_ + 4) == this->MaxRange)) {
    dVar16 = (this->Transform).Translation.ZW.m128d_f64[0] - (double)param_1[5]._padding_;
    dVar18 = (this->Transform).Translation.ZW.m128d_f64[1] - (double)param_1[5].Name;
    dVar20 = (this->Transform).Translation.XY.m128d_f64[0] - (double)param_1[4]._padding_;
    dVar22 = (this->Transform).Translation.XY.m128d_f64[1] - (double)param_1[4].Name;
    lVar15 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar18,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar15;
    auVar2._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar2._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
    uVar13 = movmskpd((int)pFVar14,auVar2);
    lVar15 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar22,0) & _UNK_15061cc88));
    auVar7._8_4_ = (int)lVar15;
    auVar7._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar7._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
    iVar10 = movmskpd(uVar12,auVar7);
    if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
      dVar20 = (this->Transform).Rotation.ZW.m128d_f64[0];
      dVar22 = (this->Transform).Rotation.ZW.m128d_f64[1];
      dVar16 = (this->Transform).Rotation.XY.m128d_f64[0];
      dVar18 = (this->Transform).Rotation.XY.m128d_f64[1];
      dVar17 = dVar20 - (double)param_1[3]._padding_;
      dVar19 = dVar22 - (double)param_1[3].Name;
      dVar20 = dVar20 + (double)param_1[3]._padding_;
      dVar22 = dVar22 + (double)param_1[3].Name;
      dVar21 = dVar16 - (double)param_1[2]._padding_;
      dVar23 = dVar18 - (double)param_1[2].Name;
      dVar16 = dVar16 + (double)param_1[2]._padding_;
      dVar18 = dVar18 + (double)param_1[2].Name;
      lVar15 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar19,0) & _UNK_15061cc88));
      auVar3._8_4_ = (int)lVar15;
      auVar3._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar17,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar3._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      iVar11 = movmskpd(0,auVar3);
      lVar15 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar23,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar15;
      auVar4._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar21,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      uVar12 = movmskpd(iVar10,auVar4);
      uVar13 = iVar11 << 2 | uVar12;
      if (uVar13 != 0) {
        lVar15 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar22,0) & _UNK_15061cc88));
        auVar5._8_4_ = (int)lVar15;
        auVar5._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar20,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar5._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
        uVar13 = movmskpd(uVar13,auVar5);
        lVar15 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar18,0) & _UNK_15061cc88));
        auVar8._8_4_ = (int)lVar15;
        auVar8._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar16,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar8._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
        uVar12 = movmskpd(uVar12,auVar8);
        if ((uVar13 & 0x3fffffff) != 0 || uVar12 != 0) {
          return false;
        }
      }
      dVar16 = (this->Transform).Scale3D.ZW.m128d_f64[0] - (double)param_1[7]._padding_;
      dVar18 = (this->Transform).Scale3D.ZW.m128d_f64[1] - (double)param_1[7].Name;
      dVar20 = (this->Transform).Scale3D.XY.m128d_f64[0] - (double)param_1[6]._padding_;
      dVar22 = (this->Transform).Scale3D.XY.m128d_f64[1] - (double)param_1[6].Name;
      lVar15 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar18,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar15;
      auVar6._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar16,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      uVar13 = movmskpd(0,auVar6);
      lVar15 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar22,0) & _UNK_15061cc88));
      auVar9._8_4_ = (int)lVar15;
      auVar9._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar20,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar9._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      iVar10 = movmskpd(uVar12,auVar9);
      if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
        return true;
      }
    }
  }
  return false;
}

// EvalMaxMagnitude @ 143f5f4d0

float __thiscall FNoiseField::EvalMaxMagnitude(FNoiseField *this)

{
  return this->MaxRange;
}

// Evaluate @ 143f620d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FNoiseField::Evaluate(FNoiseField *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  FNoiseField *pFVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  double dVar39;
  uint uVar40;
  double dVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float local_118 [2];
  double local_110;
  FNoiseField *local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  
  iVar5 = (param_1->SampleIndices).ArrayNum;
  uVar19 = 0;
  fVar2 = this->MaxRange;
  fVar3 = this->MinRange;
  if (0 < iVar5) {
    local_e8 = 0;
    uStack_e0 = 0;
    uVar38 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar40 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    local_108 = this;
    do {
      uVar21 = 0;
      if ((int)uVar19 < (param_1->SampleIndices).ArrayNum) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar6 = (param_1->SampleIndices).ElementArray;
      uVar20 = (param_1->SampleIndices).ArrayOffset + uVar19;
      uVar21 = 0;
      if ((int)uVar20 < pTVar6->ArrayNum) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      local_110 = 0.0;
      uVar21 = *(uint *)(pFVar7 + (longlong)(int)uVar20 * 8);
      uVar18 = 0;
      if ((int)uVar21 < (param_1->SamplePositions).ArrayNum) {
        uVar18 = ~uVar21 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar21 = uVar21 + (param_1->SamplePositions).ArrayOffset;
      pTVar8 = (param_1->SamplePositions).ElementArray;
      uVar18 = 0;
      if ((int)uVar21 < pTVar8->ArrayNum) {
        uVar18 = ~uVar21 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar16 = local_108;
      pFVar9 = (pTVar8->AllocatorInstance).Data;
      dVar39 = (local_108->Transform).Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar41 = (local_108->Transform).Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar26 = (local_108->Transform).Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar27 = (local_108->Transform).Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      pFVar1 = pFVar9 + (longlong)(int)uVar21 * 0x18;
      dVar25 = *(double *)(pFVar9 + (longlong)(int)uVar21 * 0x18 + 0x10) -
               (local_108->Transform).Translation.ZW.m128d_f64[0];
      dVar12 = *(double *)pFVar1 - (local_108->Transform).Translation.XY.m128d_f64[0];
      dVar13 = *(double *)(pFVar1 + 8) - (local_108->Transform).Translation.XY.m128d_f64[1];
      uVar51 = (undefined4)((ulonglong)dVar13 >> 0x20);
      auVar36._8_4_ = SUB84(dVar41,0);
      auVar36._0_8_ = dVar39;
      auVar36._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
      auVar28._8_4_ = SUB84(dVar26,0);
      auVar28._0_8_ = dVar41;
      auVar28._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      auVar34._8_4_ = SUB84(dVar27,0);
      auVar34._0_8_ = dVar26;
      auVar34._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      auVar37 = blendpd(auVar36,auVar34,2);
      auVar53._8_4_ = SUB84(dVar13,0);
      auVar53._0_8_ = dVar12;
      auVar53._12_4_ = uVar51;
      auVar33._8_4_ = SUB84(dVar13,0);
      auVar33._0_8_ = dVar12;
      auVar33._12_4_ = uVar51;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar25;
      auVar34 = blendpd(auVar33,auVar14,2);
      auVar54._0_8_ = auVar53._8_8_ * dVar39 - dVar41 * dVar12;
      auVar54._8_8_ = dVar25 * dVar41 - auVar28._8_8_ * dVar13;
      auVar35._0_8_ = auVar34._0_8_ * dVar26 - dVar25 * auVar37._0_8_;
      auVar35._8_8_ = auVar34._8_8_ * dVar27 - auVar37._8_8_ * 0.0;
      auVar34 = blendpd(auVar54,auVar35,2);
      dVar47 = auVar54._8_8_ + auVar54._8_8_;
      dVar50 = auVar35._0_8_ + auVar35._0_8_;
      uVar51 = SUB84(dVar50,0);
      uVar52 = (undefined4)((ulonglong)dVar50 >> 0x20);
      auVar55._0_8_ = auVar34._0_8_ + auVar34._0_8_;
      auVar55._8_8_ = auVar34._8_8_ + auVar34._8_8_;
      auVar45._8_4_ = uVar51;
      auVar45._0_8_ = dVar47;
      auVar45._12_4_ = uVar52;
      auVar29._8_4_ = uVar51;
      auVar29._0_8_ = dVar47;
      auVar29._12_4_ = uVar52;
      auVar43._8_4_ = uVar51;
      auVar43._0_8_ = dVar47;
      auVar43._12_4_ = uVar52;
      auVar34 = blendpd(auVar43,auVar55,2);
      auVar46._0_8_ = auVar45._8_8_ * dVar39 - dVar47 * dVar41;
      auVar46._8_8_ = auVar55._0_8_ * dVar41 - auVar29._8_8_ * dVar26;
      auVar30._8_4_ = SUB84(auVar55._8_8_,0);
      auVar30._0_8_ = auVar55._0_8_;
      auVar30._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
      auVar44._0_8_ = auVar34._0_8_ * dVar26 - auVar55._0_8_ * auVar37._0_8_;
      auVar44._8_8_ = auVar34._8_8_ * dVar27 - auVar30._8_8_ * auVar37._8_8_;
      auVar34 = *(undefined1 (*) [16])(local_108->Transform).Scale3D.ZW.m128d_f64;
      auVar48._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)(local_108->Transform).Scale3D.XY.m128d_f64 + 4) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            *(uint *)(local_108->Transform).Scale3D.XY.m128d_f64 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar48._8_4_ = *(uint *)((local_108->Transform).Scale3D.XY.m128d_f64 + 1) & _UNK_15061cc88;
      auVar48._12_4_ =
           *(uint *)((longlong)(local_108->Transform).Scale3D.XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
      lVar22 = -(ulonglong)
                ((double)CONCAT44(auVar34._4_4_ & uVar40,auVar34._0_4_ & uVar38) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(local_108->Transform).Scale3D.XY.m128d_f64);
      lVar23 = -(ulonglong)(auVar48._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar24 = -(ulonglong)(auVar48._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar31._8_4_ = SUB84(auVar46._8_8_,0);
      auVar31._0_8_ = auVar46._0_8_;
      auVar31._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
      auVar49._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar37._4_4_,
                            ~(uint)lVar23 & auVar37._0_4_);
      auVar49._8_4_ = ~(uint)lVar24 & auVar37._8_4_;
      auVar49._12_4_ = ~(uint)((ulonglong)lVar24 >> 0x20) & auVar37._12_4_;
      uVar38 = (uint)lVar22;
      uVar40 = (uint)((ulonglong)lVar22 >> 0x20);
      auVar37._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar37._0_8_ = auVar34._0_8_;
      auVar37._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar37);
      dVar47 = auVar49._0_8_ * (dVar47 * dVar27 + dVar12 + auVar31._8_8_);
      dVar50 = auVar49._8_8_ * (dVar50 * dVar27 + dVar13 + auVar44._0_8_);
      auVar37 = blendpd(auVar46,auVar44,2);
      local_100 = dVar47;
      dStack_f8 = dVar50;
      dVar26 = modf((double)(CONCAT44(local_e8._4_4_ & uVar40,(uint)local_e8 & uVar38) |
                            CONCAT44(~uVar40 & auVar34._4_4_,~uVar38 & auVar34._0_4_)) *
                    (auVar55._0_8_ * dVar27 + dVar25 + auVar37._0_8_),&local_110);
      auVar15._4_8_ = extraout_XMM0_Qb;
      auVar15._0_4_ = (int)((ulonglong)dVar47 >> 0x20);
      auVar32._0_8_ = auVar15._0_8_ << 0x20;
      auVar32._8_4_ = SUB84(dVar50,0);
      auVar32._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
      dVar27 = modf(auVar32._8_8_,&local_110);
      dVar47 = modf(dVar47,&local_110);
      local_118[0] = 0.0;
      local_100 = (dVar47 + __real_3ff0000000000000) * __real_405fe00000000000;
      dStack_f8 = (dVar27 + __real_3ff0000000000000) * __real_405fe00000000000;
      local_f0 = (dVar26 + __real_3ff0000000000000) * __real_405fe00000000000;
      Field::PerlinNoise::Sample(local_118,(float)local_100,(float)dStack_f8,(float)local_f0);
      local_118[0] = (local_118[0] + __real_3f800000) * __real_3f000000;
      fVar42 = local_118[0] * (fVar2 - fVar3);
      fVar4 = pFVar16->MinRange;
      uVar21 = *(uint *)(pFVar7 + (longlong)(int)uVar20 * 8 + 4);
      uVar38 = 0;
      if ((int)uVar21 < param_2->ArrayNum) {
        uVar38 = ~uVar21 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar21 = uVar21 + param_2->ArrayOffset;
      pTVar10 = param_2->ElementArray;
      uVar38 = 0;
      if ((int)uVar21 < pTVar10->ArrayNum) {
        uVar38 = ~uVar21 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar40 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar38 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar19 = uVar19 + 1;
      *(float *)((pTVar10->AllocatorInstance).Data + (longlong)(int)uVar21 * 4) = fVar42 + fVar4;
    } while ((int)uVar19 < iVar5);
  }
  return;
}

// FillSetupCount @ 143f67340

void __thiscall FNoiseField::FillSetupCount(FNoiseField *this,int *param_1,int *param_2)

{
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 0xe;
  return;
}

// FillSetupDatas @ 143f68f70

void __thiscall
FNoiseField::FillSetupDatas
          (FNoiseField *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4 [3];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  FFieldNode<float>::FillSetupDatas((FFieldNode<float> *)this,param_1,param_2,param_3);
  pFVar3 = (param_2->AllocatorInstance).Data;
  pfVar1 = &this->MinRange;
  if ((pFVar3 <= pfVar1) && (pfVar1 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  pfVar2 = &this->MaxRange;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = *pfVar1;
  pFVar3 = (param_2->AllocatorInstance).Data;
  if ((pFVar3 <= pfVar2) && (pfVar2 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = *pfVar2;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_a8 = (this->Transform).Rotation.ZW.m128d_f64[0];
  dStack_a0 = (this->Transform).Rotation.ZW.m128d_f64[1];
  local_e8 = (float)(this->Transform).Rotation.XY.m128d_f64[0];
  if ((pFVar3 <= (FScriptContainerElement *)&local_e8) &&
     ((FScriptContainerElement *)&local_e8 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_e8;
  local_a8 = (this->Transform).Rotation.ZW.m128d_f64[0];
  dStack_a0 = (this->Transform).Rotation.ZW.m128d_f64[1];
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_e4 = (float)(this->Transform).Rotation.XY.m128d_f64[1];
  if ((pFVar3 <= (FScriptContainerElement *)&local_e4) &&
     ((FScriptContainerElement *)&local_e4 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_e4;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_b8 = (this->Transform).Rotation.XY.m128d_f64[0];
  dStack_b0 = (this->Transform).Rotation.XY.m128d_f64[1];
  local_e0 = (float)(this->Transform).Rotation.ZW.m128d_f64[0];
  if ((pFVar3 <= (FScriptContainerElement *)&local_e0) &&
     ((FScriptContainerElement *)&local_e0 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_e0;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_b8 = (this->Transform).Rotation.XY.m128d_f64[0];
  dStack_b0 = (this->Transform).Rotation.XY.m128d_f64[1];
  local_dc = (float)(this->Transform).Rotation.ZW.m128d_f64[1];
  if ((pFVar3 <= (FScriptContainerElement *)&local_dc) &&
     ((FScriptContainerElement *)&local_dc < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_dc;
  local_88 = (this->Transform).Translation.ZW.m128d_f64[0];
  local_98 = (this->Transform).Translation.XY.m128d_f64[0];
  dStack_90 = (this->Transform).Translation.XY.m128d_f64[1];
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_d8 = (float)local_98;
  if ((pFVar3 <= (FScriptContainerElement *)&local_d8) &&
     ((FScriptContainerElement *)&local_d8 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_d8;
  local_80 = (this->Transform).Translation.XY.m128d_f64[0];
  dStack_78 = (this->Transform).Translation.XY.m128d_f64[1];
  local_70 = (this->Transform).Translation.ZW.m128d_f64[0];
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_d4 = (float)dStack_78;
  if ((pFVar3 <= (FScriptContainerElement *)&local_d4) &&
     ((FScriptContainerElement *)&local_d4 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_d4;
  local_68 = (this->Transform).Translation.XY.m128d_f64[0];
  dStack_60 = (this->Transform).Translation.XY.m128d_f64[1];
  local_58 = (this->Transform).Translation.ZW.m128d_f64[0];
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_d0 = (float)local_58;
  if ((pFVar3 <= (FScriptContainerElement *)&local_d0) &&
     ((FScriptContainerElement *)&local_d0 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_d0;
  local_40 = (this->Transform).Scale3D.ZW.m128d_f64[0];
  local_50 = (this->Transform).Scale3D.XY.m128d_f64[0];
  dStack_48 = (this->Transform).Scale3D.XY.m128d_f64[1];
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_cc = (float)local_50;
  if ((pFVar3 <= (FScriptContainerElement *)&local_cc) &&
     ((FScriptContainerElement *)&local_cc < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_cc;
  local_38 = (this->Transform).Scale3D.XY.m128d_f64[0];
  dStack_30 = (this->Transform).Scale3D.XY.m128d_f64[1];
  local_28 = (this->Transform).Scale3D.ZW.m128d_f64[0];
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_c8 = (float)dStack_30;
  if ((pFVar3 <= (FScriptContainerElement *)&local_c8) &&
     ((FScriptContainerElement *)&local_c8 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_c8;
  local_20 = (this->Transform).Scale3D.XY.m128d_f64[0];
  dStack_18 = (this->Transform).Scale3D.XY.m128d_f64[1];
  local_10 = (this->Transform).Scale3D.ZW.m128d_f64[0];
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_c4[0] = (float)local_10;
  if ((pFVar3 <= (FScriptContainerElement *)local_c4) &&
     ((FScriptContainerElement *)local_c4 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_c4[0];
  return;
}

// NewCopy @ 143f70430

FFieldNodeBase * __thiscall FNoiseField::NewCopy(FNoiseField *this)

{
  float fVar1;
  float fVar2;
  double dVar3;
  FName FVar4;
  double dVar5;
  FName FVar6;
  double dVar7;
  FName FVar8;
  double dVar9;
  FName FVar10;
  double dVar11;
  FName FVar12;
  double dVar13;
  FName FVar14;
  FFieldNodeBase *pFVar15;
  
  pFVar15 = ::operator_new(0x80);
  if (pFVar15 != (FFieldNodeBase *)0x0) {
    fVar1 = this->MinRange;
    fVar2 = this->MaxRange;
    dVar3 = (this->Transform).Rotation.XY.m128d_f64[0];
    FVar4 = *(FName *)((this->Transform).Rotation.XY.m128d_f64 + 1);
    dVar5 = (this->Transform).Rotation.ZW.m128d_f64[0];
    FVar6 = *(FName *)((this->Transform).Rotation.ZW.m128d_f64 + 1);
    dVar7 = (this->Transform).Translation.XY.m128d_f64[0];
    FVar8 = *(FName *)((this->Transform).Translation.XY.m128d_f64 + 1);
    dVar9 = (this->Transform).Translation.ZW.m128d_f64[0];
    FVar10 = *(FName *)((this->Transform).Translation.ZW.m128d_f64 + 1);
    dVar11 = (this->Transform).Scale3D.XY.m128d_f64[0];
    FVar12 = *(FName *)((this->Transform).Scale3D.XY.m128d_f64 + 1);
    dVar13 = (this->Transform).Scale3D.ZW.m128d_f64[0];
    FVar14 = *(FName *)((this->Transform).Scale3D.ZW.m128d_f64 + 1);
    (pFVar15->Name).ComparisonIndex = 0;
    (pFVar15->Name).Number = 0;
    pFVar15->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar15->Name,"");
    pFVar15[2]._padding_ = (longlong)dVar3;
    pFVar15[2].Name = FVar4;
    pFVar15[3]._padding_ = (longlong)dVar5;
    pFVar15[3].Name = FVar6;
    pFVar15->_padding_ = (longlong)&___7FNoiseField__6B_;
    pFVar15[4]._padding_ = (longlong)dVar7;
    pFVar15[4].Name = FVar8;
    pFVar15[5]._padding_ = (longlong)dVar9;
    pFVar15[5].Name = FVar10;
    pFVar15[6]._padding_ = (longlong)dVar11;
    pFVar15[6].Name = FVar12;
    pFVar15[7]._padding_ = (longlong)dVar13;
    pFVar15[7].Name = FVar14;
    *(float *)&pFVar15[1]._padding_ = fVar1;
    *(float *)((longlong)&pFVar15[1]._padding_ + 4) = fVar2;
    return pFVar15;
  }
  return (FFieldNodeBase *)0x0;
}

// SerializationType @ 143f73a80

ESerializationType __thiscall FNoiseField::SerializationType(FNoiseField *this)

{
  return FieldNode_FNoiseField;
}

// Serialize @ 143f740e0

void __thiscall FNoiseField::Serialize(FNoiseField *this,FArchive *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->_padding_);
  pfVar1 = &this->MinRange;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->MaxRange;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&this->Transform);
  return;
}

