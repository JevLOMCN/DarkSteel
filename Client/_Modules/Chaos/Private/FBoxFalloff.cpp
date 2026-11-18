// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 16

// Evaluator<1> @ 143f35cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FBoxFalloff::Evaluator<1>(FBoxFalloff *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [12];
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  double dVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  fVar2 = this->MaxRange;
  fVar3 = this->MinRange;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Min.field0_0x0._s_0.X = ___xmm_c049000000000000c049000000000000;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Min.field0_0x0._s_0.Y = _UNK_150b2d308;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.IsValid = '\x01';
    `protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Max.field0_0x0._s_0.Y = ___xmm_40490000000000004049000000000000;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Max.field0_0x0._s_0.Z = _UNK_150b2d2e8;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Min.field0_0x0._s_0.Z = ___xmm_4049000000000000c049000000000000;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Max.field0_0x0._s_0.X = _UNK_150b2d2f8;
    _Init_thread_footer(&`protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  dVar22 = __real_4049000000000000;
  uVar21 = _UNK_15061cc8c;
  uVar20 = _UNK_15061cc88;
  uVar19 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar6 = (param_1->SampleIndices).ArrayNum;
  uVar24 = 0;
  if (0 < iVar6) {
    do {
      uVar26 = 0;
      if ((int)uVar24 < (param_1->SampleIndices).ArrayNum) {
        uVar26 = ~uVar24 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar7 = (param_1->SampleIndices).ElementArray;
      uVar25 = (param_1->SampleIndices).ArrayOffset + uVar24;
      uVar26 = 0;
      if ((int)uVar25 < pTVar7->ArrayNum) {
        uVar26 = ~uVar25 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar8 = (pTVar7->AllocatorInstance).Data;
      fVar4 = this->Default;
      lVar28 = (longlong)(int)uVar25;
      uVar26 = *(uint *)(pFVar8 + lVar28 * 8 + 4);
      uVar25 = 0;
      if ((int)uVar26 < param_2->ArrayNum) {
        uVar25 = ~uVar26 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar26 = uVar26 + param_2->ArrayOffset;
      pTVar9 = param_2->ElementArray;
      uVar25 = 0;
      if ((int)uVar26 < pTVar9->ArrayNum) {
        uVar25 = ~uVar26 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar26 * 4) = fVar4;
      uVar26 = *(uint *)(pFVar8 + lVar28 * 8);
      uVar25 = 0;
      if ((int)uVar26 < (param_1->SamplePositions).ArrayNum) {
        uVar25 = ~uVar26 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar26 = uVar26 + (param_1->SamplePositions).ArrayOffset;
      pTVar10 = (param_1->SamplePositions).ElementArray;
      uVar25 = 0;
      if ((int)uVar26 < pTVar10->ArrayNum) {
        uVar25 = ~uVar26 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      dVar47 = (this->Transform).Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar48 = (this->Transform).Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      pFVar11 = (pTVar10->AllocatorInstance).Data;
      dVar13 = (this->Transform).Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar34 = (this->Transform).Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      pFVar1 = pFVar11 + (longlong)(int)uVar26 * 0x18;
      dVar33 = *(double *)(pFVar11 + (longlong)(int)uVar26 * 0x18 + 0x10) -
               (this->Transform).Translation.ZW.m128d_f64[0];
      dVar15 = *(double *)pFVar1 - (this->Transform).Translation.XY.m128d_f64[0];
      dVar16 = *(double *)(pFVar1 + 8) - (this->Transform).Translation.XY.m128d_f64[1];
      uVar53 = (undefined4)((ulonglong)dVar16 >> 0x20);
      auVar35._8_4_ = SUB84(dVar13,0);
      auVar35._0_8_ = dVar48;
      auVar35._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar45._8_4_ = SUB84(dVar48,0);
      auVar45._0_8_ = dVar47;
      auVar45._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      auVar41._8_4_ = SUB84(dVar34,0);
      auVar41._0_8_ = dVar13;
      auVar41._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      auVar46 = blendpd(auVar45,auVar41,2);
      auVar55._8_4_ = SUB84(dVar16,0);
      auVar55._0_8_ = dVar15;
      auVar55._12_4_ = uVar53;
      auVar40._8_4_ = SUB84(dVar16,0);
      auVar40._0_8_ = dVar15;
      auVar40._12_4_ = uVar53;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = dVar33;
      auVar41 = blendpd(auVar40,auVar43,2);
      auVar56._0_8_ = auVar55._8_8_ * dVar47 - dVar48 * dVar15;
      auVar56._8_8_ = dVar33 * dVar48 - auVar35._8_8_ * dVar16;
      auVar42._0_8_ = auVar41._0_8_ * dVar13 - dVar33 * auVar46._0_8_;
      auVar42._8_8_ = auVar41._8_8_ * dVar34 - auVar46._8_8_ * 0.0;
      auVar41 = blendpd(auVar56,auVar42,2);
      dVar39 = auVar56._8_8_ + auVar56._8_8_;
      dVar14 = auVar42._0_8_ + auVar42._0_8_;
      uVar53 = SUB84(dVar14,0);
      uVar54 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar57._0_8_ = auVar41._0_8_ + auVar41._0_8_;
      auVar57._8_8_ = auVar41._8_8_ + auVar41._8_8_;
      auVar51._8_4_ = uVar53;
      auVar51._0_8_ = dVar39;
      auVar51._12_4_ = uVar54;
      auVar36._8_4_ = uVar53;
      auVar36._0_8_ = dVar39;
      auVar36._12_4_ = uVar54;
      auVar49._8_4_ = uVar53;
      auVar49._0_8_ = dVar39;
      auVar49._12_4_ = uVar54;
      auVar41 = blendpd(auVar49,auVar57,2);
      auVar52._0_8_ = auVar51._8_8_ * dVar47 - dVar39 * dVar48;
      auVar52._8_8_ = auVar57._0_8_ * dVar48 - auVar36._8_8_ * dVar13;
      auVar37._8_4_ = SUB84(auVar57._8_8_,0);
      auVar37._0_8_ = auVar57._0_8_;
      auVar37._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
      auVar50._0_8_ = auVar41._0_8_ * dVar13 - auVar57._0_8_ * auVar46._0_8_;
      auVar50._8_8_ = auVar41._8_8_ * dVar34 - auVar37._8_8_ * auVar46._8_8_;
      auVar41 = *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64;
      lVar29 = -(ulonglong)
                ((double)CONCAT44(auVar41._4_4_ & uVar19,auVar41._0_4_ & uVar18) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64);
      lVar30 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 4) &
                                  uVar19,*(uint *)(this->Transform).Scale3D.XY.m128d_f64 & uVar18)
                <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar31 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 0xc)
                                  & uVar21,*(uint *)((this->Transform).Scale3D.XY.m128d_f64 + 1) &
                                           uVar20) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar38._8_4_ = SUB84(auVar52._8_8_,0);
      auVar38._0_8_ = auVar52._0_8_;
      auVar38._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
      auVar46._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar46._0_8_ = auVar41._0_8_;
      auVar46._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar46);
      dVar13 = (double)CONCAT44(~(uint)((ulonglong)lVar30 >> 0x20) & auVar43._4_4_,
                                ~(uint)lVar30 & auVar43._0_4_) *
               (dVar39 * dVar34 + dVar15 + auVar38._8_8_);
      uVar26 = (uint)((ulonglong)dVar13 >> 0x20);
      dVar39 = (double)CONCAT44(~(uint)((ulonglong)lVar31 >> 0x20) & auVar43._12_4_,
                                ~(uint)lVar31 & auVar43._8_4_) *
               (dVar14 * dVar34 + dVar16 + auVar50._0_8_);
      uVar25 = SUB84(dVar39,0);
      uVar44 = (uint)((ulonglong)dVar39 >> 0x20);
      auVar46 = blendpd(auVar52,auVar50,2);
      dVar39 = (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar41._4_4_,
                                ~(uint)lVar29 & auVar41._0_4_) *
               (auVar57._0_8_ * dVar34 + dVar33 + auVar46._0_8_);
      if (((((`protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
              ::__l2::UnitBox.Min.field0_0x0._s_0.X < dVar13) &&
            (dVar13 < `protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                      ::__l2::UnitBox.Max.field0_0x0._s_0.X)) &&
           (auVar17._4_4_ = uVar25, auVar17._0_4_ = uVar26, auVar17._8_4_ = uVar44,
           `protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
           ::__l2::UnitBox.Min.field0_0x0._s_0.Y < auVar17._4_8_)) &&
          ((auVar17._4_8_ <
            `protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
            ::__l2::UnitBox.Max.field0_0x0._s_0.Y &&
           (`protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
            ::__l2::UnitBox.Min.field0_0x0._s_0.Z < dVar39)))) &&
         (dVar39 < `protected:_void___cdecl_FBoxFalloff::Evaluator<1>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                   ::__l2::UnitBox.Max.field0_0x0._s_0.Z)) {
        uVar27 = *(uint *)(pFVar8 + lVar28 * 8 + 4);
        fVar4 = this->MinRange;
        dVar34 = (double)CONCAT44(uVar44 & uVar19,uVar25 & uVar18) - dVar22;
        dVar39 = (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar19,
                                  SUB84(dVar39,0) & uVar18) - dVar22;
        dVar13 = (double)CONCAT44(uVar26 & uVar19,SUB84(dVar13,0) & uVar18) - dVar22;
        if (dVar34 <= dVar39) {
          dVar34 = dVar39;
        }
        uVar26 = 0;
        if ((int)uVar27 < param_2->ArrayNum) {
          uVar26 = ~uVar27 >> 0x1f;
        }
        if (dVar34 <= dVar13) {
          dVar34 = dVar13;
        }
        if (__real_0000000000000000 <= dVar34) {
          dVar34 = __real_0000000000000000;
        }
        fVar32 = (float)dVar34 * __real_3ca3d70a;
        fVar5 = this->Magnitude;
        if ((uVar26 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar23)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar27 = uVar27 + param_2->ArrayOffset;
        pTVar9 = param_2->ElementArray;
        uVar26 = 0;
        if ((int)uVar27 < pTVar9->ArrayNum) {
          uVar26 = ~uVar27 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar27 * 4) =
             (fVar4 - fVar32 * (fVar2 - fVar3)) * fVar5;
      }
      uVar24 = uVar24 + 1;
    } while ((int)uVar24 < iVar6);
  }
  return;
}

// Evaluator<2> @ 143f36b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FBoxFalloff::Evaluator<2>(FBoxFalloff *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [12];
  float fVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  bool bVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar54;
  undefined4 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  
  fVar2 = this->MaxRange;
  fVar3 = this->MinRange;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Min.field0_0x0._s_0.X = ___xmm_c049000000000000c049000000000000;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Min.field0_0x0._s_0.Y = _UNK_150b2d308;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.IsValid = '\x01';
    `protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Max.field0_0x0._s_0.Y = ___xmm_40490000000000004049000000000000;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Max.field0_0x0._s_0.Z = _UNK_150b2d2e8;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Min.field0_0x0._s_0.Z = ___xmm_4049000000000000c049000000000000;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Max.field0_0x0._s_0.X = _UNK_150b2d2f8;
    _Init_thread_footer(&`protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  dVar23 = __real_4049000000000000;
  uVar22 = _UNK_15061cc8c;
  uVar21 = _UNK_15061cc88;
  uVar20 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  fVar18 = __real_3f800000;
  iVar6 = (param_1->SampleIndices).ArrayNum;
  uVar25 = 0;
  if (0 < iVar6) {
    do {
      uVar28 = 0;
      if ((int)uVar25 < (param_1->SampleIndices).ArrayNum) {
        uVar28 = ~uVar25 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar24)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar7 = (param_1->SampleIndices).ElementArray;
      uVar27 = (param_1->SampleIndices).ArrayOffset + uVar25;
      uVar28 = 0;
      if ((int)uVar27 < pTVar7->ArrayNum) {
        uVar28 = ~uVar27 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar8 = (pTVar7->AllocatorInstance).Data;
      fVar4 = this->Default;
      lVar26 = (longlong)(int)uVar27;
      uVar28 = *(uint *)(pFVar8 + lVar26 * 8 + 4);
      uVar27 = 0;
      if ((int)uVar28 < param_2->ArrayNum) {
        uVar27 = ~uVar28 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar24)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar28 = uVar28 + param_2->ArrayOffset;
      pTVar9 = param_2->ElementArray;
      uVar27 = 0;
      if ((int)uVar28 < pTVar9->ArrayNum) {
        uVar27 = ~uVar28 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar28 * 4) = fVar4;
      uVar28 = *(uint *)(pFVar8 + lVar26 * 8);
      uVar27 = 0;
      if ((int)uVar28 < (param_1->SamplePositions).ArrayNum) {
        uVar27 = ~uVar28 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar24)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar28 = uVar28 + (param_1->SamplePositions).ArrayOffset;
      pTVar10 = (param_1->SamplePositions).ElementArray;
      uVar27 = 0;
      if ((int)uVar28 < pTVar10->ArrayNum) {
        uVar27 = ~uVar28 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      dVar47 = (this->Transform).Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar48 = (this->Transform).Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      pFVar11 = (pTVar10->AllocatorInstance).Data;
      dVar13 = (this->Transform).Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar34 = (this->Transform).Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      pFVar1 = pFVar11 + (longlong)(int)uVar28 * 0x18;
      dVar33 = *(double *)(pFVar11 + (longlong)(int)uVar28 * 0x18 + 0x10) -
               (this->Transform).Translation.ZW.m128d_f64[0];
      dVar15 = *(double *)pFVar1 - (this->Transform).Translation.XY.m128d_f64[0];
      dVar16 = *(double *)(pFVar1 + 8) - (this->Transform).Translation.XY.m128d_f64[1];
      uVar54 = (undefined4)((ulonglong)dVar16 >> 0x20);
      auVar35._8_4_ = SUB84(dVar13,0);
      auVar35._0_8_ = dVar48;
      auVar35._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar45._8_4_ = SUB84(dVar48,0);
      auVar45._0_8_ = dVar47;
      auVar45._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      auVar41._8_4_ = SUB84(dVar34,0);
      auVar41._0_8_ = dVar13;
      auVar41._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      auVar46 = blendpd(auVar45,auVar41,2);
      auVar56._8_4_ = SUB84(dVar16,0);
      auVar56._0_8_ = dVar15;
      auVar56._12_4_ = uVar54;
      auVar40._8_4_ = SUB84(dVar16,0);
      auVar40._0_8_ = dVar15;
      auVar40._12_4_ = uVar54;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = dVar33;
      auVar41 = blendpd(auVar40,auVar43,2);
      auVar57._0_8_ = auVar56._8_8_ * dVar47 - dVar48 * dVar15;
      auVar57._8_8_ = dVar33 * dVar48 - auVar35._8_8_ * dVar16;
      auVar42._0_8_ = auVar41._0_8_ * dVar13 - dVar33 * auVar46._0_8_;
      auVar42._8_8_ = auVar41._8_8_ * dVar34 - auVar46._8_8_ * 0.0;
      auVar41 = blendpd(auVar57,auVar42,2);
      dVar39 = auVar57._8_8_ + auVar57._8_8_;
      dVar14 = auVar42._0_8_ + auVar42._0_8_;
      uVar54 = SUB84(dVar14,0);
      uVar55 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar58._0_8_ = auVar41._0_8_ + auVar41._0_8_;
      auVar58._8_8_ = auVar41._8_8_ + auVar41._8_8_;
      auVar52._8_4_ = uVar54;
      auVar52._0_8_ = dVar39;
      auVar52._12_4_ = uVar55;
      auVar36._8_4_ = uVar54;
      auVar36._0_8_ = dVar39;
      auVar36._12_4_ = uVar55;
      auVar50._8_4_ = uVar54;
      auVar50._0_8_ = dVar39;
      auVar50._12_4_ = uVar55;
      auVar41 = blendpd(auVar50,auVar58,2);
      auVar53._0_8_ = auVar52._8_8_ * dVar47 - dVar39 * dVar48;
      auVar53._8_8_ = auVar58._0_8_ * dVar48 - auVar36._8_8_ * dVar13;
      auVar37._8_4_ = SUB84(auVar58._8_8_,0);
      auVar37._0_8_ = auVar58._0_8_;
      auVar37._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
      auVar51._0_8_ = auVar41._0_8_ * dVar13 - auVar58._0_8_ * auVar46._0_8_;
      auVar51._8_8_ = auVar41._8_8_ * dVar34 - auVar37._8_8_ * auVar46._8_8_;
      auVar41 = *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64;
      lVar30 = -(ulonglong)
                ((double)CONCAT44(auVar41._4_4_ & uVar20,auVar41._0_4_ & uVar19) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64);
      lVar31 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 4) &
                                  uVar20,*(uint *)(this->Transform).Scale3D.XY.m128d_f64 & uVar19)
                <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar32 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 0xc)
                                  & uVar22,*(uint *)((this->Transform).Scale3D.XY.m128d_f64 + 1) &
                                           uVar21) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar38._8_4_ = SUB84(auVar53._8_8_,0);
      auVar38._0_8_ = auVar53._0_8_;
      auVar38._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
      auVar46._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar46._0_8_ = auVar41._0_8_;
      auVar46._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar46);
      dVar13 = (double)CONCAT44(~(uint)((ulonglong)lVar31 >> 0x20) & auVar43._4_4_,
                                ~(uint)lVar31 & auVar43._0_4_) *
               (dVar39 * dVar34 + dVar15 + auVar38._8_8_);
      uVar28 = (uint)((ulonglong)dVar13 >> 0x20);
      dVar39 = (double)CONCAT44(~(uint)((ulonglong)lVar32 >> 0x20) & auVar43._12_4_,
                                ~(uint)lVar32 & auVar43._8_4_) *
               (dVar14 * dVar34 + dVar16 + auVar51._0_8_);
      uVar27 = SUB84(dVar39,0);
      uVar44 = (uint)((ulonglong)dVar39 >> 0x20);
      auVar46 = blendpd(auVar53,auVar51,2);
      dVar39 = (double)CONCAT44(~(uint)((ulonglong)lVar30 >> 0x20) & auVar41._4_4_,
                                ~(uint)lVar30 & auVar41._0_4_) *
               (auVar58._0_8_ * dVar34 + dVar33 + auVar46._0_8_);
      if (((((`protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
              ::__l2::UnitBox.Min.field0_0x0._s_0.X < dVar13) &&
            (dVar13 < `protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                      ::__l2::UnitBox.Max.field0_0x0._s_0.X)) &&
           (auVar17._4_4_ = uVar27, auVar17._0_4_ = uVar28, auVar17._8_4_ = uVar44,
           `protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
           ::__l2::UnitBox.Min.field0_0x0._s_0.Y < auVar17._4_8_)) &&
          ((auVar17._4_8_ <
            `protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
            ::__l2::UnitBox.Max.field0_0x0._s_0.Y &&
           (`protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
            ::__l2::UnitBox.Min.field0_0x0._s_0.Z < dVar39)))) &&
         (dVar39 < `protected:_void___cdecl_FBoxFalloff::Evaluator<2>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                   ::__l2::UnitBox.Max.field0_0x0._s_0.Z)) {
        uVar29 = *(uint *)(pFVar8 + lVar26 * 8 + 4);
        dVar34 = (double)CONCAT44(uVar44 & uVar20,uVar27 & uVar19) - dVar23;
        dVar39 = (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar20,
                                  SUB84(dVar39,0) & uVar19) - dVar23;
        dVar13 = (double)CONCAT44(uVar28 & uVar20,SUB84(dVar13,0) & uVar19) - dVar23;
        if (dVar34 <= dVar39) {
          dVar34 = dVar39;
        }
        uVar28 = 0;
        if ((int)uVar29 < param_2->ArrayNum) {
          uVar28 = ~uVar29 >> 0x1f;
        }
        if (dVar34 <= dVar13) {
          dVar34 = dVar13;
        }
        if (__real_0000000000000000 <= dVar34) {
          dVar34 = __real_0000000000000000;
        }
        fVar49 = fVar18 - fVar18 / (fVar18 - (float)dVar34 * __real_3ca3d70a);
        fVar4 = this->MinRange;
        fVar5 = this->Magnitude;
        if ((uVar28 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar24)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar29 = uVar29 + param_2->ArrayOffset;
        pTVar9 = param_2->ElementArray;
        uVar28 = 0;
        if ((int)uVar29 < pTVar9->ArrayNum) {
          uVar28 = ~uVar29 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar29 * 4) =
             ((fVar49 + fVar49) * (fVar2 - fVar3) + fVar4) * fVar5;
      }
      uVar25 = uVar25 + 1;
    } while ((int)uVar25 < iVar6);
  }
  return;
}

// Evaluator<3> @ 143f37a60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FBoxFalloff::Evaluator<3>(FBoxFalloff *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [12];
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  double dVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  fVar2 = this->MaxRange;
  fVar3 = this->MinRange;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Min.field0_0x0._s_0.X = ___xmm_c049000000000000c049000000000000;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Min.field0_0x0._s_0.Y = _UNK_150b2d308;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.IsValid = '\x01';
    `protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Max.field0_0x0._s_0.Y = ___xmm_40490000000000004049000000000000;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Max.field0_0x0._s_0.Z = _UNK_150b2d2e8;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Min.field0_0x0._s_0.Z = ___xmm_4049000000000000c049000000000000;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Max.field0_0x0._s_0.X = _UNK_150b2d2f8;
    _Init_thread_footer(&`protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  dVar22 = __real_4049000000000000;
  uVar21 = _UNK_15061cc8c;
  uVar20 = _UNK_15061cc88;
  uVar19 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar6 = (param_1->SampleIndices).ArrayNum;
  uVar24 = 0;
  if (0 < iVar6) {
    do {
      uVar26 = 0;
      if ((int)uVar24 < (param_1->SampleIndices).ArrayNum) {
        uVar26 = ~uVar24 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar7 = (param_1->SampleIndices).ElementArray;
      uVar25 = (param_1->SampleIndices).ArrayOffset + uVar24;
      uVar26 = 0;
      if ((int)uVar25 < pTVar7->ArrayNum) {
        uVar26 = ~uVar25 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar8 = (pTVar7->AllocatorInstance).Data;
      fVar4 = this->Default;
      lVar28 = (longlong)(int)uVar25;
      uVar26 = *(uint *)(pFVar8 + lVar28 * 8 + 4);
      uVar25 = 0;
      if ((int)uVar26 < param_2->ArrayNum) {
        uVar25 = ~uVar26 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar26 = uVar26 + param_2->ArrayOffset;
      pTVar9 = param_2->ElementArray;
      uVar25 = 0;
      if ((int)uVar26 < pTVar9->ArrayNum) {
        uVar25 = ~uVar26 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar26 * 4) = fVar4;
      uVar26 = *(uint *)(pFVar8 + lVar28 * 8);
      uVar25 = 0;
      if ((int)uVar26 < (param_1->SamplePositions).ArrayNum) {
        uVar25 = ~uVar26 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar26 = uVar26 + (param_1->SamplePositions).ArrayOffset;
      pTVar10 = (param_1->SamplePositions).ElementArray;
      uVar25 = 0;
      if ((int)uVar26 < pTVar10->ArrayNum) {
        uVar25 = ~uVar26 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      dVar47 = (this->Transform).Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar48 = (this->Transform).Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      pFVar11 = (pTVar10->AllocatorInstance).Data;
      dVar13 = (this->Transform).Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar34 = (this->Transform).Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      pFVar1 = pFVar11 + (longlong)(int)uVar26 * 0x18;
      dVar33 = *(double *)(pFVar11 + (longlong)(int)uVar26 * 0x18 + 0x10) -
               (this->Transform).Translation.ZW.m128d_f64[0];
      dVar15 = *(double *)pFVar1 - (this->Transform).Translation.XY.m128d_f64[0];
      dVar16 = *(double *)(pFVar1 + 8) - (this->Transform).Translation.XY.m128d_f64[1];
      uVar53 = (undefined4)((ulonglong)dVar16 >> 0x20);
      auVar35._8_4_ = SUB84(dVar13,0);
      auVar35._0_8_ = dVar48;
      auVar35._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar45._8_4_ = SUB84(dVar48,0);
      auVar45._0_8_ = dVar47;
      auVar45._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      auVar41._8_4_ = SUB84(dVar34,0);
      auVar41._0_8_ = dVar13;
      auVar41._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      auVar46 = blendpd(auVar45,auVar41,2);
      auVar55._8_4_ = SUB84(dVar16,0);
      auVar55._0_8_ = dVar15;
      auVar55._12_4_ = uVar53;
      auVar40._8_4_ = SUB84(dVar16,0);
      auVar40._0_8_ = dVar15;
      auVar40._12_4_ = uVar53;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = dVar33;
      auVar41 = blendpd(auVar40,auVar43,2);
      auVar56._0_8_ = auVar55._8_8_ * dVar47 - dVar48 * dVar15;
      auVar56._8_8_ = dVar33 * dVar48 - auVar35._8_8_ * dVar16;
      auVar42._0_8_ = auVar41._0_8_ * dVar13 - dVar33 * auVar46._0_8_;
      auVar42._8_8_ = auVar41._8_8_ * dVar34 - auVar46._8_8_ * 0.0;
      auVar41 = blendpd(auVar56,auVar42,2);
      dVar39 = auVar56._8_8_ + auVar56._8_8_;
      dVar14 = auVar42._0_8_ + auVar42._0_8_;
      uVar53 = SUB84(dVar14,0);
      uVar54 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar57._0_8_ = auVar41._0_8_ + auVar41._0_8_;
      auVar57._8_8_ = auVar41._8_8_ + auVar41._8_8_;
      auVar51._8_4_ = uVar53;
      auVar51._0_8_ = dVar39;
      auVar51._12_4_ = uVar54;
      auVar36._8_4_ = uVar53;
      auVar36._0_8_ = dVar39;
      auVar36._12_4_ = uVar54;
      auVar49._8_4_ = uVar53;
      auVar49._0_8_ = dVar39;
      auVar49._12_4_ = uVar54;
      auVar41 = blendpd(auVar49,auVar57,2);
      auVar52._0_8_ = auVar51._8_8_ * dVar47 - dVar39 * dVar48;
      auVar52._8_8_ = auVar57._0_8_ * dVar48 - auVar36._8_8_ * dVar13;
      auVar37._8_4_ = SUB84(auVar57._8_8_,0);
      auVar37._0_8_ = auVar57._0_8_;
      auVar37._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
      auVar50._0_8_ = auVar41._0_8_ * dVar13 - auVar57._0_8_ * auVar46._0_8_;
      auVar50._8_8_ = auVar41._8_8_ * dVar34 - auVar37._8_8_ * auVar46._8_8_;
      auVar41 = *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64;
      lVar29 = -(ulonglong)
                ((double)CONCAT44(auVar41._4_4_ & uVar19,auVar41._0_4_ & uVar18) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64);
      lVar30 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 4) &
                                  uVar19,*(uint *)(this->Transform).Scale3D.XY.m128d_f64 & uVar18)
                <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar31 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 0xc)
                                  & uVar21,*(uint *)((this->Transform).Scale3D.XY.m128d_f64 + 1) &
                                           uVar20) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar38._8_4_ = SUB84(auVar52._8_8_,0);
      auVar38._0_8_ = auVar52._0_8_;
      auVar38._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
      auVar46._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar46._0_8_ = auVar41._0_8_;
      auVar46._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar46);
      dVar13 = (double)CONCAT44(~(uint)((ulonglong)lVar30 >> 0x20) & auVar43._4_4_,
                                ~(uint)lVar30 & auVar43._0_4_) *
               (dVar39 * dVar34 + dVar15 + auVar38._8_8_);
      uVar26 = (uint)((ulonglong)dVar13 >> 0x20);
      dVar39 = (double)CONCAT44(~(uint)((ulonglong)lVar31 >> 0x20) & auVar43._12_4_,
                                ~(uint)lVar31 & auVar43._8_4_) *
               (dVar14 * dVar34 + dVar16 + auVar50._0_8_);
      uVar25 = SUB84(dVar39,0);
      uVar44 = (uint)((ulonglong)dVar39 >> 0x20);
      auVar46 = blendpd(auVar52,auVar50,2);
      dVar39 = (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar41._4_4_,
                                ~(uint)lVar29 & auVar41._0_4_) *
               (auVar57._0_8_ * dVar34 + dVar33 + auVar46._0_8_);
      if (((((`protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
              ::__l2::UnitBox.Min.field0_0x0._s_0.X < dVar13) &&
            (dVar13 < `protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                      ::__l2::UnitBox.Max.field0_0x0._s_0.X)) &&
           (auVar17._4_4_ = uVar25, auVar17._0_4_ = uVar26, auVar17._8_4_ = uVar44,
           `protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
           ::__l2::UnitBox.Min.field0_0x0._s_0.Y < auVar17._4_8_)) &&
          ((auVar17._4_8_ <
            `protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
            ::__l2::UnitBox.Max.field0_0x0._s_0.Y &&
           (`protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
            ::__l2::UnitBox.Min.field0_0x0._s_0.Z < dVar39)))) &&
         (dVar39 < `protected:_void___cdecl_FBoxFalloff::Evaluator<3>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                   ::__l2::UnitBox.Max.field0_0x0._s_0.Z)) {
        uVar27 = *(uint *)(pFVar8 + lVar28 * 8 + 4);
        dVar34 = (double)CONCAT44(uVar44 & uVar19,uVar25 & uVar18) - dVar22;
        dVar39 = (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar19,
                                  SUB84(dVar39,0) & uVar18) - dVar22;
        dVar13 = (double)CONCAT44(uVar26 & uVar19,SUB84(dVar13,0) & uVar18) - dVar22;
        if (dVar34 <= dVar39) {
          dVar34 = dVar39;
        }
        uVar26 = 0;
        if ((int)uVar27 < param_2->ArrayNum) {
          uVar26 = ~uVar27 >> 0x1f;
        }
        if (dVar34 <= dVar13) {
          dVar34 = dVar13;
        }
        if (__real_0000000000000000 <= dVar34) {
          dVar34 = __real_0000000000000000;
        }
        fVar32 = (fVar2 - fVar3) * ___real_39d1b717;
        fVar4 = this->MinRange;
        fVar5 = this->Magnitude;
        if ((uVar26 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar23)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar27 = uVar27 + param_2->ArrayOffset;
        pTVar9 = param_2->ElementArray;
        uVar26 = 0;
        if ((int)uVar27 < pTVar9->ArrayNum) {
          uVar26 = ~uVar27 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar27 * 4) =
             ((float)dVar34 * (float)dVar34 * fVar32 + fVar4) * fVar5;
      }
      uVar24 = uVar24 + 1;
    } while ((int)uVar24 < iVar6);
  }
  return;
}

// Evaluator<4> @ 143f388f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FBoxFalloff::Evaluator<4>(FBoxFalloff *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [12];
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  double dVar22;
  bool bVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  
  fVar2 = this->MaxRange;
  fVar3 = this->MinRange;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Min.field0_0x0._s_0.X = ___xmm_c049000000000000c049000000000000;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Min.field0_0x0._s_0.Y = _UNK_150b2d308;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.IsValid = '\x01';
    `protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Max.field0_0x0._s_0.Y = ___xmm_40490000000000004049000000000000;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Max.field0_0x0._s_0.Z = _UNK_150b2d2e8;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Min.field0_0x0._s_0.Z = ___xmm_4049000000000000c049000000000000;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Max.field0_0x0._s_0.X = _UNK_150b2d2f8;
    _Init_thread_footer(&`protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  dVar22 = __real_4049000000000000;
  uVar21 = _UNK_15061cc8c;
  uVar20 = _UNK_15061cc88;
  uVar19 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar6 = (param_1->SampleIndices).ArrayNum;
  uVar24 = 0;
  if (0 < iVar6) {
    do {
      uVar27 = 0;
      if ((int)uVar24 < (param_1->SampleIndices).ArrayNum) {
        uVar27 = ~uVar24 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar7 = (param_1->SampleIndices).ElementArray;
      uVar26 = (param_1->SampleIndices).ArrayOffset + uVar24;
      uVar27 = 0;
      if ((int)uVar26 < pTVar7->ArrayNum) {
        uVar27 = ~uVar26 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar8 = (pTVar7->AllocatorInstance).Data;
      fVar31 = this->Default;
      lVar25 = (longlong)(int)uVar26;
      uVar27 = *(uint *)(pFVar8 + lVar25 * 8 + 4);
      uVar26 = 0;
      if ((int)uVar27 < param_2->ArrayNum) {
        uVar26 = ~uVar27 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar27 = uVar27 + param_2->ArrayOffset;
      pTVar9 = param_2->ElementArray;
      uVar26 = 0;
      if ((int)uVar27 < pTVar9->ArrayNum) {
        uVar26 = ~uVar27 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar27 * 4) = fVar31;
      uVar27 = *(uint *)(pFVar8 + lVar25 * 8);
      uVar26 = 0;
      if ((int)uVar27 < (param_1->SamplePositions).ArrayNum) {
        uVar26 = ~uVar27 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar27 = uVar27 + (param_1->SamplePositions).ArrayOffset;
      pTVar10 = (param_1->SamplePositions).ElementArray;
      uVar26 = 0;
      if ((int)uVar27 < pTVar10->ArrayNum) {
        uVar26 = ~uVar27 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      dVar46 = (this->Transform).Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar47 = (this->Transform).Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      pFVar11 = (pTVar10->AllocatorInstance).Data;
      dVar13 = (this->Transform).Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar33 = (this->Transform).Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      pFVar1 = pFVar11 + (longlong)(int)uVar27 * 0x18;
      dVar32 = *(double *)(pFVar11 + (longlong)(int)uVar27 * 0x18 + 0x10) -
               (this->Transform).Translation.ZW.m128d_f64[0];
      dVar15 = *(double *)pFVar1 - (this->Transform).Translation.XY.m128d_f64[0];
      dVar16 = *(double *)(pFVar1 + 8) - (this->Transform).Translation.XY.m128d_f64[1];
      uVar52 = (undefined4)((ulonglong)dVar16 >> 0x20);
      auVar34._8_4_ = SUB84(dVar13,0);
      auVar34._0_8_ = dVar47;
      auVar34._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar44._8_4_ = SUB84(dVar47,0);
      auVar44._0_8_ = dVar46;
      auVar44._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
      auVar40._8_4_ = SUB84(dVar33,0);
      auVar40._0_8_ = dVar13;
      auVar40._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      auVar45 = blendpd(auVar44,auVar40,2);
      auVar54._8_4_ = SUB84(dVar16,0);
      auVar54._0_8_ = dVar15;
      auVar54._12_4_ = uVar52;
      auVar39._8_4_ = SUB84(dVar16,0);
      auVar39._0_8_ = dVar15;
      auVar39._12_4_ = uVar52;
      auVar42._8_8_ = 0;
      auVar42._0_8_ = dVar32;
      auVar40 = blendpd(auVar39,auVar42,2);
      auVar55._0_8_ = auVar54._8_8_ * dVar46 - dVar47 * dVar15;
      auVar55._8_8_ = dVar32 * dVar47 - auVar34._8_8_ * dVar16;
      auVar41._0_8_ = auVar40._0_8_ * dVar13 - dVar32 * auVar45._0_8_;
      auVar41._8_8_ = auVar40._8_8_ * dVar33 - auVar45._8_8_ * 0.0;
      auVar40 = blendpd(auVar55,auVar41,2);
      dVar38 = auVar55._8_8_ + auVar55._8_8_;
      dVar14 = auVar41._0_8_ + auVar41._0_8_;
      uVar52 = SUB84(dVar14,0);
      uVar53 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar56._0_8_ = auVar40._0_8_ + auVar40._0_8_;
      auVar56._8_8_ = auVar40._8_8_ + auVar40._8_8_;
      auVar50._8_4_ = uVar52;
      auVar50._0_8_ = dVar38;
      auVar50._12_4_ = uVar53;
      auVar35._8_4_ = uVar52;
      auVar35._0_8_ = dVar38;
      auVar35._12_4_ = uVar53;
      auVar48._8_4_ = uVar52;
      auVar48._0_8_ = dVar38;
      auVar48._12_4_ = uVar53;
      auVar40 = blendpd(auVar48,auVar56,2);
      auVar51._0_8_ = auVar50._8_8_ * dVar46 - dVar38 * dVar47;
      auVar51._8_8_ = auVar56._0_8_ * dVar47 - auVar35._8_8_ * dVar13;
      auVar36._8_4_ = SUB84(auVar56._8_8_,0);
      auVar36._0_8_ = auVar56._0_8_;
      auVar36._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
      auVar49._0_8_ = auVar40._0_8_ * dVar13 - auVar56._0_8_ * auVar45._0_8_;
      auVar49._8_8_ = auVar40._8_8_ * dVar33 - auVar36._8_8_ * auVar45._8_8_;
      auVar40 = *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64;
      lVar28 = -(ulonglong)
                ((double)CONCAT44(auVar40._4_4_ & uVar19,auVar40._0_4_ & uVar18) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64);
      lVar29 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 4) &
                                  uVar19,*(uint *)(this->Transform).Scale3D.XY.m128d_f64 & uVar18)
                <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar30 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 0xc)
                                  & uVar21,*(uint *)((this->Transform).Scale3D.XY.m128d_f64 + 1) &
                                           uVar20) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar37._8_4_ = SUB84(auVar51._8_8_,0);
      auVar37._0_8_ = auVar51._0_8_;
      auVar37._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
      auVar45._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar45._0_8_ = auVar40._0_8_;
      auVar45._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar45);
      dVar13 = (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar42._4_4_,
                                ~(uint)lVar29 & auVar42._0_4_) *
               (dVar38 * dVar33 + dVar15 + auVar37._8_8_);
      uVar27 = (uint)((ulonglong)dVar13 >> 0x20);
      dVar38 = (double)CONCAT44(~(uint)((ulonglong)lVar30 >> 0x20) & auVar42._12_4_,
                                ~(uint)lVar30 & auVar42._8_4_) *
               (dVar14 * dVar33 + dVar16 + auVar49._0_8_);
      uVar26 = SUB84(dVar38,0);
      uVar43 = (uint)((ulonglong)dVar38 >> 0x20);
      auVar45 = blendpd(auVar51,auVar49,2);
      dVar38 = (double)CONCAT44(~(uint)((ulonglong)lVar28 >> 0x20) & auVar40._4_4_,
                                ~(uint)lVar28 & auVar40._0_4_) *
               (auVar56._0_8_ * dVar33 + dVar32 + auVar45._0_8_);
      if (((((`protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
              ::__l2::UnitBox.Min.field0_0x0._s_0.X < dVar13) &&
            (dVar13 < `protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                      ::__l2::UnitBox.Max.field0_0x0._s_0.X)) &&
           (auVar17._4_4_ = uVar26, auVar17._0_4_ = uVar27, auVar17._8_4_ = uVar43,
           `protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
           ::__l2::UnitBox.Min.field0_0x0._s_0.Y < auVar17._4_8_)) &&
          ((auVar17._4_8_ <
            `protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
            ::__l2::UnitBox.Max.field0_0x0._s_0.Y &&
           (`protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
            ::__l2::UnitBox.Min.field0_0x0._s_0.Z < dVar38)))) &&
         (dVar38 < `protected:_void___cdecl_FBoxFalloff::Evaluator<4>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                   ::__l2::UnitBox.Max.field0_0x0._s_0.Z)) {
        dVar33 = (double)CONCAT44(uVar43 & uVar19,uVar26 & uVar18) - dVar22;
        dVar38 = (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar19,
                                  SUB84(dVar38,0) & uVar18) - dVar22;
        dVar13 = (double)CONCAT44(uVar27 & uVar19,SUB84(dVar13,0) & uVar18) - dVar22;
        if (dVar33 <= dVar38) {
          dVar33 = dVar38;
        }
        if (dVar33 <= dVar13) {
          dVar33 = dVar13;
        }
        if (__real_0000000000000000 <= dVar33) {
          dVar33 = __real_0000000000000000;
        }
        fVar31 = logf(__real_3f800000 - (float)dVar33 * __real_3ca3d70a);
        uVar27 = *(uint *)(pFVar8 + lVar25 * 8 + 4);
        fVar31 = fVar31 * __real_3fb8aa3b;
        uVar26 = 0;
        if ((int)uVar27 < param_2->ArrayNum) {
          uVar26 = ~uVar27 >> 0x1f;
        }
        fVar4 = this->MinRange;
        fVar5 = this->Magnitude;
        if ((uVar26 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar23)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar27 = uVar27 + param_2->ArrayOffset;
        pTVar9 = param_2->ElementArray;
        uVar26 = 0;
        if ((int)uVar27 < pTVar9->ArrayNum) {
          uVar26 = ~uVar27 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar27 * 4) =
             (fVar31 * (fVar2 - fVar3) + fVar4) * fVar5;
      }
      uVar24 = uVar24 + 1;
    } while ((int)uVar24 < iVar6);
  }
  return;
}

// Evaluator<0> @ 143f39810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FBoxFalloff::Evaluator<0>(FBoxFalloff *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  fVar1 = this->MaxRange;
  fVar2 = this->MinRange;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Min.field0_0x0._s_0.X = ___xmm_c049000000000000c049000000000000;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Min.field0_0x0._s_0.Y = _UNK_150b2d308;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.IsValid = '\x01';
    `protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Max.field0_0x0._s_0.Y = ___xmm_40490000000000004049000000000000;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Max.field0_0x0._s_0.Z = _UNK_150b2d2e8;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Min.field0_0x0._s_0.Z = ___xmm_4049000000000000c049000000000000;
    `protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
    ::__l2::UnitBox.Max.field0_0x0._s_0.X = _UNK_150b2d2f8;
    _Init_thread_footer(&`protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar20 = _UNK_15061cc8c;
  uVar19 = _UNK_15061cc88;
  uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar5 = (param_1->SampleIndices).ArrayNum;
  uVar22 = 0;
  if (0 < iVar5) {
    do {
      uVar24 = 0;
      if ((int)uVar22 < (param_1->SampleIndices).ArrayNum) {
        uVar24 = ~uVar22 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar6 = (param_1->SampleIndices).ElementArray;
      uVar23 = (param_1->SampleIndices).ArrayOffset + uVar22;
      uVar24 = 0;
      if ((int)uVar23 < pTVar6->ArrayNum) {
        uVar24 = ~uVar23 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      fVar3 = this->Default;
      lVar25 = (longlong)(int)uVar23;
      uVar24 = *(uint *)(pFVar7 + lVar25 * 8 + 4);
      uVar23 = 0;
      if ((int)uVar24 < param_2->ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar24 = uVar24 + param_2->ArrayOffset;
      pTVar8 = param_2->ElementArray;
      uVar23 = 0;
      if ((int)uVar24 < pTVar8->ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar24 * 4) = fVar3;
      uVar24 = *(uint *)(pFVar7 + lVar25 * 8);
      uVar23 = 0;
      if ((int)uVar24 < (param_1->SamplePositions).ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar9 = (param_1->SamplePositions).ElementArray;
      uVar24 = (param_1->SamplePositions).ArrayOffset + uVar24;
      uVar23 = 0;
      if ((int)uVar24 < pTVar9->ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      dVar41 = (this->Transform).Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar42 = (this->Transform).Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar12 = (this->Transform).Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar34 = (this->Transform).Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      pFVar10 = (pTVar9->AllocatorInstance).Data;
      auVar39._8_4_ = SUB84(dVar42,0);
      auVar39._0_8_ = dVar41;
      auVar39._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      dVar29 = *(double *)(pFVar10 + (longlong)(int)uVar24 * 0x18 + 0x10) -
               (this->Transform).Translation.ZW.m128d_f64[0];
      pFVar10 = pFVar10 + (longlong)(int)uVar24 * 0x18;
      dVar15 = *(double *)pFVar10 - (this->Transform).Translation.XY.m128d_f64[0];
      dVar16 = *(double *)(pFVar10 + 8) - (this->Transform).Translation.XY.m128d_f64[1];
      uVar47 = (undefined4)((ulonglong)dVar16 >> 0x20);
      auVar30._8_4_ = SUB84(dVar12,0);
      auVar30._0_8_ = dVar42;
      auVar30._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar36._8_4_ = SUB84(dVar34,0);
      auVar36._0_8_ = dVar12;
      auVar36._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      auVar40 = blendpd(auVar39,auVar36,2);
      auVar49._8_4_ = SUB84(dVar16,0);
      auVar49._0_8_ = dVar15;
      auVar49._12_4_ = uVar47;
      auVar35._8_4_ = SUB84(dVar16,0);
      auVar35._0_8_ = dVar15;
      auVar35._12_4_ = uVar47;
      auVar38._8_8_ = 0;
      auVar38._0_8_ = dVar29;
      auVar36 = blendpd(auVar35,auVar38,2);
      auVar50._0_8_ = auVar49._8_8_ * dVar41 - dVar42 * dVar15;
      auVar50._8_8_ = dVar29 * dVar42 - auVar30._8_8_ * dVar16;
      auVar37._0_8_ = auVar36._0_8_ * dVar12 - dVar29 * auVar40._0_8_;
      auVar37._8_8_ = auVar36._8_8_ * dVar34 - auVar40._8_8_ * 0.0;
      auVar36 = blendpd(auVar50,auVar37,2);
      dVar13 = auVar50._8_8_ + auVar50._8_8_;
      dVar14 = auVar37._0_8_ + auVar37._0_8_;
      uVar47 = SUB84(dVar14,0);
      uVar48 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar51._0_8_ = auVar36._0_8_ + auVar36._0_8_;
      auVar51._8_8_ = auVar36._8_8_ + auVar36._8_8_;
      auVar45._8_4_ = uVar47;
      auVar45._0_8_ = dVar13;
      auVar45._12_4_ = uVar48;
      auVar31._8_4_ = uVar47;
      auVar31._0_8_ = dVar13;
      auVar31._12_4_ = uVar48;
      auVar43._8_4_ = uVar47;
      auVar43._0_8_ = dVar13;
      auVar43._12_4_ = uVar48;
      auVar36 = blendpd(auVar43,auVar51,2);
      auVar46._0_8_ = auVar45._8_8_ * dVar41 - dVar13 * dVar42;
      auVar46._8_8_ = auVar51._0_8_ * dVar42 - auVar31._8_8_ * dVar12;
      auVar32._8_4_ = SUB84(auVar51._8_8_,0);
      auVar32._0_8_ = auVar51._0_8_;
      auVar32._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
      auVar44._0_8_ = auVar36._0_8_ * dVar12 - auVar51._0_8_ * auVar40._0_8_;
      auVar44._8_8_ = auVar36._8_8_ * dVar34 - auVar32._8_8_ * auVar40._8_8_;
      auVar36 = *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64;
      lVar26 = -(ulonglong)
                ((double)CONCAT44(auVar36._4_4_ & uVar18,auVar36._0_4_ & uVar17) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64);
      lVar27 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 4) &
                                  uVar18,*(uint *)(this->Transform).Scale3D.XY.m128d_f64 & uVar17)
                <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar28 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 0xc)
                                  & uVar20,*(uint *)((this->Transform).Scale3D.XY.m128d_f64 + 1) &
                                           uVar19) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar33._8_4_ = SUB84(auVar46._8_8_,0);
      auVar33._0_8_ = auVar46._0_8_;
      auVar33._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
      auVar40._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar40._0_8_ = auVar36._0_8_;
      auVar40._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar40);
      dVar12 = (double)CONCAT44(~(uint)((ulonglong)lVar27 >> 0x20) & auVar38._4_4_,
                                ~(uint)lVar27 & auVar38._0_4_) *
               (dVar13 * dVar34 + dVar15 + auVar33._8_8_);
      dVar13 = (double)CONCAT44(~(uint)((ulonglong)lVar28 >> 0x20) & auVar38._12_4_,
                                ~(uint)lVar28 & auVar38._8_4_) *
               (dVar14 * dVar34 + dVar16 + auVar44._0_8_);
      auVar40 = blendpd(auVar46,auVar44,2);
      dVar34 = (double)CONCAT44(~(uint)((ulonglong)lVar26 >> 0x20) & auVar36._4_4_,
                                ~(uint)lVar26 & auVar36._0_4_) *
               (auVar51._0_8_ * dVar34 + dVar29 + auVar40._0_8_);
      if (((((`protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
              ::__l2::UnitBox.Min.field0_0x0._s_0.X < dVar12) &&
            (dVar12 < `protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                      ::__l2::UnitBox.Max.field0_0x0._s_0.X)) &&
           (`protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
            ::__l2::UnitBox.Min.field0_0x0._s_0.Y < dVar13)) &&
          ((dVar13 < `protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                     ::__l2::UnitBox.Max.field0_0x0._s_0.Y &&
           (`protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
            ::__l2::UnitBox.Min.field0_0x0._s_0.Z < dVar34)))) &&
         (dVar34 < `protected:_void___cdecl_FBoxFalloff::Evaluator<0>(FFieldContext_const&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'
                   ::__l2::UnitBox.Max.field0_0x0._s_0.Z)) {
        uVar24 = *(uint *)(pFVar7 + lVar25 * 8 + 4);
        fVar3 = this->MinRange;
        uVar23 = 0;
        if ((int)uVar24 < param_2->ArrayNum) {
          uVar23 = ~uVar24 >> 0x1f;
        }
        fVar4 = this->Magnitude;
        if ((uVar23 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar21)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar24 = uVar24 + param_2->ArrayOffset;
        pTVar8 = param_2->ElementArray;
        uVar23 = 0;
        if ((int)uVar24 < pTVar8->ArrayNum) {
          uVar23 = ~uVar24 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar24 * 4) =
             ((fVar1 - fVar2) + fVar3) * fVar4;
      }
      uVar22 = uVar22 + 1;
    } while ((int)uVar22 < iVar5);
  }
  return;
}

// FBoxFalloff @ 143f44e50

FBoxFalloff * __thiscall
FBoxFalloff::FBoxFalloff
          (FBoxFalloff *this,float param_1,float param_2,float param_3,float param_4,
          TTransform<double> *param_5,EFieldFalloffType param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined ***)this = &___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->field_0x8,"");
  *(undefined ***)this = &___7FBoxFalloff__6B_;
  this->Default = param_4;
  this->Magnitude = param_1;
  dVar1 = (param_5->Rotation).XY.m128d_f64[1];
  dVar2 = (param_5->Rotation).ZW.m128d_f64[0];
  dVar3 = (param_5->Rotation).ZW.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_5->Rotation).XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_5->Translation).XY.m128d_f64[0];
  dVar4 = (param_5->Translation).XY.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = dVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_5->Translation).ZW.m128d_f64[0];
  dVar3 = (param_5->Translation).ZW.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = dVar1;
  (this->Transform).Translation.XY.m128d_f64[1] = dVar4;
  dVar1 = (param_5->Scale3D).XY.m128d_f64[0];
  dVar4 = (param_5->Scale3D).XY.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = dVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_5->Scale3D).ZW.m128d_f64[0];
  dVar3 = (param_5->Scale3D).ZW.m128d_f64[1];
  this->Falloff = param_6;
  this->MinRange = param_2;
  this->MaxRange = param_3;
  (this->Transform).Scale3D.XY.m128d_f64[0] = dVar1;
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar4;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = dVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar3;
  return this;
}

// ~FBoxFalloff @ 143f4af50

void __thiscall FBoxFalloff::~FBoxFalloff(FBoxFalloff *this)

{
  *(undefined ***)this = &___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4bc20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FBoxFalloff::operator==(FBoxFalloff *this,FFieldNodeBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x10);
  iVar13 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  iVar14 = (*pcVar1)(this);
  if (iVar13 != iVar14) {
    return false;
  }
  if ((*(uint *)&this->field_0x8 != (param_1->Name).ComparisonIndex.Value) ||
     (uVar15 = 1, *(uint *)&this->field_0xc != (param_1->Name).Number)) {
    uVar15 = 0;
  }
  uVar15 = uVar15 & *(float *)&param_1[1]._padding_ == this->Magnitude;
  uVar11 = 0;
  if (*(float *)((longlong)&param_1[1]._padding_ + 4) == this->MinRange) {
    uVar11 = uVar15;
  }
  bVar2 = (float)param_1[1].Name.ComparisonIndex.Value == this->MaxRange;
  dVar19 = (this->Transform).Translation.ZW.m128d_f64[0] - (double)param_1[5]._padding_;
  dVar21 = (this->Transform).Translation.ZW.m128d_f64[1] - (double)param_1[5].Name;
  dVar23 = (this->Transform).Translation.XY.m128d_f64[0] - (double)param_1[4]._padding_;
  dVar25 = (this->Transform).Translation.XY.m128d_f64[1] - (double)param_1[4].Name;
  lVar18 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar21,0) & _UNK_15061cc88));
  auVar3._8_4_ = (int)lVar18;
  auVar3._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar3._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
  uVar15 = movmskpd(uVar15,auVar3);
  lVar18 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar25,0) & _UNK_15061cc88));
  auVar8._8_4_ = (int)lVar18;
  auVar8._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar8._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
  iVar13 = movmskpd((uint)bVar2,auVar8);
  if ((uVar15 & 0x3fffffff) == 0 && iVar13 == 0) {
    dVar23 = (this->Transform).Rotation.ZW.m128d_f64[0];
    dVar25 = (this->Transform).Rotation.ZW.m128d_f64[1];
    dVar19 = (this->Transform).Rotation.XY.m128d_f64[0];
    dVar21 = (this->Transform).Rotation.XY.m128d_f64[1];
    dVar20 = dVar23 - (double)param_1[3]._padding_;
    dVar22 = dVar25 - (double)param_1[3].Name;
    dVar23 = dVar23 + (double)param_1[3]._padding_;
    dVar25 = dVar25 + (double)param_1[3].Name;
    dVar24 = dVar19 - (double)param_1[2]._padding_;
    dVar26 = dVar21 - (double)param_1[2].Name;
    dVar19 = dVar19 + (double)param_1[2]._padding_;
    dVar21 = dVar21 + (double)param_1[2].Name;
    lVar18 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar22,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar18;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    iVar14 = movmskpd(0,auVar4);
    lVar18 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar26,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar18;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    uVar15 = movmskpd(iVar13,auVar5);
    uVar16 = iVar14 << 2 | uVar15;
    if (uVar16 != 0) {
      lVar18 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar25,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar18;
      auVar6._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar23,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      uVar16 = movmskpd(uVar16,auVar6);
      lVar18 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar21,0) & _UNK_15061cc88));
      auVar9._8_4_ = (int)lVar18;
      auVar9._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar19,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar9._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      uVar15 = movmskpd(uVar15,auVar9);
      if ((uVar16 & 0x3fffffff) != 0 || uVar15 != 0) goto LAB_143f4bde1;
    }
    dVar19 = (this->Transform).Scale3D.ZW.m128d_f64[0] - (double)param_1[7]._padding_;
    dVar21 = (this->Transform).Scale3D.ZW.m128d_f64[1] - (double)param_1[7].Name;
    dVar23 = (this->Transform).Scale3D.XY.m128d_f64[0] - (double)param_1[6]._padding_;
    dVar25 = (this->Transform).Scale3D.XY.m128d_f64[1] - (double)param_1[6].Name;
    lVar18 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar7._8_4_ = (int)lVar18;
    auVar7._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar7._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    uVar16 = movmskpd(0,auVar7);
    lVar18 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar25,0) & _UNK_15061cc88));
    auVar10._8_4_ = (int)lVar18;
    auVar10._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar10._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    iVar13 = movmskpd(uVar15,auVar10);
    if ((uVar16 & 0x3fffffff) == 0 && iVar13 == 0) {
      bVar12 = 1;
      goto LAB_143f4bde3;
    }
  }
LAB_143f4bde1:
  bVar12 = 0;
LAB_143f4bde3:
  bVar17 = 0;
  if (this->Falloff == (EFieldFalloffType)param_1[8]._padding_) {
    bVar17 = (float)param_1[1].Name.Number == this->Default & (byte)uVar11 & bVar2;
  }
  return (bool)(bVar12 & bVar17);
}

// ComputeFieldBounds @ 143f5a5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FBoxFalloff::ComputeFieldBounds
          (FBoxFalloff *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  TMatrix<double> *pTVar3;
  undefined1 auStack_148 [32];
  TVector<double>_u_0 local_128;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  TVector<double>_u_0 local_f0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  (param_1->field0_0x0)._s_0.X = -3.4028234663852886e+38;
  (param_1->field0_0x0)._s_0.Y = -3.4028234663852886e+38;
  (param_1->field0_0x0)._s_0.Z = -3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.X = 3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.Y = 3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.Z = 3.4028234663852886e+38;
  if (this->Default == 0.0) {
    local_128._s_0.X = ___xmm_c049000000000000c049000000000000;
    local_128._s_0.Y = _UNK_150b2d308;
    local_f8 = 1;
    local_108 = ___xmm_40490000000000004049000000000000;
    uStack_100 = _UNK_150b2d2e8;
    local_128._s_0.Z = ___xmm_4049000000000000c049000000000000;
    uStack_110 = _UNK_150b2d2f8;
    pTVar3 = UE::Math::TTransform<double>::ToMatrixWithScale(&this->Transform,&local_b8);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)&local_128._s_0,(TBox<double> *)&local_f0._s_0,pTVar3);
    (param_1->field0_0x0)._s_0.X = local_f0._s_0.X;
    (param_1->field0_0x0)._s_0.Y = local_f0._s_0.Y;
    (param_1->field0_0x0)._s_0.Z = local_f0._s_0.Z;
    (param_2->field0_0x0)._s_0.X = local_d8;
    (param_2->field0_0x0)._s_0.Y = dStack_d0;
    (param_2->field0_0x0)._s_0.Z = local_c8;
  }
  dVar2 = (this->Transform).Translation.XY.m128d_f64[1];
  dVar1 = (this->Transform).Translation.ZW.m128d_f64[0];
  (param_3->field0_0x0)._s_0.X = (this->Transform).Translation.XY.m128d_f64[0];
  (param_3->field0_0x0)._s_0.Y = dVar2;
  (param_3->field0_0x0)._s_0.Z = dVar1;
  return;
}

// EvalMaxMagnitude @ 143f5f4b0

float __thiscall FBoxFalloff::EvalMaxMagnitude(FBoxFalloff *this)

{
  return this->Magnitude;
}

// Evaluate @ 143f62080

void __thiscall
FBoxFalloff::Evaluate(FBoxFalloff *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

{
  EFieldFalloffType EVar1;
  
  EVar1 = this->Falloff;
  if (EVar1 == Field_FallOff_None) {
    Evaluator<0>(this,param_1,param_2);
    return;
  }
  if (EVar1 == Field_Falloff_Linear) {
    Evaluator<1>(this,param_1,param_2);
    return;
  }
  if (EVar1 == Field_Falloff_Inverse) {
    Evaluator<2>(this,param_1,param_2);
    return;
  }
  if (EVar1 != Field_Falloff_Squared) {
    if (EVar1 == Field_Falloff_Logarithmic) {
      Evaluator<4>(this,param_1,param_2);
      return;
    }
    return;
  }
  Evaluator<3>(this,param_1,param_2);
  return;
}

// FillSetupCount @ 143f67320

void __thiscall FBoxFalloff::FillSetupCount(FBoxFalloff *this,int *param_1,int *param_2)

{
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 0x11;
  return;
}

// FillSetupDatas @ 143f68510

void __thiscall
FBoxFalloff::FillSetupDatas
          (FBoxFalloff *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
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
  float local_c4;
  float local_c0 [2];
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
  pfVar1 = &this->Magnitude;
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
  pfVar2 = &this->MinRange;
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
  pfVar1 = &this->MaxRange;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = *pfVar2;
  pFVar3 = (param_2->AllocatorInstance).Data;
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
  pfVar2 = &this->Default;
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
  local_c4 = (float)local_10;
  if ((pFVar3 <= (FScriptContainerElement *)&local_c4) &&
     ((FScriptContainerElement *)&local_c4 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_c4;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_c0[0] = (float)(int)this->Falloff;
  if ((pFVar3 <= (FScriptContainerElement *)local_c0) &&
     ((FScriptContainerElement *)local_c0 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_c0[0];
  return;
}

// NewCopy @ 143f70340

FFieldNodeBase * __thiscall FBoxFalloff::NewCopy(FBoxFalloff *this)

{
  FBoxFalloff *pFVar1;
  TTransform<double> local_68;
  
  pFVar1 = ::operator_new(0x90);
  if (pFVar1 != (FBoxFalloff *)0x0) {
    local_68.Rotation.XY.m128d_f64[0] = (this->Transform).Rotation.XY.m128d_f64[0];
    local_68.Rotation.XY.m128d_f64[1] = (this->Transform).Rotation.XY.m128d_f64[1];
    local_68.Rotation.ZW.m128d_f64[0] = (this->Transform).Rotation.ZW.m128d_f64[0];
    local_68.Rotation.ZW.m128d_f64[1] = (this->Transform).Rotation.ZW.m128d_f64[1];
    local_68.Translation.XY.m128d_f64[0] = (this->Transform).Translation.XY.m128d_f64[0];
    local_68.Translation.XY.m128d_f64[1] = (this->Transform).Translation.XY.m128d_f64[1];
    local_68.Translation.ZW.m128d_f64[0] = (this->Transform).Translation.ZW.m128d_f64[0];
    local_68.Translation.ZW.m128d_f64[1] = (this->Transform).Translation.ZW.m128d_f64[1];
    local_68.Scale3D.XY.m128d_f64[0] = (this->Transform).Scale3D.XY.m128d_f64[0];
    local_68.Scale3D.XY.m128d_f64[1] = (this->Transform).Scale3D.XY.m128d_f64[1];
    local_68.Scale3D.ZW.m128d_f64[0] = (this->Transform).Scale3D.ZW.m128d_f64[0];
    local_68.Scale3D.ZW.m128d_f64[1] = (this->Transform).Scale3D.ZW.m128d_f64[1];
    pFVar1 = FBoxFalloff(pFVar1,this->Magnitude,this->MinRange,this->MaxRange,this->Default,
                         &local_68,this->Falloff);
    return (FFieldNodeBase *)pFVar1;
  }
  return (FFieldNodeBase *)0x0;
}

// SerializationType @ 143f73a30

ESerializationType __thiscall FBoxFalloff::SerializationType(FBoxFalloff *this)

{
  return FieldNode_FBoxFalloff;
}

// Serialize @ 143f73e00

void __thiscall FBoxFalloff::Serialize(FBoxFalloff *this,FArchive *param_1)

{
  float *pfVar1;
  undefined1 *puVar2;
  float *pfVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->field_0x8);
  pfVar1 = &this->Magnitude;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->MinRange;
  puVar2 = &param_1->field_0x2a;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->MaxRange;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->Default;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&this->Transform);
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (undefined1)this->Falloff;
  if ((undefined1 *)plVar4[1] < (undefined1 *)*plVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(undefined1 *)*plVar4;
    *plVar4 = *plVar4 + 1;
  }
  this->Falloff = (uint)(byte)local_res8[0];
  return;
}

